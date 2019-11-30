
#!/bin/bash
#593020467-5 Sitti Suttitum

function FileExt {
 ext2=$(echo $fname | cut -d '.' -f 2)
 return $ext2
}
echo -n "Enter filename : "
read fname
FileExt $fname
echo "the extension for $fname is : $ext2"
exit 0

