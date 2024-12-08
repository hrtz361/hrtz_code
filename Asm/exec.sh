echo "asm file name:"

read a
nasm -f elf32 $a -o $a.o
ld -m elf_i386 $a.o -o $a
echo "EXEC:"
./$a 

