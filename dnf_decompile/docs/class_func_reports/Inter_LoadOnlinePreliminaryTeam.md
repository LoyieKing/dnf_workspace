# Inter_LoadOnlinePreliminaryTeam

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e26b0 Inter_LoadOnlinePreliminaryTeam::dispatch_sig  [0x084e26b0-0x84e271d] ===
 84e26b0:	55                   	push   %ebp
 84e26b1:	89 e5                	mov    %esp,%ebp
 84e26b3:	83 ec 18             	sub    $0x18,%esp
 84e26b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e26b9:	89 04 24             	mov    %eax,(%esp)
 84e26bc:	e8 cb 7c bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e26c1:	83 f8 02             	cmp    $0x2,%eax
 84e26c4:	0f 9e c0             	setle  %al
 84e26c7:	84 c0                	test   %al,%al
 84e26c9:	74 07                	je     84e26d2 <_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci+0x22>
 84e26cb:	b8 00 00 00 00       	mov    $0x0,%eax
 84e26d0:	eb 49                	jmp    84e271b <_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci+0x6b>
 84e26d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e26d5:	89 04 24             	mov    %eax,(%esp)
 84e26d8:	e8 55 dd c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e26dd:	85 c0                	test   %eax,%eax
 84e26df:	0f 94 c0             	sete   %al
 84e26e2:	84 c0                	test   %al,%al
 84e26e4:	74 07                	je     84e26ed <_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci+0x3d>
 84e26e6:	b8 00 00 00 00       	mov    $0x0,%eax
 84e26eb:	eb 2e                	jmp    84e271b <_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci+0x6b>
 84e26ed:	a1 88 f7 41 09       	mov    0x941f788,%eax
 84e26f2:	8b 55 10             	mov    0x10(%ebp),%edx
 84e26f5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e26f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e26fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e2700:	89 04 24             	mov    %eax,(%esp)
 84e2703:	e8 c0 60 0a 00       	call   85887c8 <_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnEnterUserEP5CUserPc>
 84e2708:	83 f0 01             	xor    $0x1,%eax
 84e270b:	84 c0                	test   %al,%al
 84e270d:	74 07                	je     84e2716 <_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci+0x66>
 84e270f:	b8 19 52 00 00       	mov    $0x5219,%eax
 84e2714:	eb 05                	jmp    84e271b <_ZN31Inter_LoadOnlinePreliminaryTeam12dispatch_sigEP5CUserPci+0x6b>
 84e2716:	b8 00 00 00 00       	mov    $0x0,%eax
 84e271b:	c9                   	leave
 84e271c:	c3                   	ret
 84e271d:	90                   	nop

```

```c
// Inter_LoadOnlinePreliminaryTeam::dispatch_sig @ 0x84e26b0

/* Inter_LoadOnlinePreliminaryTeam::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadOnlinePreliminaryTeam::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      cVar1 = online_preliminary::COnlinePreliminaryTeamMgr::OnEnterUser
                        (GlobalData::s_onlinePreliminaryTeamMgr,(CUser *)param_2,(char *)param_3);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x5219;
      }
    }
  }
  return uVar3;
}

```

