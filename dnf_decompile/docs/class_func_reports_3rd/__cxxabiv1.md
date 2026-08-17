# __cxxabiv1

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## __terminate

```asm
// === 08724850 __cxxabiv1::__terminate  [0x08724850-0x872487f] ===
 8724850:	55                   	push   %ebp
 8724851:	89 e5                	mov    %esp,%ebp
 8724853:	53                   	push   %ebx
 8724854:	e8 9f e5 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724859:	81 c3 3f 83 c4 00    	add    $0xc4833f,%ebx
 872485f:	83 ec 14             	sub    $0x14,%esp
 8724862:	ff 55 08             	call   *0x8(%ebp)
 8724865:	e8 06 99 95 ff       	call   807e170 <abort@plt>
 872486a:	89 04 24             	mov    %eax,(%esp)
 872486d:	e8 6e 14 00 00       	call   8725ce0 <__cxa_begin_catch>
 8724872:	eb f1                	jmp    8724865 <_ZN10__cxxabiv111__terminateEPFvvE+0x15>
 8724874:	90                   	nop
 8724875:	90                   	nop
 8724876:	90                   	nop
 8724877:	90                   	nop
 8724878:	90                   	nop
 8724879:	90                   	nop
 872487a:	90                   	nop
 872487b:	90                   	nop
 872487c:	90                   	nop
 872487d:	90                   	nop
 872487e:	90                   	nop
 872487f:	90                   	nop

```

```c
// __cxxabiv1::__terminate @ 0x8724850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__terminate(void (*)()) */

void __cxxabiv1::__terminate(_func_void *param_1)

{
                    /* try { // try from 08724862 to 08724864 has its CatchHandler @ 0872486a */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  abort();
}

```

---

## __unexpected

```asm
// === 087248b0 __cxxabiv1::__unexpected  [0x087248b0-0x87248cf] ===
 87248b0:	55                   	push   %ebp
 87248b1:	89 e5                	mov    %esp,%ebp
 87248b3:	53                   	push   %ebx
 87248b4:	e8 3f e5 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87248b9:	81 c3 df 82 c4 00    	add    $0xc482df,%ebx
 87248bf:	83 ec 04             	sub    $0x4,%esp
 87248c2:	ff 55 08             	call   *0x8(%ebp)
 87248c5:	e8 b6 ff ff ff       	call   8724880 <_ZSt9terminatev>
 87248ca:	90                   	nop
 87248cb:	90                   	nop
 87248cc:	90                   	nop
 87248cd:	90                   	nop
 87248ce:	90                   	nop
 87248cf:	90                   	nop

```

```c
// __cxxabiv1::__unexpected @ 0x87248b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__unexpected(void (*)()) */

void __cxxabiv1::__unexpected(_func_void *param_1)

{
  (*param_1)(0x87248b9);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

```

