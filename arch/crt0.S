#define MAGIC 0x1badb002
#define FLAGS 0x07

.section .multiboot
  .align 4
  .long MAGIC
  .long FLAGS
  .long -(MAGIC + FLAGS)


.global kernel_entry
kernel_entry:
  mov $0x300000, %esp
  push %ebx /* multiboot_info_t* */
  push %eax /* magic */
  call kernel_main
  /* because I'm paranoid */
  loop:
    hlt
     jmp loop
