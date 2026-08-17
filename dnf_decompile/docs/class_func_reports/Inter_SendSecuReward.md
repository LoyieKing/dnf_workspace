# Inter_SendSecuReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e5e1e Inter_SendSecuReward::dispatch_sig  [0x084e5e1e-0x84e5e61] ===
 84e5e1e:	55                   	push   %ebp
 84e5e1f:	89 e5                	mov    %esp,%ebp
 84e5e21:	83 ec 28             	sub    $0x28,%esp
 84e5e24:	8b 45 10             	mov    0x10(%ebp),%eax
 84e5e27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e5e2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e5e2d:	8b 00                	mov    (%eax),%eax
 84e5e2f:	85 c0                	test   %eax,%eax
 84e5e31:	75 15                	jne    84e5e48 <_ZN20Inter_SendSecuReward12dispatch_sigEP5CUserPci+0x2a>
 84e5e33:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84e5e3a:	00 
 84e5e3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5e3e:	89 04 24             	mov    %eax,(%esp)
 84e5e41:	e8 e2 24 1a 00       	call   8688328 <_ZN5CUser17AddSecuRewardItemEh>
 84e5e46:	eb 13                	jmp    84e5e5b <_ZN20Inter_SendSecuReward12dispatch_sigEP5CUserPci+0x3d>
 84e5e48:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 84e5e4f:	00 
 84e5e50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5e53:	89 04 24             	mov    %eax,(%esp)
 84e5e56:	e8 cd 24 1a 00       	call   8688328 <_ZN5CUser17AddSecuRewardItemEh>
 84e5e5b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e5e60:	c9                   	leave
 84e5e61:	c3                   	ret

```

```c
// Inter_SendSecuReward::dispatch_sig @ 0x84e5e1e

/* Inter_SendSecuReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SendSecuReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  if (*(int *)param_3 == 0) {
    CUser::AddSecuRewardItem((uchar)param_2);
  }
  else {
    CUser::AddSecuRewardItem((uchar)param_2);
  }
  return 0;
}

```

