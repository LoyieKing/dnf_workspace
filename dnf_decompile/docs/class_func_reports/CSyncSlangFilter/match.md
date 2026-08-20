# match

`_ZNK16CSyncSlangFilter5matchERKSs`

`CSyncSlangFilter::match(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const`

| 类 | 地址 |
|---|---|
| `CSyncSlangFilter` | `0x0862e3be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0862e3be  _ZNK16CSyncSlangFilter5matchERKSs
#           CSyncSlangFilter::match(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
# range [0x0862e3be, 0x0862e46b]
0862e3be +0x00:  push   %ebp
0862e3bf +0x01:  mov    %esp,%ebp
0862e3c1 +0x03:  sub    $0x28,%esp
0862e3c4 +0x06:  mov    0xc(%ebp),%eax
0862e3c7 +0x09:  mov    %eax,(%esp)
0862e3ca +0x0c:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
0862e3cf +0x11:  test   %al,%al
0862e3d1 +0x13:  je     0862e3dd <+0x1f>
0862e3d3 +0x15:  mov    $0x0,%eax
0862e3d8 +0x1a:  jmp    0862e469 <+0xab>
0862e3dd +0x1f:  mov    0x8(%ebp),%eax
0862e3e0 +0x22:  mov    (%eax),%eax
0862e3e2 +0x24:  mov    (%eax),%eax
0862e3e4 +0x26:  mov    %eax,-0x14(%ebp)
0862e3e7 +0x29:  movl   $0x0,-0x10(%ebp)
0862e3ee +0x30:  movl   $0x0,-0x10(%ebp)
0862e3f5 +0x37:  jmp    0862e44f <+0x91>
0862e3f7 +0x39:  mov    -0x10(%ebp),%eax
0862e3fa +0x3c:  mov    %eax,0x4(%esp)
0862e3fe +0x40:  mov    0xc(%ebp),%eax
0862e401 +0x43:  mov    %eax,(%esp)
0862e404 +0x46:  call   087066c0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2d0
0862e409 +0x4b:  movzbl (%eax),%eax
0862e40c +0x4e:  movzbl %al,%eax
0862e40f +0x51:  mov    %eax,-0xc(%ebp)
0862e412 +0x54:  mov    -0xc(%ebp),%eax
0862e415 +0x57:  mov    %eax,0x4(%esp)
0862e419 +0x5b:  mov    -0x14(%ebp),%eax
0862e41c +0x5e:  mov    %eax,(%esp)
0862e41f +0x61:  call   0862e9f6 <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x117>  ; global constructors keyed to CSyncSlangFilter::instance+0x117
0862e424 +0x66:  mov    %eax,-0x14(%ebp)
0862e427 +0x69:  cmpl   $0x0,-0x14(%ebp)
0862e42b +0x6d:  jne    0862e434 <+0x76>
0862e42d +0x6f:  mov    $0x0,%eax
0862e432 +0x74:  jmp    0862e469 <+0xab>
0862e434 +0x76:  mov    -0x14(%ebp),%eax
0862e437 +0x79:  mov    %eax,(%esp)
0862e43a +0x7c:  call   0862eb3c <_GLOBAL__I__ZN16CSyncSlangFilter8instanceE+0x25d>  ; global constructors keyed to CSyncSlangFilter::instance+0x25d
0862e43f +0x81:  test   %al,%al
0862e441 +0x83:  je     0862e44b <+0x8d>
0862e443 +0x85:  mov    -0x10(%ebp),%eax
0862e446 +0x88:  add    $0x1,%eax
0862e449 +0x8b:  jmp    0862e469 <+0xab>
0862e44b +0x8d:  addl   $0x1,-0x10(%ebp)
0862e44f +0x91:  mov    0xc(%ebp),%eax
0862e452 +0x94:  mov    %eax,(%esp)
0862e455 +0x97:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0862e45a +0x9c:  cmp    -0x10(%ebp),%eax
0862e45d +0x9f:  seta   %al
0862e460 +0xa2:  test   %al,%al
0862e462 +0xa4:  jne    0862e3f7 <+0x39>
0862e464 +0xa6:  mov    $0x0,%eax
0862e469 +0xab:  leave
0862e46a +0xac:  ret
0862e46b +0xad:  nop
```

## 反编译 C

```c
// CSyncSlangFilter::match @ 0x862e3be

/* CSyncSlangFilter::match(std::string const&) const */

int __thiscall CSyncSlangFilter::match(CSyncSlangFilter *this,string *param_1)

{
  char cVar1;
  uint uVar2;
  SlangNode *local_18;
  uint local_14;
  
  cVar1 = std::string::empty((string *)param_1);
  if (cVar1 == '\0') {
    local_18 = (SlangNode *)**(undefined4 **)this;
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
