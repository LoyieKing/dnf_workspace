# yaSSL__yassl_int_cpp_local2

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetSelf

```asm
// === 0874f7b0 yaSSL::yassl_int_cpp_local2::GetSelf  [0x0874f7b0-0x874f7cf] ===
 874f7b0:	55                   	push   %ebp
 874f7b1:	89 e5                	mov    %esp,%ebp
 874f7b3:	53                   	push   %ebx
 874f7b4:	e8 3f 36 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f7b9:	81 c3 df d3 c1 00    	add    $0xc1d3df,%ebx
 874f7bf:	83 ec 04             	sub    $0x4,%esp
 874f7c2:	e8 79 ef 92 ff       	call   807e740 <pthread_self@plt>
 874f7c7:	83 c4 04             	add    $0x4,%esp
 874f7ca:	5b                   	pop    %ebx
 874f7cb:	5d                   	pop    %ebp
 874f7cc:	c3                   	ret
 874f7cd:	90                   	nop
 874f7ce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::yassl_int_cpp_local2::GetSelf @ 0x874f7b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::yassl_int_cpp_local2::GetSelf() */

void yaSSL::yassl_int_cpp_local2::GetSelf(void)

{
  pthread_self();
  return;
}

```

