# secretshop__CSecretShop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## BuyItem

```asm
// === 085fb16e secretshop::CSecretShop::BuyItem  [0x085fb16e-0x85fb27b] ===
 85fb16e:	55                   	push   %ebp
 85fb16f:	89 e5                	mov    %esp,%ebp
 85fb171:	53                   	push   %ebx
 85fb172:	83 ec 34             	sub    $0x34,%esp
 85fb175:	8b 45 14             	mov    0x14(%ebp),%eax
 85fb178:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb17c:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb17f:	89 04 24             	mov    %eax,(%esp)
 85fb182:	e8 03 0d 00 00       	call   85fbe8a <_ZN10secretshop16SECRET_SHOP_INFO11GetSaleInfoEi>
 85fb187:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85fb18a:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85fb18e:	0f 84 db 00 00 00    	je     85fb26f <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x101>
 85fb194:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85fb197:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 85fb19b:	0f be c0             	movsbl %al,%eax
 85fb19e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb1a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85fb1a5:	89 04 24             	mov    %eax,(%esp)
 85fb1a8:	e8 cf 00 00 00       	call   85fb27c <_ZN10secretshop11CSecretShop7GetRuleE8eBuyRule>
 85fb1ad:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85fb1b0:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85fb1b4:	0f 84 b8 00 00 00    	je     85fb272 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x104>
 85fb1ba:	e8 dc 0f ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85fb1bf:	8b 55 14             	mov    0x14(%ebp),%edx
 85fb1c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb1c6:	89 04 24             	mov    %eax,(%esp)
 85fb1c9:	e8 64 48 d6 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85fb1ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fb1d1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85fb1d5:	0f 84 9a 00 00 00    	je     85fb275 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x107>
 85fb1db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb1de:	89 04 24             	mov    %eax,(%esp)
 85fb1e1:	e8 14 61 af ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85fb1e6:	83 f0 01             	xor    $0x1,%eax
 85fb1e9:	84 c0                	test   %al,%al
 85fb1eb:	74 07                	je     85fb1f4 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x86>
 85fb1ed:	c7 45 18 01 00 00 00 	movl   $0x1,0x18(%ebp)
 85fb1f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fb1f7:	8b 00                	mov    (%eax),%eax
 85fb1f9:	8b 10                	mov    (%eax),%edx
 85fb1fb:	8b 45 18             	mov    0x18(%ebp),%eax
 85fb1fe:	89 44 24 10          	mov    %eax,0x10(%esp)
 85fb202:	8b 45 14             	mov    0x14(%ebp),%eax
 85fb205:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fb209:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb20c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fb210:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb213:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb217:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fb21a:	89 04 24             	mov    %eax,(%esp)
 85fb21d:	ff d2                	call   *%edx
 85fb21f:	88 45 f7             	mov    %al,-0x9(%ebp)
 85fb222:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 85fb226:	74 4e                	je     85fb276 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x108>
 85fb228:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb22b:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 85fb22f:	83 f0 01             	xor    $0x1,%eax
 85fb232:	84 c0                	test   %al,%al
 85fb234:	74 40                	je     85fb276 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x108>
 85fb236:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb239:	89 04 24             	mov    %eax,(%esp)
 85fb23c:	e8 4f 19 08 00       	call   867cb90 <_ZN5CUser23getDungeonIdxAfterClearEv>
 85fb241:	89 c3                	mov    %eax,%ebx
 85fb243:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb246:	89 04 24             	mov    %eax,(%esp)
 85fb249:	e8 58 d3 08 00       	call   86885a6 <_ZN5CUser17GetSecretShopDataEv>
 85fb24e:	8b 00                	mov    (%eax),%eax
 85fb250:	8b 55 08             	mov    0x8(%ebp),%edx
 85fb253:	83 c2 1c             	add    $0x1c,%edx
 85fb256:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85fb25a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb25e:	89 14 24             	mov    %edx,(%esp)
 85fb261:	e8 6e 1e 00 00       	call   85fd0d4 <_ZN10secretshop20CSecretShopStatistic9RecordBuyEii>
 85fb266:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb269:	c6 40 18 01          	movb   $0x1,0x18(%eax)
 85fb26d:	eb 07                	jmp    85fb276 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x108>
 85fb26f:	90                   	nop
 85fb270:	eb 04                	jmp    85fb276 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x108>
 85fb272:	90                   	nop
 85fb273:	eb 01                	jmp    85fb276 <_ZN10secretshop11CSecretShop7BuyItemEP5CUserRNS_16SECRET_SHOP_INFOEii+0x108>
 85fb275:	90                   	nop
 85fb276:	83 c4 34             	add    $0x34,%esp
 85fb279:	5b                   	pop    %ebx
 85fb27a:	5d                   	pop    %ebp
 85fb27b:	c3                   	ret

```

```c
// secretshop::CSecretShop::BuyItem @ 0x85fb16e

/* secretshop::CSecretShop::BuyItem(CUser*, secretshop::SECRET_SHOP_INFO&, int, int) */

void __thiscall
secretshop::CSecretShop::BuyItem
          (CSecretShop *this,CUser *param_1,SECRET_SHOP_INFO *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  CDataManager *this_00;
  CItem *this_01;
  int *piVar4;
  
  iVar2 = SECRET_SHOP_INFO::GetSaleInfo((int)param_2);
  if ((iVar2 != 0) &&
     (puVar3 = (undefined4 *)GetRule(this,(int)*(char *)(iVar2 + 4)), puVar3 != (undefined4 *)0x0))
  {
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,param_3);
    if (this_01 != (CItem *)0x0) {
      cVar1 = CItem::is_stackable(this_01);
      if (cVar1 != '\x01') {
        param_4 = 1;
      }
      cVar1 = (**(code **)*puVar3)(puVar3,param_1,param_2,param_3,param_4);
      if ((cVar1 != '\0') && (param_2[0x18] != (SECRET_SHOP_INFO)0x1)) {
        iVar2 = CUser::getDungeonIdxAfterClear(param_1);
        piVar4 = (int *)CUser::GetSecretShopData(param_1);
        CSecretShopStatistic::RecordBuy((CSecretShopStatistic *)(this + 0x1c),*piVar4,iVar2);
        param_2[0x18] = (SECRET_SHOP_INFO)0x1;
      }
    }
  }
  return;
}

```

---

## CSecretShop

