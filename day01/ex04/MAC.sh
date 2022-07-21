ifconfig -a link | grep 'ether' | sed 's/ether//' | tr -d ' ' | tr -d '	'
