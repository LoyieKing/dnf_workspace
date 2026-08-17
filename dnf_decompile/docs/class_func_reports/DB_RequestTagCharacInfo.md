# DB_RequestTagCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844768c DB_RequestTagCharacInfo::dispatch  [0x0844768c-0x84478a5] ===
 844768c:	55                   	push   %ebp
 844768d:	89 e5                	mov    %esp,%ebp
 844768f:	56                   	push   %esi
 8447690:	53                   	push   %ebx
 8447691:	83 ec 70             	sub    $0x70,%esp
 8447694:	8b 45 14             	mov    0x14(%ebp),%eax
 8447697:	89 04 24             	mov    %eax,(%esp)
 844769a:	e8 75 ce 00 00       	call   8454514 <_ZN6Stream12GetOutBufferI27SIG_REQUEST_TAG_CHARAC_INFOEEPT_v>
 844769f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84476a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84476a5:	8d 50 05             	lea    0x5(%eax),%edx
 84476a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84476ab:	8b 00                	mov    (%eax),%eax
 84476ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84476b1:	89 04 24             	mov    %eax,(%esp)
 84476b4:	e8 ed 28 fc ff       	call   8409fa6 <_ZN13DB_LoadCharac17_GetTagCharacInfoEjP15TAG_CHARAC_DATA>
 84476b9:	88 45 f7             	mov    %al,-0x9(%ebp)
 84476bc:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84476c0:	83 f0 01             	xor    $0x1,%eax
 84476c3:	84 c0                	test   %al,%al
 84476c5:	74 49                	je     8447710 <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x84>
 84476c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84476ca:	8b 18                	mov    (%eax),%ebx
 84476cc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84476d3:	00 
 84476d4:	c7 44 24 08 1b b2 00 	movl   $0xb21b,0x8(%esp)
 84476db:	00 
 84476dc:	c7 44 24 04 20 b1 c5 	movl   $0x8c5b120,0x4(%esp)
 84476e3:	08 
 84476e4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84476e7:	89 04 24             	mov    %eax,(%esp)
 84476ea:	e8 29 80 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84476ef:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84476f3:	c7 44 24 04 f8 82 c5 	movl   $0x8c582f8,0x4(%esp)
 84476fa:	08 
 84476fb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84476fe:	89 04 24             	mov    %eax,(%esp)
 8447701:	e8 82 80 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8447706:	b8 00 00 00 00       	mov    $0x0,%eax
 844770b:	e9 8f 01 00 00       	jmp    844789f <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x213>
 8447710:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447713:	8d 50 7d             	lea    0x7d(%eax),%edx
 8447716:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447719:	8b 00                	mov    (%eax),%eax
 844771b:	89 54 24 04          	mov    %edx,0x4(%esp)
 844771f:	89 04 24             	mov    %eax,(%esp)
 8447722:	e8 7b 34 fc ff       	call   840aba2 <_ZN16DB_LoadInventory18_GetTagCharacInvenEjP21TAG_CHARAC_INVEN_DATA>
 8447727:	88 45 f7             	mov    %al,-0x9(%ebp)
 844772a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 844772e:	83 f0 01             	xor    $0x1,%eax
 8447731:	84 c0                	test   %al,%al
 8447733:	74 49                	je     844777e <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0xf2>
 8447735:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447738:	8b 18                	mov    (%eax),%ebx
 844773a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8447741:	00 
 8447742:	c7 44 24 08 23 b2 00 	movl   $0xb223,0x8(%esp)
 8447749:	00 
 844774a:	c7 44 24 04 20 b1 c5 	movl   $0x8c5b120,0x4(%esp)
 8447751:	08 
 8447752:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8447755:	89 04 24             	mov    %eax,(%esp)
 8447758:	e8 bb 7f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844775d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8447761:	c7 44 24 04 38 83 c5 	movl   $0x8c58338,0x4(%esp)
 8447768:	08 
 8447769:	8d 45 c0             	lea    -0x40(%ebp),%eax
 844776c:	89 04 24             	mov    %eax,(%esp)
 844776f:	e8 14 80 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8447774:	b8 00 00 00 00       	mov    $0x0,%eax
 8447779:	e9 21 01 00 00       	jmp    844789f <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x213>
 844777e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447781:	8d b0 c0 1e 00 00    	lea    0x1ec0(%eax),%esi
 8447787:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844778a:	8d 58 7d             	lea    0x7d(%eax),%ebx
 844778d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447790:	8d 88 bb 05 00 00    	lea    0x5bb(%eax),%ecx
 8447796:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447799:	8d 90 c4 1e 00 00    	lea    0x1ec4(%eax),%edx
 844779f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84477a2:	8b 00                	mov    (%eax),%eax
 84477a4:	89 74 24 10          	mov    %esi,0x10(%esp)
 84477a8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84477ac:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84477b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84477b4:	89 04 24             	mov    %eax,(%esp)
 84477b7:	e8 ce 46 fc ff       	call   840be8a <_ZN16DB_LoadInventory14_GetUserAvatarEjP16AvatarDetailInfoP10Inven_ItemS3_Ri>
 84477bc:	88 45 f7             	mov    %al,-0x9(%ebp)
 84477bf:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 84477c3:	83 f0 01             	xor    $0x1,%eax
 84477c6:	84 c0                	test   %al,%al
 84477c8:	74 49                	je     8447813 <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x187>
 84477ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84477cd:	8b 18                	mov    (%eax),%ebx
 84477cf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84477d6:	00 
 84477d7:	c7 44 24 08 2c b2 00 	movl   $0xb22c,0x8(%esp)
 84477de:	00 
 84477df:	c7 44 24 04 20 b1 c5 	movl   $0x8c5b120,0x4(%esp)
 84477e6:	08 
 84477e7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84477ea:	89 04 24             	mov    %eax,(%esp)
 84477ed:	e8 26 7f 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84477f2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84477f6:	c7 44 24 04 78 83 c5 	movl   $0x8c58378,0x4(%esp)
 84477fd:	08 
 84477fe:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8447801:	89 04 24             	mov    %eax,(%esp)
 8447804:	e8 7f 7f 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8447809:	b8 00 00 00 00       	mov    $0x0,%eax
 844780e:	e9 8c 00 00 00       	jmp    844789f <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x213>
 8447813:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447816:	8d 90 a1 40 00 00    	lea    0x40a1(%eax),%edx
 844781c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844781f:	8b 00                	mov    (%eax),%eax
 8447821:	89 54 24 04          	mov    %edx,0x4(%esp)
 8447825:	89 04 24             	mov    %eax,(%esp)
 8447828:	e8 45 d3 fb ff       	call   8404b72 <_ZN10DB_LoadEtc14_LoadQuestShopEjP22CHARAC_QUEST_SHOP_DATA>
 844782d:	88 45 f7             	mov    %al,-0x9(%ebp)
 8447830:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8447834:	83 f0 01             	xor    $0x1,%eax
 8447837:	84 c0                	test   %al,%al
 8447839:	74 46                	je     8447881 <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x1f5>
 844783b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844783e:	8b 18                	mov    (%eax),%ebx
 8447840:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8447847:	00 
 8447848:	c7 44 24 08 34 b2 00 	movl   $0xb234,0x8(%esp)
 844784f:	00 
 8447850:	c7 44 24 04 20 b1 c5 	movl   $0x8c5b120,0x4(%esp)
 8447857:	08 
 8447858:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844785b:	89 04 24             	mov    %eax,(%esp)
 844785e:	e8 b5 7e 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8447863:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8447867:	c7 44 24 04 b4 83 c5 	movl   $0x8c583b4,0x4(%esp)
 844786e:	08 
 844786f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8447872:	89 04 24             	mov    %eax,(%esp)
 8447875:	e8 0e 7f 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844787a:	b8 00 00 00 00       	mov    $0x0,%eax
 844787f:	eb 1e                	jmp    844789f <_ZN23DB_RequestTagCharacInfo8dispatchEiiP6Stream+0x213>
 8447881:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447884:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447888:	8b 45 10             	mov    0x10(%ebp),%eax
 844788b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844788f:	8b 45 08             	mov    0x8(%ebp),%eax
 8447892:	89 04 24             	mov    %eax,(%esp)
 8447895:	e8 0c 00 00 00       	call   84478a6 <_ZN23DB_RequestTagCharacInfo10sendResultEiP27SIG_REQUEST_TAG_CHARAC_INFO>
 844789a:	b8 01 00 00 00       	mov    $0x1,%eax
 844789f:	83 c4 70             	add    $0x70,%esp
 84478a2:	5b                   	pop    %ebx
 84478a3:	5e                   	pop    %esi
 84478a4:	5d                   	pop    %ebp
 84478a5:	c3                   	ret