```asm
// === 085fa930 secretshop::CSecretShop::CSecretShop  [0x085fa930-0x85faac3] ===
 85fa930:	55                   	push   %ebp
 85fa931:	89 e5                	mov    %esp,%ebp
 85fa933:	57                   	push   %edi
 85fa934:	56                   	push   %esi
 85fa935:	53                   	push   %ebx
 85fa936:	83 ec 6c             	sub    $0x6c,%esp
 85fa939:	8b 45 08             	mov    0x8(%ebp),%eax
 85fa93c:	89 04 24             	mov    %eax,(%esp)
 85fa93f:	e8 9a 17 00 00       	call   85fc0de <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEEC1Ev>
 85fa944:	8b 45 08             	mov    0x8(%ebp),%eax
 85fa947:	83 c0 1c             	add    $0x1c,%eax
 85fa94a:	89 04 24             	mov    %eax,(%esp)
 85fa94d:	e8 66 15 00 00       	call   85fbeb8 <_ZN10secretshop20CSecretShopStatisticC1Ev>
 85fa952:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 85fa959:	e8 f2 9a 12 00       	call   8724450 <_Znwj>
 85fa95e:	89 c3                	mov    %eax,%ebx
 85fa960:	8b 45 08             	mov    0x8(%ebp),%eax
 85fa963:	8d 50 1c             	lea    0x1c(%eax),%edx
 85fa966:	89 d8                	mov    %ebx,%eax
 85fa968:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fa96c:	89 04 24             	mov    %eax,(%esp)
 85fa96f:	e8 64 16 00 00       	call   85fbfd8 <_ZN10secretshop14CBuyItembyGoldC1ERNS_20CSecretShopStatisticE>
 85fa974:	89 d8                	mov    %ebx,%eax
 85fa976:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85fa979:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 85fa980:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85fa983:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fa987:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85fa98a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fa98e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85fa991:	89 04 24             	mov    %eax,(%esp)
 85fa994:	e8 bf 17 00 00       	call   85fc158 <_ZNSt4pairI8eBuyRulePN10secretshop8IBuyRuleEEC1IS0_PNS1_14CBuyItembyGoldEEEOT_OT0_>
 85fa999:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85fa99c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fa9a0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85fa9a3:	89 04 24             	mov    %eax,(%esp)
 85fa9a6:	e8 dd 17 00 00       	call   85fc188 <_ZNSt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEC1IS0_S4_EEOS_IT_T0_E>
 85fa9ab:	8b 55 08             	mov    0x8(%ebp),%edx
 85fa9ae:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85fa9b1:	8d 4d ac             	lea    -0x54(%ebp),%ecx
 85fa9b4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fa9b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fa9bc:	89 04 24             	mov    %eax,(%esp)
 85fa9bf:	e8 f4 17 00 00       	call   85fc1b8 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_>
 85fa9c4:	83 ec 04             	sub    $0x4,%esp
 85fa9c7:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 85fa9ce:	e8 7d 9a 12 00       	call   8724450 <_Znwj>
 85fa9d3:	89 c3                	mov    %eax,%ebx
 85fa9d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85fa9d8:	8d 50 1c             	lea    0x1c(%eax),%edx
 85fa9db:	89 d8                	mov    %ebx,%eax
 85fa9dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fa9e1:	89 04 24             	mov    %eax,(%esp)
 85fa9e4:	e8 13 16 00 00       	call   85fbffc <_ZN10secretshop16CBuyItembyRecipeC1ERNS_20CSecretShopStatisticE>
 85fa9e9:	89 d8                	mov    %ebx,%eax
 85fa9eb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85fa9ee:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 85fa9f5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fa9f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fa9fc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85fa9ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 85faa03:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85faa06:	89 04 24             	mov    %eax,(%esp)
 85faa09:	e8 d6 17 00 00       	call   85fc1e4 <_ZNSt4pairI8eBuyRulePN10secretshop8IBuyRuleEEC1IS0_PNS1_16CBuyItembyRecipeEEEOT_OT0_>
 85faa0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85faa11:	89 44 24 04          	mov    %eax,0x4(%esp)
 85faa15:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85faa18:	89 04 24             	mov    %eax,(%esp)
 85faa1b:	e8 68 17 00 00       	call   85fc188 <_ZNSt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEC1IS0_S4_EEOS_IT_T0_E>
 85faa20:	8b 55 08             	mov    0x8(%ebp),%edx
 85faa23:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85faa26:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 85faa29:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85faa2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85faa31:	89 04 24             	mov    %eax,(%esp)
 85faa34:	e8 7f 17 00 00       	call   85fc1b8 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE6insertERKS8_>
 85faa39:	83 ec 04             	sub    $0x4,%esp
 85faa3c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 85faa43:	e8 08 2d a8 ff       	call   807d750 <time@plt>
 85faa48:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85faa4b:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 85faa4e:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 85faa55:	e8 f6 99 12 00       	call   8724450 <_Znwj>
 85faa5a:	89 c3                	mov    %eax,%ebx
 85faa5c:	89 d8                	mov    %ebx,%eax
 85faa5e:	89 74 24 04          	mov    %esi,0x4(%esp)
 85faa62:	89 04 24             	mov    %eax,(%esp)
 85faa65:	e8 c0 0f ad ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 85faa6a:	eb 12                	jmp    85faa7e <_ZN10secretshop11CSecretShopC1Ev+0x14e>
 85faa6c:	89 d6                	mov    %edx,%esi
 85faa6e:	89 c7                	mov    %eax,%edi
 85faa70:	89 1c 24             	mov    %ebx,(%esp)
 85faa73:	e8 78 9a 12 00       	call   87244f0 <_ZdlPv>
 85faa78:	89 f8                	mov    %edi,%eax
 85faa7a:	89 f2                	mov    %esi,%edx
 85faa7c:	eb 13                	jmp    85faa91 <_ZN10secretshop11CSecretShopC1Ev+0x161>
 85faa7e:	89 da                	mov    %ebx,%edx
 85faa80:	8b 45 08             	mov    0x8(%ebp),%eax
 85faa83:	89 50 18             	mov    %edx,0x18(%eax)
 85faa86:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85faa89:	83 c4 00             	add    $0x0,%esp
 85faa8c:	5b                   	pop    %ebx
 85faa8d:	5e                   	pop    %esi
 85faa8e:	5f                   	pop    %edi
 85faa8f:	5d                   	pop    %ebp
 85faa90:	c3                   	ret
 85faa91:	89 d3                	mov    %edx,%ebx
 85faa93:	89 c6                	mov    %eax,%esi
 85faa95:	8b 45 08             	mov    0x8(%ebp),%eax
 85faa98:	83 c0 1c             	add    $0x1c,%eax
 85faa9b:	89 04 24             	mov    %eax,(%esp)
 85faa9e:	e8 89 14 00 00       	call   85fbf2c <_ZN10secretshop20CSecretShopStatisticD1Ev>
 85faaa3:	89 f0                	mov    %esi,%eax
 85faaa5:	89 da                	mov    %ebx,%edx
 85faaa7:	eb 00                	jmp    85faaa9 <_ZN10secretshop11CSecretShopC1Ev+0x179>
 85faaa9:	89 d3                	mov    %edx,%ebx
 85faaab:	89 c6                	mov    %eax,%esi
 85faaad:	8b 45 08             	mov    0x8(%ebp),%eax
 85faab0:	89 04 24             	mov    %eax,(%esp)
 85faab3:	e8 68 15 00 00       	call   85fc020 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev>
 85faab8:	89 f0                	mov    %esi,%eax
 85faaba:	89 da                	mov    %ebx,%edx
 85faabc:	89 04 24             	mov    %eax,(%esp)
 85faabf:	e8 8c 8c 4e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// secretshop::CSecretShop::CSecretShop @ 0x85fa930

/* secretshop::CSecretShop::CSecretShop() */

void __thiscall secretshop::CSecretShop::CSecretShop(CSecretShop *this)

{
  CBuyItembyGold *this_00;
  CBuyItembyRecipe *this_01;
  CMTRand *this_02;
  pair local_60 [8];
  pair<eBuyRule_const,secretshop::IBuyRule*> local_58 [8];
  pair<eBuyRule,secretshop::IBuyRule*> local_50 [8];
  CBuyItembyGold *local_48;
  undefined4 local_44;
  pair local_40 [8];
  pair<eBuyRule_const,secretshop::IBuyRule*> local_38 [8];
  pair<eBuyRule,secretshop::IBuyRule*> local_30 [8];
  CBuyItembyRecipe *local_28;
  undefined4 local_24;
  ulong local_20 [4];
  
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::map((map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
         *)this);
                    /* try { // try from 085fa94d to 085fa951 has its CatchHandler @ 085faaa9 */
  CSecretShopStatistic::CSecretShopStatistic((CSecretShopStatistic *)(this + 0x1c));
                    /* try { // try from 085fa959 to 085faa59 has its CatchHandler @ 085faa91 */
  this_00 = operator_new(8);
  CBuyItembyGold::CBuyItembyGold(this_00,(CSecretShopStatistic *)(this + 0x1c));
  local_44 = 0;
  local_48 = this_00;
  std::pair<eBuyRule,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::CBuyItembyGold*>
            (local_50,(eBuyRule *)&local_44,&local_48);
  std::pair<eBuyRule_const,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::IBuyRule*>
            (local_58,local_50);
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::insert(local_60);
  this_01 = operator_new(8);
  CBuyItembyRecipe::CBuyItembyRecipe(this_01,(CSecretShopStatistic *)(this + 0x1c));
  local_24 = 1;
  local_28 = this_01;
  std::pair<eBuyRule,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::CBuyItembyRecipe*>
            (local_30,(eBuyRule *)&local_24,&local_28);
  std::pair<eBuyRule_const,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::IBuyRule*>
            (local_38,local_30);
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::insert(local_40);
  local_20[0] = time((time_t *)0x0);
  this_02 = operator_new(0x9c8);
                    /* try { // try from 085faa65 to 085faa69 has its CatchHandler @ 085faa6c */
  CMTRand::CMTRand(this_02,local_20);
  *(CMTRand **)(this + 0x18) = this_02;
  return;
}

```

---

## CheckLottery

