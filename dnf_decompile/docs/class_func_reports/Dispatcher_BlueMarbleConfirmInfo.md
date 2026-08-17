# Dispatcher_BlueMarbleConfirmInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e68c8 Dispatcher_BlueMarbleConfirmInfo::check_error  [0x081e68c8-0x81e6903] ===
 81e68c8:	55                   	push   %ebp
 81e68c9:	89 e5                	mov    %esp,%ebp
 81e68cb:	83 ec 28             	sub    $0x28,%esp
 81e68ce:	8b 45 10             	mov    0x10(%ebp),%eax
 81e68d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e68d4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e68d8:	75 07                	jne    81e68e1 <_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE+0x19>
 81e68da:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e68df:	eb 21                	jmp    81e6902 <_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE+0x3a>
 81e68e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e68e4:	89 04 24             	mov    %eax,(%esp)
 81e68e7:	e8 a0 3a ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e68ec:	83 f8 02             	cmp    $0x2,%eax
 81e68ef:	0f 9e c0             	setle  %al
 81e68f2:	84 c0                	test   %al,%al
 81e68f4:	74 07                	je     81e68fd <_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE+0x35>
 81e68f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e68fb:	eb 05                	jmp    81e6902 <_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE+0x3a>
 81e68fd:	b8 00 00 00 00       	mov    $0x0,%eax
 81e6902:	c9                   	leave
 81e6903:	c3                   	ret

```

```c
// Dispatcher_BlueMarbleConfirmInfo::check_error @ 0x81e68c8

