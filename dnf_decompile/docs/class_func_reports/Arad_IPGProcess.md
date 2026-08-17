# Arad_IPGProcess

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CashShopModeAvatar

```asm
// === 0819c2b4 Arad_IPGProcess::CashShopModeAvatar  [0x0819c2b4-0x819c433] ===
 819c2b4:	55                   	push   %ebp
 819c2b5:	89 e5                	mov    %esp,%ebp
 819c2b7:	57                   	push   %edi
 819c2b8:	56                   	push   %esi
 819c2b9:	53                   	push   %ebx
 819c2ba:	83 ec 5c             	sub    $0x5c,%esp
 819c2bd:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 819c2c0:	8b 55 20             	mov    0x20(%ebp),%edx
 819c2c3:	8b 45 34             	mov    0x34(%ebp),%eax
 819c2c6:	88 4d d4             	mov    %cl,-0x2c(%ebp)
 819c2c9:	88 55 d0             	mov    %dl,-0x30(%ebp)
 819c2cc:	88 45 cc             	mov    %al,-0x34(%ebp)
 819c2cf:	80 7d cc 01          	cmpb   $0x1,-0x34(%ebp)
 819c2d3:	75 4c                	jne    819c321 <_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic+0x6d>
 819c2d5:	0f be 5d d0          	movsbl -0x30(%ebp),%ebx
 819c2d9:	0f be 4d d4          	movsbl -0x2c(%ebp),%ecx
 819c2dd:	8b 55 10             	mov    0x10(%ebp),%edx
 819c2e0:	8b 45 08             	mov    0x8(%ebp),%eax
 819c2e3:	8b 00                	mov    (%eax),%eax
 819c2e5:	8b 75 30             	mov    0x30(%ebp),%esi
 819c2e8:	89 74 24 20          	mov    %esi,0x20(%esp)
 819c2ec:	8b 75 2c             	mov    0x2c(%ebp),%esi
 819c2ef:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 819c2f3:	8b 75 24             	mov    0x24(%ebp),%esi
 819c2f6:	89 74 24 18          	mov    %esi,0x18(%esp)
 819c2fa:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 819c2fe:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 819c302:	8b 4d 18             	mov    0x18(%ebp),%ecx
 819c305:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 819c309:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c30d:	8b 55 0c             	mov    0xc(%ebp),%edx
 819c310:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c314:	89 04 24             	mov    %eax,(%esp)
 819c317:	e8 1a 9d 18 00       	call   8326036 <_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji>
 819c31c:	e9 0b 01 00 00       	jmp    819c42c <_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic+0x178>
 819c321:	0f be 7d d0          	movsbl -0x30(%ebp),%edi
 819c325:	0f be 75 d4          	movsbl -0x2c(%ebp),%esi
 819c329:	8b 5d 10             	mov    0x10(%ebp),%ebx
 819c32c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c32f:	89 04 24             	mov    %eax,(%esp)
 819c332:	e8 57 df f3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 819c337:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 819c33e:	00 
 819c33f:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 819c346:	00 
 819c347:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 819c34e:	00 
 819c34f:	8b 55 24             	mov    0x24(%ebp),%edx
 819c352:	89 54 24 18          	mov    %edx,0x18(%esp)
 819c356:	89 7c 24 14          	mov    %edi,0x14(%esp)
 819c35a:	89 74 24 10          	mov    %esi,0x10(%esp)
 819c35e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819c365:	00 
 819c366:	8b 55 18             	mov    0x18(%ebp),%edx
 819c369:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c36d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819c371:	89 04 24             	mov    %eax,(%esp)
 819c374:	e8 25 d8 36 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 819c379:	89 45 e0             	mov    %eax,-0x20(%ebp)
 819c37c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 819c380:	0f 89 84 00 00 00    	jns    819c40a <_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic+0x156>
 819c386:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819c38d:	00 
 819c38e:	c7 44 24 08 e0 34 ba 	movl   $0x8ba34e0,0x8(%esp)
 819c395:	08 
 819c396:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 819c39d:	00 
 819c39e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819c3a5:	e8 54 94 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 819c3aa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 819c3ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 819c3b0:	89 04 24             	mov    %eax,(%esp)
 819c3b3:	e8 f8 1f ee ff       	call   807e3b0 <strlen@plt>
 819c3b8:	89 45 c8             	mov    %eax,-0x38(%ebp)
 819c3bb:	0f be 7d d0          	movsbl -0x30(%ebp),%edi
 819c3bf:	0f be 75 d4          	movsbl -0x2c(%ebp),%esi
 819c3c3:	8b 5d 10             	mov    0x10(%ebp),%ebx
 819c3c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c3c9:	89 04 24             	mov    %eax,(%esp)
 819c3cc:	e8 7d f8 f2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 819c3d1:	8b 55 c8             	mov    -0x38(%ebp),%edx
 819c3d4:	89 54 24 20          	mov    %edx,0x20(%esp)
 819c3d8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 819c3db:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819c3df:	8b 55 24             	mov    0x24(%ebp),%edx
 819c3e2:	89 54 24 18          	mov    %edx,0x18(%esp)
 819c3e6:	89 7c 24 14          	mov    %edi,0x14(%esp)
 819c3ea:	89 74 24 10          	mov    %esi,0x10(%esp)
 819c3ee:	8b 55 18             	mov    0x18(%ebp),%edx
 819c3f1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819c3f5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819c3f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 819c3fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c400:	89 04 24             	mov    %eax,(%esp)
 819c403:	e8 0e ab 3b 00       	call   8556f16 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i>
 819c408:	eb 22                	jmp    819c42c <_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic+0x178>
 819c40a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 819c40d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819c411:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 819c418:	00 
 819c419:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819c420:	00 
 819c421:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c424:	89 04 24             	mov    %eax,(%esp)
 819c427:	e8 2e 02 4e 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 819c42c:	83 c4 5c             	add    $0x5c,%esp
 819c42f:	5b                   	pop    %ebx
 819c430:	5e                   	pop    %esi
 819c431:	5f                   	pop    %edi
 819c432:	5d                   	pop    %ebp
 819c433:	c3                   	ret

```

