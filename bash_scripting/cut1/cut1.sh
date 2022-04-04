while read line
do
  echo $line | cut -c 3
done

#or

#cut -c3 $1