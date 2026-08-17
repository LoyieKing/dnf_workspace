# CBossDungeonEntranceLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## BossTowerLogDBUpdate

```asm
// === 081568cc CBossDungeonEntranceLog::BossTowerLogDBUpdate  [0x081568cc-0x8156aa9] ===
 81568cc:	55                   	push   %ebp
 81568cd:	89 e5                	mov    %esp,%ebp
 81568cf:	56                   	push   %esi
 81568d0:	53                   	push   %ebx
 81568d1:	83 ec 30             	sub    $0x30,%esp
 81568d4:	8b 55 08             	mov    0x8(%ebp),%edx
 81568d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81568da:	89 54 24 04          	mov    %edx,0x4(%esp)
 81568de:	89 04 24             	mov    %eax,(%esp)
 81568e1:	e8 9e 0c 00 00       	call   8157584 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 81568e6:	83 ec 04             	sub    $0x4,%esp
 81568e9:	8b 55 08             	mov    0x8(%ebp),%edx
 81568ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81568ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81568f3:	89 04 24             	mov    %eax,(%esp)
 81568f6:	e8 95 0b 00 00       	call   8157490 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 81568fb:	83 ec 04             	sub    $0x4,%esp
 81568fe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8156903:	c7 44 24 08 69 00 00 	movl   $0x69,0x8(%esp)
 815690a:	00 
 815690b:	c7 44 24 04 80 5f b7 	movl   $0x8b75f80,0x4(%esp)
 8156912:	08 
 8156913:	89 04 24             	mov    %eax,(%esp)
 8156916:	e8 6b 91 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815691b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8156922:	00 
 8156923:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156927:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815692a:	89 04 24             	mov    %eax,(%esp)
 815692d:	e8 f4 22 f7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8156932:	8b 45 08             	mov    0x8(%ebp),%eax
 8156935:	89 04 24             	mov    %eax,(%esp)
 8156938:	e8 6d 0c 00 00       	call   81575aa <_ZNKSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE4sizeEv>
 815693d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8156940:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8156944:	0f 8e 4b 01 00 00    	jle    8156a95 <_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv+0x1c9>
 815694a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815694d:	89 04 24             	mov    %eax,(%esp)
 8156950:	e8 f1 22 f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8156955:	c7 44 24 04 e0 02 00 	movl   $0x2e0,0x4(%esp)
 815695c:	00 
 815695d:	89 04 24             	mov    %eax,(%esp)
 8156960:	e8 f1 22 f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8156965:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8156968:	89 04 24             	mov    %eax,(%esp)
 815696b:	e8 d6 22 f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8156970:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8156977:	ff 
 8156978:	89 04 24             	mov    %eax,(%esp)
 815697b:	e8 d6 22 f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8156980:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8156983:	89 04 24             	mov    %eax,(%esp)
 8156986:	e8 bb 22 f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 815698b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 815698e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156992:	89 04 24             	mov    %eax,(%esp)
 8156995:	e8 bc 22 f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 815699a:	e9 98 00 00 00       	jmp    8156a37 <_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv+0x16b>
 815699f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81569a2:	89 04 24             	mov    %eax,(%esp)
 81569a5:	e8 cc 0b 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 81569aa:	8b 00                	mov    (%eax),%eax
 81569ac:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81569af:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81569b2:	89 c3                	mov    %eax,%ebx
 81569b4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81569b7:	89 04 24             	mov    %eax,(%esp)
 81569ba:	e8 87 22 f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81569bf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81569c3:	89 04 24             	mov    %eax,(%esp)
 81569c6:	e8 8b 22 f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81569cb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81569ce:	89 04 24             	mov    %eax,(%esp)
 81569d1:	e8 78 22 f7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81569d6:	89 04 24             	mov    %eax,(%esp)
 81569d9:	e8 12 0c 00 00       	call   81575f0 <_ZN12CStreamGuard11GetInBufferI21STBossDungeonTowerLogEEPT_v>
 81569de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81569e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81569e4:	89 04 24             	mov    %eax,(%esp)
 81569e7:	e8 8a 0b 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 81569ec:	83 c0 04             	add    $0x4,%eax
 81569ef:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81569f6:	00 
 81569f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81569fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81569fe:	89 04 24             	mov    %eax,(%esp)
 8156a01:	e8 9a 6e f2 ff       	call   807d8a0 <memcpy@plt>
 8156a06:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156a09:	89 04 24             	mov    %eax,(%esp)
 8156a0c:	e8 65 0b 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 8156a11:	83 c0 04             	add    $0x4,%eax
 8156a14:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8156a1b:	00 
 8156a1c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8156a23:	00 
 8156a24:	89 04 24             	mov    %eax,(%esp)
 8156a27:	e8 94 72 f2 ff       	call   807dcc0 <memset@plt>
 8156a2c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156a2f:	89 04 24             	mov    %eax,(%esp)
 8156a32:	e8 9b 0b 00 00       	call   81575d2 <_ZNSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEppEv>
 8156a37:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8156a3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156a3e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156a41:	89 04 24             	mov    %eax,(%esp)
 8156a44:	e8 75 0b 00 00       	call   81575be <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEneERKS4_>
 8156a49:	84 c0                	test   %al,%al
 8156a4b:	0f 85 4e ff ff ff    	jne    815699f <_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv+0xd3>
 8156a51:	8b 45 08             	mov    0x8(%ebp),%eax
 8156a54:	89 04 24             	mov    %eax,(%esp)
 8156a57:	e8 4a ef fe ff       	call   81459a6 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 8156a5c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8156a61:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8156a64:	89 54 24 08          	mov    %edx,0x8(%esp)
 8156a68:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8156a6f:	00 
 8156a70:	89 04 24             	mov    %eax,(%esp)
 8156a73:	e8 66 a5 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8156a78:	eb 1b                	jmp    8156a95 <_ZN23CBossDungeonEntranceLog20BossTowerLogDBUpdateEv+0x1c9>
 8156a7a:	89 d3                	mov    %edx,%ebx
 8156a7c:	89 c6                	mov    %eax,%esi
 8156a7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8156a81:	89 04 24             	mov    %eax,(%esp)
 8156a84:	e8 49 5e 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8156a89:	89 f0                	mov    %esi,%eax
 8156a8b:	89 da                	mov    %ebx,%edx
 8156a8d:	89 04 24             	mov    %eax,(%esp)
 8156a90:	e8 bb cc 98 00       	call   8ae3750 <_Unwind_Resume>
 8156a95:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8156a98:	89 04 24             	mov    %eax,(%esp)
 8156a9b:	e8 32 5e 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8156aa0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8156aa3:	83 c4 00             	add    $0x0,%esp
 8156aa6:	5b                   	pop    %ebx
 8156aa7:	5e                   	pop    %esi
 8156aa8:	5d                   	pop    %ebp
 8156aa9:	c3                   	ret

```