/* Dispatcher_BlueMarbleConfirmInfo::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_BlueMarbleConfirmInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081e62da Dispatcher_BlueMarbleConfirmInfo::process  [0x081e62da-0x81e68c7] ===
 81e62da:	55                   	push   %ebp
 81e62db:	89 e5                	mov    %esp,%ebp
 81e62dd:	57                   	push   %edi
 81e62de:	56                   	push   %esi
 81e62df:	53                   	push   %ebx
 81e62e0:	81 ec bc 04 00 00    	sub    $0x4bc,%esp
 81e62e6:	8b 45 14             	mov    0x14(%ebp),%eax
 81e62e9:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81e62ec:	8b 45 10             	mov    0x10(%ebp),%eax
 81e62ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e62f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e62f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e62fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81e62fd:	89 04 24             	mov    %eax,(%esp)
 81e6300:	e8 c3 05 00 00       	call   81e68c8 <_ZN32Dispatcher_BlueMarbleConfirmInfo11check_errorEP5CUserR8MSG_BASE>
 81e6305:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81e6308:	89 42 04             	mov    %eax,0x4(%edx)
 81e630b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e630e:	8b 40 04             	mov    0x4(%eax),%eax
 81e6311:	85 c0                	test   %eax,%eax
 81e6313:	7e 0a                	jle    81e631f <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 81e6315:	b8 00 00 00 00       	mov    $0x0,%eax
 81e631a:	e9 9e 05 00 00       	jmp    81e68bd <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5e3>
 81e631f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e6322:	8b 40 04             	mov    0x4(%eax),%eax
 81e6325:	85 c0                	test   %eax,%eax
 81e6327:	79 2b                	jns    81e6354 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x7a>
 81e6329:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e632c:	8b 40 04             	mov    0x4(%eax),%eax
 81e632f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e6336:	00 
 81e6337:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e633b:	c7 44 24 04 20 0d bd 	movl   $0x8bd0d20,0x4(%esp)
 81e6342:	08 
 81e6343:	c7 04 24 1f 61 00 00 	movl   $0x611f,(%esp)
 81e634a:	e8 88 a5 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e634f:	e9 69 05 00 00       	jmp    81e68bd <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5e3>
 81e6354:	8b 45 10             	mov    0x10(%ebp),%eax
 81e6357:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e635a:	8d 9d a8 fb ff ff    	lea    -0x458(%ebp),%ebx
 81e6360:	b8 00 00 00 00       	mov    $0x0,%eax
 81e6365:	ba 00 01 00 00       	mov    $0x100,%edx
 81e636a:	89 df                	mov    %ebx,%edi
 81e636c:	89 d1                	mov    %edx,%ecx
 81e636e:	f3 ab                	rep stos %eax,%es:(%edi)
 81e6370:	e8 0c 5e ee ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81e6375:	89 04 24             	mov    %eax,(%esp)
 81e6378:	e8 1d 40 ef ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 81e637d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6381:	c7 44 24 04 04 1c bc 	movl   $0x8bc1c04,0x4(%esp)
 81e6388:	08 
 81e6389:	8d 85 a8 fb ff ff    	lea    -0x458(%ebp),%eax
 81e638f:	89 04 24             	mov    %eax,(%esp)
 81e6392:	e8 a9 80 e9 ff       	call   807e440 <sprintf@plt>
 81e6397:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e639a:	89 04 24             	mov    %eax,(%esp)
 81e639d:	e8 bc 3f ef ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 81e63a2:	98                   	cwtl
 81e63a3:	89 85 6c fb ff ff    	mov    %eax,-0x494(%ebp)
 81e63a9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e63ac:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e63b0:	98                   	cwtl
 81e63b1:	89 85 70 fb ff ff    	mov    %eax,-0x490(%ebp)
 81e63b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e63ba:	89 04 24             	mov    %eax,(%esp)
 81e63bd:	e8 08 ab 4a 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81e63c2:	89 85 74 fb ff ff    	mov    %eax,-0x48c(%ebp)
 81e63c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e63cb:	89 04 24             	mov    %eax,(%esp)
 81e63ce:	e8 b9 3f ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e63d3:	89 c7                	mov    %eax,%edi
 81e63d5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e63dc:	ff 
 81e63dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e63e0:	89 04 24             	mov    %eax,(%esp)
 81e63e3:	e8 b8 7b 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e63e8:	89 c6                	mov    %eax,%esi
 81e63ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e63ed:	89 04 24             	mov    %eax,(%esp)
 81e63f0:	e8 79 3f ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e63f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e63fc:	00 
 81e63fd:	89 04 24             	mov    %eax,(%esp)
 81e6400:	e8 46 2c f2 ff       	call   810904b <_Z14NumberToStringji>
 81e6405:	89 c3                	mov    %eax,%ebx
 81e6407:	c7 44 24 08 27 61 00 	movl   $0x6127,0x8(%esp)
 81e640e:	00 
 81e640f:	c7 44 24 04 20 0d bd 	movl   $0x8bd0d20,0x4(%esp)
 81e6416:	08 
 81e6417:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e641a:	89 04 24             	mov    %eax,(%esp)
 81e641d:	e8 4a 14 f2 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81e6422:	8b 85 6c fb ff ff    	mov    -0x494(%ebp),%eax
 81e6428:	89 44 24 20          	mov    %eax,0x20(%esp)
 81e642c:	8b 8d 70 fb ff ff    	mov    -0x490(%ebp),%ecx
 81e6432:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81e6436:	8b 85 74 fb ff ff    	mov    -0x48c(%ebp),%eax
 81e643c:	89 44 24 18          	mov    %eax,0x18(%esp)
 81e6440:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e6444:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e6448:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e644c:	c7 44 24 08 24 1c bc 	movl   $0x8bc1c24,0x8(%esp)
 81e6453:	08 
 81e6454:	8d 85 a8 fb ff ff    	lea    -0x458(%ebp),%eax
 81e645a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e645e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e6461:	89 04 24             	mov    %eax,(%esp)
 81e6464:	e8 2f 14 f2 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81e6469:	e8 2d 5d ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e646e:	89 04 24             	mov    %eax,(%esp)
 81e6471:	e8 74 fa 17 00       	call   8365eea <_ZN12CDataManager19getBlueMarbleScriptEv>
 81e6476:	8b 40 30             	mov    0x30(%eax),%eax
 81e6479:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e647c:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81e6483:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e6486:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e648a:	84 c0                	test   %al,%al
 81e648c:	0f 85 2e 03 00 00    	jne    81e67c0 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x4e6>
 81e6492:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e6495:	0f b7 58 0e          	movzwl 0xe(%eax),%ebx
 81e6499:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e649c:	89 04 24             	mov    %eax,(%esp)
 81e649f:	e8 ba 3e ef ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 81e64a4:	66 39 c3             	cmp    %ax,%bx
 81e64a7:	0f 95 c0             	setne  %al
 81e64aa:	84 c0                	test   %al,%al
 81e64ac:	0f 84 0d 02 00 00    	je     81e66bf <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x3e5>
 81e64b2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e64b5:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e64b9:	0f bf d8             	movswl %ax,%ebx
 81e64bc:	e8 cd 5c ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81e64c1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e64c5:	89 04 24             	mov    %eax,(%esp)
 81e64c8:	e8 d1 be 0b 00       	call   82a239e <_ZN12CGameManager13getBlueMarbleEi>
 81e64cd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e64d0:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81e64d4:	0f 84 e4 00 00 00    	je     81e65be <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x2e4>
 81e64da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e64dd:	89 04 24             	mov    %eax,(%esp)
 81e64e0:	e8 79 3e ef ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 81e64e5:	98                   	cwtl
 81e64e6:	89 85 78 fb ff ff    	mov    %eax,-0x488(%ebp)
 81e64ec:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e64ef:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e64f3:	98                   	cwtl
 81e64f4:	89 85 7c fb ff ff    	mov    %eax,-0x484(%ebp)
 81e64fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e64fd:	89 04 24             	mov    %eax,(%esp)
 81e6500:	e8 c5 a9 4a 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81e6505:	89 85 80 fb ff ff    	mov    %eax,-0x480(%ebp)
 81e650b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e650e:	89 04 24             	mov    %eax,(%esp)
 81e6511:	e8 76 3e ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e6516:	89 c7                	mov    %eax,%edi
 81e6518:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e651f:	ff 
 81e6520:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6523:	89 04 24             	mov    %eax,(%esp)
 81e6526:	e8 75 7a 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e652b:	89 c6                	mov    %eax,%esi
 81e652d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6530:	89 04 24             	mov    %eax,(%esp)
 81e6533:	e8 36 3e ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e6538:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e653f:	00 
 81e6540:	89 04 24             	mov    %eax,(%esp)
 81e6543:	e8 03 2b f2 ff       	call   810904b <_Z14NumberToStringji>
 81e6548:	89 c3                	mov    %eax,%ebx
 81e654a:	c7 44 24 08 35 61 00 	movl   $0x6135,0x8(%esp)
 81e6551:	00 
 81e6552:	c7 44 24 04 20 0d bd 	movl   $0x8bd0d20,0x4(%esp)
 81e6559:	08 
 81e655a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e655d:	89 04 24             	mov    %eax,(%esp)
 81e6560:	e8 07 13 f2 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81e6565:	8b 8d 78 fb ff ff    	mov    -0x488(%ebp),%ecx
 81e656b:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81e656f:	8b 85 7c fb ff ff    	mov    -0x484(%ebp),%eax
 81e6575:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81e6579:	8b 8d 80 fb ff ff    	mov    -0x480(%ebp),%ecx
 81e657f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81e6583:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e6587:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e658b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e658f:	c7 44 24 08 98 1c bc 	movl   $0x8bc1c98,0x8(%esp)
 81e6596:	08 
 81e6597:	8d 85 a8 fb ff ff    	lea    -0x458(%ebp),%eax
 81e659d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e65a1:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e65a4:	89 04 24             	mov    %eax,(%esp)
 81e65a7:	e8 ec 12 f2 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81e65ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e65af:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e65b3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e65b6:	89 04 24             	mov    %eax,(%esp)
 81e65b9:	e8 54 36 ef ff       	call   80d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>
 81e65be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e65c1:	89 04 24             	mov    %eax,(%esp)
 81e65c4:	e8 1d ed 46 00       	call   86552e6 <_ZN5CUser13getBlueMarbleEv>
 81e65c9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e65cc:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81e65d0:	0f 84 e2 02 00 00    	je     81e68b8 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5de>
 81e65d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e65d9:	89 04 24             	mov    %eax,(%esp)
 81e65dc:	e8 7d 3d ef ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 81e65e1:	98                   	cwtl
 81e65e2:	89 85 84 fb ff ff    	mov    %eax,-0x47c(%ebp)
 81e65e8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e65eb:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e65ef:	98                   	cwtl
 81e65f0:	89 85 88 fb ff ff    	mov    %eax,-0x478(%ebp)
 81e65f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e65f9:	89 04 24             	mov    %eax,(%esp)
 81e65fc:	e8 c9 a8 4a 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81e6601:	89 85 8c fb ff ff    	mov    %eax,-0x474(%ebp)
 81e6607:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e660a:	89 04 24             	mov    %eax,(%esp)
 81e660d:	e8 7a 3d ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e6612:	89 c7                	mov    %eax,%edi
 81e6614:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e661b:	ff 
 81e661c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e661f:	89 04 24             	mov    %eax,(%esp)
 81e6622:	e8 79 79 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e6627:	89 c6                	mov    %eax,%esi
 81e6629:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e662c:	89 04 24             	mov    %eax,(%esp)
 81e662f:	e8 3a 3d ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e6634:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e663b:	00 
 81e663c:	89 04 24             	mov    %eax,(%esp)
 81e663f:	e8 07 2a f2 ff       	call   810904b <_Z14NumberToStringji>
 81e6644:	89 c3                	mov    %eax,%ebx
 81e6646:	c7 44 24 08 40 61 00 	movl   $0x6140,0x8(%esp)
 81e664d:	00 
 81e664e:	c7 44 24 04 20 0d bd 	movl   $0x8bd0d20,0x4(%esp)
 81e6655:	08 
 81e6656:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81e6659:	89 04 24             	mov    %eax,(%esp)
 81e665c:	e8 0b 12 f2 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81e6661:	8b 85 84 fb ff ff    	mov    -0x47c(%ebp),%eax
 81e6667:	89 44 24 20          	mov    %eax,0x20(%esp)
 81e666b:	8b 8d 88 fb ff ff    	mov    -0x478(%ebp),%ecx
 81e6671:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81e6675:	8b 85 8c fb ff ff    	mov    -0x474(%ebp),%eax
 81e667b:	89 44 24 18          	mov    %eax,0x18(%esp)
 81e667f:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e6683:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e6687:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e668b:	c7 44 24 08 98 1c bc 	movl   $0x8bc1c98,0x8(%esp)
 81e6692:	08 
 81e6693:	8d 85 a8 fb ff ff    	lea    -0x458(%ebp),%eax
 81e6699:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e669d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81e66a0:	89 04 24             	mov    %eax,(%esp)
 81e66a3:	e8 f0 11 f2 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81e66a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e66ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e66af:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e66b2:	89 04 24             	mov    %eax,(%esp)
 81e66b5:	e8 58 35 ef ff       	call   80d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>
 81e66ba:	e9 f9 01 00 00       	jmp    81e68b8 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5de>
 81e66bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e66c2:	89 04 24             	mov    %eax,(%esp)
 81e66c5:	e8 1c ec 46 00       	call   86552e6 <_ZN5CUser13getBlueMarbleEv>
 81e66ca:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e66cd:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81e66d1:	0f 84 e1 01 00 00    	je     81e68b8 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5de>
 81e66d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e66da:	89 04 24             	mov    %eax,(%esp)
 81e66dd:	e8 7c 3c ef ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 81e66e2:	98                   	cwtl
 81e66e3:	89 85 90 fb ff ff    	mov    %eax,-0x470(%ebp)
 81e66e9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e66ec:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e66f0:	98                   	cwtl
 81e66f1:	89 85 94 fb ff ff    	mov    %eax,-0x46c(%ebp)
 81e66f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e66fa:	89 04 24             	mov    %eax,(%esp)
 81e66fd:	e8 c8 a7 4a 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81e6702:	89 85 98 fb ff ff    	mov    %eax,-0x468(%ebp)
 81e6708:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e670b:	89 04 24             	mov    %eax,(%esp)
 81e670e:	e8 79 3c ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e6713:	89 c7                	mov    %eax,%edi
 81e6715:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e671c:	ff 
 81e671d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6720:	89 04 24             	mov    %eax,(%esp)
 81e6723:	e8 78 78 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e6728:	89 c6                	mov    %eax,%esi
 81e672a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e672d:	89 04 24             	mov    %eax,(%esp)
 81e6730:	e8 39 3c ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e6735:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e673c:	00 
 81e673d:	89 04 24             	mov    %eax,(%esp)
 81e6740:	e8 06 29 f2 ff       	call   810904b <_Z14NumberToStringji>
 81e6745:	89 c3                	mov    %eax,%ebx
 81e6747:	c7 44 24 08 4d 61 00 	movl   $0x614d,0x8(%esp)
 81e674e:	00 
 81e674f:	c7 44 24 04 20 0d bd 	movl   $0x8bd0d20,0x4(%esp)
 81e6756:	08 
 81e6757:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81e675a:	89 04 24             	mov    %eax,(%esp)
 81e675d:	e8 0a 11 f2 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81e6762:	8b 8d 90 fb ff ff    	mov    -0x470(%ebp),%ecx
 81e6768:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81e676c:	8b 85 94 fb ff ff    	mov    -0x46c(%ebp),%eax
 81e6772:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81e6776:	8b 8d 98 fb ff ff    	mov    -0x468(%ebp),%ecx
 81e677c:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81e6780:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e6784:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e6788:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e678c:	c7 44 24 08 20 1d bc 	movl   $0x8bc1d20,0x8(%esp)
 81e6793:	08 
 81e6794:	8d 85 a8 fb ff ff    	lea    -0x458(%ebp),%eax
 81e679a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e679e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81e67a1:	89 04 24             	mov    %eax,(%esp)
 81e67a4:	e8 ef 10 f2 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81e67a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e67ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e67b0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e67b3:	89 04 24             	mov    %eax,(%esp)
 81e67b6:	e8 57 34 ef ff       	call   80d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>
 81e67bb:	e9 f8 00 00 00       	jmp    81e68b8 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5de>
 81e67c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e67c3:	89 04 24             	mov    %eax,(%esp)
 81e67c6:	e8 93 3b ef ff       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 81e67cb:	98                   	cwtl
 81e67cc:	89 85 9c fb ff ff    	mov    %eax,-0x464(%ebp)
 81e67d2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e67d5:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e67d9:	98                   	cwtl
 81e67da:	89 85 a0 fb ff ff    	mov    %eax,-0x460(%ebp)
 81e67e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e67e3:	89 04 24             	mov    %eax,(%esp)
 81e67e6:	e8 df a6 4a 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 81e67eb:	89 85 a4 fb ff ff    	mov    %eax,-0x45c(%ebp)
 81e67f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e67f4:	89 04 24             	mov    %eax,(%esp)
 81e67f7:	e8 90 3b ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e67fc:	89 c7                	mov    %eax,%edi
 81e67fe:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e6805:	ff 
 81e6806:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6809:	89 04 24             	mov    %eax,(%esp)
 81e680c:	e8 8f 77 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e6811:	89 c6                	mov    %eax,%esi
 81e6813:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6816:	89 04 24             	mov    %eax,(%esp)
 81e6819:	e8 50 3b ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e681e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e6825:	00 
 81e6826:	89 04 24             	mov    %eax,(%esp)
 81e6829:	e8 1d 28 f2 ff       	call   810904b <_Z14NumberToStringji>
 81e682e:	89 c3                	mov    %eax,%ebx
 81e6830:	c7 44 24 08 58 61 00 	movl   $0x6158,0x8(%esp)
 81e6837:	00 
 81e6838:	c7 44 24 04 20 0d bd 	movl   $0x8bd0d20,0x4(%esp)
 81e683f:	08 
 81e6840:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e6843:	89 04 24             	mov    %eax,(%esp)
 81e6846:	e8 21 10 f2 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81e684b:	8b 85 9c fb ff ff    	mov    -0x464(%ebp),%eax
 81e6851:	89 44 24 20          	mov    %eax,0x20(%esp)
 81e6855:	8b 8d a0 fb ff ff    	mov    -0x460(%ebp),%ecx
 81e685b:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 81e685f:	8b 85 a4 fb ff ff    	mov    -0x45c(%ebp),%eax
 81e6865:	89 44 24 18          	mov    %eax,0x18(%esp)
 81e6869:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81e686d:	89 74 24 10          	mov    %esi,0x10(%esp)
 81e6871:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e6875:	c7 44 24 08 a4 1d bc 	movl   $0x8bc1da4,0x8(%esp)
 81e687c:	08 
 81e687d:	8d 85 a8 fb ff ff    	lea    -0x458(%ebp),%eax
 81e6883:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6887:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81e688a:	89 04 24             	mov    %eax,(%esp)
 81e688d:	e8 06 10 f2 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81e6892:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6895:	89 04 24             	mov    %eax,(%esp)
 81e6898:	e8 49 ea 46 00       	call   86552e6 <_ZN5CUser13getBlueMarbleEv>
 81e689d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e68a0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81e68a4:	74 12                	je     81e68b8 <_ZN32Dispatcher_BlueMarbleConfirmInfo7processEP5CUserR8MSG_BASER9ParamBase+0x5de>
 81e68a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e68a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e68ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e68b0:	89 04 24             	mov    %eax,(%esp)
 81e68b3:	e8 5a 33 ef ff       	call   80d9c12 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser>
 81e68b8:	b8 00 00 00 00       	mov    $0x0,%eax
 81e68bd:	81 c4 bc 04 00 00    	add    $0x4bc,%esp
 81e68c3:	5b                   	pop    %ebx
 81e68c4:	5e                   	pop    %esi
 81e68c5:	5f                   	pop    %edi
 81e68c6:	5d                   	pop    %ebp
 81e68c7:	c3                   	ret

```

```c
// Dispatcher_BlueMarbleConfirmInfo::process @ 0x81e62da

/* Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BlueMarbleConfirmInfo::process
          (Dispatcher_BlueMarbleConfirmInfo *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  CEnvironment *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  CDataManager *this_01;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  char local_45c [1024];
  CMyFileLog local_5c [8];
  CMyFileLog local_54 [8];
  CMyFileLog local_4c [8];
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [8];
  ParamBase *local_34;
  MSG_BASE *local_30;
  undefined4 local_2c;
  BlueMarble *local_28;
  BlueMarble *local_24;
  BlueMarble *local_20;
  
  bVar10 = 0;
  local_34 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_34 + 4) = uVar3;
  if (*(int *)(local_34 + 4) < 1) {
    if (*(int *)(local_34 + 4) < 0) {
      uVar3 = LineFunc(0x611f,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_34 + 4),0);
    }
    else {
      local_30 = param_2;
      pcVar9 = local_45c;
      for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_file_name(this_00);
      sprintf(local_45c,"./log/%s/BlueMarbleConfirmInfo",uVar3);
      sVar2 = CUser::getBlueMarbleIndex(param_1);
      sVar1 = *(short *)(local_30 + 0xe);
      uVar3 = CUser::getMoveSpace(param_1);
      uVar4 = CUser::get_state(param_1);
      uVar5 = CUser::get_charac_no(param_1,-1);
      uVar6 = CUser::get_acc_id(param_1);
      uVar7 = NumberToString(uVar6,0);
      CMyFileLog::CMyFileLog
                (local_5c,
                 "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x6127);
      CMyFileLog::operator()
                (local_5c,local_45c,
                 "Client m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                 ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
      this_01 = (CDataManager *)G_CDataManager();
      iVar8 = CDataManager::getBlueMarbleScript(this_01);
      local_2c = *(undefined4 *)(iVar8 + 0x30);
      local_28 = (BlueMarble *)0x0;
      if (local_30[0xd] == (MSG_BASE)0x0) {
        sVar1 = *(short *)(local_30 + 0xe);
        sVar2 = CUser::getBlueMarbleIndex(param_1);
        if (sVar1 == sVar2) {
          local_24 = (BlueMarble *)CUser::getBlueMarble(param_1);
          if (local_24 != (BlueMarble *)0x0) {
            sVar2 = CUser::getBlueMarbleIndex(param_1);
            sVar1 = *(short *)(local_30 + 0xe);
            uVar3 = CUser::getMoveSpace(param_1);
            uVar4 = CUser::get_state(param_1);
            uVar5 = CUser::get_charac_no(param_1,-1);
            uVar6 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar6,0);
            CMyFileLog::CMyFileLog
                      (local_44,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0x614d);
            CMyFileLog::operator()
                      (local_44,local_45c,
                       "OverLap User index same m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                       ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
            BlueMarble::checkBlueMarbleUserConfirm(local_24,param_1);
          }
        }
        else {
          iVar8 = G_CGameManager();
          local_28 = (BlueMarble *)CGameManager::getBlueMarble(iVar8);
          if (local_28 != (BlueMarble *)0x0) {
            sVar2 = CUser::getBlueMarbleIndex(param_1);
            sVar1 = *(short *)(local_30 + 0xe);
            uVar3 = CUser::getMoveSpace(param_1);
            uVar4 = CUser::get_state(param_1);
            uVar5 = CUser::get_charac_no(param_1,-1);
            uVar6 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar6,0);
            CMyFileLog::CMyFileLog
                      (local_54,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0x6135);
            CMyFileLog::operator()
                      (local_54,local_45c,
                       "OverLap User index different m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                       ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
            BlueMarble::checkBlueMarbleUserConfirm(local_28,param_1);
          }
          local_28 = (BlueMarble *)CUser::getBlueMarble(param_1);
          if (local_28 != (BlueMarble *)0x0) {
            sVar2 = CUser::getBlueMarbleIndex(param_1);
            sVar1 = *(short *)(local_30 + 0xe);
            uVar3 = CUser::getMoveSpace(param_1);
            uVar4 = CUser::get_state(param_1);
            uVar5 = CUser::get_charac_no(param_1,-1);
            uVar6 = CUser::get_acc_id(param_1);
            uVar7 = NumberToString(uVar6,0);
            CMyFileLog::CMyFileLog
                      (local_4c,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0x6140);
            CMyFileLog::operator()
                      (local_4c,local_45c,
                       "OverLap User index different m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                       ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
            BlueMarble::checkBlueMarbleUserConfirm(local_28,param_1);
          }
        }
      }
      else {
        sVar2 = CUser::getBlueMarbleIndex(param_1);
        sVar1 = *(short *)(local_30 + 0xe);
        uVar3 = CUser::getMoveSpace(param_1);
        uVar4 = CUser::get_state(param_1);
        uVar5 = CUser::get_charac_no(param_1,-1);
        uVar6 = CUser::get_acc_id(param_1);
        uVar7 = NumberToString(uVar6,0);
        CMyFileLog::CMyFileLog
                  (local_3c,
                   "virtual int Dispatcher_BlueMarbleConfirmInfo::process(CUser*, MSG_BASE&, ParamBase&)"
                   ,0x6158);
        CMyFileLog::operator()
                  (local_3c,local_45c,
                   "Not Exist User m_id(%s) charac_no(%u) userState(%d) userSpace(%d)client_blueMarble_Index(%d) server_bluemarble_index(%d)"
                   ,uVar7,uVar5,uVar4,uVar3,(int)sVar1,(int)sVar2);
        local_20 = (BlueMarble *)CUser::getBlueMarble(param_1);
        if (local_20 != (BlueMarble *)0x0) {
          BlueMarble::checkBlueMarbleUserConfirm(local_20,param_1);
        }
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081e6242 Dispatcher_BlueMarbleConfirmInfo::read  [0x081e6242-0x81e62d9] ===
 81e6242:	55                   	push   %ebp
 81e6243:	89 e5                	mov    %esp,%ebp
 81e6245:	83 ec 28             	sub    $0x28,%esp
 81e6248:	8b 45 10             	mov    0x10(%ebp),%eax
 81e624b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e624e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6251:	83 c0 0d             	add    $0xd,%eax
 81e6254:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6258:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e625b:	89 04 24             	mov    %eax,(%esp)
 81e625e:	e8 bf 6c 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e6263:	83 f0 01             	xor    $0x1,%eax
 81e6266:	84 c0                	test   %al,%al
 81e6268:	74 26                	je     81e6290 <_ZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASE+0x4e>
 81e626a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e6271:	00 
 81e6272:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e6279:	00 
 81e627a:	c7 44 24 04 80 0d bd 	movl   $0x8bd0d80,0x4(%esp)
 81e6281:	08 
 81e6282:	c7 04 24 0d 61 00 00 	movl   $0x610d,(%esp)
 81e6289:	e8 49 a6 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e628e:	eb 47                	jmp    81e62d7 <_ZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASE+0x95>
 81e6290:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6293:	83 c0 0e             	add    $0xe,%eax
 81e6296:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e629a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e629d:	89 04 24             	mov    %eax,(%esp)
 81e62a0:	e8 1b 6d 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e62a5:	83 f0 01             	xor    $0x1,%eax
 81e62a8:	84 c0                	test   %al,%al
 81e62aa:	74 26                	je     81e62d2 <_ZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASE+0x90>
 81e62ac:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e62b3:	00 
 81e62b4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e62bb:	00 
 81e62bc:	c7 44 24 04 80 0d bd 	movl   $0x8bd0d80,0x4(%esp)
 81e62c3:	08 
 81e62c4:	c7 04 24 10 61 00 00 	movl   $0x6110,(%esp)
 81e62cb:	e8 07 a6 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e62d0:	eb 05                	jmp    81e62d7 <_ZN32Dispatcher_BlueMarbleConfirmInfo4readER9PacketBufR8MSG_BASE+0x95>
 81e62d2:	b8 00 00 00 00       	mov    $0x0,%eax
 81e62d7:	c9                   	leave
 81e62d8:	c3                   	ret
 81e62d9:	90                   	nop

```

```c
// Dispatcher_BlueMarbleConfirmInfo::read @ 0x81e6242

/* Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BlueMarbleConfirmInfo::read
          (Dispatcher_BlueMarbleConfirmInfo *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x6110,
                       "virtual int Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x610d,
                     "virtual int Dispatcher_BlueMarbleConfirmInfo::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e6904 Dispatcher_BlueMarbleConfirmInfo::send  [0x081e6904-0x81e6951] ===
 81e6904:	55                   	push   %ebp
 81e6905:	89 e5                	mov    %esp,%ebp
 81e6907:	83 ec 28             	sub    $0x28,%esp
 81e690a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e690d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e6910:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6913:	8b 40 04             	mov    0x4(%eax),%eax
 81e6916:	85 c0                	test   %eax,%eax
 81e6918:	75 15                	jne    81e692f <_ZN32Dispatcher_BlueMarbleConfirmInfo4sendEP5CUserR9ParamBase+0x2b>
 81e691a:	c7 44 24 04 fc 01 00 	movl   $0x1fc,0x4(%esp)
 81e6921:	00 
 81e6922:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6925:	89 04 24             	mov    %eax,(%esp)
 81e6928:	e8 73 55 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81e692d:	eb 20                	jmp    81e694f <_ZN32Dispatcher_BlueMarbleConfirmInfo4sendEP5CUserR9ParamBase+0x4b>
 81e692f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6932:	8b 40 04             	mov    0x4(%eax),%eax
 81e6935:	0f b6 c0             	movzbl %al,%eax
 81e6938:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e693c:	c7 44 24 04 fc 01 00 	movl   $0x1fc,0x4(%esp)
 81e6943:	00 
 81e6944:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6947:	89 04 24             	mov    %eax,(%esp)
 81e694a:	e8 f3 55 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e694f:	c9                   	leave
 81e6950:	c3                   	ret
 81e6951:	90                   	nop

```

```c
// Dispatcher_BlueMarbleConfirmInfo::send @ 0x81e6904

/* Dispatcher_BlueMarbleConfirmInfo::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BlueMarbleConfirmInfo::send
          (Dispatcher_BlueMarbleConfirmInfo *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1fc);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fc,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

