# Dispatcher_CheckGuildAddressDouble

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082087a4 Dispatcher_CheckGuildAddressDouble::dispatch_sig  [0x082087a4-0x8208a25] ===
 82087a4:	55                   	push   %ebp
 82087a5:	89 e5                	mov    %esp,%ebp
 82087a7:	56                   	push   %esi
 82087a8:	53                   	push   %ebx
 82087a9:	83 ec 30             	sub    $0x30,%esp
 82087ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82087af:	89 04 24             	mov    %eax,(%esp)
 82087b2:	e8 d5 1b ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82087b7:	83 f8 02             	cmp    $0x2,%eax
 82087ba:	7e 0f                	jle    82087cb <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x27>
 82087bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82087bf:	89 04 24             	mov    %eax,(%esp)
 82087c2:	e8 6b 7c f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82087c7:	85 c0                	test   %eax,%eax
 82087c9:	75 07                	jne    82087d2 <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 82087cb:	b8 01 00 00 00       	mov    $0x1,%eax
 82087d0:	eb 05                	jmp    82087d7 <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x33>
 82087d2:	b8 00 00 00 00       	mov    $0x0,%eax
 82087d7:	84 c0                	test   %al,%al
 82087d9:	74 2b                	je     8208806 <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x62>
 82087db:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82087e2:	00 
 82087e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82087ea:	00 
 82087eb:	c7 44 24 04 a0 e6 bc 	movl   $0x8bce6a0,0x4(%esp)
 82087f2:	08 
 82087f3:	c7 04 24 af a3 00 00 	movl   $0xa3af,(%esp)
 82087fa:	e8 d8 80 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82087ff:	89 c3                	mov    %eax,%ebx
 8208801:	e9 16 02 00 00       	jmp    8208a1c <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x278>
 8208806:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 820880d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8208810:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208814:	8b 45 10             	mov    0x10(%ebp),%eax
 8208817:	89 04 24             	mov    %eax,(%esp)
 820881a:	e8 d1 48 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 820881f:	83 f0 01             	xor    $0x1,%eax
 8208822:	84 c0                	test   %al,%al
 8208824:	74 2b                	je     8208851 <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0xad>
 8208826:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820882d:	00 
 820882e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208835:	00 
 8208836:	c7 44 24 04 a0 e6 bc 	movl   $0x8bce6a0,0x4(%esp)
 820883d:	08 
 820883e:	c7 04 24 be a3 00 00 	movl   $0xa3be,(%esp)
 8208845:	e8 8d 80 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820884a:	89 c3                	mov    %eax,%ebx
 820884c:	e9 cb 01 00 00       	jmp    8208a1c <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x278>
 8208851:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208854:	89 04 24             	mov    %eax,(%esp)
 8208857:	e8 ca 6c 02 00       	call   822f526 <_ZN15CUserCharacInfo18getCreateGuildAddrEv>
 820885c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 820885f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8208863:	75 2b                	jne    8208890 <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0xec>
 8208865:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820886c:	00 
 820886d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208874:	00 
 8208875:	c7 44 24 04 a0 e6 bc 	movl   $0x8bce6a0,0x4(%esp)
 820887c:	08 
 820887d:	c7 04 24 c2 a3 00 00 	movl   $0xa3c2,(%esp)
 8208884:	e8 4e 80 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208889:	89 c3                	mov    %eax,%ebx
 820888b:	e9 8c 01 00 00       	jmp    8208a1c <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x278>
 8208890:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208893:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8208897:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 820889e:	00 
 820889f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82088a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82088a6:	8b 45 10             	mov    0x10(%ebp),%eax
 82088a9:	89 04 24             	mov    %eax,(%esp)
 82088ac:	e8 0b 4a 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 82088b1:	83 f0 01             	xor    $0x1,%eax
 82088b4:	84 c0                	test   %al,%al
 82088b6:	74 25                	je     82088dd <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x139>
 82088b8:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 82088bf:	00 
 82088c0:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 82088c7:	00 
 82088c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82088cb:	89 04 24             	mov    %eax,(%esp)
 82088ce:	e8 6f 36 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82088d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 82088d8:	e9 3f 01 00 00       	jmp    8208a1c <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x278>
 82088dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82088e0:	89 04 24             	mov    %eax,(%esp)
 82088e3:	e8 a9 ce ff ff       	call   8205791 <_Z9check_urlPKc>
 82088e8:	83 f0 01             	xor    $0x1,%eax
 82088eb:	84 c0                	test   %al,%al
 82088ed:	74 25                	je     8208914 <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x170>
 82088ef:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 82088f6:	00 
 82088f7:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 82088fe:	00 
 82088ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208902:	89 04 24             	mov    %eax,(%esp)
 8208905:	e8 38 36 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820890a:	bb 00 00 00 00       	mov    $0x0,%ebx
 820890f:	e9 08 01 00 00       	jmp    8208a1c <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x278>
 8208914:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8208919:	c7 44 24 08 d1 a3 00 	movl   $0xa3d1,0x8(%esp)
 8208920:	00 
 8208921:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8208928:	08 
 8208929:	89 04 24             	mov    %eax,(%esp)
 820892c:	e8 55 71 08 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8208931:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8208938:	00 
 8208939:	89 44 24 04          	mov    %eax,0x4(%esp)
 820893d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208940:	89 04 24             	mov    %eax,(%esp)
 8208943:	e8 de 02 ec ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8208948:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820894b:	89 04 24             	mov    %eax,(%esp)
 820894e:	e8 f3 02 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8208953:	c7 44 24 04 ec 00 00 	movl   $0xec,0x4(%esp)
 820895a:	00 
 820895b:	89 04 24             	mov    %eax,(%esp)
 820895e:	e8 f3 02 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8208963:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208966:	89 04 24             	mov    %eax,(%esp)
 8208969:	e8 28 03 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 820896e:	89 c3                	mov    %eax,%ebx
 8208970:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208973:	89 04 24             	mov    %eax,(%esp)
 8208976:	e8 cb 02 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 820897b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820897f:	89 04 24             	mov    %eax,(%esp)
 8208982:	e8 cf 02 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8208987:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820898a:	89 04 24             	mov    %eax,(%esp)
 820898d:	e8 bc 02 ec ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8208992:	89 04 24             	mov    %eax,(%esp)
 8208995:	e8 c4 ef 02 00       	call   823795e <_ZN12CStreamGuard11GetInBufferI30SIG_DOUBLE_CHECK_GUILD_ADDRESSEEPT_v>
 820899a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820899d:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 82089a4:	00 
 82089a5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82089ac:	00 
 82089ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82089b0:	89 04 24             	mov    %eax,(%esp)
 82089b3:	e8 08 53 e7 ff       	call   807dcc0 <memset@plt>
 82089b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82089bb:	89 c2                	mov    %eax,%edx
 82089bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82089c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 82089c4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82089c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82089cb:	89 04 24             	mov    %eax,(%esp)
 82089ce:	e8 cd 4e e7 ff       	call   807d8a0 <memcpy@plt>
 82089d3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 82089d8:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 82089db:	89 54 24 08          	mov    %edx,0x8(%esp)
 82089df:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82089e6:	00 
 82089e7:	89 04 24             	mov    %eax,(%esp)
 82089ea:	e8 ef 85 36 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82089ef:	bb 00 00 00 00       	mov    $0x0,%ebx
 82089f4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82089f7:	89 04 24             	mov    %eax,(%esp)
 82089fa:	e8 d3 3e 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82089ff:	eb 1b                	jmp    8208a1c <_ZN34Dispatcher_CheckGuildAddressDouble12dispatch_sigEP5CUserR9PacketBuf+0x278>
 8208a01:	89 d3                	mov    %edx,%ebx
 8208a03:	89 c6                	mov    %eax,%esi
 8208a05:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208a08:	89 04 24             	mov    %eax,(%esp)
 8208a0b:	e8 c2 3e 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8208a10:	89 f0                	mov    %esi,%eax
 8208a12:	89 da                	mov    %ebx,%edx
 8208a14:	89 04 24             	mov    %eax,(%esp)
 8208a17:	e8 34 ad 8d 00       	call   8ae3750 <_Unwind_Resume>
 8208a1c:	89 d8                	mov    %ebx,%eax
 8208a1e:	83 c4 30             	add    $0x30,%esp
 8208a21:	5b                   	pop    %ebx
 8208a22:	5e                   	pop    %esi
 8208a23:	5d                   	pop    %ebp
 8208a24:	c3                   	ret
 8208a25:	90                   	nop