```c
// CBossDungeonEntranceLog::BossTowerLogDBUpdate @ 0x81568cc

/* CBossDungeonEntranceLog::BossTowerLogDBUpdate() */

void __thiscall CBossDungeonEntranceLog::BossTowerLogDBUpdate(CBossDungeonEntranceLog *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int *piVar4;
  int iVar5;
  CStreamGuard local_24 [8];
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_1c [4];
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_18 [4];
  int local_14;
  STBossDungeonTowerLog *local_10;
  
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::begin(local_18);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_1c);
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localglobal/global_Statistics.cpp",0x69);
  CStreamGuard::CStreamGuard(local_24,pSVar2,true);
                    /* try { // try from 08156938 to 08156a77 has its CatchHandler @ 08156a7a */
  local_14 = std::
             map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
             ::size((map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
                     *)this);
  if (0 < local_14) {
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,0x2e0);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
    CStreamGuard::operator<<(pCVar3,local_14);
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)
                         local_18,(_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
                      operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>
                                  *)local_18);
      iVar5 = *piVar4;
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_24);
      CStreamGuard::operator<<(pCVar3,iVar5);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_24);
      local_10 = CStreamGuard::GetInBuffer<STBossDungeonTowerLog>(pCVar3);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)
                         local_18);
      memcpy(local_10,(void *)(iVar5 + 4),0x10);
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)
                         local_18);
      memset((void *)(iVar5 + 4),0,0x10);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> *)local_18)
      ;
    }
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::clear((map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
             *)this);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_24);
  }
  CStreamGuard::~CStreamGuard(local_24);
  return;
}

```