```c
// Arad_IPGProcess::CashShopModeAvatar @ 0x819c2b4

/* Arad_IPGProcess::CashShopModeAvatar(CUser*, unsigned long, int, int, char, char, char const*,
   int&, unsigned int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeAvatar
          (Arad_IPGProcess *this,CUser *param_1,ulong param_2,int param_3,int param_4,char param_5,
          char param_6,char *param_7,int *param_8,uint param_9,int param_10,char param_11)

{
  CInventory *pCVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  
  if (param_11 == '\x01') {
    WongWork::CCeraShop::_processAvatarGift
              (*(CCeraShop **)this,param_1,param_2,param_4,param_5,param_6,param_7,param_9,param_10)
    ;
  }
  else {
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar2 = CInventory::AddAvatarItem
                      (pCVar1,param_2,param_4,0,(int)param_5,(int)param_6,param_7,0,0,0);
    if (iVar2 < 0) {
      __s = (char *)RDARScriptStringManager::findString
                              ((RDARScriptStringManager *)g_scriptStringManager_,4,
                               "game_server_msg_104",(bool *)0x0);
      sVar3 = strlen(__s);
      iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
                (param_1,iVar2,param_2,param_4,param_5,param_6,param_7,__s,sVar3);
    }
    else {
      CUser::SendUpdateItemList(param_1,1,1,iVar2);
    }
  }
  return;
}

```

---

## CashShopModeCoin

```asm
// === 0819c434 Arad_IPGProcess::CashShopModeCoin  [0x0819c434-0x819c49f] ===
 819c434:	55                   	push   %ebp
 819c435:	89 e5                	mov    %esp,%ebp
 819c437:	83 ec 38             	sub    $0x38,%esp
 819c43a:	8b 55 10             	mov    0x10(%ebp),%edx
 819c43d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 819c440:	66 89 55 f4          	mov    %dx,-0xc(%ebp)
 819c444:	88 45 f0             	mov    %al,-0x10(%ebp)
 819c447:	80 7d f0 01          	cmpb   $0x1,-0x10(%ebp)
 819c44b:	75 2c                	jne    819c479 <_ZN15Arad_IPGProcess16CashShopModeCoinEP5CUsertjic+0x45>
 819c44d:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 819c451:	8b 45 08             	mov    0x8(%ebp),%eax
 819c454:	8b 00                	mov    (%eax),%eax
 819c456:	8b 4d 18             	mov    0x18(%ebp),%ecx
 819c459:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 819c45d:	8b 4d 14             	mov    0x14(%ebp),%ecx
 819c460:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 819c464:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c468:	8b 55 0c             	mov    0xc(%ebp),%edx
 819c46b:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c46f:	89 04 24             	mov    %eax,(%esp)
 819c472:	e8 25 9d 18 00       	call   832619c <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji>
 819c477:	eb 24                	jmp    819c49d <_ZN15Arad_IPGProcess16CashShopModeCoinEP5CUsertjic+0x69>
 819c479:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 819c47d:	8b 45 08             	mov    0x8(%ebp),%eax
 819c480:	8b 00                	mov    (%eax),%eax
 819c482:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 819c489:	00 
 819c48a:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c48e:	8b 55 0c             	mov    0xc(%ebp),%edx
 819c491:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c495:	89 04 24             	mov    %eax,(%esp)
 819c498:	e8 eb 95 18 00       	call   8325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>
 819c49d:	c9                   	leave
 819c49e:	c3                   	ret
 819c49f:	90                   	nop

```

```c
// Arad_IPGProcess::CashShopModeCoin @ 0x819c434

/* Arad_IPGProcess::CashShopModeCoin(CUser*, unsigned short, unsigned int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeCoin
          (Arad_IPGProcess *this,CUser *param_1,ushort param_2,uint param_3,int param_4,char param_5
          )

{
  if (param_5 == '\x01') {
    WongWork::CCeraShop::_processCoinGift(*(CCeraShop **)this,param_1,param_2,param_3,param_4);
  }
  else {
    WongWork::CCeraShop::_processCoin(*(CUser **)this,(ushort)param_1,SUB21(param_2,0));
  }
  return;
}

```

---

## CashShopModeCreature

