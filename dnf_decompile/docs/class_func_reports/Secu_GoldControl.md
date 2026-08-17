# Secu_GoldControl

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 21

---

## AddAuctionMoney

```asm
// === 0828784a Secu_GoldControl::AddAuctionMoney  [0x0828784a-0x8287959] ===
 828784a:	55                   	push   %ebp
 828784b:	89 e5                	mov    %esp,%ebp
 828784d:	56                   	push   %esi
 828784e:	53                   	push   %ebx
 828784f:	83 ec 30             	sub    $0x30,%esp
 8287852:	81 7d 0c 87 13 00 00 	cmpl   $0x1387,0xc(%ebp)
 8287859:	0f 86 f2 00 00 00    	jbe    8287951 <_ZN16Secu_GoldControl15AddAuctionMoneyEj+0x107>
 828785f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287862:	8b 48 60             	mov    0x60(%eax),%ecx
 8287865:	8b 58 64             	mov    0x64(%eax),%ebx
 8287868:	8b 45 0c             	mov    0xc(%ebp),%eax
 828786b:	ba 00 00 00 00       	mov    $0x0,%edx
 8287870:	01 c8                	add    %ecx,%eax
 8287872:	11 da                	adc    %ebx,%edx
 8287874:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287877:	89 41 60             	mov    %eax,0x60(%ecx)
 828787a:	89 51 64             	mov    %edx,0x64(%ecx)
 828787d:	8b 45 08             	mov    0x8(%ebp),%eax
 8287880:	0f b7 40 70          	movzwl 0x70(%eax),%eax
 8287884:	8d 50 01             	lea    0x1(%eax),%edx
 8287887:	8b 45 08             	mov    0x8(%ebp),%eax
 828788a:	66 89 50 70          	mov    %dx,0x70(%eax)
 828788e:	8b 45 08             	mov    0x8(%ebp),%eax
 8287891:	8b 48 24             	mov    0x24(%eax),%ecx
 8287894:	8b 58 28             	mov    0x28(%eax),%ebx
 8287897:	8b 45 0c             	mov    0xc(%ebp),%eax
 828789a:	ba 00 00 00 00       	mov    $0x0,%edx
 828789f:	01 c8                	add    %ecx,%eax
 82878a1:	11 da                	adc    %ebx,%edx
 82878a3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 82878a6:	89 41 24             	mov    %eax,0x24(%ecx)
 82878a9:	89 51 28             	mov    %edx,0x28(%ecx)
 82878ac:	8b 45 08             	mov    0x8(%ebp),%eax
 82878af:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 82878b3:	8d 50 01             	lea    0x1(%eax),%edx
 82878b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82878b9:	66 89 50 34          	mov    %dx,0x34(%eax)
 82878bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82878c0:	8b 00                	mov    (%eax),%eax
 82878c2:	89 04 24             	mov    %eax,(%esp)
 82878c5:	e8 36 8f fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82878ca:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82878d1:	00 
 82878d2:	8b 55 0c             	mov    0xc(%ebp),%edx
 82878d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 82878d9:	89 04 24             	mov    %eax,(%esp)
 82878dc:	e8 19 1b 23 00       	call   84b93fa <_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE>
 82878e1:	8b 45 08             	mov    0x8(%ebp),%eax
 82878e4:	8b 00                	mov    (%eax),%eax
 82878e6:	89 04 24             	mov    %eax,(%esp)
 82878e9:	e8 12 8f fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82878ee:	8d 55 e8             	lea    -0x18(%ebp),%edx
 82878f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82878f5:	89 04 24             	mov    %eax,(%esp)
 82878f8:	e8 77 1e 23 00       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 82878fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8287900:	8b 00                	mov    (%eax),%eax
 8287902:	89 04 24             	mov    %eax,(%esp)
 8287905:	e8 b0 93 e8 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 828790a:	0f b7 f0             	movzwl %ax,%esi
 828790d:	8b 45 08             	mov    0x8(%ebp),%eax
 8287910:	8b 00                	mov    (%eax),%eax
 8287912:	89 04 24             	mov    %eax,(%esp)
 8287915:	e8 54 2a e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 828791a:	89 c3                	mov    %eax,%ebx
 828791c:	8b 45 08             	mov    0x8(%ebp),%eax
 828791f:	8b 00                	mov    (%eax),%eax
 8287921:	89 04 24             	mov    %eax,(%esp)
 8287924:	e8 d7 8e fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8287929:	89 74 24 14          	mov    %esi,0x14(%esp)
 828792d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8287930:	89 54 24 10          	mov    %edx,0x10(%esp)
 8287934:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8287937:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828793b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 828793f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8287946:	00 
 8287947:	89 04 24             	mov    %eax,(%esp)
 828794a:	e8 4b 1b 23 00       	call   84b949a <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj>
 828794f:	eb 01                	jmp    8287952 <_ZN16Secu_GoldControl15AddAuctionMoneyEj+0x108>
 8287951:	90                   	nop
 8287952:	83 c4 30             	add    $0x30,%esp
 8287955:	5b                   	pop    %ebx
 8287956:	5e                   	pop    %esi
 8287957:	5d                   	pop    %ebp
 8287958:	c3                   	ret
 8287959:	90                   	nop

```

```c
// Secu_GoldControl::AddAuctionMoney @ 0x828784a

/* Secu_GoldControl::AddAuctionMoney(unsigned int) */

void __thiscall Secu_GoldControl::AddAuctionMoney(Secu_GoldControl *this,uint param_1)

{
  CHades *pCVar1;
  uint uVar2;
  uint uVar3;
  char local_1c [16];
  
  if (4999 < param_1) {
    uVar2 = *(uint *)(this + 0x60);
    *(uint *)(this + 0x60) = param_1 + uVar2;
    *(uint *)(this + 100) = *(int *)(this + 100) + (uint)CARRY4(param_1,uVar2);
    *(short *)(this + 0x70) = *(short *)(this + 0x70) + 1;
    uVar2 = *(uint *)(this + 0x24);
    *(uint *)(this + 0x24) = param_1 + uVar2;
    *(uint *)(this + 0x28) = *(int *)(this + 0x28) + (uint)CARRY4(param_1,uVar2);
    *(short *)(this + 0x34) = *(short *)(this + 0x34) + 1;
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GoldPlus(pCVar1,param_1,2);
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GetIP(pCVar1,local_1c);
    uVar2 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)this);
    uVar3 = CUser::get_acc_id(*(CUser **)this);
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GoldTracking(pCVar1,'\x04',uVar3,local_1c,param_1,uVar2 & 0xffff);
  }
  return;
}

```

---

## AddGold

```asm
// === 0828757c Secu_GoldControl::AddGold  [0x0828757c-0x8287649] ===
 828757c:	55                   	push   %ebp
 828757d:	89 e5                	mov    %esp,%ebp
 828757f:	56                   	push   %esi
 8287580:	53                   	push   %ebx
 8287581:	83 ec 10             	sub    $0x10,%esp
 8287584:	8b 45 08             	mov    0x8(%ebp),%eax
 8287587:	89 04 24             	mov    %eax,(%esp)
 828758a:	e8 75 05 00 00       	call   8287b04 <_ZN16Secu_GoldControl9CheckDateEv>
 828758f:	8b 45 10             	mov    0x10(%ebp),%eax
 8287592:	83 f8 1a             	cmp    $0x1a,%eax
 8287595:	0f 87 88 00 00 00    	ja     8287623 <_ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason+0xa7>
 828759b:	8b 04 85 40 29 c1 08 	mov    0x8c12940(,%eax,4),%eax
 82875a2:	ff e0                	jmp    *%eax
 82875a4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82875ab:	00 
 82875ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82875af:	89 44 24 04          	mov    %eax,0x4(%esp)
 82875b3:	8b 45 08             	mov    0x8(%ebp),%eax
 82875b6:	89 04 24             	mov    %eax,(%esp)
 82875b9:	e8 7e 08 00 00       	call   8287e3c <_ZN16Secu_GoldControl8MailGoldEjb>
 82875be:	8b 45 08             	mov    0x8(%ebp),%eax
 82875c1:	8d b0 c8 00 00 00    	lea    0xc8(%eax),%esi
 82875c7:	8b 45 08             	mov    0x8(%ebp),%eax
 82875ca:	8b 00                	mov    (%eax),%eax
 82875cc:	89 04 24             	mov    %eax,(%esp)
 82875cf:	e8 9a 2d e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82875d4:	89 c3                	mov    %eax,%ebx
 82875d6:	8b 45 08             	mov    0x8(%ebp),%eax
 82875d9:	8b 00                	mov    (%eax),%eax
 82875db:	89 04 24             	mov    %eax,(%esp)
 82875de:	e8 b3 16 e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82875e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82875ea:	00 
 82875eb:	89 74 24 08          	mov    %esi,0x8(%esp)
 82875ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82875f3:	89 04 24             	mov    %eax,(%esp)
 82875f6:	e8 57 bd 1b 00       	call   8443352 <_ZN18DB_CheckCharacName11makeRequestEijPKcb>
 82875fb:	eb 46                	jmp    8287643 <_ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason+0xc7>
 82875fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287600:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287604:	8b 45 08             	mov    0x8(%ebp),%eax
 8287607:	89 04 24             	mov    %eax,(%esp)
 828760a:	e8 ab 01 00 00       	call   82877ba <_ZN16Secu_GoldControl14AddImportMoneyEj>
 828760f:	eb 12                	jmp    8287623 <_ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason+0xa7>
 8287611:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287614:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287618:	8b 45 08             	mov    0x8(%ebp),%eax
 828761b:	89 04 24             	mov    %eax,(%esp)
 828761e:	e8 27 02 00 00       	call   828784a <_ZN16Secu_GoldControl15AddAuctionMoneyEj>
 8287623:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287626:	89 44 24 04          	mov    %eax,0x4(%esp)
 828762a:	8b 45 08             	mov    0x8(%ebp),%eax
 828762d:	89 04 24             	mov    %eax,(%esp)
 8287630:	e8 f5 00 00 00       	call   828772a <_ZN16Secu_GoldControl8AddMoneyEj>
 8287635:	8b 45 08             	mov    0x8(%ebp),%eax
 8287638:	89 04 24             	mov    %eax,(%esp)
 828763b:	e8 40 05 00 00       	call   8287b80 <_ZN16Secu_GoldControl15CheckMoneyRangeEv>
 8287640:	eb 01                	jmp    8287643 <_ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason+0xc7>
 8287642:	90                   	nop
 8287643:	83 c4 10             	add    $0x10,%esp
 8287646:	5b                   	pop    %ebx
 8287647:	5e                   	pop    %esi
 8287648:	5d                   	pop    %ebp
 8287649:	c3                   	ret

```

