# deleteTimeoutItem

`_ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE`

`CTitleBook::deleteTimeoutItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CTitleBook` | `0x0864125a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864125a  _ZN10CTitleBook17deleteTimeoutItemERKSt6vectorISt4pairIiiESaIS2_EE
#           CTitleBook::deleteTimeoutItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0864125a, 0x086414a7]
0864125a +0x000:  push   %ebp
0864125b +0x001:  mov    %esp,%ebp
0864125d +0x003:  push   %esi
0864125e +0x004:  push   %ebx
0864125f +0x005:  sub    $0x40,%esp
08641262 +0x008:  lea    -0x38(%ebp),%eax
08641265 +0x00b:  mov    %eax,(%esp)
08641268 +0x00e:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0864126d +0x013:  movl   $0x0,-0x14(%ebp)
08641274 +0x01a:  jmp    086413d4 <+0x17a>
08641279 +0x01f:  movl   $0x0,-0x10(%ebp)
08641280 +0x026:  jmp    086413b8 <+0x15e>
08641285 +0x02b:  mov    -0x14(%ebp),%edx
08641288 +0x02e:  mov    0x8(%ebp),%eax
0864128b +0x031:  add    $0x1ad0,%edx
08641291 +0x037:  mov    0x8(%eax,%edx,4),%edx
08641295 +0x03b:  mov    -0x10(%ebp),%eax
08641298 +0x03e:  imul   $0x3d,%eax,%eax
0864129b +0x041:  lea    (%edx,%eax,1),%eax
0864129e +0x044:  mov    %eax,-0xc(%ebp)
086412a1 +0x047:  mov    -0xc(%ebp),%eax
086412a4 +0x04a:  mov    0x2(%eax),%eax
086412a7 +0x04d:  test   %eax,%eax
086412a9 +0x04f:  je     086413b4 <+0x15a>
086412af +0x055:  mov    -0xc(%ebp),%eax
086412b2 +0x058:  mov    %eax,(%esp)
086412b5 +0x05b:  call   0867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>  ; _checkTimeoutItem(Inven_Item const&)
086412ba +0x060:  test   %al,%al
086412bc +0x062:  jne    086412df <+0x85>
086412be +0x064:  mov    -0xc(%ebp),%eax
086412c1 +0x067:  mov    0x2(%eax),%eax
086412c4 +0x06a:  mov    0xc(%ebp),%edx
086412c7 +0x06d:  mov    %edx,0x8(%esp)
086412cb +0x071:  mov    %eax,0x4(%esp)
086412cf +0x075:  mov    0x8(%ebp),%eax
086412d2 +0x078:  mov    %eax,(%esp)
086412d5 +0x07b:  call   0864306e <_ZN10CTitleBook14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>  ; CTitleBook::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
086412da +0x080:  cmp    $0xffffffff,%eax
086412dd +0x083:  je     086412e6 <+0x8c>
086412df +0x085:  mov    $0x1,%eax
086412e4 +0x08a:  jmp    086412eb <+0x91>
086412e6 +0x08c:  mov    $0x0,%eax
086412eb +0x091:  test   %al,%al
086412ed +0x093:  je     08641320 <+0xc6>
086412ef +0x095:  mov    -0x14(%ebp),%edx
086412f2 +0x098:  mov    0x8(%ebp),%eax
086412f5 +0x09b:  add    $0x1ad0,%edx
086412fb +0x0a1:  mov    0x8(%eax,%edx,4),%edx
086412ff +0x0a5:  mov    -0x10(%ebp),%eax
08641302 +0x0a8:  imul   $0x3d,%eax,%eax
08641305 +0x0ab:  lea    (%edx,%eax,1),%eax
08641308 +0x0ae:  mov    %eax,(%esp)
0864130b +0x0b1:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
08641310 +0x0b6:  mov    0x8(%ebp),%eax
08641313 +0x0b9:  mov    %eax,(%esp)
08641316 +0x0bc:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0864131b +0x0c1:  jmp    086413b4 <+0x15a>
08641320 +0x0c6:  mov    -0xc(%ebp),%eax
08641323 +0x0c9:  mov    0x2(%eax),%eax
08641326 +0x0cc:  mov    %eax,%ebx
08641328 +0x0ce:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864132d +0x0d3:  add    $0xb658,%eax
08641332 +0x0d8:  mov    %ebx,0x4(%esp)
08641336 +0x0dc:  mov    %eax,(%esp)
08641339 +0x0df:  call   08ac2096 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi>  ; DeleteInvalidItemScript::IsInvalidItem2Delete(int)
0864133e +0x0e4:  test   %al,%al
08641340 +0x0e6:  je     086413b4 <+0x15a>
08641342 +0x0e8:  mov    -0xc(%ebp),%eax
08641345 +0x0eb:  lea    0x7(%eax),%ecx
08641348 +0x0ee:  mov    -0xc(%ebp),%eax
0864134b +0x0f1:  lea    0x2(%eax),%edx
0864134e +0x0f4:  lea    -0x24(%ebp),%eax
08641351 +0x0f7:  mov    %ecx,0x8(%esp)
08641355 +0x0fb:  mov    %edx,0x4(%esp)
08641359 +0x0ff:  mov    %eax,(%esp)
0864135c +0x102:  call   08135c66 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x186d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x186d
08641361 +0x107:  sub    $0x4,%esp
08641364 +0x10a:  lea    -0x24(%ebp),%eax
08641367 +0x10d:  mov    %eax,0x4(%esp)
0864136b +0x111:  lea    -0x2c(%ebp),%eax
0864136e +0x114:  mov    %eax,(%esp)
08641371 +0x117:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
08641376 +0x11c:  lea    -0x2c(%ebp),%eax
08641379 +0x11f:  mov    %eax,0x4(%esp)
0864137d +0x123:  lea    -0x38(%ebp),%eax
08641380 +0x126:  mov    %eax,(%esp)
08641383 +0x129:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08641388 +0x12e:  mov    -0x14(%ebp),%edx
0864138b +0x131:  mov    0x8(%ebp),%eax
0864138e +0x134:  add    $0x1ad0,%edx
08641394 +0x13a:  mov    0x8(%eax,%edx,4),%edx
08641398 +0x13e:  mov    -0x10(%ebp),%eax
0864139b +0x141:  imul   $0x3d,%eax,%eax
0864139e +0x144:  lea    (%edx,%eax,1),%eax
086413a1 +0x147:  mov    %eax,(%esp)
086413a4 +0x14a:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
086413a9 +0x14f:  mov    0x8(%ebp),%eax
086413ac +0x152:  mov    %eax,(%esp)
086413af +0x155:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
086413b4 +0x15a:  addl   $0x1,-0x10(%ebp)
086413b8 +0x15e:  mov    -0x14(%ebp),%eax
086413bb +0x161:  mov    &_ZL14TITLE_BOOK_MAX(,%eax,4),%eax
086413c2 +0x168:  cmp    -0x10(%ebp),%eax
086413c5 +0x16b:  setg   %al
086413c8 +0x16e:  test   %al,%al
086413ca +0x170:  jne    08641285 <+0x2b>
086413d0 +0x176:  addl   $0x1,-0x14(%ebp)
086413d4 +0x17a:  cmpl   $0x3,-0x14(%ebp)
086413d8 +0x17e:  setle  %al
086413db +0x181:  test   %al,%al
086413dd +0x183:  jne    08641279 <+0x1f>
086413e3 +0x189:  mov    0x8(%ebp),%eax
086413e6 +0x18c:  mov    0x8(%eax),%eax
086413e9 +0x18f:  test   %eax,%eax
086413eb +0x191:  je     08641493 <+0x239>
086413f1 +0x197:  lea    -0x15(%ebp),%eax
086413f4 +0x19a:  mov    %eax,(%esp)
086413f7 +0x19d:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086413fc +0x1a2:  lea    -0x15(%ebp),%eax
086413ff +0x1a5:  mov    %eax,0x8(%esp)
08641403 +0x1a9:  movl   $"TitleBook",0x4(%esp)
0864140b +0x1b1:  lea    -0x1c(%ebp),%eax
0864140e +0x1b4:  mov    %eax,(%esp)
08641411 +0x1b7:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08641416 +0x1bc:  mov    0x8(%ebp),%eax
08641419 +0x1bf:  mov    0x8(%eax),%eax
0864141c +0x1c2:  lea    -0x38(%ebp),%edx
0864141f +0x1c5:  mov    %edx,0x8(%esp)
08641423 +0x1c9:  lea    -0x1c(%ebp),%edx
08641426 +0x1cc:  mov    %edx,0x4(%esp)
0864142a +0x1d0:  mov    %eax,(%esp)
0864142d +0x1d3:  call   086931c4 <_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE>  ; CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
08641432 +0x1d8:  jmp    08641449 <+0x1ef>
08641434 +0x1da:  mov    %edx,%ebx
08641436 +0x1dc:  mov    %eax,%esi
08641438 +0x1de:  lea    -0x1c(%ebp),%eax
0864143b +0x1e1:  mov    %eax,(%esp)
0864143e +0x1e4:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08641443 +0x1e9:  mov    %esi,%eax
08641445 +0x1eb:  mov    %ebx,%edx
08641447 +0x1ed:  jmp    08641456 <+0x1fc>
08641449 +0x1ef:  lea    -0x1c(%ebp),%eax
0864144c +0x1f2:  mov    %eax,(%esp)
0864144f +0x1f5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08641454 +0x1fa:  jmp    0864146b <+0x211>
08641456 +0x1fc:  mov    %edx,%ebx
08641458 +0x1fe:  mov    %eax,%esi
0864145a +0x200:  lea    -0x15(%ebp),%eax
0864145d +0x203:  mov    %eax,(%esp)
08641460 +0x206:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08641465 +0x20b:  mov    %esi,%eax
08641467 +0x20d:  mov    %ebx,%edx
08641469 +0x20f:  jmp    08641478 <+0x21e>
0864146b +0x211:  lea    -0x15(%ebp),%eax
0864146e +0x214:  mov    %eax,(%esp)
08641471 +0x217:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08641476 +0x21c:  jmp    08641493 <+0x239>
08641478 +0x21e:  mov    %edx,%ebx
0864147a +0x220:  mov    %eax,%esi
0864147c +0x222:  lea    -0x38(%ebp),%eax
0864147f +0x225:  mov    %eax,(%esp)
08641482 +0x228:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08641487 +0x22d:  mov    %esi,%eax
08641489 +0x22f:  mov    %ebx,%edx
0864148b +0x231:  mov    %eax,(%esp)
0864148e +0x234:  call   08ae3750 <_Unwind_Resume>
08641493 +0x239:  lea    -0x38(%ebp),%eax
08641496 +0x23c:  mov    %eax,(%esp)
08641499 +0x23f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0864149e +0x244:  lea    -0x8(%ebp),%esp
086414a1 +0x247:  add    $0x0,%esp
086414a4 +0x24a:  pop    %ebx
086414a5 +0x24b:  pop    %esi
086414a6 +0x24c:  pop    %ebp
086414a7 +0x24d:  ret
```

