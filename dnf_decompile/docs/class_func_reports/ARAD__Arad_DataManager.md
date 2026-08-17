# ARAD__Arad_DataManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Arad_DataManager

```asm
// === 08188030 ARAD::Arad_DataManager::Arad_DataManager  [0x08188030-0x8188161] ===
 8188030:	55                   	push   %ebp
 8188031:	89 e5                	mov    %esp,%ebp
 8188033:	56                   	push   %esi
 8188034:	53                   	push   %ebx
 8188035:	83 ec 10             	sub    $0x10,%esp
 8188038:	8b 45 08             	mov    0x8(%ebp),%eax
 818803b:	89 04 24             	mov    %eax,(%esp)
 818803e:	e8 23 0f 00 00       	call   8188f66 <_ZN4ARAD9SingletonINS_16Arad_DataManagerEEC1Ev>
 8188043:	8b 45 08             	mov    0x8(%ebp),%eax
 8188046:	89 04 24             	mov    %eax,(%esp)
 8188049:	e8 06 a4 f5 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 818804e:	8b 45 08             	mov    0x8(%ebp),%eax
 8188051:	c7 00 90 1d b9 08    	movl   $0x8b91d90,(%eax)
 8188057:	8b 45 08             	mov    0x8(%ebp),%eax
 818805a:	83 c0 04             	add    $0x4,%eax
 818805d:	89 04 24             	mov    %eax,(%esp)
 8188060:	e8 07 0f 00 00       	call   8188f6c <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEEC1Ev>
 8188065:	8b 45 08             	mov    0x8(%ebp),%eax
 8188068:	83 c0 1c             	add    $0x1c,%eax
 818806b:	89 04 24             	mov    %eax,(%esp)
 818806e:	e8 dd 0a 00 00       	call   8188b50 <_ZN13ExceptionItemC1Ev>
 8188073:	8b 45 08             	mov    0x8(%ebp),%eax
 8188076:	83 c0 38             	add    $0x38,%eax
 8188079:	89 04 24             	mov    %eax,(%esp)
 818807c:	e8 2d 0b 00 00       	call   8188bae <_ZN17PurchaseLimitItemC1Ev>
 8188081:	8b 45 08             	mov    0x8(%ebp),%eax
 8188084:	83 c0 54             	add    $0x54,%eax
 8188087:	89 04 24             	mov    %eax,(%esp)
 818808a:	e8 7d 0b 00 00       	call   8188c0c <_ZN13AradBonusItemC1Ev>
 818808f:	8b 45 08             	mov    0x8(%ebp),%eax
 8188092:	83 c0 70             	add    $0x70,%eax
 8188095:	89 04 24             	mov    %eax,(%esp)
 8188098:	e8 23 0c 00 00       	call   8188cc0 <_ZN17Arad_Mileage_DataC1Ev>
 818809d:	8b 45 08             	mov    0x8(%ebp),%eax
 81880a0:	05 84 00 00 00       	add    $0x84,%eax
 81880a5:	89 04 24             	mov    %eax,(%esp)
 81880a8:	e8 5d 0c 00 00       	call   8188d0a <_ZN30Arad_OnePlusCardEvent_ItemListC1Ev>
 81880ad:	8b 45 08             	mov    0x8(%ebp),%eax
 81880b0:	05 a0 00 00 00       	add    $0xa0,%eax
 81880b5:	89 04 24             	mov    %eax,(%esp)
 81880b8:	e8 01 0d 00 00       	call   8188dbe <_ZN28Arad_VillageAttackRewardItemC1Ev>
 81880bd:	e9 98 00 00 00       	jmp    818815a <_ZN4ARAD16Arad_DataManagerC1Ev+0x12a>
 81880c2:	89 d3                	mov    %edx,%ebx
 81880c4:	89 c6                	mov    %eax,%esi
 81880c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81880c9:	05 84 00 00 00       	add    $0x84,%eax
 81880ce:	89 04 24             	mov    %eax,(%esp)
 81880d1:	e8 94 0c 00 00       	call   8188d6a <_ZN30Arad_OnePlusCardEvent_ItemListD1Ev>
 81880d6:	89 f0                	mov    %esi,%eax
 81880d8:	89 da                	mov    %ebx,%edx
 81880da:	eb 00                	jmp    81880dc <_ZN4ARAD16Arad_DataManagerC1Ev+0xac>
 81880dc:	89 d3                	mov    %edx,%ebx
 81880de:	89 c6                	mov    %eax,%esi
 81880e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81880e3:	83 c0 70             	add    $0x70,%eax
 81880e6:	89 04 24             	mov    %eax,(%esp)
 81880e9:	e8 fc 0b 00 00       	call   8188cea <_ZN17Arad_Mileage_DataD1Ev>
 81880ee:	89 f0                	mov    %esi,%eax
 81880f0:	89 da                	mov    %ebx,%edx
 81880f2:	eb 00                	jmp    81880f4 <_ZN4ARAD16Arad_DataManagerC1Ev+0xc4>
 81880f4:	89 d3                	mov    %edx,%ebx
 81880f6:	89 c6                	mov    %eax,%esi
 81880f8:	8b 45 08             	mov    0x8(%ebp),%eax
 81880fb:	83 c0 54             	add    $0x54,%eax
 81880fe:	89 04 24             	mov    %eax,(%esp)
 8188101:	e8 30 0b 00 00       	call   8188c36 <_ZN13AradBonusItemD1Ev>
 8188106:	89 f0                	mov    %esi,%eax
 8188108:	89 da                	mov    %ebx,%edx
 818810a:	eb 00                	jmp    818810c <_ZN4ARAD16Arad_DataManagerC1Ev+0xdc>
 818810c:	89 d3                	mov    %edx,%ebx
 818810e:	89 c6                	mov    %eax,%esi
 8188110:	8b 45 08             	mov    0x8(%ebp),%eax
 8188113:	83 c0 38             	add    $0x38,%eax
 8188116:	89 04 24             	mov    %eax,(%esp)
 8188119:	e8 ba 0a 00 00       	call   8188bd8 <_ZN17PurchaseLimitItemD1Ev>
 818811e:	89 f0                	mov    %esi,%eax
 8188120:	89 da                	mov    %ebx,%edx
 8188122:	eb 00                	jmp    8188124 <_ZN4ARAD16Arad_DataManagerC1Ev+0xf4>
 8188124:	89 d3                	mov    %edx,%ebx
 8188126:	89 c6                	mov    %eax,%esi
 8188128:	8b 45 08             	mov    0x8(%ebp),%eax
 818812b:	83 c0 1c             	add    $0x1c,%eax
 818812e:	89 04 24             	mov    %eax,(%esp)
 8188131:	e8 44 0a 00 00       	call   8188b7a <_ZN13ExceptionItemD1Ev>
 8188136:	89 f0                	mov    %esi,%eax
 8188138:	89 da                	mov    %ebx,%edx
 818813a:	eb 00                	jmp    818813c <_ZN4ARAD16Arad_DataManagerC1Ev+0x10c>
 818813c:	89 d3                	mov    %edx,%ebx
 818813e:	89 c6                	mov    %eax,%esi
 8188140:	8b 45 08             	mov    0x8(%ebp),%eax
 8188143:	83 c0 04             	add    $0x4,%eax
 8188146:	89 04 24             	mov    %eax,(%esp)
 8188149:	e8 5e 0b 00 00       	call   8188cac <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEED1Ev>
 818814e:	89 f0                	mov    %esi,%eax
 8188150:	89 da                	mov    %ebx,%edx
 8188152:	89 04 24             	mov    %eax,(%esp)
 8188155:	e8 f6 b5 95 00       	call   8ae3750 <_Unwind_Resume>
 818815a:	83 c4 10             	add    $0x10,%esp
 818815d:	5b                   	pop    %ebx
 818815e:	5e                   	pop    %esi
 818815f:	5d                   	pop    %ebp
 8188160:	c3                   	ret
 8188161:	90                   	nop

```