```asm
// === 085fad20 secretshop::CSecretShop::CheckLottery  [0x085fad20-0x85fb16d] ===
 85fad20:	55                   	push   %ebp
 85fad21:	89 e5                	mov    %esp,%ebp
 85fad23:	56                   	push   %esi
 85fad24:	53                   	push   %ebx
 85fad25:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 85fad2b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85fad2e:	89 04 24             	mov    %eax,(%esp)
 85fad31:	e8 cc 02 cb ff       	call   82ab002 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEC1Ev>
 85fad36:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85fad39:	89 04 24             	mov    %eax,(%esp)
 85fad3c:	e8 23 bf ac ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 85fad41:	c7 44 24 04 00 3e cd 	movl   $0x8cd3e00,0x4(%esp)
 85fad48:	08 
 85fad49:	c7 04 24 03 3e cd 08 	movl   $0x8cd3e03,(%esp)
 85fad50:	e8 1b 3a a8 ff       	call   807e770 <fopen@plt>
 85fad55:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85fad58:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85fad5c:	75 0a                	jne    85fad68 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x48>
 85fad5e:	bb 00 00 00 00       	mov    $0x0,%ebx
 85fad63:	e9 c9 03 00 00       	jmp    85fb131 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x411>
 85fad68:	e8 2e 14 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85fad6d:	8b 00                	mov    (%eax),%eax
 85fad6f:	89 c2                	mov    %eax,%edx
 85fad71:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85fad74:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fad78:	89 04 24             	mov    %eax,(%esp)
 85fad7b:	e8 ca f9 d8 ff       	call   838a74a <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 85fad80:	83 ec 04             	sub    $0x4,%esp
 85fad83:	e9 4d 03 00 00       	jmp    85fb0d5 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x3b5>
 85fad88:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85fad8b:	89 04 24             	mov    %eax,(%esp)
 85fad8e:	e8 4b bf ac ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 85fad93:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85fad9a:	e9 7e 01 00 00       	jmp    85faf1d <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x1fd>
 85fad9f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85fada2:	89 04 24             	mov    %eax,(%esp)
 85fada5:	e8 00 fa d8 ff       	call   838a7aa <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 85fadaa:	8b 40 04             	mov    0x4(%eax),%eax
 85fadad:	89 04 24             	mov    %eax,(%esp)
 85fadb0:	e8 5b ea af ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 85fadb5:	89 c3                	mov    %eax,%ebx
 85fadb7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85fadba:	89 04 24             	mov    %eax,(%esp)
 85fadbd:	e8 e8 f9 d8 ff       	call   838a7aa <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 85fadc2:	8b 40 04             	mov    0x4(%eax),%eax
 85fadc5:	89 04 24             	mov    %eax,(%esp)
 85fadc8:	e8 23 2f b0 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 85fadcd:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85fadd1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fadd5:	c7 44 24 08 ea 03 00 	movl   $0x3ea,0x8(%esp)
 85faddc:	00 
 85faddd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85fade0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fade4:	8b 45 08             	mov    0x8(%ebp),%eax
 85fade7:	89 04 24             	mov    %eax,(%esp)
 85fadea:	e8 79 fe ff ff       	call   85fac68 <_ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii>
 85fadef:	8d 45 80             	lea    -0x80(%ebp),%eax
 85fadf2:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85fadf5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fadf9:	89 04 24             	mov    %eax,(%esp)
 85fadfc:	e8 b3 14 00 00       	call   85fc2b4 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE5beginEv>
 85fae01:	83 ec 04             	sub    $0x4,%esp
 85fae04:	e9 d6 00 00 00       	jmp    85faedf <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x1bf>
 85fae09:	8d 45 80             	lea    -0x80(%ebp),%eax
 85fae0c:	89 04 24             	mov    %eax,(%esp)
 85fae0f:	e8 16 15 00 00       	call   85fc32a <_ZNK9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEdeEv>
 85fae14:	89 c2                	mov    %eax,%edx
 85fae16:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85fae1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fae20:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85fae23:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fae27:	89 04 24             	mov    %eax,(%esp)
 85fae2a:	e8 bf 24 ad ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 85fae2f:	83 ec 04             	sub    $0x4,%esp
 85fae32:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85fae35:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85fae38:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fae3c:	89 04 24             	mov    %eax,(%esp)
 85fae3f:	e8 d6 24 ad ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 85fae44:	83 ec 04             	sub    $0x4,%esp
 85fae47:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85fae4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fae4e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85fae54:	89 04 24             	mov    %eax,(%esp)
 85fae57:	e8 6c f5 ad ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 85fae5c:	84 c0                	test   %al,%al
 85fae5e:	74 19                	je     85fae79 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x159>
 85fae60:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85fae66:	89 04 24             	mov    %eax,(%esp)
 85fae69:	e8 d2 24 ad ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85fae6e:	8b 50 04             	mov    0x4(%eax),%edx
 85fae71:	83 c2 01             	add    $0x1,%edx
 85fae74:	89 50 04             	mov    %edx,0x4(%eax)
 85fae77:	eb 5b                	jmp    85faed4 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x1b4>
 85fae79:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 85fae80:	8d 45 80             	lea    -0x80(%ebp),%eax
 85fae83:	89 04 24             	mov    %eax,(%esp)
 85fae86:	e8 9f 14 00 00       	call   85fc32a <_ZNK9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEdeEv>
 85fae8b:	89 c2                	mov    %eax,%edx
 85fae8d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85fae90:	8d 4d e0             	lea    -0x20(%ebp),%ecx
 85fae93:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fae97:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fae9b:	89 04 24             	mov    %eax,(%esp)
 85fae9e:	e8 9e de bb ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 85faea3:	83 ec 04             	sub    $0x4,%esp
 85faea6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85faea9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85faead:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85faeb0:	89 04 24             	mov    %eax,(%esp)
 85faeb3:	e8 68 be ac ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 85faeb8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85faebb:	8d 55 d0             	lea    -0x30(%ebp),%edx
 85faebe:	89 54 24 08          	mov    %edx,0x8(%esp)
 85faec2:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85faec5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85faec9:	89 04 24             	mov    %eax,(%esp)
 85faecc:	e8 7f be ac ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 85faed1:	83 ec 04             	sub    $0x4,%esp
 85faed4:	8d 45 80             	lea    -0x80(%ebp),%eax
 85faed7:	89 04 24             	mov    %eax,(%esp)
 85faeda:	e8 55 14 00 00       	call   85fc334 <_ZN9__gnu_cxx17__normal_iteratorIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEppEv>
 85faedf:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85faee2:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85faee5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85faee9:	89 04 24             	mov    %eax,(%esp)
 85faeec:	e8 e7 13 00 00       	call   85fc2d8 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE3endEv>
 85faef1:	83 ec 04             	sub    $0x4,%esp
 85faef4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85faef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85faefb:	8d 45 80             	lea    -0x80(%ebp),%eax
 85faefe:	89 04 24             	mov    %eax,(%esp)
 85faf01:	e8 f8 13 00 00       	call   85fc2fe <_ZN9__gnu_cxxneIPN10secretshop9SALE_INFOESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85faf06:	84 c0                	test   %al,%al
 85faf08:	0f 85 fb fe ff ff    	jne    85fae09 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0xe9>
 85faf0e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85faf11:	89 04 24             	mov    %eax,(%esp)
 85faf14:	e8 1b 11 00 00       	call   85fc034 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EE5clearEv>
 85faf19:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85faf1d:	81 7d f4 0f 27 00 00 	cmpl   $0x270f,-0xc(%ebp)
 85faf24:	0f 9e c0             	setle  %al
 85faf27:	84 c0                	test   %al,%al
 85faf29:	0f 85 70 fe ff ff    	jne    85fad9f <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x7f>
 85faf2f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85faf32:	89 04 24             	mov    %eax,(%esp)
 85faf35:	e8 70 f8 d8 ff       	call   838a7aa <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 85faf3a:	8b 40 04             	mov    0x4(%eax),%eax
 85faf3d:	89 04 24             	mov    %eax,(%esp)
 85faf40:	e8 cb e8 af ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 85faf45:	89 c6                	mov    %eax,%esi
 85faf47:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85faf4a:	89 04 24             	mov    %eax,(%esp)
 85faf4d:	e8 58 f8 d8 ff       	call   838a7aa <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 85faf52:	8b 40 04             	mov    0x4(%eax),%eax
 85faf55:	89 04 24             	mov    %eax,(%esp)
 85faf58:	e8 93 2d b0 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 85faf5d:	89 c3                	mov    %eax,%ebx
 85faf5f:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85faf62:	89 04 24             	mov    %eax,(%esp)
 85faf65:	e8 40 f8 d8 ff       	call   838a7aa <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 85faf6a:	8b 40 04             	mov    0x4(%eax),%eax
 85faf6d:	89 04 24             	mov    %eax,(%esp)
 85faf70:	e8 31 a6 b4 ff       	call   81455a6 <_ZNK8CDungeon14GetDungeonNameEv>
 85faf75:	89 74 24 10          	mov    %esi,0x10(%esp)
 85faf79:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85faf7d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85faf81:	c7 44 24 04 1a 3e cd 	movl   $0x8cd3e1a,0x4(%esp)
 85faf88:	08 
 85faf89:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85faf8c:	89 04 24             	mov    %eax,(%esp)
 85faf8f:	e8 fc 2a a8 ff       	call   807da90 <fprintf@plt>
 85faf94:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85faf9b:	8d 45 88             	lea    -0x78(%ebp),%eax
 85faf9e:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85fafa1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fafa5:	89 04 24             	mov    %eax,(%esp)
 85fafa8:	e8 f3 6f b5 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 85fafad:	83 ec 04             	sub    $0x4,%esp
 85fafb0:	eb 1c                	jmp    85fafce <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x2ae>
 85fafb2:	8d 45 88             	lea    -0x78(%ebp),%eax
 85fafb5:	89 04 24             	mov    %eax,(%esp)
 85fafb8:	e8 83 23 ad ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85fafbd:	8b 40 04             	mov    0x4(%eax),%eax
 85fafc0:	01 45 f0             	add    %eax,-0x10(%ebp)
 85fafc3:	8d 45 88             	lea    -0x78(%ebp),%eax
 85fafc6:	89 04 24             	mov    %eax,(%esp)
 85fafc9:	e8 78 f7 ad ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 85fafce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fafd1:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85fafd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fafd8:	89 04 24             	mov    %eax,(%esp)
 85fafdb:	e8 3a 23 ad ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 85fafe0:	83 ec 04             	sub    $0x4,%esp
 85fafe3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fafe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fafea:	8d 45 88             	lea    -0x78(%ebp),%eax
 85fafed:	89 04 24             	mov    %eax,(%esp)
 85faff0:	e8 d3 f3 ad ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 85faff5:	84 c0                	test   %al,%al
 85faff7:	75 b9                	jne    85fafb2 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x292>
 85faff9:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85faffc:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85fafff:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb003:	89 04 24             	mov    %eax,(%esp)
 85fb006:	e8 95 6f b5 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 85fb00b:	83 ec 04             	sub    $0x4,%esp
 85fb00e:	eb 78                	jmp    85fb088 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x368>
 85fb010:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85fb013:	89 04 24             	mov    %eax,(%esp)
 85fb016:	e8 25 23 ad ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85fb01b:	8b 40 04             	mov    0x4(%eax),%eax
 85fb01e:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 85fb024:	db 85 74 ff ff ff    	fildl  -0x8c(%ebp)
 85fb02a:	db 45 f0             	fildl  -0x10(%ebp)
 85fb02d:	de f9                	fdivrp %st,%st(1)
 85fb02f:	dd 05 50 4a cd 08    	fldl   0x8cd4a50
 85fb035:	de c9                	fmulp  %st,%st(1)
 85fb037:	dd 9d 68 ff ff ff    	fstpl  -0x98(%ebp)
 85fb03d:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85fb040:	89 04 24             	mov    %eax,(%esp)
 85fb043:	e8 f8 22 ad ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85fb048:	8b 58 04             	mov    0x4(%eax),%ebx
 85fb04b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85fb04e:	89 04 24             	mov    %eax,(%esp)
 85fb051:	e8 ea 22 ad ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 85fb056:	8b 00                	mov    (%eax),%eax
 85fb058:	dd 85 68 ff ff ff    	fldl   -0x98(%ebp)
 85fb05e:	dd 5c 24 10          	fstpl  0x10(%esp)
 85fb062:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85fb066:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fb06a:	c7 44 24 04 38 3e cd 	movl   $0x8cd3e38,0x4(%esp)
 85fb071:	08 
 85fb072:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fb075:	89 04 24             	mov    %eax,(%esp)
 85fb078:	e8 13 2a a8 ff       	call   807da90 <fprintf@plt>
 85fb07d:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85fb080:	89 04 24             	mov    %eax,(%esp)
 85fb083:	e8 be f6 ad ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 85fb088:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fb08b:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85fb08e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb092:	89 04 24             	mov    %eax,(%esp)
 85fb095:	e8 80 22 ad ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 85fb09a:	83 ec 04             	sub    $0x4,%esp
 85fb09d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fb0a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb0a4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85fb0a7:	89 04 24             	mov    %eax,(%esp)
 85fb0aa:	e8 19 f3 ad ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 85fb0af:	84 c0                	test   %al,%al
 85fb0b1:	0f 85 59 ff ff ff    	jne    85fb010 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x2f0>
 85fb0b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fb0ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb0be:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 85fb0c5:	e8 f6 33 a8 ff       	call   807e4c0 <fputc@plt>
 85fb0ca:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85fb0cd:	89 04 24             	mov    %eax,(%esp)
 85fb0d0:	e8 ff ba da ff       	call   83a6bd4 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 85fb0d5:	e8 c1 10 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85fb0da:	8b 00                	mov    (%eax),%eax
 85fb0dc:	89 c2                	mov    %eax,%edx
 85fb0de:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85fb0e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb0e5:	89 04 24             	mov    %eax,(%esp)
 85fb0e8:	e8 83 f6 d8 ff       	call   838a770 <_ZN9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 85fb0ed:	83 ec 04             	sub    $0x4,%esp
 85fb0f0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85fb0f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb0f7:	8d 45 8c             	lea    -0x74(%ebp),%eax
 85fb0fa:	89 04 24             	mov    %eax,(%esp)
 85fb0fd:	e8 94 f6 d8 ff       	call   838a796 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 85fb102:	84 c0                	test   %al,%al
 85fb104:	0f 85 7e fc ff ff    	jne    85fad88 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x68>
 85fb10a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fb10d:	89 04 24             	mov    %eax,(%esp)
 85fb110:	e8 8b 2d a8 ff       	call   807dea0 <fclose@plt>
 85fb115:	bb 01 00 00 00       	mov    $0x1,%ebx
 85fb11a:	eb 15                	jmp    85fb131 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x411>
 85fb11c:	89 d3                	mov    %edx,%ebx
 85fb11e:	89 c6                	mov    %eax,%esi
 85fb120:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85fb123:	89 04 24             	mov    %eax,(%esp)
 85fb126:	e8 9b b9 ac ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 85fb12b:	89 f0                	mov    %esi,%eax
 85fb12d:	89 da                	mov    %ebx,%edx
 85fb12f:	eb 22                	jmp    85fb153 <_ZN10secretshop11CSecretShop12CheckLotteryEv+0x433>
 85fb131:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85fb134:	89 04 24             	mov    %eax,(%esp)
 85fb137:	e8 8a b9 ac ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 85fb13c:	85 db                	test   %ebx,%ebx
 85fb13e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85fb141:	89 04 24             	mov    %eax,(%esp)
 85fb144:	e8 cd fe ca ff       	call   82ab016 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EED1Ev>
 85fb149:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85fb14c:	83 c4 00             	add    $0x0,%esp
 85fb14f:	5b                   	pop    %ebx
 85fb150:	5e                   	pop    %esi
 85fb151:	5d                   	pop    %ebp
 85fb152:	c3                   	ret
 85fb153:	89 d3                	mov    %edx,%ebx
 85fb155:	89 c6                	mov    %eax,%esi
 85fb157:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85fb15a:	89 04 24             	mov    %eax,(%esp)
 85fb15d:	e8 b4 fe ca ff       	call   82ab016 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EED1Ev>
 85fb162:	89 f0                	mov    %esi,%eax
 85fb164:	89 da                	mov    %ebx,%edx
 85fb166:	89 04 24             	mov    %eax,(%esp)
 85fb169:	e8 e2 85 4e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// secretshop::CSecretShop::CheckLottery @ 0x85fad20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* secretshop::CSecretShop::CheckLottery() */

void __thiscall secretshop::CSecretShop::CheckLottery(CSecretShop *this)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  _Rb_tree_iterator<std::pair<int_const,int>> local_88 [4];
  __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
  local_84 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_80 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_7c [4];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_78 [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_70 [24];
  vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> local_58 [12];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_4c [8];
  __normal_iterator local_44 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_40 [4];
  pair local_3c [8];
  pair<int_const,int> local_34 [8];
  int local_2c [2];
  undefined4 local_24;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  FILE *local_18;
  int local_14;
  int local_10;
  
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::vector(local_58);
                    /* try { // try from 085fad3c to 085fad40 has its CatchHandler @ 085fb153 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_70);
                    /* try { // try from 085fad50 to 085fb114 has its CatchHandler @ 085fb11c */
  local_18 = fopen("secretshop_lottery.txt","wt");
  if (local_18 != (FILE *)0x0) {
    G_CDataManager();
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
              (local_78);
    while( true ) {
      G_CDataManager();
      __gnu_cxx::
      hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
                (local_4c);
      cVar3 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator!=((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78,(_Hashtable_iterator *)local_4c);
      if (cVar3 == '\0') break;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_70);
      for (local_10 = 0; local_10 < 10000; local_10 = local_10 + 1) {
        iVar6 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                              *)local_78);
        iVar6 = CDungeon::get_standard_level(*(CDungeon **)(iVar6 + 4));
        iVar4 = __gnu_cxx::
                _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                              *)local_78);
        iVar4 = CDungeon::get_index(*(CDungeon **)(iVar4 + 4));
        LotteryItems(this,(vector *)local_58,0x3ea,iVar4,iVar6);
        std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::begin();
        while( true ) {
          std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::end();
          bVar2 = __gnu_cxx::operator!=(local_84,local_44);
          if (!bVar2) break;
          __gnu_cxx::
          __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
          ::operator*(local_84);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_88);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_40);
          cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                            (local_88,(_Rb_tree_iterator *)local_40);
          if (cVar3 == '\0') {
            local_24 = 1;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
                            ::operator*(local_84);
            std::make_pair<int,int>(local_2c,piVar5);
            std::pair<int_const,int>::pair<int,int>(local_34,(pair *)local_2c);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_3c);
          }
          else {
            iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_88);
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
          }
          __gnu_cxx::
          __normal_iterator<secretshop::SALE_INFO*,std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>>
          ::operator++(local_84);
        }
        std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::clear(local_58);
      }
      iVar6 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78);
      uVar7 = CDungeon::get_standard_level(*(CDungeon **)(iVar6 + 4));
      iVar6 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78);
      uVar8 = CDungeon::get_index(*(CDungeon **)(iVar6 + 4));
      iVar6 = __gnu_cxx::
              _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_78);
      uVar9 = CDungeon::GetDungeonName(*(CDungeon **)(iVar6 + 4));
      fprintf(local_18,"Dungeon : %s(idx:%d, lev:%d)\n",uVar9,uVar8,uVar7);
      local_14 = 0;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_7c);
      while( true ) {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_20);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_7c,
                           (_Rb_tree_iterator *)local_20);
        if (cVar3 == '\0') break;
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_7c);
        local_14 = local_14 + *(int *)(iVar6 + 4);
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_7c);
      }
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_80);
      while( true ) {
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
        cVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80,
                           (_Rb_tree_iterator *)local_1c);
        if (cVar3 == '\0') break;
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        dVar1 = _DAT_08cd4a50 * ((double)*(int *)(iVar6 + 4) / (double)local_14);
        iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        uVar7 = *(undefined4 *)(iVar6 + 4);
        puVar10 = (undefined4 *)
                  std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
        fprintf(local_18,"- %d(%d, %.2f%%)\n",*puVar10,uVar7,dVar1);
        std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_80);
      }
      fputc(10,local_18);
      __gnu_cxx::
      _Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
      ::operator++((_Hashtable_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                    *)local_78);
    }
    fclose(local_18);
  }
                    /* try { // try from 085fb137 to 085fb13b has its CatchHandler @ 085fb153 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_70);
  std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::~vector(local_58);
  return;
}

```

