import re

def update_problem_counters(readme_file):
    with open(readme_file, "r") as file:
        content = file.read()

    # Regex to match the problem tables
    table_pattern = re.compile(
        r"## (?P<section>.*?)\n\n\|.*?\|\n\|.*?\|\n(?P<rows>(\|.*?\|.*?\|.*?\|.*?\|.*?\|.*?\|.*?\|\n)+)"
    )
    difficulty_pattern = re.compile(r"\|.*?\|.*?\|.*?\|.*?\|.*?\| (.*?) \|.*?\|")

    # Counter dictionary
    counters = {}

    for match in table_pattern.finditer(content):
        section = match.group("section")
        rows = match.group("rows")

        if section not in counters:
            counters[section] = {}

        for row in rows.splitlines():
            difficulty_match = difficulty_pattern.search(row)
            if difficulty_match:
                difficulty = difficulty_match.group(1).strip()
                counters[section][difficulty] = counters[section].get(difficulty, 0) + 1

    # Create a counter widget
    counter_widget = "### Problem Counters\n\n"
    for section, difficulties in counters.items():
        counter_widget += f"#### {section}\n"
        for difficulty, count in difficulties.items():
            counter_widget += f"- {difficulty}: {count}\n"
        counter_widget += "\n"

    # Add the counter widget to the README
    if "### Problem Counters" in content:
        content = re.sub(r"### Problem Counters\n\n.*?(?=\n##)", counter_widget, content, flags=re.DOTALL)
    else:
        content += "\n" + counter_widget

    # Write back to the file
    with open(readme_file, "w") as file:
        file.write(content)

# Call the function with the README file path
update_problem_counters("README.md")