```

```c
// DB_RequestTagCharacInfo::dispatch @ 0x844768c

/* DB_RequestTagCharacInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_RequestTagCharacInfo::dispatch
          (DB_RequestTagCharacInfo *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  SIG_REQUEST_TAG_CHARAC_INFO *local_14;
  char local_d;
  
  local_14 = Stream::GetOutBuffer<SIG_REQUEST_TAG_CHARAC_INFO>(param_3);
  local_d = DB_LoadCharac::_GetTagCharacInfo(*(uint *)local_14,(TAG_CHARAC_DATA *)(local_14 + 5));
  if (local_d == '\x01') {
    local_d = DB_LoadInventory::_GetTagCharacInven
                        (*(uint *)local_14,(TAG_CHARAC_INVEN_DATA *)(local_14 + 0x7d));
    if (local_d == '\x01') {
      local_d = DB_LoadInventory::_GetUserAvatar
                          (*(uint *)local_14,(AvatarDetailInfo *)(local_14 + 0x1ec4),
                           (Inven_Item *)(local_14 + 0x5bb),(Inven_Item *)(local_14 + 0x7d),
                           (int *)(local_14 + 0x1ec0));
      if (local_d == '\x01') {
        local_d = DB_LoadEtc::_LoadQuestShop
                            (*(uint *)local_14,(CHARAC_QUEST_SHOP_DATA *)(local_14 + 0x40a1));
        if (local_d == '\x01') {
          sendResult(this,param_2,local_14);
          uVar2 = 1;
        }
        else {
          uVar2 = *(undefined4 *)local_14;
          cMyTrace::cMyTrace(local_24,
                             "virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",
                             0xb234,5);
          cMyTrace::operator()
                    (local_24,"DB_RequestTagCharacInfo::_LoadQuestShop fail, characNo(%d)",uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar1 = *(uint *)local_14;
        cMyTrace::cMyTrace(local_34,
                           "virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",
                           0xb22c,5);
        cMyTrace::operator()
                  (local_34,"DB_RequestTagCharacInfo::_GetUserAvatar fail, characNo(%d)",uVar1);
        uVar2 = 0;
      }
    }
    else {
      uVar1 = *(uint *)local_14;
      cMyTrace::cMyTrace(local_44,
                         "virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",0xb223,
                         5);
      cMyTrace::operator()
                (local_44,"DB_RequestTagChracInfo::_GetTagCharacInven fail, characNo(%d)",uVar1);
      uVar2 = 0;
    }
  }
  else {
    uVar1 = *(uint *)local_14;
    cMyTrace::cMyTrace(local_54,"virtual bool DB_RequestTagCharacInfo::dispatch(int, int, Stream*)",
                       0xb21b,5);
    cMyTrace::operator()
              (local_54,"DB_RequestTagChracInfo::_GetTagCharacInfo fail, characNo(%d)",uVar1);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## sendResult

```asm
// === 084478a6 DB_RequestTagCharacInfo::sendResult  [0x084478a6-0x8447991] ===
 84478a6:	55                   	push   %ebp
 84478a7:	89 e5                	mov    %esp,%ebp
 84478a9:	56                   	push   %esi
 84478aa:	53                   	push   %ebx
 84478ab:	83 ec 20             	sub    $0x20,%esp
 84478ae:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84478b3:	c7 44 24 08 3f b2 00 	movl   $0xb23f,0x8(%esp)
 84478ba:	00 
 84478bb:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84478c2:	08 
 84478c3:	89 04 24             	mov    %eax,(%esp)
 84478c6:	e8 bb 81 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84478cb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84478d2:	00 
 84478d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84478d7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84478da:	89 04 24             	mov    %eax,(%esp)
 84478dd:	e8 44 13 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84478e2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84478e5:	89 04 24             	mov    %eax,(%esp)
 84478e8:	e8 59 13 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84478ed:	c7 44 24 04 fe 02 00 	movl   $0x2fe,0x4(%esp)
 84478f4:	00 
 84478f5:	89 04 24             	mov    %eax,(%esp)
 84478f8:	e8 59 13 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84478fd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447900:	89 04 24             	mov    %eax,(%esp)
 8447903:	e8 3e 13 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8447908:	8b 55 0c             	mov    0xc(%ebp),%edx
 844790b:	89 54 24 04          	mov    %edx,0x4(%esp)
 844790f:	89 04 24             	mov    %eax,(%esp)
 8447912:	e8 3f 13 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8447917:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844791a:	89 04 24             	mov    %eax,(%esp)
 844791d:	e8 2c 13 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8447922:	89 04 24             	mov    %eax,(%esp)
 8447925:	e8 24 fb de ff       	call   823744e <_ZN12CStreamGuard11GetInBufferI27SIG_REQUEST_TAG_CHARAC_INFOEEPT_v>
 844792a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844792d:	c7 44 24 08 4c 41 00 	movl   $0x414c,0x8(%esp)
 8447934:	00 
 8447935:	8b 45 10             	mov    0x10(%ebp),%eax
 8447938:	89 44 24 04          	mov    %eax,0x4(%esp)
 844793c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844793f:	89 04 24             	mov    %eax,(%esp)
 8447942:	e8 59 5f c3 ff       	call   807d8a0 <memcpy@plt>
 8447947:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844794c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 844794f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8447953:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844795a:	00 
 844795b:	89 04 24             	mov    %eax,(%esp)
 844795e:	e8 7b 96 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8447963:	eb 1b                	jmp    8447980 <_ZN23DB_RequestTagCharacInfo10sendResultEiP27SIG_REQUEST_TAG_CHARAC_INFO+0xda>
 8447965:	89 d3                	mov    %edx,%ebx
 8447967:	89 c6                	mov    %eax,%esi
 8447969:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844796c:	89 04 24             	mov    %eax,(%esp)
 844796f:	e8 5e 4f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8447974:	89 f0                	mov    %esi,%eax
 8447976:	89 da                	mov    %ebx,%edx
 8447978:	89 04 24             	mov    %eax,(%esp)
 844797b:	e8 d0 bd 69 00       	call   8ae3750 <_Unwind_Resume>
 8447980:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447983:	89 04 24             	mov    %eax,(%esp)
 8447986:	e8 47 4f 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844798b:	83 c4 20             	add    $0x20,%esp
 844798e:	5b                   	pop    %ebx
 844798f:	5e                   	pop    %esi
 8447990:	5d                   	pop    %ebp
 8447991:	c3                   	ret

```

```c
// DB_RequestTagCharacInfo::sendResult @ 0x84478a6

/* DB_RequestTagCharacInfo::sendResult(int, SIG_REQUEST_TAG_CHARAC_INFO*) */

void __thiscall
DB_RequestTagCharacInfo::sendResult
          (DB_RequestTagCharacInfo *this,int param_1,SIG_REQUEST_TAG_CHARAC_INFO *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQUEST_TAG_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb23f);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084478f8 to 08447962 has its CatchHandler @ 08447965 */
  CStreamGuard::operator<<(pCVar2,0x2fe);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_TAG_CHARAC_INFO>(pCVar2);
  memcpy(local_10,param_2,0x414c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

