# Inter_MailBox_Req_CheckReceiver

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## SendDBThread_forchina

```asm
// === 084cff18 Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina  [0x084cff18-0x84d0089] ===
 84cff18:	55                   	push   %ebp
 84cff19:	89 e5                	mov    %esp,%ebp
 84cff1b:	56                   	push   %esi
 84cff1c:	53                   	push   %ebx
 84cff1d:	83 ec 30             	sub    $0x30,%esp
 84cff20:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 84cff25:	c7 44 24 08 fa 2d 00 	movl   $0x2dfa,0x8(%esp)
 84cff2c:	00 
 84cff2d:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cff34:	08 
 84cff35:	89 04 24             	mov    %eax,(%esp)
 84cff38:	e8 25 03 dc ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 84cff3d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84cff44:	00 
 84cff45:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cff49:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cff4c:	89 04 24             	mov    %eax,(%esp)
 84cff4f:	e8 d2 8c bf ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84cff54:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cff57:	89 04 24             	mov    %eax,(%esp)
 84cff5a:	e8 e7 8c bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84cff5f:	c7 44 24 04 f5 01 00 	movl   $0x1f5,0x4(%esp)
 84cff66:	00 
 84cff67:	89 04 24             	mov    %eax,(%esp)
 84cff6a:	e8 e7 8c bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84cff6f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cff76:	00 
 84cff77:	c7 44 24 08 fd 2d 00 	movl   $0x2dfd,0x8(%esp)
 84cff7e:	00 
 84cff7f:	c7 44 24 04 00 ce c8 	movl   $0x8c8ce00,0x4(%esp)
 84cff86:	08 
 84cff87:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cff8a:	89 04 24             	mov    %eax,(%esp)
 84cff8d:	e8 86 f7 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84cff92:	c7 44 24 08 f5 01 00 	movl   $0x1f5,0x8(%esp)
 84cff99:	00 
 84cff9a:	c7 44 24 04 0c 8b c8 	movl   $0x8c88b0c,0x4(%esp)
 84cffa1:	08 
 84cffa2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cffa5:	89 04 24             	mov    %eax,(%esp)
 84cffa8:	e8 db f7 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84cffad:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cffb0:	89 04 24             	mov    %eax,(%esp)
 84cffb3:	e8 de 8c bf ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84cffb8:	89 c3                	mov    %eax,%ebx
 84cffba:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cffbd:	89 04 24             	mov    %eax,(%esp)
 84cffc0:	e8 81 8c bf ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84cffc5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cffc9:	89 04 24             	mov    %eax,(%esp)
 84cffcc:	e8 85 8c bf ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84cffd1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84cffd4:	89 04 24             	mov    %eax,(%esp)
 84cffd7:	e8 72 8c bf ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84cffdc:	89 04 24             	mov    %eax,(%esp)
 84cffdf:	e8 ca 15 f8 ff       	call   84515ae <_ZN12CStreamGuard11GetInBufferI26SIG_MAILBOX_CHECK_RECEIVEREEPT_v>
 84cffe4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cffe7:	c7 44 24 08 de 3f 00 	movl   $0x3fde,0x8(%esp)
 84cffee:	00 
 84cffef:	8b 45 10             	mov    0x10(%ebp),%eax
 84cfff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfff6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cfff9:	89 04 24             	mov    %eax,(%esp)
 84cfffc:	e8 9f d8 ba ff       	call   807d8a0 <memcpy@plt>
 84d0001:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0004:	89 04 24             	mov    %eax,(%esp)
 84d0007:	e8 1c 10 c3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84d000c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d000f:	81 c2 c1 3f 00 00    	add    $0x3fc1,%edx
 84d0015:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 84d001c:	00 
 84d001d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0021:	89 14 24             	mov    %edx,(%esp)
 84d0024:	e8 a7 d8 ba ff       	call   807d8d0 <strncpy@plt>
 84d0029:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d002c:	89 04 24             	mov    %eax,(%esp)
 84d002f:	e8 1a bc bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d0034:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d0037:	89 42 2d             	mov    %eax,0x2d(%edx)
 84d003a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84d003f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84d0042:	89 54 24 08          	mov    %edx,0x8(%esp)
 84d0046:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d004d:	00 
 84d004e:	89 04 24             	mov    %eax,(%esp)
 84d0051:	e8 88 0f 0a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84d0056:	bb 01 00 00 00       	mov    $0x1,%ebx
 84d005b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d005e:	89 04 24             	mov    %eax,(%esp)
 84d0061:	e8 6c c8 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d0066:	89 d8                	mov    %ebx,%eax
 84d0068:	83 c4 30             	add    $0x30,%esp
 84d006b:	5b                   	pop    %ebx
 84d006c:	5e                   	pop    %esi
 84d006d:	5d                   	pop    %ebp
 84d006e:	c3                   	ret
 84d006f:	89 d3                	mov    %edx,%ebx
 84d0071:	89 c6                	mov    %eax,%esi
 84d0073:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0076:	89 04 24             	mov    %eax,(%esp)
 84d0079:	e8 54 c8 14 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84d007e:	89 f0                	mov    %esi,%eax
 84d0080:	89 da                	mov    %ebx,%edx
 84d0082:	89 04 24             	mov    %eax,(%esp)
 84d0085:	e8 c6 36 61 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina @ 0x84cff18

/* Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*) */

undefined4 __thiscall
Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina
          (Inter_MailBox_Req_CheckReceiver *this,CUser *param_1,SIG_MAILBOX_CHECK_RECEIVER *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  char *__src;
  undefined4 uVar4;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  SIG_MAILBOX_CHECK_RECEIVER *local_10;
  
  pSVar1 = (Stream *)
           BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"InterDispatcher.cpp",0x2dfa);
  CStreamGuard::CStreamGuard(local_28,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 084cff6a to 084d0055 has its CatchHandler @ 084d006f */
  CStreamGuard::operator<<(pCVar2,0x1f5);
  cMyTrace::cMyTrace(local_20,
                     "bool Inter_MailBox_Req_CheckReceiver::SendDBThread_forchina(CUser*, SIG_MAILBOX_CHECK_RECEIVER*)"
                     ,0x2dfd,0);
  cMyTrace::operator()(local_20,"E_MULTI_MAILBOX_REQ_SEND : %d",0x1f5);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_CHECK_RECEIVER>(pCVar2);
  memcpy(local_10,param_2,0x3fde);
  __src = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  strncpy((char *)(local_10 + 0x3fc1),__src,0x1d);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_10 + 0x2d) = uVar4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return 1;
}

```

