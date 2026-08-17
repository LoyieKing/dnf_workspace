# Redeem_Item__CRedeemItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## AddRedeemList

```asm
// === 085f71a8 Redeem_Item::CRedeemItem::AddRedeemList  [0x085f71a8-0x85f7289] ===
 85f71a8:	55                   	push   %ebp
 85f71a9:	89 e5                	mov    %esp,%ebp
 85f71ab:	83 ec 78             	sub    $0x78,%esp
 85f71ae:	8b 45 14             	mov    0x14(%ebp),%eax
 85f71b1:	88 45 a4             	mov    %al,-0x5c(%ebp)
 85f71b4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f71b7:	89 04 24             	mov    %eax,(%esp)
 85f71ba:	e8 b7 86 e9 ff       	call   848f876 <_ZN11Redeem_Item28Inven_Item_Expand_RedeemInfoC1Ev>
 85f71bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f71c2:	8b 10                	mov    (%eax),%edx
 85f71c4:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 85f71c7:	8b 50 04             	mov    0x4(%eax),%edx
 85f71ca:	89 55 b8             	mov    %edx,-0x48(%ebp)
 85f71cd:	8b 50 08             	mov    0x8(%eax),%edx
 85f71d0:	89 55 bc             	mov    %edx,-0x44(%ebp)
 85f71d3:	8b 50 0c             	mov    0xc(%eax),%edx
 85f71d6:	89 55 c0             	mov    %edx,-0x40(%ebp)
 85f71d9:	8b 50 10             	mov    0x10(%eax),%edx
 85f71dc:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 85f71df:	8b 50 14             	mov    0x14(%eax),%edx
 85f71e2:	89 55 c8             	mov    %edx,-0x38(%ebp)
 85f71e5:	8b 50 18             	mov    0x18(%eax),%edx
 85f71e8:	89 55 cc             	mov    %edx,-0x34(%ebp)
 85f71eb:	8b 50 1c             	mov    0x1c(%eax),%edx
 85f71ee:	89 55 d0             	mov    %edx,-0x30(%ebp)
 85f71f1:	8b 50 20             	mov    0x20(%eax),%edx
 85f71f4:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 85f71f7:	8b 50 24             	mov    0x24(%eax),%edx
 85f71fa:	89 55 d8             	mov    %edx,-0x28(%ebp)
 85f71fd:	8b 50 28             	mov    0x28(%eax),%edx
 85f7200:	89 55 dc             	mov    %edx,-0x24(%ebp)
 85f7203:	8b 50 2c             	mov    0x2c(%eax),%edx
 85f7206:	89 55 e0             	mov    %edx,-0x20(%ebp)
 85f7209:	8b 50 30             	mov    0x30(%eax),%edx
 85f720c:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 85f720f:	8b 50 34             	mov    0x34(%eax),%edx
 85f7212:	89 55 e8             	mov    %edx,-0x18(%ebp)
 85f7215:	8b 50 38             	mov    0x38(%eax),%edx
 85f7218:	89 55 ec             	mov    %edx,-0x14(%ebp)
 85f721b:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85f721f:	88 45 f0             	mov    %al,-0x10(%ebp)
 85f7222:	80 7d a4 00          	cmpb   $0x0,-0x5c(%ebp)
 85f7226:	74 0d                	je     85f7235 <_ZN11Redeem_Item11CRedeemItem13AddRedeemListERK10Inven_Itemib+0x8d>
 85f7228:	8b 45 10             	mov    0x10(%ebp),%eax
 85f722b:	05 e8 03 00 00       	add    $0x3e8,%eax
 85f7230:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f7233:	eb 07                	jmp    85f723c <_ZN11Redeem_Item11CRedeemItem13AddRedeemListERK10Inven_Itemib+0x94>
 85f7235:	c7 45 f4 e8 03 00 00 	movl   $0x3e8,-0xc(%ebp)
 85f723c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f723f:	89 04 24             	mov    %eax,(%esp)
 85f7242:	e8 7d 19 ad ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85f7247:	8b 45 08             	mov    0x8(%ebp),%eax
 85f724a:	83 c0 08             	add    $0x8,%eax
 85f724d:	89 04 24             	mov    %eax,(%esp)
 85f7250:	e8 57 0a 00 00       	call   85f7cac <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE4sizeEv>
 85f7255:	83 f8 14             	cmp    $0x14,%eax
 85f7258:	0f 97 c0             	seta   %al
 85f725b:	84 c0                	test   %al,%al
 85f725d:	74 0e                	je     85f726d <_ZN11Redeem_Item11CRedeemItem13AddRedeemListERK10Inven_Itemib+0xc5>
 85f725f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7262:	83 c0 08             	add    $0x8,%eax
 85f7265:	89 04 24             	mov    %eax,(%esp)
 85f7268:	e8 09 0b 00 00       	call   85f7d76 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE9pop_frontEv>
 85f726d:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7270:	8d 50 08             	lea    0x8(%eax),%edx
 85f7273:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f7276:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f727a:	89 14 24             	mov    %edx,(%esp)
 85f727d:	e8 24 0b 00 00       	call   85f7da6 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE9push_backERKS1_>
 85f7282:	b8 01 00 00 00       	mov    $0x1,%eax
 85f7287:	c9                   	leave
 85f7288:	c3                   	ret
 85f7289:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::AddRedeemList @ 0x85f71a8

/* Redeem_Item::CRedeemItem::AddRedeemList(Inven_Item const&, int, bool) */

undefined4 __thiscall
Redeem_Item::CRedeemItem::AddRedeemList
          (CRedeemItem *this,Inven_Item *param_1,int param_2,bool param_3)

{
  uint uVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  Inven_Item local_14;
  int local_10;
  
  Inven_Item_Expand_RedeemInfo::Inven_Item_Expand_RedeemInfo
            ((Inven_Item_Expand_RedeemInfo *)&local_50);
  local_50 = *(undefined4 *)param_1;
  local_4c = *(undefined4 *)(param_1 + 4);
  local_48 = *(undefined4 *)(param_1 + 8);
  local_44 = *(undefined4 *)(param_1 + 0xc);
  local_40 = *(undefined4 *)(param_1 + 0x10);
  local_3c = *(undefined4 *)(param_1 + 0x14);
  local_38 = *(undefined4 *)(param_1 + 0x18);
  local_34 = *(undefined4 *)(param_1 + 0x1c);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  local_2c = *(undefined4 *)(param_1 + 0x24);
  local_28 = *(undefined4 *)(param_1 + 0x28);
  local_24 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(undefined4 *)(param_1 + 0x30);
  local_1c = *(undefined4 *)(param_1 + 0x34);
  local_18 = *(undefined4 *)(param_1 + 0x38);
  local_14 = param_1[0x3c];
  if (param_3) {
    local_10 = param_2 + 1000;
  }
  else {
    local_10 = 1000;
  }
  charac_expand::CData::alter((CData *)this);
  uVar1 = std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::size();
  if (0x14 < uVar1) {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::pop_front((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                 *)(this + 8));
  }
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::push_back((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
               *)(this + 8),(Inven_Item_Expand_RedeemInfo *)&local_50);
  return 1;
}

```

---

## CRedeemItem

```asm
// === 085f7040 Redeem_Item::CRedeemItem::CRedeemItem  [0x085f7040-0x85f708d] ===
 85f7040:	55                   	push   %ebp
 85f7041:	89 e5                	mov    %esp,%ebp
 85f7043:	56                   	push   %esi
 85f7044:	53                   	push   %ebx
 85f7045:	83 ec 10             	sub    $0x10,%esp
 85f7048:	8b 45 08             	mov    0x8(%ebp),%eax
 85f704b:	89 04 24             	mov    %eax,(%esp)
 85f704e:	e8 67 1c ad ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 85f7053:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7056:	c7 00 68 23 cd 08    	movl   $0x8cd2368,(%eax)
 85f705c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f705f:	83 c0 08             	add    $0x8,%eax
 85f7062:	89 04 24             	mov    %eax,(%esp)
 85f7065:	e8 c6 0b 00 00       	call   85f7c30 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EEC1Ev>
 85f706a:	eb 1b                	jmp    85f7087 <_ZN11Redeem_Item11CRedeemItemC1Ev+0x47>
 85f706c:	89 d3                	mov    %edx,%ebx
 85f706e:	89 c6                	mov    %eax,%esi
 85f7070:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7073:	89 04 24             	mov    %eax,(%esp)
 85f7076:	e8 67 1b ad ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85f707b:	89 f0                	mov    %esi,%eax
 85f707d:	89 da                	mov    %ebx,%edx
 85f707f:	89 04 24             	mov    %eax,(%esp)
 85f7082:	e8 c9 c6 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f7087:	83 c4 10             	add    $0x10,%esp
 85f708a:	5b                   	pop    %ebx
 85f708b:	5e                   	pop    %esi
 85f708c:	5d                   	pop    %ebp
 85f708d:	c3                   	ret

```

