cat /etc/passwd | grep -vwE "#" | awk 'NR % 2 == 0' | cut -d : -f 1 | rev | sort -r | sed -n $FT_LINE1,$FT_LINE2'p' | cat -e | tr "$\n " ", " | sed 's/,././' | tr -d '\n'
