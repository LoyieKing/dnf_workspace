# StrPunish

`_ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE`

`np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)`

| 类 | 地址 |
|---|---|
| `np_server_xml::CServerXml` | `0x080c6402` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c6402  _ZN13np_server_xml10CServerXml9StrPunishEiPKcNS_12_eStringTypeE
#           np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType)
# range [0x080c6402, 0x080c6667]
080c6402 +0x000:  push   %ebp
080c6403 +0x001:  mov    %esp,%ebp
080c6405 +0x003:  push   %esi
080c6406 +0x004:  push   %ebx
080c6407 +0x005:  sub    $0x60,%esp
080c640a +0x008:  cmpl   $0x0,0x10(%ebp)
080c640e +0x00c:  je     080c665c <+0x25a>
080c6414 +0x012:  lea    -0x51(%ebp),%eax
080c6417 +0x015:  mov    %eax,(%esp)
080c641a +0x018:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
080c641f +0x01d:  lea    -0x51(%ebp),%eax
080c6422 +0x020:  mov    %eax,0x8(%esp)
080c6426 +0x024:  mov    0x10(%ebp),%eax
080c6429 +0x027:  mov    %eax,0x4(%esp)
080c642d +0x02b:  lea    -0x58(%ebp),%eax
080c6430 +0x02e:  mov    %eax,(%esp)
080c6433 +0x031:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
080c6438 +0x036:  jmp    080c6455 <+0x53>
080c643a +0x038:  mov    %edx,%ebx
080c643c +0x03a:  mov    %eax,%esi
080c643e +0x03c:  lea    -0x51(%ebp),%eax
080c6441 +0x03f:  mov    %eax,(%esp)
080c6444 +0x042:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c6449 +0x047:  mov    %esi,%eax
080c644b +0x049:  mov    %ebx,%edx
080c644d +0x04b:  mov    %eax,(%esp)
080c6450 +0x04e:  call   08ae3750 <_Unwind_Resume>
080c6455 +0x053:  lea    -0x51(%ebp),%eax
080c6458 +0x056:  mov    %eax,(%esp)
080c645b +0x059:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
080c6460 +0x05e:  mov    0x14(%ebp),%eax
080c6463 +0x061:  cmp    $0x1,%eax
080c6466 +0x064:  je     080c6511 <+0x10f>
080c646c +0x06a:  cmp    $0x2,%eax
080c646f +0x06d:  je     080c65a5 <+0x1a3>
080c6475 +0x073:  test   %eax,%eax
080c6477 +0x075:  jne    080c6634 <+0x232>
080c647d +0x07b:  lea    -0x58(%ebp),%eax
080c6480 +0x07e:  mov    %eax,0x8(%esp)
080c6484 +0x082:  lea    0xc(%ebp),%eax
080c6487 +0x085:  mov    %eax,0x4(%esp)
080c648b +0x089:  lea    -0x40(%ebp),%eax
080c648e +0x08c:  mov    %eax,(%esp)
080c6491 +0x08f:  call   080c6d7c <_GLOBAL__I_g_ServerString_+0x2e7>  ; global constructors keyed to g_ServerString_+0x2e7
080c6496 +0x094:  lea    -0x40(%ebp),%eax
080c6499 +0x097:  mov    %eax,0x4(%esp)
080c649d +0x09b:  lea    -0x48(%ebp),%eax
080c64a0 +0x09e:  mov    %eax,(%esp)
080c64a3 +0x0a1:  call   080c6db4 <_GLOBAL__I_g_ServerString_+0x31f>  ; global constructors keyed to g_ServerString_+0x31f
080c64a8 +0x0a6:  mov    0x8(%ebp),%eax
080c64ab +0x0a9:  lea    0x58(%eax),%ecx
080c64ae +0x0ac:  lea    -0x50(%ebp),%eax
080c64b1 +0x0af:  lea    -0x48(%ebp),%edx
080c64b4 +0x0b2:  mov    %edx,0x8(%esp)
080c64b8 +0x0b6:  mov    %ecx,0x4(%esp)
080c64bc +0x0ba:  mov    %eax,(%esp)
080c64bf +0x0bd:  call   080c6dee <_GLOBAL__I_g_ServerString_+0x359>  ; global constructors keyed to g_ServerString_+0x359
080c64c4 +0x0c2:  sub    $0x4,%esp
080c64c7 +0x0c5:  lea    -0x48(%ebp),%eax
080c64ca +0x0c8:  mov    %eax,(%esp)
080c64cd +0x0cb:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
080c64d2 +0x0d0:  jmp    080c6501 <+0xff>
080c64d4 +0x0d2:  mov    %edx,%ebx
080c64d6 +0x0d4:  mov    %eax,%esi
080c64d8 +0x0d6:  lea    -0x48(%ebp),%eax
080c64db +0x0d9:  mov    %eax,(%esp)
080c64de +0x0dc:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
080c64e3 +0x0e1:  mov    %esi,%eax
080c64e5 +0x0e3:  mov    %ebx,%edx
080c64e7 +0x0e5:  jmp    080c64e9 <+0xe7>
080c64e9 +0x0e7:  mov    %edx,%ebx
080c64eb +0x0e9:  mov    %eax,%esi
080c64ed +0x0eb:  lea    -0x40(%ebp),%eax
080c64f0 +0x0ee:  mov    %eax,(%esp)
080c64f3 +0x0f1:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
080c64f8 +0x0f6:  mov    %esi,%eax
080c64fa +0x0f8:  mov    %ebx,%edx
080c64fc +0x0fa:  jmp    080c6641 <+0x23f>
080c6501 +0x0ff:  lea    -0x40(%ebp),%eax
080c6504 +0x102:  mov    %eax,(%esp)
080c6507 +0x105:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
080c650c +0x10a:  jmp    080c6634 <+0x232>
080c6511 +0x10f:  lea    -0x58(%ebp),%eax
080c6514 +0x112:  mov    %eax,0x8(%esp)
080c6518 +0x116:  lea    0xc(%ebp),%eax
080c651b +0x119:  mov    %eax,0x4(%esp)
080c651f +0x11d:  lea    -0x28(%ebp),%eax
080c6522 +0x120:  mov    %eax,(%esp)
080c6525 +0x123:  call   080c6d7c <_GLOBAL__I_g_ServerString_+0x2e7>  ; global constructors keyed to g_ServerString_+0x2e7
080c652a +0x128:  lea    -0x28(%ebp),%eax
080c652d +0x12b:  mov    %eax,0x4(%esp)
080c6531 +0x12f:  lea    -0x30(%ebp),%eax
080c6534 +0x132:  mov    %eax,(%esp)
080c6537 +0x135:  call   080c6db4 <_GLOBAL__I_g_ServerString_+0x31f>  ; global constructors keyed to g_ServerString_+0x31f
080c653c +0x13a:  mov    0x8(%ebp),%eax
080c653f +0x13d:  lea    0x70(%eax),%ecx
080c6542 +0x140:  lea    -0x38(%ebp),%eax
080c6545 +0x143:  lea    -0x30(%ebp),%edx
080c6548 +0x146:  mov    %edx,0x8(%esp)
080c654c +0x14a:  mov    %ecx,0x4(%esp)
080c6550 +0x14e:  mov    %eax,(%esp)
080c6553 +0x151:  call   080c6dee <_GLOBAL__I_g_ServerString_+0x359>  ; global constructors keyed to g_ServerString_+0x359
080c6558 +0x156:  sub    $0x4,%esp
080c655b +0x159:  lea    -0x30(%ebp),%eax
080c655e +0x15c:  mov    %eax,(%esp)
080c6561 +0x15f:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
080c6566 +0x164:  jmp    080c6595 <+0x193>
080c6568 +0x166:  mov    %edx,%ebx
080c656a +0x168:  mov    %eax,%esi
080c656c +0x16a:  lea    -0x30(%ebp),%eax
080c656f +0x16d:  mov    %eax,(%esp)
080c6572 +0x170:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
080c6577 +0x175:  mov    %esi,%eax
080c6579 +0x177:  mov    %ebx,%edx
080c657b +0x179:  jmp    080c657d <+0x17b>
080c657d +0x17b:  mov    %edx,%ebx
080c657f +0x17d:  mov    %eax,%esi
080c6581 +0x17f:  lea    -0x28(%ebp),%eax
080c6584 +0x182:  mov    %eax,(%esp)
080c6587 +0x185:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
080c658c +0x18a:  mov    %esi,%eax
080c658e +0x18c:  mov    %ebx,%edx
080c6590 +0x18e:  jmp    080c6641 <+0x23f>
080c6595 +0x193:  lea    -0x28(%ebp),%eax
080c6598 +0x196:  mov    %eax,(%esp)
080c659b +0x199:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
080c65a0 +0x19e:  jmp    080c6634 <+0x232>
080c65a5 +0x1a3:  lea    -0x58(%ebp),%eax
080c65a8 +0x1a6:  mov    %eax,0x8(%esp)
080c65ac +0x1aa:  lea    0xc(%ebp),%eax
080c65af +0x1ad:  mov    %eax,0x4(%esp)
080c65b3 +0x1b1:  lea    -0x10(%ebp),%eax
080c65b6 +0x1b4:  mov    %eax,(%esp)
080c65b9 +0x1b7:  call   080c6d7c <_GLOBAL__I_g_ServerString_+0x2e7>  ; global constructors keyed to g_ServerString_+0x2e7
080c65be +0x1bc:  lea    -0x10(%ebp),%eax
080c65c1 +0x1bf:  mov    %eax,0x4(%esp)
080c65c5 +0x1c3:  lea    -0x18(%ebp),%eax
080c65c8 +0x1c6:  mov    %eax,(%esp)
080c65cb +0x1c9:  call   080c6db4 <_GLOBAL__I_g_ServerString_+0x31f>  ; global constructors keyed to g_ServerString_+0x31f
080c65d0 +0x1ce:  mov    0x8(%ebp),%eax
080c65d3 +0x1d1:  lea    0x88(%eax),%ecx
080c65d9 +0x1d7:  lea    -0x20(%ebp),%eax
080c65dc +0x1da:  lea    -0x18(%ebp),%edx
080c65df +0x1dd:  mov    %edx,0x8(%esp)
080c65e3 +0x1e1:  mov    %ecx,0x4(%esp)
080c65e7 +0x1e5:  mov    %eax,(%esp)
080c65ea +0x1e8:  call   080c6dee <_GLOBAL__I_g_ServerString_+0x359>  ; global constructors keyed to g_ServerString_+0x359
080c65ef +0x1ed:  sub    $0x4,%esp
080c65f2 +0x1f0:  lea    -0x18(%ebp),%eax
080c65f5 +0x1f3:  mov    %eax,(%esp)
080c65f8 +0x1f6:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
080c65fd +0x1fb:  jmp    080c6629 <+0x227>
080c65ff +0x1fd:  mov    %edx,%ebx
080c6601 +0x1ff:  mov    %eax,%esi
080c6603 +0x201:  lea    -0x18(%ebp),%eax
080c6606 +0x204:  mov    %eax,(%esp)
080c6609 +0x207:  call   080c6bc0 <_GLOBAL__I_g_ServerString_+0x12b>  ; global constructors keyed to g_ServerString_+0x12b
080c660e +0x20c:  mov    %esi,%eax
080c6610 +0x20e:  mov    %ebx,%edx
080c6612 +0x210:  jmp    080c6614 <+0x212>
080c6614 +0x212:  mov    %edx,%ebx
080c6616 +0x214:  mov    %eax,%esi
080c6618 +0x216:  lea    -0x10(%ebp),%eax
080c661b +0x219:  mov    %eax,(%esp)
080c661e +0x21c:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
080c6623 +0x221:  mov    %esi,%eax
080c6625 +0x223:  mov    %ebx,%edx
080c6627 +0x225:  jmp    080c6641 <+0x23f>
080c6629 +0x227:  lea    -0x10(%ebp),%eax
080c662c +0x22a:  mov    %eax,(%esp)
080c662f +0x22d:  call   080c6baa <_GLOBAL__I_g_ServerString_+0x115>  ; global constructors keyed to g_ServerString_+0x115
080c6634 +0x232:  lea    -0x58(%ebp),%eax
080c6637 +0x235:  mov    %eax,(%esp)
080c663a +0x238:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c663f +0x23d:  jmp    080c665d <+0x25b>
080c6641 +0x23f:  mov    %edx,%ebx
080c6643 +0x241:  mov    %eax,%esi
080c6645 +0x243:  lea    -0x58(%ebp),%eax
080c6648 +0x246:  mov    %eax,(%esp)
080c664b +0x249:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080c6650 +0x24e:  mov    %esi,%eax
080c6652 +0x250:  mov    %ebx,%edx
080c6654 +0x252:  mov    %eax,(%esp)
080c6657 +0x255:  call   08ae3750 <_Unwind_Resume>
080c665c +0x25a:  nop
080c665d +0x25b:  lea    -0x8(%ebp),%esp
080c6660 +0x25e:  add    $0x0,%esp
080c6663 +0x261:  pop    %ebx
080c6664 +0x262:  pop    %esi
080c6665 +0x263:  pop    %ebp
080c6666 +0x264:  ret
080c6667 +0x265:  nop
```

## 反编译 C

```c
// np_server_xml::CServerXml::StrPunish @ 0x80c6402

