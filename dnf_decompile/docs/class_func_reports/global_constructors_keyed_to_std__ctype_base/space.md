# space

`_GLOBAL__I__ZNSt10ctype_base5spaceE`

`global constructors keyed to std::ctype_base::space`

| 类 | 地址 |
|---|---|
| `global constructors keyed to std::ctype_base` | `0x08726730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08726730  _GLOBAL__I__ZNSt10ctype_base5spaceE
#           global constructors keyed to std::ctype_base::space
# range [0x08726730, 0x0872679f]
08726730 +0x00:  push   %ebp
08726731 +0x01:  mov    %esp,%ebp
08726733 +0x03:  pop    %ebp
08726734 +0x04:  ret
08726735 +0x05:  nop
08726736 +0x06:  nop
08726737 +0x07:  nop
08726738 +0x08:  nop
08726739 +0x09:  nop
0872673a +0x0a:  nop
0872673b +0x0b:  nop
0872673c +0x0c:  nop
0872673d +0x0d:  nop
0872673e +0x0e:  nop
0872673f +0x0f:  nop
08726740 +0x10:  push   %ebp
08726741 +0x11:  mov    %esp,%ebp
08726743 +0x13:  push   %ebx
08726744 +0x14:  sub    $0x14,%esp
08726747 +0x17:  mov    0x10(%ebp),%ebx
0872674a +0x1a:  mov    0xc(%ebp),%eax
0872674d +0x1d:  mov    %ebx,%edx
0872674f +0x1f:  sub    %eax,%edx
08726751 +0x21:  mov    %eax,0x4(%esp)
08726755 +0x25:  mov    0x18(%ebp),%eax
08726758 +0x28:  mov    %edx,0x8(%esp)
0872675c +0x2c:  mov    %eax,(%esp)
0872675f +0x2f:  call   0807d8a0 <_init+0x198>
08726764 +0x34:  mov    %ebx,%eax
08726766 +0x36:  add    $0x14,%esp
08726769 +0x39:  pop    %ebx
0872676a +0x3a:  pop    %ebp
0872676b +0x3b:  ret
0872676c +0x3c:  nop
0872676d +0x3d:  nop
0872676e +0x3e:  nop
0872676f +0x3f:  nop
08726770 +0x40:  push   %ebp
08726771 +0x41:  mov    %esp,%ebp
08726773 +0x43:  push   %ebx
08726774 +0x44:  sub    $0x14,%esp
08726777 +0x47:  mov    0x10(%ebp),%ebx
0872677a +0x4a:  mov    0xc(%ebp),%eax
0872677d +0x4d:  mov    %ebx,%edx
0872677f +0x4f:  sub    %eax,%edx
08726781 +0x51:  mov    %eax,0x4(%esp)
08726785 +0x55:  mov    0x14(%ebp),%eax
08726788 +0x58:  mov    %edx,0x8(%esp)
0872678c +0x5c:  mov    %eax,(%esp)
0872678f +0x5f:  call   0807d8a0 <_init+0x198>
08726794 +0x64:  mov    %ebx,%eax
08726796 +0x66:  add    $0x14,%esp
08726799 +0x69:  pop    %ebx
0872679a +0x6a:  pop    %ebp
0872679b +0x6b:  ret
0872679c +0x6c:  nop
0872679d +0x6d:  nop
0872679e +0x6e:  nop
0872679f +0x6f:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8726730

/* std::ctype_base::space */

void std::ctype_base::_GLOBAL__I_space(void)

{
  return;
}
```
