find . -type f -name "*.sh" | rev | cut -d . -f 2 | cut -d / -f 1 | rev
