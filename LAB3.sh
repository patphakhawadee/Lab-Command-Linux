
#!/bin/bash
echo "Please Enter Password : "
read -s password
if [ $password -eq 1234 ]; then
echo -n "You are in Program!!"
ifconfig -a
echo -n "What would you say with another accout : "
read text
echo -e $text | wall
echo -n "Sending Success!!"
exit
else
echo -n "Password Incorrect!! Program is stopping"
exit
fi

done
