# getSlotItem

`_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE`

`advancealtar::CharacAdvanceAltarManager::getSlotItem(std::map<unsigned char, advancealtar::_SlotItem, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_SlotItem> > >&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132638  _ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE
#           advancealtar::CharacAdvanceAltarManager::getSlotItem(std::map<unsigned char, advancealtar::_SlotItem, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_SlotItem> > >&) const
# range [0x08132638, 0x081328e9]
08132638 +0x000:  push   %ebp
08132639 +0x001:  mov    %esp,%ebp
0813263b +0x003:  push   %ebx
0813263c +0x004:  sub    $0x84,%esp
08132642 +0x00a:  mov    0x8(%ebp),%eax
08132645 +0x00d:  mov    (%eax),%eax
08132647 +0x00f:  mov    %eax,-0x24(%ebp)
0813264a +0x012:  cmpl   $0x0,-0x24(%ebp)
0813264e +0x016:  je     081328e4 <+0x2ac>
08132654 +0x01c:  mov    -0x24(%ebp),%eax
08132657 +0x01f:  add    $0x84,%eax
0813265c +0x024:  mov    %eax,-0x20(%ebp)
0813265f +0x027:  lea    -0x64(%ebp),%eax
08132662 +0x02a:  mov    -0x20(%ebp),%edx
08132665 +0x02d:  mov    %edx,0x4(%esp)
08132669 +0x031:  mov    %eax,(%esp)
0813266c +0x034:  call   081362f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1efd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1efd
08132671 +0x039:  sub    $0x4,%esp
08132674 +0x03c:  jmp    081328b3 <+0x27b>
08132679 +0x041:  mov    -0x24(%ebp),%eax
0813267c +0x044:  add    $0x3c,%eax
0813267f +0x047:  mov    %eax,-0x1c(%ebp)
08132682 +0x04a:  lea    -0x64(%ebp),%eax
08132685 +0x04d:  mov    %eax,(%esp)
08132688 +0x050:  call   08136394 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f9b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f9b
0813268d +0x055:  lea    0x7(%eax),%edx
08132690 +0x058:  lea    -0x68(%ebp),%eax
08132693 +0x05b:  mov    %edx,0x8(%esp)
08132697 +0x05f:  mov    -0x1c(%ebp),%edx
0813269a +0x062:  mov    %edx,0x4(%esp)
0813269e +0x066:  mov    %eax,(%esp)
081326a1 +0x069:  call   0813615c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d63>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d63
081326a6 +0x06e:  sub    $0x4,%esp
081326a9 +0x071:  lea    -0x5c(%ebp),%eax
081326ac +0x074:  mov    -0x1c(%ebp),%edx
081326af +0x077:  mov    %edx,0x4(%esp)
081326b3 +0x07b:  mov    %eax,(%esp)
081326b6 +0x07e:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
081326bb +0x083:  sub    $0x4,%esp
081326be +0x086:  lea    -0x5c(%ebp),%eax
081326c1 +0x089:  mov    %eax,0x4(%esp)
081326c5 +0x08d:  lea    -0x68(%ebp),%eax
081326c8 +0x090:  mov    %eax,(%esp)
081326cb +0x093:  call   081363a2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fa9
081326d0 +0x098:  test   %al,%al
081326d2 +0x09a:  je     08132896 <+0x25e>
081326d8 +0x0a0:  lea    -0x74(%ebp),%eax
081326db +0x0a3:  mov    %eax,(%esp)
081326de +0x0a6:  call   081347e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3e9
081326e3 +0x0ab:  lea    -0x64(%ebp),%eax
081326e6 +0x0ae:  mov    %eax,(%esp)
081326e9 +0x0b1:  call   08136394 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f9b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f9b
081326ee +0x0b6:  movzbl 0x6(%eax),%eax
081326f2 +0x0ba:  mov    %al,-0x74(%ebp)
081326f5 +0x0bd:  mov    -0x24(%ebp),%eax
081326f8 +0x0c0:  mov    (%eax),%eax
081326fa +0x0c2:  mov    %eax,%ebx
081326fc +0x0c4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08132701 +0x0c9:  add    $0x631c,%eax
08132706 +0x0ce:  movl   $0x0,0x8(%esp)
0813270e +0x0d6:  mov    %ebx,0x4(%esp)
08132712 +0x0da:  mov    %eax,(%esp)
08132715 +0x0dd:  call   088a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)
0813271a +0x0e2:  mov    %eax,-0x18(%ebp)
0813271d +0x0e5:  cmpl   $0x0,-0x18(%ebp)
08132721 +0x0e9:  je     0813288c <+0x254>
08132727 +0x0ef:  movl   $0x0,-0x14(%ebp)
0813272e +0x0f6:  lea    -0x78(%ebp),%eax
08132731 +0x0f9:  mov    -0x18(%ebp),%edx
08132734 +0x0fc:  mov    %edx,0x4(%esp)
08132738 +0x100:  mov    %eax,(%esp)
0813273b +0x103:  call   0813609e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ca5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ca5
08132740 +0x108:  sub    $0x4,%esp
08132743 +0x10b:  jmp    08132796 <+0x15e>
08132745 +0x10d:  lea    -0x78(%ebp),%eax
08132748 +0x110:  mov    %eax,(%esp)
0813274b +0x113:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08132750 +0x118:  mov    (%eax),%ebx
08132752 +0x11a:  lea    -0x68(%ebp),%eax
08132755 +0x11d:  mov    %eax,(%esp)
08132758 +0x120:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
0813275d +0x125:  mov    0x8(%eax),%eax
08132760 +0x128:  cmp    %eax,%ebx
08132762 +0x12a:  sete   %al
08132765 +0x12d:  test   %al,%al
08132767 +0x12f:  je     08132779 <+0x141>
08132769 +0x131:  lea    -0x78(%ebp),%eax
0813276c +0x134:  mov    %eax,(%esp)
0813276f +0x137:  call   08136152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d59
08132774 +0x13c:  mov    %eax,-0x14(%ebp)
08132777 +0x13f:  jmp    081327c1 <+0x189>
08132779 +0x141:  lea    -0x54(%ebp),%eax
0813277c +0x144:  movl   $0x0,0x8(%esp)
08132784 +0x14c:  lea    -0x78(%ebp),%edx
08132787 +0x14f:  mov    %edx,0x4(%esp)
0813278b +0x153:  mov    %eax,(%esp)
0813278e +0x156:  call   08136114 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d1b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d1b
08132793 +0x15b:  sub    $0x4,%esp
08132796 +0x15e:  lea    -0x58(%ebp),%eax
08132799 +0x161:  mov    -0x18(%ebp),%edx
0813279c +0x164:  mov    %edx,0x4(%esp)
081327a0 +0x168:  mov    %eax,(%esp)
081327a3 +0x16b:  call   081360c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cc9
081327a8 +0x170:  sub    $0x4,%esp
081327ab +0x173:  lea    -0x58(%ebp),%eax
081327ae +0x176:  mov    %eax,0x4(%esp)
081327b2 +0x17a:  lea    -0x78(%ebp),%eax
081327b5 +0x17d:  mov    %eax,(%esp)
081327b8 +0x180:  call   081360e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cef
081327bd +0x185:  test   %al,%al
081327bf +0x187:  jne    08132745 <+0x10d>
081327c1 +0x189:  cmpl   $0x0,-0x14(%ebp)
081327c5 +0x18d:  je     0813288f <+0x257>
081327cb +0x193:  lea    -0x68(%ebp),%eax
081327ce +0x196:  mov    %eax,(%esp)
081327d1 +0x199:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
081327d6 +0x19e:  movzwl 0xc(%eax),%eax
081327da +0x1a2:  movswl %ax,%ebx
081327dd +0x1a5:  lea    -0x78(%ebp),%eax
081327e0 +0x1a8:  mov    %eax,(%esp)
081327e3 +0x1ab:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
081327e8 +0x1b0:  movl   $0x1,0x8(%esp)
081327f0 +0x1b8:  mov    %ebx,0x4(%esp)
081327f4 +0x1bc:  mov    %eax,(%esp)
081327f7 +0x1bf:  call   088a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
081327fc +0x1c4:  mov    %eax,-0x10(%ebp)
081327ff +0x1c7:  cmpl   $0x0,-0x10(%ebp)
08132803 +0x1cb:  je     08132892 <+0x25a>
08132809 +0x1d1:  mov    -0x10(%ebp),%eax
0813280c +0x1d4:  mov    0x4(%eax),%ebx
0813280f +0x1d7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08132814 +0x1dc:  mov    %ebx,0x4(%esp)
08132818 +0x1e0:  mov    %eax,(%esp)
0813281b +0x1e3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08132820 +0x1e8:  mov    %eax,-0xc(%ebp)
08132823 +0x1eb:  cmpl   $0x0,-0xc(%ebp)
08132827 +0x1ef:  je     08132895 <+0x25d>
08132829 +0x1f1:  mov    -0x10(%ebp),%eax
0813282c +0x1f4:  mov    0x4(%eax),%eax
0813282f +0x1f7:  mov    %eax,-0x70(%ebp)
08132832 +0x1fa:  mov    -0xc(%ebp),%eax
08132835 +0x1fd:  mov    %eax,(%esp)
08132838 +0x200:  call   081347ca <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3d1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3d1
0813283d +0x205:  mov    %eax,-0x6c(%ebp)
08132840 +0x208:  lea    -0x38(%ebp),%eax
08132843 +0x20b:  lea    -0x74(%ebp),%edx
08132846 +0x20e:  mov    %edx,0x8(%esp)
0813284a +0x212:  lea    -0x74(%ebp),%edx
0813284d +0x215:  mov    %edx,0x4(%esp)
08132851 +0x219:  mov    %eax,(%esp)
08132854 +0x21c:  call   081363c3 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fca>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fca
08132859 +0x221:  sub    $0x4,%esp
0813285c +0x224:  lea    -0x38(%ebp),%eax
0813285f +0x227:  mov    %eax,0x4(%esp)
08132863 +0x22b:  lea    -0x48(%ebp),%eax
08132866 +0x22e:  mov    %eax,(%esp)
08132869 +0x231:  call   08136402 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2009>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2009
0813286e +0x236:  lea    -0x50(%ebp),%eax
08132871 +0x239:  lea    -0x48(%ebp),%edx
08132874 +0x23c:  mov    %edx,0x8(%esp)
08132878 +0x240:  mov    0xc(%ebp),%edx
0813287b +0x243:  mov    %edx,0x4(%esp)
0813287f +0x247:  mov    %eax,(%esp)
08132882 +0x24a:  call   08136440 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2047>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2047
08132887 +0x24f:  sub    $0x4,%esp
0813288a +0x252:  jmp    08132896 <+0x25e>
0813288c +0x254:  nop
0813288d +0x255:  jmp    08132896 <+0x25e>
0813288f +0x257:  nop
08132890 +0x258:  jmp    08132896 <+0x25e>
08132892 +0x25a:  nop
08132893 +0x25b:  jmp    08132896 <+0x25e>
08132895 +0x25d:  nop
08132896 +0x25e:  lea    -0x28(%ebp),%eax
08132899 +0x261:  movl   $0x0,0x8(%esp)
081328a1 +0x269:  lea    -0x64(%ebp),%edx
081328a4 +0x26c:  mov    %edx,0x4(%esp)
081328a8 +0x270:  mov    %eax,(%esp)
081328ab +0x273:  call   08136356 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f5d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f5d
081328b0 +0x278:  sub    $0x4,%esp
081328b3 +0x27b:  lea    -0x60(%ebp),%eax
081328b6 +0x27e:  mov    -0x20(%ebp),%edx
081328b9 +0x281:  mov    %edx,0x4(%esp)
081328bd +0x285:  mov    %eax,(%esp)
081328c0 +0x288:  call   0813631c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f23>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f23
081328c5 +0x28d:  sub    $0x4,%esp
081328c8 +0x290:  lea    -0x60(%ebp),%eax
081328cb +0x293:  mov    %eax,0x4(%esp)
081328cf +0x297:  lea    -0x64(%ebp),%eax
081328d2 +0x29a:  mov    %eax,(%esp)
081328d5 +0x29d:  call   08136342 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f49>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f49
081328da +0x2a2:  test   %al,%al
081328dc +0x2a4:  jne    08132679 <+0x41>
081328e2 +0x2aa:  jmp    081328e5 <+0x2ad>
081328e4 +0x2ac:  nop
081328e5 +0x2ad:  mov    -0x4(%ebp),%ebx
081328e8 +0x2b0:  leave
081328e9 +0x2b1:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::getSlotItem @ 0x8132638

/* advancealtar::CharacAdvanceAltarManager::getSlotItem(std::map<unsigned char,
   advancealtar::_SlotItem, std::less<unsigned char>, std::allocator<std::pair<unsigned char const,
   advancealtar::_SlotItem> > >&) const */

void advancealtar::CharacAdvanceAltarManager::getSlotItem(map *param_1)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  CDataManager *this;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_7c [4];
  _SlotItem local_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_6c [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_68 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_64 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_60 [4];
  __normal_iterator local_5c [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_58 [4];
  pair local_54 [8];
  pair<unsigned_char_const,advancealtar::_SlotItem> local_4c [16];
  uchar local_3c [16];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_2c [4];
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  int local_14;
  CItem *local_10;
  
  local_28 = *(undefined4 **)param_1;
  if (local_28 != (undefined4 *)0x0) {
    local_24 = local_28 + 0x21;
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::begin(local_68);
    while( true ) {
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_64);
      cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
              operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                          *)local_68,(_Rb_tree_const_iterator *)local_64);
      if (cVar3 == '\0') break;
      local_20 = local_28 + 0xf;
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                ((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                 local_68);
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::find((int *)local_6c);
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::end(local_60);
      cVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                        (local_6c,(_Rb_tree_const_iterator *)local_60);
      if (cVar3 != '\0') {
        _SlotItem::_SlotItem(local_78);
        iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                            *)local_68);
        local_78[0] = *(_SlotItem *)(iVar4 + 6);
        uVar7 = *local_28;
        iVar4 = G_CDataManager();
        local_1c = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                             ((AdvanceAltarShopParameter *)(iVar4 + 0x631c),uVar7,0);
        if (local_1c != 0) {
          local_18 = 0;
          std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
          begin();
          while( true ) {
            std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
            end();
            bVar2 = __gnu_cxx::operator!=(local_7c,local_5c);
            if (!bVar2) break;
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                            ::operator->(local_7c);
            iVar4 = *piVar5;
            iVar6 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                    operator->(local_6c);
            if (iVar4 == *(int *)(iVar6 + 8)) {
              local_18 = __gnu_cxx::
                         __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                         ::operator*(local_7c);
              break;
            }
            __gnu_cxx::
            __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
            ::operator++(local_58,(int)local_7c);
          }
          if (local_18 != 0) {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                    operator->(local_6c);
            sVar1 = *(short *)(iVar4 + 0xc);
            uVar7 = __gnu_cxx::
                    __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                    ::operator->(local_7c);
            local_14 = BuyUpgradeData::getFieldDataPoint(uVar7,(int)sVar1,1);
            if (local_14 != 0) {
              iVar4 = *(int *)(local_14 + 4);
              this = (CDataManager *)G_CDataManager();
              local_10 = (CItem *)CDataManager::find_item(this,iVar4);
              if (local_10 != (CItem *)0x0) {
                local_74 = *(undefined4 *)(local_14 + 4);
                local_70 = CItem::getAdvanceAltarNeedGage(local_10);
                std::make_pair<unsigned_char&,advancealtar::_SlotItem&>(local_3c,local_78);
                std::pair<unsigned_char_const,advancealtar::_SlotItem>::
                pair<unsigned_char,advancealtar::_SlotItem>(local_4c,local_3c);
                std::
                map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
                ::insert(local_54);
              }
            }
          }
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_2c,(int)local_68);
    }
  }
  return;
}
```
