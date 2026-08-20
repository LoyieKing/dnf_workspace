# CItemList

`_ZN9CItemListC1Ev`

`CItemList::CItemList()`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08510d12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08510d12  _ZN9CItemListC1Ev
#           CItemList::CItemList()
# range [0x08510d12, 0x08510df5]
08510d12 +0x00:  push   %ebp
08510d13 +0x01:  mov    %esp,%ebp
08510d15 +0x03:  push   %esi
08510d16 +0x04:  push   %ebx
08510d17 +0x05:  sub    $0x10,%esp
08510d1a +0x08:  mov    0x8(%ebp),%eax
08510d1d +0x0b:  add    $0x4,%eax
08510d20 +0x0e:  mov    %eax,(%esp)
08510d23 +0x11:  call   0851830e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4943>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4943
08510d28 +0x16:  mov    0x8(%ebp),%eax
08510d2b +0x19:  add    $0x18,%eax
08510d2e +0x1c:  mov    %eax,(%esp)
08510d31 +0x1f:  call   085183e2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4a17>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4a17
08510d36 +0x24:  mov    0x8(%ebp),%eax
08510d39 +0x27:  add    $0x2c,%eax
08510d3c +0x2a:  mov    %eax,(%esp)
08510d3f +0x2d:  call   085184b6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4aeb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4aeb
08510d44 +0x32:  mov    0x8(%ebp),%eax
08510d47 +0x35:  add    $0x40,%eax
08510d4a +0x38:  mov    %eax,(%esp)
08510d4d +0x3b:  call   0851858a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4bbf>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4bbf
08510d52 +0x40:  mov    0x8(%ebp),%eax
08510d55 +0x43:  add    $0x50,%eax
08510d58 +0x46:  mov    %eax,(%esp)
08510d5b +0x49:  call   085185fc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4c31>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4c31
08510d60 +0x4e:  mov    0x8(%ebp),%eax
08510d63 +0x51:  add    $0x5c,%eax
08510d66 +0x54:  mov    %eax,(%esp)
08510d69 +0x57:  call   0838554e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x14fee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x14fee
08510d6e +0x5c:  jmp    08510dee <+0xdc>
08510d70 +0x5e:  mov    %edx,%ebx
08510d72 +0x60:  mov    %eax,%esi
08510d74 +0x62:  mov    0x8(%ebp),%eax
08510d77 +0x65:  add    $0x50,%eax
08510d7a +0x68:  mov    %eax,(%esp)
08510d7d +0x6b:  call   08518610 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4c45>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4c45
08510d82 +0x70:  mov    %esi,%eax
08510d84 +0x72:  mov    %ebx,%edx
08510d86 +0x74:  jmp    08510d88 <+0x76>
08510d88 +0x76:  mov    %edx,%ebx
08510d8a +0x78:  mov    %eax,%esi
08510d8c +0x7a:  mov    0x8(%ebp),%eax
08510d8f +0x7d:  add    $0x40,%eax
08510d92 +0x80:  mov    %eax,(%esp)
08510d95 +0x83:  call   0851859e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4bd3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4bd3
08510d9a +0x88:  mov    %esi,%eax
08510d9c +0x8a:  mov    %ebx,%edx
08510d9e +0x8c:  jmp    08510da0 <+0x8e>
08510da0 +0x8e:  mov    %edx,%ebx
08510da2 +0x90:  mov    %eax,%esi
08510da4 +0x92:  mov    0x8(%ebp),%eax
08510da7 +0x95:  add    $0x2c,%eax
08510daa +0x98:  mov    %eax,(%esp)
08510dad +0x9b:  call   085152aa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18df>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18df
08510db2 +0xa0:  mov    %esi,%eax
08510db4 +0xa2:  mov    %ebx,%edx
08510db6 +0xa4:  jmp    08510db8 <+0xa6>
08510db8 +0xa6:  mov    %edx,%ebx
08510dba +0xa8:  mov    %eax,%esi
08510dbc +0xaa:  mov    0x8(%ebp),%eax
08510dbf +0xad:  add    $0x18,%eax
08510dc2 +0xb0:  mov    %eax,(%esp)
08510dc5 +0xb3:  call   08515296 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18cb>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18cb
08510dca +0xb8:  mov    %esi,%eax
08510dcc +0xba:  mov    %ebx,%edx
08510dce +0xbc:  jmp    08510dd0 <+0xbe>
08510dd0 +0xbe:  mov    %edx,%ebx
08510dd2 +0xc0:  mov    %eax,%esi
08510dd4 +0xc2:  mov    0x8(%ebp),%eax
08510dd7 +0xc5:  add    $0x4,%eax
08510dda +0xc8:  mov    %eax,(%esp)
08510ddd +0xcb:  call   08515282 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x18b7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x18b7
08510de2 +0xd0:  mov    %esi,%eax
08510de4 +0xd2:  mov    %ebx,%edx
08510de6 +0xd4:  mov    %eax,(%esp)
08510de9 +0xd7:  call   08ae3750 <_Unwind_Resume>
08510dee +0xdc:  add    $0x10,%esp
08510df1 +0xdf:  pop    %ebx
08510df2 +0xe0:  pop    %esi
08510df3 +0xe1:  pop    %ebp
08510df4 +0xe2:  ret
08510df5 +0xe3:  nop
```

## 反编译 C

```c
// CItemList::CItemList @ 0x8510d12

/* CItemList::CItemList() */

void __thiscall CItemList::CItemList(CItemList *this)

{
  __gnu_cxx::hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>>::
  hash_map((hash_map<int,CItem*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CItem*>> *)
           (this + 4));
                    /* try { // try from 08510d31 to 08510d35 has its CatchHandler @ 08510dd0 */
  __gnu_cxx::
  hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
  ::hash_map((hash_map<int,CCeraShopGoods*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CCeraShopGoods*>>
              *)(this + 0x18));
                    /* try { // try from 08510d3f to 08510d43 has its CatchHandler @ 08510db8 */
  __gnu_cxx::
  hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
  ::hash_map((hash_map<unsigned_int,int,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<int>>
              *)(this + 0x2c));
                    /* try { // try from 08510d4d to 08510d51 has its CatchHandler @ 08510da0 */
  std::vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>>::vector
            ((vector<stCeraShopBonusInfo_t,std::allocator<stCeraShopBonusInfo_t>> *)(this + 0x40));
                    /* try { // try from 08510d5b to 08510d5f has its CatchHandler @ 08510d88 */
  std::vector<BonusItem,std::allocator<BonusItem>>::vector
            ((vector<BonusItem,std::allocator<BonusItem>> *)(this + 0x50));
                    /* try { // try from 08510d69 to 08510d6d has its CatchHandler @ 08510d70 */
  std::
  map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
  ::map((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
         *)(this + 0x5c));
  return;
}
```