```c
// Secu_GoldControl::AddGold @ 0x828757c

/* Secu_GoldControl::AddGold(unsigned int, eMoneyAddReason) */

void __thiscall Secu_GoldControl::AddGold(Secu_GoldControl *this,uint param_1,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  CheckDate(this);
  switch(param_3) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 10:
  case 0xf:
  case 0x1a:
    AddImportMoney(this,param_1);
    break;
  case 1:
  case 2:
    goto LAB_08287643;
  case 0xe:
    MailGold((uint)this,SUB41(param_1,0));
    uVar1 = CUser::get_acc_id(*(CUser **)this);
    iVar2 = CUser::GetUID(*(CUser **)this);
    DB_CheckCharacName::makeRequest(iVar2,uVar1,(char *)(this + 200),false);
    return;
  case 0x12:
    AddAuctionMoney(this,param_1);
  }
  AddMoney(this,param_1);
  CheckMoneyRange(this);
LAB_08287643:
  return;
}

```

---

## AddImportMoney

```asm
// === 082877ba Secu_GoldControl::AddImportMoney  [0x082877ba-0x8287849] ===
 82877ba:	55                   	push   %ebp
 82877bb:	89 e5                	mov    %esp,%ebp
 82877bd:	53                   	push   %ebx
 82877be:	83 ec 14             	sub    $0x14,%esp
 82877c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82877c4:	8b 48 48             	mov    0x48(%eax),%ecx
 82877c7:	8b 58 4c             	mov    0x4c(%eax),%ebx
 82877ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 82877cd:	ba 00 00 00 00       	mov    $0x0,%edx
 82877d2:	01 c8                	add    %ecx,%eax
 82877d4:	11 da                	adc    %ebx,%edx
 82877d6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 82877d9:	89 41 48             	mov    %eax,0x48(%ecx)
 82877dc:	89 51 4c             	mov    %edx,0x4c(%ecx)
 82877df:	8b 45 08             	mov    0x8(%ebp),%eax
 82877e2:	0f b7 40 76          	movzwl 0x76(%eax),%eax
 82877e6:	8d 50 01             	lea    0x1(%eax),%edx
 82877e9:	8b 45 08             	mov    0x8(%ebp),%eax
 82877ec:	66 89 50 76          	mov    %dx,0x76(%eax)
 82877f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82877f3:	8b 48 0c             	mov    0xc(%eax),%ecx
 82877f6:	8b 58 10             	mov    0x10(%eax),%ebx
 82877f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82877fc:	ba 00 00 00 00       	mov    $0x0,%edx
 8287801:	01 c8                	add    %ecx,%eax
 8287803:	11 da                	adc    %ebx,%edx
 8287805:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287808:	89 41 0c             	mov    %eax,0xc(%ecx)
 828780b:	89 51 10             	mov    %edx,0x10(%ecx)
 828780e:	8b 45 08             	mov    0x8(%ebp),%eax
 8287811:	0f b7 40 3a          	movzwl 0x3a(%eax),%eax
 8287815:	8d 50 01             	lea    0x1(%eax),%edx
 8287818:	8b 45 08             	mov    0x8(%ebp),%eax
 828781b:	66 89 50 3a          	mov    %dx,0x3a(%eax)
 828781f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287822:	8b 00                	mov    (%eax),%eax
 8287824:	89 04 24             	mov    %eax,(%esp)
 8287827:	e8 d4 8f fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 828782c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8287833:	00 
 8287834:	8b 55 0c             	mov    0xc(%ebp),%edx
 8287837:	89 54 24 04          	mov    %edx,0x4(%esp)
 828783b:	89 04 24             	mov    %eax,(%esp)
 828783e:	e8 b7 1b 23 00       	call   84b93fa <_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE>
 8287843:	83 c4 14             	add    $0x14,%esp
 8287846:	5b                   	pop    %ebx
 8287847:	5d                   	pop    %ebp
 8287848:	c3                   	ret
 8287849:	90                   	nop

```

```c
// Secu_GoldControl::AddImportMoney @ 0x82877ba

/* Secu_GoldControl::AddImportMoney(unsigned int) */

void __thiscall Secu_GoldControl::AddImportMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x48);
  *(uint *)(this + 0x48) = param_1 + uVar1;
  *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x76) = *(short *)(this + 0x76) + 1;
  uVar1 = *(uint *)(this + 0xc);
  *(uint *)(this + 0xc) = param_1 + uVar1;
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x3a) = *(short *)(this + 0x3a) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldPlus(pCVar2,param_1,1);
  return;
}

```

---

## AddMoney

```asm
// === 0828772a Secu_GoldControl::AddMoney  [0x0828772a-0x82877b9] ===
 828772a:	55                   	push   %ebp
 828772b:	89 e5                	mov    %esp,%ebp
 828772d:	53                   	push   %ebx
 828772e:	83 ec 14             	sub    $0x14,%esp
 8287731:	8b 45 08             	mov    0x8(%ebp),%eax
 8287734:	8b 48 40             	mov    0x40(%eax),%ecx
 8287737:	8b 58 44             	mov    0x44(%eax),%ebx
 828773a:	8b 45 0c             	mov    0xc(%ebp),%eax
 828773d:	ba 00 00 00 00       	mov    $0x0,%edx
 8287742:	01 c8                	add    %ecx,%eax
 8287744:	11 da                	adc    %ebx,%edx
 8287746:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287749:	89 41 40             	mov    %eax,0x40(%ecx)
 828774c:	89 51 44             	mov    %edx,0x44(%ecx)
 828774f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287752:	0f b7 40 74          	movzwl 0x74(%eax),%eax
 8287756:	8d 50 01             	lea    0x1(%eax),%edx
 8287759:	8b 45 08             	mov    0x8(%ebp),%eax
 828775c:	66 89 50 74          	mov    %dx,0x74(%eax)
 8287760:	8b 45 08             	mov    0x8(%ebp),%eax
 8287763:	8b 48 04             	mov    0x4(%eax),%ecx
 8287766:	8b 58 08             	mov    0x8(%eax),%ebx
 8287769:	8b 45 0c             	mov    0xc(%ebp),%eax
 828776c:	ba 00 00 00 00       	mov    $0x0,%edx
 8287771:	01 c8                	add    %ecx,%eax
 8287773:	11 da                	adc    %ebx,%edx
 8287775:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287778:	89 41 04             	mov    %eax,0x4(%ecx)
 828777b:	89 51 08             	mov    %edx,0x8(%ecx)
 828777e:	8b 45 08             	mov    0x8(%ebp),%eax
 8287781:	0f b7 40 38          	movzwl 0x38(%eax),%eax
 8287785:	8d 50 01             	lea    0x1(%eax),%edx
 8287788:	8b 45 08             	mov    0x8(%ebp),%eax
 828778b:	66 89 50 38          	mov    %dx,0x38(%eax)
 828778f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287792:	8b 00                	mov    (%eax),%eax
 8287794:	89 04 24             	mov    %eax,(%esp)
 8287797:	e8 64 90 fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 828779c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82877a3:	00 
 82877a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 82877a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82877ab:	89 04 24             	mov    %eax,(%esp)
 82877ae:	e8 47 1c 23 00       	call   84b93fa <_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE>
 82877b3:	83 c4 14             	add    $0x14,%esp
 82877b6:	5b                   	pop    %ebx
 82877b7:	5d                   	pop    %ebp
 82877b8:	c3                   	ret
 82877b9:	90                   	nop

```

```c
// Secu_GoldControl::AddMoney @ 0x828772a

/* Secu_GoldControl::AddMoney(unsigned int) */

void __thiscall Secu_GoldControl::AddMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x40);
  *(uint *)(this + 0x40) = param_1 + uVar1;
  *(uint *)(this + 0x44) = *(int *)(this + 0x44) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x74) = *(short *)(this + 0x74) + 1;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = param_1 + uVar1;
  *(uint *)(this + 8) = *(int *)(this + 8) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x38) = *(short *)(this + 0x38) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldPlus(pCVar2,param_1,0);
  return;
}

```

---

## CheckDate

```asm
// === 08287b04 Secu_GoldControl::CheckDate  [0x08287b04-0x8287b7f] ===
 8287b04:	55                   	push   %ebp
 8287b05:	89 e5                	mov    %esp,%ebp
 8287b07:	83 ec 18             	sub    $0x18,%esp
 8287b0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b0d:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 8287b13:	a1 f8 f7 41 09       	mov    0x941f7f8,%eax
 8287b18:	39 c2                	cmp    %eax,%edx
 8287b1a:	74 62                	je     8287b7e <_ZN16Secu_GoldControl9CheckDateEv+0x7a>
 8287b1c:	8b 15 f8 f7 41 09    	mov    0x941f7f8,%edx
 8287b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b25:	89 90 c0 00 00 00    	mov    %edx,0xc0(%eax)
 8287b2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b2e:	8d 50 7c             	lea    0x7c(%eax),%edx
 8287b31:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b34:	83 c0 40             	add    $0x40,%eax
 8287b37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8287b3b:	89 04 24             	mov    %eax,(%esp)
 8287b3e:	e8 eb 04 00 00       	call   828802e <_ZN14user_gold_info6toCopyERS_>
 8287b43:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b46:	83 c0 04             	add    $0x4,%eax
 8287b49:	89 04 24             	mov    %eax,(%esp)
 8287b4c:	e8 b9 04 00 00       	call   828800a <_ZN14user_gold_info5resetEv>
 8287b51:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b54:	83 c0 40             	add    $0x40,%eax
 8287b57:	89 04 24             	mov    %eax,(%esp)
 8287b5a:	e8 ab 04 00 00       	call   828800a <_ZN14user_gold_info5resetEv>
 8287b5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b62:	8b 90 b8 00 00 00    	mov    0xb8(%eax),%edx
 8287b68:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b6b:	89 90 bc 00 00 00    	mov    %edx,0xbc(%eax)
 8287b71:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b74:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 8287b7b:	00 00 00 
 8287b7e:	c9                   	leave
 8287b7f:	c3                   	ret

```

