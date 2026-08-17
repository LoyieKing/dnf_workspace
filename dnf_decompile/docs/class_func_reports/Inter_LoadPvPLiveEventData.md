# Inter_LoadPvPLiveEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e25cc Inter_LoadPvPLiveEventData::dispatch_sig  [0x084e25cc-0x84e263d] ===
 84e25cc:	55                   	push   %ebp
 84e25cd:	89 e5                	mov    %esp,%ebp
 84e25cf:	83 ec 18             	sub    $0x18,%esp
 84e25d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e25d5:	89 04 24             	mov    %eax,(%esp)
 84e25d8:	e8 af 7d bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e25dd:	83 f8 02             	cmp    $0x2,%eax
 84e25e0:	0f 9e c0             	setle  %al
 84e25e3:	84 c0                	test   %al,%al
 84e25e5:	74 07                	je     84e25ee <_ZN26Inter_LoadPvPLiveEventData12dispatch_sigEP5CUserPci+0x22>
 84e25e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84e25ec:	eb 4d                	jmp    84e263b <_ZN26Inter_LoadPvPLiveEventData12dispatch_sigEP5CUserPci+0x6f>
 84e25ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e25f1:	89 04 24             	mov    %eax,(%esp)
 84e25f4:	e8 39 de c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e25f9:	85 c0                	test   %eax,%eax
 84e25fb:	0f 94 c0             	sete   %al
 84e25fe:	84 c0                	test   %al,%al
 84e2600:	74 07                	je     84e2609 <_ZN26Inter_LoadPvPLiveEventData12dispatch_sigEP5CUserPci+0x3d>
 84e2602:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2607:	eb 32                	jmp    84e263b <_ZN26Inter_LoadPvPLiveEventData12dispatch_sigEP5CUserPci+0x6f>
 84e2609:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84e2610:	00 
 84e2611:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2614:	89 04 24             	mov    %eax,(%esp)
 84e2617:	e8 68 af bf ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84e261c:	8b 10                	mov    (%eax),%edx
 84e261e:	83 c2 04             	add    $0x4,%edx
 84e2621:	8b 0a                	mov    (%edx),%ecx
 84e2623:	8b 55 10             	mov    0x10(%ebp),%edx
 84e2626:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e262a:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e262d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e2631:	89 04 24             	mov    %eax,(%esp)
 84e2634:	ff d1                	call   *%ecx
 84e2636:	b8 00 00 00 00       	mov    $0x0,%eax
 84e263b:	c9                   	leave
 84e263c:	c3                   	ret
 84e263d:	90                   	nop

```

```c
// Inter_LoadPvPLiveEventData::dispatch_sig @ 0x84e25cc

/* Inter_LoadPvPLiveEventData::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPvPLiveEventData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar1 != 0)) {
    piVar2 = (int *)CUser::GetCharacExpandData((CUser *)param_2,3);
    (**(code **)(*piVar2 + 4))(piVar2,param_2,param_3);
  }
  return 0;
}

```