```c
// ARAD::Arad_DataManager::Arad_DataManager @ 0x8188030

/* ARAD::Arad_DataManager::Arad_DataManager() */

void __thiscall ARAD::Arad_DataManager::Arad_DataManager(Arad_DataManager *this)

{
  Singleton<ARAD::Arad_DataManager>::Singleton();
  ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b91d90;
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::map((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
         *)(this + 4));
                    /* try { // try from 0818806e to 08188072 has its CatchHandler @ 0818813c */
  ExceptionItem::ExceptionItem((ExceptionItem *)(this + 0x1c));
                    /* try { // try from 0818807c to 08188080 has its CatchHandler @ 08188124 */
  PurchaseLimitItem::PurchaseLimitItem((PurchaseLimitItem *)(this + 0x38));
                    /* try { // try from 0818808a to 0818808e has its CatchHandler @ 0818810c */
  AradBonusItem::AradBonusItem((AradBonusItem *)(this + 0x54));
                    /* try { // try from 08188098 to 0818809c has its CatchHandler @ 081880f4 */
  Arad_Mileage_Data::Arad_Mileage_Data((Arad_Mileage_Data *)(this + 0x70));
                    /* try { // try from 081880a8 to 081880ac has its CatchHandler @ 081880dc */
  Arad_OnePlusCardEvent_ItemList::Arad_OnePlusCardEvent_ItemList
            ((Arad_OnePlusCardEvent_ItemList *)(this + 0x84));
                    /* try { // try from 081880b8 to 081880bc has its CatchHandler @ 081880c2 */
  Arad_VillageAttackRewardItem::Arad_VillageAttackRewardItem
            ((Arad_VillageAttackRewardItem *)(this + 0xa0));
  return;
}

```

---

## Destroy

```asm
// === 081882e0 ARAD::Arad_DataManager::Destroy  [0x081882e0-0x81882f7] ===
 81882e0:	55                   	push   %ebp
 81882e1:	89 e5                	mov    %esp,%ebp
 81882e3:	83 ec 18             	sub    $0x18,%esp
 81882e6:	8b 45 08             	mov    0x8(%ebp),%eax
 81882e9:	89 04 24             	mov    %eax,(%esp)
 81882ec:	e8 61 06 00 00       	call   8188952 <_ZN4ARAD16Arad_DataManager15destroyAradDataEv>
 81882f1:	b8 01 00 00 00       	mov    $0x1,%eax
 81882f6:	c9                   	leave
 81882f7:	c3                   	ret

```

```c
// ARAD::Arad_DataManager::Destroy @ 0x81882e0

/* ARAD::Arad_DataManager::Destroy() */

undefined4 __thiscall ARAD::Arad_DataManager::Destroy(Arad_DataManager *this)

{
  destroyAradData(this);
  return 1;
}

```

---

## Load

```asm
// === 081882cc ARAD::Arad_DataManager::Load  [0x081882cc-0x81882df] ===
 81882cc:	55                   	push   %ebp
 81882cd:	89 e5                	mov    %esp,%ebp
 81882cf:	83 ec 18             	sub    $0x18,%esp
 81882d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81882d5:	89 04 24             	mov    %eax,(%esp)
 81882d8:	e8 1b 00 00 00       	call   81882f8 <_ZN4ARAD16Arad_DataManager12initAradDataEv>
 81882dd:	c9                   	leave
 81882de:	c3                   	ret
 81882df:	90                   	nop

```

```c
// ARAD::Arad_DataManager::Load @ 0x81882cc

/* ARAD::Arad_DataManager::Load() */

void __thiscall ARAD::Arad_DataManager::Load(Arad_DataManager *this)

{
  initAradData(this);
  return;
}

```

---

## __insertGameScript

```asm
// === 081889bc ARAD::Arad_DataManager::__insertGameScript  [0x081889bc-0x8188aba] ===
 81889bc:	55                   	push   %ebp
 81889bd:	89 e5                	mov    %esp,%ebp
 81889bf:	56                   	push   %esi
 81889c0:	53                   	push   %ebx
 81889c1:	83 ec 20             	sub    $0x20,%esp
 81889c4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81889c7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81889ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 81889ce:	89 04 24             	mov    %eax,(%esp)
 81889d1:	e8 42 01 00 00       	call   8188b18 <_ZNK4ARAD24Arad_InterfaceGameScript14scriptDataNameEv>
 81889d6:	83 ec 04             	sub    $0x4,%esp
 81889d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81889dc:	8d 48 04             	lea    0x4(%eax),%ecx
 81889df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81889e2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81889e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81889e9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81889ed:	89 04 24             	mov    %eax,(%esp)
 81889f0:	e8 a1 09 00 00       	call   8189396 <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEE4findERS6_>
 81889f5:	83 ec 04             	sub    $0x4,%esp
 81889f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81889fb:	89 04 24             	mov    %eax,(%esp)
 81889fe:	e8 dd f1 57 00       	call   8707be0 <_ZNSsD1Ev>
 8188a03:	8b 45 08             	mov    0x8(%ebp),%eax
 8188a06:	8d 50 04             	lea    0x4(%eax),%edx
 8188a09:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8188a0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8188a10:	89 04 24             	mov    %eax,(%esp)
 8188a13:	e8 f4 08 00 00       	call   818930c <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEE3endEv>
 8188a18:	83 ec 04             	sub    $0x4,%esp
 8188a1b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8188a1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8188a22:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8188a25:	89 04 24             	mov    %eax,(%esp)
 8188a28:	e8 95 09 00 00       	call   81893c2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsPN4ARAD24Arad_InterfaceGameScriptEEEneERKS6_>
 8188a2d:	84 c0                	test   %al,%al
 8188a2f:	74 24                	je     8188a55 <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE+0x99>
 8188a31:	eb 1b                	jmp    8188a4e <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE+0x92>
 8188a33:	89 d3                	mov    %edx,%ebx
 8188a35:	89 c6                	mov    %eax,%esi
 8188a37:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8188a3a:	89 04 24             	mov    %eax,(%esp)
 8188a3d:	e8 9e f1 57 00       	call   8707be0 <_ZNSsD1Ev>
 8188a42:	89 f0                	mov    %esi,%eax
 8188a44:	89 da                	mov    %ebx,%edx
 8188a46:	89 04 24             	mov    %eax,(%esp)
 8188a49:	e8 02 ad 95 00       	call   8ae3750 <_Unwind_Resume>
 8188a4e:	b8 00 00 00 00       	mov    $0x0,%eax
 8188a53:	eb 5c                	jmp    8188ab1 <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE+0xf5>
 8188a55:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8188a58:	8b 55 0c             	mov    0xc(%ebp),%edx
 8188a5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8188a5f:	89 04 24             	mov    %eax,(%esp)
 8188a62:	e8 b1 00 00 00       	call   8188b18 <_ZNK4ARAD24Arad_InterfaceGameScript14scriptDataNameEv>
 8188a67:	83 ec 04             	sub    $0x4,%esp
 8188a6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8188a6d:	8d 50 04             	lea    0x4(%eax),%edx
 8188a70:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8188a73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8188a77:	89 14 24             	mov    %edx,(%esp)
 8188a7a:	e8 43 07 00 00       	call   81891c2 <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 8188a7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8188a82:	89 10                	mov    %edx,(%eax)
 8188a84:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8188a87:	89 04 24             	mov    %eax,(%esp)
 8188a8a:	e8 51 f1 57 00       	call   8707be0 <_ZNSsD1Ev>
 8188a8f:	b8 01 00 00 00       	mov    $0x1,%eax
 8188a94:	eb 1b                	jmp    8188ab1 <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE+0xf5>
 8188a96:	89 d3                	mov    %edx,%ebx
 8188a98:	89 c6                	mov    %eax,%esi
 8188a9a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8188a9d:	89 04 24             	mov    %eax,(%esp)
 8188aa0:	e8 3b f1 57 00       	call   8707be0 <_ZNSsD1Ev>
 8188aa5:	89 f0                	mov    %esi,%eax
 8188aa7:	89 da                	mov    %ebx,%edx
 8188aa9:	89 04 24             	mov    %eax,(%esp)
 8188aac:	e8 9f ac 95 00       	call   8ae3750 <_Unwind_Resume>
 8188ab1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8188ab4:	83 c4 00             	add    $0x0,%esp
 8188ab7:	5b                   	pop    %ebx
 8188ab8:	5e                   	pop    %esi
 8188ab9:	5d                   	pop    %ebp
 8188aba:	c3                   	ret

```

