# InterSelectPcroomDailyReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## SendPacket

```asm
// === 081618a6 InterSelectPcroomDailyReward::SendPacket  [0x081618a6-0x8161951] ===
 81618a6:	55                   	push   %ebp
 81618a7:	89 e5                	mov    %esp,%ebp
 81618a9:	56                   	push   %esi
 81618aa:	53                   	push   %ebx
 81618ab:	83 ec 20             	sub    $0x20,%esp
 81618ae:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81618b2:	0f 84 91 00 00 00    	je     8161949 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser+0xa3>
 81618b8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81618bb:	89 04 24             	mov    %eax,(%esp)
 81618be:	e8 89 c4 42 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81618c3:	c7 44 24 08 2e 02 00 	movl   $0x22e,0x8(%esp)
 81618ca:	00 
 81618cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81618d2:	00 
 81618d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81618d6:	89 04 24             	mov    %eax,(%esp)
 81618d9:	e8 1e a0 f6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81618de:	8b 45 08             	mov    0x8(%ebp),%eax
 81618e1:	0f b6 80 32 ec 08 00 	movzbl 0x8ec32(%eax),%eax
 81618e8:	0f be c0             	movsbl %al,%eax
 81618eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81618ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81618f2:	89 04 24             	mov    %eax,(%esp)
 81618f5:	e8 26 a0 f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81618fa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8161901:	00 
 8161902:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161905:	89 04 24             	mov    %eax,(%esp)
 8161908:	e8 4b a0 f6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 816190d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161910:	89 44 24 04          	mov    %eax,0x4(%esp)
 8161914:	8b 45 08             	mov    0x8(%ebp),%eax
 8161917:	89 04 24             	mov    %eax,(%esp)
 816191a:	e8 9b 6c 4e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 816191f:	eb 1b                	jmp    816193c <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser+0x96>
 8161921:	89 d3                	mov    %edx,%ebx
 8161923:	89 c6                	mov    %eax,%esi
 8161925:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161928:	89 04 24             	mov    %eax,(%esp)
 816192b:	e8 50 c5 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8161930:	89 f0                	mov    %esi,%eax
 8161932:	89 da                	mov    %ebx,%edx
 8161934:	89 04 24             	mov    %eax,(%esp)
 8161937:	e8 14 1e 98 00       	call   8ae3750 <_Unwind_Resume>
 816193c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816193f:	89 04 24             	mov    %eax,(%esp)
 8161942:	e8 39 c5 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8161947:	eb 01                	jmp    816194a <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser+0xa4>
 8161949:	90                   	nop
 816194a:	83 c4 20             	add    $0x20,%esp
 816194d:	5b                   	pop    %ebx
 816194e:	5e                   	pop    %esi
 816194f:	5d                   	pop    %ebp
 8161950:	c3                   	ret
 8161951:	90                   	nop

```

