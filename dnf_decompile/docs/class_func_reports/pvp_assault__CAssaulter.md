# pvp_assault__CAssaulter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## AttachUser

```asm
// === 082e67e6 pvp_assault::CAssaulter::AttachUser  [0x082e67e6-0x82e6811] ===
 82e67e6:	55                   	push   %ebp
 82e67e7:	89 e5                	mov    %esp,%ebp
 82e67e9:	83 ec 18             	sub    $0x18,%esp
 82e67ec:	8b 45 08             	mov    0x8(%ebp),%eax
 82e67ef:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e67f2:	89 10                	mov    %edx,(%eax)
 82e67f4:	8b 45 08             	mov    0x8(%ebp),%eax
 82e67f7:	8b 55 10             	mov    0x10(%ebp),%edx
 82e67fa:	89 50 04             	mov    %edx,0x4(%eax)
 82e67fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6800:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6804:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6807:	89 04 24             	mov    %eax,(%esp)
 82e680a:	e8 71 ff ff ff       	call   82e6780 <_ZN11pvp_assault10CAssaulter15_PrepareAssaultEP5CUser>
 82e680f:	c9                   	leave
 82e6810:	c3                   	ret
 82e6811:	90                   	nop

```

```c
// pvp_assault::CAssaulter::AttachUser @ 0x82e67e6

/* pvp_assault::CAssaulter::AttachUser(CUser*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaulter::AttachUser(CAssaulter *this,CUser *param_1,undefined4 param_3)

{
  *(CUser **)this = param_1;
  *(undefined4 *)(this + 4) = param_3;
  _PrepareAssault(this,param_1);
  return;
}

```

---

## CAssaulter

```asm
// === 082e661e pvp_assault::CAssaulter::CAssaulter  [0x082e661e-0x82e6635] ===
 82e661e:	55                   	push   %ebp
 82e661f:	89 e5                	mov    %esp,%ebp
 82e6621:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6624:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82e662a:	8b 45 08             	mov    0x8(%ebp),%eax
 82e662d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 82e6634:	5d                   	pop    %ebp
 82e6635:	c3                   	ret

```

