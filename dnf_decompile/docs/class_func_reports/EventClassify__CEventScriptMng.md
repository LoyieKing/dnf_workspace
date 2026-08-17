# EventClassify__CEventScriptMng

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 34

---

## CEventScriptMng

```asm
// === 0810b136 EventClassify::CEventScriptMng::CEventScriptMng  [0x0810b136-0x810b217] ===
 810b136:	55                   	push   %ebp
 810b137:	89 e5                	mov    %esp,%ebp
 810b139:	56                   	push   %esi
 810b13a:	53                   	push   %ebx
 810b13b:	83 ec 10             	sub    $0x10,%esp
 810b13e:	8b 45 08             	mov    0x8(%ebp),%eax
 810b141:	89 04 24             	mov    %eax,(%esp)
 810b144:	e8 c7 5d 00 00       	call   8110f10 <_ZN19InGameEventInfoListC1Ev>
 810b149:	8b 45 08             	mov    0x8(%ebp),%eax
 810b14c:	83 c0 18             	add    $0x18,%eax
 810b14f:	89 04 24             	mov    %eax,(%esp)
 810b152:	e8 f5 5d 00 00       	call   8110f4c <_ZN23InGameEventScriptLoaderC1Ev>
 810b157:	8b 45 08             	mov    0x8(%ebp),%eax
 810b15a:	83 c0 30             	add    $0x30,%eax
 810b15d:	89 04 24             	mov    %eax,(%esp)
 810b160:	e8 ff 62 00 00       	call   8111464 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEC1Ev>
 810b165:	8b 45 08             	mov    0x8(%ebp),%eax
 810b168:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 810b16f:	8b 45 08             	mov    0x8(%ebp),%eax
 810b172:	c6 40 4c 00          	movb   $0x0,0x4c(%eax)
 810b176:	8b 45 08             	mov    0x8(%ebp),%eax
 810b179:	83 c0 50             	add    $0x50,%eax
 810b17c:	89 04 24             	mov    %eax,(%esp)
 810b17f:	e8 28 30 f8 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 810b184:	8b 45 08             	mov    0x8(%ebp),%eax
 810b187:	83 c0 30             	add    $0x30,%eax
 810b18a:	89 04 24             	mov    %eax,(%esp)
 810b18d:	e8 4c 63 00 00       	call   81114de <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE5clearEv>
 810b192:	8b 45 08             	mov    0x8(%ebp),%eax
 810b195:	89 04 24             	mov    %eax,(%esp)
 810b198:	e8 55 63 00 00       	call   81114f2 <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 810b19d:	8b 45 08             	mov    0x8(%ebp),%eax
 810b1a0:	83 c0 18             	add    $0x18,%eax
 810b1a3:	89 04 24             	mov    %eax,(%esp)
 810b1a6:	e8 5b 63 00 00       	call   8111506 <_ZNSt3mapISsP17InGameEventScriptSt4lessISsESaISt4pairIKSsS1_EEE5clearEv>
 810b1ab:	eb 63                	jmp    810b210 <_ZN13EventClassify15CEventScriptMngC1Ev+0xda>
 810b1ad:	89 d3                	mov    %edx,%ebx
 810b1af:	89 c6                	mov    %eax,%esi
 810b1b1:	8b 45 08             	mov    0x8(%ebp),%eax
 810b1b4:	83 c0 50             	add    $0x50,%eax
 810b1b7:	89 04 24             	mov    %eax,(%esp)
 810b1ba:	e8 1b 8c f7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 810b1bf:	89 f0                	mov    %esi,%eax
 810b1c1:	89 da                	mov    %ebx,%edx
 810b1c3:	eb 00                	jmp    810b1c5 <_ZN13EventClassify15CEventScriptMngC1Ev+0x8f>
 810b1c5:	89 d3                	mov    %edx,%ebx
 810b1c7:	89 c6                	mov    %eax,%esi
 810b1c9:	8b 45 08             	mov    0x8(%ebp),%eax
 810b1cc:	83 c0 30             	add    $0x30,%eax
 810b1cf:	89 04 24             	mov    %eax,(%esp)
 810b1d2:	e8 9d 5d 00 00       	call   8110f74 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 810b1d7:	89 f0                	mov    %esi,%eax
 810b1d9:	89 da                	mov    %ebx,%edx
 810b1db:	eb 00                	jmp    810b1dd <_ZN13EventClassify15CEventScriptMngC1Ev+0xa7>
 810b1dd:	89 d3                	mov    %edx,%ebx
 810b1df:	89 c6                	mov    %eax,%esi
 810b1e1:	8b 45 08             	mov    0x8(%ebp),%eax
 810b1e4:	83 c0 18             	add    $0x18,%eax
 810b1e7:	89 04 24             	mov    %eax,(%esp)
 810b1ea:	e8 71 5d 00 00       	call   8110f60 <_ZN23InGameEventScriptLoaderD1Ev>
 810b1ef:	89 f0                	mov    %esi,%eax
 810b1f1:	89 da                	mov    %ebx,%edx
 810b1f3:	eb 00                	jmp    810b1f5 <_ZN13EventClassify15CEventScriptMngC1Ev+0xbf>
 810b1f5:	89 d3                	mov    %edx,%ebx
 810b1f7:	89 c6                	mov    %eax,%esi
 810b1f9:	8b 45 08             	mov    0x8(%ebp),%eax
 810b1fc:	89 04 24             	mov    %eax,(%esp)
 810b1ff:	e8 20 5d 00 00       	call   8110f24 <_ZN19InGameEventInfoListD1Ev>
 810b204:	89 f0                	mov    %esi,%eax
 810b206:	89 da                	mov    %ebx,%edx
 810b208:	89 04 24             	mov    %eax,(%esp)
 810b20b:	e8 40 85 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b210:	83 c4 10             	add    $0x10,%esp
 810b213:	5b                   	pop    %ebx
 810b214:	5e                   	pop    %esi
 810b215:	5d                   	pop    %ebp
 810b216:	c3                   	ret
 810b217:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::CEventScriptMng @ 0x810b136

/* EventClassify::CEventScriptMng::CEventScriptMng() */

void __thiscall EventClassify::CEventScriptMng::CEventScriptMng(CEventScriptMng *this)

{
  InGameEventInfoList::InGameEventInfoList((InGameEventInfoList *)this);
                    /* try { // try from 0810b152 to 0810b156 has its CatchHandler @ 0810b1f5 */
  InGameEventScriptLoader::InGameEventScriptLoader((InGameEventScriptLoader *)(this + 0x18));
                    /* try { // try from 0810b160 to 0810b164 has its CatchHandler @ 0810b1dd */
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::map((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
         *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (CEventScriptMng)0x0;
                    /* try { // try from 0810b17f to 0810b183 has its CatchHandler @ 0810b1c5 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x50));
                    /* try { // try from 0810b18d to 0810b1aa has its CatchHandler @ 0810b1ad */
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::clear((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
           *)(this + 0x30));
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::clear((map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
           *)this);
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::clear((map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
           *)(this + 0x18));
  return;
}

```

---

## create_event_entity

```asm
// === 0810b402 EventClassify::CEventScriptMng::create_event_entity  [0x0810b402-0x810b969] ===
 810b402:	55                   	push   %ebp
 810b403:	89 e5                	mov    %esp,%ebp
 810b405:	57                   	push   %edi
 810b406:	56                   	push   %esi
 810b407:	53                   	push   %ebx
 810b408:	83 ec 3c             	sub    $0x3c,%esp
 810b40b:	8b 45 10             	mov    0x10(%ebp),%eax
 810b40e:	88 45 d4             	mov    %al,-0x2c(%ebp)
 810b411:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 810b418:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 810b41c:	74 3d                	je     810b45b <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x59>
 810b41e:	c7 04 24 1c 00 00 00 	movl   $0x1c,(%esp)
 810b425:	e8 26 90 61 00       	call   8724450 <_Znwj>
 810b42a:	89 c3                	mov    %eax,%ebx
 810b42c:	89 d8                	mov    %ebx,%eax
 810b42e:	89 04 24             	mov    %eax,(%esp)
 810b431:	e8 0a fb ff ff       	call   810af40 <_ZN13EventClassify12CEventEntityC1Ev>
 810b436:	eb 18                	jmp    810b450 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x4e>
 810b438:	89 d6                	mov    %edx,%esi
 810b43a:	89 c7                	mov    %eax,%edi
 810b43c:	89 1c 24             	mov    %ebx,(%esp)
 810b43f:	e8 ac 90 61 00       	call   87244f0 <_ZdlPv>
 810b444:	89 f8                	mov    %edi,%eax
 810b446:	89 f2                	mov    %esi,%edx
 810b448:	89 04 24             	mov    %eax,(%esp)
 810b44b:	e8 00 83 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b450:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 810b453:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810b456:	e9 07 05 00 00       	jmp    810b962 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x560>
 810b45b:	8b 45 0c             	mov    0xc(%ebp),%eax
 810b45e:	3d 94 01 00 00       	cmp    $0x194,%eax
 810b463:	0f 84 52 01 00 00    	je     810b5bb <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x1b9>
 810b469:	3d 94 01 00 00       	cmp    $0x194,%eax
 810b46e:	7f 3c                	jg     810b4ac <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0xaa>
 810b470:	83 f8 65             	cmp    $0x65,%eax
 810b473:	0f 84 32 04 00 00    	je     810b8ab <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x4a9>
 810b479:	83 f8 65             	cmp    $0x65,%eax
 810b47c:	7f 17                	jg     810b495 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x93>
 810b47e:	83 f8 56             	cmp    $0x56,%eax
 810b481:	0f 84 92 01 00 00    	je     810b619 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x217>
 810b487:	83 f8 5c             	cmp    $0x5c,%eax
 810b48a:	0f 84 bd 03 00 00    	je     810b84d <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x44b>
 810b490:	e9 ca 04 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b495:	3d 91 01 00 00       	cmp    $0x191,%eax
 810b49a:	0f 8c bf 04 00 00    	jl     810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b4a0:	3d 92 01 00 00       	cmp    $0x192,%eax
 810b4a5:	7e 58                	jle    810b4ff <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0xfd>
 810b4a7:	e9 b1 00 00 00       	jmp    810b55d <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x15b>
 810b4ac:	3d 99 01 00 00       	cmp    $0x199,%eax
 810b4b1:	0f 84 7c 02 00 00    	je     810b733 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x331>
 810b4b7:	3d 99 01 00 00       	cmp    $0x199,%eax
 810b4bc:	7f 1b                	jg     810b4d9 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0xd7>
 810b4be:	3d 96 01 00 00       	cmp    $0x196,%eax
 810b4c3:	0f 84 ae 01 00 00    	je     810b677 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x275>
 810b4c9:	3d 97 01 00 00       	cmp    $0x197,%eax
 810b4ce:	0f 84 01 02 00 00    	je     810b6d5 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x2d3>
 810b4d4:	e9 86 04 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b4d9:	3d 9b 01 00 00       	cmp    $0x19b,%eax
 810b4de:	0f 84 0b 03 00 00    	je     810b7ef <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x3ed>
 810b4e4:	3d 9b 01 00 00       	cmp    $0x19b,%eax
 810b4e9:	0f 8c a2 02 00 00    	jl     810b791 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x38f>
 810b4ef:	3d 9c 01 00 00       	cmp    $0x19c,%eax
 810b4f4:	0f 84 0c 04 00 00    	je     810b906 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x504>
 810b4fa:	e9 60 04 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b4ff:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b506:	e8 45 8f 61 00       	call   8724450 <_Znwj>
 810b50b:	89 c3                	mov    %eax,%ebx
 810b50d:	89 d9                	mov    %ebx,%ecx
 810b50f:	89 ca                	mov    %ecx,%edx
 810b511:	be 00 00 00 00       	mov    $0x0,%esi
 810b516:	b8 20 00 00 00       	mov    $0x20,%eax
 810b51b:	89 c7                	mov    %eax,%edi
 810b51d:	83 e7 fc             	and    $0xfffffffc,%edi
 810b520:	b8 00 00 00 00       	mov    $0x0,%eax
 810b525:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b528:	83 c0 04             	add    $0x4,%eax
 810b52b:	39 f8                	cmp    %edi,%eax
 810b52d:	72 f6                	jb     810b525 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x123>
 810b52f:	01 c2                	add    %eax,%edx
 810b531:	89 0c 24             	mov    %ecx,(%esp)
 810b534:	e8 4f 5a 00 00       	call   8110f88 <_ZN13EventClassify18CAccountFirstLoginC1Ev>
 810b539:	eb 18                	jmp    810b553 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x151>
 810b53b:	89 d6                	mov    %edx,%esi
 810b53d:	89 c7                	mov    %eax,%edi
 810b53f:	89 1c 24             	mov    %ebx,(%esp)
 810b542:	e8 a9 8f 61 00       	call   87244f0 <_ZdlPv>
 810b547:	89 f8                	mov    %edi,%eax
 810b549:	89 f2                	mov    %esi,%edx
 810b54b:	89 04 24             	mov    %eax,(%esp)
 810b54e:	e8 fd 81 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b553:	89 d8                	mov    %ebx,%eax
 810b555:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b558:	e9 02 04 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b55d:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b564:	e8 e7 8e 61 00       	call   8724450 <_Znwj>
 810b569:	89 c3                	mov    %eax,%ebx
 810b56b:	89 d9                	mov    %ebx,%ecx
 810b56d:	89 ca                	mov    %ecx,%edx
 810b56f:	be 00 00 00 00       	mov    $0x0,%esi
 810b574:	b8 20 00 00 00       	mov    $0x20,%eax
 810b579:	89 c7                	mov    %eax,%edi
 810b57b:	83 e7 fc             	and    $0xfffffffc,%edi
 810b57e:	b8 00 00 00 00       	mov    $0x0,%eax
 810b583:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b586:	83 c0 04             	add    $0x4,%eax
 810b589:	39 f8                	cmp    %edi,%eax
 810b58b:	72 f6                	jb     810b583 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x181>
 810b58d:	01 c2                	add    %eax,%edx
 810b58f:	89 0c 24             	mov    %ecx,(%esp)
 810b592:	e8 0d 5a 00 00       	call   8110fa4 <_ZN13EventClassify15CAddItemCountDBC1Ev>
 810b597:	eb 18                	jmp    810b5b1 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x1af>
 810b599:	89 d6                	mov    %edx,%esi
 810b59b:	89 c7                	mov    %eax,%edi
 810b59d:	89 1c 24             	mov    %ebx,(%esp)
 810b5a0:	e8 4b 8f 61 00       	call   87244f0 <_ZdlPv>
 810b5a5:	89 f8                	mov    %edi,%eax
 810b5a7:	89 f2                	mov    %esi,%edx
 810b5a9:	89 04 24             	mov    %eax,(%esp)
 810b5ac:	e8 9f 81 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b5b1:	89 d8                	mov    %ebx,%eax
 810b5b3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b5b6:	e9 a4 03 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b5bb:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b5c2:	e8 89 8e 61 00       	call   8724450 <_Znwj>
 810b5c7:	89 c3                	mov    %eax,%ebx
 810b5c9:	89 d9                	mov    %ebx,%ecx
 810b5cb:	89 ca                	mov    %ecx,%edx
 810b5cd:	be 00 00 00 00       	mov    $0x0,%esi
 810b5d2:	b8 20 00 00 00       	mov    $0x20,%eax
 810b5d7:	89 c7                	mov    %eax,%edi
 810b5d9:	83 e7 fc             	and    $0xfffffffc,%edi
 810b5dc:	b8 00 00 00 00       	mov    $0x0,%eax
 810b5e1:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b5e4:	83 c0 04             	add    $0x4,%eax
 810b5e7:	39 f8                	cmp    %edi,%eax
 810b5e9:	72 f6                	jb     810b5e1 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x1df>
 810b5eb:	01 c2                	add    %eax,%edx
 810b5ed:	89 0c 24             	mov    %ecx,(%esp)
 810b5f0:	e8 cb 59 00 00       	call   8110fc0 <_ZN13EventClassify14CLevelUpRewardC1Ev>
 810b5f5:	eb 18                	jmp    810b60f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x20d>
 810b5f7:	89 d6                	mov    %edx,%esi
 810b5f9:	89 c7                	mov    %eax,%edi
 810b5fb:	89 1c 24             	mov    %ebx,(%esp)
 810b5fe:	e8 ed 8e 61 00       	call   87244f0 <_ZdlPv>
 810b603:	89 f8                	mov    %edi,%eax
 810b605:	89 f2                	mov    %esi,%edx
 810b607:	89 04 24             	mov    %eax,(%esp)
 810b60a:	e8 41 81 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b60f:	89 d8                	mov    %ebx,%eax
 810b611:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b614:	e9 46 03 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b619:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b620:	e8 2b 8e 61 00       	call   8724450 <_Znwj>
 810b625:	89 c3                	mov    %eax,%ebx
 810b627:	89 d9                	mov    %ebx,%ecx
 810b629:	89 ca                	mov    %ecx,%edx
 810b62b:	be 00 00 00 00       	mov    $0x0,%esi
 810b630:	b8 20 00 00 00       	mov    $0x20,%eax
 810b635:	89 c7                	mov    %eax,%edi
 810b637:	83 e7 fc             	and    $0xfffffffc,%edi
 810b63a:	b8 00 00 00 00       	mov    $0x0,%eax
 810b63f:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b642:	83 c0 04             	add    $0x4,%eax
 810b645:	39 f8                	cmp    %edi,%eax
 810b647:	72 f6                	jb     810b63f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x23d>
 810b649:	01 c2                	add    %eax,%edx
 810b64b:	89 0c 24             	mov    %ecx,(%esp)
 810b64e:	e8 89 59 00 00       	call   8110fdc <_ZN13EventClassify11CAttendanceC1Ev>
 810b653:	eb 18                	jmp    810b66d <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x26b>
 810b655:	89 d6                	mov    %edx,%esi
 810b657:	89 c7                	mov    %eax,%edi
 810b659:	89 1c 24             	mov    %ebx,(%esp)
 810b65c:	e8 8f 8e 61 00       	call   87244f0 <_ZdlPv>
 810b661:	89 f8                	mov    %edi,%eax
 810b663:	89 f2                	mov    %esi,%edx
 810b665:	89 04 24             	mov    %eax,(%esp)
 810b668:	e8 e3 80 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b66d:	89 d8                	mov    %ebx,%eax
 810b66f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b672:	e9 e8 02 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b677:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b67e:	e8 cd 8d 61 00       	call   8724450 <_Znwj>
 810b683:	89 c3                	mov    %eax,%ebx
 810b685:	89 d9                	mov    %ebx,%ecx
 810b687:	89 ca                	mov    %ecx,%edx
 810b689:	be 00 00 00 00       	mov    $0x0,%esi
 810b68e:	b8 20 00 00 00       	mov    $0x20,%eax
 810b693:	89 c7                	mov    %eax,%edi
 810b695:	83 e7 fc             	and    $0xfffffffc,%edi
 810b698:	b8 00 00 00 00       	mov    $0x0,%eax
 810b69d:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b6a0:	83 c0 04             	add    $0x4,%eax
 810b6a3:	39 f8                	cmp    %edi,%eax
 810b6a5:	72 f6                	jb     810b69d <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x29b>
 810b6a7:	01 c2                	add    %eax,%edx
 810b6a9:	89 0c 24             	mov    %ecx,(%esp)
 810b6ac:	e8 47 59 00 00       	call   8110ff8 <_ZN13EventClassify25CExchangeRandomItemRewardC1Ev>
 810b6b1:	eb 18                	jmp    810b6cb <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x2c9>
 810b6b3:	89 d6                	mov    %edx,%esi
 810b6b5:	89 c7                	mov    %eax,%edi
 810b6b7:	89 1c 24             	mov    %ebx,(%esp)
 810b6ba:	e8 31 8e 61 00       	call   87244f0 <_ZdlPv>
 810b6bf:	89 f8                	mov    %edi,%eax
 810b6c1:	89 f2                	mov    %esi,%edx
 810b6c3:	89 04 24             	mov    %eax,(%esp)
 810b6c6:	e8 85 80 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b6cb:	89 d8                	mov    %ebx,%eax
 810b6cd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b6d0:	e9 8a 02 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b6d5:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b6dc:	e8 6f 8d 61 00       	call   8724450 <_Znwj>
 810b6e1:	89 c3                	mov    %eax,%ebx
 810b6e3:	89 d9                	mov    %ebx,%ecx
 810b6e5:	89 ca                	mov    %ecx,%edx
 810b6e7:	be 00 00 00 00       	mov    $0x0,%esi
 810b6ec:	b8 20 00 00 00       	mov    $0x20,%eax
 810b6f1:	89 c7                	mov    %eax,%edi
 810b6f3:	83 e7 fc             	and    $0xfffffffc,%edi
 810b6f6:	b8 00 00 00 00       	mov    $0x0,%eax
 810b6fb:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b6fe:	83 c0 04             	add    $0x4,%eax
 810b701:	39 f8                	cmp    %edi,%eax
 810b703:	72 f6                	jb     810b6fb <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x2f9>
 810b705:	01 c2                	add    %eax,%edx
 810b707:	89 0c 24             	mov    %ecx,(%esp)
 810b70a:	e8 05 59 00 00       	call   8111014 <_ZN13EventClassify27CAvatarDisjointRandomRewardC1Ev>
 810b70f:	eb 18                	jmp    810b729 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x327>
 810b711:	89 d6                	mov    %edx,%esi
 810b713:	89 c7                	mov    %eax,%edi
 810b715:	89 1c 24             	mov    %ebx,(%esp)
 810b718:	e8 d3 8d 61 00       	call   87244f0 <_ZdlPv>
 810b71d:	89 f8                	mov    %edi,%eax
 810b71f:	89 f2                	mov    %esi,%edx
 810b721:	89 04 24             	mov    %eax,(%esp)
 810b724:	e8 27 80 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b729:	89 d8                	mov    %ebx,%eax
 810b72b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b72e:	e9 2c 02 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b733:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b73a:	e8 11 8d 61 00       	call   8724450 <_Znwj>
 810b73f:	89 c3                	mov    %eax,%ebx
 810b741:	89 d9                	mov    %ebx,%ecx
 810b743:	89 ca                	mov    %ecx,%edx
 810b745:	be 00 00 00 00       	mov    $0x0,%esi
 810b74a:	b8 20 00 00 00       	mov    $0x20,%eax
 810b74f:	89 c7                	mov    %eax,%edi
 810b751:	83 e7 fc             	and    $0xfffffffc,%edi
 810b754:	b8 00 00 00 00       	mov    $0x0,%eax
 810b759:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b75c:	83 c0 04             	add    $0x4,%eax
 810b75f:	39 f8                	cmp    %edi,%eax
 810b761:	72 f6                	jb     810b759 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x357>
 810b763:	01 c2                	add    %eax,%edx
 810b765:	89 0c 24             	mov    %ecx,(%esp)
 810b768:	e8 c3 58 00 00       	call   8111030 <_ZN13EventClassify16CFatigueQuantityC1Ev>
 810b76d:	eb 18                	jmp    810b787 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x385>
 810b76f:	89 d6                	mov    %edx,%esi
 810b771:	89 c7                	mov    %eax,%edi
 810b773:	89 1c 24             	mov    %ebx,(%esp)
 810b776:	e8 75 8d 61 00       	call   87244f0 <_ZdlPv>
 810b77b:	89 f8                	mov    %edi,%eax
 810b77d:	89 f2                	mov    %esi,%edx
 810b77f:	89 04 24             	mov    %eax,(%esp)
 810b782:	e8 c9 7f 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b787:	89 d8                	mov    %ebx,%eax
 810b789:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b78c:	e9 ce 01 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b791:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b798:	e8 b3 8c 61 00       	call   8724450 <_Znwj>
 810b79d:	89 c3                	mov    %eax,%ebx
 810b79f:	89 d9                	mov    %ebx,%ecx
 810b7a1:	89 ca                	mov    %ecx,%edx
 810b7a3:	be 00 00 00 00       	mov    $0x0,%esi
 810b7a8:	b8 20 00 00 00       	mov    $0x20,%eax
 810b7ad:	89 c7                	mov    %eax,%edi
 810b7af:	83 e7 fc             	and    $0xfffffffc,%edi
 810b7b2:	b8 00 00 00 00       	mov    $0x0,%eax
 810b7b7:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b7ba:	83 c0 04             	add    $0x4,%eax
 810b7bd:	39 f8                	cmp    %edi,%eax
 810b7bf:	72 f6                	jb     810b7b7 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x3b5>
 810b7c1:	01 c2                	add    %eax,%edx
 810b7c3:	89 0c 24             	mov    %ecx,(%esp)
 810b7c6:	e8 81 58 00 00       	call   811104c <_ZN13EventClassify22CPurchaseCashItemBonusC1Ev>
 810b7cb:	eb 18                	jmp    810b7e5 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x3e3>
 810b7cd:	89 d6                	mov    %edx,%esi
 810b7cf:	89 c7                	mov    %eax,%edi
 810b7d1:	89 1c 24             	mov    %ebx,(%esp)
 810b7d4:	e8 17 8d 61 00       	call   87244f0 <_ZdlPv>
 810b7d9:	89 f8                	mov    %edi,%eax
 810b7db:	89 f2                	mov    %esi,%edx
 810b7dd:	89 04 24             	mov    %eax,(%esp)
 810b7e0:	e8 6b 7f 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b7e5:	89 d8                	mov    %ebx,%eax
 810b7e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b7ea:	e9 70 01 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b7ef:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b7f6:	e8 55 8c 61 00       	call   8724450 <_Znwj>
 810b7fb:	89 c3                	mov    %eax,%ebx
 810b7fd:	89 d9                	mov    %ebx,%ecx
 810b7ff:	89 ca                	mov    %ecx,%edx
 810b801:	be 00 00 00 00       	mov    $0x0,%esi
 810b806:	b8 20 00 00 00       	mov    $0x20,%eax
 810b80b:	89 c7                	mov    %eax,%edi
 810b80d:	83 e7 fc             	and    $0xfffffffc,%edi
 810b810:	b8 00 00 00 00       	mov    $0x0,%eax
 810b815:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b818:	83 c0 04             	add    $0x4,%eax
 810b81b:	39 f8                	cmp    %edi,%eax
 810b81d:	72 f6                	jb     810b815 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x413>
 810b81f:	01 c2                	add    %eax,%edx
 810b821:	89 0c 24             	mov    %ecx,(%esp)
 810b824:	e8 3f 58 00 00       	call   8111068 <_ZN13EventClassify14CObjectBringUpC1Ev>
 810b829:	eb 18                	jmp    810b843 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x441>
 810b82b:	89 d6                	mov    %edx,%esi
 810b82d:	89 c7                	mov    %eax,%edi
 810b82f:	89 1c 24             	mov    %ebx,(%esp)
 810b832:	e8 b9 8c 61 00       	call   87244f0 <_ZdlPv>
 810b837:	89 f8                	mov    %edi,%eax
 810b839:	89 f2                	mov    %esi,%edx
 810b83b:	89 04 24             	mov    %eax,(%esp)
 810b83e:	e8 0d 7f 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b843:	89 d8                	mov    %ebx,%eax
 810b845:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b848:	e9 12 01 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b84d:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b854:	e8 f7 8b 61 00       	call   8724450 <_Znwj>
 810b859:	89 c3                	mov    %eax,%ebx
 810b85b:	89 d9                	mov    %ebx,%ecx
 810b85d:	89 ca                	mov    %ecx,%edx
 810b85f:	be 00 00 00 00       	mov    $0x0,%esi
 810b864:	b8 20 00 00 00       	mov    $0x20,%eax
 810b869:	89 c7                	mov    %eax,%edi
 810b86b:	83 e7 fc             	and    $0xfffffffc,%edi
 810b86e:	b8 00 00 00 00       	mov    $0x0,%eax
 810b873:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b876:	83 c0 04             	add    $0x4,%eax
 810b879:	39 f8                	cmp    %edi,%eax
 810b87b:	72 f6                	jb     810b873 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x471>
 810b87d:	01 c2                	add    %eax,%edx
 810b87f:	89 0c 24             	mov    %ecx,(%esp)
 810b882:	e8 fd 57 00 00       	call   8111084 <_ZN13EventClassify15CPcRoomPlayTimeC1Ev>
 810b887:	eb 18                	jmp    810b8a1 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x49f>
 810b889:	89 d6                	mov    %edx,%esi
 810b88b:	89 c7                	mov    %eax,%edi
 810b88d:	89 1c 24             	mov    %ebx,(%esp)
 810b890:	e8 5b 8c 61 00       	call   87244f0 <_ZdlPv>
 810b895:	89 f8                	mov    %edi,%eax
 810b897:	89 f2                	mov    %esi,%edx
 810b899:	89 04 24             	mov    %eax,(%esp)
 810b89c:	e8 af 7e 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b8a1:	89 d8                	mov    %ebx,%eax
 810b8a3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b8a6:	e9 b4 00 00 00       	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b8ab:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b8b2:	e8 99 8b 61 00       	call   8724450 <_Znwj>
 810b8b7:	89 c3                	mov    %eax,%ebx
 810b8b9:	89 d9                	mov    %ebx,%ecx
 810b8bb:	89 ca                	mov    %ecx,%edx
 810b8bd:	be 00 00 00 00       	mov    $0x0,%esi
 810b8c2:	b8 20 00 00 00       	mov    $0x20,%eax
 810b8c7:	89 c7                	mov    %eax,%edi
 810b8c9:	83 e7 fc             	and    $0xfffffffc,%edi
 810b8cc:	b8 00 00 00 00       	mov    $0x0,%eax
 810b8d1:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b8d4:	83 c0 04             	add    $0x4,%eax
 810b8d7:	39 f8                	cmp    %edi,%eax
 810b8d9:	72 f6                	jb     810b8d1 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x4cf>
 810b8db:	01 c2                	add    %eax,%edx
 810b8dd:	89 0c 24             	mov    %ecx,(%esp)
 810b8e0:	e8 bb 57 00 00       	call   81110a0 <_ZN13EventClassify20CUsedFatigueGiveItemC1Ev>
 810b8e5:	eb 18                	jmp    810b8ff <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x4fd>
 810b8e7:	89 d6                	mov    %edx,%esi
 810b8e9:	89 c7                	mov    %eax,%edi
 810b8eb:	89 1c 24             	mov    %ebx,(%esp)
 810b8ee:	e8 fd 8b 61 00       	call   87244f0 <_ZdlPv>
 810b8f3:	89 f8                	mov    %edi,%eax
 810b8f5:	89 f2                	mov    %esi,%edx
 810b8f7:	89 04 24             	mov    %eax,(%esp)
 810b8fa:	e8 51 7e 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b8ff:	89 d8                	mov    %ebx,%eax
 810b901:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b904:	eb 59                	jmp    810b95f <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x55d>
 810b906:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 810b90d:	e8 3e 8b 61 00       	call   8724450 <_Znwj>
 810b912:	89 c3                	mov    %eax,%ebx
 810b914:	89 d9                	mov    %ebx,%ecx
 810b916:	89 ca                	mov    %ecx,%edx
 810b918:	be 00 00 00 00       	mov    $0x0,%esi
 810b91d:	b8 20 00 00 00       	mov    $0x20,%eax
 810b922:	89 c7                	mov    %eax,%edi
 810b924:	83 e7 fc             	and    $0xfffffffc,%edi
 810b927:	b8 00 00 00 00       	mov    $0x0,%eax
 810b92c:	89 34 02             	mov    %esi,(%edx,%eax,1)
 810b92f:	83 c0 04             	add    $0x4,%eax
 810b932:	39 f8                	cmp    %edi,%eax
 810b934:	72 f6                	jb     810b92c <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x52a>
 810b936:	01 c2                	add    %eax,%edx
 810b938:	89 0c 24             	mov    %ecx,(%esp)
 810b93b:	e8 ca 57 00 00       	call   811110a <_ZN13EventClassify23CAccountFirstLoginDailyC1Ev>
 810b940:	eb 18                	jmp    810b95a <_ZN13EventClassify15CEventScriptMng19create_event_entityEib+0x558>
 810b942:	89 d6                	mov    %edx,%esi
 810b944:	89 c7                	mov    %eax,%edi
 810b946:	89 1c 24             	mov    %ebx,(%esp)
 810b949:	e8 a2 8b 61 00       	call   87244f0 <_ZdlPv>
 810b94e:	89 f8                	mov    %edi,%eax
 810b950:	89 f2                	mov    %esi,%edx
 810b952:	89 04 24             	mov    %eax,(%esp)
 810b955:	e8 f6 7d 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b95a:	89 d8                	mov    %ebx,%eax
 810b95c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810b95f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810b962:	83 c4 3c             	add    $0x3c,%esp
 810b965:	5b                   	pop    %ebx
 810b966:	5e                   	pop    %esi
 810b967:	5f                   	pop    %edi
 810b968:	5d                   	pop    %ebp
 810b969:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::create_event_entity @ 0x810b402

/* EventClassify::CEventScriptMng::create_event_entity(int, bool) */

CEventEntity * __thiscall
EventClassify::CEventScriptMng::create_event_entity(CEventScriptMng *this,int param_1,bool param_2)

{
  uint uVar1;
  CEventEntity *local_20;
  
  local_20 = (CEventEntity *)0x0;
  if (param_2) {
    local_20 = operator_new(0x1c);
                    /* try { // try from 0810b431 to 0810b435 has its CatchHandler @ 0810b438 */
    CEventEntity::CEventEntity(local_20);
  }
  else if (param_1 == 0x194) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b5f0 to 0810b5f4 has its CatchHandler @ 0810b5f7 */
    CLevelUpReward::CLevelUpReward((CLevelUpReward *)local_20);
  }
  else if (param_1 < 0x195) {
    if (param_1 == 0x65) {
      local_20 = operator_new(0x20);
      uVar1 = 0;
      do {
        *(undefined4 *)(local_20 + uVar1) = 0;
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x20);
                    /* try { // try from 0810b8e0 to 0810b8e4 has its CatchHandler @ 0810b8e7 */
      CUsedFatigueGiveItem::CUsedFatigueGiveItem((CUsedFatigueGiveItem *)local_20);
    }
    else if (param_1 < 0x66) {
      if (param_1 == 0x56) {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b64e to 0810b652 has its CatchHandler @ 0810b655 */
        CAttendance::CAttendance((CAttendance *)local_20);
      }
      else if (param_1 == 0x5c) {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b882 to 0810b886 has its CatchHandler @ 0810b889 */
        CPcRoomPlayTime::CPcRoomPlayTime((CPcRoomPlayTime *)local_20);
      }
    }
    else if (400 < param_1) {
      if (param_1 < 0x193) {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b534 to 0810b538 has its CatchHandler @ 0810b53b */
        CAccountFirstLogin::CAccountFirstLogin((CAccountFirstLogin *)local_20);
      }
      else {
        local_20 = operator_new(0x20);
        uVar1 = 0;
        do {
          *(undefined4 *)(local_20 + uVar1) = 0;
          uVar1 = uVar1 + 4;
        } while (uVar1 < 0x20);
                    /* try { // try from 0810b592 to 0810b596 has its CatchHandler @ 0810b599 */
        CAddItemCountDB::CAddItemCountDB((CAddItemCountDB *)local_20);
      }
    }
  }
  else if (param_1 == 0x199) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b768 to 0810b76c has its CatchHandler @ 0810b76f */
    CFatigueQuantity::CFatigueQuantity((CFatigueQuantity *)local_20);
  }
  else if (param_1 < 0x19a) {
    if (param_1 == 0x196) {
      local_20 = operator_new(0x20);
      uVar1 = 0;
      do {
        *(undefined4 *)(local_20 + uVar1) = 0;
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x20);
                    /* try { // try from 0810b6ac to 0810b6b0 has its CatchHandler @ 0810b6b3 */
      CExchangeRandomItemReward::CExchangeRandomItemReward((CExchangeRandomItemReward *)local_20);
    }
    else if (param_1 == 0x197) {
      local_20 = operator_new(0x20);
      uVar1 = 0;
      do {
        *(undefined4 *)(local_20 + uVar1) = 0;
        uVar1 = uVar1 + 4;
      } while (uVar1 < 0x20);
                    /* try { // try from 0810b70a to 0810b70e has its CatchHandler @ 0810b711 */
      CAvatarDisjointRandomReward::CAvatarDisjointRandomReward
                ((CAvatarDisjointRandomReward *)local_20);
    }
  }
  else if (param_1 == 0x19b) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b824 to 0810b828 has its CatchHandler @ 0810b82b */
    CObjectBringUp::CObjectBringUp((CObjectBringUp *)local_20);
  }
  else if (param_1 < 0x19b) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b7c6 to 0810b7ca has its CatchHandler @ 0810b7cd */
    CPurchaseCashItemBonus::CPurchaseCashItemBonus((CPurchaseCashItemBonus *)local_20);
  }
  else if (param_1 == 0x19c) {
    local_20 = operator_new(0x20);
    uVar1 = 0;
    do {
      *(undefined4 *)(local_20 + uVar1) = 0;
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x20);
                    /* try { // try from 0810b93b to 0810b93f has its CatchHandler @ 0810b942 */
    CAccountFirstLoginDaily::CAccountFirstLoginDaily((CAccountFirstLoginDaily *)local_20);
  }
  return local_20;
}

```