---

## SendErrorPacket

```asm
// === 084d008a Inter_MailBox_Req_CheckReceiver::SendErrorPacket  [0x084d008a-0x84d012f] ===
 84d008a:	55                   	push   %ebp
 84d008b:	89 e5                	mov    %esp,%ebp
 84d008d:	53                   	push   %ebx
 84d008e:	83 ec 34             	sub    $0x34,%esp
 84d0091:	8b 45 14             	mov    0x14(%ebp),%eax
 84d0094:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 84d0098:	0f b7 5d f4          	movzwl -0xc(%ebp),%ebx
 84d009c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d00a3:	ff 
 84d00a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d00a7:	89 04 24             	mov    %eax,(%esp)
 84d00aa:	e8 f1 de 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d00af:	8b 55 10             	mov    0x10(%ebp),%edx
 84d00b2:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84d00b6:	89 44 24 18          	mov    %eax,0x18(%esp)
 84d00ba:	89 54 24 14          	mov    %edx,0x14(%esp)
 84d00be:	c7 44 24 10 2c 8b c8 	movl   $0x8c88b2c,0x10(%esp)
 84d00c5:	08 
 84d00c6:	c7 44 24 0c 12 2e 00 	movl   $0x2e12,0xc(%esp)
 84d00cd:	00 
 84d00ce:	c7 44 24 08 80 cd c8 	movl   $0x8c8cd80,0x8(%esp)
 84d00d5:	08 
 84d00d6:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d00dd:	08 
 84d00de:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d00e5:	e8 20 3b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d00ea:	83 7d 10 43          	cmpl   $0x43,0x10(%ebp)
 84d00ee:	75 1c                	jne    84d010c <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt+0x82>
 84d00f0:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 84d00f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d00f8:	8b 45 10             	mov    0x10(%ebp),%eax
 84d00fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d00ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0102:	89 04 24             	mov    %eax,(%esp)
 84d0105:	e8 06 c0 1a 00       	call   867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>
 84d010a:	eb 1d                	jmp    84d0129 <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt+0x9f>
 84d010c:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 84d0110:	0f b6 c0             	movzbl %al,%eax
 84d0113:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d0117:	8b 45 10             	mov    0x10(%ebp),%eax
 84d011a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d011e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0121:	89 04 24             	mov    %eax,(%esp)
 84d0124:	e8 19 be 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d0129:	83 c4 34             	add    $0x34,%esp
 84d012c:	5b                   	pop    %ebx
 84d012d:	5d                   	pop    %ebp
 84d012e:	c3                   	ret
 84d012f:	90                   	nop

```

