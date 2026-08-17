# Dispatcher_SecurityCardAuthReq

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820a2c4 Dispatcher_SecurityCardAuthReq::dispatch_sig  [0x0820a2c4-0x820a42b] ===
 820a2c4:	55                   	push   %ebp
 820a2c5:	89 e5                	mov    %esp,%ebp
 820a2c7:	83 ec 18             	sub    $0x18,%esp
 820a2ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a2cd:	89 04 24             	mov    %eax,(%esp)
 820a2d0:	e8 b7 00 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820a2d5:	83 f8 02             	cmp    $0x2,%eax
 820a2d8:	0f 9e c0             	setle  %al
 820a2db:	84 c0                	test   %al,%al
 820a2dd:	74 29                	je     820a308 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x44>
 820a2df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a2e6:	00 
 820a2e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a2ee:	00 
 820a2ef:	c7 44 24 04 60 e4 bc 	movl   $0x8bce460,0x4(%esp)
 820a2f6:	08 
 820a2f7:	c7 04 24 fd a5 00 00 	movl   $0xa5fd,(%esp)
 820a2fe:	e8 d4 65 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a303:	e9 21 01 00 00       	jmp    820a429 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x165>
 820a308:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a30b:	89 04 24             	mov    %eax,(%esp)
 820a30e:	e8 0d 5a 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a313:	89 04 24             	mov    %eax,(%esp)
 820a316:	e8 f3 4b 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a31b:	84 c0                	test   %al,%al
 820a31d:	75 17                	jne    820a336 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x72>
 820a31f:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a322:	89 04 24             	mov    %eax,(%esp)
 820a325:	e8 04 5a 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a32a:	89 04 24             	mov    %eax,(%esp)
 820a32d:	e8 a8 4c 02 00       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 820a332:	84 c0                	test   %al,%al
 820a334:	74 07                	je     820a33d <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x79>
 820a336:	b8 01 00 00 00       	mov    $0x1,%eax
 820a33b:	eb 05                	jmp    820a342 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x7e>
 820a33d:	b8 00 00 00 00       	mov    $0x0,%eax
 820a342:	84 c0                	test   %al,%al
 820a344:	0f 84 bb 00 00 00    	je     820a405 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x141>
 820a34a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a34d:	89 04 24             	mov    %eax,(%esp)
 820a350:	e8 cb 59 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a355:	89 04 24             	mov    %eax,(%esp)
 820a358:	e8 b1 4b 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a35d:	84 c0                	test   %al,%al
 820a35f:	74 42                	je     820a3a3 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 820a361:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a364:	89 04 24             	mov    %eax,(%esp)
 820a367:	e8 b4 59 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a36c:	89 04 24             	mov    %eax,(%esp)
 820a36f:	e8 b2 4b 02 00       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 820a374:	83 f8 02             	cmp    $0x2,%eax
 820a377:	0f 97 c0             	seta   %al
 820a37a:	84 c0                	test   %al,%al
 820a37c:	74 64                	je     820a3e2 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x11e>
 820a37e:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 820a385:	00 
 820a386:	c7 44 24 04 a6 00 00 	movl   $0xa6,0x4(%esp)
 820a38d:	00 
 820a38e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a391:	89 04 24             	mov    %eax,(%esp)
 820a394:	e8 a9 1b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820a399:	b8 00 00 00 00       	mov    $0x0,%eax
 820a39e:	e9 86 00 00 00       	jmp    820a429 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x165>
 820a3a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a3a6:	89 04 24             	mov    %eax,(%esp)
 820a3a9:	e8 80 59 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820a3ae:	89 04 24             	mov    %eax,(%esp)
 820a3b1:	e8 d8 4b 02 00       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 820a3b6:	83 f8 02             	cmp    $0x2,%eax
 820a3b9:	0f 9f c0             	setg   %al
 820a3bc:	84 c0                	test   %al,%al
 820a3be:	74 22                	je     820a3e2 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x11e>
 820a3c0:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 820a3c7:	00 
 820a3c8:	c7 44 24 04 a6 00 00 	movl   $0xa6,0x4(%esp)
 820a3cf:	00 
 820a3d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a3d3:	89 04 24             	mov    %eax,(%esp)
 820a3d6:	e8 67 1b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820a3db:	b8 00 00 00 00       	mov    $0x0,%eax
 820a3e0:	eb 47                	jmp    820a429 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x165>
 820a3e2:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 820a3e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a3ee:	00 
 820a3ef:	8b 55 0c             	mov    0xc(%ebp),%edx
 820a3f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 820a3f6:	89 04 24             	mov    %eax,(%esp)
 820a3f9:	e8 04 e6 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 820a3fe:	b8 00 00 00 00       	mov    $0x0,%eax
 820a403:	eb 24                	jmp    820a429 <_ZN30Dispatcher_SecurityCardAuthReq12dispatch_sigEP5CUserR9PacketBuf+0x165>
 820a405:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a40c:	00 
 820a40d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a414:	00 
 820a415:	c7 44 24 04 60 e4 bc 	movl   $0x8bce460,0x4(%esp)
 820a41c:	08 
 820a41d:	c7 04 24 25 a6 00 00 	movl   $0xa625,(%esp)
 820a424:	e8 ae 64 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a429:	c9                   	leave
 820a42a:	c3                   	ret
 820a42b:	90                   	nop

```

```c
// Dispatcher_SecurityCardAuthReq::dispatch_sig @ 0x820a2c4

/* Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CSecurityCard *pCVar5;
  CPad *pCVar6;
  uint uVar7;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0xa5fd,
                     "virtual int Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar4;
  }
  pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
  cVar2 = WongWork::CSecurityCard::isActivate(pCVar5);
  if (cVar2 == '\0') {
    pCVar6 = (CPad *)CUser::getPad((CUser *)param_2);
    cVar2 = Sanicova::CPad::isActivate(pCVar6);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0820a342;
    }
  }
  bVar1 = true;
LAB_0820a342:
  if (bVar1) {
    pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    cVar2 = WongWork::CSecurityCard::isActivate(pCVar5);
    if (cVar2 == '\0') {
      pCVar6 = (CPad *)CUser::getPad((CUser *)param_2);
      iVar3 = Sanicova::CPad::getFailCnt(pCVar6);
      if (2 < iVar3) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xa6,0x88);
        return 0;
      }
    }
    else {
      pCVar5 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      uVar7 = WongWork::CSecurityCard::getFailCnt(pCVar5);
      if (2 < uVar7) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0xa6,0x7a);
        return 0;
      }
    }
    CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0);
    uVar4 = 0;
  }
  else {
    uVar4 = LineFunc(0xa625,
                     "virtual int Dispatcher_SecurityCardAuthReq::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  return uVar4;
}

```