---

## GetRule

```asm
// === 085fb27c secretshop::CSecretShop::GetRule  [0x085fb27c-0x85fb2df] ===
 85fb27c:	55                   	push   %ebp
 85fb27d:	89 e5                	mov    %esp,%ebp
 85fb27f:	83 ec 28             	sub    $0x28,%esp
 85fb282:	8b 55 08             	mov    0x8(%ebp),%edx
 85fb285:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85fb288:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 85fb28b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fb28f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb293:	89 04 24             	mov    %eax,(%esp)
 85fb296:	e8 af 10 00 00       	call   85fc34a <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE4findERS7_>
 85fb29b:	83 ec 04             	sub    $0x4,%esp
 85fb29e:	8b 55 08             	mov    0x8(%ebp),%edx
 85fb2a1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85fb2a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fb2a8:	89 04 24             	mov    %eax,(%esp)
 85fb2ab:	e8 8a 0f 00 00       	call   85fc23a <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE3endEv>
 85fb2b0:	83 ec 04             	sub    $0x4,%esp
 85fb2b3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85fb2b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb2ba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85fb2bd:	89 04 24             	mov    %eax,(%esp)
 85fb2c0:	e8 9b 0f 00 00       	call   85fc260 <_ZNKSt17_Rb_tree_iteratorISt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEEneERKS7_>
 85fb2c5:	84 c0                	test   %al,%al
 85fb2c7:	74 10                	je     85fb2d9 <_ZN10secretshop11CSecretShop7GetRuleE8eBuyRule+0x5d>
 85fb2c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85fb2cc:	89 04 24             	mov    %eax,(%esp)
 85fb2cf:	e8 a0 0f 00 00       	call   85fc274 <_ZNKSt17_Rb_tree_iteratorISt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEEptEv>
 85fb2d4:	8b 40 04             	mov    0x4(%eax),%eax
 85fb2d7:	eb 05                	jmp    85fb2de <_ZN10secretshop11CSecretShop7GetRuleE8eBuyRule+0x62>
 85fb2d9:	b8 00 00 00 00       	mov    $0x0,%eax
 85fb2de:	c9                   	leave
 85fb2df:	c3                   	ret

```

