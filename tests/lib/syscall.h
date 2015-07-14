#ifndef _SYSCALL_H
#define _SYSCALL_H_

#define SYSCALL_INT_NUM 0x80
#define SYSCALL_INT "int $0x80\n"

#define SYSCALL(i,arg) \
  __asm__ ( \
      "mov %0, %%ebx \n"  \
      "mov %1, %%eax \n" \
      SYSCALL_INT \
      : \
      : "b"(arg), "i"(i) \
      )



#endif /* _SYSCALL_H */
