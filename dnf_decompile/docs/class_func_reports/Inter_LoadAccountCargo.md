# Inter_LoadAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e24ec Inter_LoadAccountCargo::dispatch_sig  [0x084e24ec-0x84e25cb] ===
 84e24ec:	55                   	push   %ebp
 84e24ed:	89 e5                	mov    %esp,%ebp
 84e24ef:	56                   	push   %esi
 84e24f0:	53                   	push   %ebx
 84e24f1:	83 ec 30             	sub    $0x30,%esp
 84e24f4:	8b 45 10             	mov    0x10(%ebp),%eax
 84e24f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e24fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e24fd:	89 04 24             	mov    %eax,(%esp)
 84e2500:	e8 87 7e bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e2505:	83 f8 01             	cmp    $0x1,%eax
 84e2508:	0f 9e c0             	setle  %al
 84e250b:	84 c0                	test   %al,%al
 84e250d:	74 0a                	je     84e2519 <_ZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPci+0x2d>
 84e250f:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2514:	e9 ab 00 00 00       	jmp    84e25c4 <_ZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPci+0xd8>
 84e2519:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e251c:	89 04 24             	mov    %eax,(%esp)
 84e251f:	e8 0c d7 d4 ff       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 84e2524:	84 c0                	test   %al,%al
 84e2526:	74 6f                	je     84e2597 <_ZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPci+0xab>
 84e2528:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e252b:	89 04 24             	mov    %eax,(%esp)
 84e252e:	e8 3b 7e bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e2533:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e253a:	00 
 84e253b:	89 04 24             	mov    %eax,(%esp)
 84e253e:	e8 08 6b c2 ff       	call   810904b <_Z14NumberToStringji>
 84e2543:	89 c6                	mov    %eax,%esi
 84e2545:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2548:	89 04 24             	mov    %eax,(%esp)
 84e254b:	e8 22 eb c1 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 84e2550:	89 c3                	mov    %eax,%ebx
 84e2552:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e2559:	00 
 84e255a:	c7 44 24 08 e9 51 00 	movl   $0x51e9,0x8(%esp)
 84e2561:	00 
 84e2562:	c7 44 24 04 c0 b8 c8 	movl   $0x8c8b8c0,0x4(%esp)
 84e2569:	08 
 84e256a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e256d:	89 04 24             	mov    %eax,(%esp)
 84e2570:	e8 a3 d1 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e2575:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84e2579:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e257d:	c7 44 24 04 58 9f c8 	movl   $0x8c89f58,0x4(%esp)
 84e2584:	08 
 84e2585:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e2588:	89 04 24             	mov    %eax,(%esp)
 84e258b:	e8 f8 d1 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e2590:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2595:	eb 2d                	jmp    84e25c4 <_ZN22Inter_LoadAccountCargo12dispatch_sigEP5CUserPci+0xd8>
 84e2597:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e259a:	8b 10                	mov    (%eax),%edx
 84e259c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e259f:	8b 40 04             	mov    0x4(%eax),%eax
 84e25a2:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 84e25a5:	83 c1 08             	add    $0x8,%ecx
 84e25a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e25ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e25b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84e25b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e25b7:	89 04 24             	mov    %eax,(%esp)
 84e25ba:	e8 af b2 19 00       	call   867d86e <_ZN5CUser21SetAccountCargoDBDataEP10Inven_Itemjj>
 84e25bf:	b8 00 00 00 00       	mov    $0x0,%eax
 84e25c4:	83 c4 30             	add    $0x30,%esp
 84e25c7:	5b                   	pop    %ebx
 84e25c8:	5e                   	pop    %esi
 84e25c9:	5d                   	pop    %ebp
 84e25ca:	c3                   	ret
 84e25cb:	90                   	nop

```

```c
// Inter_LoadAccountCargo::dispatch_sig @ 0x84e24ec

/* Inter_LoadAccountCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadAccountCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_20 [16];
  uint *local_10;
  
  local_10 = (uint *)param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (1 < iVar2) {
    cVar1 = CUser::IsExistAccountCargo((CUser *)param_2);
    if (cVar1 == '\0') {
      CUser::SetAccountCargoDBData
                ((CUser *)param_2,(Inven_Item *)(local_10 + 2),local_10[1],*local_10);
    }
    else {
      uVar3 = CUser::get_acc_id((CUser *)param_2);
      uVar4 = NumberToString(uVar3,0);
      uVar5 = CUser::get_acc_name((CUser *)param_2);
      cMyTrace::cMyTrace(local_20,
                         "virtual int Inter_LoadAccountCargo::dispatch_sig(CUser*, char*, int)",
                         0x51e9,5);
      cMyTrace::operator()(local_20,"AccountCargo duplicated!(%s(%s))",uVar5,uVar4);
    }
  }
  return 0;
}

```

