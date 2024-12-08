n0=10
n1=1
n2=2
n3=3
n4=4
n5=10

echo "plz enter string"
string=""
read string

until [ $n5 -lt 1 ]
do echo "0" ; ((n5=$n5-1)) 
done
case $string in
	"this is true"|"true")echo "TRUE" ;; 
	"this is nottrue"|"false")echo "FALSE";;
esac
{ n1=3 
  echo $n1
  echo $$
}
foo(){
	echo "this is function"
	echo $n3
	echo $0
	echo $1
	echo $2

} 
foo
string1=$(foo he he )
echo $string1

	
