# ~Arad_DataManager

`_ZN4ARAD16Arad_DataManagerD1Ev`

`ARAD::Arad_DataManager::~Arad_DataManager()`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DataManager` | `0x08188162` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08188162  _ZN4ARAD16Arad_DataManagerD1Ev
#           ARAD::Arad_DataManager::~Arad_DataManager()
# range [0x08188162, 0x081882ab]
08188162 +0x000:  push   %ebp
08188163 +0x001:  mov    %esp,%ebp
08188165 +0x003:  push   %esi
08188166 +0x004:  push   %ebx
08188167 +0x005:  sub    $0x10,%esp
0818816a +0x008:  mov    0x8(%ebp),%eax
0818816d +0x00b:  movl   $&_ZTVN4ARAD16Arad_DataManagerE+0x8,(%eax)
08188173 +0x011:  mov    0x8(%ebp),%eax
08188176 +0x014:  mov    %eax,(%esp)
08188179 +0x017:  call   081882e0 <_ZN4ARAD16Arad_DataManager7DestroyEv>  ; ARAD::Arad_DataManager::Destroy()
0818817e +0x01c:  jmp    0818819a <+0x38>
08188180 +0x01e:  mov    %edx,%ebx
08188182 +0x020:  mov    %eax,%esi
08188184 +0x022:  mov    0x8(%ebp),%eax
08188187 +0x025:  add    $0xa0,%eax
0818818c +0x02a:  mov    %eax,(%esp)
0818818f +0x02d:  call   08188e1e <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x323>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x323
08188194 +0x032:  mov    %esi,%eax
08188196 +0x034:  mov    %ebx,%edx
08188198 +0x036:  jmp    081881ac <+0x4a>
0818819a +0x038:  mov    0x8(%ebp),%eax
0818819d +0x03b:  add    $0xa0,%eax
081881a2 +0x040:  mov    %eax,(%esp)
081881a5 +0x043:  call   08188e1e <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x323>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x323
081881aa +0x048:  jmp    081881c6 <+0x64>
081881ac +0x04a:  mov    %edx,%ebx
081881ae +0x04c:  mov    %eax,%esi
081881b0 +0x04e:  mov    0x8(%ebp),%eax
081881b3 +0x051:  add    $0x84,%eax
081881b8 +0x056:  mov    %eax,(%esp)
081881bb +0x059:  call   08188d6a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x26f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x26f
081881c0 +0x05e:  mov    %esi,%eax
081881c2 +0x060:  mov    %ebx,%edx
081881c4 +0x062:  jmp    081881d8 <+0x76>
081881c6 +0x064:  mov    0x8(%ebp),%eax
081881c9 +0x067:  add    $0x84,%eax
081881ce +0x06c:  mov    %eax,(%esp)
081881d1 +0x06f:  call   08188d6a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x26f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x26f
081881d6 +0x074:  jmp    081881f0 <+0x8e>
081881d8 +0x076:  mov    %edx,%ebx
081881da +0x078:  mov    %eax,%esi
081881dc +0x07a:  mov    0x8(%ebp),%eax
081881df +0x07d:  add    $0x70,%eax
081881e2 +0x080:  mov    %eax,(%esp)
081881e5 +0x083:  call   08188cea <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1ef>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1ef
081881ea +0x088:  mov    %esi,%eax
081881ec +0x08a:  mov    %ebx,%edx
081881ee +0x08c:  jmp    08188200 <+0x9e>
081881f0 +0x08e:  mov    0x8(%ebp),%eax
081881f3 +0x091:  add    $0x70,%eax
081881f6 +0x094:  mov    %eax,(%esp)
081881f9 +0x097:  call   08188cea <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1ef>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1ef
081881fe +0x09c:  jmp    08188218 <+0xb6>
08188200 +0x09e:  mov    %edx,%ebx
08188202 +0x0a0:  mov    %eax,%esi
08188204 +0x0a2:  mov    0x8(%ebp),%eax
08188207 +0x0a5:  add    $0x54,%eax
0818820a +0x0a8:  mov    %eax,(%esp)
0818820d +0x0ab:  call   08188c36 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x13b>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x13b
08188212 +0x0b0:  mov    %esi,%eax
08188214 +0x0b2:  mov    %ebx,%edx
08188216 +0x0b4:  jmp    08188228 <+0xc6>
08188218 +0x0b6:  mov    0x8(%ebp),%eax
0818821b +0x0b9:  add    $0x54,%eax
0818821e +0x0bc:  mov    %eax,(%esp)
08188221 +0x0bf:  call   08188c36 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x13b>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x13b
08188226 +0x0c4:  jmp    08188240 <+0xde>
08188228 +0x0c6:  mov    %edx,%ebx
0818822a +0x0c8:  mov    %eax,%esi
0818822c +0x0ca:  mov    0x8(%ebp),%eax
0818822f +0x0cd:  add    $0x38,%eax
08188232 +0x0d0:  mov    %eax,(%esp)
08188235 +0x0d3:  call   08188bd8 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0xdd>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0xdd
0818823a +0x0d8:  mov    %esi,%eax
0818823c +0x0da:  mov    %ebx,%edx
0818823e +0x0dc:  jmp    08188250 <+0xee>
08188240 +0x0de:  mov    0x8(%ebp),%eax
08188243 +0x0e1:  add    $0x38,%eax
08188246 +0x0e4:  mov    %eax,(%esp)
08188249 +0x0e7:  call   08188bd8 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0xdd>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0xdd
0818824e +0x0ec:  jmp    08188268 <+0x106>
08188250 +0x0ee:  mov    %edx,%ebx
08188252 +0x0f0:  mov    %eax,%esi
08188254 +0x0f2:  mov    0x8(%ebp),%eax
08188257 +0x0f5:  add    $0x1c,%eax
0818825a +0x0f8:  mov    %eax,(%esp)
0818825d +0x0fb:  call   08188b7a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x7f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x7f
08188262 +0x100:  mov    %esi,%eax
08188264 +0x102:  mov    %ebx,%edx
08188266 +0x104:  jmp    08188278 <+0x116>
08188268 +0x106:  mov    0x8(%ebp),%eax
0818826b +0x109:  add    $0x1c,%eax
0818826e +0x10c:  mov    %eax,(%esp)
08188271 +0x10f:  call   08188b7a <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x7f>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x7f
08188276 +0x114:  jmp    08188296 <+0x134>
08188278 +0x116:  mov    %edx,%ebx
0818827a +0x118:  mov    %eax,%esi
0818827c +0x11a:  mov    0x8(%ebp),%eax
0818827f +0x11d:  add    $0x4,%eax
08188282 +0x120:  mov    %eax,(%esp)
08188285 +0x123:  call   08188cac <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1b1>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1b1
0818828a +0x128:  mov    %esi,%eax
0818828c +0x12a:  mov    %ebx,%edx
0818828e +0x12c:  mov    %eax,(%esp)
08188291 +0x12f:  call   08ae3750 <_Unwind_Resume>
08188296 +0x134:  mov    0x8(%ebp),%eax
08188299 +0x137:  add    $0x4,%eax
0818829c +0x13a:  mov    %eax,(%esp)
0818829f +0x13d:  call   08188cac <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x1b1>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x1b1
081882a4 +0x142:  add    $0x10,%esp
081882a7 +0x145:  pop    %ebx
081882a8 +0x146:  pop    %esi
081882a9 +0x147:  pop    %ebp
081882aa +0x148:  ret
081882ab +0x149:  nop
```

## 反编译 C

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
