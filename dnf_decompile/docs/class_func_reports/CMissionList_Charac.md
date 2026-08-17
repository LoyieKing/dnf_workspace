# CMissionList_Charac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 35

---

## ClearMission

```asm
// === 085e641c CMissionList_Charac::ClearMission  [0x085e641c-0x85e65d9] ===
 85e641c:	55                   	push   %ebp
 85e641d:	89 e5                	mov    %esp,%ebp
 85e641f:	56                   	push   %esi
 85e6420:	53                   	push   %ebx
 85e6421:	83 ec 50             	sub    $0x50,%esp
 85e6424:	8b 45 10             	mov    0x10(%ebp),%eax
 85e6427:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 85e642b:	0f bf 5d c4          	movswl -0x3c(%ebp),%ebx
 85e642f:	e8 67 5d ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e6434:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e6438:	89 04 24             	mov    %eax,(%esp)
 85e643b:	e8 46 96 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e6440:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e6443:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85e6447:	75 43                	jne    85e648c <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x70>
 85e6449:	0f bf 5d c4          	movswl -0x3c(%ebp),%ebx
 85e644d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e6454:	00 
 85e6455:	c7 44 24 08 97 07 00 	movl   $0x797,0x8(%esp)
 85e645c:	00 
 85e645d:	c7 44 24 04 e0 39 cc 	movl   $0x8cc39e0,0x4(%esp)
 85e6464:	08 
 85e6465:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85e6468:	89 04 24             	mov    %eax,(%esp)
 85e646b:	e8 a8 92 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e6470:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85e6474:	c7 44 24 04 1c 2d cc 	movl   $0x8cc2d1c,0x4(%esp)
 85e647b:	08 
 85e647c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85e647f:	89 04 24             	mov    %eax,(%esp)
 85e6482:	e8 01 93 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e6487:	e9 44 01 00 00       	jmp    85e65d0 <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x1b4>
 85e648c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e648f:	89 04 24             	mov    %eax,(%esp)
 85e6492:	e8 7b 04 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e6497:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e649a:	83 7d f4 06          	cmpl   $0x6,-0xc(%ebp)
 85e649e:	75 0a                	jne    85e64aa <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x8e>
 85e64a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e64a3:	c6 80 4e 01 00 00 01 	movb   $0x1,0x14e(%eax)
 85e64aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e64ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85e64b0:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e64b5:	66 3b 45 c4          	cmp    -0x3c(%ebp),%ax
 85e64b9:	74 55                	je     85e6510 <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0xf4>
 85e64bb:	0f bf 75 c4          	movswl -0x3c(%ebp),%esi
 85e64bf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e64c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e64c5:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e64ca:	0f bf d8             	movswl %ax,%ebx
 85e64cd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e64d4:	00 
 85e64d5:	c7 44 24 08 a5 07 00 	movl   $0x7a5,0x8(%esp)
 85e64dc:	00 
 85e64dd:	c7 44 24 04 e0 39 cc 	movl   $0x8cc39e0,0x4(%esp)
 85e64e4:	08 
 85e64e5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e64e8:	89 04 24             	mov    %eax,(%esp)
 85e64eb:	e8 28 92 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e64f0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85e64f4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85e64f8:	c7 44 24 04 48 2d cc 	movl   $0x8cc2d48,0x4(%esp)
 85e64ff:	08 
 85e6500:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85e6503:	89 04 24             	mov    %eax,(%esp)
 85e6506:	e8 7d 92 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e650b:	e9 c0 00 00 00       	jmp    85e65d0 <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x1b4>
 85e6510:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6513:	89 04 24             	mov    %eax,(%esp)
 85e6516:	e8 a9 26 ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e651b:	0f bf 55 c4          	movswl -0x3c(%ebp),%edx
 85e651f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6522:	8d 88 28 01 00 00    	lea    0x128(%eax),%ecx
 85e6528:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e652b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e652f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e6533:	89 04 24             	mov    %eax,(%esp)
 85e6536:	e8 69 1c 00 00       	call   85e81a4 <_ZNSt6bitsetILj256EEixEj>
 85e653b:	83 ec 04             	sub    $0x4,%esp
 85e653e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e6545:	00 
 85e6546:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e6549:	89 04 24             	mov    %eax,(%esp)
 85e654c:	e8 87 1c 00 00       	call   85e81d8 <_ZNSt6bitsetILj256EE9referenceaSEb>
 85e6551:	eb 1b                	jmp    85e656e <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x152>
 85e6553:	89 d3                	mov    %edx,%ebx
 85e6555:	89 c6                	mov    %eax,%esi
 85e6557:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e655a:	89 04 24             	mov    %eax,(%esp)
 85e655d:	e8 70 1c 00 00       	call   85e81d2 <_ZNSt6bitsetILj256EE9referenceD1Ev>
 85e6562:	89 f0                	mov    %esi,%eax
 85e6564:	89 da                	mov    %ebx,%edx
 85e6566:	89 04 24             	mov    %eax,(%esp)
 85e6569:	e8 e2 d1 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e656e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e6571:	89 04 24             	mov    %eax,(%esp)
 85e6574:	e8 59 1c 00 00       	call   85e81d2 <_ZNSt6bitsetILj256EE9referenceD1Ev>
 85e6579:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e657c:	c1 e0 03             	shl    $0x3,%eax
 85e657f:	03 45 08             	add    0x8(%ebp),%eax
 85e6582:	83 c0 05             	add    $0x5,%eax
 85e6585:	89 04 24             	mov    %eax,(%esp)
 85e6588:	e8 29 03 00 00       	call   85e68b6 <_ZN11MissionInfo5clearEv>
 85e658d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e6590:	8b 00                	mov    (%eax),%eax
 85e6592:	83 c0 2c             	add    $0x2c,%eax
 85e6595:	8b 10                	mov    (%eax),%edx
 85e6597:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e659a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e659e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e65a1:	89 04 24             	mov    %eax,(%esp)
 85e65a4:	ff d2                	call   *%edx
 85e65a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e65a9:	89 04 24             	mov    %eax,(%esp)
 85e65ac:	e8 93 03 00 00       	call   85e6944 <_ZNK8CMission15GetMissionGradeEv>
 85e65b1:	83 f8 02             	cmp    $0x2,%eax
 85e65b4:	0f 94 c0             	sete   %al
 85e65b7:	84 c0                	test   %al,%al
 85e65b9:	75 14                	jne    85e65cf <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x1b3>
 85e65bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e65be:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e65c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e65c5:	89 04 24             	mov    %eax,(%esp)
 85e65c8:	e8 7f e8 ff ff       	call   85e4e4c <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser>
 85e65cd:	eb 01                	jmp    85e65d0 <_ZN19CMissionList_Charac12ClearMissionER5CUsers+0x1b4>
 85e65cf:	90                   	nop
 85e65d0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e65d3:	83 c4 00             	add    $0x0,%esp
 85e65d6:	5b                   	pop    %ebx
 85e65d7:	5e                   	pop    %esi
 85e65d8:	5d                   	pop    %ebp
 85e65d9:	c3                   	ret

```

```c
// CMissionList_Charac::ClearMission @ 0x85e641c

/* CMissionList_Charac::ClearMission(CUser&, short) */

void __thiscall
CMissionList_Charac::ClearMission(CMissionList_Charac *this,CUser *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  reference local_1c [8];
  CMission *local_14;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_14 = (CMission *)CDataManager::find_mission(iVar2);
  if (local_14 == (CMission *)0x0) {
    cMyTrace::cMyTrace(local_3c,"void CMissionList_Charac::ClearMission(CUser&, short int)",0x797,5)
    ;
    cMyTrace::operator()(local_3c,"[@missionSystem] InvalidIndex: <index : %d>",(int)param_2);
  }
  else {
    local_10 = CMission::GetMissionKind(local_14);
    if (local_10 == 6) {
      this[0x14e] = (CMissionList_Charac)0x1;
    }
    if (*(short *)(this + local_10 * 8 + 7) == param_2) {
      charac_expand::CData::alter((CData *)this);
      iVar2 = (int)param_2;
      std::bitset<256u>::operator[]((uint)local_1c);
                    /* try { // try from 085e654c to 085e6550 has its CatchHandler @ 085e6553 */
      std::bitset<256u>::reference::operator=(local_1c,true);
      std::bitset<256u>::reference::~reference(local_1c);
      MissionInfo::clear((MissionInfo *)(this + local_10 * 8 + 5));
      (**(code **)(*(int *)local_14 + 0x2c))(local_14,param_1,iVar2);
      iVar2 = CMission::GetMissionGrade(local_14);
      if (iVar2 != 2) {
        MakeMissionList_forOldUser(this,param_1);
      }
    }
    else {
      sVar1 = *(short *)(this + local_10 * 8 + 7);
      cMyTrace::cMyTrace(local_2c,"void CMissionList_Charac::ClearMission(CUser&, short int)",0x7a5,
                         5);
      cMyTrace::operator()
                (local_2c,"[@missionSystem] NotMatchIndex: <valid index:%d invalid index:%d>",
                 (int)sVar1,(int)param_2);
    }
  }
  return;
}

```

---

## ClearMissionKind

```asm
// === 085e63d6 CMissionList_Charac::ClearMissionKind  [0x085e63d6-0x85e641b] ===
 85e63d6:	55                   	push   %ebp
 85e63d7:	89 e5                	mov    %esp,%ebp
 85e63d9:	83 ec 28             	sub    $0x28,%esp
 85e63dc:	8b 45 10             	mov    0x10(%ebp),%eax
 85e63df:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 85e63e3:	66 83 7d f4 00       	cmpw   $0x0,-0xc(%ebp)
 85e63e8:	7e 2c                	jle    85e6416 <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers+0x40>
 85e63ea:	66 83 7d f4 23       	cmpw   $0x23,-0xc(%ebp)
 85e63ef:	7f 28                	jg     85e6419 <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers+0x43>
 85e63f1:	0f bf 55 f4          	movswl -0xc(%ebp),%edx
 85e63f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e63f8:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e63fd:	98                   	cwtl
 85e63fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e6402:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e6405:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e6409:	8b 45 08             	mov    0x8(%ebp),%eax
 85e640c:	89 04 24             	mov    %eax,(%esp)
 85e640f:	e8 08 00 00 00       	call   85e641c <_ZN19CMissionList_Charac12ClearMissionER5CUsers>
 85e6414:	eb 04                	jmp    85e641a <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers+0x44>
 85e6416:	90                   	nop
 85e6417:	eb 01                	jmp    85e641a <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers+0x44>
 85e6419:	90                   	nop
 85e641a:	c9                   	leave
 85e641b:	c3                   	ret

```

```c
// CMissionList_Charac::ClearMissionKind @ 0x85e63d6

/* CMissionList_Charac::ClearMissionKind(CUser&, short) */

void __thiscall
CMissionList_Charac::ClearMissionKind(CMissionList_Charac *this,CUser *param_1,short param_2)

{
  if ((0 < param_2) && (param_2 < 0x24)) {
    ClearMission(this,param_1,*(short *)(this + param_2 * 8 + 7));
  }
  return;
}

```

---

## GM_SetMissionValue

```asm
// === 085e56ee CMissionList_Charac::GM_SetMissionValue  [0x085e56ee-0x85e5723] ===
 85e56ee:	55                   	push   %ebp
 85e56ef:	89 e5                	mov    %esp,%ebp
 85e56f1:	83 ec 18             	sub    $0x18,%esp
 85e56f4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85e56f8:	7e 23                	jle    85e571d <_ZN19CMissionList_Charac18GM_SetMissionValueEii+0x2f>
 85e56fa:	83 7d 0c 23          	cmpl   $0x23,0xc(%ebp)
 85e56fe:	7f 20                	jg     85e5720 <_ZN19CMissionList_Charac18GM_SetMissionValueEii+0x32>
 85e5700:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e5703:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5706:	89 c1                	mov    %eax,%ecx
 85e5708:	8b 45 08             	mov    0x8(%ebp),%eax
 85e570b:	66 89 4c d0 09       	mov    %cx,0x9(%eax,%edx,8)
 85e5710:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5713:	89 04 24             	mov    %eax,(%esp)
 85e5716:	e8 a9 34 ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e571b:	eb 04                	jmp    85e5721 <_ZN19CMissionList_Charac18GM_SetMissionValueEii+0x33>
 85e571d:	90                   	nop
 85e571e:	eb 01                	jmp    85e5721 <_ZN19CMissionList_Charac18GM_SetMissionValueEii+0x33>
 85e5720:	90                   	nop
 85e5721:	c9                   	leave
 85e5722:	c3                   	ret
 85e5723:	90                   	nop

```

```c
// CMissionList_Charac::GM_SetMissionValue @ 0x85e56ee

/* CMissionList_Charac::GM_SetMissionValue(int, int) */

void __thiscall
CMissionList_Charac::GM_SetMissionValue(CMissionList_Charac *this,int param_1,int param_2)

{
  if ((0 < param_1) && (param_1 < 0x24)) {
    *(short *)(this + param_1 * 8 + 9) = (short)param_2;
    charac_expand::CData::alter((CData *)this);
  }
  return;
}

```

---

## MakeMissionList_JustKind

```asm
// === 085e4fba CMissionList_Charac::MakeMissionList_JustKind  [0x085e4fba-0x85e50f9] ===
 85e4fba:	55                   	push   %ebp
 85e4fbb:	89 e5                	mov    %esp,%ebp
 85e4fbd:	53                   	push   %ebx
 85e4fbe:	83 ec 34             	sub    $0x34,%esp
 85e4fc1:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85e4fc5:	8b 5d 10             	mov    0x10(%ebp),%ebx
 85e4fc8:	e8 ce 71 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e4fcd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e4fd1:	89 04 24             	mov    %eax,(%esp)
 85e4fd4:	e8 cd aa d7 ff       	call   835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>
 85e4fd9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e4fdc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e4fdf:	89 04 24             	mov    %eax,(%esp)
 85e4fe2:	e8 db 30 00 00       	call   85e80c2 <_ZNKSt4listIP8CMissionSaIS1_EE5emptyEv>
 85e4fe7:	84 c0                	test   %al,%al
 85e4fe9:	74 0a                	je     85e4ff5 <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0x3b>
 85e4feb:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4ff0:	e9 00 01 00 00       	jmp    85e50f5 <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0x13b>
 85e4ff5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4ff8:	89 04 24             	mov    %eax,(%esp)
 85e4ffb:	e8 de 5e d4 ff       	call   832aede <_ZN11MissionInfoC1Ev>
 85e5000:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e5003:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e5006:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e500a:	89 04 24             	mov    %eax,(%esp)
 85e500d:	e8 50 2f 00 00       	call   85e7f62 <_ZNKSt4listIP8CMissionSaIS1_EE5beginEv>
 85e5012:	83 ec 04             	sub    $0x4,%esp
 85e5015:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e5018:	89 04 24             	mov    %eax,(%esp)
 85e501b:	e8 b4 2f 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e5020:	8b 00                	mov    (%eax),%eax
 85e5022:	89 04 24             	mov    %eax,(%esp)
 85e5025:	e8 e8 18 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e502a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e502e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5031:	89 04 24             	mov    %eax,(%esp)
 85e5034:	e8 8f fb ff ff       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e5039:	66 85 c0             	test   %ax,%ax
 85e503c:	0f 95 c0             	setne  %al
 85e503f:	84 c0                	test   %al,%al
 85e5041:	74 7f                	je     85e50c2 <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0x108>
 85e5043:	b8 00 00 00 00       	mov    $0x0,%eax
 85e5048:	e9 a8 00 00 00       	jmp    85e50f5 <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0x13b>
 85e504d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e5050:	89 04 24             	mov    %eax,(%esp)
 85e5053:	e8 7c 2f 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e5058:	8b 00                	mov    (%eax),%eax
 85e505a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e505d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e5061:	89 04 24             	mov    %eax,(%esp)
 85e5064:	e8 25 e1 ff ff       	call   85e318e <_ZNK8CMission17isAcceptConditionERK5CUser>
 85e5069:	84 c0                	test   %al,%al
 85e506b:	74 4a                	je     85e50b7 <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0xfd>
 85e506d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e5070:	89 04 24             	mov    %eax,(%esp)
 85e5073:	e8 5c 2f 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e5078:	8b 00                	mov    (%eax),%eax
 85e507a:	8b 10                	mov    (%eax),%edx
 85e507c:	83 c2 20             	add    $0x20,%edx
 85e507f:	8b 0a                	mov    (%edx),%ecx
 85e5081:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e5084:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e5088:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85e508b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e508f:	89 04 24             	mov    %eax,(%esp)
 85e5092:	ff d1                	call   *%ecx
 85e5094:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e5097:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e509b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e509e:	89 04 24             	mov    %eax,(%esp)
 85e50a1:	e8 c6 fb ff ff       	call   85e4c6c <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo>
 85e50a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e50a9:	89 04 24             	mov    %eax,(%esp)
 85e50ac:	e8 13 3b ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e50b1:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 85e50b5:	eb 3a                	jmp    85e50f1 <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0x137>
 85e50b7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e50ba:	89 04 24             	mov    %eax,(%esp)
 85e50bd:	e8 fe 2e 00 00       	call   85e7fc0 <_ZNSt20_List_const_iteratorIP8CMissionEppEv>
 85e50c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e50c5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e50c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e50cc:	89 04 24             	mov    %eax,(%esp)
 85e50cf:	e8 b4 2e 00 00       	call   85e7f88 <_ZNKSt4listIP8CMissionSaIS1_EE3endEv>
 85e50d4:	83 ec 04             	sub    $0x4,%esp
 85e50d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e50da:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e50de:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e50e1:	89 04 24             	mov    %eax,(%esp)
 85e50e4:	e8 c3 2e 00 00       	call   85e7fac <_ZNKSt20_List_const_iteratorIP8CMissionEneERKS2_>
 85e50e9:	84 c0                	test   %al,%al
 85e50eb:	0f 85 5c ff ff ff    	jne    85e504d <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj+0x93>
 85e50f1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 85e50f5:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85e50f8:	c9                   	leave
 85e50f9:	c3                   	ret

```

```c
// CMissionList_Charac::MakeMissionList_JustKind @ 0x85e4fba

/* CMissionList_Charac::MakeMissionList_JustKind(CUser const&, unsigned int) */

undefined1 __thiscall
CMissionList_Charac::MakeMissionList_JustKind(CMissionList_Charac *this,CUser *param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  CDataManager *this_00;
  undefined4 *puVar3;
  int iVar4;
  _List_const_iterator<CMission*> local_24 [4];
  MissionInfo local_20 [8];
  _List_const_iterator local_18 [7];
  undefined1 local_11;
  list<CMission*,std::allocator<CMission*>> *local_10;
  
  local_11 = 0;
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (list<CMission*,std::allocator<CMission*>> *)
             CDataManager::get_kind_mission_list(this_00,param_2);
  cVar1 = std::list<CMission*,std::allocator<CMission*>>::empty(local_10);
  if (cVar1 == '\0') {
    MissionInfo::MissionInfo(local_20);
    std::list<CMission*,std::allocator<CMission*>>::begin();
    puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
    iVar4 = CMission::GetMissionKind((CMission *)*puVar3);
    sVar2 = getIndex_byKind(this,iVar4);
    if (sVar2 == 0) {
      while( true ) {
        std::list<CMission*,std::allocator<CMission*>>::end();
        cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_24,local_18);
        if (cVar1 == '\0') break;
        puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
        cVar1 = CMission::isAcceptCondition((CMission *)*puVar3,param_1);
        if (cVar1 != '\0') {
          puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
          (**(code **)(*(int *)*puVar3 + 0x20))((int *)*puVar3,local_20,param_1);
          addNewMission(this,local_20);
          charac_expand::CData::alter((CData *)this);
          return 1;
        }
        std::_List_const_iterator<CMission*>::operator++(local_24);
      }
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

```

---

## MakeMissionList_forNewbies