```c
// secretshop::CSecretShop::GetRule @ 0x85fb27c

/* secretshop::CSecretShop::GetRule(eBuyRule) */

undefined4 secretshop::CSecretShop::GetRule(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> local_14 [4];
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  local_10 [12];
  
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::find(local_14);
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## LotteryItems

```asm
// === 085fac68 secretshop::CSecretShop::LotteryItems  [0x085fac68-0x85fad1f] ===
 85fac68:	55                   	push   %ebp
 85fac69:	89 e5                	mov    %esp,%ebp
 85fac6b:	56                   	push   %esi
 85fac6c:	53                   	push   %ebx
 85fac6d:	83 ec 30             	sub    $0x30,%esp
 85fac70:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85fac75:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85fac7c:	00 
 85fac7d:	89 04 24             	mov    %eax,(%esp)
 85fac80:	e8 13 ad b1 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 85fac85:	8b 10                	mov    (%eax),%edx
 85fac87:	83 c2 34             	add    $0x34,%edx
 85fac8a:	8b 12                	mov    (%edx),%edx
 85fac8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fac93:	00 
 85fac94:	89 04 24             	mov    %eax,(%esp)
 85fac97:	ff d2                	call   *%edx
 85fac99:	88 45 f7             	mov    %al,-0x9(%ebp)
 85fac9c:	0f b6 75 f7          	movzbl -0x9(%ebp),%esi
 85faca0:	8b 45 08             	mov    0x8(%ebp),%eax
 85faca3:	8b 58 18             	mov    0x18(%eax),%ebx
 85faca6:	e8 f0 14 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85facab:	8d 90 00 a7 00 00    	lea    0xa700(%eax),%edx
 85facb1:	89 74 24 14          	mov    %esi,0x14(%esp)
 85facb5:	8b 45 14             	mov    0x14(%ebp),%eax
 85facb8:	89 44 24 10          	mov    %eax,0x10(%esp)
 85facbc:	8b 45 10             	mov    0x10(%ebp),%eax
 85facbf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85facc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85facc6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85facca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85facce:	89 14 24             	mov    %edx,(%esp)
 85facd1:	e8 38 7d 48 00       	call   8a82a0e <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib>
 85facd6:	84 c0                	test   %al,%al
 85facd8:	75 3e                	jne    85fad18 <_ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii+0xb0>
 85facda:	0f b6 75 f7          	movzbl -0x9(%ebp),%esi
 85facde:	8b 45 08             	mov    0x8(%ebp),%eax
 85face1:	8b 58 18             	mov    0x18(%eax),%ebx
 85face4:	e8 b2 14 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85face9:	8d 90 00 a7 00 00    	lea    0xa700(%eax),%edx
 85facef:	89 74 24 14          	mov    %esi,0x14(%esp)
 85facf3:	8b 45 18             	mov    0x18(%ebp),%eax
 85facf6:	89 44 24 10          	mov    %eax,0x10(%esp)
 85facfa:	8b 45 10             	mov    0x10(%ebp),%eax
 85facfd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fad01:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fad04:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fad08:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85fad0c:	89 14 24             	mov    %edx,(%esp)
 85fad0f:	e8 20 7e 48 00       	call   8a82b34 <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib>
 85fad14:	84 c0                	test   %al,%al
 85fad16:	eb 01                	jmp    85fad19 <_ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii+0xb1>
 85fad18:	90                   	nop
 85fad19:	83 c4 30             	add    $0x30,%esp
 85fad1c:	5b                   	pop    %ebx
 85fad1d:	5e                   	pop    %esi
 85fad1e:	5d                   	pop    %ebp
 85fad1f:	c3                   	ret

