.global _start
.intel_syntax noprefix

_start:

  push OFFSET hello
  call print

  // exit
  call exit


loop:
  sub rcx, 1
  cmp rcx, 0
  jg loop
  ret

print:
  mov rax, 1
  mov rdi, 1
  mov rsi, [rsp+8]
  mov rdx, 14
  syscall
  ret

hello:
  .asciz "Hello, world!\n"

exit:
  mov rax, 60
  mov rdi, 69
  syscall
  ret
