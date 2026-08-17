# Inter_MonitorPayTaxToUpper

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ce164 Inter_MonitorPayTaxToUpper::dispatch_sig  [0x084ce164-0x84ce547] ===
 84ce164:	55                   	push   %ebp
 84ce165:	89 e5                	mov    %esp,%ebp
 84ce167:	56                   	push   %esi
 84ce168:	53                   	push   %ebx
 84ce169:	83 ec 70             	sub    $0x70,%esp
 84ce16c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce16f:	89 04 24             	mov    %eax,(%esp)
 84ce172:	e8 15 c2 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ce177:	85 c0                	test   %eax,%eax
 84ce179:	0f 94 c0             	sete   %al
 84ce17c:	84 c0                	test   %al,%al
 84ce17e:	74 0a                	je     84ce18a <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x26>
 84ce180:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce185:	e9 b7 03 00 00       	jmp    84ce541 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3dd>
 84ce18a:	8b 45 10             	mov    0x10(%ebp),%eax
 84ce18d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84ce190:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce193:	89 04 24             	mov    %eax,(%esp)
 84ce196:	e8 29 14 d6 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 84ce19b:	85 c0                	test   %eax,%eax
 84ce19d:	0f 94 c0             	sete   %al
 84ce1a0:	84 c0                	test   %al,%al
 84ce1a2:	74 4d                	je     84ce1f1 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x8d>
 84ce1a4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ce1ab:	ff 
 84ce1ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce1af:	89 04 24             	mov    %eax,(%esp)
 84ce1b2:	e8 e9 fd 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ce1b7:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ce1bb:	c7 44 24 10 b4 88 c8 	movl   $0x8c888b4,0x10(%esp)
 84ce1c2:	08 
 84ce1c3:	c7 44 24 0c e7 29 00 	movl   $0x29e7,0xc(%esp)
 84ce1ca:	00 
 84ce1cb:	c7 44 24 08 a0 d0 c8 	movl   $0x8c8d0a0,0x8(%esp)
 84ce1d2:	08 
 84ce1d3:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ce1da:	08 
 84ce1db:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ce1e2:	e8 23 5a 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ce1e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce1ec:	e9 50 03 00 00       	jmp    84ce541 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3dd>
 84ce1f1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ce1f8:	ff 
 84ce1f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce1fc:	89 04 24             	mov    %eax,(%esp)
 84ce1ff:	e8 9c fd 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ce204:	89 c2                	mov    %eax,%edx
 84ce206:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce209:	8b 40 0e             	mov    0xe(%eax),%eax
 84ce20c:	39 c2                	cmp    %eax,%edx
 84ce20e:	0f 95 c0             	setne  %al
 84ce211:	84 c0                	test   %al,%al
 84ce213:	74 57                	je     84ce26c <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x108>
 84ce215:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce218:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ce21b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ce222:	ff 
 84ce223:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce226:	89 04 24             	mov    %eax,(%esp)
 84ce229:	e8 72 fd 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ce22e:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ce232:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ce236:	c7 44 24 10 4c 88 c8 	movl   $0x8c8884c,0x10(%esp)
 84ce23d:	08 
 84ce23e:	c7 44 24 0c ed 29 00 	movl   $0x29ed,0xc(%esp)
 84ce245:	00 
 84ce246:	c7 44 24 08 a0 d0 c8 	movl   $0x8c8d0a0,0x8(%esp)
 84ce24d:	08 
 84ce24e:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ce255:	08 
 84ce256:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ce25d:	e8 a8 59 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ce262:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce267:	e9 d5 02 00 00       	jmp    84ce541 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3dd>
 84ce26c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce26f:	8b 40 12             	mov    0x12(%eax),%eax
 84ce272:	85 c0                	test   %eax,%eax
 84ce274:	74 37                	je     84ce2ad <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x149>
 84ce276:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce279:	8b 40 12             	mov    0x12(%eax),%eax
 84ce27c:	89 c3                	mov    %eax,%ebx
 84ce27e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce281:	89 04 24             	mov    %eax,(%esp)
 84ce284:	e8 05 c0 c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ce289:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84ce290:	00 
 84ce291:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84ce298:	00 
 84ce299:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84ce2a0:	00 
 84ce2a1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ce2a5:	89 04 24             	mov    %eax,(%esp)
 84ce2a8:	e8 ef 0f 03 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 84ce2ad:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84ce2b4:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 84ce2b8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce2bb:	8b 40 16             	mov    0x16(%eax),%eax
 84ce2be:	85 c0                	test   %eax,%eax
 84ce2c0:	0f 84 12 01 00 00    	je     84ce3d8 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x274>
 84ce2c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce2c9:	89 04 24             	mov    %eax,(%esp)
 84ce2cc:	e8 e1 dc 01 00       	call   84ebfb2 <_ZN15CUserCharacInfo30getCurCharacMemberBonusFatigueEv>
 84ce2d1:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 84ce2d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce2d8:	89 04 24             	mov    %eax,(%esp)
 84ce2db:	e8 44 e5 01 00       	call   84ec824 <_ZN5CUser28getAccountMemberBonusFatigueEv>
 84ce2e0:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 84ce2e4:	e8 b2 de bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ce2e9:	8b 80 f4 48 00 00    	mov    0x48f4(%eax),%eax
 84ce2ef:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84ce2f2:	e8 a4 de bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84ce2f7:	8b 80 f8 48 00 00    	mov    0x48f8(%eax),%eax
 84ce2fd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84ce300:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84ce307:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 84ce30b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84ce30e:	89 d1                	mov    %edx,%ecx
 84ce310:	29 c1                	sub    %eax,%ecx
 84ce312:	89 c8                	mov    %ecx,%eax
 84ce314:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84ce317:	0f bf 45 e6          	movswl -0x1a(%ebp),%eax
 84ce31b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ce31e:	89 d1                	mov    %edx,%ecx
 84ce320:	29 c1                	sub    %eax,%ecx
 84ce322:	89 c8                	mov    %ecx,%eax
 84ce324:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84ce327:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84ce32a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce32e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84ce331:	89 04 24             	mov    %eax,(%esp)
 84ce334:	e8 d5 15 c1 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 84ce339:	8b 00                	mov    (%eax),%eax
 84ce33b:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84ce33e:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84ce345:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84ce348:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce34c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce34f:	89 04 24             	mov    %eax,(%esp)
 84ce352:	e8 c1 fe bb ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 84ce357:	8b 00                	mov    (%eax),%eax
 84ce359:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ce35c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84ce360:	75 09                	jne    84ce36b <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x207>
 84ce362:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84ce369:	eb 22                	jmp    84ce38d <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x229>
 84ce36b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ce36e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce371:	8b 40 16             	mov    0x16(%eax),%eax
 84ce374:	39 c2                	cmp    %eax,%edx
 84ce376:	76 0b                	jbe    84ce383 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x21f>
 84ce378:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce37b:	8b 40 16             	mov    0x16(%eax),%eax
 84ce37e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84ce381:	eb 0a                	jmp    84ce38d <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x229>
 84ce383:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce386:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84ce389:	c6 45 e3 01          	movb   $0x1,-0x1d(%ebp)
 84ce38d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84ce391:	7e 45                	jle    84ce3d8 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x274>
 84ce393:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ce396:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce39a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce39d:	89 04 24             	mov    %eax,(%esp)
 84ce3a0:	e8 59 14 18 00       	call   864f7fe <_ZN5CUser20gainCurCharacFatigueEi>
 84ce3a5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ce3a8:	0f bf d0             	movswl %ax,%edx
 84ce3ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce3ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce3b2:	89 04 24             	mov    %eax,(%esp)
 84ce3b5:	e8 9a db 01 00       	call   84ebf54 <_ZN15CUserCharacInfo30incCurCharacMemberBonusFatigueEs>
 84ce3ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce3bd:	89 04 24             	mov    %eax,(%esp)
 84ce3c0:	e8 0f e4 01 00       	call   84ec7d4 <_ZN5CUser28EnableSaveMemberBonusFatigueEv>
 84ce3c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ce3c8:	98                   	cwtl
 84ce3c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce3cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce3d0:	89 04 24             	mov    %eax,(%esp)
 84ce3d3:	e8 0c e4 01 00       	call   84ec7e4 <_ZN5CUser28incAccountMemberBonusFatigueEs>
 84ce3d8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce3db:	8b 40 12             	mov    0x12(%eax),%eax
 84ce3de:	85 c0                	test   %eax,%eax
 84ce3e0:	75 0a                	jne    84ce3ec <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x288>
 84ce3e2:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 84ce3e6:	0f 84 50 01 00 00    	je     84ce53c <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3d8>
 84ce3ec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce3ef:	89 04 24             	mov    %eax,(%esp)
 84ce3f2:	e8 55 f9 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ce3f7:	c7 44 24 08 4c 00 00 	movl   $0x4c,0x8(%esp)
 84ce3fe:	00 
 84ce3ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ce406:	00 
 84ce407:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce40a:	89 04 24             	mov    %eax,(%esp)
 84ce40d:	e8 ea d4 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ce412:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce415:	8b 40 12             	mov    0x12(%eax),%eax
 84ce418:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce41c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce41f:	89 04 24             	mov    %eax,(%esp)
 84ce422:	e8 15 d5 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce427:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84ce42a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce42e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce431:	89 04 24             	mov    %eax,(%esp)
 84ce434:	e8 6b ba c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84ce439:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce43c:	83 c0 1a             	add    $0x1a,%eax
 84ce43f:	89 04 24             	mov    %eax,(%esp)
 84ce442:	e8 69 ff ba ff       	call   807e3b0 <strlen@plt>
 84ce447:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce44a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce44d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce451:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce454:	89 04 24             	mov    %eax,(%esp)
 84ce457:	e8 e0 d4 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce45c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84ce45f:	8d 50 1a             	lea    0x1a(%eax),%edx
 84ce462:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce465:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ce469:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce46d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce470:	89 04 24             	mov    %eax,(%esp)
 84ce473:	e8 6c 8f ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ce478:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ce47f:	00 
 84ce480:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce483:	89 04 24             	mov    %eax,(%esp)
 84ce486:	e8 cd d4 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ce48b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce48e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce492:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce495:	89 04 24             	mov    %eax,(%esp)
 84ce498:	e8 1d a1 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ce49d:	80 7d e3 00          	cmpb   $0x0,-0x1d(%ebp)
 84ce4a1:	0f 84 8a 00 00 00    	je     84ce531 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3cd>
 84ce4a7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ce4aa:	89 04 24             	mov    %eax,(%esp)
 84ce4ad:	e8 9a f8 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ce4b2:	c7 44 24 08 28 01 00 	movl   $0x128,0x8(%esp)
 84ce4b9:	00 
 84ce4ba:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ce4c1:	00 
 84ce4c2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ce4c5:	89 04 24             	mov    %eax,(%esp)
 84ce4c8:	e8 2f d4 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ce4cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ce4d4:	00 
 84ce4d5:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ce4d8:	89 04 24             	mov    %eax,(%esp)
 84ce4db:	e8 78 d4 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ce4e0:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ce4e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce4e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce4ea:	89 04 24             	mov    %eax,(%esp)
 84ce4ed:	e8 c8 a0 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ce4f2:	eb 15                	jmp    84ce509 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3a5>
 84ce4f4:	89 d3                	mov    %edx,%ebx
 84ce4f6:	89 c6                	mov    %eax,%esi
 84ce4f8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ce4fb:	89 04 24             	mov    %eax,(%esp)
 84ce4fe:	e8 7d f9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ce503:	89 f0                	mov    %esi,%eax
 84ce505:	89 da                	mov    %ebx,%edx
 84ce507:	eb 0d                	jmp    84ce516 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3b2>
 84ce509:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84ce50c:	89 04 24             	mov    %eax,(%esp)
 84ce50f:	e8 6c f9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ce514:	eb 1b                	jmp    84ce531 <_ZN26Inter_MonitorPayTaxToUpper12dispatch_sigEP5CUserPci+0x3cd>
 84ce516:	89 d3                	mov    %edx,%ebx
 84ce518:	89 c6                	mov    %eax,%esi
 84ce51a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce51d:	89 04 24             	mov    %eax,(%esp)
 84ce520:	e8 5b f9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ce525:	89 f0                	mov    %esi,%eax
 84ce527:	89 da                	mov    %ebx,%edx
 84ce529:	89 04 24             	mov    %eax,(%esp)
 84ce52c:	e8 1f 52 61 00       	call   8ae3750 <_Unwind_Resume>
 84ce531:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84ce534:	89 04 24             	mov    %eax,(%esp)
 84ce537:	e8 44 f9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ce53c:	b8 00 00 00 00       	mov    $0x0,%eax
 84ce541:	83 c4 70             	add    $0x70,%esp
 84ce544:	5b                   	pop    %ebx
 84ce545:	5e                   	pop    %esi
 84ce546:	5d                   	pop    %ebp
 84ce547:	c3                   	ret