```

```c
// secretshop::CSecretShop::LotteryItems @ 0x85fac68

/* secretshop::CSecretShop::LotteryItems(std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int, int, int) */

void __thiscall
secretshop::CSecretShop::LotteryItems
          (CSecretShop *this,vector *param_1,int param_2,int param_3,int param_4)

{
  CMTRand *pCVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x3a);
  bVar2 = (bool)(**(code **)(*piVar4 + 0x34))(piVar4,0);
  pCVar1 = *(CMTRand **)(this + 0x18);
  iVar5 = G_CDataManager();
  cVar3 = SecretShopScript::GetItemByDungeonIdx
                    ((SecretShopScript *)(iVar5 + 0xa700),pCVar1,param_1,param_2,param_3,bVar2);
  if (cVar3 == '\0') {
    pCVar1 = *(CMTRand **)(this + 0x18);
    iVar5 = G_CDataManager();
    SecretShopScript::GetItemByDungeonLev
              ((SecretShopScript *)(iVar5 + 0xa700),pCVar1,param_1,param_2,param_4,bVar2);
  }
  return;
}

```

---

## LotteryNpc

```asm
// === 085fabac secretshop::CSecretShop::LotteryNpc  [0x085fabac-0x85fac67] ===
 85fabac:	55                   	push   %ebp
 85fabad:	89 e5                	mov    %esp,%ebp
 85fabaf:	83 ec 28             	sub    $0x28,%esp
 85fabb2:	c7 45 f0 10 27 00 00 	movl   $0x2710,-0x10(%ebp)
 85fabb9:	8b 45 08             	mov    0x8(%ebp),%eax
 85fabbc:	8b 40 18             	mov    0x18(%eax),%eax
 85fabbf:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85fabc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fabc6:	89 04 24             	mov    %eax,(%esp)
 85fabc9:	e8 f0 0e ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85fabce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fabd1:	c7 45 ec e8 03 00 00 	movl   $0x3e8,-0x14(%ebp)
 85fabd8:	e8 be 15 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85fabdd:	8d 90 00 a7 00 00    	lea    0xa700(%eax),%edx
 85fabe3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fabe6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fabea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fabed:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fabf1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fabf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fabf8:	89 14 24             	mov    %edx,(%esp)
 85fabfb:	e8 f8 7c 48 00       	call   8a828f8 <_ZN16SecretShopScript18GetNpcByDungeonIdxERiii>
 85fac00:	83 f0 01             	xor    $0x1,%eax
 85fac03:	84 c0                	test   %al,%al
 85fac05:	74 28                	je     85fac2f <_ZN10secretshop11CSecretShop10LotteryNpcEiii+0x83>
 85fac07:	e8 8f 15 ad ff       	call   80cc19b <_Z14G_CDataManagerv>
 85fac0c:	8d 90 00 a7 00 00    	lea    0xa700(%eax),%edx
 85fac12:	8b 45 10             	mov    0x10(%ebp),%eax
 85fac15:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85fac19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fac1c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fac20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fac23:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fac27:	89 14 24             	mov    %edx,(%esp)
 85fac2a:	e8 0d 7d 48 00       	call   8a8293c <_ZN16SecretShopScript18GetNpcByDungeonLevERiii>
 85fac2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fac32:	85 c0                	test   %eax,%eax
 85fac34:	74 2d                	je     85fac63 <_ZN10secretshop11CSecretShop10LotteryNpcEiii+0xb7>
 85fac36:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fac39:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 85fac3e:	74 23                	je     85fac63 <_ZN10secretshop11CSecretShop10LotteryNpcEiii+0xb7>
 85fac40:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fac43:	8b 55 08             	mov    0x8(%ebp),%edx
 85fac46:	8d 4a 1c             	lea    0x1c(%edx),%ecx
 85fac49:	8b 55 14             	mov    0x14(%ebp),%edx
 85fac4c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85fac50:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fac53:	89 54 24 08          	mov    %edx,0x8(%esp)
 85fac57:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fac5b:	89 0c 24             	mov    %ecx,(%esp)
 85fac5e:	e8 2d 24 00 00       	call   85fd090 <_ZN10secretshop20CSecretShopStatistic10RecordShowEiii>
 85fac63:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85fac66:	c9                   	leave
 85fac67:	c3                   	ret

```

```c
// secretshop::CSecretShop::LotteryNpc @ 0x85fabac

/* secretshop::CSecretShop::LotteryNpc(int, int, int) */

int __thiscall
secretshop::CSecretShop::LotteryNpc(CSecretShop *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[1] = 10000;
  local_18[2] = CMTRand::randInt(*(CMTRand **)(this + 0x18),(ulong *)(local_18 + 1));
  local_18[0] = 1000;
  iVar2 = G_CDataManager();
  cVar1 = SecretShopScript::GetNpcByDungeonIdx((int *)(iVar2 + 0xa700),(int)local_18,local_18[2]);
  if (cVar1 != '\x01') {
    iVar2 = G_CDataManager();
    SecretShopScript::GetNpcByDungeonLev
              ((SecretShopScript *)(iVar2 + 0xa700),local_18,local_18[2],param_2);
  }
  if ((local_18[0] != 0) && (local_18[0] != 1000)) {
    CSecretShopStatistic::RecordShow
              ((CSecretShopStatistic *)(this + 0x1c),local_18[0],param_1,param_3);
  }
  return local_18[0];
}