---

## IncrementBossPickUpItem

```asm
// === 0815678e CBossDungeonEntranceLog::IncrementBossPickUpItem  [0x0815678e-0x81568cb] ===
 815678e:	55                   	push   %ebp
 815678f:	89 e5                	mov    %esp,%ebp
 8156791:	83 ec 78             	sub    $0x78,%esp
 8156794:	8b 55 10             	mov    0x10(%ebp),%edx
 8156797:	8b 45 14             	mov    0x14(%ebp),%eax
 815679a:	88 55 a4             	mov    %dl,-0x5c(%ebp)
 815679d:	88 45 a0             	mov    %al,-0x60(%ebp)
 81567a0:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 81567a7:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 81567ab:	88 45 c0             	mov    %al,-0x40(%ebp)
 81567ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81567b1:	89 04 24             	mov    %eax,(%esp)
 81567b4:	e8 ff 3a f8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81567b9:	88 45 c1             	mov    %al,-0x3f(%ebp)
 81567bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81567bf:	89 04 24             	mov    %eax,(%esp)
 81567c2:	e8 55 0c 00 00       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 81567c7:	88 45 c2             	mov    %al,-0x3e(%ebp)
 81567ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81567cd:	89 04 24             	mov    %eax,(%esp)
 81567d0:	e8 4b 77 fa ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81567d5:	83 e0 0f             	and    $0xf,%eax
 81567d8:	89 c2                	mov    %eax,%edx
 81567da:	83 e2 0f             	and    $0xf,%edx
 81567dd:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 81567e1:	83 e0 f0             	and    $0xfffffff0,%eax
 81567e4:	09 d0                	or     %edx,%eax
 81567e6:	88 45 c3             	mov    %al,-0x3d(%ebp)
 81567e9:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 81567ed:	83 e0 0f             	and    $0xf,%eax
 81567f0:	89 c2                	mov    %eax,%edx
 81567f2:	c1 e2 04             	shl    $0x4,%edx
 81567f5:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 81567f9:	83 e0 0f             	and    $0xf,%eax
 81567fc:	09 d0                	or     %edx,%eax
 81567fe:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8156801:	8b 55 08             	mov    0x8(%ebp),%edx
 8156804:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8156807:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 815680a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 815680e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156812:	89 04 24             	mov    %eax,(%esp)
 8156815:	e8 4a 0c 00 00       	call   8157464 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 815681a:	83 ec 04             	sub    $0x4,%esp
 815681d:	8b 55 08             	mov    0x8(%ebp),%edx
 8156820:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8156823:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156827:	89 04 24             	mov    %eax,(%esp)
 815682a:	e8 61 0c 00 00       	call   8157490 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 815682f:	83 ec 04             	sub    $0x4,%esp
 8156832:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8156835:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156839:	8d 45 bc             	lea    -0x44(%ebp),%eax
 815683c:	89 04 24             	mov    %eax,(%esp)
 815683f:	e8 72 0c 00 00       	call   81574b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEeqERKS4_>
 8156844:	84 c0                	test   %al,%al
 8156846:	74 6e                	je     81568b6 <_ZN23CBossDungeonEntranceLog23IncrementBossPickUpItemER5CUserhh+0x128>
 8156848:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 815684f:	00 
 8156850:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8156857:	00 
 8156858:	8d 45 ac             	lea    -0x54(%ebp),%eax
 815685b:	89 04 24             	mov    %eax,(%esp)
 815685e:	e8 5d 74 f2 ff       	call   807dcc0 <memset@plt>
 8156863:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 815686a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815686d:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8156870:	89 54 24 08          	mov    %edx,0x8(%esp)
 8156874:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8156877:	89 54 24 04          	mov    %edx,0x4(%esp)
 815687b:	89 04 24             	mov    %eax,(%esp)
 815687e:	e8 47 0c 00 00       	call   81574ca <_ZSt9make_pairIRjR21STBossDungeonTowerLogESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8156883:	83 ec 04             	sub    $0x4,%esp
 8156886:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8156889:	89 44 24 04          	mov    %eax,0x4(%esp)
 815688d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8156890:	89 04 24             	mov    %eax,(%esp)
 8156893:	e8 70 0c 00 00       	call   8157508 <_ZNSt4pairIKj21STBossDungeonTowerLogEC1IjS1_EEOS_IT_T0_E>
 8156898:	8b 55 08             	mov    0x8(%ebp),%edx
 815689b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815689e:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 81568a1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81568a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81568a9:	89 04 24             	mov    %eax,(%esp)
 81568ac:	e8 99 0c 00 00       	call   815754a <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 81568b1:	83 ec 04             	sub    $0x4,%esp
 81568b4:	eb 14                	jmp    81568ca <_ZN23CBossDungeonEntranceLog23IncrementBossPickUpItemER5CUserhh+0x13c>
 81568b6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81568b9:	89 04 24             	mov    %eax,(%esp)
 81568bc:	e8 b5 0c 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 81568c1:	8b 50 0c             	mov    0xc(%eax),%edx
 81568c4:	83 c2 01             	add    $0x1,%edx
 81568c7:	89 50 0c             	mov    %edx,0xc(%eax)
 81568ca:	c9                   	leave
 81568cb:	c3                   	ret

```

