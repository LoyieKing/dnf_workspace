# loadItemShopFiles

`_ZN9CItemShop17loadItemShopFilesEv`

`CItemShop::loadItemShopFiles()`

| 类 | 地址 |
|---|---|
| `CItemShop` | `0x08512aa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512aa0  _ZN9CItemShop17loadItemShopFilesEv
#           CItemShop::loadItemShopFiles()
# range [0x08512aa0, 0x08512cd9]
08512aa0 +0x000:  push   %ebp
08512aa1 +0x001:  mov    %esp,%ebp
08512aa3 +0x003:  push   %esi
08512aa4 +0x004:  push   %ebx
08512aa5 +0x005:  sub    $0x130,%esp
08512aab +0x00b:  lea    -0x108(%ebp),%eax
08512ab1 +0x011:  mov    %eax,(%esp)
08512ab4 +0x014:  call   085140c8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x6fd>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x6fd
08512ab9 +0x019:  movl   $0x0,-0xc(%ebp)
08512ac0 +0x020:  lea    -0xbc(%ebp),%eax
08512ac6 +0x026:  mov    %eax,(%esp)
08512ac9 +0x029:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08512ace +0x02e:  lea    -0x10c(%ebp),%eax
08512ad4 +0x034:  movl   $&g_itemShopScriptFileList,0x4(%esp)
08512adc +0x03c:  mov    %eax,(%esp)
08512adf +0x03f:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08512ae4 +0x044:  sub    $0x4,%esp
08512ae7 +0x047:  mov    -0x10c(%ebp),%eax
08512aed +0x04d:  mov    %eax,-0xbc(%ebp)
08512af3 +0x053:  jmp    08512c5f <+0x1bf>
08512af8 +0x058:  lea    -0xbc(%ebp),%eax
08512afe +0x05e:  mov    %eax,(%esp)
08512b01 +0x061:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08512b06 +0x066:  add    $0x4,%eax
08512b09 +0x069:  mov    %eax,(%esp)
08512b0c +0x06c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08512b11 +0x071:  mov    %eax,-0xc(%ebp)
08512b14 +0x074:  cmpl   $0x0,-0xc(%ebp)
08512b18 +0x078:  je     08512c9a <+0x1fa>
08512b1e +0x07e:  mov    -0xc(%ebp),%eax
08512b21 +0x081:  mov    %eax,0x4(%esp)
08512b25 +0x085:  lea    -0x108(%ebp),%eax
08512b2b +0x08b:  mov    %eax,(%esp)
08512b2e +0x08e:  call   089dc5b4 <_Z20importItemShopScriptP14ItemShopScriptPKc>  ; importItemShopScript(ItemShopScript*, char const*)
08512b33 +0x093:  xor    $0x1,%eax
08512b36 +0x096:  test   %al,%al
08512b38 +0x098:  je     08512b77 <+0xd7>
08512b3a +0x09a:  mov    -0xc(%ebp),%eax
08512b3d +0x09d:  mov    %eax,0x14(%esp)
08512b41 +0x0a1:  movl   $"ImportEquipmentScript() fail file - %s",0x10(%esp)
08512b49 +0x0a9:  movl   $0xc26,0xc(%esp)
08512b51 +0x0b1:  movl   $&_ZZN9CItemShop17loadItemShopFilesEvE19__PRETTY_FUNCTION__,0x8(%esp)
08512b59 +0x0b9:  movl   $"item.cpp",0x4(%esp)
08512b61 +0x0c1:  movl   $0x1,(%esp)
08512b68 +0x0c8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08512b6d +0x0cd:  mov    $0x0,%ebx
08512b72 +0x0d2:  jmp    08512cc0 <+0x220>
08512b77 +0x0d7:  mov    -0xc(%ebp),%eax
08512b7a +0x0da:  mov    %eax,0x4(%esp)
08512b7e +0x0de:  movl   $&g_itemShopScriptFileList,(%esp)
08512b85 +0x0e5:  call   088bae56 <_ZNK16STScriptFileList19FindIndexByFullScanEPKc>  ; STScriptFileList::FindIndexByFullScan(char const*) const
08512b8a +0x0ea:  mov    %eax,-0x108(%ebp)
08512b90 +0x0f0:  movzbl -0xc4(%ebp),%eax
08512b97 +0x0f7:  test   %al,%al
08512b99 +0x0f9:  je     08512bb0 <+0x110>
08512b9b +0x0fb:  lea    -0x108(%ebp),%eax
08512ba1 +0x101:  mov    %eax,0x4(%esp)
08512ba5 +0x105:  mov    0x8(%ebp),%eax
08512ba8 +0x108:  mov    %eax,(%esp)
08512bab +0x10b:  call   08512f9c <_ZN9CItemShop20setOneADayItemListNoER14ItemShopScript>  ; CItemShop::setOneADayItemListNo(ItemShopScript&)
08512bb0 +0x110:  lea    -0x5c(%ebp),%eax
08512bb3 +0x113:  lea    -0x108(%ebp),%edx
08512bb9 +0x119:  mov    %edx,0x8(%esp)
08512bbd +0x11d:  lea    -0x108(%ebp),%edx
08512bc3 +0x123:  mov    %edx,0x4(%esp)
08512bc7 +0x127:  mov    %eax,(%esp)
08512bca +0x12a:  call   08518dee <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x5423>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x5423
08512bcf +0x12f:  sub    $0x4,%esp
08512bd2 +0x132:  lea    -0x5c(%ebp),%eax
08512bd5 +0x135:  mov    %eax,0x4(%esp)
08512bd9 +0x139:  lea    -0xac(%ebp),%eax
08512bdf +0x13f:  mov    %eax,(%esp)
08512be2 +0x142:  call   08518f68 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x559d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x559d
08512be7 +0x147:  mov    0x8(%ebp),%edx
08512bea +0x14a:  lea    -0xb4(%ebp),%eax
08512bf0 +0x150:  lea    -0xac(%ebp),%ecx
08512bf6 +0x156:  mov    %ecx,0x8(%esp)
08512bfa +0x15a:  mov    %edx,0x4(%esp)
08512bfe +0x15e:  mov    %eax,(%esp)
08512c01 +0x161:  call   08518fa2 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x55d7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x55d7
08512c06 +0x166:  sub    $0x4,%esp
08512c09 +0x169:  lea    -0xac(%ebp),%eax
08512c0f +0x16f:  mov    %eax,(%esp)
08512c12 +0x172:  call   083d082e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6a7fa>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6a7fa
08512c17 +0x177:  jmp    08512c46 <+0x1a6>
08512c19 +0x179:  mov    %edx,%ebx
08512c1b +0x17b:  mov    %eax,%esi
08512c1d +0x17d:  lea    -0xac(%ebp),%eax
08512c23 +0x183:  mov    %eax,(%esp)
08512c26 +0x186:  call   083d082e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6a7fa>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6a7fa
08512c2b +0x18b:  mov    %esi,%eax
08512c2d +0x18d:  mov    %ebx,%edx
08512c2f +0x18f:  jmp    08512c31 <+0x191>
08512c31 +0x191:  mov    %edx,%ebx
08512c33 +0x193:  mov    %eax,%esi
08512c35 +0x195:  lea    -0x5c(%ebp),%eax
08512c38 +0x198:  mov    %eax,(%esp)
08512c3b +0x19b:  call   08515b14 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2149>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2149
08512c40 +0x1a0:  mov    %esi,%eax
08512c42 +0x1a2:  mov    %ebx,%edx
08512c44 +0x1a4:  jmp    08512ca2 <+0x202>
08512c46 +0x1a6:  lea    -0x5c(%ebp),%eax
08512c49 +0x1a9:  mov    %eax,(%esp)
08512c4c +0x1ac:  call   08515b14 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x2149>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x2149
08512c51 +0x1b1:  lea    -0xbc(%ebp),%eax
08512c57 +0x1b7:  mov    %eax,(%esp)
08512c5a +0x1ba:  call   080e6610 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x746>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x746
08512c5f +0x1bf:  lea    -0xb8(%ebp),%eax
08512c65 +0x1c5:  movl   $&g_itemShopScriptFileList,0x4(%esp)
08512c6d +0x1cd:  mov    %eax,(%esp)
08512c70 +0x1d0:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08512c75 +0x1d5:  sub    $0x4,%esp
08512c78 +0x1d8:  lea    -0xb8(%ebp),%eax
08512c7e +0x1de:  mov    %eax,0x4(%esp)
08512c82 +0x1e2:  lea    -0xbc(%ebp),%eax
08512c88 +0x1e8:  mov    %eax,(%esp)
08512c8b +0x1eb:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08512c90 +0x1f0:  test   %al,%al
08512c92 +0x1f2:  jne    08512af8 <+0x58>
08512c98 +0x1f8:  jmp    08512c9b <+0x1fb>
08512c9a +0x1fa:  nop
08512c9b +0x1fb:  mov    $0x1,%ebx
08512ca0 +0x200:  jmp    08512cc0 <+0x220>
08512ca2 +0x202:  mov    %edx,%ebx
08512ca4 +0x204:  mov    %eax,%esi
08512ca6 +0x206:  lea    -0x108(%ebp),%eax
08512cac +0x20c:  mov    %eax,(%esp)
08512caf +0x20f:  call   083d076a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6a736>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6a736
08512cb4 +0x214:  mov    %esi,%eax
08512cb6 +0x216:  mov    %ebx,%edx
08512cb8 +0x218:  mov    %eax,(%esp)
08512cbb +0x21b:  call   08ae3750 <_Unwind_Resume>
08512cc0 +0x220:  lea    -0x108(%ebp),%eax
08512cc6 +0x226:  mov    %eax,(%esp)
08512cc9 +0x229:  call   083d076a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x6a736>  ; global constructors keyed to CServerEvent::m_nExpRate+0x6a736
08512cce +0x22e:  mov    %ebx,%eax
08512cd0 +0x230:  lea    -0x8(%ebp),%esp
08512cd3 +0x233:  add    $0x0,%esp
08512cd6 +0x236:  pop    %ebx
08512cd7 +0x237:  pop    %esi
08512cd8 +0x238:  pop    %ebp
08512cd9 +0x239:  ret
```

