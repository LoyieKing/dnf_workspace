# Dispatcher_Req_Urgent_Quest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081df42c Dispatcher_Req_Urgent_Quest::process  [0x081df42c-0x81df759] ===
 81df42c:	55                   	push   %ebp
 81df42d:	89 e5                	mov    %esp,%ebp
 81df42f:	57                   	push   %edi
 81df430:	56                   	push   %esi
 81df431:	53                   	push   %ebx
 81df432:	81 ec ac 75 00 00    	sub    $0x75ac,%esp
 81df438:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df43b:	89 04 24             	mov    %eax,(%esp)
 81df43e:	e8 49 af ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81df443:	83 f8 02             	cmp    $0x2,%eax
 81df446:	0f 9e c0             	setle  %al
 81df449:	84 c0                	test   %al,%al
 81df44b:	74 0a                	je     81df457 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x2b>
 81df44d:	b8 00 00 00 00       	mov    $0x0,%eax
 81df452:	e9 f8 02 00 00       	jmp    81df74f <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x323>
 81df457:	8b 45 14             	mov    0x14(%ebp),%eax
 81df45a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81df45d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df460:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 81df464:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df467:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81df46e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df471:	89 04 24             	mov    %eax,(%esp)
 81df474:	e8 3f ae ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81df479:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81df47c:	83 7d dc 1a          	cmpl   $0x1a,-0x24(%ebp)
 81df480:	7e 23                	jle    81df4a5 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81df482:	83 7d dc 45          	cmpl   $0x45,-0x24(%ebp)
 81df486:	7f 1d                	jg     81df4a5 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81df488:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df48b:	89 04 24             	mov    %eax,(%esp)
 81df48e:	e8 13 b4 fb ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 81df493:	8b 80 f0 75 00 00    	mov    0x75f0(%eax),%eax
 81df499:	83 f8 ff             	cmp    $0xffffffff,%eax
 81df49c:	75 07                	jne    81df4a5 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81df49e:	b8 01 00 00 00       	mov    $0x1,%eax
 81df4a3:	eb 05                	jmp    81df4aa <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81df4a5:	b8 00 00 00 00       	mov    $0x0,%eax
 81df4aa:	84 c0                	test   %al,%al
 81df4ac:	0f 84 8e 02 00 00    	je     81df740 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x314>
 81df4b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df4b5:	89 04 24             	mov    %eax,(%esp)
 81df4b8:	e8 a1 b5 f6 ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81df4bd:	89 04 24             	mov    %eax,(%esp)
 81df4c0:	e8 a1 dd 4c 00       	call   86ad266 <_ZN9UserQuest12hasEpicQuestEv>
 81df4c5:	84 c0                	test   %al,%al
 81df4c7:	74 14                	je     81df4dd <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0xb1>
 81df4c9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df4cc:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 81df4d3:	b8 00 00 00 00       	mov    $0x0,%eax
 81df4d8:	e9 72 02 00 00       	jmp    81df74f <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x323>
 81df4dd:	b8 d0 a2 40 09       	mov    $0x940a2d0,%eax
 81df4e2:	0f b6 00             	movzbl (%eax),%eax
 81df4e5:	84 c0                	test   %al,%al
 81df4e7:	75 71                	jne    81df55a <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81df4e9:	c7 04 24 d0 a2 40 09 	movl   $0x940a2d0,(%esp)
 81df4f0:	e8 3b 5e 54 00       	call   8725330 <__cxa_guard_acquire>
 81df4f5:	85 c0                	test   %eax,%eax
 81df4f7:	0f 95 c0             	setne  %al
 81df4fa:	84 c0                	test   %al,%al
 81df4fc:	74 5c                	je     81df55a <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81df4fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 81df503:	c7 04 24 e4 aa 40 09 	movl   $0x940aae4,(%esp)
 81df50a:	e8 c7 62 05 00       	call   82357d6 <_ZNSt4listIiSaIiEEC1Ev>
 81df50f:	c7 04 24 d0 a2 40 09 	movl   $0x940a2d0,(%esp)
 81df516:	e8 35 5d 54 00       	call   8725250 <__cxa_guard_release>
 81df51b:	b8 e8 ad 22 08       	mov    $0x822ade8,%eax
 81df520:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81df527:	08 
 81df528:	c7 44 24 04 e4 aa 40 	movl   $0x940aae4,0x4(%esp)
 81df52f:	09 
 81df530:	89 04 24             	mov    %eax,(%esp)
 81df533:	e8 98 e8 e9 ff       	call   807ddd0 <__cxa_atexit@plt>
 81df538:	eb 20                	jmp    81df55a <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81df53a:	89 d6                	mov    %edx,%esi
 81df53c:	89 c7                	mov    %eax,%edi
 81df53e:	84 db                	test   %bl,%bl
 81df540:	75 0c                	jne    81df54e <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x122>
 81df542:	c7 04 24 d0 a2 40 09 	movl   $0x940a2d0,(%esp)
 81df549:	e8 72 5d 54 00       	call   87252c0 <__cxa_guard_abort>
 81df54e:	89 f8                	mov    %edi,%eax
 81df550:	89 f2                	mov    %esi,%edx
 81df552:	89 04 24             	mov    %eax,(%esp)
 81df555:	e8 f6 41 90 00       	call   8ae3750 <_Unwind_Resume>
 81df55a:	c7 04 24 e4 aa 40 09 	movl   $0x940aae4,(%esp)
 81df561:	e8 52 62 05 00       	call   82357b8 <_ZNSt4listIiSaIiEE5clearEv>
 81df566:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df569:	89 04 24             	mov    %eax,(%esp)
 81df56c:	e8 35 b3 fb ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 81df571:	89 c2                	mov    %eax,%edx
 81df573:	8d 85 77 8a ff ff    	lea    -0x7589(%ebp),%eax
 81df579:	8d 4a 04             	lea    0x4(%edx),%ecx
 81df57c:	ba 31 75 00 00       	mov    $0x7531,%edx
 81df581:	89 54 24 08          	mov    %edx,0x8(%esp)
 81df585:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81df589:	89 04 24             	mov    %eax,(%esp)
 81df58c:	e8 0f e3 e9 ff       	call   807d8a0 <memcpy@plt>
 81df591:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df594:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df598:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81df59b:	89 04 24             	mov    %eax,(%esp)
 81df59e:	e8 11 8b 16 00       	call   83480b4 <_ZN18stSelectQuestParamC1EP5CUser>
 81df5a3:	e8 f3 cb ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81df5a8:	8b 40 18             	mov    0x18(%eax),%eax
 81df5ab:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 81df5b2:	00 
 81df5b3:	89 04 24             	mov    %eax,(%esp)
 81df5b6:	e8 1d 65 17 00       	call   8355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>
 81df5bb:	89 c3                	mov    %eax,%ebx
 81df5bd:	e8 d9 cb ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81df5c2:	8b 40 18             	mov    0x18(%eax),%eax
 81df5c5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81df5cc:	00 
 81df5cd:	8d 95 77 8a ff ff    	lea    -0x7589(%ebp),%edx
 81df5d3:	89 54 24 10          	mov    %edx,0x10(%esp)
 81df5d7:	8d 55 a8             	lea    -0x58(%ebp),%edx
 81df5da:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81df5de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81df5e2:	c7 44 24 04 e4 aa 40 	movl   $0x940aae4,0x4(%esp)
 81df5e9:	09 
 81df5ea:	89 04 24             	mov    %eax,(%esp)
 81df5ed:	e8 7a 5f 17 00       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 81df5f2:	c7 04 24 e4 aa 40 09 	movl   $0x940aae4,(%esp)
 81df5f9:	e8 b8 7d 05 00       	call   82373b6 <_ZNKSt4listIiSaIiEE5emptyEv>
 81df5fe:	83 f0 01             	xor    $0x1,%eax
 81df601:	84 c0                	test   %al,%al
 81df603:	0f 84 fd 00 00 00    	je     81df706 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x2da>
 81df609:	b8 d8 a2 40 09       	mov    $0x940a2d8,%eax
 81df60e:	0f b6 00             	movzbl (%eax),%eax
 81df611:	84 c0                	test   %al,%al
 81df613:	75 51                	jne    81df666 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x23a>
 81df615:	c7 04 24 d8 a2 40 09 	movl   $0x940a2d8,(%esp)
 81df61c:	e8 0f 5d 54 00       	call   8725330 <__cxa_guard_acquire>
 81df621:	85 c0                	test   %eax,%eax
 81df623:	0f 95 c0             	setne  %al
 81df626:	84 c0                	test   %al,%al
 81df628:	74 3c                	je     81df666 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x23a>
 81df62a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81df62f:	c7 04 24 00 ab 40 09 	movl   $0x940ab00,(%esp)
 81df636:	e8 0d a9 ef ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 81df63b:	c7 04 24 d8 a2 40 09 	movl   $0x940a2d8,(%esp)
 81df642:	e8 09 5c 54 00       	call   8725250 <__cxa_guard_release>
 81df647:	eb 1d                	jmp    81df666 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x23a>
 81df649:	89 d6                	mov    %edx,%esi
 81df64b:	89 c7                	mov    %eax,%edi
 81df64d:	84 db                	test   %bl,%bl
 81df64f:	75 0c                	jne    81df65d <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x231>
 81df651:	c7 04 24 d8 a2 40 09 	movl   $0x940a2d8,(%esp)
 81df658:	e8 63 5c 54 00       	call   87252c0 <__cxa_guard_abort>
 81df65d:	89 f8                	mov    %edi,%eax
 81df65f:	89 f2                	mov    %esi,%edx
 81df661:	e9 ac 00 00 00       	jmp    81df712 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x2e6>
 81df666:	c7 04 24 e4 aa 40 09 	movl   $0x940aae4,(%esp)
 81df66d:	e8 04 65 05 00       	call   8235b76 <_ZNKSt4listIiSaIiEE4sizeEv>
 81df672:	83 e8 01             	sub    $0x1,%eax
 81df675:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81df678:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81df67b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df67f:	c7 04 24 00 ab 40 09 	movl   $0x940ab00,(%esp)
 81df686:	e8 33 c4 ee ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 81df68b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81df68e:	c7 04 24 e4 aa 40 09 	movl   $0x940aae4,(%esp)
 81df695:	e8 dc 64 05 00       	call   8235b76 <_ZNKSt4listIiSaIiEE4sizeEv>
 81df69a:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81df69d:	0f 97 c0             	seta   %al
 81df6a0:	84 c0                	test   %al,%al
 81df6a2:	0f 84 88 00 00 00    	je     81df730 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x304>
 81df6a8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81df6ab:	c7 44 24 04 e4 aa 40 	movl   $0x940aae4,0x4(%esp)
 81df6b2:	09 
 81df6b3:	89 04 24             	mov    %eax,(%esp)
 81df6b6:	e8 0d 7d 05 00       	call   82373c8 <_ZNSt4listIiSaIiEE5beginEv>
 81df6bb:	83 ec 04             	sub    $0x4,%esp
 81df6be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81df6c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df6c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81df6c8:	89 04 24             	mov    %eax,(%esp)
 81df6cb:	e8 1d 7d 05 00       	call   82373ed <_ZSt7advanceISt14_List_iteratorIiEjEvRT_T0_>
 81df6d0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81df6d3:	89 04 24             	mov    %eax,(%esp)
 81df6d6:	e8 4f 7d 05 00       	call   823742a <_ZNKSt14_List_iteratorIiEdeEv>
 81df6db:	8b 00                	mov    (%eax),%eax
 81df6dd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81df6e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df6e3:	89 04 24             	mov    %eax,(%esp)
 81df6e6:	e8 73 b3 f6 ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 81df6eb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81df6ee:	89 90 f0 75 00 00    	mov    %edx,0x75f0(%eax)
 81df6f4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df6f7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81df6fa:	89 50 08             	mov    %edx,0x8(%eax)
 81df6fd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df700:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 81df704:	eb 2a                	jmp    81df730 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x304>
 81df706:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df709:	c7 40 0c 04 00 00 00 	movl   $0x4,0xc(%eax)
 81df710:	eb 1e                	jmp    81df730 <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x304>
 81df712:	89 d3                	mov    %edx,%ebx
 81df714:	89 c6                	mov    %eax,%esi
 81df716:	8d 85 77 8a ff ff    	lea    -0x7589(%ebp),%eax
 81df71c:	89 04 24             	mov    %eax,(%esp)
 81df71f:	e8 a8 ed 04 00       	call   822e4cc <_ZN8WongWork11CQuestClearD1Ev>
 81df724:	89 f0                	mov    %esi,%eax
 81df726:	89 da                	mov    %ebx,%edx
 81df728:	89 04 24             	mov    %eax,(%esp)
 81df72b:	e8 20 40 90 00       	call   8ae3750 <_Unwind_Resume>
 81df730:	8d 85 77 8a ff ff    	lea    -0x7589(%ebp),%eax
 81df736:	89 04 24             	mov    %eax,(%esp)
 81df739:	e8 8e ed 04 00       	call   822e4cc <_ZN8WongWork11CQuestClearD1Ev>
 81df73e:	eb 0a                	jmp    81df74a <_ZN27Dispatcher_Req_Urgent_Quest7processEP5CUserR8MSG_BASER9ParamBase+0x31e>
 81df740:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81df743:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 81df74a:	b8 00 00 00 00       	mov    $0x0,%eax
 81df74f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81df752:	83 c4 00             	add    $0x0,%esp
 81df755:	5b                   	pop    %ebx
 81df756:	5e                   	pop    %esi
 81df757:	5f                   	pop    %edi
 81df758:	5d                   	pop    %ebp
 81df759:	c3                   	ret

