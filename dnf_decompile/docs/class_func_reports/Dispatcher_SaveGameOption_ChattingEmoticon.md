# Dispatcher_SaveGameOption_ChattingEmoticon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081cf52a Dispatcher_SaveGameOption_ChattingEmoticon::process  [0x081cf52a-0x81cf71d] ===
 81cf52a:	55                   	push   %ebp
 81cf52b:	89 e5                	mov    %esp,%ebp
 81cf52d:	57                   	push   %edi
 81cf52e:	56                   	push   %esi
 81cf52f:	53                   	push   %ebx
 81cf530:	81 ec 4c 02 00 00    	sub    $0x24c,%esp
 81cf536:	8b 45 10             	mov    0x10(%ebp),%eax
 81cf539:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81cf53c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf53f:	89 04 24             	mov    %eax,(%esp)
 81cf542:	e8 07 07 06 00       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 81cf547:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81cf54a:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 81cf550:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81cf553:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cf557:	89 04 24             	mov    %eax,(%esp)
 81cf55a:	e8 d7 7b 2e 00       	call   84b7136 <_ZNK11CGameOption15getEmoticonInfoEv>
 81cf55f:	83 ec 04             	sub    $0x4,%esp
 81cf562:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81cf569:	eb 5f                	jmp    81cf5ca <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon7processEP5CUserR8MSG_BASER9ParamBase+0xa0>
 81cf56b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81cf56e:	8d 50 0f             	lea    0xf(%eax),%edx
 81cf571:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cf574:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf578:	89 14 24             	mov    %edx,(%esp)
 81cf57b:	e8 f4 79 06 00       	call   8236f74 <_ZNSt6vectorIN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringESaIS1_EEixEj>
 81cf580:	83 c0 02             	add    $0x2,%eax
 81cf583:	89 04 24             	mov    %eax,(%esp)
 81cf586:	e8 65 6f 53 00       	call   87064f0 <_ZNKSs5c_strEv>
 81cf58b:	89 c3                	mov    %eax,%ebx
 81cf58d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81cf590:	8d 50 0f             	lea    0xf(%eax),%edx
 81cf593:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cf596:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf59a:	89 14 24             	mov    %edx,(%esp)
 81cf59d:	e8 d2 79 06 00       	call   8236f74 <_ZNSt6vectorIN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringESaIS1_EEixEj>
 81cf5a2:	0f b7 00             	movzwl (%eax),%eax
 81cf5a5:	98                   	cwtl
 81cf5a6:	8d 95 c0 fd ff ff    	lea    -0x240(%ebp),%edx
 81cf5ac:	6b c0 16             	imul   $0x16,%eax,%eax
 81cf5af:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81cf5b2:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81cf5b9:	00 
 81cf5ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cf5be:	89 04 24             	mov    %eax,(%esp)
 81cf5c1:	e8 0a e3 ea ff       	call   807d8d0 <strncpy@plt>
 81cf5c6:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81cf5ca:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81cf5cd:	83 c0 0f             	add    $0xf,%eax
 81cf5d0:	89 04 24             	mov    %eax,(%esp)
 81cf5d3:	e8 7c 79 06 00       	call   8236f54 <_ZNKSt6vectorIN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringESaIS1_EE4sizeEv>
 81cf5d8:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 81cf5db:	0f 97 c0             	seta   %al
 81cf5de:	84 c0                	test   %al,%al
 81cf5e0:	75 89                	jne    81cf56b <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81cf5e2:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 81cf5e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf5ec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cf5ef:	89 04 24             	mov    %eax,(%esp)
 81cf5f2:	e8 f1 7b 2e 00       	call   84b71e8 <_ZN11CGameOption15isEqualEmoticonERK23CChattingEmoticonConfig>
 81cf5f7:	83 f0 01             	xor    $0x1,%eax
 81cf5fa:	84 c0                	test   %al,%al
 81cf5fc:	0f 84 0b 01 00 00    	je     81cf70d <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon7processEP5CUserR8MSG_BASER9ParamBase+0x1e3>
 81cf602:	8d 85 c0 fd ff ff    	lea    -0x240(%ebp),%eax
 81cf608:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf60c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cf60f:	89 04 24             	mov    %eax,(%esp)
 81cf612:	e8 69 7a 2e 00       	call   84b7080 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig>
 81cf617:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81cf61c:	c7 44 24 08 59 29 00 	movl   $0x2959,0x8(%esp)
 81cf623:	00 
 81cf624:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81cf62b:	08 
 81cf62c:	89 04 24             	mov    %eax,(%esp)
 81cf62f:	e8 52 04 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81cf634:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cf63b:	00 
 81cf63c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf640:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf643:	89 04 24             	mov    %eax,(%esp)
 81cf646:	e8 db 95 ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81cf64b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf64e:	89 04 24             	mov    %eax,(%esp)
 81cf651:	e8 f0 95 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cf656:	c7 44 24 04 d7 02 00 	movl   $0x2d7,0x4(%esp)
 81cf65d:	00 
 81cf65e:	89 04 24             	mov    %eax,(%esp)
 81cf661:	e8 f0 95 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cf666:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf669:	89 04 24             	mov    %eax,(%esp)
 81cf66c:	e8 25 96 ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cf671:	89 c3                	mov    %eax,%ebx
 81cf673:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf676:	89 04 24             	mov    %eax,(%esp)
 81cf679:	e8 c8 95 ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cf67e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cf682:	89 04 24             	mov    %eax,(%esp)
 81cf685:	e8 cc 95 ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cf68a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf68d:	89 04 24             	mov    %eax,(%esp)
 81cf690:	e8 b9 95 ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81cf695:	89 04 24             	mov    %eax,(%esp)
 81cf698:	e8 ef 78 06 00       	call   8236f8c <_ZN12CStreamGuard11GetInBufferI26SIG_SAVE_CHATTING_EMOTICONEEPT_v>
 81cf69d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81cf6a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf6a3:	89 04 24             	mov    %eax,(%esp)
 81cf6a6:	e8 c3 ac f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cf6ab:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81cf6ae:	89 02                	mov    %eax,(%edx)
 81cf6b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cf6b3:	8d 58 04             	lea    0x4(%eax),%ebx
 81cf6b6:	8d 95 c0 fd ff ff    	lea    -0x240(%ebp),%edx
 81cf6bc:	b8 84 00 00 00       	mov    $0x84,%eax
 81cf6c1:	89 df                	mov    %ebx,%edi
 81cf6c3:	89 d6                	mov    %edx,%esi
 81cf6c5:	89 c1                	mov    %eax,%ecx
 81cf6c7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 81cf6c9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81cf6ce:	8d 55 d0             	lea    -0x30(%ebp),%edx
 81cf6d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cf6d5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81cf6dc:	00 
 81cf6dd:	89 04 24             	mov    %eax,(%esp)
 81cf6e0:	e8 f9 18 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81cf6e5:	eb 1b                	jmp    81cf702 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon7processEP5CUserR8MSG_BASER9ParamBase+0x1d8>
 81cf6e7:	89 d3                	mov    %edx,%ebx
 81cf6e9:	89 c6                	mov    %eax,%esi
 81cf6eb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf6ee:	89 04 24             	mov    %eax,(%esp)
 81cf6f1:	e8 dc d1 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cf6f6:	89 f0                	mov    %esi,%eax
 81cf6f8:	89 da                	mov    %ebx,%edx
 81cf6fa:	89 04 24             	mov    %eax,(%esp)
 81cf6fd:	e8 4e 40 91 00       	call   8ae3750 <_Unwind_Resume>
 81cf702:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf705:	89 04 24             	mov    %eax,(%esp)
 81cf708:	e8 c5 d1 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81cf70d:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf712:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81cf715:	83 c4 00             	add    $0x0,%esp
 81cf718:	5b                   	pop    %ebx
 81cf719:	5e                   	pop    %esi
 81cf71a:	5f                   	pop    %edi
 81cf71b:	5d                   	pop    %ebp
 81cf71c:	c3                   	ret
 81cf71d:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_ChattingEmoticon::process @ 0x81cf52a