```c
// pvp_assault::CAssaulter::CAssaulter @ 0x82e661e

/* pvp_assault::CAssaulter::CAssaulter() */

void __thiscall pvp_assault::CAssaulter::CAssaulter(CAssaulter *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## ChangeHp

```asm
// === 082e6694 pvp_assault::CAssaulter::ChangeHp  [0x082e6694-0x82e677f] ===
 82e6694:	55                   	push   %ebp
 82e6695:	89 e5                	mov    %esp,%ebp
 82e6697:	83 ec 38             	sub    $0x38,%esp
 82e669a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82e669e:	78 06                	js     82e66a6 <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0x12>
 82e66a0:	83 7d 0c 64          	cmpl   $0x64,0xc(%ebp)
 82e66a4:	7e 47                	jle    82e66ed <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0x59>
 82e66a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82e66ad:	00 
 82e66ae:	c7 44 24 08 8a 01 00 	movl   $0x18a,0x8(%esp)
 82e66b5:	00 
 82e66b6:	c7 44 24 04 60 d1 c1 	movl   $0x8c1d160,0x4(%esp)
 82e66bd:	08 
 82e66be:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e66c1:	89 04 24             	mov    %eax,(%esp)
 82e66c4:	e8 4f 90 26 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 82e66c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e66cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e66d0:	c7 44 24 04 e3 bc c1 	movl   $0x8c1bce3,0x4(%esp)
 82e66d7:	08 
 82e66d8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82e66db:	89 04 24             	mov    %eax,(%esp)
 82e66de:	e8 a5 90 26 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 82e66e3:	b8 00 00 00 00       	mov    $0x0,%eax
 82e66e8:	e9 90 00 00 00       	jmp    82e677d <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0xe9>
 82e66ed:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e66f2:	89 04 24             	mov    %eax,(%esp)
 82e66f5:	e8 16 92 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e66fa:	84 c0                	test   %al,%al
 82e66fc:	74 18                	je     82e6716 <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0x82>
 82e66fe:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6701:	8b 00                	mov    (%eax),%eax
 82e6703:	89 04 24             	mov    %eax,(%esp)
 82e6706:	e8 59 ee 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e670b:	3c 07                	cmp    $0x7,%al
 82e670d:	75 07                	jne    82e6716 <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0x82>
 82e670f:	b8 01 00 00 00       	mov    $0x1,%eax
 82e6714:	eb 05                	jmp    82e671b <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0x87>
 82e6716:	b8 00 00 00 00       	mov    $0x0,%eax
 82e671b:	84 c0                	test   %al,%al
 82e671d:	74 19                	je     82e6738 <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0xa4>
 82e671f:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6722:	0f b7 d0             	movzwl %ax,%edx
 82e6725:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6728:	8b 00                	mov    (%eax),%eax
 82e672a:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e672e:	89 04 24             	mov    %eax,(%esp)
 82e6731:	e8 8e a2 00 00       	call   82f09c4 <_ZN15CUserCharacInfo13setPowerWarHPEt>
 82e6736:	eb 09                	jmp    82e6741 <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0xad>
 82e6738:	8b 45 08             	mov    0x8(%ebp),%eax
 82e673b:	8b 55 0c             	mov    0xc(%ebp),%edx
 82e673e:	89 50 10             	mov    %edx,0x10(%eax)
 82e6741:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e6748:	e8 51 55 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e674d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82e6750:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6753:	8b 40 0c             	mov    0xc(%eax),%eax
 82e6756:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e6759:	89 d1                	mov    %edx,%ecx
 82e675b:	29 c1                	sub    %eax,%ecx
 82e675d:	89 c8                	mov    %ecx,%eax
 82e675f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e6762:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6765:	8b 55 f0             	mov    -0x10(%ebp),%edx
 82e6768:	89 50 0c             	mov    %edx,0xc(%eax)
 82e676b:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 82e676f:	7f 07                	jg     82e6778 <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0xe4>
 82e6771:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6776:	eb 05                	jmp    82e677d <_ZN11pvp_assault10CAssaulter8ChangeHpEi+0xe9>
 82e6778:	b8 01 00 00 00       	mov    $0x1,%eax
 82e677d:	c9                   	leave
 82e677e:	c3                   	ret
 82e677f:	90                   	nop

```

```c
// pvp_assault::CAssaulter::ChangeHp @ 0x82e6694

/* pvp_assault::CAssaulter::ChangeHp(int) */

bool __thiscall pvp_assault::CAssaulter::ChangeHp(CAssaulter *this,int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  cMyTrace local_24 [32];
  
  if ((-1 < param_1) && (param_1 < 0x65)) {
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\0') ||
       (cVar3 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)this), cVar3 != '\a')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      CUserCharacInfo::setPowerWarHP(*(CUserCharacInfo **)this,(ushort)param_1);
    }
    else {
      *(int *)(this + 0x10) = param_1;
    }
    iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar1 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar4;
    return 2 < iVar4 - iVar1;
  }
  cMyTrace::cMyTrace(local_24,"bool pvp_assault::CAssaulter::ChangeHp(int)",0x18a,0);
  cMyTrace::operator()(local_24,"ASSAULT_CHANGE_HP error (%d)",param_1);
  return false;
}