```

---

## SendSecretShopItemList

```asm
// === 085fb374 secretshop::CSecretShop::SendSecretShopItemList  [0x085fb374-0x85fb539] ===
 85fb374:	55                   	push   %ebp
 85fb375:	89 e5                	mov    %esp,%ebp
 85fb377:	56                   	push   %esi
 85fb378:	53                   	push   %ebx
 85fb379:	83 ec 30             	sub    $0x30,%esp
 85fb37c:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb37f:	89 04 24             	mov    %eax,(%esp)
 85fb382:	e8 ef 0f 00 00       	call   85fc376 <_ZNKSt6vectorIN10secretshop9SALE_INFOESaIS1_EE4sizeEv>
 85fb387:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85fb38a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb38d:	89 04 24             	mov    %eax,(%esp)
 85fb390:	e8 b7 29 f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85fb395:	c7 44 24 08 15 01 00 	movl   $0x115,0x8(%esp)
 85fb39c:	00 
 85fb39d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fb3a4:	00 
 85fb3a5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb3a8:	89 04 24             	mov    %eax,(%esp)
 85fb3ab:	e8 4c 05 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85fb3b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85fb3b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb3b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb3ba:	89 04 24             	mov    %eax,(%esp)
 85fb3bd:	e8 7a 05 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb3c2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85fb3c9:	e9 07 01 00 00       	jmp    85fb4d5 <_ZN10secretshop11CSecretShop22SendSecretShopItemListEP5CUserRSt6vectorINS_9SALE_INFOESaIS4_EE+0x161>
 85fb3ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb3d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb3d5:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb3d8:	89 04 24             	mov    %eax,(%esp)
 85fb3db:	e8 b8 0f 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb3e0:	8b 00                	mov    (%eax),%eax
 85fb3e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb3e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb3e9:	89 04 24             	mov    %eax,(%esp)
 85fb3ec:	e8 4b 05 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb3f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb3f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb3f8:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb3fb:	89 04 24             	mov    %eax,(%esp)
 85fb3fe:	e8 95 0f 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb403:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 85fb407:	0f be c0             	movsbl %al,%eax
 85fb40a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb40e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb411:	89 04 24             	mov    %eax,(%esp)
 85fb414:	e8 07 05 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85fb419:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb41c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb420:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb423:	89 04 24             	mov    %eax,(%esp)
 85fb426:	e8 6d 0f 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb42b:	8b 40 08             	mov    0x8(%eax),%eax
 85fb42e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb432:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb435:	89 04 24             	mov    %eax,(%esp)
 85fb438:	e8 ff 04 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb43d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb440:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb444:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb447:	89 04 24             	mov    %eax,(%esp)
 85fb44a:	e8 49 0f 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb44f:	8b 40 0c             	mov    0xc(%eax),%eax
 85fb452:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb456:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb459:	89 04 24             	mov    %eax,(%esp)
 85fb45c:	e8 db 04 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb461:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb464:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb468:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb46b:	89 04 24             	mov    %eax,(%esp)
 85fb46e:	e8 25 0f 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb473:	8b 40 10             	mov    0x10(%eax),%eax
 85fb476:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb47a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb47d:	89 04 24             	mov    %eax,(%esp)
 85fb480:	e8 b7 04 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb485:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb488:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb48c:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb48f:	89 04 24             	mov    %eax,(%esp)
 85fb492:	e8 01 0f 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb497:	8b 40 14             	mov    0x14(%eax),%eax
 85fb49a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb49e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb4a1:	89 04 24             	mov    %eax,(%esp)
 85fb4a4:	e8 93 04 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb4a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb4ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb4b0:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb4b3:	89 04 24             	mov    %eax,(%esp)
 85fb4b6:	e8 dd 0e 00 00       	call   85fc398 <_ZNSt6vectorIN10secretshop9SALE_INFOESaIS1_EEixEj>
 85fb4bb:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 85fb4bf:	0f be c0             	movsbl %al,%eax
 85fb4c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb4c6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb4c9:	89 04 24             	mov    %eax,(%esp)
 85fb4cc:	e8 4f 04 ad ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85fb4d1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85fb4d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fb4d8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85fb4db:	0f 9c c0             	setl   %al
 85fb4de:	84 c0                	test   %al,%al
 85fb4e0:	0f 85 e8 fe ff ff    	jne    85fb3ce <_ZN10secretshop11CSecretShop22SendSecretShopItemListEP5CUserRSt6vectorINS_9SALE_INFOESaIS4_EE+0x5a>
 85fb4e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fb4ed:	00 
 85fb4ee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb4f1:	89 04 24             	mov    %eax,(%esp)
 85fb4f4:	e8 5f 04 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85fb4f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb4fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb500:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb503:	89 04 24             	mov    %eax,(%esp)
 85fb506:	e8 af d0 04 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85fb50b:	eb 1b                	jmp    85fb528 <_ZN10secretshop11CSecretShop22SendSecretShopItemListEP5CUserRSt6vectorINS_9SALE_INFOESaIS4_EE+0x1b4>
 85fb50d:	89 d3                	mov    %edx,%ebx
 85fb50f:	89 c6                	mov    %eax,%esi
 85fb511:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb514:	89 04 24             	mov    %eax,(%esp)
 85fb517:	e8 64 29 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fb51c:	89 f0                	mov    %esi,%eax
 85fb51e:	89 da                	mov    %ebx,%edx
 85fb520:	89 04 24             	mov    %eax,(%esp)
 85fb523:	e8 28 82 4e 00       	call   8ae3750 <_Unwind_Resume>
 85fb528:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85fb52b:	89 04 24             	mov    %eax,(%esp)
 85fb52e:	e8 4d 29 f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fb533:	83 c4 30             	add    $0x30,%esp
 85fb536:	5b                   	pop    %ebx
 85fb537:	5e                   	pop    %esi
 85fb538:	5d                   	pop    %ebp
 85fb539:	c3                   	ret

```

```c
// secretshop::CSecretShop::SendSecretShopItemList @ 0x85fb374

/* secretshop::CSecretShop::SendSecretShopItemList(CUser*, std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&) */

void __thiscall
secretshop::CSecretShop::SendSecretShopItemList(CSecretShop *this,CUser *param_1,vector *param_2)

{
  int *piVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  uint local_10;
  
  local_14 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::size
                       ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                        param_2);
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 085fb3ab to 085fb50a has its CatchHandler @ 085fb50d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x115);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_14);
  for (local_10 = 0; (int)local_10 < local_14; local_10 = local_10 + 1) {
    piVar1 = (int *)std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::
                    operator[]((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>
                                *)param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar1);
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(iVar2 + 4));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 8));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 0xc));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 0x10));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar2 + 0x14));
    iVar2 = std::vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>>::operator[]
                      ((vector<secretshop::SALE_INFO,std::allocator<secretshop::SALE_INFO>> *)
                       param_2,local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(iVar2 + 0x18));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## SendSecretShopNpc

```asm
// === 085fb2e0 secretshop::CSecretShop::SendSecretShopNpc  [0x085fb2e0-0x85fb373] ===
 85fb2e0:	55                   	push   %ebp
 85fb2e1:	89 e5                	mov    %esp,%ebp
 85fb2e3:	56                   	push   %esi
 85fb2e4:	53                   	push   %ebx
 85fb2e5:	83 ec 20             	sub    $0x20,%esp
 85fb2e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb2eb:	89 04 24             	mov    %eax,(%esp)
 85fb2ee:	e8 59 2a f9 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85fb2f3:	c7 44 24 08 14 01 00 	movl   $0x114,0x8(%esp)
 85fb2fa:	00 
 85fb2fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fb302:	00 
 85fb303:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb306:	89 04 24             	mov    %eax,(%esp)
 85fb309:	e8 ee 05 ad ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85fb30e:	8b 45 10             	mov    0x10(%ebp),%eax
 85fb311:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb315:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb318:	89 04 24             	mov    %eax,(%esp)
 85fb31b:	e8 1c 06 ad ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85fb320:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85fb327:	00 
 85fb328:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb32b:	89 04 24             	mov    %eax,(%esp)
 85fb32e:	e8 25 06 ad ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85fb333:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb336:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fb33a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fb33d:	89 04 24             	mov    %eax,(%esp)
 85fb340:	e8 75 d2 04 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85fb345:	eb 1b                	jmp    85fb362 <_ZN10secretshop11CSecretShop17SendSecretShopNpcEP5CUseri+0x82>
 85fb347:	89 d3                	mov    %edx,%ebx
 85fb349:	89 c6                	mov    %eax,%esi
 85fb34b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb34e:	89 04 24             	mov    %eax,(%esp)
 85fb351:	e8 2a 2b f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fb356:	89 f0                	mov    %esi,%eax
 85fb358:	89 da                	mov    %ebx,%edx
 85fb35a:	89 04 24             	mov    %eax,(%esp)
 85fb35d:	e8 ee 83 4e 00       	call   8ae3750 <_Unwind_Resume>
 85fb362:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fb365:	89 04 24             	mov    %eax,(%esp)
 85fb368:	e8 13 2b f9 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85fb36d:	83 c4 20             	add    $0x20,%esp
 85fb370:	5b                   	pop    %ebx
 85fb371:	5e                   	pop    %esi
 85fb372:	5d                   	pop    %ebp
 85fb373:	c3                   	ret

```

