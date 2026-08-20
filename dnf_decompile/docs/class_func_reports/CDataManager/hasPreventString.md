# hasPreventString

`_ZN12CDataManager16hasPreventStringEPKc`

`CDataManager::hasPreventString(char const*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08363472` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08363472  _ZN12CDataManager16hasPreventStringEPKc
#           CDataManager::hasPreventString(char const*)
# range [0x08363472, 0x08363539]
08363472 +0x00:  push   %ebp
08363473 +0x01:  mov    %esp,%ebp
08363475 +0x03:  push   %esi
08363476 +0x04:  push   %ebx
08363477 +0x05:  sub    $0x20,%esp
0836347a +0x08:  mov    0x8(%ebp),%eax
0836347d +0x0b:  mov    %eax,(%esp)
08363480 +0x0e:  call   082a3f42 <_GLOBAL__I__ZN4CLog5this_E+0x369>  ; global constructors keyed to CLog::this_+0x369
08363485 +0x13:  test   %al,%al
08363487 +0x15:  je     083634a6 <+0x34>
08363489 +0x17:  movl   $0x0,0x4(%esp)
08363491 +0x1f:  mov    0x8(%ebp),%eax
08363494 +0x22:  mov    %eax,(%esp)
08363497 +0x25:  call   0822b668 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd12>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd12
0836349c +0x2a:  mov    $0x0,%ebx
083634a1 +0x2f:  jmp    08363530 <+0xbe>
083634a6 +0x34:  lea    -0x9(%ebp),%eax
083634a9 +0x37:  mov    %eax,(%esp)
083634ac +0x3a:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
083634b1 +0x3f:  lea    -0x9(%ebp),%eax
083634b4 +0x42:  mov    %eax,0x8(%esp)
083634b8 +0x46:  mov    0xc(%ebp),%eax
083634bb +0x49:  mov    %eax,0x4(%esp)
083634bf +0x4d:  lea    -0x10(%ebp),%eax
083634c2 +0x50:  mov    %eax,(%esp)
083634c5 +0x53:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
083634ca +0x58:  jmp    083634e7 <+0x75>
083634cc +0x5a:  mov    %edx,%ebx
083634ce +0x5c:  mov    %eax,%esi
083634d0 +0x5e:  lea    -0x9(%ebp),%eax
083634d3 +0x61:  mov    %eax,(%esp)
083634d6 +0x64:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
083634db +0x69:  mov    %esi,%eax
083634dd +0x6b:  mov    %ebx,%edx
083634df +0x6d:  mov    %eax,(%esp)
083634e2 +0x70:  call   08ae3750 <_Unwind_Resume>
083634e7 +0x75:  lea    -0x9(%ebp),%eax
083634ea +0x78:  mov    %eax,(%esp)
083634ed +0x7b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
083634f2 +0x80:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
083634f7 +0x85:  lea    -0x10(%ebp),%edx
083634fa +0x88:  mov    %edx,0x4(%esp)
083634fe +0x8c:  mov    %eax,(%esp)
08363501 +0x8f:  call   0862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>  ; CSyncSlangFilter::HasSlang(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08363506 +0x94:  mov    %eax,%ebx
08363508 +0x96:  lea    -0x10(%ebp),%eax
0836350b +0x99:  mov    %eax,(%esp)
0836350e +0x9c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08363513 +0xa1:  jmp    08363530 <+0xbe>
08363515 +0xa3:  mov    %edx,%ebx
08363517 +0xa5:  mov    %eax,%esi
08363519 +0xa7:  lea    -0x10(%ebp),%eax
0836351c +0xaa:  mov    %eax,(%esp)
0836351f +0xad:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08363524 +0xb2:  mov    %esi,%eax
08363526 +0xb4:  mov    %ebx,%edx
08363528 +0xb6:  mov    %eax,(%esp)
0836352b +0xb9:  call   08ae3750 <_Unwind_Resume>
08363530 +0xbe:  mov    %ebx,%eax
08363532 +0xc0:  add    $0x20,%esp
08363535 +0xc3:  pop    %ebx
08363536 +0xc4:  pop    %esi
08363537 +0xc5:  pop    %ebp
08363538 +0xc6:  ret
08363539 +0xc7:  nop
```

## 反编译 C

```c
// CDataManager::hasPreventString @ 0x8363472

/* CDataManager::hasPreventString(char const*) */

undefined4 __thiscall CDataManager::hasPreventString(CDataManager *this,char *param_1)

{
  char cVar1;
  CSyncSlangFilter *this_00;
  undefined4 uVar2;
  string local_14;
  allocator<char> local_d;
  
  cVar1 = getCharacNameFilterPass(this);
  if (cVar1 == '\0') {
    std::allocator<char>::allocator();
                    /* try { // try from 083634c5 to 083634c9 has its CatchHandler @ 083634cc */
    std::string::string((string *)&local_14,param_1,(allocator *)&local_d);
    std::allocator<char>::~allocator(&local_d);
                    /* try { // try from 083634f2 to 08363505 has its CatchHandler @ 08363515 */
    this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    uVar2 = CSyncSlangFilter::HasSlang(this_00,&local_14);
    std::string::~string((string *)&local_14);
  }
  else {
    setCharacNameFilterPass(this,false);
    uVar2 = 0;
  }
  return uVar2;
}
```