/* Dispatcher_SaveGameOption_ChattingEmoticon::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_SaveGameOption_ChattingEmoticon::process
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  char *__src;
  short *psVar2;
  uint uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CChattingEmoticonConfig *pCVar8;
  SIG_SAVE_CHATTING_EMOTICON *pSVar9;
  byte bVar10;
  CChattingEmoticonConfig local_244 [528];
  CStreamGuard local_34 [8];
  ParamBase *local_2c;
  CGameOption *local_28;
  uint local_24;
  SIG_SAVE_CHATTING_EMOTICON *local_20;
  
  bVar10 = 0;
  local_2c = param_3;
  local_28 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
  CGameOption::getEmoticonInfo();
  local_24 = 0;
  while( true ) {
    uVar3 = std::
            vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
            ::size((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                    *)(local_2c + 0xf));
    if (uVar3 <= local_24) break;
    iVar6 = std::
            vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
            ::operator[]((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                          *)(local_2c + 0xf),local_24);
    __src = (char *)std::string::c_str((string *)(iVar6 + 2));
    psVar2 = (short *)std::
                      vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                      ::operator[]((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                                    *)(local_2c + 0xf),local_24);
    strncpy((char *)(local_244 + *psVar2 * 0x16),__src,0x14);
    local_24 = local_24 + 1;
  }
  cVar1 = CGameOption::isEqualEmoticon(local_28,local_244);
  if (cVar1 != '\x01') {
    CGameOption::SetEmoticonInfo(local_28,local_244);
    pSVar4 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x2959);
    CStreamGuard::CStreamGuard(local_34,pSVar4,true);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 081cf661 to 081cf6e4 has its CatchHandler @ 081cf6e7 */
    CStreamGuard::operator<<(pCVar5,0x2d7);
    iVar6 = CUser::GetUID((CUser *)param_2);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar5,iVar6);
    pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_20 = CStreamGuard::GetInBuffer<SIG_SAVE_CHATTING_EMOTICON>(pCVar5);
    uVar7 = CUser::get_acc_id((CUser *)param_2);
    *(undefined4 *)local_20 = uVar7;
    pCVar8 = local_244;
    pSVar9 = local_20 + 4;
    for (iVar6 = 0x84; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pSVar9 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + ((uint)bVar10 * -2 + 1) * 4;
      pSVar9 = pSVar9 + (uint)bVar10 * -8 + 4;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return 0;
}