```c
// secretshop::CSecretShop::SendSecretShopNpc @ 0x85fb2e0

/* secretshop::CSecretShop::SendSecretShopNpc(CUser*, int) */

void __thiscall
secretshop::CSecretShop::SendSecretShopNpc(CSecretShop *this,CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085fb309 to 085fb344 has its CatchHandler @ 085fb347 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x114);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## SendSecretShopStatistic

```asm
// === 085fb53a secretshop::CSecretShop::SendSecretShopStatistic  [0x085fb53a-0x85fb55d] ===
 85fb53a:	55                   	push   %ebp
 85fb53b:	89 e5                	mov    %esp,%ebp
 85fb53d:	83 ec 18             	sub    $0x18,%esp
 85fb540:	8b 45 08             	mov    0x8(%ebp),%eax
 85fb543:	83 c0 1c             	add    $0x1c,%eax
 85fb546:	89 04 24             	mov    %eax,(%esp)
 85fb549:	e8 2a 1d 00 00       	call   85fd278 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv>
 85fb54e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fb551:	83 c0 1c             	add    $0x1c,%eax
 85fb554:	89 04 24             	mov    %eax,(%esp)
 85fb557:	e8 90 1a 00 00       	call   85fcfec <_ZN10secretshop20CSecretShopStatistic5ClearEv>
 85fb55c:	c9                   	leave
 85fb55d:	c3                   	ret

```

```c
// secretshop::CSecretShop::SendSecretShopStatistic @ 0x85fb53a

/* secretshop::CSecretShop::SendSecretShopStatistic() */

void __thiscall secretshop::CSecretShop::SendSecretShopStatistic(CSecretShop *this)

{
  CSecretShopStatistic::SendSecretShopStatistic((CSecretShopStatistic *)(this + 0x1c));
  CSecretShopStatistic::Clear((CSecretShopStatistic *)(this + 0x1c));
  return;
}

```

---

## ~CSecretShop

```asm
// === 085faac4 secretshop::CSecretShop::~CSecretShop  [0x085faac4-0x85fabab] ===
 85faac4:	55                   	push   %ebp
 85faac5:	89 e5                	mov    %esp,%ebp
 85faac7:	56                   	push   %esi
 85faac8:	53                   	push   %ebx
 85faac9:	83 ec 20             	sub    $0x20,%esp
 85faacc:	8b 45 08             	mov    0x8(%ebp),%eax
 85faacf:	8b 40 18             	mov    0x18(%eax),%eax
 85faad2:	85 c0                	test   %eax,%eax
 85faad4:	74 0e                	je     85faae4 <_ZN10secretshop11CSecretShopD1Ev+0x20>
 85faad6:	8b 45 08             	mov    0x8(%ebp),%eax
 85faad9:	8b 40 18             	mov    0x18(%eax),%eax
 85faadc:	89 04 24             	mov    %eax,(%esp)
 85faadf:	e8 0c 9a 12 00       	call   87244f0 <_ZdlPv>
 85faae4:	8b 55 08             	mov    0x8(%ebp),%edx
 85faae7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85faaea:	89 54 24 04          	mov    %edx,0x4(%esp)
 85faaee:	89 04 24             	mov    %eax,(%esp)
 85faaf1:	e8 1e 17 00 00       	call   85fc214 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE5beginEv>
 85faaf6:	83 ec 04             	sub    $0x4,%esp
 85faaf9:	eb 21                	jmp    85fab1c <_ZN10secretshop11CSecretShopD1Ev+0x58>
 85faafb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85faafe:	89 04 24             	mov    %eax,(%esp)
 85fab01:	e8 6e 17 00 00       	call   85fc274 <_ZNKSt17_Rb_tree_iteratorISt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEEptEv>
 85fab06:	8b 40 04             	mov    0x4(%eax),%eax
 85fab09:	89 04 24             	mov    %eax,(%esp)
 85fab0c:	e8 df 99 12 00       	call   87244f0 <_ZdlPv>
 85fab11:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85fab14:	89 04 24             	mov    %eax,(%esp)
 85fab17:	e8 66 17 00 00       	call   85fc282 <_ZNSt17_Rb_tree_iteratorISt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEEppEv>
 85fab1c:	8b 55 08             	mov    0x8(%ebp),%edx
 85fab1f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85fab22:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fab26:	89 04 24             	mov    %eax,(%esp)
 85fab29:	e8 0c 17 00 00       	call   85fc23a <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE3endEv>
 85fab2e:	83 ec 04             	sub    $0x4,%esp
 85fab31:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85fab34:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fab38:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85fab3b:	89 04 24             	mov    %eax,(%esp)
 85fab3e:	e8 1d 17 00 00       	call   85fc260 <_ZNKSt17_Rb_tree_iteratorISt4pairIK8eBuyRulePN10secretshop8IBuyRuleEEEneERKS7_>
 85fab43:	84 c0                	test   %al,%al
 85fab45:	75 b4                	jne    85faafb <_ZN10secretshop11CSecretShopD1Ev+0x37>
 85fab47:	8b 45 08             	mov    0x8(%ebp),%eax
 85fab4a:	89 04 24             	mov    %eax,(%esp)
 85fab4d:	e8 4e 17 00 00       	call   85fc2a0 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEE5clearEv>
 85fab52:	eb 18                	jmp    85fab6c <_ZN10secretshop11CSecretShopD1Ev+0xa8>
 85fab54:	89 d3                	mov    %edx,%ebx
 85fab56:	89 c6                	mov    %eax,%esi
 85fab58:	8b 45 08             	mov    0x8(%ebp),%eax
 85fab5b:	83 c0 1c             	add    $0x1c,%eax
 85fab5e:	89 04 24             	mov    %eax,(%esp)
 85fab61:	e8 c6 13 00 00       	call   85fbf2c <_ZN10secretshop20CSecretShopStatisticD1Ev>
 85fab66:	89 f0                	mov    %esi,%eax
 85fab68:	89 da                	mov    %ebx,%edx
 85fab6a:	eb 10                	jmp    85fab7c <_ZN10secretshop11CSecretShopD1Ev+0xb8>
 85fab6c:	8b 45 08             	mov    0x8(%ebp),%eax
 85fab6f:	83 c0 1c             	add    $0x1c,%eax
 85fab72:	89 04 24             	mov    %eax,(%esp)
 85fab75:	e8 b2 13 00 00       	call   85fbf2c <_ZN10secretshop20CSecretShopStatisticD1Ev>
 85fab7a:	eb 1b                	jmp    85fab97 <_ZN10secretshop11CSecretShopD1Ev+0xd3>
 85fab7c:	89 d3                	mov    %edx,%ebx
 85fab7e:	89 c6                	mov    %eax,%esi
 85fab80:	8b 45 08             	mov    0x8(%ebp),%eax
 85fab83:	89 04 24             	mov    %eax,(%esp)
 85fab86:	e8 95 14 00 00       	call   85fc020 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev>
 85fab8b:	89 f0                	mov    %esi,%eax
 85fab8d:	89 da                	mov    %ebx,%edx
 85fab8f:	89 04 24             	mov    %eax,(%esp)
 85fab92:	e8 b9 8b 4e 00       	call   8ae3750 <_Unwind_Resume>
 85fab97:	8b 45 08             	mov    0x8(%ebp),%eax
 85fab9a:	89 04 24             	mov    %eax,(%esp)
 85fab9d:	e8 7e 14 00 00       	call   85fc020 <_ZNSt3mapI8eBuyRulePN10secretshop8IBuyRuleESt4lessIS0_ESaISt4pairIKS0_S3_EEED1Ev>
 85faba2:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85faba5:	83 c4 00             	add    $0x0,%esp
 85faba8:	5b                   	pop    %ebx
 85faba9:	5e                   	pop    %esi
 85fabaa:	5d                   	pop    %ebp
 85fabab:	c3                   	ret

```

```c
// secretshop::CSecretShop::~CSecretShop @ 0x85faac4

/* secretshop::CSecretShop::~CSecretShop() */

void __thiscall secretshop::CSecretShop::~CSecretShop(CSecretShop *this)

{
  char cVar1;
  int iVar2;
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  local_14 [4];
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  local_10 [4];
  
  if (*(int *)(this + 0x18) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
                    /* try { // try from 085faaf1 to 085fab51 has its CatchHandler @ 085fab54 */
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> *)
                       local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator->
                      ((_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> *)
                       local_14);
    operator_delete(*(void **)(iVar2 + 4));
    std::_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>::operator++
              ((_Rb_tree_iterator<std::pair<eBuyRule_const,secretshop::IBuyRule*>> *)local_14);
  }
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::clear((map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
           *)this);
                    /* try { // try from 085fab75 to 085fab79 has its CatchHandler @ 085fab7c */
  CSecretShopStatistic::~CSecretShopStatistic((CSecretShopStatistic *)(this + 0x1c));
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::~map((map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
          *)this);
  return;
}

```