---

## get_convert_to_user_confirmflag

```asm
// === 0810b0cc EventClassify::CEventScriptMng::get_convert_to_user_confirmflag  [0x0810b0cc-0x810b10f] ===
 810b0cc:	55                   	push   %ebp
 810b0cd:	89 e5                	mov    %esp,%ebp
 810b0cf:	83 ec 10             	sub    $0x10,%esp
 810b0d2:	c7 45 fc ff ff ff ff 	movl   $0xffffffff,-0x4(%ebp)
 810b0d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 810b0dc:	3d 92 01 00 00       	cmp    $0x192,%eax
 810b0e1:	74 17                	je     810b0fa <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi+0x2e>
 810b0e3:	3d 9c 01 00 00       	cmp    $0x19c,%eax
 810b0e8:	74 19                	je     810b103 <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi+0x37>
 810b0ea:	3d 91 01 00 00       	cmp    $0x191,%eax
 810b0ef:	75 19                	jne    810b10a <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi+0x3e>
 810b0f1:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 810b0f8:	eb 10                	jmp    810b10a <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi+0x3e>
 810b0fa:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 810b101:	eb 07                	jmp    810b10a <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi+0x3e>
 810b103:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%ebp)
 810b10a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 810b10d:	c9                   	leave
 810b10e:	c3                   	ret
 810b10f:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::get_convert_to_user_confirmflag @ 0x810b0cc

/* EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int) */

undefined4 __thiscall
EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(CEventScriptMng *this,int param_1)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  if (param_1 == 0x192) {
    local_8 = 1;
  }
  else if (param_1 == 0x19c) {
    local_8 = 2;
  }
  else if (param_1 == 0x191) {
    local_8 = 0;
  }
  return local_8;
}

```

---

## get_db_table_name

```asm
// === 0810b110 EventClassify::CEventScriptMng::get_db_table_name  [0x0810b110-0x810b135] ===
 810b110:	55                   	push   %ebp
 810b111:	89 e5                	mov    %esp,%ebp
 810b113:	83 ec 18             	sub    $0x18,%esp
 810b116:	8b 45 0c             	mov    0xc(%ebp),%eax
 810b119:	89 44 24 04          	mov    %eax,0x4(%esp)
 810b11d:	8b 45 08             	mov    0x8(%ebp),%eax
 810b120:	89 04 24             	mov    %eax,(%esp)
 810b123:	e8 42 08 00 00       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810b128:	8b 10                	mov    (%eax),%edx
 810b12a:	83 c2 20             	add    $0x20,%edx
 810b12d:	8b 12                	mov    (%edx),%edx
 810b12f:	89 04 24             	mov    %eax,(%esp)
 810b132:	ff d2                	call   *%edx
 810b134:	c9                   	leave
 810b135:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::get_db_table_name @ 0x810b110

/* EventClassify::CEventScriptMng::get_db_table_name(int) */

void __thiscall EventClassify::CEventScriptMng::get_db_table_name(CEventScriptMng *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)get_event_entity((int)this);
  (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
  return;
}

```

---

## get_event_entity

```asm
// === 0810b96a EventClassify::CEventScriptMng::get_event_entity  [0x0810b96a-0x810b9d3] ===
 810b96a:	55                   	push   %ebp
 810b96b:	89 e5                	mov    %esp,%ebp
 810b96d:	83 ec 28             	sub    $0x28,%esp
 810b970:	8b 45 08             	mov    0x8(%ebp),%eax
 810b973:	8d 48 30             	lea    0x30(%eax),%ecx
 810b976:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810b979:	8d 55 0c             	lea    0xc(%ebp),%edx
 810b97c:	89 54 24 08          	mov    %edx,0x8(%esp)
 810b980:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810b984:	89 04 24             	mov    %eax,(%esp)
 810b987:	e8 a6 5c 00 00       	call   8111632 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 810b98c:	83 ec 04             	sub    $0x4,%esp
 810b98f:	8b 45 08             	mov    0x8(%ebp),%eax
 810b992:	8d 50 30             	lea    0x30(%eax),%edx
 810b995:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b998:	89 54 24 04          	mov    %edx,0x4(%esp)
 810b99c:	89 04 24             	mov    %eax,(%esp)
 810b99f:	e8 28 5c 00 00       	call   81115cc <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 810b9a4:	83 ec 04             	sub    $0x4,%esp
 810b9a7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b9aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 810b9ae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810b9b1:	89 04 24             	mov    %eax,(%esp)
 810b9b4:	e8 39 5c 00 00       	call   81115f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEneERKS6_>
 810b9b9:	84 c0                	test   %al,%al
 810b9bb:	74 10                	je     810b9cd <_ZN13EventClassify15CEventScriptMng16get_event_entityEi+0x63>
 810b9bd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810b9c0:	89 04 24             	mov    %eax,(%esp)
 810b9c3:	e8 3e 5c 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810b9c8:	8b 40 04             	mov    0x4(%eax),%eax
 810b9cb:	eb 05                	jmp    810b9d2 <_ZN13EventClassify15CEventScriptMng16get_event_entityEi+0x68>
 810b9cd:	b8 00 00 00 00       	mov    $0x0,%eax
 810b9d2:	c9                   	leave
 810b9d3:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::get_event_entity @ 0x810b96a

/* EventClassify::CEventScriptMng::get_event_entity(int) */

undefined4 EventClassify::CEventScriptMng::get_event_entity(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> local_14 [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_10 [12];
  
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::find((int *)local_14);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## get_ingame_event_record_type_list

```asm
// === 0810c6e2 EventClassify::CEventScriptMng::get_ingame_event_record_type_list  [0x0810c6e2-0x810c75b] ===
 810c6e2:	55                   	push   %ebp
 810c6e3:	89 e5                	mov    %esp,%ebp
 810c6e5:	83 ec 28             	sub    $0x28,%esp
 810c6e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c6eb:	89 04 24             	mov    %eax,(%esp)
 810c6ee:	e8 7b a4 f8 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 810c6f3:	8b 55 08             	mov    0x8(%ebp),%edx
 810c6f6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c6f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c6fd:	89 04 24             	mov    %eax,(%esp)
 810c700:	e8 b5 50 00 00       	call   81117ba <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 810c705:	83 ec 04             	sub    $0x4,%esp
 810c708:	8b 55 08             	mov    0x8(%ebp),%edx
 810c70b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c70e:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c712:	89 04 24             	mov    %eax,(%esp)
 810c715:	e8 c6 50 00 00       	call   81117e0 <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 810c71a:	83 ec 04             	sub    $0x4,%esp
 810c71d:	eb 25                	jmp    810c744 <_ZN13EventClassify15CEventScriptMng33get_ingame_event_record_type_listERSt6vectorIiSaIiEE+0x62>
 810c71f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c722:	89 04 24             	mov    %eax,(%esp)
 810c725:	e8 f0 50 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810c72a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c72e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c731:	89 04 24             	mov    %eax,(%esp)
 810c734:	e8 ed 49 00 00       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 810c739:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c73c:	89 04 24             	mov    %eax,(%esp)
 810c73f:	e8 e4 50 00 00       	call   8111828 <_ZNSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEppEv>
 810c744:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c747:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c74b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c74e:	89 04 24             	mov    %eax,(%esp)
 810c751:	e8 b0 50 00 00       	call   8111806 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEneERKS4_>
 810c756:	84 c0                	test   %al,%al
 810c758:	75 c5                	jne    810c71f <_ZN13EventClassify15CEventScriptMng33get_ingame_event_record_type_listERSt6vectorIiSaIiEE+0x3d>
 810c75a:	c9                   	leave
 810c75b:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::get_ingame_event_record_type_list @ 0x810c6e2