```c
// Redeem_Item::CRedeemItem::CRedeemItem @ 0x85f7040

/* Redeem_Item::CRedeemItem::CRedeemItem() */

void __thiscall Redeem_Item::CRedeemItem::CRedeemItem(CRedeemItem *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cd2368;
                    /* try { // try from 085f7065 to 085f7069 has its CatchHandler @ 085f706c */
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::list((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          *)(this + 8));
  return;
}

```

---

## GetItemPrice

```asm
// === 085f7386 Redeem_Item::CRedeemItem::GetItemPrice  [0x085f7386-0x85f73ed] ===
 85f7386:	55                   	push   %ebp
 85f7387:	89 e5                	mov    %esp,%ebp
 85f7389:	83 ec 28             	sub    $0x28,%esp
 85f738c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f738f:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f7392:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f7396:	8b 55 08             	mov    0x8(%ebp),%edx
 85f7399:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f739d:	89 04 24             	mov    %eax,(%esp)
 85f73a0:	e8 69 fd ff ff       	call   85f710e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi>
 85f73a5:	83 ec 04             	sub    $0x4,%esp
 85f73a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85f73ab:	8d 50 08             	lea    0x8(%eax),%edx
 85f73ae:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f73b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f73b5:	89 04 24             	mov    %eax,(%esp)
 85f73b8:	e8 c9 0a 00 00       	call   85f7e86 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f73bd:	83 ec 04             	sub    $0x4,%esp
 85f73c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f73c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f73c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f73ca:	89 04 24             	mov    %eax,(%esp)
 85f73cd:	e8 31 0b 00 00       	call   85f7f03 <_ZSteqIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEbRKSt14_List_iteratorIT_ERKSt20_List_const_iteratorIS3_E>
 85f73d2:	84 c0                	test   %al,%al
 85f73d4:	74 07                	je     85f73dd <_ZN11Redeem_Item11CRedeemItem12GetItemPriceEi+0x57>
 85f73d6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f73db:	eb 0e                	jmp    85f73eb <_ZN11Redeem_Item11CRedeemItem12GetItemPriceEi+0x65>
 85f73dd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f73e0:	89 04 24             	mov    %eax,(%esp)
 85f73e3:	e8 30 0b 00 00       	call   85f7f18 <_ZNKSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEptEv>
 85f73e8:	8b 40 40             	mov    0x40(%eax),%eax
 85f73eb:	c9                   	leave
 85f73ec:	c3                   	ret
 85f73ed:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::GetItemPrice @ 0x85f7386

/* Redeem_Item::CRedeemItem::GetItemPrice(int) */

undefined4 Redeem_Item::CRedeemItem::GetItemPrice(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  _List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_14 [4];
  _List_iterator local_10 [12];
  
  _CheckVaildIndex_N_GetIter((int)local_14);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::end();
  bVar1 = std::operator==(local_10,local_14);
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->
                      (local_14);
    uVar2 = *(undefined4 *)(iVar3 + 0x40);
  }
  return uVar2;
}

```

---

## GetRedeemInfoR

```asm
// === 085f7668 Redeem_Item::CRedeemItem::GetRedeemInfoR  [0x085f7668-0x85f76ef] ===
 85f7668:	55                   	push   %ebp
 85f7669:	89 e5                	mov    %esp,%ebp
 85f766b:	53                   	push   %ebx
 85f766c:	83 ec 24             	sub    $0x24,%esp
 85f766f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85f7672:	89 1c 24             	mov    %ebx,(%esp)
 85f7675:	e8 fc 81 e9 ff       	call   848f876 <_ZN11Redeem_Item28Inven_Item_Expand_RedeemInfoC1Ev>
 85f767a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f767d:	8b 55 10             	mov    0x10(%ebp),%edx
 85f7680:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f7684:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f7687:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f768b:	89 04 24             	mov    %eax,(%esp)
 85f768e:	e8 7b fa ff ff       	call   85f710e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi>
 85f7693:	83 ec 04             	sub    $0x4,%esp
 85f7696:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7699:	8d 50 08             	lea    0x8(%eax),%edx
 85f769c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f769f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f76a3:	89 04 24             	mov    %eax,(%esp)
 85f76a6:	e8 45 06 00 00       	call   85f7cf0 <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f76ab:	83 ec 04             	sub    $0x4,%esp
 85f76ae:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f76b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f76b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f76b8:	89 04 24             	mov    %eax,(%esp)
 85f76bb:	e8 88 08 00 00       	call   85f7f48 <_ZNKSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEneERKS2_>
 85f76c0:	84 c0                	test   %al,%al
 85f76c2:	74 21                	je     85f76e5 <_ZNK11Redeem_Item11CRedeemItem14GetRedeemInfoREi+0x7d>
 85f76c4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f76c7:	89 04 24             	mov    %eax,(%esp)
 85f76ca:	e8 8d 08 00 00       	call   85f7f5c <_ZNKSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEdeEv>
 85f76cf:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 85f76d6:	00 
 85f76d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f76db:	89 1c 24             	mov    %ebx,(%esp)
 85f76de:	e8 9d 61 a8 ff       	call   807d880 <memmove@plt>
 85f76e3:	eb 01                	jmp    85f76e6 <_ZNK11Redeem_Item11CRedeemItem14GetRedeemInfoREi+0x7e>
 85f76e5:	90                   	nop
 85f76e6:	89 d8                	mov    %ebx,%eax
 85f76e8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f76eb:	c9                   	leave
 85f76ec:	c2 04 00             	ret    $0x4
 85f76ef:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::GetRedeemInfoR @ 0x85f7668

/* Redeem_Item::CRedeemItem::GetRedeemInfoR(int) const */

int Redeem_Item::CRedeemItem::GetRedeemInfoR(int param_1)

{
  char cVar1;
  void *__src;
  _List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_14 [4];
  _List_const_iterator local_10 [8];
  
  Inven_Item_Expand_RedeemInfo::Inven_Item_Expand_RedeemInfo
            ((Inven_Item_Expand_RedeemInfo *)param_1);
  _CheckVaildIndex_N_GetIter((int)local_14);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::end();
  cVar1 = std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                    (local_14,local_10);
  if (cVar1 != '\0') {
    __src = (void *)std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*
                              (local_14);
    memmove((void *)param_1,__src,0x44);
  }
  return param_1;
}

```

---

## RedeemItem

