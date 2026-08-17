# APSystem__Inter_EmptyActionPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08124db0 APSystem::Inter_EmptyActionPoint::dispatch_sig  [0x08124db0-0x8124e29] ===
 8124db0:	55                   	push   %ebp
 8124db1:	89 e5                	mov    %esp,%ebp
 8124db3:	83 ec 28             	sub    $0x28,%esp
 8124db6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8124dba:	74 1e                	je     8124dda <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x2a>
 8124dbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124dbf:	89 04 24             	mov    %eax,(%esp)
 8124dc2:	e8 c5 55 fb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8124dc7:	85 c0                	test   %eax,%eax
 8124dc9:	74 0f                	je     8124dda <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x2a>
 8124dcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124dce:	89 04 24             	mov    %eax,(%esp)
 8124dd1:	e8 5c b6 ff ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8124dd6:	85 c0                	test   %eax,%eax
 8124dd8:	75 07                	jne    8124de1 <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x31>
 8124dda:	b8 01 00 00 00       	mov    $0x1,%eax
 8124ddf:	eb 05                	jmp    8124de6 <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x36>
 8124de1:	b8 00 00 00 00       	mov    $0x0,%eax
 8124de6:	84 c0                	test   %al,%al
 8124de8:	74 07                	je     8124df1 <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x41>
 8124dea:	b8 14 02 00 00       	mov    $0x214,%eax
 8124def:	eb 36                	jmp    8124e27 <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x77>
 8124df1:	8b 45 10             	mov    0x10(%ebp),%eax
 8124df4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8124df7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8124dfb:	75 07                	jne    8124e04 <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x54>
 8124dfd:	b8 19 02 00 00       	mov    $0x219,%eax
 8124e02:	eb 23                	jmp    8124e27 <_ZN8APSystem22Inter_EmptyActionPoint12dispatch_sigEP5CUserPci+0x77>
 8124e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124e07:	89 04 24             	mov    %eax,(%esp)
 8124e0a:	e8 7b d5 ff ff       	call   812238a <_ZN8APSystem9CUserProc33SetTodayActionAndCheckMedalRewardEP5CUser>
 8124e0f:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8124e16:	00 
 8124e17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124e1a:	89 04 24             	mov    %eax,(%esp)
 8124e1d:	e8 d2 05 00 00       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 8124e22:	b8 00 00 00 00       	mov    $0x0,%eax
 8124e27:	c9                   	leave
 8124e28:	c3                   	ret
 8124e29:	90                   	nop

```

```c
// APSystem::Inter_EmptyActionPoint::dispatch_sig @ 0x8124db0

/* APSystem::Inter_EmptyActionPoint::dispatch_sig(CUser*, char*, int) */

undefined4 APSystem::Inter_EmptyActionPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (char *)0x0) {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 != 0) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08124de6;
      }
    }
  }
  bVar1 = true;
LAB_08124de6:
  if (bVar1) {
    uVar3 = 0x214;
  }
  else if (param_3 == 0) {
    uVar3 = 0x219;
  }
  else {
    CUserProc::SetTodayActionAndCheckMedalReward((CUser *)param_2);
    CUser::EnableCharacInfo((CUser *)param_2,8);
    uVar3 = 0;
  }
  return uVar3;
}

```