```c
// CBossDungeonEntranceLog::IncrementBossPickUpItem @ 0x815678e

/* CBossDungeonEntranceLog::IncrementBossPickUpItem(CUser&, unsigned char, unsigned char) */

void __thiscall
CBossDungeonEntranceLog::IncrementBossPickUpItem
          (CBossDungeonEntranceLog *this,CUser *param_1,uchar param_2,uchar param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_58 [8];
  undefined4 local_50;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> local_48 [4];
  undefined4 local_44;
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,STBossDungeonTowerLog> local_34 [20];
  uint local_20 [7];
  
  local_44 = (uint)param_2;
  uVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_44._0_2_ = CONCAT11(uVar1,local_44._0_1_);
  uVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_44._0_3_ = CONCAT12(uVar1,(undefined2)local_44);
  uVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_44 = CONCAT13(uVar1,(undefined3)local_44) & 0xfffffff;
  local_44 = CONCAT13(local_44._3_1_ | param_3 << 4,(undefined3)local_44);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::find((uint *)local_48);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator==
                    (local_48,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  else {
    memset(local_58,0,0x10);
    local_50 = 1;
    std::make_pair<unsigned_int&,STBossDungeonTowerLog&>
              (local_20,(STBossDungeonTowerLog *)&local_44);
    std::pair<unsigned_int_const,STBossDungeonTowerLog>::pair<unsigned_int,STBossDungeonTowerLog>
              (local_34,(pair *)local_20);
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::insert(local_3c);
  }
  return;
}

```

---

## IncrementBossStageEnd

