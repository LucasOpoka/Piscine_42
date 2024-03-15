cat /etc/passwd | grep -v '^#' | cut -d ":" -f 1 | awk "NR%2==0" | rev | sort -n -r | awk "$FT_LINE1<=NR&&NR<=$FT_LINE2" | tr '\n' ',' | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
