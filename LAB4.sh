#593021273-3 Phakhawadee Suwanna
#!/bin/bash
echo "File Permission Name : "
read FileName
ls -l $FileName
echo -n "Set Owner Permission(read=r,write=w,execute=x) : "
read POwner
echo -n "Set Group Permission(read=r,write=w,execute=x) : "
read PGroup
echo -n "Set Other Permission(read=r,write=w,execute=x) : "
read POther
chmod u=$POwner,g=$PGroup,o=$POther $FileName
ls -l $FileName
exit