```asm
// === 0815662e CBossDungeonEntranceLog::IncrementBossStageEnd  [0x0815662e-0x815678d] ===
 815662e:	55                   	push   %ebp
 815662f:	89 e5                	mov    %esp,%ebp
 8156631:	83 ec 78             	sub    $0x78,%esp
 8156634:	8b 55 10             	mov    0x10(%ebp),%edx
 8156637:	8b 45 18             	mov    0x18(%ebp),%eax
 815663a:	88 55 a4             	mov    %dl,-0x5c(%ebp)
 815663d:	88 45 a0             	mov    %al,-0x60(%ebp)
 8156640:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8156647:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 815664b:	88 45 c0             	mov    %al,-0x40(%ebp)
 815664e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8156651:	89 04 24             	mov    %eax,(%esp)
 8156654:	e8 5f 3c f8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8156659:	88 45 c1             	mov    %al,-0x3f(%ebp)
 815665c:	8b 45 0c             	mov    0xc(%ebp),%eax
 815665f:	89 04 24             	mov    %eax,(%esp)
 8156662:	e8 b5 0d 00 00       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 8156667:	88 45 c2             	mov    %al,-0x3e(%ebp)
 815666a:	8b 45 0c             	mov    0xc(%ebp),%eax
 815666d:	89 04 24             	mov    %eax,(%esp)
 8156670:	e8 ab 78 fa ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8156675:	83 e0 0f             	and    $0xf,%eax
 8156678:	89 c2                	mov    %eax,%edx
 815667a:	83 e2 0f             	and    $0xf,%edx
 815667d:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8156681:	83 e0 f0             	and    $0xfffffff0,%eax
 8156684:	09 d0                	or     %edx,%eax
 8156686:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8156689:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 815668d:	83 e0 0f             	and    $0xf,%eax
 8156690:	89 c2                	mov    %eax,%edx
 8156692:	c1 e2 04             	shl    $0x4,%edx
 8156695:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8156699:	83 e0 0f             	and    $0xf,%eax
 815669c:	09 d0                	or     %edx,%eax
 815669e:	88 45 c3             	mov    %al,-0x3d(%ebp)
 81566a1:	8b 55 08             	mov    0x8(%ebp),%edx
 81566a4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81566a7:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 81566aa:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81566ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 81566b2:	89 04 24             	mov    %eax,(%esp)
 81566b5:	e8 aa 0d 00 00       	call   8157464 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 81566ba:	83 ec 04             	sub    $0x4,%esp
 81566bd:	8b 55 08             	mov    0x8(%ebp),%edx
 81566c0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81566c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81566c7:	89 04 24             	mov    %eax,(%esp)
 81566ca:	e8 c1 0d 00 00       	call   8157490 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 81566cf:	83 ec 04             	sub    $0x4,%esp
 81566d2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81566d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81566d9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81566dc:	89 04 24             	mov    %eax,(%esp)
 81566df:	e8 d2 0d 00 00       	call   81574b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEeqERKS4_>
 81566e4:	84 c0                	test   %al,%al
 81566e6:	74 7b                	je     8156763 <_ZN23CBossDungeonEntranceLog21IncrementBossStageEndER5CUserhjh+0x135>
 81566e8:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81566ef:	00 
 81566f0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81566f7:	00 
 81566f8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81566fb:	89 04 24             	mov    %eax,(%esp)
 81566fe:	e8 bd 75 f2 ff       	call   807dcc0 <memset@plt>
 8156703:	c7 45 ac 01 00 00 00 	movl   $0x1,-0x54(%ebp)
 815670a:	c7 45 b0 01 00 00 00 	movl   $0x1,-0x50(%ebp)
 8156711:	8b 45 14             	mov    0x14(%ebp),%eax
 8156714:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8156717:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815671a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 815671d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8156721:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8156724:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156728:	89 04 24             	mov    %eax,(%esp)
 815672b:	e8 9a 0d 00 00       	call   81574ca <_ZSt9make_pairIRjR21STBossDungeonTowerLogESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8156730:	83 ec 04             	sub    $0x4,%esp
 8156733:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8156736:	89 44 24 04          	mov    %eax,0x4(%esp)
 815673a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 815673d:	89 04 24             	mov    %eax,(%esp)
 8156740:	e8 c3 0d 00 00       	call   8157508 <_ZNSt4pairIKj21STBossDungeonTowerLogEC1IjS1_EEOS_IT_T0_E>
 8156745:	8b 55 08             	mov    0x8(%ebp),%edx
 8156748:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815674b:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 815674e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8156752:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156756:	89 04 24             	mov    %eax,(%esp)
 8156759:	e8 ec 0d 00 00       	call   815754a <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 815675e:	83 ec 04             	sub    $0x4,%esp
 8156761:	eb 28                	jmp    815678b <_ZN23CBossDungeonEntranceLog21IncrementBossStageEndER5CUserhjh+0x15d>
 8156763:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8156766:	89 04 24             	mov    %eax,(%esp)
 8156769:	e8 08 0e 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 815676e:	8b 50 08             	mov    0x8(%eax),%edx
 8156771:	83 c2 01             	add    $0x1,%edx
 8156774:	89 50 08             	mov    %edx,0x8(%eax)
 8156777:	8d 45 bc             	lea    -0x44(%ebp),%eax
 815677a:	89 04 24             	mov    %eax,(%esp)
 815677d:	e8 f4 0d 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 8156782:	8b 50 10             	mov    0x10(%eax),%edx
 8156785:	03 55 14             	add    0x14(%ebp),%edx
 8156788:	89 50 10             	mov    %edx,0x10(%eax)
 815678b:	c9                   	leave
 815678c:	c3                   	ret
 815678d:	90                   	nop

```

