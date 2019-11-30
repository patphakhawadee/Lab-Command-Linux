#!/bin/bash
while [ true ]; do
echo "===================== Menu ===================="

echo "1.  Show my user"
echo "2.  Active user"
echo "3.  All file and detail in directory home"
echo "4.  My process"
echo "5.  This month's  calender"
echo "6.  This year's calender"
echo "7.  Exit"
echo -n "Select Menu number :"
read input
if [ $input -eq 1 ]; then
id -un
elif [ $input -eq 2 ]; then
who
elif [ $input -eq 3 ]; then
ls /home  -l | more
elif [ $input -eq 4 ]; then
ps -ef
elif [ $input -eq 5 ]; then
cal
elif [ $input -eq 6 ]; then
cal -y
elif [ $input -eq 7 ]; then
exit
else
echo "!!!!!!!!!!Please select again!!!!!!!!!!!!"
fi
continue
done