```

---

## read

```asm
// === 081cf354 Dispatcher_SaveGameOption_ChattingEmoticon::read  [0x081cf354-0x81cf529] ===
 81cf354:	55                   	push   %ebp
 81cf355:	89 e5                	mov    %esp,%ebp
 81cf357:	56                   	push   %esi
 81cf358:	53                   	push   %ebx
 81cf359:	83 ec 40             	sub    $0x40,%esp
 81cf35c:	8b 45 10             	mov    0x10(%ebp),%eax
 81cf35f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cf362:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf365:	83 c0 0d             	add    $0xd,%eax
 81cf368:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf36c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf36f:	89 04 24             	mov    %eax,(%esp)
 81cf372:	e8 49 dc 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cf377:	83 f0 01             	xor    $0x1,%eax
 81cf37a:	84 c0                	test   %al,%al
 81cf37c:	74 2b                	je     81cf3a9 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x55>
 81cf37e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf385:	00 
 81cf386:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf38d:	00 
 81cf38e:	c7 44 24 04 20 41 bd 	movl   $0x8bd4120,0x4(%esp)
 81cf395:	08 
 81cf396:	c7 04 24 34 29 00 00 	movl   $0x2934,(%esp)
 81cf39d:	e8 35 15 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf3a2:	89 c3                	mov    %eax,%ebx
 81cf3a4:	e9 78 01 00 00       	jmp    81cf521 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x1cd>
 81cf3a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81cf3b0:	e9 51 01 00 00       	jmp    81cf506 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x1b2>
 81cf3b5:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81cf3b8:	89 04 24             	mov    %eax,(%esp)
 81cf3bb:	e8 74 5d 06 00       	call   8235134 <_ZN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringC1Ev>
 81cf3c0:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81cf3c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf3c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf3ca:	89 04 24             	mov    %eax,(%esp)
 81cf3cd:	e8 ee db 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cf3d2:	83 f0 01             	xor    $0x1,%eax
 81cf3d5:	84 c0                	test   %al,%al
 81cf3d7:	74 30                	je     81cf409 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0xb5>
 81cf3d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf3e0:	00 
 81cf3e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf3e8:	00 
 81cf3e9:	c7 44 24 04 20 41 bd 	movl   $0x8bd4120,0x4(%esp)
 81cf3f0:	08 
 81cf3f1:	c7 04 24 3a 29 00 00 	movl   $0x293a,(%esp)
 81cf3f8:	e8 da 14 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf3fd:	89 c3                	mov    %eax,%ebx
 81cf3ff:	be 00 00 00 00       	mov    $0x0,%esi
 81cf404:	e9 ea 00 00 00       	jmp    81cf4f3 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x19f>
 81cf409:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cf40c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf410:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf413:	89 04 24             	mov    %eax,(%esp)
 81cf416:	e8 d5 dc 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cf41b:	83 f0 01             	xor    $0x1,%eax
 81cf41e:	84 c0                	test   %al,%al
 81cf420:	74 30                	je     81cf452 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0xfe>
 81cf422:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf429:	00 
 81cf42a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf431:	00 
 81cf432:	c7 44 24 04 20 41 bd 	movl   $0x8bd4120,0x4(%esp)
 81cf439:	08 
 81cf43a:	c7 04 24 40 29 00 00 	movl   $0x2940,(%esp)
 81cf441:	e8 91 14 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf446:	89 c3                	mov    %eax,%ebx
 81cf448:	be 00 00 00 00       	mov    $0x0,%esi
 81cf44d:	e9 a1 00 00 00       	jmp    81cf4f3 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x19f>
 81cf452:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81cf455:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cf459:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 81cf460:	00 
 81cf461:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 81cf464:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf468:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf46b:	89 04 24             	mov    %eax,(%esp)
 81cf46e:	e8 49 de 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cf473:	83 f0 01             	xor    $0x1,%eax
 81cf476:	84 c0                	test   %al,%al
 81cf478:	74 2d                	je     81cf4a7 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x153>
 81cf47a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf481:	00 
 81cf482:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf489:	00 
 81cf48a:	c7 44 24 04 20 41 bd 	movl   $0x8bd4120,0x4(%esp)
 81cf491:	08 
 81cf492:	c7 04 24 43 29 00 00 	movl   $0x2943,(%esp)
 81cf499:	e8 39 14 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf49e:	89 c3                	mov    %eax,%ebx
 81cf4a0:	be 00 00 00 00       	mov    $0x0,%esi
 81cf4a5:	eb 4c                	jmp    81cf4f3 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x19f>
 81cf4a7:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 81cf4aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf4ae:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81cf4b1:	83 c0 02             	add    $0x2,%eax
 81cf4b4:	89 04 24             	mov    %eax,(%esp)
 81cf4b7:	e8 64 92 53 00       	call   8708720 <_ZNSsaSEPKc>
 81cf4bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf4bf:	8d 50 0f             	lea    0xf(%eax),%edx
 81cf4c2:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81cf4c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf4c9:	89 14 24             	mov    %edx,(%esp)
 81cf4cc:	e8 0f 7a 06 00       	call   8236ee0 <_ZNSt6vectorIN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringESaIS1_EE9push_backERKS1_>
 81cf4d1:	be 01 00 00 00       	mov    $0x1,%esi
 81cf4d6:	eb 1b                	jmp    81cf4f3 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x19f>
 81cf4d8:	89 d3                	mov    %edx,%ebx
 81cf4da:	89 c6                	mov    %eax,%esi
 81cf4dc:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81cf4df:	89 04 24             	mov    %eax,(%esp)
 81cf4e2:	e8 63 5c 06 00       	call   823514a <_ZN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringD1Ev>
 81cf4e7:	89 f0                	mov    %esi,%eax
 81cf4e9:	89 da                	mov    %ebx,%edx
 81cf4eb:	89 04 24             	mov    %eax,(%esp)
 81cf4ee:	e8 5d 42 91 00       	call   8ae3750 <_Unwind_Resume>
 81cf4f3:	8d 45 ea             	lea    -0x16(%ebp),%eax
 81cf4f6:	89 04 24             	mov    %eax,(%esp)
 81cf4f9:	e8 4c 5c 06 00       	call   823514a <_ZN38MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON12_slot_StringD1Ev>
 81cf4fe:	85 f6                	test   %esi,%esi
 81cf500:	74 1f                	je     81cf521 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x1cd>
 81cf502:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81cf506:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cf509:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81cf50d:	98                   	cwtl
 81cf50e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81cf511:	0f 9f c0             	setg   %al
 81cf514:	84 c0                	test   %al,%al
 81cf516:	0f 85 99 fe ff ff    	jne    81cf3b5 <_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE+0x61>
 81cf51c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cf521:	89 d8                	mov    %ebx,%eax
 81cf523:	83 c4 40             	add    $0x40,%esp
 81cf526:	5b                   	pop    %ebx
 81cf527:	5e                   	pop    %esi
 81cf528:	5d                   	pop    %ebp
 81cf529:	c3                   	ret

