# ~CItemList

`_ZN9CItemListD1Ev`

`CItemList::~CItemList()`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08510df6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510df6  _ZN9CItemListD1Ev
#           CItemList::~CItemList()
# range [0x08510df6, 0x08510f05]
08510df6 +0x000:  push   %ebp
08510df7 +0x001:  mov    %esp,%ebp
08510df9 +0x003:  push   %esi
08510dfa +0x004:  push   %ebx
08510dfb +0x005:  sub    $0x10,%esp
08510dfe +0x008:  mov    0x8(%ebp),%eax
08510e01 +0x00b:  mov    %eax,(%esp)
08510e04 +0x00e:  call   08510f06 <_ZN9CItemList7destroyEv>  ; CItemList::destroy()
08510e09 +0x013:  jmp    08510e23 <+0x2d>
08510e0b +0x015:  mov    %edx,%ebx
08510e0d +0x017:  mov    %eax,%esi
08510e0f +0x019:  mov    0x8(%ebp),%eax
08510e12 +0x01c:  add    $0x5c,%eax
08510e15 +0x01f:  mov    %eax,(%esp)
08510e18 +0x022:  call   0837175a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb726>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb726
08510e1d +0x027:  mov    %esi,%eax
08510e1f +0x029:  mov    %ebx,%edx
08510e21 +0x02b:  jmp    08510e33 <+0x3d>
08510e23 +0x02d:  mov    0x8(%ebp),%eax
08510e26 +0x030:  add    $0x5c,%eax
08510e29 +0x033:  mov    %eax,(%esp)
08510e2c +0x036:  call   0837175a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb726>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb726
08510e31 +0x03b:  jmp    08510e4b <+0x55>
08510e33 +0x03d:  mov    %edx,%ebx
08510e35 +0x03f:  mov    %eax,%esi
08510e37 +0x041:  mov    0x8(%ebp),%eax
08510e3a +0x044:  add    $0x50,%eax
08510e3d +0x047:  mov    %eax,(%esp)
08510e40 +0x04a:  call   08518610 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4c45>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4c45
08510e45 +0x04f:  mov    %esi,%eax
08510e47 +0x051:  mov    %ebx,%edx
08510e49 +0x053:  jmp    08510e5b <+0x65>
08510e4b +0x055:  mov    0x8(%ebp),%eax
08510e4e +0x058:  add    $0x50,%eax
08510e51 +0x05b:  mov    %eax,(%esp)
08510e54 +0x05e:  call   08518610 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4c45>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4c45
08510e59 +0x063:  jmp    08510e73 <+0x7d>
08510e5b +0x065:  mov    %edx,%ebx
08510e5d +0x067:  mov    %eax,%esi
08510e5f +0x069:  mov    0x8(%ebp),%eax
08510e62 +0x06c:  add    $0x40,%eax
08510e65 +0x06f:  mov    %eax,(%esp)
08510e68 +0x072:  call   0851859e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4bd3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4bd3
08510e6d +0x077:  mov    %esi,%eax
08510e6f +0x079:  mov    %ebx,%edx
08510e71 +0x07b:  jmp    08510e83 <+0x8d>
08510e73 +0x07d:  mov    0x8(%ebp),%eax
08510e76 +0x080:  add    $0x40,%eax
08510e79 +0x083:  mov    %eax,(%esp)
08510e7c +0x086:  call   0851859e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4bd3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4bd3
08510e81 +0x08b:  jmp    08510e9b <+0xa5>
08510e83 +0x08d:  mov    %edx,%ebx
08510e85 +0x08f:  mov    %eax,%esi
08510e87 +0x091:  mov    0x8(%ebp),%eax
08510e8a +0x094:  add    $0x2c,%eax
08510e8d +0x097:  mov    %eax,(%esp)
08510e90 +0x09a:  call   085152aa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18df>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18df
08510e95 +0x09f:  mov    %esi,%eax
08510e97 +0x0a1:  mov    %ebx,%edx
08510e99 +0x0a3:  jmp    08510eab <+0xb5>
08510e9b +0x0a5:  mov    0x8(%ebp),%eax
08510e9e +0x0a8:  add    $0x2c,%eax
08510ea1 +0x0ab:  mov    %eax,(%esp)
08510ea4 +0x0ae:  call   085152aa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18df>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18df
08510ea9 +0x0b3:  jmp    08510ec3 <+0xcd>
08510eab +0x0b5:  mov    %edx,%ebx
08510ead +0x0b7:  mov    %eax,%esi
08510eaf +0x0b9:  mov    0x8(%ebp),%eax
08510eb2 +0x0bc:  add    $0x18,%eax
08510eb5 +0x0bf:  mov    %eax,(%esp)
08510eb8 +0x0c2:  call   08515296 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18cb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18cb
08510ebd +0x0c7:  mov    %esi,%eax
08510ebf +0x0c9:  mov    %ebx,%edx
08510ec1 +0x0cb:  jmp    08510ed3 <+0xdd>
08510ec3 +0x0cd:  mov    0x8(%ebp),%eax
08510ec6 +0x0d0:  add    $0x18,%eax
08510ec9 +0x0d3:  mov    %eax,(%esp)
08510ecc +0x0d6:  call   08515296 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18cb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18cb
08510ed1 +0x0db:  jmp    08510ef1 <+0xfb>
08510ed3 +0x0dd:  mov    %edx,%ebx
08510ed5 +0x0df:  mov    %eax,%esi
08510ed7 +0x0e1:  mov    0x8(%ebp),%eax
08510eda +0x0e4:  add    $0x4,%eax
08510edd +0x0e7:  mov    %eax,(%esp)
08510ee0 +0x0ea:  call   08515282 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18b7
08510ee5 +0x0ef:  mov    %esi,%eax
08510ee7 +0x0f1:  mov    %ebx,%edx
08510ee9 +0x0f3:  mov    %eax,(%esp)
08510eec +0x0f6:  call   08ae3750 <_Unwind_Resume>
08510ef1 +0x0fb:  mov    0x8(%ebp),%eax
08510ef4 +0x0fe:  add    $0x4,%eax
08510ef7 +0x101:  mov    %eax,(%esp)
08510efa +0x104:  call   08515282 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18b7
08510eff +0x109:  add    $0x10,%esp
08510f02 +0x10c:  pop    %ebx
08510f03 +0x10d:  pop    %esi
08510f04 +0x10e:  pop    %ebp
08510f05 +0x10f:  ret
```

## 反编译 C

```c
// CItemList::~CItemList @ 0x8510df6

/* CItemList::~CItemList() */

void __thiscall CItemList::~CItemList(CItemList *this)

{
                    /* try { // try from 08510e04 to 08510e08 has its CatchHandler @ 08510e0b */
  destroy(this);
                    /* try { // try from 08510e2c to 08510e30 has its CatchHandler @ 08510e33 */
  std::
  map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
  ::~map((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
          *)(this + 0x5c));
                    /* try { // try from 08510e54 to 08510e58 has its CatchHandler @ 08510e5b */
  std::vector<BonusItem,std::allocator<BonusItem>>::~vector
            ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50));
                    /* try { // try from 08510e7c to 08510e80 has its CatchHandler @ 08510e83 */
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::~vector
            ((vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>> *)(this + 0x40));
                    /* try { // try from 08510ea4 to 08510ea8 has its CatchHandler @ 08510eab */
  __gnu_cxx::
  hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
  ::~hash_map((hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
               *)(this + 0x2c));
                    /* try { // try from 08510ecc to 08510ed0 has its CatchHandler @ 08510ed3 */
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::~hash_map((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
               *)(this + 0x18));
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  ~hash_map((hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
            (this + 4));
  return;
}
```