```asm
// === 085f728a Redeem_Item::CRedeemItem::RedeemItem  [0x085f728a-0x85f7385] ===
 85f728a:	55                   	push   %ebp
 85f728b:	89 e5                	mov    %esp,%ebp
 85f728d:	53                   	push   %ebx
 85f728e:	83 ec 34             	sub    $0x34,%esp
 85f7291:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85f7294:	89 1c 24             	mov    %ebx,(%esp)
 85f7297:	e8 da 85 e9 ff       	call   848f876 <_ZN11Redeem_Item28Inven_Item_Expand_RedeemInfoC1Ev>
 85f729c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f729f:	89 04 24             	mov    %eax,(%esp)
 85f72a2:	e8 1d 19 ad ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85f72a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f72aa:	8b 55 10             	mov    0x10(%ebp),%edx
 85f72ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f72b1:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f72b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f72b8:	89 04 24             	mov    %eax,(%esp)
 85f72bb:	e8 4e fe ff ff       	call   85f710e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi>
 85f72c0:	83 ec 04             	sub    $0x4,%esp
 85f72c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f72c6:	8d 50 08             	lea    0x8(%eax),%edx
 85f72c9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f72cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f72d0:	89 04 24             	mov    %eax,(%esp)
 85f72d3:	e8 04 0b 00 00       	call   85f7ddc <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5beginEv>
 85f72d8:	83 ec 04             	sub    $0x4,%esp
 85f72db:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f72de:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f72e2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f72e5:	89 04 24             	mov    %eax,(%esp)
 85f72e8:	e8 15 0b 00 00       	call   85f7e02 <_ZNSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEC1ERKSt14_List_iteratorIS1_E>
 85f72ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f72f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f72f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f72f7:	89 04 24             	mov    %eax,(%esp)
 85f72fa:	e8 12 0b 00 00       	call   85f7e11 <_ZSt8distanceISt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEENSt15iterator_traitsIT_E15difference_typeES5_S5_>
 85f72ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7303:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f7306:	89 04 24             	mov    %eax,(%esp)
 85f7309:	e8 3a 0b 00 00       	call   85f7e48 <_ZSt7advanceISt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEiEvRT_T0_>
 85f730e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7311:	8d 50 08             	lea    0x8(%eax),%edx
 85f7314:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f7317:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f731b:	89 04 24             	mov    %eax,(%esp)
 85f731e:	e8 63 0b 00 00       	call   85f7e86 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f7323:	83 ec 04             	sub    $0x4,%esp
 85f7326:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f7329:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f732d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f7330:	89 04 24             	mov    %eax,(%esp)
 85f7333:	e8 72 0b 00 00       	call   85f7eaa <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEneERKS2_>
 85f7338:	84 c0                	test   %al,%al
 85f733a:	74 40                	je     85f737c <_ZN11Redeem_Item11CRedeemItem10RedeemItemEi+0xf2>
 85f733c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f733f:	89 04 24             	mov    %eax,(%esp)
 85f7342:	e8 77 0b 00 00       	call   85f7ebe <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEdeEv>
 85f7347:	c7 44 24 08 44 00 00 	movl   $0x44,0x8(%esp)
 85f734e:	00 
 85f734f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7353:	89 1c 24             	mov    %ebx,(%esp)
 85f7356:	e8 25 65 a8 ff       	call   807d880 <memmove@plt>
 85f735b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f735e:	8d 48 08             	lea    0x8(%eax),%ecx
 85f7361:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f7364:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f7367:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f736b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f736f:	89 04 24             	mov    %eax,(%esp)
 85f7372:	e8 55 0b 00 00       	call   85f7ecc <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5eraseESt14_List_iteratorIS1_E>
 85f7377:	83 ec 04             	sub    $0x4,%esp
 85f737a:	eb 01                	jmp    85f737d <_ZN11Redeem_Item11CRedeemItem10RedeemItemEi+0xf3>
 85f737c:	90                   	nop
 85f737d:	89 d8                	mov    %ebx,%eax
 85f737f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f7382:	c9                   	leave
 85f7383:	c2 04 00             	ret    $0x4

```

```c
// Redeem_Item::CRedeemItem::RedeemItem @ 0x85f728a

/* Redeem_Item::CRedeemItem::RedeemItem(int) */

int Redeem_Item::CRedeemItem::RedeemItem(int param_1)

{
  char cVar1;
  int iVar2;
  void *__src;
  CData *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  _List_iterator local_14 [4];
  undefined1 local_10 [8];
  
  Inven_Item_Expand_RedeemInfo::Inven_Item_Expand_RedeemInfo
            ((Inven_Item_Expand_RedeemInfo *)param_1);
  charac_expand::CData::alter(in_stack_00000008);
  _CheckVaildIndex_N_GetIter((int)&local_1c);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::begin();
  std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::_List_const_iterator
            ((_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)&local_18,
             (_List_iterator *)&local_20);
  iVar2 = std::distance<std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                    (local_18,local_1c,in_stack_0000000c);
  std::advance<std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>,int>
            ((_List_iterator *)&local_20,iVar2);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::end();
  cVar1 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                    ((_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)&local_20,local_14
                    );
  if (cVar1 != '\0') {
    __src = (void *)std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*
                              ((_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> *)
                               &local_20);
    memmove((void *)param_1,__src,0x44);
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::erase(local_10,in_stack_00000008 + 8,local_20);
  }
  return param_1;
}

```

---

## Send_RedeemList

