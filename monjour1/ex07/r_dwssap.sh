cat /etc/passwd | grep -v '#' | sed -n '2,${p;n;}' | cut -d":" -f1 | rev | sort -r | awk 'NR>=5 && NR<=10' | tr "\n" "," | sed 's/,/, /g' | rev | sed 's/ ,/./' | rev | tr -d "\n" | sort -r
