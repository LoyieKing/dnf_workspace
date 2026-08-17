# DisPatcher_SetTradeState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f6232 DisPatcher_SetTradeState::dispatch_sig  [0x081f6232-0x81f63bf] ===
 81f6232:	55                   	push   %ebp
 81f6233:	89 e5                	mov    %esp,%ebp
 81f6235:	53                   	push   %ebx
 81f6236:	83 ec 44             	sub    $0x44,%esp
 81f6239:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f623c:	89 04 24             	mov    %eax,(%esp)
 81f623f:	e8 48 41 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6244:	83 f8 03             	cmp    $0x3,%eax
 81f6247:	0f 95 c0             	setne  %al
 81f624a:	84 c0                	test   %al,%al
 81f624c:	74 0a                	je     81f6258 <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x26>
 81f624e:	b8 00 00 00 00       	mov    $0x0,%eax
 81f6253:	e9 62 01 00 00       	jmp    81f63ba <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x188>
 81f6258:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 81f625b:	83 c0 0d             	add    $0xd,%eax
 81f625e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6262:	8b 45 10             	mov    0x10(%ebp),%eax
 81f6265:	89 04 24             	mov    %eax,(%esp)
 81f6268:	e8 b5 6c 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f626d:	83 f0 01             	xor    $0x1,%eax
 81f6270:	84 c0                	test   %al,%al
 81f6272:	74 29                	je     81f629d <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x6b>
 81f6274:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f627b:	00 
 81f627c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f6283:	00 
 81f6284:	c7 44 24 04 e0 ff bc 	movl   $0x8bcffe0,0x4(%esp)
 81f628b:	08 
 81f628c:	c7 04 24 e6 82 00 00 	movl   $0x82e6,(%esp)
 81f6293:	e8 3f a6 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f6298:	e9 1d 01 00 00       	jmp    81f63ba <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x188>
 81f629d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f62a0:	89 04 24             	mov    %eax,(%esp)
 81f62a3:	e8 96 9b 03 00       	call   822fe3e <_ZN5CUser13GetTradeSpaceEv>
 81f62a8:	89 c3                	mov    %eax,%ebx
 81f62aa:	e8 df 5e ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f62af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81f62b3:	89 04 24             	mov    %eax,(%esp)
 81f62b6:	e8 cf ea 09 00       	call   8294d8a <_ZN12CGameManager13GetTradeSpaceEi>
 81f62bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f62be:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81f62c2:	75 25                	jne    81f62e9 <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 81f62c4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81f62cb:	00 
 81f62cc:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 81f62d3:	00 
 81f62d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f62d7:	89 04 24             	mov    %eax,(%esp)
 81f62da:	e8 63 5c 48 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81f62df:	b8 00 00 00 00       	mov    $0x0,%eax
 81f62e4:	e9 d1 00 00 00       	jmp    81f63ba <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x188>
 81f62e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f62ec:	89 04 24             	mov    %eax,(%esp)
 81f62ef:	e8 a6 e0 03 00       	call   823439a <_ZN11CTradeSpace8is_emptyEv>
 81f62f4:	84 c0                	test   %al,%al
 81f62f6:	74 68                	je     81f6360 <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x12e>
 81f62f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f62fb:	89 04 24             	mov    %eax,(%esp)
 81f62fe:	e8 79 40 ee ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 81f6303:	0f b7 d8             	movzwl %ax,%ebx
 81f6306:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f6309:	89 04 24             	mov    %eax,(%esp)
 81f630c:	e8 7d e0 03 00       	call   823438e <_ZN11CTradeSpace9get_indexEv>
 81f6311:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81f6315:	89 44 24 14          	mov    %eax,0x14(%esp)
 81f6319:	c7 44 24 10 4c 22 bc 	movl   $0x8bc224c,0x10(%esp)
 81f6320:	08 
 81f6321:	c7 44 24 0c f1 82 00 	movl   $0x82f1,0xc(%esp)
 81f6328:	00 
 81f6329:	c7 44 24 08 e0 ff bc 	movl   $0x8bcffe0,0x8(%esp)
 81f6330:	08 
 81f6331:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81f6338:	08 
 81f6339:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81f6340:	e8 c5 d8 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81f6345:	e8 44 5e ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f634a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81f634d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f6351:	89 04 24             	mov    %eax,(%esp)
 81f6354:	e8 85 ea 09 00       	call   8294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>
 81f6359:	b8 00 00 00 00       	mov    $0x0,%eax
 81f635e:	eb 5a                	jmp    81f63ba <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x188>
 81f6360:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f6363:	89 04 24             	mov    %eax,(%esp)
 81f6366:	e8 d1 35 33 00       	call   852993c <_ZN11CTradeSpace23check_trade_possibilityEv>
 81f636b:	83 f0 01             	xor    $0x1,%eax
 81f636e:	84 c0                	test   %al,%al
 81f6370:	74 26                	je     81f6398 <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x166>
 81f6372:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f6375:	89 04 24             	mov    %eax,(%esp)
 81f6378:	e8 7d 8c 33 00       	call   852effa <_ZN11CTradeSpace12cancel_tradeEv>
 81f637d:	e8 0c 5e ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f6382:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81f6385:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f6389:	89 04 24             	mov    %eax,(%esp)
 81f638c:	e8 4d ea 09 00       	call   8294dde <_ZN12CGameManager13PutTradeSpaceEP11CTradeSpace>
 81f6391:	b8 00 00 00 00       	mov    $0x0,%eax
 81f6396:	eb 22                	jmp    81f63ba <_ZN24DisPatcher_SetTradeState12dispatch_sigEP5CUserR9PacketBuf+0x188>
 81f6398:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81f639c:	0f be c0             	movsbl %al,%eax
 81f639f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f63a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f63a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f63aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f63ad:	89 04 24             	mov    %eax,(%esp)
 81f63b0:	e8 7f 8d 33 00       	call   852f134 <_ZN11CTradeSpace18change_trade_stateEP5CUseri>
 81f63b5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f63ba:	83 c4 44             	add    $0x44,%esp
 81f63bd:	5b                   	pop    %ebx
 81f63be:	5d                   	pop    %ebp
 81f63bf:	c3                   	ret