```

```c
// Dispatcher_SaveGameOption_ChattingEmoticon::read @ 0x81cf354

/* Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_ChattingEmoticon::read
          (Dispatcher_SaveGameOption_ChattingEmoticon *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  int local_34;
  char local_2e [20];
  _slot_String local_1a [2];
  string asStack_18 [4];
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  cVar2 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar2 == '\x01') {
    for (local_10 = 0; local_10 < *(short *)(local_14 + 0xd); local_10 = local_10 + 1) {
      MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String::_slot_String(local_1a);
                    /* try { // try from 081cf3cd to 081cf4d0 has its CatchHandler @ 081cf4d8 */
      cVar2 = PacketBuf::get_short(param_1,(short *)local_1a);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_int(param_1,&local_34);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_str(param_1,local_2e,0x14,local_34);
          if (cVar2 == '\x01') {
            std::string::operator=(asStack_18,local_2e);
            std::
            vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
            ::push_back((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                         *)(local_14 + 0xf),local_1a);
            bVar1 = true;
          }
          else {
            unaff_EBX = LineFunc(0x2943,
                                 "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
            bVar1 = false;
          }
        }
        else {
          unaff_EBX = LineFunc(0x2940,
                               "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
          bVar1 = false;
        }
      }
      else {
        unaff_EBX = LineFunc(0x293a,
                             "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
        bVar1 = false;
      }
      MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String::~_slot_String(local_1a);
      if (!bVar1) {
        return unaff_EBX;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = LineFunc(0x2934,
                     "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar3;
}

```

---

## send

```asm
// === 081cf71e Dispatcher_SaveGameOption_ChattingEmoticon::send  [0x081cf71e-0x81cf74f] ===
 81cf71e:	55                   	push   %ebp
 81cf71f:	89 e5                	mov    %esp,%ebp
 81cf721:	83 ec 18             	sub    $0x18,%esp
 81cf724:	c7 44 24 04 d9 01 00 	movl   $0x1d9,0x4(%esp)
 81cf72b:	00 
 81cf72c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf72f:	89 04 24             	mov    %eax,(%esp)
 81cf732:	e8 69 c7 4a 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81cf737:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf73a:	89 04 24             	mov    %eax,(%esp)
 81cf73d:	e8 e0 a2 4b 00       	call   8689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>
 81cf742:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf745:	89 04 24             	mov    %eax,(%esp)
 81cf748:	e8 43 a4 4b 00       	call   8689b90 <_ZN5CUser20SendChattingEmoticonEv>
 81cf74d:	c9                   	leave
 81cf74e:	c3                   	ret
 81cf74f:	90                   	nop

```

```c
// Dispatcher_SaveGameOption_ChattingEmoticon::send @ 0x81cf71e

/* Dispatcher_SaveGameOption_ChattingEmoticon::send(CUser*, ParamBase&) */

void Dispatcher_SaveGameOption_ChattingEmoticon::send(CUser *param_1,ParamBase *param_2)

{
  CUser::SendCmdOkPacket((CUser *)param_2,0x1d9);
  CUser::ReCalcChattingEmoticon((CUser *)param_2);
  CUser::SendChattingEmoticon((CUser *)param_2);
  return;
}

```

