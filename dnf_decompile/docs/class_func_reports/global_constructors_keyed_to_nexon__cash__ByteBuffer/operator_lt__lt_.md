# operator<<

`_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc`

`global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to nexon::cash::ByteBuffer` | `0x081acedd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081acedd  _GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc
#           global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)
# range [0x081acedd, 0x081acfc7]
081acedd +0x00:  push   %ebp
081acede +0x01:  mov    %esp,%ebp
081acee0 +0x03:  sub    $0x18,%esp
081acee3 +0x06:  movl   $0xffff,0x4(%esp)
081aceeb +0x0e:  movl   $0x1,(%esp)
081acef2 +0x15:  call   081ace9d <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081acef7 +0x1a:  leave
081acef8 +0x1b:  ret
081acef9 +0x1c:  nop
081acefa +0x1d:  push   %ebp
081acefb +0x1e:  mov    %esp,%ebp
081acefd +0x20:  sub    $0x38,%esp
081acf00 +0x23:  mov    0xc(%ebp),%eax
081acf03 +0x26:  mov    %ax,-0x1c(%ebp)
081acf07 +0x2a:  lea    -0x1c(%ebp),%eax
081acf0a +0x2d:  mov    %eax,-0xc(%ebp)
081acf0d +0x30:  mov    0x8(%ebp),%eax
081acf10 +0x33:  mov    %eax,(%esp)
081acf13 +0x36:  call   081acf60 <+0x83>
081acf18 +0x3b:  lea    0x2(%eax),%edx
081acf1b +0x3e:  mov    0x8(%ebp),%eax
081acf1e +0x41:  mov    0xc(%eax),%eax
081acf21 +0x44:  cmp    %eax,%edx
081acf23 +0x46:  setbe  %al
081acf26 +0x49:  test   %al,%al
081acf28 +0x4b:  je     081acf5b <+0x7e>
081acf2a +0x4d:  mov    0x8(%ebp),%eax
081acf2d +0x50:  mov    0x4(%eax),%eax
081acf30 +0x53:  mov    -0xc(%ebp),%edx
081acf33 +0x56:  add    $0x1,%edx
081acf36 +0x59:  movzbl (%edx),%edx
081acf39 +0x5c:  mov    %dl,(%eax)
081acf3b +0x5e:  mov    0x8(%ebp),%eax
081acf3e +0x61:  mov    0x4(%eax),%eax
081acf41 +0x64:  lea    0x1(%eax),%edx
081acf44 +0x67:  mov    -0xc(%ebp),%eax
081acf47 +0x6a:  movzbl (%eax),%eax
081acf4a +0x6d:  mov    %al,(%edx)
081acf4c +0x6f:  mov    0x8(%ebp),%eax
081acf4f +0x72:  mov    0x4(%eax),%eax
081acf52 +0x75:  lea    0x2(%eax),%edx
081acf55 +0x78:  mov    0x8(%ebp),%eax
081acf58 +0x7b:  mov    %edx,0x4(%eax)
081acf5b +0x7e:  mov    0x8(%ebp),%eax
081acf5e +0x81:  leave
081acf5f +0x82:  ret
081acf60 +0x83:  push   %ebp
081acf61 +0x84:  mov    %esp,%ebp
081acf63 +0x86:  mov    0x8(%ebp),%eax
081acf66 +0x89:  mov    0x4(%eax),%eax
081acf69 +0x8c:  mov    %eax,%edx
081acf6b +0x8e:  mov    0x8(%ebp),%eax
081acf6e +0x91:  mov    (%eax),%eax
081acf70 +0x93:  mov    %edx,%ecx
081acf72 +0x95:  sub    %eax,%ecx
081acf74 +0x97:  mov    %ecx,%eax
081acf76 +0x99:  pop    %ebp
081acf77 +0x9a:  ret
081acf78 +0x9b:  push   %ebp
081acf79 +0x9c:  mov    %esp,%ebp
081acf7b +0x9e:  sub    $0x18,%esp
081acf7e +0xa1:  mov    0x8(%ebp),%eax
081acf81 +0xa4:  movl   $&_ZTVSt16invalid_argument+0x8,(%eax)
081acf87 +0xaa:  mov    0x8(%ebp),%eax
081acf8a +0xad:  mov    %eax,(%esp)
081acf8d +0xb0:  call   086dd3d0 <_ZNSt11logic_errorD1Ev>  ; std::logic_error::~logic_error()
081acf92 +0xb5:  mov    $0x0,%eax
081acf97 +0xba:  test   %al,%al
081acf99 +0xbc:  je     081acfa6 <+0xc9>
081acf9b +0xbe:  mov    0x8(%ebp),%eax
081acf9e +0xc1:  mov    %eax,(%esp)
081acfa1 +0xc4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081acfa6 +0xc9:  leave
081acfa7 +0xca:  ret
081acfa8 +0xcb:  push   %ebp
081acfa9 +0xcc:  mov    %esp,%ebp
081acfab +0xce:  sub    $0x18,%esp
081acfae +0xd1:  mov    0x8(%ebp),%eax
081acfb1 +0xd4:  mov    %eax,(%esp)
081acfb4 +0xd7:  call   081acf78 <+0x9b>
081acfb9 +0xdc:  mov    0x8(%ebp),%eax
081acfbc +0xdf:  mov    %eax,(%esp)
081acfbf +0xe2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081acfc4 +0xe7:  leave
081acfc5 +0xe8:  ret
081acfc6 +0xe9:  nop
081acfc7 +0xea:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81acedd

/* nexon::cash::ByteBuffer::operator<<(char const*) */

void nexon::cash::ByteBuffer::_GLOBAL__I_operator<<(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
