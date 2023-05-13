.global _start
.intel_syntax noprefix

_start:

  call print

  // exit
  call exit


loop:
  sub rcx, 1
  cmp rcx, 0
  jg loop
  ret

print:
  push [hello]
  mov rax, 1
  mov rdi, 1
  pop [rsi]
  mov rdx, 2
  syscall
  ret

hello:
  .asciz "Hello, world!\n"

exit:
  mov rax, 60
  mov rdi, 69
  syscall
  ret