```c
// InterSelectPcroomDailyReward::SendPacket @ 0x81618a6

/* InterSelectPcroomDailyReward::SendPacket(CUser*) */

void InterSelectPcroomDailyReward::SendPacket(CUser *param_1)

{
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081618d9 to 0816191e has its CatchHandler @ 08161921 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x22e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_1[0x8ec32]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 081616ce InterSelectPcroomDailyReward::dispatch_sig  [0x081616ce-0x816179b] ===
 81616ce:	55                   	push   %ebp
 81616cf:	89 e5                	mov    %esp,%ebp
 81616d1:	56                   	push   %esi
 81616d2:	53                   	push   %ebx
 81616d3:	83 ec 40             	sub    $0x40,%esp
 81616d6:	8b 45 10             	mov    0x10(%ebp),%eax
 81616d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81616dc:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81616e0:	75 33                	jne    8161715 <_ZN28InterSelectPcroomDailyReward12dispatch_sigEP5CUserPci+0x47>
 81616e2:	c7 44 24 10 08 9a b7 	movl   $0x8b79a08,0x10(%esp)
 81616e9:	08 
 81616ea:	c7 44 24 0c 9a 01 00 	movl   $0x19a,0xc(%esp)
 81616f1:	00 
 81616f2:	c7 44 24 08 60 a8 b7 	movl   $0x8b7a860,0x8(%esp)
 81616f9:	08 
 81616fa:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8161701:	08 
 8161702:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8161709:	e8 fc 24 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816170e:	b8 9b 01 00 00       	mov    $0x19b,%eax
 8161713:	eb 7f                	jmp    8161794 <_ZN28InterSelectPcroomDailyReward12dispatch_sigEP5CUserPci+0xc6>
 8161715:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161718:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 816171c:	8b 45 0c             	mov    0xc(%ebp),%eax
 816171f:	88 90 32 ec 08 00    	mov    %dl,0x8ec32(%eax)
 8161725:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161728:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 816172c:	0f be f0             	movsbl %al,%esi
 816172f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161732:	8b 00                	mov    (%eax),%eax
 8161734:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816173b:	00 
 816173c:	89 04 24             	mov    %eax,(%esp)
 816173f:	e8 07 79 fa ff       	call   810904b <_Z14NumberToStringji>
 8161744:	89 c3                	mov    %eax,%ebx
 8161746:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816174d:	00 
 816174e:	c7 44 24 08 9f 01 00 	movl   $0x19f,0x8(%esp)
 8161755:	00 
 8161756:	c7 44 24 04 60 a8 b7 	movl   $0x8b7a860,0x4(%esp)
 816175d:	08 
 816175e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8161761:	89 04 24             	mov    %eax,(%esp)
 8161764:	e8 af df 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8161769:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816176d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8161771:	c7 44 24 04 2c 9a b7 	movl   $0x8b79a2c,0x4(%esp)
 8161778:	08 
 8161779:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816177c:	89 04 24             	mov    %eax,(%esp)
 816177f:	e8 04 e0 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8161784:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161787:	89 04 24             	mov    %eax,(%esp)
 816178a:	e8 17 01 00 00       	call   81618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>
 816178f:	b8 00 00 00 00       	mov    $0x0,%eax
 8161794:	83 c4 40             	add    $0x40,%esp
 8161797:	5b                   	pop    %ebx
 8161798:	5e                   	pop    %esi
 8161799:	5d                   	pop    %ebp
 816179a:	c3                   	ret
 816179b:	90                   	nop

```

