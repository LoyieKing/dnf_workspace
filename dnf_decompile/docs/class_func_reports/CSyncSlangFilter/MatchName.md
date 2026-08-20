# MatchName

`_ZNK16CSyncSlangFilter9MatchNameERKSs`

`CSyncSlangFilter::MatchName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e0c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e0c0  _ZNK16CSyncSlangFilter9MatchNameERKSs
#           CSyncSlangFilter::MatchName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
# range [0x0862e0c0, 0x0862e16d]
0862e0c0 +0x00:  push   %ebp
0862e0c1 +0x01:  mov    %esp,%ebp
0862e0c3 +0x03:  sub    $0x28,%esp
0862e0c6 +0x06:  mov    0xc(%ebp),%eax
0862e0c9 +0x09:  mov    %eax,(%esp)
0862e0cc +0x0c:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0862e0d1 +0x11:  test   %al,%al
0862e0d3 +0x13:  je     0862e0df <+0x1f>
0862e0d5 +0x15:  mov    $0x0,%eax
0862e0da +0x1a:  jmp    0862e16c <+0xac>
0862e0df +0x1f:  mov    0x8(%ebp),%eax
0862e0e2 +0x22:  mov    0x4(%eax),%eax
0862e0e5 +0x25:  mov    (%eax),%eax
0862e0e7 +0x27:  mov    %eax,-0x14(%ebp)
0862e0ea +0x2a:  movl   $0x0,-0x10(%ebp)
0862e0f1 +0x31:  movl   $0x0,-0x10(%ebp)
0862e0f8 +0x38:  jmp    0862e152 <+0x92>
0862e0fa +0x3a:  mov    -0x10(%ebp),%eax
0862e0fd +0x3d:  mov    %eax,0x4(%esp)
0862e101 +0x41:  mov    0xc(%ebp),%eax
0862e104 +0x44:  mov    %eax,(%esp)
0862e107 +0x47:  call   087066c0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2d0
0862e10c +0x4c:  movzbl (%eax),%eax
0862e10f +0x4f:  movzbl %al,%eax
0862e112 +0x52:  mov    %eax,-0xc(%ebp)
0862e115 +0x55:  mov    -0xc(%ebp),%eax
0862e118 +0x58:  mov    %eax,0x4(%esp)
0862e11c +0x5c:  mov    -0x14(%ebp),%eax
0862e11f +0x5f:  mov    %eax,(%esp)
0862e122 +0x62:  call   0862e9f6 <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x117>  ; global constructors keyed to CSyncSlangFilter::instance+0x117
0862e127 +0x67:  mov    %eax,-0x14(%ebp)
0862e12a +0x6a:  cmpl   $0x0,-0x14(%ebp)
0862e12e +0x6e:  jne    0862e137 <+0x77>
0862e130 +0x70:  mov    $0x0,%eax
0862e135 +0x75:  jmp    0862e16c <+0xac>
0862e137 +0x77:  mov    -0x14(%ebp),%eax
0862e13a +0x7a:  mov    %eax,(%esp)
0862e13d +0x7d:  call   0862eb3c <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x25d>  ; global constructors keyed to CSyncSlangFilter::instance+0x25d
0862e142 +0x82:  test   %al,%al
0862e144 +0x84:  je     0862e14e <+0x8e>
0862e146 +0x86:  mov    -0x10(%ebp),%eax
0862e149 +0x89:  add    $0x1,%eax
0862e14c +0x8c:  jmp    0862e16c <+0xac>
0862e14e +0x8e:  addl   $0x1,-0x10(%ebp)
0862e152 +0x92:  mov    0xc(%ebp),%eax
0862e155 +0x95:  mov    %eax,(%esp)
0862e158 +0x98:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e15d +0x9d:  cmp    -0x10(%ebp),%eax
0862e160 +0xa0:  seta   %al
0862e163 +0xa3:  test   %al,%al
0862e165 +0xa5:  jne    0862e0fa <+0x3a>
0862e167 +0xa7:  mov    $0x0,%eax
0862e16c +0xac:  leave
0862e16d +0xad:  ret
```

## 反编译 C

```c
// CSyncSlangFilter::MatchName @ 0x862e0c0

/* CSyncSlangFilter::MatchName(std::string const&) const */

int __thiscall CSyncSlangFilter::MatchName(CSyncSlangFilter *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  SlangNode *local_18;
  uint local_14;
  
  cVar1 = std::string::empty((string *)param_1);
  if (cVar1 == '\0') {
    local_18 = (SlangNode *)**(undefined4 **)(this + 4);
    for (local_14 = 0; uVar2 = std::string::size((string *)param_1), local_14 < uVar2;
        local_14 = local_14 + 1) {
      std::string::operator[]((string *)param_1,local_14);
      local_18 = (SlangNode *)SlangNode::FindChild((uint)local_18);
      if (local_18 == (SlangNode *)0x0) {
        return 0;
      }
      cVar1 = SlangNode::IsEndNode(local_18);
      if (cVar1 != '\0') {
        return local_14 + 1;
      }
    }
  }
  return 0;
}
```
