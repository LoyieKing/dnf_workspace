# Inter_LoadOnlinePreliminaryMember

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e263e Inter_LoadOnlinePreliminaryMember::dispatch_sig  [0x084e263e-0x84e26af] ===
 84e263e:	55                   	push   %ebp
 84e263f:	89 e5                	mov    %esp,%ebp
 84e2641:	83 ec 18             	sub    $0x18,%esp
 84e2644:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2647:	89 04 24             	mov    %eax,(%esp)
 84e264a:	e8 3d 7d bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e264f:	83 f8 02             	cmp    $0x2,%eax
 84e2652:	0f 9e c0             	setle  %al
 84e2655:	84 c0                	test   %al,%al
 84e2657:	74 07                	je     84e2660 <_ZN33Inter_LoadOnlinePreliminaryMember12dispatch_sigEP5CUserPci+0x22>
 84e2659:	b8 00 00 00 00       	mov    $0x0,%eax
 84e265e:	eb 4d                	jmp    84e26ad <_ZN33Inter_LoadOnlinePreliminaryMember12dispatch_sigEP5CUserPci+0x6f>
 84e2660:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2663:	89 04 24             	mov    %eax,(%esp)
 84e2666:	e8 c7 dd c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e266b:	85 c0                	test   %eax,%eax
 84e266d:	0f 94 c0             	sete   %al
 84e2670:	84 c0                	test   %al,%al
 84e2672:	74 07                	je     84e267b <_ZN33Inter_LoadOnlinePreliminaryMember12dispatch_sigEP5CUserPci+0x3d>
 84e2674:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2679:	eb 32                	jmp    84e26ad <_ZN33Inter_LoadOnlinePreliminaryMember12dispatch_sigEP5CUserPci+0x6f>
 84e267b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e2682:	00 
 84e2683:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2686:	89 04 24             	mov    %eax,(%esp)
 84e2689:	e8 f6 ae bf ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84e268e:	8b 10                	mov    (%eax),%edx
 84e2690:	83 c2 04             	add    $0x4,%edx
 84e2693:	8b 0a                	mov    (%edx),%ecx
 84e2695:	8b 55 10             	mov    0x10(%ebp),%edx
 84e2698:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e269c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e269f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e26a3:	89 04 24             	mov    %eax,(%esp)
 84e26a6:	ff d1                	call   *%ecx
 84e26a8:	b8 00 00 00 00       	mov    $0x0,%eax
 84e26ad:	c9                   	leave
 84e26ae:	c3                   	ret
 84e26af:	90                   	nop

```

```c
// Inter_LoadOnlinePreliminaryMember::dispatch_sig @ 0x84e263e

/* Inter_LoadOnlinePreliminaryMember::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadOnlinePreliminaryMember::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,4);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
  }
  return 0;
}

```