```c
// InterSelectPcroomDailyReward::dispatch_sig @ 0x81616ce

/* InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectPcroomDailyReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "virtual int InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int)",0x19a,
               "[Taiwan, pcroom] interMsg is null.");
    uVar2 = 0x19b;
  }
  else {
    param_2[0x8ec32] = *(char *)(param_3 + 4);
    cVar1 = *(char *)(param_3 + 4);
    uVar2 = NumberToString(*(uint *)param_3,0);
    cMyTrace::cMyTrace(local_20,
                       "virtual int InterSelectPcroomDailyReward::dispatch_sig(CUser*, char*, int)",
                       0x19f,0);
    cMyTrace::operator()
              (local_20,"[Taiwan, pcroom] m_id:%s, remain_reward_count:%d",uVar2,(int)cVar1);
    SendPacket((CUser *)param_2);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0816179c InterSelectPcroomDailyReward::makeRequest  [0x0816179c-0x81618a5] ===
 816179c:	55                   	push   %ebp
 816179d:	89 e5                	mov    %esp,%ebp
 816179f:	56                   	push   %esi
 81617a0:	53                   	push   %ebx
 81617a1:	83 ec 40             	sub    $0x40,%esp
 81617a4:	8b 45 10             	mov    0x10(%ebp),%eax
 81617a7:	88 45 e4             	mov    %al,-0x1c(%ebp)
 81617aa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81617af:	c7 44 24 08 a8 01 00 	movl   $0x1a8,0x8(%esp)
 81617b6:	00 
 81617b7:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 81617be:	08 
 81617bf:	89 04 24             	mov    %eax,(%esp)
 81617c2:	e8 bf e2 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81617c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81617ce:	00 
 81617cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81617d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81617d6:	89 04 24             	mov    %eax,(%esp)
 81617d9:	e8 48 74 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81617de:	8b 45 08             	mov    0x8(%ebp),%eax
 81617e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81617e5:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 81617ec:	00 
 81617ed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81617f0:	89 04 24             	mov    %eax,(%esp)
 81617f3:	e8 58 21 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 81617f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81617fb:	89 04 24             	mov    %eax,(%esp)
 81617fe:	e8 4b 74 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8161803:	89 04 24             	mov    %eax,(%esp)
 8161806:	e8 0d 10 00 00       	call   8162818 <_ZN12CStreamGuard11GetInBufferIN28InterSelectPcroomDailyReward3MsgEEEPT_v>
 816180b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816180e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8161812:	75 35                	jne    8161849 <_ZN28InterSelectPcroomDailyReward11makeRequestEijc+0xad>
 8161814:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161817:	89 44 24 14          	mov    %eax,0x14(%esp)
 816181b:	c7 44 24 10 5d 9a b7 	movl   $0x8b79a5d,0x10(%esp)
 8161822:	08 
 8161823:	c7 44 24 0c ad 01 00 	movl   $0x1ad,0xc(%esp)
 816182a:	00 
 816182b:	c7 44 24 08 00 a8 b7 	movl   $0x8b7a800,0x8(%esp)
 8161832:	08 
 8161833:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 816183a:	08 
 816183b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8161842:	e8 c3 23 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8161847:	eb 4b                	jmp    8161894 <_ZN28InterSelectPcroomDailyReward11makeRequestEijc+0xf8>
 8161849:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816184c:	8b 55 0c             	mov    0xc(%ebp),%edx
 816184f:	89 10                	mov    %edx,(%eax)
 8161851:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161854:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8161858:	88 50 04             	mov    %dl,0x4(%eax)
 816185b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8161860:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8161863:	89 54 24 08          	mov    %edx,0x8(%esp)
 8161867:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816186e:	00 
 816186f:	89 04 24             	mov    %eax,(%esp)
 8161872:	e8 67 f7 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8161877:	eb 1b                	jmp    8161894 <_ZN28InterSelectPcroomDailyReward11makeRequestEijc+0xf8>
 8161879:	89 d3                	mov    %edx,%ebx
 816187b:	89 c6                	mov    %eax,%esi
 816187d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161880:	89 04 24             	mov    %eax,(%esp)
 8161883:	e8 4a b0 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8161888:	89 f0                	mov    %esi,%eax
 816188a:	89 da                	mov    %ebx,%edx
 816188c:	89 04 24             	mov    %eax,(%esp)
 816188f:	e8 bc 1e 98 00       	call   8ae3750 <_Unwind_Resume>
 8161894:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161897:	89 04 24             	mov    %eax,(%esp)
 816189a:	e8 33 b0 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816189f:	83 c4 40             	add    $0x40,%esp
 81618a2:	5b                   	pop    %ebx
 81618a3:	5e                   	pop    %esi
 81618a4:	5d                   	pop    %ebp
 81618a5:	c3                   	ret

```

```c
// InterSelectPcroomDailyReward::makeRequest @ 0x816179c

/* InterSelectPcroomDailyReward::makeRequest(int, unsigned int, char) */

void InterSelectPcroomDailyReward::makeRequest(int param_1,uint param_2,char param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x1a8);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 081617f3 to 08161876 has its CatchHandler @ 08161879 */
  Taiwan::internal_stream(local_18,0xd,param_1);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectPcroomDailyReward::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectPcroomDailyReward::makeRequest(int, memberIdentificationNumber_t, char)"
               ,0x1ad,"[Taiwan, pcroom] m_id:%d",param_2);
  }
  else {
    *(uint *)local_10 = param_2;
    local_10[4] = (Msg)param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