```c
// ARAD::Arad_DataManager::__insertGameScript @ 0x81889bc

/* ARAD::Arad_DataManager::__insertGameScript(ARAD::Arad_InterfaceGameScript*) */

bool __thiscall
ARAD::Arad_DataManager::__insertGameScript(Arad_DataManager *this,Arad_InterfaceGameScript *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  string local_1c;
  string local_18 [4];
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  local_14 [4];
  string local_10;
  
  Arad_InterfaceGameScript::scriptDataName();
                    /* try { // try from 081889f0 to 081889f4 has its CatchHandler @ 08188a33 */
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::find(&local_1c);
  std::string::~string(local_18);
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>::
          operator!=((_Rb_tree_iterator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>
                      *)local_14,(_Rb_tree_iterator *)&local_1c);
  if (cVar1 == '\0') {
    Arad_InterfaceGameScript::scriptDataName();
                    /* try { // try from 08188a7a to 08188a7e has its CatchHandler @ 08188a96 */
    puVar2 = (undefined4 *)
             std::
             map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
             ::operator[]((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
                           *)(this + 4),&local_10);
    *puVar2 = param_1;
    std::string::~string((string *)&local_10);
  }
  return cVar1 == '\0';
}

```

---

## destroyAradData

```asm
// === 08188952 ARAD::Arad_DataManager::destroyAradData  [0x08188952-0x81889bb] ===
 8188952:	55                   	push   %ebp
 8188953:	89 e5                	mov    %esp,%ebp
 8188955:	53                   	push   %ebx
 8188956:	83 ec 24             	sub    $0x24,%esp
 8188959:	8b 45 08             	mov    0x8(%ebp),%eax
 818895c:	8d 50 04             	lea    0x4(%eax),%edx
 818895f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8188962:	89 54 24 04          	mov    %edx,0x4(%esp)
 8188966:	89 04 24             	mov    %eax,(%esp)
 8188969:	e8 9e 09 00 00       	call   818930c <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEE3endEv>
 818896e:	83 ec 04             	sub    $0x4,%esp
 8188971:	8b 45 08             	mov    0x8(%ebp),%eax
 8188974:	8d 50 04             	lea    0x4(%eax),%edx
 8188977:	8d 45 f4             	lea    -0xc(%ebp),%eax
 818897a:	89 54 24 04          	mov    %edx,0x4(%esp)
 818897e:	89 04 24             	mov    %eax,(%esp)
 8188981:	e8 60 09 00 00       	call   81892e6 <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEE5beginEv>
 8188986:	83 ec 04             	sub    $0x4,%esp
 8188989:	8d 45 ef             	lea    -0x11(%ebp),%eax
 818898c:	88 5c 24 0c          	mov    %bl,0xc(%esp)
 8188990:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8188993:	89 54 24 08          	mov    %edx,0x8(%esp)
 8188997:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818899a:	89 54 24 04          	mov    %edx,0x4(%esp)
 818899e:	89 04 24             	mov    %eax,(%esp)
 81889a1:	e8 8b 09 00 00       	call   8189331 <_ZSt8for_eachISt17_Rb_tree_iteratorISt4pairIKSsPN4ARAD24Arad_InterfaceGameScriptEEENS3_19FN_DeleteGameScriptEET0_T_SA_S9_>
 81889a6:	83 ec 04             	sub    $0x4,%esp
 81889a9:	8b 45 08             	mov    0x8(%ebp),%eax
 81889ac:	83 c0 04             	add    $0x4,%eax
 81889af:	89 04 24             	mov    %eax,(%esp)
 81889b2:	e8 cb 09 00 00       	call   8189382 <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEE5clearEv>
 81889b7:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81889ba:	c9                   	leave
 81889bb:	c3                   	ret

```

```c
// ARAD::Arad_DataManager::destroyAradData @ 0x8188952

/* ARAD::Arad_DataManager::destroyAradData() */

void __thiscall ARAD::Arad_DataManager::destroyAradData(Arad_DataManager *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::end((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
         *)&local_14);
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::begin((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
           *)local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>,ARAD::FN_DeleteGameScript>
            (&local_15,local_10[0],local_14);
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::clear((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
           *)(this + 4));
  return;
}

```

---

## findGameScript

```asm
// === 081882ac ARAD::Arad_DataManager::findGameScript  [0x081882ac-0x81882cb] ===
 81882ac:	55                   	push   %ebp
 81882ad:	89 e5                	mov    %esp,%ebp
 81882af:	83 ec 18             	sub    $0x18,%esp
 81882b2:	8b 45 08             	mov    0x8(%ebp),%eax
 81882b5:	8d 50 04             	lea    0x4(%eax),%edx
 81882b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81882bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81882bf:	89 14 24             	mov    %edx,(%esp)
 81882c2:	e8 fb 0e 00 00       	call   81891c2 <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 81882c7:	8b 00                	mov    (%eax),%eax
 81882c9:	c9                   	leave
 81882ca:	c3                   	ret
 81882cb:	90                   	nop

```

```c
// ARAD::Arad_DataManager::findGameScript @ 0x81882ac

/* ARAD::Arad_DataManager::findGameScript(std::string) */

undefined4 __thiscall ARAD::Arad_DataManager::findGameScript(Arad_DataManager *this,string param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::
           map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
           ::operator[]((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
                         *)(this + 4),(string *)param_1._M_dataplus._M_p);
  return *puVar1;
}

```

