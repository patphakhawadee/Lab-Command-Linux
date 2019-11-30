declare -i sum=0
echo "Enterr number 0 to 20000 : "
read N1
while [ $N1 -gt 20000 ]||[ $N1 -lt 0 ]
do
echo "Number is not Between 0 to 20000 "
echo "Enterr number 0 to 20000 : "
read N1
done
while [ $N1 -gt 0 ]
do
sum=$((sum+(N1 % 10)))
N1=$((N1/10))
done
echo "value :"$sum
exit