```asm
// === 085f73ee Redeem_Item::CRedeemItem::Send_RedeemList  [0x085f73ee-0x85f7667] ===
 85f73ee:	55                   	push   %ebp
 85f73ef:	89 e5                	mov    %esp,%ebp
 85f73f1:	56                   	push   %esi
 85f73f2:	53                   	push   %ebx
 85f73f3:	83 ec 30             	sub    $0x30,%esp
 85f73f6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f73f9:	89 04 24             	mov    %eax,(%esp)
 85f73fc:	e8 4b 69 f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85f7401:	c7 44 24 08 21 01 00 	movl   $0x121,0x8(%esp)
 85f7408:	00 
 85f7409:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f7410:	00 
 85f7411:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7414:	89 04 24             	mov    %eax,(%esp)
 85f7417:	e8 e0 44 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85f741c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f741f:	83 c0 08             	add    $0x8,%eax
 85f7422:	89 04 24             	mov    %eax,(%esp)
 85f7425:	e8 82 08 00 00       	call   85f7cac <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE4sizeEv>
 85f742a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f742e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7431:	89 04 24             	mov    %eax,(%esp)
 85f7434:	e8 e7 44 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85f7439:	8b 45 08             	mov    0x8(%ebp),%eax
 85f743c:	8d 50 08             	lea    0x8(%eax),%edx
 85f743f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f7442:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f7446:	89 04 24             	mov    %eax,(%esp)
 85f7449:	e8 8e 09 00 00       	call   85f7ddc <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5beginEv>
 85f744e:	83 ec 04             	sub    $0x4,%esp
 85f7451:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85f7458:	e9 64 01 00 00       	jmp    85f75c1 <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x1d3>
 85f745d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f7460:	89 04 24             	mov    %eax,(%esp)
 85f7463:	e8 d2 0a 00 00       	call   85f7f3a <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEptEv>
 85f7468:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f746b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f746e:	89 04 24             	mov    %eax,(%esp)
 85f7471:	e8 c4 0a 00 00       	call   85f7f3a <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEptEv>
 85f7476:	8b 40 40             	mov    0x40(%eax),%eax
 85f7479:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f747d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7480:	89 04 24             	mov    %eax,(%esp)
 85f7483:	e8 b4 44 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85f7488:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f748b:	8b 40 02             	mov    0x2(%eax),%eax
 85f748e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7492:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7495:	89 04 24             	mov    %eax,(%esp)
 85f7498:	e8 9f 44 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85f749d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f74a0:	8b 40 07             	mov    0x7(%eax),%eax
 85f74a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f74a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f74aa:	89 04 24             	mov    %eax,(%esp)
 85f74ad:	e8 8a 44 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85f74b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f74b5:	89 04 24             	mov    %eax,(%esp)
 85f74b8:	e8 1f 93 b5 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 85f74bd:	0f b6 c0             	movzbl %al,%eax
 85f74c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f74c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f74c7:	89 04 24             	mov    %eax,(%esp)
 85f74ca:	e8 51 44 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85f74cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f74d2:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 85f74d6:	0f b7 c0             	movzwl %ax,%eax
 85f74d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f74dd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f74e0:	89 04 24             	mov    %eax,(%esp)
 85f74e3:	e8 bc 29 ae ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85f74e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f74eb:	0f b6 00             	movzbl (%eax),%eax
 85f74ee:	0f b6 c0             	movzbl %al,%eax
 85f74f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f74f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f74f8:	89 04 24             	mov    %eax,(%esp)
 85f74fb:	e8 20 44 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85f7500:	e8 a2 2e ae ff       	call   80da3a7 <_Z11G_GameWorldv>
 85f7505:	89 04 24             	mov    %eax,(%esp)
 85f7508:	e8 ef ce c3 ff       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 85f750d:	84 c0                	test   %al,%al
 85f750f:	74 15                	je     85f7526 <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x138>
 85f7511:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f7518:	00 
 85f7519:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f751c:	89 04 24             	mov    %eax,(%esp)
 85f751f:	e8 18 44 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85f7524:	eb 15                	jmp    85f753b <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x14d>
 85f7526:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f7529:	8b 40 0d             	mov    0xd(%eax),%eax
 85f752c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7530:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7533:	89 04 24             	mov    %eax,(%esp)
 85f7536:	e8 01 44 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85f753b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f753e:	83 c0 11             	add    $0x11,%eax
 85f7541:	89 04 24             	mov    %eax,(%esp)
 85f7544:	e8 e9 91 b5 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 85f7549:	0f b6 c0             	movzbl %al,%eax
 85f754c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7550:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7553:	89 04 24             	mov    %eax,(%esp)
 85f7556:	e8 c5 43 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85f755b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f755e:	83 c0 11             	add    $0x11,%eax
 85f7561:	89 04 24             	mov    %eax,(%esp)
 85f7564:	e8 09 92 b5 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 85f7569:	0f b7 c0             	movzwl %ax,%eax
 85f756c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7570:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7573:	89 04 24             	mov    %eax,(%esp)
 85f7576:	e8 29 29 ae ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85f757b:	e8 1b 4c ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85f7580:	8b 40 20             	mov    0x20(%eax),%eax
 85f7583:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85f7586:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f758a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f758d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f7591:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f7594:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f7598:	89 04 24             	mov    %eax,(%esp)
 85f759b:	e8 0a 34 f5 ff       	call   854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>
 85f75a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f75a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f75a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f75aa:	89 04 24             	mov    %eax,(%esp)
 85f75ad:	e8 dc 93 b5 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 85f75b2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85f75b6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f75b9:	89 04 24             	mov    %eax,(%esp)
 85f75bc:	e8 65 09 00 00       	call   85f7f26 <_ZNSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEppEv>
 85f75c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f75c4:	83 f8 14             	cmp    $0x14,%eax
 85f75c7:	77 35                	ja     85f75fe <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x210>
 85f75c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85f75cc:	8d 50 08             	lea    0x8(%eax),%edx
 85f75cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f75d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f75d6:	89 04 24             	mov    %eax,(%esp)
 85f75d9:	e8 a8 08 00 00       	call   85f7e86 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f75de:	83 ec 04             	sub    $0x4,%esp
 85f75e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f75e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f75e8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f75eb:	89 04 24             	mov    %eax,(%esp)
 85f75ee:	e8 b7 08 00 00       	call   85f7eaa <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEneERKS2_>
 85f75f3:	84 c0                	test   %al,%al
 85f75f5:	74 07                	je     85f75fe <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x210>
 85f75f7:	b8 01 00 00 00       	mov    $0x1,%eax
 85f75fc:	eb 05                	jmp    85f7603 <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x215>
 85f75fe:	b8 00 00 00 00       	mov    $0x0,%eax
 85f7603:	84 c0                	test   %al,%al
 85f7605:	0f 85 52 fe ff ff    	jne    85f745d <_ZN11Redeem_Item11CRedeemItem15Send_RedeemListEP5CUser+0x6f>
 85f760b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85f7612:	00 
 85f7613:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7616:	89 04 24             	mov    %eax,(%esp)
 85f7619:	e8 3a 43 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85f761e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7621:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7625:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7628:	89 04 24             	mov    %eax,(%esp)
 85f762b:	e8 8a 0f 05 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85f7630:	bb 01 00 00 00       	mov    $0x1,%ebx
 85f7635:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7638:	89 04 24             	mov    %eax,(%esp)
 85f763b:	e8 40 68 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85f7640:	89 d8                	mov    %ebx,%eax
 85f7642:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f7645:	83 c4 00             	add    $0x0,%esp
 85f7648:	5b                   	pop    %ebx
 85f7649:	5e                   	pop    %esi
 85f764a:	5d                   	pop    %ebp
 85f764b:	c3                   	ret
 85f764c:	89 d3                	mov    %edx,%ebx
 85f764e:	89 c6                	mov    %eax,%esi
 85f7650:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f7653:	89 04 24             	mov    %eax,(%esp)
 85f7656:	e8 25 68 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85f765b:	89 f0                	mov    %esi,%eax
 85f765d:	89 da                	mov    %ebx,%edx
 85f765f:	89 04 24             	mov    %eax,(%esp)
 85f7662:	e8 e9 c0 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f7667:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::Send_RedeemList @ 0x85f73ee

/* Redeem_Item::CRedeemItem::Send_RedeemList(CUser*) */

undefined4 __thiscall Redeem_Item::CRedeemItem::Send_RedeemList(CRedeemItem *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this_00;
  _List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_28 [4];
  PacketGuard local_24 [12];
  _List_iterator local_18 [4];
  uint local_14;
  Inven_Item *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085f7417 to 085f762f has its CatchHandler @ 085f764c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x121);
  iVar3 = std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::size();
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,iVar3);
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::begin();
  local_14 = 0;
  do {
    if (local_14 < 0x15) {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::end();
      cVar2 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_28,local_18);
      if (cVar2 == '\0') goto LAB_085f75fe;
      bVar1 = true;
    }
    else {
LAB_085f75fe:
      bVar1 = false;
    }
    if (!bVar1) {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send(param_1,local_24);
      PacketGuard::~PacketGuard(local_24);
      return 1;
    }
    local_10 = (Inven_Item *)
               std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->(local_28);
    iVar3 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator->(local_28);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(iVar3 + 0x40));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_10 + 2));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_10 + 7));
    uVar4 = Inven_Item::GetItemAttr(local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar4 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)*(ushort *)(local_10 + 0xb));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(byte)*local_10);
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsEnchantRevisionChannel(this_00);
    if (cVar2 == '\0') {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(local_10 + 0xd));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,0);
    }
    uVar4 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_10 + 0x11));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar4 & 0xff);
    uVar4 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_10 + 0x11));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar4 & 0xffff);
    iVar3 = G_CDataManager();
    WongWork::CItemUpgrade::make3rdChroniclePacket
              (*(CItemUpgrade **)(iVar3 + 0x20),param_1,local_10,local_24);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_24,local_10);
    local_14 = local_14 + 1;
    std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_28);
  } while( true );
}

```

---

## _CheckVaildIndex_N_GetIter

```asm
// === 085f710e Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter  [0x085f710e-0x85f71a7] ===
 85f710e:	55                   	push   %ebp
 85f710f:	89 e5                	mov    %esp,%ebp
 85f7111:	53                   	push   %ebx
 85f7112:	83 ec 24             	sub    $0x24,%esp
 85f7115:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85f7118:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85f711c:	78 2a                	js     85f7148 <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi+0x3a>
 85f711e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7121:	83 c0 08             	add    $0x8,%eax
 85f7124:	89 04 24             	mov    %eax,(%esp)
 85f7127:	e8 6e 0b 00 00       	call   85f7c9a <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5emptyEv>
 85f712c:	84 c0                	test   %al,%al
 85f712e:	75 18                	jne    85f7148 <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi+0x3a>
 85f7130:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7133:	83 c0 08             	add    $0x8,%eax
 85f7136:	89 04 24             	mov    %eax,(%esp)
 85f7139:	e8 6e 0b 00 00       	call   85f7cac <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE4sizeEv>
 85f713e:	8b 55 10             	mov    0x10(%ebp),%edx
 85f7141:	83 c2 01             	add    $0x1,%edx
 85f7144:	39 d0                	cmp    %edx,%eax
 85f7146:	7d 07                	jge    85f714f <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi+0x41>
 85f7148:	b8 01 00 00 00       	mov    $0x1,%eax
 85f714d:	eb 05                	jmp    85f7154 <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi+0x46>
 85f714f:	b8 00 00 00 00       	mov    $0x0,%eax
 85f7154:	84 c0                	test   %al,%al
 85f7156:	74 17                	je     85f716f <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi+0x61>
 85f7158:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f715b:	83 c0 08             	add    $0x8,%eax
 85f715e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7162:	89 1c 24             	mov    %ebx,(%esp)
 85f7165:	e8 86 0b 00 00       	call   85f7cf0 <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f716a:	83 ec 04             	sub    $0x4,%esp
 85f716d:	eb 2f                	jmp    85f719e <_ZNK11Redeem_Item11CRedeemItem26_CheckVaildIndex_N_GetIterEi+0x90>
 85f716f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7172:	8d 50 08             	lea    0x8(%eax),%edx
 85f7175:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f7178:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f717c:	89 04 24             	mov    %eax,(%esp)
 85f717f:	e8 90 0b 00 00       	call   85f7d14 <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5beginEv>
 85f7184:	83 ec 04             	sub    $0x4,%esp
 85f7187:	8b 45 10             	mov    0x10(%ebp),%eax
 85f718a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f718e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f7191:	89 04 24             	mov    %eax,(%esp)
 85f7194:	e8 a0 0b 00 00       	call   85f7d39 <_ZSt7advanceISt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEiEvRT_T0_>
 85f7199:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f719c:	89 03                	mov    %eax,(%ebx)
 85f719e:	89 d8                	mov    %ebx,%eax
 85f71a0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f71a3:	c9                   	leave
 85f71a4:	c2 04 00             	ret    $0x4
 85f71a7:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter @ 0x85f710e

/* Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int) const */

int Redeem_Item::CRedeemItem::_CheckVaildIndex_N_GetIter(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_10 [2];
  
  if (-1 < in_stack_0000000c) {
    cVar2 = std::
            list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
            ::empty((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                     *)(in_stack_00000008 + 8));
    if (cVar2 == '\0') {
      iVar3 = std::
              list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
              ::size();
      if (in_stack_0000000c + 1 <= iVar3) {
        bVar1 = false;
        goto LAB_085f7154;
      }
    }
  }
  bVar1 = true;
LAB_085f7154:
  if (bVar1) {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::end();
  }
  else {
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::begin();
    std::advance<std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>,int>
              ((_List_const_iterator *)local_10,in_stack_0000000c);
    *(undefined4 *)param_1 = local_10[0];
  }
  return param_1;
}

```