```

---

## DetachUser

```asm
// === 082e6812 pvp_assault::CAssaulter::DetachUser  [0x082e6812-0x82e6867] ===
 82e6812:	55                   	push   %ebp
 82e6813:	89 e5                	mov    %esp,%ebp
 82e6815:	83 ec 18             	sub    $0x18,%esp
 82e6818:	8b 45 08             	mov    0x8(%ebp),%eax
 82e681b:	8b 00                	mov    (%eax),%eax
 82e681d:	89 04 24             	mov    %eax,(%esp)
 82e6820:	e8 0d 9c e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e6825:	85 c0                	test   %eax,%eax
 82e6827:	0f 95 c0             	setne  %al
 82e682a:	84 c0                	test   %al,%al
 82e682c:	74 25                	je     82e6853 <_ZN11pvp_assault10CAssaulter10DetachUserEv+0x41>
 82e682e:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6831:	8b 00                	mov    (%eax),%eax
 82e6833:	89 04 24             	mov    %eax,(%esp)
 82e6836:	e8 53 3a df ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82e683b:	89 04 24             	mov    %eax,(%esp)
 82e683e:	e8 25 6d df ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 82e6843:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e684a:	00 
 82e684b:	89 04 24             	mov    %eax,(%esp)
 82e684e:	e8 37 5a 05 00       	call   833c28a <_ZN13user_creature12CCreatureMgr11TurnStomachEb>
 82e6853:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6856:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 82e685c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e685f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 82e6866:	c9                   	leave
 82e6867:	c3                   	ret

```

```c
// pvp_assault::CAssaulter::DetachUser @ 0x82e6812

/* pvp_assault::CAssaulter::DetachUser() */

void __thiscall pvp_assault::CAssaulter::DetachUser(CAssaulter *this)

