# Inter_LoadOnlinePreliminaryMemberMatchList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e271e Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig  [0x084e271e-0x84e278f] ===
 84e271e:	55                   	push   %ebp
 84e271f:	89 e5                	mov    %esp,%ebp
 84e2721:	83 ec 18             	sub    $0x18,%esp
 84e2724:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2727:	89 04 24             	mov    %eax,(%esp)
 84e272a:	e8 5d 7c bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e272f:	83 f8 02             	cmp    $0x2,%eax
 84e2732:	0f 9e c0             	setle  %al
 84e2735:	84 c0                	test   %al,%al
 84e2737:	74 07                	je     84e2740 <_ZN42Inter_LoadOnlinePreliminaryMemberMatchList12dispatch_sigEP5CUserPci+0x22>
 84e2739:	b8 00 00 00 00       	mov    $0x0,%eax
 84e273e:	eb 4d                	jmp    84e278d <_ZN42Inter_LoadOnlinePreliminaryMemberMatchList12dispatch_sigEP5CUserPci+0x6f>
 84e2740:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2743:	89 04 24             	mov    %eax,(%esp)
 84e2746:	e8 e7 dc c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e274b:	85 c0                	test   %eax,%eax
 84e274d:	0f 94 c0             	sete   %al
 84e2750:	84 c0                	test   %al,%al
 84e2752:	74 07                	je     84e275b <_ZN42Inter_LoadOnlinePreliminaryMemberMatchList12dispatch_sigEP5CUserPci+0x3d>
 84e2754:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2759:	eb 32                	jmp    84e278d <_ZN42Inter_LoadOnlinePreliminaryMemberMatchList12dispatch_sigEP5CUserPci+0x6f>
 84e275b:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 84e2762:	00 
 84e2763:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2766:	89 04 24             	mov    %eax,(%esp)
 84e2769:	e8 16 ae bf ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84e276e:	8b 10                	mov    (%eax),%edx
 84e2770:	83 c2 04             	add    $0x4,%edx
 84e2773:	8b 0a                	mov    (%edx),%ecx
 84e2775:	8b 55 10             	mov    0x10(%ebp),%edx
 84e2778:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e277c:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e277f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e2783:	89 04 24             	mov    %eax,(%esp)
 84e2786:	ff d1                	call   *%ecx
 84e2788:	b8 00 00 00 00       	mov    $0x0,%eax
 84e278d:	c9                   	leave
 84e278e:	c3                   	ret
 84e278f:	90                   	nop

```

```c
// Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig @ 0x84e271e

/* Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_LoadOnlinePreliminaryMemberMatchList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,5);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
  }
  return 0;
}

```