```c
// CBossDungeonEntranceLog::IncrementBossStageEnd @ 0x815662e

/* CBossDungeonEntranceLog::IncrementBossStageEnd(CUser&, unsigned char, unsigned int, unsigned
   char) */

void __thiscall
CBossDungeonEntranceLog::IncrementBossStageEnd
          (CBossDungeonEntranceLog *this,CUser *param_1,uchar param_2,uint param_3,uchar param_4)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> local_48 [4];
  undefined4 local_44;
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,STBossDungeonTowerLog> local_34 [20];
  uint local_20 [7];
  
  local_44 = (uint)param_2;
  uVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_44._0_2_ = CONCAT11(uVar1,local_44._0_1_);
  uVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_44._0_3_ = CONCAT12(uVar1,(undefined2)local_44);
  uVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_44 = CONCAT13(uVar1,(undefined3)local_44) & 0xfffffff;
  local_44 = CONCAT13(local_44._3_1_ | param_4 << 4,(undefined3)local_44);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::find((uint *)local_48);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator==
                    (local_48,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + param_3;
  }
  else {
    memset(&local_58,0,0x10);
    local_58 = 1;
    local_54 = 1;
    local_4c = param_3;
    std::make_pair<unsigned_int&,STBossDungeonTowerLog&>
              (local_20,(STBossDungeonTowerLog *)&local_44);
    std::pair<unsigned_int_const,STBossDungeonTowerLog>::pair<unsigned_int,STBossDungeonTowerLog>
              (local_34,(pair *)local_20);
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::insert(local_3c);
  }
  return;
}

```

---

## IncrementBossStageStart