---

## _reset

```asm
// === 085f7b6e Redeem_Item::CRedeemItem::_reset  [0x085f7b6e-0x85f7b83] ===
 85f7b6e:	55                   	push   %ebp
 85f7b6f:	89 e5                	mov    %esp,%ebp
 85f7b71:	83 ec 18             	sub    $0x18,%esp
 85f7b74:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7b77:	83 c0 08             	add    $0x8,%eax
 85f7b7a:	89 04 24             	mov    %eax,(%esp)
 85f7b7d:	e8 12 04 00 00       	call   85f7f94 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5clearEv>
 85f7b82:	c9                   	leave
 85f7b83:	c3                   	ret

```

```c
// Redeem_Item::CRedeemItem::_reset @ 0x85f7b6e

/* Redeem_Item::CRedeemItem::_reset() */

void __thiscall Redeem_Item::CRedeemItem::_reset(CRedeemItem *this)

{
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::clear((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
           *)(this + 8));
  return;
}

```

---

## _saveData

```asm
// === 085f7998 Redeem_Item::CRedeemItem::_saveData  [0x085f7998-0x85f7b6d] ===
 85f7998:	55                   	push   %ebp
 85f7999:	89 e5                	mov    %esp,%ebp
 85f799b:	57                   	push   %edi
 85f799c:	56                   	push   %esi
 85f799d:	53                   	push   %ebx
 85f799e:	83 ec 3c             	sub    $0x3c,%esp
 85f79a1:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85f79a6:	c7 44 24 08 08 01 00 	movl   $0x108,0x8(%esp)
 85f79ad:	00 
 85f79ae:	c7 44 24 04 40 17 cd 	movl   $0x8cd1740,0x4(%esp)
 85f79b5:	08 
 85f79b6:	89 04 24             	mov    %eax,(%esp)
 85f79b9:	e8 c8 80 c9 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85f79be:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85f79c5:	00 
 85f79c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f79ca:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f79cd:	89 04 24             	mov    %eax,(%esp)
 85f79d0:	e8 51 12 ad ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85f79d5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f79d8:	89 04 24             	mov    %eax,(%esp)
 85f79db:	e8 66 12 ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85f79e0:	c7 44 24 04 f4 01 00 	movl   $0x1f4,0x4(%esp)
 85f79e7:	00 
 85f79e8:	89 04 24             	mov    %eax,(%esp)
 85f79eb:	e8 66 12 ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85f79f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f79f3:	89 04 24             	mov    %eax,(%esp)
 85f79f6:	e8 9b 12 ad ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85f79fb:	89 c3                	mov    %eax,%ebx
 85f79fd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f7a00:	89 04 24             	mov    %eax,(%esp)
 85f7a03:	e8 3e 12 ad ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85f7a08:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f7a0c:	89 04 24             	mov    %eax,(%esp)
 85f7a0f:	e8 42 12 ad ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85f7a14:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f7a17:	89 04 24             	mov    %eax,(%esp)
 85f7a1a:	e8 2f 12 ad ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85f7a1f:	89 04 24             	mov    %eax,(%esp)
 85f7a22:	e8 57 05 00 00       	call   85f7f7e <_ZN12CStreamGuard11GetInBufferI25SIG_REDEEMINFO_LIST_TO_DBEEPT_v>
 85f7a27:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85f7a2a:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85f7a2e:	75 0a                	jne    85f7a3a <_ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser+0xa2>
 85f7a30:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f7a35:	e9 1b 01 00 00       	jmp    85f7b55 <_ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser+0x1bd>
 85f7a3a:	c7 44 24 08 9c 05 00 	movl   $0x59c,0x8(%esp)
 85f7a41:	00 
 85f7a42:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85f7a49:	00 
 85f7a4a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f7a4d:	89 04 24             	mov    %eax,(%esp)
 85f7a50:	e8 6b 62 a8 ff       	call   807dcc0 <memset@plt>
 85f7a55:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85f7a5c:	ff 
 85f7a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7a60:	89 04 24             	mov    %eax,(%esp)
 85f7a63:	e8 38 65 05 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85f7a68:	89 c2                	mov    %eax,%edx
 85f7a6a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f7a6d:	89 10                	mov    %edx,(%eax)
 85f7a6f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7a72:	83 c0 08             	add    $0x8,%eax
 85f7a75:	89 04 24             	mov    %eax,(%esp)
 85f7a78:	e8 2f 02 00 00       	call   85f7cac <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE4sizeEv>
 85f7a7d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f7a80:	89 42 04             	mov    %eax,0x4(%edx)
 85f7a83:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f7a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7a8d:	8d 50 08             	lea    0x8(%eax),%edx
 85f7a90:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f7a93:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f7a97:	89 04 24             	mov    %eax,(%esp)
 85f7a9a:	e8 3d 03 00 00       	call   85f7ddc <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5beginEv>
 85f7a9f:	83 ec 04             	sub    $0x4,%esp
 85f7aa2:	eb 45                	jmp    85f7ae9 <_ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser+0x151>
 85f7aa4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f7aa7:	89 c3                	mov    %eax,%ebx
 85f7aa9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f7aac:	89 04 24             	mov    %eax,(%esp)
 85f7aaf:	e8 0a 04 00 00       	call   85f7ebe <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEdeEv>
 85f7ab4:	89 c2                	mov    %eax,%edx
 85f7ab6:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 85f7ab9:	89 d8                	mov    %ebx,%eax
 85f7abb:	c1 e0 02             	shl    $0x2,%eax
 85f7abe:	89 c3                	mov    %eax,%ebx
 85f7ac0:	c1 e3 04             	shl    $0x4,%ebx
 85f7ac3:	01 d8                	add    %ebx,%eax
 85f7ac5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f7ac8:	83 c0 08             	add    $0x8,%eax
 85f7acb:	89 d3                	mov    %edx,%ebx
 85f7acd:	ba 11 00 00 00       	mov    $0x11,%edx
 85f7ad2:	89 c7                	mov    %eax,%edi
 85f7ad4:	89 de                	mov    %ebx,%esi
 85f7ad6:	89 d1                	mov    %edx,%ecx
 85f7ad8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85f7ada:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85f7ade:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f7ae1:	89 04 24             	mov    %eax,(%esp)
 85f7ae4:	e8 3d 04 00 00       	call   85f7f26 <_ZNSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEppEv>
 85f7ae9:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7aec:	8d 50 08             	lea    0x8(%eax),%edx
 85f7aef:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f7af2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f7af6:	89 04 24             	mov    %eax,(%esp)
 85f7af9:	e8 88 03 00 00       	call   85f7e86 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f7afe:	83 ec 04             	sub    $0x4,%esp
 85f7b01:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f7b04:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7b08:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f7b0b:	89 04 24             	mov    %eax,(%esp)
 85f7b0e:	e8 97 03 00 00       	call   85f7eaa <_ZNKSt14_List_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEneERKS2_>
 85f7b13:	84 c0                	test   %al,%al
 85f7b15:	75 8d                	jne    85f7aa4 <_ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser+0x10c>
 85f7b17:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85f7b1c:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85f7b1f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f7b23:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85f7b2a:	00 
 85f7b2b:	89 04 24             	mov    %eax,(%esp)
 85f7b2e:	e8 ab 94 f7 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85f7b33:	bb 01 00 00 00       	mov    $0x1,%ebx
 85f7b38:	eb 1b                	jmp    85f7b55 <_ZN11Redeem_Item11CRedeemItem9_saveDataEP5CUser+0x1bd>
 85f7b3a:	89 d3                	mov    %edx,%ebx
 85f7b3c:	89 c6                	mov    %eax,%esi
 85f7b3e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f7b41:	89 04 24             	mov    %eax,(%esp)
 85f7b44:	e8 89 4d 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85f7b49:	89 f0                	mov    %esi,%eax
 85f7b4b:	89 da                	mov    %ebx,%edx
 85f7b4d:	89 04 24             	mov    %eax,(%esp)
 85f7b50:	e8 fb bb 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f7b55:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f7b58:	89 04 24             	mov    %eax,(%esp)
 85f7b5b:	e8 72 4d 02 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85f7b60:	89 d8                	mov    %ebx,%eax
 85f7b62:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85f7b65:	83 c4 00             	add    $0x0,%esp
 85f7b68:	5b                   	pop    %ebx
 85f7b69:	5e                   	pop    %esi
 85f7b6a:	5f                   	pop    %edi
 85f7b6b:	5d                   	pop    %ebp
 85f7b6c:	c3                   	ret
 85f7b6d:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::_saveData @ 0x85f7998

/* Redeem_Item::CRedeemItem::_saveData(CUser*) */

undefined4 __thiscall Redeem_Item::CRedeemItem::_saveData(CRedeemItem *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  SIG_REDEEMINFO_LIST_TO_DB *pSVar8;
  byte bVar9;
  _List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_34 [4];
  CStreamGuard local_30 [8];
  _List_iterator local_28 [4];
  SIG_REDEEMINFO_LIST_TO_DB *local_24;
  int local_20;
  
  bVar9 = 0;
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"RedeemItem.cpp",0x108);
  CStreamGuard::CStreamGuard(local_30,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 085f79eb to 085f7b32 has its CatchHandler @ 085f7b3a */
  CStreamGuard::operator<<(pCVar3,500);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_30);
  local_24 = CStreamGuard::GetInBuffer<SIG_REDEEMINFO_LIST_TO_DB>(pCVar3);
  if (local_24 == (SIG_REDEEMINFO_LIST_TO_DB *)0x0) {
    uVar7 = 0;
  }
  else {
    memset(local_24,0,0x59c);
    uVar7 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_24 = uVar7;
    uVar7 = std::
            list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
            ::size();
    *(undefined4 *)(local_24 + 4) = uVar7;
    local_20 = 0;
    std::
    list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
    ::begin();
    while( true ) {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::end();
      cVar1 = std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_34,local_28);
      iVar4 = local_20;
      if (cVar1 == '\0') break;
      puVar5 = (undefined4 *)
               std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*(local_34);
      pSVar8 = local_24 + iVar4 * 0x44 + 8;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pSVar8 = *puVar5;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
        pSVar8 = pSVar8 + (uint)bVar9 * -8 + 4;
      }
      local_20 = local_20 + 1;
      std::_List_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_34);
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
    uVar7 = 1;
  }
  CStreamGuard::~CStreamGuard(local_30);
  return uVar7;
}

```