```asm
// === 085e4d14 CMissionList_Charac::MakeMissionList_forNewbies  [0x085e4d14-0x85e4e4b] ===
 85e4d14:	55                   	push   %ebp
 85e4d15:	89 e5                	mov    %esp,%ebp
 85e4d17:	83 ec 38             	sub    $0x38,%esp
 85e4d1a:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85e4d21:	e9 15 01 00 00       	jmp    85e4e3b <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x127>
 85e4d26:	e8 70 74 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e4d2b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e4d2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4d32:	89 04 24             	mov    %eax,(%esp)
 85e4d35:	e8 6c ad d7 ff       	call   835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>
 85e4d3a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e4d3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e4d40:	89 04 24             	mov    %eax,(%esp)
 85e4d43:	e8 7a 33 00 00       	call   85e80c2 <_ZNKSt4listIP8CMissionSaIS1_EE5emptyEv>
 85e4d48:	84 c0                	test   %al,%al
 85e4d4a:	0f 85 e6 00 00 00    	jne    85e4e36 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x122>
 85e4d50:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4d53:	89 04 24             	mov    %eax,(%esp)
 85e4d56:	e8 83 61 d4 ff       	call   832aede <_ZN11MissionInfoC1Ev>
 85e4d5b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4d5e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4d61:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4d65:	89 04 24             	mov    %eax,(%esp)
 85e4d68:	e8 f5 31 00 00       	call   85e7f62 <_ZNKSt4listIP8CMissionSaIS1_EE5beginEv>
 85e4d6d:	83 ec 04             	sub    $0x4,%esp
 85e4d70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4d73:	89 04 24             	mov    %eax,(%esp)
 85e4d76:	e8 59 32 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4d7b:	8b 00                	mov    (%eax),%eax
 85e4d7d:	89 04 24             	mov    %eax,(%esp)
 85e4d80:	e8 bf 1b 00 00       	call   85e6944 <_ZNK8CMission15GetMissionGradeEv>
 85e4d85:	83 f8 02             	cmp    $0x2,%eax
 85e4d88:	0f 94 c0             	sete   %al
 85e4d8b:	84 c0                	test   %al,%al
 85e4d8d:	74 76                	je     85e4e05 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0xf1>
 85e4d8f:	e9 a3 00 00 00       	jmp    85e4e37 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x123>
 85e4d94:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4d97:	89 04 24             	mov    %eax,(%esp)
 85e4d9a:	e8 35 32 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4d9f:	8b 00                	mov    (%eax),%eax
 85e4da1:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e4da4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4da8:	89 04 24             	mov    %eax,(%esp)
 85e4dab:	e8 de e3 ff ff       	call   85e318e <_ZNK8CMission17isAcceptConditionERK5CUser>
 85e4db0:	84 c0                	test   %al,%al
 85e4db2:	74 46                	je     85e4dfa <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0xe6>
 85e4db4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4db7:	89 04 24             	mov    %eax,(%esp)
 85e4dba:	e8 15 32 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4dbf:	8b 00                	mov    (%eax),%eax
 85e4dc1:	8b 10                	mov    (%eax),%edx
 85e4dc3:	83 c2 20             	add    $0x20,%edx
 85e4dc6:	8b 0a                	mov    (%edx),%ecx
 85e4dc8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e4dcb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4dcf:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85e4dd2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4dd6:	89 04 24             	mov    %eax,(%esp)
 85e4dd9:	ff d1                	call   *%ecx
 85e4ddb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4dde:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4de2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4de5:	89 04 24             	mov    %eax,(%esp)
 85e4de8:	e8 7f fe ff ff       	call   85e4c6c <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo>
 85e4ded:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4df0:	89 04 24             	mov    %eax,(%esp)
 85e4df3:	e8 cc 3d ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e4df8:	eb 3d                	jmp    85e4e37 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x123>
 85e4dfa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4dfd:	89 04 24             	mov    %eax,(%esp)
 85e4e00:	e8 bb 31 00 00       	call   85e7fc0 <_ZNSt20_List_const_iteratorIP8CMissionEppEv>
 85e4e05:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e4e08:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4e0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4e0f:	89 04 24             	mov    %eax,(%esp)
 85e4e12:	e8 71 31 00 00       	call   85e7f88 <_ZNKSt4listIP8CMissionSaIS1_EE3endEv>
 85e4e17:	83 ec 04             	sub    $0x4,%esp
 85e4e1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4e1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4e21:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e4e24:	89 04 24             	mov    %eax,(%esp)
 85e4e27:	e8 80 31 00 00       	call   85e7fac <_ZNKSt20_List_const_iteratorIP8CMissionEneERKS2_>
 85e4e2c:	84 c0                	test   %al,%al
 85e4e2e:	0f 85 60 ff ff ff    	jne    85e4d94 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x80>
 85e4e34:	eb 01                	jmp    85e4e37 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x123>
 85e4e36:	90                   	nop
 85e4e37:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85e4e3b:	83 7d f0 23          	cmpl   $0x23,-0x10(%ebp)
 85e4e3f:	0f 9e c0             	setle  %al
 85e4e42:	84 c0                	test   %al,%al
 85e4e44:	0f 85 dc fe ff ff    	jne    85e4d26 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser+0x12>
 85e4e4a:	c9                   	leave
 85e4e4b:	c3                   	ret

```

```c
// CMissionList_Charac::MakeMissionList_forNewbies @ 0x85e4d14

/* CMissionList_Charac::MakeMissionList_forNewbies(CUser const&) */

void __thiscall
CMissionList_Charac::MakeMissionList_forNewbies(CMissionList_Charac *this,CUser *param_1)

{
  char cVar1;
  CDataManager *this_00;
  undefined4 *puVar2;
  int iVar3;
  _List_const_iterator<CMission*> local_24 [4];
  MissionInfo local_20 [8];
  _List_const_iterator<CMission*> local_18 [4];
  int local_14;
  list<CMission*,std::allocator<CMission*>> *local_10;
  
  local_14 = 1;
  do {
    if (0x23 < local_14) {
      return;
    }
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (list<CMission*,std::allocator<CMission*>> *)
               CDataManager::get_kind_mission_list(this_00,local_14);
    cVar1 = std::list<CMission*,std::allocator<CMission*>>::empty(local_10);
    if (cVar1 == '\0') {
      MissionInfo::MissionInfo(local_20);
      std::list<CMission*,std::allocator<CMission*>>::begin();
      puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
      iVar3 = CMission::GetMissionGrade((CMission *)*puVar2);
      if (iVar3 != 2) {
        while( true ) {
          std::list<CMission*,std::allocator<CMission*>>::end();
          cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_18,local_24);
          if (cVar1 == '\0') break;
          puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
          cVar1 = CMission::isAcceptCondition((CMission *)*puVar2,param_1);
          if (cVar1 != '\0') {
            puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
            (**(code **)(*(int *)*puVar2 + 0x20))((int *)*puVar2,local_20,param_1);
            addNewMission(this,local_20);
            charac_expand::CData::alter((CData *)this);
            break;
          }
          std::_List_const_iterator<CMission*>::operator++(local_24);
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## MakeMissionList_forOldUser

```asm
// === 085e4e4c CMissionList_Charac::MakeMissionList_forOldUser  [0x085e4e4c-0x85e4fb9] ===
 85e4e4c:	55                   	push   %ebp
 85e4e4d:	89 e5                	mov    %esp,%ebp
 85e4e4f:	83 ec 38             	sub    $0x38,%esp
 85e4e52:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85e4e59:	e9 4a 01 00 00       	jmp    85e4fa8 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x15c>
 85e4e5e:	e8 38 73 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e4e63:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e4e66:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4e6a:	89 04 24             	mov    %eax,(%esp)
 85e4e6d:	e8 34 ac d7 ff       	call   835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>
 85e4e72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e4e75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e4e78:	89 04 24             	mov    %eax,(%esp)
 85e4e7b:	e8 42 32 00 00       	call   85e80c2 <_ZNKSt4listIP8CMissionSaIS1_EE5emptyEv>
 85e4e80:	84 c0                	test   %al,%al
 85e4e82:	0f 85 18 01 00 00    	jne    85e4fa0 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x154>
 85e4e88:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4e8b:	89 04 24             	mov    %eax,(%esp)
 85e4e8e:	e8 4b 60 d4 ff       	call   832aede <_ZN11MissionInfoC1Ev>
 85e4e93:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4e96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4e99:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4e9d:	89 04 24             	mov    %eax,(%esp)
 85e4ea0:	e8 bd 30 00 00       	call   85e7f62 <_ZNKSt4listIP8CMissionSaIS1_EE5beginEv>
 85e4ea5:	83 ec 04             	sub    $0x4,%esp
 85e4ea8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4eab:	89 04 24             	mov    %eax,(%esp)
 85e4eae:	e8 21 31 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4eb3:	8b 00                	mov    (%eax),%eax
 85e4eb5:	89 04 24             	mov    %eax,(%esp)
 85e4eb8:	e8 55 1a 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e4ebd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4ec1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4ec4:	89 04 24             	mov    %eax,(%esp)
 85e4ec7:	e8 fc fc ff ff       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e4ecc:	66 85 c0             	test   %ax,%ax
 85e4ecf:	0f 95 c0             	setne  %al
 85e4ed2:	84 c0                	test   %al,%al
 85e4ed4:	0f 85 c9 00 00 00    	jne    85e4fa3 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x157>
 85e4eda:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4edd:	89 04 24             	mov    %eax,(%esp)
 85e4ee0:	e8 ef 30 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4ee5:	8b 00                	mov    (%eax),%eax
 85e4ee7:	89 04 24             	mov    %eax,(%esp)
 85e4eea:	e8 55 1a 00 00       	call   85e6944 <_ZNK8CMission15GetMissionGradeEv>
 85e4eef:	83 f8 02             	cmp    $0x2,%eax
 85e4ef2:	0f 94 c0             	sete   %al
 85e4ef5:	84 c0                	test   %al,%al
 85e4ef7:	74 76                	je     85e4f6f <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x123>
 85e4ef9:	e9 a6 00 00 00       	jmp    85e4fa4 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x158>
 85e4efe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4f01:	89 04 24             	mov    %eax,(%esp)
 85e4f04:	e8 cb 30 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4f09:	8b 00                	mov    (%eax),%eax
 85e4f0b:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e4f0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4f12:	89 04 24             	mov    %eax,(%esp)
 85e4f15:	e8 74 e2 ff ff       	call   85e318e <_ZNK8CMission17isAcceptConditionERK5CUser>
 85e4f1a:	84 c0                	test   %al,%al
 85e4f1c:	74 46                	je     85e4f64 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x118>
 85e4f1e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4f21:	89 04 24             	mov    %eax,(%esp)
 85e4f24:	e8 ab 30 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4f29:	8b 00                	mov    (%eax),%eax
 85e4f2b:	8b 10                	mov    (%eax),%edx
 85e4f2d:	83 c2 20             	add    $0x20,%edx
 85e4f30:	8b 0a                	mov    (%edx),%ecx
 85e4f32:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e4f35:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4f39:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85e4f3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4f40:	89 04 24             	mov    %eax,(%esp)
 85e4f43:	ff d1                	call   *%ecx
 85e4f45:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4f48:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4f4c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4f4f:	89 04 24             	mov    %eax,(%esp)
 85e4f52:	e8 15 fd ff ff       	call   85e4c6c <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo>
 85e4f57:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4f5a:	89 04 24             	mov    %eax,(%esp)
 85e4f5d:	e8 62 3c ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e4f62:	eb 40                	jmp    85e4fa4 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x158>
 85e4f64:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4f67:	89 04 24             	mov    %eax,(%esp)
 85e4f6a:	e8 51 30 00 00       	call   85e7fc0 <_ZNSt20_List_const_iteratorIP8CMissionEppEv>
 85e4f6f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e4f72:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4f75:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4f79:	89 04 24             	mov    %eax,(%esp)
 85e4f7c:	e8 07 30 00 00       	call   85e7f88 <_ZNKSt4listIP8CMissionSaIS1_EE3endEv>
 85e4f81:	83 ec 04             	sub    $0x4,%esp
 85e4f84:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e4f87:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4f8b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85e4f8e:	89 04 24             	mov    %eax,(%esp)
 85e4f91:	e8 16 30 00 00       	call   85e7fac <_ZNKSt20_List_const_iteratorIP8CMissionEneERKS2_>
 85e4f96:	84 c0                	test   %al,%al
 85e4f98:	0f 85 60 ff ff ff    	jne    85e4efe <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0xb2>
 85e4f9e:	eb 04                	jmp    85e4fa4 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x158>
 85e4fa0:	90                   	nop
 85e4fa1:	eb 01                	jmp    85e4fa4 <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x158>
 85e4fa3:	90                   	nop
 85e4fa4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85e4fa8:	83 7d f0 23          	cmpl   $0x23,-0x10(%ebp)
 85e4fac:	0f 9e c0             	setle  %al
 85e4faf:	84 c0                	test   %al,%al
 85e4fb1:	0f 85 a7 fe ff ff    	jne    85e4e5e <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser+0x12>
 85e4fb7:	c9                   	leave
 85e4fb8:	c3                   	ret
 85e4fb9:	90                   	nop

```

```c
// CMissionList_Charac::MakeMissionList_forOldUser @ 0x85e4e4c

/* CMissionList_Charac::MakeMissionList_forOldUser(CUser const&) */

