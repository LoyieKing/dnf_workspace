# Inter_GoblinPadChagePwdReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e4354 Inter_GoblinPadChagePwdReward::dispatch_sig  [0x084e4354-0x84e4387] ===
 84e4354:	55                   	push   %ebp
 84e4355:	89 e5                	mov    %esp,%ebp
 84e4357:	83 ec 28             	sub    $0x28,%esp
 84e435a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e435d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4360:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e4364:	74 1a                	je     84e4380 <_ZN29Inter_GoblinPadChagePwdReward12dispatch_sigEP5CUserPci+0x2c>
 84e4366:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e4369:	89 04 24             	mov    %eax,(%esp)
 84e436c:	e8 bd b9 d4 ff       	call   822fd2e <_ZN5CUser6getPadEv>
 84e4371:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e4374:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4378:	89 04 24             	mov    %eax,(%esp)
 84e437b:	e8 38 54 0b 00       	call   85997b8 <_ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser>
 84e4380:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4385:	c9                   	leave
 84e4386:	c3                   	ret
 84e4387:	90                   	nop

```

```c
// Inter_GoblinPadChagePwdReward::dispatch_sig @ 0x84e4354

/* Inter_GoblinPadChagePwdReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GoblinPadChagePwdReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CPad *this;
  
  if (param_2 != (char *)0x0) {
    this = (CPad *)CUser::getPad((CUser *)param_2);
    Sanicova::CPad::SendChagePwdReward(this,(CUser *)param_2);
  }
  return 0;
}

```