/* EventClassify::CEventScriptMng::get_ingame_event_record_type_list(std::vector<int,
   std::allocator<int> >&) */

void __thiscall
EventClassify::CEventScriptMng::get_ingame_event_record_type_list
          (CEventScriptMng *this,vector *param_1)

{
  char cVar1;
  int *piVar2;
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_14 [4];
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_10 [12];
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)param_1);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::begin(local_10);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_10,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_10);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)param_1,piVar2);
    std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_10);
  }
  return;
}

```

---

## get_pass_day

```asm
// === 0810c974 EventClassify::CEventScriptMng::get_pass_day  [0x0810c974-0x810cb2b] ===
 810c974:	55                   	push   %ebp
 810c975:	89 e5                	mov    %esp,%ebp
 810c977:	57                   	push   %edi
 810c978:	53                   	push   %ebx
 810c979:	83 ec 70             	sub    $0x70,%esp
 810c97c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810c980:	7f 10                	jg     810c992 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii+0x1e>
 810c982:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 810c986:	7f 0a                	jg     810c992 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii+0x1e>
 810c988:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 810c98d:	e9 93 01 00 00       	jmp    810cb25 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii+0x1b1>
 810c992:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 810c995:	b8 00 00 00 00       	mov    $0x0,%eax
 810c99a:	ba 0b 00 00 00       	mov    $0xb,%edx
 810c99f:	89 df                	mov    %ebx,%edi
 810c9a1:	89 d1                	mov    %edx,%ecx
 810c9a3:	f3 ab                	rep stos %eax,%es:(%edi)
 810c9a5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 810c9a8:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 810c9ad:	89 c8                	mov    %ecx,%eax
 810c9af:	f7 ea                	imul   %edx
 810c9b1:	c1 fa 0c             	sar    $0xc,%edx
 810c9b4:	89 c8                	mov    %ecx,%eax
 810c9b6:	c1 f8 1f             	sar    $0x1f,%eax
 810c9b9:	89 d1                	mov    %edx,%ecx
 810c9bb:	29 c1                	sub    %eax,%ecx
 810c9bd:	89 c8                	mov    %ecx,%eax
 810c9bf:	2d 6c 07 00 00       	sub    $0x76c,%eax
 810c9c4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 810c9c7:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 810c9ca:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 810c9cf:	89 d8                	mov    %ebx,%eax
 810c9d1:	f7 ea                	imul   %edx
 810c9d3:	c1 fa 0c             	sar    $0xc,%edx
 810c9d6:	89 d8                	mov    %ebx,%eax
 810c9d8:	c1 f8 1f             	sar    $0x1f,%eax
 810c9db:	89 d1                	mov    %edx,%ecx
 810c9dd:	29 c1                	sub    %eax,%ecx
 810c9df:	69 c1 10 27 00 00    	imul   $0x2710,%ecx,%eax
 810c9e5:	89 d9                	mov    %ebx,%ecx
 810c9e7:	29 c1                	sub    %eax,%ecx
 810c9e9:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 810c9ee:	89 c8                	mov    %ecx,%eax
 810c9f0:	f7 ea                	imul   %edx
 810c9f2:	c1 fa 05             	sar    $0x5,%edx
 810c9f5:	89 c8                	mov    %ecx,%eax
 810c9f7:	c1 f8 1f             	sar    $0x1f,%eax
 810c9fa:	89 d1                	mov    %edx,%ecx
 810c9fc:	29 c1                	sub    %eax,%ecx
 810c9fe:	89 c8                	mov    %ecx,%eax
 810ca00:	83 e8 01             	sub    $0x1,%eax
 810ca03:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 810ca06:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 810ca09:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 810ca0e:	89 c8                	mov    %ecx,%eax
 810ca10:	f7 ea                	imul   %edx
 810ca12:	c1 fa 05             	sar    $0x5,%edx
 810ca15:	89 c8                	mov    %ecx,%eax
 810ca17:	c1 f8 1f             	sar    $0x1f,%eax
 810ca1a:	89 d3                	mov    %edx,%ebx
 810ca1c:	29 c3                	sub    %eax,%ebx
 810ca1e:	89 d8                	mov    %ebx,%eax
 810ca20:	6b c0 64             	imul   $0x64,%eax,%eax
 810ca23:	89 cf                	mov    %ecx,%edi
 810ca25:	29 c7                	sub    %eax,%edi
 810ca27:	89 f8                	mov    %edi,%eax
 810ca29:	89 45 d0             	mov    %eax,-0x30(%ebp)
 810ca2c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 810ca33:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810ca36:	89 04 24             	mov    %eax,(%esp)
 810ca39:	e8 e2 1d f7 ff       	call   807e820 <mktime@plt>
 810ca3e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810ca41:	8d 5d 98             	lea    -0x68(%ebp),%ebx
 810ca44:	b8 00 00 00 00       	mov    $0x0,%eax
 810ca49:	ba 0b 00 00 00       	mov    $0xb,%edx
 810ca4e:	89 df                	mov    %ebx,%edi
 810ca50:	89 d1                	mov    %edx,%ecx
 810ca52:	f3 ab                	rep stos %eax,%es:(%edi)
 810ca54:	8b 4d 10             	mov    0x10(%ebp),%ecx
 810ca57:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 810ca5c:	89 c8                	mov    %ecx,%eax
 810ca5e:	f7 ea                	imul   %edx
 810ca60:	c1 fa 0c             	sar    $0xc,%edx
 810ca63:	89 c8                	mov    %ecx,%eax
 810ca65:	c1 f8 1f             	sar    $0x1f,%eax
 810ca68:	89 d1                	mov    %edx,%ecx
 810ca6a:	29 c1                	sub    %eax,%ecx
 810ca6c:	89 c8                	mov    %ecx,%eax
 810ca6e:	2d 6c 07 00 00       	sub    $0x76c,%eax
 810ca73:	89 45 ac             	mov    %eax,-0x54(%ebp)
 810ca76:	8b 5d 10             	mov    0x10(%ebp),%ebx
 810ca79:	ba ad 8b db 68       	mov    $0x68db8bad,%edx
 810ca7e:	89 d8                	mov    %ebx,%eax
 810ca80:	f7 ea                	imul   %edx
 810ca82:	c1 fa 0c             	sar    $0xc,%edx
 810ca85:	89 d8                	mov    %ebx,%eax
 810ca87:	c1 f8 1f             	sar    $0x1f,%eax
 810ca8a:	89 d1                	mov    %edx,%ecx
 810ca8c:	29 c1                	sub    %eax,%ecx
 810ca8e:	69 c1 10 27 00 00    	imul   $0x2710,%ecx,%eax
 810ca94:	89 d9                	mov    %ebx,%ecx
 810ca96:	29 c1                	sub    %eax,%ecx
 810ca98:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 810ca9d:	89 c8                	mov    %ecx,%eax
 810ca9f:	f7 ea                	imul   %edx
 810caa1:	c1 fa 05             	sar    $0x5,%edx
 810caa4:	89 c8                	mov    %ecx,%eax
 810caa6:	c1 f8 1f             	sar    $0x1f,%eax
 810caa9:	89 d1                	mov    %edx,%ecx
 810caab:	29 c1                	sub    %eax,%ecx
 810caad:	89 c8                	mov    %ecx,%eax
 810caaf:	83 e8 01             	sub    $0x1,%eax
 810cab2:	89 45 a8             	mov    %eax,-0x58(%ebp)
 810cab5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 810cab8:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 810cabd:	89 c8                	mov    %ecx,%eax
 810cabf:	f7 ea                	imul   %edx
 810cac1:	c1 fa 05             	sar    $0x5,%edx
 810cac4:	89 c8                	mov    %ecx,%eax
 810cac6:	c1 f8 1f             	sar    $0x1f,%eax
 810cac9:	89 d3                	mov    %edx,%ebx
 810cacb:	29 c3                	sub    %eax,%ebx
 810cacd:	89 d8                	mov    %ebx,%eax
 810cacf:	6b c0 64             	imul   $0x64,%eax,%eax
 810cad2:	89 cf                	mov    %ecx,%edi
 810cad4:	29 c7                	sub    %eax,%edi
 810cad6:	89 f8                	mov    %edi,%eax
 810cad8:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 810cadb:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 810cae2:	8d 45 98             	lea    -0x68(%ebp),%eax
 810cae5:	89 04 24             	mov    %eax,(%esp)
 810cae8:	e8 33 1d f7 ff       	call   807e820 <mktime@plt>
 810caed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810caf0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810caf3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 810caf6:	7c 28                	jl     810cb20 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii+0x1ac>
 810caf8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810cafb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810cafe:	89 d1                	mov    %edx,%ecx
 810cb00:	29 c1                	sub    %eax,%ecx
 810cb02:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 810cb07:	89 c8                	mov    %ecx,%eax
 810cb09:	f7 ea                	imul   %edx
 810cb0b:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 810cb0e:	89 c2                	mov    %eax,%edx
 810cb10:	c1 fa 10             	sar    $0x10,%edx
 810cb13:	89 c8                	mov    %ecx,%eax
 810cb15:	c1 f8 1f             	sar    $0x1f,%eax
 810cb18:	89 d1                	mov    %edx,%ecx
 810cb1a:	29 c1                	sub    %eax,%ecx
 810cb1c:	89 c8                	mov    %ecx,%eax
 810cb1e:	eb 05                	jmp    810cb25 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii+0x1b1>
 810cb20:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 810cb25:	83 c4 70             	add    $0x70,%esp
 810cb28:	5b                   	pop    %ebx
 810cb29:	5f                   	pop    %edi
 810cb2a:	5d                   	pop    %ebp
 810cb2b:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::get_pass_day @ 0x810c974

/* EventClassify::CEventScriptMng::get_pass_day(int, int) */

int __thiscall
EventClassify::CEventScriptMng::get_pass_day(CEventScriptMng *this,int param_1,int param_2)

{
  int iVar1;
  time_t tVar2;
  tm *ptVar3;
  byte bVar4;
  tm local_6c;
  tm local_40;
  time_t local_14;
  
  bVar4 = 0;
  if ((param_1 < 1) && (param_2 < 1)) {
    iVar1 = -1;
  }
  else {
    ptVar3 = &local_40;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      ptVar3->tm_sec = 0;
      ptVar3 = (tm *)&ptVar3->tm_min;
    }
    local_40.tm_year = param_1 / 10000 + -0x76c;
    local_40.tm_mon = (param_1 % 10000) / 100 + -1;
    local_40.tm_mday = param_1 % 100;
    local_40.tm_hour = 0;
    local_14 = mktime(&local_40);
    ptVar3 = &local_6c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      ptVar3->tm_sec = 0;
      ptVar3 = (tm *)((int)ptVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    local_6c.tm_year = param_2 / 10000 + -0x76c;
    local_6c.tm_mon = (param_2 % 10000) / 100 + -1;
    local_6c.tm_mday = param_2 % 100;
    local_6c.tm_hour = 0;
    tVar2 = mktime(&local_6c);
    if (tVar2 < local_14) {
      iVar1 = -1;
    }
    else {
      iVar1 = (tVar2 - local_14) / 0x15180;
    }
  }
  return iVar1;
}

```

---

## get_record_type

```asm
// === 0810c7b8 EventClassify::CEventScriptMng::get_record_type  [0x0810c7b8-0x810c82d] ===
 810c7b8:	55                   	push   %ebp
 810c7b9:	89 e5                	mov    %esp,%ebp
 810c7bb:	83 ec 28             	sub    $0x28,%esp
 810c7be:	8b 45 08             	mov    0x8(%ebp),%eax
 810c7c1:	8d 48 30             	lea    0x30(%eax),%ecx
 810c7c4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c7c7:	8d 55 0c             	lea    0xc(%ebp),%edx
 810c7ca:	89 54 24 08          	mov    %edx,0x8(%esp)
 810c7ce:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810c7d2:	89 04 24             	mov    %eax,(%esp)
 810c7d5:	e8 58 4e 00 00       	call   8111632 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 810c7da:	83 ec 04             	sub    $0x4,%esp
 810c7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 810c7e0:	8d 50 30             	lea    0x30(%eax),%edx
 810c7e3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c7e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c7ea:	89 04 24             	mov    %eax,(%esp)
 810c7ed:	e8 da 4d 00 00       	call   81115cc <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 810c7f2:	83 ec 04             	sub    $0x4,%esp
 810c7f5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c7f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c7fc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c7ff:	89 04 24             	mov    %eax,(%esp)
 810c802:	e8 eb 4d 00 00       	call   81115f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEneERKS6_>
 810c807:	84 c0                	test   %al,%al
 810c809:	74 1c                	je     810c827 <_ZN13EventClassify15CEventScriptMng15get_record_typeEi+0x6f>
 810c80b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c80e:	89 04 24             	mov    %eax,(%esp)
 810c811:	e8 f0 4d 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810c816:	8b 40 04             	mov    0x4(%eax),%eax
 810c819:	8b 10                	mov    (%eax),%edx
 810c81b:	83 c2 14             	add    $0x14,%edx
 810c81e:	8b 12                	mov    (%edx),%edx
 810c820:	89 04 24             	mov    %eax,(%esp)
 810c823:	ff d2                	call   *%edx
 810c825:	eb 05                	jmp    810c82c <_ZN13EventClassify15CEventScriptMng15get_record_typeEi+0x74>
 810c827:	b8 00 00 00 00       	mov    $0x0,%eax
 810c82c:	c9                   	leave
 810c82d:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::get_record_type @ 0x810c7b8

/* EventClassify::CEventScriptMng::get_record_type(int) */

undefined4 EventClassify::CEventScriptMng::get_record_type(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator *p_Var4;
  undefined1 *puVar5;
  _Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> local_14 [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_10 [12];
  
  puVar5 = &stack0x00000008;
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::find((int *)local_14);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_10);
  p_Var4 = (_Rb_tree_iterator *)local_10;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                    (local_14,p_Var4);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      (local_14);
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))(*(int **)(iVar2 + 4),p_Var4,puVar5);
  }
  return uVar3;
}

```

---

## get_today_time

```asm
// === 0810c6d6 EventClassify::CEventScriptMng::get_today_time  [0x0810c6d6-0x810c6e1] ===
 810c6d6:	55                   	push   %ebp
 810c6d7:	89 e5                	mov    %esp,%ebp
 810c6d9:	8b 45 08             	mov    0x8(%ebp),%eax
 810c6dc:	8b 40 48             	mov    0x48(%eax),%eax
 810c6df:	5d                   	pop    %ebp
 810c6e0:	c3                   	ret
 810c6e1:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::get_today_time @ 0x810c6d6

/* EventClassify::CEventScriptMng::get_today_time() */

undefined4 __thiscall EventClassify::CEventScriptMng::get_today_time(CEventScriptMng *this)

{
  return *(undefined4 *)(this + 0x48);
}

```

---

## get_today_time_day

```asm
// === 0810c6ca EventClassify::CEventScriptMng::get_today_time_day  [0x0810c6ca-0x810c6d5] ===
 810c6ca:	55                   	push   %ebp
 810c6cb:	89 e5                	mov    %esp,%ebp
 810c6cd:	8b 45 08             	mov    0x8(%ebp),%eax
 810c6d0:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 810c6d4:	5d                   	pop    %ebp
 810c6d5:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::get_today_time_day @ 0x810c6ca

/* EventClassify::CEventScriptMng::get_today_time_day() */

CEventScriptMng __thiscall EventClassify::CEventScriptMng::get_today_time_day(CEventScriptMng *this)

{
  return this[0x4c];
}

```

---

## inc_user_fatigue

```asm
// === 0810c152 EventClassify::CEventScriptMng::inc_user_fatigue  [0x0810c152-0x810c1e9] ===
 810c152:	55                   	push   %ebp
 810c153:	89 e5                	mov    %esp,%ebp
 810c155:	83 ec 28             	sub    $0x28,%esp
 810c158:	c7 44 24 04 99 01 00 	movl   $0x199,0x4(%esp)
 810c15f:	00 
 810c160:	8b 45 08             	mov    0x8(%ebp),%eax
 810c163:	89 04 24             	mov    %eax,(%esp)
 810c166:	e8 cb f8 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c16b:	83 f0 01             	xor    $0x1,%eax
 810c16e:	84 c0                	test   %al,%al
 810c170:	75 71                	jne    810c1e3 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x91>
 810c172:	c7 44 24 04 99 01 00 	movl   $0x199,0x4(%esp)
 810c179:	00 
 810c17a:	8b 45 08             	mov    0x8(%ebp),%eax
 810c17d:	89 04 24             	mov    %eax,(%esp)
 810c180:	e8 e5 f7 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c185:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c188:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c18c:	74 58                	je     810c1e6 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x94>
 810c18e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c191:	89 04 24             	mov    %eax,(%esp)
 810c194:	e8 43 4d 00 00       	call   8110edc <_ZNK13EventClassify16CFatigueQuantity13get_user_typeEv>
 810c199:	0f b6 c0             	movzbl %al,%eax
 810c19c:	85 c0                	test   %eax,%eax
 810c19e:	74 07                	je     810c1a7 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x55>
 810c1a0:	83 f8 01             	cmp    $0x1,%eax
 810c1a3:	74 16                	je     810c1bb <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x69>
 810c1a5:	eb 40                	jmp    810c1e7 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x95>
 810c1a7:	8b 45 10             	mov    0x10(%ebp),%eax
 810c1aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c1ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c1b1:	89 04 24             	mov    %eax,(%esp)
 810c1b4:	e8 65 4c 00 00       	call   8110e1e <_ZN5CUser31IncCurCharacUsedFatigueQuantityEj>
 810c1b9:	eb 2c                	jmp    810c1e7 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x95>
 810c1bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c1be:	89 04 24             	mov    %eax,(%esp)
 810c1c1:	e8 fc 4b 00 00       	call   8110dc2 <_ZN5CUser11GetPCRoomNoEv>
 810c1c6:	85 c0                	test   %eax,%eax
 810c1c8:	0f 95 c0             	setne  %al
 810c1cb:	84 c0                	test   %al,%al
 810c1cd:	74 18                	je     810c1e7 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x95>
 810c1cf:	8b 45 10             	mov    0x10(%ebp),%eax
 810c1d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c1d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c1d9:	89 04 24             	mov    %eax,(%esp)
 810c1dc:	e8 3d 4c 00 00       	call   8110e1e <_ZN5CUser31IncCurCharacUsedFatigueQuantityEj>
 810c1e1:	eb 04                	jmp    810c1e7 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x95>
 810c1e3:	90                   	nop
 810c1e4:	eb 01                	jmp    810c1e7 <_ZN13EventClassify15CEventScriptMng16inc_user_fatigueEP5CUserj+0x95>
 810c1e6:	90                   	nop
 810c1e7:	c9                   	leave
 810c1e8:	c3                   	ret
 810c1e9:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::inc_user_fatigue @ 0x810c152

/* EventClassify::CEventScriptMng::inc_user_fatigue(CUser*, unsigned int) */

void __thiscall
EventClassify::CEventScriptMng::inc_user_fatigue(CEventScriptMng *this,CUser *param_1,uint param_2)

{
  char cVar1;
  CFatigueQuantity *this_00;
  int iVar2;
  
  cVar1 = is_eventing(this,0x199);
  if ((cVar1 == '\x01') &&
     (this_00 = (CFatigueQuantity *)get_event_entity((int)this), this_00 != (CFatigueQuantity *)0x0)
     ) {
    cVar1 = CFatigueQuantity::get_user_type(this_00);
    if (cVar1 == '\0') {
      CUser::IncCurCharacUsedFatigueQuantity(param_1,param_2);
    }
    else if ((cVar1 == '\x01') && (iVar2 = CUser::GetPCRoomNo(param_1), iVar2 != 0)) {
      CUser::IncCurCharacUsedFatigueQuantity(param_1,param_2);
    }
  }
  return;
}

