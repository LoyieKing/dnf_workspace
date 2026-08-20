# _postQuestTriggerItem

`_ZN5CUser21_postQuestTriggerItemEPK5Quest`

`CUser::_postQuestTriggerItem(Quest const*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086689ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086689ee  _ZN5CUser21_postQuestTriggerItemEPK5Quest
#           CUser::_postQuestTriggerItem(Quest const*)
# range [0x086689ee, 0x08668d19]
086689ee +0x000:  push   %ebp
086689ef +0x001:  mov    %esp,%ebp
086689f1 +0x003:  push   %edi
086689f2 +0x004:  push   %esi
086689f3 +0x005:  push   %ebx
086689f4 +0x006:  sub    $0xdc,%esp
086689fa +0x00c:  mov    0xc(%ebp),%eax
086689fd +0x00f:  add    $0x114,%eax
08668a02 +0x014:  mov    %eax,(%esp)
08668a05 +0x017:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08668a0a +0x01c:  test   %al,%al
08668a0c +0x01e:  je     08668ab9 <+0xcb>
08668a12 +0x024:  lea    -0x69(%ebp),%eax
08668a15 +0x027:  mov    %eax,(%esp)
08668a18 +0x02a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08668a1d +0x02f:  mov    0x8(%ebp),%eax
08668a20 +0x032:  mov    %eax,(%esp)
08668a23 +0x035:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08668a28 +0x03a:  mov    %eax,%edi
08668a2a +0x03c:  mov    0xc(%ebp),%eax
08668a2d +0x03f:  add    $0x110,%eax
08668a32 +0x044:  mov    %eax,(%esp)
08668a35 +0x047:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08668a3a +0x04c:  mov    %eax,-0xb8(%ebp)
08668a40 +0x052:  mov    0xc(%ebp),%eax
08668a43 +0x055:  add    $0x110,%eax
08668a48 +0x05a:  mov    %eax,(%esp)
08668a4b +0x05d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08668a50 +0x062:  mov    %eax,%esi
08668a52 +0x064:  mov    0x8(%ebp),%eax
08668a55 +0x067:  mov    %eax,(%esp)
08668a58 +0x06a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08668a5d +0x06f:  mov    %eax,%ebx
08668a5f +0x071:  mov    0xc(%ebp),%eax
08668a62 +0x074:  add    $0x10c,%eax
08668a67 +0x079:  mov    %eax,(%esp)
08668a6a +0x07c:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08668a6f +0x081:  movl   $0x0,0x24(%esp)
08668a77 +0x089:  movl   $0x0,0x20(%esp)
08668a7f +0x091:  mov    %edi,0x1c(%esp)
08668a83 +0x095:  movl   $0x0,0x18(%esp)
08668a8b +0x09d:  mov    -0xb8(%ebp),%edx
08668a91 +0x0a3:  mov    %edx,0x14(%esp)
08668a95 +0x0a7:  mov    %esi,0x10(%esp)
08668a99 +0x0ab:  mov    %ebx,0xc(%esp)
08668a9d +0x0af:  movl   $0x0,0x8(%esp)
08668aa5 +0x0b7:  lea    -0x69(%ebp),%edx
08668aa8 +0x0ba:  mov    %edx,0x4(%esp)
08668aac +0x0be:  mov    %eax,(%esp)
08668aaf +0x0c1:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08668ab4 +0x0c6:  jmp    08668d0e <+0x320>
08668ab9 +0x0cb:  mov    0xc(%ebp),%eax
08668abc +0x0ce:  lea    0x114(%eax),%edx
08668ac2 +0x0d4:  lea    -0x2c(%ebp),%eax
08668ac5 +0x0d7:  mov    %edx,0x4(%esp)
08668ac9 +0x0db:  mov    %eax,(%esp)
08668acc +0x0de:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
08668ad1 +0x0e3:  sub    $0x4,%esp
08668ad4 +0x0e6:  jmp    08668cd9 <+0x2eb>
08668ad9 +0x0eb:  lea    -0x2c(%ebp),%eax
08668adc +0x0ee:  mov    %eax,(%esp)
08668adf +0x0f1:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08668ae4 +0x0f6:  mov    (%eax),%eax
08668ae6 +0x0f8:  mov    %eax,-0x24(%ebp)
08668ae9 +0x0fb:  lea    -0x2c(%ebp),%eax
08668aec +0x0fe:  mov    %eax,(%esp)
08668aef +0x101:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08668af4 +0x106:  lea    -0x2c(%ebp),%eax
08668af7 +0x109:  mov    %eax,(%esp)
08668afa +0x10c:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08668aff +0x111:  mov    (%eax),%eax
08668b01 +0x113:  mov    %eax,-0x20(%ebp)
08668b04 +0x116:  lea    -0xa6(%ebp),%eax
08668b0a +0x11c:  mov    %eax,(%esp)
08668b0d +0x11f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08668b12 +0x124:  cmpl   $0x0,-0x24(%ebp)
08668b16 +0x128:  jne    08668be2 <+0x1f4>
08668b1c +0x12e:  cmpl   $0x0,-0x20(%ebp)
08668b20 +0x132:  jle    08668be2 <+0x1f4>
08668b26 +0x138:  mov    -0x24(%ebp),%eax
08668b29 +0x13b:  mov    %eax,-0xa4(%ebp)
08668b2f +0x141:  mov    -0x20(%ebp),%eax
08668b32 +0x144:  mov    %eax,-0x9f(%ebp)
08668b38 +0x14a:  mov    0x8(%ebp),%eax
08668b3b +0x14d:  mov    %eax,(%esp)
08668b3e +0x150:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08668b43 +0x155:  mov    %eax,%edi
08668b45 +0x157:  mov    0xc(%ebp),%eax
08668b48 +0x15a:  add    $0x110,%eax
08668b4d +0x15f:  mov    %eax,(%esp)
08668b50 +0x162:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08668b55 +0x167:  mov    %eax,-0xb4(%ebp)
08668b5b +0x16d:  mov    0xc(%ebp),%eax
08668b5e +0x170:  add    $0x110,%eax
08668b63 +0x175:  mov    %eax,(%esp)
08668b66 +0x178:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08668b6b +0x17d:  mov    %eax,%esi
08668b6d +0x17f:  mov    0x8(%ebp),%eax
08668b70 +0x182:  mov    %eax,(%esp)
08668b73 +0x185:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08668b78 +0x18a:  mov    %eax,%ebx
08668b7a +0x18c:  mov    -0x20(%ebp),%eax
08668b7d +0x18f:  mov    %eax,-0xb0(%ebp)
08668b83 +0x195:  mov    0xc(%ebp),%eax
08668b86 +0x198:  add    $0x10c,%eax
08668b8b +0x19d:  mov    %eax,(%esp)
08668b8e +0x1a0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08668b93 +0x1a5:  movl   $0x0,0x24(%esp)
08668b9b +0x1ad:  movl   $0x0,0x20(%esp)
08668ba3 +0x1b5:  mov    %edi,0x1c(%esp)
08668ba7 +0x1b9:  movl   $0x0,0x18(%esp)
08668baf +0x1c1:  mov    -0xb4(%ebp),%edx
08668bb5 +0x1c7:  mov    %edx,0x14(%esp)
08668bb9 +0x1cb:  mov    %esi,0x10(%esp)
08668bbd +0x1cf:  mov    %ebx,0xc(%esp)
08668bc1 +0x1d3:  mov    -0xb0(%ebp),%edx
08668bc7 +0x1d9:  mov    %edx,0x8(%esp)
08668bcb +0x1dd:  lea    -0xa6(%ebp),%edx
08668bd1 +0x1e3:  mov    %edx,0x4(%esp)
08668bd5 +0x1e7:  mov    %eax,(%esp)
08668bd8 +0x1ea:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08668bdd +0x1ef:  jmp    08668cce <+0x2e0>
08668be2 +0x1f4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08668be7 +0x1f9:  mov    -0x24(%ebp),%edx
08668bea +0x1fc:  mov    %edx,0x4(%esp)
08668bee +0x200:  mov    %eax,(%esp)
08668bf1 +0x203:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08668bf6 +0x208:  mov    %eax,-0x1c(%ebp)
08668bf9 +0x20b:  cmpl   $0x0,-0x1c(%ebp)
08668bfd +0x20f:  je     08668ccd <+0x2df>
08668c03 +0x215:  mov    -0x1c(%ebp),%eax
08668c06 +0x218:  mov    (%eax),%eax
08668c08 +0x21a:  add    $0x8,%eax
08668c0b +0x21d:  mov    (%eax),%edx
08668c0d +0x21f:  lea    -0xa6(%ebp),%eax
08668c13 +0x225:  mov    %eax,0x4(%esp)
08668c17 +0x229:  mov    -0x1c(%ebp),%eax
08668c1a +0x22c:  mov    %eax,(%esp)
08668c1d +0x22f:  call   *%edx
08668c1f +0x231:  mov    -0x24(%ebp),%eax
08668c22 +0x234:  mov    %eax,-0xa4(%ebp)
08668c28 +0x23a:  mov    -0x20(%ebp),%eax
08668c2b +0x23d:  mov    %eax,-0x9f(%ebp)
08668c31 +0x243:  mov    0x8(%ebp),%eax
08668c34 +0x246:  mov    %eax,(%esp)
08668c37 +0x249:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08668c3c +0x24e:  mov    %eax,%edi
08668c3e +0x250:  mov    0xc(%ebp),%eax
08668c41 +0x253:  add    $0x110,%eax
08668c46 +0x258:  mov    %eax,(%esp)
08668c49 +0x25b:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08668c4e +0x260:  mov    %eax,-0xac(%ebp)
08668c54 +0x266:  mov    0xc(%ebp),%eax
08668c57 +0x269:  add    $0x110,%eax
08668c5c +0x26e:  mov    %eax,(%esp)
08668c5f +0x271:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08668c64 +0x276:  mov    %eax,%esi
08668c66 +0x278:  mov    0x8(%ebp),%eax
08668c69 +0x27b:  mov    %eax,(%esp)
08668c6c +0x27e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08668c71 +0x283:  mov    %eax,%ebx
08668c73 +0x285:  mov    0xc(%ebp),%eax
08668c76 +0x288:  add    $0x10c,%eax
08668c7b +0x28d:  mov    %eax,(%esp)
08668c7e +0x290:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08668c83 +0x295:  movl   $0x0,0x24(%esp)
08668c8b +0x29d:  movl   $0x0,0x20(%esp)
08668c93 +0x2a5:  mov    %edi,0x1c(%esp)
08668c97 +0x2a9:  movl   $0x0,0x18(%esp)
08668c9f +0x2b1:  mov    -0xac(%ebp),%edx
08668ca5 +0x2b7:  mov    %edx,0x14(%esp)
08668ca9 +0x2bb:  mov    %esi,0x10(%esp)
08668cad +0x2bf:  mov    %ebx,0xc(%esp)
08668cb1 +0x2c3:  movl   $0x0,0x8(%esp)
08668cb9 +0x2cb:  lea    -0xa6(%ebp),%edx
08668cbf +0x2d1:  mov    %edx,0x4(%esp)
08668cc3 +0x2d5:  mov    %eax,(%esp)
08668cc6 +0x2d8:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08668ccb +0x2dd:  jmp    08668cce <+0x2e0>
08668ccd +0x2df:  nop
08668cce +0x2e0:  lea    -0x2c(%ebp),%eax
08668cd1 +0x2e3:  mov    %eax,(%esp)
08668cd4 +0x2e6:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08668cd9 +0x2eb:  mov    0xc(%ebp),%eax
08668cdc +0x2ee:  lea    0x114(%eax),%edx
08668ce2 +0x2f4:  lea    -0x28(%ebp),%eax
08668ce5 +0x2f7:  mov    %edx,0x4(%esp)
08668ce9 +0x2fb:  mov    %eax,(%esp)
08668cec +0x2fe:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
08668cf1 +0x303:  sub    $0x4,%esp
08668cf4 +0x306:  lea    -0x28(%ebp),%eax
08668cf7 +0x309:  mov    %eax,0x4(%esp)
08668cfb +0x30d:  lea    -0x2c(%ebp),%eax
08668cfe +0x310:  mov    %eax,(%esp)
08668d01 +0x313:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
08668d06 +0x318:  test   %al,%al
08668d08 +0x31a:  jne    08668ad9 <+0xeb>
08668d0e +0x320:  lea    -0xc(%ebp),%esp
08668d11 +0x323:  add    $0x0,%esp
08668d14 +0x326:  pop    %ebx
08668d15 +0x327:  pop    %esi
08668d16 +0x328:  pop    %edi
08668d17 +0x329:  pop    %ebp
08668d18 +0x32a:  ret
08668d19 +0x32b:  nop
```