```c
// Secu_GoldControl::CheckDate @ 0x8287b04

/* Secu_GoldControl::CheckDate() */

void __thiscall Secu_GoldControl::CheckDate(Secu_GoldControl *this)

{
  if (*(int *)(this + 0xc0) != GlobalData::g_GoldControlDateFlag) {
    *(int *)(this + 0xc0) = GlobalData::g_GoldControlDateFlag;
    user_gold_info::toCopy((user_gold_info *)(this + 0x40),(user_gold_info *)(this + 0x7c));
    user_gold_info::reset((user_gold_info *)(this + 4));
    user_gold_info::reset((user_gold_info *)(this + 0x40));
    *(undefined4 *)(this + 0xbc) = *(undefined4 *)(this + 0xb8);
    *(undefined4 *)(this + 0xb8) = 0;
  }
  return;
}

```

---

## CheckMoneyRange

```asm
// === 08287b80 Secu_GoldControl::CheckMoneyRange  [0x08287b80-0x8287bdb] ===
 8287b80:	55                   	push   %ebp
 8287b81:	89 e5                	mov    %esp,%ebp
 8287b83:	83 ec 18             	sub    $0x18,%esp
 8287b86:	8b 45 08             	mov    0x8(%ebp),%eax
 8287b89:	8b 50 44             	mov    0x44(%eax),%edx
 8287b8c:	8b 40 40             	mov    0x40(%eax),%eax
 8287b8f:	83 fa 00             	cmp    $0x0,%edx
 8287b92:	77 22                	ja     8287bb6 <_ZN16Secu_GoldControl15CheckMoneyRangeEv+0x36>
 8287b94:	83 fa 00             	cmp    $0x0,%edx
 8287b97:	72 05                	jb     8287b9e <_ZN16Secu_GoldControl15CheckMoneyRangeEv+0x1e>
 8287b99:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287b9c:	77 18                	ja     8287bb6 <_ZN16Secu_GoldControl15CheckMoneyRangeEv+0x36>
 8287b9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ba1:	8b 50 54             	mov    0x54(%eax),%edx
 8287ba4:	8b 40 50             	mov    0x50(%eax),%eax
 8287ba7:	83 fa 00             	cmp    $0x0,%edx
 8287baa:	72 2d                	jb     8287bd9 <_ZN16Secu_GoldControl15CheckMoneyRangeEv+0x59>
 8287bac:	83 fa 00             	cmp    $0x0,%edx
 8287baf:	77 05                	ja     8287bb6 <_ZN16Secu_GoldControl15CheckMoneyRangeEv+0x36>
 8287bb1:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287bb4:	76 23                	jbe    8287bd9 <_ZN16Secu_GoldControl15CheckMoneyRangeEv+0x59>
 8287bb6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8287bbd:	00 
 8287bbe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8287bc5:	00 
 8287bc6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8287bcd:	00 
 8287bce:	8b 45 08             	mov    0x8(%ebp),%eax
 8287bd1:	89 04 24             	mov    %eax,(%esp)
 8287bd4:	e8 f1 f6 ff ff       	call   82872ca <_ZN16Secu_GoldControl8SavetoDBEbbb>
 8287bd9:	c9                   	leave
 8287bda:	c3                   	ret
 8287bdb:	90                   	nop

```

```c
// Secu_GoldControl::CheckMoneyRange @ 0x8287b80

/* Secu_GoldControl::CheckMoneyRange() */

void __thiscall Secu_GoldControl::CheckMoneyRange(Secu_GoldControl *this)

{
  if ((((*(int *)(this + 0x44) != 0) || (*(int *)(this + 0x40) == -1)) ||
      (*(int *)(this + 0x54) != 0)) || (*(int *)(this + 0x50) == -1)) {
    SavetoDB(this,true,false,true);
  }
  return;
}

```

---

## GetGoldInfo

```asm
// === 082872be Secu_GoldControl::GetGoldInfo  [0x082872be-0x82872c9] ===
 82872be:	55                   	push   %ebp
 82872bf:	89 e5                	mov    %esp,%ebp
 82872c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82872c4:	83 c0 04             	add    $0x4,%eax
 82872c7:	5d                   	pop    %ebp
 82872c8:	c3                   	ret
 82872c9:	90                   	nop

```

```c
// Secu_GoldControl::GetGoldInfo @ 0x82872be

/* Secu_GoldControl::GetGoldInfo() */

Secu_GoldControl * __thiscall Secu_GoldControl::GetGoldInfo(Secu_GoldControl *this)

{
  return this + 4;
}

```

---

## Init

```asm
// === 08287230 Secu_GoldControl::Init  [0x08287230-0x828729f] ===
 8287230:	55                   	push   %ebp
 8287231:	89 e5                	mov    %esp,%ebp
 8287233:	83 ec 18             	sub    $0x18,%esp
 8287236:	8b 45 08             	mov    0x8(%ebp),%eax
 8287239:	8b 55 0c             	mov    0xc(%ebp),%edx
 828723c:	89 10                	mov    %edx,(%eax)
 828723e:	8b 15 f8 f7 41 09    	mov    0x941f7f8,%edx
 8287244:	8b 45 08             	mov    0x8(%ebp),%eax
 8287247:	89 90 c0 00 00 00    	mov    %edx,0xc0(%eax)
 828724d:	8b 45 08             	mov    0x8(%ebp),%eax
 8287250:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 8287257:	00 00 00 
 828725a:	8b 45 08             	mov    0x8(%ebp),%eax
 828725d:	c7 80 bc 00 00 00 00 	movl   $0x0,0xbc(%eax)
 8287264:	00 00 00 
 8287267:	8b 45 08             	mov    0x8(%ebp),%eax
 828726a:	c7 80 c4 00 00 00 00 	movl   $0x0,0xc4(%eax)
 8287271:	00 00 00 
 8287274:	8b 45 08             	mov    0x8(%ebp),%eax
 8287277:	c6 80 e6 00 00 00 00 	movb   $0x0,0xe6(%eax)
 828727e:	8b 45 08             	mov    0x8(%ebp),%eax
 8287281:	05 c8 00 00 00       	add    $0xc8,%eax
 8287286:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 828728d:	00 
 828728e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8287295:	00 
 8287296:	89 04 24             	mov    %eax,(%esp)
 8287299:	e8 22 6a df ff       	call   807dcc0 <memset@plt>
 828729e:	c9                   	leave
 828729f:	c3                   	ret

```

```c
// Secu_GoldControl::Init @ 0x8287230

/* Secu_GoldControl::Init(CUser*) */

void __thiscall Secu_GoldControl::Init(Secu_GoldControl *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  *(undefined4 *)(this + 0xc0) = GlobalData::g_GoldControlDateFlag;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  this[0xe6] = (Secu_GoldControl)0x0;
  memset(this + 200,0,0x1e);
  return;
}

```

---

## MailComplete

```asm
// === 08287e68 Secu_GoldControl::MailComplete  [0x08287e68-0x8287edf] ===
 8287e68:	55                   	push   %ebp
 8287e69:	89 e5                	mov    %esp,%ebp
 8287e6b:	83 ec 28             	sub    $0x28,%esp
 8287e6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287e71:	88 45 f4             	mov    %al,-0xc(%ebp)
 8287e74:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8287e78:	74 3f                	je     8287eb9 <_ZN16Secu_GoldControl12MailCompleteEb+0x51>
 8287e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e7d:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8287e83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287e87:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e8a:	89 04 24             	mov    %eax,(%esp)
 8287e8d:	e8 e2 fb ff ff       	call   8287a74 <_ZN16Secu_GoldControl14SubImportMoneyEj>
 8287e92:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e95:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8287e9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287e9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ea2:	89 04 24             	mov    %eax,(%esp)
 8287ea5:	e8 3a fb ff ff       	call   82879e4 <_ZN16Secu_GoldControl8SubMoneyEj>
 8287eaa:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ead:	c7 80 c4 00 00 00 00 	movl   $0x0,0xc4(%eax)
 8287eb4:	00 00 00 
 8287eb7:	eb 25                	jmp    8287ede <_ZN16Secu_GoldControl12MailCompleteEb+0x76>
 8287eb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ebc:	8b 80 c4 00 00 00    	mov    0xc4(%eax),%eax
 8287ec2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287ec6:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ec9:	89 04 24             	mov    %eax,(%esp)
 8287ecc:	e8 59 f8 ff ff       	call   828772a <_ZN16Secu_GoldControl8AddMoneyEj>
 8287ed1:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ed4:	c7 80 c4 00 00 00 00 	movl   $0x0,0xc4(%eax)
 8287edb:	00 00 00 
 8287ede:	c9                   	leave
 8287edf:	c3                   	ret

```

```c
// Secu_GoldControl::MailComplete @ 0x8287e68

/* Secu_GoldControl::MailComplete(bool) */

void __thiscall Secu_GoldControl::MailComplete(Secu_GoldControl *this,bool param_1)

{
  if (param_1) {
    SubImportMoney(this,*(uint *)(this + 0xc4));
    SubMoney(this,*(uint *)(this + 0xc4));
    *(undefined4 *)(this + 0xc4) = 0;
  }
  else {
    AddMoney(this,*(uint *)(this + 0xc4));
    *(undefined4 *)(this + 0xc4) = 0;
  }
  return;
}

```