---

## getData

```asm
// === 085f78bc Redeem_Item::CRedeemItem::getData  [0x085f78bc-0x85f7997] ===
 85f78bc:	55                   	push   %ebp
 85f78bd:	89 e5                	mov    %esp,%ebp
 85f78bf:	57                   	push   %edi
 85f78c0:	56                   	push   %esi
 85f78c1:	53                   	push   %ebx
 85f78c2:	83 ec 2c             	sub    $0x2c,%esp
 85f78c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f78c8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85f78cb:	8b 45 08             	mov    0x8(%ebp),%eax
 85f78ce:	8d 50 08             	lea    0x8(%eax),%edx
 85f78d1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f78d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f78d8:	89 04 24             	mov    %eax,(%esp)
 85f78db:	e8 34 04 00 00       	call   85f7d14 <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE5beginEv>
 85f78e0:	83 ec 04             	sub    $0x4,%esp
 85f78e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85f78e6:	83 c0 08             	add    $0x8,%eax
 85f78e9:	89 04 24             	mov    %eax,(%esp)
 85f78ec:	e8 bb 03 00 00       	call   85f7cac <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE4sizeEv>
 85f78f1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f78f4:	89 42 04             	mov    %eax,0x4(%edx)
 85f78f7:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f78fe:	eb 43                	jmp    85f7943 <_ZNK11Redeem_Item11CRedeemItem7getDataEPc+0x87>
 85f7900:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f7903:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f7906:	89 04 24             	mov    %eax,(%esp)
 85f7909:	e8 4e 06 00 00       	call   85f7f5c <_ZNKSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEdeEv>
 85f790e:	89 c2                	mov    %eax,%edx
 85f7910:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 85f7913:	89 d8                	mov    %ebx,%eax
 85f7915:	c1 e0 02             	shl    $0x2,%eax
 85f7918:	89 c3                	mov    %eax,%ebx
 85f791a:	c1 e3 04             	shl    $0x4,%ebx
 85f791d:	01 d8                	add    %ebx,%eax
 85f791f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f7922:	83 c0 08             	add    $0x8,%eax
 85f7925:	89 d3                	mov    %edx,%ebx
 85f7927:	ba 11 00 00 00       	mov    $0x11,%edx
 85f792c:	89 c7                	mov    %eax,%edi
 85f792e:	89 de                	mov    %ebx,%esi
 85f7930:	89 d1                	mov    %edx,%ecx
 85f7932:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85f7934:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f7937:	89 04 24             	mov    %eax,(%esp)
 85f793a:	e8 2b 06 00 00       	call   85f7f6a <_ZNSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEppEv>
 85f793f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85f7943:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f7946:	83 f8 14             	cmp    $0x14,%eax
 85f7949:	77 35                	ja     85f7980 <_ZNK11Redeem_Item11CRedeemItem7getDataEPc+0xc4>
 85f794b:	8b 45 08             	mov    0x8(%ebp),%eax
 85f794e:	8d 50 08             	lea    0x8(%eax),%edx
 85f7951:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f7954:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f7958:	89 04 24             	mov    %eax,(%esp)
 85f795b:	e8 90 03 00 00       	call   85f7cf0 <_ZNKSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE3endEv>
 85f7960:	83 ec 04             	sub    $0x4,%esp
 85f7963:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f7966:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f796a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f796d:	89 04 24             	mov    %eax,(%esp)
 85f7970:	e8 d3 05 00 00       	call   85f7f48 <_ZNKSt20_List_const_iteratorIN11Redeem_Item28Inven_Item_Expand_RedeemInfoEEneERKS2_>
 85f7975:	84 c0                	test   %al,%al
 85f7977:	74 07                	je     85f7980 <_ZNK11Redeem_Item11CRedeemItem7getDataEPc+0xc4>
 85f7979:	b8 01 00 00 00       	mov    $0x1,%eax
 85f797e:	eb 05                	jmp    85f7985 <_ZNK11Redeem_Item11CRedeemItem7getDataEPc+0xc9>
 85f7980:	b8 00 00 00 00       	mov    $0x0,%eax
 85f7985:	84 c0                	test   %al,%al
 85f7987:	0f 85 73 ff ff ff    	jne    85f7900 <_ZNK11Redeem_Item11CRedeemItem7getDataEPc+0x44>
 85f798d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85f7990:	83 c4 00             	add    $0x0,%esp
 85f7993:	5b                   	pop    %ebx
 85f7994:	5e                   	pop    %esi
 85f7995:	5f                   	pop    %edi
 85f7996:	5d                   	pop    %ebp
 85f7997:	c3                   	ret

```

```c
// Redeem_Item::CRedeemItem::getData @ 0x85f78bc

/* Redeem_Item::CRedeemItem::getData(char*) const */

void __thiscall Redeem_Item::CRedeemItem::getData(CRedeemItem *this,char *param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  _List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo> local_2c [4];
  _List_const_iterator local_28 [4];
  char *local_24;
  uint local_20;
  
  bVar8 = 0;
  local_24 = param_1;
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::begin();
  uVar4 = std::
          list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
          ::size();
  *(undefined4 *)(local_24 + 4) = uVar4;
  local_20 = 0;
  do {
    if (local_20 < 0x15) {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::end();
      cVar3 = std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator!=
                        (local_2c,local_28);
      if (cVar3 == '\0') goto LAB_085f7980;
      bVar1 = true;
    }
    else {
LAB_085f7980:
      bVar1 = false;
    }
    uVar2 = local_20;
    if (!bVar1) {
      return;
    }
    puVar5 = (undefined4 *)
             std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator*
                       (local_2c);
    pcVar7 = local_24 + uVar2 * 0x44 + 8;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar7 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
    }
    std::_List_const_iterator<Redeem_Item::Inven_Item_Expand_RedeemInfo>::operator++(local_2c);
    local_20 = local_20 + 1;
  } while( true );
}

```

