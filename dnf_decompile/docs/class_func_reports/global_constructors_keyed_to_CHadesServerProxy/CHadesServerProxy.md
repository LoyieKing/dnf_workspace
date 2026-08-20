# CHadesServerProxy

`_GLOBAL__I__ZN17CHadesServerProxyC2EPcii`

`global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CHadesServerProxy` | `0x084708c7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084708c7  _GLOBAL__I__ZN17CHadesServerProxyC2EPcii
#           global constructors keyed to CHadesServerProxy::CHadesServerProxy(char*, int, int)
# range [0x084708c7, 0x08470967]
084708c7 +0x00:  push   %ebp
084708c8 +0x01:  mov    %esp,%ebp
084708ca +0x03:  sub    $0x18,%esp
084708cd +0x06:  movl   $0xffff,0x4(%esp)
084708d5 +0x0e:  movl   $0x1,(%esp)
084708dc +0x15:  call   08470887 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
084708e1 +0x1a:  leave
084708e2 +0x1b:  ret
084708e3 +0x1c:  nop
084708e4 +0x1d:  push   %ebp
084708e5 +0x1e:  mov    %esp,%ebp
084708e7 +0x20:  sub    $0x18,%esp
084708ea +0x23:  mov    0x8(%ebp),%eax
084708ed +0x26:  movl   $0xe,0x8(%esp)
084708f5 +0x2e:  movl   $0xfd8,0x4(%esp)
084708fd +0x36:  mov    %eax,(%esp)
08470900 +0x39:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
08470905 +0x3e:  mov    0x8(%ebp),%eax
08470908 +0x41:  movw   $0x0,0xa(%eax)
0847090e +0x47:  mov    0x8(%ebp),%eax
08470911 +0x4a:  movw   $0x0,0xc(%eax)
08470917 +0x50:  leave
08470918 +0x51:  ret
08470919 +0x52:  nop
0847091a +0x53:  push   %ebp
0847091b +0x54:  mov    %esp,%ebp
0847091d +0x56:  mov    0x8(%ebp),%eax
08470920 +0x59:  mov    0xc(%ebp),%edx
08470923 +0x5c:  mov    %edx,&_ZL14gUnicodeBuffer+0x268d0(%eax)
08470929 +0x62:  pop    %ebp
0847092a +0x63:  ret
0847092b +0x64:  nop
0847092c +0x65:  push   %ebp
0847092d +0x66:  mov    %esp,%ebp
0847092f +0x68:  mov    0x8(%ebp),%eax
08470932 +0x6b:  mov    &_ZL14gUnicodeBuffer+0x268d0(%eax),%eax
08470938 +0x71:  pop    %ebp
08470939 +0x72:  ret
0847093a +0x73:  push   %ebp
0847093b +0x74:  mov    %esp,%ebp
0847093d +0x76:  push   %ebx
0847093e +0x77:  sub    $0x14,%esp
08470941 +0x7a:  mov    0x8(%ebp),%ebx
08470944 +0x7d:  mov    %ebx,%eax
08470946 +0x7f:  mov    0xc(%ebp),%edx
08470949 +0x82:  add    $&_ZL14gUnicodeBuffer+0x268d4,%edx
0847094f +0x88:  mov    %edx,0x4(%esp)
08470953 +0x8c:  mov    %eax,(%esp)
08470956 +0x8f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0847095b +0x94:  mov    %ebx,%eax
0847095d +0x96:  mov    %ebx,%eax
0847095f +0x98:  add    $0x14,%esp
08470962 +0x9b:  pop    %ebx
08470963 +0x9c:  pop    %ebp
08470964 +0x9d:  ret    $0x4
08470967 +0xa0:  nop
```

## 反编译 C

```c
// <global>::global @ 0x84708c7

/* CHadesServerProxy::CHadesServerProxy(char*, int, int) */

void CHadesServerProxy::_GLOBAL__I_CHadesServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