## 反编译 C

```c
// CTitleBook::deleteTimeoutItem @ 0x864125a

/* CTitleBook::deleteTimeoutItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int>
   > > const&) */

void CTitleBook::deleteTimeoutItem(vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_3c [12];
  pair<int,int> local_30 [8];
  ulong local_28 [2];
  string local_20;
  allocator<char> local_19;
  int local_18;
  int local_14;
  Inven_Item *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_3c);
  local_18 = 0;
  do {
    if (3 < local_18) {
      if (*(int *)(param_1 + 8) != 0) {
        std::allocator<char>::allocator();
                    /* try { // try from 08641411 to 08641415 has its CatchHandler @ 08641456 */
        std::string::string((string *)&local_20,"TitleBook",(allocator *)&local_19);
                    /* try { // try from 0864142d to 08641431 has its CatchHandler @ 08641434 */
        CUser::RewardItem2DeleteInvalidItem(*(CUser **)(param_1 + 8),&local_20,(vector *)local_3c);
                    /* try { // try from 0864144f to 08641453 has its CatchHandler @ 08641456 */
        std::string::~string((string *)&local_20);
        std::allocator<char>::~allocator(&local_19);
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_3c);
      return;
    }
    for (local_14 = 0; local_14 < *(int *)(::TITLE_BOOK_MAX + local_18 * 4); local_14 = local_14 + 1
        ) {
      local_10 = (Inven_Item *)(*(int *)(param_1 + (local_18 + 0x1ad0) * 4 + 8) + local_14 * 0x3d);
      if (*(int *)(local_10 + 2) != 0) {
                    /* try { // try from 086412b5 to 08641387 has its CatchHandler @ 08641478 */
        cVar2 = _checkTimeoutItem(local_10);
        if (cVar2 == '\0') {
          iVar3 = _isMatchedItem((int)param_1,*(vector **)(local_10 + 2));
          if (iVar3 != -1) goto LAB_086412df;
          bVar1 = false;
        }
        else {
LAB_086412df:
          bVar1 = true;
        }
        if (bVar1) {
          Inven_Item::reset((Inven_Item *)
                            (*(int *)(param_1 + (local_18 + 0x1ad0) * 4 + 8) + local_14 * 0x3d));
          charac_expand::CData::alter((CData *)param_1);
        }
        else {
          iVar3 = G_CDataManager();
          cVar2 = DeleteInvalidItemScript::IsInvalidItem2Delete(iVar3 + 0xb658);
          if (cVar2 != '\0') {
            std::make_pair<unsigned_long_const&,int_const&>(local_28,(int *)(local_10 + 2));
            std::pair<int,int>::pair<unsigned_long,int>(local_30,(pair *)local_28);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_3c,local_30);
            Inven_Item::reset((Inven_Item *)
                              (*(int *)(param_1 + (local_18 + 0x1ad0) * 4 + 8) + local_14 * 0x3d));
            charac_expand::CData::alter((CData *)param_1);
          }
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