---

## initAradData

```asm
// === 081882f8 ARAD::Arad_DataManager::initAradData  [0x081882f8-0x8188951] ===
 81882f8:	55                   	push   %ebp
 81882f9:	89 e5                	mov    %esp,%ebp
 81882fb:	57                   	push   %edi
 81882fc:	56                   	push   %esi
 81882fd:	53                   	push   %ebx
 81882fe:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
 8188304:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 818830b:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8188312:	00 
 8188313:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 818831a:	00 
 818831b:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188322:	00 
 8188323:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 818832a:	00 
 818832b:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 8188332:	08 
 8188333:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8188339:	89 04 24             	mov    %eax,(%esp)
 818833c:	e8 05 74 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8188341:	c7 44 24 04 80 10 b9 	movl   $0x8b91080,0x4(%esp)
 8188348:	08 
 8188349:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 818834f:	89 04 24             	mov    %eax,(%esp)
 8188352:	e8 31 74 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8188357:	c7 04 24 44 00 00 00 	movl   $0x44,(%esp)
 818835e:	e8 ed c0 59 00       	call   8724450 <_Znwj>
 8188363:	89 c3                	mov    %eax,%ebx
 8188365:	89 d8                	mov    %ebx,%eax
 8188367:	89 04 24             	mov    %eax,(%esp)
 818836a:	e8 8b d0 00 00       	call   81953fa <_ZN4ARAD27Arad_EventPeriodDataManagerC1Ev>
 818836f:	eb 18                	jmp    8188389 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x91>
 8188371:	89 d6                	mov    %edx,%esi
 8188373:	89 c7                	mov    %eax,%edi
 8188375:	89 1c 24             	mov    %ebx,(%esp)
 8188378:	e8 73 c1 59 00       	call   87244f0 <_ZdlPv>
 818837d:	89 f8                	mov    %edi,%eax
 818837f:	89 f2                	mov    %esi,%edx
 8188381:	89 04 24             	mov    %eax,(%esp)
 8188384:	e8 c7 b3 95 00       	call   8ae3750 <_Unwind_Resume>
 8188389:	89 d8                	mov    %ebx,%eax
 818838b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 818838e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8188392:	74 19                	je     81883ad <_ZN4ARAD16Arad_DataManager12initAradDataEv+0xb5>
 8188394:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8188397:	8b 00                	mov    (%eax),%eax
 8188399:	83 c0 08             	add    $0x8,%eax
 818839c:	8b 10                	mov    (%eax),%edx
 818839e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81883a1:	89 04 24             	mov    %eax,(%esp)
 81883a4:	ff d2                	call   *%edx
 81883a6:	83 f0 01             	xor    $0x1,%eax
 81883a9:	84 c0                	test   %al,%al
 81883ab:	74 07                	je     81883b4 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0xbc>
 81883ad:	b8 01 00 00 00       	mov    $0x1,%eax
 81883b2:	eb 05                	jmp    81883b9 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0xc1>
 81883b4:	b8 00 00 00 00       	mov    $0x0,%eax
 81883b9:	84 c0                	test   %al,%al
 81883bb:	74 56                	je     8188413 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x11b>
 81883bd:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81883c4:	00 
 81883c5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81883cc:	00 
 81883cd:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81883d4:	00 
 81883d5:	c7 44 24 08 4c 00 00 	movl   $0x4c,0x8(%esp)
 81883dc:	00 
 81883dd:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 81883e4:	08 
 81883e5:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81883eb:	89 04 24             	mov    %eax,(%esp)
 81883ee:	e8 53 73 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81883f3:	c7 44 24 04 a2 10 b9 	movl   $0x8b910a2,0x4(%esp)
 81883fa:	08 
 81883fb:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8188401:	89 04 24             	mov    %eax,(%esp)
 8188404:	e8 7f 73 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8188409:	b8 00 00 00 00       	mov    $0x0,%eax
 818840e:	e9 33 05 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 8188413:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8188416:	89 44 24 04          	mov    %eax,0x4(%esp)
 818841a:	8b 45 08             	mov    0x8(%ebp),%eax
 818841d:	89 04 24             	mov    %eax,(%esp)
 8188420:	e8 97 05 00 00       	call   81889bc <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE>
 8188425:	83 f0 01             	xor    $0x1,%eax
 8188428:	84 c0                	test   %al,%al
 818842a:	74 56                	je     8188482 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x18a>
 818842c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8188433:	00 
 8188434:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 818843b:	00 
 818843c:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188443:	00 
 8188444:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 818844b:	00 
 818844c:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 8188453:	08 
 8188454:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 818845a:	89 04 24             	mov    %eax,(%esp)
 818845d:	e8 e4 72 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8188462:	c7 44 24 04 a2 10 b9 	movl   $0x8b910a2,0x4(%esp)
 8188469:	08 
 818846a:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8188470:	89 04 24             	mov    %eax,(%esp)
 8188473:	e8 10 73 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8188478:	b8 00 00 00 00       	mov    $0x0,%eax
 818847d:	e9 c4 04 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 8188482:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8188489:	00 
 818848a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8188491:	00 
 8188492:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188499:	00 
 818849a:	c7 44 24 08 55 00 00 	movl   $0x55,0x8(%esp)
 81884a1:	00 
 81884a2:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 81884a9:	08 
 81884aa:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81884b0:	89 04 24             	mov    %eax,(%esp)
 81884b3:	e8 8e 72 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81884b8:	c7 44 24 04 a7 10 b9 	movl   $0x8b910a7,0x4(%esp)
 81884bf:	08 
 81884c0:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81884c6:	89 04 24             	mov    %eax,(%esp)
 81884c9:	e8 ba 72 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81884ce:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81884d5:	00 
 81884d6:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81884dd:	00 
 81884de:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81884e5:	00 
 81884e6:	c7 44 24 08 59 00 00 	movl   $0x59,0x8(%esp)
 81884ed:	00 
 81884ee:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 81884f5:	08 
 81884f6:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 81884fc:	89 04 24             	mov    %eax,(%esp)
 81884ff:	e8 42 72 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8188504:	c7 44 24 04 b0 10 b9 	movl   $0x8b910b0,0x4(%esp)
 818850b:	08 
 818850c:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8188512:	89 04 24             	mov    %eax,(%esp)
 8188515:	e8 6e 72 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818851a:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 8188521:	e8 2a bf 59 00       	call   8724450 <_Znwj>
 8188526:	89 c3                	mov    %eax,%ebx
 8188528:	89 d8                	mov    %ebx,%eax
 818852a:	89 04 24             	mov    %eax,(%esp)
 818852d:	e8 b6 46 01 00       	call   819cbe8 <_ZN4ARAD28Arad_StatisticsEventItemListC1Ev>
 8188532:	eb 18                	jmp    818854c <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x254>
 8188534:	89 d6                	mov    %edx,%esi
 8188536:	89 c7                	mov    %eax,%edi
 8188538:	89 1c 24             	mov    %ebx,(%esp)
 818853b:	e8 b0 bf 59 00       	call   87244f0 <_ZdlPv>
 8188540:	89 f8                	mov    %edi,%eax
 8188542:	89 f2                	mov    %esi,%edx
 8188544:	89 04 24             	mov    %eax,(%esp)
 8188547:	e8 04 b2 95 00       	call   8ae3750 <_Unwind_Resume>
 818854c:	89 d8                	mov    %ebx,%eax
 818854e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8188551:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8188555:	74 19                	je     8188570 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x278>
 8188557:	8b 45 e0             	mov    -0x20(%ebp),%eax
 818855a:	8b 00                	mov    (%eax),%eax
 818855c:	83 c0 08             	add    $0x8,%eax
 818855f:	8b 10                	mov    (%eax),%edx
 8188561:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8188564:	89 04 24             	mov    %eax,(%esp)
 8188567:	ff d2                	call   *%edx
 8188569:	83 f0 01             	xor    $0x1,%eax
 818856c:	84 c0                	test   %al,%al
 818856e:	74 07                	je     8188577 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x27f>
 8188570:	b8 01 00 00 00       	mov    $0x1,%eax
 8188575:	eb 05                	jmp    818857c <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x284>
 8188577:	b8 00 00 00 00       	mov    $0x0,%eax
 818857c:	84 c0                	test   %al,%al
 818857e:	74 56                	je     81885d6 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x2de>
 8188580:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8188587:	00 
 8188588:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 818858f:	00 
 8188590:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188597:	00 
 8188598:	c7 44 24 08 5d 00 00 	movl   $0x5d,0x8(%esp)
 818859f:	00 
 81885a0:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 81885a7:	08 
 81885a8:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 81885ae:	89 04 24             	mov    %eax,(%esp)
 81885b1:	e8 90 71 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81885b6:	c7 44 24 04 a2 10 b9 	movl   $0x8b910a2,0x4(%esp)
 81885bd:	08 
 81885be:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 81885c4:	89 04 24             	mov    %eax,(%esp)
 81885c7:	e8 bc 71 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81885cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81885d1:	e9 70 03 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 81885d6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81885d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81885dd:	8b 45 08             	mov    0x8(%ebp),%eax
 81885e0:	89 04 24             	mov    %eax,(%esp)
 81885e3:	e8 d4 03 00 00       	call   81889bc <_ZN4ARAD16Arad_DataManager18__insertGameScriptEPNS_24Arad_InterfaceGameScriptE>
 81885e8:	83 f0 01             	xor    $0x1,%eax
 81885eb:	84 c0                	test   %al,%al
 81885ed:	74 56                	je     8188645 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x34d>
 81885ef:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81885f6:	00 
 81885f7:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81885fe:	00 
 81885ff:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188606:	00 
 8188607:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 818860e:	00 
 818860f:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 8188616:	08 
 8188617:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 818861d:	89 04 24             	mov    %eax,(%esp)
 8188620:	e8 21 71 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8188625:	c7 44 24 04 a2 10 b9 	movl   $0x8b910a2,0x4(%esp)
 818862c:	08 
 818862d:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8188633:	89 04 24             	mov    %eax,(%esp)
 8188636:	e8 4d 71 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818863b:	b8 00 00 00 00       	mov    $0x0,%eax
 8188640:	e9 01 03 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 8188645:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 818864c:	00 
 818864d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8188654:	00 
 8188655:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 818865c:	00 
 818865d:	c7 44 24 08 66 00 00 	movl   $0x66,0x8(%esp)
 8188664:	00 
 8188665:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 818866c:	08 
 818866d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8188673:	89 04 24             	mov    %eax,(%esp)
 8188676:	e8 cb 70 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 818867b:	c7 44 24 04 a7 10 b9 	movl   $0x8b910a7,0x4(%esp)
 8188682:	08 
 8188683:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8188689:	89 04 24             	mov    %eax,(%esp)
 818868c:	e8 f7 70 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8188691:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8188698:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 818869f:	00 
 81886a0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81886a7:	00 
 81886a8:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81886af:	00 
 81886b0:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 81886b7:	00 
 81886b8:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 81886bf:	08 
 81886c0:	8d 45 80             	lea    -0x80(%ebp),%eax
 81886c3:	89 04 24             	mov    %eax,(%esp)
 81886c6:	e8 7b 70 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81886cb:	c7 44 24 04 d4 10 b9 	movl   $0x8b910d4,0x4(%esp)
 81886d2:	08 
 81886d3:	8d 45 80             	lea    -0x80(%ebp),%eax
 81886d6:	89 04 24             	mov    %eax,(%esp)
 81886d9:	e8 aa 70 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81886de:	8b 45 08             	mov    0x8(%ebp),%eax
 81886e1:	83 c0 1c             	add    $0x1c,%eax
 81886e4:	c7 44 24 04 f5 10 b9 	movl   $0x8b910f5,0x4(%esp)
 81886eb:	08 
 81886ec:	89 04 24             	mov    %eax,(%esp)
 81886ef:	e8 f8 97 01 00       	call   81a1eec <_ZN17Arad_ScriptLoader4openEPKc>
 81886f4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81886f7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81886fb:	0f 95 c0             	setne  %al
 81886fe:	84 c0                	test   %al,%al
 8188700:	74 57                	je     8188759 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x461>
 8188702:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8188709:	00 
 818870a:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8188711:	00 
 8188712:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188719:	00 
 818871a:	c7 44 24 08 97 00 00 	movl   $0x97,0x8(%esp)
 8188721:	00 
 8188722:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 8188729:	08 
 818872a:	8d 45 90             	lea    -0x70(%ebp),%eax
 818872d:	89 04 24             	mov    %eax,(%esp)
 8188730:	e8 11 70 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8188735:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8188738:	89 44 24 08          	mov    %eax,0x8(%esp)
 818873c:	c7 44 24 04 14 11 b9 	movl   $0x8b91114,0x4(%esp)
 8188743:	08 
 8188744:	8d 45 90             	lea    -0x70(%ebp),%eax
 8188747:	89 04 24             	mov    %eax,(%esp)
 818874a:	e8 39 70 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818874f:	b8 00 00 00 00       	mov    $0x0,%eax
 8188754:	e9 ed 01 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 8188759:	8b 45 08             	mov    0x8(%ebp),%eax
 818875c:	83 c0 38             	add    $0x38,%eax
 818875f:	c7 44 24 04 f5 10 b9 	movl   $0x8b910f5,0x4(%esp)
 8188766:	08 
 8188767:	89 04 24             	mov    %eax,(%esp)
 818876a:	e8 7d 97 01 00       	call   81a1eec <_ZN17Arad_ScriptLoader4openEPKc>
 818876f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8188772:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8188776:	0f 95 c0             	setne  %al
 8188779:	84 c0                	test   %al,%al
 818877b:	74 57                	je     81887d4 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x4dc>
 818877d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8188784:	00 
 8188785:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 818878c:	00 
 818878d:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188794:	00 
 8188795:	c7 44 24 08 9d 00 00 	movl   $0x9d,0x8(%esp)
 818879c:	00 
 818879d:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 81887a4:	08 
 81887a5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81887a8:	89 04 24             	mov    %eax,(%esp)
 81887ab:	e8 96 6f 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81887b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81887b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81887b7:	c7 44 24 04 14 11 b9 	movl   $0x8b91114,0x4(%esp)
 81887be:	08 
 81887bf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81887c2:	89 04 24             	mov    %eax,(%esp)
 81887c5:	e8 be 6f 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81887ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81887cf:	e9 72 01 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 81887d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81887d7:	83 c0 54             	add    $0x54,%eax
 81887da:	c7 44 24 04 f5 10 b9 	movl   $0x8b910f5,0x4(%esp)
 81887e1:	08 
 81887e2:	89 04 24             	mov    %eax,(%esp)
 81887e5:	e8 02 97 01 00       	call   81a1eec <_ZN17Arad_ScriptLoader4openEPKc>
 81887ea:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81887ed:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81887f1:	0f 95 c0             	setne  %al
 81887f4:	84 c0                	test   %al,%al
 81887f6:	74 57                	je     818884f <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x557>
 81887f8:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81887ff:	00 
 8188800:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8188807:	00 
 8188808:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 818880f:	00 
 8188810:	c7 44 24 08 a3 00 00 	movl   $0xa3,0x8(%esp)
 8188817:	00 
 8188818:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 818881f:	08 
 8188820:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8188823:	89 04 24             	mov    %eax,(%esp)
 8188826:	e8 1b 6f 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 818882b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 818882e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8188832:	c7 44 24 04 14 11 b9 	movl   $0x8b91114,0x4(%esp)
 8188839:	08 
 818883a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 818883d:	89 04 24             	mov    %eax,(%esp)
 8188840:	e8 43 6f 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8188845:	b8 00 00 00 00       	mov    $0x0,%eax
 818884a:	e9 f7 00 00 00       	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 818884f:	8b 45 08             	mov    0x8(%ebp),%eax
 8188852:	83 c0 70             	add    $0x70,%eax
 8188855:	c7 44 24 04 47 11 b9 	movl   $0x8b91147,0x4(%esp)
 818885c:	08 
 818885d:	89 04 24             	mov    %eax,(%esp)
 8188860:	e8 87 96 01 00       	call   81a1eec <_ZN17Arad_ScriptLoader4openEPKc>
 8188865:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8188868:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 818886c:	0f 95 c0             	setne  %al
 818886f:	84 c0                	test   %al,%al
 8188871:	74 54                	je     81888c7 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x5cf>
 8188873:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 818887a:	00 
 818887b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8188882:	00 
 8188883:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 818888a:	00 
 818888b:	c7 44 24 08 b2 00 00 	movl   $0xb2,0x8(%esp)
 8188892:	00 
 8188893:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 818889a:	08 
 818889b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 818889e:	89 04 24             	mov    %eax,(%esp)
 81888a1:	e8 a0 6e 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81888a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81888a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81888ad:	c7 44 24 04 64 11 b9 	movl   $0x8b91164,0x4(%esp)
 81888b4:	08 
 81888b5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81888b8:	89 04 24             	mov    %eax,(%esp)
 81888bb:	e8 c8 6e 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81888c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81888c5:	eb 7f                	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 81888c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81888ca:	05 a0 00 00 00       	add    $0xa0,%eax
 81888cf:	c7 44 24 04 94 11 b9 	movl   $0x8b91194,0x4(%esp)
 81888d6:	08 
 81888d7:	89 04 24             	mov    %eax,(%esp)
 81888da:	e8 0d 96 01 00       	call   81a1eec <_ZN17Arad_ScriptLoader4openEPKc>
 81888df:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81888e2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81888e6:	0f 95 c0             	setne  %al
 81888e9:	84 c0                	test   %al,%al
 81888eb:	74 54                	je     8188941 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x649>
 81888ed:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81888f4:	00 
 81888f5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81888fc:	00 
 81888fd:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8188904:	00 
 8188905:	c7 44 24 08 bb 00 00 	movl   $0xbb,0x8(%esp)
 818890c:	00 
 818890d:	c7 44 24 04 74 1d b9 	movl   $0x8b91d74,0x4(%esp)
 8188914:	08 
 8188915:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8188918:	89 04 24             	mov    %eax,(%esp)
 818891b:	e8 26 6e 3c 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8188920:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8188923:	89 44 24 08          	mov    %eax,0x8(%esp)
 8188927:	c7 44 24 04 b8 11 b9 	movl   $0x8b911b8,0x4(%esp)
 818892e:	08 
 818892f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8188932:	89 04 24             	mov    %eax,(%esp)
 8188935:	e8 4e 6e 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818893a:	b8 00 00 00 00       	mov    $0x0,%eax
 818893f:	eb 05                	jmp    8188946 <_ZN4ARAD16Arad_DataManager12initAradDataEv+0x64e>
 8188941:	b8 01 00 00 00       	mov    $0x1,%eax
 8188946:	81 c4 1c 01 00 00    	add    $0x11c,%esp
 818894c:	5b                   	pop    %ebx
 818894d:	5e                   	pop    %esi
 818894e:	5f                   	pop    %edi
 818894f:	5d                   	pop    %ebp
 8188950:	c3                   	ret
 8188951:	90                   	nop

```