```asm
// === 0819c670 Arad_IPGProcess::CashShopModeCreature  [0x0819c670-0x819c861] ===
 819c670:	55                   	push   %ebp
 819c671:	89 e5                	mov    %esp,%ebp
 819c673:	53                   	push   %ebx
 819c674:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 819c67a:	8b 55 14             	mov    0x14(%ebp),%edx
 819c67d:	8b 45 28             	mov    0x28(%ebp),%eax
 819c680:	66 89 55 a4          	mov    %dx,-0x5c(%ebp)
 819c684:	88 45 a0             	mov    %al,-0x60(%ebp)
 819c687:	8b 5d 10             	mov    0x10(%ebp),%ebx
 819c68a:	e8 0c fb f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819c68f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819c693:	89 04 24             	mov    %eax,(%esp)
 819c696:	e8 97 33 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 819c69b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819c69e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819c6a2:	0f 84 b0 01 00 00    	je     819c858 <_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic+0x1e8>
 819c6a8:	8d 45 b7             	lea    -0x49(%ebp),%eax
 819c6ab:	89 04 24             	mov    %eax,(%esp)
 819c6ae:	e8 a1 f1 f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 819c6b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c6b6:	8b 00                	mov    (%eax),%eax
 819c6b8:	83 c0 08             	add    $0x8,%eax
 819c6bb:	8b 10                	mov    (%eax),%edx
 819c6bd:	8d 45 b7             	lea    -0x49(%ebp),%eax
 819c6c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 819c6c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c6c7:	89 04 24             	mov    %eax,(%esp)
 819c6ca:	ff d2                	call   *%edx
 819c6cc:	8b 45 10             	mov    0x10(%ebp),%eax
 819c6cf:	89 45 b9             	mov    %eax,-0x47(%ebp)
 819c6d2:	0f b7 45 a4          	movzwl -0x5c(%ebp),%eax
 819c6d6:	89 45 be             	mov    %eax,-0x42(%ebp)
 819c6d9:	80 7d a0 01          	cmpb   $0x1,-0x60(%ebp)
 819c6dd:	0f 85 b8 00 00 00    	jne    819c79b <_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic+0x12b>
 819c6e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c6e6:	89 04 24             	mov    %eax,(%esp)
 819c6e9:	e8 18 4c f5 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 819c6ee:	89 c3                	mov    %eax,%ebx
 819c6f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c6f3:	89 04 24             	mov    %eax,(%esp)
 819c6f6:	e8 65 45 f7 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 819c6fb:	8b 55 08             	mov    0x8(%ebp),%edx
 819c6fe:	8b 12                	mov    (%edx),%edx
 819c700:	89 5c 24 54          	mov    %ebx,0x54(%esp)
 819c704:	89 44 24 50          	mov    %eax,0x50(%esp)
 819c708:	8b 45 24             	mov    0x24(%ebp),%eax
 819c70b:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 819c70f:	8b 45 20             	mov    0x20(%ebp),%eax
 819c712:	89 44 24 48          	mov    %eax,0x48(%esp)
 819c716:	8b 45 b7             	mov    -0x49(%ebp),%eax
 819c719:	89 44 24 08          	mov    %eax,0x8(%esp)
 819c71d:	8b 45 bb             	mov    -0x45(%ebp),%eax
 819c720:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819c724:	8b 45 bf             	mov    -0x41(%ebp),%eax
 819c727:	89 44 24 10          	mov    %eax,0x10(%esp)
 819c72b:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 819c72e:	89 44 24 14          	mov    %eax,0x14(%esp)
 819c732:	8b 45 c7             	mov    -0x39(%ebp),%eax
 819c735:	89 44 24 18          	mov    %eax,0x18(%esp)
 819c739:	8b 45 cb             	mov    -0x35(%ebp),%eax
 819c73c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 819c740:	8b 45 cf             	mov    -0x31(%ebp),%eax
 819c743:	89 44 24 20          	mov    %eax,0x20(%esp)
 819c747:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 819c74a:	89 44 24 24          	mov    %eax,0x24(%esp)
 819c74e:	8b 45 d7             	mov    -0x29(%ebp),%eax
 819c751:	89 44 24 28          	mov    %eax,0x28(%esp)
 819c755:	8b 45 db             	mov    -0x25(%ebp),%eax
 819c758:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 819c75c:	8b 45 df             	mov    -0x21(%ebp),%eax
 819c75f:	89 44 24 30          	mov    %eax,0x30(%esp)
 819c763:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 819c766:	89 44 24 34          	mov    %eax,0x34(%esp)
 819c76a:	8b 45 e7             	mov    -0x19(%ebp),%eax
 819c76d:	89 44 24 38          	mov    %eax,0x38(%esp)
 819c771:	8b 45 eb             	mov    -0x15(%ebp),%eax
 819c774:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 819c778:	8b 45 ef             	mov    -0x11(%ebp),%eax
 819c77b:	89 44 24 40          	mov    %eax,0x40(%esp)
 819c77f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 819c783:	88 44 24 44          	mov    %al,0x44(%esp)
 819c787:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c78a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819c78e:	89 14 24             	mov    %edx,(%esp)
 819c791:	e8 52 9e 18 00       	call   83265e8 <_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii>
 819c796:	e9 be 00 00 00       	jmp    819c859 <_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic+0x1e9>
 819c79b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c79e:	89 04 24             	mov    %eax,(%esp)
 819c7a1:	e8 60 4b f5 ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 819c7a6:	89 c3                	mov    %eax,%ebx
 819c7a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c7ab:	89 04 24             	mov    %eax,(%esp)
 819c7ae:	e8 ad 44 f7 ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 819c7b3:	8b 55 08             	mov    0x8(%ebp),%edx
 819c7b6:	8b 12                	mov    (%edx),%edx
 819c7b8:	89 5c 24 58          	mov    %ebx,0x58(%esp)
 819c7bc:	89 44 24 54          	mov    %eax,0x54(%esp)
 819c7c0:	c7 44 24 50 01 00 00 	movl   $0x1,0x50(%esp)
 819c7c7:	00 
 819c7c8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 819c7cb:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 819c7cf:	8b 45 18             	mov    0x18(%ebp),%eax
 819c7d2:	89 44 24 48          	mov    %eax,0x48(%esp)
 819c7d6:	8b 45 b7             	mov    -0x49(%ebp),%eax
 819c7d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 819c7dd:	8b 45 bb             	mov    -0x45(%ebp),%eax
 819c7e0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819c7e4:	8b 45 bf             	mov    -0x41(%ebp),%eax
 819c7e7:	89 44 24 10          	mov    %eax,0x10(%esp)
 819c7eb:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 819c7ee:	89 44 24 14          	mov    %eax,0x14(%esp)
 819c7f2:	8b 45 c7             	mov    -0x39(%ebp),%eax
 819c7f5:	89 44 24 18          	mov    %eax,0x18(%esp)
 819c7f9:	8b 45 cb             	mov    -0x35(%ebp),%eax
 819c7fc:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 819c800:	8b 45 cf             	mov    -0x31(%ebp),%eax
 819c803:	89 44 24 20          	mov    %eax,0x20(%esp)
 819c807:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 819c80a:	89 44 24 24          	mov    %eax,0x24(%esp)
 819c80e:	8b 45 d7             	mov    -0x29(%ebp),%eax
 819c811:	89 44 24 28          	mov    %eax,0x28(%esp)
 819c815:	8b 45 db             	mov    -0x25(%ebp),%eax
 819c818:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 819c81c:	8b 45 df             	mov    -0x21(%ebp),%eax
 819c81f:	89 44 24 30          	mov    %eax,0x30(%esp)
 819c823:	8b 45 e3             	mov    -0x1d(%ebp),%eax
 819c826:	89 44 24 34          	mov    %eax,0x34(%esp)
 819c82a:	8b 45 e7             	mov    -0x19(%ebp),%eax
 819c82d:	89 44 24 38          	mov    %eax,0x38(%esp)
 819c831:	8b 45 eb             	mov    -0x15(%ebp),%eax
 819c834:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 819c838:	8b 45 ef             	mov    -0x11(%ebp),%eax
 819c83b:	89 44 24 40          	mov    %eax,0x40(%esp)
 819c83f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 819c843:	88 44 24 44          	mov    %al,0x44(%esp)
 819c847:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c84a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819c84e:	89 14 24             	mov    %edx,(%esp)
 819c851:	e8 10 95 18 00       	call   8325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>
 819c856:	eb 01                	jmp    819c859 <_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic+0x1e9>
 819c858:	90                   	nop
 819c859:	81 c4 c4 00 00 00    	add    $0xc4,%esp
 819c85f:	5b                   	pop    %ebx
 819c860:	5d                   	pop    %ebp
 819c861:	c3                   	ret

```