{
  int iVar1;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  iVar1 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  if (iVar1 != 0) {
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
    this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
    user_creature::CCreatureMgr::TurnStomach(this_01,false);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## DieUser

```asm
// === 082e6a40 pvp_assault::CAssaulter::DieUser  [0x082e6a40-0x82e6a81] ===
 82e6a40:	55                   	push   %ebp
 82e6a41:	89 e5                	mov    %esp,%ebp
 82e6a43:	83 ec 18             	sub    $0x18,%esp
 82e6a46:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6a49:	8b 00                	mov    (%eax),%eax
 82e6a4b:	85 c0                	test   %eax,%eax
 82e6a4d:	74 30                	je     82e6a7f <_ZN11pvp_assault10CAssaulter7DieUserEv+0x3f>
 82e6a4f:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6a52:	8b 10                	mov    (%eax),%edx
 82e6a54:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6a57:	8b 00                	mov    (%eax),%eax
 82e6a59:	89 54 24 08          	mov    %edx,0x8(%esp)
 82e6a5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e6a64:	00 
 82e6a65:	89 04 24             	mov    %eax,(%esp)
 82e6a68:	e8 21 f8 35 00       	call   864628e <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser>
 82e6a6d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6a70:	8b 00                	mov    (%eax),%eax
 82e6a72:	05 f4 96 07 00       	add    $0x796f4,%eax
 82e6a77:	89 04 24             	mov    %eax,(%esp)
 82e6a7a:	e8 5b 91 f4 ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 82e6a7f:	c9                   	leave
 82e6a80:	c3                   	ret
 82e6a81:	90                   	nop

```

```c
// pvp_assault::CAssaulter::DieUser @ 0x82e6a40

/* pvp_assault::CAssaulter::DieUser() */

void __thiscall pvp_assault::CAssaulter::DieUser(CAssaulter *this)

{
  if (*(int *)this != 0) {
    CUserCharacInfo::DieCurCharac(*(CUserCharacInfo **)this,0,*(CUser **)this);
    CCharacterView::enableSaveCharacView((CCharacterView *)(*(int *)this + 0x796f4));
  }
  return;
}

```

---

## GetCharacName

```asm
// === 082e663c pvp_assault::CAssaulter::GetCharacName  [0x082e663c-0x82e6661] ===
 82e663c:	55                   	push   %ebp
 82e663d:	89 e5                	mov    %esp,%ebp
 82e663f:	83 ec 18             	sub    $0x18,%esp
 82e6642:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6645:	8b 00                	mov    (%eax),%eax
 82e6647:	85 c0                	test   %eax,%eax
 82e6649:	74 0f                	je     82e665a <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv+0x1e>
 82e664b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e664e:	8b 00                	mov    (%eax),%eax
 82e6650:	89 04 24             	mov    %eax,(%esp)
 82e6653:	e8 d0 a9 e1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 82e6658:	eb 05                	jmp    82e665f <_ZNK11pvp_assault10CAssaulter13GetCharacNameEv+0x23>
 82e665a:	b8 a0 bc c1 08       	mov    $0x8c1bca0,%eax
 82e665f:	c9                   	leave
 82e6660:	c3                   	ret
 82e6661:	90                   	nop

```

```c
// pvp_assault::CAssaulter::GetCharacName @ 0x82e663c

/* pvp_assault::CAssaulter::GetCharacName() const */

undefined * __thiscall pvp_assault::CAssaulter::GetCharacName(CAssaulter *this)

{
  undefined *puVar1;
  
  if (*(int *)this == 0) {
    puVar1 = &DAT_08c1bca0;
  }
  else {
    puVar1 = (undefined *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)this);
  }
  return puVar1;
}

```

---

## GetHp

```asm
// === 082e6688 pvp_assault::CAssaulter::GetHp  [0x082e6688-0x82e6693] ===
 82e6688:	55                   	push   %ebp
 82e6689:	89 e5                	mov    %esp,%ebp
 82e668b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e668e:	8b 40 10             	mov    0x10(%eax),%eax
 82e6691:	5d                   	pop    %ebp
 82e6692:	c3                   	ret
 82e6693:	90                   	nop

```

```c
// pvp_assault::CAssaulter::GetHp @ 0x82e6688

/* pvp_assault::CAssaulter::GetHp() */

undefined4 __thiscall pvp_assault::CAssaulter::GetHp(CAssaulter *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## GetUserUniqueId

```asm
// === 082e6662 pvp_assault::CAssaulter::GetUserUniqueId  [0x082e6662-0x82e6687] ===
 82e6662:	55                   	push   %ebp
 82e6663:	89 e5                	mov    %esp,%ebp
 82e6665:	83 ec 18             	sub    $0x18,%esp
 82e6668:	8b 45 08             	mov    0x8(%ebp),%eax
 82e666b:	8b 00                	mov    (%eax),%eax
 82e666d:	85 c0                	test   %eax,%eax
 82e666f:	75 07                	jne    82e6678 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv+0x16>
 82e6671:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6676:	eb 0d                	jmp    82e6685 <_ZN11pvp_assault10CAssaulter15GetUserUniqueIdEv+0x23>
 82e6678:	8b 45 08             	mov    0x8(%ebp),%eax
 82e667b:	8b 00                	mov    (%eax),%eax
 82e667d:	89 04 24             	mov    %eax,(%esp)
 82e6680:	e8 f7 3c df ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 82e6685:	c9                   	leave
 82e6686:	c3                   	ret
 82e6687:	90                   	nop

```

```c
// pvp_assault::CAssaulter::GetUserUniqueId @ 0x82e6662

/* pvp_assault::CAssaulter::GetUserUniqueId() */

undefined4 __thiscall pvp_assault::CAssaulter::GetUserUniqueId(CAssaulter *this)

{
  undefined4 uVar1;
  
  if (*(int *)this == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUser::get_unique_id(*(CUser **)this);
  }
  return uVar1;
}

```

---

## GiveupPanalty

```asm
// === 082e6868 pvp_assault::CAssaulter::GiveupPanalty  [0x082e6868-0x82e6a3f] ===
 82e6868:	55                   	push   %ebp
 82e6869:	89 e5                	mov    %esp,%ebp
 82e686b:	56                   	push   %esi
 82e686c:	53                   	push   %ebx
 82e686d:	83 ec 20             	sub    $0x20,%esp
 82e6870:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6873:	8b 00                	mov    (%eax),%eax
 82e6875:	85 c0                	test   %eax,%eax
 82e6877:	0f 84 bc 01 00 00    	je     82e6a39 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x1d1>
 82e687d:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6880:	8b 00                	mov    (%eax),%eax
 82e6882:	89 04 24             	mov    %eax,(%esp)
 82e6885:	e8 a8 9b e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e688a:	85 c0                	test   %eax,%eax
 82e688c:	0f 95 c0             	setne  %al
 82e688f:	84 c0                	test   %al,%al
 82e6891:	0f 84 a2 01 00 00    	je     82e6a39 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x1d1>
 82e6897:	8b 45 08             	mov    0x8(%ebp),%eax
 82e689a:	8b 00                	mov    (%eax),%eax
 82e689c:	89 04 24             	mov    %eax,(%esp)
 82e689f:	e8 ec 8a f4 ff       	call   822f390 <_ZNK15CUserCharacInfo19getCurCharacStaminaEv>
 82e68a4:	0f b6 d0             	movzbl %al,%edx
 82e68a7:	8b 45 08             	mov    0x8(%ebp),%eax
 82e68aa:	8b 00                	mov    (%eax),%eax
 82e68ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e68b0:	89 04 24             	mov    %eax,(%esp)
 82e68b3:	e8 82 a0 00 00       	call   82f093a <_ZN15CUserCharacInfo25setCurCharacBackupStaminaEh>
 82e68b8:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e68bd:	89 04 24             	mov    %eax,(%esp)
 82e68c0:	e8 4b 90 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e68c5:	83 f0 01             	xor    $0x1,%eax
 82e68c8:	84 c0                	test   %al,%al
 82e68ca:	74 18                	je     82e68e4 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x7c>
 82e68cc:	8b 45 08             	mov    0x8(%ebp),%eax
 82e68cf:	8b 00                	mov    (%eax),%eax
 82e68d1:	89 04 24             	mov    %eax,(%esp)
 82e68d4:	e8 8b ec 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e68d9:	3c 07                	cmp    $0x7,%al
 82e68db:	74 07                	je     82e68e4 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x7c>
 82e68dd:	b8 01 00 00 00       	mov    $0x1,%eax
 82e68e2:	eb 05                	jmp    82e68e9 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x81>
 82e68e4:	b8 00 00 00 00       	mov    $0x0,%eax
 82e68e9:	84 c0                	test   %al,%al
 82e68eb:	74 1c                	je     82e6909 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0xa1>
 82e68ed:	8b 45 08             	mov    0x8(%ebp),%eax
 82e68f0:	8b 00                	mov    (%eax),%eax
 82e68f2:	05 00 97 07 00       	add    $0x79700,%eax
 82e68f7:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 82e68fe:	00 
 82e68ff:	89 04 24             	mov    %eax,(%esp)
 82e6902:	e8 65 fb 39 00       	call   868646c <_ZN15cUserHistoryLog9GiveupPvPE23ENUM_PVP_HISTORY_REASON>
 82e6907:	eb 1a                	jmp    82e6923 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0xbb>
 82e6909:	8b 45 08             	mov    0x8(%ebp),%eax
 82e690c:	8b 00                	mov    (%eax),%eax
 82e690e:	05 00 97 07 00       	add    $0x79700,%eax
 82e6913:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 82e691a:	00 
 82e691b:	89 04 24             	mov    %eax,(%esp)
 82e691e:	e8 49 fb 39 00       	call   868646c <_ZN15cUserHistoryLog9GiveupPvPE23ENUM_PVP_HISTORY_REASON>
 82e6923:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82e692a:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e692f:	89 04 24             	mov    %eax,(%esp)
 82e6932:	e8 d9 8f 19 00       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 82e6937:	84 c0                	test   %al,%al
 82e6939:	75 11                	jne    82e694c <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0xe4>
 82e693b:	8b 45 08             	mov    0x8(%ebp),%eax
 82e693e:	8b 00                	mov    (%eax),%eax
 82e6940:	89 04 24             	mov    %eax,(%esp)
 82e6943:	e8 1c ec 35 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82e6948:	3c 07                	cmp    $0x7,%al
 82e694a:	75 07                	jne    82e6953 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0xeb>
 82e694c:	b8 01 00 00 00       	mov    $0x1,%eax
 82e6951:	eb 05                	jmp    82e6958 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0xf0>
 82e6953:	b8 00 00 00 00       	mov    $0x0,%eax
 82e6958:	84 c0                	test   %al,%al
 82e695a:	74 3b                	je     82e6997 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x12f>
 82e695c:	8b 45 08             	mov    0x8(%ebp),%eax
 82e695f:	8b 10                	mov    (%eax),%edx
 82e6961:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e6966:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e696a:	89 04 24             	mov    %eax,(%esp)
 82e696d:	e8 56 a5 19 00       	call   8480ec8 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser>
 82e6972:	d9 5d f0             	fstps  -0x10(%ebp)
 82e6975:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6978:	8b 10                	mov    (%eax),%edx
 82e697a:	a1 50 be 40 09       	mov    0x940be50,%eax
 82e697f:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 82e6982:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82e6986:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e698a:	89 04 24             	mov    %eax,(%esp)
 82e698d:	e8 00 a5 19 00       	call   8480e92 <_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf>
 82e6992:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e6995:	eb 39                	jmp    82e69d0 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x168>
 82e6997:	8b 45 08             	mov    0x8(%ebp),%eax
 82e699a:	8b 00                	mov    (%eax),%eax
 82e699c:	89 04 24             	mov    %eax,(%esp)
 82e699f:	e8 34 a1 00 00       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 82e69a4:	89 c6                	mov    %eax,%esi
 82e69a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e69a9:	8b 00                	mov    (%eax),%eax
 82e69ab:	89 04 24             	mov    %eax,(%esp)
 82e69ae:	e8 05 39 df ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 82e69b3:	89 c3                	mov    %eax,%ebx
 82e69b5:	e8 e1 57 de ff       	call   80cc19b <_Z14G_CDataManagerv>
 82e69ba:	83 c0 68             	add    $0x68,%eax
 82e69bd:	89 74 24 08          	mov    %esi,0x8(%esp)
 82e69c1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82e69c5:	89 04 24             	mov    %eax,(%esp)
 82e69c8:	e8 37 5e 7a 00       	call   8a8c804 <_ZN21ServerParameterScript19getAssaultGhostTimeEii>
 82e69cd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82e69d0:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82e69d4:	74 63                	je     82e6a39 <_ZN11pvp_assault10CAssaulter13GiveupPanaltyEv+0x1d1>
 82e69d6:	8b 45 08             	mov    0x8(%ebp),%eax
 82e69d9:	8b 00                	mov    (%eax),%eax
 82e69db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e69e2:	00 
 82e69e3:	89 04 24             	mov    %eax,(%esp)
 82e69e6:	e8 45 a2 00 00       	call   82f0c30 <_ZN15CUserCharacInfo17SetCurCharacGhostEb>
 82e69eb:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 82e69f2:	e8 a7 52 de ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 82e69f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82e69fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82e69fd:	8b 00                	mov    (%eax),%eax
 82e69ff:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e6a02:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6a06:	89 04 24             	mov    %eax,(%esp)
 82e6a09:	e8 f6 a1 00 00       	call   82f0c04 <_ZN15CUserCharacInfo24SetCurCharacChaosDieTimeEi>
 82e6a0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82e6a11:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82e6a14:	01 c2                	add    %eax,%edx
 82e6a16:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6a19:	8b 00                	mov    (%eax),%eax
 82e6a1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 82e6a1f:	89 04 24             	mov    %eax,(%esp)
 82e6a22:	e8 cd 84 3a 00       	call   868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>
 82e6a27:	8b 45 08             	mov    0x8(%ebp),%eax
 82e6a2a:	8b 00                	mov    (%eax),%eax
 82e6a2c:	05 f4 96 07 00       	add    $0x796f4,%eax
 82e6a31:	89 04 24             	mov    %eax,(%esp)
 82e6a34:	e8 a1 91 f4 ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 82e6a39:	83 c4 20             	add    $0x20,%esp
 82e6a3c:	5b                   	pop    %ebx
 82e6a3d:	5e                   	pop    %esi
 82e6a3e:	5d                   	pop    %ebp
 82e6a3f:	c3                   	ret

```

```c
// pvp_assault::CAssaulter::GiveupPanalty @ 0x82e6868

/* pvp_assault::CAssaulter::GiveupPanalty() */

void __thiscall pvp_assault::CAssaulter::GiveupPanalty(CAssaulter *this)

{
  bool bVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longdouble lVar7;
  int local_18;
  
  if (*(int *)this == 0) {
    return;
  }
  iVar4 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
  if (iVar4 != 0) {
    uVar2 = CUserCharacInfo::getCurCharacStamina(*(CUserCharacInfo **)this);
    CUserCharacInfo::setCurCharacBackupStamina(*(CUserCharacInfo **)this,uVar2);
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\x01') ||
       (cVar3 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)this), cVar3 == '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cUserHistoryLog::GiveupPvP((cUserHistoryLog *)(*(int *)this + 0x79700),7);
    }
    else {
      cUserHistoryLog::GiveupPvP((cUserHistoryLog *)(*(int *)this + 0x79700),3);
    }
    cVar3 = CPowerManager::IsPowerWarEventOn();
    if ((cVar3 == '\0') &&
       (cVar3 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)this), cVar3 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar7 = (longdouble)
              CPowerManager::GetPowerWarResponPenalty(GlobalData::s_power_manager,*(CUser **)this);
      local_18 = CPowerManager::GetPowerWarGhostTime
                           (GlobalData::s_power_manager,*(CUser **)this,(float)lVar7);
    }
    else {
      iVar4 = CUserCharacInfo::GetCurCharacChaosPoint(*(CUserCharacInfo **)this);
      iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
      iVar6 = G_CDataManager();
      local_18 = ServerParameterScript::getAssaultGhostTime
                           ((ServerParameterScript *)(iVar6 + 0x68),iVar5,iVar4);
    }
    if (local_18 != 0) {
      CUserCharacInfo::SetCurCharacGhost(*(CUserCharacInfo **)this,true);
      iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUserCharacInfo::SetCurCharacChaosDieTime(*(CUserCharacInfo **)this,iVar4);
      CUserCharacInfo::SetCurCharacChaosResponTime(*(CUserCharacInfo **)this,iVar4 + local_18);
      CCharacterView::enableSaveCharacView((CCharacterView *)(*(int *)this + 0x796f4));
    }
    return;
  }
  return;
}

