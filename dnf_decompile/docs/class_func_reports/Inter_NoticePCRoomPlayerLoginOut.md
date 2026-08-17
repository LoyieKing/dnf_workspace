# Inter_NoticePCRoomPlayerLoginOut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da1fa Inter_NoticePCRoomPlayerLoginOut::dispatch_sig  [0x084da1fa-0x84da393] ===
 84da1fa:	55                   	push   %ebp
 84da1fb:	89 e5                	mov    %esp,%ebp
 84da1fd:	56                   	push   %esi
 84da1fe:	53                   	push   %ebx
 84da1ff:	83 ec 40             	sub    $0x40,%esp
 84da202:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da205:	89 04 24             	mov    %eax,(%esp)
 84da208:	e8 7f 01 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84da20d:	83 f8 02             	cmp    $0x2,%eax
 84da210:	0f 9e c0             	setle  %al
 84da213:	84 c0                	test   %al,%al
 84da215:	74 0a                	je     84da221 <_ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci+0x27>
 84da217:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da21c:	e9 6a 01 00 00       	jmp    84da38b <_ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci+0x191>
 84da221:	8b 45 10             	mov    0x10(%ebp),%eax
 84da224:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84da227:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84da22e:	ff 
 84da22f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da232:	89 04 24             	mov    %eax,(%esp)
 84da235:	e8 66 3d 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84da23a:	89 c2                	mov    %eax,%edx
 84da23c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84da23f:	8b 40 0f             	mov    0xf(%eax),%eax
 84da242:	39 c2                	cmp    %eax,%edx
 84da244:	0f 95 c0             	setne  %al
 84da247:	84 c0                	test   %al,%al
 84da249:	74 57                	je     84da2a2 <_ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci+0xa8>
 84da24b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84da24e:	8b 58 0f             	mov    0xf(%eax),%ebx
 84da251:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84da258:	ff 
 84da259:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da25c:	89 04 24             	mov    %eax,(%esp)
 84da25f:	e8 3c 3d 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84da264:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84da268:	89 44 24 14          	mov    %eax,0x14(%esp)
 84da26c:	c7 44 24 10 28 96 c8 	movl   $0x8c89628,0x10(%esp)
 84da273:	08 
 84da274:	c7 44 24 0c eb 41 00 	movl   $0x41eb,0xc(%esp)
 84da27b:	00 
 84da27c:	c7 44 24 08 c0 bf c8 	movl   $0x8c8bfc0,0x8(%esp)
 84da283:	08 
 84da284:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84da28b:	08 
 84da28c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84da293:	e8 72 99 5f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84da298:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da29d:	e9 e9 00 00 00       	jmp    84da38b <_ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci+0x191>
 84da2a2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da2a5:	89 04 24             	mov    %eax,(%esp)
 84da2a8:	e8 9f 3a 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84da2ad:	c7 44 24 08 ba 00 00 	movl   $0xba,0x8(%esp)
 84da2b4:	00 
 84da2b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84da2bc:	00 
 84da2bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da2c0:	89 04 24             	mov    %eax,(%esp)
 84da2c3:	e8 34 16 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84da2c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84da2cb:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84da2cf:	0f be c0             	movsbl %al,%eax
 84da2d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da2d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da2d9:	89 04 24             	mov    %eax,(%esp)
 84da2dc:	e8 3f 16 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da2e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84da2e4:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84da2e8:	0f b6 c0             	movzbl %al,%eax
 84da2eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da2ef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da2f2:	89 04 24             	mov    %eax,(%esp)
 84da2f5:	e8 26 16 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da2fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84da2fd:	83 c0 14             	add    $0x14,%eax
 84da300:	89 04 24             	mov    %eax,(%esp)
 84da303:	e8 a8 40 ba ff       	call   807e3b0 <strlen@plt>
 84da308:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84da30b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da30e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da312:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da315:	89 04 24             	mov    %eax,(%esp)
 84da318:	e8 1f 16 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84da31d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84da320:	8d 50 14             	lea    0x14(%eax),%edx
 84da323:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da326:	89 44 24 08          	mov    %eax,0x8(%esp)
 84da32a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da32e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da331:	89 04 24             	mov    %eax,(%esp)
 84da334:	e8 ab d0 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84da339:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da340:	00 
 84da341:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da344:	89 04 24             	mov    %eax,(%esp)
 84da347:	e8 0c 16 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84da34c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da34f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da353:	8b 45 0c             	mov    0xc(%ebp),%eax
 84da356:	89 04 24             	mov    %eax,(%esp)
 84da359:	e8 5c e2 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84da35e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84da363:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da366:	89 04 24             	mov    %eax,(%esp)
 84da369:	e8 12 3b 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da36e:	eb 1b                	jmp    84da38b <_ZN32Inter_NoticePCRoomPlayerLoginOut12dispatch_sigEP5CUserPci+0x191>
 84da370:	89 d3                	mov    %edx,%ebx
 84da372:	89 c6                	mov    %eax,%esi
 84da374:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84da377:	89 04 24             	mov    %eax,(%esp)
 84da37a:	e8 01 3b 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da37f:	89 f0                	mov    %esi,%eax
 84da381:	89 da                	mov    %ebx,%edx
 84da383:	89 04 24             	mov    %eax,(%esp)
 84da386:	e8 c5 93 60 00       	call   8ae3750 <_Unwind_Resume>
 84da38b:	89 d8                	mov    %ebx,%eax
 84da38d:	83 c4 40             	add    $0x40,%esp
 84da390:	5b                   	pop    %ebx
 84da391:	5e                   	pop    %esi
 84da392:	5d                   	pop    %ebp
 84da393:	c3                   	ret

```

```c
// Inter_NoticePCRoomPlayerLoginOut::dispatch_sig @ 0x84da1fa

/* Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xf)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084da2c3 to 084da35d has its CatchHandler @ 084da370 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xba);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 10));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x13));
      local_10 = strlen((char *)(local_14 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x14),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xf);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_NoticePCRoomPlayerLoginOut::dispatch_sig(CUser*, char*, int)",
                 0x41eb,
                 "PCRoom : Inter_NoticePCRoomPlayerLoginOut::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```

