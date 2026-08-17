# Inter_UserRepel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ce5c4 Inter_UserRepel::dispatch_sig  [0x084ce5c4-0x84ce5f3] ===
 84ce5c4:	55                   	push   %ebp
 84ce5c5:	89 e5                	mov    %esp,%ebp
 84ce5c7:	83 ec 18             	sub    $0x18,%esp
 84ce5ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ce5d1:	00 
 84ce5d2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84ce5d9:	00 
 84ce5da:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 84ce5e1:	00 
 84ce5e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce5e5:	89 04 24             	mov    %eax,(%esp)
 84ce5e8:	e8 07 a4 17 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84ce5ed:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce5f2:	c9                   	leave
 84ce5f3:	c3                   	ret

```

```c
// Inter_UserRepel::dispatch_sig @ 0x84ce5c4

/* Inter_UserRepel::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UserRepel::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser::DisConnSig((CUser *)param_2,0x14,1,0);
  return 0;
}

```