---

## MailGold

```asm
// === 08287e3c Secu_GoldControl::MailGold  [0x08287e3c-0x8287e55] ===
 8287e3c:	55                   	push   %ebp
 8287e3d:	89 e5                	mov    %esp,%ebp
 8287e3f:	83 ec 04             	sub    $0x4,%esp
 8287e42:	8b 45 10             	mov    0x10(%ebp),%eax
 8287e45:	88 45 fc             	mov    %al,-0x4(%ebp)
 8287e48:	8b 55 0c             	mov    0xc(%ebp),%edx
 8287e4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e4e:	89 90 c4 00 00 00    	mov    %edx,0xc4(%eax)
 8287e54:	c9                   	leave
 8287e55:	c3                   	ret

```

```c
// Secu_GoldControl::MailGold @ 0x8287e3c

/* Secu_GoldControl::MailGold(unsigned int, bool) */

void Secu_GoldControl::MailGold(uint param_1,bool param_2)

{
  undefined3 in_stack_00000009;
  
  *(undefined4 *)(param_1 + 0xc4) = _param_2;
  return;
}

```

---

## MailSameMid

```asm
// === 08287e56 Secu_GoldControl::MailSameMid  [0x08287e56-0x8287e67] ===
 8287e56:	55                   	push   %ebp
 8287e57:	89 e5                	mov    %esp,%ebp
 8287e59:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e5c:	c7 80 c4 00 00 00 00 	movl   $0x0,0xc4(%eax)
 8287e63:	00 00 00 
 8287e66:	5d                   	pop    %ebp
 8287e67:	c3                   	ret

```

```c
// Secu_GoldControl::MailSameMid @ 0x8287e56

/* Secu_GoldControl::MailSameMid() */

void __thiscall Secu_GoldControl::MailSameMid(Secu_GoldControl *this)

{
  *(undefined4 *)(this + 0xc4) = 0;
  return;
}

```

---

## SavetoDB

```asm
// === 082872ca Secu_GoldControl::SavetoDB  [0x082872ca-0x8287551] ===
 82872ca:	55                   	push   %ebp
 82872cb:	89 e5                	mov    %esp,%ebp
 82872cd:	57                   	push   %edi
 82872ce:	53                   	push   %ebx
 82872cf:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 82872d5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 82872d8:	8b 55 10             	mov    0x10(%ebp),%edx
 82872db:	8b 45 14             	mov    0x14(%ebp),%eax
 82872de:	88 8d 54 ff ff ff    	mov    %cl,-0xac(%ebp)
 82872e4:	88 95 50 ff ff ff    	mov    %dl,-0xb0(%ebp)
 82872ea:	88 85 4c ff ff ff    	mov    %al,-0xb4(%ebp)
 82872f0:	80 bd 54 ff ff ff 00 	cmpb   $0x0,-0xac(%ebp)
 82872f7:	0f 84 35 01 00 00    	je     8287432 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x168>
 82872fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8287300:	0f b7 40 74          	movzwl 0x74(%eax),%eax
 8287304:	66 85 c0             	test   %ax,%ax
 8287307:	75 1d                	jne    8287326 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x5c>
 8287309:	8b 45 08             	mov    0x8(%ebp),%eax
 828730c:	0f b7 40 78          	movzwl 0x78(%eax),%eax
 8287310:	66 85 c0             	test   %ax,%ax
 8287313:	75 11                	jne    8287326 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x5c>
 8287315:	8b 45 08             	mov    0x8(%ebp),%eax
 8287318:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 828731e:	85 c0                	test   %eax,%eax
 8287320:	0f 84 0c 01 00 00    	je     8287432 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x168>
 8287326:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 828732d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8287334:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 828733b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8287342:	8b 45 08             	mov    0x8(%ebp),%eax
 8287345:	8b 00                	mov    (%eax),%eax
 8287347:	89 04 24             	mov    %eax,(%esp)
 828734a:	e8 b1 94 fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 828734f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8287352:	89 54 24 04          	mov    %edx,0x4(%esp)
 8287356:	89 04 24             	mov    %eax,(%esp)
 8287359:	e8 16 24 23 00       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 828735e:	8d 95 5b ff ff ff    	lea    -0xa5(%ebp),%edx
 8287364:	bb 41 00 00 00       	mov    $0x41,%ebx
 8287369:	b8 00 00 00 00       	mov    $0x0,%eax
 828736e:	89 d1                	mov    %edx,%ecx
 8287370:	83 e1 01             	and    $0x1,%ecx
 8287373:	85 c9                	test   %ecx,%ecx
 8287375:	74 08                	je     828737f <_ZN16Secu_GoldControl8SavetoDBEbbb+0xb5>
 8287377:	88 02                	mov    %al,(%edx)
 8287379:	83 c2 01             	add    $0x1,%edx
 828737c:	83 eb 01             	sub    $0x1,%ebx
 828737f:	89 d1                	mov    %edx,%ecx
 8287381:	83 e1 02             	and    $0x2,%ecx
 8287384:	85 c9                	test   %ecx,%ecx
 8287386:	74 09                	je     8287391 <_ZN16Secu_GoldControl8SavetoDBEbbb+0xc7>
 8287388:	66 89 02             	mov    %ax,(%edx)
 828738b:	83 c2 02             	add    $0x2,%edx
 828738e:	83 eb 02             	sub    $0x2,%ebx
 8287391:	89 d9                	mov    %ebx,%ecx
 8287393:	c1 e9 02             	shr    $0x2,%ecx
 8287396:	89 d7                	mov    %edx,%edi
 8287398:	f3 ab                	rep stos %eax,%es:(%edi)
 828739a:	89 fa                	mov    %edi,%edx
 828739c:	89 d9                	mov    %ebx,%ecx
 828739e:	83 e1 02             	and    $0x2,%ecx
 82873a1:	85 c9                	test   %ecx,%ecx
 82873a3:	74 06                	je     82873ab <_ZN16Secu_GoldControl8SavetoDBEbbb+0xe1>
 82873a5:	66 89 02             	mov    %ax,(%edx)
 82873a8:	83 c2 02             	add    $0x2,%edx
 82873ab:	89 d9                	mov    %ebx,%ecx
 82873ad:	83 e1 01             	and    $0x1,%ecx
 82873b0:	85 c9                	test   %ecx,%ecx
 82873b2:	74 05                	je     82873b9 <_ZN16Secu_GoldControl8SavetoDBEbbb+0xef>
 82873b4:	88 02                	mov    %al,(%edx)
 82873b6:	83 c2 01             	add    $0x1,%edx
 82873b9:	8b 45 08             	mov    0x8(%ebp),%eax
 82873bc:	8b 00                	mov    (%eax),%eax
 82873be:	05 e0 00 00 00       	add    $0xe0,%eax
 82873c3:	89 04 24             	mov    %eax,(%esp)
 82873c6:	e8 85 0c 00 00       	call   8288050 <_ZNK8CNetworkILi4096ELi450000EE12get_mac_addrEv>
 82873cb:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 82873d2:	00 
 82873d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82873d7:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 82873dd:	89 04 24             	mov    %eax,(%esp)
 82873e0:	e8 eb 64 df ff       	call   807d8d0 <strncpy@plt>
 82873e5:	80 bd 4c ff ff ff 00 	cmpb   $0x0,-0xb4(%ebp)
 82873ec:	74 29                	je     8287417 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x14d>
 82873ee:	8d 45 9c             	lea    -0x64(%ebp),%eax
 82873f1:	89 04 24             	mov    %eax,(%esp)
 82873f4:	e8 71 0b 00 00       	call   8287f6a <_ZN14user_gold_infoC1Ev>
 82873f9:	8b 45 08             	mov    0x8(%ebp),%eax
 82873fc:	8d 50 40             	lea    0x40(%eax),%edx
 82873ff:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8287402:	89 44 24 08          	mov    %eax,0x8(%esp)
 8287406:	89 54 24 04          	mov    %edx,0x4(%esp)
 828740a:	8b 45 08             	mov    0x8(%ebp),%eax
 828740d:	89 04 24             	mov    %eax,(%esp)
 8287410:	e8 c7 07 00 00       	call   8287bdc <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_>
 8287415:	eb 0e                	jmp    8287425 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x15b>
 8287417:	8b 45 08             	mov    0x8(%ebp),%eax
 828741a:	83 c0 40             	add    $0x40,%eax
 828741d:	89 04 24             	mov    %eax,(%esp)
 8287420:	e8 e5 0b 00 00       	call   828800a <_ZN14user_gold_info5resetEv>
 8287425:	8b 45 08             	mov    0x8(%ebp),%eax
 8287428:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 828742f:	00 00 00 
 8287432:	80 bd 50 ff ff ff 00 	cmpb   $0x0,-0xb0(%ebp)
 8287439:	0f 84 09 01 00 00    	je     8287548 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x27e>
 828743f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287442:	0f b7 80 b0 00 00 00 	movzwl 0xb0(%eax),%eax
 8287449:	66 85 c0             	test   %ax,%ax
 828744c:	75 20                	jne    828746e <_ZN16Secu_GoldControl8SavetoDBEbbb+0x1a4>
 828744e:	8b 45 08             	mov    0x8(%ebp),%eax
 8287451:	0f b7 80 b4 00 00 00 	movzwl 0xb4(%eax),%eax
 8287458:	66 85 c0             	test   %ax,%ax
 828745b:	75 11                	jne    828746e <_ZN16Secu_GoldControl8SavetoDBEbbb+0x1a4>
 828745d:	8b 45 08             	mov    0x8(%ebp),%eax
 8287460:	8b 80 bc 00 00 00    	mov    0xbc(%eax),%eax
 8287466:	85 c0                	test   %eax,%eax
 8287468:	0f 84 da 00 00 00    	je     8287548 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x27e>
 828746e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8287475:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 828747c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8287483:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 828748a:	8b 45 08             	mov    0x8(%ebp),%eax
 828748d:	8b 00                	mov    (%eax),%eax
 828748f:	89 04 24             	mov    %eax,(%esp)
 8287492:	e8 69 93 fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8287497:	8d 55 d8             	lea    -0x28(%ebp),%edx
 828749a:	89 54 24 04          	mov    %edx,0x4(%esp)
 828749e:	89 04 24             	mov    %eax,(%esp)
 82874a1:	e8 ce 22 23 00       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 82874a6:	8d 95 5b ff ff ff    	lea    -0xa5(%ebp),%edx
 82874ac:	bb 41 00 00 00       	mov    $0x41,%ebx
 82874b1:	b8 00 00 00 00       	mov    $0x0,%eax
 82874b6:	89 d1                	mov    %edx,%ecx
 82874b8:	83 e1 01             	and    $0x1,%ecx
 82874bb:	85 c9                	test   %ecx,%ecx
 82874bd:	74 08                	je     82874c7 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x1fd>
 82874bf:	88 02                	mov    %al,(%edx)
 82874c1:	83 c2 01             	add    $0x1,%edx
 82874c4:	83 eb 01             	sub    $0x1,%ebx
 82874c7:	89 d1                	mov    %edx,%ecx
 82874c9:	83 e1 02             	and    $0x2,%ecx
 82874cc:	85 c9                	test   %ecx,%ecx
 82874ce:	74 09                	je     82874d9 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x20f>
 82874d0:	66 89 02             	mov    %ax,(%edx)
 82874d3:	83 c2 02             	add    $0x2,%edx
 82874d6:	83 eb 02             	sub    $0x2,%ebx
 82874d9:	89 d9                	mov    %ebx,%ecx
 82874db:	c1 e9 02             	shr    $0x2,%ecx
 82874de:	89 d7                	mov    %edx,%edi
 82874e0:	f3 ab                	rep stos %eax,%es:(%edi)
 82874e2:	89 fa                	mov    %edi,%edx
 82874e4:	89 d9                	mov    %ebx,%ecx
 82874e6:	83 e1 02             	and    $0x2,%ecx
 82874e9:	85 c9                	test   %ecx,%ecx
 82874eb:	74 06                	je     82874f3 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x229>
 82874ed:	66 89 02             	mov    %ax,(%edx)
 82874f0:	83 c2 02             	add    $0x2,%edx
 82874f3:	89 d9                	mov    %ebx,%ecx
 82874f5:	83 e1 01             	and    $0x1,%ecx
 82874f8:	85 c9                	test   %ecx,%ecx
 82874fa:	74 05                	je     8287501 <_ZN16Secu_GoldControl8SavetoDBEbbb+0x237>
 82874fc:	88 02                	mov    %al,(%edx)
 82874fe:	83 c2 01             	add    $0x1,%edx
 8287501:	8b 45 08             	mov    0x8(%ebp),%eax
 8287504:	8b 00                	mov    (%eax),%eax
 8287506:	05 e0 00 00 00       	add    $0xe0,%eax
 828750b:	89 04 24             	mov    %eax,(%esp)
 828750e:	e8 3d 0b 00 00       	call   8288050 <_ZNK8CNetworkILi4096ELi450000EE12get_mac_addrEv>
 8287513:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 828751a:	00 
 828751b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828751f:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 8287525:	89 04 24             	mov    %eax,(%esp)
 8287528:	e8 a3 63 df ff       	call   807d8d0 <strncpy@plt>
 828752d:	8b 45 08             	mov    0x8(%ebp),%eax
 8287530:	83 c0 7c             	add    $0x7c,%eax
 8287533:	89 04 24             	mov    %eax,(%esp)
 8287536:	e8 cf 0a 00 00       	call   828800a <_ZN14user_gold_info5resetEv>
 828753b:	8b 45 08             	mov    0x8(%ebp),%eax
 828753e:	c7 80 bc 00 00 00 00 	movl   $0x0,0xbc(%eax)
 8287545:	00 00 00 
 8287548:	81 c4 c0 00 00 00    	add    $0xc0,%esp
 828754e:	5b                   	pop    %ebx
 828754f:	5f                   	pop    %edi
 8287550:	5d                   	pop    %ebp
 8287551:	c3                   	ret

```