```

---

## initScriptlist

```asm
// === 0810ba7a EventClassify::CEventScriptMng::initScriptlist  [0x0810ba7a-0x810bd13] ===
 810ba7a:	55                   	push   %ebp
 810ba7b:	89 e5                	mov    %esp,%ebp
 810ba7d:	56                   	push   %esi
 810ba7e:	53                   	push   %ebx
 810ba7f:	83 ec 30             	sub    $0x30,%esp
 810ba82:	8b 55 0c             	mov    0xc(%ebp),%edx
 810ba85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ba88:	89 54 24 04          	mov    %edx,0x4(%esp)
 810ba8c:	89 04 24             	mov    %eax,(%esp)
 810ba8f:	e8 26 5d 00 00       	call   81117ba <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 810ba94:	83 ec 04             	sub    $0x4,%esp
 810ba97:	8b 55 0c             	mov    0xc(%ebp),%edx
 810ba9a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810ba9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 810baa1:	89 04 24             	mov    %eax,(%esp)
 810baa4:	e8 37 5d 00 00       	call   81117e0 <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 810baa9:	83 ec 04             	sub    $0x4,%esp
 810baac:	e9 2e 02 00 00       	jmp    810bcdf <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0x265>
 810bab1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bab4:	89 04 24             	mov    %eax,(%esp)
 810bab7:	e8 5e 5d 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810babc:	8b 40 18             	mov    0x18(%eax),%eax
 810babf:	85 c0                	test   %eax,%eax
 810bac1:	0f 95 c0             	setne  %al
 810bac4:	84 c0                	test   %al,%al
 810bac6:	0f 84 08 02 00 00    	je     810bcd4 <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0x25a>
 810bacc:	8d 45 f3             	lea    -0xd(%ebp),%eax
 810bacf:	89 04 24             	mov    %eax,(%esp)
 810bad2:	e8 f9 45 5d 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 810bad7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bada:	89 04 24             	mov    %eax,(%esp)
 810badd:	e8 38 5d 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bae2:	83 c0 0c             	add    $0xc,%eax
 810bae5:	89 04 24             	mov    %eax,(%esp)
 810bae8:	e8 c3 2f 9d 00       	call   8adeab0 <_Z9toTStringRKSs>
 810baed:	8d 55 f3             	lea    -0xd(%ebp),%edx
 810baf0:	89 54 24 08          	mov    %edx,0x8(%esp)
 810baf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 810baf8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810bafb:	89 04 24             	mov    %eax,(%esp)
 810bafe:	e8 2d bb 5f 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 810bb03:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bb06:	89 04 24             	mov    %eax,(%esp)
 810bb09:	e8 0c 5d 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bb0e:	8b 40 04             	mov    0x4(%eax),%eax
 810bb11:	8b 55 08             	mov    0x8(%ebp),%edx
 810bb14:	8d 4a 18             	lea    0x18(%edx),%ecx
 810bb17:	8d 55 ec             	lea    -0x14(%ebp),%edx
 810bb1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 810bb1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bb22:	89 0c 24             	mov    %ecx,(%esp)
 810bb25:	e8 0e 74 87 00       	call   8982f38 <_ZN23InGameEventScriptLoader14getEventScriptEiRKSs>
 810bb2a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810bb2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810bb30:	89 04 24             	mov    %eax,(%esp)
 810bb33:	e8 a8 c0 5f 00       	call   8707be0 <_ZNSsD1Ev>
 810bb38:	eb 30                	jmp    810bb6a <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0xf0>
 810bb3a:	89 d3                	mov    %edx,%ebx
 810bb3c:	89 c6                	mov    %eax,%esi
 810bb3e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810bb41:	89 04 24             	mov    %eax,(%esp)
 810bb44:	e8 97 c0 5f 00       	call   8707be0 <_ZNSsD1Ev>
 810bb49:	89 f0                	mov    %esi,%eax
 810bb4b:	89 da                	mov    %ebx,%edx
 810bb4d:	eb 00                	jmp    810bb4f <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0xd5>
 810bb4f:	89 d3                	mov    %edx,%ebx
 810bb51:	89 c6                	mov    %eax,%esi
 810bb53:	8d 45 f3             	lea    -0xd(%ebp),%eax
 810bb56:	89 04 24             	mov    %eax,(%esp)
 810bb59:	e8 92 45 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 810bb5e:	89 f0                	mov    %esi,%eax
 810bb60:	89 da                	mov    %ebx,%edx
 810bb62:	89 04 24             	mov    %eax,(%esp)
 810bb65:	e8 e6 7b 9d 00       	call   8ae3750 <_Unwind_Resume>
 810bb6a:	8d 45 f3             	lea    -0xd(%ebp),%eax
 810bb6d:	89 04 24             	mov    %eax,(%esp)
 810bb70:	e8 7b 45 5d 00       	call   86e00f0 <_ZNSaIcED1Ev>
 810bb75:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810bb79:	75 0a                	jne    810bb85 <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0x10b>
 810bb7b:	b8 00 00 00 00       	mov    $0x0,%eax
 810bb80:	e9 84 01 00 00       	jmp    810bd09 <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0x28f>
 810bb85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bb88:	89 04 24             	mov    %eax,(%esp)
 810bb8b:	e8 8a 5c 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bb90:	8d 50 04             	lea    0x4(%eax),%edx
 810bb93:	8b 45 08             	mov    0x8(%ebp),%eax
 810bb96:	83 c0 30             	add    $0x30,%eax
 810bb99:	89 54 24 04          	mov    %edx,0x4(%esp)
 810bb9d:	89 04 24             	mov    %eax,(%esp)
 810bba0:	e8 1f 5b 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810bba5:	89 c3                	mov    %eax,%ebx
 810bba7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bbaa:	89 04 24             	mov    %eax,(%esp)
 810bbad:	e8 68 5c 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bbb2:	8b 40 04             	mov    0x4(%eax),%eax
 810bbb5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 810bbbc:	00 
 810bbbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bbc1:	8b 45 08             	mov    0x8(%ebp),%eax
 810bbc4:	89 04 24             	mov    %eax,(%esp)
 810bbc7:	e8 36 f8 ff ff       	call   810b402 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib>
 810bbcc:	89 03                	mov    %eax,(%ebx)
 810bbce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bbd1:	89 04 24             	mov    %eax,(%esp)
 810bbd4:	e8 41 5c 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bbd9:	8d 50 04             	lea    0x4(%eax),%edx
 810bbdc:	8b 45 08             	mov    0x8(%ebp),%eax
 810bbdf:	83 c0 30             	add    $0x30,%eax
 810bbe2:	89 54 24 04          	mov    %edx,0x4(%esp)
 810bbe6:	89 04 24             	mov    %eax,(%esp)
 810bbe9:	e8 d6 5a 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810bbee:	8b 18                	mov    (%eax),%ebx
 810bbf0:	8b 03                	mov    (%ebx),%eax
 810bbf2:	83 c0 0c             	add    $0xc,%eax
 810bbf5:	8b 30                	mov    (%eax),%esi
 810bbf7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bbfa:	89 04 24             	mov    %eax,(%esp)
 810bbfd:	e8 18 5c 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bc02:	8b 40 18             	mov    0x18(%eax),%eax
 810bc05:	85 c0                	test   %eax,%eax
 810bc07:	0f 95 c0             	setne  %al
 810bc0a:	0f b6 c0             	movzbl %al,%eax
 810bc0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bc11:	89 1c 24             	mov    %ebx,(%esp)
 810bc14:	ff d6                	call   *%esi
 810bc16:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bc19:	89 04 24             	mov    %eax,(%esp)
 810bc1c:	e8 f9 5b 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bc21:	8d 50 04             	lea    0x4(%eax),%edx
 810bc24:	8b 45 08             	mov    0x8(%ebp),%eax
 810bc27:	83 c0 30             	add    $0x30,%eax
 810bc2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810bc2e:	89 04 24             	mov    %eax,(%esp)
 810bc31:	e8 8e 5a 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810bc36:	8b 18                	mov    (%eax),%ebx
 810bc38:	8b 03                	mov    (%ebx),%eax
 810bc3a:	83 c0 10             	add    $0x10,%eax
 810bc3d:	8b 30                	mov    (%eax),%esi
 810bc3f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bc42:	89 04 24             	mov    %eax,(%esp)
 810bc45:	e8 d0 5b 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bc4a:	8b 00                	mov    (%eax),%eax
 810bc4c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810bc4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 810bc53:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bc57:	89 1c 24             	mov    %ebx,(%esp)
 810bc5a:	ff d6                	call   *%esi
 810bc5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bc5f:	89 04 24             	mov    %eax,(%esp)
 810bc62:	e8 b3 5b 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bc67:	8b 58 10             	mov    0x10(%eax),%ebx
 810bc6a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bc6d:	89 04 24             	mov    %eax,(%esp)
 810bc70:	e8 a5 5b 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bc75:	8d 50 04             	lea    0x4(%eax),%edx
 810bc78:	8b 45 08             	mov    0x8(%ebp),%eax
 810bc7b:	83 c0 30             	add    $0x30,%eax
 810bc7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 810bc82:	89 04 24             	mov    %eax,(%esp)
 810bc85:	e8 3a 5a 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810bc8a:	8b 00                	mov    (%eax),%eax
 810bc8c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810bc90:	89 04 24             	mov    %eax,(%esp)
 810bc93:	e8 e0 f3 ff ff       	call   810b078 <_ZN13EventClassify12CEventEntity20set_event_start_timeEi>
 810bc98:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bc9b:	89 04 24             	mov    %eax,(%esp)
 810bc9e:	e8 77 5b 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bca3:	8b 58 14             	mov    0x14(%eax),%ebx
 810bca6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bca9:	89 04 24             	mov    %eax,(%esp)
 810bcac:	e8 69 5b 00 00       	call   811181a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEptEv>
 810bcb1:	8d 50 04             	lea    0x4(%eax),%edx
 810bcb4:	8b 45 08             	mov    0x8(%ebp),%eax
 810bcb7:	83 c0 30             	add    $0x30,%eax
 810bcba:	89 54 24 04          	mov    %edx,0x4(%esp)
 810bcbe:	89 04 24             	mov    %eax,(%esp)
 810bcc1:	e8 fe 59 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810bcc6:	8b 00                	mov    (%eax),%eax
 810bcc8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810bccc:	89 04 24             	mov    %eax,(%esp)
 810bccf:	e8 b2 f3 ff ff       	call   810b086 <_ZN13EventClassify12CEventEntity18set_event_end_timeEi>
 810bcd4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bcd7:	89 04 24             	mov    %eax,(%esp)
 810bcda:	e8 49 5b 00 00       	call   8111828 <_ZNSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEppEv>
 810bcdf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810bce2:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bce6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810bce9:	89 04 24             	mov    %eax,(%esp)
 810bcec:	e8 15 5b 00 00       	call   8111806 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEneERKS4_>
 810bcf1:	84 c0                	test   %al,%al
 810bcf3:	0f 85 b8 fd ff ff    	jne    810bab1 <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList+0x37>
 810bcf9:	8b 45 08             	mov    0x8(%ebp),%eax
 810bcfc:	89 04 24             	mov    %eax,(%esp)
 810bcff:	e8 10 00 00 00       	call   810bd14 <_ZN13EventClassify15CEventScriptMng17init_evnet_entityEv>
 810bd04:	b8 01 00 00 00       	mov    $0x1,%eax
 810bd09:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810bd0c:	83 c4 00             	add    $0x0,%esp
 810bd0f:	5b                   	pop    %ebx
 810bd10:	5e                   	pop    %esi
 810bd11:	5d                   	pop    %ebp
 810bd12:	c3                   	ret
 810bd13:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::initScriptlist @ 0x810ba7a

/* EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList&) */

undefined4 EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList *param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  TCHAR *pTVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_20 [4];
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_1c [4];
  string local_18 [7];
  allocator<char> local_11;
  int local_10;
  
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::begin(local_1c);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::end(local_20);
  do {
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar3 == '\0') {
      init_evnet_entity((CEventScriptMng *)param_1);
      return 1;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
    if (*(int *)(iVar4 + 0x18) != 0) {
      std::allocator<char>::allocator();
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
                    /* try { // try from 0810bae8 to 0810bb02 has its CatchHandler @ 0810bb4f */
      pTVar5 = toTString((string *)(iVar4 + 0xc));
      std::string::string(local_18,pTVar5,(allocator *)&local_11);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
                    /* try { // try from 0810bb25 to 0810bb29 has its CatchHandler @ 0810bb3a */
      local_10 = InGameEventScriptLoader::getEventScript
                           ((InGameEventScriptLoader *)(param_1 + 0x18),*(int *)(iVar4 + 4),local_18
                           );
                    /* try { // try from 0810bb33 to 0810bb37 has its CatchHandler @ 0810bb4f */
      std::string::~string(local_18);
      std::allocator<char>::~allocator(&local_11);
      if (local_10 == 0) {
        return 0;
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar4 + 4));
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      uVar7 = create_event_entity((CEventScriptMng *)param_1,*(int *)(iVar4 + 4),false);
      *puVar6 = uVar7;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar4 + 4));
      piVar1 = (int *)*puVar6;
      pcVar2 = *(code **)(*piVar1 + 0xc);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      (*pcVar2)(piVar1,*(int *)(iVar4 + 0x18) != 0);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar4 + 4));
      piVar1 = (int *)*puVar6;
      pcVar2 = *(code **)(*piVar1 + 0x10);
      puVar6 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      (*pcVar2)(piVar1,*puVar6,local_10);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      iVar4 = *(int *)(iVar4 + 0x10);
      iVar8 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar8 + 4));
      CEventEntity::set_event_start_time((CEventEntity *)*puVar6,iVar4);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      iVar4 = *(int *)(iVar4 + 0x14);
      iVar8 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar8 + 4));
      CEventEntity::set_event_end_time((CEventEntity *)*puVar6,iVar4);
    }
    std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
  } while( true );
}

```

---

## init_event_nums

```asm
// === 0810cdb0 EventClassify::CEventScriptMng::init_event_nums  [0x0810cdb0-0x810cf31] ===
 810cdb0:	55                   	push   %ebp
 810cdb1:	89 e5                	mov    %esp,%ebp
 810cdb3:	83 ec 58             	sub    $0x58,%esp
 810cdb6:	8b 45 08             	mov    0x8(%ebp),%eax
 810cdb9:	83 c0 50             	add    $0x50,%eax
 810cdbc:	89 04 24             	mov    %eax,(%esp)
 810cdbf:	e8 aa 9d f8 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 810cdc4:	c7 45 c4 56 00 00 00 	movl   $0x56,-0x3c(%ebp)
 810cdcb:	8b 45 08             	mov    0x8(%ebp),%eax
 810cdce:	8d 50 50             	lea    0x50(%eax),%edx
 810cdd1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 810cdd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cdd8:	89 14 24             	mov    %edx,(%esp)
 810cddb:	e8 0e 14 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cde0:	c7 45 c8 91 01 00 00 	movl   $0x191,-0x38(%ebp)
 810cde7:	8b 45 08             	mov    0x8(%ebp),%eax
 810cdea:	8d 50 50             	lea    0x50(%eax),%edx
 810cded:	8d 45 c8             	lea    -0x38(%ebp),%eax
 810cdf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cdf4:	89 14 24             	mov    %edx,(%esp)
 810cdf7:	e8 f2 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cdfc:	c7 45 cc 92 01 00 00 	movl   $0x192,-0x34(%ebp)
 810ce03:	8b 45 08             	mov    0x8(%ebp),%eax
 810ce06:	8d 50 50             	lea    0x50(%eax),%edx
 810ce09:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810ce0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ce10:	89 14 24             	mov    %edx,(%esp)
 810ce13:	e8 d6 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810ce18:	c7 45 d0 93 01 00 00 	movl   $0x193,-0x30(%ebp)
 810ce1f:	8b 45 08             	mov    0x8(%ebp),%eax
 810ce22:	8d 50 50             	lea    0x50(%eax),%edx
 810ce25:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810ce28:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ce2c:	89 14 24             	mov    %edx,(%esp)
 810ce2f:	e8 ba 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810ce34:	c7 45 d4 94 01 00 00 	movl   $0x194,-0x2c(%ebp)
 810ce3b:	8b 45 08             	mov    0x8(%ebp),%eax
 810ce3e:	8d 50 50             	lea    0x50(%eax),%edx
 810ce41:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 810ce44:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ce48:	89 14 24             	mov    %edx,(%esp)
 810ce4b:	e8 9e 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810ce50:	c7 45 d8 96 01 00 00 	movl   $0x196,-0x28(%ebp)
 810ce57:	8b 45 08             	mov    0x8(%ebp),%eax
 810ce5a:	8d 50 50             	lea    0x50(%eax),%edx
 810ce5d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810ce60:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ce64:	89 14 24             	mov    %edx,(%esp)
 810ce67:	e8 82 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810ce6c:	c7 45 dc 97 01 00 00 	movl   $0x197,-0x24(%ebp)
 810ce73:	8b 45 08             	mov    0x8(%ebp),%eax
 810ce76:	8d 50 50             	lea    0x50(%eax),%edx
 810ce79:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810ce7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ce80:	89 14 24             	mov    %edx,(%esp)
 810ce83:	e8 66 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810ce88:	c7 45 e0 99 01 00 00 	movl   $0x199,-0x20(%ebp)
 810ce8f:	8b 45 08             	mov    0x8(%ebp),%eax
 810ce92:	8d 50 50             	lea    0x50(%eax),%edx
 810ce95:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810ce98:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ce9c:	89 14 24             	mov    %edx,(%esp)
 810ce9f:	e8 4a 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cea4:	c7 45 e4 9a 01 00 00 	movl   $0x19a,-0x1c(%ebp)
 810ceab:	8b 45 08             	mov    0x8(%ebp),%eax
 810ceae:	8d 50 50             	lea    0x50(%eax),%edx
 810ceb1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810ceb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ceb8:	89 14 24             	mov    %edx,(%esp)
 810cebb:	e8 2e 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cec0:	c7 45 e8 9b 01 00 00 	movl   $0x19b,-0x18(%ebp)
 810cec7:	8b 45 08             	mov    0x8(%ebp),%eax
 810ceca:	8d 50 50             	lea    0x50(%eax),%edx
 810cecd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ced0:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ced4:	89 14 24             	mov    %edx,(%esp)
 810ced7:	e8 12 13 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cedc:	c7 45 ec 5c 00 00 00 	movl   $0x5c,-0x14(%ebp)
 810cee3:	8b 45 08             	mov    0x8(%ebp),%eax
 810cee6:	8d 50 50             	lea    0x50(%eax),%edx
 810cee9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810ceec:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cef0:	89 14 24             	mov    %edx,(%esp)
 810cef3:	e8 f6 12 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cef8:	c7 45 f0 65 00 00 00 	movl   $0x65,-0x10(%ebp)
 810ceff:	8b 45 08             	mov    0x8(%ebp),%eax
 810cf02:	8d 50 50             	lea    0x50(%eax),%edx
 810cf05:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810cf08:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cf0c:	89 14 24             	mov    %edx,(%esp)
 810cf0f:	e8 da 12 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cf14:	c7 45 f4 9c 01 00 00 	movl   $0x19c,-0xc(%ebp)
 810cf1b:	8b 45 08             	mov    0x8(%ebp),%eax
 810cf1e:	8d 50 50             	lea    0x50(%eax),%edx
 810cf21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810cf24:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cf28:	89 14 24             	mov    %edx,(%esp)
 810cf2b:	e8 be 12 f8 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 810cf30:	c9                   	leave
 810cf31:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::init_event_nums @ 0x810cdb0

/* EventClassify::CEventScriptMng::init_event_nums() */

void __thiscall EventClassify::CEventScriptMng::init_event_nums(CEventScriptMng *this)

{
  int local_40 [15];
  
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x50));
  local_40[0] = 0x56;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40);
  local_40[1] = 0x191;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 1);
  local_40[2] = 0x192;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 2);
  local_40[3] = 0x193;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 3);
  local_40[4] = 0x194;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 4);
  local_40[5] = 0x196;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 5);
  local_40[6] = 0x197;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 6);
  local_40[7] = 0x199;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 7);
  local_40[8] = 0x19a;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 8);
  local_40[9] = 0x19b;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 9);
  local_40[10] = 0x5c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 10);
  local_40[0xb] = 0x65;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 0xb);
  local_40[0xc] = 0x19c;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)(this + 0x50),local_40 + 0xc);
  return;
}

```

---

## init_evnet_entity

```asm
// === 0810bd14 EventClassify::CEventScriptMng::init_evnet_entity  [0x0810bd14-0x810bddf] ===
 810bd14:	55                   	push   %ebp
 810bd15:	89 e5                	mov    %esp,%ebp
 810bd17:	53                   	push   %ebx
 810bd18:	83 ec 24             	sub    $0x24,%esp
 810bd1b:	8b 45 08             	mov    0x8(%ebp),%eax
 810bd1e:	89 04 24             	mov    %eax,(%esp)
 810bd21:	e8 8a 10 00 00       	call   810cdb0 <_ZN13EventClassify15CEventScriptMng15init_event_numsEv>
 810bd26:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810bd2d:	e9 8c 00 00 00       	jmp    810bdbe <_ZN13EventClassify15CEventScriptMng17init_evnet_entityEv+0xaa>
 810bd32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810bd35:	8b 55 08             	mov    0x8(%ebp),%edx
 810bd38:	83 c2 50             	add    $0x50,%edx
 810bd3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bd3f:	89 14 24             	mov    %edx,(%esp)
 810bd42:	e8 95 24 f8 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810bd47:	8b 00                	mov    (%eax),%eax
 810bd49:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bd4d:	8b 45 08             	mov    0x8(%ebp),%eax
 810bd50:	89 04 24             	mov    %eax,(%esp)
 810bd53:	e8 12 fc ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810bd58:	85 c0                	test   %eax,%eax
 810bd5a:	0f 94 c0             	sete   %al
 810bd5d:	84 c0                	test   %al,%al
 810bd5f:	74 59                	je     810bdba <_ZN13EventClassify15CEventScriptMng17init_evnet_entityEv+0xa6>
 810bd61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810bd64:	8b 55 08             	mov    0x8(%ebp),%edx
 810bd67:	83 c2 50             	add    $0x50,%edx
 810bd6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bd6e:	89 14 24             	mov    %edx,(%esp)
 810bd71:	e8 66 24 f8 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810bd76:	8b 55 08             	mov    0x8(%ebp),%edx
 810bd79:	83 c2 30             	add    $0x30,%edx
 810bd7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bd80:	89 14 24             	mov    %edx,(%esp)
 810bd83:	e8 3c 59 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810bd88:	89 c3                	mov    %eax,%ebx
 810bd8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810bd8d:	8b 55 08             	mov    0x8(%ebp),%edx
 810bd90:	83 c2 50             	add    $0x50,%edx
 810bd93:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bd97:	89 14 24             	mov    %edx,(%esp)
 810bd9a:	e8 3d 24 f8 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 810bd9f:	8b 00                	mov    (%eax),%eax
 810bda1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810bda8:	00 
 810bda9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bdad:	8b 45 08             	mov    0x8(%ebp),%eax
 810bdb0:	89 04 24             	mov    %eax,(%esp)
 810bdb3:	e8 4a f6 ff ff       	call   810b402 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib>
 810bdb8:	89 03                	mov    %eax,(%ebx)
 810bdba:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810bdbe:	8b 45 08             	mov    0x8(%ebp),%eax
 810bdc1:	83 c0 50             	add    $0x50,%eax
 810bdc4:	89 04 24             	mov    %eax,(%esp)
 810bdc7:	e8 f4 23 f8 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 810bdcc:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 810bdcf:	0f 9f c0             	setg   %al
 810bdd2:	84 c0                	test   %al,%al
 810bdd4:	0f 85 58 ff ff ff    	jne    810bd32 <_ZN13EventClassify15CEventScriptMng17init_evnet_entityEv+0x1e>
 810bdda:	83 c4 24             	add    $0x24,%esp
 810bddd:	5b                   	pop    %ebx
 810bdde:	5d                   	pop    %ebp
 810bddf:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::init_evnet_entity @ 0x810bd14

/* EventClassify::CEventScriptMng::init_evnet_entity() */

void __thiscall EventClassify::CEventScriptMng::init_evnet_entity(CEventScriptMng *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_10;
  
  init_event_nums(this);
  local_10 = 0;
  while( true ) {
    iVar4 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x50));
    if (iVar4 <= (int)local_10) break;
    std::vector<int,std::allocator<int>>::operator[]
              ((vector<int,std::allocator<int>> *)(this + 0x50),local_10);
    iVar4 = get_event_entity((int)this);
    if (iVar4 == 0) {
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x50),local_10);
      puVar2 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(this + 0x30),piVar1);
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0x50),local_10);
      uVar3 = create_event_entity(this,*piVar1,true);
      *puVar2 = uVar3;
    }
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## is_current_ingame_event_record_type