```asm
// === 081564f0 CBossDungeonEntranceLog::IncrementBossStageStart  [0x081564f0-0x815662d] ===
 81564f0:	55                   	push   %ebp
 81564f1:	89 e5                	mov    %esp,%ebp
 81564f3:	83 ec 78             	sub    $0x78,%esp
 81564f6:	8b 55 10             	mov    0x10(%ebp),%edx
 81564f9:	8b 45 14             	mov    0x14(%ebp),%eax
 81564fc:	88 55 a4             	mov    %dl,-0x5c(%ebp)
 81564ff:	88 45 a0             	mov    %al,-0x60(%ebp)
 8156502:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8156509:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 815650d:	88 45 c0             	mov    %al,-0x40(%ebp)
 8156510:	8b 45 0c             	mov    0xc(%ebp),%eax
 8156513:	89 04 24             	mov    %eax,(%esp)
 8156516:	e8 9d 3d f8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 815651b:	88 45 c1             	mov    %al,-0x3f(%ebp)
 815651e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8156521:	89 04 24             	mov    %eax,(%esp)
 8156524:	e8 f3 0e 00 00       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 8156529:	88 45 c2             	mov    %al,-0x3e(%ebp)
 815652c:	8b 45 0c             	mov    0xc(%ebp),%eax
 815652f:	89 04 24             	mov    %eax,(%esp)
 8156532:	e8 e9 79 fa ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8156537:	83 e0 0f             	and    $0xf,%eax
 815653a:	89 c2                	mov    %eax,%edx
 815653c:	83 e2 0f             	and    $0xf,%edx
 815653f:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 8156543:	83 e0 f0             	and    $0xfffffff0,%eax
 8156546:	09 d0                	or     %edx,%eax
 8156548:	88 45 c3             	mov    %al,-0x3d(%ebp)
 815654b:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 815654f:	83 e0 0f             	and    $0xf,%eax
 8156552:	89 c2                	mov    %eax,%edx
 8156554:	c1 e2 04             	shl    $0x4,%edx
 8156557:	0f b6 45 c3          	movzbl -0x3d(%ebp),%eax
 815655b:	83 e0 0f             	and    $0xf,%eax
 815655e:	09 d0                	or     %edx,%eax
 8156560:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8156563:	8b 55 08             	mov    0x8(%ebp),%edx
 8156566:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8156569:	8d 4d c0             	lea    -0x40(%ebp),%ecx
 815656c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8156570:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156574:	89 04 24             	mov    %eax,(%esp)
 8156577:	e8 e8 0e 00 00       	call   8157464 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 815657c:	83 ec 04             	sub    $0x4,%esp
 815657f:	8b 55 08             	mov    0x8(%ebp),%edx
 8156582:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8156585:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156589:	89 04 24             	mov    %eax,(%esp)
 815658c:	e8 ff 0e 00 00       	call   8157490 <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8156591:	83 ec 04             	sub    $0x4,%esp
 8156594:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8156597:	89 44 24 04          	mov    %eax,0x4(%esp)
 815659b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 815659e:	89 04 24             	mov    %eax,(%esp)
 81565a1:	e8 10 0f 00 00       	call   81574b6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEeqERKS4_>
 81565a6:	84 c0                	test   %al,%al
 81565a8:	74 6e                	je     8156618 <_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x128>
 81565aa:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81565b1:	00 
 81565b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81565b9:	00 
 81565ba:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81565bd:	89 04 24             	mov    %eax,(%esp)
 81565c0:	e8 fb 76 f2 ff       	call   807dcc0 <memset@plt>
 81565c5:	c7 45 ac 01 00 00 00 	movl   $0x1,-0x54(%ebp)
 81565cc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81565cf:	8d 55 ac             	lea    -0x54(%ebp),%edx
 81565d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81565d6:	8d 55 c0             	lea    -0x40(%ebp),%edx
 81565d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81565dd:	89 04 24             	mov    %eax,(%esp)
 81565e0:	e8 e5 0e 00 00       	call   81574ca <_ZSt9make_pairIRjR21STBossDungeonTowerLogESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 81565e5:	83 ec 04             	sub    $0x4,%esp
 81565e8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81565eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81565ef:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81565f2:	89 04 24             	mov    %eax,(%esp)
 81565f5:	e8 0e 0f 00 00       	call   8157508 <_ZNSt4pairIKj21STBossDungeonTowerLogEC1IjS1_EEOS_IT_T0_E>
 81565fa:	8b 55 08             	mov    0x8(%ebp),%edx
 81565fd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8156600:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 8156603:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8156607:	89 54 24 04          	mov    %edx,0x4(%esp)
 815660b:	89 04 24             	mov    %eax,(%esp)
 815660e:	e8 37 0f 00 00       	call   815754a <_ZNSt3mapIj21STBossDungeonTowerLogSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 8156613:	83 ec 04             	sub    $0x4,%esp
 8156616:	eb 14                	jmp    815662c <_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x13c>
 8156618:	8d 45 bc             	lea    -0x44(%ebp),%eax
 815661b:	89 04 24             	mov    %eax,(%esp)
 815661e:	e8 53 0f 00 00       	call   8157576 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj21STBossDungeonTowerLogEEptEv>
 8156623:	8b 50 04             	mov    0x4(%eax),%edx
 8156626:	83 c2 01             	add    $0x1,%edx
 8156629:	89 50 04             	mov    %edx,0x4(%eax)
 815662c:	c9                   	leave
 815662d:	c3                   	ret

```

```c
// CBossDungeonEntranceLog::IncrementBossStageStart @ 0x81564f0

/* CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char) */

void __thiscall
CBossDungeonEntranceLog::IncrementBossStageStart
          (CBossDungeonEntranceLog *this,CUser *param_1,uchar param_2,uchar param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_58 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> local_48 [4];
  undefined4 local_44;
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,STBossDungeonTowerLog> local_34 [20];
  uint local_20 [7];
  
  local_44 = (uint)param_2;
  uVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_44._0_2_ = CONCAT11(uVar1,local_44._0_1_);
  uVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_44._0_3_ = CONCAT12(uVar1,(undefined2)local_44);
  uVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_44 = CONCAT13(uVar1,(undefined3)local_44) & 0xfffffff;
  local_44 = CONCAT13(local_44._3_1_ | param_3 << 4,(undefined3)local_44);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::find((uint *)local_48);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator==
                    (local_48,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  }
  else {
    memset(local_58,0,0x10);
    local_58[0] = 1;
    std::make_pair<unsigned_int&,STBossDungeonTowerLog&>
              (local_20,(STBossDungeonTowerLog *)&local_44);
    std::pair<unsigned_int_const,STBossDungeonTowerLog>::pair<unsigned_int,STBossDungeonTowerLog>
              (local_34,(pair *)local_20);
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::insert(local_3c);
  }
  return;
}

```