```c
// Inter_MailBox_Req_CheckReceiver::SendErrorPacket @ 0x84d008a

/* Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, unsigned short) */

void __thiscall
Inter_MailBox_Req_CheckReceiver::SendErrorPacket
          (undefined4 this,CUser *param_1,int param_3,ushort param_4)

{
  undefined4 uVar1;
  
  uVar1 = CUser::get_charac_no(param_1,-1);
  LogManager::logFormat
            (1,"InterDispatcher.cpp",
             "void Inter_MailBox_Req_CheckReceiver::SendErrorPacket(CUser*, ENUM_CMDPACKET, short unsigned int)"
             ,0x2e12,"[ITEM_GIFT] Fail Command[%d] charac_no[%u] error_code[%d]",param_3,uVar1,
             (uint)param_4);
  if (param_3 == 0x43) {
    CUser::SendCmdErrorPacket2Byte(param_1,0x43,param_4);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,param_3,param_4 & 0xff);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 084cf95a Inter_MailBox_Req_CheckReceiver::dispatch_sig  [0x084cf95a-0x84cff17] ===
 84cf95a:	55                   	push   %ebp
 84cf95b:	89 e5                	mov    %esp,%ebp
 84cf95d:	56                   	push   %esi
 84cf95e:	53                   	push   %ebx
 84cf95f:	83 ec 60             	sub    $0x60,%esp
 84cf962:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf965:	89 04 24             	mov    %eax,(%esp)
 84cf968:	e8 1f aa c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cf96d:	83 f8 02             	cmp    $0x2,%eax
 84cf970:	0f 9e c0             	setle  %al
 84cf973:	84 c0                	test   %al,%al
 84cf975:	74 0a                	je     84cf981 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x27>
 84cf977:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf97c:	e9 90 05 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cf981:	8b 45 10             	mov    0x10(%ebp),%eax
 84cf984:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84cf987:	c7 45 d4 61 00 00 00 	movl   $0x61,-0x2c(%ebp)
 84cf98e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cf991:	8b 40 31             	mov    0x31(%eax),%eax
 84cf994:	83 f8 01             	cmp    $0x1,%eax
 84cf997:	75 09                	jne    84cf9a2 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x48>
 84cf999:	c7 45 d4 43 00 00 00 	movl   $0x43,-0x2c(%ebp)
 84cf9a0:	eb 12                	jmp    84cf9b4 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5a>
 84cf9a2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cf9a5:	8b 40 31             	mov    0x31(%eax),%eax
 84cf9a8:	83 f8 02             	cmp    $0x2,%eax
 84cf9ab:	75 07                	jne    84cf9b4 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5a>
 84cf9ad:	c7 45 d4 3c 01 00 00 	movl   $0x13c,-0x2c(%ebp)
 84cf9b4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cf9b7:	8b 40 1d             	mov    0x1d(%eax),%eax
 84cf9ba:	85 c0                	test   %eax,%eax
 84cf9bc:	75 2b                	jne    84cf9e9 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x8f>
 84cf9be:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 84cf9c5:	00 
 84cf9c6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cf9c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cf9cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cf9d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cf9d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84cf9d7:	89 04 24             	mov    %eax,(%esp)
 84cf9da:	e8 ab 06 00 00       	call   84d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>
 84cf9df:	b8 00 00 00 00       	mov    $0x0,%eax
 84cf9e4:	e9 28 05 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cf9e9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cf9ec:	8b 40 25             	mov    0x25(%eax),%eax
 84cf9ef:	85 c0                	test   %eax,%eax
 84cf9f1:	74 2b                	je     84cfa1e <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0xc4>
 84cf9f3:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 84cf9fa:	00 
 84cf9fb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cf9fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfa02:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfa05:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfa09:	8b 45 08             	mov    0x8(%ebp),%eax
 84cfa0c:	89 04 24             	mov    %eax,(%esp)
 84cfa0f:	e8 76 06 00 00       	call   84d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>
 84cfa14:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfa19:	e9 f3 04 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfa1e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfa21:	8b 50 29             	mov    0x29(%eax),%edx
 84cfa24:	a1 10 f7 41 09       	mov    0x941f710,%eax
 84cfa29:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cfa2d:	89 04 24             	mov    %eax,(%esp)
 84cfa30:	e8 11 99 c3 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 84cfa35:	84 c0                	test   %al,%al
 84cfa37:	74 2b                	je     84cfa64 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x10a>
 84cfa39:	c7 44 24 0c 5a 00 00 	movl   $0x5a,0xc(%esp)
 84cfa40:	00 
 84cfa41:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cfa44:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfa48:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfa4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfa4f:	8b 45 08             	mov    0x8(%ebp),%eax
 84cfa52:	89 04 24             	mov    %eax,(%esp)
 84cfa55:	e8 30 06 00 00       	call   84d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>
 84cfa5a:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfa5f:	e9 ad 04 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfa64:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfa67:	8b 80 b9 3f 00 00    	mov    0x3fb9(%eax),%eax
 84cfa6d:	83 f8 4d             	cmp    $0x4d,%eax
 84cfa70:	75 2b                	jne    84cfa9d <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x143>
 84cfa72:	c7 44 24 0c 4d 00 00 	movl   $0x4d,0xc(%esp)
 84cfa79:	00 
 84cfa7a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cfa7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfa81:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfa84:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfa88:	8b 45 08             	mov    0x8(%ebp),%eax
 84cfa8b:	89 04 24             	mov    %eax,(%esp)
 84cfa8e:	e8 f7 05 00 00       	call   84d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>
 84cfa93:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfa98:	e9 74 04 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfa9d:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84cfaa4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfaa7:	8b 40 31             	mov    0x31(%eax),%eax
 84cfaaa:	83 f8 01             	cmp    $0x1,%eax
 84cfaad:	75 4d                	jne    84cfafc <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x1a2>
 84cfaaf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfab2:	8b 40 1d             	mov    0x1d(%eax),%eax
 84cfab5:	89 c2                	mov    %eax,%edx
 84cfab7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfaba:	89 50 67             	mov    %edx,0x67(%eax)
 84cfabd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfac0:	8b 50 29             	mov    0x29(%eax),%edx
 84cfac3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfac6:	89 50 63             	mov    %edx,0x63(%eax)
 84cfac9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfacc:	8d 50 35             	lea    0x35(%eax),%edx
 84cfacf:	a1 60 f7 41 09       	mov    0x941f760,%eax
 84cfad4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cfad8:	8b 55 0c             	mov    0xc(%ebp),%edx
 84cfadb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cfadf:	89 04 24             	mov    %eax,(%esp)
 84cfae2:	e8 e9 c9 07 00       	call   854c4d0 <_ZN18ItemVendingMachine7BuyItemEP5CUserRK21MSG_BUY_CERASHOP_ITEM>
 84cfae7:	84 c0                	test   %al,%al
 84cfae9:	74 07                	je     84cfaf2 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x198>
 84cfaeb:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfaf0:	eb 05                	jmp    84cfaf7 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x19d>
 84cfaf2:	b8 12 2d 00 00       	mov    $0x2d12,%eax
 84cfaf7:	e9 15 04 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfafc:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfaff:	8b 40 31             	mov    0x31(%eax),%eax
 84cfb02:	85 c0                	test   %eax,%eax
 84cfb04:	0f 85 46 02 00 00    	jne    84cfd50 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x3f6>
 84cfb0a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfb0d:	8b 40 6e             	mov    0x6e(%eax),%eax
 84cfb10:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84cfb13:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84cfb17:	0f 84 cf 00 00 00    	je     84cfbec <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x292>
 84cfb1d:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 84cfb20:	e8 76 c6 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84cfb25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cfb29:	89 04 24             	mov    %eax,(%esp)
 84cfb2c:	e8 01 ff e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84cfb31:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84cfb34:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84cfb38:	0f 84 ae 00 00 00    	je     84cfbec <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x292>
 84cfb3e:	a1 38 f7 41 09       	mov    0x941f738,%eax
 84cfb43:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84cfb46:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cfb4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cfb51:	00 
 84cfb52:	89 04 24             	mov    %eax,(%esp)
 84cfb55:	e8 82 07 da ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 84cfb5a:	84 c0                	test   %al,%al
 84cfb5c:	74 0a                	je     84cfb68 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x20e>
 84cfb5e:	b8 11 00 00 00       	mov    $0x11,%eax
 84cfb63:	e9 a9 03 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfb68:	a1 38 f7 41 09       	mov    0x941f738,%eax
 84cfb6d:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84cfb70:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cfb74:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84cfb7b:	00 
 84cfb7c:	89 04 24             	mov    %eax,(%esp)
 84cfb7f:	e8 58 07 da ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 84cfb84:	84 c0                	test   %al,%al
 84cfb86:	74 0a                	je     84cfb92 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x238>
 84cfb88:	b8 11 00 00 00       	mov    $0x11,%eax
 84cfb8d:	e9 7f 03 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfb92:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cfb95:	89 04 24             	mov    %eax,(%esp)
 84cfb98:	e8 45 17 c2 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 84cfb9d:	83 f8 05             	cmp    $0x5,%eax
 84cfba0:	75 1c                	jne    84cfbbe <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x264>
 84cfba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfba5:	89 04 24             	mov    %eax,(%esp)
 84cfba8:	e8 c1 a7 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84cfbad:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84cfbb0:	8b 52 29             	mov    0x29(%edx),%edx
 84cfbb3:	39 d0                	cmp    %edx,%eax
 84cfbb5:	74 07                	je     84cfbbe <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x264>
 84cfbb7:	b8 01 00 00 00       	mov    $0x1,%eax
 84cfbbc:	eb 05                	jmp    84cfbc3 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x269>
 84cfbbe:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfbc3:	84 c0                	test   %al,%al
 84cfbc5:	74 25                	je     84cfbec <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x292>
 84cfbc7:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 84cfbce:	00 
 84cfbcf:	c7 44 24 04 61 00 00 	movl   $0x61,0x4(%esp)
 84cfbd6:	00 
 84cfbd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfbda:	89 04 24             	mov    %eax,(%esp)
 84cfbdd:	e8 60 c3 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84cfbe2:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfbe7:	e9 25 03 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfbec:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfbef:	8b 40 63             	mov    0x63(%eax),%eax
 84cfbf2:	85 c0                	test   %eax,%eax
 84cfbf4:	74 66                	je     84cfc5c <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x302>
 84cfbf6:	c7 45 e4 ff ff ff 7f 	movl   $0x7fffffff,-0x1c(%ebp)
 84cfbfd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfc00:	8d 70 46             	lea    0x46(%eax),%esi
 84cfc03:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfc06:	8b 40 21             	mov    0x21(%eax),%eax
 84cfc09:	89 c3                	mov    %eax,%ebx
 84cfc0b:	e8 8b c5 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84cfc10:	89 74 24 08          	mov    %esi,0x8(%esp)
 84cfc14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cfc18:	89 04 24             	mov    %eax,(%esp)
 84cfc1b:	e8 c0 10 e9 ff       	call   8360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>
 84cfc20:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cfc23:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84cfc26:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfc29:	8b 40 63             	mov    0x63(%eax),%eax
 84cfc2c:	39 c2                	cmp    %eax,%edx
 84cfc2e:	73 2c                	jae    84cfc5c <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x302>
 84cfc30:	c7 44 24 0c 0e 00 00 	movl   $0xe,0xc(%esp)
 84cfc37:	00 
 84cfc38:	c7 44 24 08 61 00 00 	movl   $0x61,0x8(%esp)
 84cfc3f:	00 
 84cfc40:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfc43:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfc47:	8b 45 08             	mov    0x8(%ebp),%eax
 84cfc4a:	89 04 24             	mov    %eax,(%esp)
 84cfc4d:	e8 38 04 00 00       	call   84d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>
 84cfc52:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfc57:	e9 b5 02 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfc5c:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfc5f:	8b 50 29             	mov    0x29(%eax),%edx
 84cfc62:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfc65:	8b 40 1d             	mov    0x1d(%eax),%eax
 84cfc68:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 84cfc6b:	83 c1 35             	add    $0x35,%ecx
 84cfc6e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84cfc75:	00 
 84cfc76:	89 54 24 10          	mov    %edx,0x10(%esp)
 84cfc7a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84cfc81:	00 
 84cfc82:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfc86:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84cfc8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfc8d:	89 04 24             	mov    %eax,(%esp)
 84cfc90:	e8 7f 5e 08 00       	call   8555b14 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji>
 84cfc95:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84cfc98:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 84cfc9c:	74 28                	je     84cfcc6 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x36c>
 84cfc9e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84cfca1:	0f b7 c0             	movzwl %ax,%eax
 84cfca4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84cfca8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cfcab:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfcaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfcb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfcb6:	8b 45 08             	mov    0x8(%ebp),%eax
 84cfcb9:	89 04 24             	mov    %eax,(%esp)
 84cfcbc:	e8 c9 03 00 00       	call   84d008a <_ZN31Inter_MailBox_Req_CheckReceiver15SendErrorPacketEP5CUser14ENUM_CMDPACKETt>
 84cfcc1:	e9 46 02 00 00       	jmp    84cff0c <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b2>
 84cfcc6:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfcc9:	89 04 24             	mov    %eax,(%esp)
 84cfccc:	e8 7b e0 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cfcd1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84cfcd4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfcd8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cfcdf:	00 
 84cfce0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfce3:	89 04 24             	mov    %eax,(%esp)
 84cfce6:	e8 11 bc bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cfceb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cfcf2:	00 
 84cfcf3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfcf6:	89 04 24             	mov    %eax,(%esp)
 84cfcf9:	e8 22 bc bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cfcfe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cfd05:	00 
 84cfd06:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfd09:	89 04 24             	mov    %eax,(%esp)
 84cfd0c:	e8 47 bc bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cfd11:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfd14:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfd18:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfd1b:	89 04 24             	mov    %eax,(%esp)
 84cfd1e:	e8 97 88 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cfd23:	eb 1b                	jmp    84cfd40 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x3e6>
 84cfd25:	89 d3                	mov    %edx,%ebx
 84cfd27:	89 c6                	mov    %eax,%esi
 84cfd29:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfd2c:	89 04 24             	mov    %eax,(%esp)
 84cfd2f:	e8 4c e1 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cfd34:	89 f0                	mov    %esi,%eax
 84cfd36:	89 da                	mov    %ebx,%edx
 84cfd38:	89 04 24             	mov    %eax,(%esp)
 84cfd3b:	e8 10 3a 61 00       	call   8ae3750 <_Unwind_Resume>
 84cfd40:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84cfd43:	89 04 24             	mov    %eax,(%esp)
 84cfd46:	e8 35 e1 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cfd4b:	e9 bc 01 00 00       	jmp    84cff0c <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b2>
 84cfd50:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfd53:	8b 40 31             	mov    0x31(%eax),%eax
 84cfd56:	83 f8 02             	cmp    $0x2,%eax
 84cfd59:	0f 85 ad 01 00 00    	jne    84cff0c <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b2>
 84cfd5f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84cfd66:	e9 fa 00 00 00       	jmp    84cfe65 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x50b>
 84cfd6b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84cfd6e:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 84cfd71:	89 d0                	mov    %edx,%eax
 84cfd73:	c1 e0 02             	shl    $0x2,%eax
 84cfd76:	01 d0                	add    %edx,%eax
 84cfd78:	01 c0                	add    %eax,%eax
 84cfd7a:	01 d0                	add    %edx,%eax
 84cfd7c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84cfd7f:	83 c0 60             	add    $0x60,%eax
 84cfd82:	8b 40 0c             	mov    0xc(%eax),%eax
 84cfd85:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cfd88:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84cfd8c:	0f 84 cf 00 00 00    	je     84cfe61 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x507>
 84cfd92:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 84cfd95:	e8 01 c4 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84cfd9a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cfd9e:	89 04 24             	mov    %eax,(%esp)
 84cfda1:	e8 8c fc e8 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84cfda6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84cfda9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84cfdad:	0f 84 ae 00 00 00    	je     84cfe61 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x507>
 84cfdb3:	a1 38 f7 41 09       	mov    0x941f738,%eax
 84cfdb8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cfdbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cfdbf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cfdc6:	00 
 84cfdc7:	89 04 24             	mov    %eax,(%esp)
 84cfdca:	e8 0d 05 da ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 84cfdcf:	84 c0                	test   %al,%al
 84cfdd1:	74 0a                	je     84cfddd <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x483>
 84cfdd3:	b8 11 00 00 00       	mov    $0x11,%eax
 84cfdd8:	e9 34 01 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfddd:	a1 38 f7 41 09       	mov    0x941f738,%eax
 84cfde2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84cfde5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84cfde9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84cfdf0:	00 
 84cfdf1:	89 04 24             	mov    %eax,(%esp)
 84cfdf4:	e8 e3 04 da ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 84cfdf9:	84 c0                	test   %al,%al
 84cfdfb:	74 0a                	je     84cfe07 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x4ad>
 84cfdfd:	b8 11 00 00 00       	mov    $0x11,%eax
 84cfe02:	e9 0a 01 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfe07:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cfe0a:	89 04 24             	mov    %eax,(%esp)
 84cfe0d:	e8 d0 14 c2 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 84cfe12:	83 f8 05             	cmp    $0x5,%eax
 84cfe15:	75 1c                	jne    84cfe33 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x4d9>
 84cfe17:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfe1a:	89 04 24             	mov    %eax,(%esp)
 84cfe1d:	e8 4c a5 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84cfe22:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84cfe25:	8b 52 29             	mov    0x29(%edx),%edx
 84cfe28:	39 d0                	cmp    %edx,%eax
 84cfe2a:	74 07                	je     84cfe33 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x4d9>
 84cfe2c:	b8 01 00 00 00       	mov    $0x1,%eax
 84cfe31:	eb 05                	jmp    84cfe38 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x4de>
 84cfe33:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfe38:	84 c0                	test   %al,%al
 84cfe3a:	74 25                	je     84cfe61 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x507>
 84cfe3c:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 84cfe43:	00 
 84cfe44:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 84cfe4b:	00 
 84cfe4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfe4f:	89 04 24             	mov    %eax,(%esp)
 84cfe52:	e8 eb c0 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84cfe57:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfe5c:	e9 b0 00 00 00       	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfe61:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84cfe65:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfe68:	0f b6 40 68          	movzbl 0x68(%eax),%eax
 84cfe6c:	0f b6 c0             	movzbl %al,%eax
 84cfe6f:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84cfe72:	0f 9f c0             	setg   %al
 84cfe75:	84 c0                	test   %al,%al
 84cfe77:	0f 85 ee fe ff ff    	jne    84cfd6b <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x411>
 84cfe7d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfe80:	8b 40 64             	mov    0x64(%eax),%eax
 84cfe83:	85 c0                	test   %eax,%eax
 84cfe85:	74 5e                	je     84cfee5 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x58b>
 84cfe87:	c7 45 f4 ff ff ff 7f 	movl   $0x7fffffff,-0xc(%ebp)
 84cfe8e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfe91:	83 c0 46             	add    $0x46,%eax
 84cfe94:	89 c6                	mov    %eax,%esi
 84cfe96:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfe99:	8b 40 21             	mov    0x21(%eax),%eax
 84cfe9c:	89 c3                	mov    %eax,%ebx
 84cfe9e:	e8 f8 c2 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84cfea3:	89 74 24 08          	mov    %esi,0x8(%esp)
 84cfea7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cfeab:	89 04 24             	mov    %eax,(%esp)
 84cfeae:	e8 2d 0e e9 ff       	call   8360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>
 84cfeb3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cfeb6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84cfeb9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfebc:	8b 40 64             	mov    0x64(%eax),%eax
 84cfebf:	39 c2                	cmp    %eax,%edx
 84cfec1:	73 22                	jae    84cfee5 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x58b>
 84cfec3:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 84cfeca:	00 
 84cfecb:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 84cfed2:	00 
 84cfed3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfed6:	89 04 24             	mov    %eax,(%esp)
 84cfed9:	e8 64 c0 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84cfede:	b8 00 00 00 00       	mov    $0x0,%eax
 84cfee3:	eb 2c                	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cfee5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 84cfee8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cfeec:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cfeef:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cfef3:	8b 45 08             	mov    0x8(%ebp),%eax
 84cfef6:	89 04 24             	mov    %eax,(%esp)
 84cfef9:	e8 1a 00 00 00       	call   84cff18 <_ZN31Inter_MailBox_Req_CheckReceiver21SendDBThread_forchinaEP5CUserP26SIG_MAILBOX_CHECK_RECEIVER>
 84cfefe:	83 f0 01             	xor    $0x1,%eax
 84cff01:	84 c0                	test   %al,%al
 84cff03:	74 07                	je     84cff0c <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b2>
 84cff05:	b8 00 00 00 00       	mov    $0x0,%eax
 84cff0a:	eb 05                	jmp    84cff11 <_ZN31Inter_MailBox_Req_CheckReceiver12dispatch_sigEP5CUserPci+0x5b7>
 84cff0c:	b8 00 00 00 00       	mov    $0x0,%eax
 84cff11:	83 c4 60             	add    $0x60,%esp
 84cff14:	5b                   	pop    %ebx
 84cff15:	5e                   	pop    %esi
 84cff16:	5d                   	pop    %ebp
 84cff17:	c3                   	ret

```