```

```c
// Dispatcher_Req_Urgent_Quest::process @ 0x81df42c

/* Dispatcher_Req_Urgent_Quest::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Req_Urgent_Quest::process
          (Dispatcher_Req_Urgent_Quest *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  UserQuest *this_00;
  multimap *pmVar4;
  uint uVar5;
  undefined4 *puVar6;
  CQuestClear local_758d [30001];
  stSelectQuestParam local_5c [40];
  _List_iterator local_34 [4];
  ulong local_30;
  ParamBase *local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    local_2c = param_3;
    param_3[4] = (ParamBase)0x0;
    *(undefined4 *)(param_3 + 8) = 0xffffffff;
    local_28 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (((local_28 < 0x1b) || (0x45 < local_28)) ||
       (iVar3 = CUser::getCurCharacQuestR(param_1), *(int *)(iVar3 + 0x75f0) != -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      this_00 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
      cVar2 = UserQuest::hasEpicQuest(this_00);
      if (cVar2 == '\0') {
        if ((process(CUser*,MSG_BASE&,ParamBase&)::selected_quest == '\0') &&
           (iVar3 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::selected_quest),
           iVar3 != 0)) {
                    /* try { // try from 081df50a to 081df50e has its CatchHandler @ 081df53a */
          std::list<int,std::allocator<int>>::list
                    ((list<int,std::allocator<int>> *)
                     &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
          __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
          __cxa_atexit(std::list<int,std::allocator<int>>::~list,
                       &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest,&__dso_handle);
        }
        std::list<int,std::allocator<int>>::clear
                  ((list<int,std::allocator<int>> *)
                   &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
        iVar3 = CUser::getCurCharacQuestR(param_1);
        memcpy(local_758d,(void *)(iVar3 + 4),0x7531);
                    /* try { // try from 081df59e to 081df5f1 has its CatchHandler @ 081df712 */
        stSelectQuestParam::stSelectQuestParam(local_5c,param_1);
        iVar3 = G_CDataManager();
        pmVar4 = (multimap *)QuestList::getQuestNPCList(*(QuestList **)(iVar3 + 0x18),8);
        iVar3 = G_CDataManager();
        QuestList::allowable_questlist_as_npc
                  (*(QuestList **)(iVar3 + 0x18),
                   (list *)&process(CUser*,MSG_BASE&,ParamBase&)::selected_quest,pmVar4,local_5c,
                   local_758d,true);
        cVar2 = std::list<int,std::allocator<int>>::empty
                          ((list<int,std::allocator<int>> *)
                           &process(CUser*,MSG_BASE&,ParamBase&)::selected_quest);
        if (cVar2 == '\x01') {
          *(undefined4 *)(local_2c + 0xc) = 4;
        }
        else {
          if ((process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice == '\0') &&
             (iVar3 = __cxa_guard_acquire(&process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice),
             iVar3 != 0)) {
                    /* try { // try from 081df636 to 081df63a has its CatchHandler @ 081df649 */
            CMTRand::CMTRand((CMTRand *)process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice);
            __cxa_guard_release(&process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice);
          }
                    /* try { // try from 081df66d to 081df6cf has its CatchHandler @ 081df712 */
          iVar3 = std::list<int,std::allocator<int>>::size();
          local_30 = iVar3 - 1;
          local_24 = CMTRand::randInt((CMTRand *)
                                      process(CUser*,MSG_BASE&,ParamBase&)::urgentRandomDice,
                                      &local_30);
          uVar5 = std::list<int,std::allocator<int>>::size();
          if (local_24 < uVar5) {
            std::list<int,std::allocator<int>>::begin();
            std::advance<std::_List_iterator<int>,unsigned_int>(local_34,local_24);
            puVar6 = (undefined4 *)
                     std::_List_iterator<int>::operator*((_List_iterator<int> *)local_34);
            local_20 = *puVar6;
            iVar3 = CUser::getCurCharacQuestW(param_1);
            *(undefined4 *)(iVar3 + 0x75f0) = local_20;
            *(undefined4 *)(local_2c + 8) = local_20;
            local_2c[4] = (ParamBase)0x1;
          }
        }
        WongWork::CQuestClear::~CQuestClear(local_758d);
      }
      else {
        *(undefined4 *)(local_2c + 0xc) = 1;
      }
    }
    else {
      *(undefined4 *)(local_2c + 0xc) = 1;
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081df422 Dispatcher_Req_Urgent_Quest::read  [0x081df422-0x81df42b] ===
 81df422:	55                   	push   %ebp
 81df423:	89 e5                	mov    %esp,%ebp
 81df425:	b8 00 00 00 00       	mov    $0x0,%eax
 81df42a:	5d                   	pop    %ebp
 81df42b:	c3                   	ret

```

```c
// Dispatcher_Req_Urgent_Quest::read @ 0x81df422

/* Dispatcher_Req_Urgent_Quest::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Req_Urgent_Quest::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081df75a Dispatcher_Req_Urgent_Quest::send  [0x081df75a-0x81df83f] ===
 81df75a:	55                   	push   %ebp
 81df75b:	89 e5                	mov    %esp,%ebp
 81df75d:	56                   	push   %esi
 81df75e:	53                   	push   %ebx
 81df75f:	83 ec 20             	sub    $0x20,%esp
 81df762:	8b 45 10             	mov    0x10(%ebp),%eax
 81df765:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81df768:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df76b:	89 04 24             	mov    %eax,(%esp)
 81df76e:	e8 d9 e5 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81df773:	c7 44 24 08 c6 01 00 	movl   $0x1c6,0x8(%esp)
 81df77a:	00 
 81df77b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81df782:	00 
 81df783:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df786:	89 04 24             	mov    %eax,(%esp)
 81df789:	e8 6e c1 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81df78e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df791:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81df795:	84 c0                	test   %al,%al
 81df797:	74 07                	je     81df7a0 <_ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase+0x46>
 81df799:	b8 01 00 00 00       	mov    $0x1,%eax
 81df79e:	eb 05                	jmp    81df7a5 <_ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase+0x4b>
 81df7a0:	b8 00 00 00 00       	mov    $0x0,%eax
 81df7a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df7a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df7ac:	89 04 24             	mov    %eax,(%esp)
 81df7af:	e8 6c c1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81df7b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df7b7:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81df7bb:	84 c0                	test   %al,%al
 81df7bd:	74 17                	je     81df7d6 <_ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase+0x7c>
 81df7bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df7c2:	8b 40 08             	mov    0x8(%eax),%eax
 81df7c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df7c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df7cc:	89 04 24             	mov    %eax,(%esp)
 81df7cf:	e8 d0 a6 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81df7d4:	eb 15                	jmp    81df7eb <_ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase+0x91>
 81df7d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81df7d9:	8b 40 0c             	mov    0xc(%eax),%eax
 81df7dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df7e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df7e3:	89 04 24             	mov    %eax,(%esp)
 81df7e6:	e8 35 c1 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81df7eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81df7f2:	00 
 81df7f3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df7f6:	89 04 24             	mov    %eax,(%esp)
 81df7f9:	e8 5a c1 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81df7fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df801:	89 44 24 04          	mov    %eax,0x4(%esp)
 81df805:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df808:	89 04 24             	mov    %eax,(%esp)
 81df80b:	e8 aa 8d 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81df810:	eb 1b                	jmp    81df82d <_ZN27Dispatcher_Req_Urgent_Quest4sendEP5CUserR9ParamBase+0xd3>
 81df812:	89 d3                	mov    %edx,%ebx
 81df814:	89 c6                	mov    %eax,%esi
 81df816:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df819:	89 04 24             	mov    %eax,(%esp)
 81df81c:	e8 5f e6 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81df821:	89 f0                	mov    %esi,%eax
 81df823:	89 da                	mov    %ebx,%edx
 81df825:	89 04 24             	mov    %eax,(%esp)
 81df828:	e8 23 3f 90 00       	call   8ae3750 <_Unwind_Resume>
 81df82d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81df830:	89 04 24             	mov    %eax,(%esp)
 81df833:	e8 48 e6 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81df838:	83 c4 20             	add    $0x20,%esp
 81df83b:	5b                   	pop    %ebx
 81df83c:	5e                   	pop    %esi
 81df83d:	5d                   	pop    %ebp
 81df83e:	c3                   	ret
 81df83f:	90                   	nop

```

```c
// Dispatcher_Req_Urgent_Quest::send @ 0x81df75a

/* Dispatcher_Req_Urgent_Quest::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Req_Urgent_Quest::send
          (Dispatcher_Req_Urgent_Quest *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081df789 to 081df80f has its CatchHandler @ 081df812 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1c6);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(local_10[4] != (ParamBase)0x0))
  ;
  if (local_10[4] == (ParamBase)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