```c
// Arad_IPGProcess::CashShopModeCreature @ 0x819c670

/* Arad_IPGProcess::CashShopModeCreature(CUser*, unsigned long, unsigned short, int&, int&, unsigned
   int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeCreature
          (Arad_IPGProcess *this,CUser *param_1,ulong param_2,ushort param_3,int *param_4,
          int *param_5,uint param_6,int param_7,char param_8)

{
  CDataManager *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 local_4d;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  uint uStack_46;
  undefined1 uStack_42;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  CItem *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (CItem *)CDataManager::find_item(this_00,param_2);
  if (local_10 != (CItem *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_4d);
    (**(code **)(*(int *)local_10 + 8))(local_10,&local_4d);
    uStack_46 = (uint)param_3;
    uStack_4b = param_2;
    if (param_8 == '\x01') {
      uVar1 = CItem::getExpirationDate(local_10);
      uVar2 = CItem::getUsablePeriod(local_10);
      WongWork::CCeraShop::_processCreatureGift
                (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_4b,local_4d),
                 CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_)),
                 CONCAT13(uStack_42,uStack_46._1_3_),local_41,local_3d,local_39,local_35,local_31,
                 local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,param_6,
                 param_7,uVar2,uVar1);
    }
    else {
      uVar1 = CItem::getExpirationDate(local_10);
      uVar2 = CItem::getUsablePeriod(local_10);
      WongWork::CCeraShop::_processCreature
                (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_4b,local_4d),
                 CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_)),
                 CONCAT13(uStack_42,uStack_46._1_3_),local_41,local_3d,local_39,local_35,local_31,
                 local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,param_4,
                 param_5,1,uVar2,uVar1);
    }
  }
  return;
}

```

---

## CashShopModeItem

