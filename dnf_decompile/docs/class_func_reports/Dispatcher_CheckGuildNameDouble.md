# Dispatcher_CheckGuildNameDouble

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082084e8 Dispatcher_CheckGuildNameDouble::dispatch_sig  [0x082084e8-0x82087a3] ===
 82084e8:	55                   	push   %ebp
 82084e9:	89 e5                	mov    %esp,%ebp
 82084eb:	56                   	push   %esi
 82084ec:	53                   	push   %ebx
 82084ed:	83 ec 30             	sub    $0x30,%esp
 82084f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82084f3:	89 04 24             	mov    %eax,(%esp)
 82084f6:	e8 91 1e ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82084fb:	83 f8 02             	cmp    $0x2,%eax
 82084fe:	7e 0f                	jle    820850f <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8208500:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208503:	89 04 24             	mov    %eax,(%esp)
 8208506:	e8 27 7f f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820850b:	85 c0                	test   %eax,%eax
 820850d:	75 07                	jne    8208516 <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 820850f:	b8 01 00 00 00       	mov    $0x1,%eax
 8208514:	eb 05                	jmp    820851b <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x33>
 8208516:	b8 00 00 00 00       	mov    $0x0,%eax
 820851b:	84 c0                	test   %al,%al
 820851d:	74 2b                	je     820854a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x62>
 820851f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208526:	00 
 8208527:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820852e:	00 
 820852f:	c7 44 24 04 00 e7 bc 	movl   $0x8bce700,0x4(%esp)
 8208536:	08 
 8208537:	c7 04 24 69 a3 00 00 	movl   $0xa369,(%esp)
 820853e:	e8 94 83 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208543:	89 c3                	mov    %eax,%ebx
 8208545:	e9 50 02 00 00       	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 820854a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8208551:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8208554:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208558:	8b 45 10             	mov    0x10(%ebp),%eax
 820855b:	89 04 24             	mov    %eax,(%esp)
 820855e:	e8 8d 4b 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8208563:	83 f0 01             	xor    $0x1,%eax
 8208566:	84 c0                	test   %al,%al
 8208568:	74 2b                	je     8208595 <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0xad>
 820856a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208571:	00 
 8208572:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208579:	00 
 820857a:	c7 44 24 04 00 e7 bc 	movl   $0x8bce700,0x4(%esp)
 8208581:	08 
 8208582:	c7 04 24 7e a3 00 00 	movl   $0xa37e,(%esp)
 8208589:	e8 49 83 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820858e:	89 c3                	mov    %eax,%ebx
 8208590:	e9 05 02 00 00       	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 8208595:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208598:	85 c0                	test   %eax,%eax
 820859a:	78 08                	js     82085a4 <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0xbc>
 820859c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820859f:	83 f8 16             	cmp    $0x16,%eax
 82085a2:	7e 2b                	jle    82085cf <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0xe7>
 82085a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82085ab:	00 
 82085ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82085b3:	00 
 82085b4:	c7 44 24 04 00 e7 bc 	movl   $0x8bce700,0x4(%esp)
 82085bb:	08 
 82085bc:	c7 04 24 81 a3 00 00 	movl   $0xa381,(%esp)
 82085c3:	e8 0f 83 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82085c8:	89 c3                	mov    %eax,%ebx
 82085ca:	e9 cb 01 00 00       	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 82085cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 82085d2:	89 04 24             	mov    %eax,(%esp)
 82085d5:	e8 2a 6f 02 00       	call   822f504 <_ZN15CUserCharacInfo18getCreateGuildNameEv>
 82085da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82085dd:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82085e1:	75 2b                	jne    820860e <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x126>
 82085e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82085ea:	00 
 82085eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82085f2:	00 
 82085f3:	c7 44 24 04 00 e7 bc 	movl   $0x8bce700,0x4(%esp)
 82085fa:	08 
 82085fb:	c7 04 24 86 a3 00 00 	movl   $0xa386,(%esp)
 8208602:	e8 d0 82 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208607:	89 c3                	mov    %eax,%ebx
 8208609:	e9 8c 01 00 00       	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 820860e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208611:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8208615:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 820861c:	00 
 820861d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208620:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208624:	8b 45 10             	mov    0x10(%ebp),%eax
 8208627:	89 04 24             	mov    %eax,(%esp)
 820862a:	e8 8d 4c 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 820862f:	83 f0 01             	xor    $0x1,%eax
 8208632:	84 c0                	test   %al,%al
 8208634:	74 25                	je     820865b <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x173>
 8208636:	c7 44 24 08 6a 00 00 	movl   $0x6a,0x8(%esp)
 820863d:	00 
 820863e:	c7 44 24 04 9f 00 00 	movl   $0x9f,0x4(%esp)
 8208645:	00 
 8208646:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208649:	89 04 24             	mov    %eax,(%esp)
 820864c:	e8 f1 38 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208651:	bb 00 00 00 00       	mov    $0x0,%ebx
 8208656:	e9 3f 01 00 00       	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 820865b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820865e:	89 04 24             	mov    %eax,(%esp)
 8208661:	e8 c5 d1 ff ff       	call   820582b <_Z20checkValidCharacNamePKc>
 8208666:	83 f0 01             	xor    $0x1,%eax
 8208669:	84 c0                	test   %al,%al
 820866b:	74 25                	je     8208692 <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x1aa>
 820866d:	c7 44 24 08 6c 00 00 	movl   $0x6c,0x8(%esp)
 8208674:	00 
 8208675:	c7 44 24 04 9f 00 00 	movl   $0x9f,0x4(%esp)
 820867c:	00 
 820867d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208680:	89 04 24             	mov    %eax,(%esp)
 8208683:	e8 ba 38 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8208688:	bb 00 00 00 00       	mov    $0x0,%ebx
 820868d:	e9 08 01 00 00       	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 8208692:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8208697:	c7 44 24 08 9d a3 00 	movl   $0xa39d,0x8(%esp)
 820869e:	00 
 820869f:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 82086a6:	08 
 82086a7:	89 04 24             	mov    %eax,(%esp)
 82086aa:	e8 d7 73 08 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82086af:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82086b6:	00 
 82086b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82086bb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82086be:	89 04 24             	mov    %eax,(%esp)
 82086c1:	e8 60 05 ec ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 82086c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82086c9:	89 04 24             	mov    %eax,(%esp)
 82086cc:	e8 75 05 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82086d1:	c7 44 24 04 eb 00 00 	movl   $0xeb,0x4(%esp)
 82086d8:	00 
 82086d9:	89 04 24             	mov    %eax,(%esp)
 82086dc:	e8 75 05 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82086e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82086e4:	89 04 24             	mov    %eax,(%esp)
 82086e7:	e8 aa 05 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82086ec:	89 c3                	mov    %eax,%ebx
 82086ee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82086f1:	89 04 24             	mov    %eax,(%esp)
 82086f4:	e8 4d 05 ec ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82086f9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82086fd:	89 04 24             	mov    %eax,(%esp)
 8208700:	e8 51 05 ec ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8208705:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208708:	89 04 24             	mov    %eax,(%esp)
 820870b:	e8 3e 05 ec ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8208710:	89 04 24             	mov    %eax,(%esp)
 8208713:	e8 30 f2 02 00       	call   8237948 <_ZN12CStreamGuard11GetInBufferI27SIG_DOUBLE_CHECK_GUILD_NAMEEEPT_v>
 8208718:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820871b:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8208722:	00 
 8208723:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820872a:	00 
 820872b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820872e:	89 04 24             	mov    %eax,(%esp)
 8208731:	e8 8a 55 e7 ff       	call   807dcc0 <memset@plt>
 8208736:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208739:	89 c2                	mov    %eax,%edx
 820873b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820873e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8208742:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8208745:	89 54 24 04          	mov    %edx,0x4(%esp)
 8208749:	89 04 24             	mov    %eax,(%esp)
 820874c:	e8 4f 51 e7 ff       	call   807d8a0 <memcpy@plt>
 8208751:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8208756:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8208759:	89 54 24 08          	mov    %edx,0x8(%esp)
 820875d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8208764:	00 
 8208765:	89 04 24             	mov    %eax,(%esp)
 8208768:	e8 71 88 36 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 820876d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8208772:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208775:	89 04 24             	mov    %eax,(%esp)
 8208778:	e8 55 41 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 820877d:	eb 1b                	jmp    820879a <_ZN31Dispatcher_CheckGuildNameDouble12dispatch_sigEP5CUserR9PacketBuf+0x2b2>
 820877f:	89 d3                	mov    %edx,%ebx
 8208781:	89 c6                	mov    %eax,%esi
 8208783:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8208786:	89 04 24             	mov    %eax,(%esp)
 8208789:	e8 44 41 41 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 820878e:	89 f0                	mov    %esi,%eax
 8208790:	89 da                	mov    %ebx,%edx
 8208792:	89 04 24             	mov    %eax,(%esp)
 8208795:	e8 b6 af 8d 00       	call   8ae3750 <_Unwind_Resume>
 820879a:	89 d8                	mov    %ebx,%eax
 820879c:	83 c4 30             	add    $0x30,%esp
 820879f:	5b                   	pop    %ebx
 82087a0:	5e                   	pop    %esi
 82087a1:	5d                   	pop    %ebp
 82087a2:	c3                   	ret
 82087a3:	90                   	nop