```c
// Secu_GoldControl::SavetoDB @ 0x82872ca

/* Secu_GoldControl::SavetoDB(bool, bool, bool) */

void __thiscall
Secu_GoldControl::SavetoDB(Secu_GoldControl *this,bool param_1,bool param_2,bool param_3)

{
  CHades *pCVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char local_a9;
  char local_a8 [64];
  user_gold_info local_68 [60];
  char local_2c [32];
  
  bVar6 = 0;
  if ((param_1) &&
     (((*(short *)(this + 0x74) != 0 || (*(short *)(this + 0x78) != 0)) ||
      (*(int *)(this + 0xb8) != 0)))) {
    local_2c[0x10] = '\0';
    local_2c[0x11] = '\0';
    local_2c[0x12] = '\0';
    local_2c[0x13] = '\0';
    local_2c[0x14] = '\0';
    local_2c[0x15] = '\0';
    local_2c[0x16] = '\0';
    local_2c[0x17] = '\0';
    local_2c[0x18] = '\0';
    local_2c[0x19] = '\0';
    local_2c[0x1a] = '\0';
    local_2c[0x1b] = '\0';
    local_2c[0x1c] = '\0';
    local_2c[0x1d] = '\0';
    local_2c[0x1e] = '\0';
    local_2c[0x1f] = '\0';
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GetIP(pCVar1,local_2c + 0x10);
    pcVar3 = &local_a9;
    uVar4 = 0x41;
    bVar5 = ((uint)pcVar3 & 1) != 0;
    if (bVar5) {
      local_a9 = '\0';
      pcVar3 = local_a8;
      uVar4 = 0x40;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
    }
    if ((uVar4 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar5) {
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)CNetwork<4096,450000>::get_mac_addr
                               ((CNetwork<4096,450000> *)(*(int *)this + 0xe0));
    strncpy(&local_a9,pcVar3,0x41);
    if (param_3) {
      user_gold_info::user_gold_info(local_68);
      resetRangeMoney(this,(user_gold_info *)(this + 0x40),local_68);
    }
    else {
      user_gold_info::reset((user_gold_info *)(this + 0x40));
    }
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if ((param_2) &&
     (((*(short *)(this + 0xb0) != 0 || (*(short *)(this + 0xb4) != 0)) ||
      (*(int *)(this + 0xbc) != 0)))) {
    local_2c[0] = '\0';
    local_2c[1] = '\0';
    local_2c[2] = '\0';
    local_2c[3] = '\0';
    local_2c[4] = '\0';
    local_2c[5] = '\0';
    local_2c[6] = '\0';
    local_2c[7] = '\0';
    local_2c[8] = '\0';
    local_2c[9] = '\0';
    local_2c[10] = '\0';
    local_2c[0xb] = '\0';
    local_2c[0xc] = '\0';
    local_2c[0xd] = '\0';
    local_2c[0xe] = '\0';
    local_2c[0xf] = '\0';
    pCVar1 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GetIP(pCVar1,local_2c);
    pcVar3 = &local_a9;
    uVar4 = 0x41;
    bVar5 = ((uint)pcVar3 & 1) != 0;
    if (bVar5) {
      local_a9 = '\0';
      pcVar3 = local_a8;
      uVar4 = 0x40;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar6 * -2 + 1) * 4;
    }
    if ((uVar4 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar5) {
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)CNetwork<4096,450000>::get_mac_addr
                               ((CNetwork<4096,450000> *)(*(int *)this + 0xe0));
    strncpy(&local_a9,pcVar3,0x41);
    user_gold_info::reset((user_gold_info *)(this + 0x7c));
    *(undefined4 *)(this + 0xbc) = 0;
  }
  return;
}

```

---

## SetInfo

```asm
// === 082872a0 Secu_GoldControl::SetInfo  [0x082872a0-0x82872bd] ===
 82872a0:	55                   	push   %ebp
 82872a1:	89 e5                	mov    %esp,%ebp
 82872a3:	83 ec 18             	sub    $0x18,%esp
 82872a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82872a9:	83 c0 04             	add    $0x4,%eax
 82872ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 82872b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82872b3:	89 04 24             	mov    %eax,(%esp)
 82872b6:	e8 73 0d 00 00       	call   828802e <_ZN14user_gold_info6toCopyERS_>
 82872bb:	c9                   	leave
 82872bc:	c3                   	ret
 82872bd:	90                   	nop

```

```c
// Secu_GoldControl::SetInfo @ 0x82872a0

/* Secu_GoldControl::SetInfo(user_gold_info&) */

void __thiscall Secu_GoldControl::SetInfo(Secu_GoldControl *this,user_gold_info *param_1)

{
  user_gold_info::toCopy(param_1,(user_gold_info *)(this + 4));
  return;
}

```

---

## SetMailCharName

```asm
// === 08287ee0 Secu_GoldControl::SetMailCharName  [0x08287ee0-0x8287f0d] ===
 8287ee0:	55                   	push   %ebp
 8287ee1:	89 e5                	mov    %esp,%ebp
 8287ee3:	83 ec 18             	sub    $0x18,%esp
 8287ee6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8287eea:	74 20                	je     8287f0c <_ZN16Secu_GoldControl15SetMailCharNameEPKc+0x2c>
 8287eec:	8b 45 08             	mov    0x8(%ebp),%eax
 8287eef:	8d 90 c8 00 00 00    	lea    0xc8(%eax),%edx
 8287ef5:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8287efc:	00 
 8287efd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287f00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287f04:	89 14 24             	mov    %edx,(%esp)
 8287f07:	e8 c4 59 df ff       	call   807d8d0 <strncpy@plt>
 8287f0c:	c9                   	leave
 8287f0d:	c3                   	ret

```

