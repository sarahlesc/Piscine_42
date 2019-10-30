ifconfig | tr -d '\t' | tr -d ' ' | grep 'ether' |  sed "s/ether//"
