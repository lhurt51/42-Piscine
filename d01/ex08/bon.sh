ldapsearch -LLLx "(cn=*bon*)" cn | sed -n 'n;p;n' | wc -l | tr -d " "