```asm
// === 0819c4a0 Arad_IPGProcess::CashShopModeItem  [0x0819c4a0-0x819c66f] ===
 819c4a0:	55                   	push   %ebp
 819c4a1:	89 e5                	mov    %esp,%ebp
 819c4a3:	53                   	push   %ebx
 819c4a4:	81 ec d4 00 00 00    	sub    $0xd4,%esp
 819c4aa:	8b 55 14             	mov    0x14(%ebp),%edx
 819c4ad:	8b 45 34             	mov    0x34(%ebp),%eax
 819c4b0:	66 89 55 a4          	mov    %dx,-0x5c(%ebp)
 819c4b4:	88 45 a0             	mov    %al,-0x60(%ebp)
 819c4b7:	8b 5d 10             	mov    0x10(%ebp),%ebx
 819c4ba:	e8 dc fc f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819c4bf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819c4c3:	89 04 24             	mov    %eax,(%esp)
 819c4c6:	e8 67 35 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 819c4cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819c4ce:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819c4d2:	0f 84 8d 01 00 00    	je     819c665 <_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic+0x1c5>
 819c4d8:	8d 45 b7             	lea    -0x49(%ebp),%eax
 819c4db:	89 04 24             	mov    %eax,(%esp)
 819c4de:	e8 71 f3 f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 819c4e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c4e6:	8b 00                	mov    (%eax),%eax
 819c4e8:	83 c0 08             	add    $0x8,%eax
 819c4eb:	8b 10                	mov    (%eax),%edx
 819c4ed:	8d 45 b7             	lea    -0x49(%ebp),%eax
 819c4f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 819c4f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819c4f7:	89 04 24             	mov    %eax,(%esp)
 819c4fa:	ff d2                	call   *%edx
 819c4fc:	8b 45 10             	mov    0x10(%ebp),%eax
 819c4ff:	89 45 b9             	mov    %eax,-0x47(%ebp)
 819c502:	0f b7 45 a4          	movzwl -0x5c(%ebp),%eax
 819c506:	89 45 be             	mov    %eax,-0x42(%ebp)
 819c509:	80 7d a0 01          	cmpb   $0x1,-0x60(%ebp)
 819c50d:	0f 85 98 00 00 00    	jne    819c5ab <_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic+0x10b>
 819c513:	8b 45 08             	mov    0x8(%ebp),%eax
 819c516:	8b 00                	mov    (%eax),%eax
 819c518:	8b 55 30             	mov    0x30(%ebp),%edx
 819c51b:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 819c51f:	8b 55 2c             	mov    0x2c(%ebp),%edx
 819c522:	89 54 24 48          	mov    %edx,0x48(%esp)
 819c526:	8b 55 b7             	mov    -0x49(%ebp),%edx
 819c529:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c52d:	8b 55 bb             	mov    -0x45(%ebp),%edx
 819c530:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819c534:	8b 55 bf             	mov    -0x41(%ebp),%edx
 819c537:	89 54 24 10          	mov    %edx,0x10(%esp)
 819c53b:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 819c53e:	89 54 24 14          	mov    %edx,0x14(%esp)
 819c542:	8b 55 c7             	mov    -0x39(%ebp),%edx
 819c545:	89 54 24 18          	mov    %edx,0x18(%esp)
 819c549:	8b 55 cb             	mov    -0x35(%ebp),%edx
 819c54c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819c550:	8b 55 cf             	mov    -0x31(%ebp),%edx
 819c553:	89 54 24 20          	mov    %edx,0x20(%esp)
 819c557:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 819c55a:	89 54 24 24          	mov    %edx,0x24(%esp)
 819c55e:	8b 55 d7             	mov    -0x29(%ebp),%edx
 819c561:	89 54 24 28          	mov    %edx,0x28(%esp)
 819c565:	8b 55 db             	mov    -0x25(%ebp),%edx
 819c568:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 819c56c:	8b 55 df             	mov    -0x21(%ebp),%edx
 819c56f:	89 54 24 30          	mov    %edx,0x30(%esp)
 819c573:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 819c576:	89 54 24 34          	mov    %edx,0x34(%esp)
 819c57a:	8b 55 e7             	mov    -0x19(%ebp),%edx
 819c57d:	89 54 24 38          	mov    %edx,0x38(%esp)
 819c581:	8b 55 eb             	mov    -0x15(%ebp),%edx
 819c584:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 819c588:	8b 55 ef             	mov    -0x11(%ebp),%edx
 819c58b:	89 54 24 40          	mov    %edx,0x40(%esp)
 819c58f:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 819c593:	88 54 24 44          	mov    %dl,0x44(%esp)
 819c597:	8b 55 0c             	mov    0xc(%ebp),%edx
 819c59a:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c59e:	89 04 24             	mov    %eax,(%esp)
 819c5a1:	e8 30 9f 18 00       	call   83264d6 <_ZN8WongWork9CCeraShop16_processItemGiftEP5CUser10Inven_Itemji>
 819c5a6:	e9 bb 00 00 00       	jmp    819c666 <_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic+0x1c6>
 819c5ab:	8b 45 08             	mov    0x8(%ebp),%eax
 819c5ae:	8b 00                	mov    (%eax),%eax
 819c5b0:	8b 55 24             	mov    0x24(%ebp),%edx
 819c5b3:	89 54 24 60          	mov    %edx,0x60(%esp)
 819c5b7:	8b 55 20             	mov    0x20(%ebp),%edx
 819c5ba:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 819c5be:	c7 44 24 58 01 00 00 	movl   $0x1,0x58(%esp)
 819c5c5:	00 
 819c5c6:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%esp)
 819c5cd:	00 
 819c5ce:	8b 55 1c             	mov    0x1c(%ebp),%edx
 819c5d1:	89 54 24 50          	mov    %edx,0x50(%esp)
 819c5d5:	8b 55 28             	mov    0x28(%ebp),%edx
 819c5d8:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 819c5dc:	8b 55 18             	mov    0x18(%ebp),%edx
 819c5df:	89 54 24 48          	mov    %edx,0x48(%esp)
 819c5e3:	8b 55 b7             	mov    -0x49(%ebp),%edx
 819c5e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c5ea:	8b 55 bb             	mov    -0x45(%ebp),%edx
 819c5ed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819c5f1:	8b 55 bf             	mov    -0x41(%ebp),%edx
 819c5f4:	89 54 24 10          	mov    %edx,0x10(%esp)
 819c5f8:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 819c5fb:	89 54 24 14          	mov    %edx,0x14(%esp)
 819c5ff:	8b 55 c7             	mov    -0x39(%ebp),%edx
 819c602:	89 54 24 18          	mov    %edx,0x18(%esp)
 819c606:	8b 55 cb             	mov    -0x35(%ebp),%edx
 819c609:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819c60d:	8b 55 cf             	mov    -0x31(%ebp),%edx
 819c610:	89 54 24 20          	mov    %edx,0x20(%esp)
 819c614:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 819c617:	89 54 24 24          	mov    %edx,0x24(%esp)
 819c61b:	8b 55 d7             	mov    -0x29(%ebp),%edx
 819c61e:	89 54 24 28          	mov    %edx,0x28(%esp)
 819c622:	8b 55 db             	mov    -0x25(%ebp),%edx
 819c625:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 819c629:	8b 55 df             	mov    -0x21(%ebp),%edx
 819c62c:	89 54 24 30          	mov    %edx,0x30(%esp)
 819c630:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 819c633:	89 54 24 34          	mov    %edx,0x34(%esp)
 819c637:	8b 55 e7             	mov    -0x19(%ebp),%edx
 819c63a:	89 54 24 38          	mov    %edx,0x38(%esp)
 819c63e:	8b 55 eb             	mov    -0x15(%ebp),%edx
 819c641:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 819c645:	8b 55 ef             	mov    -0x11(%ebp),%edx
 819c648:	89 54 24 40          	mov    %edx,0x40(%esp)
 819c64c:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 819c650:	88 54 24 44          	mov    %dl,0x44(%esp)
 819c654:	8b 55 0c             	mov    0xc(%ebp),%edx
 819c657:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c65b:	89 04 24             	mov    %eax,(%esp)
 819c65e:	e8 bf 94 18 00       	call   8325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>
 819c663:	eb 01                	jmp    819c666 <_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic+0x1c6>
 819c665:	90                   	nop
 819c666:	81 c4 d4 00 00 00    	add    $0xd4,%esp
 819c66c:	5b                   	pop    %ebx
 819c66d:	5d                   	pop    %ebp
 819c66e:	c3                   	ret
 819c66f:	90                   	nop

```

