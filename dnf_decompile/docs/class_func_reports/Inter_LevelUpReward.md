# Inter_LevelUpReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4f56 Inter_LevelUpReward::dispatch_sig  [0x084e4f56-0x84e4fb5] ===
 84e4f56:	55                   	push   %ebp
 84e4f57:	89 e5                	mov    %esp,%ebp
 84e4f59:	83 ec 28             	sub    $0x28,%esp
 84e4f5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4f5f:	89 04 24             	mov    %eax,(%esp)
 84e4f62:	e8 25 54 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e4f67:	85 c0                	test   %eax,%eax
 84e4f69:	0f 94 c0             	sete   %al
 84e4f6c:	84 c0                	test   %al,%al
 84e4f6e:	74 07                	je     84e4f77 <_ZN19Inter_LevelUpReward12dispatch_sigEP5CUserPci+0x21>
 84e4f70:	b8 a6 62 00 00       	mov    $0x62a6,%eax
 84e4f75:	eb 3c                	jmp    84e4fb3 <_ZN19Inter_LevelUpReward12dispatch_sigEP5CUserPci+0x5d>
 84e4f77:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84e4f7e:	00 
 84e4f7f:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4f82:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4f86:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84e4f89:	89 04 24             	mov    %eax,(%esp)
 84e4f8c:	e8 0f 89 b9 ff       	call   807d8a0 <memcpy@plt>
 84e4f91:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4f94:	83 c0 04             	add    $0x4,%eax
 84e4f97:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 84e4f9e:	00 
 84e4f9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4fa3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84e4fa6:	89 04 24             	mov    %eax,(%esp)
 84e4fa9:	e8 f2 88 b9 ff       	call   807d8a0 <memcpy@plt>
 84e4fae:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4fb3:	c9                   	leave
 84e4fb4:	c3                   	ret
 84e4fb5:	90                   	nop

```

```c
// Inter_LevelUpReward::dispatch_sig @ 0x84e4f56

/* Inter_LevelUpReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LevelUpReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_14 [4];
  undefined1 local_10 [12];
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 0) {
    uVar2 = 0x62a6;
  }
  else {
    memcpy(local_10,(void *)param_3,4);
    memcpy(local_14,(void *)(param_3 + 4),4);
    uVar2 = 0;
  }
  return uVar2;
}

```