```asm
// === 0810c75c EventClassify::CEventScriptMng::is_current_ingame_event_record_type  [0x0810c75c-0x810c7b7] ===
 810c75c:	55                   	push   %ebp
 810c75d:	89 e5                	mov    %esp,%ebp
 810c75f:	83 ec 28             	sub    $0x28,%esp
 810c762:	8b 55 08             	mov    0x8(%ebp),%edx
 810c765:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c768:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 810c76b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 810c76f:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c773:	89 04 24             	mov    %eax,(%esp)
 810c776:	e8 29 51 00 00       	call   81118a4 <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 810c77b:	83 ec 04             	sub    $0x4,%esp
 810c77e:	8b 55 08             	mov    0x8(%ebp),%edx
 810c781:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c784:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c788:	89 04 24             	mov    %eax,(%esp)
 810c78b:	e8 50 50 00 00       	call   81117e0 <_ZNSt3mapIi15InGameEventInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 810c790:	83 ec 04             	sub    $0x4,%esp
 810c793:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810c796:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c79a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810c79d:	89 04 24             	mov    %eax,(%esp)
 810c7a0:	e8 61 50 00 00       	call   8111806 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi15InGameEventInfoEEneERKS4_>
 810c7a5:	84 c0                	test   %al,%al
 810c7a7:	74 07                	je     810c7b0 <_ZN13EventClassify15CEventScriptMng35is_current_ingame_event_record_typeEi+0x54>
 810c7a9:	b8 01 00 00 00       	mov    $0x1,%eax
 810c7ae:	eb 05                	jmp    810c7b5 <_ZN13EventClassify15CEventScriptMng35is_current_ingame_event_record_typeEi+0x59>
 810c7b0:	b8 00 00 00 00       	mov    $0x0,%eax
 810c7b5:	c9                   	leave
 810c7b6:	c3                   	ret
 810c7b7:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::is_current_ingame_event_record_type @ 0x810c75c

/* EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int) */

bool EventClassify::CEventScriptMng::is_current_ingame_event_record_type(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> local_14 [4];
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_10 [12];
  
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::find((int *)local_14);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 != '\0';
}

```

---

## is_event_entity

```asm
// === 0810b9d4 EventClassify::CEventScriptMng::is_event_entity  [0x0810b9d4-0x810ba35] ===
 810b9d4:	55                   	push   %ebp
 810b9d5:	89 e5                	mov    %esp,%ebp
 810b9d7:	83 ec 28             	sub    $0x28,%esp
 810b9da:	8b 45 08             	mov    0x8(%ebp),%eax
 810b9dd:	8d 50 30             	lea    0x30(%eax),%edx
 810b9e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810b9e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 810b9e7:	89 04 24             	mov    %eax,(%esp)
 810b9ea:	e8 9b 5c 00 00       	call   811168a <_ZNKSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 810b9ef:	83 ec 04             	sub    $0x4,%esp
 810b9f2:	8b 45 08             	mov    0x8(%ebp),%eax
 810b9f5:	8d 48 30             	lea    0x30(%eax),%ecx
 810b9f8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b9fb:	8d 55 0c             	lea    0xc(%ebp),%edx
 810b9fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 810ba02:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810ba06:	89 04 24             	mov    %eax,(%esp)
 810ba09:	e8 50 5c 00 00       	call   811165e <_ZNKSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 810ba0e:	83 ec 04             	sub    $0x4,%esp
 810ba11:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810ba14:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ba18:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810ba1b:	89 04 24             	mov    %eax,(%esp)
 810ba1e:	e8 8d 5c 00 00       	call   81116b0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEneERKS6_>
 810ba23:	84 c0                	test   %al,%al
 810ba25:	74 07                	je     810ba2e <_ZNK13EventClassify15CEventScriptMng15is_event_entityEi+0x5a>
 810ba27:	b8 01 00 00 00       	mov    $0x1,%eax
 810ba2c:	eb 05                	jmp    810ba33 <_ZNK13EventClassify15CEventScriptMng15is_event_entityEi+0x5f>
 810ba2e:	b8 00 00 00 00       	mov    $0x0,%eax
 810ba33:	c9                   	leave
 810ba34:	c3                   	ret
 810ba35:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::is_event_entity @ 0x810b9d4

/* EventClassify::CEventScriptMng::is_event_entity(int) const */

bool EventClassify::CEventScriptMng::is_event_entity(int param_1)

{
  char cVar1;
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_14 [4];
  _Rb_tree_const_iterator<std::pair<int_const,EventClassify::CEventEntity*>> local_10 [12];
  
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_14);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::find((int *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
          operator!=(local_10,(_Rb_tree_const_iterator *)local_14);
  return cVar1 != '\0';
}

```

---

## is_eventing

```asm
// === 0810ba36 EventClassify::CEventScriptMng::is_eventing  [0x0810ba36-0x810ba79] ===
 810ba36:	55                   	push   %ebp
 810ba37:	89 e5                	mov    %esp,%ebp
 810ba39:	83 ec 18             	sub    $0x18,%esp
 810ba3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ba3f:	85 c0                	test   %eax,%eax
 810ba41:	78 2f                	js     810ba72 <_ZN13EventClassify15CEventScriptMng11is_eventingEi+0x3c>
 810ba43:	8b 45 0c             	mov    0xc(%ebp),%eax
 810ba46:	3d 9c 01 00 00       	cmp    $0x19c,%eax
 810ba4b:	7f 25                	jg     810ba72 <_ZN13EventClassify15CEventScriptMng11is_eventingEi+0x3c>
 810ba4d:	8b 45 08             	mov    0x8(%ebp),%eax
 810ba50:	8d 50 30             	lea    0x30(%eax),%edx
 810ba53:	8d 45 0c             	lea    0xc(%ebp),%eax
 810ba56:	89 44 24 04          	mov    %eax,0x4(%esp)
 810ba5a:	89 14 24             	mov    %edx,(%esp)
 810ba5d:	e8 62 5c 00 00       	call   81116c4 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEEixERS6_>
 810ba62:	8b 00                	mov    (%eax),%eax
 810ba64:	8b 10                	mov    (%eax),%edx
 810ba66:	83 c2 08             	add    $0x8,%edx
 810ba69:	8b 12                	mov    (%edx),%edx
 810ba6b:	89 04 24             	mov    %eax,(%esp)
 810ba6e:	ff d2                	call   *%edx
 810ba70:	eb 05                	jmp    810ba77 <_ZN13EventClassify15CEventScriptMng11is_eventingEi+0x41>
 810ba72:	b8 00 00 00 00       	mov    $0x0,%eax
 810ba77:	c9                   	leave
 810ba78:	c3                   	ret
 810ba79:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::is_eventing @ 0x810ba36

/* EventClassify::CEventScriptMng::is_eventing(int) */

undefined4 __thiscall EventClassify::CEventScriptMng::is_eventing(CEventScriptMng *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0) || (0x19c < param_1)) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)
             std::
             map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
             ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                           *)(this + 0x30),&param_1);
    uVar2 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return uVar2;
}

```

---

## process_account_first_login

```asm
// === 0810bde0 EventClassify::CEventScriptMng::process_account_first_login  [0x0810bde0-0x810bea7] ===
 810bde0:	55                   	push   %ebp
 810bde1:	89 e5                	mov    %esp,%ebp
 810bde3:	53                   	push   %ebx
 810bde4:	83 ec 24             	sub    $0x24,%esp
 810bde7:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 810bdeb:	0f 84 ad 00 00 00    	je     810be9e <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE+0xbe>
 810bdf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 810bdf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bdf8:	8b 45 08             	mov    0x8(%ebp),%eax
 810bdfb:	89 04 24             	mov    %eax,(%esp)
 810bdfe:	e8 33 fc ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810be03:	83 f0 01             	xor    $0x1,%eax
 810be06:	84 c0                	test   %al,%al
 810be08:	0f 85 93 00 00 00    	jne    810bea1 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE+0xc1>
 810be0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810be11:	89 44 24 04          	mov    %eax,0x4(%esp)
 810be15:	8b 45 08             	mov    0x8(%ebp),%eax
 810be18:	89 04 24             	mov    %eax,(%esp)
 810be1b:	e8 ac f2 ff ff       	call   810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>
 810be20:	89 c2                	mov    %eax,%edx
 810be22:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810be25:	89 54 24 08          	mov    %edx,0x8(%esp)
 810be29:	8d 55 14             	lea    0x14(%ebp),%edx
 810be2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 810be30:	89 04 24             	mov    %eax,(%esp)
 810be33:	e8 0e 5a 00 00       	call   8111846 <_ZNSt6bitsetILj32EEixEj>
 810be38:	83 ec 04             	sub    $0x4,%esp
 810be3b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810be3e:	89 04 24             	mov    %eax,(%esp)
 810be41:	e8 34 5a 00 00       	call   811187a <_ZNKSt6bitsetILj32EE9referencecvbEv>
 810be46:	89 c3                	mov    %eax,%ebx
 810be48:	83 f3 01             	xor    $0x1,%ebx
 810be4b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810be4e:	89 04 24             	mov    %eax,(%esp)
 810be51:	e8 1e 5a 00 00       	call   8111874 <_ZNSt6bitsetILj32EE9referenceD1Ev>
 810be56:	84 db                	test   %bl,%bl
 810be58:	74 48                	je     810bea2 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE+0xc2>
 810be5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 810be5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 810be61:	8b 45 08             	mov    0x8(%ebp),%eax
 810be64:	89 04 24             	mov    %eax,(%esp)
 810be67:	e8 fe fa ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810be6c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810be6f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810be73:	74 2d                	je     810bea2 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE+0xc2>
 810be75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810be78:	8b 00                	mov    (%eax),%eax
 810be7a:	83 c0 24             	add    $0x24,%eax
 810be7d:	8b 10                	mov    (%eax),%edx
 810be7f:	8b 45 14             	mov    0x14(%ebp),%eax
 810be82:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810be86:	8b 45 10             	mov    0x10(%ebp),%eax
 810be89:	89 44 24 08          	mov    %eax,0x8(%esp)
 810be8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 810be90:	89 44 24 04          	mov    %eax,0x4(%esp)
 810be94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810be97:	89 04 24             	mov    %eax,(%esp)
 810be9a:	ff d2                	call   *%edx
 810be9c:	eb 04                	jmp    810bea2 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE+0xc2>
 810be9e:	90                   	nop
 810be9f:	eb 01                	jmp    810bea2 <_ZN13EventClassify15CEventScriptMng27process_account_first_loginEiP5CUserSt6bitsetILj32EE+0xc2>
 810bea1:	90                   	nop
 810bea2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810bea5:	c9                   	leave
 810bea6:	c3                   	ret
 810bea7:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::process_account_first_login @ 0x810bde0

/* EventClassify::CEventScriptMng::process_account_first_login(int, CUser*, std::bitset<32u>) */

void __thiscall
EventClassify::CEventScriptMng::process_account_first_login
          (CEventScriptMng *this,int param_1,int param_2,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  reference local_18 [8];
  int *local_10;
  
  if ((param_2 != 0) && (cVar1 = is_eventing(this,param_1), cVar1 == '\x01')) {
    get_convert_to_user_confirmflag(this,param_1);
    std::bitset<32u>::operator[]((uint)local_18);
    bVar2 = std::bitset::reference::operator_cast_to_bool(local_18);
    std::bitset<32u>::reference::~reference((reference *)local_18);
    if ((!bVar2) && (local_10 = (int *)get_event_entity((int)this), local_10 != (int *)0x0)) {
      (**(code **)(*local_10 + 0x24))(local_10,param_1,param_2,param_4);
    }
  }
  return;
}

```

---

## process_add_fatigue_count

```asm
// === 0810c110 EventClassify::CEventScriptMng::process_add_fatigue_count  [0x0810c110-0x810c151] ===
 810c110:	55                   	push   %ebp
 810c111:	89 e5                	mov    %esp,%ebp
 810c113:	83 ec 18             	sub    $0x18,%esp
 810c116:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810c11a:	74 2f                	je     810c14b <_ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri+0x3b>
 810c11c:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 810c123:	00 
 810c124:	8b 45 08             	mov    0x8(%ebp),%eax
 810c127:	89 04 24             	mov    %eax,(%esp)
 810c12a:	e8 07 f9 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c12f:	83 f0 01             	xor    $0x1,%eax
 810c132:	84 c0                	test   %al,%al
 810c134:	75 18                	jne    810c14e <_ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri+0x3e>
 810c136:	8b 45 10             	mov    0x10(%ebp),%eax
 810c139:	98                   	cwtl
 810c13a:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c13e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c141:	89 04 24             	mov    %eax,(%esp)
 810c144:	e8 e1 11 58 00       	call   868d32a <_ZN5CUser24set_server_fatigue_countEs>
 810c149:	eb 04                	jmp    810c14f <_ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri+0x3f>
 810c14b:	90                   	nop
 810c14c:	eb 01                	jmp    810c14f <_ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri+0x3f>
 810c14e:	90                   	nop
 810c14f:	c9                   	leave
 810c150:	c3                   	ret
 810c151:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::process_add_fatigue_count @ 0x810c110

/* EventClassify::CEventScriptMng::process_add_fatigue_count(CUser*, int) */

void __thiscall
EventClassify::CEventScriptMng::process_add_fatigue_count
          (CEventScriptMng *this,CUser *param_1,int param_2)

{
  char cVar1;
  
  if ((param_1 != (CUser *)0x0) && (cVar1 = is_eventing(this,0x56), cVar1 == '\x01')) {
    CUser::set_server_fatigue_count(param_1,(short)param_2);
  }
  return;
}

```

---

## process_add_item_count_db

```asm
// === 0810bea8 EventClassify::CEventScriptMng::process_add_item_count_db  [0x0810bea8-0x810beff] ===
 810bea8:	55                   	push   %ebp
 810bea9:	89 e5                	mov    %esp,%ebp
 810beab:	83 ec 28             	sub    $0x28,%esp
 810beae:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810beb2:	74 49                	je     810befd <_ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii+0x55>
 810beb4:	c7 44 24 04 93 01 00 	movl   $0x193,0x4(%esp)
 810bebb:	00 
 810bebc:	8b 45 08             	mov    0x8(%ebp),%eax
 810bebf:	89 04 24             	mov    %eax,(%esp)
 810bec2:	e8 a3 fa ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810bec7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810beca:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810bece:	74 2e                	je     810befe <_ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii+0x56>
 810bed0:	8b 45 10             	mov    0x10(%ebp),%eax
 810bed3:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bed7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810beda:	89 04 24             	mov    %eax,(%esp)
 810bedd:	e8 ac 21 00 00       	call   810e08e <_ZN13EventClassify15CAddItemCountDB13is_event_itemEi>
 810bee2:	84 c0                	test   %al,%al
 810bee4:	74 18                	je     810befe <_ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii+0x56>
 810bee6:	8b 45 14             	mov    0x14(%ebp),%eax
 810bee9:	0f b7 d0             	movzwl %ax,%edx
 810beec:	8b 45 0c             	mov    0xc(%ebp),%eax
 810beef:	89 54 24 04          	mov    %edx,0x4(%esp)
 810bef3:	89 04 24             	mov    %eax,(%esp)
 810bef6:	e8 df 4d 00 00       	call   8110cda <_ZN15CUserCharacInfo29IncCurCharacEventAddItemCountEt>
 810befb:	eb 01                	jmp    810befe <_ZN13EventClassify15CEventScriptMng25process_add_item_count_dbEP5CUserii+0x56>
 810befd:	90                   	nop
 810befe:	c9                   	leave
 810beff:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::process_add_item_count_db @ 0x810bea8

/* EventClassify::CEventScriptMng::process_add_item_count_db(CUser*, int, int) */

void __thiscall
EventClassify::CEventScriptMng::process_add_item_count_db
          (CEventScriptMng *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  CAddItemCountDB *this_00;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CAddItemCountDB *)get_event_entity((int)this);
    if (this_00 != (CAddItemCountDB *)0x0) {
      cVar1 = CAddItemCountDB::is_event_item(this_00,param_2);
      if (cVar1 != '\0') {
        CUserCharacInfo::IncCurCharacEventAddItemCount((CUserCharacInfo *)param_1,(ushort)param_3);
      }
    }
  }
  return;
}

```

---

## process_add_quest_count_db

```asm
// === 0810bf00 EventClassify::CEventScriptMng::process_add_quest_count_db  [0x0810bf00-0x810bf55] ===
 810bf00:	55                   	push   %ebp
 810bf01:	89 e5                	mov    %esp,%ebp
 810bf03:	83 ec 28             	sub    $0x28,%esp
 810bf06:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810bf0a:	74 47                	je     810bf53 <_ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri+0x53>
 810bf0c:	c7 44 24 04 93 01 00 	movl   $0x193,0x4(%esp)
 810bf13:	00 
 810bf14:	8b 45 08             	mov    0x8(%ebp),%eax
 810bf17:	89 04 24             	mov    %eax,(%esp)
 810bf1a:	e8 4b fa ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810bf1f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810bf22:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810bf26:	74 2c                	je     810bf54 <_ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri+0x54>
 810bf28:	8b 45 10             	mov    0x10(%ebp),%eax
 810bf2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bf2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810bf32:	89 04 24             	mov    %eax,(%esp)
 810bf35:	e8 ba 21 00 00       	call   810e0f4 <_ZN13EventClassify15CAddItemCountDB14is_event_questEi>
 810bf3a:	84 c0                	test   %al,%al
 810bf3c:	74 16                	je     810bf54 <_ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri+0x54>
 810bf3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810bf41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810bf48:	00 
 810bf49:	89 04 24             	mov    %eax,(%esp)
 810bf4c:	e8 89 4d 00 00       	call   8110cda <_ZN15CUserCharacInfo29IncCurCharacEventAddItemCountEt>
 810bf51:	eb 01                	jmp    810bf54 <_ZN13EventClassify15CEventScriptMng26process_add_quest_count_dbEP5CUseri+0x54>
 810bf53:	90                   	nop
 810bf54:	c9                   	leave
 810bf55:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::process_add_quest_count_db @ 0x810bf00

/* EventClassify::CEventScriptMng::process_add_quest_count_db(CUser*, int) */

void __thiscall
EventClassify::CEventScriptMng::process_add_quest_count_db
          (CEventScriptMng *this,CUser *param_1,int param_2)

{
  char cVar1;
  CAddItemCountDB *this_00;
  
  if (param_1 != (CUser *)0x0) {
    this_00 = (CAddItemCountDB *)get_event_entity((int)this);
    if (this_00 != (CAddItemCountDB *)0x0) {
      cVar1 = CAddItemCountDB::is_event_quest(this_00,param_2);
      if (cVar1 != '\0') {
        CUserCharacInfo::IncCurCharacEventAddItemCount((CUserCharacInfo *)param_1,1);
      }
    }
  }
  return;
}

```

---

## process_level_up_reward