```c
// Arad_IPGProcess::CashShopModeItem @ 0x819c4a0

/* Arad_IPGProcess::CashShopModeItem(CUser*, unsigned long, unsigned short, int, long,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, int&, unsigned int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeItem
          (Arad_IPGProcess *this,CUser *param_1,ulong param_2,ushort param_3,int param_4,
          long param_5,vector *param_6,stCeraShopItemParam_t *param_7,int *param_8,uint param_9,
          int param_10,char param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  undefined2 local_4d;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  uint uStack_46;
  undefined1 uStack_42;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  int *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(this_00,param_2);
  if (local_10 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_4d);
    (**(code **)(*local_10 + 8))(local_10,&local_4d);
    uStack_4b._0_2_ = (undefined2)param_2;
    uStack_4b._2_2_ = (undefined2)(param_2 >> 0x10);
    uStack_46._0_1_ = (undefined1)param_3;
    uStack_46._1_3_ = (uint3)(byte)(param_3 >> 8);
    uStack_46 = (uint)param_3;
    uStack_4b = param_2;
    if (param_11 == '\x01') {
      uVar1 = CONCAT22((undefined2)uStack_4b,local_4d);
      uVar2 = CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_));
      uVar3 = CONCAT13(uStack_42,uStack_46._1_3_);
      WongWork::CCeraShop::_processItemGift
                (*(undefined4 *)this,param_1,uVar1,uVar2,uVar3,local_41,local_3d,local_39,local_35,
                 local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,
                 param_9,param_10);
    }
    else {
      uVar1 = CONCAT22((undefined2)uStack_4b,local_4d);
      uVar2 = CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_));
      uVar3 = CONCAT13(uStack_42,uStack_46._1_3_);
      WongWork::CCeraShop::_processItem
                (*(undefined4 *)this,param_1,uVar1,uVar2,uVar3,local_41,local_3d,local_39,local_35,
                 local_31,local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,
                 param_4,param_8,param_5,0,1,param_6,param_7);
    }
  }
  return;
}

```

---

## CashShopModeVendingItem

