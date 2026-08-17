# cUserHistoryLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 135

---

## AbnormalUser

```asm
// === 08686df4 cUserHistoryLog::AbnormalUser  [0x08686df4-0x8686e39] ===
 8686df4:	55                   	push   %ebp
 8686df5:	89 e5                	mov    %esp,%ebp
 8686df7:	53                   	push   %ebx
 8686df8:	83 ec 34             	sub    $0x34,%esp
 8686dfb:	8b 45 10             	mov    0x10(%ebp),%eax
 8686dfe:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8686e02:	0f b7 4d f4          	movzwl -0xc(%ebp),%ecx
 8686e06:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686e09:	8b 45 08             	mov    0x8(%ebp),%eax
 8686e0c:	8b 00                	mov    (%eax),%eax
 8686e0e:	8b 5d 18             	mov    0x18(%ebp),%ebx
 8686e11:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8686e15:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8686e18:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8686e1c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686e20:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686e24:	c7 44 24 04 37 10 cf 	movl   $0x8cf1037,0x4(%esp)
 8686e2b:	08 
 8686e2c:	89 04 24             	mov    %eax,(%esp)
 8686e2f:	e8 ca 5a ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686e34:	83 c4 34             	add    $0x34,%esp
 8686e37:	5b                   	pop    %ebx
 8686e38:	5d                   	pop    %ebp
 8686e39:	c3                   	ret

```

```c
// cUserHistoryLog::AbnormalUser @ 0x8686df4

/* cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int) */

void __thiscall
cUserHistoryLog::AbnormalUser
          (cUserHistoryLog *this,undefined4 param_2,uint param_3,undefined4 param_4,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"AbnormalUser,%u,%hu,%d,%d",param_2,param_3 & 0xffff,param_4,
                    param_5);
  return;
}

```

---

## AccountCargoAddItem

```asm
// === 086868b4 cUserHistoryLog::AccountCargoAddItem  [0x086868b4-0x86868ed] ===
 86868b4:	55                   	push   %ebp
 86868b5:	89 e5                	mov    %esp,%ebp
 86868b7:	83 ec 28             	sub    $0x28,%esp
 86868ba:	8b 55 18             	mov    0x18(%ebp),%edx
 86868bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86868c0:	8b 00                	mov    (%eax),%eax
 86868c2:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86868c5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86868c9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86868cc:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86868d0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86868d3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86868d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86868db:	c7 44 24 04 44 0e cf 	movl   $0x8cf0e44,0x4(%esp)
 86868e2:	08 
 86868e3:	89 04 24             	mov    %eax,(%esp)
 86868e6:	e8 13 60 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86868eb:	c9                   	leave
 86868ec:	c3                   	ret
 86868ed:	90                   	nop

```

```c
// cUserHistoryLog::AccountCargoAddItem @ 0x86868b4

/* cUserHistoryLog::AccountCargoAddItem(int, int, int, eItemAddReason) */

void __thiscall
cUserHistoryLog::AccountCargoAddItem
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"AccountCargo+,%d,%d,%d,%d",param_5,param_1,param_2,param_3);
  return;
}

```

---

## AccountCargoDelItem

```asm
// === 086868ee cUserHistoryLog::AccountCargoDelItem  [0x086868ee-0x8686927] ===
 86868ee:	55                   	push   %ebp
 86868ef:	89 e5                	mov    %esp,%ebp
 86868f1:	83 ec 28             	sub    $0x28,%esp
 86868f4:	8b 55 18             	mov    0x18(%ebp),%edx
 86868f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86868fa:	8b 00                	mov    (%eax),%eax
 86868fc:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86868ff:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8686903:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686906:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 868690a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 868690d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686911:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686915:	c7 44 24 04 5e 0e cf 	movl   $0x8cf0e5e,0x4(%esp)
 868691c:	08 
 868691d:	89 04 24             	mov    %eax,(%esp)
 8686920:	e8 d9 5f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686925:	c9                   	leave
 8686926:	c3                   	ret
 8686927:	90                   	nop

```

```c
// cUserHistoryLog::AccountCargoDelItem @ 0x86868ee

/* cUserHistoryLog::AccountCargoDelItem(int, int, int, eItemDelReason) */

void __thiscall
cUserHistoryLog::AccountCargoDelItem
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"AccountCargo-,%d,%d,%d,%d",param_5,param_1,param_2,param_3);
  return;
}

```

---

## AchievementComplete

```asm
// === 0868512a cUserHistoryLog::AchievementComplete  [0x0868512a-0x868514d] ===
 868512a:	55                   	push   %ebp
 868512b:	89 e5                	mov    %esp,%ebp
 868512d:	83 ec 18             	sub    $0x18,%esp
 8685130:	8b 45 08             	mov    0x8(%ebp),%eax
 8685133:	8b 00                	mov    (%eax),%eax
 8685135:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685138:	89 54 24 08          	mov    %edx,0x8(%esp)
 868513c:	c7 44 24 04 44 09 cf 	movl   $0x8cf0944,0x4(%esp)
 8685143:	08 
 8685144:	89 04 24             	mov    %eax,(%esp)
 8685147:	e8 b2 77 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868514c:	c9                   	leave
 868514d:	c3                   	ret

```

```c
// cUserHistoryLog::AchievementComplete @ 0x868512a

/* cUserHistoryLog::AchievementComplete(int) */

void __thiscall cUserHistoryLog::AchievementComplete(cUserHistoryLog *this,int param_1)

{
  CUser::LogHistory(*(CUser **)this,"AchieveComplete,%d",param_1);
  return;
}

```

---

## AntibotPacketLog

```asm
// === 08686dd0 cUserHistoryLog::AntibotPacketLog  [0x08686dd0-0x8686df3] ===
 8686dd0:	55                   	push   %ebp
 8686dd1:	89 e5                	mov    %esp,%ebp
 8686dd3:	83 ec 18             	sub    $0x18,%esp
 8686dd6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686dd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8686ddc:	8b 00                	mov    (%eax),%eax
 8686dde:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686de2:	c7 44 24 04 23 10 cf 	movl   $0x8cf1023,0x4(%esp)
 8686de9:	08 
 8686dea:	89 04 24             	mov    %eax,(%esp)
 8686ded:	e8 0c 5b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686df2:	c9                   	leave
 8686df3:	c3                   	ret

```

```c
// cUserHistoryLog::AntibotPacketLog @ 0x8686dd0

/* cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T) */

void __thiscall cUserHistoryLog::AntibotPacketLog(cUserHistoryLog *this,undefined4 param_2)

{
  CUser::LogHistory(*(CUser **)this,"AntibotPacketLog,%d",param_2);
  return;
}

```

---

## Auction

```asm
// === 08685452 cUserHistoryLog::Auction  [0x08685452-0x8685653] ===
 8685452:	55                   	push   %ebp
 8685453:	89 e5                	mov    %esp,%ebp
 8685455:	57                   	push   %edi
 8685456:	56                   	push   %esi
 8685457:	53                   	push   %ebx
 8685458:	83 ec 5c             	sub    $0x5c,%esp
 868545b:	8b 45 0c             	mov    0xc(%ebp),%eax
 868545e:	0f b6 00             	movzbl (%eax),%eax
 8685461:	0f b6 c0             	movzbl %al,%eax
 8685464:	83 f8 01             	cmp    $0x1,%eax
 8685467:	0f 84 a6 00 00 00    	je     8685513 <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0xc1>
 868546d:	83 f8 01             	cmp    $0x1,%eax
 8685470:	7f 09                	jg     868547b <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x29>
 8685472:	85 c0                	test   %eax,%eax
 8685474:	74 1c                	je     8685492 <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x40>
 8685476:	e9 af 01 00 00       	jmp    868562a <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x1d8>
 868547b:	83 f8 02             	cmp    $0x2,%eax
 868547e:	0f 84 24 01 00 00    	je     86855a8 <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x156>
 8685484:	83 f8 03             	cmp    $0x3,%eax
 8685487:	0f 84 61 01 00 00    	je     86855ee <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x19c>
 868548d:	e9 98 01 00 00       	jmp    868562a <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x1d8>
 8685492:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685495:	8b 58 1c             	mov    0x1c(%eax),%ebx
 8685498:	8b 45 0c             	mov    0xc(%ebp),%eax
 868549b:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 868549f:	0f b7 f0             	movzwl %ax,%esi
 86854a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86854a5:	8b 40 16             	mov    0x16(%eax),%eax
 86854a8:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86854ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 86854ae:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 86854b2:	0f b6 c0             	movzbl %al,%eax
 86854b5:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86854b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86854bb:	8b 40 11             	mov    0x11(%eax),%eax
 86854be:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86854c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86854c4:	8b 78 09             	mov    0x9(%eax),%edi
 86854c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86854ca:	8b 50 01             	mov    0x1(%eax),%edx
 86854cd:	8b 48 05             	mov    0x5(%eax),%ecx
 86854d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86854d3:	8b 00                	mov    (%eax),%eax
 86854d5:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 86854d9:	89 74 24 20          	mov    %esi,0x20(%esp)
 86854dd:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 86854e0:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 86854e4:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 86854e7:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86854eb:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 86854ee:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86854f2:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86854f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86854fa:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86854fe:	c7 44 24 04 2c 0a cf 	movl   $0x8cf0a2c,0x4(%esp)
 8685505:	08 
 8685506:	89 04 24             	mov    %eax,(%esp)
 8685509:	e8 f0 73 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868550e:	e9 39 01 00 00       	jmp    868564c <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x1fa>
 8685513:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685516:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 868551a:	0f b6 d8             	movzbl %al,%ebx
 868551d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685520:	8b 70 1c             	mov    0x1c(%eax),%esi
 8685523:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685526:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 868552a:	0f b7 c0             	movzwl %ax,%eax
 868552d:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8685530:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685533:	8b 40 16             	mov    0x16(%eax),%eax
 8685536:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8685539:	8b 45 0c             	mov    0xc(%ebp),%eax
 868553c:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 8685540:	0f b6 c0             	movzbl %al,%eax
 8685543:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8685546:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685549:	8b 40 11             	mov    0x11(%eax),%eax
 868554c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 868554f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685552:	8b 78 09             	mov    0x9(%eax),%edi
 8685555:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685558:	8b 50 01             	mov    0x1(%eax),%edx
 868555b:	8b 48 05             	mov    0x5(%eax),%ecx
 868555e:	8b 45 08             	mov    0x8(%ebp),%eax
 8685561:	8b 00                	mov    (%eax),%eax
 8685563:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 8685567:	89 74 24 24          	mov    %esi,0x24(%esp)
 868556b:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 868556e:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8685572:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8685575:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8685579:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 868557c:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8685580:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8685583:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8685587:	89 7c 24 10          	mov    %edi,0x10(%esp)
 868558b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868558f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8685593:	c7 44 24 04 54 0a cf 	movl   $0x8cf0a54,0x4(%esp)
 868559a:	08 
 868559b:	89 04 24             	mov    %eax,(%esp)
 868559e:	e8 5b 73 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86855a3:	e9 a4 00 00 00       	jmp    868564c <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x1fa>
 86855a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855ab:	8b 78 0d             	mov    0xd(%eax),%edi
 86855ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855b1:	8b 70 11             	mov    0x11(%eax),%esi
 86855b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855b7:	8b 58 09             	mov    0x9(%eax),%ebx
 86855ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855bd:	8b 50 05             	mov    0x5(%eax),%edx
 86855c0:	8b 40 01             	mov    0x1(%eax),%eax
 86855c3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86855c6:	8b 09                	mov    (%ecx),%ecx
 86855c8:	89 7c 24 18          	mov    %edi,0x18(%esp)
 86855cc:	89 74 24 14          	mov    %esi,0x14(%esp)
 86855d0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86855d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 86855d8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86855dc:	c7 44 24 04 81 0a cf 	movl   $0x8cf0a81,0x4(%esp)
 86855e3:	08 
 86855e4:	89 0c 24             	mov    %ecx,(%esp)
 86855e7:	e8 12 73 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86855ec:	eb 5e                	jmp    868564c <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x1fa>
 86855ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855f1:	8b 70 0d             	mov    0xd(%eax),%esi
 86855f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855f7:	8b 58 09             	mov    0x9(%eax),%ebx
 86855fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86855fd:	8b 50 05             	mov    0x5(%eax),%edx
 8685600:	8b 40 01             	mov    0x1(%eax),%eax
 8685603:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8685606:	8b 09                	mov    (%ecx),%ecx
 8685608:	89 74 24 14          	mov    %esi,0x14(%esp)
 868560c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8685610:	89 44 24 08          	mov    %eax,0x8(%esp)
 8685614:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685618:	c7 44 24 04 9d 0a cf 	movl   $0x8cf0a9d,0x4(%esp)
 868561f:	08 
 8685620:	89 0c 24             	mov    %ecx,(%esp)
 8685623:	e8 d6 72 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685628:	eb 22                	jmp    868564c <_ZN15cUserHistoryLog7AuctionEP26SIG_AUCTION_LOG_MESSAGE_AG+0x1fa>
 868562a:	8b 45 0c             	mov    0xc(%ebp),%eax
 868562d:	0f b6 00             	movzbl (%eax),%eax
 8685630:	0f b6 d0             	movzbl %al,%edx
 8685633:	8b 45 08             	mov    0x8(%ebp),%eax
 8685636:	8b 00                	mov    (%eax),%eax
 8685638:	89 54 24 08          	mov    %edx,0x8(%esp)
 868563c:	c7 44 24 04 b6 0a cf 	movl   $0x8cf0ab6,0x4(%esp)
 8685643:	08 
 8685644:	89 04 24             	mov    %eax,(%esp)
 8685647:	e8 b2 72 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868564c:	83 c4 5c             	add    $0x5c,%esp
 868564f:	5b                   	pop    %ebx
 8685650:	5e                   	pop    %esi
 8685651:	5f                   	pop    %edi
 8685652:	5d                   	pop    %ebp
 8685653:	c3                   	ret

```

```c
// cUserHistoryLog::Auction @ 0x8685452

/* cUserHistoryLog::Auction(SIG_AUCTION_LOG_MESSAGE_AG*) */

void __thiscall cUserHistoryLog::Auction(cUserHistoryLog *this,SIG_AUCTION_LOG_MESSAGE_AG *param_1)

{
  SIG_AUCTION_LOG_MESSAGE_AG SVar1;
  
  SVar1 = *param_1;
  if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x1) {
    CUser::LogHistory(*(CUser **)this,"Auction_reg_f,%llu,%d,%u,%hhu,%d,%hu,%u,%hhu",
                      *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                      *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                      (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                      (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c),
                      (uint)(byte)param_1[0x20]);
    return;
  }
  if ((byte)SVar1 < 2) {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x0) {
      CUser::LogHistory(*(CUser **)this,"Auction_reg_s,%llu,%d,%u,%hhu,%d,%hu,%u",
                        *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                        *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                        (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                        (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  else {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x2) {
      CUser::LogHistory(*(CUser **)this,"Auction_bid_s,%llu,%d,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0x11),*(undefined4 *)(param_1 + 0xd));
      return;
    }
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_AG)0x3) {
      CUser::LogHistory(*(CUser **)this,"Auction_bid_f,%llu,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0xd));
      return;
    }
  }
  CUser::LogHistory(*(CUser **)this,"Auction_unknown,%d",(uint)(byte)*param_1);
  return;
}

```

---

## AuctionPoint

```asm
// === 08685654 cUserHistoryLog::AuctionPoint  [0x08685654-0x8685837] ===
 8685654:	55                   	push   %ebp
 8685655:	89 e5                	mov    %esp,%ebp
 8685657:	57                   	push   %edi
 8685658:	56                   	push   %esi
 8685659:	53                   	push   %ebx
 868565a:	83 ec 5c             	sub    $0x5c,%esp
 868565d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685660:	0f b6 00             	movzbl (%eax),%eax
 8685663:	0f b6 c0             	movzbl %al,%eax
 8685666:	83 f8 01             	cmp    $0x1,%eax
 8685669:	0f 84 a6 00 00 00    	je     8685715 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0xc1>
 868566f:	83 f8 01             	cmp    $0x1,%eax
 8685672:	7f 09                	jg     868567d <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x29>
 8685674:	85 c0                	test   %eax,%eax
 8685676:	74 1c                	je     8685694 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x40>
 8685678:	e9 91 01 00 00       	jmp    868580e <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x1ba>
 868567d:	83 f8 02             	cmp    $0x2,%eax
 8685680:	0f 84 10 01 00 00    	je     8685796 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x142>
 8685686:	83 f8 03             	cmp    $0x3,%eax
 8685689:	0f 84 43 01 00 00    	je     86857d2 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x17e>
 868568f:	e9 7a 01 00 00       	jmp    868580e <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x1ba>
 8685694:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685697:	8b 58 1c             	mov    0x1c(%eax),%ebx
 868569a:	8b 45 0c             	mov    0xc(%ebp),%eax
 868569d:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 86856a1:	0f b7 f0             	movzwl %ax,%esi
 86856a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86856a7:	8b 40 16             	mov    0x16(%eax),%eax
 86856aa:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86856ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 86856b0:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 86856b4:	0f b6 c0             	movzbl %al,%eax
 86856b7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86856ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 86856bd:	8b 40 11             	mov    0x11(%eax),%eax
 86856c0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86856c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86856c6:	8b 78 09             	mov    0x9(%eax),%edi
 86856c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86856cc:	8b 50 01             	mov    0x1(%eax),%edx
 86856cf:	8b 48 05             	mov    0x5(%eax),%ecx
 86856d2:	8b 45 08             	mov    0x8(%ebp),%eax
 86856d5:	8b 00                	mov    (%eax),%eax
 86856d7:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 86856db:	89 74 24 20          	mov    %esi,0x20(%esp)
 86856df:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 86856e2:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 86856e6:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 86856e9:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86856ed:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 86856f0:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86856f4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86856f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 86856fc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8685700:	c7 44 24 04 cc 0a cf 	movl   $0x8cf0acc,0x4(%esp)
 8685707:	08 
 8685708:	89 04 24             	mov    %eax,(%esp)
 868570b:	e8 ee 71 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685710:	e9 1b 01 00 00       	jmp    8685830 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x1dc>
 8685715:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685718:	8b 58 1c             	mov    0x1c(%eax),%ebx
 868571b:	8b 45 0c             	mov    0xc(%ebp),%eax
 868571e:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 8685722:	0f b7 f0             	movzwl %ax,%esi
 8685725:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685728:	8b 40 16             	mov    0x16(%eax),%eax
 868572b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 868572e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685731:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 8685735:	0f b6 c0             	movzbl %al,%eax
 8685738:	89 45 e0             	mov    %eax,-0x20(%ebp)
 868573b:	8b 45 0c             	mov    0xc(%ebp),%eax
 868573e:	8b 40 11             	mov    0x11(%eax),%eax
 8685741:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8685744:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685747:	8b 78 09             	mov    0x9(%eax),%edi
 868574a:	8b 45 0c             	mov    0xc(%ebp),%eax
 868574d:	8b 50 01             	mov    0x1(%eax),%edx
 8685750:	8b 48 05             	mov    0x5(%eax),%ecx
 8685753:	8b 45 08             	mov    0x8(%ebp),%eax
 8685756:	8b 00                	mov    (%eax),%eax
 8685758:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 868575c:	89 74 24 20          	mov    %esi,0x20(%esp)
 8685760:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8685763:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8685767:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 868576a:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 868576e:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8685771:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8685775:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8685779:	89 54 24 08          	mov    %edx,0x8(%esp)
 868577d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8685781:	c7 44 24 04 f4 0a cf 	movl   $0x8cf0af4,0x4(%esp)
 8685788:	08 
 8685789:	89 04 24             	mov    %eax,(%esp)
 868578c:	e8 6d 71 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685791:	e9 9a 00 00 00       	jmp    8685830 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x1dc>
 8685796:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685799:	8b 70 0d             	mov    0xd(%eax),%esi
 868579c:	8b 45 0c             	mov    0xc(%ebp),%eax
 868579f:	8b 58 09             	mov    0x9(%eax),%ebx
 86857a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86857a5:	8b 50 05             	mov    0x5(%eax),%edx
 86857a8:	8b 40 01             	mov    0x1(%eax),%eax
 86857ab:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86857ae:	8b 09                	mov    (%ecx),%ecx
 86857b0:	89 74 24 14          	mov    %esi,0x14(%esp)
 86857b4:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86857b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86857bc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86857c0:	c7 44 24 04 1a 0b cf 	movl   $0x8cf0b1a,0x4(%esp)
 86857c7:	08 
 86857c8:	89 0c 24             	mov    %ecx,(%esp)
 86857cb:	e8 2e 71 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86857d0:	eb 5e                	jmp    8685830 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x1dc>
 86857d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86857d5:	8b 70 0d             	mov    0xd(%eax),%esi
 86857d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86857db:	8b 58 09             	mov    0x9(%eax),%ebx
 86857de:	8b 45 0c             	mov    0xc(%ebp),%eax
 86857e1:	8b 50 05             	mov    0x5(%eax),%edx
 86857e4:	8b 40 01             	mov    0x1(%eax),%eax
 86857e7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86857ea:	8b 09                	mov    (%ecx),%ecx
 86857ec:	89 74 24 14          	mov    %esi,0x14(%esp)
 86857f0:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86857f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 86857f8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86857fc:	c7 44 24 04 31 0b cf 	movl   $0x8cf0b31,0x4(%esp)
 8685803:	08 
 8685804:	89 0c 24             	mov    %ecx,(%esp)
 8685807:	e8 f2 70 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868580c:	eb 22                	jmp    8685830 <_ZN15cUserHistoryLog12AuctionPointEP26SIG_AUCTION_LOG_MESSAGE_PG+0x1dc>
 868580e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685811:	0f b6 00             	movzbl (%eax),%eax
 8685814:	0f b6 d0             	movzbl %al,%edx
 8685817:	8b 45 08             	mov    0x8(%ebp),%eax
 868581a:	8b 00                	mov    (%eax),%eax
 868581c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685820:	c7 44 24 04 48 0b cf 	movl   $0x8cf0b48,0x4(%esp)
 8685827:	08 
 8685828:	89 04 24             	mov    %eax,(%esp)
 868582b:	e8 ce 70 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685830:	83 c4 5c             	add    $0x5c,%esp
 8685833:	5b                   	pop    %ebx
 8685834:	5e                   	pop    %esi
 8685835:	5f                   	pop    %edi
 8685836:	5d                   	pop    %ebp
 8685837:	c3                   	ret

```

```c
// cUserHistoryLog::AuctionPoint @ 0x8685654

/* cUserHistoryLog::AuctionPoint(SIG_AUCTION_LOG_MESSAGE_PG*) */

void __thiscall
cUserHistoryLog::AuctionPoint(cUserHistoryLog *this,SIG_AUCTION_LOG_MESSAGE_PG *param_1)

{
  SIG_AUCTION_LOG_MESSAGE_PG SVar1;
  
  SVar1 = *param_1;
  if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x1) {
    CUser::LogHistory(*(CUser **)this,"POINT_reg_f,%llu,%d,%u,%hhu,%d,%hu,%u",
                      *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                      *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                      (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                      (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c));
    return;
  }
  if ((byte)SVar1 < 2) {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x0) {
      CUser::LogHistory(*(CUser **)this,"POINT_reg_s,%llu,%d,%u,%hhu,%d,%hu,%u",
                        *(undefined4 *)(param_1 + 1),*(undefined4 *)(param_1 + 5),
                        *(undefined4 *)(param_1 + 9),*(undefined4 *)(param_1 + 0x11),
                        (uint)(byte)param_1[0x15],*(undefined4 *)(param_1 + 0x16),
                        (uint)*(ushort *)(param_1 + 0x1a),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  else {
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x2) {
      CUser::LogHistory(*(CUser **)this,"POINT_bid_s,%llu,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0xd));
      return;
    }
    if (SVar1 == (SIG_AUCTION_LOG_MESSAGE_PG)0x3) {
      CUser::LogHistory(*(CUser **)this,"POINT_bid_f,%llu,%d,%d",*(undefined4 *)(param_1 + 1),
                        *(undefined4 *)(param_1 + 5),*(undefined4 *)(param_1 + 9),
                        *(undefined4 *)(param_1 + 0xd));
      return;
    }
  }
  CUser::LogHistory(*(CUser **)this,"POINT_unknown,%d",(uint)(byte)*param_1);
  return;
}

```

---

## AvatarItemAdd

```asm
// === 08684652 cUserHistoryLog::AvatarItemAdd  [0x08684652-0x86846f9] ===
 8684652:	55                   	push   %ebp
 8684653:	89 e5                	mov    %esp,%ebp
 8684655:	53                   	push   %ebx
 8684656:	83 ec 24             	sub    $0x24,%esp
 8684659:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 868465d:	74 0c                	je     868466b <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason+0x19>
 868465f:	83 7d 18 03          	cmpl   $0x3,0x18(%ebp)
 8684663:	74 06                	je     868466b <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason+0x19>
 8684665:	83 7d 18 04          	cmpl   $0x4,0x18(%ebp)
 8684669:	75 54                	jne    86846bf <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason+0x6d>
 868466b:	8b 45 08             	mov    0x8(%ebp),%eax
 868466e:	83 c0 22             	add    $0x22,%eax
 8684671:	0f b6 00             	movzbl (%eax),%eax
 8684674:	84 c0                	test   %al,%al
 8684676:	74 7a                	je     86846f2 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason+0xa0>
 8684678:	8b 45 08             	mov    0x8(%ebp),%eax
 868467b:	8d 58 04             	lea    0x4(%eax),%ebx
 868467e:	8b 45 08             	mov    0x8(%ebp),%eax
 8684681:	8d 48 22             	lea    0x22(%eax),%ecx
 8684684:	8b 55 18             	mov    0x18(%ebp),%edx
 8684687:	8b 45 08             	mov    0x8(%ebp),%eax
 868468a:	8b 00                	mov    (%eax),%eax
 868468c:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8684690:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8684694:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684698:	8b 55 14             	mov    0x14(%ebp),%edx
 868469b:	89 54 24 10          	mov    %edx,0x10(%esp)
 868469f:	8b 55 10             	mov    0x10(%ebp),%edx
 86846a2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86846a6:	8b 55 0c             	mov    0xc(%ebp),%edx
 86846a9:	89 54 24 08          	mov    %edx,0x8(%esp)
 86846ad:	c7 44 24 04 db 05 cf 	movl   $0x8cf05db,0x4(%esp)
 86846b4:	08 
 86846b5:	89 04 24             	mov    %eax,(%esp)
 86846b8:	e8 41 82 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86846bd:	eb 34                	jmp    86846f3 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason+0xa1>
 86846bf:	8b 55 18             	mov    0x18(%ebp),%edx
 86846c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86846c5:	8b 00                	mov    (%eax),%eax
 86846c7:	89 54 24 14          	mov    %edx,0x14(%esp)
 86846cb:	8b 55 14             	mov    0x14(%ebp),%edx
 86846ce:	89 54 24 10          	mov    %edx,0x10(%esp)
 86846d2:	8b 55 10             	mov    0x10(%ebp),%edx
 86846d5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86846d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86846dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 86846e0:	c7 44 24 04 f9 05 cf 	movl   $0x8cf05f9,0x4(%esp)
 86846e7:	08 
 86846e8:	89 04 24             	mov    %eax,(%esp)
 86846eb:	e8 0e 82 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86846f0:	eb 01                	jmp    86846f3 <_ZN15cUserHistoryLog13AvatarItemAddEiiPKc20eAvatarItemAddReason+0xa1>
 86846f2:	90                   	nop
 86846f3:	83 c4 24             	add    $0x24,%esp
 86846f6:	5b                   	pop    %ebx
 86846f7:	5d                   	pop    %ebp
 86846f8:	c3                   	ret
 86846f9:	90                   	nop

```

```c
// cUserHistoryLog::AvatarItemAdd @ 0x8684652

/* cUserHistoryLog::AvatarItemAdd(int, int, char const*, eAvatarItemAddReason) */

void __thiscall
cUserHistoryLog::AvatarItemAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          int param_5)

{
  if (((param_5 == 1) || (param_5 == 3)) || (param_5 == 4)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CUser::LogHistory(*(CUser **)this,"Avatar+,%d,%d,%s,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                        param_5,this + 0x22,this + 4);
    }
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Avatar+,%d,%d,\"%s\",%d",param_1,param_2,param_3,param_5);
  }
  return;
}

```

---

## AvatarItemDel

```asm
// === 086846fa cUserHistoryLog::AvatarItemDel  [0x086846fa-0x868479b] ===
 86846fa:	55                   	push   %ebp
 86846fb:	89 e5                	mov    %esp,%ebp
 86846fd:	53                   	push   %ebx
 86846fe:	83 ec 24             	sub    $0x24,%esp
 8684701:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8684705:	74 06                	je     868470d <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason+0x13>
 8684707:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 868470b:	75 54                	jne    8684761 <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason+0x67>
 868470d:	8b 45 08             	mov    0x8(%ebp),%eax
 8684710:	83 c0 22             	add    $0x22,%eax
 8684713:	0f b6 00             	movzbl (%eax),%eax
 8684716:	84 c0                	test   %al,%al
 8684718:	74 7a                	je     8684794 <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason+0x9a>
 868471a:	8b 45 08             	mov    0x8(%ebp),%eax
 868471d:	8d 58 04             	lea    0x4(%eax),%ebx
 8684720:	8b 45 08             	mov    0x8(%ebp),%eax
 8684723:	8d 48 22             	lea    0x22(%eax),%ecx
 8684726:	8b 55 18             	mov    0x18(%ebp),%edx
 8684729:	8b 45 08             	mov    0x8(%ebp),%eax
 868472c:	8b 00                	mov    (%eax),%eax
 868472e:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8684732:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8684736:	89 54 24 14          	mov    %edx,0x14(%esp)
 868473a:	8b 55 14             	mov    0x14(%ebp),%edx
 868473d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684741:	8b 55 10             	mov    0x10(%ebp),%edx
 8684744:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684748:	8b 55 0c             	mov    0xc(%ebp),%edx
 868474b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868474f:	c7 44 24 04 0f 06 cf 	movl   $0x8cf060f,0x4(%esp)
 8684756:	08 
 8684757:	89 04 24             	mov    %eax,(%esp)
 868475a:	e8 9f 81 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868475f:	eb 34                	jmp    8684795 <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason+0x9b>
 8684761:	8b 55 18             	mov    0x18(%ebp),%edx
 8684764:	8b 45 08             	mov    0x8(%ebp),%eax
 8684767:	8b 00                	mov    (%eax),%eax
 8684769:	89 54 24 14          	mov    %edx,0x14(%esp)
 868476d:	8b 55 14             	mov    0x14(%ebp),%edx
 8684770:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684774:	8b 55 10             	mov    0x10(%ebp),%edx
 8684777:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868477b:	8b 55 0c             	mov    0xc(%ebp),%edx
 868477e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684782:	c7 44 24 04 2d 06 cf 	movl   $0x8cf062d,0x4(%esp)
 8684789:	08 
 868478a:	89 04 24             	mov    %eax,(%esp)
 868478d:	e8 6c 81 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684792:	eb 01                	jmp    8684795 <_ZN15cUserHistoryLog13AvatarItemDelEiiPKc20eAvatarItemDelReason+0x9b>
 8684794:	90                   	nop
 8684795:	83 c4 24             	add    $0x24,%esp
 8684798:	5b                   	pop    %ebx
 8684799:	5d                   	pop    %ebp
 868479a:	c3                   	ret
 868479b:	90                   	nop

```

```c
// cUserHistoryLog::AvatarItemDel @ 0x86846fa

/* cUserHistoryLog::AvatarItemDel(int, int, char const*, eAvatarItemDelReason) */

void __thiscall
cUserHistoryLog::AvatarItemDel
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          int param_5)

{
  if ((param_5 == 0) || (param_5 == 1)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CUser::LogHistory(*(CUser **)this,"Avatar-,%d,%d,%s,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                        param_5,this + 0x22,this + 4);
    }
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Avatar-,%d,%d,%s,%d",param_1,param_2,param_3,param_5);
  }
  return;
}

```

---

## BillingFail

```asm
// === 08685838 cUserHistoryLog::BillingFail  [0x08685838-0x868589f] ===
 8685838:	55                   	push   %ebp
 8685839:	89 e5                	mov    %esp,%ebp
 868583b:	53                   	push   %ebx
 868583c:	83 ec 34             	sub    $0x34,%esp
 868583f:	8b 45 10             	mov    0x10(%ebp),%eax
 8685842:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8685845:	8b 45 14             	mov    0x14(%ebp),%eax
 8685848:	89 45 f4             	mov    %eax,-0xc(%ebp)
 868584b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8685852:	00 
 8685853:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8685856:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8685859:	89 04 24             	mov    %eax,(%esp)
 868585c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8685860:	e8 33 38 a8 ff       	call   8109098 <_Z14NumberToStringyi>
 8685865:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8685868:	8b 55 08             	mov    0x8(%ebp),%edx
 868586b:	8b 12                	mov    (%edx),%edx
 868586d:	8b 5d 20             	mov    0x20(%ebp),%ebx
 8685870:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8685874:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 8685877:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 868587b:	8b 5d 18             	mov    0x18(%ebp),%ebx
 868587e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8685882:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8685886:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 868588a:	c7 44 24 04 59 0b cf 	movl   $0x8cf0b59,0x4(%esp)
 8685891:	08 
 8685892:	89 14 24             	mov    %edx,(%esp)
 8685895:	e8 64 70 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868589a:	83 c4 34             	add    $0x34,%esp
 868589d:	5b                   	pop    %ebx
 868589e:	5d                   	pop    %ebp
 868589f:	c3                   	ret

```

```c
// cUserHistoryLog::BillingFail @ 0x8685838

/* cUserHistoryLog::BillingFail(ENUM_BILLING_TYPE, unsigned long long, int, int, char*) */

void cUserHistoryLog::BillingFail
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(CONCAT44(param_4,param_3),0);
  CUser::LogHistory((CUser *)*param_1,"BILLING, Fail,%d,%s,%d,%d,%s",param_2,uVar1,param_5,param_6,
                    param_7);
  return;
}

```

---

## BillingSuccess

```asm
// === 086858a0 cUserHistoryLog::BillingSuccess  [0x086858a0-0x868593b] ===
 86858a0:	55                   	push   %ebp
 86858a1:	89 e5                	mov    %esp,%ebp
 86858a3:	53                   	push   %ebx
 86858a4:	83 ec 34             	sub    $0x34,%esp
 86858a7:	8b 45 10             	mov    0x10(%ebp),%eax
 86858aa:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86858ad:	8b 45 14             	mov    0x14(%ebp),%eax
 86858b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86858b3:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 86858b7:	75 3c                	jne    86858f5 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi+0x55>
 86858b9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86858c0:	00 
 86858c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86858c4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86858c7:	89 04 24             	mov    %eax,(%esp)
 86858ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 86858ce:	e8 c5 37 a8 ff       	call   8109098 <_Z14NumberToStringyi>
 86858d3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86858d6:	8b 55 08             	mov    0x8(%ebp),%edx
 86858d9:	8b 12                	mov    (%edx),%edx
 86858db:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86858df:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86858e3:	c7 44 24 04 76 0b cf 	movl   $0x8cf0b76,0x4(%esp)
 86858ea:	08 
 86858eb:	89 14 24             	mov    %edx,(%esp)
 86858ee:	e8 0b 70 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86858f3:	eb 41                	jmp    8685936 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi+0x96>
 86858f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86858fc:	00 
 86858fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8685900:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8685903:	89 04 24             	mov    %eax,(%esp)
 8685906:	89 54 24 04          	mov    %edx,0x4(%esp)
 868590a:	e8 89 37 a8 ff       	call   8109098 <_Z14NumberToStringyi>
 868590f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8685912:	8b 55 08             	mov    0x8(%ebp),%edx
 8685915:	8b 12                	mov    (%edx),%edx
 8685917:	8b 5d 18             	mov    0x18(%ebp),%ebx
 868591a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 868591e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8685922:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8685926:	c7 44 24 04 8d 0b cf 	movl   $0x8cf0b8d,0x4(%esp)
 868592d:	08 
 868592e:	89 14 24             	mov    %edx,(%esp)
 8685931:	e8 c8 6f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685936:	83 c4 34             	add    $0x34,%esp
 8685939:	5b                   	pop    %ebx
 868593a:	5d                   	pop    %ebp
 868593b:	c3                   	ret

```

```c
// cUserHistoryLog::BillingSuccess @ 0x86858a0

/* cUserHistoryLog::BillingSuccess(ENUM_BILLING_TYPE, unsigned long long, int) */

void cUserHistoryLog::BillingSuccess
               (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  
  if (param_2 == 3) {
    uVar1 = NumberToString(CONCAT44(param_4,param_3),0);
    CUser::LogHistory((CUser *)*param_1,"BILLING, Success,%d,%s",3,uVar1);
  }
  else {
    uVar1 = NumberToString(CONCAT44(param_4,param_3),0);
    CUser::LogHistory((CUser *)*param_1,"BILLING, Success,%d,%d,%d",param_2,uVar1,param_5);
  }
  return;
}

```

---

## BloodRoundClear

```asm
// === 08684af0 cUserHistoryLog::BloodRoundClear  [0x08684af0-0x8684b21] ===
 8684af0:	55                   	push   %ebp
 8684af1:	89 e5                	mov    %esp,%ebp
 8684af3:	83 ec 28             	sub    $0x28,%esp
 8684af6:	8b 45 08             	mov    0x8(%ebp),%eax
 8684af9:	8b 00                	mov    (%eax),%eax
 8684afb:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8684afe:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684b02:	8b 55 10             	mov    0x10(%ebp),%edx
 8684b05:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684b09:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684b0c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684b10:	c7 44 24 04 83 07 cf 	movl   $0x8cf0783,0x4(%esp)
 8684b17:	08 
 8684b18:	89 04 24             	mov    %eax,(%esp)
 8684b1b:	e8 de 7d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684b20:	c9                   	leave
 8684b21:	c3                   	ret

```

```c
// cUserHistoryLog::BloodRoundClear @ 0x8684af0

/* cUserHistoryLog::BloodRoundClear(int, unsigned int, unsigned int, char const*, char const*) */

void __thiscall
cUserHistoryLog::BloodRoundClear
          (cUserHistoryLog *this,int param_1,uint param_2,uint param_3,char *param_4,char *param_5)

{
  CUser::LogHistory(*(CUser **)this,"BloodRoundClear,%d,%u,%s",param_1,param_2,param_5);
  return;
}

```

---

## BuyCashShopItem

```asm
// === 08686ea0 cUserHistoryLog::BuyCashShopItem  [0x08686ea0-0x8686f1d] ===
 8686ea0:	55                   	push   %ebp
 8686ea1:	89 e5                	mov    %esp,%ebp
 8686ea3:	53                   	push   %ebx
 8686ea4:	83 ec 44             	sub    $0x44,%esp
 8686ea7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8686eaa:	88 45 f4             	mov    %al,-0xc(%ebp)
 8686ead:	8b 45 24             	mov    0x24(%ebp),%eax
 8686eb0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8686eb3:	8b 45 28             	mov    0x28(%ebp),%eax
 8686eb6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8686eb9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8686ec0:	00 
 8686ec1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8686ec4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8686ec7:	89 04 24             	mov    %eax,(%esp)
 8686eca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8686ece:	e8 c5 21 a8 ff       	call   8109098 <_Z14NumberToStringyi>
 8686ed3:	8b 5d 20             	mov    0x20(%ebp),%ebx
 8686ed6:	0f be 4d f4          	movsbl -0xc(%ebp),%ecx
 8686eda:	8b 55 08             	mov    0x8(%ebp),%edx
 8686edd:	8b 12                	mov    (%edx),%edx
 8686edf:	89 44 24 20          	mov    %eax,0x20(%esp)
 8686ee3:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8686ee7:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686eeb:	8b 45 18             	mov    0x18(%ebp),%eax
 8686eee:	89 44 24 14          	mov    %eax,0x14(%esp)
 8686ef2:	8b 45 14             	mov    0x14(%ebp),%eax
 8686ef5:	89 44 24 10          	mov    %eax,0x10(%esp)
 8686ef9:	8b 45 10             	mov    0x10(%ebp),%eax
 8686efc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8686f00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686f03:	89 44 24 08          	mov    %eax,0x8(%esp)
 8686f07:	c7 44 24 04 84 10 cf 	movl   $0x8cf1084,0x4(%esp)
 8686f0e:	08 
 8686f0f:	89 14 24             	mov    %edx,(%esp)
 8686f12:	e8 e7 59 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686f17:	83 c4 44             	add    $0x44,%esp
 8686f1a:	5b                   	pop    %ebx
 8686f1b:	5d                   	pop    %ebp
 8686f1c:	c3                   	ret
 8686f1d:	90                   	nop

```

```c
// cUserHistoryLog::BuyCashShopItem @ 0x8686ea0

/* cUserHistoryLog::BuyCashShopItem(unsigned int, unsigned long, unsigned int, char const*, char,
   CeraShopPaymentType::T, unsigned long long) */

void cUserHistoryLog::BuyCashShopItem
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,char param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(CONCAT44(param_9,param_8),0);
  CUser::LogHistory((CUser *)*param_1,"BuyCashItem, %u, %u, %u, %s, %d, %d, %s",param_2,param_3,
                    param_4,param_5,(int)param_6,param_7,uVar1);
  return;
}

```

---

## CashInvenAdd

```asm
// === 0868683a cUserHistoryLog::CashInvenAdd  [0x0868683a-0x8686873] ===
 868683a:	55                   	push   %ebp
 868683b:	89 e5                	mov    %esp,%ebp
 868683d:	83 ec 28             	sub    $0x28,%esp
 8686840:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686843:	8b 45 08             	mov    0x8(%ebp),%eax
 8686846:	8b 00                	mov    (%eax),%eax
 8686848:	8b 4d 18             	mov    0x18(%ebp),%ecx
 868684b:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 868684f:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686852:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686856:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686859:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 868685d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686861:	c7 44 24 04 13 0e cf 	movl   $0x8cf0e13,0x4(%esp)
 8686868:	08 
 8686869:	89 04 24             	mov    %eax,(%esp)
 868686c:	e8 8d 60 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686871:	c9                   	leave
 8686872:	c3                   	ret
 8686873:	90                   	nop

```

```c
// cUserHistoryLog::CashInvenAdd @ 0x868683a

/* cUserHistoryLog::CashInvenAdd(eCashInvenAddReason, unsigned int, unsigned int, unsigned long) */

void __thiscall
cUserHistoryLog::CashInvenAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"CashInven+,%u,%u,%u,%u",param_2,param_3,param_4,param_5);
  return;
}

```

---

## CashInvenDel

```asm
// === 08686874 cUserHistoryLog::CashInvenDel  [0x08686874-0x86868b3] ===
 8686874:	55                   	push   %ebp
 8686875:	89 e5                	mov    %esp,%ebp
 8686877:	83 ec 28             	sub    $0x28,%esp
 868687a:	8b 55 0c             	mov    0xc(%ebp),%edx
 868687d:	8b 45 08             	mov    0x8(%ebp),%eax
 8686880:	8b 00                	mov    (%eax),%eax
 8686882:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8686885:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686889:	8b 4d 18             	mov    0x18(%ebp),%ecx
 868688c:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8686890:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686893:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686897:	8b 4d 10             	mov    0x10(%ebp),%ecx
 868689a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 868689e:	89 54 24 08          	mov    %edx,0x8(%esp)
 86868a2:	c7 44 24 04 2a 0e cf 	movl   $0x8cf0e2a,0x4(%esp)
 86868a9:	08 
 86868aa:	89 04 24             	mov    %eax,(%esp)
 86868ad:	e8 4c 60 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86868b2:	c9                   	leave
 86868b3:	c3                   	ret

```

```c
// cUserHistoryLog::CashInvenDel @ 0x8686874

/* cUserHistoryLog::CashInvenDel(eCashInvenDelReason, unsigned int, unsigned int, unsigned long,
   unsigned int) */

void __thiscall
cUserHistoryLog::CashInvenDel
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"CashInven-,%u,%u,%u,%u,%u",param_2,param_3,param_4,param_5,
                    param_6);
  return;
}

```

---

## CeraPoint

```asm
// === 0868593c cUserHistoryLog::CeraPoint  [0x0868593c-0x8685977] ===
 868593c:	55                   	push   %ebp
 868593d:	89 e5                	mov    %esp,%ebp
 868593f:	83 ec 28             	sub    $0x28,%esp
 8685942:	8b 45 08             	mov    0x8(%ebp),%eax
 8685945:	8b 00                	mov    (%eax),%eax
 8685947:	89 04 24             	mov    %eax,(%esp)
 868594a:	e8 a7 d1 00 00       	call   8692af6 <_ZN5CUser12GetCeraPointEv>
 868594f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8685952:	8b 55 08             	mov    0x8(%ebp),%edx
 8685955:	8b 12                	mov    (%edx),%edx
 8685957:	89 44 24 10          	mov    %eax,0x10(%esp)
 868595b:	8b 45 10             	mov    0x10(%ebp),%eax
 868595e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8685962:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8685966:	c7 44 24 04 a7 0b cf 	movl   $0x8cf0ba7,0x4(%esp)
 868596d:	08 
 868596e:	89 14 24             	mov    %edx,(%esp)
 8685971:	e8 88 6f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685976:	c9                   	leave
 8685977:	c3                   	ret

```

```c
// cUserHistoryLog::CeraPoint @ 0x868593c

/* cUserHistoryLog::CeraPoint(ENUM_CERAPOINT_LOG_TYPE, unsigned int) */

void __thiscall
cUserHistoryLog::CeraPoint(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUser::GetCeraPoint(*(CUser **)this);
  CUser::LogHistory(*(CUser **)this,"CeraPoint,%d,%d,%d",param_2,param_3,uVar1);
  return;
}

```

---

## ChangeGrowType

```asm
// === 0868460a cUserHistoryLog::ChangeGrowType  [0x0868460a-0x8684651] ===
 868460a:	55                   	push   %ebp
 868460b:	89 e5                	mov    %esp,%ebp
 868460d:	83 ec 28             	sub    $0x28,%esp
 8684610:	8b 55 20             	mov    0x20(%ebp),%edx
 8684613:	8b 45 08             	mov    0x8(%ebp),%eax
 8684616:	8b 00                	mov    (%eax),%eax
 8684618:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 868461c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 868461f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8684623:	8b 55 18             	mov    0x18(%ebp),%edx
 8684626:	89 54 24 14          	mov    %edx,0x14(%esp)
 868462a:	8b 55 14             	mov    0x14(%ebp),%edx
 868462d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684631:	8b 55 10             	mov    0x10(%ebp),%edx
 8684634:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684638:	8b 55 0c             	mov    0xc(%ebp),%edx
 868463b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868463f:	c7 44 24 04 c6 05 cf 	movl   $0x8cf05c6,0x4(%esp)
 8684646:	08 
 8684647:	89 04 24             	mov    %eax,(%esp)
 868464a:	e8 af 82 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868464f:	c9                   	leave
 8684650:	c3                   	ret
 8684651:	90                   	nop

```

```c
// cUserHistoryLog::ChangeGrowType @ 0x868460a

/* cUserHistoryLog::ChangeGrowType(int, int, int, int, int, eChangeGrowTypeReason) */

void __thiscall
cUserHistoryLog::ChangeGrowType
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_7)

{
  CUser::LogHistory(*(CUser **)this,"CP,%d,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,param_5,
                    param_7);
  return;
}

```

---

## ChangeItemLimitCount

```asm
// === 08686d54 cUserHistoryLog::ChangeItemLimitCount  [0x08686d54-0x8686d9f] ===
 8686d54:	55                   	push   %ebp
 8686d55:	89 e5                	mov    %esp,%ebp
 8686d57:	83 ec 28             	sub    $0x28,%esp
 8686d5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8686d5d:	8b 00                	mov    (%eax),%eax
 8686d5f:	85 c0                	test   %eax,%eax
 8686d61:	74 3a                	je     8686d9d <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii+0x49>
 8686d63:	8b 45 08             	mov    0x8(%ebp),%eax
 8686d66:	8b 00                	mov    (%eax),%eax
 8686d68:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8686d6b:	89 54 24 18          	mov    %edx,0x18(%esp)
 8686d6f:	8b 55 18             	mov    0x18(%ebp),%edx
 8686d72:	89 54 24 14          	mov    %edx,0x14(%esp)
 8686d76:	8b 55 14             	mov    0x14(%ebp),%edx
 8686d79:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686d7d:	8b 55 10             	mov    0x10(%ebp),%edx
 8686d80:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686d84:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686d87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686d8b:	c7 44 24 04 d8 0f cf 	movl   $0x8cf0fd8,0x4(%esp)
 8686d92:	08 
 8686d93:	89 04 24             	mov    %eax,(%esp)
 8686d96:	e8 63 5b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686d9b:	eb 01                	jmp    8686d9e <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii+0x4a>
 8686d9d:	90                   	nop
 8686d9e:	c9                   	leave
 8686d9f:	c3                   	ret

```

```c
// cUserHistoryLog::ChangeItemLimitCount @ 0x8686d54

/* cUserHistoryLog::ChangeItemLimitCount(int, int, int, int, int) */

void __thiscall
cUserHistoryLog::ChangeItemLimitCount
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"ChangeItemTradeLimitCount,%d,%d,%d,%d,%d",param_1,param_2,
                      param_3,param_4,param_5);
  }
  return;
}

```

---

## CharacAdd

```asm
// === 08682a92 cUserHistoryLog::CharacAdd  [0x08682a92-0x8682adf] ===
 8682a92:	55                   	push   %ebp
 8682a93:	89 e5                	mov    %esp,%ebp
 8682a95:	83 ec 28             	sub    $0x28,%esp
 8682a98:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8682a9b:	89 04 24             	mov    %eax,(%esp)
 8682a9e:	e8 85 b7 ec ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 8682aa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682aa6:	8b 55 08             	mov    0x8(%ebp),%edx
 8682aa9:	8b 12                	mov    (%edx),%edx
 8682aab:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 8682ab1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8682ab5:	89 14 24             	mov    %edx,(%esp)
 8682ab8:	e8 fb e0 b1 ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 8682abd:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8682ac1:	0f be d0             	movsbl %al,%edx
 8682ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 8682ac7:	8b 00                	mov    (%eax),%eax
 8682ac9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682acd:	c7 44 24 04 ff 00 cf 	movl   $0x8cf00ff,0x4(%esp)
 8682ad4:	08 
 8682ad5:	89 04 24             	mov    %eax,(%esp)
 8682ad8:	e8 21 9e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682add:	c9                   	leave
 8682ade:	c3                   	ret
 8682adf:	90                   	nop

```

```c
// cUserHistoryLog::CharacAdd @ 0x8682a92

/* cUserHistoryLog::CharacAdd(int) */

void __thiscall cUserHistoryLog::CharacAdd(cUserHistoryLog *this,int param_1)

{
  int iVar1;
  TimeLog_ local_14 [16];
  
  TimeLog_::setTime(local_14);
  iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8),
                     param_1);
  CUser::LogHistory(*(CUser **)this,"Charac+,%d",(int)*(char *)(iVar1 + 0x26));
  return;
}

```

---

## CharacDel

```asm
// === 08682ae0 cUserHistoryLog::CharacDel  [0x08682ae0-0x8682b2d] ===
 8682ae0:	55                   	push   %ebp
 8682ae1:	89 e5                	mov    %esp,%ebp
 8682ae3:	83 ec 28             	sub    $0x28,%esp
 8682ae6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8682ae9:	89 04 24             	mov    %eax,(%esp)
 8682aec:	e8 37 b7 ec ff       	call   854e228 <_ZN8TimeLog_7setTimeEv>
 8682af1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682af4:	8b 55 08             	mov    0x8(%ebp),%edx
 8682af7:	8b 12                	mov    (%edx),%edx
 8682af9:	81 c2 e8 96 07 00    	add    $0x796e8,%edx
 8682aff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8682b03:	89 14 24             	mov    %edx,(%esp)
 8682b06:	e8 ad e0 b1 ff       	call   81a0bb8 <_ZNSt6vectorI12_Charac_infoSaIS0_EEixEj>
 8682b0b:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8682b0f:	0f be d0             	movsbl %al,%edx
 8682b12:	8b 45 08             	mov    0x8(%ebp),%eax
 8682b15:	8b 00                	mov    (%eax),%eax
 8682b17:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682b1b:	c7 44 24 04 0a 01 cf 	movl   $0x8cf010a,0x4(%esp)
 8682b22:	08 
 8682b23:	89 04 24             	mov    %eax,(%esp)
 8682b26:	e8 d3 9d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682b2b:	c9                   	leave
 8682b2c:	c3                   	ret
 8682b2d:	90                   	nop

```

```c
// cUserHistoryLog::CharacDel @ 0x8682ae0

/* cUserHistoryLog::CharacDel(int) */

void __thiscall cUserHistoryLog::CharacDel(cUserHistoryLog *this,int param_1)

{
  int iVar1;
  TimeLog_ local_14 [16];
  
  TimeLog_::setTime(local_14);
  iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8),
                     param_1);
  CUser::LogHistory(*(CUser **)this,"Charac-,%d",(int)*(char *)(iVar1 + 0x26));
  return;
}

```

---

## CharacDie

```asm
// === 08684dfa cUserHistoryLog::CharacDie  [0x08684dfa-0x8684e3b] ===
 8684dfa:	55                   	push   %ebp
 8684dfb:	89 e5                	mov    %esp,%ebp
 8684dfd:	83 ec 38             	sub    $0x38,%esp
 8684e00:	8b 55 10             	mov    0x10(%ebp),%edx
 8684e03:	8b 45 14             	mov    0x14(%ebp),%eax
 8684e06:	66 89 55 f4          	mov    %dx,-0xc(%ebp)
 8684e0a:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 8684e0e:	0f b7 4d f0          	movzwl -0x10(%ebp),%ecx
 8684e12:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8684e16:	8b 45 08             	mov    0x8(%ebp),%eax
 8684e19:	8b 00                	mov    (%eax),%eax
 8684e1b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8684e1f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684e23:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684e26:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684e2a:	c7 44 24 04 9c 08 cf 	movl   $0x8cf089c,0x4(%esp)
 8684e31:	08 
 8684e32:	89 04 24             	mov    %eax,(%esp)
 8684e35:	e8 c4 7a ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684e3a:	c9                   	leave
 8684e3b:	c3                   	ret

```

```c
// cUserHistoryLog::CharacDie @ 0x8684dfa

/* cUserHistoryLog::CharacDie(char const*, unsigned short, unsigned short) */

void __thiscall
cUserHistoryLog::CharacDie(cUserHistoryLog *this,char *param_1,ushort param_2,ushort param_3)

{
  CUser::LogHistory(*(CUser **)this,"Die,\"%s\",%d,%d",param_1,(uint)param_2,(uint)param_3);
  return;
}

```

---

## ClearUsedQP

```asm
// === 086888be cUserHistoryLog::ClearUsedQP  [0x086888be-0x86888f7] ===
 86888be:	55                   	push   %ebp
 86888bf:	89 e5                	mov    %esp,%ebp
 86888c1:	83 ec 28             	sub    $0x28,%esp
 86888c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86888c7:	8b 00                	mov    (%eax),%eax
 86888c9:	8b 55 18             	mov    0x18(%ebp),%edx
 86888cc:	89 54 24 14          	mov    %edx,0x14(%esp)
 86888d0:	8b 55 14             	mov    0x14(%ebp),%edx
 86888d3:	89 54 24 10          	mov    %edx,0x10(%esp)
 86888d7:	8b 55 10             	mov    0x10(%ebp),%edx
 86888da:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86888de:	8b 55 0c             	mov    0xc(%ebp),%edx
 86888e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 86888e5:	c7 44 24 04 3f 11 cf 	movl   $0x8cf113f,0x4(%esp)
 86888ec:	08 
 86888ed:	89 04 24             	mov    %eax,(%esp)
 86888f0:	e8 09 40 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86888f5:	c9                   	leave
 86888f6:	c3                   	ret
 86888f7:	90                   	nop

```

```c
// cUserHistoryLog::ClearUsedQP @ 0x86888be

/* cUserHistoryLog::ClearUsedQP(int, int, int, int) */

void __thiscall
cUserHistoryLog::ClearUsedQP(cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"ClearQP,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  return;
}

```

---

## CoinAdd

```asm
// === 08683b90 cUserHistoryLog::CoinAdd  [0x08683b90-0x8683bc1] ===
 8683b90:	55                   	push   %ebp
 8683b91:	89 e5                	mov    %esp,%ebp
 8683b93:	83 ec 28             	sub    $0x28,%esp
 8683b96:	8b 55 14             	mov    0x14(%ebp),%edx
 8683b99:	8b 45 08             	mov    0x8(%ebp),%eax
 8683b9c:	8b 00                	mov    (%eax),%eax
 8683b9e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683ba2:	8b 55 10             	mov    0x10(%ebp),%edx
 8683ba5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683ba9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683bac:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683bb0:	c7 44 24 04 25 04 cf 	movl   $0x8cf0425,0x4(%esp)
 8683bb7:	08 
 8683bb8:	89 04 24             	mov    %eax,(%esp)
 8683bbb:	e8 3e 8d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683bc0:	c9                   	leave
 8683bc1:	c3                   	ret

```

```c
// cUserHistoryLog::CoinAdd @ 0x8683b90

/* cUserHistoryLog::CoinAdd(int, int, eCoinAddReason) */

void __thiscall
cUserHistoryLog::CoinAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"Coin+,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## CoinSub

```asm
// === 08683bc2 cUserHistoryLog::CoinSub  [0x08683bc2-0x8683bf3] ===
 8683bc2:	55                   	push   %ebp
 8683bc3:	89 e5                	mov    %esp,%ebp
 8683bc5:	83 ec 28             	sub    $0x28,%esp
 8683bc8:	8b 55 14             	mov    0x14(%ebp),%edx
 8683bcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8683bce:	8b 00                	mov    (%eax),%eax
 8683bd0:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683bd4:	8b 55 10             	mov    0x10(%ebp),%edx
 8683bd7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683bdb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683bde:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683be2:	c7 44 24 04 34 04 cf 	movl   $0x8cf0434,0x4(%esp)
 8683be9:	08 
 8683bea:	89 04 24             	mov    %eax,(%esp)
 8683bed:	e8 0c 8d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683bf2:	c9                   	leave
 8683bf3:	c3                   	ret

```

```c
// cUserHistoryLog::CoinSub @ 0x8683bc2

/* cUserHistoryLog::CoinSub(int, int, eCoinSubReason) */

void __thiscall
cUserHistoryLog::CoinSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"Coin-,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## CreatePrivateStore

```asm
// === 0868455a cUserHistoryLog::CreatePrivateStore  [0x0868455a-0x8684585] ===
 868455a:	55                   	push   %ebp
 868455b:	89 e5                	mov    %esp,%ebp
 868455d:	83 ec 18             	sub    $0x18,%esp
 8684560:	8b 45 08             	mov    0x8(%ebp),%eax
 8684563:	8b 00                	mov    (%eax),%eax
 8684565:	8b 55 10             	mov    0x10(%ebp),%edx
 8684568:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868456c:	8b 55 0c             	mov    0xc(%ebp),%edx
 868456f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684573:	c7 44 24 04 82 05 cf 	movl   $0x8cf0582,0x4(%esp)
 868457a:	08 
 868457b:	89 04 24             	mov    %eax,(%esp)
 868457e:	e8 7b 83 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684583:	c9                   	leave
 8684584:	c3                   	ret
 8684585:	90                   	nop

```

```c
// cUserHistoryLog::CreatePrivateStore @ 0x868455a

/* cUserHistoryLog::CreatePrivateStore(int, int, char const*) */

void cUserHistoryLog::CreatePrivateStore(int param_1,int param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)param_1,"Private Store+,%d,%d",param_2,param_3);
  return;
}

```

---

## CreatureItemAdd

```asm
// === 08684e3c cUserHistoryLog::CreatureItemAdd  [0x08684e3c-0x8684f3f] ===
 8684e3c:	55                   	push   %ebp
 8684e3d:	89 e5                	mov    %esp,%ebp
 8684e3f:	53                   	push   %ebx
 8684e40:	83 ec 64             	sub    $0x64,%esp
 8684e43:	83 7d 1c 05          	cmpl   $0x5,0x1c(%ebp)
 8684e47:	0f 85 a0 00 00 00    	jne    8684eed <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0xb1>
 8684e4d:	83 7d 20 1a          	cmpl   $0x1a,0x20(%ebp)
 8684e51:	74 0c                	je     8684e5f <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0x23>
 8684e53:	83 7d 20 1c          	cmpl   $0x1c,0x20(%ebp)
 8684e57:	74 06                	je     8684e5f <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0x23>
 8684e59:	83 7d 20 1d          	cmpl   $0x1d,0x20(%ebp)
 8684e5d:	75 5b                	jne    8684eba <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0x7e>
 8684e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8684e62:	83 c0 22             	add    $0x22,%eax
 8684e65:	0f b6 00             	movzbl (%eax),%eax
 8684e68:	84 c0                	test   %al,%al
 8684e6a:	0f 84 c9 00 00 00    	je     8684f39 <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0xfd>
 8684e70:	8b 45 08             	mov    0x8(%ebp),%eax
 8684e73:	8d 58 04             	lea    0x4(%eax),%ebx
 8684e76:	8b 45 08             	mov    0x8(%ebp),%eax
 8684e79:	8d 48 22             	lea    0x22(%eax),%ecx
 8684e7c:	8b 55 20             	mov    0x20(%ebp),%edx
 8684e7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8684e82:	8b 00                	mov    (%eax),%eax
 8684e84:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8684e88:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8684e8c:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684e90:	8b 55 18             	mov    0x18(%ebp),%edx
 8684e93:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684e97:	8b 55 14             	mov    0x14(%ebp),%edx
 8684e9a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684e9e:	8b 55 10             	mov    0x10(%ebp),%edx
 8684ea1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684ea5:	c7 44 24 04 ac 08 cf 	movl   $0x8cf08ac,0x4(%esp)
 8684eac:	08 
 8684ead:	89 04 24             	mov    %eax,(%esp)
 8684eb0:	e8 49 7a ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684eb5:	e9 80 00 00 00       	jmp    8684f3a <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0xfe>
 8684eba:	8b 55 20             	mov    0x20(%ebp),%edx
 8684ebd:	8b 45 08             	mov    0x8(%ebp),%eax
 8684ec0:	8b 00                	mov    (%eax),%eax
 8684ec2:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684ec6:	8b 55 18             	mov    0x18(%ebp),%edx
 8684ec9:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684ecd:	8b 55 14             	mov    0x14(%ebp),%edx
 8684ed0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684ed4:	8b 55 10             	mov    0x10(%ebp),%edx
 8684ed7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684edb:	c7 44 24 04 cb 08 cf 	movl   $0x8cf08cb,0x4(%esp)
 8684ee2:	08 
 8684ee3:	89 04 24             	mov    %eax,(%esp)
 8684ee6:	e8 13 7a ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684eeb:	eb 4d                	jmp    8684f3a <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0xfe>
 8684eed:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8684ef0:	89 04 24             	mov    %eax,(%esp)
 8684ef3:	e8 5c 69 a4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8684ef8:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8684efb:	89 04 24             	mov    %eax,(%esp)
 8684efe:	e8 d5 68 a4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8684f03:	8b 45 10             	mov    0x10(%ebp),%eax
 8684f06:	89 45 bd             	mov    %eax,-0x43(%ebp)
 8684f09:	8b 45 20             	mov    0x20(%ebp),%eax
 8684f0c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8684f10:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8684f13:	89 44 24 10          	mov    %eax,0x10(%esp)
 8684f17:	8b 45 18             	mov    0x18(%ebp),%eax
 8684f1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8684f1e:	8b 45 14             	mov    0x14(%ebp),%eax
 8684f21:	89 44 24 08          	mov    %eax,0x8(%esp)
 8684f25:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684f28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8684f2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8684f2f:	89 04 24             	mov    %eax,(%esp)
 8684f32:	e8 4d df ff ff       	call   8682e84 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason>
 8684f37:	eb 01                	jmp    8684f3a <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason+0xfe>
 8684f39:	90                   	nop
 8684f3a:	83 c4 64             	add    $0x64,%esp
 8684f3d:	5b                   	pop    %ebx
 8684f3e:	5d                   	pop    %ebp
 8684f3f:	c3                   	ret

```

```c
// cUserHistoryLog::CreatureItemAdd @ 0x8684e3c

/* cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int, eItemAddReason) */

void __thiscall
cUserHistoryLog::CreatureItemAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7)

{
  Inven_Item local_49 [2];
  undefined4 local_47;
  
  if (param_6 == 5) {
    if (((param_7 == 0x1a) || (param_7 == 0x1c)) || (param_7 == 0x1d)) {
      if (this[0x22] != (cUserHistoryLog)0x0) {
        CUser::LogHistory(*(CUser **)this,"CTItem+,%d,%d,%d,%d,\"%s\",\"%s\")",param_3,param_4,
                          param_5,param_7,this + 0x22,this + 4);
      }
    }
    else {
      CUser::LogHistory(*(CUser **)this,"CTItem+,%d,%d,%d,%d",param_3,param_4,param_5,param_7);
    }
  }
  else {
    Inven_Item::Inven_Item(local_49);
    Inven_Item::reset(local_49);
    local_47 = param_3;
    ItemAdd(this,param_2,param_4,param_5,local_49,param_7);
  }
  return;
}

```

---

## CreatureItemDel

```asm
// === 08684f40 cUserHistoryLog::CreatureItemDel  [0x08684f40-0x868503d] ===
 8684f40:	55                   	push   %ebp
 8684f41:	89 e5                	mov    %esp,%ebp
 8684f43:	53                   	push   %ebx
 8684f44:	83 ec 64             	sub    $0x64,%esp
 8684f47:	83 7d 1c 05          	cmpl   $0x5,0x1c(%ebp)
 8684f4b:	0f 85 9a 00 00 00    	jne    8684feb <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0xab>
 8684f51:	83 7d 20 14          	cmpl   $0x14,0x20(%ebp)
 8684f55:	74 06                	je     8684f5d <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0x1d>
 8684f57:	83 7d 20 15          	cmpl   $0x15,0x20(%ebp)
 8684f5b:	75 5b                	jne    8684fb8 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0x78>
 8684f5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8684f60:	83 c0 22             	add    $0x22,%eax
 8684f63:	0f b6 00             	movzbl (%eax),%eax
 8684f66:	84 c0                	test   %al,%al
 8684f68:	0f 84 c9 00 00 00    	je     8685037 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0xf7>
 8684f6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8684f71:	8d 58 04             	lea    0x4(%eax),%ebx
 8684f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8684f77:	8d 48 22             	lea    0x22(%eax),%ecx
 8684f7a:	8b 55 20             	mov    0x20(%ebp),%edx
 8684f7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8684f80:	8b 00                	mov    (%eax),%eax
 8684f82:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8684f86:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8684f8a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684f8e:	8b 55 18             	mov    0x18(%ebp),%edx
 8684f91:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684f95:	8b 55 14             	mov    0x14(%ebp),%edx
 8684f98:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684f9c:	8b 55 10             	mov    0x10(%ebp),%edx
 8684f9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684fa3:	c7 44 24 04 df 08 cf 	movl   $0x8cf08df,0x4(%esp)
 8684faa:	08 
 8684fab:	89 04 24             	mov    %eax,(%esp)
 8684fae:	e8 4b 79 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684fb3:	e9 80 00 00 00       	jmp    8685038 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0xf8>
 8684fb8:	8b 55 20             	mov    0x20(%ebp),%edx
 8684fbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8684fbe:	8b 00                	mov    (%eax),%eax
 8684fc0:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684fc4:	8b 55 18             	mov    0x18(%ebp),%edx
 8684fc7:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684fcb:	8b 55 14             	mov    0x14(%ebp),%edx
 8684fce:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684fd2:	8b 55 10             	mov    0x10(%ebp),%edx
 8684fd5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684fd9:	c7 44 24 04 fd 08 cf 	movl   $0x8cf08fd,0x4(%esp)
 8684fe0:	08 
 8684fe1:	89 04 24             	mov    %eax,(%esp)
 8684fe4:	e8 15 79 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684fe9:	eb 4d                	jmp    8685038 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0xf8>
 8684feb:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8684fee:	89 04 24             	mov    %eax,(%esp)
 8684ff1:	e8 5e 68 a4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8684ff6:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8684ff9:	89 04 24             	mov    %eax,(%esp)
 8684ffc:	e8 d7 67 a4 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8685001:	8b 45 10             	mov    0x10(%ebp),%eax
 8685004:	89 45 bd             	mov    %eax,-0x43(%ebp)
 8685007:	8b 45 20             	mov    0x20(%ebp),%eax
 868500a:	89 44 24 14          	mov    %eax,0x14(%esp)
 868500e:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8685011:	89 44 24 10          	mov    %eax,0x10(%esp)
 8685015:	8b 45 18             	mov    0x18(%ebp),%eax
 8685018:	89 44 24 0c          	mov    %eax,0xc(%esp)
 868501c:	8b 45 14             	mov    0x14(%ebp),%eax
 868501f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8685023:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685026:	89 44 24 04          	mov    %eax,0x4(%esp)
 868502a:	8b 45 08             	mov    0x8(%ebp),%eax
 868502d:	89 04 24             	mov    %eax,(%esp)
 8685030:	e8 d5 e3 ff ff       	call   868340a <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason>
 8685035:	eb 01                	jmp    8685038 <_ZN15cUserHistoryLog15CreatureItemDelE10INVEN_TYPEiiii14eItemDelReason+0xf8>
 8685037:	90                   	nop
 8685038:	83 c4 64             	add    $0x64,%esp
 868503b:	5b                   	pop    %ebx
 868503c:	5d                   	pop    %ebp
 868503d:	c3                   	ret

```

```c
// cUserHistoryLog::CreatureItemDel @ 0x8684f40

/* cUserHistoryLog::CreatureItemDel(INVEN_TYPE, int, int, int, int, eItemDelReason) */

void __thiscall
cUserHistoryLog::CreatureItemDel
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,int param_7)

{
  Inven_Item local_49 [2];
  undefined4 local_47;
  
  if (param_6 == 5) {
    if ((param_7 == 0x14) || (param_7 == 0x15)) {
      if (this[0x22] != (cUserHistoryLog)0x0) {
        CUser::LogHistory(*(CUser **)this,"CTItem-,%d,%d,%d,%d,\"%s\",\"%s\"",param_3,param_4,
                          param_5,param_7,this + 0x22,this + 4);
      }
    }
    else {
      CUser::LogHistory(*(CUser **)this,"CTItem-,%d,%d,%d,%d",param_3,param_4,param_5,param_7);
    }
  }
  else {
    Inven_Item::Inven_Item(local_49);
    Inven_Item::reset(local_49);
    local_47 = param_3;
    ItemDel(this,param_2,param_4,param_5,local_49,param_7);
  }
  return;
}

```

---

## DeleteInvaildItem

```asm
// === 08686f1e cUserHistoryLog::DeleteInvaildItem  [0x08686f1e-0x8686f57] ===
 8686f1e:	55                   	push   %ebp
 8686f1f:	89 e5                	mov    %esp,%ebp
 8686f21:	83 ec 28             	sub    $0x28,%esp
 8686f24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686f27:	89 04 24             	mov    %eax,(%esp)
 8686f2a:	e8 c1 f5 07 00       	call   87064f0 <_ZNKSs5c_strEv>
 8686f2f:	8b 55 08             	mov    0x8(%ebp),%edx
 8686f32:	8b 12                	mov    (%edx),%edx
 8686f34:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686f37:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686f3b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686f3e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686f42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8686f46:	c7 44 24 04 ac 10 cf 	movl   $0x8cf10ac,0x4(%esp)
 8686f4d:	08 
 8686f4e:	89 14 24             	mov    %edx,(%esp)
 8686f51:	e8 a8 59 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686f56:	c9                   	leave
 8686f57:	c3                   	ret

```

```c
// cUserHistoryLog::DeleteInvaildItem @ 0x8686f1e

/* cUserHistoryLog::DeleteInvaildItem(std::string const&, int, int) */

void __thiscall
cUserHistoryLog::DeleteInvaildItem(cUserHistoryLog *this,string *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = std::string::c_str((string *)param_1);
  CUser::LogHistory(*(CUser **)this,"DeleteInvaildItem, %s, %d, %d",uVar1,param_2,param_3);
  return;
}

```

---

## DiePvP

```asm
// === 08686490 cUserHistoryLog::DiePvP  [0x08686490-0x86864e5] ===
 8686490:	55                   	push   %ebp
 8686491:	89 e5                	mov    %esp,%ebp
 8686493:	83 ec 38             	sub    $0x38,%esp
 8686496:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686499:	8b 45 08             	mov    0x8(%ebp),%eax
 868649c:	8b 00                	mov    (%eax),%eax
 868649e:	8b 4d 28             	mov    0x28(%ebp),%ecx
 86864a1:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 86864a5:	8b 4d 24             	mov    0x24(%ebp),%ecx
 86864a8:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 86864ac:	8b 4d 20             	mov    0x20(%ebp),%ecx
 86864af:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 86864b3:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86864b6:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 86864ba:	8b 4d 18             	mov    0x18(%ebp),%ecx
 86864bd:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86864c1:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86864c4:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86864c8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86864cb:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86864cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 86864d3:	c7 44 24 04 58 0d cf 	movl   $0x8cf0d58,0x4(%esp)
 86864da:	08 
 86864db:	89 04 24             	mov    %eax,(%esp)
 86864de:	e8 1b 64 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86864e3:	c9                   	leave
 86864e4:	c3                   	ret
 86864e5:	90                   	nop

```

```c
// cUserHistoryLog::DiePvP @ 0x8686490

/* cUserHistoryLog::DiePvP(ENUM_PVP_HISTORY_REASON, unsigned int, unsigned int, int, int, int, int,
   char const*) */

void __thiscall
cUserHistoryLog::DiePvP
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d,%u,%u,%d,%d,%d,%d,\"%s\"",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9);
  return;
}

```

---

## DungeonClearInfo

```asm
// === 08684a6e cUserHistoryLog::DungeonClearInfo  [0x08684a6e-0x8684ac3] ===
 8684a6e:	55                   	push   %ebp
 8684a6f:	89 e5                	mov    %esp,%ebp
 8684a71:	83 ec 38             	sub    $0x38,%esp
 8684a74:	8b 55 20             	mov    0x20(%ebp),%edx
 8684a77:	8b 45 08             	mov    0x8(%ebp),%eax
 8684a7a:	8b 00                	mov    (%eax),%eax
 8684a7c:	8b 4d 28             	mov    0x28(%ebp),%ecx
 8684a7f:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8684a83:	8b 4d 24             	mov    0x24(%ebp),%ecx
 8684a86:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8684a8a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8684a8e:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8684a91:	89 54 24 18          	mov    %edx,0x18(%esp)
 8684a95:	8b 55 10             	mov    0x10(%ebp),%edx
 8684a98:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684a9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684a9f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684aa3:	8b 55 18             	mov    0x18(%ebp),%edx
 8684aa6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684aaa:	8b 55 14             	mov    0x14(%ebp),%edx
 8684aad:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684ab1:	c7 44 24 04 3c 07 cf 	movl   $0x8cf073c,0x4(%esp)
 8684ab8:	08 
 8684ab9:	89 04 24             	mov    %eax,(%esp)
 8684abc:	e8 3d 7e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684ac1:	c9                   	leave
 8684ac2:	c3                   	ret
 8684ac3:	90                   	nop

```

```c
// cUserHistoryLog::DungeonClearInfo @ 0x8684a6e

/* cUserHistoryLog::DungeonClearInfo(int, long, int, int, int, ENUM_DUNGEON_MODE, char const*, int)
    */

void __thiscall
cUserHistoryLog::DungeonClearInfo
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  CUser::LogHistory(*(CUser **)this,"AdvanceDungeonClearInfo,%d,%d,%d,%d,%d,%d,%s,%d",param_3,
                    param_4,param_1,param_2,param_5,param_7,param_8,param_9);
  return;
}

```

---

## DungeonClearInfo_08684ac4

```asm
// === 08684ac4 cUserHistoryLog::DungeonClearInfo  [0x08684ac4-0x8684aef] ===
 8684ac4:	55                   	push   %ebp
 8684ac5:	89 e5                	mov    %esp,%ebp
 8684ac7:	83 ec 18             	sub    $0x18,%esp
 8684aca:	8b 45 08             	mov    0x8(%ebp),%eax
 8684acd:	8b 00                	mov    (%eax),%eax
 8684acf:	8b 55 10             	mov    0x10(%ebp),%edx
 8684ad2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684ad6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684ad9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684add:	c7 44 24 04 6c 07 cf 	movl   $0x8cf076c,0x4(%esp)
 8684ae4:	08 
 8684ae5:	89 04 24             	mov    %eax,(%esp)
 8684ae8:	e8 11 7e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684aed:	c9                   	leave
 8684aee:	c3                   	ret
 8684aef:	90                   	nop

```

```c
// cUserHistoryLog::DungeonClearInfo @ 0x8684ac4

/* cUserHistoryLog::DungeonClearInfo(int, long) */

void __thiscall cUserHistoryLog::DungeonClearInfo(cUserHistoryLog *this,int param_1,long param_2)

{
  CUser::LogHistory(*(CUser **)this,"DungeonClearInfo,%d,%d",param_1,param_2);
  return;
}

```

---

## Enchant3rdChronicleItem

```asm
// === 08684c28 cUserHistoryLog::Enchant3rdChronicleItem  [0x08684c28-0x8684c9f] ===
 8684c28:	55                   	push   %ebp
 8684c29:	89 e5                	mov    %esp,%ebp
 8684c2b:	83 ec 38             	sub    $0x38,%esp
 8684c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684c31:	88 45 f4             	mov    %al,-0xc(%ebp)
 8684c34:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8684c38:	74 33                	je     8684c6d <_ZN15cUserHistoryLog23Enchant3rdChronicleItemEbiiii+0x45>
 8684c3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8684c3d:	8b 00                	mov    (%eax),%eax
 8684c3f:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8684c42:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684c46:	8b 55 18             	mov    0x18(%ebp),%edx
 8684c49:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684c4d:	8b 55 14             	mov    0x14(%ebp),%edx
 8684c50:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684c54:	8b 55 10             	mov    0x10(%ebp),%edx
 8684c57:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684c5b:	c7 44 24 04 dc 07 cf 	movl   $0x8cf07dc,0x4(%esp)
 8684c62:	08 
 8684c63:	89 04 24             	mov    %eax,(%esp)
 8684c66:	e8 93 7c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684c6b:	eb 31                	jmp    8684c9e <_ZN15cUserHistoryLog23Enchant3rdChronicleItemEbiiii+0x76>
 8684c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8684c70:	8b 00                	mov    (%eax),%eax
 8684c72:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8684c75:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684c79:	8b 55 18             	mov    0x18(%ebp),%edx
 8684c7c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684c80:	8b 55 14             	mov    0x14(%ebp),%edx
 8684c83:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684c87:	8b 55 10             	mov    0x10(%ebp),%edx
 8684c8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684c8e:	c7 44 24 04 f4 07 cf 	movl   $0x8cf07f4,0x4(%esp)
 8684c95:	08 
 8684c96:	89 04 24             	mov    %eax,(%esp)
 8684c99:	e8 60 7c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684c9e:	c9                   	leave
 8684c9f:	c3                   	ret

```

```c
// cUserHistoryLog::Enchant3rdChronicleItem @ 0x8684c28

/* cUserHistoryLog::Enchant3rdChronicleItem(bool, int, int, int, int) */

void __thiscall
cUserHistoryLog::Enchant3rdChronicleItem
          (cUserHistoryLog *this,bool param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_1) {
    CUser::LogHistory(*(CUser **)this,"3rdEnchant+,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"3rdEnchant-,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  }
  return;
}

```

---

## EnchantItem

```asm
// === 08684d74 cUserHistoryLog::EnchantItem  [0x08684d74-0x8684df9] ===
 8684d74:	55                   	push   %ebp
 8684d75:	89 e5                	mov    %esp,%ebp
 8684d77:	83 ec 38             	sub    $0x38,%esp
 8684d7a:	8b 45 18             	mov    0x18(%ebp),%eax
 8684d7d:	88 45 f4             	mov    %al,-0xc(%ebp)
 8684d80:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8684d84:	74 3a                	je     8684dc0 <_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_+0x4c>
 8684d86:	8b 45 08             	mov    0x8(%ebp),%eax
 8684d89:	8b 00                	mov    (%eax),%eax
 8684d8b:	8b 55 20             	mov    0x20(%ebp),%edx
 8684d8e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8684d92:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8684d95:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684d99:	8b 55 14             	mov    0x14(%ebp),%edx
 8684d9c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684da0:	8b 55 10             	mov    0x10(%ebp),%edx
 8684da3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684da7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684daa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684dae:	c7 44 24 04 64 08 cf 	movl   $0x8cf0864,0x4(%esp)
 8684db5:	08 
 8684db6:	89 04 24             	mov    %eax,(%esp)
 8684db9:	e8 40 7b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684dbe:	eb 38                	jmp    8684df8 <_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_+0x84>
 8684dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8684dc3:	8b 00                	mov    (%eax),%eax
 8684dc5:	8b 55 20             	mov    0x20(%ebp),%edx
 8684dc8:	89 54 24 18          	mov    %edx,0x18(%esp)
 8684dcc:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8684dcf:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684dd3:	8b 55 14             	mov    0x14(%ebp),%edx
 8684dd6:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684dda:	8b 55 10             	mov    0x10(%ebp),%edx
 8684ddd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684de1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684de4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684de8:	c7 44 24 04 80 08 cf 	movl   $0x8cf0880,0x4(%esp)
 8684def:	08 
 8684df0:	89 04 24             	mov    %eax,(%esp)
 8684df3:	e8 06 7b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684df8:	c9                   	leave
 8684df9:	c3                   	ret

```

```c
// cUserHistoryLog::EnchantItem @ 0x8684d74

/* cUserHistoryLog::EnchantItem(int, int, int, bool, char const*, char const*) */

void __thiscall
cUserHistoryLog::EnchantItem
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,bool param_4,char *param_5,
          char *param_6)

{
  if (param_4) {
    CUser::LogHistory(*(CUser **)this,"Enchant+,%d,%d,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                      param_5,param_6);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Enchant-,%d,%d,%d,\"%s\",\"%s\"",param_1,param_2,param_3,
                      param_5,param_6);
  }
  return;
}

```

---

## EndPvP

```asm
// === 0868642e cUserHistoryLog::EndPvP  [0x0868642e-0x868646b] ===
 868642e:	55                   	push   %ebp
 868642f:	89 e5                	mov    %esp,%ebp
 8686431:	53                   	push   %ebx
 8686432:	83 ec 34             	sub    $0x34,%esp
 8686435:	8b 45 10             	mov    0x10(%ebp),%eax
 8686438:	88 45 f4             	mov    %al,-0xc(%ebp)
 868643b:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
 868643f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686442:	8b 45 08             	mov    0x8(%ebp),%eax
 8686445:	8b 00                	mov    (%eax),%eax
 8686447:	8b 5d 14             	mov    0x14(%ebp),%ebx
 868644a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 868644e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686452:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686456:	c7 44 24 04 44 0d cf 	movl   $0x8cf0d44,0x4(%esp)
 868645d:	08 
 868645e:	89 04 24             	mov    %eax,(%esp)
 8686461:	e8 98 64 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686466:	83 c4 34             	add    $0x34,%esp
 8686469:	5b                   	pop    %ebx
 868646a:	5d                   	pop    %ebp
 868646b:	c3                   	ret

```

```c
// cUserHistoryLog::EndPvP @ 0x868642e

/* cUserHistoryLog::EndPvP(ENUM_PVP_HISTORY_REASON, bool, unsigned int) */

void __thiscall
cUserHistoryLog::EndPvP(cUserHistoryLog *this,undefined4 param_2,uint param_3,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d,%d,%u",param_2,param_3 & 0xff,param_4);
  return;
}

```

---

## EndRidable

```asm
// === 0868695c cUserHistoryLog::EndRidable  [0x0868695c-0x868698f] ===
 868695c:	55                   	push   %ebp
 868695d:	89 e5                	mov    %esp,%ebp
 868695f:	83 ec 28             	sub    $0x28,%esp
 8686962:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686965:	8b 45 08             	mov    0x8(%ebp),%eax
 8686968:	8b 00                	mov    (%eax),%eax
 868696a:	89 54 24 10          	mov    %edx,0x10(%esp)
 868696e:	8b 55 10             	mov    0x10(%ebp),%edx
 8686971:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686975:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 868697c:	00 
 868697d:	c7 44 24 04 78 0e cf 	movl   $0x8cf0e78,0x4(%esp)
 8686984:	08 
 8686985:	89 04 24             	mov    %eax,(%esp)
 8686988:	e8 71 5f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868698d:	c9                   	leave
 868698e:	c3                   	ret
 868698f:	90                   	nop

```

```c
// cUserHistoryLog::EndRidable @ 0x868695c

/* cUserHistoryLog::EndRidable(cUserHistoryLog::eRidableType, int) */

void __thiscall
cUserHistoryLog::EndRidable(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Transform,%d,%d,%d",0,param_3,param_2);
  return;
}

```

---

## EnterDungeon

```asm
// === 0868491a cUserHistoryLog::EnterDungeon  [0x0868491a-0x8684967] ===
 868491a:	55                   	push   %ebp
 868491b:	89 e5                	mov    %esp,%ebp
 868491d:	83 ec 38             	sub    $0x38,%esp
 8684920:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8684923:	88 45 f4             	mov    %al,-0xc(%ebp)
 8684926:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 868492a:	8b 45 08             	mov    0x8(%ebp),%eax
 868492d:	8b 00                	mov    (%eax),%eax
 868492f:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8684932:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8684936:	89 54 24 18          	mov    %edx,0x18(%esp)
 868493a:	8b 55 18             	mov    0x18(%ebp),%edx
 868493d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684941:	8b 55 14             	mov    0x14(%ebp),%edx
 8684944:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684948:	8b 55 10             	mov    0x10(%ebp),%edx
 868494b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868494f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684952:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684956:	c7 44 24 04 9c 06 cf 	movl   $0x8cf069c,0x4(%esp)
 868495d:	08 
 868495e:	89 04 24             	mov    %eax,(%esp)
 8684961:	e8 98 7f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684966:	c9                   	leave
 8684967:	c3                   	ret

```

```c
// cUserHistoryLog::EnterDungeon @ 0x868491a

/* cUserHistoryLog::EnterDungeon(int, int, int, char const*, char, int) */

void __thiscall
cUserHistoryLog::EnterDungeon
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,char *param_4,char param_5,
          int param_6)

{
  CUser::LogHistory(*(CUser **)this,"AdvanceDungeonEnter,%d,%d,%d,%s,%d,%d",param_1,param_2,param_3,
                    param_4,(int)param_5,param_6);
  return;
}

```

---

## EnterDungeon_086849a2

```asm
// === 086849a2 cUserHistoryLog::EnterDungeon  [0x086849a2-0x86849db] ===
 86849a2:	55                   	push   %ebp
 86849a3:	89 e5                	mov    %esp,%ebp
 86849a5:	83 ec 28             	sub    $0x28,%esp
 86849a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86849ab:	8b 00                	mov    (%eax),%eax
 86849ad:	8b 55 14             	mov    0x14(%ebp),%edx
 86849b0:	89 54 24 14          	mov    %edx,0x14(%esp)
 86849b4:	8b 55 18             	mov    0x18(%ebp),%edx
 86849b7:	89 54 24 10          	mov    %edx,0x10(%esp)
 86849bb:	8b 55 10             	mov    0x10(%ebp),%edx
 86849be:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86849c2:	8b 55 0c             	mov    0xc(%ebp),%edx
 86849c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 86849c9:	c7 44 24 04 db 06 cf 	movl   $0x8cf06db,0x4(%esp)
 86849d0:	08 
 86849d1:	89 04 24             	mov    %eax,(%esp)
 86849d4:	e8 25 7f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86849d9:	c9                   	leave
 86849da:	c3                   	ret
 86849db:	90                   	nop

```

```c
// cUserHistoryLog::EnterDungeon @ 0x86849a2

/* cUserHistoryLog::EnterDungeon(char const*, int, char const*, int) */

void __thiscall
cUserHistoryLog::EnterDungeon
          (cUserHistoryLog *this,char *param_1,int param_2,char *param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"DungeonEnter,\"%s\",%d,%d,%s",param_1,param_2,param_4,param_3);
  return;
}

```

---

## EnterDungeon_08684a16

```asm
// === 08684a16 cUserHistoryLog::EnterDungeon  [0x08684a16-0x8684a41] ===
 8684a16:	55                   	push   %ebp
 8684a17:	89 e5                	mov    %esp,%ebp
 8684a19:	83 ec 18             	sub    $0x18,%esp
 8684a1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8684a1f:	8b 00                	mov    (%eax),%eax
 8684a21:	8b 55 10             	mov    0x10(%ebp),%edx
 8684a24:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684a28:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684a2b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684a2f:	c7 44 24 04 11 07 cf 	movl   $0x8cf0711,0x4(%esp)
 8684a36:	08 
 8684a37:	89 04 24             	mov    %eax,(%esp)
 8684a3a:	e8 bf 7e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684a3f:	c9                   	leave
 8684a40:	c3                   	ret
 8684a41:	90                   	nop

```

```c
// cUserHistoryLog::EnterDungeon @ 0x8684a16

/* cUserHistoryLog::EnterDungeon(char const*, int) */

void __thiscall cUserHistoryLog::EnterDungeon(cUserHistoryLog *this,char *param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"DungeonEnter,\"%s\",%d",param_1,param_2);
  return;
}

```

---

## EventCoinAdd

```asm
// === 08683c58 cUserHistoryLog::EventCoinAdd  [0x08683c58-0x8683c89] ===
 8683c58:	55                   	push   %ebp
 8683c59:	89 e5                	mov    %esp,%ebp
 8683c5b:	83 ec 28             	sub    $0x28,%esp
 8683c5e:	8b 55 14             	mov    0x14(%ebp),%edx
 8683c61:	8b 45 08             	mov    0x8(%ebp),%eax
 8683c64:	8b 00                	mov    (%eax),%eax
 8683c66:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683c6a:	8b 55 10             	mov    0x10(%ebp),%edx
 8683c6d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683c71:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683c74:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683c78:	c7 44 24 04 63 04 cf 	movl   $0x8cf0463,0x4(%esp)
 8683c7f:	08 
 8683c80:	89 04 24             	mov    %eax,(%esp)
 8683c83:	e8 76 8c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683c88:	c9                   	leave
 8683c89:	c3                   	ret

```

```c
// cUserHistoryLog::EventCoinAdd @ 0x8683c58

/* cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason) */

void __thiscall
cUserHistoryLog::EventCoinAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"ECoin+,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## EventCoinSub

```asm
// === 08683c8a cUserHistoryLog::EventCoinSub  [0x08683c8a-0x8683cbb] ===
 8683c8a:	55                   	push   %ebp
 8683c8b:	89 e5                	mov    %esp,%ebp
 8683c8d:	83 ec 28             	sub    $0x28,%esp
 8683c90:	8b 55 14             	mov    0x14(%ebp),%edx
 8683c93:	8b 45 08             	mov    0x8(%ebp),%eax
 8683c96:	8b 00                	mov    (%eax),%eax
 8683c98:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683c9c:	8b 55 10             	mov    0x10(%ebp),%edx
 8683c9f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683ca3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683ca6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683caa:	c7 44 24 04 73 04 cf 	movl   $0x8cf0473,0x4(%esp)
 8683cb1:	08 
 8683cb2:	89 04 24             	mov    %eax,(%esp)
 8683cb5:	e8 44 8c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683cba:	c9                   	leave
 8683cbb:	c3                   	ret

```

```c
// cUserHistoryLog::EventCoinSub @ 0x8683c8a

/* cUserHistoryLog::EventCoinSub(int, int, eCoinSubReason) */

void __thiscall
cUserHistoryLog::EventCoinSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"ECoin-,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## ExpAdd

```asm
// === 08684bd0 cUserHistoryLog::ExpAdd  [0x08684bd0-0x8684c27] ===
 8684bd0:	55                   	push   %ebp
 8684bd1:	89 e5                	mov    %esp,%ebp
 8684bd3:	53                   	push   %ebx
 8684bd4:	83 ec 24             	sub    $0x24,%esp
 8684bd7:	8b 45 14             	mov    0x14(%ebp),%eax
 8684bda:	83 f8 0c             	cmp    $0xc,%eax
 8684bdd:	77 16                	ja     8684bf5 <_ZN15cUserHistoryLog6ExpAddEii13eExpAddReasoni+0x25>
 8684bdf:	ba 01 00 00 00       	mov    $0x1,%edx
 8684be4:	89 d3                	mov    %edx,%ebx
 8684be6:	89 c1                	mov    %eax,%ecx
 8684be8:	d3 e3                	shl    %cl,%ebx
 8684bea:	89 d8                	mov    %ebx,%eax
 8684bec:	25 92 18 00 00       	and    $0x1892,%eax
 8684bf1:	85 c0                	test   %eax,%eax
 8684bf3:	75 2c                	jne    8684c21 <_ZN15cUserHistoryLog6ExpAddEii13eExpAddReasoni+0x51>
 8684bf5:	8b 55 14             	mov    0x14(%ebp),%edx
 8684bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8684bfb:	8b 00                	mov    (%eax),%eax
 8684bfd:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684c01:	8b 55 10             	mov    0x10(%ebp),%edx
 8684c04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684c08:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684c0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684c0f:	c7 44 24 04 ce 07 cf 	movl   $0x8cf07ce,0x4(%esp)
 8684c16:	08 
 8684c17:	89 04 24             	mov    %eax,(%esp)
 8684c1a:	e8 df 7c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684c1f:	eb 01                	jmp    8684c22 <_ZN15cUserHistoryLog6ExpAddEii13eExpAddReasoni+0x52>
 8684c21:	90                   	nop
 8684c22:	83 c4 24             	add    $0x24,%esp
 8684c25:	5b                   	pop    %ebx
 8684c26:	5d                   	pop    %ebp
 8684c27:	c3                   	ret

```

```c
// cUserHistoryLog::ExpAdd @ 0x8684bd0

/* cUserHistoryLog::ExpAdd(int, int, eExpAddReason, int) */

void cUserHistoryLog::ExpAdd(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if ((0xc < param_4) || ((1 << ((byte)param_4 & 0x1f) & 0x1892U) == 0)) {
    CUser::LogHistory((CUser *)*param_1,"Exp+,%d,%d,%d",param_2,param_3,param_4);
  }
  return;
}

```

---

## ExpandInventory

```asm
// === 08683cbc cUserHistoryLog::ExpandInventory  [0x08683cbc-0x8683ced] ===
 8683cbc:	55                   	push   %ebp
 8683cbd:	89 e5                	mov    %esp,%ebp
 8683cbf:	83 ec 28             	sub    $0x28,%esp
 8683cc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8683cc5:	8b 00                	mov    (%eax),%eax
 8683cc7:	8b 55 14             	mov    0x14(%ebp),%edx
 8683cca:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683cce:	8b 55 10             	mov    0x10(%ebp),%edx
 8683cd1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683cd5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683cd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683cdc:	c7 44 24 04 83 04 cf 	movl   $0x8cf0483,0x4(%esp)
 8683ce3:	08 
 8683ce4:	89 04 24             	mov    %eax,(%esp)
 8683ce7:	e8 12 8c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683cec:	c9                   	leave
 8683ced:	c3                   	ret

```

```c
// cUserHistoryLog::ExpandInventory @ 0x8683cbc

/* cUserHistoryLog::ExpandInventory(int, int, int) */

void __thiscall
cUserHistoryLog::ExpandInventory(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"ExpandInventory+,%d,%d,%d",param_1,param_2,param_3);
  return;
}

```

---

## FPAdd

```asm
// === 08684b5c cUserHistoryLog::FPAdd  [0x08684b5c-0x8684b95] ===
 8684b5c:	55                   	push   %ebp
 8684b5d:	89 e5                	mov    %esp,%ebp
 8684b5f:	83 ec 28             	sub    $0x28,%esp
 8684b62:	8b 55 18             	mov    0x18(%ebp),%edx
 8684b65:	8b 45 08             	mov    0x8(%ebp),%eax
 8684b68:	8b 00                	mov    (%eax),%eax
 8684b6a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684b6e:	8b 55 14             	mov    0x14(%ebp),%edx
 8684b71:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684b75:	8b 55 10             	mov    0x10(%ebp),%edx
 8684b78:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684b7c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684b7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684b83:	c7 44 24 04 ae 07 cf 	movl   $0x8cf07ae,0x4(%esp)
 8684b8a:	08 
 8684b8b:	89 04 24             	mov    %eax,(%esp)
 8684b8e:	e8 6b 7d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684b93:	c9                   	leave
 8684b94:	c3                   	ret
 8684b95:	90                   	nop

```

```c
// cUserHistoryLog::FPAdd @ 0x8684b5c

/* cUserHistoryLog::FPAdd(int, int, int, eFPAddReason) */

void __thiscall
cUserHistoryLog::FPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"FP+,%d,%d,%d,%d",param_1,param_2,param_3,param_5);
  return;
}

```

---

## FPSub

```asm
// === 08684b96 cUserHistoryLog::FPSub  [0x08684b96-0x8684bcf] ===
 8684b96:	55                   	push   %ebp
 8684b97:	89 e5                	mov    %esp,%ebp
 8684b99:	83 ec 28             	sub    $0x28,%esp
 8684b9c:	8b 55 18             	mov    0x18(%ebp),%edx
 8684b9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8684ba2:	8b 00                	mov    (%eax),%eax
 8684ba4:	89 54 24 14          	mov    %edx,0x14(%esp)
 8684ba8:	8b 55 14             	mov    0x14(%ebp),%edx
 8684bab:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684baf:	8b 55 10             	mov    0x10(%ebp),%edx
 8684bb2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684bb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684bb9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684bbd:	c7 44 24 04 be 07 cf 	movl   $0x8cf07be,0x4(%esp)
 8684bc4:	08 
 8684bc5:	89 04 24             	mov    %eax,(%esp)
 8684bc8:	e8 31 7d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684bcd:	c9                   	leave
 8684bce:	c3                   	ret
 8684bcf:	90                   	nop

```

```c
// cUserHistoryLog::FPSub @ 0x8684b96

/* cUserHistoryLog::FPSub(int, int, int, eFPSubReason) */

void __thiscall
cUserHistoryLog::FPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"FP-,%d,%d,%d,%d",param_1,param_2,param_3,param_5);
  return;
}

```

---

## FullIPCounterLog

```asm
// === 08685d54 cUserHistoryLog::FullIPCounterLog  [0x08685d54-0x8685d9b] ===
 8685d54:	55                   	push   %ebp
 8685d55:	89 e5                	mov    %esp,%ebp
 8685d57:	83 ec 28             	sub    $0x28,%esp
 8685d5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8685d5d:	8b 00                	mov    (%eax),%eax
 8685d5f:	8b 55 20             	mov    0x20(%ebp),%edx
 8685d62:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8685d66:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8685d69:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685d6d:	8b 55 18             	mov    0x18(%ebp),%edx
 8685d70:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685d74:	8b 55 14             	mov    0x14(%ebp),%edx
 8685d77:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685d7b:	8b 55 10             	mov    0x10(%ebp),%edx
 8685d7e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685d82:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685d85:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685d89:	c7 44 24 04 ba 0c cf 	movl   $0x8cf0cba,0x4(%esp)
 8685d90:	08 
 8685d91:	89 04 24             	mov    %eax,(%esp)
 8685d94:	e8 65 6b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685d99:	c9                   	leave
 8685d9a:	c3                   	ret
 8685d9b:	90                   	nop

```

```c
// cUserHistoryLog::FullIPCounterLog @ 0x8685d54

/* cUserHistoryLog::FullIPCounterLog(int, int, int, int, int, char*) */

void __thiscall
cUserHistoryLog::FullIPCounterLog
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          char *param_6)

{
  CUser::LogHistory(*(CUser **)this,"D_IPCount,%d,%d,%d,%d,%d,%s",param_1,param_2,param_3,param_4,
                    param_5,param_6);
  return;
}

```

---

## GiveupPvP

```asm
// === 0868646c cUserHistoryLog::GiveupPvP  [0x0868646c-0x868648f] ===
 868646c:	55                   	push   %ebp
 868646d:	89 e5                	mov    %esp,%ebp
 868646f:	83 ec 18             	sub    $0x18,%esp
 8686472:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686475:	8b 45 08             	mov    0x8(%ebp),%eax
 8686478:	8b 00                	mov    (%eax),%eax
 868647a:	89 54 24 08          	mov    %edx,0x8(%esp)
 868647e:	c7 44 24 04 51 0d cf 	movl   $0x8cf0d51,0x4(%esp)
 8686485:	08 
 8686486:	89 04 24             	mov    %eax,(%esp)
 8686489:	e8 70 64 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868648e:	c9                   	leave
 868648f:	c3                   	ret

```

```c
// cUserHistoryLog::GiveupPvP @ 0x868646c

/* cUserHistoryLog::GiveupPvP(ENUM_PVP_HISTORY_REASON) */

void __thiscall cUserHistoryLog::GiveupPvP(cUserHistoryLog *this,undefined4 param_2)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d",param_2);
  return;
}

```

---

## GuildAddExp

```asm
// === 08685bb8 cUserHistoryLog::GuildAddExp  [0x08685bb8-0x8685c4d] ===
 8685bb8:	55                   	push   %ebp
 8685bb9:	89 e5                	mov    %esp,%ebp
 8685bbb:	83 ec 78             	sub    $0x78,%esp
 8685bbe:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8685bc5:	e8 d4 60 a4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8685bca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8685bcd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8685bd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685bd4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8685bd7:	89 04 24             	mov    %eax,(%esp)
 8685bda:	e8 81 87 9f ff       	call   807e360 <localtime_r@plt>
 8685bdf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8685be2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685be5:	8b 40 14             	mov    0x14(%eax),%eax
 8685be8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8685beb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685bee:	8b 40 10             	mov    0x10(%eax),%eax
 8685bf1:	83 c0 01             	add    $0x1,%eax
 8685bf4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8685bf7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685bfa:	8b 40 0c             	mov    0xc(%eax),%eax
 8685bfd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8685c00:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8685c03:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 8685c09:	8b 45 08             	mov    0x8(%ebp),%eax
 8685c0c:	8b 00                	mov    (%eax),%eax
 8685c0e:	8b 55 18             	mov    0x18(%ebp),%edx
 8685c11:	89 54 24 20          	mov    %edx,0x20(%esp)
 8685c15:	8b 55 14             	mov    0x14(%ebp),%edx
 8685c18:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8685c1c:	8b 55 10             	mov    0x10(%ebp),%edx
 8685c1f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685c23:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685c26:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685c2a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8685c2d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685c31:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8685c34:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685c38:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8685c3c:	c7 44 24 04 48 0c cf 	movl   $0x8cf0c48,0x4(%esp)
 8685c43:	08 
 8685c44:	89 04 24             	mov    %eax,(%esp)
 8685c47:	e8 b2 6c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685c4c:	c9                   	leave
 8685c4d:	c3                   	ret

```

```c
// cUserHistoryLog::GuildAddExp @ 0x8685bb8

/* cUserHistoryLog::GuildAddExp(unsigned int, char const*, unsigned int, int) */

void __thiscall
cUserHistoryLog::GuildAddExp
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,int param_4)

{
  tm local_4c;
  time_t local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_year;
  local_14 = local_1c->tm_mon + 1;
  local_10 = local_1c->tm_mday;
  CUser::LogHistory(*(CUser **)this,"GuildAddExp,\"%d/%d/%d\",%d,\"%s\",%d,%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3,param_4);
  return;
}

```

---

## GuildCargo

```asm
// === 086864e6 cUserHistoryLog::GuildCargo  [0x086864e6-0x8686511] ===
 86864e6:	55                   	push   %ebp
 86864e7:	89 e5                	mov    %esp,%ebp
 86864e9:	83 ec 18             	sub    $0x18,%esp
 86864ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 86864ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86864f2:	8b 00                	mov    (%eax),%eax
 86864f4:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86864f7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86864fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 86864ff:	c7 44 24 04 76 0d cf 	movl   $0x8cf0d76,0x4(%esp)
 8686506:	08 
 8686507:	89 04 24             	mov    %eax,(%esp)
 868650a:	e8 ef 63 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868650f:	c9                   	leave
 8686510:	c3                   	ret
 8686511:	90                   	nop

```

```c
// cUserHistoryLog::GuildCargo @ 0x86864e6

/* cUserHistoryLog::GuildCargo(ENUM_GUILD_CARGO_HISTORY_REASON, int) */

void __thiscall
cUserHistoryLog::GuildCargo(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d",param_2,param_3);
  return;
}

```

---

## GuildCargoCheckPushItem

```asm
// === 0868659c cUserHistoryLog::GuildCargoCheckPushItem  [0x0868659c-0x86865e9] ===
 868659c:	55                   	push   %ebp
 868659d:	89 e5                	mov    %esp,%ebp
 868659f:	83 ec 38             	sub    $0x38,%esp
 86865a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 86865a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86865a8:	8b 00                	mov    (%eax),%eax
 86865aa:	8b 4d 24             	mov    0x24(%ebp),%ecx
 86865ad:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 86865b1:	8b 4d 20             	mov    0x20(%ebp),%ecx
 86865b4:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 86865b8:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86865bb:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 86865bf:	8b 4d 18             	mov    0x18(%ebp),%ecx
 86865c2:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86865c6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86865c9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86865cd:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86865d0:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86865d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 86865d8:	c7 44 24 04 9c 0d cf 	movl   $0x8cf0d9c,0x4(%esp)
 86865df:	08 
 86865e0:	89 04 24             	mov    %eax,(%esp)
 86865e3:	e8 16 63 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86865e8:	c9                   	leave
 86865e9:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoCheckPushItem @ 0x868659c

/* cUserHistoryLog::GuildCargoCheckPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int,
   int, int) */

void __thiscall
cUserHistoryLog::GuildCargoCheckPushItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}

```

---

## GuildCargoCheckPushItemResult

```asm
// === 086865ea cUserHistoryLog::GuildCargoCheckPushItemResult  [0x086865ea-0x8686637] ===
 86865ea:	55                   	push   %ebp
 86865eb:	89 e5                	mov    %esp,%ebp
 86865ed:	83 ec 38             	sub    $0x38,%esp
 86865f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 86865f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86865f6:	8b 00                	mov    (%eax),%eax
 86865f8:	8b 4d 24             	mov    0x24(%ebp),%ecx
 86865fb:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 86865ff:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8686602:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8686606:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8686609:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 868660d:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8686610:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8686614:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686617:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 868661b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 868661e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686622:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686626:	c7 44 24 04 9c 0d cf 	movl   $0x8cf0d9c,0x4(%esp)
 868662d:	08 
 868662e:	89 04 24             	mov    %eax,(%esp)
 8686631:	e8 c8 62 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686636:	c9                   	leave
 8686637:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoCheckPushItemResult @ 0x86865ea

/* cUserHistoryLog::GuildCargoCheckPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int,
   int, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoCheckPushItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}

```

---

## GuildCargoHistory

```asm
// === 08686544 cUserHistoryLog::GuildCargoHistory  [0x08686544-0x868656f] ===
 8686544:	55                   	push   %ebp
 8686545:	89 e5                	mov    %esp,%ebp
 8686547:	83 ec 18             	sub    $0x18,%esp
 868654a:	8b 55 0c             	mov    0xc(%ebp),%edx
 868654d:	8b 45 08             	mov    0x8(%ebp),%eax
 8686550:	8b 00                	mov    (%eax),%eax
 8686552:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686555:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686559:	89 54 24 08          	mov    %edx,0x8(%esp)
 868655d:	c7 44 24 04 76 0d cf 	movl   $0x8cf0d76,0x4(%esp)
 8686564:	08 
 8686565:	89 04 24             	mov    %eax,(%esp)
 8686568:	e8 91 63 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868656d:	c9                   	leave
 868656e:	c3                   	ret
 868656f:	90                   	nop

```

```c
// cUserHistoryLog::GuildCargoHistory @ 0x8686544

/* cUserHistoryLog::GuildCargoHistory(ENUM_GUILD_CARGO_HISTORY_REASON, int) */

void __thiscall
cUserHistoryLog::GuildCargoHistory(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d",param_2,param_3);
  return;
}

```

---

## GuildCargoHistoryResult

```asm
// === 08686570 cUserHistoryLog::GuildCargoHistoryResult  [0x08686570-0x868659b] ===
 8686570:	55                   	push   %ebp
 8686571:	89 e5                	mov    %esp,%ebp
 8686573:	83 ec 18             	sub    $0x18,%esp
 8686576:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686579:	8b 45 08             	mov    0x8(%ebp),%eax
 868657c:	8b 00                	mov    (%eax),%eax
 868657e:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686581:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686585:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686589:	c7 44 24 04 76 0d cf 	movl   $0x8cf0d76,0x4(%esp)
 8686590:	08 
 8686591:	89 04 24             	mov    %eax,(%esp)
 8686594:	e8 65 63 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686599:	c9                   	leave
 868659a:	c3                   	ret
 868659b:	90                   	nop

```

```c
// cUserHistoryLog::GuildCargoHistoryResult @ 0x8686570

/* cUserHistoryLog::GuildCargoHistoryResult(ENUM_GUILD_CARGO_HISTORY_REASON, int) */

void __thiscall
cUserHistoryLog::GuildCargoHistoryResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d",param_2,param_3);
  return;
}

```

---

## GuildCargoItemRecovery

```asm
// === 08686694 cUserHistoryLog::GuildCargoItemRecovery  [0x08686694-0x86866e9] ===
 8686694:	55                   	push   %ebp
 8686695:	89 e5                	mov    %esp,%ebp
 8686697:	83 ec 48             	sub    $0x48,%esp
 868669a:	8b 45 24             	mov    0x24(%ebp),%eax
 868669d:	88 45 f4             	mov    %al,-0xc(%ebp)
 86866a0:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
 86866a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86866a7:	8b 45 08             	mov    0x8(%ebp),%eax
 86866aa:	8b 00                	mov    (%eax),%eax
 86866ac:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 86866b0:	8b 4d 20             	mov    0x20(%ebp),%ecx
 86866b3:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 86866b7:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86866ba:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 86866be:	8b 4d 18             	mov    0x18(%ebp),%ecx
 86866c1:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86866c5:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86866c8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86866cc:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86866cf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86866d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 86866d7:	c7 44 24 04 9c 0d cf 	movl   $0x8cf0d9c,0x4(%esp)
 86866de:	08 
 86866df:	89 04 24             	mov    %eax,(%esp)
 86866e2:	e8 17 62 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86866e7:	c9                   	leave
 86866e8:	c3                   	ret
 86866e9:	90                   	nop

```

```c
// cUserHistoryLog::GuildCargoItemRecovery @ 0x8686694

/* cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int,
   unsigned char) */

void __thiscall
cUserHistoryLog::GuildCargoItemRecovery
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8 & 0xff);
  return;
}

```

---

## GuildCargoMoveItem

```asm
// === 086867ce cUserHistoryLog::GuildCargoMoveItem  [0x086867ce-0x86867ff] ===
 86867ce:	55                   	push   %ebp
 86867cf:	89 e5                	mov    %esp,%ebp
 86867d1:	83 ec 28             	sub    $0x28,%esp
 86867d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86867d7:	8b 45 08             	mov    0x8(%ebp),%eax
 86867da:	8b 00                	mov    (%eax),%eax
 86867dc:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86867df:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86867e3:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86867e6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86867ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 86867ee:	c7 44 24 04 87 0d cf 	movl   $0x8cf0d87,0x4(%esp)
 86867f5:	08 
 86867f6:	89 04 24             	mov    %eax,(%esp)
 86867f9:	e8 00 61 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86867fe:	c9                   	leave
 86867ff:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoMoveItem @ 0x86867ce

/* cUserHistoryLog::GuildCargoMoveItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoMoveItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d",param_2,param_3,param_4);
  return;
}

```

---

## GuildCargoMoveItemResult

```asm
// === 08686800 cUserHistoryLog::GuildCargoMoveItemResult  [0x08686800-0x8686839] ===
 8686800:	55                   	push   %ebp
 8686801:	89 e5                	mov    %esp,%ebp
 8686803:	83 ec 28             	sub    $0x28,%esp
 8686806:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686809:	8b 45 08             	mov    0x8(%ebp),%eax
 868680c:	8b 00                	mov    (%eax),%eax
 868680e:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8686811:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8686815:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686818:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 868681c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 868681f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686823:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686827:	c7 44 24 04 fc 0d cf 	movl   $0x8cf0dfc,0x4(%esp)
 868682e:	08 
 868682f:	89 04 24             	mov    %eax,(%esp)
 8686832:	e8 c7 60 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686837:	c9                   	leave
 8686838:	c3                   	ret
 8686839:	90                   	nop

```

```c
// cUserHistoryLog::GuildCargoMoveItemResult @ 0x8686800

/* cUserHistoryLog::GuildCargoMoveItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoMoveItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  return;
}

```

---

## GuildCargoPopItem

```asm
// === 086866ea cUserHistoryLog::GuildCargoPopItem  [0x086866ea-0x8686731] ===
 86866ea:	55                   	push   %ebp
 86866eb:	89 e5                	mov    %esp,%ebp
 86866ed:	83 ec 28             	sub    $0x28,%esp
 86866f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 86866f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86866f6:	8b 00                	mov    (%eax),%eax
 86866f8:	8b 4d 20             	mov    0x20(%ebp),%ecx
 86866fb:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 86866ff:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8686702:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686706:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8686709:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 868670d:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686710:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686714:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686717:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 868671b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868671f:	c7 44 24 04 df 0d cf 	movl   $0x8cf0ddf,0x4(%esp)
 8686726:	08 
 8686727:	89 04 24             	mov    %eax,(%esp)
 868672a:	e8 cf 61 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868672f:	c9                   	leave
 8686730:	c3                   	ret
 8686731:	90                   	nop

```

```c
// cUserHistoryLog::GuildCargoPopItem @ 0x86866ea

/* cUserHistoryLog::GuildCargoPopItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoPopItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,param_5,
                    param_6,param_7);
  return;
}

```

---

## GuildCargoPopItemResult

```asm
// === 08686780 cUserHistoryLog::GuildCargoPopItemResult  [0x08686780-0x86867cd] ===
 8686780:	55                   	push   %ebp
 8686781:	89 e5                	mov    %esp,%ebp
 8686783:	83 ec 38             	sub    $0x38,%esp
 8686786:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686789:	8b 45 08             	mov    0x8(%ebp),%eax
 868678c:	8b 00                	mov    (%eax),%eax
 868678e:	8b 4d 24             	mov    0x24(%ebp),%ecx
 8686791:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8686795:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8686798:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 868679c:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 868679f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 86867a3:	8b 4d 18             	mov    0x18(%ebp),%ecx
 86867a6:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86867aa:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86867ad:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86867b1:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86867b4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86867b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 86867bc:	c7 44 24 04 9c 0d cf 	movl   $0x8cf0d9c,0x4(%esp)
 86867c3:	08 
 86867c4:	89 04 24             	mov    %eax,(%esp)
 86867c7:	e8 32 61 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86867cc:	c9                   	leave
 86867cd:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoPopItemResult @ 0x8686780

/* cUserHistoryLog::GuildCargoPopItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int,
   int, int) */

void __thiscall
cUserHistoryLog::GuildCargoPopItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}

```

---

## GuildCargoPushItem

```asm
// === 08686638 cUserHistoryLog::GuildCargoPushItem  [0x08686638-0x8686693] ===
 8686638:	55                   	push   %ebp
 8686639:	89 e5                	mov    %esp,%ebp
 868663b:	83 ec 48             	sub    $0x48,%esp
 868663e:	8b 45 28             	mov    0x28(%ebp),%eax
 8686641:	88 45 f4             	mov    %al,-0xc(%ebp)
 8686644:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
 8686648:	8b 55 0c             	mov    0xc(%ebp),%edx
 868664b:	8b 45 08             	mov    0x8(%ebp),%eax
 868664e:	8b 00                	mov    (%eax),%eax
 8686650:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8686654:	8b 4d 24             	mov    0x24(%ebp),%ecx
 8686657:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 868665b:	8b 4d 20             	mov    0x20(%ebp),%ecx
 868665e:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8686662:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8686665:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686669:	8b 4d 18             	mov    0x18(%ebp),%ecx
 868666c:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8686670:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686673:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686677:	8b 4d 10             	mov    0x10(%ebp),%ecx
 868667a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 868667e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686682:	c7 44 24 04 bc 0d cf 	movl   $0x8cf0dbc,0x4(%esp)
 8686689:	08 
 868668a:	89 04 24             	mov    %eax,(%esp)
 868668d:	e8 6c 62 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686692:	c9                   	leave
 8686693:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoPushItem @ 0x8686638

/* cUserHistoryLog::GuildCargoPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int,
   int, unsigned char) */

void __thiscall
cUserHistoryLog::GuildCargoPushItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9 & 0xff);
  return;
}

```

---

## GuildCargoPushItemResult

```asm
// === 08686732 cUserHistoryLog::GuildCargoPushItemResult  [0x08686732-0x868677f] ===
 8686732:	55                   	push   %ebp
 8686733:	89 e5                	mov    %esp,%ebp
 8686735:	83 ec 38             	sub    $0x38,%esp
 8686738:	8b 55 0c             	mov    0xc(%ebp),%edx
 868673b:	8b 45 08             	mov    0x8(%ebp),%eax
 868673e:	8b 00                	mov    (%eax),%eax
 8686740:	8b 4d 24             	mov    0x24(%ebp),%ecx
 8686743:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8686747:	8b 4d 20             	mov    0x20(%ebp),%ecx
 868674a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 868674e:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8686751:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686755:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8686758:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 868675c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 868675f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686763:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686766:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 868676a:	89 54 24 08          	mov    %edx,0x8(%esp)
 868676e:	c7 44 24 04 9c 0d cf 	movl   $0x8cf0d9c,0x4(%esp)
 8686775:	08 
 8686776:	89 04 24             	mov    %eax,(%esp)
 8686779:	e8 80 61 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868677e:	c9                   	leave
 868677f:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoPushItemResult @ 0x8686732

/* cUserHistoryLog::GuildCargoPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int,
   int, int) */

void __thiscall
cUserHistoryLog::GuildCargoPushItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}

```

---

## GuildCargoResult

```asm
// === 08686512 cUserHistoryLog::GuildCargoResult  [0x08686512-0x8686543] ===
 8686512:	55                   	push   %ebp
 8686513:	89 e5                	mov    %esp,%ebp
 8686515:	83 ec 28             	sub    $0x28,%esp
 8686518:	8b 55 0c             	mov    0xc(%ebp),%edx
 868651b:	8b 45 08             	mov    0x8(%ebp),%eax
 868651e:	8b 00                	mov    (%eax),%eax
 8686520:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686523:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686527:	8b 4d 10             	mov    0x10(%ebp),%ecx
 868652a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 868652e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686532:	c7 44 24 04 87 0d cf 	movl   $0x8cf0d87,0x4(%esp)
 8686539:	08 
 868653a:	89 04 24             	mov    %eax,(%esp)
 868653d:	e8 bc 63 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686542:	c9                   	leave
 8686543:	c3                   	ret

```

```c
// cUserHistoryLog::GuildCargoResult @ 0x8686512

/* cUserHistoryLog::GuildCargoResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d",param_2,param_3,param_4);
  return;
}

```

---

## GuildChangeGrade

```asm
// === 08685c4e cUserHistoryLog::GuildChangeGrade  [0x08685c4e-0x8685d0b] ===
 8685c4e:	55                   	push   %ebp
 8685c4f:	89 e5                	mov    %esp,%ebp
 8685c51:	53                   	push   %ebx
 8685c52:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8685c58:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8685c5b:	8b 45 20             	mov    0x20(%ebp),%eax
 8685c5e:	88 55 b4             	mov    %dl,-0x4c(%ebp)
 8685c61:	88 45 b0             	mov    %al,-0x50(%ebp)
 8685c64:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8685c6b:	e8 2e 60 a4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8685c70:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8685c73:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8685c76:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685c7a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8685c7d:	89 04 24             	mov    %eax,(%esp)
 8685c80:	e8 db 86 9f ff       	call   807e360 <localtime_r@plt>
 8685c85:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8685c88:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685c8b:	8b 40 14             	mov    0x14(%eax),%eax
 8685c8e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8685c91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685c94:	8b 40 10             	mov    0x10(%eax),%eax
 8685c97:	83 c0 01             	add    $0x1,%eax
 8685c9a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8685c9d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685ca0:	8b 40 0c             	mov    0xc(%eax),%eax
 8685ca3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8685ca6:	0f b6 4d b0          	movzbl -0x50(%ebp),%ecx
 8685caa:	0f b6 55 b4          	movzbl -0x4c(%ebp),%edx
 8685cae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8685cb1:	8d 98 6c 07 00 00    	lea    0x76c(%eax),%ebx
 8685cb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8685cba:	8b 00                	mov    (%eax),%eax
 8685cbc:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 8685cc0:	89 54 24 24          	mov    %edx,0x24(%esp)
 8685cc4:	8b 55 18             	mov    0x18(%ebp),%edx
 8685cc7:	89 54 24 20          	mov    %edx,0x20(%esp)
 8685ccb:	8b 55 14             	mov    0x14(%ebp),%edx
 8685cce:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8685cd2:	8b 55 10             	mov    0x10(%ebp),%edx
 8685cd5:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685cd9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685cdc:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685ce0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8685ce3:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685ce7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8685cea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685cee:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8685cf2:	c7 44 24 04 70 0c cf 	movl   $0x8cf0c70,0x4(%esp)
 8685cf9:	08 
 8685cfa:	89 04 24             	mov    %eax,(%esp)
 8685cfd:	e8 fc 6b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685d02:	81 c4 84 00 00 00    	add    $0x84,%esp
 8685d08:	5b                   	pop    %ebx
 8685d09:	5d                   	pop    %ebp
 8685d0a:	c3                   	ret
 8685d0b:	90                   	nop

```

```c
// cUserHistoryLog::GuildChangeGrade @ 0x8685c4e

/* cUserHistoryLog::GuildChangeGrade(unsigned int, char const*, unsigned int, unsigned int, unsigned
   char, unsigned char) */

void __thiscall
cUserHistoryLog::GuildChangeGrade
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,uint param_4,uchar param_5,
          uchar param_6)

{
  tm local_4c;
  time_t local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_year;
  local_14 = local_1c->tm_mon + 1;
  local_10 = local_1c->tm_mday;
  CUser::LogHistory(*(CUser **)this,"GuildChangeGrade,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d,%d",
                    local_18 + 0x76c,local_14,local_10,param_1,param_2,param_3,param_4,(uint)param_5
                    ,(uint)param_6);
  return;
}

```

---

## GuildCreate

```asm
// === 08685978 cUserHistoryLog::GuildCreate  [0x08685978-0x8685a07] ===
 8685978:	55                   	push   %ebp
 8685979:	89 e5                	mov    %esp,%ebp
 868597b:	83 ec 68             	sub    $0x68,%esp
 868597e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8685985:	e8 14 63 a4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 868598a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 868598d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8685990:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685994:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8685997:	89 04 24             	mov    %eax,(%esp)
 868599a:	e8 c1 89 9f ff       	call   807e360 <localtime_r@plt>
 868599f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86859a2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86859a5:	8b 40 14             	mov    0x14(%eax),%eax
 86859a8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86859ab:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86859ae:	8b 40 10             	mov    0x10(%eax),%eax
 86859b1:	83 c0 01             	add    $0x1,%eax
 86859b4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86859b7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86859ba:	8b 40 0c             	mov    0xc(%eax),%eax
 86859bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86859c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86859c3:	8d 88 6c 07 00 00    	lea    0x76c(%eax),%ecx
 86859c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86859cc:	8b 00                	mov    (%eax),%eax
 86859ce:	8b 55 14             	mov    0x14(%ebp),%edx
 86859d1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86859d5:	8b 55 10             	mov    0x10(%ebp),%edx
 86859d8:	89 54 24 18          	mov    %edx,0x18(%esp)
 86859dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 86859df:	89 54 24 14          	mov    %edx,0x14(%esp)
 86859e3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86859e6:	89 54 24 10          	mov    %edx,0x10(%esp)
 86859ea:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86859ed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86859f1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86859f5:	c7 44 24 04 bc 0b cf 	movl   $0x8cf0bbc,0x4(%esp)
 86859fc:	08 
 86859fd:	89 04 24             	mov    %eax,(%esp)
 8685a00:	e8 f9 6e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685a05:	c9                   	leave
 8685a06:	c3                   	ret
 8685a07:	90                   	nop

```

```c
// cUserHistoryLog::GuildCreate @ 0x8685978

/* cUserHistoryLog::GuildCreate(unsigned int, char const*, unsigned int) */

void __thiscall
cUserHistoryLog::GuildCreate(cUserHistoryLog *this,uint param_1,char *param_2,uint param_3)

{
  tm local_4c;
  time_t local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_year;
  local_14 = local_1c->tm_mon + 1;
  local_10 = local_1c->tm_mday;
  CUser::LogHistory(*(CUser **)this,"GuildCreate,\"%d/%d/%d\",%d,\"%s\",%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3);
  return;
}

```

---

## GuildJoin

```asm
// === 08685a48 cUserHistoryLog::GuildJoin  [0x08685a48-0x8685aff] ===
 8685a48:	55                   	push   %ebp
 8685a49:	89 e5                	mov    %esp,%ebp
 8685a4b:	53                   	push   %ebx
 8685a4c:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8685a52:	8b 55 18             	mov    0x18(%ebp),%edx
 8685a55:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8685a58:	66 89 55 b4          	mov    %dx,-0x4c(%ebp)
 8685a5c:	88 45 b0             	mov    %al,-0x50(%ebp)
 8685a5f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8685a66:	e8 33 62 a4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8685a6b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8685a6e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8685a71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685a75:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8685a78:	89 04 24             	mov    %eax,(%esp)
 8685a7b:	e8 e0 88 9f ff       	call   807e360 <localtime_r@plt>
 8685a80:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8685a83:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685a86:	8b 40 14             	mov    0x14(%eax),%eax
 8685a89:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8685a8c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685a8f:	8b 40 10             	mov    0x10(%eax),%eax
 8685a92:	83 c0 01             	add    $0x1,%eax
 8685a95:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8685a98:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685a9b:	8b 40 0c             	mov    0xc(%eax),%eax
 8685a9e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8685aa1:	0f be 4d b0          	movsbl -0x50(%ebp),%ecx
 8685aa5:	0f b7 55 b4          	movzwl -0x4c(%ebp),%edx
 8685aa9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8685aac:	8d 98 6c 07 00 00    	lea    0x76c(%eax),%ebx
 8685ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 8685ab5:	8b 00                	mov    (%eax),%eax
 8685ab7:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8685abb:	89 54 24 20          	mov    %edx,0x20(%esp)
 8685abf:	8b 55 14             	mov    0x14(%ebp),%edx
 8685ac2:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8685ac6:	8b 55 10             	mov    0x10(%ebp),%edx
 8685ac9:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685acd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685ad0:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685ad4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8685ad7:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685adb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8685ade:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685ae2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8685ae6:	c7 44 24 04 f8 0b cf 	movl   $0x8cf0bf8,0x4(%esp)
 8685aed:	08 
 8685aee:	89 04 24             	mov    %eax,(%esp)
 8685af1:	e8 08 6e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685af6:	81 c4 84 00 00 00    	add    $0x84,%esp
 8685afc:	5b                   	pop    %ebx
 8685afd:	5d                   	pop    %ebp
 8685afe:	c3                   	ret
 8685aff:	90                   	nop

```

```c
// cUserHistoryLog::GuildJoin @ 0x8685a48

/* cUserHistoryLog::GuildJoin(unsigned int, char const*, unsigned int, unsigned short, char) */

void __thiscall
cUserHistoryLog::GuildJoin
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,ushort param_4,char param_5
          )

{
  tm local_4c;
  time_t local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_year;
  local_14 = local_1c->tm_mon + 1;
  local_10 = local_1c->tm_mday;
  CUser::LogHistory(*(CUser **)this,"GuildJoin,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3,(uint)param_4,(int)param_5);
  return;
}

```

---

## GuildOut

```asm
// === 08685b00 cUserHistoryLog::GuildOut  [0x08685b00-0x8685bb7] ===
 8685b00:	55                   	push   %ebp
 8685b01:	89 e5                	mov    %esp,%ebp
 8685b03:	53                   	push   %ebx
 8685b04:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8685b0a:	8b 55 18             	mov    0x18(%ebp),%edx
 8685b0d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8685b10:	88 55 b4             	mov    %dl,-0x4c(%ebp)
 8685b13:	66 89 45 b0          	mov    %ax,-0x50(%ebp)
 8685b17:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8685b1e:	e8 7b 61 a4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8685b23:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8685b26:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8685b29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685b2d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8685b30:	89 04 24             	mov    %eax,(%esp)
 8685b33:	e8 28 88 9f ff       	call   807e360 <localtime_r@plt>
 8685b38:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8685b3b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685b3e:	8b 40 14             	mov    0x14(%eax),%eax
 8685b41:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8685b44:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685b47:	8b 40 10             	mov    0x10(%eax),%eax
 8685b4a:	83 c0 01             	add    $0x1,%eax
 8685b4d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8685b50:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8685b53:	8b 40 0c             	mov    0xc(%eax),%eax
 8685b56:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8685b59:	0f b7 4d b0          	movzwl -0x50(%ebp),%ecx
 8685b5d:	0f be 55 b4          	movsbl -0x4c(%ebp),%edx
 8685b61:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8685b64:	8d 98 6c 07 00 00    	lea    0x76c(%eax),%ebx
 8685b6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8685b6d:	8b 00                	mov    (%eax),%eax
 8685b6f:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8685b73:	89 54 24 20          	mov    %edx,0x20(%esp)
 8685b77:	8b 55 14             	mov    0x14(%ebp),%edx
 8685b7a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8685b7e:	8b 55 10             	mov    0x10(%ebp),%edx
 8685b81:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685b85:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685b88:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685b8c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8685b8f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685b93:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8685b96:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685b9a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8685b9e:	c7 44 24 04 20 0c cf 	movl   $0x8cf0c20,0x4(%esp)
 8685ba5:	08 
 8685ba6:	89 04 24             	mov    %eax,(%esp)
 8685ba9:	e8 50 6d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685bae:	81 c4 84 00 00 00    	add    $0x84,%esp
 8685bb4:	5b                   	pop    %ebx
 8685bb5:	5d                   	pop    %ebp
 8685bb6:	c3                   	ret
 8685bb7:	90                   	nop

```

```c
// cUserHistoryLog::GuildOut @ 0x8685b00

/* cUserHistoryLog::GuildOut(unsigned int, char const*, unsigned int, char, unsigned short) */

void __thiscall
cUserHistoryLog::GuildOut
          (cUserHistoryLog *this,uint param_1,char *param_2,uint param_3,char param_4,ushort param_5
          )

{
  tm local_4c;
  time_t local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_year;
  local_14 = local_1c->tm_mon + 1;
  local_10 = local_1c->tm_mday;
  CUser::LogHistory(*(CUser **)this,"GuildOut,\"%d/%d/%d\",%d,\"%s\",%d,%d,%d",local_18 + 0x76c,
                    local_14,local_10,param_1,param_2,param_3,(int)param_4,(uint)param_5);
  return;
}

```

---

## HackDetected

```asm
// === 08685320 cUserHistoryLog::HackDetected  [0x08685320-0x86853e5] ===
 8685320:	55                   	push   %ebp
 8685321:	89 e5                	mov    %esp,%ebp
 8685323:	83 ec 28             	sub    $0x28,%esp
 8685326:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 868532a:	75 39                	jne    8685365 <_ZN15cUserHistoryLog12HackDetectedEjjjjjj+0x45>
 868532c:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8685330:	75 33                	jne    8685365 <_ZN15cUserHistoryLog12HackDetectedEjjjjjj+0x45>
 8685332:	8b 45 08             	mov    0x8(%ebp),%eax
 8685335:	8b 00                	mov    (%eax),%eax
 8685337:	8b 55 18             	mov    0x18(%ebp),%edx
 868533a:	89 54 24 14          	mov    %edx,0x14(%esp)
 868533e:	8b 55 14             	mov    0x14(%ebp),%edx
 8685341:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685345:	8b 55 10             	mov    0x10(%ebp),%edx
 8685348:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868534c:	8b 55 0c             	mov    0xc(%ebp),%edx
 868534f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685353:	c7 44 24 04 cd 09 cf 	movl   $0x8cf09cd,0x4(%esp)
 868535a:	08 
 868535b:	89 04 24             	mov    %eax,(%esp)
 868535e:	e8 9b 75 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685363:	eb 7f                	jmp    86853e4 <_ZN15cUserHistoryLog12HackDetectedEjjjjjj+0xc4>
 8685365:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 8685369:	75 3a                	jne    86853a5 <_ZN15cUserHistoryLog12HackDetectedEjjjjjj+0x85>
 868536b:	8b 45 08             	mov    0x8(%ebp),%eax
 868536e:	8b 00                	mov    (%eax),%eax
 8685370:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8685373:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685377:	8b 55 18             	mov    0x18(%ebp),%edx
 868537a:	89 54 24 14          	mov    %edx,0x14(%esp)
 868537e:	8b 55 14             	mov    0x14(%ebp),%edx
 8685381:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685385:	8b 55 10             	mov    0x10(%ebp),%edx
 8685388:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868538c:	8b 55 0c             	mov    0xc(%ebp),%edx
 868538f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685393:	c7 44 24 04 de 09 cf 	movl   $0x8cf09de,0x4(%esp)
 868539a:	08 
 868539b:	89 04 24             	mov    %eax,(%esp)
 868539e:	e8 5b 75 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86853a3:	eb 3f                	jmp    86853e4 <_ZN15cUserHistoryLog12HackDetectedEjjjjjj+0xc4>
 86853a5:	8b 45 08             	mov    0x8(%ebp),%eax
 86853a8:	8b 00                	mov    (%eax),%eax
 86853aa:	8b 55 20             	mov    0x20(%ebp),%edx
 86853ad:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86853b1:	8b 55 1c             	mov    0x1c(%ebp),%edx
 86853b4:	89 54 24 18          	mov    %edx,0x18(%esp)
 86853b8:	8b 55 18             	mov    0x18(%ebp),%edx
 86853bb:	89 54 24 14          	mov    %edx,0x14(%esp)
 86853bf:	8b 55 14             	mov    0x14(%ebp),%edx
 86853c2:	89 54 24 10          	mov    %edx,0x10(%esp)
 86853c6:	8b 55 10             	mov    0x10(%ebp),%edx
 86853c9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86853cd:	8b 55 0c             	mov    0xc(%ebp),%edx
 86853d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86853d4:	c7 44 24 04 f2 09 cf 	movl   $0x8cf09f2,0x4(%esp)
 86853db:	08 
 86853dc:	89 04 24             	mov    %eax,(%esp)
 86853df:	e8 1a 75 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86853e4:	c9                   	leave
 86853e5:	c3                   	ret

```

```c
// cUserHistoryLog::HackDetected @ 0x8685320

/* cUserHistoryLog::HackDetected(unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
cUserHistoryLog::HackDetected
          (cUserHistoryLog *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          uint param_6)

{
  if ((param_5 == 0) && (param_6 == 0)) {
    CUser::LogHistory(*(CUser **)this,"Hack,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  }
  else if (param_6 == 0) {
    CUser::LogHistory(*(CUser **)this,"Hack,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,param_5)
    ;
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Hack,%d,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,
                      param_5,param_6);
  }
  return;
}

```

---

## HadesHistoryLog

```asm
// === 08685418 cUserHistoryLog::HadesHistoryLog  [0x08685418-0x8685451] ===
 8685418:	55                   	push   %ebp
 8685419:	89 e5                	mov    %esp,%ebp
 868541b:	83 ec 28             	sub    $0x28,%esp
 868541e:	8b 45 08             	mov    0x8(%ebp),%eax
 8685421:	8b 00                	mov    (%eax),%eax
 8685423:	8b 55 18             	mov    0x18(%ebp),%edx
 8685426:	89 54 24 14          	mov    %edx,0x14(%esp)
 868542a:	8b 55 14             	mov    0x14(%ebp),%edx
 868542d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685431:	8b 55 10             	mov    0x10(%ebp),%edx
 8685434:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685438:	8b 55 0c             	mov    0xc(%ebp),%edx
 868543b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868543f:	c7 44 24 04 18 0a cf 	movl   $0x8cf0a18,0x4(%esp)
 8685446:	08 
 8685447:	89 04 24             	mov    %eax,(%esp)
 868544a:	e8 af 74 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868544f:	c9                   	leave
 8685450:	c3                   	ret
 8685451:	90                   	nop

```

```c
// cUserHistoryLog::HadesHistoryLog @ 0x8685418

/* cUserHistoryLog::HadesHistoryLog(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
cUserHistoryLog::HadesHistoryLog
          (cUserHistoryLog *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  CUser::LogHistory(*(CUser **)this,"Hades,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  return;
}

```

---

## IPCounterLog

```asm
// === 08685d0c cUserHistoryLog::IPCounterLog  [0x08685d0c-0x8685d53] ===
 8685d0c:	55                   	push   %ebp
 8685d0d:	89 e5                	mov    %esp,%ebp
 8685d0f:	83 ec 28             	sub    $0x28,%esp
 8685d12:	8b 45 08             	mov    0x8(%ebp),%eax
 8685d15:	8b 00                	mov    (%eax),%eax
 8685d17:	8b 55 20             	mov    0x20(%ebp),%edx
 8685d1a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8685d1e:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8685d21:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685d25:	8b 55 18             	mov    0x18(%ebp),%edx
 8685d28:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685d2c:	8b 55 14             	mov    0x14(%ebp),%edx
 8685d2f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685d33:	8b 55 10             	mov    0x10(%ebp),%edx
 8685d36:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685d3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685d3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685d41:	c7 44 24 04 a0 0c cf 	movl   $0x8cf0ca0,0x4(%esp)
 8685d48:	08 
 8685d49:	89 04 24             	mov    %eax,(%esp)
 8685d4c:	e8 ad 6b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685d51:	c9                   	leave
 8685d52:	c3                   	ret
 8685d53:	90                   	nop

```

```c
// cUserHistoryLog::IPCounterLog @ 0x8685d0c

/* cUserHistoryLog::IPCounterLog(int, int, int, int, int, char*) */

void __thiscall
cUserHistoryLog::IPCounterLog
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          char *param_6)

{
  CUser::LogHistory(*(CUser **)this,"IPCount,%d,%d,%d,%d,%d,%s",param_1,param_2,param_3,param_4,
                    param_5,param_6);
  return;
}

```

---

## IPCounterLog_InsertIp

```asm
// === 08685d9c cUserHistoryLog::IPCounterLog_InsertIp  [0x08685d9c-0x8685dcd] ===
 8685d9c:	55                   	push   %ebp
 8685d9d:	89 e5                	mov    %esp,%ebp
 8685d9f:	83 ec 28             	sub    $0x28,%esp
 8685da2:	8b 45 08             	mov    0x8(%ebp),%eax
 8685da5:	8b 00                	mov    (%eax),%eax
 8685da7:	8b 55 14             	mov    0x14(%ebp),%edx
 8685daa:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685dae:	8b 55 10             	mov    0x10(%ebp),%edx
 8685db1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685db5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685db8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685dbc:	c7 44 24 04 d6 0c cf 	movl   $0x8cf0cd6,0x4(%esp)
 8685dc3:	08 
 8685dc4:	89 04 24             	mov    %eax,(%esp)
 8685dc7:	e8 32 6b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685dcc:	c9                   	leave
 8685dcd:	c3                   	ret

```

```c
// cUserHistoryLog::IPCounterLog_InsertIp @ 0x8685d9c

/* cUserHistoryLog::IPCounterLog_InsertIp(int, int, char*) */

void __thiscall
cUserHistoryLog::IPCounterLog_InsertIp(cUserHistoryLog *this,int param_1,int param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)this,"IPCountInt,%d,%d,%s",param_1,param_2,param_3);
  return;
}

```

---

## InitSkill

```asm
// === 08682cfa cUserHistoryLog::InitSkill  [0x08682cfa-0x8682d39] ===
 8682cfa:	55                   	push   %ebp
 8682cfb:	89 e5                	mov    %esp,%ebp
 8682cfd:	83 ec 28             	sub    $0x28,%esp
 8682d00:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8682d03:	8b 45 08             	mov    0x8(%ebp),%eax
 8682d06:	8b 00                	mov    (%eax),%eax
 8682d08:	89 54 24 18          	mov    %edx,0x18(%esp)
 8682d0c:	8b 55 18             	mov    0x18(%ebp),%edx
 8682d0f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8682d13:	8b 55 14             	mov    0x14(%ebp),%edx
 8682d16:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682d1a:	8b 55 10             	mov    0x10(%ebp),%edx
 8682d1d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682d21:	8b 55 0c             	mov    0xc(%ebp),%edx
 8682d24:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682d28:	c7 44 24 04 9d 01 cf 	movl   $0x8cf019d,0x4(%esp)
 8682d2f:	08 
 8682d30:	89 04 24             	mov    %eax,(%esp)
 8682d33:	e8 c6 9b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682d38:	c9                   	leave
 8682d39:	c3                   	ret

```

```c
// cUserHistoryLog::InitSkill @ 0x8682cfa

/* cUserHistoryLog::InitSkill(int, int, int, int, eSkillInitReason) */

void __thiscall
cUserHistoryLog::InitSkill
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"SkillInit,%d,%d,%d,%d,%d",param_1,param_2,param_3,param_4,
                    param_6);
  return;
}

```

---

## ItemAdd

```asm
// === 08682e84 cUserHistoryLog::ItemAdd  [0x08682e84-0x8683409] ===
 8682e84:	55                   	push   %ebp
 8682e85:	89 e5                	mov    %esp,%ebp
 8682e87:	57                   	push   %edi
 8682e88:	56                   	push   %esi
 8682e89:	53                   	push   %ebx
 8682e8a:	81 ec 6c 01 00 00    	sub    $0x16c,%esp
 8682e90:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 8682e94:	74 0a                	je     8682ea0 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x1c>
 8682e96:	83 7d 1c 02          	cmpl   $0x2,0x1c(%ebp)
 8682e9a:	0f 85 a4 02 00 00    	jne    8683144 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x2c0>
 8682ea0:	8b 45 08             	mov    0x8(%ebp),%eax
 8682ea3:	83 c0 22             	add    $0x22,%eax
 8682ea6:	0f b6 00             	movzbl (%eax),%eax
 8682ea9:	84 c0                	test   %al,%al
 8682eab:	0f 84 4d 05 00 00    	je     86833fe <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x57a>
 8682eb1:	8b 45 18             	mov    0x18(%ebp),%eax
 8682eb4:	8d 58 15             	lea    0x15(%eax),%ebx
 8682eb7:	8d 45 be             	lea    -0x42(%ebp),%eax
 8682eba:	89 04 24             	mov    %eax,(%esp)
 8682ebd:	e8 96 8f e6 ff       	call   84ebe58 <_ZN34CItemGloballyUniqueIdentifierPrintC1Ev>
 8682ec2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8682ec6:	8d 45 be             	lea    -0x42(%ebp),%eax
 8682ec9:	89 04 24             	mov    %eax,(%esp)
 8682ecc:	e8 b1 8f e6 ff       	call   84ebe82 <_ZN34CItemGloballyUniqueIdentifierPrintclERK30itemGloballyUniqueIdentifier_t>
 8682ed1:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8682ed7:	8b 45 18             	mov    0x18(%ebp),%eax
 8682eda:	89 04 24             	mov    %eax,(%esp)
 8682edd:	e8 74 85 ba ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8682ee2:	0f b6 c0             	movzbl %al,%eax
 8682ee5:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8682eeb:	8b 45 18             	mov    0x18(%ebp),%eax
 8682eee:	0f b6 00             	movzbl (%eax),%eax
 8682ef1:	0f b6 c0             	movzbl %al,%eax
 8682ef4:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8682efa:	8b 45 18             	mov    0x18(%ebp),%eax
 8682efd:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 8682f01:	0f b6 c0             	movzbl %al,%eax
 8682f04:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8682f0a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f0d:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 8682f11:	0f b6 c0             	movzbl %al,%eax
 8682f14:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8682f1a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f1d:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 8682f21:	0f b6 c0             	movzbl %al,%eax
 8682f24:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8682f2a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f2d:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 8682f31:	0f b6 c0             	movzbl %al,%eax
 8682f34:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 8682f3a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f3d:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 8682f41:	0f b6 c0             	movzbl %al,%eax
 8682f44:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8682f4a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f4d:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 8682f51:	0f b6 c0             	movzbl %al,%eax
 8682f54:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8682f5a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f5d:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 8682f61:	0f b6 c0             	movzbl %al,%eax
 8682f64:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8682f6a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f6d:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 8682f71:	0f b6 c0             	movzbl %al,%eax
 8682f74:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 8682f7a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f7d:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 8682f81:	0f b6 c0             	movzbl %al,%eax
 8682f84:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8682f8a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f8d:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 8682f91:	0f b6 c0             	movzbl %al,%eax
 8682f94:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 8682f9a:	8b 45 18             	mov    0x18(%ebp),%eax
 8682f9d:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 8682fa1:	0f b6 c0             	movzbl %al,%eax
 8682fa4:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8682faa:	8b 45 18             	mov    0x18(%ebp),%eax
 8682fad:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 8682fb1:	0f b6 c0             	movzbl %al,%eax
 8682fb4:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8682fba:	8b 45 18             	mov    0x18(%ebp),%eax
 8682fbd:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8682fc1:	0f b6 c0             	movzbl %al,%eax
 8682fc4:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8682fca:	8b 45 18             	mov    0x18(%ebp),%eax
 8682fcd:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 8682fd1:	0f b6 c0             	movzbl %al,%eax
 8682fd4:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8682fda:	8b 45 18             	mov    0x18(%ebp),%eax
 8682fdd:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8682fe1:	0f b7 c0             	movzwl %ax,%eax
 8682fe4:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8682fea:	8b 45 18             	mov    0x18(%ebp),%eax
 8682fed:	89 04 24             	mov    %eax,(%esp)
 8682ff0:	e8 77 20 a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8682ff5:	0f b6 c0             	movzbl %al,%eax
 8682ff8:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8682ffe:	8b 45 08             	mov    0x8(%ebp),%eax
 8683001:	83 c0 04             	add    $0x4,%eax
 8683004:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 868300a:	8b 45 08             	mov    0x8(%ebp),%eax
 868300d:	8d 78 22             	lea    0x22(%eax),%edi
 8683010:	8b 75 1c             	mov    0x1c(%ebp),%esi
 8683013:	8b 45 18             	mov    0x18(%ebp),%eax
 8683016:	8b 58 02             	mov    0x2(%eax),%ebx
 8683019:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 868301c:	8b 45 08             	mov    0x8(%ebp),%eax
 868301f:	8b 10                	mov    (%eax),%edx
 8683021:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8683027:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 868302b:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8683031:	89 44 24 68          	mov    %eax,0x68(%esp)
 8683035:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 868303b:	89 44 24 64          	mov    %eax,0x64(%esp)
 868303f:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8683045:	89 44 24 60          	mov    %eax,0x60(%esp)
 8683049:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 868304f:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 8683053:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8683059:	89 44 24 58          	mov    %eax,0x58(%esp)
 868305d:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8683063:	89 44 24 54          	mov    %eax,0x54(%esp)
 8683067:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 868306d:	89 44 24 50          	mov    %eax,0x50(%esp)
 8683071:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8683077:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 868307b:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8683081:	89 44 24 48          	mov    %eax,0x48(%esp)
 8683085:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 868308b:	89 44 24 44          	mov    %eax,0x44(%esp)
 868308f:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8683095:	89 44 24 40          	mov    %eax,0x40(%esp)
 8683099:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 868309f:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86830a3:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 86830a9:	89 44 24 38          	mov    %eax,0x38(%esp)
 86830ad:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 86830b3:	89 44 24 34          	mov    %eax,0x34(%esp)
 86830b7:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 86830bd:	89 44 24 30          	mov    %eax,0x30(%esp)
 86830c1:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 86830c7:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86830cb:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 86830d1:	89 44 24 28          	mov    %eax,0x28(%esp)
 86830d5:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 86830db:	89 44 24 24          	mov    %eax,0x24(%esp)
 86830df:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 86830e5:	89 44 24 20          	mov    %eax,0x20(%esp)
 86830e9:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 86830ed:	89 74 24 18          	mov    %esi,0x18(%esp)
 86830f1:	8b 45 14             	mov    0x14(%ebp),%eax
 86830f4:	89 44 24 14          	mov    %eax,0x14(%esp)
 86830f8:	8b 45 10             	mov    0x10(%ebp),%eax
 86830fb:	89 44 24 10          	mov    %eax,0x10(%esp)
 86830ff:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8683103:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8683107:	c7 44 24 04 08 02 cf 	movl   $0x8cf0208,0x4(%esp)
 868310e:	08 
 868310f:	89 14 24             	mov    %edx,(%esp)
 8683112:	e8 e7 97 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683117:	eb 1b                	jmp    8683134 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x2b0>
 8683119:	89 d3                	mov    %edx,%ebx
 868311b:	89 c6                	mov    %eax,%esi
 868311d:	8d 45 be             	lea    -0x42(%ebp),%eax
 8683120:	89 04 24             	mov    %eax,(%esp)
 8683123:	e8 54 8d e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 8683128:	89 f0                	mov    %esi,%eax
 868312a:	89 da                	mov    %ebx,%edx
 868312c:	89 04 24             	mov    %eax,(%esp)
 868312f:	e8 1c 06 46 00       	call   8ae3750 <_Unwind_Resume>
 8683134:	8d 45 be             	lea    -0x42(%ebp),%eax
 8683137:	89 04 24             	mov    %eax,(%esp)
 868313a:	e8 3d 8d e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 868313f:	e9 bb 02 00 00       	jmp    86833ff <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x57b>
 8683144:	8b 45 18             	mov    0x18(%ebp),%eax
 8683147:	8d 58 15             	lea    0x15(%eax),%ebx
 868314a:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868314d:	89 04 24             	mov    %eax,(%esp)
 8683150:	e8 03 8d e6 ff       	call   84ebe58 <_ZN34CItemGloballyUniqueIdentifierPrintC1Ev>
 8683155:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8683159:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868315c:	89 04 24             	mov    %eax,(%esp)
 868315f:	e8 1e 8d e6 ff       	call   84ebe82 <_ZN34CItemGloballyUniqueIdentifierPrintclERK30itemGloballyUniqueIdentifier_t>
 8683164:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 868316a:	8b 45 18             	mov    0x18(%ebp),%eax
 868316d:	89 04 24             	mov    %eax,(%esp)
 8683170:	e8 e1 82 ba ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8683175:	0f b6 c0             	movzbl %al,%eax
 8683178:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 868317e:	8b 45 18             	mov    0x18(%ebp),%eax
 8683181:	0f b6 00             	movzbl (%eax),%eax
 8683184:	0f b6 c0             	movzbl %al,%eax
 8683187:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 868318d:	8b 45 18             	mov    0x18(%ebp),%eax
 8683190:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 8683194:	0f b6 c0             	movzbl %al,%eax
 8683197:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 868319d:	8b 45 18             	mov    0x18(%ebp),%eax
 86831a0:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 86831a4:	0f b6 c0             	movzbl %al,%eax
 86831a7:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 86831ad:	8b 45 18             	mov    0x18(%ebp),%eax
 86831b0:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 86831b4:	0f b6 c0             	movzbl %al,%eax
 86831b7:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 86831bd:	8b 45 18             	mov    0x18(%ebp),%eax
 86831c0:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 86831c4:	0f b6 c0             	movzbl %al,%eax
 86831c7:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 86831cd:	8b 45 18             	mov    0x18(%ebp),%eax
 86831d0:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 86831d4:	0f b6 c0             	movzbl %al,%eax
 86831d7:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 86831dd:	8b 45 18             	mov    0x18(%ebp),%eax
 86831e0:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 86831e4:	0f b6 c0             	movzbl %al,%eax
 86831e7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 86831ed:	8b 45 18             	mov    0x18(%ebp),%eax
 86831f0:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 86831f4:	0f b6 c0             	movzbl %al,%eax
 86831f7:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 86831fd:	8b 45 18             	mov    0x18(%ebp),%eax
 8683200:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 8683204:	0f b6 c0             	movzbl %al,%eax
 8683207:	89 45 80             	mov    %eax,-0x80(%ebp)
 868320a:	8b 45 18             	mov    0x18(%ebp),%eax
 868320d:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 8683211:	0f b6 c0             	movzbl %al,%eax
 8683214:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8683217:	8b 45 18             	mov    0x18(%ebp),%eax
 868321a:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 868321e:	0f b6 c0             	movzbl %al,%eax
 8683221:	89 45 88             	mov    %eax,-0x78(%ebp)
 8683224:	8b 45 18             	mov    0x18(%ebp),%eax
 8683227:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 868322b:	0f b6 c0             	movzbl %al,%eax
 868322e:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8683231:	8b 45 18             	mov    0x18(%ebp),%eax
 8683234:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 8683238:	0f b6 c0             	movzbl %al,%eax
 868323b:	89 45 90             	mov    %eax,-0x70(%ebp)
 868323e:	8b 45 18             	mov    0x18(%ebp),%eax
 8683241:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8683245:	0f b6 c0             	movzbl %al,%eax
 8683248:	89 45 94             	mov    %eax,-0x6c(%ebp)
 868324b:	8b 45 18             	mov    0x18(%ebp),%eax
 868324e:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 8683252:	0f b6 c0             	movzbl %al,%eax
 8683255:	89 45 98             	mov    %eax,-0x68(%ebp)
 8683258:	8b 45 18             	mov    0x18(%ebp),%eax
 868325b:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 868325f:	0f b7 c0             	movzwl %ax,%eax
 8683262:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8683265:	8b 45 18             	mov    0x18(%ebp),%eax
 8683268:	89 04 24             	mov    %eax,(%esp)
 868326b:	e8 fc 1d a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8683270:	0f b6 c0             	movzbl %al,%eax
 8683273:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8683276:	8b 45 18             	mov    0x18(%ebp),%eax
 8683279:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 868327d:	0f b7 c0             	movzwl %ax,%eax
 8683280:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8683283:	8b 45 18             	mov    0x18(%ebp),%eax
 8683286:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 868328a:	0f b6 c0             	movzbl %al,%eax
 868328d:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8683290:	8b 45 18             	mov    0x18(%ebp),%eax
 8683293:	8b 40 0d             	mov    0xd(%eax),%eax
 8683296:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8683299:	8b 45 18             	mov    0x18(%ebp),%eax
 868329c:	8b 40 07             	mov    0x7(%eax),%eax
 868329f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 86832a2:	8b 45 08             	mov    0x8(%ebp),%eax
 86832a5:	8b 00                	mov    (%eax),%eax
 86832a7:	05 00 97 07 00       	add    $0x79700,%eax
 86832ac:	89 04 24             	mov    %eax,(%esp)
 86832af:	e8 58 2d 01 00       	call   869600c <_ZN15cUserHistoryLog11getItemYPosEv>
 86832b4:	0f b7 c0             	movzwl %ax,%eax
 86832b7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 86832ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86832bd:	8b 00                	mov    (%eax),%eax
 86832bf:	05 00 97 07 00       	add    $0x79700,%eax
 86832c4:	89 04 24             	mov    %eax,(%esp)
 86832c7:	e8 34 2d 01 00       	call   8696000 <_ZN15cUserHistoryLog11getItemXPosEv>
 86832cc:	0f b7 f8             	movzwl %ax,%edi
 86832cf:	8b 75 1c             	mov    0x1c(%ebp),%esi
 86832d2:	8b 45 18             	mov    0x18(%ebp),%eax
 86832d5:	8b 58 02             	mov    0x2(%eax),%ebx
 86832d8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86832db:	8b 45 08             	mov    0x8(%ebp),%eax
 86832de:	8b 10                	mov    (%eax),%edx
 86832e0:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 86832e6:	89 44 24 7c          	mov    %eax,0x7c(%esp)
 86832ea:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 86832f0:	89 44 24 78          	mov    %eax,0x78(%esp)
 86832f4:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 86832fa:	89 44 24 74          	mov    %eax,0x74(%esp)
 86832fe:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8683304:	89 44 24 70          	mov    %eax,0x70(%esp)
 8683308:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 868330e:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 8683312:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8683318:	89 44 24 68          	mov    %eax,0x68(%esp)
 868331c:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8683322:	89 44 24 64          	mov    %eax,0x64(%esp)
 8683326:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 868332c:	89 44 24 60          	mov    %eax,0x60(%esp)
 8683330:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8683336:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 868333a:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8683340:	89 44 24 58          	mov    %eax,0x58(%esp)
 8683344:	8b 45 80             	mov    -0x80(%ebp),%eax
 8683347:	89 44 24 54          	mov    %eax,0x54(%esp)
 868334b:	8b 45 84             	mov    -0x7c(%ebp),%eax
 868334e:	89 44 24 50          	mov    %eax,0x50(%esp)
 8683352:	8b 45 88             	mov    -0x78(%ebp),%eax
 8683355:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8683359:	8b 45 8c             	mov    -0x74(%ebp),%eax
 868335c:	89 44 24 48          	mov    %eax,0x48(%esp)
 8683360:	8b 45 90             	mov    -0x70(%ebp),%eax
 8683363:	89 44 24 44          	mov    %eax,0x44(%esp)
 8683367:	8b 45 94             	mov    -0x6c(%ebp),%eax
 868336a:	89 44 24 40          	mov    %eax,0x40(%esp)
 868336e:	8b 45 98             	mov    -0x68(%ebp),%eax
 8683371:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8683375:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8683378:	89 44 24 38          	mov    %eax,0x38(%esp)
 868337c:	8b 45 a0             	mov    -0x60(%ebp),%eax
 868337f:	89 44 24 34          	mov    %eax,0x34(%esp)
 8683383:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8683386:	89 44 24 30          	mov    %eax,0x30(%esp)
 868338a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 868338d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8683391:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8683394:	89 44 24 28          	mov    %eax,0x28(%esp)
 8683398:	8b 45 b0             	mov    -0x50(%ebp),%eax
 868339b:	89 44 24 24          	mov    %eax,0x24(%esp)
 868339f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86833a2:	89 44 24 20          	mov    %eax,0x20(%esp)
 86833a6:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 86833aa:	89 74 24 18          	mov    %esi,0x18(%esp)
 86833ae:	8b 45 14             	mov    0x14(%ebp),%eax
 86833b1:	89 44 24 14          	mov    %eax,0x14(%esp)
 86833b5:	8b 45 10             	mov    0x10(%ebp),%eax
 86833b8:	89 44 24 10          	mov    %eax,0x10(%esp)
 86833bc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86833c0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86833c4:	c7 44 24 04 70 02 cf 	movl   $0x8cf0270,0x4(%esp)
 86833cb:	08 
 86833cc:	89 14 24             	mov    %edx,(%esp)
 86833cf:	e8 2a 95 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86833d4:	eb 1b                	jmp    86833f1 <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x56d>
 86833d6:	89 d3                	mov    %edx,%ebx
 86833d8:	89 c6                	mov    %eax,%esi
 86833da:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 86833dd:	89 04 24             	mov    %eax,(%esp)
 86833e0:	e8 97 8a e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 86833e5:	89 f0                	mov    %esi,%eax
 86833e7:	89 da                	mov    %ebx,%edx
 86833e9:	89 04 24             	mov    %eax,(%esp)
 86833ec:	e8 5f 03 46 00       	call   8ae3750 <_Unwind_Resume>
 86833f1:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 86833f4:	89 04 24             	mov    %eax,(%esp)
 86833f7:	e8 80 8a e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 86833fc:	eb 01                	jmp    86833ff <_ZN15cUserHistoryLog7ItemAddE10INVEN_TYPEiiRK10Inven_Item14eItemAddReason+0x57b>
 86833fe:	90                   	nop
 86833ff:	81 c4 6c 01 00 00    	add    $0x16c,%esp
 8683405:	5b                   	pop    %ebx
 8683406:	5e                   	pop    %esi
 8683407:	5f                   	pop    %edi
 8683408:	5d                   	pop    %ebp
 8683409:	c3                   	ret

```

```c
// cUserHistoryLog::ItemAdd @ 0x8682e84

/* cUserHistoryLog::ItemAdd(INVEN_TYPE, int, int, Inven_Item const&, eItemAddReason) */

void __thiscall
cUserHistoryLog::ItemAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          Inven_Item *param_5,int param_6)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  Inven_Item IVar16;
  ushort uVar17;
  ushort uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  CItemGloballyUniqueIdentifierPrint local_46 [21];
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  if ((param_6 == 1) || (param_6 == 2)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_46);
                    /* try { // try from 08682ecc to 08683116 has its CatchHandler @ 08683119 */
      uVar20 = CItemGloballyUniqueIdentifierPrint::operator()
                         (local_46,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
      uVar21 = Inven_Item::GetReSealCount(param_5);
      IVar1 = *param_5;
      IVar2 = param_5[0x32];
      IVar3 = param_5[0x31];
      IVar4 = param_5[0x30];
      IVar5 = param_5[0x2f];
      IVar6 = param_5[0x2e];
      IVar7 = param_5[0x2d];
      IVar8 = param_5[0x2c];
      IVar9 = param_5[0x2b];
      IVar10 = param_5[0x2a];
      IVar11 = param_5[0x29];
      IVar12 = param_5[0x28];
      IVar13 = param_5[0x27];
      IVar14 = param_5[0x26];
      IVar15 = param_5[0x25];
      uVar17 = *(ushort *)(param_5 + 0xb);
      uVar22 = Inven_Item::GetUpgrade(param_5);
      CUser::LogHistory(*(CUser **)this,
                        "Item+,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                        ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,this + 0x22,
                        this + 4,uVar22 & 0xff,(uint)uVar17,(uint)(byte)IVar15,(uint)(byte)IVar14,
                        (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                        (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                        (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                        (uint)(byte)IVar1,uVar21 & 0xff,uVar20);
      CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_46);
    }
  }
  else {
    CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 0868315f to 086833d3 has its CatchHandler @ 086833d6 */
    uVar23 = CItemGloballyUniqueIdentifierPrint::operator()
                       (local_31,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
    uVar21 = Inven_Item::GetReSealCount(param_5);
    IVar1 = *param_5;
    IVar2 = param_5[0x32];
    IVar3 = param_5[0x31];
    IVar4 = param_5[0x30];
    IVar5 = param_5[0x2f];
    IVar6 = param_5[0x2e];
    IVar7 = param_5[0x2d];
    IVar8 = param_5[0x2c];
    IVar9 = param_5[0x2b];
    IVar10 = param_5[0x2a];
    IVar11 = param_5[0x29];
    IVar12 = param_5[0x28];
    IVar13 = param_5[0x27];
    IVar14 = param_5[0x26];
    IVar15 = param_5[0x25];
    uVar17 = *(ushort *)(param_5 + 0xb);
    uVar22 = Inven_Item::GetUpgrade(param_5);
    uVar18 = *(ushort *)(param_5 + 0x12);
    IVar16 = param_5[0x11];
    uVar20 = *(undefined4 *)(param_5 + 0xd);
    uVar19 = *(undefined4 *)(param_5 + 7);
    uVar24 = getItemYPos((cUserHistoryLog *)(*(int *)this + 0x79700));
    uVar25 = getItemXPos((cUserHistoryLog *)(*(int *)this + 0x79700));
    CUser::LogHistory(*(CUser **)this,
                      "Item+,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                      ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,uVar25 & 0xffff,
                      uVar24 & 0xffff,uVar19,uVar20,(uint)(byte)IVar16,(uint)uVar18,uVar22 & 0xff,
                      (uint)uVar17,(uint)(byte)IVar15,(uint)(byte)IVar14,(uint)(byte)IVar13,
                      (uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,(uint)(byte)IVar9,
                      (uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,(uint)(byte)IVar5,
                      (uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,(uint)(byte)IVar1,
                      uVar21 & 0xff,uVar23);
    CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  }
  return;
}

```

---

## ItemAddCargo

```asm
// === 08683cee cUserHistoryLog::ItemAddCargo  [0x08683cee-0x8683d1f] ===
 8683cee:	55                   	push   %ebp
 8683cef:	89 e5                	mov    %esp,%ebp
 8683cf1:	83 ec 28             	sub    $0x28,%esp
 8683cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8683cf7:	8b 00                	mov    (%eax),%eax
 8683cf9:	8b 55 14             	mov    0x14(%ebp),%edx
 8683cfc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683d00:	8b 55 10             	mov    0x10(%ebp),%edx
 8683d03:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683d07:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683d0a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683d0e:	c7 44 24 04 9d 04 cf 	movl   $0x8cf049d,0x4(%esp)
 8683d15:	08 
 8683d16:	89 04 24             	mov    %eax,(%esp)
 8683d19:	e8 e0 8b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683d1e:	c9                   	leave
 8683d1f:	c3                   	ret

```

```c
// cUserHistoryLog::ItemAddCargo @ 0x8683cee

/* cUserHistoryLog::ItemAddCargo(int, int, int) */

void __thiscall
cUserHistoryLog::ItemAddCargo(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"Inven+,%d,%d,%d",param_1,param_2,param_3);
  return;
}

```

---

## ItemDel

```asm
// === 0868340a cUserHistoryLog::ItemDel  [0x0868340a-0x8683a1f] ===
 868340a:	55                   	push   %ebp
 868340b:	89 e5                	mov    %esp,%ebp
 868340d:	57                   	push   %edi
 868340e:	56                   	push   %esi
 868340f:	53                   	push   %ebx
 8683410:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 8683416:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 868341a:	74 0a                	je     8683426 <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x1c>
 868341c:	83 7d 1c 02          	cmpl   $0x2,0x1c(%ebp)
 8683420:	0f 85 a4 02 00 00    	jne    86836ca <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x2c0>
 8683426:	8b 45 08             	mov    0x8(%ebp),%eax
 8683429:	83 c0 22             	add    $0x22,%eax
 868342c:	0f b6 00             	movzbl (%eax),%eax
 868342f:	84 c0                	test   %al,%al
 8683431:	0f 84 15 05 00 00    	je     868394c <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x542>
 8683437:	8b 45 18             	mov    0x18(%ebp),%eax
 868343a:	8d 58 15             	lea    0x15(%eax),%ebx
 868343d:	8d 45 be             	lea    -0x42(%ebp),%eax
 8683440:	89 04 24             	mov    %eax,(%esp)
 8683443:	e8 10 8a e6 ff       	call   84ebe58 <_ZN34CItemGloballyUniqueIdentifierPrintC1Ev>
 8683448:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 868344c:	8d 45 be             	lea    -0x42(%ebp),%eax
 868344f:	89 04 24             	mov    %eax,(%esp)
 8683452:	e8 2b 8a e6 ff       	call   84ebe82 <_ZN34CItemGloballyUniqueIdentifierPrintclERK30itemGloballyUniqueIdentifier_t>
 8683457:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 868345d:	8b 45 18             	mov    0x18(%ebp),%eax
 8683460:	89 04 24             	mov    %eax,(%esp)
 8683463:	e8 ee 7f ba ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8683468:	0f b6 c0             	movzbl %al,%eax
 868346b:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8683471:	8b 45 18             	mov    0x18(%ebp),%eax
 8683474:	0f b6 00             	movzbl (%eax),%eax
 8683477:	0f b6 c0             	movzbl %al,%eax
 868347a:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8683480:	8b 45 18             	mov    0x18(%ebp),%eax
 8683483:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 8683487:	0f b6 c0             	movzbl %al,%eax
 868348a:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8683490:	8b 45 18             	mov    0x18(%ebp),%eax
 8683493:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 8683497:	0f b6 c0             	movzbl %al,%eax
 868349a:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 86834a0:	8b 45 18             	mov    0x18(%ebp),%eax
 86834a3:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 86834a7:	0f b6 c0             	movzbl %al,%eax
 86834aa:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 86834b0:	8b 45 18             	mov    0x18(%ebp),%eax
 86834b3:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 86834b7:	0f b6 c0             	movzbl %al,%eax
 86834ba:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 86834c0:	8b 45 18             	mov    0x18(%ebp),%eax
 86834c3:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 86834c7:	0f b6 c0             	movzbl %al,%eax
 86834ca:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 86834d0:	8b 45 18             	mov    0x18(%ebp),%eax
 86834d3:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 86834d7:	0f b6 c0             	movzbl %al,%eax
 86834da:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 86834e0:	8b 45 18             	mov    0x18(%ebp),%eax
 86834e3:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 86834e7:	0f b6 c0             	movzbl %al,%eax
 86834ea:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 86834f0:	8b 45 18             	mov    0x18(%ebp),%eax
 86834f3:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 86834f7:	0f b6 c0             	movzbl %al,%eax
 86834fa:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8683500:	8b 45 18             	mov    0x18(%ebp),%eax
 8683503:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 8683507:	0f b6 c0             	movzbl %al,%eax
 868350a:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 8683510:	8b 45 18             	mov    0x18(%ebp),%eax
 8683513:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 8683517:	0f b6 c0             	movzbl %al,%eax
 868351a:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8683520:	8b 45 18             	mov    0x18(%ebp),%eax
 8683523:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 8683527:	0f b6 c0             	movzbl %al,%eax
 868352a:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 8683530:	8b 45 18             	mov    0x18(%ebp),%eax
 8683533:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 8683537:	0f b6 c0             	movzbl %al,%eax
 868353a:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8683540:	8b 45 18             	mov    0x18(%ebp),%eax
 8683543:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8683547:	0f b6 c0             	movzbl %al,%eax
 868354a:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8683550:	8b 45 18             	mov    0x18(%ebp),%eax
 8683553:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 8683557:	0f b6 c0             	movzbl %al,%eax
 868355a:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8683560:	8b 45 18             	mov    0x18(%ebp),%eax
 8683563:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8683567:	0f b7 c0             	movzwl %ax,%eax
 868356a:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8683570:	8b 45 18             	mov    0x18(%ebp),%eax
 8683573:	89 04 24             	mov    %eax,(%esp)
 8683576:	e8 f1 1a a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 868357b:	0f b6 c0             	movzbl %al,%eax
 868357e:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8683584:	8b 45 08             	mov    0x8(%ebp),%eax
 8683587:	83 c0 04             	add    $0x4,%eax
 868358a:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8683590:	8b 45 08             	mov    0x8(%ebp),%eax
 8683593:	8d 78 22             	lea    0x22(%eax),%edi
 8683596:	8b 75 1c             	mov    0x1c(%ebp),%esi
 8683599:	8b 45 18             	mov    0x18(%ebp),%eax
 868359c:	8b 58 02             	mov    0x2(%eax),%ebx
 868359f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86835a2:	8b 45 08             	mov    0x8(%ebp),%eax
 86835a5:	8b 10                	mov    (%eax),%edx
 86835a7:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 86835ad:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 86835b1:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 86835b7:	89 44 24 68          	mov    %eax,0x68(%esp)
 86835bb:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 86835c1:	89 44 24 64          	mov    %eax,0x64(%esp)
 86835c5:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 86835cb:	89 44 24 60          	mov    %eax,0x60(%esp)
 86835cf:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 86835d5:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 86835d9:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 86835df:	89 44 24 58          	mov    %eax,0x58(%esp)
 86835e3:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 86835e9:	89 44 24 54          	mov    %eax,0x54(%esp)
 86835ed:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 86835f3:	89 44 24 50          	mov    %eax,0x50(%esp)
 86835f7:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 86835fd:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8683601:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8683607:	89 44 24 48          	mov    %eax,0x48(%esp)
 868360b:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8683611:	89 44 24 44          	mov    %eax,0x44(%esp)
 8683615:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 868361b:	89 44 24 40          	mov    %eax,0x40(%esp)
 868361f:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8683625:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8683629:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 868362f:	89 44 24 38          	mov    %eax,0x38(%esp)
 8683633:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 8683639:	89 44 24 34          	mov    %eax,0x34(%esp)
 868363d:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8683643:	89 44 24 30          	mov    %eax,0x30(%esp)
 8683647:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 868364d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8683651:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8683657:	89 44 24 28          	mov    %eax,0x28(%esp)
 868365b:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8683661:	89 44 24 24          	mov    %eax,0x24(%esp)
 8683665:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 868366b:	89 44 24 20          	mov    %eax,0x20(%esp)
 868366f:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8683673:	89 74 24 18          	mov    %esi,0x18(%esp)
 8683677:	8b 45 14             	mov    0x14(%ebp),%eax
 868367a:	89 44 24 14          	mov    %eax,0x14(%esp)
 868367e:	8b 45 10             	mov    0x10(%ebp),%eax
 8683681:	89 44 24 10          	mov    %eax,0x10(%esp)
 8683685:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8683689:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 868368d:	c7 44 24 04 e0 02 cf 	movl   $0x8cf02e0,0x4(%esp)
 8683694:	08 
 8683695:	89 14 24             	mov    %edx,(%esp)
 8683698:	e8 61 92 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868369d:	eb 1b                	jmp    86836ba <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x2b0>
 868369f:	89 d3                	mov    %edx,%ebx
 86836a1:	89 c6                	mov    %eax,%esi
 86836a3:	8d 45 be             	lea    -0x42(%ebp),%eax
 86836a6:	89 04 24             	mov    %eax,(%esp)
 86836a9:	e8 ce 87 e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 86836ae:	89 f0                	mov    %esi,%eax
 86836b0:	89 da                	mov    %ebx,%edx
 86836b2:	89 04 24             	mov    %eax,(%esp)
 86836b5:	e8 96 00 46 00       	call   8ae3750 <_Unwind_Resume>
 86836ba:	8d 45 be             	lea    -0x42(%ebp),%eax
 86836bd:	89 04 24             	mov    %eax,(%esp)
 86836c0:	e8 b7 87 e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 86836c5:	e9 83 02 00 00       	jmp    868394d <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x543>
 86836ca:	8b 45 18             	mov    0x18(%ebp),%eax
 86836cd:	8d 58 15             	lea    0x15(%eax),%ebx
 86836d0:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 86836d3:	89 04 24             	mov    %eax,(%esp)
 86836d6:	e8 7d 87 e6 ff       	call   84ebe58 <_ZN34CItemGloballyUniqueIdentifierPrintC1Ev>
 86836db:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86836df:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 86836e2:	89 04 24             	mov    %eax,(%esp)
 86836e5:	e8 98 87 e6 ff       	call   84ebe82 <_ZN34CItemGloballyUniqueIdentifierPrintclERK30itemGloballyUniqueIdentifier_t>
 86836ea:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 86836f0:	8b 45 18             	mov    0x18(%ebp),%eax
 86836f3:	89 04 24             	mov    %eax,(%esp)
 86836f6:	e8 5b 7d ba ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 86836fb:	0f b6 c0             	movzbl %al,%eax
 86836fe:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8683704:	8b 45 18             	mov    0x18(%ebp),%eax
 8683707:	0f b6 00             	movzbl (%eax),%eax
 868370a:	0f b6 c0             	movzbl %al,%eax
 868370d:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 8683713:	8b 45 18             	mov    0x18(%ebp),%eax
 8683716:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 868371a:	0f b6 c0             	movzbl %al,%eax
 868371d:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8683723:	8b 45 18             	mov    0x18(%ebp),%eax
 8683726:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 868372a:	0f b6 c0             	movzbl %al,%eax
 868372d:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8683733:	8b 45 18             	mov    0x18(%ebp),%eax
 8683736:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 868373a:	0f b6 c0             	movzbl %al,%eax
 868373d:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8683743:	8b 45 18             	mov    0x18(%ebp),%eax
 8683746:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 868374a:	0f b6 c0             	movzbl %al,%eax
 868374d:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8683753:	8b 45 18             	mov    0x18(%ebp),%eax
 8683756:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 868375a:	0f b6 c0             	movzbl %al,%eax
 868375d:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8683763:	8b 45 18             	mov    0x18(%ebp),%eax
 8683766:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 868376a:	0f b6 c0             	movzbl %al,%eax
 868376d:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8683773:	8b 45 18             	mov    0x18(%ebp),%eax
 8683776:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 868377a:	0f b6 c0             	movzbl %al,%eax
 868377d:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8683783:	8b 45 18             	mov    0x18(%ebp),%eax
 8683786:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 868378a:	0f b6 c0             	movzbl %al,%eax
 868378d:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8683793:	8b 45 18             	mov    0x18(%ebp),%eax
 8683796:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 868379a:	0f b6 c0             	movzbl %al,%eax
 868379d:	89 45 80             	mov    %eax,-0x80(%ebp)
 86837a0:	8b 45 18             	mov    0x18(%ebp),%eax
 86837a3:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 86837a7:	0f b6 c0             	movzbl %al,%eax
 86837aa:	89 45 84             	mov    %eax,-0x7c(%ebp)
 86837ad:	8b 45 18             	mov    0x18(%ebp),%eax
 86837b0:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 86837b4:	0f b6 c0             	movzbl %al,%eax
 86837b7:	89 45 88             	mov    %eax,-0x78(%ebp)
 86837ba:	8b 45 18             	mov    0x18(%ebp),%eax
 86837bd:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 86837c1:	0f b6 c0             	movzbl %al,%eax
 86837c4:	89 45 8c             	mov    %eax,-0x74(%ebp)
 86837c7:	8b 45 18             	mov    0x18(%ebp),%eax
 86837ca:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 86837ce:	0f b6 c0             	movzbl %al,%eax
 86837d1:	89 45 90             	mov    %eax,-0x70(%ebp)
 86837d4:	8b 45 18             	mov    0x18(%ebp),%eax
 86837d7:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 86837db:	0f b6 c0             	movzbl %al,%eax
 86837de:	89 45 94             	mov    %eax,-0x6c(%ebp)
 86837e1:	8b 45 18             	mov    0x18(%ebp),%eax
 86837e4:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 86837e8:	0f b7 c0             	movzwl %ax,%eax
 86837eb:	89 45 98             	mov    %eax,-0x68(%ebp)
 86837ee:	8b 45 18             	mov    0x18(%ebp),%eax
 86837f1:	89 04 24             	mov    %eax,(%esp)
 86837f4:	e8 73 18 a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 86837f9:	0f b6 c0             	movzbl %al,%eax
 86837fc:	89 45 9c             	mov    %eax,-0x64(%ebp)
 86837ff:	8b 45 18             	mov    0x18(%ebp),%eax
 8683802:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8683806:	0f b7 c0             	movzwl %ax,%eax
 8683809:	89 45 a0             	mov    %eax,-0x60(%ebp)
 868380c:	8b 45 18             	mov    0x18(%ebp),%eax
 868380f:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8683813:	0f b6 c0             	movzbl %al,%eax
 8683816:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8683819:	8b 45 18             	mov    0x18(%ebp),%eax
 868381c:	8b 40 0d             	mov    0xd(%eax),%eax
 868381f:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8683822:	8b 45 18             	mov    0x18(%ebp),%eax
 8683825:	8b 78 07             	mov    0x7(%eax),%edi
 8683828:	8b 75 1c             	mov    0x1c(%ebp),%esi
 868382b:	8b 45 18             	mov    0x18(%ebp),%eax
 868382e:	8b 58 02             	mov    0x2(%eax),%ebx
 8683831:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8683834:	8b 45 08             	mov    0x8(%ebp),%eax
 8683837:	8b 10                	mov    (%eax),%edx
 8683839:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 868383f:	89 44 24 74          	mov    %eax,0x74(%esp)
 8683843:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8683849:	89 44 24 70          	mov    %eax,0x70(%esp)
 868384d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8683853:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 8683857:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 868385d:	89 44 24 68          	mov    %eax,0x68(%esp)
 8683861:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8683867:	89 44 24 64          	mov    %eax,0x64(%esp)
 868386b:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8683871:	89 44 24 60          	mov    %eax,0x60(%esp)
 8683875:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 868387b:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 868387f:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8683885:	89 44 24 58          	mov    %eax,0x58(%esp)
 8683889:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 868388f:	89 44 24 54          	mov    %eax,0x54(%esp)
 8683893:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8683899:	89 44 24 50          	mov    %eax,0x50(%esp)
 868389d:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 86838a3:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 86838a7:	8b 45 80             	mov    -0x80(%ebp),%eax
 86838aa:	89 44 24 48          	mov    %eax,0x48(%esp)
 86838ae:	8b 45 84             	mov    -0x7c(%ebp),%eax
 86838b1:	89 44 24 44          	mov    %eax,0x44(%esp)
 86838b5:	8b 45 88             	mov    -0x78(%ebp),%eax
 86838b8:	89 44 24 40          	mov    %eax,0x40(%esp)
 86838bc:	8b 45 8c             	mov    -0x74(%ebp),%eax
 86838bf:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86838c3:	8b 45 90             	mov    -0x70(%ebp),%eax
 86838c6:	89 44 24 38          	mov    %eax,0x38(%esp)
 86838ca:	8b 45 94             	mov    -0x6c(%ebp),%eax
 86838cd:	89 44 24 34          	mov    %eax,0x34(%esp)
 86838d1:	8b 45 98             	mov    -0x68(%ebp),%eax
 86838d4:	89 44 24 30          	mov    %eax,0x30(%esp)
 86838d8:	8b 45 9c             	mov    -0x64(%ebp),%eax
 86838db:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86838df:	8b 45 a0             	mov    -0x60(%ebp),%eax
 86838e2:	89 44 24 28          	mov    %eax,0x28(%esp)
 86838e6:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 86838e9:	89 44 24 24          	mov    %eax,0x24(%esp)
 86838ed:	8b 45 a8             	mov    -0x58(%ebp),%eax
 86838f0:	89 44 24 20          	mov    %eax,0x20(%esp)
 86838f4:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 86838f8:	89 74 24 18          	mov    %esi,0x18(%esp)
 86838fc:	8b 45 14             	mov    0x14(%ebp),%eax
 86838ff:	89 44 24 14          	mov    %eax,0x14(%esp)
 8683903:	8b 45 10             	mov    0x10(%ebp),%eax
 8683906:	89 44 24 10          	mov    %eax,0x10(%esp)
 868390a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 868390e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8683912:	c7 44 24 04 48 03 cf 	movl   $0x8cf0348,0x4(%esp)
 8683919:	08 
 868391a:	89 14 24             	mov    %edx,(%esp)
 868391d:	e8 dc 8f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683922:	eb 1b                	jmp    868393f <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x535>
 8683924:	89 d3                	mov    %edx,%ebx
 8683926:	89 c6                	mov    %eax,%esi
 8683928:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868392b:	89 04 24             	mov    %eax,(%esp)
 868392e:	e8 49 85 e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 8683933:	89 f0                	mov    %esi,%eax
 8683935:	89 da                	mov    %ebx,%edx
 8683937:	89 04 24             	mov    %eax,(%esp)
 868393a:	e8 11 fe 45 00       	call   8ae3750 <_Unwind_Resume>
 868393f:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8683942:	89 04 24             	mov    %eax,(%esp)
 8683945:	e8 32 85 e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 868394a:	eb 01                	jmp    868394d <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x543>
 868394c:	90                   	nop
 868394d:	83 7d 1c 08          	cmpl   $0x8,0x1c(%ebp)
 8683951:	0f 85 bd 00 00 00    	jne    8683a14 <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x60a>
 8683957:	8b 45 18             	mov    0x18(%ebp),%eax
 868395a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 868395e:	3c 01                	cmp    $0x1,%al
 8683960:	0f 85 ae 00 00 00    	jne    8683a14 <_ZN15cUserHistoryLog7ItemDelE10INVEN_TYPEiiRK10Inven_Item14eItemDelReason+0x60a>
 8683966:	8b 45 18             	mov    0x18(%ebp),%eax
 8683969:	83 c0 11             	add    $0x11,%eax
 868396c:	89 04 24             	mov    %eax,(%esp)
 868396f:	e8 34 7c c0 ff       	call   828b5a8 <_ZNK17stAmplifyOption_t7GetLockEv>
 8683974:	0f b6 d8             	movzbl %al,%ebx
 8683977:	8b 45 18             	mov    0x18(%ebp),%eax
 868397a:	83 c0 11             	add    $0x11,%eax
 868397d:	89 04 24             	mov    %eax,(%esp)
 8683980:	e8 ed cd ac ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8683985:	0f b7 f8             	movzwl %ax,%edi
 8683988:	8b 45 18             	mov    0x18(%ebp),%eax
 868398b:	83 c0 11             	add    $0x11,%eax
 868398e:	89 04 24             	mov    %eax,(%esp)
 8683991:	e8 9c cd ac ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8683996:	0f b6 c0             	movzbl %al,%eax
 8683999:	89 45 ac             	mov    %eax,-0x54(%ebp)
 868399c:	8b 45 18             	mov    0x18(%ebp),%eax
 868399f:	8b 40 0d             	mov    0xd(%eax),%eax
 86839a2:	89 45 b0             	mov    %eax,-0x50(%ebp)
 86839a5:	8b 45 18             	mov    0x18(%ebp),%eax
 86839a8:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 86839ac:	83 e0 1f             	and    $0x1f,%eax
 86839af:	0f b6 c0             	movzbl %al,%eax
 86839b2:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 86839b5:	8b 45 18             	mov    0x18(%ebp),%eax
 86839b8:	89 04 24             	mov    %eax,(%esp)
 86839bb:	e8 7a 3e a7 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 86839c0:	89 c6                	mov    %eax,%esi
 86839c2:	8b 45 18             	mov    0x18(%ebp),%eax
 86839c5:	89 04 24             	mov    %eax,(%esp)
 86839c8:	e8 9f 16 a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 86839cd:	0f b6 c8             	movzbl %al,%ecx
 86839d0:	8b 45 18             	mov    0x18(%ebp),%eax
 86839d3:	8b 50 02             	mov    0x2(%eax),%edx
 86839d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86839d9:	8b 00                	mov    (%eax),%eax
 86839db:	89 5c 24 24          	mov    %ebx,0x24(%esp)
 86839df:	89 7c 24 20          	mov    %edi,0x20(%esp)
 86839e3:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 86839e6:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 86839ea:	8b 5d b0             	mov    -0x50(%ebp),%ebx
 86839ed:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86839f1:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 86839f4:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86839f8:	89 74 24 10          	mov    %esi,0x10(%esp)
 86839fc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8683a00:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683a04:	c7 44 24 04 b4 03 cf 	movl   $0x8cf03b4,0x4(%esp)
 8683a0b:	08 
 8683a0c:	89 04 24             	mov    %eax,(%esp)
 8683a0f:	e8 ea 8e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683a14:	81 c4 7c 01 00 00    	add    $0x17c,%esp
 8683a1a:	5b                   	pop    %ebx
 8683a1b:	5e                   	pop    %esi
 8683a1c:	5f                   	pop    %edi
 8683a1d:	5d                   	pop    %ebp
 8683a1e:	c3                   	ret
 8683a1f:	90                   	nop

```

```c
// cUserHistoryLog::ItemDel @ 0x868340a

/* cUserHistoryLog::ItemDel(INVEN_TYPE, int, int, Inven_Item const&, eItemDelReason) */

void __thiscall
cUserHistoryLog::ItemDel
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          Inven_Item *param_5,int param_6)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  CItemGloballyUniqueIdentifierPrint local_46 [21];
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  if ((param_6 == 1) || (param_6 == 2)) {
    if (this[0x22] != (cUserHistoryLog)0x0) {
      CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_46);
                    /* try { // try from 08683452 to 0868369c has its CatchHandler @ 0868369f */
      uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                         (local_46,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
      uVar18 = Inven_Item::GetReSealCount(param_5);
      IVar1 = *param_5;
      IVar2 = param_5[0x32];
      IVar3 = param_5[0x31];
      IVar4 = param_5[0x30];
      IVar5 = param_5[0x2f];
      IVar6 = param_5[0x2e];
      IVar7 = param_5[0x2d];
      IVar8 = param_5[0x2c];
      IVar9 = param_5[0x2b];
      IVar10 = param_5[0x2a];
      IVar11 = param_5[0x29];
      IVar12 = param_5[0x28];
      IVar13 = param_5[0x27];
      IVar14 = param_5[0x26];
      IVar15 = param_5[0x25];
      uVar16 = *(ushort *)(param_5 + 0xb);
      uVar19 = Inven_Item::GetUpgrade(param_5);
      CUser::LogHistory(*(CUser **)this,
                        "Item-,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                        ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,this + 0x22,
                        this + 4,uVar19 & 0xff,(uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,
                        (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                        (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                        (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                        (uint)(byte)IVar1,uVar18 & 0xff,uVar17);
      CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_46);
    }
  }
  else {
    CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 086836e5 to 08683921 has its CatchHandler @ 08683924 */
    uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                       (local_31,(itemGloballyUniqueIdentifier_t *)(param_5 + 0x15));
    uVar18 = Inven_Item::GetReSealCount(param_5);
    IVar1 = *param_5;
    IVar2 = param_5[0x32];
    IVar3 = param_5[0x31];
    IVar4 = param_5[0x30];
    IVar5 = param_5[0x2f];
    IVar6 = param_5[0x2e];
    IVar7 = param_5[0x2d];
    IVar8 = param_5[0x2c];
    IVar9 = param_5[0x2b];
    IVar10 = param_5[0x2a];
    IVar11 = param_5[0x29];
    IVar12 = param_5[0x28];
    IVar13 = param_5[0x27];
    IVar14 = param_5[0x26];
    IVar15 = param_5[0x25];
    uVar16 = *(ushort *)(param_5 + 0xb);
    uVar19 = Inven_Item::GetUpgrade(param_5);
    CUser::LogHistory(*(CUser **)this,
                      "Item-,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                      ,param_2,*(undefined4 *)(param_5 + 2),param_3,param_4,param_6,
                      *(undefined4 *)(param_5 + 7),*(undefined4 *)(param_5 + 0xd),
                      (uint)(byte)param_5[0x11],(uint)*(ushort *)(param_5 + 0x12),uVar19 & 0xff,
                      (uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,(uint)(byte)IVar13,
                      (uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,(uint)(byte)IVar9,
                      (uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,(uint)(byte)IVar5,
                      (uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,(uint)(byte)IVar1,
                      uVar18 & 0xff,uVar17);
    CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  }
  if ((param_6 == 8) && (param_5[1] == (Inven_Item)0x1)) {
    uVar18 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_5 + 0x11));
    uVar19 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_5 + 0x11));
    uVar20 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_5 + 0x11));
    uVar17 = *(undefined4 *)(param_5 + 0xd);
    IVar1 = param_5[0x33];
    uVar21 = Inven_Item::get_add_info(param_5);
    uVar22 = Inven_Item::GetUpgrade(param_5);
    CUser::LogHistory(*(CUser **)this,"Compound-,%u,%d,%d,%d,%d,%d,%d,%d,",
                      *(undefined4 *)(param_5 + 2),uVar22 & 0xff,uVar21,(uint)((byte)IVar1 & 0x1f),
                      uVar17,uVar20 & 0xff,uVar19 & 0xffff,uVar18 & 0xff);
  }
  return;
}

```

---

## ItemDelCargo

```asm
// === 08683d20 cUserHistoryLog::ItemDelCargo  [0x08683d20-0x8683d59] ===
 8683d20:	55                   	push   %ebp
 8683d21:	89 e5                	mov    %esp,%ebp
 8683d23:	83 ec 28             	sub    $0x28,%esp
 8683d26:	8b 55 18             	mov    0x18(%ebp),%edx
 8683d29:	8b 45 08             	mov    0x8(%ebp),%eax
 8683d2c:	8b 00                	mov    (%eax),%eax
 8683d2e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8683d32:	8b 55 14             	mov    0x14(%ebp),%edx
 8683d35:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683d39:	8b 55 10             	mov    0x10(%ebp),%edx
 8683d3c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683d40:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683d43:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683d47:	c7 44 24 04 ad 04 cf 	movl   $0x8cf04ad,0x4(%esp)
 8683d4e:	08 
 8683d4f:	89 04 24             	mov    %eax,(%esp)
 8683d52:	e8 a7 8b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683d57:	c9                   	leave
 8683d58:	c3                   	ret
 8683d59:	90                   	nop

```

```c
// cUserHistoryLog::ItemDelCargo @ 0x8683d20

/* cUserHistoryLog::ItemDelCargo(int, int, int, eItemDelReason) */

void __thiscall
cUserHistoryLog::ItemDelCargo
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"Inven-,%d,%d,%d,%d",param_1,param_2,param_3,param_5);
  return;
}

```

---

## ItemLockUsingLog

```asm
// === 08689808 cUserHistoryLog::ItemLockUsingLog  [0x08689808-0x868984f] ===
 8689808:	55                   	push   %ebp
 8689809:	89 e5                	mov    %esp,%ebp
 868980b:	83 ec 38             	sub    $0x38,%esp
 868980e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8689811:	88 45 f4             	mov    %al,-0xc(%ebp)
 8689814:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8689818:	8b 45 08             	mov    0x8(%ebp),%eax
 868981b:	8b 00                	mov    (%eax),%eax
 868981d:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8689820:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8689824:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8689827:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 868982b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 868982e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8689832:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8689835:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8689839:	89 54 24 08          	mov    %edx,0x8(%esp)
 868983d:	c7 44 24 04 53 11 cf 	movl   $0x8cf1153,0x4(%esp)
 8689844:	08 
 8689845:	89 04 24             	mov    %eax,(%esp)
 8689848:	e8 b1 30 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868984d:	c9                   	leave
 868984e:	c3                   	ret
 868984f:	90                   	nop

```

```c
// cUserHistoryLog::ItemLockUsingLog @ 0x8689808

/* cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int) */

void __thiscall
cUserHistoryLog::ItemLockUsingLog
          (cUserHistoryLog *this,uchar param_1,int param_2,int param_3,int param_4,int param_5)

{
  CUser::LogHistory(*(CUser **)this,"ItemLock,%d,%d,%d,%d,%d",(uint)param_1,param_2,param_3,param_4,
                    param_5);
  return;
}

```

---

## ItemMakingSkillAdd

```asm
// === 08686a88 cUserHistoryLog::ItemMakingSkillAdd  [0x08686a88-0x8686ac9] ===
 8686a88:	55                   	push   %ebp
 8686a89:	89 e5                	mov    %esp,%ebp
 8686a8b:	83 ec 38             	sub    $0x38,%esp
 8686a8e:	8b 45 18             	mov    0x18(%ebp),%eax
 8686a91:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8686a95:	0f bf 4d f4          	movswl -0xc(%ebp),%ecx
 8686a99:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686a9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8686a9f:	8b 00                	mov    (%eax),%eax
 8686aa1:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8686aa5:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686aa8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686aac:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686aaf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686ab3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686ab7:	c7 44 24 04 f7 0e cf 	movl   $0x8cf0ef7,0x4(%esp)
 8686abe:	08 
 8686abf:	89 04 24             	mov    %eax,(%esp)
 8686ac2:	e8 37 5e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686ac7:	c9                   	leave
 8686ac8:	c3                   	ret
 8686ac9:	90                   	nop

```

```c
// cUserHistoryLog::ItemMakingSkillAdd @ 0x8686a88

/* cUserHistoryLog::ItemMakingSkillAdd(ENUM_ITEM_MAKING_TYPE, int, int, short) */

void __thiscall
cUserHistoryLog::ItemMakingSkillAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          short param_5)

{
  CUser::LogHistory(*(CUser **)this,"ItemMakingSkill+,%d,%d,%d,%d",param_2,param_3,param_4,
                    (int)param_5);
  return;
}

```

---

## KillMonster

```asm
// === 086851ac cUserHistoryLog::KillMonster  [0x086851ac-0x868531f] ===
 86851ac:	55                   	push   %ebp
 86851ad:	89 e5                	mov    %esp,%ebp
 86851af:	57                   	push   %edi
 86851b0:	56                   	push   %esi
 86851b1:	53                   	push   %ebx
 86851b2:	81 ec ac 00 00 00    	sub    $0xac,%esp
 86851b8:	8b 5d 18             	mov    0x18(%ebp),%ebx
 86851bb:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86851be:	8b 55 24             	mov    0x24(%ebp),%edx
 86851c1:	8b 45 28             	mov    0x28(%ebp),%eax
 86851c4:	66 89 5d e4          	mov    %bx,-0x1c(%ebp)
 86851c8:	66 89 4d e0          	mov    %cx,-0x20(%ebp)
 86851cc:	88 55 dc             	mov    %dl,-0x24(%ebp)
 86851cf:	88 45 d8             	mov    %al,-0x28(%ebp)
 86851d2:	8b 45 34             	mov    0x34(%ebp),%eax
 86851d5:	89 45 ac             	mov    %eax,-0x54(%ebp)
 86851d8:	80 7d d8 00          	cmpb   $0x0,-0x28(%ebp)
 86851dc:	74 07                	je     86851e5 <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason+0x39>
 86851de:	be 01 00 00 00       	mov    $0x1,%esi
 86851e3:	eb 05                	jmp    86851ea <_ZN15cUserHistoryLog11KillMonsterEijjttRK15MSG_MONSTER_DIEcbii13eExpAddReason+0x3e>
 86851e5:	be 00 00 00 00       	mov    $0x0,%esi
 86851ea:	8b 45 20             	mov    0x20(%ebp),%eax
 86851ed:	0f b7 80 3d 0a 00 00 	movzwl 0xa3d(%eax),%eax
 86851f4:	98                   	cwtl
 86851f5:	89 45 b0             	mov    %eax,-0x50(%ebp)
 86851f8:	8b 45 20             	mov    0x20(%ebp),%eax
 86851fb:	0f b7 80 3b 0a 00 00 	movzwl 0xa3b(%eax),%eax
 8685202:	98                   	cwtl
 8685203:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8685206:	8b 45 20             	mov    0x20(%ebp),%eax
 8685209:	0f b7 80 39 0a 00 00 	movzwl 0xa39(%eax),%eax
 8685210:	98                   	cwtl
 8685211:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8685214:	8b 45 20             	mov    0x20(%ebp),%eax
 8685217:	0f b7 80 37 0a 00 00 	movzwl 0xa37(%eax),%eax
 868521e:	98                   	cwtl
 868521f:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8685222:	8b 45 20             	mov    0x20(%ebp),%eax
 8685225:	0f b7 80 35 0a 00 00 	movzwl 0xa35(%eax),%eax
 868522c:	98                   	cwtl
 868522d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8685230:	0f be 45 dc          	movsbl -0x24(%ebp),%eax
 8685234:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8685237:	8b 45 20             	mov    0x20(%ebp),%eax
 868523a:	8b 80 2d 0a 00 00    	mov    0xa2d(%eax),%eax
 8685240:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8685243:	8b 45 20             	mov    0x20(%ebp),%eax
 8685246:	8b 80 31 0a 00 00    	mov    0xa31(%eax),%eax
 868524c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 868524f:	8b 45 20             	mov    0x20(%ebp),%eax
 8685252:	0f b7 80 2b 0a 00 00 	movzwl 0xa2b(%eax),%eax
 8685259:	98                   	cwtl
 868525a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 868525d:	8b 45 20             	mov    0x20(%ebp),%eax
 8685260:	0f b7 80 29 0a 00 00 	movzwl 0xa29(%eax),%eax
 8685267:	98                   	cwtl
 8685268:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 868526b:	8b 45 20             	mov    0x20(%ebp),%eax
 868526e:	0f b6 80 22 0a 00 00 	movzbl 0xa22(%eax),%eax
 8685275:	0f b6 f8             	movzbl %al,%edi
 8685278:	0f b7 5d e0          	movzwl -0x20(%ebp),%ebx
 868527c:	0f b7 4d e4          	movzwl -0x1c(%ebp),%ecx
 8685280:	8b 45 08             	mov    0x8(%ebp),%eax
 8685283:	8b 10                	mov    (%eax),%edx
 8685285:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8685288:	89 44 24 54          	mov    %eax,0x54(%esp)
 868528c:	8b 45 30             	mov    0x30(%ebp),%eax
 868528f:	89 44 24 50          	mov    %eax,0x50(%esp)
 8685293:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8685296:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 868529a:	89 74 24 48          	mov    %esi,0x48(%esp)
 868529e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86852a1:	89 44 24 44          	mov    %eax,0x44(%esp)
 86852a5:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86852a8:	89 44 24 40          	mov    %eax,0x40(%esp)
 86852ac:	8b 45 b8             	mov    -0x48(%ebp),%eax
 86852af:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86852b3:	8b 45 bc             	mov    -0x44(%ebp),%eax
 86852b6:	89 44 24 38          	mov    %eax,0x38(%esp)
 86852ba:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86852bd:	89 44 24 34          	mov    %eax,0x34(%esp)
 86852c1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86852c4:	89 44 24 30          	mov    %eax,0x30(%esp)
 86852c8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86852cb:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86852cf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86852d2:	89 44 24 28          	mov    %eax,0x28(%esp)
 86852d6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86852d9:	89 44 24 24          	mov    %eax,0x24(%esp)
 86852dd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86852e0:	89 44 24 20          	mov    %eax,0x20(%esp)
 86852e4:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 86852e8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 86852ec:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86852f0:	8b 45 14             	mov    0x14(%ebp),%eax
 86852f3:	89 44 24 10          	mov    %eax,0x10(%esp)
 86852f7:	8b 45 10             	mov    0x10(%ebp),%eax
 86852fa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86852fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8685301:	89 44 24 08          	mov    %eax,0x8(%esp)
 8685305:	c7 44 24 04 80 09 cf 	movl   $0x8cf0980,0x4(%esp)
 868530c:	08 
 868530d:	89 14 24             	mov    %edx,(%esp)
 8685310:	e8 e9 75 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685315:	81 c4 ac 00 00 00    	add    $0xac,%esp
 868531b:	5b                   	pop    %ebx
 868531c:	5e                   	pop    %esi
 868531d:	5f                   	pop    %edi
 868531e:	5d                   	pop    %ebp
 868531f:	c3                   	ret

```

```c
// cUserHistoryLog::KillMonster @ 0x86851ac

/* cUserHistoryLog::KillMonster(int, unsigned int, unsigned int, unsigned short, unsigned short,
   MSG_MONSTER_DIE const&, char, bool, int, int, eExpAddReason) */

void __thiscall
cUserHistoryLog::KillMonster
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          uint param_4,uint param_5,int param_6,char param_7,char param_8,undefined4 param_9,
          undefined4 param_10,undefined4 param_12)

{
  CUser::LogHistory(*(CUser **)this,
                    "KillMob,%d,%d,%d, (%d:%d),%d, (%d:%d),%d,%d,%d, (%d:%d),%d,%d,%d,%d,%d,%d,%d",
                    param_1,param_2,param_3,param_4 & 0xffff,param_5 & 0xffff,
                    (uint)*(byte *)(param_6 + 0xa22),(int)*(short *)(param_6 + 0xa29),
                    (int)*(short *)(param_6 + 0xa2b),*(undefined4 *)(param_6 + 0xa31),
                    *(undefined4 *)(param_6 + 0xa2d),(int)param_7,(int)*(short *)(param_6 + 0xa35),
                    (int)*(short *)(param_6 + 0xa37),(int)*(short *)(param_6 + 0xa39),
                    (int)*(short *)(param_6 + 0xa3b),(int)*(short *)(param_6 + 0xa3d),
                    (uint)(param_8 != '\0'),param_9,param_10,param_12);
  return;
}

```

---

## LeaveDungeon

```asm
// === 08684968 cUserHistoryLog::LeaveDungeon  [0x08684968-0x86849a1] ===
 8684968:	55                   	push   %ebp
 8684969:	89 e5                	mov    %esp,%ebp
 868496b:	83 ec 28             	sub    $0x28,%esp
 868496e:	8b 45 08             	mov    0x8(%ebp),%eax
 8684971:	8b 00                	mov    (%eax),%eax
 8684973:	8b 55 14             	mov    0x14(%ebp),%edx
 8684976:	89 54 24 14          	mov    %edx,0x14(%esp)
 868497a:	8b 55 18             	mov    0x18(%ebp),%edx
 868497d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684981:	8b 55 10             	mov    0x10(%ebp),%edx
 8684984:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684988:	8b 55 0c             	mov    0xc(%ebp),%edx
 868498b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868498f:	c7 44 24 04 c2 06 cf 	movl   $0x8cf06c2,0x4(%esp)
 8684996:	08 
 8684997:	89 04 24             	mov    %eax,(%esp)
 868499a:	e8 5f 7f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868499f:	c9                   	leave
 86849a0:	c3                   	ret
 86849a1:	90                   	nop

```

```c
// cUserHistoryLog::LeaveDungeon @ 0x8684968

/* cUserHistoryLog::LeaveDungeon(int, int, char const*, int) */

void __thiscall
cUserHistoryLog::LeaveDungeon
          (cUserHistoryLog *this,int param_1,int param_2,char *param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"DungeonLeave,%d,%d,%d,%s",param_1,param_2,param_4,param_3);
  return;
}

```

---

## LeaveDungeon_086849dc

```asm
// === 086849dc cUserHistoryLog::LeaveDungeon  [0x086849dc-0x8684a15] ===
 86849dc:	55                   	push   %ebp
 86849dd:	89 e5                	mov    %esp,%ebp
 86849df:	83 ec 28             	sub    $0x28,%esp
 86849e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86849e5:	8b 00                	mov    (%eax),%eax
 86849e7:	8b 55 14             	mov    0x14(%ebp),%edx
 86849ea:	89 54 24 14          	mov    %edx,0x14(%esp)
 86849ee:	8b 55 18             	mov    0x18(%ebp),%edx
 86849f1:	89 54 24 10          	mov    %edx,0x10(%esp)
 86849f5:	8b 55 10             	mov    0x10(%ebp),%edx
 86849f8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86849fc:	8b 55 0c             	mov    0xc(%ebp),%edx
 86849ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684a03:	c7 44 24 04 f6 06 cf 	movl   $0x8cf06f6,0x4(%esp)
 8684a0a:	08 
 8684a0b:	89 04 24             	mov    %eax,(%esp)
 8684a0e:	e8 eb 7e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684a13:	c9                   	leave
 8684a14:	c3                   	ret
 8684a15:	90                   	nop

```

```c
// cUserHistoryLog::LeaveDungeon @ 0x86849dc

/* cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int) */

void __thiscall
cUserHistoryLog::LeaveDungeon
          (cUserHistoryLog *this,char *param_1,int param_2,char *param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"DungeonLeave,\"%s\",%d,%d,%s",param_1,param_2,param_4,param_3);
  return;
}

```

---

## LeaveDungeon_08684a42

```asm
// === 08684a42 cUserHistoryLog::LeaveDungeon  [0x08684a42-0x8684a6d] ===
 8684a42:	55                   	push   %ebp
 8684a43:	89 e5                	mov    %esp,%ebp
 8684a45:	83 ec 18             	sub    $0x18,%esp
 8684a48:	8b 45 08             	mov    0x8(%ebp),%eax
 8684a4b:	8b 00                	mov    (%eax),%eax
 8684a4d:	8b 55 10             	mov    0x10(%ebp),%edx
 8684a50:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684a54:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684a57:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684a5b:	c7 44 24 04 26 07 cf 	movl   $0x8cf0726,0x4(%esp)
 8684a62:	08 
 8684a63:	89 04 24             	mov    %eax,(%esp)
 8684a66:	e8 93 7e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684a6b:	c9                   	leave
 8684a6c:	c3                   	ret
 8684a6d:	90                   	nop

```

```c
// cUserHistoryLog::LeaveDungeon @ 0x8684a42

/* cUserHistoryLog::LeaveDungeon(char const*, int) */

void __thiscall cUserHistoryLog::LeaveDungeon(cUserHistoryLog *this,char *param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"DungeonLeave,\"%s\",%d",param_1,param_2);
  return;
}

```

---

## LevelDown

```asm
// === 086845de cUserHistoryLog::LevelDown  [0x086845de-0x8684609] ===
 86845de:	55                   	push   %ebp
 86845df:	89 e5                	mov    %esp,%ebp
 86845e1:	83 ec 18             	sub    $0x18,%esp
 86845e4:	8b 55 10             	mov    0x10(%ebp),%edx
 86845e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86845ea:	8b 00                	mov    (%eax),%eax
 86845ec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86845f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 86845f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 86845f7:	c7 44 24 04 b9 05 cf 	movl   $0x8cf05b9,0x4(%esp)
 86845fe:	08 
 86845ff:	89 04 24             	mov    %eax,(%esp)
 8684602:	e8 f7 82 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684607:	c9                   	leave
 8684608:	c3                   	ret
 8684609:	90                   	nop

```

```c
// cUserHistoryLog::LevelDown @ 0x86845de

/* cUserHistoryLog::LevelDown(int, eLevelDownReason) */

void __thiscall
cUserHistoryLog::LevelDown(cUserHistoryLog *this,undefined4 param_1,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Level-,%d,%d",param_1,param_3);
  return;
}

```

---

## LevelUp

```asm
// === 086845b2 cUserHistoryLog::LevelUp  [0x086845b2-0x86845dd] ===
 86845b2:	55                   	push   %ebp
 86845b3:	89 e5                	mov    %esp,%ebp
 86845b5:	83 ec 18             	sub    $0x18,%esp
 86845b8:	8b 55 10             	mov    0x10(%ebp),%edx
 86845bb:	8b 45 08             	mov    0x8(%ebp),%eax
 86845be:	8b 00                	mov    (%eax),%eax
 86845c0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86845c4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86845c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86845cb:	c7 44 24 04 ac 05 cf 	movl   $0x8cf05ac,0x4(%esp)
 86845d2:	08 
 86845d3:	89 04 24             	mov    %eax,(%esp)
 86845d6:	e8 23 83 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86845db:	c9                   	leave
 86845dc:	c3                   	ret
 86845dd:	90                   	nop

```

```c
// cUserHistoryLog::LevelUp @ 0x86845b2

/* cUserHistoryLog::LevelUp(int, eLevelUpReason) */

void __thiscall
cUserHistoryLog::LevelUp(cUserHistoryLog *this,undefined4 param_1,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Level+,%d,%d",param_1,param_3);
  return;
}

```

---

## Login

```asm
// === 08683d86 cUserHistoryLog::Login  [0x08683d86-0x86840c3] ===
 8683d86:	55                   	push   %ebp
 8683d87:	89 e5                	mov    %esp,%ebp
 8683d89:	57                   	push   %edi
 8683d8a:	56                   	push   %esi
 8683d8b:	53                   	push   %ebx
 8683d8c:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 8683d92:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8683d95:	88 45 94             	mov    %al,-0x6c(%ebp)
 8683d98:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8683d9f:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8683da6:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8683dad:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8683db4:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8683dbb:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8683dc2:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8683dc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8683dcc:	8b 00                	mov    (%eax),%eax
 8683dce:	89 04 24             	mov    %eax,(%esp)
 8683dd1:	e8 5c c6 a9 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8683dd6:	05 da 00 00 00       	add    $0xda,%eax
 8683ddb:	89 04 24             	mov    %eax,(%esp)
 8683dde:	e8 f3 09 ab ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8683de3:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8683de6:	c7 45 d0 0a 00 00 00 	movl   $0xa,-0x30(%ebp)
 8683ded:	e9 b1 00 00 00       	jmp    8683ea3 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x11d>
 8683df2:	8b 45 08             	mov    0x8(%ebp),%eax
 8683df5:	8b 00                	mov    (%eax),%eax
 8683df7:	89 04 24             	mov    %eax,(%esp)
 8683dfa:	e8 7f 64 a5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8683dff:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8683e02:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683e06:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8683e0d:	00 
 8683e0e:	89 04 24             	mov    %eax,(%esp)
 8683e11:	e8 c8 83 e7 ff       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8683e16:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8683e19:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8683e1d:	74 7f                	je     8683e9e <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x118>
 8683e1f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8683e22:	8b 40 02             	mov    0x2(%eax),%eax
 8683e25:	85 c0                	test   %eax,%eax
 8683e27:	74 76                	je     8683e9f <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x119>
 8683e29:	83 7d d0 0a          	cmpl   $0xa,-0x30(%ebp)
 8683e2d:	75 1c                	jne    8683e4b <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0xc5>
 8683e2f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8683e32:	89 04 24             	mov    %eax,(%esp)
 8683e35:	e8 32 12 a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8683e3a:	0f b6 c0             	movzbl %al,%eax
 8683e3d:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8683e40:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8683e43:	8b 40 02             	mov    0x2(%eax),%eax
 8683e46:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8683e49:	eb 11                	jmp    8683e5c <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0xd6>
 8683e4b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8683e4e:	89 04 24             	mov    %eax,(%esp)
 8683e51:	e8 16 12 a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8683e56:	0f b6 c0             	movzbl %al,%eax
 8683e59:	01 45 b4             	add    %eax,-0x4c(%ebp)
 8683e5c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8683e5f:	8b 40 02             	mov    0x2(%eax),%eax
 8683e62:	89 c3                	mov    %eax,%ebx
 8683e64:	e8 32 83 a4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8683e69:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8683e6d:	89 04 24             	mov    %eax,(%esp)
 8683e70:	e8 bd bb cd ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8683e75:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8683e78:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8683e7c:	74 21                	je     8683e9f <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x119>
 8683e7e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8683e81:	89 04 24             	mov    %eax,(%esp)
 8683e84:	e8 4d d4 a6 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8683e89:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8683e8c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8683e90:	74 06                	je     8683e98 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x112>
 8683e92:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 8683e96:	75 07                	jne    8683e9f <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x119>
 8683e98:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 8683e9c:	eb 01                	jmp    8683e9f <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x119>
 8683e9e:	90                   	nop
 8683e9f:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8683ea3:	83 7d d0 13          	cmpl   $0x13,-0x30(%ebp)
 8683ea7:	0f 9e c0             	setle  %al
 8683eaa:	84 c0                	test   %al,%al
 8683eac:	0f 85 40 ff ff ff    	jne    8683df2 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x6c>
 8683eb2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8683eb9:	eb 42                	jmp    8683efd <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x177>
 8683ebb:	8b 45 08             	mov    0x8(%ebp),%eax
 8683ebe:	8b 00                	mov    (%eax),%eax
 8683ec0:	89 04 24             	mov    %eax,(%esp)
 8683ec3:	e8 b6 63 a5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8683ec8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8683ecb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683ecf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8683ed6:	00 
 8683ed7:	89 04 24             	mov    %eax,(%esp)
 8683eda:	e8 ff 82 e7 ff       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8683edf:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8683ee2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8683ee6:	74 10                	je     8683ef8 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x172>
 8683ee8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8683eeb:	8b 40 02             	mov    0x2(%eax),%eax
 8683eee:	85 c0                	test   %eax,%eax
 8683ef0:	74 07                	je     8683ef9 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x173>
 8683ef2:	83 45 bc 01          	addl   $0x1,-0x44(%ebp)
 8683ef6:	eb 01                	jmp    8683ef9 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x173>
 8683ef8:	90                   	nop
 8683ef9:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8683efd:	83 7d e0 73          	cmpl   $0x73,-0x20(%ebp)
 8683f01:	0f 9e c0             	setle  %al
 8683f04:	84 c0                	test   %al,%al
 8683f06:	75 b3                	jne    8683ebb <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x135>
 8683f08:	8b 45 08             	mov    0x8(%ebp),%eax
 8683f0b:	8b 00                	mov    (%eax),%eax
 8683f0d:	89 04 24             	mov    %eax,(%esp)
 8683f10:	e8 1d c5 a9 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8683f15:	8b 40 7b             	mov    0x7b(%eax),%eax
 8683f18:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8683f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8683f1e:	8b 00                	mov    (%eax),%eax
 8683f20:	89 04 24             	mov    %eax,(%esp)
 8683f23:	e8 a6 32 01 00       	call   86971ce <_ZN5CUser13GetFirstLoginEv>
 8683f28:	88 45 c7             	mov    %al,-0x39(%ebp)
 8683f2b:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8683f2f:	75 0f                	jne    8683f40 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1ba>
 8683f31:	80 7d c7 00          	cmpb   $0x0,-0x39(%ebp)
 8683f35:	74 09                	je     8683f40 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1ba>
 8683f37:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8683f3e:	eb 3d                	jmp    8683f7d <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1f7>
 8683f40:	80 7d 94 00          	cmpb   $0x0,-0x6c(%ebp)
 8683f44:	75 0f                	jne    8683f55 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1cf>
 8683f46:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8683f4a:	74 09                	je     8683f55 <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1cf>
 8683f4c:	c7 45 a4 01 00 00 00 	movl   $0x1,-0x5c(%ebp)
 8683f53:	eb 28                	jmp    8683f7d <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1f7>
 8683f55:	80 7d 94 01          	cmpb   $0x1,-0x6c(%ebp)
 8683f59:	75 0f                	jne    8683f6a <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1e4>
 8683f5b:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8683f5f:	74 09                	je     8683f6a <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1e4>
 8683f61:	c7 45 a4 02 00 00 00 	movl   $0x2,-0x5c(%ebp)
 8683f68:	eb 13                	jmp    8683f7d <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1f7>
 8683f6a:	80 7d 94 02          	cmpb   $0x2,-0x6c(%ebp)
 8683f6e:	75 0d                	jne    8683f7d <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1f7>
 8683f70:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8683f74:	74 07                	je     8683f7d <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x1f7>
 8683f76:	c7 45 a4 03 00 00 00 	movl   $0x3,-0x5c(%ebp)
 8683f7d:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8683f84:	8b 45 08             	mov    0x8(%ebp),%eax
 8683f87:	8b 00                	mov    (%eax),%eax
 8683f89:	89 04 24             	mov    %eax,(%esp)
 8683f8c:	e8 03 b9 ba ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8683f91:	89 c3                	mov    %eax,%ebx
 8683f93:	e8 03 82 a4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8683f98:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8683f9c:	89 04 24             	mov    %eax,(%esp)
 8683f9f:	e8 4e 76 ba ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 8683fa4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8683fa7:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8683fab:	74 1f                	je     8683fcc <_ZN15cUserHistoryLog5LoginEPKcS1_iihi+0x246>
 8683fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8683fb0:	8b 00                	mov    (%eax),%eax
 8683fb2:	89 04 24             	mov    %eax,(%esp)
 8683fb5:	e8 6c 10 cf ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 8683fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8683fbe:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8683fc1:	89 04 24             	mov    %eax,(%esp)
 8683fc4:	e8 d7 fb 00 00       	call   8693ba0 <_ZN17STExpertJobScript8GetLevelEj>
 8683fc9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8683fcc:	8b 45 08             	mov    0x8(%ebp),%eax
 8683fcf:	8b 18                	mov    (%eax),%ebx
 8683fd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8683fd4:	8b 00                	mov    (%eax),%eax
 8683fd6:	89 04 24             	mov    %eax,(%esp)
 8683fd9:	e8 b6 b8 ba ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 8683fde:	89 c6                	mov    %eax,%esi
 8683fe0:	8b 45 08             	mov    0x8(%ebp),%eax
 8683fe3:	8b 00                	mov    (%eax),%eax
 8683fe5:	89 04 24             	mov    %eax,(%esp)
 8683fe8:	e8 4f b2 ba ff       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 8683fed:	0f be c0             	movsbl %al,%eax
 8683ff0:	89 45 88             	mov    %eax,-0x78(%ebp)
 8683ff3:	8b 45 08             	mov    0x8(%ebp),%eax
 8683ff6:	8b 00                	mov    (%eax),%eax
 8683ff8:	89 04 24             	mov    %eax,(%esp)
 8683ffb:	e8 94 cc a8 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8684000:	0f be c0             	movsbl %al,%eax
 8684003:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8684006:	8b 45 08             	mov    0x8(%ebp),%eax
 8684009:	8b 00                	mov    (%eax),%eax
 868400b:	89 04 24             	mov    %eax,(%esp)
 868400e:	e8 a5 62 a5 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8684013:	89 c7                	mov    %eax,%edi
 8684015:	8b 45 08             	mov    0x8(%ebp),%eax
 8684018:	8b 00                	mov    (%eax),%eax
 868401a:	89 04 24             	mov    %eax,(%esp)
 868401d:	e8 fe 9e a7 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8684022:	89 c1                	mov    %eax,%ecx
 8684024:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8684028:	89 45 90             	mov    %eax,-0x70(%ebp)
 868402b:	8b 45 08             	mov    0x8(%ebp),%eax
 868402e:	8b 10                	mov    (%eax),%edx
 8684030:	89 5c 24 50          	mov    %ebx,0x50(%esp)
 8684034:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8684037:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 868403b:	89 74 24 48          	mov    %esi,0x48(%esp)
 868403f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8684042:	89 44 24 44          	mov    %eax,0x44(%esp)
 8684046:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8684049:	89 44 24 40          	mov    %eax,0x40(%esp)
 868404d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8684050:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8684054:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8684057:	89 44 24 38          	mov    %eax,0x38(%esp)
 868405b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 868405e:	89 44 24 34          	mov    %eax,0x34(%esp)
 8684062:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8684065:	89 44 24 30          	mov    %eax,0x30(%esp)
 8684069:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 868406c:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8684070:	8b 45 88             	mov    -0x78(%ebp),%eax
 8684073:	89 44 24 28          	mov    %eax,0x28(%esp)
 8684077:	8b 45 8c             	mov    -0x74(%ebp),%eax
 868407a:	89 44 24 24          	mov    %eax,0x24(%esp)
 868407e:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8684082:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8684086:	8b 45 20             	mov    0x20(%ebp),%eax
 8684089:	89 44 24 18          	mov    %eax,0x18(%esp)
 868408d:	8b 45 90             	mov    -0x70(%ebp),%eax
 8684090:	89 44 24 14          	mov    %eax,0x14(%esp)
 8684094:	8b 45 18             	mov    0x18(%ebp),%eax
 8684097:	89 44 24 10          	mov    %eax,0x10(%esp)
 868409b:	8b 45 14             	mov    0x14(%ebp),%eax
 868409e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86840a2:	8b 45 10             	mov    0x10(%ebp),%eax
 86840a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 86840a9:	c7 44 24 04 cc 04 cf 	movl   $0x8cf04cc,0x4(%esp)
 86840b0:	08 
 86840b1:	89 14 24             	mov    %edx,(%esp)
 86840b4:	e8 45 88 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86840b9:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 86840bf:	5b                   	pop    %ebx
 86840c0:	5e                   	pop    %esi
 86840c1:	5f                   	pop    %edi
 86840c2:	5d                   	pop    %ebp
 86840c3:	c3                   	ret

```

```c
// cUserHistoryLog::Login @ 0x8683d86

/* cUserHistoryLog::Login(char const*, char const*, int, int, unsigned char, int) */

void __thiscall
cUserHistoryLog::Login
          (cUserHistoryLog *this,char *param_1,char *param_2,int param_3,int param_4,uchar param_5,
          int param_6)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  Inven_Item *this_00;
  CDataManager *this_01;
  CItem *this_02;
  CInventory *pCVar6;
  STExpertJobScript *this_03;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_60;
  uint local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_3c;
  int local_34;
  int local_24;
  
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  uVar5 = CInventory::get_money((CInventory *)(iVar4 + 0xda));
  for (local_34 = 10; local_34 < 0x14; local_34 = local_34 + 1) {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
    this_00 = (Inven_Item *)CInventory::GetInvenRef(pCVar6,0,local_34);
    if ((this_00 != (Inven_Item *)0x0) && (*(int *)(this_00 + 2) != 0)) {
      if (local_34 == 10) {
        local_58 = Inven_Item::GetUpgrade(this_00);
        local_58 = local_58 & 0xff;
        local_54 = *(undefined4 *)(this_00 + 2);
      }
      else {
        uVar7 = Inven_Item::GetUpgrade(this_00);
        local_50 = local_50 + (uVar7 & 0xff);
      }
      iVar4 = *(int *)(this_00 + 2);
      this_01 = (CDataManager *)G_CDataManager();
      this_02 = (CItem *)CDataManager::find_item(this_01,iVar4);
      if (this_02 != (CItem *)0x0) {
        iVar4 = CItem::get_rarity(this_02);
        if ((iVar4 == 0) || (iVar4 == 1)) {
          local_4c = local_4c + 1;
        }
      }
    }
  }
  for (local_24 = 0; local_24 < 0x74; local_24 = local_24 + 1) {
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
    iVar4 = CInventory::GetInvenRef(pCVar6,2,local_24);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 2) != 0)) {
      local_48 = local_48 + 1;
    }
  }
  iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  iVar4 = *(int *)(iVar4 + 0x7b);
  cVar2 = CUser::GetFirstLogin(*(CUser **)this);
  if ((iVar4 == 0) && (cVar2 != '\0')) {
    local_60 = 0;
  }
  else if ((param_5 == '\0') && (iVar4 != 0)) {
    local_60 = 1;
  }
  else if ((param_5 == '\x01') && (iVar4 != 0)) {
    local_60 = 2;
  }
  else if ((param_5 == '\x02') && (iVar4 != 0)) {
    local_60 = 3;
  }
  local_3c = 0;
  CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
  iVar4 = G_CDataManager();
  this_03 = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar4);
  if (this_03 != (STExpertJobScript *)0x0) {
    uVar7 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)this);
    local_3c = STExpertJobScript::GetLevel(this_03,uVar7);
  }
  uVar1 = *(undefined4 *)this;
  uVar8 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)this);
  cVar2 = CUserCharacInfo::getCurCharSecondGrowType(*(CUserCharacInfo **)this);
  cVar3 = CUserCharacInfo::getCurCharFirstGrowType(*(CUserCharacInfo **)this);
  uVar9 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
  uVar10 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
  CUser::LogHistory(*(CUser **)this,"IP+,%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%p",
                    param_2,param_3,param_4,(uint)param_5,param_6,uVar10,uVar9,(int)cVar3,(int)cVar2
                    ,local_60,uVar5,local_58,local_54,local_50,local_4c,local_48,uVar8,local_3c,
                    uVar1);
  return;
}

```

---

## Logout

```asm
// === 086840c4 cUserHistoryLog::Logout  [0x086840c4-0x8684129] ===
 86840c4:	55                   	push   %ebp
 86840c5:	89 e5                	mov    %esp,%ebp
 86840c7:	53                   	push   %ebx
 86840c8:	83 ec 44             	sub    $0x44,%esp
 86840cb:	8b 45 20             	mov    0x20(%ebp),%eax
 86840ce:	88 45 f4             	mov    %al,-0xc(%ebp)
 86840d1:	8b 45 08             	mov    0x8(%ebp),%eax
 86840d4:	8b 18                	mov    (%eax),%ebx
 86840d6:	e8 a6 80 a4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86840db:	89 04 24             	mov    %eax,(%esp)
 86840de:	e8 fd 2b a8 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 86840e3:	0f b6 4d f4          	movzbl -0xc(%ebp),%ecx
 86840e7:	8b 55 08             	mov    0x8(%ebp),%edx
 86840ea:	8b 12                	mov    (%edx),%edx
 86840ec:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 86840f0:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 86840f3:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 86840f7:	89 44 24 18          	mov    %eax,0x18(%esp)
 86840fb:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86840ff:	8b 45 18             	mov    0x18(%ebp),%eax
 8684102:	89 44 24 10          	mov    %eax,0x10(%esp)
 8684106:	8b 45 14             	mov    0x14(%ebp),%eax
 8684109:	89 44 24 0c          	mov    %eax,0xc(%esp)
 868410d:	8b 45 10             	mov    0x10(%ebp),%eax
 8684110:	89 44 24 08          	mov    %eax,0x8(%esp)
 8684114:	c7 44 24 04 06 05 cf 	movl   $0x8cf0506,0x4(%esp)
 868411b:	08 
 868411c:	89 14 24             	mov    %edx,(%esp)
 868411f:	e8 da 87 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684124:	83 c4 44             	add    $0x44,%esp
 8684127:	5b                   	pop    %ebx
 8684128:	5d                   	pop    %ebp
 8684129:	c3                   	ret

```

```c
// cUserHistoryLog::Logout @ 0x86840c4

/* cUserHistoryLog::Logout(char const*, char const*, int, int, int, unsigned char) */

void __thiscall
cUserHistoryLog::Logout
          (cUserHistoryLog *this,char *param_1,char *param_2,int param_3,int param_4,int param_5,
          uchar param_6)

{
  undefined4 uVar1;
  CEnvironment *this_00;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)this;
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_server_group(this_00);
  CUser::LogHistory(*(CUser **)this,"IP-,%s,%d,%d,%d,%d,%d,%p",param_2,param_3,param_4,(uint)param_6
                    ,uVar2,param_5,uVar1);
  return;
}

```

---

## MapClear

```asm
// === 08684b22 cUserHistoryLog::MapClear  [0x08684b22-0x8684b5b] ===
 8684b22:	55                   	push   %ebp
 8684b23:	89 e5                	mov    %esp,%ebp
 8684b25:	83 ec 38             	sub    $0x38,%esp
 8684b28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684b2b:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8684b2f:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8684b33:	8b 45 08             	mov    0x8(%ebp),%eax
 8684b36:	8b 00                	mov    (%eax),%eax
 8684b38:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8684b3b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8684b3f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8684b42:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8684b46:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684b4a:	c7 44 24 04 9c 07 cf 	movl   $0x8cf079c,0x4(%esp)
 8684b51:	08 
 8684b52:	89 04 24             	mov    %eax,(%esp)
 8684b55:	e8 a4 7d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684b5a:	c9                   	leave
 8684b5b:	c3                   	ret

```

```c
// cUserHistoryLog::MapClear @ 0x8684b22

/* cUserHistoryLog::MapClear(unsigned short, int, int) */

void __thiscall
cUserHistoryLog::MapClear(cUserHistoryLog *this,ushort param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"MapClear,%d,%d,%d",(uint)param_1,param_2,param_3);
  return;
}

```

---

## MercenaryCompetition

```asm
// === 08686aca cUserHistoryLog::MercenaryCompetition  [0x08686aca-0x8686b09] ===
 8686aca:	55                   	push   %ebp
 8686acb:	89 e5                	mov    %esp,%ebp
 8686acd:	83 ec 38             	sub    $0x38,%esp
 8686ad0:	8b 55 10             	mov    0x10(%ebp),%edx
 8686ad3:	8b 45 14             	mov    0x14(%ebp),%eax
 8686ad6:	88 55 f4             	mov    %dl,-0xc(%ebp)
 8686ad9:	88 45 f0             	mov    %al,-0x10(%ebp)
 8686adc:	0f be 4d f0          	movsbl -0x10(%ebp),%ecx
 8686ae0:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 8686ae4:	8b 45 08             	mov    0x8(%ebp),%eax
 8686ae7:	8b 00                	mov    (%eax),%eax
 8686ae9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686aed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686af1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686af4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686af8:	c7 44 24 04 14 0f cf 	movl   $0x8cf0f14,0x4(%esp)
 8686aff:	08 
 8686b00:	89 04 24             	mov    %eax,(%esp)
 8686b03:	e8 f6 5d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686b08:	c9                   	leave
 8686b09:	c3                   	ret

```

```c
// cUserHistoryLog::MercenaryCompetition @ 0x8686aca

/* cUserHistoryLog::MercenaryCompetition(unsigned int, char, char) */

void __thiscall
cUserHistoryLog::MercenaryCompetition(cUserHistoryLog *this,uint param_1,char param_2,char param_3)

{
  CUser::LogHistory(*(CUser **)this,"MercenaryCompetition,%u,%d,%d",param_1,(int)param_2,
                    (int)param_3);
  return;
}

```

---

## MercenaryReturn

```asm
// === 08686b0a cUserHistoryLog::MercenaryReturn  [0x08686b0a-0x8686b51] ===
 8686b0a:	55                   	push   %ebp
 8686b0b:	89 e5                	mov    %esp,%ebp
 8686b0d:	83 ec 28             	sub    $0x28,%esp
 8686b10:	8b 45 08             	mov    0x8(%ebp),%eax
 8686b13:	8b 00                	mov    (%eax),%eax
 8686b15:	8b 55 20             	mov    0x20(%ebp),%edx
 8686b18:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8686b1c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8686b1f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8686b23:	8b 55 18             	mov    0x18(%ebp),%edx
 8686b26:	89 54 24 14          	mov    %edx,0x14(%esp)
 8686b2a:	8b 55 14             	mov    0x14(%ebp),%edx
 8686b2d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686b31:	8b 55 10             	mov    0x10(%ebp),%edx
 8686b34:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686b38:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686b3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686b3f:	c7 44 24 04 34 0f cf 	movl   $0x8cf0f34,0x4(%esp)
 8686b46:	08 
 8686b47:	89 04 24             	mov    %eax,(%esp)
 8686b4a:	e8 af 5d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686b4f:	c9                   	leave
 8686b50:	c3                   	ret
 8686b51:	90                   	nop

```

```c
// cUserHistoryLog::MercenaryReturn @ 0x8686b0a

/* cUserHistoryLog::MercenaryReturn(unsigned int, int, int, int, int, int) */

void __thiscall
cUserHistoryLog::MercenaryReturn
          (cUserHistoryLog *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  CUser::LogHistory(*(CUser **)this,"MecenaryReturn,%u,%d,%d,%d,%d,%d",param_1,param_2,param_3,
                    param_4,param_5,param_6);
  return;
}

```

---

## MoneyAdd

```asm
// === 08683a20 cUserHistoryLog::MoneyAdd  [0x08683a20-0x8683a7f] ===
 8683a20:	55                   	push   %ebp
 8683a21:	89 e5                	mov    %esp,%ebp
 8683a23:	83 ec 28             	sub    $0x28,%esp
 8683a26:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8683a2a:	74 06                	je     8683a32 <_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason+0x12>
 8683a2c:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 8683a30:	75 22                	jne    8683a54 <_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason+0x34>
 8683a32:	8b 45 14             	mov    0x14(%ebp),%eax
 8683a35:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8683a39:	8b 45 10             	mov    0x10(%ebp),%eax
 8683a3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8683a40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8683a43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8683a47:	8b 45 08             	mov    0x8(%ebp),%eax
 8683a4a:	89 04 24             	mov    %eax,(%esp)
 8683a4d:	e8 8e 00 00 00       	call   8683ae0 <_ZN15cUserHistoryLog13MoneyAddTradeEii15eMoneyAddReason>
 8683a52:	eb 2a                	jmp    8683a7e <_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason+0x5e>
 8683a54:	8b 55 14             	mov    0x14(%ebp),%edx
 8683a57:	8b 45 08             	mov    0x8(%ebp),%eax
 8683a5a:	8b 00                	mov    (%eax),%eax
 8683a5c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683a60:	8b 55 10             	mov    0x10(%ebp),%edx
 8683a63:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683a67:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683a6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683a6e:	c7 44 24 04 d7 03 cf 	movl   $0x8cf03d7,0x4(%esp)
 8683a75:	08 
 8683a76:	89 04 24             	mov    %eax,(%esp)
 8683a79:	e8 80 8e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683a7e:	c9                   	leave
 8683a7f:	c3                   	ret

```

```c
// cUserHistoryLog::MoneyAdd @ 0x8683a20

/* cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason) */

void __thiscall
cUserHistoryLog::MoneyAdd(cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,int param_4)

{
  if ((param_4 == 1) || (param_4 == 2)) {
    MoneyAddTrade(this,param_1,param_2,param_4);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Money+,%d,%d,%d",param_1,param_2,param_4);
  }
  return;
}

```

---

## MoneyAddTrade

```asm
// === 08683ae0 cUserHistoryLog::MoneyAddTrade  [0x08683ae0-0x8683b37] ===
 8683ae0:	55                   	push   %ebp
 8683ae1:	89 e5                	mov    %esp,%ebp
 8683ae3:	53                   	push   %ebx
 8683ae4:	83 ec 24             	sub    $0x24,%esp
 8683ae7:	8b 45 08             	mov    0x8(%ebp),%eax
 8683aea:	83 c0 22             	add    $0x22,%eax
 8683aed:	0f b6 00             	movzbl (%eax),%eax
 8683af0:	84 c0                	test   %al,%al
 8683af2:	74 3e                	je     8683b32 <_ZN15cUserHistoryLog13MoneyAddTradeEii15eMoneyAddReason+0x52>
 8683af4:	8b 45 08             	mov    0x8(%ebp),%eax
 8683af7:	8d 58 04             	lea    0x4(%eax),%ebx
 8683afa:	8b 45 08             	mov    0x8(%ebp),%eax
 8683afd:	8d 48 22             	lea    0x22(%eax),%ecx
 8683b00:	8b 55 14             	mov    0x14(%ebp),%edx
 8683b03:	8b 45 08             	mov    0x8(%ebp),%eax
 8683b06:	8b 00                	mov    (%eax),%eax
 8683b08:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8683b0c:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8683b10:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683b14:	8b 55 10             	mov    0x10(%ebp),%edx
 8683b17:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683b1b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683b1e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683b22:	c7 44 24 04 f7 03 cf 	movl   $0x8cf03f7,0x4(%esp)
 8683b29:	08 
 8683b2a:	89 04 24             	mov    %eax,(%esp)
 8683b2d:	e8 cc 8d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683b32:	83 c4 24             	add    $0x24,%esp
 8683b35:	5b                   	pop    %ebx
 8683b36:	5d                   	pop    %ebp
 8683b37:	c3                   	ret

```

```c
// cUserHistoryLog::MoneyAddTrade @ 0x8683ae0

/* cUserHistoryLog::MoneyAddTrade(int, int, eMoneyAddReason) */

void __thiscall
cUserHistoryLog::MoneyAddTrade
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  if (this[0x22] != (cUserHistoryLog)0x0) {
    CUser::LogHistory(*(CUser **)this,"Money+,%d,%d,%d,%s(%s)",param_1,param_2,param_4,this + 0x22,
                      this + 4);
  }
  return;
}

```

---

## MoneySub

```asm
// === 08683a80 cUserHistoryLog::MoneySub  [0x08683a80-0x8683adf] ===
 8683a80:	55                   	push   %ebp
 8683a81:	89 e5                	mov    %esp,%ebp
 8683a83:	83 ec 28             	sub    $0x28,%esp
 8683a86:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
 8683a8a:	74 06                	je     8683a92 <_ZN15cUserHistoryLog8MoneySubEii15eMoneySubReason+0x12>
 8683a8c:	83 7d 14 03          	cmpl   $0x3,0x14(%ebp)
 8683a90:	75 22                	jne    8683ab4 <_ZN15cUserHistoryLog8MoneySubEii15eMoneySubReason+0x34>
 8683a92:	8b 45 14             	mov    0x14(%ebp),%eax
 8683a95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8683a99:	8b 45 10             	mov    0x10(%ebp),%eax
 8683a9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8683aa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8683aa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8683aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8683aaa:	89 04 24             	mov    %eax,(%esp)
 8683aad:	e8 86 00 00 00       	call   8683b38 <_ZN15cUserHistoryLog13MoneySubTradeEii15eMoneySubReason>
 8683ab2:	eb 2a                	jmp    8683ade <_ZN15cUserHistoryLog8MoneySubEii15eMoneySubReason+0x5e>
 8683ab4:	8b 55 14             	mov    0x14(%ebp),%edx
 8683ab7:	8b 45 08             	mov    0x8(%ebp),%eax
 8683aba:	8b 00                	mov    (%eax),%eax
 8683abc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683ac0:	8b 55 10             	mov    0x10(%ebp),%edx
 8683ac3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683ac7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683aca:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683ace:	c7 44 24 04 e7 03 cf 	movl   $0x8cf03e7,0x4(%esp)
 8683ad5:	08 
 8683ad6:	89 04 24             	mov    %eax,(%esp)
 8683ad9:	e8 20 8e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683ade:	c9                   	leave
 8683adf:	c3                   	ret

```

```c
// cUserHistoryLog::MoneySub @ 0x8683a80

/* cUserHistoryLog::MoneySub(int, int, eMoneySubReason) */

void __thiscall
cUserHistoryLog::MoneySub(cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,int param_4)

{
  if ((param_4 == 2) || (param_4 == 3)) {
    MoneySubTrade(this,param_1,param_2,param_4);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Money-,%d,%d,%d",param_1,param_2,param_4);
  }
  return;
}

```

---

## MoneySubTrade

```asm
// === 08683b38 cUserHistoryLog::MoneySubTrade  [0x08683b38-0x8683b8f] ===
 8683b38:	55                   	push   %ebp
 8683b39:	89 e5                	mov    %esp,%ebp
 8683b3b:	53                   	push   %ebx
 8683b3c:	83 ec 24             	sub    $0x24,%esp
 8683b3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8683b42:	83 c0 22             	add    $0x22,%eax
 8683b45:	0f b6 00             	movzbl (%eax),%eax
 8683b48:	84 c0                	test   %al,%al
 8683b4a:	74 3e                	je     8683b8a <_ZN15cUserHistoryLog13MoneySubTradeEii15eMoneySubReason+0x52>
 8683b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8683b4f:	8d 58 04             	lea    0x4(%eax),%ebx
 8683b52:	8b 45 08             	mov    0x8(%ebp),%eax
 8683b55:	8d 48 22             	lea    0x22(%eax),%ecx
 8683b58:	8b 55 14             	mov    0x14(%ebp),%edx
 8683b5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8683b5e:	8b 00                	mov    (%eax),%eax
 8683b60:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8683b64:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8683b68:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683b6c:	8b 55 10             	mov    0x10(%ebp),%edx
 8683b6f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683b73:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683b76:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683b7a:	c7 44 24 04 0e 04 cf 	movl   $0x8cf040e,0x4(%esp)
 8683b81:	08 
 8683b82:	89 04 24             	mov    %eax,(%esp)
 8683b85:	e8 74 8d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683b8a:	83 c4 24             	add    $0x24,%esp
 8683b8d:	5b                   	pop    %ebx
 8683b8e:	5d                   	pop    %ebp
 8683b8f:	c3                   	ret

```

```c
// cUserHistoryLog::MoneySubTrade @ 0x8683b38

/* cUserHistoryLog::MoneySubTrade(int, int, eMoneySubReason) */

void __thiscall
cUserHistoryLog::MoneySubTrade
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  if (this[0x22] != (cUserHistoryLog)0x0) {
    CUser::LogHistory(*(CUser **)this,"Money-,%d,%d,%d,%s(%s)",param_1,param_2,param_4,this + 0x22,
                      this + 4);
  }
  return;
}

```

---

## MoveArea

```asm
// === 08685172 cUserHistoryLog::MoveArea  [0x08685172-0x86851ab] ===
 8685172:	55                   	push   %ebp
 8685173:	89 e5                	mov    %esp,%ebp
 8685175:	83 ec 28             	sub    $0x28,%esp
 8685178:	8b 45 08             	mov    0x8(%ebp),%eax
 868517b:	8b 00                	mov    (%eax),%eax
 868517d:	8b 55 18             	mov    0x18(%ebp),%edx
 8685180:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685184:	8b 55 14             	mov    0x14(%ebp),%edx
 8685187:	89 54 24 10          	mov    %edx,0x10(%esp)
 868518b:	8b 55 10             	mov    0x10(%ebp),%edx
 868518e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685192:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685195:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685199:	c7 44 24 04 68 09 cf 	movl   $0x8cf0968,0x4(%esp)
 86851a0:	08 
 86851a1:	89 04 24             	mov    %eax,(%esp)
 86851a4:	e8 55 77 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86851a9:	c9                   	leave
 86851aa:	c3                   	ret
 86851ab:	90                   	nop

```

```c
// cUserHistoryLog::MoveArea @ 0x8685172

/* cUserHistoryLog::MoveArea(int, int, int, int, int) */

void cUserHistoryLog::MoveArea(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  CUser::LogHistory(*(CUser **)param_1,"MoveArea,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  return;
}

```

---

## PayCoinAdd

```asm
// === 08683bf4 cUserHistoryLog::PayCoinAdd  [0x08683bf4-0x8683c25] ===
 8683bf4:	55                   	push   %ebp
 8683bf5:	89 e5                	mov    %esp,%ebp
 8683bf7:	83 ec 28             	sub    $0x28,%esp
 8683bfa:	8b 55 14             	mov    0x14(%ebp),%edx
 8683bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8683c00:	8b 00                	mov    (%eax),%eax
 8683c02:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683c06:	8b 55 10             	mov    0x10(%ebp),%edx
 8683c09:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683c0d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683c10:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683c14:	c7 44 24 04 43 04 cf 	movl   $0x8cf0443,0x4(%esp)
 8683c1b:	08 
 8683c1c:	89 04 24             	mov    %eax,(%esp)
 8683c1f:	e8 da 8c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683c24:	c9                   	leave
 8683c25:	c3                   	ret

```

```c
// cUserHistoryLog::PayCoinAdd @ 0x8683bf4

/* cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason) */

void __thiscall
cUserHistoryLog::PayCoinAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"PCoin+,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## PayCoinSub

```asm
// === 08683c26 cUserHistoryLog::PayCoinSub  [0x08683c26-0x8683c57] ===
 8683c26:	55                   	push   %ebp
 8683c27:	89 e5                	mov    %esp,%ebp
 8683c29:	83 ec 28             	sub    $0x28,%esp
 8683c2c:	8b 55 14             	mov    0x14(%ebp),%edx
 8683c2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8683c32:	8b 00                	mov    (%eax),%eax
 8683c34:	89 54 24 10          	mov    %edx,0x10(%esp)
 8683c38:	8b 55 10             	mov    0x10(%ebp),%edx
 8683c3b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683c3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683c42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683c46:	c7 44 24 04 53 04 cf 	movl   $0x8cf0453,0x4(%esp)
 8683c4d:	08 
 8683c4e:	89 04 24             	mov    %eax,(%esp)
 8683c51:	e8 a8 8c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683c56:	c9                   	leave
 8683c57:	c3                   	ret

```

```c
// cUserHistoryLog::PayCoinSub @ 0x8683c26

/* cUserHistoryLog::PayCoinSub(int, int, eCoinSubReason) */

void __thiscall
cUserHistoryLog::PayCoinSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"PCoin-,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## PrivateStoreItemAdd

```asm
// === 0868433e cUserHistoryLog::PrivateStoreItemAdd  [0x0868433e-0x8684559] ===
 868433e:	55                   	push   %ebp
 868433f:	89 e5                	mov    %esp,%ebp
 8684341:	57                   	push   %edi
 8684342:	56                   	push   %esi
 8684343:	53                   	push   %ebx
 8684344:	81 ec ec 00 00 00    	sub    $0xec,%esp
 868434a:	8b 45 10             	mov    0x10(%ebp),%eax
 868434d:	8d 58 15             	lea    0x15(%eax),%ebx
 8684350:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8684353:	89 04 24             	mov    %eax,(%esp)
 8684356:	e8 fd 7a e6 ff       	call   84ebe58 <_ZN34CItemGloballyUniqueIdentifierPrintC1Ev>
 868435b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 868435f:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8684362:	89 04 24             	mov    %eax,(%esp)
 8684365:	e8 18 7b e6 ff       	call   84ebe82 <_ZN34CItemGloballyUniqueIdentifierPrintclERK30itemGloballyUniqueIdentifier_t>
 868436a:	89 45 80             	mov    %eax,-0x80(%ebp)
 868436d:	8b 45 10             	mov    0x10(%ebp),%eax
 8684370:	89 04 24             	mov    %eax,(%esp)
 8684373:	e8 de 70 ba ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8684378:	0f b6 c0             	movzbl %al,%eax
 868437b:	89 45 84             	mov    %eax,-0x7c(%ebp)
 868437e:	8b 45 10             	mov    0x10(%ebp),%eax
 8684381:	0f b6 00             	movzbl (%eax),%eax
 8684384:	0f b6 c0             	movzbl %al,%eax
 8684387:	89 45 88             	mov    %eax,-0x78(%ebp)
 868438a:	8b 45 10             	mov    0x10(%ebp),%eax
 868438d:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 8684391:	0f b6 c0             	movzbl %al,%eax
 8684394:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8684397:	8b 45 10             	mov    0x10(%ebp),%eax
 868439a:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 868439e:	0f b6 c0             	movzbl %al,%eax
 86843a1:	89 45 90             	mov    %eax,-0x70(%ebp)
 86843a4:	8b 45 10             	mov    0x10(%ebp),%eax
 86843a7:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 86843ab:	0f b6 c0             	movzbl %al,%eax
 86843ae:	89 45 94             	mov    %eax,-0x6c(%ebp)
 86843b1:	8b 45 10             	mov    0x10(%ebp),%eax
 86843b4:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 86843b8:	0f b6 c0             	movzbl %al,%eax
 86843bb:	89 45 98             	mov    %eax,-0x68(%ebp)
 86843be:	8b 45 10             	mov    0x10(%ebp),%eax
 86843c1:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 86843c5:	0f b6 c0             	movzbl %al,%eax
 86843c8:	89 45 9c             	mov    %eax,-0x64(%ebp)
 86843cb:	8b 45 10             	mov    0x10(%ebp),%eax
 86843ce:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 86843d2:	0f b6 c0             	movzbl %al,%eax
 86843d5:	89 45 a0             	mov    %eax,-0x60(%ebp)
 86843d8:	8b 45 10             	mov    0x10(%ebp),%eax
 86843db:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 86843df:	0f b6 c0             	movzbl %al,%eax
 86843e2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 86843e5:	8b 45 10             	mov    0x10(%ebp),%eax
 86843e8:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 86843ec:	0f b6 c0             	movzbl %al,%eax
 86843ef:	89 45 a8             	mov    %eax,-0x58(%ebp)
 86843f2:	8b 45 10             	mov    0x10(%ebp),%eax
 86843f5:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 86843f9:	0f b6 c0             	movzbl %al,%eax
 86843fc:	89 45 ac             	mov    %eax,-0x54(%ebp)
 86843ff:	8b 45 10             	mov    0x10(%ebp),%eax
 8684402:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 8684406:	0f b6 c0             	movzbl %al,%eax
 8684409:	89 45 b0             	mov    %eax,-0x50(%ebp)
 868440c:	8b 45 10             	mov    0x10(%ebp),%eax
 868440f:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 8684413:	0f b6 c0             	movzbl %al,%eax
 8684416:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8684419:	8b 45 10             	mov    0x10(%ebp),%eax
 868441c:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 8684420:	0f b6 c0             	movzbl %al,%eax
 8684423:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8684426:	8b 45 10             	mov    0x10(%ebp),%eax
 8684429:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 868442d:	0f b6 c0             	movzbl %al,%eax
 8684430:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8684433:	8b 45 10             	mov    0x10(%ebp),%eax
 8684436:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 868443a:	0f b6 c0             	movzbl %al,%eax
 868443d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8684440:	8b 45 10             	mov    0x10(%ebp),%eax
 8684443:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8684447:	0f b7 c0             	movzwl %ax,%eax
 868444a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 868444d:	8b 45 10             	mov    0x10(%ebp),%eax
 8684450:	89 04 24             	mov    %eax,(%esp)
 8684453:	e8 14 0c a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8684458:	0f b6 f8             	movzbl %al,%edi
 868445b:	8b 75 1c             	mov    0x1c(%ebp),%esi
 868445e:	8b 45 10             	mov    0x10(%ebp),%eax
 8684461:	8b 58 02             	mov    0x2(%eax),%ebx
 8684464:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8684467:	8b 45 08             	mov    0x8(%ebp),%eax
 868446a:	8b 10                	mov    (%eax),%edx
 868446c:	8b 45 80             	mov    -0x80(%ebp),%eax
 868446f:	89 44 24 6c          	mov    %eax,0x6c(%esp)
 8684473:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8684476:	89 44 24 68          	mov    %eax,0x68(%esp)
 868447a:	8b 45 88             	mov    -0x78(%ebp),%eax
 868447d:	89 44 24 64          	mov    %eax,0x64(%esp)
 8684481:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8684484:	89 44 24 60          	mov    %eax,0x60(%esp)
 8684488:	8b 45 90             	mov    -0x70(%ebp),%eax
 868448b:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 868448f:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8684492:	89 44 24 58          	mov    %eax,0x58(%esp)
 8684496:	8b 45 98             	mov    -0x68(%ebp),%eax
 8684499:	89 44 24 54          	mov    %eax,0x54(%esp)
 868449d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 86844a0:	89 44 24 50          	mov    %eax,0x50(%esp)
 86844a4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 86844a7:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 86844ab:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 86844ae:	89 44 24 48          	mov    %eax,0x48(%esp)
 86844b2:	8b 45 a8             	mov    -0x58(%ebp),%eax
 86844b5:	89 44 24 44          	mov    %eax,0x44(%esp)
 86844b9:	8b 45 ac             	mov    -0x54(%ebp),%eax
 86844bc:	89 44 24 40          	mov    %eax,0x40(%esp)
 86844c0:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86844c3:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86844c7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86844ca:	89 44 24 38          	mov    %eax,0x38(%esp)
 86844ce:	8b 45 b8             	mov    -0x48(%ebp),%eax
 86844d1:	89 44 24 34          	mov    %eax,0x34(%esp)
 86844d5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 86844d8:	89 44 24 30          	mov    %eax,0x30(%esp)
 86844dc:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86844df:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86844e3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86844e6:	89 44 24 28          	mov    %eax,0x28(%esp)
 86844ea:	89 7c 24 24          	mov    %edi,0x24(%esp)
 86844ee:	8b 45 24             	mov    0x24(%ebp),%eax
 86844f1:	89 44 24 20          	mov    %eax,0x20(%esp)
 86844f5:	8b 45 20             	mov    0x20(%ebp),%eax
 86844f8:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 86844fc:	89 74 24 18          	mov    %esi,0x18(%esp)
 8684500:	8b 45 18             	mov    0x18(%ebp),%eax
 8684503:	89 44 24 14          	mov    %eax,0x14(%esp)
 8684507:	8b 45 14             	mov    0x14(%ebp),%eax
 868450a:	89 44 24 10          	mov    %eax,0x10(%esp)
 868450e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8684512:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8684516:	c7 44 24 04 08 02 cf 	movl   $0x8cf0208,0x4(%esp)
 868451d:	08 
 868451e:	89 14 24             	mov    %edx,(%esp)
 8684521:	e8 d8 83 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684526:	eb 1b                	jmp    8684543 <_ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_+0x205>
 8684528:	89 d3                	mov    %edx,%ebx
 868452a:	89 c6                	mov    %eax,%esi
 868452c:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868452f:	89 04 24             	mov    %eax,(%esp)
 8684532:	e8 45 79 e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 8684537:	89 f0                	mov    %esi,%eax
 8684539:	89 da                	mov    %ebx,%edx
 868453b:	89 04 24             	mov    %eax,(%esp)
 868453e:	e8 0d f2 45 00       	call   8ae3750 <_Unwind_Resume>
 8684543:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8684546:	89 04 24             	mov    %eax,(%esp)
 8684549:	e8 2e 79 e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 868454e:	81 c4 ec 00 00 00    	add    $0xec,%esp
 8684554:	5b                   	pop    %ebx
 8684555:	5e                   	pop    %esi
 8684556:	5f                   	pop    %edi
 8684557:	5d                   	pop    %ebp
 8684558:	c3                   	ret
 8684559:	90                   	nop

```

```c
// cUserHistoryLog::PrivateStoreItemAdd @ 0x868433e

/* cUserHistoryLog::PrivateStoreItemAdd(INVEN_TYPE, Inven_Item const&, int, int, eItemAddReason,
   char const*, char const*) */

void __thiscall
cUserHistoryLog::PrivateStoreItemAdd
          (cUserHistoryLog *this,undefined4 param_2,Inven_Item *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 08684365 to 08684525 has its CatchHandler @ 08684528 */
  uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                     (local_31,(itemGloballyUniqueIdentifier_t *)(param_3 + 0x15));
  uVar18 = Inven_Item::GetReSealCount(param_3);
  IVar1 = *param_3;
  IVar2 = param_3[0x32];
  IVar3 = param_3[0x31];
  IVar4 = param_3[0x30];
  IVar5 = param_3[0x2f];
  IVar6 = param_3[0x2e];
  IVar7 = param_3[0x2d];
  IVar8 = param_3[0x2c];
  IVar9 = param_3[0x2b];
  IVar10 = param_3[0x2a];
  IVar11 = param_3[0x29];
  IVar12 = param_3[0x28];
  IVar13 = param_3[0x27];
  IVar14 = param_3[0x26];
  IVar15 = param_3[0x25];
  uVar16 = *(ushort *)(param_3 + 0xb);
  uVar19 = Inven_Item::GetUpgrade(param_3);
  CUser::LogHistory(*(CUser **)this,
                    "Item+,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                    ,param_2,*(undefined4 *)(param_3 + 2),param_4,param_5,param_6,param_7,param_8,
                    uVar19 & 0xff,(uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,
                    (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                    (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                    (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                    (uint)(byte)IVar1,uVar18 & 0xff,uVar17);
  CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  return;
}

```

---

## PrivateStoreItemDel

```asm
// === 0868412a cUserHistoryLog::PrivateStoreItemDel  [0x0868412a-0x868433d] ===
 868412a:	55                   	push   %ebp
 868412b:	89 e5                	mov    %esp,%ebp
 868412d:	57                   	push   %edi
 868412e:	56                   	push   %esi
 868412f:	53                   	push   %ebx
 8684130:	81 ec ec 00 00 00    	sub    $0xec,%esp
 8684136:	8b 45 10             	mov    0x10(%ebp),%eax
 8684139:	8d 58 15             	lea    0x15(%eax),%ebx
 868413c:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868413f:	89 04 24             	mov    %eax,(%esp)
 8684142:	e8 11 7d e6 ff       	call   84ebe58 <_ZN34CItemGloballyUniqueIdentifierPrintC1Ev>
 8684147:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 868414b:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868414e:	89 04 24             	mov    %eax,(%esp)
 8684151:	e8 2c 7d e6 ff       	call   84ebe82 <_ZN34CItemGloballyUniqueIdentifierPrintclERK30itemGloballyUniqueIdentifier_t>
 8684156:	89 45 80             	mov    %eax,-0x80(%ebp)
 8684159:	8b 45 10             	mov    0x10(%ebp),%eax
 868415c:	89 04 24             	mov    %eax,(%esp)
 868415f:	e8 f2 72 ba ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8684164:	0f b6 c0             	movzbl %al,%eax
 8684167:	89 45 84             	mov    %eax,-0x7c(%ebp)
 868416a:	8b 45 10             	mov    0x10(%ebp),%eax
 868416d:	0f b6 00             	movzbl (%eax),%eax
 8684170:	0f b6 c0             	movzbl %al,%eax
 8684173:	89 45 88             	mov    %eax,-0x78(%ebp)
 8684176:	8b 45 10             	mov    0x10(%ebp),%eax
 8684179:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 868417d:	0f b6 c0             	movzbl %al,%eax
 8684180:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8684183:	8b 45 10             	mov    0x10(%ebp),%eax
 8684186:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 868418a:	0f b6 c0             	movzbl %al,%eax
 868418d:	89 45 90             	mov    %eax,-0x70(%ebp)
 8684190:	8b 45 10             	mov    0x10(%ebp),%eax
 8684193:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 8684197:	0f b6 c0             	movzbl %al,%eax
 868419a:	89 45 94             	mov    %eax,-0x6c(%ebp)
 868419d:	8b 45 10             	mov    0x10(%ebp),%eax
 86841a0:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 86841a4:	0f b6 c0             	movzbl %al,%eax
 86841a7:	89 45 98             	mov    %eax,-0x68(%ebp)
 86841aa:	8b 45 10             	mov    0x10(%ebp),%eax
 86841ad:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 86841b1:	0f b6 c0             	movzbl %al,%eax
 86841b4:	89 45 9c             	mov    %eax,-0x64(%ebp)
 86841b7:	8b 45 10             	mov    0x10(%ebp),%eax
 86841ba:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 86841be:	0f b6 c0             	movzbl %al,%eax
 86841c1:	89 45 a0             	mov    %eax,-0x60(%ebp)
 86841c4:	8b 45 10             	mov    0x10(%ebp),%eax
 86841c7:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 86841cb:	0f b6 c0             	movzbl %al,%eax
 86841ce:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 86841d1:	8b 45 10             	mov    0x10(%ebp),%eax
 86841d4:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 86841d8:	0f b6 c0             	movzbl %al,%eax
 86841db:	89 45 a8             	mov    %eax,-0x58(%ebp)
 86841de:	8b 45 10             	mov    0x10(%ebp),%eax
 86841e1:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 86841e5:	0f b6 c0             	movzbl %al,%eax
 86841e8:	89 45 ac             	mov    %eax,-0x54(%ebp)
 86841eb:	8b 45 10             	mov    0x10(%ebp),%eax
 86841ee:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 86841f2:	0f b6 c0             	movzbl %al,%eax
 86841f5:	89 45 b0             	mov    %eax,-0x50(%ebp)
 86841f8:	8b 45 10             	mov    0x10(%ebp),%eax
 86841fb:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 86841ff:	0f b6 c0             	movzbl %al,%eax
 8684202:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8684205:	8b 45 10             	mov    0x10(%ebp),%eax
 8684208:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 868420c:	0f b6 c0             	movzbl %al,%eax
 868420f:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8684212:	8b 45 10             	mov    0x10(%ebp),%eax
 8684215:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8684219:	0f b6 c0             	movzbl %al,%eax
 868421c:	89 45 bc             	mov    %eax,-0x44(%ebp)
 868421f:	8b 45 10             	mov    0x10(%ebp),%eax
 8684222:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 8684226:	0f b6 c0             	movzbl %al,%eax
 8684229:	89 45 c0             	mov    %eax,-0x40(%ebp)
 868422c:	8b 45 10             	mov    0x10(%ebp),%eax
 868422f:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 8684233:	0f b7 c0             	movzwl %ax,%eax
 8684236:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8684239:	8b 45 10             	mov    0x10(%ebp),%eax
 868423c:	89 04 24             	mov    %eax,(%esp)
 868423f:	e8 28 0e a7 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8684244:	0f b6 f8             	movzbl %al,%edi
 8684247:	8b 75 1c             	mov    0x1c(%ebp),%esi
 868424a:	8b 45 10             	mov    0x10(%ebp),%eax
 868424d:	8b 58 02             	mov    0x2(%eax),%ebx
 8684250:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8684253:	8b 45 08             	mov    0x8(%ebp),%eax
 8684256:	8b 10                	mov    (%eax),%edx
 8684258:	8b 45 80             	mov    -0x80(%ebp),%eax
 868425b:	89 44 24 68          	mov    %eax,0x68(%esp)
 868425f:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8684262:	89 44 24 64          	mov    %eax,0x64(%esp)
 8684266:	8b 45 88             	mov    -0x78(%ebp),%eax
 8684269:	89 44 24 60          	mov    %eax,0x60(%esp)
 868426d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8684270:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 8684274:	8b 45 90             	mov    -0x70(%ebp),%eax
 8684277:	89 44 24 58          	mov    %eax,0x58(%esp)
 868427b:	8b 45 94             	mov    -0x6c(%ebp),%eax
 868427e:	89 44 24 54          	mov    %eax,0x54(%esp)
 8684282:	8b 45 98             	mov    -0x68(%ebp),%eax
 8684285:	89 44 24 50          	mov    %eax,0x50(%esp)
 8684289:	8b 45 9c             	mov    -0x64(%ebp),%eax
 868428c:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8684290:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8684293:	89 44 24 48          	mov    %eax,0x48(%esp)
 8684297:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 868429a:	89 44 24 44          	mov    %eax,0x44(%esp)
 868429e:	8b 45 a8             	mov    -0x58(%ebp),%eax
 86842a1:	89 44 24 40          	mov    %eax,0x40(%esp)
 86842a5:	8b 45 ac             	mov    -0x54(%ebp),%eax
 86842a8:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86842ac:	8b 45 b0             	mov    -0x50(%ebp),%eax
 86842af:	89 44 24 38          	mov    %eax,0x38(%esp)
 86842b3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86842b6:	89 44 24 34          	mov    %eax,0x34(%esp)
 86842ba:	8b 45 b8             	mov    -0x48(%ebp),%eax
 86842bd:	89 44 24 30          	mov    %eax,0x30(%esp)
 86842c1:	8b 45 bc             	mov    -0x44(%ebp),%eax
 86842c4:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 86842c8:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86842cb:	89 44 24 28          	mov    %eax,0x28(%esp)
 86842cf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86842d2:	89 44 24 24          	mov    %eax,0x24(%esp)
 86842d6:	89 7c 24 20          	mov    %edi,0x20(%esp)
 86842da:	8b 45 24             	mov    0x24(%ebp),%eax
 86842dd:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 86842e1:	89 74 24 18          	mov    %esi,0x18(%esp)
 86842e5:	8b 45 18             	mov    0x18(%ebp),%eax
 86842e8:	89 44 24 14          	mov    %eax,0x14(%esp)
 86842ec:	8b 45 14             	mov    0x14(%ebp),%eax
 86842ef:	89 44 24 10          	mov    %eax,0x10(%esp)
 86842f3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86842f7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86842fb:	c7 44 24 04 20 05 cf 	movl   $0x8cf0520,0x4(%esp)
 8684302:	08 
 8684303:	89 14 24             	mov    %edx,(%esp)
 8684306:	e8 f3 85 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868430b:	eb 1b                	jmp    8684328 <_ZN15cUserHistoryLog19PrivateStoreItemDelE10INVEN_TYPERK10Inven_Itemii14eItemDelReasonPKcS6_+0x1fe>
 868430d:	89 d3                	mov    %edx,%ebx
 868430f:	89 c6                	mov    %eax,%esi
 8684311:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8684314:	89 04 24             	mov    %eax,(%esp)
 8684317:	e8 60 7b e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 868431c:	89 f0                	mov    %esi,%eax
 868431e:	89 da                	mov    %ebx,%edx
 8684320:	89 04 24             	mov    %eax,(%esp)
 8684323:	e8 28 f4 45 00       	call   8ae3750 <_Unwind_Resume>
 8684328:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 868432b:	89 04 24             	mov    %eax,(%esp)
 868432e:	e8 49 7b e6 ff       	call   84ebe7c <_ZN34CItemGloballyUniqueIdentifierPrintD1Ev>
 8684333:	81 c4 ec 00 00 00    	add    $0xec,%esp
 8684339:	5b                   	pop    %ebx
 868433a:	5e                   	pop    %esi
 868433b:	5f                   	pop    %edi
 868433c:	5d                   	pop    %ebp
 868433d:	c3                   	ret

```

```c
// cUserHistoryLog::PrivateStoreItemDel @ 0x868412a

/* cUserHistoryLog::PrivateStoreItemDel(INVEN_TYPE, Inven_Item const&, int, int, eItemDelReason,
   char const*, char const*) */

void __thiscall
cUserHistoryLog::PrivateStoreItemDel
          (cUserHistoryLog *this,undefined4 param_2,Inven_Item *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 08684151 to 0868430a has its CatchHandler @ 0868430d */
  uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                     (local_31,(itemGloballyUniqueIdentifier_t *)(param_3 + 0x15));
  uVar18 = Inven_Item::GetReSealCount(param_3);
  IVar1 = *param_3;
  IVar2 = param_3[0x32];
  IVar3 = param_3[0x31];
  IVar4 = param_3[0x30];
  IVar5 = param_3[0x2f];
  IVar6 = param_3[0x2e];
  IVar7 = param_3[0x2d];
  IVar8 = param_3[0x2c];
  IVar9 = param_3[0x2b];
  IVar10 = param_3[0x2a];
  IVar11 = param_3[0x29];
  IVar12 = param_3[0x28];
  IVar13 = param_3[0x27];
  IVar14 = param_3[0x26];
  IVar15 = param_3[0x25];
  uVar16 = *(ushort *)(param_3 + 0xb);
  uVar19 = Inven_Item::GetUpgrade(param_3);
  CUser::LogHistory(*(CUser **)this,
                    "Item-,%d,%d,%d,%d,%d,\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                    ,param_2,*(undefined4 *)(param_3 + 2),param_4,param_5,param_6,param_8,
                    uVar19 & 0xff,(uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,
                    (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                    (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                    (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                    (uint)(byte)IVar1,uVar18 & 0xff,uVar17);
  CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  return;
}

```

---

## QPAdd

```asm
// === 0868888c cUserHistoryLog::QPAdd  [0x0868888c-0x86888bd] ===
 868888c:	55                   	push   %ebp
 868888d:	89 e5                	mov    %esp,%ebp
 868888f:	83 ec 28             	sub    $0x28,%esp
 8688892:	8b 45 08             	mov    0x8(%ebp),%eax
 8688895:	8b 00                	mov    (%eax),%eax
 8688897:	8b 55 14             	mov    0x14(%ebp),%edx
 868889a:	89 54 24 10          	mov    %edx,0x10(%esp)
 868889e:	8b 55 10             	mov    0x10(%ebp),%edx
 86888a1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86888a5:	8b 55 0c             	mov    0xc(%ebp),%edx
 86888a8:	89 54 24 08          	mov    %edx,0x8(%esp)
 86888ac:	c7 44 24 04 32 11 cf 	movl   $0x8cf1132,0x4(%esp)
 86888b3:	08 
 86888b4:	89 04 24             	mov    %eax,(%esp)
 86888b7:	e8 42 40 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86888bc:	c9                   	leave
 86888bd:	c3                   	ret

```

```c
// cUserHistoryLog::QPAdd @ 0x868888c

/* cUserHistoryLog::QPAdd(int, int, int) */

void __thiscall cUserHistoryLog::QPAdd(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"QP+,%d,%d,%d",param_1,param_2,param_3);
  return;
}

```

---

## QPSub

```asm
// === 0868885a cUserHistoryLog::QPSub  [0x0868885a-0x868888b] ===
 868885a:	55                   	push   %ebp
 868885b:	89 e5                	mov    %esp,%ebp
 868885d:	83 ec 28             	sub    $0x28,%esp
 8688860:	8b 45 08             	mov    0x8(%ebp),%eax
 8688863:	8b 00                	mov    (%eax),%eax
 8688865:	8b 55 14             	mov    0x14(%ebp),%edx
 8688868:	89 54 24 10          	mov    %edx,0x10(%esp)
 868886c:	8b 55 10             	mov    0x10(%ebp),%edx
 868886f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8688873:	8b 55 0c             	mov    0xc(%ebp),%edx
 8688876:	89 54 24 08          	mov    %edx,0x8(%esp)
 868887a:	c7 44 24 04 25 11 cf 	movl   $0x8cf1125,0x4(%esp)
 8688881:	08 
 8688882:	89 04 24             	mov    %eax,(%esp)
 8688885:	e8 74 40 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868888a:	c9                   	leave
 868888b:	c3                   	ret

```

```c
// cUserHistoryLog::QPSub @ 0x868885a

/* cUserHistoryLog::QPSub(int, int, int) */

void __thiscall cUserHistoryLog::QPSub(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"QP-,%d,%d,%d",param_1,param_2,param_3);
  return;
}

```

---

## QuestComplete

```asm
// === 0868514e cUserHistoryLog::QuestComplete  [0x0868514e-0x8685171] ===
 868514e:	55                   	push   %ebp
 868514f:	89 e5                	mov    %esp,%ebp
 8685151:	83 ec 18             	sub    $0x18,%esp
 8685154:	8b 45 08             	mov    0x8(%ebp),%eax
 8685157:	8b 00                	mov    (%eax),%eax
 8685159:	8b 55 0c             	mov    0xc(%ebp),%edx
 868515c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685160:	c7 44 24 04 57 09 cf 	movl   $0x8cf0957,0x4(%esp)
 8685167:	08 
 8685168:	89 04 24             	mov    %eax,(%esp)
 868516b:	e8 8e 77 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685170:	c9                   	leave
 8685171:	c3                   	ret

```

```c
// cUserHistoryLog::QuestComplete @ 0x868514e

/* cUserHistoryLog::QuestComplete(int) */

void __thiscall cUserHistoryLog::QuestComplete(cUserHistoryLog *this,int param_1)

{
  CUser::LogHistory(*(CUser **)this,"QuestComplete,%d",param_1);
  return;
}

```

---

## RandomOption

```asm
// === 08682d3a cUserHistoryLog::RandomOption  [0x08682d3a-0x8682e83] ===
 8682d3a:	55                   	push   %ebp
 8682d3b:	89 e5                	mov    %esp,%ebp
 8682d3d:	57                   	push   %edi
 8682d3e:	56                   	push   %esi
 8682d3f:	53                   	push   %ebx
 8682d40:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8682d46:	8b 45 10             	mov    0x10(%ebp),%eax
 8682d49:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8682d4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d4f:	0f b6 40 32          	movzbl 0x32(%eax),%eax
 8682d53:	0f b6 c0             	movzbl %al,%eax
 8682d56:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8682d59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d5c:	0f b6 40 31          	movzbl 0x31(%eax),%eax
 8682d60:	0f b6 c0             	movzbl %al,%eax
 8682d63:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8682d66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d69:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 8682d6d:	0f b6 c0             	movzbl %al,%eax
 8682d70:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8682d73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d76:	0f b6 40 2f          	movzbl 0x2f(%eax),%eax
 8682d7a:	0f b6 c0             	movzbl %al,%eax
 8682d7d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8682d80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d83:	0f b6 40 2e          	movzbl 0x2e(%eax),%eax
 8682d87:	0f b6 c0             	movzbl %al,%eax
 8682d8a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8682d8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d90:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 8682d94:	0f b6 c0             	movzbl %al,%eax
 8682d97:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8682d9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682d9d:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 8682da1:	0f b6 c0             	movzbl %al,%eax
 8682da4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8682da7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682daa:	0f b6 40 2b          	movzbl 0x2b(%eax),%eax
 8682dae:	0f b6 c0             	movzbl %al,%eax
 8682db1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8682db4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682db7:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 8682dbb:	0f b6 c0             	movzbl %al,%eax
 8682dbe:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8682dc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682dc4:	0f b6 40 29          	movzbl 0x29(%eax),%eax
 8682dc8:	0f b6 c0             	movzbl %al,%eax
 8682dcb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8682dce:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682dd1:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 8682dd5:	0f b6 f8             	movzbl %al,%edi
 8682dd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682ddb:	0f b6 40 27          	movzbl 0x27(%eax),%eax
 8682ddf:	0f b6 f0             	movzbl %al,%esi
 8682de2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682de5:	0f b6 40 26          	movzbl 0x26(%eax),%eax
 8682de9:	0f b6 d8             	movzbl %al,%ebx
 8682dec:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682def:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 8682df3:	0f b6 c8             	movzbl %al,%ecx
 8682df6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8682df9:	8b 50 02             	mov    0x2(%eax),%edx
 8682dfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8682dff:	8b 00                	mov    (%eax),%eax
 8682e01:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8682e04:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8682e07:	89 44 24 44          	mov    %eax,0x44(%esp)
 8682e0b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8682e0e:	89 44 24 40          	mov    %eax,0x40(%esp)
 8682e12:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8682e15:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8682e19:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8682e1c:	89 44 24 38          	mov    %eax,0x38(%esp)
 8682e20:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8682e23:	89 44 24 34          	mov    %eax,0x34(%esp)
 8682e27:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8682e2a:	89 44 24 30          	mov    %eax,0x30(%esp)
 8682e2e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8682e31:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8682e35:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8682e38:	89 44 24 28          	mov    %eax,0x28(%esp)
 8682e3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8682e3f:	89 44 24 24          	mov    %eax,0x24(%esp)
 8682e43:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8682e46:	89 44 24 20          	mov    %eax,0x20(%esp)
 8682e4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8682e4d:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8682e51:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8682e55:	89 74 24 14          	mov    %esi,0x14(%esp)
 8682e59:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8682e5d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8682e61:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682e65:	c7 44 24 04 b8 01 cf 	movl   $0x8cf01b8,0x4(%esp)
 8682e6c:	08 
 8682e6d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8682e70:	89 04 24             	mov    %eax,(%esp)
 8682e73:	e8 86 9a ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682e78:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8682e7e:	5b                   	pop    %ebx
 8682e7f:	5e                   	pop    %esi
 8682e80:	5f                   	pop    %edi
 8682e81:	5d                   	pop    %ebp
 8682e82:	c3                   	ret
 8682e83:	90                   	nop

```

```c
// cUserHistoryLog::RandomOption @ 0x8682d3a

/* cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T) */

void __thiscall cUserHistoryLog::RandomOption(cUserHistoryLog *this,int param_1,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,
                    "RandomOptionItem,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d"
                    ,*(undefined4 *)(param_1 + 2),(uint)*(byte *)(param_1 + 0x25),
                    (uint)*(byte *)(param_1 + 0x26),(uint)*(byte *)(param_1 + 0x27),
                    (uint)*(byte *)(param_1 + 0x28),(uint)*(byte *)(param_1 + 0x29),
                    (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b),
                    (uint)*(byte *)(param_1 + 0x2c),(uint)*(byte *)(param_1 + 0x2d),
                    (uint)*(byte *)(param_1 + 0x2e),(uint)*(byte *)(param_1 + 0x2f),
                    (uint)*(byte *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0x31),
                    (uint)*(byte *)(param_1 + 0x32),param_3);
  return;
}

```

---

## RecvMail

```asm
// === 086848a8 cUserHistoryLog::RecvMail  [0x086848a8-0x86848d9] ===
 86848a8:	55                   	push   %ebp
 86848a9:	89 e5                	mov    %esp,%ebp
 86848ab:	83 ec 28             	sub    $0x28,%esp
 86848ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86848b1:	8b 00                	mov    (%eax),%eax
 86848b3:	8b 55 14             	mov    0x14(%ebp),%edx
 86848b6:	89 54 24 10          	mov    %edx,0x10(%esp)
 86848ba:	8b 55 10             	mov    0x10(%ebp),%edx
 86848bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86848c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86848c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 86848c8:	c7 44 24 04 74 06 cf 	movl   $0x8cf0674,0x4(%esp)
 86848cf:	08 
 86848d0:	89 04 24             	mov    %eax,(%esp)
 86848d3:	e8 26 80 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86848d8:	c9                   	leave
 86848d9:	c3                   	ret

```

```c
// cUserHistoryLog::RecvMail @ 0x86848a8

/* cUserHistoryLog::RecvMail(unsigned int, char const*, char const*) */

void __thiscall
cUserHistoryLog::RecvMail(cUserHistoryLog *this,uint param_1,char *param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)this,"MailR,%d,\"%s\",\"%s\"",param_1,param_2,param_3);
  return;
}

```

---

## RedeemItemAdd

```asm
// === 08686990 cUserHistoryLog::RedeemItemAdd  [0x08686990-0x86869bb] ===
 8686990:	55                   	push   %ebp
 8686991:	89 e5                	mov    %esp,%ebp
 8686993:	83 ec 18             	sub    $0x18,%esp
 8686996:	8b 45 08             	mov    0x8(%ebp),%eax
 8686999:	8b 00                	mov    (%eax),%eax
 868699b:	8b 55 10             	mov    0x10(%ebp),%edx
 868699e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86869a2:	8b 55 0c             	mov    0xc(%ebp),%edx
 86869a5:	89 54 24 08          	mov    %edx,0x8(%esp)
 86869a9:	c7 44 24 04 8b 0e cf 	movl   $0x8cf0e8b,0x4(%esp)
 86869b0:	08 
 86869b1:	89 04 24             	mov    %eax,(%esp)
 86869b4:	e8 45 5f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86869b9:	c9                   	leave
 86869ba:	c3                   	ret
 86869bb:	90                   	nop

```

```c
// cUserHistoryLog::RedeemItemAdd @ 0x8686990

/* cUserHistoryLog::RedeemItemAdd(int, int) */

void __thiscall cUserHistoryLog::RedeemItemAdd(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"RedeemItem+,%d,%d",param_1,param_2);
  return;
}

```

---

## RedeemItemDel

```asm
// === 086869bc cUserHistoryLog::RedeemItemDel  [0x086869bc-0x86869e7] ===
 86869bc:	55                   	push   %ebp
 86869bd:	89 e5                	mov    %esp,%ebp
 86869bf:	83 ec 18             	sub    $0x18,%esp
 86869c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86869c5:	8b 00                	mov    (%eax),%eax
 86869c7:	8b 55 10             	mov    0x10(%ebp),%edx
 86869ca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86869ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 86869d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 86869d5:	c7 44 24 04 9d 0e cf 	movl   $0x8cf0e9d,0x4(%esp)
 86869dc:	08 
 86869dd:	89 04 24             	mov    %eax,(%esp)
 86869e0:	e8 19 5f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86869e5:	c9                   	leave
 86869e6:	c3                   	ret
 86869e7:	90                   	nop

```

```c
// cUserHistoryLog::RedeemItemDel @ 0x86869bc

/* cUserHistoryLog::RedeemItemDel(int, int) */

void __thiscall cUserHistoryLog::RedeemItemDel(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"RedeemItem-,%d,%d",param_1,param_2);
  return;
}

```

---

## RemovePrivateStore

```asm
// === 08684586 cUserHistoryLog::RemovePrivateStore  [0x08684586-0x86845b1] ===
 8684586:	55                   	push   %ebp
 8684587:	89 e5                	mov    %esp,%ebp
 8684589:	83 ec 18             	sub    $0x18,%esp
 868458c:	8b 45 08             	mov    0x8(%ebp),%eax
 868458f:	8b 00                	mov    (%eax),%eax
 8684591:	8b 55 10             	mov    0x10(%ebp),%edx
 8684594:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684598:	8b 55 0c             	mov    0xc(%ebp),%edx
 868459b:	89 54 24 08          	mov    %edx,0x8(%esp)
 868459f:	c7 44 24 04 97 05 cf 	movl   $0x8cf0597,0x4(%esp)
 86845a6:	08 
 86845a7:	89 04 24             	mov    %eax,(%esp)
 86845aa:	e8 4f 83 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86845af:	c9                   	leave
 86845b0:	c3                   	ret
 86845b1:	90                   	nop

```

```c
// cUserHistoryLog::RemovePrivateStore @ 0x8684586

/* cUserHistoryLog::RemovePrivateStore(int, int, char const*) */

void cUserHistoryLog::RemovePrivateStore(int param_1,int param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)param_1,"Private Store-,%d,%d",param_2,param_3);
  return;
}

```

---

## RequestCleanPad

```asm
// === 086853e6 cUserHistoryLog::RequestCleanPad  [0x086853e6-0x8685417] ===
 86853e6:	55                   	push   %ebp
 86853e7:	89 e5                	mov    %esp,%ebp
 86853e9:	83 ec 28             	sub    $0x28,%esp
 86853ec:	8b 45 10             	mov    0x10(%ebp),%eax
 86853ef:	88 45 f4             	mov    %al,-0xc(%ebp)
 86853f2:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 86853f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86853f9:	8b 00                	mov    (%eax),%eax
 86853fb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86853ff:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685402:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685406:	c7 44 24 04 09 0a cf 	movl   $0x8cf0a09,0x4(%esp)
 868540d:	08 
 868540e:	89 04 24             	mov    %eax,(%esp)
 8685411:	e8 e8 74 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685416:	c9                   	leave
 8685417:	c3                   	ret

```

```c
// cUserHistoryLog::RequestCleanPad @ 0x86853e6

/* cUserHistoryLog::RequestCleanPad(unsigned int, char) */

void __thiscall cUserHistoryLog::RequestCleanPad(cUserHistoryLog *this,uint param_1,char param_2)

{
  CUser::LogHistory(*(CUser **)this,"CleanPad,%d,%d",param_1,(int)param_2);
  return;
}

```

---

## SFPAdd

```asm
// === 08682c22 cUserHistoryLog::SFPAdd  [0x08682c22-0x8682c5b] ===
 8682c22:	55                   	push   %ebp
 8682c23:	89 e5                	mov    %esp,%ebp
 8682c25:	83 ec 28             	sub    $0x28,%esp
 8682c28:	8b 55 18             	mov    0x18(%ebp),%edx
 8682c2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8682c2e:	8b 00                	mov    (%eax),%eax
 8682c30:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8682c33:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8682c37:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682c3b:	8b 55 14             	mov    0x14(%ebp),%edx
 8682c3e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682c42:	8b 55 10             	mov    0x10(%ebp),%edx
 8682c45:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682c49:	c7 44 24 04 61 01 cf 	movl   $0x8cf0161,0x4(%esp)
 8682c50:	08 
 8682c51:	89 04 24             	mov    %eax,(%esp)
 8682c54:	e8 a5 9c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682c59:	c9                   	leave
 8682c5a:	c3                   	ret
 8682c5b:	90                   	nop

```

```c
// cUserHistoryLog::SFPAdd @ 0x8682c22

/* cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason) */

void __thiscall
cUserHistoryLog::SFPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SFP+,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}

```

---

## SFPSub

```asm
// === 08682c5c cUserHistoryLog::SFPSub  [0x08682c5c-0x8682c95] ===
 8682c5c:	55                   	push   %ebp
 8682c5d:	89 e5                	mov    %esp,%ebp
 8682c5f:	83 ec 28             	sub    $0x28,%esp
 8682c62:	8b 55 18             	mov    0x18(%ebp),%edx
 8682c65:	8b 45 08             	mov    0x8(%ebp),%eax
 8682c68:	8b 00                	mov    (%eax),%eax
 8682c6a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8682c6d:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8682c71:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682c75:	8b 55 14             	mov    0x14(%ebp),%edx
 8682c78:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682c7c:	8b 55 10             	mov    0x10(%ebp),%edx
 8682c7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682c83:	c7 44 24 04 72 01 cf 	movl   $0x8cf0172,0x4(%esp)
 8682c8a:	08 
 8682c8b:	89 04 24             	mov    %eax,(%esp)
 8682c8e:	e8 6b 9c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682c93:	c9                   	leave
 8682c94:	c3                   	ret
 8682c95:	90                   	nop

```

```c
// cUserHistoryLog::SFPSub @ 0x8682c5c

/* cUserHistoryLog::SFPSub(int, int, int, eSPSubReason) */

void __thiscall
cUserHistoryLog::SFPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SFP-,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}

```

---

## SPAdd

```asm
// === 08682bae cUserHistoryLog::SPAdd  [0x08682bae-0x8682be7] ===
 8682bae:	55                   	push   %ebp
 8682baf:	89 e5                	mov    %esp,%ebp
 8682bb1:	83 ec 28             	sub    $0x28,%esp
 8682bb4:	8b 55 18             	mov    0x18(%ebp),%edx
 8682bb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8682bba:	8b 00                	mov    (%eax),%eax
 8682bbc:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8682bbf:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8682bc3:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682bc7:	8b 55 14             	mov    0x14(%ebp),%edx
 8682bca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682bce:	8b 55 10             	mov    0x10(%ebp),%edx
 8682bd1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682bd5:	c7 44 24 04 41 01 cf 	movl   $0x8cf0141,0x4(%esp)
 8682bdc:	08 
 8682bdd:	89 04 24             	mov    %eax,(%esp)
 8682be0:	e8 19 9d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682be5:	c9                   	leave
 8682be6:	c3                   	ret
 8682be7:	90                   	nop

```

```c
// cUserHistoryLog::SPAdd @ 0x8682bae

/* cUserHistoryLog::SPAdd(int, int, int, eSPAddReason) */

void __thiscall
cUserHistoryLog::SPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SP+,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}

```

---

## SPSub

```asm
// === 08682be8 cUserHistoryLog::SPSub  [0x08682be8-0x8682c21] ===
 8682be8:	55                   	push   %ebp
 8682be9:	89 e5                	mov    %esp,%ebp
 8682beb:	83 ec 28             	sub    $0x28,%esp
 8682bee:	8b 55 18             	mov    0x18(%ebp),%edx
 8682bf1:	8b 45 08             	mov    0x8(%ebp),%eax
 8682bf4:	8b 00                	mov    (%eax),%eax
 8682bf6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8682bf9:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8682bfd:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682c01:	8b 55 14             	mov    0x14(%ebp),%edx
 8682c04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682c08:	8b 55 10             	mov    0x10(%ebp),%edx
 8682c0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682c0f:	c7 44 24 04 51 01 cf 	movl   $0x8cf0151,0x4(%esp)
 8682c16:	08 
 8682c17:	89 04 24             	mov    %eax,(%esp)
 8682c1a:	e8 df 9c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682c1f:	c9                   	leave
 8682c20:	c3                   	ret
 8682c21:	90                   	nop

```

```c
// cUserHistoryLog::SPSub @ 0x8682be8

/* cUserHistoryLog::SPSub(int, int, int, eSPSubReason) */

void __thiscall
cUserHistoryLog::SPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SP-,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}

```

---

## SecuService

```asm
// === 0868479c cUserHistoryLog::SecuService  [0x0868479c-0x86847e9] ===
 868479c:	55                   	push   %ebp
 868479d:	89 e5                	mov    %esp,%ebp
 868479f:	83 ec 18             	sub    $0x18,%esp
 86847a2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86847a6:	75 1e                	jne    86847c6 <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION+0x2a>
 86847a8:	8b 55 10             	mov    0x10(%ebp),%edx
 86847ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86847ae:	8b 00                	mov    (%eax),%eax
 86847b0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86847b4:	c7 44 24 04 41 06 cf 	movl   $0x8cf0641,0x4(%esp)
 86847bb:	08 
 86847bc:	89 04 24             	mov    %eax,(%esp)
 86847bf:	e8 3a 81 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86847c4:	eb 22                	jmp    86847e8 <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION+0x4c>
 86847c6:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 86847ca:	75 1c                	jne    86847e8 <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION+0x4c>
 86847cc:	8b 55 10             	mov    0x10(%ebp),%edx
 86847cf:	8b 45 08             	mov    0x8(%ebp),%eax
 86847d2:	8b 00                	mov    (%eax),%eax
 86847d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 86847d8:	c7 44 24 04 4a 06 cf 	movl   $0x8cf064a,0x4(%esp)
 86847df:	08 
 86847e0:	89 04 24             	mov    %eax,(%esp)
 86847e3:	e8 16 81 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86847e8:	c9                   	leave
 86847e9:	c3                   	ret

```

```c
// cUserHistoryLog::SecuService @ 0x868479c

/* cUserHistoryLog::SecuService(ENUM_SECU_SERVICE_TYPE, ENUM_SECU_SERVICE_ACTION) */

void __thiscall cUserHistoryLog::SecuService(cUserHistoryLog *this,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    CUser::LogHistory(*(CUser **)this,"s_gob,%d",param_3);
  }
  else if (param_2 == 1) {
    CUser::LogHistory(*(CUser **)this,"s_card,%d",param_3);
  }
  return;
}

```

---

## SelectCubeForPremiumService

```asm
// === 08686da0 cUserHistoryLog::SelectCubeForPremiumService  [0x08686da0-0x8686dcf] ===
 8686da0:	55                   	push   %ebp
 8686da1:	89 e5                	mov    %esp,%ebp
 8686da3:	83 ec 18             	sub    $0x18,%esp
 8686da6:	8b 45 08             	mov    0x8(%ebp),%eax
 8686da9:	8b 00                	mov    (%eax),%eax
 8686dab:	85 c0                	test   %eax,%eax
 8686dad:	74 1e                	je     8686dcd <_ZN15cUserHistoryLog27SelectCubeForPremiumServiceEi+0x2d>
 8686daf:	8b 45 08             	mov    0x8(%ebp),%eax
 8686db2:	8b 00                	mov    (%eax),%eax
 8686db4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686db7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686dbb:	c7 44 24 04 04 10 cf 	movl   $0x8cf1004,0x4(%esp)
 8686dc2:	08 
 8686dc3:	89 04 24             	mov    %eax,(%esp)
 8686dc6:	e8 33 5b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686dcb:	eb 01                	jmp    8686dce <_ZN15cUserHistoryLog27SelectCubeForPremiumServiceEi+0x2e>
 8686dcd:	90                   	nop
 8686dce:	c9                   	leave
 8686dcf:	c3                   	ret

```

```c
// cUserHistoryLog::SelectCubeForPremiumService @ 0x8686da0

/* cUserHistoryLog::SelectCubeForPremiumService(int) */

void __thiscall cUserHistoryLog::SelectCubeForPremiumService(cUserHistoryLog *this,int param_1)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"SelectCubeForPremiumService,%d",param_1);
  }
  return;
}

```

---

## SendBuffertoClientLog

```asm
// === 08686e3a cUserHistoryLog::SendBuffertoClientLog  [0x08686e3a-0x8686e9f] ===
 8686e3a:	55                   	push   %ebp
 8686e3b:	89 e5                	mov    %esp,%ebp
 8686e3d:	56                   	push   %esi
 8686e3e:	53                   	push   %ebx
 8686e3f:	83 ec 30             	sub    $0x30,%esp
 8686e42:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8686e45:	8b 55 14             	mov    0x14(%ebp),%edx
 8686e48:	8b 45 18             	mov    0x18(%ebp),%eax
 8686e4b:	66 89 4d f4          	mov    %cx,-0xc(%ebp)
 8686e4f:	88 55 f0             	mov    %dl,-0x10(%ebp)
 8686e52:	88 45 ec             	mov    %al,-0x14(%ebp)
 8686e55:	0f b6 75 ec          	movzbl -0x14(%ebp),%esi
 8686e59:	0f b6 5d f0          	movzbl -0x10(%ebp),%ebx
 8686e5d:	0f bf 4d f4          	movswl -0xc(%ebp),%ecx
 8686e61:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8686e65:	75 07                	jne    8686e6e <_ZN15cUserHistoryLog21SendBuffertoClientLogEishb+0x34>
 8686e67:	b8 51 10 cf 08       	mov    $0x8cf1051,%eax
 8686e6c:	eb 05                	jmp    8686e73 <_ZN15cUserHistoryLog21SendBuffertoClientLogEishb+0x39>
 8686e6e:	b8 59 10 cf 08       	mov    $0x8cf1059,%eax
 8686e73:	8b 55 08             	mov    0x8(%ebp),%edx
 8686e76:	8b 12                	mov    (%edx),%edx
 8686e78:	89 74 24 14          	mov    %esi,0x14(%esp)
 8686e7c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8686e80:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686e84:	89 44 24 08          	mov    %eax,0x8(%esp)
 8686e88:	c7 44 24 04 60 10 cf 	movl   $0x8cf1060,0x4(%esp)
 8686e8f:	08 
 8686e90:	89 14 24             	mov    %edx,(%esp)
 8686e93:	e8 66 5a ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686e98:	83 c4 30             	add    $0x30,%esp
 8686e9b:	5b                   	pop    %ebx
 8686e9c:	5e                   	pop    %esi
 8686e9d:	5d                   	pop    %ebp
 8686e9e:	c3                   	ret
 8686e9f:	90                   	nop

```

```c
// cUserHistoryLog::SendBuffertoClientLog @ 0x8686e3a

/* cUserHistoryLog::SendBuffertoClientLog(int, short, unsigned char, bool) */

void __thiscall
cUserHistoryLog::SendBuffertoClientLog
          (cUserHistoryLog *this,int param_1,short param_2,uchar param_3,bool param_4)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = "ANTIBOT";
  }
  else {
    pcVar1 = "DPROTO";
  }
  CUser::LogHistory(*(CUser **)this,"SendBuffertoClient [%s],%d,%d,%d",pcVar1,(int)param_2,
                    (uint)param_3,(uint)param_4);
  return;
}

```

---

## SendMail

```asm
// === 086847ea cUserHistoryLog::SendMail  [0x086847ea-0x86848a7] ===
 86847ea:	55                   	push   %ebp
 86847eb:	89 e5                	mov    %esp,%ebp
 86847ed:	57                   	push   %edi
 86847ee:	56                   	push   %esi
 86847ef:	53                   	push   %ebx
 86847f0:	83 ec 4c             	sub    $0x4c,%esp
 86847f3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86847f7:	0f 84 9e 00 00 00    	je     868489b <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj+0xb1>
 86847fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684800:	83 c0 11             	add    $0x11,%eax
 8684803:	85 c0                	test   %eax,%eax
 8684805:	0f 84 93 00 00 00    	je     868489e <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj+0xb4>
 868480b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8684812:	00 
 8684813:	8b 45 10             	mov    0x10(%ebp),%eax
 8684816:	89 04 24             	mov    %eax,(%esp)
 8684819:	e8 2d 48 a8 ff       	call   810904b <_Z14NumberToStringji>
 868481e:	89 c2                	mov    %eax,%edx
 8684820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684823:	83 c0 45             	add    $0x45,%eax
 8684826:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8684829:	8b 45 0c             	mov    0xc(%ebp),%eax
 868482c:	8b 40 3d             	mov    0x3d(%eax),%eax
 868482f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8684832:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684835:	8b 40 39             	mov    0x39(%eax),%eax
 8684838:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 868483b:	8b 45 0c             	mov    0xc(%ebp),%eax
 868483e:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8684842:	0f b7 f8             	movzwl %ax,%edi
 8684845:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684848:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 868484c:	0f b6 f0             	movzbl %al,%esi
 868484f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684852:	8b 58 2e             	mov    0x2e(%eax),%ebx
 8684855:	8b 45 0c             	mov    0xc(%ebp),%eax
 8684858:	8d 48 11             	lea    0x11(%eax),%ecx
 868485b:	8b 45 08             	mov    0x8(%ebp),%eax
 868485e:	8b 00                	mov    (%eax),%eax
 8684860:	89 54 24 24          	mov    %edx,0x24(%esp)
 8684864:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8684867:	89 54 24 20          	mov    %edx,0x20(%esp)
 868486b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 868486e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8684872:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8684875:	89 54 24 18          	mov    %edx,0x18(%esp)
 8684879:	89 7c 24 14          	mov    %edi,0x14(%esp)
 868487d:	89 74 24 10          	mov    %esi,0x10(%esp)
 8684881:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8684885:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8684889:	c7 44 24 04 54 06 cf 	movl   $0x8cf0654,0x4(%esp)
 8684890:	08 
 8684891:	89 04 24             	mov    %eax,(%esp)
 8684894:	e8 65 80 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684899:	eb 04                	jmp    868489f <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj+0xb5>
 868489b:	90                   	nop
 868489c:	eb 01                	jmp    868489f <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj+0xb5>
 868489e:	90                   	nop
 868489f:	83 c4 4c             	add    $0x4c,%esp
 86848a2:	5b                   	pop    %ebx
 86848a3:	5e                   	pop    %esi
 86848a4:	5f                   	pop    %edi
 86848a5:	5d                   	pop    %ebp
 86848a6:	c3                   	ret
 86848a7:	90                   	nop

```

```c
// cUserHistoryLog::SendMail @ 0x86847ea

/* cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int) */

void __thiscall
cUserHistoryLog::SendMail(cUserHistoryLog *this,MSG_MAILBOX_SEND *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != (MSG_MAILBOX_SEND *)0x0) && (param_1 != (MSG_MAILBOX_SEND *)0xffffffef)) {
    uVar1 = NumberToString(param_2,0);
    CUser::LogHistory(*(CUser **)this,"MailS,%s,%d,%d,%d,%d,%d,\"%s\",%s",param_1 + 0x11,
                      *(undefined4 *)(param_1 + 0x2e),(uint)(byte)param_1[0x36],
                      (uint)*(ushort *)(param_1 + 0x37),*(undefined4 *)(param_1 + 0x39),
                      *(undefined4 *)(param_1 + 0x3d),param_1 + 0x45,uVar1);
  }
  return;
}

```

---

## SendMailForCeraShopGift

```asm
// === 086848da cUserHistoryLog::SendMailForCeraShopGift  [0x086848da-0x8684919] ===
 86848da:	55                   	push   %ebp
 86848db:	89 e5                	mov    %esp,%ebp
 86848dd:	83 ec 38             	sub    $0x38,%esp
 86848e0:	8b 45 10             	mov    0x10(%ebp),%eax
 86848e3:	88 45 f4             	mov    %al,-0xc(%ebp)
 86848e6:	0f be 55 f4          	movsbl -0xc(%ebp),%edx
 86848ea:	8b 45 08             	mov    0x8(%ebp),%eax
 86848ed:	8b 00                	mov    (%eax),%eax
 86848ef:	8b 4d 18             	mov    0x18(%ebp),%ecx
 86848f2:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86848f6:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86848f9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86848fd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684901:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684904:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684908:	c7 44 24 04 87 06 cf 	movl   $0x8cf0687,0x4(%esp)
 868490f:	08 
 8684910:	89 04 24             	mov    %eax,(%esp)
 8684913:	e8 e6 7f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684918:	c9                   	leave
 8684919:	c3                   	ret

```

```c
// cUserHistoryLog::SendMailForCeraShopGift @ 0x86848da

/* cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int) */

void __thiscall
cUserHistoryLog::SendMailForCeraShopGift
          (cUserHistoryLog *this,uint param_1,char param_2,uint param_3,uint param_4)

{
  CUser::LogHistory(*(CUser **)this,"MailSG,%u,%d,%u,%u",param_1,(int)param_2,param_3,param_4);
  return;
}

```

---

## SeparateUpgradeItem

```asm
// === 08684d0a cUserHistoryLog::SeparateUpgradeItem  [0x08684d0a-0x8684d73] ===
 8684d0a:	55                   	push   %ebp
 8684d0b:	89 e5                	mov    %esp,%ebp
 8684d0d:	83 ec 38             	sub    $0x38,%esp
 8684d10:	8b 45 18             	mov    0x18(%ebp),%eax
 8684d13:	88 45 f4             	mov    %al,-0xc(%ebp)
 8684d16:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8684d1a:	74 2c                	je     8684d48 <_ZN15cUserHistoryLog19SeparateUpgradeItemEiiib+0x3e>
 8684d1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8684d1f:	8b 00                	mov    (%eax),%eax
 8684d21:	8b 55 14             	mov    0x14(%ebp),%edx
 8684d24:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684d28:	8b 55 10             	mov    0x10(%ebp),%edx
 8684d2b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684d2f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684d32:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684d36:	c7 44 24 04 30 08 cf 	movl   $0x8cf0830,0x4(%esp)
 8684d3d:	08 
 8684d3e:	89 04 24             	mov    %eax,(%esp)
 8684d41:	e8 b8 7b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684d46:	eb 2a                	jmp    8684d72 <_ZN15cUserHistoryLog19SeparateUpgradeItemEiiib+0x68>
 8684d48:	8b 45 08             	mov    0x8(%ebp),%eax
 8684d4b:	8b 00                	mov    (%eax),%eax
 8684d4d:	8b 55 14             	mov    0x14(%ebp),%edx
 8684d50:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684d54:	8b 55 10             	mov    0x10(%ebp),%edx
 8684d57:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684d5b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684d5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684d62:	c7 44 24 04 4a 08 cf 	movl   $0x8cf084a,0x4(%esp)
 8684d69:	08 
 8684d6a:	89 04 24             	mov    %eax,(%esp)
 8684d6d:	e8 8c 7b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684d72:	c9                   	leave
 8684d73:	c3                   	ret

```

```c
// cUserHistoryLog::SeparateUpgradeItem @ 0x8684d0a

/* cUserHistoryLog::SeparateUpgradeItem(int, int, int, bool) */

void __thiscall
cUserHistoryLog::SeparateUpgradeItem
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,bool param_4)

{
  if (param_4) {
    CUser::LogHistory(*(CUser **)this,"UpgradeSeparate+,%d,%d,%d",param_1,param_2,param_3);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"UpgradeSeparate-,%d,%d,%d",param_1,param_2,param_3);
  }
  return;
}

```

---

## SkillAdd

```asm
// === 08682b2e cUserHistoryLog::SkillAdd  [0x08682b2e-0x8682b6d] ===
 8682b2e:	55                   	push   %ebp
 8682b2f:	89 e5                	mov    %esp,%ebp
 8682b31:	83 ec 28             	sub    $0x28,%esp
 8682b34:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8682b37:	8b 45 08             	mov    0x8(%ebp),%eax
 8682b3a:	8b 00                	mov    (%eax),%eax
 8682b3c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8682b3f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8682b43:	89 54 24 14          	mov    %edx,0x14(%esp)
 8682b47:	8b 55 18             	mov    0x18(%ebp),%edx
 8682b4a:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682b4e:	8b 55 14             	mov    0x14(%ebp),%edx
 8682b51:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682b55:	8b 55 0c             	mov    0xc(%ebp),%edx
 8682b58:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682b5c:	c7 44 24 04 15 01 cf 	movl   $0x8cf0115,0x4(%esp)
 8682b63:	08 
 8682b64:	89 04 24             	mov    %eax,(%esp)
 8682b67:	e8 92 9d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682b6c:	c9                   	leave
 8682b6d:	c3                   	ret

```

```c
// cUserHistoryLog::SkillAdd @ 0x8682b2e

/* cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason) */

void __thiscall
cUserHistoryLog::SkillAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"Skill+,%d,%d,%d,%d,%d",param_1,param_3,param_4,param_6,param_2)
  ;
  return;
}

```

---

## SkillDel

```asm
// === 08682b6e cUserHistoryLog::SkillDel  [0x08682b6e-0x8682bad] ===
 8682b6e:	55                   	push   %ebp
 8682b6f:	89 e5                	mov    %esp,%ebp
 8682b71:	83 ec 28             	sub    $0x28,%esp
 8682b74:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8682b77:	8b 45 08             	mov    0x8(%ebp),%eax
 8682b7a:	8b 00                	mov    (%eax),%eax
 8682b7c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8682b7f:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8682b83:	89 54 24 14          	mov    %edx,0x14(%esp)
 8682b87:	8b 55 18             	mov    0x18(%ebp),%edx
 8682b8a:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682b8e:	8b 55 14             	mov    0x14(%ebp),%edx
 8682b91:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682b95:	8b 55 0c             	mov    0xc(%ebp),%edx
 8682b98:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682b9c:	c7 44 24 04 2b 01 cf 	movl   $0x8cf012b,0x4(%esp)
 8682ba3:	08 
 8682ba4:	89 04 24             	mov    %eax,(%esp)
 8682ba7:	e8 52 9d ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682bac:	c9                   	leave
 8682bad:	c3                   	ret

```

```c
// cUserHistoryLog::SkillDel @ 0x8682b6e

/* cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason) */

void __thiscall
cUserHistoryLog::SkillDel
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"Skill-,%d,%d,%d,%d,%d",param_1,param_3,param_4,param_6,param_2)
  ;
  return;
}

```

---

## SkillSPInfoSave

```asm
// === 08686188 cUserHistoryLog::SkillSPInfoSave  [0x08686188-0x86863b5] ===
 8686188:	55                   	push   %ebp
 8686189:	89 e5                	mov    %esp,%ebp
 868618b:	57                   	push   %edi
 868618c:	56                   	push   %esi
 868618d:	53                   	push   %ebx
 868618e:	81 ec dc 01 00 00    	sub    $0x1dc,%esp
 8686194:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 868619a:	89 04 24             	mov    %eax,(%esp)
 868619d:	e8 1c ee ba ff       	call   8234fbe <_ZN8WongWork13CSkillChangerC1Ev>
 86861a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86861a9:	00 
 86861aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86861ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 86861b1:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 86861b7:	89 04 24             	mov    %eax,(%esp)
 86861ba:	e8 27 40 f8 ff       	call   860a1e6 <_ZN8WongWork13CSkillChanger19GetCurCharacTotalSPEPK5CUserb>
 86861bf:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86861c2:	8d 9d 58 ff ff ff    	lea    -0xa8(%ebp),%ebx
 86861c8:	b8 00 00 00 00       	mov    $0x0,%eax
 86861cd:	ba 20 00 00 00       	mov    $0x20,%edx
 86861d2:	89 df                	mov    %ebx,%edi
 86861d4:	89 d1                	mov    %edx,%ecx
 86861d6:	f3 ab                	rep stos %eax,%es:(%edi)
 86861d8:	8d 9d d8 fe ff ff    	lea    -0x128(%ebp),%ebx
 86861de:	b8 00 00 00 00       	mov    $0x0,%eax
 86861e3:	ba 20 00 00 00       	mov    $0x20,%edx
 86861e8:	89 df                	mov    %ebx,%edi
 86861ea:	89 d1                	mov    %edx,%ecx
 86861ec:	f3 ab                	rep stos %eax,%es:(%edi)
 86861ee:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86861f2:	74 17                	je     868620b <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x83>
 86861f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86861f7:	89 04 24             	mov    %eax,(%esp)
 86861fa:	e8 3d 91 ba ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 86861ff:	83 f8 ff             	cmp    $0xffffffff,%eax
 8686202:	75 07                	jne    868620b <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x83>
 8686204:	b8 01 00 00 00       	mov    $0x1,%eax
 8686209:	eb 05                	jmp    8686210 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x88>
 868620b:	b8 00 00 00 00       	mov    $0x0,%eax
 8686210:	84 c0                	test   %al,%al
 8686212:	74 7f                	je     8686293 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x10b>
 8686214:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686217:	89 04 24             	mov    %eax,(%esp)
 868621a:	e8 11 8f ba ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 868621f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8686226:	00 
 8686227:	89 04 24             	mov    %eax,(%esp)
 868622a:	e8 f9 d2 f7 ff       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 868622f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8686232:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8686236:	0f 88 61 01 00 00    	js     868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 868623c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8686240:	0f 88 57 01 00 00    	js     868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 8686246:	8b 45 10             	mov    0x10(%ebp),%eax
 8686249:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 8686250:	ff 
 8686251:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8686254:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686258:	8b 55 dc             	mov    -0x24(%ebp),%edx
 868625b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868625f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8686263:	c7 44 24 04 11 0d cf 	movl   $0x8cf0d11,0x4(%esp)
 868626a:	08 
 868626b:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8686271:	89 04 24             	mov    %eax,(%esp)
 8686274:	e8 c7 81 9f ff       	call   807e440 <sprintf@plt>
 8686279:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 868627f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8686283:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686286:	89 04 24             	mov    %eax,(%esp)
 8686289:	e8 70 66 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868628e:	e9 0a 01 00 00       	jmp    868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 8686293:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686296:	89 04 24             	mov    %eax,(%esp)
 8686299:	e8 92 8e ba ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 868629e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86862a5:	00 
 86862a6:	89 04 24             	mov    %eax,(%esp)
 86862a9:	e8 7a d2 f7 ff       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 86862ae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86862b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86862b4:	89 04 24             	mov    %eax,(%esp)
 86862b7:	e8 74 8e ba ff       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 86862bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86862c3:	00 
 86862c4:	89 04 24             	mov    %eax,(%esp)
 86862c7:	e8 5c d2 f7 ff       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 86862cc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86862cf:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 86862d3:	0f 88 c4 00 00 00    	js     868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 86862d9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86862dd:	0f 88 ba 00 00 00    	js     868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 86862e3:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 86862e7:	0f 85 b0 00 00 00    	jne    868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 86862ed:	8b 45 10             	mov    0x10(%ebp),%eax
 86862f0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86862f7:	00 
 86862f8:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86862fb:	89 54 24 10          	mov    %edx,0x10(%esp)
 86862ff:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8686302:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686306:	89 44 24 08          	mov    %eax,0x8(%esp)
 868630a:	c7 44 24 04 11 0d cf 	movl   $0x8cf0d11,0x4(%esp)
 8686311:	08 
 8686312:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8686318:	89 04 24             	mov    %eax,(%esp)
 868631b:	e8 20 81 9f ff       	call   807e440 <sprintf@plt>
 8686320:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8686326:	89 44 24 04          	mov    %eax,0x4(%esp)
 868632a:	8b 45 0c             	mov    0xc(%ebp),%eax
 868632d:	89 04 24             	mov    %eax,(%esp)
 8686330:	e8 c9 65 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686335:	8b 45 10             	mov    0x10(%ebp),%eax
 8686338:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 868633f:	00 
 8686340:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8686343:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686347:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 868634a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 868634e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8686352:	c7 44 24 04 11 0d cf 	movl   $0x8cf0d11,0x4(%esp)
 8686359:	08 
 868635a:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 8686360:	89 04 24             	mov    %eax,(%esp)
 8686363:	e8 d8 80 9f ff       	call   807e440 <sprintf@plt>
 8686368:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 868636e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8686372:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686375:	89 04 24             	mov    %eax,(%esp)
 8686378:	e8 81 65 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868637d:	eb 1e                	jmp    868639d <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason+0x215>
 868637f:	89 d3                	mov    %edx,%ebx
 8686381:	89 c6                	mov    %eax,%esi
 8686383:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 8686389:	89 04 24             	mov    %eax,(%esp)
 868638c:	e8 33 ec ba ff       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 8686391:	89 f0                	mov    %esi,%eax
 8686393:	89 da                	mov    %ebx,%edx
 8686395:	89 04 24             	mov    %eax,(%esp)
 8686398:	e8 b3 d3 45 00       	call   8ae3750 <_Unwind_Resume>
 868639d:	8d 85 44 fe ff ff    	lea    -0x1bc(%ebp),%eax
 86863a3:	89 04 24             	mov    %eax,(%esp)
 86863a6:	e8 19 ec ba ff       	call   8234fc4 <_ZN8WongWork13CSkillChangerD1Ev>
 86863ab:	81 c4 dc 01 00 00    	add    $0x1dc,%esp
 86863b1:	5b                   	pop    %ebx
 86863b2:	5e                   	pop    %esi
 86863b3:	5f                   	pop    %edi
 86863b4:	5d                   	pop    %ebp
 86863b5:	c3                   	ret

```

```c
// cUserHistoryLog::SkillSPInfoSave @ 0x8686188

/* cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason) */

void __thiscall
cUserHistoryLog::SkillSPInfoSave(undefined4 this,CUserCharacInfo *param_1,undefined4 param_3)

{
  bool bVar1;
  SkillSlot *pSVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  CSkillChanger local_1c0 [148];
  char local_12c [128];
  char local_ac [128];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar5 = 0;
  WongWork::CSkillChanger::CSkillChanger(local_1c0);
                    /* try { // try from 086861ba to 0868637c has its CatchHandler @ 0868637f */
  local_2c = WongWork::CSkillChanger::GetCurCharacTotalSP(local_1c0,(CUser *)param_1,false);
  pcVar4 = local_ac;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  pcVar4 = local_12c;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  if (param_1 != (CUserCharacInfo *)0x0) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(param_1);
    if (iVar3 == -1) {
      bVar1 = true;
      goto LAB_08686210;
    }
  }
  bVar1 = false;
LAB_08686210:
  if (bVar1) {
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    local_28 = SkillSlot::get_remain_sp_at_index(pSVar2,0);
    if ((-1 < local_2c) && (-1 < local_28)) {
      sprintf(local_ac,"SkillSPInfo,%d,%d,%d,%d",param_3,local_28,local_2c,0xffffffff);
      CUser::LogHistory((CUser *)param_1,local_ac);
    }
  }
  else {
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    local_24 = SkillSlot::get_remain_sp_at_index(pSVar2,0);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    local_20 = SkillSlot::get_remain_sp_at_index(pSVar2,1);
    if (((-1 < local_2c) && (-1 < local_24)) && (local_20 == 0)) {
      sprintf(local_ac,"SkillSPInfo,%d,%d,%d,%d",param_3,local_24,local_2c,0);
      CUser::LogHistory((CUser *)param_1,local_ac);
      sprintf(local_12c,"SkillSPInfo,%d,%d,%d,%d",param_3,local_20,local_2c,1);
      CUser::LogHistory((CUser *)param_1,local_12c);
    }
  }
  WongWork::CSkillChanger::~CSkillChanger(local_1c0);
  return;
}

```

---

## SkillSave

```asm
// === 08685dce cUserHistoryLog::SkillSave  [0x08685dce-0x8686187] ===
 8685dce:	55                   	push   %ebp
 8685dcf:	89 e5                	mov    %esp,%ebp
 8685dd1:	57                   	push   %edi
 8685dd2:	56                   	push   %esi
 8685dd3:	53                   	push   %ebx
 8685dd4:	81 ec bc 06 00 00    	sub    $0x6bc,%esp
 8685dda:	c7 45 bc 0f 00 00 00 	movl   $0xf,-0x44(%ebp)
 8685de1:	8b 45 18             	mov    0x18(%ebp),%eax
 8685de4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8685de8:	c7 44 24 04 ea 0c cf 	movl   $0x8cf0cea,0x4(%esp)
 8685def:	08 
 8685df0:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8685df3:	89 04 24             	mov    %eax,(%esp)
 8685df6:	e8 45 86 9f ff       	call   807e440 <sprintf@plt>
 8685dfb:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8685e02:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8685e05:	89 04 24             	mov    %eax,(%esp)
 8685e08:	e8 c9 eb aa ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8685e0d:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8685e14:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8685e1b:	eb 78                	jmp    8685e95 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0xc7>
 8685e1d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8685e20:	01 c0                	add    %eax,%eax
 8685e22:	03 45 0c             	add    0xc(%ebp),%eax
 8685e25:	0f b6 00             	movzbl (%eax),%eax
 8685e28:	84 c0                	test   %al,%al
 8685e2a:	74 65                	je     8685e91 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0xc3>
 8685e2c:	81 7d c8 89 00 00 00 	cmpl   $0x89,-0x38(%ebp)
 8685e33:	7e 09                	jle    8685e3e <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x70>
 8685e35:	81 7d c8 95 00 00 00 	cmpl   $0x95,-0x38(%ebp)
 8685e3c:	7e 53                	jle    8685e91 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0xc3>
 8685e3e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8685e41:	01 c0                	add    %eax,%eax
 8685e43:	03 45 0c             	add    0xc(%ebp),%eax
 8685e46:	8d 48 01             	lea    0x1(%eax),%ecx
 8685e49:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8685e4c:	01 c0                	add    %eax,%eax
 8685e4e:	03 45 0c             	add    0xc(%ebp),%eax
 8685e51:	89 c2                	mov    %eax,%edx
 8685e53:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8685e56:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8685e5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8685e5e:	89 04 24             	mov    %eax,(%esp)
 8685e61:	e8 ff 62 01 00       	call   869c165 <_ZSt9make_pairIRKhRKcESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 8685e66:	83 ec 04             	sub    $0x4,%esp
 8685e69:	8d 45 ba             	lea    -0x46(%ebp),%eax
 8685e6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685e70:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8685e73:	89 04 24             	mov    %eax,(%esp)
 8685e76:	e8 29 63 01 00       	call   869c1a4 <_ZNSt4pairIiiEC1IhcEEOS_IT_T0_E>
 8685e7b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8685e7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685e82:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8685e85:	89 04 24             	mov    %eax,(%esp)
 8685e88:	e8 79 77 a5 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8685e8d:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8685e91:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8685e95:	81 7d c8 cb 00 00 00 	cmpl   $0xcb,-0x38(%ebp)
 8685e9c:	0f 9e c0             	setle  %al
 8685e9f:	84 c0                	test   %al,%al
 8685ea1:	0f 85 76 ff ff ff    	jne    8685e1d <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x4f>
 8685ea7:	db 45 c4             	fildl  -0x3c(%ebp)
 8685eaa:	d9 05 80 39 cf 08    	flds   0x8cf3980
 8685eb0:	de f9                	fdivrp %st,%st(1)
 8685eb2:	d9 bd 66 f9 ff ff    	fnstcw -0x69a(%ebp)
 8685eb8:	0f b7 85 66 f9 ff ff 	movzwl -0x69a(%ebp),%eax
 8685ebf:	b4 0c                	mov    $0xc,%ah
 8685ec1:	66 89 85 64 f9 ff ff 	mov    %ax,-0x69c(%ebp)
 8685ec8:	d9 ad 64 f9 ff ff    	fldcw  -0x69c(%ebp)
 8685ece:	db 9d 60 f9 ff ff    	fistpl -0x6a0(%ebp)
 8685ed4:	d9 ad 66 f9 ff ff    	fldcw  -0x69a(%ebp)
 8685eda:	8b 85 60 f9 ff ff    	mov    -0x6a0(%ebp),%eax
 8685ee0:	83 c0 01             	add    $0x1,%eax
 8685ee3:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8685ee6:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8685eed:	e9 51 02 00 00       	jmp    8686143 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x375>
 8685ef2:	8d 9d 6c f9 ff ff    	lea    -0x694(%ebp),%ebx
 8685ef8:	b8 00 00 00 00       	mov    $0x0,%eax
 8685efd:	ba 00 01 00 00       	mov    $0x100,%edx
 8685f02:	89 df                	mov    %ebx,%edi
 8685f04:	89 d1                	mov    %edx,%ecx
 8685f06:	f3 ab                	rep stos %eax,%es:(%edi)
 8685f08:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8685f0f:	00 
 8685f10:	c7 44 24 04 f0 0c cf 	movl   $0x8cf0cf0,0x4(%esp)
 8685f17:	08 
 8685f18:	8d 85 6c f9 ff ff    	lea    -0x694(%ebp),%eax
 8685f1e:	89 04 24             	mov    %eax,(%esp)
 8685f21:	e8 7a 79 9f ff       	call   807d8a0 <memcpy@plt>
 8685f26:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8685f29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685f2d:	8d 85 6c f9 ff ff    	lea    -0x694(%ebp),%eax
 8685f33:	89 04 24             	mov    %eax,(%esp)
 8685f36:	e8 25 7e 9f ff       	call   807dd60 <strcat@plt>
 8685f3b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8685f3e:	89 d0                	mov    %edx,%eax
 8685f40:	c1 e0 04             	shl    $0x4,%eax
 8685f43:	29 d0                	sub    %edx,%eax
 8685f45:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8685f48:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8685f4f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8685f52:	83 e8 01             	sub    $0x1,%eax
 8685f55:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 8685f58:	7e 0b                	jle    8685f65 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x197>
 8685f5a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8685f5d:	83 c0 0e             	add    $0xe,%eax
 8685f60:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8685f63:	eb 2f                	jmp    8685f94 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x1c6>
 8685f65:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8685f68:	ba 89 88 88 88       	mov    $0x88888889,%edx
 8685f6d:	89 c8                	mov    %ecx,%eax
 8685f6f:	f7 ea                	imul   %edx
 8685f71:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8685f74:	89 c2                	mov    %eax,%edx
 8685f76:	c1 fa 03             	sar    $0x3,%edx
 8685f79:	89 c8                	mov    %ecx,%eax
 8685f7b:	c1 f8 1f             	sar    $0x1f,%eax
 8685f7e:	29 c2                	sub    %eax,%edx
 8685f80:	89 d0                	mov    %edx,%eax
 8685f82:	c1 e0 04             	shl    $0x4,%eax
 8685f85:	29 d0                	sub    %edx,%eax
 8685f87:	89 ca                	mov    %ecx,%edx
 8685f89:	29 c2                	sub    %eax,%edx
 8685f8b:	8d 42 ff             	lea    -0x1(%edx),%eax
 8685f8e:	03 45 d0             	add    -0x30(%ebp),%eax
 8685f91:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8685f94:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8685f97:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8685f9a:	89 d1                	mov    %edx,%ecx
 8685f9c:	29 c1                	sub    %eax,%ecx
 8685f9e:	89 c8                	mov    %ecx,%eax
 8685fa0:	83 c0 01             	add    $0x1,%eax
 8685fa3:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8685fa6:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8685faa:	0f 84 a6 01 00 00    	je     8686156 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x388>
 8685fb0:	8b 45 14             	mov    0x14(%ebp),%eax
 8685fb3:	89 44 24 10          	mov    %eax,0x10(%esp)
 8685fb7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8685fba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8685fbe:	8b 45 10             	mov    0x10(%ebp),%eax
 8685fc1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8685fc5:	c7 44 24 04 fa 0c cf 	movl   $0x8cf0cfa,0x4(%esp)
 8685fcc:	08 
 8685fcd:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8685fd3:	89 04 24             	mov    %eax,(%esp)
 8685fd6:	e8 65 84 9f ff       	call   807e440 <sprintf@plt>
 8685fdb:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8685fe1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8685fe5:	8d 85 6c f9 ff ff    	lea    -0x694(%ebp),%eax
 8685feb:	89 04 24             	mov    %eax,(%esp)
 8685fee:	e8 6d 7d 9f ff       	call   807dd60 <strcat@plt>
 8685ff3:	8d 9d 6c fd ff ff    	lea    -0x294(%ebp),%ebx
 8685ff9:	b8 00 00 00 00       	mov    $0x0,%eax
 8685ffe:	ba 80 00 00 00       	mov    $0x80,%edx
 8686003:	89 df                	mov    %ebx,%edi
 8686005:	89 d1                	mov    %edx,%ecx
 8686007:	f3 ab                	rep stos %eax,%es:(%edi)
 8686009:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8686010:	e9 ea 00 00 00       	jmp    86860ff <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x331>
 8686015:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8686018:	8b 55 d0             	mov    -0x30(%ebp),%edx
 868601b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 868601e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8686022:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8686025:	89 04 24             	mov    %eax,(%esp)
 8686028:	e8 77 48 a6 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 868602d:	8b 00                	mov    (%eax),%eax
 868602f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8686032:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8686035:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8686038:	8d 04 02             	lea    (%edx,%eax,1),%eax
 868603b:	89 44 24 04          	mov    %eax,0x4(%esp)
 868603f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8686042:	89 04 24             	mov    %eax,(%esp)
 8686045:	e8 5a 48 a6 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 868604a:	8b 40 04             	mov    0x4(%eax),%eax
 868604d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8686050:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 8686057:	00 00 00 
 868605a:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 8686061:	00 00 00 
 8686064:	c7 85 74 ff ff ff 00 	movl   $0x0,-0x8c(%ebp)
 868606b:	00 00 00 
 868606e:	c7 85 78 ff ff ff 00 	movl   $0x0,-0x88(%ebp)
 8686075:	00 00 00 
 8686078:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 868607b:	ba 56 55 55 55       	mov    $0x55555556,%edx
 8686080:	89 c8                	mov    %ecx,%eax
 8686082:	f7 ea                	imul   %edx
 8686084:	89 c8                	mov    %ecx,%eax
 8686086:	c1 f8 1f             	sar    $0x1f,%eax
 8686089:	29 c2                	sub    %eax,%edx
 868608b:	89 d0                	mov    %edx,%eax
 868608d:	01 c0                	add    %eax,%eax
 868608f:	01 d0                	add    %edx,%eax
 8686091:	89 ca                	mov    %ecx,%edx
 8686093:	29 c2                	sub    %eax,%edx
 8686095:	85 d2                	test   %edx,%edx
 8686097:	75 26                	jne    86860bf <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x2f1>
 8686099:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 868609c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86860a0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86860a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 86860a7:	c7 44 24 04 03 0d cf 	movl   $0x8cf0d03,0x4(%esp)
 86860ae:	08 
 86860af:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86860b5:	89 04 24             	mov    %eax,(%esp)
 86860b8:	e8 83 83 9f ff       	call   807e440 <sprintf@plt>
 86860bd:	eb 24                	jmp    86860e3 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x315>
 86860bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86860c2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86860c6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86860c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86860cd:	c7 44 24 04 0a 0d cf 	movl   $0x8cf0d0a,0x4(%esp)
 86860d4:	08 
 86860d5:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86860db:	89 04 24             	mov    %eax,(%esp)
 86860de:	e8 5d 83 9f ff       	call   807e440 <sprintf@plt>
 86860e3:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86860e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86860ed:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 86860f3:	89 04 24             	mov    %eax,(%esp)
 86860f6:	e8 65 7c 9f ff       	call   807dd60 <strcat@plt>
 86860fb:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 86860ff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8686102:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 8686105:	0f 9c c0             	setl   %al
 8686108:	84 c0                	test   %al,%al
 868610a:	0f 85 05 ff ff ff    	jne    8686015 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x247>
 8686110:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 8686116:	89 44 24 04          	mov    %eax,0x4(%esp)
 868611a:	8d 85 6c f9 ff ff    	lea    -0x694(%ebp),%eax
 8686120:	89 04 24             	mov    %eax,(%esp)
 8686123:	e8 38 7c 9f ff       	call   807dd60 <strcat@plt>
 8686128:	8b 45 08             	mov    0x8(%ebp),%eax
 868612b:	8b 00                	mov    (%eax),%eax
 868612d:	8d 95 6c f9 ff ff    	lea    -0x694(%ebp),%edx
 8686133:	89 54 24 04          	mov    %edx,0x4(%esp)
 8686137:	89 04 24             	mov    %eax,(%esp)
 868613a:	e8 bf 67 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868613f:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8686143:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8686146:	3b 45 c0             	cmp    -0x40(%ebp),%eax
 8686149:	0f 9c c0             	setl   %al
 868614c:	84 c0                	test   %al,%al
 868614e:	0f 85 9e fd ff ff    	jne    8685ef2 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x124>
 8686154:	eb 01                	jmp    8686157 <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason+0x389>
 8686156:	90                   	nop
 8686157:	8d 45 94             	lea    -0x6c(%ebp),%eax
 868615a:	89 04 24             	mov    %eax,(%esp)
 868615d:	e8 88 e8 aa ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8686162:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8686165:	83 c4 00             	add    $0x0,%esp
 8686168:	5b                   	pop    %ebx
 8686169:	5e                   	pop    %esi
 868616a:	5f                   	pop    %edi
 868616b:	5d                   	pop    %ebp
 868616c:	c3                   	ret
 868616d:	89 d3                	mov    %edx,%ebx
 868616f:	89 c6                	mov    %eax,%esi
 8686171:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8686174:	89 04 24             	mov    %eax,(%esp)
 8686177:	e8 6e e8 aa ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 868617c:	89 f0                	mov    %esi,%eax
 868617e:	89 da                	mov    %ebx,%edx
 8686180:	89 04 24             	mov    %eax,(%esp)
 8686183:	e8 c8 d5 45 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// cUserHistoryLog::SkillSave @ 0x8685dce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason) */

void __thiscall
cUserHistoryLog::SkillSave
          (cUserHistoryLog *this,int param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  char local_698 [1024];
  char local_298 [512];
  char local_98 [40];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_70 [12];
  char local_64 [16];
  pair<int,int> local_54 [10];
  uchar local_4a [2];
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  bVar4 = 0;
  local_48 = 0xf;
  sprintf(local_64,",%d, ",param_5);
  local_44 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_70);
  local_40 = 0;
  for (local_3c = 0; local_3c < 0xcc; local_3c = local_3c + 1) {
    if ((*(char *)(local_3c * 2 + param_1) != '\0') && ((local_3c < 0x8a || (0x95 < local_3c)))) {
                    /* try { // try from 08685e61 to 0868613e has its CatchHandler @ 0868616d */
      std::make_pair<unsigned_char_const&,char_const&>(local_4a,(char *)(local_3c * 2 + param_1));
      std::pair<int,int>::pair<unsigned_char,char>(local_54,local_4a);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                (local_70,local_54);
      local_40 = local_40 + 1;
    }
  }
  local_44 = (int)ROUND((float)local_40 / _DAT_08cf3980) + 1;
  for (local_38 = 0; local_38 < local_44; local_38 = local_38 + 1) {
    pcVar3 = local_698;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
    }
    memcpy(local_698,"SaveLethe",10);
    strcat(local_698,local_64);
    local_34 = local_38 * 0xf;
    if (local_38 < local_44 + -1) {
      local_30 = local_34 + 0xe;
    }
    else {
      local_30 = local_40 % 0xf + -1 + local_34;
    }
    local_2c = local_30 + local_38 * -0xf + 1;
    if (local_2c == 0) break;
    sprintf(local_98 + 0x10,"%d/%d/%d",param_2,local_2c,param_3);
    strcat(local_698,local_98 + 0x10);
    pcVar3 = local_298;
    for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar4 * -2 + 1) * 4;
    }
    for (local_28 = 0; local_28 < local_2c; local_28 = local_28 + 1) {
      puVar1 = (undefined4 *)
               std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                         (local_70,local_34 + local_28);
      local_24 = *puVar1;
      iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        (local_70,local_34 + local_28);
      local_20 = *(undefined4 *)(iVar2 + 4);
      local_98[0] = '\0';
      local_98[1] = '\0';
      local_98[2] = '\0';
      local_98[3] = '\0';
      local_98[4] = '\0';
      local_98[5] = '\0';
      local_98[6] = '\0';
      local_98[7] = '\0';
      local_98[8] = '\0';
      local_98[9] = '\0';
      local_98[10] = '\0';
      local_98[0xb] = '\0';
      local_98[0xc] = '\0';
      local_98[0xd] = '\0';
      local_98[0xe] = '\0';
      local_98[0xf] = '\0';
      if (local_28 % 3 == 0) {
        sprintf(local_98,",%d/%d",local_24,local_20);
      }
      else {
        sprintf(local_98,"/%d/%d",local_24,local_20);
      }
      strcat(local_298,local_98);
    }
    strcat(local_698,local_298);
    CUser::LogHistory(*(CUser **)this,local_698);
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_70);
  return;
}

```

---

## StartPvP

```asm
// === 086863b6 cUserHistoryLog::StartPvP  [0x086863b6-0x868642d] ===
 86863b6:	55                   	push   %ebp
 86863b7:	89 e5                	mov    %esp,%ebp
 86863b9:	83 ec 28             	sub    $0x28,%esp
 86863bc:	8b 55 0c             	mov    0xc(%ebp),%edx
 86863bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86863c2:	8b 00                	mov    (%eax),%eax
 86863c4:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86863c7:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 86863cb:	8b 4d 18             	mov    0x18(%ebp),%ecx
 86863ce:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86863d2:	8b 4d 14             	mov    0x14(%ebp),%ecx
 86863d5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86863d9:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86863dc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86863e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86863e4:	c7 44 24 04 29 0d cf 	movl   $0x8cf0d29,0x4(%esp)
 86863eb:	08 
 86863ec:	89 04 24             	mov    %eax,(%esp)
 86863ef:	e8 0a 65 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 86863f4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86863f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86863fa:	8b 00                	mov    (%eax),%eax
 86863fc:	8b 4d 2c             	mov    0x2c(%ebp),%ecx
 86863ff:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686403:	8b 4d 28             	mov    0x28(%ebp),%ecx
 8686406:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 868640a:	8b 4d 24             	mov    0x24(%ebp),%ecx
 868640d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686411:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8686414:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8686418:	89 54 24 08          	mov    %edx,0x8(%esp)
 868641c:	c7 44 24 04 29 0d cf 	movl   $0x8cf0d29,0x4(%esp)
 8686423:	08 
 8686424:	89 04 24             	mov    %eax,(%esp)
 8686427:	e8 d2 64 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868642c:	c9                   	leave
 868642d:	c3                   	ret

```

```c
// cUserHistoryLog::StartPvP @ 0x86863b6

/* cUserHistoryLog::StartPvP(ENUM_PVP_HISTORY_REASON, char const*, char const*, char const*, char
   const*, char const*, char const*, char const*, char const*) */

void __thiscall
cUserHistoryLog::StartPvP
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d,\"%s\",\"%s\",\"%s\",\"%s\"",param_2,param_3,param_4,
                    param_5,param_6);
  CUser::LogHistory(*(CUser **)this,"PVP,%d,\"%s\",\"%s\",\"%s\",\"%s\"",param_2,param_7,param_8,
                    param_9,param_10);
  return;
}

```

---

## StartRidable

```asm
// === 08686928 cUserHistoryLog::StartRidable  [0x08686928-0x868695b] ===
 8686928:	55                   	push   %ebp
 8686929:	89 e5                	mov    %esp,%ebp
 868692b:	83 ec 28             	sub    $0x28,%esp
 868692e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686931:	8b 45 08             	mov    0x8(%ebp),%eax
 8686934:	8b 00                	mov    (%eax),%eax
 8686936:	89 54 24 10          	mov    %edx,0x10(%esp)
 868693a:	8b 55 10             	mov    0x10(%ebp),%edx
 868693d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686941:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8686948:	00 
 8686949:	c7 44 24 04 78 0e cf 	movl   $0x8cf0e78,0x4(%esp)
 8686950:	08 
 8686951:	89 04 24             	mov    %eax,(%esp)
 8686954:	e8 a5 5f ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686959:	c9                   	leave
 868695a:	c3                   	ret
 868695b:	90                   	nop

```

```c
// cUserHistoryLog::StartRidable @ 0x8686928

/* cUserHistoryLog::StartRidable(cUserHistoryLog::eRidableType, int) */

void __thiscall
cUserHistoryLog::StartRidable(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Transform,%d,%d,%d",1,param_3,param_2);
  return;
}

```

---

## TradeBegin

```asm
// === 0868503e cUserHistoryLog::TradeBegin  [0x0868503e-0x868507b] ===
 868503e:	55                   	push   %ebp
 868503f:	89 e5                	mov    %esp,%ebp
 8685041:	83 ec 18             	sub    $0x18,%esp
 8685044:	8b 45 08             	mov    0x8(%ebp),%eax
 8685047:	83 c0 22             	add    $0x22,%eax
 868504a:	0f b6 00             	movzbl (%eax),%eax
 868504d:	84 c0                	test   %al,%al
 868504f:	74 29                	je     868507a <_ZN15cUserHistoryLog10TradeBeginEv+0x3c>
 8685051:	8b 45 08             	mov    0x8(%ebp),%eax
 8685054:	8d 48 04             	lea    0x4(%eax),%ecx
 8685057:	8b 45 08             	mov    0x8(%ebp),%eax
 868505a:	8d 50 22             	lea    0x22(%eax),%edx
 868505d:	8b 45 08             	mov    0x8(%ebp),%eax
 8685060:	8b 00                	mov    (%eax),%eax
 8685062:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8685066:	89 54 24 08          	mov    %edx,0x8(%esp)
 868506a:	c7 44 24 04 11 09 cf 	movl   $0x8cf0911,0x4(%esp)
 8685071:	08 
 8685072:	89 04 24             	mov    %eax,(%esp)
 8685075:	e8 84 78 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 868507a:	c9                   	leave
 868507b:	c3                   	ret

```

```c
// cUserHistoryLog::TradeBegin @ 0x868503e

/* cUserHistoryLog::TradeBegin() */

void __thiscall cUserHistoryLog::TradeBegin(cUserHistoryLog *this)

{
  if (this[0x22] != (cUserHistoryLog)0x0) {
    CUser::LogHistory(*(CUser **)this,"Trade+,\"%s\",\"%s\"",this + 0x22,this + 4);
  }
  return;
}

```

---

## TradeEnd

```asm
// === 0868507c cUserHistoryLog::TradeEnd  [0x0868507c-0x8685129] ===
 868507c:	55                   	push   %ebp
 868507d:	89 e5                	mov    %esp,%ebp
 868507f:	56                   	push   %esi
 8685080:	53                   	push   %ebx
 8685081:	83 ec 30             	sub    $0x30,%esp
 8685084:	8b 45 08             	mov    0x8(%ebp),%eax
 8685087:	83 c0 22             	add    $0x22,%eax
 868508a:	0f b6 00             	movzbl (%eax),%eax
 868508d:	84 c0                	test   %al,%al
 868508f:	0f 84 8e 00 00 00    	je     8685123 <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii+0xa7>
 8685095:	8b 45 14             	mov    0x14(%ebp),%eax
 8685098:	8b 55 10             	mov    0x10(%ebp),%edx
 868509b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 868509e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86850a1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86850a4:	8b 55 18             	mov    0x18(%ebp),%edx
 86850a7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86850aa:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86850ad:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 86850b1:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86850b4:	89 d0                	mov    %edx,%eax
 86850b6:	c1 e0 02             	shl    $0x2,%eax
 86850b9:	01 d0                	add    %edx,%eax
 86850bb:	01 c0                	add    %eax,%eax
 86850bd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86850c0:	7d 06                	jge    86850c8 <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii+0x4c>
 86850c2:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 86850c6:	eb 15                	jmp    86850dd <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii+0x61>
 86850c8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86850cb:	89 d0                	mov    %edx,%eax
 86850cd:	c1 e0 02             	shl    $0x2,%eax
 86850d0:	01 d0                	add    %edx,%eax
 86850d2:	01 c0                	add    %eax,%eax
 86850d4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 86850d7:	7d 04                	jge    86850dd <_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii+0x61>
 86850d9:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
 86850dd:	0f be 4d f7          	movsbl -0x9(%ebp),%ecx
 86850e1:	8b 55 0c             	mov    0xc(%ebp),%edx
 86850e4:	8b 45 08             	mov    0x8(%ebp),%eax
 86850e7:	8d 70 04             	lea    0x4(%eax),%esi
 86850ea:	8b 45 08             	mov    0x8(%ebp),%eax
 86850ed:	8d 58 22             	lea    0x22(%eax),%ebx
 86850f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86850f3:	8b 00                	mov    (%eax),%eax
 86850f5:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 86850f9:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86850fc:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8685100:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8685103:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8685107:	89 54 24 10          	mov    %edx,0x10(%esp)
 868510b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 868510f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8685113:	c7 44 24 04 24 09 cf 	movl   $0x8cf0924,0x4(%esp)
 868511a:	08 
 868511b:	89 04 24             	mov    %eax,(%esp)
 868511e:	e8 db 77 ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685123:	83 c4 30             	add    $0x30,%esp
 8685126:	5b                   	pop    %ebx
 8685127:	5e                   	pop    %esi
 8685128:	5d                   	pop    %ebp
 8685129:	c3                   	ret

```

```c
// cUserHistoryLog::TradeEnd @ 0x868507c

/* cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int) */

void __thiscall
cUserHistoryLog::TradeEnd
          (cUserHistoryLog *this,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  char local_d;
  
  if (this[0x22] != (cUserHistoryLog)0x0) {
    param_3 = param_3 + param_4;
    param_5 = param_5 + param_6;
    local_d = '\0';
    if (param_3 * 10 < param_5) {
      local_d = '\x01';
    }
    else if (param_5 * 10 < param_3) {
      local_d = '\x02';
    }
    CUser::LogHistory(*(CUser **)this,"Trade-,\"%s\",\"%s\",%d, %d, %d, %d",this + 0x22,this + 4,
                      param_2,param_3,param_5,(int)local_d);
  }
  return;
}

```

---

## TradeItemAddFail

```asm
// === 08683d5a cUserHistoryLog::TradeItemAddFail  [0x08683d5a-0x8683d85] ===
 8683d5a:	55                   	push   %ebp
 8683d5b:	89 e5                	mov    %esp,%ebp
 8683d5d:	83 ec 18             	sub    $0x18,%esp
 8683d60:	8b 45 08             	mov    0x8(%ebp),%eax
 8683d63:	8b 00                	mov    (%eax),%eax
 8683d65:	8b 55 10             	mov    0x10(%ebp),%edx
 8683d68:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8683d6c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8683d6f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8683d73:	c7 44 24 04 c0 04 cf 	movl   $0x8cf04c0,0x4(%esp)
 8683d7a:	08 
 8683d7b:	89 04 24             	mov    %eax,(%esp)
 8683d7e:	e8 7b 8b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8683d83:	c9                   	leave
 8683d84:	c3                   	ret
 8683d85:	90                   	nop

```

```c
// cUserHistoryLog::TradeItemAddFail @ 0x8683d5a

/* cUserHistoryLog::TradeItemAddFail(int, int) */

void __thiscall cUserHistoryLog::TradeItemAddFail(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"Item!,%d,%d",param_1,param_2);
  return;
}

```

---

## UpgradeItem

```asm
// === 08684ca0 cUserHistoryLog::UpgradeItem  [0x08684ca0-0x8684d09] ===
 8684ca0:	55                   	push   %ebp
 8684ca1:	89 e5                	mov    %esp,%ebp
 8684ca3:	83 ec 38             	sub    $0x38,%esp
 8684ca6:	8b 45 18             	mov    0x18(%ebp),%eax
 8684ca9:	88 45 f4             	mov    %al,-0xc(%ebp)
 8684cac:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8684cb0:	74 2c                	je     8684cde <_ZN15cUserHistoryLog11UpgradeItemEiiib+0x3e>
 8684cb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8684cb5:	8b 00                	mov    (%eax),%eax
 8684cb7:	8b 55 14             	mov    0x14(%ebp),%edx
 8684cba:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684cbe:	8b 55 10             	mov    0x10(%ebp),%edx
 8684cc1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684cc5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684cc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684ccc:	c7 44 24 04 0c 08 cf 	movl   $0x8cf080c,0x4(%esp)
 8684cd3:	08 
 8684cd4:	89 04 24             	mov    %eax,(%esp)
 8684cd7:	e8 22 7c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684cdc:	eb 2a                	jmp    8684d08 <_ZN15cUserHistoryLog11UpgradeItemEiiib+0x68>
 8684cde:	8b 45 08             	mov    0x8(%ebp),%eax
 8684ce1:	8b 00                	mov    (%eax),%eax
 8684ce3:	8b 55 14             	mov    0x14(%ebp),%edx
 8684ce6:	89 54 24 10          	mov    %edx,0x10(%esp)
 8684cea:	8b 55 10             	mov    0x10(%ebp),%edx
 8684ced:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8684cf1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8684cf4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8684cf8:	c7 44 24 04 1e 08 cf 	movl   $0x8cf081e,0x4(%esp)
 8684cff:	08 
 8684d00:	89 04 24             	mov    %eax,(%esp)
 8684d03:	e8 f6 7b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8684d08:	c9                   	leave
 8684d09:	c3                   	ret

```

```c
// cUserHistoryLog::UpgradeItem @ 0x8684ca0

/* cUserHistoryLog::UpgradeItem(int, int, int, bool) */

void __thiscall
cUserHistoryLog::UpgradeItem(cUserHistoryLog *this,int param_1,int param_2,int param_3,bool param_4)

{
  if (param_4) {
    CUser::LogHistory(*(CUser **)this,"Upgrade+,%d,%d,%d",param_1,param_2,param_3);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Upgrade-,%d,%d,%d",param_1,param_2,param_3);
  }
  return;
}

```

---

## UseAvatarOptionChange

```asm
// === 08686d0e cUserHistoryLog::UseAvatarOptionChange  [0x08686d0e-0x8686d53] ===
 8686d0e:	55                   	push   %ebp
 8686d0f:	89 e5                	mov    %esp,%ebp
 8686d11:	83 ec 28             	sub    $0x28,%esp
 8686d14:	8b 45 08             	mov    0x8(%ebp),%eax
 8686d17:	8b 00                	mov    (%eax),%eax
 8686d19:	85 c0                	test   %eax,%eax
 8686d1b:	74 33                	je     8686d50 <_ZN15cUserHistoryLog21UseAvatarOptionChangeEiiii+0x42>
 8686d1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8686d20:	8b 00                	mov    (%eax),%eax
 8686d22:	8b 55 18             	mov    0x18(%ebp),%edx
 8686d25:	89 54 24 14          	mov    %edx,0x14(%esp)
 8686d29:	8b 55 14             	mov    0x14(%ebp),%edx
 8686d2c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686d30:	8b 55 10             	mov    0x10(%ebp),%edx
 8686d33:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686d37:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686d3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686d3e:	c7 44 24 04 b4 0f cf 	movl   $0x8cf0fb4,0x4(%esp)
 8686d45:	08 
 8686d46:	89 04 24             	mov    %eax,(%esp)
 8686d49:	e8 b0 5b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686d4e:	eb 01                	jmp    8686d51 <_ZN15cUserHistoryLog21UseAvatarOptionChangeEiiii+0x43>
 8686d50:	90                   	nop
 8686d51:	c9                   	leave
 8686d52:	c3                   	ret
 8686d53:	90                   	nop

```

```c
// cUserHistoryLog::UseAvatarOptionChange @ 0x8686d0e

/* cUserHistoryLog::UseAvatarOptionChange(int, int, int, int) */

void __thiscall
cUserHistoryLog::UseAvatarOptionChange
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"UseAvatarOptionChange,%d,%d,%d,%d",param_1,param_2,param_3,
                      param_4);
  }
  return;
}

```

---

## UseDye

```asm
// === 08686cba cUserHistoryLog::UseDye  [0x08686cba-0x8686d0d] ===
 8686cba:	55                   	push   %ebp
 8686cbb:	89 e5                	mov    %esp,%ebp
 8686cbd:	83 ec 28             	sub    $0x28,%esp
 8686cc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8686cc3:	8b 00                	mov    (%eax),%eax
 8686cc5:	85 c0                	test   %eax,%eax
 8686cc7:	74 42                	je     8686d0b <_ZN15cUserHistoryLog6UseDyeEiiiRKSsi+0x51>
 8686cc9:	8b 45 18             	mov    0x18(%ebp),%eax
 8686ccc:	89 04 24             	mov    %eax,(%esp)
 8686ccf:	e8 1c f8 07 00       	call   87064f0 <_ZNKSs5c_strEv>
 8686cd4:	8b 55 08             	mov    0x8(%ebp),%edx
 8686cd7:	8b 12                	mov    (%edx),%edx
 8686cd9:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8686cdc:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8686ce0:	89 44 24 14          	mov    %eax,0x14(%esp)
 8686ce4:	8b 45 14             	mov    0x14(%ebp),%eax
 8686ce7:	89 44 24 10          	mov    %eax,0x10(%esp)
 8686ceb:	8b 45 10             	mov    0x10(%ebp),%eax
 8686cee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8686cf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8686cf5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8686cf9:	c7 44 24 04 9d 0f cf 	movl   $0x8cf0f9d,0x4(%esp)
 8686d00:	08 
 8686d01:	89 14 24             	mov    %edx,(%esp)
 8686d04:	e8 f5 5b ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686d09:	eb 01                	jmp    8686d0c <_ZN15cUserHistoryLog6UseDyeEiiiRKSsi+0x52>
 8686d0b:	90                   	nop
 8686d0c:	c9                   	leave
 8686d0d:	c3                   	ret

```

```c
// cUserHistoryLog::UseDye @ 0x8686cba

/* cUserHistoryLog::UseDye(int, int, int, std::string const&, int) */

void __thiscall
cUserHistoryLog::UseDye
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,string *param_4,int param_5)

{
  undefined4 uVar1;
  
  if (*(int *)this != 0) {
    uVar1 = std::string::c_str((string *)param_4);
    CUser::LogHistory(*(CUser **)this,"UseDye ,%d,%d,%d,%s,%d",param_1,param_2,param_3,uVar1,param_5
                     );
  }
  return;
}

```

---

## UseSelectBooster

```asm
// === 08686b52 cUserHistoryLog::UseSelectBooster  [0x08686b52-0x8686c35] ===
 8686b52:	55                   	push   %ebp
 8686b53:	89 e5                	mov    %esp,%ebp
 8686b55:	53                   	push   %ebx
 8686b56:	81 ec 34 04 00 00    	sub    $0x434,%esp
 8686b5c:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 8686b63:	00 
 8686b64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8686b6b:	00 
 8686b6c:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8686b72:	89 04 24             	mov    %eax,(%esp)
 8686b75:	e8 46 71 9f ff       	call   807dcc0 <memset@plt>
 8686b7a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8686b81:	eb 5d                	jmp    8686be0 <_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE+0x8e>
 8686b83:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8686b89:	89 04 24             	mov    %eax,(%esp)
 8686b8c:	e8 1f 78 9f ff       	call   807e3b0 <strlen@plt>
 8686b91:	83 c0 0d             	add    $0xd,%eax
 8686b94:	3d fe 03 00 00       	cmp    $0x3fe,%eax
 8686b99:	77 5c                	ja     8686bf7 <_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE+0xa5>
 8686b9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8686b9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8686ba2:	8b 45 18             	mov    0x18(%ebp),%eax
 8686ba5:	89 04 24             	mov    %eax,(%esp)
 8686ba8:	e8 75 18 ca ff       	call   8328422 <_ZNSt6vectorI10Inven_ItemSaIS0_EEixEj>
 8686bad:	8b 58 02             	mov    0x2(%eax),%ebx
 8686bb0:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8686bb6:	89 04 24             	mov    %eax,(%esp)
 8686bb9:	e8 f2 77 9f ff       	call   807e3b0 <strlen@plt>
 8686bbe:	89 c2                	mov    %eax,%edx
 8686bc0:	8d 85 f4 fb ff ff    	lea    -0x40c(%ebp),%eax
 8686bc6:	01 d0                	add    %edx,%eax
 8686bc8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8686bcc:	c7 44 24 04 55 0f cf 	movl   $0x8cf0f55,0x4(%esp)
 8686bd3:	08 
 8686bd4:	89 04 24             	mov    %eax,(%esp)
 8686bd7:	e8 64 78 9f ff       	call   807e440 <sprintf@plt>
 8686bdc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8686be0:	8b 45 18             	mov    0x18(%ebp),%eax
 8686be3:	89 04 24             	mov    %eax,(%esp)
 8686be6:	e8 73 3a af ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 8686beb:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8686bee:	0f 97 c0             	seta   %al
 8686bf1:	84 c0                	test   %al,%al
 8686bf3:	75 8e                	jne    8686b83 <_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE+0x31>
 8686bf5:	eb 01                	jmp    8686bf8 <_ZN15cUserHistoryLog16UseSelectBoosterEjiiRSt6vectorI10Inven_ItemSaIS1_EE+0xa6>
 8686bf7:	90                   	nop
 8686bf8:	8b 45 08             	mov    0x8(%ebp),%eax
 8686bfb:	8b 00                	mov    (%eax),%eax
 8686bfd:	8d 95 f4 fb ff ff    	lea    -0x40c(%ebp),%edx
 8686c03:	89 54 24 14          	mov    %edx,0x14(%esp)
 8686c07:	8b 55 14             	mov    0x14(%ebp),%edx
 8686c0a:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686c0e:	8b 55 10             	mov    0x10(%ebp),%edx
 8686c11:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686c15:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686c18:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686c1c:	c7 44 24 04 59 0f cf 	movl   $0x8cf0f59,0x4(%esp)
 8686c23:	08 
 8686c24:	89 04 24             	mov    %eax,(%esp)
 8686c27:	e8 d2 5c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686c2c:	81 c4 34 04 00 00    	add    $0x434,%esp
 8686c32:	5b                   	pop    %ebx
 8686c33:	5d                   	pop    %ebp
 8686c34:	c3                   	ret
 8686c35:	90                   	nop

```

```c
// cUserHistoryLog::UseSelectBooster @ 0x8686b52

/* cUserHistoryLog::UseSelectBooster(unsigned int, int, int, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) */

void __thiscall
cUserHistoryLog::UseSelectBooster
          (cUserHistoryLog *this,uint param_1,int param_2,int param_3,vector *param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  char local_410 [1024];
  uint local_10;
  
  memset(local_410,0,0x400);
  local_10 = 0;
  while ((uVar4 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_4),
         local_10 < uVar4 && (sVar2 = strlen(local_410), sVar2 + 0xd < 0x3ff))) {
    iVar3 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_4,local_10);
    uVar1 = *(undefined4 *)(iVar3 + 2);
    sVar2 = strlen(local_410);
    sprintf(local_410 + sVar2,"%d,",uVar1);
    local_10 = local_10 + 1;
  }
  CUser::LogHistory(*(CUser **)this,"UseSelectBooster,%u,%d,%d,%s",param_1,param_2,param_3,local_410
                   );
  return;
}

```

---

## WPAdd

```asm
// === 08682c96 cUserHistoryLog::WPAdd  [0x08682c96-0x8682cc7] ===
 8682c96:	55                   	push   %ebp
 8682c97:	89 e5                	mov    %esp,%ebp
 8682c99:	83 ec 28             	sub    $0x28,%esp
 8682c9c:	8b 55 14             	mov    0x14(%ebp),%edx
 8682c9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8682ca2:	8b 00                	mov    (%eax),%eax
 8682ca4:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682ca8:	8b 55 10             	mov    0x10(%ebp),%edx
 8682cab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682caf:	8b 55 0c             	mov    0xc(%ebp),%edx
 8682cb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682cb6:	c7 44 24 04 83 01 cf 	movl   $0x8cf0183,0x4(%esp)
 8682cbd:	08 
 8682cbe:	89 04 24             	mov    %eax,(%esp)
 8682cc1:	e8 38 9c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682cc6:	c9                   	leave
 8682cc7:	c3                   	ret

```

```c
// cUserHistoryLog::WPAdd @ 0x8682c96

/* cUserHistoryLog::WPAdd(int, int, eWPAddReason) */

void __thiscall
cUserHistoryLog::WPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"WP+,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## WPSub

```asm
// === 08682cc8 cUserHistoryLog::WPSub  [0x08682cc8-0x8682cf9] ===
 8682cc8:	55                   	push   %ebp
 8682cc9:	89 e5                	mov    %esp,%ebp
 8682ccb:	83 ec 28             	sub    $0x28,%esp
 8682cce:	8b 55 14             	mov    0x14(%ebp),%edx
 8682cd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8682cd4:	8b 00                	mov    (%eax),%eax
 8682cd6:	89 54 24 10          	mov    %edx,0x10(%esp)
 8682cda:	8b 55 10             	mov    0x10(%ebp),%edx
 8682cdd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8682ce1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8682ce4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8682ce8:	c7 44 24 04 90 01 cf 	movl   $0x8cf0190,0x4(%esp)
 8682cef:	08 
 8682cf0:	89 04 24             	mov    %eax,(%esp)
 8682cf3:	e8 06 9c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8682cf8:	c9                   	leave
 8682cf9:	c3                   	ret

```

```c
// cUserHistoryLog::WPSub @ 0x8682cc8

/* cUserHistoryLog::WPSub(int, int, eWPSubReason) */

void __thiscall
cUserHistoryLog::WPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"WP-,%d,%d,%d",param_1,param_2,param_4);
  return;
}

```

---

## apply_Item

```asm
// === 08686c7c cUserHistoryLog::apply_Item  [0x08686c7c-0x8686cb9] ===
 8686c7c:	55                   	push   %ebp
 8686c7d:	89 e5                	mov    %esp,%ebp
 8686c7f:	83 ec 28             	sub    $0x28,%esp
 8686c82:	8b 45 08             	mov    0x8(%ebp),%eax
 8686c85:	8b 00                	mov    (%eax),%eax
 8686c87:	85 c0                	test   %eax,%eax
 8686c89:	74 2c                	je     8686cb7 <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason+0x3b>
 8686c8b:	8b 55 14             	mov    0x14(%ebp),%edx
 8686c8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8686c91:	8b 00                	mov    (%eax),%eax
 8686c93:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686c97:	8b 55 10             	mov    0x10(%ebp),%edx
 8686c9a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686c9e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686ca1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686ca5:	c7 44 24 04 89 0f cf 	movl   $0x8cf0f89,0x4(%esp)
 8686cac:	08 
 8686cad:	89 04 24             	mov    %eax,(%esp)
 8686cb0:	e8 49 5c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686cb5:	eb 01                	jmp    8686cb8 <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason+0x3c>
 8686cb7:	90                   	nop
 8686cb8:	c9                   	leave
 8686cb9:	c3                   	ret

```

```c
// cUserHistoryLog::apply_Item @ 0x8686c7c

/* cUserHistoryLog::apply_Item(int, int, eApplyItemReason) */

void __thiscall
cUserHistoryLog::apply_Item
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"ApplyItem ,%d,%d,%d",param_1,param_2,param_4);
  }
  return;
}

```

---

## pvpMissionAdd

```asm
// === 086869e8 cUserHistoryLog::pvpMissionAdd  [0x086869e8-0x8686a21] ===
 86869e8:	55                   	push   %ebp
 86869e9:	89 e5                	mov    %esp,%ebp
 86869eb:	83 ec 28             	sub    $0x28,%esp
 86869ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86869f1:	8b 00                	mov    (%eax),%eax
 86869f3:	8b 55 18             	mov    0x18(%ebp),%edx
 86869f6:	89 54 24 14          	mov    %edx,0x14(%esp)
 86869fa:	8b 55 14             	mov    0x14(%ebp),%edx
 86869fd:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686a01:	8b 55 10             	mov    0x10(%ebp),%edx
 8686a04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686a08:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686a0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686a0f:	c7 44 24 04 af 0e cf 	movl   $0x8cf0eaf,0x4(%esp)
 8686a16:	08 
 8686a17:	89 04 24             	mov    %eax,(%esp)
 8686a1a:	e8 df 5e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686a1f:	c9                   	leave
 8686a20:	c3                   	ret
 8686a21:	90                   	nop

```

```c
// cUserHistoryLog::pvpMissionAdd @ 0x86869e8

/* cUserHistoryLog::pvpMissionAdd(int, int, int, int) */

void __thiscall
cUserHistoryLog::pvpMissionAdd
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"PvPMission+,%d,%d,%d,%d",param_1,param_2,param_3,param_4);
  return;
}

```

---

## pvpMissionClearReward

```asm
// === 08686a4e cUserHistoryLog::pvpMissionClearReward  [0x08686a4e-0x8686a87] ===
 8686a4e:	55                   	push   %ebp
 8686a4f:	89 e5                	mov    %esp,%ebp
 8686a51:	83 ec 28             	sub    $0x28,%esp
 8686a54:	8b 45 08             	mov    0x8(%ebp),%eax
 8686a57:	8b 00                	mov    (%eax),%eax
 8686a59:	8b 55 18             	mov    0x18(%ebp),%edx
 8686a5c:	89 54 24 14          	mov    %edx,0x14(%esp)
 8686a60:	8b 55 14             	mov    0x14(%ebp),%edx
 8686a63:	89 54 24 10          	mov    %edx,0x10(%esp)
 8686a67:	8b 55 10             	mov    0x10(%ebp),%edx
 8686a6a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686a6e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686a71:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686a75:	c7 44 24 04 d9 0e cf 	movl   $0x8cf0ed9,0x4(%esp)
 8686a7c:	08 
 8686a7d:	89 04 24             	mov    %eax,(%esp)
 8686a80:	e8 79 5e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686a85:	c9                   	leave
 8686a86:	c3                   	ret
 8686a87:	90                   	nop

```

```c
// cUserHistoryLog::pvpMissionClearReward @ 0x8686a4e

/* cUserHistoryLog::pvpMissionClearReward(int, int, int, int) */

void __thiscall
cUserHistoryLog::pvpMissionClearReward
          (cUserHistoryLog *this,int param_1,int param_2,int param_3,int param_4)

{
  CUser::LogHistory(*(CUser **)this,"PvPMissionReward+,%d,%d,%d,%d",param_1,param_2,param_3,param_4)
  ;
  return;
}

```

---

## pvpMissionDel

```asm
// === 08686a22 cUserHistoryLog::pvpMissionDel  [0x08686a22-0x8686a4d] ===
 8686a22:	55                   	push   %ebp
 8686a23:	89 e5                	mov    %esp,%ebp
 8686a25:	83 ec 18             	sub    $0x18,%esp
 8686a28:	8b 45 08             	mov    0x8(%ebp),%eax
 8686a2b:	8b 00                	mov    (%eax),%eax
 8686a2d:	8b 55 10             	mov    0x10(%ebp),%edx
 8686a30:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686a34:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686a37:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686a3b:	c7 44 24 04 c7 0e cf 	movl   $0x8cf0ec7,0x4(%esp)
 8686a42:	08 
 8686a43:	89 04 24             	mov    %eax,(%esp)
 8686a46:	e8 b3 5e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686a4b:	c9                   	leave
 8686a4c:	c3                   	ret
 8686a4d:	90                   	nop

```

```c
// cUserHistoryLog::pvpMissionDel @ 0x8686a22

/* cUserHistoryLog::pvpMissionDel(int, int) */

void __thiscall cUserHistoryLog::pvpMissionDel(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"PvPMission-,%d,%d",param_1,param_2);
  return;
}

```

---

## seal_Item

```asm
// === 08686c36 cUserHistoryLog::seal_Item  [0x08686c36-0x8686c7b] ===
 8686c36:	55                   	push   %ebp
 8686c37:	89 e5                	mov    %esp,%ebp
 8686c39:	83 ec 38             	sub    $0x38,%esp
 8686c3c:	8b 45 10             	mov    0x10(%ebp),%eax
 8686c3f:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8686c43:	8b 45 08             	mov    0x8(%ebp),%eax
 8686c46:	8b 00                	mov    (%eax),%eax
 8686c48:	85 c0                	test   %eax,%eax
 8686c4a:	74 2d                	je     8686c79 <_ZN15cUserHistoryLog9seal_ItemEis15eSealItemReason+0x43>
 8686c4c:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8686c4f:	0f bf 55 f4          	movswl -0xc(%ebp),%edx
 8686c53:	8b 45 08             	mov    0x8(%ebp),%eax
 8686c56:	8b 00                	mov    (%eax),%eax
 8686c58:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8686c5c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8686c60:	8b 55 0c             	mov    0xc(%ebp),%edx
 8686c63:	89 54 24 08          	mov    %edx,0x8(%esp)
 8686c67:	c7 44 24 04 76 0f cf 	movl   $0x8cf0f76,0x4(%esp)
 8686c6e:	08 
 8686c6f:	89 04 24             	mov    %eax,(%esp)
 8686c72:	e8 87 5c ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8686c77:	eb 01                	jmp    8686c7a <_ZN15cUserHistoryLog9seal_ItemEis15eSealItemReason+0x44>
 8686c79:	90                   	nop
 8686c7a:	c9                   	leave
 8686c7b:	c3                   	ret

```

```c
// cUserHistoryLog::seal_Item @ 0x8686c36

/* cUserHistoryLog::seal_Item(int, short, eSealItemReason) */

void __thiscall
cUserHistoryLog::seal_Item
          (cUserHistoryLog *this,undefined4 param_1,short param_2,undefined4 param_4)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"SealItem ,%d,%d,%d",param_1,(int)param_2,param_4);
  }
  return;
}

```

---

## useEmblem

```asm
// === 08685a08 cUserHistoryLog::useEmblem  [0x08685a08-0x8685a47] ===
 8685a08:	55                   	push   %ebp
 8685a09:	89 e5                	mov    %esp,%ebp
 8685a0b:	83 ec 28             	sub    $0x28,%esp
 8685a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8685a11:	8b 00                	mov    (%eax),%eax
 8685a13:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8685a16:	89 54 24 18          	mov    %edx,0x18(%esp)
 8685a1a:	8b 55 18             	mov    0x18(%ebp),%edx
 8685a1d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8685a21:	8b 55 14             	mov    0x14(%ebp),%edx
 8685a24:	89 54 24 10          	mov    %edx,0x10(%esp)
 8685a28:	8b 55 10             	mov    0x10(%ebp),%edx
 8685a2b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8685a2f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8685a32:	89 54 24 08          	mov    %edx,0x8(%esp)
 8685a36:	c7 44 24 04 de 0b cf 	movl   $0x8cf0bde,0x4(%esp)
 8685a3d:	08 
 8685a3e:	89 04 24             	mov    %eax,(%esp)
 8685a41:	e8 b8 6e ff ff       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 8685a46:	c9                   	leave
 8685a47:	c3                   	ret

```

```c
// cUserHistoryLog::useEmblem @ 0x8685a08

/* cUserHistoryLog::useEmblem(unsigned long, unsigned long, unsigned int, char const*, unsigned int)
    */

void __thiscall
cUserHistoryLog::useEmblem
          (cUserHistoryLog *this,ulong param_1,ulong param_2,uint param_3,char *param_4,uint param_5
          )

{
  CUser::LogHistory(*(CUser **)this,"UseEmblem,%d,%d,%d,%s,%d",param_1,param_2,param_3,param_4,
                    param_5);
  return;
}

```