```asm
// === 0810bf56 EventClassify::CEventScriptMng::process_level_up_reward  [0x0810bf56-0x810c0a5] ===
 810bf56:	55                   	push   %ebp
 810bf57:	89 e5                	mov    %esp,%ebp
 810bf59:	57                   	push   %edi
 810bf5a:	56                   	push   %esi
 810bf5b:	53                   	push   %ebx
 810bf5c:	83 ec 4c             	sub    $0x4c,%esp
 810bf5f:	8b 45 10             	mov    0x10(%ebp),%eax
 810bf62:	88 45 d4             	mov    %al,-0x2c(%ebp)
 810bf65:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810bf69:	0f 84 2a 01 00 00    	je     810c099 <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x143>
 810bf6f:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 810bf76:	00 
 810bf77:	8b 45 08             	mov    0x8(%ebp),%eax
 810bf7a:	89 04 24             	mov    %eax,(%esp)
 810bf7d:	e8 b4 fa ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810bf82:	83 f0 01             	xor    $0x1,%eax
 810bf85:	84 c0                	test   %al,%al
 810bf87:	0f 85 0f 01 00 00    	jne    810c09c <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x146>
 810bf8d:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 810bf94:	00 
 810bf95:	8b 45 08             	mov    0x8(%ebp),%eax
 810bf98:	89 04 24             	mov    %eax,(%esp)
 810bf9b:	e8 ca f9 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810bfa0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810bfa3:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 810bfa7:	0f 84 f0 00 00 00    	je     810c09d <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x147>
 810bfad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810bfb0:	89 04 24             	mov    %eax,(%esp)
 810bfb3:	e8 3a 23 00 00       	call   810e2f2 <_ZN13EventClassify14CLevelUpReward18is_recv_check_itemEv>
 810bfb8:	84 c0                	test   %al,%al
 810bfba:	0f 84 84 00 00 00    	je     810c044 <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0xee>
 810bfc0:	0f b6 7d d4          	movzbl -0x2c(%ebp),%edi
 810bfc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 810bfc7:	89 04 24             	mov    %eax,(%esp)
 810bfca:	e8 c5 4c 00 00       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 810bfcf:	0f be f0             	movsbl %al,%esi
 810bfd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 810bfd5:	89 04 24             	mov    %eax,(%esp)
 810bfd8:	e8 43 1f ff ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 810bfdd:	89 c3                	mov    %eax,%ebx
 810bfdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 810bfe2:	89 04 24             	mov    %eax,(%esp)
 810bfe5:	e8 ce e2 fc ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 810bfea:	89 7c 24 10          	mov    %edi,0x10(%esp)
 810bfee:	89 74 24 0c          	mov    %esi,0xc(%esp)
 810bff2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810bff6:	89 44 24 04          	mov    %eax,0x4(%esp)
 810bffa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810bffd:	89 04 24             	mov    %eax,(%esp)
 810c000:	e8 8d 21 00 00       	call   810e192 <_ZN13EventClassify14CLevelUpReward16check_recv_levelEiiib>
 810c005:	84 c0                	test   %al,%al
 810c007:	0f 84 90 00 00 00    	je     810c09d <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x147>
 810c00d:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c010:	89 04 24             	mov    %eax,(%esp)
 810c013:	e8 a0 e2 fc ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 810c018:	89 c6                	mov    %eax,%esi
 810c01a:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c01d:	89 04 24             	mov    %eax,(%esp)
 810c020:	e8 29 fc fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810c025:	89 c3                	mov    %eax,%ebx
 810c027:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c02a:	89 04 24             	mov    %eax,(%esp)
 810c02d:	e8 64 cc fb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 810c032:	89 74 24 08          	mov    %esi,0x8(%esp)
 810c036:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810c03a:	89 04 24             	mov    %eax,(%esp)
 810c03d:	e8 d8 66 33 00       	call   844271a <_ZN22DB_SelectLevelUpReward11makeRequestEiji>
 810c042:	eb 59                	jmp    810c09d <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x147>
 810c044:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c047:	89 04 24             	mov    %eax,(%esp)
 810c04a:	e8 45 4c 00 00       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 810c04f:	0f be f0             	movsbl %al,%esi
 810c052:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c055:	89 04 24             	mov    %eax,(%esp)
 810c058:	e8 c3 1e ff ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 810c05d:	89 c3                	mov    %eax,%ebx
 810c05f:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c062:	89 04 24             	mov    %eax,(%esp)
 810c065:	e8 4e e2 fc ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 810c06a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 810c06e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810c072:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c076:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810c079:	89 04 24             	mov    %eax,(%esp)
 810c07c:	e8 81 22 00 00       	call   810e302 <_ZN13EventClassify14CLevelUpReward15set_reward_itemEiii>
 810c081:	84 c0                	test   %al,%al
 810c083:	74 18                	je     810c09d <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x147>
 810c085:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c088:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c08c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 810c08f:	89 04 24             	mov    %eax,(%esp)
 810c092:	e8 53 24 00 00       	call   810e4ea <_ZN13EventClassify14CLevelUpReward9do_actionEP5CUser>
 810c097:	eb 04                	jmp    810c09d <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x147>
 810c099:	90                   	nop
 810c09a:	eb 01                	jmp    810c09d <_ZN13EventClassify15CEventScriptMng23process_level_up_rewardEP5CUserb+0x147>
 810c09c:	90                   	nop
 810c09d:	83 c4 4c             	add    $0x4c,%esp
 810c0a0:	5b                   	pop    %ebx
 810c0a1:	5e                   	pop    %esi
 810c0a2:	5f                   	pop    %edi
 810c0a3:	5d                   	pop    %ebp
 810c0a4:	c3                   	ret
 810c0a5:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::process_level_up_reward @ 0x810bf56

/* EventClassify::CEventScriptMng::process_level_up_reward(CUser*, bool) */

void __thiscall
EventClassify::CEventScriptMng::process_level_up_reward
          (CEventScriptMng *this,CUser *param_1,bool param_2)

{
  char cVar1;
  CLevelUpReward *this_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (((param_1 != (CUser *)0x0) && (cVar1 = is_eventing(this,0x194), cVar1 == '\x01')) &&
     (this_00 = (CLevelUpReward *)get_event_entity((int)this), this_00 != (CLevelUpReward *)0x0)) {
    cVar1 = CLevelUpReward::is_recv_check_item(this_00);
    if (cVar1 == '\0') {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      cVar1 = CLevelUpReward::set_reward_item(this_00,iVar3,iVar2,(int)cVar1);
      if (cVar1 != '\0') {
        CLevelUpReward::do_action(this_00,param_1);
      }
    }
    else {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      cVar1 = CLevelUpReward::check_recv_level(this_00,iVar3,iVar2,(int)cVar1,param_2);
      if (cVar1 != '\0') {
        iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        iVar3 = CUser::GetUID(param_1);
        DB_SelectLevelUpReward::makeRequest(iVar3,uVar4,iVar2);
      }
    }
  }
  return;
}

```

---

## process_level_up_reward_recv_level

```asm
// === 0810c0a6 EventClassify::CEventScriptMng::process_level_up_reward_recv_level  [0x0810c0a6-0x810c10f] ===
 810c0a6:	55                   	push   %ebp
 810c0a7:	89 e5                	mov    %esp,%ebp
 810c0a9:	83 ec 28             	sub    $0x28,%esp
 810c0ac:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810c0b0:	74 58                	je     810c10a <_ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii+0x64>
 810c0b2:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 810c0b9:	00 
 810c0ba:	8b 45 08             	mov    0x8(%ebp),%eax
 810c0bd:	89 04 24             	mov    %eax,(%esp)
 810c0c0:	e8 71 f9 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c0c5:	83 f0 01             	xor    $0x1,%eax
 810c0c8:	84 c0                	test   %al,%al
 810c0ca:	75 41                	jne    810c10d <_ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii+0x67>
 810c0cc:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 810c0d3:	00 
 810c0d4:	8b 45 08             	mov    0x8(%ebp),%eax
 810c0d7:	89 04 24             	mov    %eax,(%esp)
 810c0da:	e8 8b f8 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c0df:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c0e2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c0e6:	74 26                	je     810c10e <_ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii+0x68>
 810c0e8:	8b 45 14             	mov    0x14(%ebp),%eax
 810c0eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810c0ef:	8b 45 10             	mov    0x10(%ebp),%eax
 810c0f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c0f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c0f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c0fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c100:	89 04 24             	mov    %eax,(%esp)
 810c103:	e8 12 24 00 00       	call   810e51a <_ZN13EventClassify14CLevelUpReward27send_reward_from_recv_levelEP5CUserii>
 810c108:	eb 04                	jmp    810c10e <_ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii+0x68>
 810c10a:	90                   	nop
 810c10b:	eb 01                	jmp    810c10e <_ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii+0x68>
 810c10d:	90                   	nop
 810c10e:	c9                   	leave
 810c10f:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::process_level_up_reward_recv_level @ 0x810c0a6

/* EventClassify::CEventScriptMng::process_level_up_reward_recv_level(CUser*, int, int) */

void __thiscall
EventClassify::CEventScriptMng::process_level_up_reward_recv_level
          (CEventScriptMng *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  CLevelUpReward *this_00;
  
  if (((param_1 != (CUser *)0x0) && (cVar1 = is_eventing(this,0x194), cVar1 == '\x01')) &&
     (this_00 = (CLevelUpReward *)get_event_entity((int)this), this_00 != (CLevelUpReward *)0x0)) {
    CLevelUpReward::send_reward_from_recv_level(this_00,param_1,param_2,param_3);
  }
  return;
}

```

---

## process_update_ingame_history

```asm
// === 0810c82e EventClassify::CEventScriptMng::process_update_ingame_history  [0x0810c82e-0x810c973] ===
 810c82e:	55                   	push   %ebp
 810c82f:	89 e5                	mov    %esp,%ebp
 810c831:	57                   	push   %edi
 810c832:	56                   	push   %esi
 810c833:	53                   	push   %ebx
 810c834:	83 ec 2c             	sub    $0x2c,%esp
 810c837:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810c83b:	0f 84 26 01 00 00    	je     810c967 <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser+0x139>
 810c841:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c844:	89 04 24             	mov    %eax,(%esp)
 810c847:	e8 b2 0c 58 00       	call   868d4fe <_ZN5CUser31get_ingame_event_history_updateEv>
 810c84c:	8d 55 dc             	lea    -0x24(%ebp),%edx
 810c84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c853:	89 14 24             	mov    %edx,(%esp)
 810c856:	e8 75 50 00 00       	call   81118d0 <_ZNKSt3mapIibSt4lessIiESaISt4pairIKibEEE5beginEv>
 810c85b:	83 ec 04             	sub    $0x4,%esp
 810c85e:	e9 cb 00 00 00       	jmp    810c92e <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser+0x100>
 810c863:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810c866:	89 04 24             	mov    %eax,(%esp)
 810c869:	e8 c2 50 00 00       	call   8111930 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKibEEptEv>
 810c86e:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 810c872:	84 c0                	test   %al,%al
 810c874:	0f 84 b4 00 00 00    	je     810c92e <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser+0x100>
 810c87a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810c87d:	89 04 24             	mov    %eax,(%esp)
 810c880:	e8 ab 50 00 00       	call   8111930 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKibEEptEv>
 810c885:	89 c3                	mov    %eax,%ebx
 810c887:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c88a:	89 04 24             	mov    %eax,(%esp)
 810c88d:	e8 5e 0c 58 00       	call   868d4f0 <_ZN5CUser24get_ingame_event_historyEv>
 810c892:	8d 55 d8             	lea    -0x28(%ebp),%edx
 810c895:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810c899:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c89d:	89 14 24             	mov    %edx,(%esp)
 810c8a0:	e8 99 50 00 00       	call   811193e <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 810c8a5:	83 ec 04             	sub    $0x4,%esp
 810c8a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c8ab:	89 04 24             	mov    %eax,(%esp)
 810c8ae:	e8 3d 0c 58 00       	call   868d4f0 <_ZN5CUser24get_ingame_event_historyEv>
 810c8b3:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 810c8b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c8ba:	89 14 24             	mov    %edx,(%esp)
 810c8bd:	e8 a8 50 00 00       	call   811196a <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 810c8c2:	83 ec 04             	sub    $0x4,%esp
 810c8c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810c8c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c8cc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c8cf:	89 04 24             	mov    %eax,(%esp)
 810c8d2:	e8 b9 50 00 00       	call   8111990 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEneERKS4_>
 810c8d7:	84 c0                	test   %al,%al
 810c8d9:	74 48                	je     810c923 <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser+0xf5>
 810c8db:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c8de:	89 04 24             	mov    %eax,(%esp)
 810c8e1:	e8 be 50 00 00       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 810c8e6:	8b 78 08             	mov    0x8(%eax),%edi
 810c8e9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c8ec:	89 04 24             	mov    %eax,(%esp)
 810c8ef:	e8 b0 50 00 00       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 810c8f4:	8b 70 04             	mov    0x4(%eax),%esi
 810c8f7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810c8fa:	89 04 24             	mov    %eax,(%esp)
 810c8fd:	e8 2e 50 00 00       	call   8111930 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKibEEptEv>
 810c902:	8b 18                	mov    (%eax),%ebx
 810c904:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c907:	89 04 24             	mov    %eax,(%esp)
 810c90a:	e8 5f da fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810c90f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 810c913:	89 74 24 08          	mov    %esi,0x8(%esp)
 810c917:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810c91b:	89 04 24             	mov    %eax,(%esp)
 810c91e:	e8 a1 81 33 00       	call   8444ac4 <_ZN27DB_UpdateInGameEventHistory11makeRequestEjiii>
 810c923:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810c926:	89 04 24             	mov    %eax,(%esp)
 810c929:	e8 84 50 00 00       	call   81119b2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKibEEppEv>
 810c92e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c931:	89 04 24             	mov    %eax,(%esp)
 810c934:	e8 c5 0b 58 00       	call   868d4fe <_ZN5CUser31get_ingame_event_history_updateEv>
 810c939:	8d 55 e0             	lea    -0x20(%ebp),%edx
 810c93c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c940:	89 14 24             	mov    %edx,(%esp)
 810c943:	e8 ae 4f 00 00       	call   81118f6 <_ZNKSt3mapIibSt4lessIiESaISt4pairIKibEEE3endEv>
 810c948:	83 ec 04             	sub    $0x4,%esp
 810c94b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810c94e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c952:	8d 45 dc             	lea    -0x24(%ebp),%eax
 810c955:	89 04 24             	mov    %eax,(%esp)
 810c958:	e8 bf 4f 00 00       	call   811191c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKibEEneERKS3_>
 810c95d:	84 c0                	test   %al,%al
 810c95f:	0f 85 fe fe ff ff    	jne    810c863 <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser+0x35>
 810c965:	eb 01                	jmp    810c968 <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser+0x13a>
 810c967:	90                   	nop
 810c968:	8d 65 f4             	lea    -0xc(%ebp),%esp
 810c96b:	83 c4 00             	add    $0x0,%esp
 810c96e:	5b                   	pop    %ebx
 810c96f:	5e                   	pop    %esi
 810c970:	5f                   	pop    %edi
 810c971:	5d                   	pop    %ebp
 810c972:	c3                   	ret
 810c973:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::process_update_ingame_history @ 0x810c82e

/* EventClassify::CEventScriptMng::process_update_ingame_history(CUser*) */

void __thiscall
EventClassify::CEventScriptMng::process_update_ingame_history(CEventScriptMng *this,CUser *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  _Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> local_2c [4];
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> local_28 [4];
  map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> local_24 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_20 [16];
  
  if (param_1 != (CUser *)0x0) {
    CUser::get_ingame_event_history_update(param_1);
    std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::begin(local_28);
    while( true ) {
      CUser::get_ingame_event_history_update(param_1);
      std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::end(local_24);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28,
                         (_Rb_tree_const_iterator *)local_24);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28);
      if (*(char *)(iVar3 + 4) != '\0') {
        std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator->
                  ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28);
        CUser::get_ingame_event_history(param_1);
        std::
        map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
        ::find((int *)local_2c);
        CUser::get_ingame_event_history(param_1);
        std::
        map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
        ::end(local_20);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                          (local_2c,(_Rb_tree_const_iterator *)local_20);
        if (cVar2 != '\0') {
          iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                            (local_2c);
          iVar3 = *(int *)(iVar3 + 8);
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                            (local_2c);
          iVar4 = *(int *)(iVar4 + 4);
          piVar5 = (int *)std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator->
                                    ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28)
          ;
          iVar1 = *piVar5;
          uVar6 = CUser::get_acc_id(param_1);
          DB_UpdateInGameEventHistory::makeRequest(uVar6,iVar1,iVar4,iVar3);
        }
        std::_Rb_tree_const_iterator<std::pair<int_const,bool>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,bool>> *)local_28);
      }
    }
  }
  return;
}

```

---

## send_bring_up_item_fatigue

```asm
// === 0810c33a EventClassify::CEventScriptMng::send_bring_up_item_fatigue  [0x0810c33a-0x810c3a3] ===
 810c33a:	55                   	push   %ebp
 810c33b:	89 e5                	mov    %esp,%ebp
 810c33d:	83 ec 28             	sub    $0x28,%esp
 810c340:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 810c347:	00 
 810c348:	8b 45 08             	mov    0x8(%ebp),%eax
 810c34b:	89 04 24             	mov    %eax,(%esp)
 810c34e:	e8 e3 f6 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c353:	83 f0 01             	xor    $0x1,%eax
 810c356:	84 c0                	test   %al,%al
 810c358:	74 07                	je     810c361 <_ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri+0x27>
 810c35a:	b8 00 00 00 00       	mov    $0x0,%eax
 810c35f:	eb 41                	jmp    810c3a2 <_ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri+0x68>
 810c361:	c7 44 24 04 9b 01 00 	movl   $0x19b,0x4(%esp)
 810c368:	00 
 810c369:	8b 45 08             	mov    0x8(%ebp),%eax
 810c36c:	89 04 24             	mov    %eax,(%esp)
 810c36f:	e8 f6 f5 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c374:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c377:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c37b:	75 07                	jne    810c384 <_ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri+0x4a>
 810c37d:	b8 00 00 00 00       	mov    $0x0,%eax
 810c382:	eb 1e                	jmp    810c3a2 <_ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri+0x68>
 810c384:	8b 45 10             	mov    0x10(%ebp),%eax
 810c387:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c38b:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c38e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c392:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c395:	89 04 24             	mov    %eax,(%esp)
 810c398:	e8 e9 3f 00 00       	call   8110386 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj>
 810c39d:	b8 01 00 00 00       	mov    $0x1,%eax
 810c3a2:	c9                   	leave
 810c3a3:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::send_bring_up_item_fatigue @ 0x810c33a

/* EventClassify::CEventScriptMng::send_bring_up_item_fatigue(CUser*, int) */

undefined4 __thiscall
EventClassify::CEventScriptMng::send_bring_up_item_fatigue
          (CEventScriptMng *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  CObjectBringUp *this_00;
  
  cVar1 = is_eventing(this,0x19b);
  if (cVar1 == '\x01') {
    this_00 = (CObjectBringUp *)get_event_entity((int)this);
    if (this_00 == (CObjectBringUp *)0x0) {
      uVar2 = 0;
    }
    else {
      CObjectBringUp::sendEventItemFromFatigue(this_00,param_1,param_2);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## send_event_init_data

```asm
// === 0810c40e EventClassify::CEventScriptMng::send_event_init_data  [0x0810c40e-0x810c5d1] ===
 810c40e:	55                   	push   %ebp
 810c40f:	89 e5                	mov    %esp,%ebp
 810c411:	57                   	push   %edi
 810c412:	56                   	push   %esi
 810c413:	53                   	push   %ebx
 810c414:	83 ec 5c             	sub    $0x5c,%esp
 810c417:	8b 45 10             	mov    0x10(%ebp),%eax
 810c41a:	88 45 c4             	mov    %al,-0x3c(%ebp)
 810c41d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810c421:	0f 84 9f 01 00 00    	je     810c5c6 <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0x1b8>
 810c427:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c42a:	89 04 24             	mov    %eax,(%esp)
 810c42d:	e8 1a 19 48 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 810c432:	c7 44 24 08 76 01 00 	movl   $0x176,0x8(%esp)
 810c439:	00 
 810c43a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810c441:	00 
 810c442:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c445:	89 04 24             	mov    %eax,(%esp)
 810c448:	e8 af f4 fb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 810c44d:	8b 45 08             	mov    0x8(%ebp),%eax
 810c450:	8b 40 48             	mov    0x48(%eax),%eax
 810c453:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c457:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c45a:	89 04 24             	mov    %eax,(%esp)
 810c45d:	e8 da f4 fb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 810c462:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c465:	89 04 24             	mov    %eax,(%esp)
 810c468:	e8 df 46 00 00       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 810c46d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 810c470:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810c477:	00 
 810c478:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c47b:	89 04 24             	mov    %eax,(%esp)
 810c47e:	e8 9d f4 fb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 810c483:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 810c487:	8b 45 08             	mov    0x8(%ebp),%eax
 810c48a:	8d 50 30             	lea    0x30(%eax),%edx
 810c48d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810c490:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c494:	89 04 24             	mov    %eax,(%esp)
 810c497:	e8 0a 51 00 00       	call   81115a6 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 810c49c:	83 ec 04             	sub    $0x4,%esp
 810c49f:	8b 45 08             	mov    0x8(%ebp),%eax
 810c4a2:	8d 50 30             	lea    0x30(%eax),%edx
 810c4a5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810c4a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 810c4ac:	89 04 24             	mov    %eax,(%esp)
 810c4af:	e8 18 51 00 00       	call   81115cc <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 810c4b4:	83 ec 04             	sub    $0x4,%esp
 810c4b7:	e9 87 00 00 00       	jmp    810c543 <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0x135>
 810c4bc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810c4bf:	89 04 24             	mov    %eax,(%esp)
 810c4c2:	e8 3f 51 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810c4c7:	8b 00                	mov    (%eax),%eax
 810c4c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c4cd:	8b 45 08             	mov    0x8(%ebp),%eax
 810c4d0:	89 04 24             	mov    %eax,(%esp)
 810c4d3:	e8 5e f5 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c4d8:	84 c0                	test   %al,%al
 810c4da:	74 5c                	je     810c538 <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0x12a>
 810c4dc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810c4df:	89 04 24             	mov    %eax,(%esp)
 810c4e2:	e8 1f 51 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810c4e7:	8b 58 04             	mov    0x4(%eax),%ebx
 810c4ea:	8b 03                	mov    (%ebx),%eax
 810c4ec:	83 c0 1c             	add    $0x1c,%eax
 810c4ef:	8b 00                	mov    (%eax),%eax
 810c4f1:	89 45 c0             	mov    %eax,-0x40(%ebp)
 810c4f4:	0f b6 7d c4          	movzbl -0x3c(%ebp),%edi
 810c4f8:	8b 45 08             	mov    0x8(%ebp),%eax
 810c4fb:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 810c4ff:	0f b6 f0             	movzbl %al,%esi
 810c502:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810c505:	89 04 24             	mov    %eax,(%esp)
 810c508:	e8 f9 50 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810c50d:	8b 00                	mov    (%eax),%eax
 810c50f:	98                   	cwtl
 810c510:	89 7c 24 14          	mov    %edi,0x14(%esp)
 810c514:	89 74 24 10          	mov    %esi,0x10(%esp)
 810c518:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810c51c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c51f:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c523:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c526:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c52a:	89 1c 24             	mov    %ebx,(%esp)
 810c52d:	ff 55 c0             	call   *-0x40(%ebp)
 810c530:	84 c0                	test   %al,%al
 810c532:	74 04                	je     810c538 <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0x12a>
 810c534:	80 45 e7 01          	addb   $0x1,-0x19(%ebp)
 810c538:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810c53b:	89 04 24             	mov    %eax,(%esp)
 810c53e:	e8 d1 50 00 00       	call   8111614 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEppEv>
 810c543:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810c546:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c54a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 810c54d:	89 04 24             	mov    %eax,(%esp)
 810c550:	e8 9d 50 00 00       	call   81115f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEneERKS6_>
 810c555:	84 c0                	test   %al,%al
 810c557:	0f 85 5f ff ff ff    	jne    810c4bc <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0xae>
 810c55d:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 810c561:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c565:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 810c568:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c56c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c56f:	89 04 24             	mov    %eax,(%esp)
 810c572:	e8 b1 45 00 00       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 810c577:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810c57e:	00 
 810c57f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c582:	89 04 24             	mov    %eax,(%esp)
 810c585:	e8 ce f3 fb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 810c58a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c58d:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c591:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c594:	89 04 24             	mov    %eax,(%esp)
 810c597:	e8 1e c0 53 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 810c59c:	eb 1b                	jmp    810c5b9 <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0x1ab>
 810c59e:	89 d3                	mov    %edx,%ebx
 810c5a0:	89 c6                	mov    %eax,%esi
 810c5a2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c5a5:	89 04 24             	mov    %eax,(%esp)
 810c5a8:	e8 d3 18 48 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 810c5ad:	89 f0                	mov    %esi,%eax
 810c5af:	89 da                	mov    %ebx,%edx
 810c5b1:	89 04 24             	mov    %eax,(%esp)
 810c5b4:	e8 97 71 9d 00       	call   8ae3750 <_Unwind_Resume>
 810c5b9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810c5bc:	89 04 24             	mov    %eax,(%esp)
 810c5bf:	e8 bc 18 48 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 810c5c4:	eb 01                	jmp    810c5c7 <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb+0x1b9>
 810c5c6:	90                   	nop
 810c5c7:	8d 65 f4             	lea    -0xc(%ebp),%esp
 810c5ca:	83 c4 00             	add    $0x0,%esp
 810c5cd:	5b                   	pop    %ebx
 810c5ce:	5e                   	pop    %esi
 810c5cf:	5f                   	pop    %edi
 810c5d0:	5d                   	pop    %ebp
 810c5d1:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::send_event_init_data @ 0x810c40e

/* EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool) */

void __thiscall
EventClassify::CEventScriptMng::send_event_init_data
          (CEventScriptMng *this,CUser *param_1,bool param_2)

{
  CEventScriptMng CVar1;
  code *pcVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_38 [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_34 [4];
  int local_30;
  PacketGuard local_2c [15];
  byte local_1d;
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0810c448 to 0810c59b has its CatchHandler @ 0810c59e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x176);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(this + 0x48));
    local_30 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
    local_1d = 0;
    std::
    map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
    ::begin(local_34);
    std::
    map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
    ::end(local_38);
    while( true ) {
      cVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                         local_34,(_Rb_tree_iterator *)local_38);
      if (cVar3 == '\0') break;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
                      operator->((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>
                                  *)local_34);
      cVar3 = is_eventing(this,*piVar4);
      if (cVar3 != '\0') {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
                operator->((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                           local_34);
        piVar4 = *(int **)(iVar5 + 4);
        pcVar2 = *(code **)(*piVar4 + 0x1c);
        CVar1 = this[0x4c];
        puVar6 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::
                 operator->((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                            local_34);
        cVar3 = (*pcVar2)(piVar4,param_1,local_2c,(int)(short)*puVar6,CVar1,param_2);
        if (cVar3 != '\0') {
          local_1d = local_1d + 1;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)local_34);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,&local_30,(uint)local_1d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  return;
}

```

---

## send_event_init_record_data

```asm
// === 0810cb2c EventClassify::CEventScriptMng::send_event_init_record_data  [0x0810cb2c-0x810cc6f] ===
 810cb2c:	55                   	push   %ebp
 810cb2d:	89 e5                	mov    %esp,%ebp
 810cb2f:	56                   	push   %esi
 810cb30:	53                   	push   %ebx
 810cb31:	83 ec 30             	sub    $0x30,%esp
 810cb34:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810cb38:	0f 84 27 01 00 00    	je     810cc65 <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser+0x139>
 810cb3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810cb41:	89 04 24             	mov    %eax,(%esp)
 810cb44:	e8 a7 09 58 00       	call   868d4f0 <_ZN5CUser24get_ingame_event_historyEv>
 810cb49:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810cb4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cb4f:	89 04 24             	mov    %eax,(%esp)
 810cb52:	e8 f5 11 48 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 810cb57:	c7 44 24 08 77 01 00 	movl   $0x177,0x8(%esp)
 810cb5e:	00 
 810cb5f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810cb66:	00 
 810cb67:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cb6a:	89 04 24             	mov    %eax,(%esp)
 810cb6d:	e8 8a ed fb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 810cb72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810cb75:	89 04 24             	mov    %eax,(%esp)
 810cb78:	e8 53 4e 00 00       	call   81119d0 <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4sizeEv>
 810cb7d:	0f be c0             	movsbl %al,%eax
 810cb80:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cb84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cb87:	89 04 24             	mov    %eax,(%esp)
 810cb8a:	e8 91 ed fb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 810cb8f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810cb92:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810cb95:	89 54 24 04          	mov    %edx,0x4(%esp)
 810cb99:	89 04 24             	mov    %eax,(%esp)
 810cb9c:	e8 43 4e 00 00       	call   81119e4 <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE5beginEv>
 810cba1:	83 ec 04             	sub    $0x4,%esp
 810cba4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810cba7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810cbaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 810cbae:	89 04 24             	mov    %eax,(%esp)
 810cbb1:	e8 b4 4d 00 00       	call   811196a <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 810cbb6:	83 ec 04             	sub    $0x4,%esp
 810cbb9:	eb 45                	jmp    810cc00 <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser+0xd4>
 810cbbb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810cbbe:	89 04 24             	mov    %eax,(%esp)
 810cbc1:	e8 de 4d 00 00       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 810cbc6:	8b 00                	mov    (%eax),%eax
 810cbc8:	98                   	cwtl
 810cbc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cbcd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cbd0:	89 04 24             	mov    %eax,(%esp)
 810cbd3:	e8 cc d2 fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 810cbd8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810cbdb:	89 04 24             	mov    %eax,(%esp)
 810cbde:	e8 c1 4d 00 00       	call   81119a4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEptEv>
 810cbe3:	8b 40 04             	mov    0x4(%eax),%eax
 810cbe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cbea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cbed:	89 04 24             	mov    %eax,(%esp)
 810cbf0:	e8 47 ed fb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 810cbf5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810cbf8:	89 04 24             	mov    %eax,(%esp)
 810cbfb:	e8 0a 4e 00 00       	call   8111a0a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEppEv>
 810cc00:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810cc03:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cc07:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810cc0a:	89 04 24             	mov    %eax,(%esp)
 810cc0d:	e8 7e 4d 00 00       	call   8111990 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiS0_IiiEEEneERKS4_>
 810cc12:	84 c0                	test   %al,%al
 810cc14:	75 a5                	jne    810cbbb <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser+0x8f>
 810cc16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810cc1d:	00 
 810cc1e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cc21:	89 04 24             	mov    %eax,(%esp)
 810cc24:	e8 2f ed fb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 810cc29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cc2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cc30:	8b 45 0c             	mov    0xc(%ebp),%eax
 810cc33:	89 04 24             	mov    %eax,(%esp)
 810cc36:	e8 7f b9 53 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 810cc3b:	eb 1b                	jmp    810cc58 <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser+0x12c>
 810cc3d:	89 d3                	mov    %edx,%ebx
 810cc3f:	89 c6                	mov    %eax,%esi
 810cc41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cc44:	89 04 24             	mov    %eax,(%esp)
 810cc47:	e8 34 12 48 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 810cc4c:	89 f0                	mov    %esi,%eax
 810cc4e:	89 da                	mov    %ebx,%edx
 810cc50:	89 04 24             	mov    %eax,(%esp)
 810cc53:	e8 f8 6a 9d 00       	call   8ae3750 <_Unwind_Resume>
 810cc58:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cc5b:	89 04 24             	mov    %eax,(%esp)
 810cc5e:	e8 1d 12 48 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 810cc63:	eb 01                	jmp    810cc66 <_ZN13EventClassify15CEventScriptMng27send_event_init_record_dataEP5CUser+0x13a>
 810cc65:	90                   	nop
 810cc66:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810cc69:	83 c4 00             	add    $0x0,%esp
 810cc6c:	5b                   	pop    %ebx
 810cc6d:	5e                   	pop    %esi
 810cc6e:	5d                   	pop    %ebp
 810cc6f:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::send_event_init_record_data @ 0x810cb2c

/* EventClassify::CEventScriptMng::send_event_init_record_data(CUser*) */

void __thiscall
EventClassify::CEventScriptMng::send_event_init_record_data(CEventScriptMng *this,CUser *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_24 [4];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_20 [4];
  PacketGuard local_1c [12];
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_10 = (map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                *)CUser::get_ingame_event_history(param_1);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0810cb6d to 0810cc3a has its CatchHandler @ 0810cc3d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x177);
    cVar1 = std::
            map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
            ::size(local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::begin(local_20);
    std::
    map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
    ::end(local_24);
    while( true ) {
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)
                         local_20,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                         ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)
                          local_20);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)(short)*puVar2);
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)
                         local_20);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar3 + 4));
      std::_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>>::operator++
                ((_Rb_tree_const_iterator<std::pair<int_const,std::pair<int,int>>> *)local_20);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

---

## send_gift_fatigue_item

```asm
// === 0810c1ea EventClassify::CEventScriptMng::send_gift_fatigue_item  [0x0810c1ea-0x810c26f] ===
 810c1ea:	55                   	push   %ebp
 810c1eb:	89 e5                	mov    %esp,%ebp
 810c1ed:	83 ec 28             	sub    $0x28,%esp
 810c1f0:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 810c1f7:	00 
 810c1f8:	8b 45 08             	mov    0x8(%ebp),%eax
 810c1fb:	89 04 24             	mov    %eax,(%esp)
 810c1fe:	e8 33 f8 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c203:	83 f0 01             	xor    $0x1,%eax
 810c206:	84 c0                	test   %al,%al
 810c208:	75 5f                	jne    810c269 <_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj+0x7f>
 810c20a:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 810c211:	00 
 810c212:	8b 45 08             	mov    0x8(%ebp),%eax
 810c215:	89 04 24             	mov    %eax,(%esp)
 810c218:	e8 4d f7 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c21d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c220:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c224:	74 46                	je     810c26c <_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj+0x82>
 810c226:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c229:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c22d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c230:	89 04 24             	mov    %eax,(%esp)
 810c233:	e8 1e 45 00 00       	call   8110756 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser>
 810c238:	84 c0                	test   %al,%al
 810c23a:	74 31                	je     810c26d <_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj+0x83>
 810c23c:	8b 45 10             	mov    0x10(%ebp),%eax
 810c23f:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c243:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c246:	89 04 24             	mov    %eax,(%esp)
 810c249:	e8 ec 4b 00 00       	call   8110e3a <_ZN5CUser35IncCurCharacUsedGiftFatigueQuantityEj>
 810c24e:	8b 45 10             	mov    0x10(%ebp),%eax
 810c251:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c255:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c258:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c25c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c25f:	89 04 24             	mov    %eax,(%esp)
 810c262:	e8 8f 43 00 00       	call   81105f6 <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj>
 810c267:	eb 04                	jmp    810c26d <_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj+0x83>
 810c269:	90                   	nop
 810c26a:	eb 01                	jmp    810c26d <_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj+0x83>
 810c26c:	90                   	nop
 810c26d:	c9                   	leave
 810c26e:	c3                   	ret
 810c26f:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::send_gift_fatigue_item @ 0x810c1ea

/* EventClassify::CEventScriptMng::send_gift_fatigue_item(CUser*, unsigned int) */

void __thiscall
EventClassify::CEventScriptMng::send_gift_fatigue_item
          (CEventScriptMng *this,CUser *param_1,uint param_2)

{
  char cVar1;
  CUsedFatigueGiveItem *this_00;
  
  cVar1 = is_eventing(this,0x65);
  if (((cVar1 == '\x01') &&
      (this_00 = (CUsedFatigueGiveItem *)get_event_entity((int)this),
      this_00 != (CUsedFatigueGiveItem *)0x0)) &&
     (cVar1 = CUsedFatigueGiveItem::verifyApplyUser(this_00,param_1), cVar1 != '\0')) {
    CUser::IncCurCharacUsedGiftFatigueQuantity(param_1,param_2);
    CUsedFatigueGiveItem::sendEventItemFromFatigue(this_00,param_1,param_2);
  }
  return;
}

```

---

## send_pc_room_play_init_time

```asm
// === 0810c3a4 EventClassify::CEventScriptMng::send_pc_room_play_init_time  [0x0810c3a4-0x810c40d] ===
 810c3a4:	55                   	push   %ebp
 810c3a5:	89 e5                	mov    %esp,%ebp
 810c3a7:	83 ec 28             	sub    $0x28,%esp
 810c3aa:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 810c3b1:	00 
 810c3b2:	8b 45 08             	mov    0x8(%ebp),%eax
 810c3b5:	89 04 24             	mov    %eax,(%esp)
 810c3b8:	e8 79 f6 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c3bd:	83 f0 01             	xor    $0x1,%eax
 810c3c0:	84 c0                	test   %al,%al
 810c3c2:	75 44                	jne    810c408 <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser+0x64>
 810c3c4:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 810c3cb:	00 
 810c3cc:	8b 45 08             	mov    0x8(%ebp),%eax
 810c3cf:	89 04 24             	mov    %eax,(%esp)
 810c3d2:	e8 93 f5 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c3d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c3da:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c3de:	74 2b                	je     810c40b <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser+0x67>
 810c3e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c3e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c3e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c3ea:	89 04 24             	mov    %eax,(%esp)
 810c3ed:	e8 46 46 00 00       	call   8110a38 <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser>
 810c3f2:	85 c0                	test   %eax,%eax
 810c3f4:	0f 94 c0             	sete   %al
 810c3f7:	84 c0                	test   %al,%al
 810c3f9:	74 11                	je     810c40c <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser+0x68>
 810c3fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c3fe:	89 04 24             	mov    %eax,(%esp)
 810c401:	e8 36 34 58 00       	call   868f83c <_ZN5CUser22sendNotiPcRoomPlayTimeEv>
 810c406:	eb 04                	jmp    810c40c <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser+0x68>
 810c408:	90                   	nop
 810c409:	eb 01                	jmp    810c40c <_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser+0x68>
 810c40b:	90                   	nop
 810c40c:	c9                   	leave
 810c40d:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::send_pc_room_play_init_time @ 0x810c3a4

/* EventClassify::CEventScriptMng::send_pc_room_play_init_time(CUser*) */

void __thiscall
EventClassify::CEventScriptMng::send_pc_room_play_init_time(CEventScriptMng *this,CUser *param_1)

{
  char cVar1;
  CPcRoomPlayTime *this_00;
  int iVar2;
  
  cVar1 = is_eventing(this,0x5c);
  if (((cVar1 == '\x01') &&
      (this_00 = (CPcRoomPlayTime *)get_event_entity((int)this), this_00 != (CPcRoomPlayTime *)0x0))
     && (iVar2 = CPcRoomPlayTime::verifyUserPcRoomPlayEvent(this_00,param_1), iVar2 == 0)) {
    CUser::sendNotiPcRoomPlayTime(param_1);
  }
  return;
}

```

---

## send_purchase_bonus_mail

```asm
// === 0810c2d4 EventClassify::CEventScriptMng::send_purchase_bonus_mail  [0x0810c2d4-0x810c339] ===
 810c2d4:	55                   	push   %ebp
 810c2d5:	89 e5                	mov    %esp,%ebp
 810c2d7:	83 ec 28             	sub    $0x28,%esp
 810c2da:	c7 44 24 04 9a 01 00 	movl   $0x19a,0x4(%esp)
 810c2e1:	00 
 810c2e2:	8b 45 08             	mov    0x8(%ebp),%eax
 810c2e5:	89 04 24             	mov    %eax,(%esp)
 810c2e8:	e8 49 f7 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c2ed:	83 f0 01             	xor    $0x1,%eax
 810c2f0:	84 c0                	test   %al,%al
 810c2f2:	74 07                	je     810c2fb <_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj+0x27>
 810c2f4:	b8 00 00 00 00       	mov    $0x0,%eax
 810c2f9:	eb 3c                	jmp    810c337 <_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj+0x63>
 810c2fb:	c7 44 24 04 9a 01 00 	movl   $0x19a,0x4(%esp)
 810c302:	00 
 810c303:	8b 45 08             	mov    0x8(%ebp),%eax
 810c306:	89 04 24             	mov    %eax,(%esp)
 810c309:	e8 5c f6 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c30e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c311:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c315:	75 07                	jne    810c31e <_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj+0x4a>
 810c317:	b8 00 00 00 00       	mov    $0x0,%eax
 810c31c:	eb 19                	jmp    810c337 <_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj+0x63>
 810c31e:	8b 45 10             	mov    0x10(%ebp),%eax
 810c321:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c325:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c328:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c32c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c32f:	89 04 24             	mov    %eax,(%esp)
 810c332:	e8 fd 37 00 00       	call   810fb34 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri>
 810c337:	c9                   	leave
 810c338:	c3                   	ret
 810c339:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::send_purchase_bonus_mail @ 0x810c2d4

/* EventClassify::CEventScriptMng::send_purchase_bonus_mail(CUser*, unsigned int) */

undefined4 __thiscall
EventClassify::CEventScriptMng::send_purchase_bonus_mail
          (CEventScriptMng *this,CUser *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  CPurchaseCashItemBonus *this_00;
  
  cVar1 = is_eventing(this,0x19a);
  if (cVar1 == '\x01') {
    this_00 = (CPurchaseCashItemBonus *)get_event_entity((int)this);
    if (this_00 == (CPurchaseCashItemBonus *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CPurchaseCashItemBonus::sendPurchaseBonusReward(this_00,param_1,param_2);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## test_process_change_day

```asm
// === 0810cc70 EventClassify::CEventScriptMng::test_process_change_day  [0x0810cc70-0x810cdaf] ===
 810cc70:	55                   	push   %ebp
 810cc71:	89 e5                	mov    %esp,%ebp
 810cc73:	53                   	push   %ebx
 810cc74:	83 ec 24             	sub    $0x24,%esp
 810cc77:	81 7d 0c af da 32 01 	cmpl   $0x132daaf,0xc(%ebp)
 810cc7e:	0f 8e 25 01 00 00    	jle    810cda9 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x139>
 810cc84:	8b 45 08             	mov    0x8(%ebp),%eax
 810cc87:	8b 55 0c             	mov    0xc(%ebp),%edx
 810cc8a:	89 50 48             	mov    %edx,0x48(%eax)
 810cc8d:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 810cc90:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 810cc95:	89 c8                	mov    %ecx,%eax
 810cc97:	f7 ea                	imul   %edx
 810cc99:	c1 fa 05             	sar    $0x5,%edx
 810cc9c:	89 c8                	mov    %ecx,%eax
 810cc9e:	c1 f8 1f             	sar    $0x1f,%eax
 810cca1:	89 d3                	mov    %edx,%ebx
 810cca3:	29 c3                	sub    %eax,%ebx
 810cca5:	89 d8                	mov    %ebx,%eax
 810cca7:	6b c0 64             	imul   $0x64,%eax,%eax
 810ccaa:	89 ca                	mov    %ecx,%edx
 810ccac:	29 c2                	sub    %eax,%edx
 810ccae:	89 d0                	mov    %edx,%eax
 810ccb0:	89 c2                	mov    %eax,%edx
 810ccb2:	8b 45 08             	mov    0x8(%ebp),%eax
 810ccb5:	88 50 4c             	mov    %dl,0x4c(%eax)
 810ccb8:	e8 ea d6 fc ff       	call   80da3a7 <_Z11G_GameWorldv>
 810ccbd:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 810ccc3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ccc6:	89 54 24 04          	mov    %edx,0x4(%esp)
 810ccca:	89 04 24             	mov    %eax,(%esp)
 810cccd:	e8 d4 ab fe ff       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 810ccd2:	83 ec 04             	sub    $0x4,%esp
 810ccd5:	e9 96 00 00 00       	jmp    810cd70 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x100>
 810ccda:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ccdd:	89 04 24             	mov    %eax,(%esp)
 810cce0:	e8 5f ac fe ff       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 810cce5:	8b 40 04             	mov    0x4(%eax),%eax
 810cce8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810cceb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810ccef:	74 17                	je     810cd08 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x98>
 810ccf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810ccf4:	89 04 24             	mov    %eax,(%esp)
 810ccf7:	e8 90 d6 fc ff       	call   80da38c <_ZN5CUser9get_stateEv>
 810ccfc:	83 f8 02             	cmp    $0x2,%eax
 810ccff:	7e 07                	jle    810cd08 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x98>
 810cd01:	b8 01 00 00 00       	mov    $0x1,%eax
 810cd06:	eb 05                	jmp    810cd0d <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x9d>
 810cd08:	b8 00 00 00 00       	mov    $0x0,%eax
 810cd0d:	84 c0                	test   %al,%al
 810cd0f:	74 42                	je     810cd53 <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0xe3>
 810cd11:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810cd18:	00 
 810cd19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810cd1c:	89 04 24             	mov    %eax,(%esp)
 810cd1f:	e8 b6 ad 54 00       	call   8657ada <_ZN5CUser14RecoverFatigueEi>
 810cd24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810cd27:	89 04 24             	mov    %eax,(%esp)
 810cd2a:	e8 11 98 54 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 810cd2f:	e8 67 f4 fb ff       	call   80cc19b <_Z14G_CDataManagerv>
 810cd34:	89 04 24             	mov    %eax,(%esp)
 810cd37:	e8 26 3e 00 00       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 810cd3c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 810cd43:	00 
 810cd44:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810cd47:	89 54 24 04          	mov    %edx,0x4(%esp)
 810cd4b:	89 04 24             	mov    %eax,(%esp)
 810cd4e:	e8 bb f6 ff ff       	call   810c40e <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb>
 810cd53:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810cd56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 810cd5d:	00 
 810cd5e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 810cd61:	89 54 24 04          	mov    %edx,0x4(%esp)
 810cd65:	89 04 24             	mov    %eax,(%esp)
 810cd68:	e8 99 ab fe ff       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 810cd6d:	83 ec 04             	sub    $0x4,%esp
 810cd70:	e8 32 d6 fc ff       	call   80da3a7 <_Z11G_GameWorldv>
 810cd75:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 810cd7b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810cd7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 810cd82:	89 04 24             	mov    %eax,(%esp)
 810cd85:	e8 42 ab fe ff       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 810cd8a:	83 ec 04             	sub    $0x4,%esp
 810cd8d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810cd90:	89 44 24 04          	mov    %eax,0x4(%esp)
 810cd94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810cd97:	89 04 24             	mov    %eax,(%esp)
 810cd9a:	e8 53 ab fe ff       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 810cd9f:	84 c0                	test   %al,%al
 810cda1:	0f 85 33 ff ff ff    	jne    810ccda <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x6a>
 810cda7:	eb 01                	jmp    810cdaa <_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi+0x13a>
 810cda9:	90                   	nop
 810cdaa:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 810cdad:	c9                   	leave
 810cdae:	c3                   	ret
 810cdaf:	90                   	nop

```

```c
// EventClassify::CEventScriptMng::test_process_change_day @ 0x810cc70

/* EventClassify::CEventScriptMng::test_process_change_day(int) */