```c
// ARAD::Arad_DataManager::initAradData @ 0x81882f8

/* ARAD::Arad_DataManager::initAradData() */

undefined4 __thiscall ARAD::Arad_DataManager::initAradData(Arad_DataManager *this)

{
  bool bVar1;
  char cVar2;
  Arad_EventPeriodDataManager *this_00;
  Arad_StatisticsEventItemList *this_01;
  undefined4 uVar3;
  cMyTrace local_104 [16];
  cMyTrace local_f4 [16];
  cMyTrace local_e4 [16];
  cMyTrace local_d4 [16];
  cMyTrace local_c4 [16];
  cMyTrace local_b4 [16];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  Arad_EventPeriodDataManager *local_24;
  int local_20;
  
  local_24 = (Arad_EventPeriodDataManager *)0x0;
  cMyTrace::cMyTrace(local_104,"initAradData",0x48,9,true,false);
  cMyTrace::operator()(local_104,"\t- Loading Event Period Script - ");
  this_00 = operator_new(0x44);
                    /* try { // try from 0818836a to 0818836e has its CatchHandler @ 08188371 */
  Arad_EventPeriodDataManager::Arad_EventPeriodDataManager(this_00);
  local_24 = this_00;
  if ((this_00 == (Arad_EventPeriodDataManager *)0x0) ||
     (cVar2 = (**(code **)(*(int *)this_00 + 8))(this_00), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    cVar2 = __insertGameScript(this,(Arad_InterfaceGameScript *)local_24);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_d4,"initAradData",0x55,9,false,true);
      cMyTrace::operator()(local_d4,"Success");
      cMyTrace::cMyTrace(local_c4,"initAradData",0x59,9,true,false);
      cMyTrace::operator()(local_c4,"\t- Loading Statistics Item List - ");
      this_01 = operator_new(0x14);
                    /* try { // try from 0818852d to 08188531 has its CatchHandler @ 08188534 */
      Arad_StatisticsEventItemList::Arad_StatisticsEventItemList(this_01);
      local_24 = (Arad_EventPeriodDataManager *)this_01;
      if ((this_01 == (Arad_StatisticsEventItemList *)0x0) ||
         (cVar2 = (**(code **)(*(int *)this_01 + 8))(this_01), cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        cMyTrace::cMyTrace(local_b4,"initAradData",0x5d,9,true,true);
        cMyTrace::operator()(local_b4,"Fail");
        uVar3 = 0;
      }
      else {
        cVar2 = __insertGameScript(this,(Arad_InterfaceGameScript *)local_24);
        if (cVar2 == '\x01') {
          cMyTrace::cMyTrace(local_94,"initAradData",0x66,9,false,true);
          cMyTrace::operator()(local_94,"Success");
          local_20 = 0;
          cMyTrace::cMyTrace(local_84,"initAradData",0x94,9,true,false);
          cMyTrace::operator()(local_84,"\t- Loading NexonFolder Script - ");
          local_20 = Arad_ScriptLoader::open
                               ((Arad_ScriptLoader *)(this + 0x1c),"Nexon/AradSpecialUseItems.txt");
          if (local_20 == 0) {
            local_20 = Arad_ScriptLoader::open
                                 ((Arad_ScriptLoader *)(this + 0x38),"Nexon/AradSpecialUseItems.txt"
                                 );
            if (local_20 == 0) {
              local_20 = Arad_ScriptLoader::open
                                   ((Arad_ScriptLoader *)(this + 0x54),
                                    "Nexon/AradSpecialUseItems.txt");
              if (local_20 == 0) {
                local_20 = Arad_ScriptLoader::open
                                     ((Arad_ScriptLoader *)(this + 0x70),"Nexon/CeraShopMileage.txt"
                                     );
                if (local_20 == 0) {
                  local_20 = Arad_ScriptLoader::open
                                       ((Arad_ScriptLoader *)(this + 0xa0),
                                        "Nexon/VillageAttackRewardItem.txt");
                  if (local_20 == 0) {
                    uVar3 = 1;
                  }
                  else {
                    cMyTrace::cMyTrace(local_34,"initAradData",0xbb,9,true,true);
                    cMyTrace::operator()
                              (local_34,"\t- VillageAttackRewardItem script load fail. (line:%d)",
                               local_20);
                    uVar3 = 0;
                  }
                }
                else {
                  cMyTrace::cMyTrace(local_44,"initAradData",0xb2,9,true,true);
                  cMyTrace::operator()
                            (local_44,"\t- CeraShopMileage script load fail. (line:%d)",local_20);
                  uVar3 = 0;
                }
              }
              else {
                cMyTrace::cMyTrace(local_54,"initAradData",0xa3,9,true,true);
                cMyTrace::operator()
                          (local_54,"\t- AradSpecialUseItems script load fail. (line:%d)",local_20);
                uVar3 = 0;
              }
            }
            else {
              cMyTrace::cMyTrace(local_64,"initAradData",0x9d,9,true,true);
              cMyTrace::operator()
                        (local_64,"\t- AradSpecialUseItems script load fail. (line:%d)",local_20);
              uVar3 = 0;
            }
          }
          else {
            cMyTrace::cMyTrace(local_74,"initAradData",0x97,9,true,true);
            cMyTrace::operator()
                      (local_74,"\t- AradSpecialUseItems script load fail. (line:%d)",local_20);
            uVar3 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_a4,"initAradData",99,9,true,true);
          cMyTrace::operator()(local_a4,"Fail");
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    cMyTrace::cMyTrace(local_e4,"initAradData",0x52,9,true,true);
    cMyTrace::operator()(local_e4,"Fail");
    return 0;
  }
  cMyTrace::cMyTrace(local_f4,"initAradData",0x4c,9,true,true);
  cMyTrace::operator()(local_f4,"Fail");
  return 0;
}

```