```c
// Secu_GoldControl::SetMailCharName @ 0x8287ee0

/* Secu_GoldControl::SetMailCharName(char const*) */

void __thiscall Secu_GoldControl::SetMailCharName(Secu_GoldControl *this,char *param_1)

{
  if (param_1 != (char *)0x0) {
    strncpy((char *)(this + 200),param_1,0x1e);
  }
  return;
}

```

---

## SubAuctionMoney

```asm
// === 0828795a Secu_GoldControl::SubAuctionMoney  [0x0828795a-0x82879e3] ===
 828795a:	55                   	push   %ebp
 828795b:	89 e5                	mov    %esp,%ebp
 828795d:	53                   	push   %ebx
 828795e:	83 ec 14             	sub    $0x14,%esp
 8287961:	81 7d 0c 87 13 00 00 	cmpl   $0x1387,0xc(%ebp)
 8287968:	76 73                	jbe    82879dd <_ZN16Secu_GoldControl15SubAuctionMoneyEj+0x83>
 828796a:	8b 45 08             	mov    0x8(%ebp),%eax
 828796d:	8b 48 68             	mov    0x68(%eax),%ecx
 8287970:	8b 58 6c             	mov    0x6c(%eax),%ebx
 8287973:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287976:	ba 00 00 00 00       	mov    $0x0,%edx
 828797b:	01 c8                	add    %ecx,%eax
 828797d:	11 da                	adc    %ebx,%edx
 828797f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287982:	89 41 68             	mov    %eax,0x68(%ecx)
 8287985:	89 51 6c             	mov    %edx,0x6c(%ecx)
 8287988:	8b 45 08             	mov    0x8(%ebp),%eax
 828798b:	8b 48 2c             	mov    0x2c(%eax),%ecx
 828798e:	8b 58 30             	mov    0x30(%eax),%ebx
 8287991:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287994:	ba 00 00 00 00       	mov    $0x0,%edx
 8287999:	01 c8                	add    %ecx,%eax
 828799b:	11 da                	adc    %ebx,%edx
 828799d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 82879a0:	89 41 2c             	mov    %eax,0x2c(%ecx)
 82879a3:	89 51 30             	mov    %edx,0x30(%ecx)
 82879a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82879a9:	0f b7 40 36          	movzwl 0x36(%eax),%eax
 82879ad:	8d 50 01             	lea    0x1(%eax),%edx
 82879b0:	8b 45 08             	mov    0x8(%ebp),%eax
 82879b3:	66 89 50 36          	mov    %dx,0x36(%eax)
 82879b7:	8b 45 08             	mov    0x8(%ebp),%eax
 82879ba:	8b 00                	mov    (%eax),%eax
 82879bc:	89 04 24             	mov    %eax,(%esp)
 82879bf:	e8 3c 8e fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82879c4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82879cb:	00 
 82879cc:	8b 55 0c             	mov    0xc(%ebp),%edx
 82879cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 82879d3:	89 04 24             	mov    %eax,(%esp)
 82879d6:	e8 6f 1a 23 00       	call   84b944a <_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE>
 82879db:	eb 01                	jmp    82879de <_ZN16Secu_GoldControl15SubAuctionMoneyEj+0x84>
 82879dd:	90                   	nop
 82879de:	83 c4 14             	add    $0x14,%esp
 82879e1:	5b                   	pop    %ebx
 82879e2:	5d                   	pop    %ebp
 82879e3:	c3                   	ret

```

```c
// Secu_GoldControl::SubAuctionMoney @ 0x828795a

/* Secu_GoldControl::SubAuctionMoney(unsigned int) */

void __thiscall Secu_GoldControl::SubAuctionMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  if (4999 < param_1) {
    uVar1 = *(uint *)(this + 0x68);
    *(uint *)(this + 0x68) = param_1 + uVar1;
    *(uint *)(this + 0x6c) = *(int *)(this + 0x6c) + (uint)CARRY4(param_1,uVar1);
    uVar1 = *(uint *)(this + 0x2c);
    *(uint *)(this + 0x2c) = param_1 + uVar1;
    *(uint *)(this + 0x30) = *(int *)(this + 0x30) + (uint)CARRY4(param_1,uVar1);
    *(short *)(this + 0x36) = *(short *)(this + 0x36) + 1;
    pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GoldMinus(pCVar2,param_1,2);
  }
  return;
}

```

---

## SubGold

```asm
// === 0828764a Secu_GoldControl::SubGold  [0x0828764a-0x8287729] ===
 828764a:	55                   	push   %ebp
 828764b:	89 e5                	mov    %esp,%ebp
 828764d:	56                   	push   %esi
 828764e:	53                   	push   %ebx
 828764f:	83 ec 10             	sub    $0x10,%esp
 8287652:	8b 45 08             	mov    0x8(%ebp),%eax
 8287655:	89 04 24             	mov    %eax,(%esp)
 8287658:	e8 a7 04 00 00       	call   8287b04 <_ZN16Secu_GoldControl9CheckDateEv>
 828765d:	8b 45 10             	mov    0x10(%ebp),%eax
 8287660:	83 f8 0e             	cmp    $0xe,%eax
 8287663:	74 78                	je     82876dd <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0x93>
 8287665:	83 f8 0e             	cmp    $0xe,%eax
 8287668:	7f 0e                	jg     8287678 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0x2e>
 828766a:	83 f8 02             	cmp    $0x2,%eax
 828766d:	0f 84 af 00 00 00    	je     8287722 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xd8>
 8287673:	e9 8b 00 00 00       	jmp    8287703 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xb9>
 8287678:	83 f8 11             	cmp    $0x11,%eax
 828767b:	74 07                	je     8287684 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0x3a>
 828767d:	83 f8 1a             	cmp    $0x1a,%eax
 8287680:	74 6f                	je     82876f1 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xa7>
 8287682:	eb 7f                	jmp    8287703 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xb9>
 8287684:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828768b:	00 
 828768c:	8b 45 0c             	mov    0xc(%ebp),%eax
 828768f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287693:	8b 45 08             	mov    0x8(%ebp),%eax
 8287696:	89 04 24             	mov    %eax,(%esp)
 8287699:	e8 9e 07 00 00       	call   8287e3c <_ZN16Secu_GoldControl8MailGoldEjb>
 828769e:	8b 45 08             	mov    0x8(%ebp),%eax
 82876a1:	8d b0 c8 00 00 00    	lea    0xc8(%eax),%esi
 82876a7:	8b 45 08             	mov    0x8(%ebp),%eax
 82876aa:	8b 00                	mov    (%eax),%eax
 82876ac:	89 04 24             	mov    %eax,(%esp)
 82876af:	e8 ba 2c e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82876b4:	89 c3                	mov    %eax,%ebx
 82876b6:	8b 45 08             	mov    0x8(%ebp),%eax
 82876b9:	8b 00                	mov    (%eax),%eax
 82876bb:	89 04 24             	mov    %eax,(%esp)
 82876be:	e8 d3 15 e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82876c3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82876ca:	00 
 82876cb:	89 74 24 08          	mov    %esi,0x8(%esp)
 82876cf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82876d3:	89 04 24             	mov    %eax,(%esp)
 82876d6:	e8 77 bc 1b 00       	call   8443352 <_ZN18DB_CheckCharacName11makeRequestEijPKcb>
 82876db:	eb 46                	jmp    8287723 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xd9>
 82876dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82876e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 82876e4:	8b 45 08             	mov    0x8(%ebp),%eax
 82876e7:	89 04 24             	mov    %eax,(%esp)
 82876ea:	e8 85 03 00 00       	call   8287a74 <_ZN16Secu_GoldControl14SubImportMoneyEj>
 82876ef:	eb 12                	jmp    8287703 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xb9>
 82876f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82876f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82876f8:	8b 45 08             	mov    0x8(%ebp),%eax
 82876fb:	89 04 24             	mov    %eax,(%esp)
 82876fe:	e8 57 02 00 00       	call   828795a <_ZN16Secu_GoldControl15SubAuctionMoneyEj>
 8287703:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287706:	89 44 24 04          	mov    %eax,0x4(%esp)
 828770a:	8b 45 08             	mov    0x8(%ebp),%eax
 828770d:	89 04 24             	mov    %eax,(%esp)
 8287710:	e8 cf 02 00 00       	call   82879e4 <_ZN16Secu_GoldControl8SubMoneyEj>
 8287715:	8b 45 08             	mov    0x8(%ebp),%eax
 8287718:	89 04 24             	mov    %eax,(%esp)
 828771b:	e8 60 04 00 00       	call   8287b80 <_ZN16Secu_GoldControl15CheckMoneyRangeEv>
 8287720:	eb 01                	jmp    8287723 <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason+0xd9>
 8287722:	90                   	nop
 8287723:	83 c4 10             	add    $0x10,%esp
 8287726:	5b                   	pop    %ebx
 8287727:	5e                   	pop    %esi
 8287728:	5d                   	pop    %ebp
 8287729:	c3                   	ret

```

```c
// Secu_GoldControl::SubGold @ 0x828764a

/* Secu_GoldControl::SubGold(unsigned int, eMoneySubReason) */

void __thiscall Secu_GoldControl::SubGold(Secu_GoldControl *this,uint param_1,int param_3)

{
  uint uVar1;
  int iVar2;
  
  CheckDate(this);
  if (param_3 == 0xe) {
    SubImportMoney(this,param_1);
  }
  else if (param_3 < 0xf) {
    if (param_3 == 2) {
      return;
    }
  }
  else {
    if (param_3 == 0x11) {
      MailGold((uint)this,SUB41(param_1,0));
      uVar1 = CUser::get_acc_id(*(CUser **)this);
      iVar2 = CUser::GetUID(*(CUser **)this);
      DB_CheckCharacName::makeRequest(iVar2,uVar1,(char *)(this + 200),true);
      return;
    }
    if (param_3 == 0x1a) {
      SubAuctionMoney(this,param_1);
    }
  }
  SubMoney(this,param_1);
  CheckMoneyRange(this);
  return;
}

```