void __thiscall
EventClassify::CEventScriptMng::test_process_change_day(CEventScriptMng *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  if (0x132daaf < param_1) {
    *(int *)(this + 0x48) = param_1;
    this[0x4c] = (CEventScriptMng)((char)param_1 + (char)(param_1 / 100) * -100);
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_1c);
    while( true ) {
      G_GameWorld();
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_18);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
      local_10 = *(CUser **)(iVar3 + 4);
      if ((local_10 == (CUser *)0x0) || (iVar3 = CUser::get_state(local_10), iVar3 < 3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::RecoverFatigue(local_10,0);
        CUser::SendFatigue(local_10);
        this_00 = (CDataManager *)G_CDataManager();
        this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
        send_event_init_data(this_01,local_10,true);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return;
}

```

---

## update_purchase_target_item_count

```asm
// === 0810c270 EventClassify::CEventScriptMng::update_purchase_target_item_count  [0x0810c270-0x810c2d3] ===
 810c270:	55                   	push   %ebp
 810c271:	89 e5                	mov    %esp,%ebp
 810c273:	83 ec 28             	sub    $0x28,%esp
 810c276:	c7 44 24 04 9a 01 00 	movl   $0x19a,0x4(%esp)
 810c27d:	00 
 810c27e:	8b 45 08             	mov    0x8(%ebp),%eax
 810c281:	89 04 24             	mov    %eax,(%esp)
 810c284:	e8 ad f7 ff ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 810c289:	83 f0 01             	xor    $0x1,%eax
 810c28c:	84 c0                	test   %al,%al
 810c28e:	75 3e                	jne    810c2ce <_ZN13EventClassify15CEventScriptMng33update_purchase_target_item_countEP5CUserjP22stCeraShopIPGRequest_t+0x5e>
 810c290:	c7 44 24 04 9a 01 00 	movl   $0x19a,0x4(%esp)
 810c297:	00 
 810c298:	8b 45 08             	mov    0x8(%ebp),%eax
 810c29b:	89 04 24             	mov    %eax,(%esp)
 810c29e:	e8 c7 f6 ff ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 810c2a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810c2a6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810c2aa:	74 25                	je     810c2d1 <_ZN13EventClassify15CEventScriptMng33update_purchase_target_item_countEP5CUserjP22stCeraShopIPGRequest_t+0x61>
 810c2ac:	8b 45 14             	mov    0x14(%ebp),%eax
 810c2af:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810c2b3:	8b 45 10             	mov    0x10(%ebp),%eax
 810c2b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 810c2ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 810c2bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c2c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810c2c4:	89 04 24             	mov    %eax,(%esp)
 810c2c7:	e8 02 37 00 00       	call   810f9ce <_ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t>
 810c2cc:	eb 04                	jmp    810c2d2 <_ZN13EventClassify15CEventScriptMng33update_purchase_target_item_countEP5CUserjP22stCeraShopIPGRequest_t+0x62>
 810c2ce:	90                   	nop
 810c2cf:	eb 01                	jmp    810c2d2 <_ZN13EventClassify15CEventScriptMng33update_purchase_target_item_countEP5CUserjP22stCeraShopIPGRequest_t+0x62>
 810c2d1:	90                   	nop
 810c2d2:	c9                   	leave
 810c2d3:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::update_purchase_target_item_count @ 0x810c270

/* EventClassify::CEventScriptMng::update_purchase_target_item_count(CUser*, unsigned int,
   stCeraShopIPGRequest_t*) */

void __thiscall
EventClassify::CEventScriptMng::update_purchase_target_item_count
          (CEventScriptMng *this,CUser *param_1,uint param_2,stCeraShopIPGRequest_t *param_3)

{
  char cVar1;
  CPurchaseCashItemBonus *this_00;
  
  cVar1 = is_eventing(this,0x19a);
  if ((cVar1 == '\x01') &&
     (this_00 = (CPurchaseCashItemBonus *)get_event_entity((int)this),
     this_00 != (CPurchaseCashItemBonus *)0x0)) {
    CPurchaseCashItemBonus::updateTargetGoodsCount(this_00,param_1,param_2,param_3);
  }
  return;
}

```

---

## update_time_values

```asm
// === 0810c5d2 EventClassify::CEventScriptMng::update_time_values  [0x0810c5d2-0x810c6c9] ===
 810c5d2:	55                   	push   %ebp
 810c5d3:	89 e5                	mov    %esp,%ebp
 810c5d5:	81 ec 88 00 00 00    	sub    $0x88,%esp
 810c5db:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 810c5e2:	e8 b7 f6 fb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 810c5e7:	89 45 e8             	mov    %eax,-0x18(%ebp)
 810c5ea:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 810c5f1:	e8 a8 f6 fb ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 810c5f6:	2d 80 51 01 00       	sub    $0x15180,%eax
 810c5fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 810c5fe:	8d 45 b8             	lea    -0x48(%ebp),%eax
 810c601:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c605:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810c608:	89 04 24             	mov    %eax,(%esp)
 810c60b:	e8 50 1d f7 ff       	call   807e360 <localtime_r@plt>
 810c610:	89 45 ec             	mov    %eax,-0x14(%ebp)
 810c613:	8d 45 8c             	lea    -0x74(%ebp),%eax
 810c616:	89 44 24 04          	mov    %eax,0x4(%esp)
 810c61a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810c61d:	89 04 24             	mov    %eax,(%esp)
 810c620:	e8 3b 1d f7 ff       	call   807e360 <localtime_r@plt>
 810c625:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810c628:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810c62f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810c632:	8b 40 08             	mov    0x8(%eax),%eax
 810c635:	85 c0                	test   %eax,%eax
 810c637:	78 4e                	js     810c687 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi+0xb5>
 810c639:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810c63c:	8b 40 08             	mov    0x8(%eax),%eax
 810c63f:	3b 45 0c             	cmp    0xc(%ebp),%eax
 810c642:	7d 43                	jge    810c687 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi+0xb5>
 810c644:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810c647:	8b 40 0c             	mov    0xc(%eax),%eax
 810c64a:	89 c2                	mov    %eax,%edx
 810c64c:	8b 45 08             	mov    0x8(%ebp),%eax
 810c64f:	88 50 4c             	mov    %dl,0x4c(%eax)
 810c652:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810c655:	8b 40 14             	mov    0x14(%eax),%eax
 810c658:	69 d0 10 27 00 00    	imul   $0x2710,%eax,%edx
 810c65e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 810c661:	8b 40 10             	mov    0x10(%eax),%eax
 810c664:	83 c0 01             	add    $0x1,%eax
 810c667:	6b c0 64             	imul   $0x64,%eax,%eax
 810c66a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 810c66d:	8d 90 c0 ea 21 01    	lea    0x121eac0(%eax),%edx
 810c673:	8b 45 08             	mov    0x8(%ebp),%eax
 810c676:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 810c67a:	0f b6 c0             	movzbl %al,%eax
 810c67d:	01 c2                	add    %eax,%edx
 810c67f:	8b 45 08             	mov    0x8(%ebp),%eax
 810c682:	89 50 48             	mov    %edx,0x48(%eax)
 810c685:	eb 41                	jmp    810c6c8 <_ZN13EventClassify15CEventScriptMng18update_time_valuesEi+0xf6>
 810c687:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810c68a:	8b 40 0c             	mov    0xc(%eax),%eax
 810c68d:	89 c2                	mov    %eax,%edx
 810c68f:	8b 45 08             	mov    0x8(%ebp),%eax
 810c692:	88 50 4c             	mov    %dl,0x4c(%eax)
 810c695:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810c698:	8b 40 14             	mov    0x14(%eax),%eax
 810c69b:	69 d0 10 27 00 00    	imul   $0x2710,%eax,%edx
 810c6a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 810c6a4:	8b 40 10             	mov    0x10(%eax),%eax
 810c6a7:	83 c0 01             	add    $0x1,%eax
 810c6aa:	6b c0 64             	imul   $0x64,%eax,%eax
 810c6ad:	8d 04 02             	lea    (%edx,%eax,1),%eax
 810c6b0:	8d 90 c0 ea 21 01    	lea    0x121eac0(%eax),%edx
 810c6b6:	8b 45 08             	mov    0x8(%ebp),%eax
 810c6b9:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 810c6bd:	0f b6 c0             	movzbl %al,%eax
 810c6c0:	01 c2                	add    %eax,%edx
 810c6c2:	8b 45 08             	mov    0x8(%ebp),%eax
 810c6c5:	89 50 48             	mov    %edx,0x48(%eax)
 810c6c8:	c9                   	leave
 810c6c9:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::update_time_values @ 0x810c5d2

/* EventClassify::CEventScriptMng::update_time_values(int) */

void __thiscall
EventClassify::CEventScriptMng::update_time_values(CEventScriptMng *this,int param_1)

{
  tm *ptVar1;
  tm local_78;
  tm local_4c;
  int local_20;
  time_t local_1c;
  tm *local_18;
  
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = local_20 + -0x15180;
  local_18 = localtime_r(&local_1c,&local_4c);
  ptVar1 = localtime_r(&local_20,&local_78);
  if ((local_18->tm_hour < 0) || (param_1 <= local_18->tm_hour)) {
    this[0x4c] = SUB41(local_18->tm_mday,0);
    *(uint *)(this + 0x48) =
         local_18->tm_year * 10000 + (local_18->tm_mon + 1) * 100 + 19000000 +
         (uint)(byte)this[0x4c];
  }
  else {
    this[0x4c] = SUB41(ptVar1->tm_mday,0);
    *(uint *)(this + 0x48) =
         ptVar1->tm_year * 10000 + (ptVar1->tm_mon + 1) * 100 + 19000000 + (uint)(byte)this[0x4c];
  }
  return;
}

```

---

## ~CEventScriptMng

```asm
// === 0810b218 EventClassify::CEventScriptMng::~CEventScriptMng  [0x0810b218-0x810b401] ===
 810b218:	55                   	push   %ebp
 810b219:	89 e5                	mov    %esp,%ebp
 810b21b:	56                   	push   %esi
 810b21c:	53                   	push   %ebx
 810b21d:	83 ec 20             	sub    $0x20,%esp
 810b220:	8b 45 08             	mov    0x8(%ebp),%eax
 810b223:	8d 50 18             	lea    0x18(%eax),%edx
 810b226:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b229:	89 54 24 04          	mov    %edx,0x4(%esp)
 810b22d:	89 04 24             	mov    %eax,(%esp)
 810b230:	e8 e5 62 00 00       	call   811151a <_ZNSt3mapISsP17InGameEventScriptSt4lessISsESaISt4pairIKSsS1_EEE5beginEv>
 810b235:	83 ec 04             	sub    $0x4,%esp
 810b238:	8b 45 08             	mov    0x8(%ebp),%eax
 810b23b:	8d 50 18             	lea    0x18(%eax),%edx
 810b23e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810b241:	89 54 24 04          	mov    %edx,0x4(%esp)
 810b245:	89 04 24             	mov    %eax,(%esp)
 810b248:	e8 f3 62 00 00       	call   8111540 <_ZNSt3mapISsP17InGameEventScriptSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 810b24d:	83 ec 04             	sub    $0x4,%esp
 810b250:	eb 56                	jmp    810b2a8 <_ZN13EventClassify15CEventScriptMngD1Ev+0x90>
 810b252:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b255:	89 04 24             	mov    %eax,(%esp)
 810b258:	e8 1d 63 00 00       	call   811157a <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEptEv>
 810b25d:	8b 40 04             	mov    0x4(%eax),%eax
 810b260:	85 c0                	test   %eax,%eax
 810b262:	0f 95 c0             	setne  %al
 810b265:	84 c0                	test   %al,%al
 810b267:	74 22                	je     810b28b <_ZN13EventClassify15CEventScriptMngD1Ev+0x73>
 810b269:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b26c:	89 04 24             	mov    %eax,(%esp)
 810b26f:	e8 06 63 00 00       	call   811157a <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEptEv>
 810b274:	8b 58 04             	mov    0x4(%eax),%ebx
 810b277:	85 db                	test   %ebx,%ebx
 810b279:	74 10                	je     810b28b <_ZN13EventClassify15CEventScriptMngD1Ev+0x73>
 810b27b:	89 1c 24             	mov    %ebx,(%esp)
 810b27e:	e8 13 5c 00 00       	call   8110e96 <_ZN17InGameEventScriptD1Ev>
 810b283:	89 1c 24             	mov    %ebx,(%esp)
 810b286:	e8 65 92 61 00       	call   87244f0 <_ZdlPv>
 810b28b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b28e:	89 04 24             	mov    %eax,(%esp)
 810b291:	e8 e4 62 00 00       	call   811157a <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEptEv>
 810b296:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 810b29d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b2a0:	89 04 24             	mov    %eax,(%esp)
 810b2a3:	e8 e0 62 00 00       	call   8111588 <_ZNSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEppEv>
 810b2a8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 810b2ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 810b2af:	8d 45 f4             	lea    -0xc(%ebp),%eax
 810b2b2:	89 04 24             	mov    %eax,(%esp)
 810b2b5:	e8 ac 62 00 00       	call   8111566 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEneERKS5_>
 810b2ba:	84 c0                	test   %al,%al
 810b2bc:	75 94                	jne    810b252 <_ZN13EventClassify15CEventScriptMngD1Ev+0x3a>
 810b2be:	8b 45 08             	mov    0x8(%ebp),%eax
 810b2c1:	8d 50 30             	lea    0x30(%eax),%edx
 810b2c4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810b2c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 810b2cb:	89 04 24             	mov    %eax,(%esp)
 810b2ce:	e8 d3 62 00 00       	call   81115a6 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 810b2d3:	83 ec 04             	sub    $0x4,%esp
 810b2d6:	8b 45 08             	mov    0x8(%ebp),%eax
 810b2d9:	8d 50 30             	lea    0x30(%eax),%edx
 810b2dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810b2df:	89 54 24 04          	mov    %edx,0x4(%esp)
 810b2e3:	89 04 24             	mov    %eax,(%esp)
 810b2e6:	e8 e1 62 00 00       	call   81115cc <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 810b2eb:	83 ec 04             	sub    $0x4,%esp
 810b2ee:	eb 52                	jmp    810b342 <_ZN13EventClassify15CEventScriptMngD1Ev+0x12a>
 810b2f0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810b2f3:	89 04 24             	mov    %eax,(%esp)
 810b2f6:	e8 0b 63 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810b2fb:	8b 40 04             	mov    0x4(%eax),%eax
 810b2fe:	85 c0                	test   %eax,%eax
 810b300:	0f 95 c0             	setne  %al
 810b303:	84 c0                	test   %al,%al
 810b305:	74 1e                	je     810b325 <_ZN13EventClassify15CEventScriptMngD1Ev+0x10d>
 810b307:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810b30a:	89 04 24             	mov    %eax,(%esp)
 810b30d:	e8 f4 62 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810b312:	8b 40 04             	mov    0x4(%eax),%eax
 810b315:	85 c0                	test   %eax,%eax
 810b317:	74 0c                	je     810b325 <_ZN13EventClassify15CEventScriptMngD1Ev+0x10d>
 810b319:	8b 10                	mov    (%eax),%edx
 810b31b:	83 c2 04             	add    $0x4,%edx
 810b31e:	8b 12                	mov    (%edx),%edx
 810b320:	89 04 24             	mov    %eax,(%esp)
 810b323:	ff d2                	call   *%edx
 810b325:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810b328:	89 04 24             	mov    %eax,(%esp)
 810b32b:	e8 d6 62 00 00       	call   8111606 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEptEv>
 810b330:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 810b337:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810b33a:	89 04 24             	mov    %eax,(%esp)
 810b33d:	e8 d2 62 00 00       	call   8111614 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEppEv>
 810b342:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810b345:	89 44 24 04          	mov    %eax,0x4(%esp)
 810b349:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810b34c:	89 04 24             	mov    %eax,(%esp)
 810b34f:	e8 9e 62 00 00       	call   81115f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13EventClassify12CEventEntityEEEneERKS6_>
 810b354:	84 c0                	test   %al,%al
 810b356:	75 98                	jne    810b2f0 <_ZN13EventClassify15CEventScriptMngD1Ev+0xd8>
 810b358:	eb 18                	jmp    810b372 <_ZN13EventClassify15CEventScriptMngD1Ev+0x15a>
 810b35a:	89 d3                	mov    %edx,%ebx
 810b35c:	89 c6                	mov    %eax,%esi
 810b35e:	8b 45 08             	mov    0x8(%ebp),%eax
 810b361:	83 c0 50             	add    $0x50,%eax
 810b364:	89 04 24             	mov    %eax,(%esp)
 810b367:	e8 6e 8a f7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 810b36c:	89 f0                	mov    %esi,%eax
 810b36e:	89 da                	mov    %ebx,%edx
 810b370:	eb 10                	jmp    810b382 <_ZN13EventClassify15CEventScriptMngD1Ev+0x16a>
 810b372:	8b 45 08             	mov    0x8(%ebp),%eax
 810b375:	83 c0 50             	add    $0x50,%eax
 810b378:	89 04 24             	mov    %eax,(%esp)
 810b37b:	e8 5a 8a f7 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 810b380:	eb 18                	jmp    810b39a <_ZN13EventClassify15CEventScriptMngD1Ev+0x182>
 810b382:	89 d3                	mov    %edx,%ebx
 810b384:	89 c6                	mov    %eax,%esi
 810b386:	8b 45 08             	mov    0x8(%ebp),%eax
 810b389:	83 c0 30             	add    $0x30,%eax
 810b38c:	89 04 24             	mov    %eax,(%esp)
 810b38f:	e8 e0 5b 00 00       	call   8110f74 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 810b394:	89 f0                	mov    %esi,%eax
 810b396:	89 da                	mov    %ebx,%edx
 810b398:	eb 10                	jmp    810b3aa <_ZN13EventClassify15CEventScriptMngD1Ev+0x192>
 810b39a:	8b 45 08             	mov    0x8(%ebp),%eax
 810b39d:	83 c0 30             	add    $0x30,%eax
 810b3a0:	89 04 24             	mov    %eax,(%esp)
 810b3a3:	e8 cc 5b 00 00       	call   8110f74 <_ZNSt3mapIiPN13EventClassify12CEventEntityESt4lessIiESaISt4pairIKiS2_EEED1Ev>
 810b3a8:	eb 18                	jmp    810b3c2 <_ZN13EventClassify15CEventScriptMngD1Ev+0x1aa>
 810b3aa:	89 d3                	mov    %edx,%ebx
 810b3ac:	89 c6                	mov    %eax,%esi
 810b3ae:	8b 45 08             	mov    0x8(%ebp),%eax
 810b3b1:	83 c0 18             	add    $0x18,%eax
 810b3b4:	89 04 24             	mov    %eax,(%esp)
 810b3b7:	e8 a4 5b 00 00       	call   8110f60 <_ZN23InGameEventScriptLoaderD1Ev>
 810b3bc:	89 f0                	mov    %esi,%eax
 810b3be:	89 da                	mov    %ebx,%edx
 810b3c0:	eb 10                	jmp    810b3d2 <_ZN13EventClassify15CEventScriptMngD1Ev+0x1ba>
 810b3c2:	8b 45 08             	mov    0x8(%ebp),%eax
 810b3c5:	83 c0 18             	add    $0x18,%eax
 810b3c8:	89 04 24             	mov    %eax,(%esp)
 810b3cb:	e8 90 5b 00 00       	call   8110f60 <_ZN23InGameEventScriptLoaderD1Ev>
 810b3d0:	eb 1b                	jmp    810b3ed <_ZN13EventClassify15CEventScriptMngD1Ev+0x1d5>
 810b3d2:	89 d3                	mov    %edx,%ebx
 810b3d4:	89 c6                	mov    %eax,%esi
 810b3d6:	8b 45 08             	mov    0x8(%ebp),%eax
 810b3d9:	89 04 24             	mov    %eax,(%esp)
 810b3dc:	e8 43 5b 00 00       	call   8110f24 <_ZN19InGameEventInfoListD1Ev>
 810b3e1:	89 f0                	mov    %esi,%eax
 810b3e3:	89 da                	mov    %ebx,%edx
 810b3e5:	89 04 24             	mov    %eax,(%esp)
 810b3e8:	e8 63 83 9d 00       	call   8ae3750 <_Unwind_Resume>
 810b3ed:	8b 45 08             	mov    0x8(%ebp),%eax
 810b3f0:	89 04 24             	mov    %eax,(%esp)
 810b3f3:	e8 2c 5b 00 00       	call   8110f24 <_ZN19InGameEventInfoListD1Ev>
 810b3f8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810b3fb:	83 c4 00             	add    $0x0,%esp
 810b3fe:	5b                   	pop    %ebx
 810b3ff:	5e                   	pop    %esi
 810b400:	5d                   	pop    %ebp
 810b401:	c3                   	ret

```

```c
// EventClassify::CEventScriptMng::~CEventScriptMng @ 0x810b218

/* EventClassify::CEventScriptMng::~CEventScriptMng() */

void __thiscall EventClassify::CEventScriptMng::~CEventScriptMng(CEventScriptMng *this)

{
  InGameEventScript *this_00;
  int *piVar1;
  char cVar2;
  int iVar3;
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_1c [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_18 [4];
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  local_14 [4];
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  local_10 [4];
  
                    /* try { // try from 0810b230 to 0810b341 has its CatchHandler @ 0810b35a */
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::begin(local_10);
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::end(local_14);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_10,(_Rb_tree_iterator *)local_14);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_10);
    if (*(int *)(iVar3 + 4) != 0) {
      iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                         local_10);
      this_00 = *(InGameEventScript **)(iVar3 + 4);
      if (this_00 != (InGameEventScript *)0x0) {
        InGameEventScript::~InGameEventScript(this_00);
        operator_delete(this_00);
      }
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_10);
    *(undefined4 *)(iVar3 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator++
              ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)local_10);
  }
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::begin(local_18);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_1c);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                       local_18,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                       local_18);
    if (*(int *)(iVar3 + 4) != 0) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                         local_18);
      piVar1 = *(int **)(iVar3 + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(piVar1);
      }
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)
                       local_18);
    *(undefined4 *)(iVar3 + 4) = 0;
    std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> *)local_18);
  }
                    /* try { // try from 0810b37b to 0810b37f has its CatchHandler @ 0810b382 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x50));
                    /* try { // try from 0810b3a3 to 0810b3a7 has its CatchHandler @ 0810b3aa */
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::~map((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
          *)(this + 0x30));
                    /* try { // try from 0810b3cb to 0810b3cf has its CatchHandler @ 0810b3d2 */
  InGameEventScriptLoader::~InGameEventScriptLoader((InGameEventScriptLoader *)(this + 0x18));
  InGameEventInfoList::~InGameEventInfoList((InGameEventInfoList *)this);
  return;
}

```