## 反编译 C

```c
// CUser::_postQuestTriggerItem @ 0x86689ee

/* CUser::_postQuestTriggerItem(Quest const*) */

void __thiscall CUser::_postQuestTriggerItem(CUser *this,Quest *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  CDataManager *this_00;
  Inven_Item local_aa [2];
  int local_a8;
  int local_a3;
  Inven_Item local_6d [61];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  __normal_iterator local_2c [4];
  int local_28;
  int local_24;
  int *local_20;
  
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar3 = __gnu_cxx::operator!=(local_30,local_2c);
      if (!bVar3) break;
      piVar9 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_30);
      local_28 = *piVar9;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_30);
      piVar9 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_30);
      local_24 = *piVar9;
      Inven_Item::Inven_Item(local_aa);
      if ((local_28 == 0) && (0 < local_24)) {
        local_a8 = local_28;
        local_a3 = local_24;
        uVar4 = GetServerGroup(this);
        uVar5 = std::string::size((string *)(param_1 + 0x110));
        uVar6 = std::string::c_str((string *)(param_1 + 0x110));
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        iVar1 = local_24;
        uVar8 = std::string::c_str((string *)(param_1 + 0x10c));
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar8,local_aa,iVar1,uVar7,uVar6,uVar5,0,uVar4,0,0);
      }
      else {
        this_00 = (CDataManager *)G_CDataManager();
        local_20 = (int *)CDataManager::find_item(this_00,local_28);
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))(local_20,local_aa);
          local_a8 = local_28;
          local_a3 = local_24;
          uVar4 = GetServerGroup(this);
          uVar5 = std::string::size((string *)(param_1 + 0x110));
          uVar6 = std::string::c_str((string *)(param_1 + 0x110));
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
          uVar8 = std::string::c_str((string *)(param_1 + 0x10c));
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (uVar8,local_aa,0,uVar7,uVar6,uVar5,0,uVar4,0,0);
        }
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_30);
    }
  }
  else {
    Inven_Item::Inven_Item(local_6d);
    uVar4 = GetServerGroup(this);
    uVar5 = std::string::size((string *)(param_1 + 0x110));
    uVar6 = std::string::c_str((string *)(param_1 + 0x110));
    uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar8 = std::string::c_str((string *)(param_1 + 0x10c));
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar8,local_6d,0,uVar7,uVar6,uVar5,0,uVar4,0,0)
    ;
  }
  return;
}
```
