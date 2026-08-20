# hasPreventStringName

`_ZN12CDataManager20hasPreventStringNameEPKc`

`CDataManager::hasPreventStringName(char const*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x0836353a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0836353a  _ZN12CDataManager20hasPreventStringNameEPKc
#           CDataManager::hasPreventStringName(char const*)
# range [0x0836353a, 0x083635d3]
0836353a +0x00:  push   %ebp
0836353b +0x01:  mov    %esp,%ebp
0836353d +0x03:  push   %esi
0836353e +0x04:  push   %ebx
0836353f +0x05:  sub    $0x20,%esp
08363542 +0x08:  lea    -0x9(%ebp),%eax
08363545 +0x0b:  mov    %eax,(%esp)
08363548 +0x0e:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0836354d +0x13:  lea    -0x9(%ebp),%eax
08363550 +0x16:  mov    %eax,0x8(%esp)
08363554 +0x1a:  mov    0xc(%ebp),%eax
08363557 +0x1d:  mov    %eax,0x4(%esp)
0836355b +0x21:  lea    -0x10(%ebp),%eax
0836355e +0x24:  mov    %eax,(%esp)
08363561 +0x27:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08363566 +0x2c:  jmp    08363583 <+0x49>
08363568 +0x2e:  mov    %edx,%ebx
0836356a +0x30:  mov    %eax,%esi
0836356c +0x32:  lea    -0x9(%ebp),%eax
0836356f +0x35:  mov    %eax,(%esp)
08363572 +0x38:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08363577 +0x3d:  mov    %esi,%eax
08363579 +0x3f:  mov    %ebx,%edx
0836357b +0x41:  mov    %eax,(%esp)
0836357e +0x44:  call   08ae3750 <_Unwind_Resume>
08363583 +0x49:  lea    -0x9(%ebp),%eax
08363586 +0x4c:  mov    %eax,(%esp)
08363589 +0x4f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0836358e +0x54:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
08363593 +0x59:  lea    -0x10(%ebp),%edx
08363596 +0x5c:  mov    %edx,0x4(%esp)
0836359a +0x60:  mov    %eax,(%esp)
0836359d +0x63:  call   0862e16e <_ZN16CSyncSlangFilter12HasSlangNameERKSs>  ; CSyncSlangFilter::HasSlangName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
083635a2 +0x68:  mov    %eax,%ebx
083635a4 +0x6a:  lea    -0x10(%ebp),%eax
083635a7 +0x6d:  mov    %eax,(%esp)
083635aa +0x70:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083635af +0x75:  mov    %ebx,%eax
083635b1 +0x77:  add    $0x20,%esp
083635b4 +0x7a:  pop    %ebx
083635b5 +0x7b:  pop    %esi
083635b6 +0x7c:  pop    %ebp
083635b7 +0x7d:  ret
083635b8 +0x7e:  mov    %edx,%ebx
083635ba +0x80:  mov    %eax,%esi
083635bc +0x82:  lea    -0x10(%ebp),%eax
083635bf +0x85:  mov    %eax,(%esp)
083635c2 +0x88:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083635c7 +0x8d:  mov    %esi,%eax
083635c9 +0x8f:  mov    %ebx,%edx
083635cb +0x91:  mov    %eax,(%esp)
083635ce +0x94:  call   08ae3750 <_Unwind_Resume>
083635d3 +0x99:  nop
```

## 反编译 C

```c
// CDataManager::hasPreventStringName @ 0x836353a

/* CDataManager::hasPreventStringName(char const*) */

undefined4 __thiscall CDataManager::hasPreventStringName(CDataManager *this,char *param_1)

{
  CSyncSlangFilter *this_00;
  undefined4 uVar1;
  string local_14;
  allocator<char> local_d;
  
  std::allocator<char>::allocator();
                    /* try { // try from 08363561 to 08363565 has its CatchHandler @ 08363568 */
  std::string::string((string *)&local_14,param_1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
                    /* try { // try from 0836358e to 083635a1 has its CatchHandler @ 083635b8 */
  this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  uVar1 = CSyncSlangFilter::HasSlangName(this_00,&local_14);
  std::string::~string((string *)&local_14);
  return uVar1;
}
```
