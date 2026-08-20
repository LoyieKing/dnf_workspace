# CCommunityServerProxy

`_ZN21CCommunityServerProxyC1EPci`

`CCommunityServerProxy::CCommunityServerProxy(char*, int)`

| 类 | 地址 |
|---|---|
| `CCommunityServerProxy` | `0x0846c5c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846c5c8  _ZN21CCommunityServerProxyC1EPci
#           CCommunityServerProxy::CCommunityServerProxy(char*, int)
# range [0x0846c5c8, 0x0846c65f]
0846c5c8 +0x00:  push   %ebp
0846c5c9 +0x01:  mov    %esp,%ebp
0846c5cb +0x03:  push   %esi
0846c5cc +0x04:  push   %ebx
0846c5cd +0x05:  sub    $0x20,%esp
0846c5d0 +0x08:  mov    0x8(%ebp),%eax
0846c5d3 +0x0b:  mov    %eax,(%esp)
0846c5d6 +0x0e:  call   082ab4f0 <_GLOBAL__I__ZN4CLog5this_E+0x7917>  ; global constructors keyed to CLog::this_+0x7917
0846c5db +0x13:  lea    -0x9(%ebp),%eax
0846c5de +0x16:  mov    %eax,(%esp)
0846c5e1 +0x19:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0846c5e6 +0x1e:  mov    0x8(%ebp),%eax
0846c5e9 +0x21:  lea    &_ZL14gUnicodeBuffer+0x268d0(%eax),%edx
0846c5ef +0x27:  lea    -0x9(%ebp),%eax
0846c5f2 +0x2a:  mov    %eax,0x8(%esp)
0846c5f6 +0x2e:  mov    0xc(%ebp),%eax
0846c5f9 +0x31:  mov    %eax,0x4(%esp)
0846c5fd +0x35:  mov    %edx,(%esp)
0846c600 +0x38:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0846c605 +0x3d:  jmp    0846c635 <+0x6d>
0846c607 +0x3f:  mov    %edx,%ebx
0846c609 +0x41:  mov    %eax,%esi
0846c60b +0x43:  lea    -0x9(%ebp),%eax
0846c60e +0x46:  mov    %eax,(%esp)
0846c611 +0x49:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0846c616 +0x4e:  mov    %esi,%eax
0846c618 +0x50:  mov    %ebx,%edx
0846c61a +0x52:  mov    %edx,%ebx
0846c61c +0x54:  mov    %eax,%esi
0846c61e +0x56:  mov    0x8(%ebp),%eax
0846c621 +0x59:  mov    %eax,(%esp)
0846c624 +0x5c:  call   082ab58e <_GLOBAL__I__ZN4CLog5this_E+0x79b5>  ; global constructors keyed to CLog::this_+0x79b5
0846c629 +0x61:  mov    %esi,%eax
0846c62b +0x63:  mov    %ebx,%edx
0846c62d +0x65:  mov    %eax,(%esp)
0846c630 +0x68:  call   08ae3750 <_Unwind_Resume>
0846c635 +0x6d:  lea    -0x9(%ebp),%eax
0846c638 +0x70:  mov    %eax,(%esp)
0846c63b +0x73:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0846c640 +0x78:  mov    0x8(%ebp),%eax
0846c643 +0x7b:  mov    0x10(%ebp),%edx
0846c646 +0x7e:  mov    %edx,&_ZL14gUnicodeBuffer+0x268d4(%eax)
0846c64c +0x84:  mov    0x8(%ebp),%eax
0846c64f +0x87:  movl   $0x0,&_ZL14gUnicodeBuffer+0x268cc(%eax)
0846c659 +0x91:  add    $0x20,%esp
0846c65c +0x94:  pop    %ebx
0846c65d +0x95:  pop    %esi
0846c65e +0x96:  pop    %ebp
0846c65f +0x97:  ret
```

## 反编译 C

```c
// CCommunityServerProxy::CCommunityServerProxy @ 0x846c5c8

/* CCommunityServerProxy::CCommunityServerProxy(char*, int) */

void __thiscall
CCommunityServerProxy::CCommunityServerProxy(CCommunityServerProxy *this,char *param_1,int param_2)

{
  allocator<char> local_d;
  
  CNetwork<100000,100000>::CNetwork((CNetwork<100000,100000> *)this);
  std::allocator<char>::allocator();
                    /* try { // try from 0846c600 to 0846c604 has its CatchHandler @ 0846c607 */
  std::string::string((string *)(this + 0x30dfc),param_1,(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  *(int *)(this + 0x30e00) = param_2;
  *(undefined4 *)(this + 0x30df8) = 0;
  return;
}
```