```

---

## SetUserConnectP2P

```asm
// === 082e6a82 pvp_assault::CAssaulter::SetUserConnectP2P  [0x082e6a82-0x82e6ab7] ===
 82e6a82:	55                   	push   %ebp
 82e6a83:	89 e5                	mov    %esp,%ebp
 82e6a85:	83 ec 18             	sub    $0x18,%esp
 82e6a88:	c7 44 24 04 44 c3 c1 	movl   $0x8c1c344,0x4(%esp)
 82e6a8f:	08 
 82e6a90:	8d 45 10             	lea    0x10(%ebp),%eax
 82e6a93:	89 04 24             	mov    %eax,(%esp)
 82e6a96:	e8 73 8e df ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 82e6a9b:	8b 00                	mov    (%eax),%eax
 82e6a9d:	8b 55 08             	mov    0x8(%ebp),%edx
 82e6aa0:	83 c2 15             	add    $0x15,%edx
 82e6aa3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82e6aa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6aaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 82e6aae:	89 14 24             	mov    %edx,(%esp)
 82e6ab1:	e8 ea 6d d9 ff       	call   807d8a0 <memcpy@plt>
 82e6ab6:	c9                   	leave
 82e6ab7:	c3                   	ret

```

```c
// pvp_assault::CAssaulter::SetUserConnectP2P @ 0x82e6a82