```

```c
// Dispatcher_CheckGuildNameDouble::dispatch_sig @ 0x82084e8

/* Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CheckGuildNameDouble::dispatch_sig
          (Dispatcher_CheckGuildNameDouble *this,CUser *param_1,PacketBuf *param_2)

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
  SIG_DOUBLE_CHECK_GUILD_NAME *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0820851b;
    }
  }
  bVar1 = true;
LAB_0820851b:
  if (bVar1) {
    uVar4 = LineFunc(0xa369,
                     "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_18 = 0;
    cVar2 = PacketBuf::get_int(param_2,(int *)&local_18);
    if (cVar2 == '\x01') {
      if (((int)local_18 < 0) || (0x16 < (int)local_18)) {
        uVar4 = LineFunc(0xa381,
                         "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
      else {
        local_14 = (char *)CUserCharacInfo::getCreateGuildName((CUserCharacInfo *)param_1);
        if (local_14 == (char *)0x0) {
          uVar4 = LineFunc(0xa386,
                           "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
        else {
          cVar2 = PacketBuf::get_str(param_2,local_14,0x17,local_18);
          if (cVar2 == '\x01') {
            cVar2 = checkValidCharacName(local_14);
            if (cVar2 == '\x01') {
              pSVar5 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",
                                           0xa39d);
              CStreamGuard::CStreamGuard(local_20,pSVar5,true);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 082086dc to 0820876c has its CatchHandler @ 0820877f */
              CStreamGuard::operator<<(pCVar6,0xeb);
              iVar3 = CUser::GetUID(param_1);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_20);
              CStreamGuard::operator<<(pCVar6,iVar3);
              pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_20);
              local_10 = CStreamGuard::GetInBuffer<SIG_DOUBLE_CHECK_GUILD_NAME>(pCVar6);
              memset(local_10,0,0x17);
              memcpy(local_10,local_14,local_18);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_20);
              uVar4 = 0;
              CStreamGuard::~CStreamGuard(local_20);
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x9f,0x6c);
              uVar4 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x9f,0x6a);
            uVar4 = 0;
          }
        }
      }
    }
    else {
      uVar4 = LineFunc(0xa37e,
                       "virtual int Dispatcher_CheckGuildNameDouble::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar4;
}

```

