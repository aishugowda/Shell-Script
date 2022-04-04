echo -n "enter a file name:"
read filename
if [ -f $filename ]
then
n=20
while read line
do
ll=`expr length "$line"`
if [ $ll -le $n ]
then
echo $line
else
s=1
e=$n
echo "`echo $line | cut -c $s-$e` \\"
rcl=`expr $ll -$e1`
while [ $rcl -ge $n`
echo "`echo $line | cut -c $se-$e` \\"
rcl=`expr $ll -$s`
done
s=`expr $e + 1`
echo $line | cut -c $s-
fi
done < $filename
else
echo "$filename : No such file found"
fi

