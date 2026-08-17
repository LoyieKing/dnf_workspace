# Inter_CancelRestingUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dccb8 Inter_CancelRestingUser::dispatch_sig  [0x084dccb8-0x84dccdd] ===
 84dccb8:	55                   	push   %ebp
 84dccb9:	89 e5                	mov    %esp,%ebp
 84dccbb:	83 ec 18             	sub    $0x18,%esp
 84dccbe:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84dccc2:	74 13                	je     84dccd7 <_ZN23Inter_CancelRestingUser12dispatch_sigEP5CUserPci+0x1f>
 84dccc4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dcccb:	00 
 84dcccc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dcccf:	89 04 24             	mov    %eax,(%esp)
 84dccd2:	e8 67 02 01 00       	call   84ecf3e <_ZN5CUser22setRestingUserRestrictEb>
 84dccd7:	b8 00 00 00 00       	mov    $0x0,%eax
 84dccdc:	c9                   	leave
 84dccdd:	c3                   	ret

```

```c
// Inter_CancelRestingUser::dispatch_sig @ 0x84dccb8

/* Inter_CancelRestingUser::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CancelRestingUser::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (param_2 != (char *)0x0) {
    CUser::setRestingUserRestrict((CUser *)param_2,false);
  }
  return 0;
}

```