```c
// Inter_MailBox_Req_CheckReceiver::dispatch_sig @ 0x84cf95a

/* Inter_MailBox_Req_CheckReceiver::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MailBox_Req_CheckReceiver::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CDataManager *pCVar6;
  SIG_MAILBOX_CHECK_RECEIVER *pSVar7;
  PacketGuard local_40 [12];
  SIG_MAILBOX_CHECK_RECEIVER *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  CItem *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  CItem *local_14;
  uint local_10;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (iVar4 < 3) {
    uVar5 = 0;
  }
  else {
    local_34 = (SIG_MAILBOX_CHECK_RECEIVER *)param_3;
    local_30 = 0x61;
    if (*(int *)(param_3 + 0x31) == 1) {
      local_30 = 0x43;
    }
    else if (*(int *)(param_3 + 0x31) == 2) {
      local_30 = 0x13c;
    }
    if (*(int *)(param_3 + 0x1d) == 0) {
      SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,3);
      uVar5 = 0;
    }
    else if (*(int *)(param_3 + 0x25) == 0) {
      cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*(uint *)(param_3 + 0x29));
      if (cVar3 == '\0') {
        if (*(int *)(local_34 + 0x3fb9) == 0x4d) {
          SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,0x4d);
          uVar5 = 0;
        }
        else {
          local_2c = 0;
          if (*(int *)(local_34 + 0x31) == 1) {
            *(undefined4 *)(local_34 + 0x67) = *(undefined4 *)(local_34 + 0x1d);
            *(undefined4 *)(local_34 + 99) = *(undefined4 *)(local_34 + 0x29);
            cVar3 = ItemVendingMachine::BuyItem
                              (GlobalData::s_pItemVendingMachine,(CUser *)param_2,
                               (MSG_BUY_CERASHOP_ITEM *)(local_34 + 0x35));
            if (cVar3 == '\0') {
              uVar5 = 0x2d12;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            if (*(int *)(local_34 + 0x31) == 0) {
              uVar1 = *(uint *)(local_34 + 0x6e);
              local_28 = uVar1;
              if (uVar1 != 0) {
                pCVar6 = (CDataManager *)G_CDataManager();
                local_24 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
                if (local_24 != (CItem *)0x0) {
                  cVar3 = InstanceRentalSystem::CheckRentableItem
                                    (GlobalData::s_rentalSystem,1,local_28);
                  if (cVar3 != '\0') {
                    return 0x11;
                  }
                  cVar3 = InstanceRentalSystem::CheckRentableItem
                                    (GlobalData::s_rentalSystem,2,local_28);
                  if (cVar3 != '\0') {
                    return 0x11;
                  }
                  iVar4 = CItem::GetAttachType(local_24);
                  if ((iVar4 == 5) &&
                     (iVar4 = CUser::get_acc_id((CUser *)param_2),
                     iVar4 != *(int *)(local_34 + 0x29))) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if (bVar2) {
                    CUser::SendCmdErrorPacket((CUser *)param_2,0x61,0xd8);
                    return 0;
                  }
                }
              }
              if (*(int *)(local_34 + 99) != 0) {
                local_20 = 0x7fffffff;
                pSVar7 = local_34 + 0x46;
                iVar4 = *(int *)(local_34 + 0x21);
                pCVar6 = (CDataManager *)G_CDataManager();
                local_20 = CDataManager::GetMoneyLimitPerLevel(pCVar6,iVar4,(char *)pSVar7);
                if (local_20 < *(uint *)(local_34 + 99)) {
                  SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,0x61,0xe);
                  return 0;
                }
              }
              local_2c = WongWork::CMailBoxHelper::ReqDBSendNewMail
                                   ((CUser *)param_2,(MSG_MAILBOX_SEND *)(local_34 + 0x35),
                                    *(uint *)(local_34 + 0x1d),false,*(uint *)(local_34 + 0x29),0);
              if (local_2c == 0) {
                PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084cfce6 to 084cfd22 has its CatchHandler @ 084cfd25 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,1,local_30);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
                CUser::Send((CUser *)param_2,local_40);
                PacketGuard::~PacketGuard(local_40);
              }
              else {
                SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,
                                local_2c & 0xffff);
              }
            }
            else if (*(int *)(local_34 + 0x31) == 2) {
              for (local_1c = 0; local_1c < (int)(uint)(byte)local_34[0x68]; local_1c = local_1c + 1
                  ) {
                uVar1 = *(uint *)(local_34 + local_1c * 0xb + 0x6c);
                local_18 = uVar1;
                if (uVar1 != 0) {
                  pCVar6 = (CDataManager *)G_CDataManager();
                  local_14 = (CItem *)CDataManager::find_item(pCVar6,uVar1);
                  if (local_14 != (CItem *)0x0) {
                    cVar3 = InstanceRentalSystem::CheckRentableItem
                                      (GlobalData::s_rentalSystem,1,local_18);
                    if (cVar3 != '\0') {
                      return 0x11;
                    }
                    cVar3 = InstanceRentalSystem::CheckRentableItem
                                      (GlobalData::s_rentalSystem,2,local_18);
                    if (cVar3 != '\0') {
                      return 0x11;
                    }
                    iVar4 = CItem::GetAttachType(local_14);
                    if ((iVar4 == 5) &&
                       (iVar4 = CUser::get_acc_id((CUser *)param_2),
                       iVar4 != *(int *)(local_34 + 0x29))) {
                      bVar2 = true;
                    }
                    else {
                      bVar2 = false;
                    }
                    if (bVar2) {
                      CUser::SendCmdErrorPacket((CUser *)param_2,0x13c,0xd8);
                      return 0;
                    }
                  }
                }
              }
              if (*(int *)(local_34 + 100) != 0) {
                local_10 = 0x7fffffff;
                pSVar7 = local_34 + 0x46;
                iVar4 = *(int *)(local_34 + 0x21);
                pCVar6 = (CDataManager *)G_CDataManager();
                local_10 = CDataManager::GetMoneyLimitPerLevel(pCVar6,iVar4,(char *)pSVar7);
                if (local_10 < *(uint *)(local_34 + 100)) {
                  CUser::SendCmdErrorPacket((CUser *)param_2,0x13c,0xe);
                  return 0;
                }
              }
              cVar3 = SendDBThread_forchina
                                ((Inter_MailBox_Req_CheckReceiver *)param_1,(CUser *)param_2,
                                 local_34);
              if (cVar3 != '\x01') {
                return 0;
              }
            }
            uVar5 = 0;
          }
        }
      }
      else {
        SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,0x5a);
        uVar5 = 0;
      }
    }
    else {
      SendErrorPacket((Inter_MailBox_Req_CheckReceiver *)param_1,param_2,local_30,0x18);
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