---

## isAddableFilter

```asm
// === 085f76f0 Redeem_Item::CRedeemItem::isAddableFilter  [0x085f76f0-0x85f782f] ===
 85f76f0:	55                   	push   %ebp
 85f76f1:	89 e5                	mov    %esp,%ebp
 85f76f3:	53                   	push   %ebx
 85f76f4:	83 ec 24             	sub    $0x24,%esp
 85f76f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f76fa:	89 04 24             	mov    %eax,(%esp)
 85f76fd:	e8 64 76 b2 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 85f7702:	84 c0                	test   %al,%al
 85f7704:	74 0a                	je     85f7710 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x20>
 85f7706:	b8 00 00 00 00       	mov    $0x0,%eax
 85f770b:	e9 19 01 00 00       	jmp    85f7829 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x139>
 85f7710:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7713:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f7717:	8b 45 08             	mov    0x8(%ebp),%eax
 85f771a:	89 04 24             	mov    %eax,(%esp)
 85f771d:	e8 e2 04 00 00       	call   85f7c04 <_ZNK11Redeem_Item11CRedeemItem9_isFPItemERK10Inven_Item>
 85f7722:	84 c0                	test   %al,%al
 85f7724:	74 0a                	je     85f7730 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x40>
 85f7726:	b8 00 00 00 00       	mov    $0x0,%eax
 85f772b:	e9 f9 00 00 00       	jmp    85f7829 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x139>
 85f7730:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f7733:	8b 40 02             	mov    0x2(%eax),%eax
 85f7736:	3d 4c 11 00 00       	cmp    $0x114c,%eax
 85f773b:	74 5a                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f773d:	3d 4c 11 00 00       	cmp    $0x114c,%eax
 85f7742:	77 27                	ja     85f776b <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x7b>
 85f7744:	3d f1 0c 00 00       	cmp    $0xcf1,%eax
 85f7749:	74 4c                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f774b:	3d f1 0c 00 00       	cmp    $0xcf1,%eax
 85f7750:	77 09                	ja     85f775b <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x6b>
 85f7752:	3d dd 0b 00 00       	cmp    $0xbdd,%eax
 85f7757:	74 3e                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7759:	eb 46                	jmp    85f77a1 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xb1>
 85f775b:	3d 57 10 00 00       	cmp    $0x1057,%eax
 85f7760:	74 35                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7762:	3d fe 10 00 00       	cmp    $0x10fe,%eax
 85f7767:	74 2e                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7769:	eb 36                	jmp    85f77a1 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xb1>
 85f776b:	3d 73 19 00 00       	cmp    $0x1973,%eax
 85f7770:	74 25                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7772:	3d 73 19 00 00       	cmp    $0x1973,%eax
 85f7777:	77 10                	ja     85f7789 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x99>
 85f7779:	3d 57 11 00 00       	cmp    $0x1157,%eax
 85f777e:	74 17                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7780:	3d 59 11 00 00       	cmp    $0x1159,%eax
 85f7785:	74 10                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7787:	eb 18                	jmp    85f77a1 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xb1>
 85f7789:	3d e1 1e 00 00       	cmp    $0x1ee1,%eax
 85f778e:	74 07                	je     85f7797 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xa7>
 85f7790:	3d 70 e7 28 00       	cmp    $0x28e770,%eax
 85f7795:	75 0a                	jne    85f77a1 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xb1>
 85f7797:	b8 00 00 00 00       	mov    $0x0,%eax
 85f779c:	e9 88 00 00 00       	jmp    85f7829 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x139>
 85f77a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f77a4:	8b 40 02             	mov    0x2(%eax),%eax
 85f77a7:	89 c3                	mov    %eax,%ebx
 85f77a9:	e8 ed 49 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85f77ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f77b2:	89 04 24             	mov    %eax,(%esp)
 85f77b5:	e8 78 82 d6 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85f77ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f77bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85f77c1:	75 07                	jne    85f77ca <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0xda>
 85f77c3:	b8 00 00 00 00       	mov    $0x0,%eax
 85f77c8:	eb 5f                	jmp    85f7829 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x139>
 85f77ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f77cd:	89 04 24             	mov    %eax,(%esp)
 85f77d0:	e8 3d 90 b5 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 85f77d5:	84 c0                	test   %al,%al
 85f77d7:	74 25                	je     85f77fe <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x10e>
 85f77d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f77dc:	89 04 24             	mov    %eax,(%esp)
 85f77df:	e8 f2 9a af ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85f77e4:	85 c0                	test   %eax,%eax
 85f77e6:	75 16                	jne    85f77fe <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x10e>
 85f77e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f77eb:	89 04 24             	mov    %eax,(%esp)
 85f77ee:	e8 79 d8 af ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85f77f3:	84 c0                	test   %al,%al
 85f77f5:	75 07                	jne    85f77fe <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x10e>
 85f77f7:	b8 01 00 00 00       	mov    $0x1,%eax
 85f77fc:	eb 05                	jmp    85f7803 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x113>
 85f77fe:	b8 00 00 00 00       	mov    $0x0,%eax
 85f7803:	84 c0                	test   %al,%al
 85f7805:	74 07                	je     85f780e <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x11e>
 85f7807:	b8 00 00 00 00       	mov    $0x0,%eax
 85f780c:	eb 1b                	jmp    85f7829 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x139>
 85f780e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f7811:	89 04 24             	mov    %eax,(%esp)
 85f7814:	e8 c7 03 00 00       	call   85f7be0 <_ZNK5CItem15IsBanRedeemItemEv>
 85f7819:	84 c0                	test   %al,%al
 85f781b:	74 07                	je     85f7824 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x134>
 85f781d:	b8 00 00 00 00       	mov    $0x0,%eax
 85f7822:	eb 05                	jmp    85f7829 <_ZN11Redeem_Item11CRedeemItem15isAddableFilterERK10Inven_Item+0x139>
 85f7824:	b8 01 00 00 00       	mov    $0x1,%eax
 85f7829:	83 c4 24             	add    $0x24,%esp
 85f782c:	5b                   	pop    %ebx
 85f782d:	5d                   	pop    %ebp
 85f782e:	c3                   	ret
 85f782f:	90                   	nop

```

```c
// Redeem_Item::CRedeemItem::isAddableFilter @ 0x85f76f0

/* Redeem_Item::CRedeemItem::isAddableFilter(Inven_Item const&) */

undefined4 __thiscall
Redeem_Item::CRedeemItem::isAddableFilter(CRedeemItem *this,Inven_Item *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CDataManager *this_00;
  CItem *this_01;
  int iVar4;
  
  cVar3 = Inven_Item::isEmpty(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  cVar3 = _isFPItem(this,param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 2);
  if (uVar1 != 0x114c) {
    if (uVar1 < 0x114d) {
      if (uVar1 != 0xcf1) {
        if (uVar1 < 0xcf2) {
          if (uVar1 != 0xbdd) {
LAB_085f77a1:
            iVar4 = *(int *)(param_1 + 2);
            this_00 = (CDataManager *)G_CDataManager();
            this_01 = (CItem *)CDataManager::find_item(this_00,iVar4);
            if (this_01 == (CItem *)0x0) {
              return 0;
            }
            cVar3 = Inven_Item::isEquipableItemType(param_1);
            if (((cVar3 == '\0') || (iVar4 = CItem::get_rarity(this_01), iVar4 != 0)) ||
               (cVar3 = Inven_Item::GetUpgrade(param_1), cVar3 != '\0')) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              return 0;
            }
            cVar3 = CItem::IsBanRedeemItem(this_01);
            if (cVar3 != '\0') {
              return 0;
            }
            return 1;
          }
        }
        else if ((uVar1 != 0x1057) && (uVar1 != 0x10fe)) goto LAB_085f77a1;
      }
    }
    else if (uVar1 != 0x1973) {
      if (uVar1 < 0x1974) {
        if ((uVar1 != 0x1157) && (uVar1 != 0x1159)) goto LAB_085f77a1;
      }
      else if ((uVar1 != 0x1ee1) && (uVar1 != 0x28e770)) goto LAB_085f77a1;
    }
  }
  return 0;
}

```

