# CPCRoomServerProxy

`_ZN18CPCRoomServerProxyC1EPci`

`CPCRoomServerProxy::CPCRoomServerProxy(char*, int)`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x084717dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084717dc  _ZN18CPCRoomServerProxyC1EPci
#           CPCRoomServerProxy::CPCRoomServerProxy(char*, int)
# range [0x084717dc, 0x08471873]
084717dc +0x00:  push   %ebp
084717dd +0x01:  mov    %esp,%ebp
084717df +0x03:  push   %esi
084717e0 +0x04:  push   %ebx
084717e1 +0x05:  sub    $0x20,%esp
084717e4 +0x08:  mov    0x8(%ebp),%eax
084717e7 +0x0b:  mov    %eax,(%esp)
084717ea +0x0e:  call   082ab4f0 <_GLOBAL__I__ZN4CLog5this_E+0x7917>  ; global constructors keyed to CLog::this_+0x7917
084717ef +0x13:  lea    -0x9(%ebp),%eax
084717f2 +0x16:  mov    %eax,(%esp)
084717f5 +0x19:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084717fa +0x1e:  mov    0x8(%ebp),%eax
084717fd +0x21:  lea    &_ZL14gUnicodeBuffer+0x268cc(%eax),%edx
08471803 +0x27:  lea    -0x9(%ebp),%eax
08471806 +0x2a:  mov    %eax,0x8(%esp)
0847180a +0x2e:  mov    0xc(%ebp),%eax
0847180d +0x31:  mov    %eax,0x4(%esp)
08471811 +0x35:  mov    %edx,(%esp)
08471814 +0x38:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08471819 +0x3d:  jmp    08471849 <+0x6d>
0847181b +0x3f:  mov    %edx,%ebx
0847181d +0x41:  mov    %eax,%esi
0847181f +0x43:  lea    -0x9(%ebp),%eax
08471822 +0x46:  mov    %eax,(%esp)
08471825 +0x49:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0847182a +0x4e:  mov    %esi,%eax
0847182c +0x50:  mov    %ebx,%edx
0847182e +0x52:  mov    %edx,%ebx
08471830 +0x54:  mov    %eax,%esi
08471832 +0x56:  mov    0x8(%ebp),%eax
08471835 +0x59:  mov    %eax,(%esp)
08471838 +0x5c:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
0847183d +0x61:  mov    %esi,%eax
0847183f +0x63:  mov    %ebx,%edx
08471841 +0x65:  mov    %eax,(%esp)
08471844 +0x68:  call   08ae3750 <_Unwind_Resume>
08471849 +0x6d:  lea    -0x9(%ebp),%eax
0847184c +0x70:  mov    %eax,(%esp)
0847184f +0x73:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08471854 +0x78:  mov    0x8(%ebp),%eax
08471857 +0x7b:  mov    0x10(%ebp),%edx
0847185a +0x7e:  mov    %edx,&_ZL14gUnicodeBuffer+0x268d0(%eax)
08471860 +0x84:  mov    0x8(%ebp),%eax
08471863 +0x87:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268d4(%eax)
0847186d +0x91:  add    $0x20,%esp
08471870 +0x94:  pop    %ebx
08471871 +0x95:  pop    %esi
08471872 +0x96:  pop    %ebp
08471873 +0x97:  ret
```

## 反编译 C

```c
// CPCRoomServerProxy::CPCRoomServerProxy @ 0x84717dc

/* CPCRoomServerProxy::CPCRoomServerProxy(char*, int) */

void __thiscall
CPCRoomServerProxy::CPCRoomServerProxy(CPCRoomServerProxy *this,char *param_1,int param_2)

{
  allocator<char> local_d;
  
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)this);
  std::allocator<char>::allocator();
                    /* try { // try from 08471814 to 08471818 has its CatchHandler @ 0847181b */
  std::string::string((string *)(this + 0x30df8),param_1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  *(int *)(this + 0x30dfc) = param_2;
  *(undefined4 *)(this + 0x30e00) = 0;
  return;
}
```