---

## SubImportMoney

```asm
// === 08287a74 Secu_GoldControl::SubImportMoney  [0x08287a74-0x8287b03] ===
 8287a74:	55                   	push   %ebp
 8287a75:	89 e5                	mov    %esp,%ebp
 8287a77:	53                   	push   %ebx
 8287a78:	83 ec 14             	sub    $0x14,%esp
 8287a7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a7e:	8b 48 58             	mov    0x58(%eax),%ecx
 8287a81:	8b 58 5c             	mov    0x5c(%eax),%ebx
 8287a84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287a87:	ba 00 00 00 00       	mov    $0x0,%edx
 8287a8c:	01 c8                	add    %ecx,%eax
 8287a8e:	11 da                	adc    %ebx,%edx
 8287a90:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287a93:	89 41 58             	mov    %eax,0x58(%ecx)
 8287a96:	89 51 5c             	mov    %edx,0x5c(%ecx)
 8287a99:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a9c:	0f b7 40 7a          	movzwl 0x7a(%eax),%eax
 8287aa0:	8d 50 01             	lea    0x1(%eax),%edx
 8287aa3:	8b 45 08             	mov    0x8(%ebp),%eax
 8287aa6:	66 89 50 7a          	mov    %dx,0x7a(%eax)
 8287aaa:	8b 45 08             	mov    0x8(%ebp),%eax
 8287aad:	8b 48 1c             	mov    0x1c(%eax),%ecx
 8287ab0:	8b 58 20             	mov    0x20(%eax),%ebx
 8287ab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287ab6:	ba 00 00 00 00       	mov    $0x0,%edx
 8287abb:	01 c8                	add    %ecx,%eax
 8287abd:	11 da                	adc    %ebx,%edx
 8287abf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287ac2:	89 41 1c             	mov    %eax,0x1c(%ecx)
 8287ac5:	89 51 20             	mov    %edx,0x20(%ecx)
 8287ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 8287acb:	0f b7 40 3e          	movzwl 0x3e(%eax),%eax
 8287acf:	8d 50 01             	lea    0x1(%eax),%edx
 8287ad2:	8b 45 08             	mov    0x8(%ebp),%eax
 8287ad5:	66 89 50 3e          	mov    %dx,0x3e(%eax)
 8287ad9:	8b 45 08             	mov    0x8(%ebp),%eax
 8287adc:	8b 00                	mov    (%eax),%eax
 8287ade:	89 04 24             	mov    %eax,(%esp)
 8287ae1:	e8 1a 8d fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8287ae6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8287aed:	00 
 8287aee:	8b 55 0c             	mov    0xc(%ebp),%edx
 8287af1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8287af5:	89 04 24             	mov    %eax,(%esp)
 8287af8:	e8 4d 19 23 00       	call   84b944a <_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE>
 8287afd:	83 c4 14             	add    $0x14,%esp
 8287b00:	5b                   	pop    %ebx
 8287b01:	5d                   	pop    %ebp
 8287b02:	c3                   	ret
 8287b03:	90                   	nop

```

```c
// Secu_GoldControl::SubImportMoney @ 0x8287a74

/* Secu_GoldControl::SubImportMoney(unsigned int) */

void __thiscall Secu_GoldControl::SubImportMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x58);
  *(uint *)(this + 0x58) = param_1 + uVar1;
  *(uint *)(this + 0x5c) = *(int *)(this + 0x5c) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x7a) = *(short *)(this + 0x7a) + 1;
  uVar1 = *(uint *)(this + 0x1c);
  *(uint *)(this + 0x1c) = param_1 + uVar1;
  *(uint *)(this + 0x20) = *(int *)(this + 0x20) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x3e) = *(short *)(this + 0x3e) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldMinus(pCVar2,param_1,1);
  return;
}

```

---

## SubMoney

```asm
// === 082879e4 Secu_GoldControl::SubMoney  [0x082879e4-0x8287a73] ===
 82879e4:	55                   	push   %ebp
 82879e5:	89 e5                	mov    %esp,%ebp
 82879e7:	53                   	push   %ebx
 82879e8:	83 ec 14             	sub    $0x14,%esp
 82879eb:	8b 45 08             	mov    0x8(%ebp),%eax
 82879ee:	8b 48 50             	mov    0x50(%eax),%ecx
 82879f1:	8b 58 54             	mov    0x54(%eax),%ebx
 82879f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82879f7:	ba 00 00 00 00       	mov    $0x0,%edx
 82879fc:	01 c8                	add    %ecx,%eax
 82879fe:	11 da                	adc    %ebx,%edx
 8287a00:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287a03:	89 41 50             	mov    %eax,0x50(%ecx)
 8287a06:	89 51 54             	mov    %edx,0x54(%ecx)
 8287a09:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a0c:	0f b7 40 78          	movzwl 0x78(%eax),%eax
 8287a10:	8d 50 01             	lea    0x1(%eax),%edx
 8287a13:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a16:	66 89 50 78          	mov    %dx,0x78(%eax)
 8287a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a1d:	8b 48 14             	mov    0x14(%eax),%ecx
 8287a20:	8b 58 18             	mov    0x18(%eax),%ebx
 8287a23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287a26:	ba 00 00 00 00       	mov    $0x0,%edx
 8287a2b:	01 c8                	add    %ecx,%eax
 8287a2d:	11 da                	adc    %ebx,%edx
 8287a2f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8287a32:	89 41 14             	mov    %eax,0x14(%ecx)
 8287a35:	89 51 18             	mov    %edx,0x18(%ecx)
 8287a38:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a3b:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
 8287a3f:	8d 50 01             	lea    0x1(%eax),%edx
 8287a42:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a45:	66 89 50 3c          	mov    %dx,0x3c(%eax)
 8287a49:	8b 45 08             	mov    0x8(%ebp),%eax
 8287a4c:	8b 00                	mov    (%eax),%eax
 8287a4e:	89 04 24             	mov    %eax,(%esp)
 8287a51:	e8 aa 8d fa ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8287a56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8287a5d:	00 
 8287a5e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8287a61:	89 54 24 04          	mov    %edx,0x4(%esp)
 8287a65:	89 04 24             	mov    %eax,(%esp)
 8287a68:	e8 dd 19 23 00       	call   84b944a <_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE>
 8287a6d:	83 c4 14             	add    $0x14,%esp
 8287a70:	5b                   	pop    %ebx
 8287a71:	5d                   	pop    %ebp
 8287a72:	c3                   	ret
 8287a73:	90                   	nop

```

```c
// Secu_GoldControl::SubMoney @ 0x82879e4

/* Secu_GoldControl::SubMoney(unsigned int) */

void __thiscall Secu_GoldControl::SubMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x50);
  *(uint *)(this + 0x50) = param_1 + uVar1;
  *(uint *)(this + 0x54) = *(int *)(this + 0x54) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x78) = *(short *)(this + 0x78) + 1;
  uVar1 = *(uint *)(this + 0x14);
  *(uint *)(this + 0x14) = param_1 + uVar1;
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x3c) = *(short *)(this + 0x3c) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldMinus(pCVar2,param_1,0);
  return;
}

```

---

## TradeComplete

```asm
// === 08287df2 Secu_GoldControl::TradeComplete  [0x08287df2-0x8287e3b] ===
 8287df2:	55                   	push   %ebp
 8287df3:	89 e5                	mov    %esp,%ebp
 8287df5:	83 ec 18             	sub    $0x18,%esp
 8287df8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8287dfc:	7e 24                	jle    8287e22 <_ZN16Secu_GoldControl13TradeCompleteEii+0x30>
 8287dfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287e01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287e05:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e08:	89 04 24             	mov    %eax,(%esp)
 8287e0b:	e8 64 fc ff ff       	call   8287a74 <_ZN16Secu_GoldControl14SubImportMoneyEj>
 8287e10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287e13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287e17:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e1a:	89 04 24             	mov    %eax,(%esp)
 8287e1d:	e8 c2 fb ff ff       	call   82879e4 <_ZN16Secu_GoldControl8SubMoneyEj>
 8287e22:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8287e26:	7e 12                	jle    8287e3a <_ZN16Secu_GoldControl13TradeCompleteEii+0x48>
 8287e28:	8b 45 10             	mov    0x10(%ebp),%eax
 8287e2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287e2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8287e32:	89 04 24             	mov    %eax,(%esp)
 8287e35:	e8 f0 f8 ff ff       	call   828772a <_ZN16Secu_GoldControl8AddMoneyEj>
 8287e3a:	c9                   	leave
 8287e3b:	c3                   	ret

```

```c
// Secu_GoldControl::TradeComplete @ 0x8287df2

/* Secu_GoldControl::TradeComplete(int, int) */

void __thiscall Secu_GoldControl::TradeComplete(Secu_GoldControl *this,int param_1,int param_2)

{
  if (0 < param_1) {
    SubImportMoney(this,param_1);
    SubMoney(this,param_1);
  }
  if (0 < param_2) {
    AddMoney(this,param_2);
  }
  return;
}

```

---

## UseFatigue

```asm
// === 08287552 Secu_GoldControl::UseFatigue  [0x08287552-0x828757b] ===
 8287552:	55                   	push   %ebp
 8287553:	89 e5                	mov    %esp,%ebp
 8287555:	83 ec 18             	sub    $0x18,%esp
 8287558:	8b 45 08             	mov    0x8(%ebp),%eax
 828755b:	89 04 24             	mov    %eax,(%esp)
 828755e:	e8 a1 05 00 00       	call   8287b04 <_ZN16Secu_GoldControl9CheckDateEv>
 8287563:	8b 45 08             	mov    0x8(%ebp),%eax
 8287566:	8b 80 b8 00 00 00    	mov    0xb8(%eax),%eax
 828756c:	89 c2                	mov    %eax,%edx
 828756e:	03 55 0c             	add    0xc(%ebp),%edx
 8287571:	8b 45 08             	mov    0x8(%ebp),%eax
 8287574:	89 90 b8 00 00 00    	mov    %edx,0xb8(%eax)
 828757a:	c9                   	leave
 828757b:	c3                   	ret

```