---

## ~Arad_DataManager

```asm
// === 08188162 ARAD::Arad_DataManager::~Arad_DataManager  [0x08188162-0x81882ab] ===
 8188162:	55                   	push   %ebp
 8188163:	89 e5                	mov    %esp,%ebp
 8188165:	56                   	push   %esi
 8188166:	53                   	push   %ebx
 8188167:	83 ec 10             	sub    $0x10,%esp
 818816a:	8b 45 08             	mov    0x8(%ebp),%eax
 818816d:	c7 00 90 1d b9 08    	movl   $0x8b91d90,(%eax)
 8188173:	8b 45 08             	mov    0x8(%ebp),%eax
 8188176:	89 04 24             	mov    %eax,(%esp)
 8188179:	e8 62 01 00 00       	call   81882e0 <_ZN4ARAD16Arad_DataManager7DestroyEv>
 818817e:	eb 1a                	jmp    818819a <_ZN4ARAD16Arad_DataManagerD1Ev+0x38>
 8188180:	89 d3                	mov    %edx,%ebx
 8188182:	89 c6                	mov    %eax,%esi
 8188184:	8b 45 08             	mov    0x8(%ebp),%eax
 8188187:	05 a0 00 00 00       	add    $0xa0,%eax
 818818c:	89 04 24             	mov    %eax,(%esp)
 818818f:	e8 8a 0c 00 00       	call   8188e1e <_ZN28Arad_VillageAttackRewardItemD1Ev>
 8188194:	89 f0                	mov    %esi,%eax
 8188196:	89 da                	mov    %ebx,%edx
 8188198:	eb 12                	jmp    81881ac <_ZN4ARAD16Arad_DataManagerD1Ev+0x4a>
 818819a:	8b 45 08             	mov    0x8(%ebp),%eax
 818819d:	05 a0 00 00 00       	add    $0xa0,%eax
 81881a2:	89 04 24             	mov    %eax,(%esp)
 81881a5:	e8 74 0c 00 00       	call   8188e1e <_ZN28Arad_VillageAttackRewardItemD1Ev>
 81881aa:	eb 1a                	jmp    81881c6 <_ZN4ARAD16Arad_DataManagerD1Ev+0x64>
 81881ac:	89 d3                	mov    %edx,%ebx
 81881ae:	89 c6                	mov    %eax,%esi
 81881b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81881b3:	05 84 00 00 00       	add    $0x84,%eax
 81881b8:	89 04 24             	mov    %eax,(%esp)
 81881bb:	e8 aa 0b 00 00       	call   8188d6a <_ZN30Arad_OnePlusCardEvent_ItemListD1Ev>
 81881c0:	89 f0                	mov    %esi,%eax
 81881c2:	89 da                	mov    %ebx,%edx
 81881c4:	eb 12                	jmp    81881d8 <_ZN4ARAD16Arad_DataManagerD1Ev+0x76>
 81881c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81881c9:	05 84 00 00 00       	add    $0x84,%eax
 81881ce:	89 04 24             	mov    %eax,(%esp)
 81881d1:	e8 94 0b 00 00       	call   8188d6a <_ZN30Arad_OnePlusCardEvent_ItemListD1Ev>
 81881d6:	eb 18                	jmp    81881f0 <_ZN4ARAD16Arad_DataManagerD1Ev+0x8e>
 81881d8:	89 d3                	mov    %edx,%ebx
 81881da:	89 c6                	mov    %eax,%esi
 81881dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81881df:	83 c0 70             	add    $0x70,%eax
 81881e2:	89 04 24             	mov    %eax,(%esp)
 81881e5:	e8 00 0b 00 00       	call   8188cea <_ZN17Arad_Mileage_DataD1Ev>
 81881ea:	89 f0                	mov    %esi,%eax
 81881ec:	89 da                	mov    %ebx,%edx
 81881ee:	eb 10                	jmp    8188200 <_ZN4ARAD16Arad_DataManagerD1Ev+0x9e>
 81881f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81881f3:	83 c0 70             	add    $0x70,%eax
 81881f6:	89 04 24             	mov    %eax,(%esp)
 81881f9:	e8 ec 0a 00 00       	call   8188cea <_ZN17Arad_Mileage_DataD1Ev>
 81881fe:	eb 18                	jmp    8188218 <_ZN4ARAD16Arad_DataManagerD1Ev+0xb6>
 8188200:	89 d3                	mov    %edx,%ebx
 8188202:	89 c6                	mov    %eax,%esi
 8188204:	8b 45 08             	mov    0x8(%ebp),%eax
 8188207:	83 c0 54             	add    $0x54,%eax
 818820a:	89 04 24             	mov    %eax,(%esp)
 818820d:	e8 24 0a 00 00       	call   8188c36 <_ZN13AradBonusItemD1Ev>
 8188212:	89 f0                	mov    %esi,%eax
 8188214:	89 da                	mov    %ebx,%edx
 8188216:	eb 10                	jmp    8188228 <_ZN4ARAD16Arad_DataManagerD1Ev+0xc6>
 8188218:	8b 45 08             	mov    0x8(%ebp),%eax
 818821b:	83 c0 54             	add    $0x54,%eax
 818821e:	89 04 24             	mov    %eax,(%esp)
 8188221:	e8 10 0a 00 00       	call   8188c36 <_ZN13AradBonusItemD1Ev>
 8188226:	eb 18                	jmp    8188240 <_ZN4ARAD16Arad_DataManagerD1Ev+0xde>
 8188228:	89 d3                	mov    %edx,%ebx
 818822a:	89 c6                	mov    %eax,%esi
 818822c:	8b 45 08             	mov    0x8(%ebp),%eax
 818822f:	83 c0 38             	add    $0x38,%eax
 8188232:	89 04 24             	mov    %eax,(%esp)
 8188235:	e8 9e 09 00 00       	call   8188bd8 <_ZN17PurchaseLimitItemD1Ev>
 818823a:	89 f0                	mov    %esi,%eax
 818823c:	89 da                	mov    %ebx,%edx
 818823e:	eb 10                	jmp    8188250 <_ZN4ARAD16Arad_DataManagerD1Ev+0xee>
 8188240:	8b 45 08             	mov    0x8(%ebp),%eax
 8188243:	83 c0 38             	add    $0x38,%eax
 8188246:	89 04 24             	mov    %eax,(%esp)
 8188249:	e8 8a 09 00 00       	call   8188bd8 <_ZN17PurchaseLimitItemD1Ev>
 818824e:	eb 18                	jmp    8188268 <_ZN4ARAD16Arad_DataManagerD1Ev+0x106>
 8188250:	89 d3                	mov    %edx,%ebx
 8188252:	89 c6                	mov    %eax,%esi
 8188254:	8b 45 08             	mov    0x8(%ebp),%eax
 8188257:	83 c0 1c             	add    $0x1c,%eax
 818825a:	89 04 24             	mov    %eax,(%esp)
 818825d:	e8 18 09 00 00       	call   8188b7a <_ZN13ExceptionItemD1Ev>
 8188262:	89 f0                	mov    %esi,%eax
 8188264:	89 da                	mov    %ebx,%edx
 8188266:	eb 10                	jmp    8188278 <_ZN4ARAD16Arad_DataManagerD1Ev+0x116>
 8188268:	8b 45 08             	mov    0x8(%ebp),%eax
 818826b:	83 c0 1c             	add    $0x1c,%eax
 818826e:	89 04 24             	mov    %eax,(%esp)
 8188271:	e8 04 09 00 00       	call   8188b7a <_ZN13ExceptionItemD1Ev>
 8188276:	eb 1e                	jmp    8188296 <_ZN4ARAD16Arad_DataManagerD1Ev+0x134>
 8188278:	89 d3                	mov    %edx,%ebx
 818827a:	89 c6                	mov    %eax,%esi
 818827c:	8b 45 08             	mov    0x8(%ebp),%eax
 818827f:	83 c0 04             	add    $0x4,%eax
 8188282:	89 04 24             	mov    %eax,(%esp)
 8188285:	e8 22 0a 00 00       	call   8188cac <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEED1Ev>
 818828a:	89 f0                	mov    %esi,%eax
 818828c:	89 da                	mov    %ebx,%edx
 818828e:	89 04 24             	mov    %eax,(%esp)
 8188291:	e8 ba b4 95 00       	call   8ae3750 <_Unwind_Resume>
 8188296:	8b 45 08             	mov    0x8(%ebp),%eax
 8188299:	83 c0 04             	add    $0x4,%eax
 818829c:	89 04 24             	mov    %eax,(%esp)
 818829f:	e8 08 0a 00 00       	call   8188cac <_ZNSt3mapISsPN4ARAD24Arad_InterfaceGameScriptESt4lessISsESaISt4pairIKSsS2_EEED1Ev>
 81882a4:	83 c4 10             	add    $0x10,%esp
 81882a7:	5b                   	pop    %ebx
 81882a8:	5e                   	pop    %esi
 81882a9:	5d                   	pop    %ebp
 81882aa:	c3                   	ret
 81882ab:	90                   	nop

```

