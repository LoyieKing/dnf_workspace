# _deleteSpecificItemInven

`_ZN5CUser24_deleteSpecificItemInvenE10INVEN_TYPERKSt6vectorISt4pairIiiESaIS3_EERS5_ii`

`CUser::_deleteSpecificItemInven(INVEN_TYPE, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867d0be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867d0be  _ZN5CUser24_deleteSpecificItemInvenE10INVEN_TYPERKSt6vectorISt4pairIiiESaIS3_EERS5_ii
#           CUser::_deleteSpecificItemInven(INVEN_TYPE, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
# range [0x0867d0be, 0x0867d3e9]
0867d0be +0x000:  push   %ebp
0867d0bf +0x001:  mov    %esp,%ebp
0867d0c1 +0x003:  push   %esi
0867d0c2 +0x004:  push   %ebx
0867d0c3 +0x005:  sub    $0xc0,%esp
0867d0c9 +0x00b:  mov    0x8(%ebp),%eax
0867d0cc +0x00e:  mov    %eax,(%esp)
0867d0cf +0x011:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0867d0d4 +0x016:  mov    %eax,-0x14(%ebp)
0867d0d7 +0x019:  movl   $0xffffffff,-0x10(%ebp)
0867d0de +0x020:  lea    -0x60(%ebp),%eax
0867d0e1 +0x023:  mov    %eax,(%esp)
0867d0e4 +0x026:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867d0e9 +0x02b:  mov    0x18(%ebp),%eax
0867d0ec +0x02e:  mov    %eax,-0x64(%ebp)
0867d0ef +0x031:  jmp    0867d32b <+0x26d>
0867d0f4 +0x036:  mov    -0x64(%ebp),%ecx
0867d0f7 +0x039:  mov    0xc(%ebp),%edx
0867d0fa +0x03c:  lea    -0xa1(%ebp),%eax
0867d100 +0x042:  mov    %ecx,0xc(%esp)
0867d104 +0x046:  mov    %edx,0x8(%esp)
0867d108 +0x04a:  mov    -0x14(%ebp),%edx
0867d10b +0x04d:  mov    %edx,0x4(%esp)
0867d10f +0x051:  mov    %eax,(%esp)
0867d112 +0x054:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0867d117 +0x059:  sub    $0x4,%esp
0867d11a +0x05c:  mov    -0x9f(%ebp),%eax
0867d120 +0x062:  test   %eax,%eax
0867d122 +0x064:  je     0867d321 <+0x263>
0867d128 +0x06a:  movb   $0x0,-0x9(%ebp)
0867d12c +0x06e:  lea    -0xa1(%ebp),%eax
0867d132 +0x074:  mov    %eax,(%esp)
0867d135 +0x077:  call   0867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>  ; _checkTimeoutItem(Inven_Item const&)
0867d13a +0x07c:  test   %al,%al
0867d13c +0x07e:  je     0867d14e <+0x90>
0867d13e +0x080:  movb   $0x1,-0x9(%ebp)
0867d142 +0x084:  movl   $0x0,-0x10(%ebp)
0867d149 +0x08b:  jmp    0867d1fb <+0x13d>
0867d14e +0x090:  mov    -0x9f(%ebp),%eax
0867d154 +0x096:  mov    0x10(%ebp),%edx
0867d157 +0x099:  mov    %edx,0x8(%esp)
0867d15b +0x09d:  mov    %eax,0x4(%esp)
0867d15f +0x0a1:  mov    0x8(%ebp),%eax
0867d162 +0x0a4:  mov    %eax,(%esp)
0867d165 +0x0a7:  call   0867cf0c <_ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867d16a +0x0ac:  mov    %eax,-0x10(%ebp)
0867d16d +0x0af:  cmpl   $0xffffffff,-0x10(%ebp)
0867d171 +0x0b3:  setne  %al
0867d174 +0x0b6:  test   %al,%al
0867d176 +0x0b8:  je     0867d189 <+0xcb>
0867d178 +0x0ba:  mov    -0x9a(%ebp),%eax
0867d17e +0x0c0:  cmp    -0x10(%ebp),%eax
0867d181 +0x0c3:  jle    0867d1fb <+0x13d>
0867d183 +0x0c5:  movb   $0x1,-0x9(%ebp)
0867d187 +0x0c9:  jmp    0867d1fb <+0x13d>
0867d189 +0x0cb:  mov    -0x9f(%ebp),%eax
0867d18f +0x0d1:  mov    %eax,%ebx
0867d191 +0x0d3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867d196 +0x0d8:  add    $0xb658,%eax
0867d19b +0x0dd:  mov    %ebx,0x4(%esp)
0867d19f +0x0e1:  mov    %eax,(%esp)
0867d1a2 +0x0e4:  call   08ac2096 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi>  ; DeleteInvalidItemScript::IsInvalidItem2Delete(int)
0867d1a7 +0x0e9:  test   %al,%al
0867d1a9 +0x0eb:  je     0867d1fb <+0x13d>
0867d1ab +0x0ed:  lea    -0x4c(%ebp),%eax
0867d1ae +0x0f0:  lea    -0xa1(%ebp),%edx
0867d1b4 +0x0f6:  add    $0x7,%edx
0867d1b7 +0x0f9:  mov    %edx,0x8(%esp)
0867d1bb +0x0fd:  lea    -0xa1(%ebp),%edx
0867d1c1 +0x103:  add    $0x2,%edx
0867d1c4 +0x106:  mov    %edx,0x4(%esp)
0867d1c8 +0x10a:  mov    %eax,(%esp)
0867d1cb +0x10d:  call   08111a37 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf49>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf49
0867d1d0 +0x112:  sub    $0x4,%esp
0867d1d3 +0x115:  lea    -0x4c(%ebp),%eax
0867d1d6 +0x118:  mov    %eax,0x4(%esp)
0867d1da +0x11c:  lea    -0x54(%ebp),%eax
0867d1dd +0x11f:  mov    %eax,(%esp)
0867d1e0 +0x122:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0867d1e5 +0x127:  lea    -0x54(%ebp),%eax
0867d1e8 +0x12a:  mov    %eax,0x4(%esp)
0867d1ec +0x12e:  lea    -0x60(%ebp),%eax
0867d1ef +0x131:  mov    %eax,(%esp)
0867d1f2 +0x134:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867d1f7 +0x139:  movb   $0x1,-0x9(%ebp)
0867d1fb +0x13d:  cmpb   $0x0,-0x9(%ebp)
0867d1ff +0x141:  je     0867d322 <+0x264>
0867d205 +0x147:  mov    0x8(%ebp),%eax
0867d208 +0x14a:  mov    %eax,(%esp)
0867d20b +0x14d:  call   080da2ac <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x449>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x449
0867d210 +0x152:  cmpl   $0x0,-0x10(%ebp)
0867d214 +0x156:  jne    0867d24b <+0x18d>
0867d216 +0x158:  mov    -0x9a(%ebp),%edx
0867d21c +0x15e:  mov    -0x64(%ebp),%eax
0867d21f +0x161:  movl   $0x1,0x14(%esp)
0867d227 +0x169:  movl   $0x13,0x10(%esp)
0867d22f +0x171:  mov    %edx,0xc(%esp)
0867d233 +0x175:  mov    %eax,0x8(%esp)
0867d237 +0x179:  mov    0xc(%ebp),%eax
0867d23a +0x17c:  mov    %eax,0x4(%esp)
0867d23e +0x180:  mov    -0x14(%ebp),%eax
0867d241 +0x183:  mov    %eax,(%esp)
0867d244 +0x186:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867d249 +0x18b:  jmp    0867d283 <+0x1c5>
0867d24b +0x18d:  mov    -0x9a(%ebp),%eax
0867d251 +0x193:  mov    %eax,%edx
0867d253 +0x195:  sub    -0x10(%ebp),%edx
0867d256 +0x198:  mov    -0x64(%ebp),%eax
0867d259 +0x19b:  movl   $0x1,0x14(%esp)
0867d261 +0x1a3:  movl   $0x13,0x10(%esp)
0867d269 +0x1ab:  mov    %edx,0xc(%esp)
0867d26d +0x1af:  mov    %eax,0x8(%esp)
0867d271 +0x1b3:  mov    0xc(%ebp),%eax
0867d274 +0x1b6:  mov    %eax,0x4(%esp)
0867d278 +0x1ba:  mov    -0x14(%ebp),%eax
0867d27b +0x1bd:  mov    %eax,(%esp)
0867d27e +0x1c0:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0867d283 +0x1c5:  cmpl   $0x0,0xc(%ebp)
0867d287 +0x1c9:  jne    0867d2d2 <+0x214>
0867d289 +0x1cb:  movl   $0x3,-0x34(%ebp)
0867d290 +0x1d2:  lea    -0x3c(%ebp),%eax
0867d293 +0x1d5:  lea    -0x64(%ebp),%edx
0867d296 +0x1d8:  mov    %edx,0x8(%esp)
0867d29a +0x1dc:  lea    -0x34(%ebp),%edx
0867d29d +0x1df:  mov    %edx,0x4(%esp)
0867d2a1 +0x1e3:  mov    %eax,(%esp)
0867d2a4 +0x1e6:  call   085589fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x155f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x155f
0867d2a9 +0x1eb:  sub    $0x4,%esp
0867d2ac +0x1ee:  lea    -0x3c(%ebp),%eax
0867d2af +0x1f1:  mov    %eax,0x4(%esp)
0867d2b3 +0x1f5:  lea    -0x44(%ebp),%eax
0867d2b6 +0x1f8:  mov    %eax,(%esp)
0867d2b9 +0x1fb:  call   08558a44 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15a5
0867d2be +0x200:  lea    -0x44(%ebp),%eax
0867d2c1 +0x203:  mov    %eax,0x4(%esp)
0867d2c5 +0x207:  mov    0x14(%ebp),%eax
0867d2c8 +0x20a:  mov    %eax,(%esp)
0867d2cb +0x20d:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867d2d0 +0x212:  jmp    0867d322 <+0x264>
0867d2d2 +0x214:  cmpl   $0x1,0xc(%ebp)
0867d2d6 +0x218:  jne    0867d322 <+0x264>
0867d2d8 +0x21a:  movl   $0x0,-0x20(%ebp)
0867d2df +0x221:  lea    -0x28(%ebp),%eax
0867d2e2 +0x224:  lea    -0x64(%ebp),%edx
0867d2e5 +0x227:  mov    %edx,0x8(%esp)
0867d2e9 +0x22b:  lea    -0x20(%ebp),%edx
0867d2ec +0x22e:  mov    %edx,0x4(%esp)
0867d2f0 +0x232:  mov    %eax,(%esp)
0867d2f3 +0x235:  call   085589fe <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x155f>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x155f
0867d2f8 +0x23a:  sub    $0x4,%esp
0867d2fb +0x23d:  lea    -0x28(%ebp),%eax
0867d2fe +0x240:  mov    %eax,0x4(%esp)
0867d302 +0x244:  lea    -0x30(%ebp),%eax
0867d305 +0x247:  mov    %eax,(%esp)
0867d308 +0x24a:  call   08558a44 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15a5>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15a5
0867d30d +0x24f:  lea    -0x30(%ebp),%eax
0867d310 +0x252:  mov    %eax,0x4(%esp)
0867d314 +0x256:  mov    0x14(%ebp),%eax
0867d317 +0x259:  mov    %eax,(%esp)
0867d31a +0x25c:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867d31f +0x261:  jmp    0867d322 <+0x264>
0867d321 +0x263:  nop
0867d322 +0x264:  mov    -0x64(%ebp),%eax
0867d325 +0x267:  add    $0x1,%eax
0867d328 +0x26a:  mov    %eax,-0x64(%ebp)
0867d32b +0x26d:  mov    -0x64(%ebp),%eax
0867d32e +0x270:  cmp    0x1c(%ebp),%eax
0867d331 +0x273:  setle  %al
0867d334 +0x276:  test   %al,%al
0867d336 +0x278:  jne    0867d0f4 <+0x36>
0867d33c +0x27e:  lea    -0x15(%ebp),%eax
0867d33f +0x281:  mov    %eax,(%esp)
0867d342 +0x284:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867d347 +0x289:  lea    -0x15(%ebp),%eax
0867d34a +0x28c:  mov    %eax,0x8(%esp)
0867d34e +0x290:  movl   $"Inven",0x4(%esp)
0867d356 +0x298:  lea    -0x1c(%ebp),%eax
0867d359 +0x29b:  mov    %eax,(%esp)
0867d35c +0x29e:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867d361 +0x2a3:  lea    -0x60(%ebp),%eax
0867d364 +0x2a6:  mov    %eax,0x8(%esp)
0867d368 +0x2aa:  lea    -0x1c(%ebp),%eax
0867d36b +0x2ad:  mov    %eax,0x4(%esp)
0867d36f +0x2b1:  mov    0x8(%ebp),%eax
0867d372 +0x2b4:  mov    %eax,(%esp)
0867d375 +0x2b7:  call   086931c4 <_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE>  ; CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867d37a +0x2bc:  jmp    0867d391 <+0x2d3>
0867d37c +0x2be:  mov    %edx,%ebx
0867d37e +0x2c0:  mov    %eax,%esi
0867d380 +0x2c2:  lea    -0x1c(%ebp),%eax
0867d383 +0x2c5:  mov    %eax,(%esp)
0867d386 +0x2c8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867d38b +0x2cd:  mov    %esi,%eax
0867d38d +0x2cf:  mov    %ebx,%edx
0867d38f +0x2d1:  jmp    0867d39e <+0x2e0>
0867d391 +0x2d3:  lea    -0x1c(%ebp),%eax
0867d394 +0x2d6:  mov    %eax,(%esp)
0867d397 +0x2d9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867d39c +0x2de:  jmp    0867d3b3 <+0x2f5>
0867d39e +0x2e0:  mov    %edx,%ebx
0867d3a0 +0x2e2:  mov    %eax,%esi
0867d3a2 +0x2e4:  lea    -0x15(%ebp),%eax
0867d3a5 +0x2e7:  mov    %eax,(%esp)
0867d3a8 +0x2ea:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867d3ad +0x2ef:  mov    %esi,%eax
0867d3af +0x2f1:  mov    %ebx,%edx
0867d3b1 +0x2f3:  jmp    0867d3d3 <+0x315>
0867d3b3 +0x2f5:  lea    -0x15(%ebp),%eax
0867d3b6 +0x2f8:  mov    %eax,(%esp)
0867d3b9 +0x2fb:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867d3be +0x300:  lea    -0x60(%ebp),%eax
0867d3c1 +0x303:  mov    %eax,(%esp)
0867d3c4 +0x306:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867d3c9 +0x30b:  lea    -0x8(%ebp),%esp
0867d3cc +0x30e:  add    $0x0,%esp
0867d3cf +0x311:  pop    %ebx
0867d3d0 +0x312:  pop    %esi
0867d3d1 +0x313:  pop    %ebp
0867d3d2 +0x314:  ret
0867d3d3 +0x315:  mov    %edx,%ebx
0867d3d5 +0x317:  mov    %eax,%esi
0867d3d7 +0x319:  lea    -0x60(%ebp),%eax
0867d3da +0x31c:  mov    %eax,(%esp)
0867d3dd +0x31f:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867d3e2 +0x324:  mov    %esi,%eax
0867d3e4 +0x326:  mov    %ebx,%edx
0867d3e6 +0x328:  mov    %eax,(%esp)
0867d3e9 +0x32b:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CUser::_deleteSpecificItemInven @ 0x867d0be

/* CUser::_deleteSpecificItemInven(INVEN_TYPE, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, int, int) */

void __thiscall
CUser::_deleteSpecificItemInven
          (CUser *this,int param_2,undefined4 param_3,
          vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_4,int param_5,
          int param_6)

{
  char cVar1;
  int iVar2;
  Inven_Item local_a5 [2];
  vector *local_a3;
  int local_9e;
  int local_68;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_64 [12];
  pair<int,int> local_58 [8];
  ulong local_50 [2];
  pair<int,int> local_48 [8];
  ENUM_ITEMSPACE local_40 [8];
  int local_38;
  pair<int,int> local_34 [8];
  ENUM_ITEMSPACE local_2c [8];
  int local_24;
  string local_20;
  allocator<char> local_19;
  CInventory *local_18;
  int local_14;
  char local_d;
  
  local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  local_14 = -1;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_64);
  for (local_68 = param_5; local_68 <= param_6; local_68 = local_68 + 1) {
                    /* try { // try from 0867d112 to 0867d31e has its CatchHandler @ 0867d3d3 */
    CInventory::GetInvenSlot((int)local_a5,(int)local_18);
    if (local_a3 != (vector *)0x0) {
      local_d = '\0';
      cVar1 = _checkTimeoutItem(local_a5);
      if (cVar1 == '\0') {
        local_14 = _isMatchedItem((int)this,local_a3);
        if (local_14 == -1) {
          iVar2 = G_CDataManager();
          cVar1 = DeleteInvalidItemScript::IsInvalidItem2Delete(iVar2 + 0xb658);
          if (cVar1 != '\0') {
            std::make_pair<unsigned_long&,int&>(local_50,(int *)&local_a3);
            std::pair<int,int>::pair<unsigned_long,int>(local_58,(pair *)local_50);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_64,local_58);
            local_d = '\x01';
          }
        }
        else if (local_14 < local_9e) {
          local_d = '\x01';
        }
      }
      else {
        local_d = '\x01';
        local_14 = 0;
      }
      if (local_d != '\0') {
        CUserCharacInfo::enableSaveInven((CUserCharacInfo *)this);
        if (local_14 == 0) {
          CInventory::delete_item(local_18,param_2,local_68,local_9e,0x13,1);
        }
        else {
          CInventory::delete_item(local_18,param_2,local_68,local_9e - local_14,0x13,1);
        }
        if (param_2 == 0) {
          local_38 = 3;
          std::make_pair<ENUM_ITEMSPACE,int&>(local_40,&local_38);
          std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_48,local_40);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (param_4,local_48);
        }
        else if (param_2 == 1) {
          local_24 = 0;
          std::make_pair<ENUM_ITEMSPACE,int&>(local_2c,&local_24);
          std::pair<int,int>::pair<ENUM_ITEMSPACE,int>(local_34,local_2c);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (param_4,local_34);
        }
      }
    }
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0867d35c to 0867d360 has its CatchHandler @ 0867d39e */
  std::string::string((string *)&local_20,"Inven",(allocator *)&local_19);
                    /* try { // try from 0867d375 to 0867d379 has its CatchHandler @ 0867d37c */
  RewardItem2DeleteInvalidItem(this,&local_20,(vector *)local_64);
                    /* try { // try from 0867d397 to 0867d39b has its CatchHandler @ 0867d39e */
  std::string::~string((string *)&local_20);
  std::allocator<char>::~allocator(&local_19);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_64);
  return;
}
```