```

```c
// Inter_MonitorPayTaxToUpper::dispatch_sig @ 0x84ce164

/* Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorPayTaxToUpper::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  int *piVar5;
  uint *puVar6;
  PacketGuard local_54 [12];
  PacketGuard local_48 [12];
  int local_3c;
  int local_38;
  int local_34 [3];
  uint local_28;
  char local_21;
  short local_20;
  short local_1e;
  int local_1c;
  int local_18;
  uint local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_34[2] = param_3;
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int)",0x29e7,
                 "MEMBER : Inter_MonitorPayTaxToUpper::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_34[2] + 0xe)) {
        if (*(int *)(local_34[2] + 0x12) != 0) {
          uVar2 = *(undefined4 *)(local_34[2] + 0x12);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
          CInventory::gain_money(pCVar4,uVar2,10,1,0);
        }
        local_28 = 0;
        local_21 = '\0';
        if (*(int *)(local_34[2] + 0x16) != 0) {
          local_20 = CUserCharacInfo::getCurCharacMemberBonusFatigue((CUserCharacInfo *)param_2);
          local_1e = CUser::getAccountMemberBonusFatigue((CUser *)param_2);
          iVar1 = G_CDataManager();
          local_1c = *(int *)(iVar1 + 0x48f4);
          iVar1 = G_CDataManager();
          local_18 = *(int *)(iVar1 + 0x48f8);
          local_14 = 0;
          local_34[0] = local_1c - local_20;
          local_38 = local_18 - local_1e;
          piVar5 = std::min<int>(local_34,&local_38);
          local_3c = *piVar5;
          local_34[1] = 0;
          puVar6 = (uint *)std::max<int>(local_34 + 1,&local_3c);
          local_14 = *puVar6;
          if (local_14 == 0) {
            local_28 = 0;
          }
          else if (*(uint *)(local_34[2] + 0x16) < local_14) {
            local_28 = *(uint *)(local_34[2] + 0x16);
          }
          else {
            local_21 = '\x01';
            local_28 = local_14;
          }
          if (0 < (int)local_28) {
            CUser::gainCurCharacFatigue((CUser *)param_2,local_28);
            CUserCharacInfo::incCurCharacMemberBonusFatigue
                      ((CUserCharacInfo *)param_2,(short)local_28);
            CUser::EnableSaveMemberBonusFatigue((CUser *)param_2);
            CUser::incAccountMemberBonusFatigue((CUser *)param_2,(short)local_28);
          }
        }
        if ((*(int *)(local_34[2] + 0x12) != 0) || (local_28 != 0)) {
          PacketGuard::PacketGuard(local_48);
                    /* try { // try from 084ce40d to 084ce4b1 has its CatchHandler @ 084ce516 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0x4c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,*(int *)(local_34[2] + 0x12));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,local_28);
          local_10 = strlen((char *)(local_34[2] + 0x1a));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_48,(char *)(local_34[2] + 0x1a),local_10);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send((CUser *)param_2,local_48);
          if (local_21 != '\0') {
            PacketGuard::PacketGuard(local_54);
                    /* try { // try from 084ce4c8 to 084ce4f1 has its CatchHandler @ 084ce4f4 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_54,0,0x128);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_54,true);
            CUser::Send((CUser *)param_2,local_54);
                    /* try { // try from 084ce50f to 084ce513 has its CatchHandler @ 084ce516 */
            PacketGuard::~PacketGuard(local_54);
          }
          PacketGuard::~PacketGuard(local_48);
        }
      }
      else {
        uVar2 = *(undefined4 *)(local_34[2] + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorPayTaxToUpper::dispatch_sig(CUser*, char*, int)",0x29ed
                   ,
                   "MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}

```