```

```c
// Dispatcher_CheckGuildAddressDouble::dispatch_sig @ 0x82087a4

/* Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckGuildAddressDouble::dispatch_sig
          (Dispatcher_CheckGuildAddressDouble *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_20 [8];
  size_t local_18;
  char *local_14;
  SIG_DOUBLE_CHECK_GUILD_ADDRESS *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_082087d7;
    }
  }
  bVar1 = true;
LAB_082087d7:
  if (bVar1) {
    uVar4 = LineFunc(0xa3af,
                     "virtual int Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_18 = 0;
    cVar2 = PacketBuf::get_int(param_2,(int *)&local_18);
    if (cVar2 == '\x01') {
      local_14 = (char *)CUserCharacInfo::getCreateGuildAddr((CUserCharacInfo *)param_1);
      if (local_14 == (char *)0x0) {
        uVar4 = LineFunc(0xa3c2,
                         "virtual int Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
      else {
        cVar2 = PacketBuf::get_str(param_2,local_14,0xd,local_18);
        if (cVar2 == '\x01') {
          cVar2 = check_url(local_14);
          if (cVar2 == '\x01') {
            pSVar5 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",
                                         0xa3d1);
            CStreamGuard::CStreamGuard(local_20,pSVar5,true);
            pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0820895e to 082089ee has its CatchHandler @ 08208a01 */
            CStreamGuard::operator<<(pCVar6,0xec);
            iVar3 = CUser::GetUID(param_1);
            pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
            CStreamGuard::operator<<(pCVar6,iVar3);
            pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_20);
            local_10 = CStreamGuard::GetInBuffer<SIG_DOUBLE_CHECK_GUILD_ADDRESS>(pCVar6);
            memset(local_10,0,0xd);
            memcpy(local_10,local_14,local_18);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
            uVar4 = 0;
            CStreamGuard::~CStreamGuard(local_20);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xa0,0x70);
            uVar4 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0xa0,0x6e);
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = LineFunc(0xa3be,
                       "virtual int Dispatcher_CheckGuildAddressDouble::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar4;
}

```

