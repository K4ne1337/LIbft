find . -name "*.sh" | xargs -n 1 basename | cut -d '.' -f 1