```

```c
// DisPatcher_SetTradeState::dispatch_sig @ 0x81f6232

/* DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetTradeState::dispatch_sig
          (DisPatcher_SetTradeState *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CGameManager *pCVar4;
  uint uVar5;
  char local_11;
  CTradeSpace *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    cVar1 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar1 == '\x01') {
      iVar2 = CUser::GetTradeSpace(param_1);
      pCVar4 = (CGameManager *)G_CGameManager();
      local_10 = (CTradeSpace *)CGameManager::GetTradeSpace(pCVar4,iVar2);
      if (local_10 == (CTradeSpace *)0x0) {
        CUser::SendCmdErrorPacket(param_1,0x1a,1);
        uVar3 = 0;
      }
      else {
        cVar1 = CTradeSpace::is_empty(local_10);
        if (cVar1 == '\0') {
          cVar1 = CTradeSpace::check_trade_possibility(local_10);
          if (cVar1 == '\x01') {
            CTradeSpace::change_trade_state(local_10,param_1,(int)local_11);
            uVar3 = 0;
          }
          else {
            CTradeSpace::cancel_trade(local_10);
            pCVar4 = (CGameManager *)G_CGameManager();
            CGameManager::PutTradeSpace(pCVar4,local_10);
            uVar3 = 0;
          }
        }
        else {
          uVar5 = CUser::get_unique_id(param_1);
          uVar3 = CTradeSpace::get_index(local_10);
          LogManager::logFormat
                    (1,"PacketDispatcher_Impl_1.cpp",
                     "virtual int DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&)",0x82f1
                     ,"Trade Space[%d] is Empty User[%d]",uVar3,uVar5 & 0xffff);
          pCVar4 = (CGameManager *)G_CGameManager();
          CGameManager::PutTradeSpace(pCVar4,local_10);
          uVar3 = 0;
        }
      }
    }
    else {
      uVar3 = LineFunc(0x82e6,
                       "virtual int DisPatcher_SetTradeState::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