## 反编译 C

```c
// CItemShop::loadItemShopFiles @ 0x8512aa0

/* CItemShop::loadItemShopFiles() */

undefined4 __thiscall CItemShop::loadItemShopFiles(CItemShop *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_110;
  undefined4 local_10c [17];
  char local_c8;
  undefined4 local_c0;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_bc [4];
  pair local_b8 [8];
  pair<int_const,ItemShopScript> local_b0 [80];
  pair<int,ItemShopScript> local_60 [80];
  char *local_10;
  
  ItemShopScript::ItemShopScript((ItemShopScript *)local_10c);
  local_10 = (char *)0x0;
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0);
                    /* try { // try from 08512adf to 08512bce has its CatchHandler @ 08512ca2 */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )&local_110);
  local_c0 = local_110;
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_bc);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0,
                       (_Rb_tree_iterator *)local_bc);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0);
    local_10 = (char *)std::string::c_str((string *)(iVar2 + 4));
    if (local_10 == (char *)0x0) break;
    cVar1 = importItemShopScript((ItemShopScript *)local_10c,local_10);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"item.cpp","bool CItemShop::loadItemShopFiles()",0xc26,
                 "ImportEquipmentScript() fail file - %s",local_10);
      uVar3 = 0;
      goto LAB_08512cc0;
    }
    local_10c[0] = STScriptFileList::FindIndexByFullScan
                             ((STScriptFileList *)g_itemShopScriptFileList,local_10);
    if (local_c8 != '\0') {
      setOneADayItemListNo(this,(ItemShopScript *)local_10c);
    }
    std::make_pair<int&,ItemShopScript&>((int *)local_60,(ItemShopScript *)local_10c);
                    /* try { // try from 08512be2 to 08512be6 has its CatchHandler @ 08512c31 */
    std::pair<int_const,ItemShopScript>::pair<int,ItemShopScript>(local_b0,local_60);
                    /* try { // try from 08512c01 to 08512c05 has its CatchHandler @ 08512c19 */
    std::map<int,ItemShopScript,std::less<int>,std::allocator<std::pair<int_const,ItemShopScript>>>
    ::insert(local_b8);
                    /* try { // try from 08512c12 to 08512c16 has its CatchHandler @ 08512c31 */
    std::pair<int_const,ItemShopScript>::~pair(local_b0);
                    /* try { // try from 08512c4c to 08512c74 has its CatchHandler @ 08512ca2 */
    std::pair<int,ItemShopScript>::~pair(local_60);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_c0);
  }
  uVar3 = 1;
LAB_08512cc0:
  ItemShopScript::~ItemShopScript((ItemShopScript *)local_10c);
  return uVar3;
}
```