```asm
// === 0819c862 Arad_IPGProcess::CashShopModeVendingItem  [0x0819c862-0x819cb07] ===
 819c862:	55                   	push   %ebp
 819c863:	89 e5                	mov    %esp,%ebp
 819c865:	53                   	push   %ebx
 819c866:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 819c86c:	8b 55 14             	mov    0x14(%ebp),%edx
 819c86f:	8b 45 30             	mov    0x30(%ebp),%eax
 819c872:	66 89 55 94          	mov    %dx,-0x6c(%ebp)
 819c876:	88 45 90             	mov    %al,-0x70(%ebp)
 819c879:	8b 5d 10             	mov    0x10(%ebp),%ebx
 819c87c:	e8 1a f9 f2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819c881:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819c885:	89 04 24             	mov    %eax,(%esp)
 819c888:	e8 a5 31 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 819c88d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 819c890:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 819c894:	0f 84 64 02 00 00    	je     819cafe <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x29c>
 819c89a:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 819c89d:	89 04 24             	mov    %eax,(%esp)
 819c8a0:	e8 af ef f2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 819c8a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819c8a8:	8b 00                	mov    (%eax),%eax
 819c8aa:	83 c0 08             	add    $0x8,%eax
 819c8ad:	8b 10                	mov    (%eax),%edx
 819c8af:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 819c8b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 819c8b6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 819c8b9:	89 04 24             	mov    %eax,(%esp)
 819c8bc:	ff d2                	call   *%edx
 819c8be:	8b 45 10             	mov    0x10(%ebp),%eax
 819c8c1:	89 45 a8             	mov    %eax,-0x58(%ebp)
 819c8c4:	0f b7 45 94          	movzwl -0x6c(%ebp),%eax
 819c8c8:	89 45 ad             	mov    %eax,-0x53(%ebp)
 819c8cb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 819c8d2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 819c8d9:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 819c8dd:	8b 45 a8             	mov    -0x58(%ebp),%eax
 819c8e0:	89 c2                	mov    %eax,%edx
 819c8e2:	8b 45 08             	mov    0x8(%ebp),%eax
 819c8e5:	8b 00                	mov    (%eax),%eax
 819c8e7:	8d 4d e3             	lea    -0x1d(%ebp),%ecx
 819c8ea:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 819c8ee:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 819c8f1:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 819c8f5:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 819c8f8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 819c8fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c900:	89 04 24             	mov    %eax,(%esp)
 819c903:	e8 16 81 18 00       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 819c908:	83 f0 01             	xor    $0x1,%eax
 819c90b:	84 c0                	test   %al,%al
 819c90d:	0f 84 53 01 00 00    	je     819ca66 <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x204>
 819c913:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c916:	89 04 24             	mov    %eax,(%esp)
 819c919:	e8 70 d9 f3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 819c91e:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 819c925:	00 
 819c926:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 819c92d:	00 
 819c92e:	c7 44 24 44 1e 00 00 	movl   $0x1e,0x44(%esp)
 819c935:	00 
 819c936:	8b 55 a6             	mov    -0x5a(%ebp),%edx
 819c939:	89 54 24 04          	mov    %edx,0x4(%esp)
 819c93d:	8b 55 aa             	mov    -0x56(%ebp),%edx
 819c940:	89 54 24 08          	mov    %edx,0x8(%esp)
 819c944:	8b 55 ae             	mov    -0x52(%ebp),%edx
 819c947:	89 54 24 0c          	mov    %edx,0xc(%esp)
 819c94b:	8b 55 b2             	mov    -0x4e(%ebp),%edx
 819c94e:	89 54 24 10          	mov    %edx,0x10(%esp)
 819c952:	8b 55 b6             	mov    -0x4a(%ebp),%edx
 819c955:	89 54 24 14          	mov    %edx,0x14(%esp)
 819c959:	8b 55 ba             	mov    -0x46(%ebp),%edx
 819c95c:	89 54 24 18          	mov    %edx,0x18(%esp)
 819c960:	8b 55 be             	mov    -0x42(%ebp),%edx
 819c963:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 819c967:	8b 55 c2             	mov    -0x3e(%ebp),%edx
 819c96a:	89 54 24 20          	mov    %edx,0x20(%esp)
 819c96e:	8b 55 c6             	mov    -0x3a(%ebp),%edx
 819c971:	89 54 24 24          	mov    %edx,0x24(%esp)
 819c975:	8b 55 ca             	mov    -0x36(%ebp),%edx
 819c978:	89 54 24 28          	mov    %edx,0x28(%esp)
 819c97c:	8b 55 ce             	mov    -0x32(%ebp),%edx
 819c97f:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 819c983:	8b 55 d2             	mov    -0x2e(%ebp),%edx
 819c986:	89 54 24 30          	mov    %edx,0x30(%esp)
 819c98a:	8b 55 d6             	mov    -0x2a(%ebp),%edx
 819c98d:	89 54 24 34          	mov    %edx,0x34(%esp)
 819c991:	8b 55 da             	mov    -0x26(%ebp),%edx
 819c994:	89 54 24 38          	mov    %edx,0x38(%esp)
 819c998:	8b 55 de             	mov    -0x22(%ebp),%edx
 819c99b:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 819c99f:	0f b6 55 e2          	movzbl -0x1e(%ebp),%edx
 819c9a3:	88 54 24 40          	mov    %dl,0x40(%esp)
 819c9a7:	89 04 24             	mov    %eax,(%esp)
 819c9aa:	e8 d7 63 36 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 819c9af:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819c9b2:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 819c9b6:	74 32                	je     819c9ea <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x188>
 819c9b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 819c9bb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819c9bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 819c9c6:	00 
 819c9c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819c9ce:	00 
 819c9cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c9d2:	89 04 24             	mov    %eax,(%esp)
 819c9d5:	e8 80 fc 4d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 819c9da:	8b 45 0c             	mov    0xc(%ebp),%eax
 819c9dd:	89 04 24             	mov    %eax,(%esp)
 819c9e0:	e8 6d 34 4b 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 819c9e5:	e9 15 01 00 00       	jmp    819caff <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x29d>
 819c9ea:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 819c9f1:	00 
 819c9f2:	c7 44 24 08 e0 34 ba 	movl   $0x8ba34e0,0x8(%esp)
 819c9f9:	08 
 819c9fa:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 819ca01:	00 
 819ca02:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 819ca09:	e8 f0 8d 90 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 819ca0e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 819ca11:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819ca14:	89 04 24             	mov    %eax,(%esp)
 819ca17:	e8 94 19 ee ff       	call   807e3b0 <strlen@plt>
 819ca1c:	89 c3                	mov    %eax,%ebx
 819ca1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ca21:	89 04 24             	mov    %eax,(%esp)
 819ca24:	e8 25 f2 f2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 819ca29:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 819ca2d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 819ca30:	89 54 24 14          	mov    %edx,0x14(%esp)
 819ca34:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 819ca3b:	00 
 819ca3c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 819ca40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 819ca47:	00 
 819ca48:	8d 45 a6             	lea    -0x5a(%ebp),%eax
 819ca4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 819ca4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 819ca52:	89 04 24             	mov    %eax,(%esp)
 819ca55:	e8 02 a3 3b 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 819ca5a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 819ca61:	e9 99 00 00 00       	jmp    819caff <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x29d>
 819ca66:	8b 55 10             	mov    0x10(%ebp),%edx
 819ca69:	8b 45 08             	mov    0x8(%ebp),%eax
 819ca6c:	8b 00                	mov    (%eax),%eax
 819ca6e:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 819ca75:	00 
 819ca76:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 819ca7d:	00 
 819ca7e:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 819ca85:	00 
 819ca86:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 819ca8d:	00 
 819ca8e:	8b 4d 24             	mov    0x24(%ebp),%ecx
 819ca91:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 819ca95:	8b 4d 20             	mov    0x20(%ebp),%ecx
 819ca98:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 819ca9c:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 819caa3:	00 
 819caa4:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 819caa7:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 819caab:	8b 4d 28             	mov    0x28(%ebp),%ecx
 819caae:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 819cab2:	8b 4d 18             	mov    0x18(%ebp),%ecx
 819cab5:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 819cab9:	89 54 24 08          	mov    %edx,0x8(%esp)
 819cabd:	8b 55 0c             	mov    0xc(%ebp),%edx
 819cac0:	89 54 24 04          	mov    %edx,0x4(%esp)
 819cac4:	89 04 24             	mov    %eax,(%esp)
 819cac7:	e8 b2 8d 18 00       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 819cacc:	84 c0                	test   %al,%al
 819cace:	74 2f                	je     819caff <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x29d>
 819cad0:	c7 44 24 10 f4 34 ba 	movl   $0x8ba34f4,0x10(%esp)
 819cad7:	08 
 819cad8:	c7 44 24 0c a2 01 00 	movl   $0x1a2,0xc(%esp)
 819cadf:	00 
 819cae0:	c7 44 24 08 40 41 ba 	movl   $0x8ba4140,0x8(%esp)
 819cae7:	08 
 819cae8:	c7 44 24 04 10 35 ba 	movl   $0x8ba3510,0x4(%esp)
 819caef:	08 
 819caf0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 819caf7:	e8 0e 71 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 819cafc:	eb 01                	jmp    819caff <_ZN15Arad_IPGProcess23CashShopModeVendingItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERiic+0x29d>
 819cafe:	90                   	nop
 819caff:	81 c4 c4 00 00 00    	add    $0xc4,%esp
 819cb05:	5b                   	pop    %ebx
 819cb06:	5d                   	pop    %ebp
 819cb07:	c3                   	ret

```

