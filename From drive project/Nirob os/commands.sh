nasm -f elf -o kasm.o kernel.asm
gcc -m32 -c kernel.c -o kc.o
ld -m elf_i386 -T link.ld -o kernel.bin kasm.o kc.o
qemu-system-i386 -kernel kernel.bin
grub-mkrescue -o Nirob_babu_os.iso Nirob_babu_os/
