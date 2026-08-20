# Arad_DataManager

`_ZN4ARAD16Arad_DataManagerC1Ev`

`ARAD::Arad_DataManager::Arad_DataManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x08188030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08188030  _ZN4ARAD16Arad_DataManagerC1Ev
#           ARAD::Arad_DataManager::Arad_DataManager()
# range [0x08188030, 0x08188161]
08188030 +0x000:  push   %ebp
08188031 +0x001:  mov    %esp,%ebp
08188033 +0x003:  push   %esi
08188034 +0x004:  push   %ebx
08188035 +0x005:  sub    $0x10,%esp
08188038 +0x008:  mov    0x8(%ebp),%eax
0818803b +0x00b:  mov    %eax,(%esp)
0818803e +0x00e:  call   08188f66 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x46b>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x46b
08188043 +0x013:  mov    0x8(%ebp),%eax
08188046 +0x016:  mov    %eax,(%esp)
08188049 +0x019:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
0818804e +0x01e:  mov    0x8(%ebp),%eax
08188051 +0x021:  movl   $&_ZTVN4ARAD16Arad_DataManagerE+0x8,(%eax)
08188057 +0x027:  mov    0x8(%ebp),%eax
0818805a +0x02a:  add    $0x4,%eax
0818805d +0x02d:  mov    %eax,(%esp)
08188060 +0x030:  call   08188f6c <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x471>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x471
08188065 +0x035:  mov    0x8(%ebp),%eax
08188068 +0x038:  add    $0x1c,%eax
0818806b +0x03b:  mov    %eax,(%esp)
0818806e +0x03e:  call   08188b50 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x55>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x55
08188073 +0x043:  mov    0x8(%ebp),%eax
08188076 +0x046:  add    $0x38,%eax
08188079 +0x049:  mov    %eax,(%esp)
0818807c +0x04c:  call   08188bae <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0xb3>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0xb3
08188081 +0x051:  mov    0x8(%ebp),%eax
08188084 +0x054:  add    $0x54,%eax
08188087 +0x057:  mov    %eax,(%esp)
0818808a +0x05a:  call   08188c0c <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x111>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x111
0818808f +0x05f:  mov    0x8(%ebp),%eax
08188092 +0x062:  add    $0x70,%eax
08188095 +0x065:  mov    %eax,(%esp)
08188098 +0x068:  call   08188cc0 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1c5>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1c5
0818809d +0x06d:  mov    0x8(%ebp),%eax
081880a0 +0x070:  add    $0x84,%eax
081880a5 +0x075:  mov    %eax,(%esp)
081880a8 +0x078:  call   08188d0a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x20f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x20f
081880ad +0x07d:  mov    0x8(%ebp),%eax
081880b0 +0x080:  add    $0xa0,%eax
081880b5 +0x085:  mov    %eax,(%esp)
081880b8 +0x088:  call   08188dbe <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x2c3>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x2c3
081880bd +0x08d:  jmp    0818815a <+0x12a>
081880c2 +0x092:  mov    %edx,%ebx
081880c4 +0x094:  mov    %eax,%esi
081880c6 +0x096:  mov    0x8(%ebp),%eax
081880c9 +0x099:  add    $0x84,%eax
081880ce +0x09e:  mov    %eax,(%esp)
081880d1 +0x0a1:  call   08188d6a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x26f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x26f
081880d6 +0x0a6:  mov    %esi,%eax
081880d8 +0x0a8:  mov    %ebx,%edx
081880da +0x0aa:  jmp    081880dc <+0xac>
081880dc +0x0ac:  mov    %edx,%ebx
081880de +0x0ae:  mov    %eax,%esi
081880e0 +0x0b0:  mov    0x8(%ebp),%eax
081880e3 +0x0b3:  add    $0x70,%eax
081880e6 +0x0b6:  mov    %eax,(%esp)
081880e9 +0x0b9:  call   08188cea <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1ef>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1ef
081880ee +0x0be:  mov    %esi,%eax
081880f0 +0x0c0:  mov    %ebx,%edx
081880f2 +0x0c2:  jmp    081880f4 <+0xc4>
081880f4 +0x0c4:  mov    %edx,%ebx
081880f6 +0x0c6:  mov    %eax,%esi
081880f8 +0x0c8:  mov    0x8(%ebp),%eax
081880fb +0x0cb:  add    $0x54,%eax
081880fe +0x0ce:  mov    %eax,(%esp)
08188101 +0x0d1:  call   08188c36 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x13b>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x13b
08188106 +0x0d6:  mov    %esi,%eax
08188108 +0x0d8:  mov    %ebx,%edx
0818810a +0x0da:  jmp    0818810c <+0xdc>
0818810c +0x0dc:  mov    %edx,%ebx
0818810e +0x0de:  mov    %eax,%esi
08188110 +0x0e0:  mov    0x8(%ebp),%eax
08188113 +0x0e3:  add    $0x38,%eax
08188116 +0x0e6:  mov    %eax,(%esp)
08188119 +0x0e9:  call   08188bd8 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0xdd>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0xdd
0818811e +0x0ee:  mov    %esi,%eax
08188120 +0x0f0:  mov    %ebx,%edx
08188122 +0x0f2:  jmp    08188124 <+0xf4>
08188124 +0x0f4:  mov    %edx,%ebx
08188126 +0x0f6:  mov    %eax,%esi
08188128 +0x0f8:  mov    0x8(%ebp),%eax
0818812b +0x0fb:  add    $0x1c,%eax
0818812e +0x0fe:  mov    %eax,(%esp)
08188131 +0x101:  call   08188b7a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x7f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x7f
08188136 +0x106:  mov    %esi,%eax
08188138 +0x108:  mov    %ebx,%edx
0818813a +0x10a:  jmp    0818813c <+0x10c>
0818813c +0x10c:  mov    %edx,%ebx
0818813e +0x10e:  mov    %eax,%esi
08188140 +0x110:  mov    0x8(%ebp),%eax
08188143 +0x113:  add    $0x4,%eax
08188146 +0x116:  mov    %eax,(%esp)
08188149 +0x119:  call   08188cac <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1b1>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1b1
0818814e +0x11e:  mov    %esi,%eax
08188150 +0x120:  mov    %ebx,%edx
08188152 +0x122:  mov    %eax,(%esp)
08188155 +0x125:  call   08ae3750 <_Unwind_Resume>
0818815a +0x12a:  add    $0x10,%esp
0818815d +0x12d:  pop    %ebx
0818815e +0x12e:  pop    %esi
0818815f +0x12f:  pop    %ebp
08188160 +0x130:  ret
08188161 +0x131:  nop
```

## 反编译 C

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