---

## loadData

```asm
// === 085f7830 Redeem_Item::CRedeemItem::loadData  [0x085f7830-0x85f78bb] ===
 85f7830:	55                   	push   %ebp
 85f7831:	89 e5                	mov    %esp,%ebp
 85f7833:	83 ec 28             	sub    $0x28,%esp
 85f7836:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7839:	8b 00                	mov    (%eax),%eax
 85f783b:	83 c0 1c             	add    $0x1c,%eax
 85f783e:	8b 10                	mov    (%eax),%edx
 85f7840:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7843:	89 04 24             	mov    %eax,(%esp)
 85f7846:	ff d2                	call   *%edx
 85f7848:	8b 45 10             	mov    0x10(%ebp),%eax
 85f784b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f784e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f7855:	eb 4e                	jmp    85f78a5 <_ZN11Redeem_Item11CRedeemItem8loadDataEP5CUserPc+0x75>
 85f7857:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f785a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f785d:	c1 e0 02             	shl    $0x2,%eax
 85f7860:	89 c1                	mov    %eax,%ecx
 85f7862:	c1 e1 04             	shl    $0x4,%ecx
 85f7865:	01 c8                	add    %ecx,%eax
 85f7867:	8b 44 10 0a          	mov    0xa(%eax,%edx,1),%eax
 85f786b:	85 c0                	test   %eax,%eax
 85f786d:	75 0d                	jne    85f787c <_ZN11Redeem_Item11CRedeemItem8loadDataEP5CUserPc+0x4c>
 85f786f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7872:	89 04 24             	mov    %eax,(%esp)
 85f7875:	e8 4a 13 ad ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 85f787a:	eb 25                	jmp    85f78a1 <_ZN11Redeem_Item11CRedeemItem8loadDataEP5CUserPc+0x71>
 85f787c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f787f:	c1 e0 02             	shl    $0x2,%eax
 85f7882:	89 c2                	mov    %eax,%edx
 85f7884:	c1 e2 04             	shl    $0x4,%edx
 85f7887:	01 d0                	add    %edx,%eax
 85f7889:	03 45 f0             	add    -0x10(%ebp),%eax
 85f788c:	8d 50 08             	lea    0x8(%eax),%edx
 85f788f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7892:	83 c0 08             	add    $0x8,%eax
 85f7895:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f7899:	89 04 24             	mov    %eax,(%esp)
 85f789c:	e8 05 05 00 00       	call   85f7da6 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EE9push_backERKS1_>
 85f78a1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f78a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f78a8:	8b 40 04             	mov    0x4(%eax),%eax
 85f78ab:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f78ae:	0f 97 c0             	seta   %al
 85f78b1:	84 c0                	test   %al,%al
 85f78b3:	75 a2                	jne    85f7857 <_ZN11Redeem_Item11CRedeemItem8loadDataEP5CUserPc+0x27>
 85f78b5:	b8 01 00 00 00       	mov    $0x1,%eax
 85f78ba:	c9                   	leave
 85f78bb:	c3                   	ret

```

```c
// Redeem_Item::CRedeemItem::loadData @ 0x85f7830

/* Redeem_Item::CRedeemItem::loadData(CUser*, char*) */

undefined4 __thiscall
Redeem_Item::CRedeemItem::loadData(CRedeemItem *this,CUser *param_1,char *param_2)

{
  uint local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  for (local_10 = 0; local_10 < *(uint *)(param_2 + 4); local_10 = local_10 + 1) {
    if (*(int *)(param_2 + local_10 * 0x44 + 10) == 0) {
      charac_expand::CData::alter((CData *)this);
    }
    else {
      std::
      list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
      ::push_back((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
                   *)(this + 8),(Inven_Item_Expand_RedeemInfo *)(param_2 + local_10 * 0x44 + 8));
    }
  }
  return 1;
}

```

---

## ~CRedeemItem

```asm
// === 085f708e Redeem_Item::CRedeemItem::~CRedeemItem  [0x085f708e-0x85f70ef] ===
 85f708e:	55                   	push   %ebp
 85f708f:	89 e5                	mov    %esp,%ebp
 85f7091:	56                   	push   %esi
 85f7092:	53                   	push   %ebx
 85f7093:	83 ec 10             	sub    $0x10,%esp
 85f7096:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7099:	c7 00 68 23 cd 08    	movl   $0x8cd2368,(%eax)
 85f709f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f70a2:	83 c0 08             	add    $0x8,%eax
 85f70a5:	89 04 24             	mov    %eax,(%esp)
 85f70a8:	e8 43 0b 00 00       	call   85f7bf0 <_ZNSt4listIN11Redeem_Item28Inven_Item_Expand_RedeemInfoESaIS1_EED1Ev>
 85f70ad:	eb 1b                	jmp    85f70ca <_ZN11Redeem_Item11CRedeemItemD1Ev+0x3c>
 85f70af:	89 d3                	mov    %edx,%ebx
 85f70b1:	89 c6                	mov    %eax,%esi
 85f70b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85f70b6:	89 04 24             	mov    %eax,(%esp)
 85f70b9:	e8 24 1b ad ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85f70be:	89 f0                	mov    %esi,%eax
 85f70c0:	89 da                	mov    %ebx,%edx
 85f70c2:	89 04 24             	mov    %eax,(%esp)
 85f70c5:	e8 86 c6 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f70ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85f70cd:	89 04 24             	mov    %eax,(%esp)
 85f70d0:	e8 0d 1b ad ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 85f70d5:	b8 00 00 00 00       	mov    $0x0,%eax
 85f70da:	84 c0                	test   %al,%al
 85f70dc:	74 0b                	je     85f70e9 <_ZN11Redeem_Item11CRedeemItemD1Ev+0x5b>
 85f70de:	8b 45 08             	mov    0x8(%ebp),%eax
 85f70e1:	89 04 24             	mov    %eax,(%esp)
 85f70e4:	e8 07 d4 12 00       	call   87244f0 <_ZdlPv>
 85f70e9:	83 c4 10             	add    $0x10,%esp
 85f70ec:	5b                   	pop    %ebx
 85f70ed:	5e                   	pop    %esi
 85f70ee:	5d                   	pop    %ebp
 85f70ef:	c3                   	ret

```

```c
// Redeem_Item::CRedeemItem::~CRedeemItem @ 0x85f708e

/* WARNING: Removing unreachable block (ram,0x085f70de) */
/* Redeem_Item::CRedeemItem::~CRedeemItem() */

void __thiscall Redeem_Item::CRedeemItem::~CRedeemItem(CRedeemItem *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cd2368;
                    /* try { // try from 085f70a8 to 085f70ac has its CatchHandler @ 085f70af */
  std::
  list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
  ::~list((list<Redeem_Item::Inven_Item_Expand_RedeemInfo,std::allocator<Redeem_Item::Inven_Item_Expand_RedeemInfo>>
           *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CRedeemItem_085f70f0

```asm
// === 085f70f0 Redeem_Item::CRedeemItem::~CRedeemItem  [0x085f70f0-0x85f710d] ===
 85f70f0:	55                   	push   %ebp
 85f70f1:	89 e5                	mov    %esp,%ebp
 85f70f3:	83 ec 18             	sub    $0x18,%esp
 85f70f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85f70f9:	89 04 24             	mov    %eax,(%esp)
 85f70fc:	e8 8d ff ff ff       	call   85f708e <_ZN11Redeem_Item11CRedeemItemD1Ev>
 85f7101:	8b 45 08             	mov    0x8(%ebp),%eax
 85f7104:	89 04 24             	mov    %eax,(%esp)
 85f7107:	e8 e4 d3 12 00       	call   87244f0 <_ZdlPv>
 85f710c:	c9                   	leave
 85f710d:	c3                   	ret

```

```c
// Redeem_Item::CRedeemItem::~CRedeemItem @ 0x85f70f0

/* Redeem_Item::CRedeemItem::~CRedeemItem() */

void __thiscall Redeem_Item::CRedeemItem::~CRedeemItem(CRedeemItem *this)

{
  ~CRedeemItem(this);
  operator_delete(this);
  return;
}

```