/* pvp_assault::CAssaulter::SetUserConnectP2P(char*, int) */

void pvp_assault::CAssaulter::SetUserConnectP2P(char *param_1,int param_2)

{
  size_t *psVar1;
  
  psVar1 = (size_t *)std::min<int>((int *)&stack0x0000000c,&::MAX_PVP_PLAYER);
  memcpy(param_1 + 0x15,(void *)param_2,*psVar1);
  return;
}

```

---

## _PrepareAssault

```asm
// === 082e6780 pvp_assault::CAssaulter::_PrepareAssault  [0x082e6780-0x82e67e5] ===
 82e6780:	55                   	push   %ebp
 82e6781:	89 e5                	mov    %esp,%ebp
 82e6783:	83 ec 18             	sub    $0x18,%esp
 82e6786:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e6789:	89 04 24             	mov    %eax,(%esp)
 82e678c:	e8 a1 9c e3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82e6791:	85 c0                	test   %eax,%eax
 82e6793:	0f 95 c0             	setne  %al
 82e6796:	84 c0                	test   %al,%al
 82e6798:	74 4a                	je     82e67e4 <_ZN11pvp_assault10CAssaulter15_PrepareAssaultEP5CUser+0x64>
 82e679a:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e679d:	89 04 24             	mov    %eax,(%esp)
 82e67a0:	e8 eb 8b f4 ff       	call   822f390 <_ZNK15CUserCharacInfo19getCurCharacStaminaEv>
 82e67a5:	0f b6 d0             	movzbl %al,%edx
 82e67a8:	8b 45 08             	mov    0x8(%ebp),%eax
 82e67ab:	89 50 10             	mov    %edx,0x10(%eax)
 82e67ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e67b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82e67b8:	00 
 82e67b9:	89 04 24             	mov    %eax,(%esp)
 82e67bc:	e8 bf a5 00 00       	call   82f0d80 <_ZN15CUserCharacInfo24SetCurCharacLeaveTimeoutEb>
 82e67c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82e67c4:	89 04 24             	mov    %eax,(%esp)
 82e67c7:	e8 c2 3a df ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 82e67cc:	89 04 24             	mov    %eax,(%esp)
 82e67cf:	e8 94 6d df ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 82e67d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82e67db:	00 
 82e67dc:	89 04 24             	mov    %eax,(%esp)
 82e67df:	e8 a6 5a 05 00       	call   833c28a <_ZN13user_creature12CCreatureMgr11TurnStomachEb>
 82e67e4:	c9                   	leave
 82e67e5:	c3                   	ret