/* np_server_xml::CServerXml::StrPunish(int, char const*, np_server_xml::_eStringType) */

void __thiscall
np_server_xml::CServerXml::StrPunish(undefined4 this,undefined4 param_1,char *param_2,int param_4)

{
  string local_5c;
  allocator<char> local_55;
  pair local_54 [8];
  pair<int_const,std::string> local_4c [8];
  pair<int,std::string> local_44 [8];
  pair local_3c [8];
  pair<int_const,std::string> local_34 [8];
  pair<int,std::string> local_2c [8];
  pair local_24 [8];
  pair<int_const,std::string> local_1c [8];
  pair<int,std::string> local_14 [8];
  
  if (param_2 != (char *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080c6433 to 080c6437 has its CatchHandler @ 080c643a */
    std::string::string((string *)&local_5c,param_2,(allocator *)&local_55);
    std::allocator<char>::~allocator(&local_55);
    if (param_4 == 1) {
      std::pair<int,std::string>::pair<int&,std::string&>(local_2c,&param_1,&local_5c);
                    /* try { // try from 080c6537 to 080c653b has its CatchHandler @ 080c657d */
      std::pair<int_const,std::string>::pair<int,std::string>(local_34,local_2c);
                    /* try { // try from 080c6553 to 080c6557 has its CatchHandler @ 080c6568 */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_3c);
                    /* try { // try from 080c6561 to 080c6565 has its CatchHandler @ 080c657d */
      std::pair<int_const,std::string>::~pair(local_34);
                    /* try { // try from 080c659b to 080c65bd has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::~pair(local_2c);
    }
    else if (param_4 == 2) {
      std::pair<int,std::string>::pair<int&,std::string&>(local_14,&param_1,&local_5c);
                    /* try { // try from 080c65cb to 080c65cf has its CatchHandler @ 080c6614 */
      std::pair<int_const,std::string>::pair<int,std::string>(local_1c,local_14);
                    /* try { // try from 080c65ea to 080c65ee has its CatchHandler @ 080c65ff */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_24);
                    /* try { // try from 080c65f8 to 080c65fc has its CatchHandler @ 080c6614 */
      std::pair<int_const,std::string>::~pair(local_1c);
                    /* try { // try from 080c662f to 080c6633 has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::~pair(local_14);
    }
    else if (param_4 == 0) {
                    /* try { // try from 080c6491 to 080c6495 has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::pair<int&,std::string&>(local_44,&param_1,&local_5c);
                    /* try { // try from 080c64a3 to 080c64a7 has its CatchHandler @ 080c64e9 */
      std::pair<int_const,std::string>::pair<int,std::string>(local_4c,local_44);
                    /* try { // try from 080c64bf to 080c64c3 has its CatchHandler @ 080c64d4 */
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      insert(local_54);
                    /* try { // try from 080c64cd to 080c64d1 has its CatchHandler @ 080c64e9 */
      std::pair<int_const,std::string>::~pair(local_4c);
                    /* try { // try from 080c6507 to 080c6529 has its CatchHandler @ 080c6641 */
      std::pair<int,std::string>::~pair(local_44);
    }
    std::string::~string((string *)&local_5c);
  }
  return;
}
```