```c
// ARAD::Arad_DataManager::~Arad_DataManager @ 0x8188162

/* ARAD::Arad_DataManager::~Arad_DataManager() */

void __thiscall ARAD::Arad_DataManager::~Arad_DataManager(Arad_DataManager *this)

{
  *(undefined ***)this = &PTR_Load_08b91d90;
                    /* try { // try from 08188179 to 0818817d has its CatchHandler @ 08188180 */
  Destroy(this);
                    /* try { // try from 081881a5 to 081881a9 has its CatchHandler @ 081881ac */
  Arad_VillageAttackRewardItem::~Arad_VillageAttackRewardItem
            ((Arad_VillageAttackRewardItem *)(this + 0xa0));
                    /* try { // try from 081881d1 to 081881d5 has its CatchHandler @ 081881d8 */
  Arad_OnePlusCardEvent_ItemList::~Arad_OnePlusCardEvent_ItemList
            ((Arad_OnePlusCardEvent_ItemList *)(this + 0x84));
                    /* try { // try from 081881f9 to 081881fd has its CatchHandler @ 08188200 */
  Arad_Mileage_Data::~Arad_Mileage_Data((Arad_Mileage_Data *)(this + 0x70));
                    /* try { // try from 08188221 to 08188225 has its CatchHandler @ 08188228 */
  AradBonusItem::~AradBonusItem((AradBonusItem *)(this + 0x54));
                    /* try { // try from 08188249 to 0818824d has its CatchHandler @ 08188250 */
  PurchaseLimitItem::~PurchaseLimitItem((PurchaseLimitItem *)(this + 0x38));
                    /* try { // try from 08188271 to 08188275 has its CatchHandler @ 08188278 */
  ExceptionItem::~ExceptionItem((ExceptionItem *)(this + 0x1c));
  std::
  map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
  ::~map((map<std::string,ARAD::Arad_InterfaceGameScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,ARAD::Arad_InterfaceGameScript*>>>
          *)(this + 4));
  return;
}

```