void __thiscall
CMissionList_Charac::MakeMissionList_forOldUser(CMissionList_Charac *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  CDataManager *this_00;
  undefined4 *puVar3;
  int iVar4;
  _List_const_iterator<CMission*> local_24 [4];
  MissionInfo local_20 [8];
  _List_const_iterator local_18 [4];
  int local_14;
  list<CMission*,std::allocator<CMission*>> *local_10;
  
  local_14 = 1;
  do {
    if (0x23 < local_14) {
      return;
    }
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (list<CMission*,std::allocator<CMission*>> *)
               CDataManager::get_kind_mission_list(this_00,local_14);
    cVar1 = std::list<CMission*,std::allocator<CMission*>>::empty(local_10);
    if (cVar1 == '\0') {
      MissionInfo::MissionInfo(local_20);
      std::list<CMission*,std::allocator<CMission*>>::begin();
      puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
      iVar4 = CMission::GetMissionKind((CMission *)*puVar3);
      sVar2 = getIndex_byKind(this,iVar4);
      if (sVar2 == 0) {
        puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
        iVar4 = CMission::GetMissionGrade((CMission *)*puVar3);
        if (iVar4 != 2) {
          while( true ) {
            std::list<CMission*,std::allocator<CMission*>>::end();
            cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_24,local_18);
            if (cVar1 == '\0') break;
            puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
            cVar1 = CMission::isAcceptCondition((CMission *)*puVar3,param_1);
            if (cVar1 != '\0') {
              puVar3 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_24);
              (**(code **)(*(int *)*puVar3 + 0x20))((int *)*puVar3,local_20,param_1);
              addNewMission(this,local_20);
              charac_expand::CData::alter((CData *)this);
              break;
            }
            std::_List_const_iterator<CMission*>::operator++(local_24);
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## Remove_Mission

```asm
// === 085e4bec CMissionList_Charac::Remove_Mission  [0x085e4bec-0x85e4c6b] ===
 85e4bec:	55                   	push   %ebp
 85e4bed:	89 e5                	mov    %esp,%ebp
 85e4bef:	83 ec 18             	sub    $0x18,%esp
 85e4bf2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85e4bf6:	7e 6d                	jle    85e4c65 <_ZN19CMissionList_Charac14Remove_MissionEi+0x79>
 85e4bf8:	83 7d 0c 23          	cmpl   $0x23,0xc(%ebp)
 85e4bfc:	7f 6a                	jg     85e4c68 <_ZN19CMissionList_Charac14Remove_MissionEi+0x7c>
 85e4bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4c01:	8b 80 54 01 00 00    	mov    0x154(%eax),%eax
 85e4c07:	85 c0                	test   %eax,%eax
 85e4c09:	74 39                	je     85e4c44 <_ZN19CMissionList_Charac14Remove_MissionEi+0x58>
 85e4c0b:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e4c0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4c11:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e4c16:	0f bf d0             	movswl %ax,%edx
 85e4c19:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 85e4c1c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4c1f:	0f b7 44 c8 05       	movzwl 0x5(%eax,%ecx,8),%eax
 85e4c24:	98                   	cwtl
 85e4c25:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85e4c28:	8b 89 54 01 00 00    	mov    0x154(%ecx),%ecx
 85e4c2e:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 85e4c34:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4c38:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4c3c:	89 0c 24             	mov    %ecx,(%esp)
 85e4c3f:	e8 de 1d 0a 00       	call   8686a22 <_ZN15cUserHistoryLog13pvpMissionDelEii>
 85e4c44:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4c47:	c1 e0 03             	shl    $0x3,%eax
 85e4c4a:	03 45 08             	add    0x8(%ebp),%eax
 85e4c4d:	83 c0 05             	add    $0x5,%eax
 85e4c50:	89 04 24             	mov    %eax,(%esp)
 85e4c53:	e8 5e 1c 00 00       	call   85e68b6 <_ZN11MissionInfo5clearEv>
 85e4c58:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4c5b:	89 04 24             	mov    %eax,(%esp)
 85e4c5e:	e8 61 3f ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e4c63:	eb 04                	jmp    85e4c69 <_ZN19CMissionList_Charac14Remove_MissionEi+0x7d>
 85e4c65:	90                   	nop
 85e4c66:	eb 01                	jmp    85e4c69 <_ZN19CMissionList_Charac14Remove_MissionEi+0x7d>
 85e4c68:	90                   	nop
 85e4c69:	c9                   	leave
 85e4c6a:	c3                   	ret
 85e4c6b:	90                   	nop

```

```c
// CMissionList_Charac::Remove_Mission @ 0x85e4bec

/* CMissionList_Charac::Remove_Mission(int) */

void __thiscall CMissionList_Charac::Remove_Mission(CMissionList_Charac *this,int param_1)

{
  if ((0 < param_1) && (param_1 < 0x24)) {
    if (*(int *)(this + 0x154) != 0) {
      cUserHistoryLog::pvpMissionDel
                ((cUserHistoryLog *)(*(int *)(this + 0x154) + 0x79700),
                 (int)*(short *)(this + param_1 * 8 + 5),(int)*(short *)(this + param_1 * 8 + 7));
    }
    MissionInfo::clear((MissionInfo *)(this + param_1 * 8 + 5));
    charac_expand::CData::alter((CData *)this);
  }
  return;
}

```

---

## ResetDaily

```asm
// === 085e5514 CMissionList_Charac::ResetDaily  [0x085e5514-0x85e5527] ===
 85e5514:	55                   	push   %ebp
 85e5515:	89 e5                	mov    %esp,%ebp
 85e5517:	83 ec 18             	sub    $0x18,%esp
 85e551a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e551d:	89 04 24             	mov    %eax,(%esp)
 85e5520:	e8 03 00 00 00       	call   85e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>
 85e5525:	c9                   	leave
 85e5526:	c3                   	ret
 85e5527:	90                   	nop

```

```c
// CMissionList_Charac::ResetDaily @ 0x85e5514

/* CMissionList_Charac::ResetDaily() */

void __thiscall CMissionList_Charac::ResetDaily(CMissionList_Charac *this)

{
  Reset_DailyMission(this);
  return;
}

```

---

## ResetMissionList

```asm
// === 085e6628 CMissionList_Charac::ResetMissionList  [0x085e6628-0x85e6653] ===
 85e6628:	55                   	push   %ebp
 85e6629:	89 e5                	mov    %esp,%ebp
 85e662b:	83 ec 18             	sub    $0x18,%esp
 85e662e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6631:	8b 00                	mov    (%eax),%eax
 85e6633:	83 c0 1c             	add    $0x1c,%eax
 85e6636:	8b 10                	mov    (%eax),%edx
 85e6638:	8b 45 08             	mov    0x8(%ebp),%eax
 85e663b:	89 04 24             	mov    %eax,(%esp)
 85e663e:	ff d2                	call   *%edx
 85e6640:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e6643:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e6647:	8b 45 08             	mov    0x8(%ebp),%eax
 85e664a:	89 04 24             	mov    %eax,(%esp)
 85e664d:	e8 c2 e6 ff ff       	call   85e4d14 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser>
 85e6652:	c9                   	leave
 85e6653:	c3                   	ret

```

```c
// CMissionList_Charac::ResetMissionList @ 0x85e6628

/* CMissionList_Charac::ResetMissionList(CUser&) */

void __thiscall CMissionList_Charac::ResetMissionList(CMissionList_Charac *this,CUser *param_1)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  MakeMissionList_forNewbies(this,param_1);
  return;
}

```

---

## Reset_DailyMission

```asm
// === 085e5528 CMissionList_Charac::Reset_DailyMission  [0x085e5528-0x85e56ed] ===
 85e5528:	55                   	push   %ebp
 85e5529:	89 e5                	mov    %esp,%ebp
 85e552b:	56                   	push   %esi
 85e552c:	53                   	push   %ebx
 85e552d:	83 ec 50             	sub    $0x50,%esp
 85e5530:	e8 66 6c ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e5535:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85e5538:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e553c:	89 14 24             	mov    %edx,(%esp)
 85e553f:	e8 a2 a5 d7 ff       	call   835fae6 <_ZNK12CDataManager22get_daily_mission_kindEv>
 85e5544:	83 ec 04             	sub    $0x4,%esp
 85e5547:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85e554e:	eb 60                	jmp    85e55b0 <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0x88>
 85e5550:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85e5553:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85e5556:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e555a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85e555d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e5561:	89 04 24             	mov    %eax,(%esp)
 85e5564:	e8 dd c2 b2 ff       	call   8111846 <_ZNSt6bitsetILj32EEixEj>
 85e5569:	83 ec 04             	sub    $0x4,%esp
 85e556c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85e556f:	89 04 24             	mov    %eax,(%esp)
 85e5572:	e8 03 c3 b2 ff       	call   811187a <_ZNKSt6bitsetILj32EE9referencecvbEv>
 85e5577:	89 c3                	mov    %eax,%ebx
 85e5579:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85e557c:	89 04 24             	mov    %eax,(%esp)
 85e557f:	e8 f0 c2 b2 ff       	call   8111874 <_ZNSt6bitsetILj32EE9referenceD1Ev>
 85e5584:	84 db                	test   %bl,%bl
 85e5586:	74 24                	je     85e55ac <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0x84>
 85e5588:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e558b:	c1 e0 03             	shl    $0x3,%eax
 85e558e:	03 45 08             	add    0x8(%ebp),%eax
 85e5591:	83 c0 05             	add    $0x5,%eax
 85e5594:	89 04 24             	mov    %eax,(%esp)
 85e5597:	e8 1a 13 00 00       	call   85e68b6 <_ZN11MissionInfo5clearEv>
 85e559c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85e559f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e55a2:	89 c1                	mov    %eax,%ecx
 85e55a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e55a7:	66 89 4c d0 05       	mov    %cx,0x5(%eax,%edx,8)
 85e55ac:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85e55b0:	83 7d ec 1f          	cmpl   $0x1f,-0x14(%ebp)
 85e55b4:	0f 9e c0             	setle  %al
 85e55b7:	84 c0                	test   %al,%al
 85e55b9:	75 95                	jne    85e5550 <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0x28>
 85e55bb:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85e55be:	89 04 24             	mov    %eax,(%esp)
 85e55c1:	e8 28 2b 00 00       	call   85e80ee <_ZNSt6vectorISt4pairIjjESaIS1_EEC1Ev>
 85e55c6:	e8 d0 6b ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e55cb:	8d 55 bc             	lea    -0x44(%ebp),%edx
 85e55ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e55d2:	89 04 24             	mov    %eax,(%esp)
 85e55d5:	e8 ec a4 d7 ff       	call   835fac6 <_ZN12CDataManager20get_New_DailyMissionERSt6vectorISt4pairIjjESaIS2_EE>
 85e55da:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85e55dd:	89 04 24             	mov    %eax,(%esp)
 85e55e0:	e8 7b 2b 00 00       	call   85e8160 <_ZNKSt6vectorISt4pairIjjESaIS1_EE5emptyEv>
 85e55e5:	84 c0                	test   %al,%al
 85e55e7:	74 36                	je     85e561f <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0xf7>
 85e55e9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e55f0:	00 
 85e55f1:	c7 44 24 08 69 06 00 	movl   $0x669,0x8(%esp)
 85e55f8:	00 
 85e55f9:	c7 44 24 04 c0 3a cc 	movl   $0x8cc3ac0,0x4(%esp)
 85e5600:	08 
 85e5601:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e5604:	89 04 24             	mov    %eax,(%esp)
 85e5607:	e8 0c a1 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e560c:	c7 44 24 04 c0 2c cc 	movl   $0x8cc2cc0,0x4(%esp)
 85e5613:	08 
 85e5614:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e5617:	89 04 24             	mov    %eax,(%esp)
 85e561a:	e8 69 a1 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e561f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85e5626:	eb 72                	jmp    85e569a <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0x172>
 85e5628:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e562b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e562f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85e5632:	89 04 24             	mov    %eax,(%esp)
 85e5635:	e8 e8 28 00 00       	call   85e7f22 <_ZNSt6vectorISt4pairIjjESaIS1_EEixEj>
 85e563a:	8b 00                	mov    (%eax),%eax
 85e563c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e563f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e5642:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e5645:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e5649:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85e564c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e5650:	89 04 24             	mov    %eax,(%esp)
 85e5653:	e8 ee c1 b2 ff       	call   8111846 <_ZNSt6bitsetILj32EEixEj>
 85e5658:	83 ec 04             	sub    $0x4,%esp
 85e565b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e565e:	89 04 24             	mov    %eax,(%esp)
 85e5661:	e8 14 c2 b2 ff       	call   811187a <_ZNKSt6bitsetILj32EE9referencecvbEv>
 85e5666:	89 c3                	mov    %eax,%ebx
 85e5668:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e566b:	89 04 24             	mov    %eax,(%esp)
 85e566e:	e8 01 c2 b2 ff       	call   8111874 <_ZNSt6bitsetILj32EE9referenceD1Ev>
 85e5673:	84 db                	test   %bl,%bl
 85e5675:	74 1f                	je     85e5696 <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0x16e>
 85e5677:	8b 45 08             	mov    0x8(%ebp),%eax
 85e567a:	8b 80 54 01 00 00    	mov    0x154(%eax),%eax
 85e5680:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e5683:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e5687:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e568b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e568e:	89 04 24             	mov    %eax,(%esp)
 85e5691:	e8 24 f9 ff ff       	call   85e4fba <_ZN19CMissionList_Charac24MakeMissionList_JustKindERK5CUserj>
 85e5696:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85e569a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85e569d:	89 04 24             	mov    %eax,(%esp)
 85e56a0:	e8 61 28 00 00       	call   85e7f06 <_ZNKSt6vectorISt4pairIjjESaIS1_EE4sizeEv>
 85e56a5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85e56a8:	0f 97 c0             	seta   %al
 85e56ab:	84 c0                	test   %al,%al
 85e56ad:	0f 85 75 ff ff ff    	jne    85e5628 <_ZN19CMissionList_Charac18Reset_DailyMissionEv+0x100>
 85e56b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e56b6:	89 04 24             	mov    %eax,(%esp)
 85e56b9:	e8 06 35 ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e56be:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85e56c1:	89 04 24             	mov    %eax,(%esp)
 85e56c4:	e8 39 2a 00 00       	call   85e8102 <_ZNSt6vectorISt4pairIjjESaIS1_EED1Ev>
 85e56c9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e56cc:	83 c4 00             	add    $0x0,%esp
 85e56cf:	5b                   	pop    %ebx
 85e56d0:	5e                   	pop    %esi
 85e56d1:	5d                   	pop    %ebp
 85e56d2:	c3                   	ret
 85e56d3:	89 d3                	mov    %edx,%ebx
 85e56d5:	89 c6                	mov    %eax,%esi
 85e56d7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85e56da:	89 04 24             	mov    %eax,(%esp)
 85e56dd:	e8 20 2a 00 00       	call   85e8102 <_ZNSt6vectorISt4pairIjjESaIS1_EED1Ev>
 85e56e2:	89 f0                	mov    %esi,%eax
 85e56e4:	89 da                	mov    %ebx,%edx
 85e56e6:	89 04 24             	mov    %eax,(%esp)
 85e56e9:	e8 62 e0 4f 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CMissionList_Charac::Reset_DailyMission @ 0x85e5528

/* CMissionList_Charac::Reset_DailyMission() */

void __thiscall CMissionList_Charac::Reset_DailyMission(CMissionList_Charac *this)

{
  char cVar1;
  bool bVar2;
  CDataManager *this_00;
  uint *puVar3;
  uint uVar4;
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  local_48 [12];
  CDataManager local_3c [4];
  reference local_38 [8];
  cMyTrace local_30 [16];
  reference local_20 [8];
  int local_18;
  uint local_14;
  uint local_10;
  
  G_CDataManager();
  CDataManager::get_daily_mission_kind(local_3c);
  for (local_18 = 0; local_18 < 0x20; local_18 = local_18 + 1) {
    std::bitset<32u>::operator[]((uint)local_38);
    bVar2 = std::bitset::reference::operator_cast_to_bool(local_38);
    std::bitset<32u>::reference::~reference((reference *)local_38);
    if (bVar2) {
      MissionInfo::clear((MissionInfo *)(this + local_18 * 8 + 5));
      *(short *)(this + local_18 * 8 + 5) = (short)local_18;
    }
  }
  std::
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  ::vector(local_48);
                    /* try { // try from 085e55c6 to 085e5695 has its CatchHandler @ 085e56d3 */
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::get_New_DailyMission(this_00,(vector *)local_48);
  cVar1 = std::
          vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
          ::empty();
  if (cVar1 != '\0') {
    cMyTrace::cMyTrace(local_30,"void CMissionList_Charac::Reset_DailyMission()",0x669,5);
    cMyTrace::operator()(local_30,"[@missionSystem] Daily Mission List is Empty!!");
  }
  local_14 = 0;
  while( true ) {
    uVar4 = std::
            vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
            ::size(local_48);
    if (uVar4 <= local_14) break;
    puVar3 = (uint *)std::
                     vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
                     ::operator[](local_48,local_14);
    local_10 = *puVar3;
    std::bitset<32u>::operator[]((uint)local_20);
    bVar2 = std::bitset::reference::operator_cast_to_bool(local_20);
    std::bitset<32u>::reference::~reference((reference *)local_20);
    if (bVar2) {
      MakeMissionList_JustKind(this,*(CUser **)(this + 0x154),local_10);
    }
    local_14 = local_14 + 1;
  }
  charac_expand::CData::alter((CData *)this);
  std::
  vector<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
  ::~vector(local_48);
  return;
}

```

---

## Send_Cleared_Mission_List

```asm
// === 085e5760 CMissionList_Charac::Send_Cleared_Mission_List  [0x085e5760-0x85e5857] ===
 85e5760:	55                   	push   %ebp
 85e5761:	89 e5                	mov    %esp,%ebp
 85e5763:	56                   	push   %esi
 85e5764:	53                   	push   %ebx
 85e5765:	83 ec 20             	sub    $0x20,%esp
 85e5768:	8b 45 10             	mov    0x10(%ebp),%eax
 85e576b:	89 04 24             	mov    %eax,(%esp)
 85e576e:	e8 ed 71 b3 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 85e5773:	84 c0                	test   %al,%al
 85e5775:	0f 85 d4 00 00 00    	jne    85e584f <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE+0xef>
 85e577b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e577e:	89 04 24             	mov    %eax,(%esp)
 85e5781:	e8 c6 85 fa ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85e5786:	c7 44 24 08 41 01 00 	movl   $0x141,0x8(%esp)
 85e578d:	00 
 85e578e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e5795:	00 
 85e5796:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e5799:	89 04 24             	mov    %eax,(%esp)
 85e579c:	e8 5b 61 ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85e57a1:	8b 45 10             	mov    0x10(%ebp),%eax
 85e57a4:	89 04 24             	mov    %eax,(%esp)
 85e57a7:	e8 14 8a aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85e57ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e57b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e57b3:	89 04 24             	mov    %eax,(%esp)
 85e57b6:	e8 65 61 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85e57bb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e57c2:	eb 27                	jmp    85e57eb <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE+0x8b>
 85e57c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e57c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e57cb:	8b 45 10             	mov    0x10(%ebp),%eax
 85e57ce:	89 04 24             	mov    %eax,(%esp)
 85e57d1:	e8 9e 4d b0 ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 85e57d6:	8b 00                	mov    (%eax),%eax
 85e57d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e57dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e57df:	89 04 24             	mov    %eax,(%esp)
 85e57e2:	e8 bd 46 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e57e7:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e57eb:	8b 45 10             	mov    0x10(%ebp),%eax
 85e57ee:	89 04 24             	mov    %eax,(%esp)
 85e57f1:	e8 ca 89 aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85e57f6:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85e57f9:	0f 97 c0             	seta   %al
 85e57fc:	84 c0                	test   %al,%al
 85e57fe:	75 c4                	jne    85e57c4 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE+0x64>
 85e5800:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e5807:	00 
 85e5808:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e580b:	89 04 24             	mov    %eax,(%esp)
 85e580e:	e8 45 61 ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85e5813:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e5816:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e581a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e581d:	89 04 24             	mov    %eax,(%esp)
 85e5820:	e8 95 2d 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85e5825:	eb 1b                	jmp    85e5842 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE+0xe2>
 85e5827:	89 d3                	mov    %edx,%ebx
 85e5829:	89 c6                	mov    %eax,%esi
 85e582b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e582e:	89 04 24             	mov    %eax,(%esp)
 85e5831:	e8 4a 86 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85e5836:	89 f0                	mov    %esi,%eax
 85e5838:	89 da                	mov    %ebx,%edx
 85e583a:	89 04 24             	mov    %eax,(%esp)
 85e583d:	e8 0e df 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e5842:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e5845:	89 04 24             	mov    %eax,(%esp)
 85e5848:	e8 33 86 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85e584d:	eb 01                	jmp    85e5850 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE+0xf0>
 85e584f:	90                   	nop
 85e5850:	83 c4 20             	add    $0x20,%esp
 85e5853:	5b                   	pop    %ebx
 85e5854:	5e                   	pop    %esi
 85e5855:	5d                   	pop    %ebp
 85e5856:	c3                   	ret
 85e5857:	90                   	nop

```

```c
// CMissionList_Charac::Send_Cleared_Mission_List @ 0x85e5760

/* CMissionList_Charac::Send_Cleared_Mission_List(CUser&, std::vector<int, std::allocator<int> >
   const&) */

void __thiscall
CMissionList_Charac::Send_Cleared_Mission_List
          (CMissionList_Charac *this,CUser *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  PacketGuard local_1c [12];
  uint local_10;
  
  cVar1 = std::vector<int,std::allocator<int>>::empty();
  if (cVar1 == '\0') {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 085e579c to 085e5824 has its CatchHandler @ 085e5827 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x141);
    iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar2);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2)
      ;
      if (uVar4 <= local_10) break;
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)param_2,local_10);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*piVar3);
      local_10 = local_10 + 1;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

---

## Send_Fail_Mission

```asm
// === 085e5858 CMissionList_Charac::Send_Fail_Mission  [0x085e5858-0x85e58f3] ===
 85e5858:	55                   	push   %ebp
 85e5859:	89 e5                	mov    %esp,%ebp
 85e585b:	56                   	push   %esi
 85e585c:	53                   	push   %ebx
 85e585d:	83 ec 30             	sub    $0x30,%esp
 85e5860:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5863:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 85e5867:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e586a:	89 04 24             	mov    %eax,(%esp)
 85e586d:	e8 da 84 fa ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85e5872:	c7 44 24 08 57 01 00 	movl   $0x157,0x8(%esp)
 85e5879:	00 
 85e587a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e5881:	00 
 85e5882:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5885:	89 04 24             	mov    %eax,(%esp)
 85e5888:	e8 6f 60 ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85e588d:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 85e5891:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5895:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5898:	89 04 24             	mov    %eax,(%esp)
 85e589b:	e8 04 46 af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e58a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e58a7:	00 
 85e58a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e58ab:	89 04 24             	mov    %eax,(%esp)
 85e58ae:	e8 a5 60 ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85e58b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e58b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e58ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e58bd:	89 04 24             	mov    %eax,(%esp)
 85e58c0:	e8 f5 2c 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85e58c5:	eb 1b                	jmp    85e58e2 <_ZN19CMissionList_Charac17Send_Fail_MissionER5CUsers+0x8a>
 85e58c7:	89 d3                	mov    %edx,%ebx
 85e58c9:	89 c6                	mov    %eax,%esi
 85e58cb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e58ce:	89 04 24             	mov    %eax,(%esp)
 85e58d1:	e8 aa 85 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85e58d6:	89 f0                	mov    %esi,%eax
 85e58d8:	89 da                	mov    %ebx,%edx
 85e58da:	89 04 24             	mov    %eax,(%esp)
 85e58dd:	e8 6e de 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e58e2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e58e5:	89 04 24             	mov    %eax,(%esp)
 85e58e8:	e8 93 85 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85e58ed:	83 c4 30             	add    $0x30,%esp
 85e58f0:	5b                   	pop    %ebx
 85e58f1:	5e                   	pop    %esi
 85e58f2:	5d                   	pop    %ebp
 85e58f3:	c3                   	ret

```

```c
// CMissionList_Charac::Send_Fail_Mission @ 0x85e5858

/* CMissionList_Charac::Send_Fail_Mission(CUser&, short) */

void __thiscall
CMissionList_Charac::Send_Fail_Mission(CMissionList_Charac *this,CUser *param_1,short param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085e5888 to 085e58c4 has its CatchHandler @ 085e58c7 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x157);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## Send_MissionList

```asm
// === 085e52a8 CMissionList_Charac::Send_MissionList  [0x085e52a8-0x85e5513] ===
 85e52a8:	55                   	push   %ebp
 85e52a9:	89 e5                	mov    %esp,%ebp
 85e52ab:	56                   	push   %esi
 85e52ac:	53                   	push   %ebx
 85e52ad:	83 ec 60             	sub    $0x60,%esp
 85e52b0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e52b3:	89 04 24             	mov    %eax,(%esp)
 85e52b6:	e8 91 8a fa ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85e52bb:	c7 44 24 08 40 01 00 	movl   $0x140,0x8(%esp)
 85e52c2:	00 
 85e52c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e52ca:	00 
 85e52cb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e52ce:	89 04 24             	mov    %eax,(%esp)
 85e52d1:	e8 26 66 ae ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85e52d6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e52d9:	89 04 24             	mov    %eax,(%esp)
 85e52dc:	e8 6b b8 b2 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 85e52e1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85e52e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e52eb:	00 
 85e52ec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e52ef:	89 04 24             	mov    %eax,(%esp)
 85e52f2:	e8 29 66 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85e52f7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85e52fe:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 85e5305:	e9 3e 01 00 00       	jmp    85e5448 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x1a0>
 85e530a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e530d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5310:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e5315:	66 85 c0             	test   %ax,%ax
 85e5318:	0f 84 26 01 00 00    	je     85e5444 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x19c>
 85e531e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e5321:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5324:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e5329:	98                   	cwtl
 85e532a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e532e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e5331:	89 04 24             	mov    %eax,(%esp)
 85e5334:	e8 6b 4b af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e5339:	83 7d e4 1b          	cmpl   $0x1b,-0x1c(%ebp)
 85e533d:	75 58                	jne    85e5397 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0xef>
 85e533f:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 85e5345:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85e534c:	eb 29                	jmp    85e5377 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0xcf>
 85e534e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e5351:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5354:	0f b7 44 d0 09       	movzwl 0x9(%eax,%edx,8),%eax
 85e5359:	0f bf d0             	movswl %ax,%edx
 85e535c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e535f:	89 d3                	mov    %edx,%ebx
 85e5361:	89 c1                	mov    %eax,%ecx
 85e5363:	d3 fb                	sar    %cl,%ebx
 85e5365:	89 d8                	mov    %ebx,%eax
 85e5367:	83 e0 01             	and    $0x1,%eax
 85e536a:	84 c0                	test   %al,%al
 85e536c:	74 05                	je     85e5373 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0xcb>
 85e536e:	66 83 45 ee 01       	addw   $0x1,-0x12(%ebp)
 85e5373:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85e5377:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 85e537b:	0f 9e c0             	setle  %al
 85e537e:	84 c0                	test   %al,%al
 85e5380:	75 cc                	jne    85e534e <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0xa6>
 85e5382:	0f bf 45 ee          	movswl -0x12(%ebp),%eax
 85e5386:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e538a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e538d:	89 04 24             	mov    %eax,(%esp)
 85e5390:	e8 0f 4b af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e5395:	eb 1b                	jmp    85e53b2 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x10a>
 85e5397:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e539a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e539d:	0f b7 44 d0 09       	movzwl 0x9(%eax,%edx,8),%eax
 85e53a2:	98                   	cwtl
 85e53a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e53a7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e53aa:	89 04 24             	mov    %eax,(%esp)
 85e53ad:	e8 f2 4a af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e53b2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e53b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e53b8:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e53bd:	0f bf d8             	movswl %ax,%ebx
 85e53c0:	e8 d6 6d ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e53c5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e53c9:	89 04 24             	mov    %eax,(%esp)
 85e53cc:	e8 b5 a6 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e53d1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85e53d4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85e53d8:	75 16                	jne    85e53f0 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x148>
 85e53da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85e53dd:	c1 e0 03             	shl    $0x3,%eax
 85e53e0:	03 45 08             	add    0x8(%ebp),%eax
 85e53e3:	83 c0 05             	add    $0x5,%eax
 85e53e6:	89 04 24             	mov    %eax,(%esp)
 85e53e9:	e8 c8 14 00 00       	call   85e68b6 <_ZN11MissionInfo5clearEv>
 85e53ee:	eb 54                	jmp    85e5444 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x19c>
 85e53f0:	83 7d e4 1b          	cmpl   $0x1b,-0x1c(%ebp)
 85e53f4:	74 0c                	je     85e5402 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x15a>
 85e53f6:	83 7d e4 1f          	cmpl   $0x1f,-0x1c(%ebp)
 85e53fa:	74 06                	je     85e5402 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x15a>
 85e53fc:	83 7d e4 20          	cmpl   $0x20,-0x1c(%ebp)
 85e5400:	75 1d                	jne    85e541f <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x177>
 85e5402:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85e5405:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5408:	0f b7 44 d0 0b       	movzwl 0xb(%eax,%edx,8),%eax
 85e540d:	98                   	cwtl
 85e540e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5412:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e5415:	89 04 24             	mov    %eax,(%esp)
 85e5418:	e8 87 4a af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e541d:	eb 21                	jmp    85e5440 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x198>
 85e541f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85e5422:	8b 00                	mov    (%eax),%eax
 85e5424:	83 c0 28             	add    $0x28,%eax
 85e5427:	8b 10                	mov    (%eax),%edx
 85e5429:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85e542c:	89 04 24             	mov    %eax,(%esp)
 85e542f:	ff d2                	call   *%edx
 85e5431:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5435:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e5438:	89 04 24             	mov    %eax,(%esp)
 85e543b:	e8 64 4a af ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85e5440:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85e5444:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85e5448:	83 7d e4 23          	cmpl   $0x23,-0x1c(%ebp)
 85e544c:	0f 9e c0             	setle  %al
 85e544f:	84 c0                	test   %al,%al
 85e5451:	0f 85 b3 fe ff ff    	jne    85e530a <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x62>
 85e5457:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85e545a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e545e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e5461:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5465:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e5468:	89 04 24             	mov    %eax,(%esp)
 85e546b:	e8 b8 b6 b2 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 85e5470:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5473:	8d 90 28 01 00 00    	lea    0x128(%eax),%edx
 85e5479:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85e547c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5480:	89 14 24             	mov    %edx,(%esp)
 85e5483:	e8 82 54 47 00       	call   8a5a90a <_Z11BitsetToStrRKSt6bitsetILj256EEPh>
 85e5488:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e548f:	eb 1e                	jmp    85e54af <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x207>
 85e5491:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e5494:	0f b6 44 05 b0       	movzbl -0x50(%ebp,%eax,1),%eax
 85e5499:	0f b6 c0             	movzbl %al,%eax
 85e549c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e54a0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e54a3:	89 04 24             	mov    %eax,(%esp)
 85e54a6:	e8 75 64 ae ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85e54ab:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e54af:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
 85e54b3:	0f 9e c0             	setle  %al
 85e54b6:	84 c0                	test   %al,%al
 85e54b8:	75 d7                	jne    85e5491 <_ZN19CMissionList_Charac16Send_MissionListER5CUser+0x1e9>
 85e54ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e54c1:	00 
 85e54c2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e54c5:	89 04 24             	mov    %eax,(%esp)
 85e54c8:	e8 8b 64 ae ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85e54cd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e54d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e54d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e54d7:	89 04 24             	mov    %eax,(%esp)
 85e54da:	e8 db 30 06 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85e54df:	bb 01 00 00 00       	mov    $0x1,%ebx
 85e54e4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e54e7:	89 04 24             	mov    %eax,(%esp)
 85e54ea:	e8 91 89 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85e54ef:	89 d8                	mov    %ebx,%eax
 85e54f1:	83 c4 60             	add    $0x60,%esp
 85e54f4:	5b                   	pop    %ebx
 85e54f5:	5e                   	pop    %esi
 85e54f6:	5d                   	pop    %ebp
 85e54f7:	c3                   	ret
 85e54f8:	89 d3                	mov    %edx,%ebx
 85e54fa:	89 c6                	mov    %eax,%esi
 85e54fc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e54ff:	89 04 24             	mov    %eax,(%esp)
 85e5502:	e8 79 89 fa ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85e5507:	89 f0                	mov    %esi,%eax
 85e5509:	89 da                	mov    %ebx,%edx
 85e550b:	89 04 24             	mov    %eax,(%esp)
 85e550e:	e8 3d e2 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e5513:	90                   	nop

```

```c
// CMissionList_Charac::Send_MissionList @ 0x85e52a8

/* CMissionList_Charac::Send_MissionList(CUser&) */

undefined4 __thiscall
CMissionList_Charac::Send_MissionList(CMissionList_Charac *this,CUser *param_1)

{
  int iVar1;
  int iVar2;
  byte local_54 [32];
  int local_34;
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int *local_1c;
  short local_16;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 085e52d1 to 085e54de has its CatchHandler @ 085e54f8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x140);
  local_34 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_30);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
  local_24 = 0;
  for (local_20 = 1; local_20 < 0x24; local_20 = local_20 + 1) {
    if (*(short *)(this + local_20 * 8 + 7) != 0) {
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_30,(int)*(short *)(this + local_20 * 8 + 7));
      if (local_20 == 0x1b) {
        local_16 = 0;
        for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
          if (((int)*(short *)(this + 0xe1) >> ((byte)local_14 & 0x1f) & 1U) != 0) {
            local_16 = local_16 + 1;
          }
        }
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(int)local_16);
      }
      else {
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_30,(int)*(short *)(this + local_20 * 8 + 9));
      }
      iVar2 = (int)*(short *)(this + local_20 * 8 + 7);
      iVar1 = G_CDataManager();
      local_1c = (int *)CDataManager::find_mission(iVar1);
      if (local_1c == (int *)0x0) {
        MissionInfo::clear((MissionInfo *)(this + local_20 * 8 + 5));
      }
      else {
        if (((local_20 == 0x1b) || (local_20 == 0x1f)) || (local_20 == 0x20)) {
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_30,(int)*(short *)(this + local_20 * 8 + 0xb));
        }
        else {
          iVar1 = (**(code **)(*local_1c + 0x28))(local_1c,iVar2);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,iVar1);
        }
        local_24 = local_24 + 1;
      }
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,&local_34,local_24);
  BitsetToStr((bitset *)(this + 0x128),local_54);
  for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_54[local_10]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  CUser::Send(param_1,local_30);
  PacketGuard::~PacketGuard(local_30);
  return 1;
}

```

---

## Update_ComboMission_Event

```asm
// === 085e6654 CMissionList_Charac::Update_ComboMission_Event  [0x085e6654-0x85e6837] ===
 85e6654:	55                   	push   %ebp
 85e6655:	89 e5                	mov    %esp,%ebp
 85e6657:	56                   	push   %esi
 85e6658:	53                   	push   %ebx
 85e6659:	83 ec 60             	sub    $0x60,%esp
 85e665c:	8b 45 14             	mov    0x14(%ebp),%eax
 85e665f:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 85e6663:	66 83 7d c4 00       	cmpw   $0x0,-0x3c(%ebp)
 85e6668:	0f 88 bc 01 00 00    	js     85e682a <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1d6>
 85e666e:	66 83 7d c4 08       	cmpw   $0x8,-0x3c(%ebp)
 85e6673:	0f 8f b4 01 00 00    	jg     85e682d <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1d9>
 85e6679:	83 7d 10 1f          	cmpl   $0x1f,0x10(%ebp)
 85e667d:	74 0a                	je     85e6689 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x35>
 85e667f:	83 7d 10 20          	cmpl   $0x20,0x10(%ebp)
 85e6683:	0f 85 a7 01 00 00    	jne    85e6830 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1dc>
 85e6689:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 85e668d:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 85e6691:	8b 55 10             	mov    0x10(%ebp),%edx
 85e6694:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6697:	0f b7 44 d0 09       	movzwl 0x9(%eax,%edx,8),%eax
 85e669c:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 85e66a0:	66 83 7d c4 03       	cmpw   $0x3,-0x3c(%ebp)
 85e66a5:	7e 1a                	jle    85e66c1 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x6d>
 85e66a7:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 85e66ab:	83 e8 04             	sub    $0x4,%eax
 85e66ae:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 85e66b2:	8b 55 10             	mov    0x10(%ebp),%edx
 85e66b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e66b8:	0f b7 44 d0 0b       	movzwl 0xb(%eax,%edx,8),%eax
 85e66bd:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 85e66c1:	0f bf 55 f4          	movswl -0xc(%ebp),%edx
 85e66c5:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 85e66c9:	b9 03 00 00 00       	mov    $0x3,%ecx
 85e66ce:	89 cb                	mov    %ecx,%ebx
 85e66d0:	29 c3                	sub    %eax,%ebx
 85e66d2:	89 d8                	mov    %ebx,%eax
 85e66d4:	c1 e0 02             	shl    $0x2,%eax
 85e66d7:	89 d3                	mov    %edx,%ebx
 85e66d9:	89 c1                	mov    %eax,%ecx
 85e66db:	d3 fb                	sar    %cl,%ebx
 85e66dd:	89 d8                	mov    %ebx,%eax
 85e66df:	83 e0 0f             	and    $0xf,%eax
 85e66e2:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85e66e6:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 85e66ea:	0f bf 5d f6          	movswl -0xa(%ebp),%ebx
 85e66ee:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 85e66f2:	b9 03 00 00 00       	mov    $0x3,%ecx
 85e66f7:	89 ce                	mov    %ecx,%esi
 85e66f9:	29 c6                	sub    %eax,%esi
 85e66fb:	89 f0                	mov    %esi,%eax
 85e66fd:	c1 e0 02             	shl    $0x2,%eax
 85e6700:	89 de                	mov    %ebx,%esi
 85e6702:	89 c1                	mov    %eax,%ecx
 85e6704:	d3 e6                	shl    %cl,%esi
 85e6706:	89 f0                	mov    %esi,%eax
 85e6708:	89 d1                	mov    %edx,%ecx
 85e670a:	66 29 c1             	sub    %ax,%cx
 85e670d:	89 c8                	mov    %ecx,%eax
 85e670f:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 85e6713:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 85e6717:	83 e8 01             	sub    $0x1,%eax
 85e671a:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85e671e:	66 83 7d f6 00       	cmpw   $0x0,-0xa(%ebp)
 85e6723:	79 06                	jns    85e672b <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0xd7>
 85e6725:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 85e672b:	0f bf 55 f6          	movswl -0xa(%ebp),%edx
 85e672f:	0f bf 45 f2          	movswl -0xe(%ebp),%eax
 85e6733:	b9 03 00 00 00       	mov    $0x3,%ecx
 85e6738:	89 cb                	mov    %ecx,%ebx
 85e673a:	29 c3                	sub    %eax,%ebx
 85e673c:	89 d8                	mov    %ebx,%eax
 85e673e:	c1 e0 02             	shl    $0x2,%eax
 85e6741:	89 d3                	mov    %edx,%ebx
 85e6743:	89 c1                	mov    %eax,%ecx
 85e6745:	d3 e3                	shl    %cl,%ebx
 85e6747:	89 d8                	mov    %ebx,%eax
 85e6749:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85e674d:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 85e6751:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 85e6755:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85e6758:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 85e675c:	66 83 7d c4 03       	cmpw   $0x3,-0x3c(%ebp)
 85e6761:	7e 11                	jle    85e6774 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x120>
 85e6763:	8b 55 10             	mov    0x10(%ebp),%edx
 85e6766:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6769:	0f b7 4d f4          	movzwl -0xc(%ebp),%ecx
 85e676d:	66 89 4c d0 0b       	mov    %cx,0xb(%eax,%edx,8)
 85e6772:	eb 0f                	jmp    85e6783 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x12f>
 85e6774:	8b 55 10             	mov    0x10(%ebp),%edx
 85e6777:	8b 45 08             	mov    0x8(%ebp),%eax
 85e677a:	0f b7 4d f4          	movzwl -0xc(%ebp),%ecx
 85e677e:	66 89 4c d0 09       	mov    %cx,0x9(%eax,%edx,8)
 85e6783:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e678a:	00 
 85e678b:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 85e678e:	89 04 24             	mov    %eax,(%esp)
 85e6791:	e8 ae b2 ff ff       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85e6796:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 85e679a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e679d:	89 04 24             	mov    %eax,(%esp)
 85e67a0:	e8 07 7a aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e67a5:	8b 45 10             	mov    0x10(%ebp),%eax
 85e67a8:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85e67ab:	89 54 24 10          	mov    %edx,0x10(%esp)
 85e67af:	8d 55 e3             	lea    -0x1d(%ebp),%edx
 85e67b2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85e67b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e67b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e67bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e67c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e67c4:	89 04 24             	mov    %eax,(%esp)
 85e67c7:	e8 b0 fa ff ff       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e67cc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e67cf:	89 04 24             	mov    %eax,(%esp)
 85e67d2:	e8 89 61 b3 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 85e67d7:	83 f0 01             	xor    $0x1,%eax
 85e67da:	84 c0                	test   %al,%al
 85e67dc:	74 19                	je     85e67f7 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1a3>
 85e67de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e67e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e67e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e67e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e67ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85e67ef:	89 04 24             	mov    %eax,(%esp)
 85e67f2:	e8 69 ef ff ff       	call   85e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>
 85e67f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85e67fa:	89 04 24             	mov    %eax,(%esp)
 85e67fd:	e8 c2 23 ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e6802:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e6805:	89 04 24             	mov    %eax,(%esp)
 85e6808:	e8 cd d5 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e680d:	eb 22                	jmp    85e6831 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1dd>
 85e680f:	89 d3                	mov    %edx,%ebx
 85e6811:	89 c6                	mov    %eax,%esi
 85e6813:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85e6816:	89 04 24             	mov    %eax,(%esp)
 85e6819:	e8 bc d5 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e681e:	89 f0                	mov    %esi,%eax
 85e6820:	89 da                	mov    %ebx,%edx
 85e6822:	89 04 24             	mov    %eax,(%esp)
 85e6825:	e8 26 cf 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e682a:	90                   	nop
 85e682b:	eb 04                	jmp    85e6831 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1dd>
 85e682d:	90                   	nop
 85e682e:	eb 01                	jmp    85e6831 <_ZN19CMissionList_Charac25Update_ComboMission_EventER5CUseris+0x1dd>
 85e6830:	90                   	nop
 85e6831:	83 c4 60             	add    $0x60,%esp
 85e6834:	5b                   	pop    %ebx
 85e6835:	5e                   	pop    %esi
 85e6836:	5d                   	pop    %ebp
 85e6837:	c3                   	ret

```

```c
// CMissionList_Charac::Update_ComboMission_Event @ 0x85e6654

/* CMissionList_Charac::Update_ComboMission_Event(CUser&, int, short) */

void __thiscall
CMissionList_Charac::Update_ComboMission_Event
          (CMissionList_Charac *this,CUser *param_1,int param_2,short param_3)

{
  char cVar1;
  ushort uVar2;
  vector<int,std::allocator<int>> local_30 [15];
  MissionClearCondition_Parameter local_21 [15];
  short local_12;
  short local_10;
  short local_e;
  
  local_12 = param_3;
  if (((-1 < param_3) && (param_3 < 9)) && ((param_2 == 0x1f || (param_2 == 0x20)))) {
    local_10 = *(short *)(this + param_2 * 8 + 9);
    if (3 < param_3) {
      local_12 = param_3 + -4;
      local_10 = *(short *)(this + param_2 * 8 + 0xb);
    }
    cVar1 = (char)local_12;
    uVar2 = (ushort)((int)local_10 >> (('\x03' - cVar1) * '\x04' & 0x1fU)) & 0xf;
    local_e = uVar2 - 1;
    if (local_e < 0) {
      local_e = 0;
    }
    local_e = (short)((int)local_e << (('\x03' - cVar1) * '\x04' & 0x1fU));
    local_10 = (local_10 - (short)((int)(short)uVar2 << (('\x03' - cVar1) * '\x04' & 0x1fU))) +
               local_e;
    if (param_3 < 4) {
      *(short *)(this + param_2 * 8 + 9) = local_10;
    }
    else {
      *(short *)(this + param_2 * 8 + 0xb) = local_10;
    }
    MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_21,1);
    local_21[0] = (MissionClearCondition_Parameter)0x1;
    std::vector<int,std::allocator<int>>::vector(local_30);
                    /* try { // try from 085e67c7 to 085e67f6 has its CatchHandler @ 085e680f */
    check_mission_kind(this,param_2,param_1,local_21,(vector *)local_30);
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 != '\x01') {
      Send_Cleared_Mission_List(this,param_1,(vector *)local_30);
    }
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::~vector(local_30);
  }
  return;
}

```

---

## Update_EnterWorld_event

```asm
// === 085e600a CMissionList_Charac::Update_EnterWorld_event  [0x085e600a-0x85e612d] ===
 85e600a:	55                   	push   %ebp
 85e600b:	89 e5                	mov    %esp,%ebp
 85e600d:	56                   	push   %esi
 85e600e:	53                   	push   %ebx
 85e600f:	83 ec 40             	sub    $0x40,%esp
 85e6012:	e8 90 43 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e6017:	89 04 24             	mov    %eax,(%esp)
 85e601a:	e8 01 0b b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e601f:	83 f8 0f             	cmp    $0xf,%eax
 85e6022:	74 19                	je     85e603d <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser+0x33>
 85e6024:	e8 7e 43 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e6029:	89 04 24             	mov    %eax,(%esp)
 85e602c:	e8 ef 0a b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e6031:	83 f8 10             	cmp    $0x10,%eax
 85e6034:	74 07                	je     85e603d <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser+0x33>
 85e6036:	b8 01 00 00 00       	mov    $0x1,%eax
 85e603b:	eb 05                	jmp    85e6042 <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser+0x38>
 85e603d:	b8 00 00 00 00       	mov    $0x0,%eax
 85e6042:	84 c0                	test   %al,%al
 85e6044:	0f 85 dc 00 00 00    	jne    85e6126 <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser+0x11c>
 85e604a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e604d:	89 04 24             	mov    %eax,(%esp)
 85e6050:	e8 6f 2b ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e6055:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6058:	89 04 24             	mov    %eax,(%esp)
 85e605b:	e8 4c 81 aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e6060:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85e6067:	00 
 85e6068:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85e606b:	89 04 24             	mov    %eax,(%esp)
 85e606e:	e8 d1 b9 ff ff       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85e6073:	e8 23 61 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e6078:	89 04 24             	mov    %eax,(%esp)
 85e607b:	e8 28 08 00 00       	call   85e68a8 <_ZN12CDataManager17GetPvPChannelTypeEv>
 85e6080:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85e6083:	e8 1f 43 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e6088:	89 04 24             	mov    %eax,(%esp)
 85e608b:	e8 90 0a b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e6090:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85e6093:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6096:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e609a:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85e609d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e60a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e60a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e60a8:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 85e60af:	00 
 85e60b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e60b3:	89 04 24             	mov    %eax,(%esp)
 85e60b6:	e8 c1 01 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e60bb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e60be:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e60c2:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85e60c5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e60c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e60cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e60d0:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 85e60d7:	00 
 85e60d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e60db:	89 04 24             	mov    %eax,(%esp)
 85e60de:	e8 99 01 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e60e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e60e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e60ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e60ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e60f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e60f4:	89 04 24             	mov    %eax,(%esp)
 85e60f7:	e8 64 f6 ff ff       	call   85e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>
 85e60fc:	eb 1b                	jmp    85e6119 <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser+0x10f>
 85e60fe:	89 d3                	mov    %edx,%ebx
 85e6100:	89 c6                	mov    %eax,%esi
 85e6102:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6105:	89 04 24             	mov    %eax,(%esp)
 85e6108:	e8 cd dc a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e610d:	89 f0                	mov    %esi,%eax
 85e610f:	89 da                	mov    %ebx,%edx
 85e6111:	89 04 24             	mov    %eax,(%esp)
 85e6114:	e8 37 d6 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e6119:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e611c:	89 04 24             	mov    %eax,(%esp)
 85e611f:	e8 b6 dc a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e6124:	eb 01                	jmp    85e6127 <_ZN19CMissionList_Charac23Update_EnterWorld_eventER5CUser+0x11d>
 85e6126:	90                   	nop
 85e6127:	83 c4 40             	add    $0x40,%esp
 85e612a:	5b                   	pop    %ebx
 85e612b:	5e                   	pop    %esi
 85e612c:	5d                   	pop    %ebp
 85e612d:	c3                   	ret

```

```c
// CMissionList_Charac::Update_EnterWorld_event @ 0x85e600a

/* CMissionList_Charac::Update_EnterWorld_event(CUser&) */

void __thiscall
CMissionList_Charac::Update_EnterWorld_event(CMissionList_Charac *this,CUser *param_1)

{
  bool bVar1;
  GameWorld *pGVar2;
  int iVar3;
  CDataManager *this_00;
  MissionClearCondition_Parameter local_27 [7];
  undefined4 local_20;
  undefined4 local_1c;
  vector<int,std::allocator<int>> local_18 [12];
  
  pGVar2 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar2);
  if (iVar3 != 0xf) {
    pGVar2 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar2);
    if (iVar3 != 0x10) {
      bVar1 = true;
      goto LAB_085e6042;
    }
  }
  bVar1 = false;
LAB_085e6042:
  if (!bVar1) {
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::vector(local_18);
    MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_27,2);
                    /* try { // try from 085e6073 to 085e60fb has its CatchHandler @ 085e60fe */
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = CDataManager::GetPvPChannelType(this_00);
    pGVar2 = (GameWorld *)G_GameWorld();
    local_20 = GameWorld::GetChannelType(pGVar2);
    check_mission_kind(this,7,param_1,local_27,(vector *)local_18);
    check_mission_kind(this,0x1e,param_1,local_27,(vector *)local_18);
    Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}

```

---

## Update_GameOver_event

```asm
// === 085e5e4a CMissionList_Charac::Update_GameOver_event  [0x085e5e4a-0x85e6009] ===
 85e5e4a:	55                   	push   %ebp
 85e5e4b:	89 e5                	mov    %esp,%ebp
 85e5e4d:	56                   	push   %esi
 85e5e4e:	53                   	push   %ebx
 85e5e4f:	83 ec 30             	sub    $0x30,%esp
 85e5e52:	e8 50 45 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e5e57:	89 04 24             	mov    %eax,(%esp)
 85e5e5a:	e8 c1 0c b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e5e5f:	83 f8 0f             	cmp    $0xf,%eax
 85e5e62:	0f 95 c0             	setne  %al
 85e5e65:	84 c0                	test   %al,%al
 85e5e67:	0f 85 92 01 00 00    	jne    85e5fff <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter+0x1b5>
 85e5e6d:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e5e74:	00 
 85e5e75:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5e78:	89 04 24             	mov    %eax,(%esp)
 85e5e7b:	e8 48 ed ff ff       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e5e80:	66 85 c0             	test   %ax,%ax
 85e5e83:	0f 95 c0             	setne  %al
 85e5e86:	84 c0                	test   %al,%al
 85e5e88:	0f 85 74 01 00 00    	jne    85e6002 <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter+0x1b8>
 85e5e8e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5e91:	89 04 24             	mov    %eax,(%esp)
 85e5e94:	e8 2b 2d ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e5e99:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5e9c:	89 04 24             	mov    %eax,(%esp)
 85e5e9f:	e8 08 83 aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e5ea4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5ea7:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5eab:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5eae:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5eb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5eb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5eb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e5ec0:	00 
 85e5ec1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5ec4:	89 04 24             	mov    %eax,(%esp)
 85e5ec7:	e8 b0 03 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5ecc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5ecf:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5ed3:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5ed6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5eda:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5edd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5ee1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85e5ee8:	00 
 85e5ee9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5eec:	89 04 24             	mov    %eax,(%esp)
 85e5eef:	e8 88 03 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5ef4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5ef7:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5efb:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5efe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5f02:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5f05:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5f09:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85e5f10:	00 
 85e5f11:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5f14:	89 04 24             	mov    %eax,(%esp)
 85e5f17:	e8 60 03 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5f1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5f1f:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5f23:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5f26:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5f2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5f2d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5f31:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 85e5f38:	00 
 85e5f39:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5f3c:	89 04 24             	mov    %eax,(%esp)
 85e5f3f:	e8 38 03 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5f44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5f47:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5f4b:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5f4e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5f52:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5f55:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5f59:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 85e5f60:	00 
 85e5f61:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5f64:	89 04 24             	mov    %eax,(%esp)
 85e5f67:	e8 10 03 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5f6c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5f6f:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5f73:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5f76:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5f7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5f7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5f81:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 85e5f88:	00 
 85e5f89:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5f8c:	89 04 24             	mov    %eax,(%esp)
 85e5f8f:	e8 e8 02 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5f94:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5f97:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5f9b:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5f9e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5fa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5fa5:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5fa9:	c7 44 24 04 17 00 00 	movl   $0x17,0x4(%esp)
 85e5fb0:	00 
 85e5fb1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5fb4:	89 04 24             	mov    %eax,(%esp)
 85e5fb7:	e8 c0 02 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5fbc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5fbf:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5fc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5fc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5fca:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5fcd:	89 04 24             	mov    %eax,(%esp)
 85e5fd0:	e8 8b f7 ff ff       	call   85e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>
 85e5fd5:	eb 1b                	jmp    85e5ff2 <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter+0x1a8>
 85e5fd7:	89 d3                	mov    %edx,%ebx
 85e5fd9:	89 c6                	mov    %eax,%esi
 85e5fdb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5fde:	89 04 24             	mov    %eax,(%esp)
 85e5fe1:	e8 f4 dd a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e5fe6:	89 f0                	mov    %esi,%eax
 85e5fe8:	89 da                	mov    %ebx,%edx
 85e5fea:	89 04 24             	mov    %eax,(%esp)
 85e5fed:	e8 5e d7 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e5ff2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5ff5:	89 04 24             	mov    %eax,(%esp)
 85e5ff8:	e8 dd dd a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e5ffd:	eb 04                	jmp    85e6003 <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter+0x1b9>
 85e5fff:	90                   	nop
 85e6000:	eb 01                	jmp    85e6003 <_ZN19CMissionList_Charac21Update_GameOver_eventER5CUserRK31MissionClearCondition_Parameter+0x1b9>
 85e6002:	90                   	nop
 85e6003:	83 c4 30             	add    $0x30,%esp
 85e6006:	5b                   	pop    %ebx
 85e6007:	5e                   	pop    %esi
 85e6008:	5d                   	pop    %ebp
 85e6009:	c3                   	ret

```

```c
// CMissionList_Charac::Update_GameOver_event @ 0x85e5e4a

/* CMissionList_Charac::Update_GameOver_event(CUser&, MissionClearCondition_Parameter const&) */

void __thiscall
CMissionList_Charac::Update_GameOver_event
          (CMissionList_Charac *this,CUser *param_1,MissionClearCondition_Parameter *param_2)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::GetChannelType(this_00);
  if ((iVar2 == 0xf) && (sVar1 = getIndex_byKind(this,0x1b), sVar1 == 0)) {
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 085e5ec7 to 085e5fd4 has its CatchHandler @ 085e5fd7 */
    check_mission_kind(this,1,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,3,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,8,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0xd,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x10,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x12,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x17,param_1,param_2,(vector *)local_18);
    Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}

```

---

## Update_Kill_event

```asm
// === 085e58f4 CMissionList_Charac::Update_Kill_event  [0x085e58f4-0x85e59ef] ===
 85e58f4:	55                   	push   %ebp
 85e58f5:	89 e5                	mov    %esp,%ebp
 85e58f7:	56                   	push   %esi
 85e58f8:	53                   	push   %ebx
 85e58f9:	83 ec 30             	sub    $0x30,%esp
 85e58fc:	e8 a6 4a af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e5901:	89 04 24             	mov    %eax,(%esp)
 85e5904:	e8 17 12 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e5909:	83 f8 0f             	cmp    $0xf,%eax
 85e590c:	0f 95 c0             	setne  %al
 85e590f:	84 c0                	test   %al,%al
 85e5911:	0f 85 d1 00 00 00    	jne    85e59e8 <_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter+0xf4>
 85e5917:	8b 45 08             	mov    0x8(%ebp),%eax
 85e591a:	89 04 24             	mov    %eax,(%esp)
 85e591d:	e8 a2 32 ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e5922:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5925:	89 04 24             	mov    %eax,(%esp)
 85e5928:	e8 7f 88 aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e592d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5930:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5934:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5937:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e593b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e593e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5942:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 85e5949:	00 
 85e594a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e594d:	89 04 24             	mov    %eax,(%esp)
 85e5950:	e8 27 09 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5955:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5958:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e595c:	8b 45 10             	mov    0x10(%ebp),%eax
 85e595f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5963:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5966:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e596a:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 85e5971:	00 
 85e5972:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5975:	89 04 24             	mov    %eax,(%esp)
 85e5978:	e8 ff 08 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e597d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5980:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5984:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5987:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e598b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e598e:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5992:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 85e5999:	00 
 85e599a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e599d:	89 04 24             	mov    %eax,(%esp)
 85e59a0:	e8 d7 08 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e59a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e59a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e59ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e59af:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e59b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e59b6:	89 04 24             	mov    %eax,(%esp)
 85e59b9:	e8 a2 fd ff ff       	call   85e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>
 85e59be:	eb 1b                	jmp    85e59db <_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter+0xe7>
 85e59c0:	89 d3                	mov    %edx,%ebx
 85e59c2:	89 c6                	mov    %eax,%esi
 85e59c4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e59c7:	89 04 24             	mov    %eax,(%esp)
 85e59ca:	e8 0b e4 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e59cf:	89 f0                	mov    %esi,%eax
 85e59d1:	89 da                	mov    %ebx,%edx
 85e59d3:	89 04 24             	mov    %eax,(%esp)
 85e59d6:	e8 75 dd 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e59db:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e59de:	89 04 24             	mov    %eax,(%esp)
 85e59e1:	e8 f4 e3 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e59e6:	eb 01                	jmp    85e59e9 <_ZN19CMissionList_Charac17Update_Kill_eventER5CUserRK31MissionClearCondition_Parameter+0xf5>
 85e59e8:	90                   	nop
 85e59e9:	83 c4 30             	add    $0x30,%esp
 85e59ec:	5b                   	pop    %ebx
 85e59ed:	5e                   	pop    %esi
 85e59ee:	5d                   	pop    %ebp
 85e59ef:	c3                   	ret

```

```c
// CMissionList_Charac::Update_Kill_event @ 0x85e58f4

/* CMissionList_Charac::Update_Kill_event(CUser&, MissionClearCondition_Parameter const&) */

void __thiscall
CMissionList_Charac::Update_Kill_event
          (CMissionList_Charac *this,CUser *param_1,MissionClearCondition_Parameter *param_2)

{
  GameWorld *this_00;
  int iVar1;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 == 0xf) {
    charac_expand::CData::alter((CData *)this);
    std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 085e5950 to 085e59bd has its CatchHandler @ 085e59c0 */
    check_mission_kind(this,5,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0xf,param_1,param_2,(vector *)local_18);
    check_mission_kind(this,0x19,param_1,param_2,(vector *)local_18);
    Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}

```

---

## Update_RecvPacket_event

```asm
// === 085e5caa CMissionList_Charac::Update_RecvPacket_event  [0x085e5caa-0x85e5e49] ===
 85e5caa:	55                   	push   %ebp
 85e5cab:	89 e5                	mov    %esp,%ebp
 85e5cad:	53                   	push   %ebx
 85e5cae:	83 ec 54             	sub    $0x54,%esp
 85e5cb1:	e8 f1 46 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e5cb6:	89 04 24             	mov    %eax,(%esp)
 85e5cb9:	e8 62 0e b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e5cbe:	83 f8 0f             	cmp    $0xf,%eax
 85e5cc1:	0f 95 c0             	setne  %al
 85e5cc4:	84 c0                	test   %al,%al
 85e5cc6:	0f 85 71 01 00 00    	jne    85e5e3d <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x193>
 85e5ccc:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e5cd3:	00 
 85e5cd4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5cd7:	89 04 24             	mov    %eax,(%esp)
 85e5cda:	e8 e9 ee ff ff       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e5cdf:	66 85 c0             	test   %ax,%ax
 85e5ce2:	0f 95 c0             	setne  %al
 85e5ce5:	84 c0                	test   %al,%al
 85e5ce7:	0f 85 53 01 00 00    	jne    85e5e40 <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x196>
 85e5ced:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5cf0:	89 04 24             	mov    %eax,(%esp)
 85e5cf3:	e8 cc 2e ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e5cf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5cfb:	89 04 24             	mov    %eax,(%esp)
 85e5cfe:	e8 8b f4 06 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 85e5d03:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85e5d06:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85e5d0a:	0f 84 33 01 00 00    	je     85e5e43 <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x199>
 85e5d10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e5d13:	89 04 24             	mov    %eax,(%esp)
 85e5d16:	e8 b1 7c c4 ff       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 85e5d1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5d1f:	8d 45 cd             	lea    -0x33(%ebp),%eax
 85e5d22:	89 04 24             	mov    %eax,(%esp)
 85e5d25:	e8 1a bd ff ff       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85e5d2a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85e5d31:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e5d38:	e9 e5 00 00 00       	jmp    85e5e22 <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x178>
 85e5d3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e5d40:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5d44:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5d47:	89 04 24             	mov    %eax,(%esp)
 85e5d4a:	e8 99 91 b8 ff       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 85e5d4f:	0f b7 00             	movzwl (%eax),%eax
 85e5d52:	0f bf d8             	movswl %ax,%ebx
 85e5d55:	e8 41 64 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e5d5a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e5d5e:	89 04 24             	mov    %eax,(%esp)
 85e5d61:	e8 20 9d d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e5d66:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e5d69:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85e5d6d:	0f 84 aa 00 00 00    	je     85e5e1d <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x173>
 85e5d73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e5d76:	89 04 24             	mov    %eax,(%esp)
 85e5d79:	e8 94 0b 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e5d7e:	83 f8 06             	cmp    $0x6,%eax
 85e5d81:	74 17                	je     85e5d9a <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0xf0>
 85e5d83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e5d86:	89 04 24             	mov    %eax,(%esp)
 85e5d89:	e8 84 0b 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e5d8e:	83 f8 15             	cmp    $0x15,%eax
 85e5d91:	74 07                	je     85e5d9a <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0xf0>
 85e5d93:	b8 01 00 00 00       	mov    $0x1,%eax
 85e5d98:	eb 05                	jmp    85e5d9f <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0xf5>
 85e5d9a:	b8 00 00 00 00       	mov    $0x0,%eax
 85e5d9f:	84 c0                	test   %al,%al
 85e5da1:	74 49                	je     85e5dec <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x142>
 85e5da3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e5da6:	89 04 24             	mov    %eax,(%esp)
 85e5da9:	e8 64 0b 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e5dae:	89 c3                	mov    %eax,%ebx
 85e5db0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85e5db7:	00 
 85e5db8:	c7 44 24 08 04 07 00 	movl   $0x704,0x8(%esp)
 85e5dbf:	00 
 85e5dc0:	c7 44 24 04 20 3a cc 	movl   $0x8cc3a20,0x4(%esp)
 85e5dc7:	08 
 85e5dc8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e5dcb:	89 04 24             	mov    %eax,(%esp)
 85e5dce:	e8 45 99 f6 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85e5dd3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85e5dd7:	c7 44 24 04 f0 2c cc 	movl   $0x8cc2cf0,0x4(%esp)
 85e5dde:	08 
 85e5ddf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e5de2:	89 04 24             	mov    %eax,(%esp)
 85e5de5:	e8 9e 99 f6 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85e5dea:	eb 32                	jmp    85e5e1e <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x174>
 85e5dec:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e5def:	89 04 24             	mov    %eax,(%esp)
 85e5df2:	e8 1b 0b 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e5df7:	8b 55 14             	mov    0x14(%ebp),%edx
 85e5dfa:	89 54 24 10          	mov    %edx,0x10(%esp)
 85e5dfe:	8d 55 cd             	lea    -0x33(%ebp),%edx
 85e5e01:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85e5e05:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e5e08:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e5e0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5e10:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5e13:	89 04 24             	mov    %eax,(%esp)
 85e5e16:	e8 61 04 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5e1b:	eb 01                	jmp    85e5e1e <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x174>
 85e5e1d:	90                   	nop
 85e5e1e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e5e22:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5e25:	89 04 24             	mov    %eax,(%esp)
 85e5e28:	e8 a1 90 b8 ff       	call   816eece <_ZNKSt6vectorIsSaIsEE4sizeEv>
 85e5e2d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85e5e30:	0f 97 c0             	seta   %al
 85e5e33:	84 c0                	test   %al,%al
 85e5e35:	0f 85 02 ff ff ff    	jne    85e5d3d <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x93>
 85e5e3b:	eb 07                	jmp    85e5e44 <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x19a>
 85e5e3d:	90                   	nop
 85e5e3e:	eb 04                	jmp    85e5e44 <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x19a>
 85e5e40:	90                   	nop
 85e5e41:	eb 01                	jmp    85e5e44 <_ZN19CMissionList_Charac23Update_RecvPacket_eventER5CUserRSt6vectorIsSaIsEERS2_IiSaIiEE+0x19a>
 85e5e43:	90                   	nop
 85e5e44:	83 c4 54             	add    $0x54,%esp
 85e5e47:	5b                   	pop    %ebx
 85e5e48:	5d                   	pop    %ebp
 85e5e49:	c3                   	ret

```

```c
// CMissionList_Charac::Update_RecvPacket_event @ 0x85e5caa

/* CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short, std::allocator<short> >&,
   std::vector<int, std::allocator<int> >&) */

void __thiscall
CMissionList_Charac::Update_RecvPacket_event
          (CMissionList_Charac *this,CUser *param_1,vector *param_2,vector *param_3)

{
  bool bVar1;
  short sVar2;
  GameWorld *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  MissionClearCondition_Parameter local_37 [15];
  cMyTrace local_28 [16];
  PvP_Room *local_18;
  CMission *local_14;
  uint local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(this_00);
  if ((iVar3 == 0xf) && (sVar2 = getIndex_byKind(this,0x1b), sVar2 == 0)) {
    charac_expand::CData::alter((CData *)this);
    local_18 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (local_18 != (PvP_Room *)0x0) {
      uVar4 = PvP_Room::get_pvp_battle_mode(local_18);
      MissionClearCondition_Parameter::MissionClearCondition_Parameter(local_37,uVar4);
      local_14 = (CMission *)0x0;
      local_10 = 0;
      while (uVar5 = std::vector<short,std::allocator<short>>::size
                               ((vector<short,std::allocator<short>> *)param_2), local_10 < uVar5) {
        std::vector<short,std::allocator<short>>::operator[]
                  ((vector<short,std::allocator<short>> *)param_2,local_10);
        iVar3 = G_CDataManager();
        local_14 = (CMission *)CDataManager::find_mission(iVar3);
        if (local_14 != (CMission *)0x0) {
          iVar3 = CMission::GetMissionKind(local_14);
          if ((iVar3 == 6) || (iVar3 = CMission::GetMissionKind(local_14), iVar3 == 0x15)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            uVar4 = CMission::GetMissionKind(local_14);
            cMyTrace::cMyTrace(local_28,
                               "void CMissionList_Charac::Update_RecvPacket_event(CUser&, std::vector<short int, std::allocator<short int> >&, std::vector<int, std::allocator<int> >&)"
                               ,0x704,5);
            cMyTrace::operator()(local_28,"[@missionSystem] HackUser! send [%d kind]\n",uVar4);
          }
          else {
            uVar5 = CMission::GetMissionKind(local_14);
            check_mission_kind(this,uVar5,param_1,local_37,param_3);
          }
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return;
}

```

---

## Update_Revenge_event

```asm
// === 085e612e CMissionList_Charac::Update_Revenge_event  [0x085e612e-0x85e627b] ===
 85e612e:	55                   	push   %ebp
 85e612f:	89 e5                	mov    %esp,%ebp
 85e6131:	56                   	push   %esi
 85e6132:	53                   	push   %ebx
 85e6133:	83 ec 50             	sub    $0x50,%esp
 85e6136:	8b 45 14             	mov    0x14(%ebp),%eax
 85e6139:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85e613c:	e8 66 42 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e6141:	89 04 24             	mov    %eax,(%esp)
 85e6144:	e8 d7 09 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e6149:	83 f8 0f             	cmp    $0xf,%eax
 85e614c:	0f 95 c0             	setne  %al
 85e614f:	84 c0                	test   %al,%al
 85e6151:	0f 85 1a 01 00 00    	jne    85e6271 <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x143>
 85e6157:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e615e:	00 
 85e615f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6162:	89 04 24             	mov    %eax,(%esp)
 85e6165:	e8 5e ea ff ff       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e616a:	66 85 c0             	test   %ax,%ax
 85e616d:	0f 95 c0             	setne  %al
 85e6170:	84 c0                	test   %al,%al
 85e6172:	0f 85 fc 00 00 00    	jne    85e6274 <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x146>
 85e6178:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 85e617c:	0f 84 d8 00 00 00    	je     85e625a <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x12c>
 85e6182:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6185:	89 04 24             	mov    %eax,(%esp)
 85e6188:	e8 37 2a ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e618d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6190:	89 04 24             	mov    %eax,(%esp)
 85e6193:	e8 14 80 aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e6198:	8b 45 10             	mov    0x10(%ebp),%eax
 85e619b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e619f:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85e61a2:	89 04 24             	mov    %eax,(%esp)
 85e61a5:	e8 9a b8 ff ff       	call   85e1a44 <_ZN31MissionClearCondition_ParameterC1E15PVP_BATTLE_MODE>
 85e61aa:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 85e61ae:	0f 94 c0             	sete   %al
 85e61b1:	0f b6 c0             	movzbl %al,%eax
 85e61b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e61b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e61bb:	89 04 24             	mov    %eax,(%esp)
 85e61be:	e8 d1 ef ff ff       	call   85e5194 <_ZNK19CMissionList_Charac13getIssue_modeEb>
 85e61c3:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 85e61c7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e61ca:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e61ce:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85e61d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e61d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e61d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e61dc:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 85e61e3:	00 
 85e61e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e61e7:	89 04 24             	mov    %eax,(%esp)
 85e61ea:	e8 8d 00 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e61ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e61f2:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e61f6:	8d 45 dd             	lea    -0x23(%ebp),%eax
 85e61f9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e61fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e6200:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e6204:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 85e620b:	00 
 85e620c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e620f:	89 04 24             	mov    %eax,(%esp)
 85e6212:	e8 65 00 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e6217:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e621a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e621e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e6221:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e6225:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6228:	89 04 24             	mov    %eax,(%esp)
 85e622b:	e8 30 f5 ff ff       	call   85e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>
 85e6230:	eb 1b                	jmp    85e624d <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x11f>
 85e6232:	89 d3                	mov    %edx,%ebx
 85e6234:	89 c6                	mov    %eax,%esi
 85e6236:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6239:	89 04 24             	mov    %eax,(%esp)
 85e623c:	e8 99 db a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e6241:	89 f0                	mov    %esi,%eax
 85e6243:	89 da                	mov    %ebx,%edx
 85e6245:	89 04 24             	mov    %eax,(%esp)
 85e6248:	e8 03 d5 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e624d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6250:	89 04 24             	mov    %eax,(%esp)
 85e6253:	e8 82 db a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e6258:	eb 1b                	jmp    85e6275 <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x147>
 85e625a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e625d:	66 c7 40 6b 00 00    	movw   $0x0,0x6b(%eax)
 85e6263:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6266:	66 c7 80 bb 00 00 00 	movw   $0x0,0xbb(%eax)
 85e626d:	00 00 
 85e626f:	eb 04                	jmp    85e6275 <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x147>
 85e6271:	90                   	nop
 85e6272:	eb 01                	jmp    85e6275 <_ZN19CMissionList_Charac20Update_Revenge_eventER5CUser15PVP_BATTLE_MODEb+0x147>
 85e6274:	90                   	nop
 85e6275:	83 c4 50             	add    $0x50,%esp
 85e6278:	5b                   	pop    %ebx
 85e6279:	5e                   	pop    %esi
 85e627a:	5d                   	pop    %ebp
 85e627b:	c3                   	ret

```

```c
// CMissionList_Charac::Update_Revenge_event @ 0x85e612e

/* CMissionList_Charac::Update_Revenge_event(CUser&, PVP_BATTLE_MODE, bool) */

void __thiscall
CMissionList_Charac::Update_Revenge_event
          (CMissionList_Charac *this,CUser *param_1,int param_3,char param_4)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  MissionClearCondition_Parameter local_27;
  undefined2 local_26;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::GetChannelType(this_00);
  if ((iVar2 == 0xf) && (sVar1 = getIndex_byKind(this,0x1b), sVar1 == 0)) {
    if (param_4 == '\0') {
      *(undefined2 *)(this + 0x6b) = 0;
      *(undefined2 *)(this + 0xbb) = 0;
    }
    else {
      charac_expand::CData::alter((CData *)this);
      std::vector<int,std::allocator<int>>::vector(local_18);
      MissionClearCondition_Parameter::MissionClearCondition_Parameter(&local_27,param_3);
      local_26 = getIssue_mode(this,param_3 == 2);
                    /* try { // try from 085e61ea to 085e622f has its CatchHandler @ 085e6232 */
      check_mission_kind(this,0xc,param_1,&local_27,(vector *)local_18);
      check_mission_kind(this,0x16,param_1,&local_27,(vector *)local_18);
      Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
      std::vector<int,std::allocator<int>>::~vector(local_18);
    }
  }
  return;
}

```

---

## Update_Win_event

```asm
// === 085e59f0 CMissionList_Charac::Update_Win_event  [0x085e59f0-0x85e5ca9] ===
 85e59f0:	55                   	push   %ebp
 85e59f1:	89 e5                	mov    %esp,%ebp
 85e59f3:	56                   	push   %esi
 85e59f4:	53                   	push   %ebx
 85e59f5:	83 ec 30             	sub    $0x30,%esp
 85e59f8:	e8 aa 49 af ff       	call   80da3a7 <_Z11G_GameWorldv>
 85e59fd:	89 04 24             	mov    %eax,(%esp)
 85e5a00:	e8 1b 11 b3 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85e5a05:	83 f8 0f             	cmp    $0xf,%eax
 85e5a08:	0f 95 c0             	setne  %al
 85e5a0b:	84 c0                	test   %al,%al
 85e5a0d:	0f 85 88 02 00 00    	jne    85e5c9b <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x2ab>
 85e5a13:	8b 45 14             	mov    0x14(%ebp),%eax
 85e5a16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5a1a:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5a1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5a21:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5a24:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5a28:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5a2b:	89 04 24             	mov    %eax,(%esp)
 85e5a2e:	e8 fd 16 00 00       	call   85e7130 <_ZN19CMissionList_Charac27Update_Within_Mission_eventER5CUserRK31MissionClearCondition_ParameterRb>
 85e5a33:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5a36:	89 04 24             	mov    %eax,(%esp)
 85e5a39:	e8 86 31 ae ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85e5a3e:	8b 45 14             	mov    0x14(%ebp),%eax
 85e5a41:	0f b6 00             	movzbl (%eax),%eax
 85e5a44:	84 c0                	test   %al,%al
 85e5a46:	0f 85 52 02 00 00    	jne    85e5c9e <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x2ae>
 85e5a4c:	c7 44 24 04 1b 00 00 	movl   $0x1b,0x4(%esp)
 85e5a53:	00 
 85e5a54:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5a57:	89 04 24             	mov    %eax,(%esp)
 85e5a5a:	e8 69 f1 ff ff       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e5a5f:	66 85 c0             	test   %ax,%ax
 85e5a62:	0f 95 c0             	setne  %al
 85e5a65:	84 c0                	test   %al,%al
 85e5a67:	0f 85 34 02 00 00    	jne    85e5ca1 <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x2b1>
 85e5a6d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5a70:	89 04 24             	mov    %eax,(%esp)
 85e5a73:	e8 34 87 aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e5a78:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5a7b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5a7f:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5a82:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5a86:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5a89:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5a8d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85e5a94:	00 
 85e5a95:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5a98:	89 04 24             	mov    %eax,(%esp)
 85e5a9b:	e8 dc 07 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5aa0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5aa3:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5aa7:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5aaa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5aae:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5ab1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5ab5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85e5abc:	00 
 85e5abd:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5ac0:	89 04 24             	mov    %eax,(%esp)
 85e5ac3:	e8 b4 07 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5ac8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5acb:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5acf:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5ad2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5ad6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5ad9:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5add:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 85e5ae4:	00 
 85e5ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5ae8:	89 04 24             	mov    %eax,(%esp)
 85e5aeb:	e8 8c 07 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5af0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5af3:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5af7:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5afa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5afe:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5b01:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5b05:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 85e5b0c:	00 
 85e5b0d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5b10:	89 04 24             	mov    %eax,(%esp)
 85e5b13:	e8 64 07 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5b18:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5b1b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5b1f:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5b22:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5b26:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5b29:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5b2d:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 85e5b34:	00 
 85e5b35:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5b38:	89 04 24             	mov    %eax,(%esp)
 85e5b3b:	e8 3c 07 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5b40:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5b43:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5b47:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5b4a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5b4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5b51:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5b55:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 85e5b5c:	00 
 85e5b5d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5b60:	89 04 24             	mov    %eax,(%esp)
 85e5b63:	e8 14 07 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5b68:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5b6b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5b6f:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5b72:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5b76:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5b79:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5b7d:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85e5b84:	00 
 85e5b85:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5b88:	89 04 24             	mov    %eax,(%esp)
 85e5b8b:	e8 ec 06 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5b90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5b93:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5b97:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5b9a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5b9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5ba1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5ba5:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 85e5bac:	00 
 85e5bad:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5bb0:	89 04 24             	mov    %eax,(%esp)
 85e5bb3:	e8 c4 06 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5bb8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5bbb:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5bbf:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5bc2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5bc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5bc9:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5bcd:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 85e5bd4:	00 
 85e5bd5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5bd8:	89 04 24             	mov    %eax,(%esp)
 85e5bdb:	e8 9c 06 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5be0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5be3:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5be7:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5bea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5bee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5bf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5bf5:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 85e5bfc:	00 
 85e5bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5c00:	89 04 24             	mov    %eax,(%esp)
 85e5c03:	e8 74 06 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5c08:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5c0b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5c0f:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5c12:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5c16:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5c19:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5c1d:	c7 44 24 04 18 00 00 	movl   $0x18,0x4(%esp)
 85e5c24:	00 
 85e5c25:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5c28:	89 04 24             	mov    %eax,(%esp)
 85e5c2b:	e8 4c 06 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5c30:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5c33:	89 44 24 10          	mov    %eax,0x10(%esp)
 85e5c37:	8b 45 10             	mov    0x10(%ebp),%eax
 85e5c3a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e5c3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5c41:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5c45:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 85e5c4c:	00 
 85e5c4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5c50:	89 04 24             	mov    %eax,(%esp)
 85e5c53:	e8 24 06 00 00       	call   85e627c <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE>
 85e5c58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5c5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e5c5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5c62:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e5c66:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5c69:	89 04 24             	mov    %eax,(%esp)
 85e5c6c:	e8 ef fa ff ff       	call   85e5760 <_ZN19CMissionList_Charac25Send_Cleared_Mission_ListER5CUserRKSt6vectorIiSaIiEE>
 85e5c71:	eb 1b                	jmp    85e5c8e <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x29e>
 85e5c73:	89 d3                	mov    %edx,%ebx
 85e5c75:	89 c6                	mov    %eax,%esi
 85e5c77:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5c7a:	89 04 24             	mov    %eax,(%esp)
 85e5c7d:	e8 58 e1 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e5c82:	89 f0                	mov    %esi,%eax
 85e5c84:	89 da                	mov    %ebx,%edx
 85e5c86:	89 04 24             	mov    %eax,(%esp)
 85e5c89:	e8 c2 da 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e5c8e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e5c91:	89 04 24             	mov    %eax,(%esp)
 85e5c94:	e8 41 e1 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e5c99:	eb 07                	jmp    85e5ca2 <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x2b2>
 85e5c9b:	90                   	nop
 85e5c9c:	eb 04                	jmp    85e5ca2 <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x2b2>
 85e5c9e:	90                   	nop
 85e5c9f:	eb 01                	jmp    85e5ca2 <_ZN19CMissionList_Charac16Update_Win_eventER5CUserRK31MissionClearCondition_ParameterRb+0x2b2>
 85e5ca1:	90                   	nop
 85e5ca2:	83 c4 30             	add    $0x30,%esp
 85e5ca5:	5b                   	pop    %ebx
 85e5ca6:	5e                   	pop    %esi
 85e5ca7:	5d                   	pop    %ebp
 85e5ca8:	c3                   	ret
 85e5ca9:	90                   	nop

```

```c
// CMissionList_Charac::Update_Win_event @ 0x85e59f0

/* CMissionList_Charac::Update_Win_event(CUser&, MissionClearCondition_Parameter const&, bool&) */

void __thiscall
CMissionList_Charac::Update_Win_event
          (CMissionList_Charac *this,CUser *param_1,MissionClearCondition_Parameter *param_2,
          bool *param_3)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  vector<int,std::allocator<int>> local_18 [12];
  
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GameWorld::GetChannelType(this_00);
  if (iVar2 == 0xf) {
    Update_Within_Mission_event(this,param_1,param_2,param_3);
    charac_expand::CData::alter((CData *)this);
    if ((*param_3 == false) && (sVar1 = getIndex_byKind(this,0x1b), sVar1 == 0)) {
      std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 085e5a9b to 085e5c70 has its CatchHandler @ 085e5c73 */
      check_mission_kind(this,2,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,4,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,9,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,10,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0xc,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0xe,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x11,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x13,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x14,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x16,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x18,param_1,param_2,(vector *)local_18);
      check_mission_kind(this,0x1a,param_1,param_2,(vector *)local_18);
      Send_Cleared_Mission_List(this,param_1,(vector *)local_18);
      std::vector<int,std::allocator<int>>::~vector(local_18);
    }
  }
  return;
}

```

---

## _reset

```asm
// === 085e476c CMissionList_Charac::_reset  [0x085e476c-0x85e47dd] ===
 85e476c:	55                   	push   %ebp
 85e476d:	89 e5                	mov    %esp,%ebp
 85e476f:	83 ec 18             	sub    $0x18,%esp
 85e4772:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4775:	83 c0 05             	add    $0x5,%eax
 85e4778:	c7 44 24 08 20 01 00 	movl   $0x120,0x8(%esp)
 85e477f:	00 
 85e4780:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e4787:	00 
 85e4788:	89 04 24             	mov    %eax,(%esp)
 85e478b:	e8 30 95 a9 ff       	call   807dcc0 <memset@plt>
 85e4790:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4793:	05 28 01 00 00       	add    $0x128,%eax
 85e4798:	89 04 24             	mov    %eax,(%esp)
 85e479b:	e8 cc 38 00 00       	call   85e806c <_ZNSt6bitsetILj256EE5resetEv>
 85e47a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47a3:	66 c7 80 48 01 00 00 	movw   $0x0,0x148(%eax)
 85e47aa:	00 00 
 85e47ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47af:	66 c7 80 4a 01 00 00 	movw   $0x0,0x14a(%eax)
 85e47b6:	00 00 
 85e47b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47bb:	66 c7 80 4c 01 00 00 	movw   $0x0,0x14c(%eax)
 85e47c2:	00 00 
 85e47c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47c7:	c6 80 4e 01 00 00 00 	movb   $0x0,0x14e(%eax)
 85e47ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47d1:	c7 80 54 01 00 00 00 	movl   $0x0,0x154(%eax)
 85e47d8:	00 00 00 
 85e47db:	c9                   	leave
 85e47dc:	c3                   	ret
 85e47dd:	90                   	nop

```

```c
// CMissionList_Charac::_reset @ 0x85e476c

/* CMissionList_Charac::_reset() */

void __thiscall CMissionList_Charac::_reset(CMissionList_Charac *this)

{
  memset(this + 5,0,0x120);
  std::bitset<256u>::reset((bitset<256u> *)(this + 0x128));
  *(undefined2 *)(this + 0x148) = 0;
  *(undefined2 *)(this + 0x14a) = 0;
  *(undefined2 *)(this + 0x14c) = 0;
  this[0x14e] = (CMissionList_Charac)0x0;
  *(undefined4 *)(this + 0x154) = 0;
  return;
}

```

---

## _saveData

```asm
// === 085e4576 CMissionList_Charac::_saveData  [0x085e4576-0x85e476b] ===
 85e4576:	55                   	push   %ebp
 85e4577:	89 e5                	mov    %esp,%ebp
 85e4579:	56                   	push   %esi
 85e457a:	53                   	push   %ebx
 85e457b:	83 ec 20             	sub    $0x20,%esp
 85e457e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85e4583:	c7 44 24 08 a5 04 00 	movl   $0x4a5,0x8(%esp)
 85e458a:	00 
 85e458b:	c7 44 24 04 a8 2c cc 	movl   $0x8cc2ca8,0x4(%esp)
 85e4592:	08 
 85e4593:	89 04 24             	mov    %eax,(%esp)
 85e4596:	e8 eb b4 ca ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85e459b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85e45a2:	00 
 85e45a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e45a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e45aa:	89 04 24             	mov    %eax,(%esp)
 85e45ad:	e8 74 46 ae ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85e45b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e45b5:	89 04 24             	mov    %eax,(%esp)
 85e45b8:	e8 89 46 ae ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85e45bd:	c7 44 24 04 63 02 00 	movl   $0x263,0x4(%esp)
 85e45c4:	00 
 85e45c5:	89 04 24             	mov    %eax,(%esp)
 85e45c8:	e8 89 46 ae ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85e45cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e45d0:	89 04 24             	mov    %eax,(%esp)
 85e45d3:	e8 be 46 ae ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85e45d8:	89 c3                	mov    %eax,%ebx
 85e45da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e45dd:	89 04 24             	mov    %eax,(%esp)
 85e45e0:	e8 61 46 ae ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85e45e5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e45e9:	89 04 24             	mov    %eax,(%esp)
 85e45ec:	e8 65 46 ae ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85e45f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e45f4:	89 04 24             	mov    %eax,(%esp)
 85e45f7:	e8 52 46 ae ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85e45fc:	89 04 24             	mov    %eax,(%esp)
 85e45ff:	e8 52 3a 00 00       	call   85e8056 <_ZN12CStreamGuard11GetInBufferI28SIG_REQUEST_PVP_MISSION_LISTEEPT_v>
 85e4604:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e4607:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85e460b:	75 0a                	jne    85e4617 <_ZN19CMissionList_Charac9_saveDataEP5CUser+0xa1>
 85e460d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85e4612:	e9 40 01 00 00       	jmp    85e4757 <_ZN19CMissionList_Charac9_saveDataEP5CUser+0x1e1>
 85e4617:	c7 44 24 08 4a 01 00 	movl   $0x14a,0x8(%esp)
 85e461e:	00 
 85e461f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e4626:	00 
 85e4627:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e462a:	89 04 24             	mov    %eax,(%esp)
 85e462d:	e8 8e 96 a9 ff       	call   807dcc0 <memset@plt>
 85e4632:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85e4639:	ff 
 85e463a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e463d:	89 04 24             	mov    %eax,(%esp)
 85e4640:	e8 5b 99 06 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85e4645:	89 c2                	mov    %eax,%edx
 85e4647:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e464a:	89 10                	mov    %edx,(%eax)
 85e464c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e4653:	eb 5c                	jmp    85e46b1 <_ZN19CMissionList_Charac9_saveDataEP5CUser+0x13b>
 85e4655:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4658:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e465b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e465e:	0f b7 4c c8 07       	movzwl 0x7(%eax,%ecx,8),%ecx
 85e4663:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4666:	66 89 4c d0 06       	mov    %cx,0x6(%eax,%edx,8)
 85e466b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e466e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e4671:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4674:	0f b7 4c c8 05       	movzwl 0x5(%eax,%ecx,8),%ecx
 85e4679:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e467c:	66 89 4c d0 04       	mov    %cx,0x4(%eax,%edx,8)
 85e4681:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4684:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e4687:	8b 45 08             	mov    0x8(%ebp),%eax
 85e468a:	0f b7 4c c8 09       	movzwl 0x9(%eax,%ecx,8),%ecx
 85e468f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4692:	66 89 4c d0 08       	mov    %cx,0x8(%eax,%edx,8)
 85e4697:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e469a:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e469d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e46a0:	0f b7 4c c8 0b       	movzwl 0xb(%eax,%ecx,8),%ecx
 85e46a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e46a8:	66 89 4c d0 0a       	mov    %cx,0xa(%eax,%edx,8)
 85e46ad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e46b1:	83 7d f4 23          	cmpl   $0x23,-0xc(%ebp)
 85e46b5:	0f 9e c0             	setle  %al
 85e46b8:	84 c0                	test   %al,%al
 85e46ba:	75 99                	jne    85e4655 <_ZN19CMissionList_Charac9_saveDataEP5CUser+0xdf>
 85e46bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e46bf:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 85e46c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e46c8:	05 28 01 00 00       	add    $0x128,%eax
 85e46cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e46d1:	89 04 24             	mov    %eax,(%esp)
 85e46d4:	e8 31 62 47 00       	call   8a5a90a <_Z11BitsetToStrRKSt6bitsetILj256EEPh>
 85e46d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e46dc:	0f b7 80 48 01 00 00 	movzwl 0x148(%eax),%eax
 85e46e3:	89 c2                	mov    %eax,%edx
 85e46e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e46e8:	66 89 90 44 01 00 00 	mov    %dx,0x144(%eax)
 85e46ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85e46f2:	0f b7 80 4a 01 00 00 	movzwl 0x14a(%eax),%eax
 85e46f9:	89 c2                	mov    %eax,%edx
 85e46fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e46fe:	66 89 90 46 01 00 00 	mov    %dx,0x146(%eax)
 85e4705:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4708:	0f b7 90 4c 01 00 00 	movzwl 0x14c(%eax),%edx
 85e470f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4712:	66 89 90 48 01 00 00 	mov    %dx,0x148(%eax)
 85e4719:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85e471e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85e4721:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4725:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85e472c:	00 
 85e472d:	89 04 24             	mov    %eax,(%esp)
 85e4730:	e8 a9 c8 f8 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85e4735:	bb 01 00 00 00       	mov    $0x1,%ebx
 85e473a:	eb 1b                	jmp    85e4757 <_ZN19CMissionList_Charac9_saveDataEP5CUser+0x1e1>
 85e473c:	89 d3                	mov    %edx,%ebx
 85e473e:	89 c6                	mov    %eax,%esi
 85e4740:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e4743:	89 04 24             	mov    %eax,(%esp)
 85e4746:	e8 87 81 03 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85e474b:	89 f0                	mov    %esi,%eax
 85e474d:	89 da                	mov    %ebx,%edx
 85e474f:	89 04 24             	mov    %eax,(%esp)
 85e4752:	e8 f9 ef 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e4757:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e475a:	89 04 24             	mov    %eax,(%esp)
 85e475d:	e8 70 81 03 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85e4762:	89 d8                	mov    %ebx,%eax
 85e4764:	83 c4 20             	add    $0x20,%esp
 85e4767:	5b                   	pop    %ebx
 85e4768:	5e                   	pop    %esi
 85e4769:	5d                   	pop    %ebp
 85e476a:	c3                   	ret
 85e476b:	90                   	nop

```

```c
// CMissionList_Charac::_saveData @ 0x85e4576

/* CMissionList_Charac::_saveData(CUser*) */

undefined4 __thiscall CMissionList_Charac::_saveData(CMissionList_Charac *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  SIG_REQUEST_PVP_MISSION_LIST *local_14;
  int local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PvP_MissionSystem.cpp",0x4a5);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 085e45c8 to 085e4734 has its CatchHandler @ 085e473c */
  CStreamGuard::operator<<(pCVar2,0x263);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_REQUEST_PVP_MISSION_LIST>(pCVar2);
  if (local_14 == (SIG_REQUEST_PVP_MISSION_LIST *)0x0) {
    uVar4 = 0;
  }
  else {
    memset(local_14,0,0x14a);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_14 = uVar4;
    for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
      *(undefined2 *)(local_14 + local_10 * 8 + 6) = *(undefined2 *)(this + local_10 * 8 + 7);
      *(undefined2 *)(local_14 + local_10 * 8 + 4) = *(undefined2 *)(this + local_10 * 8 + 5);
      *(undefined2 *)(local_14 + local_10 * 8 + 8) = *(undefined2 *)(this + local_10 * 8 + 9);
      *(undefined2 *)(local_14 + local_10 * 8 + 10) = *(undefined2 *)(this + local_10 * 8 + 0xb);
    }
    BitsetToStr((bitset *)(this + 0x128),(uchar *)(local_14 + 0x124));
    *(undefined2 *)(local_14 + 0x144) = *(undefined2 *)(this + 0x148);
    *(undefined2 *)(local_14 + 0x146) = *(undefined2 *)(this + 0x14a);
    *(undefined2 *)(local_14 + 0x148) = *(undefined2 *)(this + 0x14c);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    uVar4 = 1;
  }
  CStreamGuard::~CStreamGuard(local_1c);
  return uVar4;
}

```

---

## addNewMission

```asm
// === 085e4c6c CMissionList_Charac::addNewMission  [0x085e4c6c-0x85e4d13] ===
 85e4c6c:	55                   	push   %ebp
 85e4c6d:	89 e5                	mov    %esp,%ebp
 85e4c6f:	56                   	push   %esi
 85e4c70:	53                   	push   %ebx
 85e4c71:	83 ec 30             	sub    $0x30,%esp
 85e4c74:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4c77:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85e4c7b:	0f bf d8             	movswl %ax,%ebx
 85e4c7e:	e8 18 75 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e4c83:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e4c87:	89 04 24             	mov    %eax,(%esp)
 85e4c8a:	e8 f7 ad d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e4c8f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e4c92:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85e4c96:	74 75                	je     85e4d0d <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo+0xa1>
 85e4c98:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4c9b:	0f b7 00             	movzwl (%eax),%eax
 85e4c9e:	0f bf d8             	movswl %ax,%ebx
 85e4ca1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85e4ca4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4ca7:	8b 50 04             	mov    0x4(%eax),%edx
 85e4caa:	8b 00                	mov    (%eax),%eax
 85e4cac:	89 44 d9 05          	mov    %eax,0x5(%ecx,%ebx,8)
 85e4cb0:	89 54 d9 09          	mov    %edx,0x9(%ecx,%ebx,8)
 85e4cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4cb7:	8b 80 54 01 00 00    	mov    0x154(%eax),%eax
 85e4cbd:	85 c0                	test   %eax,%eax
 85e4cbf:	74 4c                	je     85e4d0d <_ZN19CMissionList_Charac13addNewMissionERK11MissionInfo+0xa1>
 85e4cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4cc4:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e4cc8:	0f bf d8             	movswl %ax,%ebx
 85e4ccb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4cce:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e4cd2:	0f bf c8             	movswl %ax,%ecx
 85e4cd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4cd8:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85e4cdc:	0f bf d0             	movswl %ax,%edx
 85e4cdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4ce2:	0f b7 00             	movzwl (%eax),%eax
 85e4ce5:	98                   	cwtl
 85e4ce6:	8b 75 08             	mov    0x8(%ebp),%esi
 85e4ce9:	8b b6 54 01 00 00    	mov    0x154(%esi),%esi
 85e4cef:	81 c6 00 97 07 00    	add    $0x79700,%esi
 85e4cf5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85e4cf9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85e4cfd:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4d01:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4d05:	89 34 24             	mov    %esi,(%esp)
 85e4d08:	e8 db 1c 0a 00       	call   86869e8 <_ZN15cUserHistoryLog13pvpMissionAddEiiii>
 85e4d0d:	83 c4 30             	add    $0x30,%esp
 85e4d10:	5b                   	pop    %ebx
 85e4d11:	5e                   	pop    %esi
 85e4d12:	5d                   	pop    %ebp
 85e4d13:	c3                   	ret

```

```c
// CMissionList_Charac::addNewMission @ 0x85e4c6c

/* CMissionList_Charac::addNewMission(MissionInfo const&) */

void __thiscall CMissionList_Charac::addNewMission(CMissionList_Charac *this,MissionInfo *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = G_CDataManager();
  iVar3 = CDataManager::find_mission(iVar3);
  if (iVar3 != 0) {
    sVar1 = *(short *)param_1;
    uVar2 = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + sVar1 * 8 + 5) = *(undefined4 *)param_1;
    *(undefined4 *)(this + sVar1 * 8 + 9) = uVar2;
    if (*(int *)(this + 0x154) != 0) {
      cUserHistoryLog::pvpMissionAdd
                ((cUserHistoryLog *)(*(int *)(this + 0x154) + 0x79700),(int)*(short *)param_1,
                 (int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),
                 (int)*(short *)(param_1 + 6));
    }
  }
  return;
}

```

---

## check_mission_kind

```asm
// === 085e627c CMissionList_Charac::check_mission_kind  [0x085e627c-0x85e63d5] ===
 85e627c:	55                   	push   %ebp
 85e627d:	89 e5                	mov    %esp,%ebp
 85e627f:	53                   	push   %ebx
 85e6280:	83 ec 24             	sub    $0x24,%esp
 85e6283:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85e6287:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e628a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e628d:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e6292:	66 85 c0             	test   %ax,%ax
 85e6295:	0f 84 35 01 00 00    	je     85e63d0 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x154>
 85e629b:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e629e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e62a1:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e62a6:	0f bf d8             	movswl %ax,%ebx
 85e62a9:	e8 ed 5e ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e62ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e62b2:	89 04 24             	mov    %eax,(%esp)
 85e62b5:	e8 cc 97 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e62ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e62bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85e62c1:	74 1d                	je     85e62e0 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x64>
 85e62c3:	8b 45 14             	mov    0x14(%ebp),%eax
 85e62c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e62ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e62cd:	89 04 24             	mov    %eax,(%esp)
 85e62d0:	e8 a5 cf ff ff       	call   85e327a <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter>
 85e62d5:	84 c0                	test   %al,%al
 85e62d7:	74 07                	je     85e62e0 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x64>
 85e62d9:	b8 01 00 00 00       	mov    $0x1,%eax
 85e62de:	eb 05                	jmp    85e62e5 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x69>
 85e62e0:	b8 00 00 00 00       	mov    $0x0,%eax
 85e62e5:	84 c0                	test   %al,%al
 85e62e7:	0f 84 e3 00 00 00    	je     85e63d0 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x154>
 85e62ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e62f0:	8b 00                	mov    (%eax),%eax
 85e62f2:	83 c0 24             	add    $0x24,%eax
 85e62f5:	8b 10                	mov    (%eax),%edx
 85e62f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e62fa:	c1 e0 03             	shl    $0x3,%eax
 85e62fd:	03 45 08             	add    0x8(%ebp),%eax
 85e6300:	8d 48 05             	lea    0x5(%eax),%ecx
 85e6303:	8b 45 14             	mov    0x14(%ebp),%eax
 85e6306:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e630a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e630e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e6311:	89 04 24             	mov    %eax,(%esp)
 85e6314:	ff d2                	call   *%edx
 85e6316:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e6319:	8b 00                	mov    (%eax),%eax
 85e631b:	83 c0 14             	add    $0x14,%eax
 85e631e:	8b 10                	mov    (%eax),%edx
 85e6320:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e6323:	c1 e0 03             	shl    $0x3,%eax
 85e6326:	03 45 08             	add    0x8(%ebp),%eax
 85e6329:	8d 48 05             	lea    0x5(%eax),%ecx
 85e632c:	8d 45 f3             	lea    -0xd(%ebp),%eax
 85e632f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e6333:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e6337:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e633a:	89 04 24             	mov    %eax,(%esp)
 85e633d:	ff d2                	call   *%edx
 85e633f:	84 c0                	test   %al,%al
 85e6341:	74 5f                	je     85e63a2 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x126>
 85e6343:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e6346:	8b 45 08             	mov    0x8(%ebp),%eax
 85e6349:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e634e:	98                   	cwtl
 85e634f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85e6352:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e6355:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e6359:	8b 45 18             	mov    0x18(%ebp),%eax
 85e635c:	89 04 24             	mov    %eax,(%esp)
 85e635f:	e8 c2 ad b2 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 85e6364:	83 7d 0c 1b          	cmpl   $0x1b,0xc(%ebp)
 85e6368:	75 1e                	jne    85e6388 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x10c>
 85e636a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e636d:	83 c0 3d             	add    $0x3d,%eax
 85e6370:	89 04 24             	mov    %eax,(%esp)
 85e6373:	e8 3e 05 00 00       	call   85e68b6 <_ZN11MissionInfo5clearEv>
 85e6378:	8b 45 08             	mov    0x8(%ebp),%eax
 85e637b:	05 f5 00 00 00       	add    $0xf5,%eax
 85e6380:	89 04 24             	mov    %eax,(%esp)
 85e6383:	e8 2e 05 00 00       	call   85e68b6 <_ZN11MissionInfo5clearEv>
 85e6388:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e638b:	98                   	cwtl
 85e638c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e6390:	8b 45 10             	mov    0x10(%ebp),%eax
 85e6393:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e6397:	8b 45 08             	mov    0x8(%ebp),%eax
 85e639a:	89 04 24             	mov    %eax,(%esp)
 85e639d:	e8 7a 00 00 00       	call   85e641c <_ZN19CMissionList_Charac12ClearMissionER5CUsers>
 85e63a2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 85e63a6:	84 c0                	test   %al,%al
 85e63a8:	74 26                	je     85e63d0 <_ZN19CMissionList_Charac18check_mission_kindEjR5CUserRK31MissionClearCondition_ParameterRSt6vectorIiSaIiEE+0x154>
 85e63aa:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e63ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85e63b0:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e63b5:	98                   	cwtl
 85e63b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e63ba:	8b 45 10             	mov    0x10(%ebp),%eax
 85e63bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e63c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e63c4:	89 04 24             	mov    %eax,(%esp)
 85e63c7:	e8 8c f4 ff ff       	call   85e5858 <_ZN19CMissionList_Charac17Send_Fail_MissionER5CUsers>
 85e63cc:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85e63d0:	83 c4 24             	add    $0x24,%esp
 85e63d3:	5b                   	pop    %ebx
 85e63d4:	5d                   	pop    %ebp
 85e63d5:	c3                   	ret

```

```c
// CMissionList_Charac::check_mission_kind @ 0x85e627c

/* CMissionList_Charac::check_mission_kind(unsigned int, CUser&, MissionClearCondition_Parameter
   const&, std::vector<int, std::allocator<int> >&) */

void __thiscall
CMissionList_Charac::check_mission_kind
          (CMissionList_Charac *this,uint param_1,CUser *param_2,
          MissionClearCondition_Parameter *param_3,vector *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_18;
  char local_11;
  CMission *local_10;
  
  local_11 = '\0';
  if (*(short *)(this + param_1 * 8 + 7) != 0) {
    iVar3 = G_CDataManager();
    local_10 = (CMission *)CDataManager::find_mission(iVar3);
    if ((local_10 == (CMission *)0x0) ||
       (cVar2 = CMission::canUpdate(local_10,param_3), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*(int *)local_10 + 0x24))(local_10,this + param_1 * 8 + 5,param_3);
      cVar2 = (**(code **)(*(int *)local_10 + 0x14))(local_10,this + param_1 * 8 + 5,&local_11);
      if (cVar2 != '\0') {
        local_18 = (int)*(short *)(this + param_1 * 8 + 7);
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)param_4,&local_18);
        if (param_1 == 0x1b) {
          MissionInfo::clear((MissionInfo *)(this + 0x3d));
          MissionInfo::clear((MissionInfo *)(this + 0xf5));
        }
        ClearMission(this,param_2,(short)local_18);
      }
      if (local_11 != '\0') {
        Send_Fail_Mission(this,param_2,*(short *)(this + param_1 * 8 + 7));
      }
    }
    return;
  }
  return;
}

```

---

## empty_progress

```asm
// === 085e5724 CMissionList_Charac::empty_progress  [0x085e5724-0x85e575f] ===
 85e5724:	55                   	push   %ebp
 85e5725:	89 e5                	mov    %esp,%ebp
 85e5727:	83 ec 10             	sub    $0x10,%esp
 85e572a:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 85e5731:	eb 1b                	jmp    85e574e <_ZNK19CMissionList_Charac14empty_progressEv+0x2a>
 85e5733:	8b 55 fc             	mov    -0x4(%ebp),%edx
 85e5736:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5739:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e573e:	66 85 c0             	test   %ax,%ax
 85e5741:	74 07                	je     85e574a <_ZNK19CMissionList_Charac14empty_progressEv+0x26>
 85e5743:	b8 00 00 00 00       	mov    $0x0,%eax
 85e5748:	eb 14                	jmp    85e575e <_ZNK19CMissionList_Charac14empty_progressEv+0x3a>
 85e574a:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85e574e:	83 7d fc 23          	cmpl   $0x23,-0x4(%ebp)
 85e5752:	0f 9e c0             	setle  %al
 85e5755:	84 c0                	test   %al,%al
 85e5757:	75 da                	jne    85e5733 <_ZNK19CMissionList_Charac14empty_progressEv+0xf>
 85e5759:	b8 01 00 00 00       	mov    $0x1,%eax
 85e575e:	c9                   	leave
 85e575f:	c3                   	ret

```

```c
// CMissionList_Charac::empty_progress @ 0x85e5724

/* CMissionList_Charac::empty_progress() const */

undefined4 __thiscall CMissionList_Charac::empty_progress(CMissionList_Charac *this)

{
  int local_8;
  
  local_8 = 1;
  while( true ) {
    if (0x23 < local_8) {
      return 1;
    }
    if (*(short *)(this + local_8 * 8 + 7) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

```

---

## getData

```asm
// === 085e4ac4 CMissionList_Charac::getData  [0x085e4ac4-0x85e4bc7] ===
 85e4ac4:	55                   	push   %ebp
 85e4ac5:	89 e5                	mov    %esp,%ebp
 85e4ac7:	83 ec 28             	sub    $0x28,%esp
 85e4aca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4acd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e4ad0:	c7 44 24 08 4a 01 00 	movl   $0x14a,0x8(%esp)
 85e4ad7:	00 
 85e4ad8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e4adf:	00 
 85e4ae0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4ae3:	89 04 24             	mov    %eax,(%esp)
 85e4ae6:	e8 d5 91 a9 ff       	call   807dcc0 <memset@plt>
 85e4aeb:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4aee:	8b 90 50 01 00 00    	mov    0x150(%eax),%edx
 85e4af4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4af7:	89 10                	mov    %edx,(%eax)
 85e4af9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e4b00:	eb 5c                	jmp    85e4b5e <_ZNK19CMissionList_Charac7getDataEPc+0x9a>
 85e4b02:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4b05:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e4b08:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b0b:	0f b7 4c c8 07       	movzwl 0x7(%eax,%ecx,8),%ecx
 85e4b10:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4b13:	66 89 4c d0 06       	mov    %cx,0x6(%eax,%edx,8)
 85e4b18:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4b1b:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e4b1e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b21:	0f b7 4c c8 05       	movzwl 0x5(%eax,%ecx,8),%ecx
 85e4b26:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4b29:	66 89 4c d0 04       	mov    %cx,0x4(%eax,%edx,8)
 85e4b2e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4b31:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e4b34:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b37:	0f b7 4c c8 09       	movzwl 0x9(%eax,%ecx,8),%ecx
 85e4b3c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4b3f:	66 89 4c d0 08       	mov    %cx,0x8(%eax,%edx,8)
 85e4b44:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e4b47:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85e4b4a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b4d:	0f b7 4c c8 0b       	movzwl 0xb(%eax,%ecx,8),%ecx
 85e4b52:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4b55:	66 89 4c d0 0a       	mov    %cx,0xa(%eax,%edx,8)
 85e4b5a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e4b5e:	83 7d f4 23          	cmpl   $0x23,-0xc(%ebp)
 85e4b62:	0f 9e c0             	setle  %al
 85e4b65:	84 c0                	test   %al,%al
 85e4b67:	75 99                	jne    85e4b02 <_ZNK19CMissionList_Charac7getDataEPc+0x3e>
 85e4b69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4b6c:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 85e4b72:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b75:	05 28 01 00 00       	add    $0x128,%eax
 85e4b7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4b7e:	89 04 24             	mov    %eax,(%esp)
 85e4b81:	e8 84 5d 47 00       	call   8a5a90a <_Z11BitsetToStrRKSt6bitsetILj256EEPh>
 85e4b86:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b89:	0f b7 80 48 01 00 00 	movzwl 0x148(%eax),%eax
 85e4b90:	89 c2                	mov    %eax,%edx
 85e4b92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4b95:	66 89 90 44 01 00 00 	mov    %dx,0x144(%eax)
 85e4b9c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4b9f:	0f b7 80 4a 01 00 00 	movzwl 0x14a(%eax),%eax
 85e4ba6:	89 c2                	mov    %eax,%edx
 85e4ba8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4bab:	66 89 90 46 01 00 00 	mov    %dx,0x146(%eax)
 85e4bb2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4bb5:	0f b7 90 4c 01 00 00 	movzwl 0x14c(%eax),%edx
 85e4bbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e4bbf:	66 89 90 48 01 00 00 	mov    %dx,0x148(%eax)
 85e4bc6:	c9                   	leave
 85e4bc7:	c3                   	ret

```

```c
// CMissionList_Charac::getData @ 0x85e4ac4

/* CMissionList_Charac::getData(char*) const */

void __thiscall CMissionList_Charac::getData(CMissionList_Charac *this,char *param_1)

{
  int local_10;
  
  memset(param_1,0,0x14a);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x150);
  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
    *(undefined2 *)(param_1 + local_10 * 8 + 6) = *(undefined2 *)(this + local_10 * 8 + 7);
    *(undefined2 *)(param_1 + local_10 * 8 + 4) = *(undefined2 *)(this + local_10 * 8 + 5);
    *(undefined2 *)(param_1 + local_10 * 8 + 8) = *(undefined2 *)(this + local_10 * 8 + 9);
    *(undefined2 *)(param_1 + local_10 * 8 + 10) = *(undefined2 *)(this + local_10 * 8 + 0xb);
  }
  BitsetToStr((bitset *)(this + 0x128),(uchar *)(param_1 + 0x124));
  *(undefined2 *)(param_1 + 0x144) = *(undefined2 *)(this + 0x148);
  *(undefined2 *)(param_1 + 0x146) = *(undefined2 *)(this + 0x14a);
  *(undefined2 *)(param_1 + 0x148) = *(undefined2 *)(this + 0x14c);
  return;
}

```

---

## getIndex_byKind

```asm
// === 085e4bc8 CMissionList_Charac::getIndex_byKind  [0x085e4bc8-0x85e4beb] ===
 85e4bc8:	55                   	push   %ebp
 85e4bc9:	89 e5                	mov    %esp,%ebp
 85e4bcb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85e4bcf:	7e 06                	jle    85e4bd7 <_ZNK19CMissionList_Charac15getIndex_byKindEi+0xf>
 85e4bd1:	83 7d 0c 23          	cmpl   $0x23,0xc(%ebp)
 85e4bd5:	7e 07                	jle    85e4bde <_ZNK19CMissionList_Charac15getIndex_byKindEi+0x16>
 85e4bd7:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4bdc:	eb 0b                	jmp    85e4be9 <_ZNK19CMissionList_Charac15getIndex_byKindEi+0x21>
 85e4bde:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e4be1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4be4:	0f b7 44 d0 07       	movzwl 0x7(%eax,%edx,8),%eax
 85e4be9:	5d                   	pop    %ebp
 85e4bea:	c3                   	ret
 85e4beb:	90                   	nop

```

```c
// CMissionList_Charac::getIndex_byKind @ 0x85e4bc8

/* CMissionList_Charac::getIndex_byKind(int) const */

undefined2 __thiscall CMissionList_Charac::getIndex_byKind(CMissionList_Charac *this,int param_1)

{
  undefined2 uVar1;
  
  if ((param_1 < 1) || (0x23 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(this + param_1 * 8 + 7);
  }
  return uVar1;
}

```

---

## getIssue_all

```asm
// === 085e51be CMissionList_Charac::getIssue_all  [0x085e51be-0x85e51cd] ===
 85e51be:	55                   	push   %ebp
 85e51bf:	89 e5                	mov    %esp,%ebp
 85e51c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e51c4:	0f b7 80 4c 01 00 00 	movzwl 0x14c(%eax),%eax
 85e51cb:	5d                   	pop    %ebp
 85e51cc:	c3                   	ret
 85e51cd:	90                   	nop

```

```c
// CMissionList_Charac::getIssue_all @ 0x85e51be

/* CMissionList_Charac::getIssue_all() const */

undefined2 __thiscall CMissionList_Charac::getIssue_all(CMissionList_Charac *this)

{
  return *(undefined2 *)(this + 0x14c);
}

```

---

## getIssue_mode

```asm
// === 085e5194 CMissionList_Charac::getIssue_mode  [0x085e5194-0x85e51bd] ===
 85e5194:	55                   	push   %ebp
 85e5195:	89 e5                	mov    %esp,%ebp
 85e5197:	83 ec 04             	sub    $0x4,%esp
 85e519a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e519d:	88 45 fc             	mov    %al,-0x4(%ebp)
 85e51a0:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 85e51a4:	74 0c                	je     85e51b2 <_ZNK19CMissionList_Charac13getIssue_modeEb+0x1e>
 85e51a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e51a9:	0f b7 80 48 01 00 00 	movzwl 0x148(%eax),%eax
 85e51b0:	eb 0a                	jmp    85e51bc <_ZNK19CMissionList_Charac13getIssue_modeEb+0x28>
 85e51b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e51b5:	0f b7 80 4a 01 00 00 	movzwl 0x14a(%eax),%eax
 85e51bc:	c9                   	leave
 85e51bd:	c3                   	ret

```

```c
// CMissionList_Charac::getIssue_mode @ 0x85e5194

/* CMissionList_Charac::getIssue_mode(bool) const */

undefined2 __thiscall CMissionList_Charac::getIssue_mode(CMissionList_Charac *this,bool param_1)

{
  undefined2 uVar1;
  
  if (param_1) {
    uVar1 = *(undefined2 *)(this + 0x148);
  }
  else {
    uVar1 = *(undefined2 *)(this + 0x14a);
  }
  return uVar1;
}

```

---

## getNewMission

```asm
// === 085e65da CMissionList_Charac::getNewMission  [0x085e65da-0x85e6627] ===
 85e65da:	55                   	push   %ebp
 85e65db:	89 e5                	mov    %esp,%ebp
 85e65dd:	83 ec 28             	sub    $0x28,%esp
 85e65e0:	e8 b6 5b ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e65e5:	8b 55 10             	mov    0x10(%ebp),%edx
 85e65e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e65ec:	89 04 24             	mov    %eax,(%esp)
 85e65ef:	e8 92 94 d7 ff       	call   835fa86 <_ZNK12CDataManager12find_missionEi>
 85e65f4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e65f7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85e65fb:	74 28                	je     85e6625 <_ZN19CMissionList_Charac13getNewMissionER5CUseri+0x4b>
 85e65fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e6600:	89 04 24             	mov    %eax,(%esp)
 85e6603:	e8 0a 03 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e6608:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e660b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e660e:	98                   	cwtl
 85e660f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e6613:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e6616:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e661a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e661d:	89 04 24             	mov    %eax,(%esp)
 85e6620:	e8 b1 fd ff ff       	call   85e63d6 <_ZN19CMissionList_Charac16ClearMissionKindER5CUsers>
 85e6625:	c9                   	leave
 85e6626:	c3                   	ret
 85e6627:	90                   	nop

```

```c
// CMissionList_Charac::getNewMission @ 0x85e65da

/* CMissionList_Charac::getNewMission(CUser&, int) */

void CMissionList_Charac::getNewMission(CUser *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  CMission *this;
  
  iVar2 = G_CDataManager();
  this = (CMission *)CDataManager::find_mission(iVar2);
  if (this != (CMission *)0x0) {
    sVar1 = CMission::GetMissionKind(this);
    ClearMissionKind((CMissionList_Charac *)param_1,(CUser *)param_2,sVar1);
  }
  return;
}

```

---

## getWinningRate

```asm
// === 085e513a CMissionList_Charac::getWinningRate  [0x085e513a-0x85e5193] ===
 85e513a:	55                   	push   %ebp
 85e513b:	89 e5                	mov    %esp,%ebp
 85e513d:	83 ec 10             	sub    $0x10,%esp
 85e5140:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5143:	0f b7 80 4c 01 00 00 	movzwl 0x14c(%eax),%eax
 85e514a:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85e514e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 85e5155:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 85e515c:	eb 1d                	jmp    85e517b <_ZNK19CMissionList_Charac14getWinningRateEv+0x41>
 85e515e:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 85e5162:	83 e0 01             	and    $0x1,%eax
 85e5165:	84 c0                	test   %al,%al
 85e5167:	74 04                	je     85e516d <_ZNK19CMissionList_Charac14getWinningRateEv+0x33>
 85e5169:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 85e516d:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 85e5171:	d1 f8                	sar    $1,%eax
 85e5173:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 85e5177:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 85e517b:	83 7d fc 09          	cmpl   $0x9,-0x4(%ebp)
 85e517f:	0f 9e c0             	setle  %al
 85e5182:	84 c0                	test   %al,%al
 85e5184:	75 d8                	jne    85e515e <_ZNK19CMissionList_Charac14getWinningRateEv+0x24>
 85e5186:	8b 55 f8             	mov    -0x8(%ebp),%edx
 85e5189:	89 d0                	mov    %edx,%eax
 85e518b:	c1 e0 02             	shl    $0x2,%eax
 85e518e:	01 d0                	add    %edx,%eax
 85e5190:	01 c0                	add    %eax,%eax
 85e5192:	c9                   	leave
 85e5193:	c3                   	ret

```

```c
// CMissionList_Charac::getWinningRate @ 0x85e513a

/* CMissionList_Charac::getWinningRate() const */

int __thiscall CMissionList_Charac::getWinningRate(CMissionList_Charac *this)

{
  ushort local_e;
  int local_c;
  int local_8;
  
  local_e = *(ushort *)(this + 0x14c);
  local_c = 0;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    if ((local_e & 1) != 0) {
      local_c = local_c + 1;
    }
    local_e = (ushort)((int)(uint)local_e >> 1);
  }
  return local_c * 10;
}

```

---

## isClearMission

```asm
// === 085e50fa CMissionList_Charac::isClearMission  [0x085e50fa-0x85e5139] ===
 85e50fa:	55                   	push   %ebp
 85e50fb:	89 e5                	mov    %esp,%ebp
 85e50fd:	83 ec 18             	sub    $0x18,%esp
 85e5100:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85e5104:	78 2c                	js     85e5132 <_ZNK19CMissionList_Charac14isClearMissionEi+0x38>
 85e5106:	81 7d 0c ff 00 00 00 	cmpl   $0xff,0xc(%ebp)
 85e510d:	7f 23                	jg     85e5132 <_ZNK19CMissionList_Charac14isClearMissionEi+0x38>
 85e510f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e5112:	8b 55 08             	mov    0x8(%ebp),%edx
 85e5115:	81 c2 28 01 00 00    	add    $0x128,%edx
 85e511b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e511f:	89 14 24             	mov    %edx,(%esp)
 85e5122:	e8 ad 2f 00 00       	call   85e80d4 <_ZNKSt6bitsetILj256EEixEj>
 85e5127:	84 c0                	test   %al,%al
 85e5129:	74 07                	je     85e5132 <_ZNK19CMissionList_Charac14isClearMissionEi+0x38>
 85e512b:	b8 01 00 00 00       	mov    $0x1,%eax
 85e5130:	eb 05                	jmp    85e5137 <_ZNK19CMissionList_Charac14isClearMissionEi+0x3d>
 85e5132:	b8 00 00 00 00       	mov    $0x0,%eax
 85e5137:	c9                   	leave
 85e5138:	c3                   	ret
 85e5139:	90                   	nop

```

```c
// CMissionList_Charac::isClearMission @ 0x85e50fa

/* CMissionList_Charac::isClearMission(int) const */

undefined4 __thiscall CMissionList_Charac::isClearMission(CMissionList_Charac *this,int param_1)

{
  char cVar1;
  
  if (((-1 < param_1) && (param_1 < 0x100)) &&
     (cVar1 = std::bitset<256u>::operator[]((bitset<256u> *)(this + 0x128),param_1), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}

```

---

## isUserNewbie

```asm
// === 085e4a04 CMissionList_Charac::isUserNewbie  [0x085e4a04-0x85e4ac3] ===
 85e4a04:	55                   	push   %ebp
 85e4a05:	89 e5                	mov    %esp,%ebp
 85e4a07:	57                   	push   %edi
 85e4a08:	56                   	push   %esi
 85e4a09:	53                   	push   %ebx
 85e4a0a:	83 ec 1c             	sub    $0x1c,%esp
 85e4a0d:	b8 00 30 47 09       	mov    $0x9473000,%eax
 85e4a12:	0f b6 00             	movzbl (%eax),%eax
 85e4a15:	84 c0                	test   %al,%al
 85e4a17:	75 5c                	jne    85e4a75 <_ZNK19CMissionList_Charac12isUserNewbieEv+0x71>
 85e4a19:	c7 04 24 00 30 47 09 	movl   $0x9473000,(%esp)
 85e4a20:	e8 0b 09 14 00       	call   8725330 <__cxa_guard_acquire>
 85e4a25:	85 c0                	test   %eax,%eax
 85e4a27:	0f 95 c0             	setne  %al
 85e4a2a:	84 c0                	test   %al,%al
 85e4a2c:	74 47                	je     85e4a75 <_ZNK19CMissionList_Charac12isUserNewbieEv+0x71>
 85e4a2e:	bb 00 00 00 00       	mov    $0x0,%ebx
 85e4a33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e4a3a:	00 
 85e4a3b:	c7 04 24 20 30 47 09 	movl   $0x9473020,(%esp)
 85e4a42:	e8 3b 36 00 00       	call   85e8082 <_ZNSt6bitsetILj256EEC1Em>
 85e4a47:	c7 04 24 00 30 47 09 	movl   $0x9473000,(%esp)
 85e4a4e:	e8 fd 07 14 00       	call   8725250 <__cxa_guard_release>
 85e4a53:	eb 20                	jmp    85e4a75 <_ZNK19CMissionList_Charac12isUserNewbieEv+0x71>
 85e4a55:	89 d6                	mov    %edx,%esi
 85e4a57:	89 c7                	mov    %eax,%edi
 85e4a59:	84 db                	test   %bl,%bl
 85e4a5b:	75 0c                	jne    85e4a69 <_ZNK19CMissionList_Charac12isUserNewbieEv+0x65>
 85e4a5d:	c7 04 24 00 30 47 09 	movl   $0x9473000,(%esp)
 85e4a64:	e8 57 08 14 00       	call   87252c0 <__cxa_guard_abort>
 85e4a69:	89 f8                	mov    %edi,%eax
 85e4a6b:	89 f2                	mov    %esi,%edx
 85e4a6d:	89 04 24             	mov    %eax,(%esp)
 85e4a70:	e8 db ec 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e4a75:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4a78:	89 04 24             	mov    %eax,(%esp)
 85e4a7b:	e8 a4 0c 00 00       	call   85e5724 <_ZNK19CMissionList_Charac14empty_progressEv>
 85e4a80:	84 c0                	test   %al,%al
 85e4a82:	74 23                	je     85e4aa7 <_ZNK19CMissionList_Charac12isUserNewbieEv+0xa3>
 85e4a84:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4a87:	05 28 01 00 00       	add    $0x128,%eax
 85e4a8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4a90:	c7 04 24 20 30 47 09 	movl   $0x9473020,(%esp)
 85e4a97:	e8 0c 36 00 00       	call   85e80a8 <_ZNKSt6bitsetILj256EEeqERKS0_>
 85e4a9c:	84 c0                	test   %al,%al
 85e4a9e:	74 07                	je     85e4aa7 <_ZNK19CMissionList_Charac12isUserNewbieEv+0xa3>
 85e4aa0:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4aa5:	eb 05                	jmp    85e4aac <_ZNK19CMissionList_Charac12isUserNewbieEv+0xa8>
 85e4aa7:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4aac:	84 c0                	test   %al,%al
 85e4aae:	74 07                	je     85e4ab7 <_ZNK19CMissionList_Charac12isUserNewbieEv+0xb3>
 85e4ab0:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4ab5:	eb 05                	jmp    85e4abc <_ZNK19CMissionList_Charac12isUserNewbieEv+0xb8>
 85e4ab7:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4abc:	83 c4 1c             	add    $0x1c,%esp
 85e4abf:	5b                   	pop    %ebx
 85e4ac0:	5e                   	pop    %esi
 85e4ac1:	5f                   	pop    %edi
 85e4ac2:	5d                   	pop    %ebp
 85e4ac3:	c3                   	ret

```

```c
// CMissionList_Charac::isUserNewbie @ 0x85e4a04

/* CMissionList_Charac::isUserNewbie() const */

undefined1 __thiscall CMissionList_Charac::isUserNewbie(CMissionList_Charac *this)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  
  if ((isUserNewbie()::zeroBit == '\0') &&
     (iVar3 = __cxa_guard_acquire(&isUserNewbie()::zeroBit), iVar3 != 0)) {
                    /* try { // try from 085e4a42 to 085e4a46 has its CatchHandler @ 085e4a55 */
    std::bitset<256u>::bitset((bitset<256u> *)isUserNewbie()::zeroBit,0);
    __cxa_guard_release(&isUserNewbie()::zeroBit);
  }
  cVar2 = empty_progress(this);
  if ((cVar2 == '\0') ||
     (cVar2 = std::bitset<256u>::operator==
                        ((bitset<256u> *)isUserNewbie()::zeroBit,(bitset *)(this + 0x128)),
     cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## loadData

```asm
// === 085e47de CMissionList_Charac::loadData  [0x085e47de-0x85e4a03] ===
 85e47de:	55                   	push   %ebp
 85e47df:	89 e5                	mov    %esp,%ebp
 85e47e1:	56                   	push   %esi
 85e47e2:	53                   	push   %ebx
 85e47e3:	83 ec 30             	sub    $0x30,%esp
 85e47e6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47e9:	8b 00                	mov    (%eax),%eax
 85e47eb:	83 c0 1c             	add    $0x1c,%eax
 85e47ee:	8b 10                	mov    (%eax),%edx
 85e47f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47f3:	89 04 24             	mov    %eax,(%esp)
 85e47f6:	ff d2                	call   *%edx
 85e47f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85e47fb:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e47fe:	89 90 54 01 00 00    	mov    %edx,0x154(%eax)
 85e4804:	8b 45 10             	mov    0x10(%ebp),%eax
 85e4807:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85e480a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85e4811:	eb 5c                	jmp    85e486f <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x91>
 85e4813:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e4816:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85e4819:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e481c:	0f b7 4c c8 06       	movzwl 0x6(%eax,%ecx,8),%ecx
 85e4821:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4824:	66 89 4c d0 07       	mov    %cx,0x7(%eax,%edx,8)
 85e4829:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e482c:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85e482f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e4832:	0f b7 4c c8 04       	movzwl 0x4(%eax,%ecx,8),%ecx
 85e4837:	8b 45 08             	mov    0x8(%ebp),%eax
 85e483a:	66 89 4c d0 05       	mov    %cx,0x5(%eax,%edx,8)
 85e483f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e4842:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85e4845:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e4848:	0f b7 4c c8 08       	movzwl 0x8(%eax,%ecx,8),%ecx
 85e484d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4850:	66 89 4c d0 09       	mov    %cx,0x9(%eax,%edx,8)
 85e4855:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e4858:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 85e485b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e485e:	0f b7 4c c8 0a       	movzwl 0xa(%eax,%ecx,8),%ecx
 85e4863:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4866:	66 89 4c d0 0b       	mov    %cx,0xb(%eax,%edx,8)
 85e486b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85e486f:	83 7d f0 23          	cmpl   $0x23,-0x10(%ebp)
 85e4873:	0f 9e c0             	setle  %al
 85e4876:	84 c0                	test   %al,%al
 85e4878:	75 99                	jne    85e4813 <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x35>
 85e487a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e487d:	8d 90 28 01 00 00    	lea    0x128(%eax),%edx
 85e4883:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e4886:	05 24 01 00 00       	add    $0x124,%eax
 85e488b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e488f:	89 04 24             	mov    %eax,(%esp)
 85e4892:	e8 f2 60 47 00       	call   8a5a989 <_Z11StrToBitsetPhRSt6bitsetILj256EE>
 85e4897:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e489a:	0f b7 80 44 01 00 00 	movzwl 0x144(%eax),%eax
 85e48a1:	89 c2                	mov    %eax,%edx
 85e48a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e48a6:	66 89 90 48 01 00 00 	mov    %dx,0x148(%eax)
 85e48ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e48b0:	0f b7 80 46 01 00 00 	movzwl 0x146(%eax),%eax
 85e48b7:	89 c2                	mov    %eax,%edx
 85e48b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e48bc:	66 89 90 4a 01 00 00 	mov    %dx,0x14a(%eax)
 85e48c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85e48c6:	0f b7 90 48 01 00 00 	movzwl 0x148(%eax),%edx
 85e48cd:	8b 45 08             	mov    0x8(%ebp),%eax
 85e48d0:	66 89 90 4c 01 00 00 	mov    %dx,0x14c(%eax)
 85e48d7:	e8 bf 78 ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e48dc:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 85e48e3:	00 
 85e48e4:	89 04 24             	mov    %eax,(%esp)
 85e48e7:	e8 ba b1 d7 ff       	call   835faa6 <_ZNK12CDataManager21get_kind_mission_listEi>
 85e48ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e48ef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e48f2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e48f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e48f9:	89 04 24             	mov    %eax,(%esp)
 85e48fc:	e8 61 36 00 00       	call   85e7f62 <_ZNKSt4listIP8CMissionSaIS1_EE5beginEv>
 85e4901:	83 ec 04             	sub    $0x4,%esp
 85e4904:	eb 3f                	jmp    85e4945 <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x167>
 85e4906:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4909:	89 04 24             	mov    %eax,(%esp)
 85e490c:	e8 c3 36 00 00       	call   85e7fd4 <_ZNKSt20_List_const_iteratorIP8CMissionEdeEv>
 85e4911:	8b 00                	mov    (%eax),%eax
 85e4913:	89 04 24             	mov    %eax,(%esp)
 85e4916:	e8 eb 1f 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e491b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e491f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4922:	89 04 24             	mov    %eax,(%esp)
 85e4925:	e8 d0 07 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e492a:	84 c0                	test   %al,%al
 85e492c:	74 0c                	je     85e493a <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x15c>
 85e492e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4931:	c6 80 4e 01 00 00 01 	movb   $0x1,0x14e(%eax)
 85e4938:	eb 36                	jmp    85e4970 <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x192>
 85e493a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e493d:	89 04 24             	mov    %eax,(%esp)
 85e4940:	e8 7b 36 00 00       	call   85e7fc0 <_ZNSt20_List_const_iteratorIP8CMissionEppEv>
 85e4945:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e4948:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85e494b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e494f:	89 04 24             	mov    %eax,(%esp)
 85e4952:	e8 31 36 00 00       	call   85e7f88 <_ZNKSt4listIP8CMissionSaIS1_EE3endEv>
 85e4957:	83 ec 04             	sub    $0x4,%esp
 85e495a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e495d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4961:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4964:	89 04 24             	mov    %eax,(%esp)
 85e4967:	e8 40 36 00 00       	call   85e7fac <_ZNKSt20_List_const_iteratorIP8CMissionEneERKS2_>
 85e496c:	84 c0                	test   %al,%al
 85e496e:	75 96                	jne    85e4906 <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x128>
 85e4970:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4973:	89 04 24             	mov    %eax,(%esp)
 85e4976:	e8 89 00 00 00       	call   85e4a04 <_ZNK19CMissionList_Charac12isUserNewbieEv>
 85e497b:	84 c0                	test   %al,%al
 85e497d:	74 1f                	je     85e499e <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x1c0>
 85e497f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4982:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4986:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4989:	89 04 24             	mov    %eax,(%esp)
 85e498c:	e8 83 03 00 00       	call   85e4d14 <_ZN19CMissionList_Charac26MakeMissionList_forNewbiesERK5CUser>
 85e4991:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4994:	89 04 24             	mov    %eax,(%esp)
 85e4997:	e8 8c 0b 00 00       	call   85e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>
 85e499c:	eb 12                	jmp    85e49b0 <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x1d2>
 85e499e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e49a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e49a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e49a8:	89 04 24             	mov    %eax,(%esp)
 85e49ab:	e8 9c 04 00 00       	call   85e4e4c <_ZN19CMissionList_Charac26MakeMissionList_forOldUserERK5CUser>
 85e49b0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85e49b7:	e8 e2 72 ae ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85e49bc:	89 c6                	mov    %eax,%esi
 85e49be:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e49c1:	89 04 24             	mov    %eax,(%esp)
 85e49c4:	e8 e1 1c cc ff       	call   82a66aa <_ZNK15CUserCharacInfo24getCurCharacLastPlayTickEv>
 85e49c9:	89 c3                	mov    %eax,%ebx
 85e49cb:	e8 b1 77 ae ff       	call   80cc181 <_Z14G_CEnvironmentv>
 85e49d0:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 85e49d6:	89 74 24 08          	mov    %esi,0x8(%esp)
 85e49da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e49de:	89 04 24             	mov    %eax,(%esp)
 85e49e1:	e8 c2 76 e8 ff       	call   846c0a8 <_Z22CheckDailyScheduleTimeill>
 85e49e6:	84 c0                	test   %al,%al
 85e49e8:	74 0b                	je     85e49f5 <_ZN19CMissionList_Charac8loadDataEP5CUserPc+0x217>
 85e49ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85e49ed:	89 04 24             	mov    %eax,(%esp)
 85e49f0:	e8 33 0b 00 00       	call   85e5528 <_ZN19CMissionList_Charac18Reset_DailyMissionEv>
 85e49f5:	b8 01 00 00 00       	mov    $0x1,%eax
 85e49fa:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e49fd:	83 c4 00             	add    $0x0,%esp
 85e4a00:	5b                   	pop    %ebx
 85e4a01:	5e                   	pop    %esi
 85e4a02:	5d                   	pop    %ebp
 85e4a03:	c3                   	ret

```

```c
// CMissionList_Charac::loadData @ 0x85e47de

/* CMissionList_Charac::loadData(CUser*, char*) */

undefined4 __thiscall
CMissionList_Charac::loadData(CMissionList_Charac *this,CUser *param_1,char *param_2)

{
  char cVar1;
  CDataManager *this_00;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  _List_const_iterator<CMission*> local_20 [4];
  _List_const_iterator local_1c [4];
  char *local_18;
  int local_14;
  undefined4 local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  *(CUser **)(this + 0x154) = param_1;
  local_18 = param_2;
  for (local_14 = 0; local_14 < 0x24; local_14 = local_14 + 1) {
    *(undefined2 *)(this + local_14 * 8 + 7) = *(undefined2 *)(param_2 + local_14 * 8 + 6);
    *(undefined2 *)(this + local_14 * 8 + 5) = *(undefined2 *)(param_2 + local_14 * 8 + 4);
    *(undefined2 *)(this + local_14 * 8 + 9) = *(undefined2 *)(param_2 + local_14 * 8 + 8);
    *(undefined2 *)(this + local_14 * 8 + 0xb) = *(undefined2 *)(param_2 + local_14 * 8 + 10);
  }
  StrToBitset((uchar *)(param_2 + 0x124),(bitset *)(this + 0x128));
  *(undefined2 *)(this + 0x148) = *(undefined2 *)(local_18 + 0x144);
  *(undefined2 *)(this + 0x14a) = *(undefined2 *)(local_18 + 0x146);
  *(undefined2 *)(this + 0x14c) = *(undefined2 *)(local_18 + 0x148);
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::get_kind_mission_list(this_00,6);
  std::list<CMission*,std::allocator<CMission*>>::begin();
  do {
    std::list<CMission*,std::allocator<CMission*>>::end();
    cVar1 = std::_List_const_iterator<CMission*>::operator!=(local_20,local_1c);
    if (cVar1 == '\0') {
LAB_085e4970:
      cVar1 = isUserNewbie(this);
      if (cVar1 == '\0') {
        MakeMissionList_forOldUser(this,param_1);
      }
      else {
        MakeMissionList_forNewbies(this,param_1);
        Reset_DailyMission(this);
      }
      lVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      lVar4 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
      iVar5 = G_CEnvironment();
      cVar1 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar4,lVar3);
      if (cVar1 != '\0') {
        Reset_DailyMission(this);
      }
      return 1;
    }
    puVar2 = (undefined4 *)std::_List_const_iterator<CMission*>::operator*(local_20);
    iVar5 = CMission::GetMissionIndex((CMission *)*puVar2);
    cVar1 = isClearMission(this,iVar5);
    if (cVar1 != '\0') {
      this[0x14e] = (CMissionList_Charac)0x1;
      goto LAB_085e4970;
    }
    std::_List_const_iterator<CMission*>::operator++(local_20);
  } while( true );
}

```

---

## setIssue

```asm
// === 085e51ce CMissionList_Charac::setIssue  [0x085e51ce-0x85e52a7] ===
 85e51ce:	55                   	push   %ebp
 85e51cf:	89 e5                	mov    %esp,%ebp
 85e51d1:	83 ec 08             	sub    $0x8,%esp
 85e51d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e51d7:	8b 45 10             	mov    0x10(%ebp),%eax
 85e51da:	88 55 fc             	mov    %dl,-0x4(%ebp)
 85e51dd:	88 45 f8             	mov    %al,-0x8(%ebp)
 85e51e0:	80 7d f8 00          	cmpb   $0x0,-0x8(%ebp)
 85e51e4:	74 41                	je     85e5227 <_ZN19CMissionList_Charac8setIssueEbb+0x59>
 85e51e6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e51e9:	0f b7 80 48 01 00 00 	movzwl 0x148(%eax),%eax
 85e51f0:	8d 14 00             	lea    (%eax,%eax,1),%edx
 85e51f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85e51f6:	66 89 90 48 01 00 00 	mov    %dx,0x148(%eax)
 85e51fd:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5200:	0f b7 90 48 01 00 00 	movzwl 0x148(%eax),%edx
 85e5207:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 85e520b:	74 07                	je     85e5214 <_ZN19CMissionList_Charac8setIssueEbb+0x46>
 85e520d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e5212:	eb 05                	jmp    85e5219 <_ZN19CMissionList_Charac8setIssueEbb+0x4b>
 85e5214:	b8 00 00 00 00       	mov    $0x0,%eax
 85e5219:	01 c2                	add    %eax,%edx
 85e521b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e521e:	66 89 90 48 01 00 00 	mov    %dx,0x148(%eax)
 85e5225:	eb 3f                	jmp    85e5266 <_ZN19CMissionList_Charac8setIssueEbb+0x98>
 85e5227:	8b 45 08             	mov    0x8(%ebp),%eax
 85e522a:	0f b7 80 4a 01 00 00 	movzwl 0x14a(%eax),%eax
 85e5231:	8d 14 00             	lea    (%eax,%eax,1),%edx
 85e5234:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5237:	66 89 90 4a 01 00 00 	mov    %dx,0x14a(%eax)
 85e523e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5241:	0f b7 90 4a 01 00 00 	movzwl 0x14a(%eax),%edx
 85e5248:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 85e524c:	74 07                	je     85e5255 <_ZN19CMissionList_Charac8setIssueEbb+0x87>
 85e524e:	b8 01 00 00 00       	mov    $0x1,%eax
 85e5253:	eb 05                	jmp    85e525a <_ZN19CMissionList_Charac8setIssueEbb+0x8c>
 85e5255:	b8 00 00 00 00       	mov    $0x0,%eax
 85e525a:	01 c2                	add    %eax,%edx
 85e525c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e525f:	66 89 90 4a 01 00 00 	mov    %dx,0x14a(%eax)
 85e5266:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5269:	0f b7 80 4c 01 00 00 	movzwl 0x14c(%eax),%eax
 85e5270:	8d 14 00             	lea    (%eax,%eax,1),%edx
 85e5273:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5276:	66 89 90 4c 01 00 00 	mov    %dx,0x14c(%eax)
 85e527d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e5280:	0f b7 90 4c 01 00 00 	movzwl 0x14c(%eax),%edx
 85e5287:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
 85e528b:	74 07                	je     85e5294 <_ZN19CMissionList_Charac8setIssueEbb+0xc6>
 85e528d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e5292:	eb 05                	jmp    85e5299 <_ZN19CMissionList_Charac8setIssueEbb+0xcb>
 85e5294:	b8 00 00 00 00       	mov    $0x0,%eax
 85e5299:	01 c2                	add    %eax,%edx
 85e529b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e529e:	66 89 90 4c 01 00 00 	mov    %dx,0x14c(%eax)
 85e52a5:	c9                   	leave
 85e52a6:	c3                   	ret
 85e52a7:	90                   	nop

```

```c
// CMissionList_Charac::setIssue @ 0x85e51ce

/* CMissionList_Charac::setIssue(bool, bool) */

void __thiscall CMissionList_Charac::setIssue(CMissionList_Charac *this,bool param_1,bool param_2)

{
  if (param_2) {
    *(short *)(this + 0x148) = *(short *)(this + 0x148) * 2;
    *(ushort *)(this + 0x148) = *(short *)(this + 0x148) + (ushort)param_1;
  }
  else {
    *(short *)(this + 0x14a) = *(short *)(this + 0x14a) * 2;
    *(ushort *)(this + 0x14a) = *(short *)(this + 0x14a) + (ushort)param_1;
  }
  *(short *)(this + 0x14c) = *(short *)(this + 0x14c) * 2;
  *(ushort *)(this + 0x14c) = *(short *)(this + 0x14c) + (ushort)param_1;
  return;
}

```