```c
// Arad_IPGProcess::CashShopModeVendingItem @ 0x819c862

/* Arad_IPGProcess::CashShopModeVendingItem(CUser*, unsigned long, unsigned short, int, long,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, int&, int, char) */

void Arad_IPGProcess::CashShopModeVendingItem
               (CUser *param_1,ulong param_2,ushort param_3,int param_4,long param_5,vector *param_6
               ,stCeraShopItemParam_t *param_7,int *param_8,int param_9,char param_10)

{
  char cVar1;
  CDataManager *this;
  undefined4 uVar2;
  size_t sVar3;
  uint uVar4;
  undefined2 in_stack_0000000e;
  undefined2 local_5e;
  ushort uStack_5c;
  undefined2 uStack_5a;
  undefined1 uStack_58;
  uint uStack_57;
  undefined1 uStack_53;
  undefined4 local_52;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined1 local_22;
  bool local_21;
  int local_20 [2];
  int *local_18;
  int local_14;
  char *local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_18 = (int *)CDataManager::find_item(this,_param_3);
  if (local_18 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_5e);
    (**(code **)(*local_18 + 8))(local_18,&local_5e);
    uStack_5c = param_3;
    uStack_5a = in_stack_0000000e;
    uStack_57 = param_4 & 0xffff;
    local_20[1] = 0;
    local_20[0] = 0;
    local_21 = false;
    cVar1 = WongWork::CCeraShop::IsSpecialItem
                      (*(CCeraShop **)param_1,CONCAT22(in_stack_0000000e,param_3),local_20 + 1,
                       local_20,&local_21);
    if (cVar1 == '\x01') {
      cVar1 = WongWork::CCeraShop::ProcessSpecialItem
                        (*(CCeraShop **)param_1,(CUser *)param_2,_param_3,param_5,(int *)param_9,
                         (long)param_6,true,(vector *)param_7,(stCeraShopItemParam_t *)param_8,'\0',
                         '\0',false,1);
      if (cVar1 != '\0') {
        LogManager::logFormat
                  (1,"localjapan/Arad_IPGProcess.cpp",
                   "void Arad_IPGProcess::CashShopModeVendingItem(CUser*, itemIndexOnlyServer_t, short unsigned int, int, long int, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, int&, int, char)"
                   ,0x1a2,"ProcessSpecialItem failed");
      }
    }
    else {
      uVar2 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_14 = CInventory::insertItemIntoInventory
                           (uVar2,CONCAT22(uStack_5c,local_5e),
                            CONCAT13((undefined1)uStack_57,CONCAT12(uStack_58,uStack_5a)),
                            CONCAT13(uStack_53,uStack_57._1_3_),local_52,local_4e,local_4a,local_46,
                            local_42,local_3e,local_3a,local_36,local_32,local_2e,local_2a,local_26,
                            local_22,0x1e,1,0);
      if (local_14 == -1) {
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_104",(bool *)0x0);
        sVar3 = strlen(local_10);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop
                  ((CUser *)param_2,(Inven_Item *)&local_5e,0,uVar4,true,local_10,sVar3);
      }
      else {
        CUser::SendUpdateItemList((CUser *)param_2,1,0,local_14);
        CUser::SaveInventory((CUser *)param_2);
      }
    }
  }
  return;
}

```