```c
// Secu_GoldControl::UseFatigue @ 0x8287552

/* Secu_GoldControl::UseFatigue(int) */

void __thiscall Secu_GoldControl::UseFatigue(Secu_GoldControl *this,int param_1)

{
  CheckDate(this);
  *(int *)(this + 0xb8) = *(int *)(this + 0xb8) + param_1;
  return;
}

```

---

## resetRangeMoney

```asm
// === 08287bdc Secu_GoldControl::resetRangeMoney  [0x08287bdc-0x8287df1] ===
 8287bdc:	55                   	push   %ebp
 8287bdd:	89 e5                	mov    %esp,%ebp
 8287bdf:	83 ec 18             	sub    $0x18,%esp
 8287be2:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 8287be9:	00 
 8287bea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287bed:	89 44 24 04          	mov    %eax,0x4(%esp)
 8287bf1:	8b 45 10             	mov    0x10(%ebp),%eax
 8287bf4:	89 04 24             	mov    %eax,(%esp)
 8287bf7:	e8 a4 5c df ff       	call   807d8a0 <memcpy@plt>
 8287bfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287bff:	8b 50 04             	mov    0x4(%eax),%edx
 8287c02:	8b 00                	mov    (%eax),%eax
 8287c04:	83 fa 00             	cmp    $0x0,%edx
 8287c07:	72 32                	jb     8287c3b <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x5f>
 8287c09:	83 fa 00             	cmp    $0x0,%edx
 8287c0c:	77 05                	ja     8287c13 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x37>
 8287c0e:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287c11:	76 28                	jbe    8287c3b <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x5f>
 8287c13:	8b 45 10             	mov    0x10(%ebp),%eax
 8287c16:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 8287c1c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8287c23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287c26:	8b 50 04             	mov    0x4(%eax),%edx
 8287c29:	8b 00                	mov    (%eax),%eax
 8287c2b:	83 c0 01             	add    $0x1,%eax
 8287c2e:	83 d2 ff             	adc    $0xffffffff,%edx
 8287c31:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8287c34:	89 01                	mov    %eax,(%ecx)
 8287c36:	89 51 04             	mov    %edx,0x4(%ecx)
 8287c39:	eb 10                	jmp    8287c4b <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x6f>
 8287c3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287c3e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8287c44:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8287c4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287c4e:	8b 50 0c             	mov    0xc(%eax),%edx
 8287c51:	8b 40 08             	mov    0x8(%eax),%eax
 8287c54:	83 fa 00             	cmp    $0x0,%edx
 8287c57:	72 35                	jb     8287c8e <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0xb2>
 8287c59:	83 fa 00             	cmp    $0x0,%edx
 8287c5c:	77 05                	ja     8287c63 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x87>
 8287c5e:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287c61:	76 2b                	jbe    8287c8e <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0xb2>
 8287c63:	8b 45 10             	mov    0x10(%ebp),%eax
 8287c66:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 8287c6d:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8287c74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287c77:	8b 50 0c             	mov    0xc(%eax),%edx
 8287c7a:	8b 40 08             	mov    0x8(%eax),%eax
 8287c7d:	83 c0 01             	add    $0x1,%eax
 8287c80:	83 d2 ff             	adc    $0xffffffff,%edx
 8287c83:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8287c86:	89 41 08             	mov    %eax,0x8(%ecx)
 8287c89:	89 51 0c             	mov    %edx,0xc(%ecx)
 8287c8c:	eb 11                	jmp    8287c9f <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0xc3>
 8287c8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287c91:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8287c98:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8287c9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287ca2:	8b 50 14             	mov    0x14(%eax),%edx
 8287ca5:	8b 40 10             	mov    0x10(%eax),%eax
 8287ca8:	83 fa 00             	cmp    $0x0,%edx
 8287cab:	72 35                	jb     8287ce2 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x106>
 8287cad:	83 fa 00             	cmp    $0x0,%edx
 8287cb0:	77 05                	ja     8287cb7 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0xdb>
 8287cb2:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287cb5:	76 2b                	jbe    8287ce2 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x106>
 8287cb7:	8b 45 10             	mov    0x10(%ebp),%eax
 8287cba:	c7 40 10 ff ff ff ff 	movl   $0xffffffff,0x10(%eax)
 8287cc1:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8287cc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287ccb:	8b 50 14             	mov    0x14(%eax),%edx
 8287cce:	8b 40 10             	mov    0x10(%eax),%eax
 8287cd1:	83 c0 01             	add    $0x1,%eax
 8287cd4:	83 d2 ff             	adc    $0xffffffff,%edx
 8287cd7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8287cda:	89 41 10             	mov    %eax,0x10(%ecx)
 8287cdd:	89 51 14             	mov    %edx,0x14(%ecx)
 8287ce0:	eb 11                	jmp    8287cf3 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x117>
 8287ce2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287ce5:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8287cec:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8287cf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287cf6:	8b 50 1c             	mov    0x1c(%eax),%edx
 8287cf9:	8b 40 18             	mov    0x18(%eax),%eax
 8287cfc:	83 fa 00             	cmp    $0x0,%edx
 8287cff:	72 35                	jb     8287d36 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x15a>
 8287d01:	83 fa 00             	cmp    $0x0,%edx
 8287d04:	77 05                	ja     8287d0b <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x12f>
 8287d06:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287d09:	76 2b                	jbe    8287d36 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x15a>
 8287d0b:	8b 45 10             	mov    0x10(%ebp),%eax
 8287d0e:	c7 40 18 ff ff ff ff 	movl   $0xffffffff,0x18(%eax)
 8287d15:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8287d1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287d1f:	8b 50 1c             	mov    0x1c(%eax),%edx
 8287d22:	8b 40 18             	mov    0x18(%eax),%eax
 8287d25:	83 c0 01             	add    $0x1,%eax
 8287d28:	83 d2 ff             	adc    $0xffffffff,%edx
 8287d2b:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8287d2e:	89 41 18             	mov    %eax,0x18(%ecx)
 8287d31:	89 51 1c             	mov    %edx,0x1c(%ecx)
 8287d34:	eb 11                	jmp    8287d47 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x16b>
 8287d36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287d39:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8287d40:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8287d47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287d4a:	8b 50 24             	mov    0x24(%eax),%edx
 8287d4d:	8b 40 20             	mov    0x20(%eax),%eax
 8287d50:	83 fa 00             	cmp    $0x0,%edx
 8287d53:	72 35                	jb     8287d8a <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x1ae>
 8287d55:	83 fa 00             	cmp    $0x0,%edx
 8287d58:	77 05                	ja     8287d5f <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x183>
 8287d5a:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287d5d:	76 2b                	jbe    8287d8a <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x1ae>
 8287d5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8287d62:	c7 40 20 ff ff ff ff 	movl   $0xffffffff,0x20(%eax)
 8287d69:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8287d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287d73:	8b 50 24             	mov    0x24(%eax),%edx
 8287d76:	8b 40 20             	mov    0x20(%eax),%eax
 8287d79:	83 c0 01             	add    $0x1,%eax
 8287d7c:	83 d2 ff             	adc    $0xffffffff,%edx
 8287d7f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8287d82:	89 41 20             	mov    %eax,0x20(%ecx)
 8287d85:	89 51 24             	mov    %edx,0x24(%ecx)
 8287d88:	eb 11                	jmp    8287d9b <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x1bf>
 8287d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287d8d:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8287d94:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8287d9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287d9e:	8b 50 2c             	mov    0x2c(%eax),%edx
 8287da1:	8b 40 28             	mov    0x28(%eax),%eax
 8287da4:	83 fa 00             	cmp    $0x0,%edx
 8287da7:	72 35                	jb     8287dde <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x202>
 8287da9:	83 fa 00             	cmp    $0x0,%edx
 8287dac:	77 05                	ja     8287db3 <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x1d7>
 8287dae:	83 f8 fe             	cmp    $0xfffffffe,%eax
 8287db1:	76 2b                	jbe    8287dde <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x202>
 8287db3:	8b 45 10             	mov    0x10(%ebp),%eax
 8287db6:	c7 40 28 ff ff ff ff 	movl   $0xffffffff,0x28(%eax)
 8287dbd:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 8287dc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287dc7:	8b 50 2c             	mov    0x2c(%eax),%edx
 8287dca:	8b 40 28             	mov    0x28(%eax),%eax
 8287dcd:	83 c0 01             	add    $0x1,%eax
 8287dd0:	83 d2 ff             	adc    $0xffffffff,%edx
 8287dd3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8287dd6:	89 41 28             	mov    %eax,0x28(%ecx)
 8287dd9:	89 51 2c             	mov    %edx,0x2c(%ecx)
 8287ddc:	eb 11                	jmp    8287def <_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_+0x213>
 8287dde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8287de1:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8287de8:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 8287def:	c9                   	leave
 8287df0:	c3                   	ret
 8287df1:	90                   	nop

```

```c
// Secu_GoldControl::resetRangeMoney @ 0x8287bdc

/* Secu_GoldControl::resetRangeMoney(user_gold_info&, user_gold_info&) */

void __thiscall
Secu_GoldControl::resetRangeMoney
          (Secu_GoldControl *this,user_gold_info *param_1,user_gold_info *param_2)

{
  uint uVar1;
  
  memcpy(param_2,param_1,0x3c);
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)param_1 != -1)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined4 *)(param_2 + 4) = 0;
    uVar1 = *(uint *)param_1;
    *(uint *)param_1 = uVar1 + 1;
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) != -1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar1 = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar1 + 1;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0x10) != -1)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x14) = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar1 + 1;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x18) != -1)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x20) != -1)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x24) = 0;
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar1 + 1;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x28) != -1)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1 + (uint)(0xfffffffe < uVar1);
  }
  return;
}

```