```

```c
// pvp_assault::CAssaulter::_PrepareAssault @ 0x82e6780

/* pvp_assault::CAssaulter::_PrepareAssault(CUser*) */

void __thiscall pvp_assault::CAssaulter::_PrepareAssault(CAssaulter *this,CUser *param_1)

{
  int iVar1;
  uint uVar2;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    uVar2 = CUserCharacInfo::getCurCharacStamina((CUserCharacInfo *)param_1);
    *(uint *)(this + 0x10) = uVar2 & 0xff;
    CUserCharacInfo::SetCurCharacLeaveTimeout((CUserCharacInfo *)param_1,false);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
    user_creature::CCreatureMgr::TurnStomach(this_01,true);
  }
  return;
}

```

---

## ~CAssaulter

```asm
// === 082e6636 pvp_assault::CAssaulter::~CAssaulter  [0x082e6636-0x82e663b] ===
 82e6636:	55                   	push   %ebp
 82e6637:	89 e5                	mov    %esp,%ebp
 82e6639:	5d                   	pop    %ebp
 82e663a:	c3                   	ret
 82e663b:	90                   	nop

```

```c
// pvp_assault::CAssaulter::~CAssaulter @ 0x82e6636

/* pvp_assault::CAssaulter::~CAssaulter() */

void __thiscall pvp_assault::CAssaulter::~CAssaulter(CAssaulter *this)

{
  return;
}

```

