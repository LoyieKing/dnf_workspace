# _M_compare

`_ZNKSt7collateIcE10_M_compareEPKcS2_`

`std::collate<char>::_M_compare(char const*, char const*) const`

| 类 | 地址 |
|---|---|
| `std::collate<char>` | `0x0871f980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f980  _ZNKSt7collateIcE10_M_compareEPKcS2_
#           std::collate<char>::_M_compare(char const*, char const*) const
# range [0x0871f980, 0x0871f9bf]
0871f980 +0x00:  push   %ebp
0871f981 +0x01:  mov    %esp,%ebp
0871f983 +0x03:  sub    $0x18,%esp
0871f986 +0x06:  mov    0x8(%ebp),%eax
0871f989 +0x09:  mov    0x8(%eax),%eax
0871f98c +0x0c:  mov    %eax,0x8(%esp)
0871f990 +0x10:  mov    0x10(%ebp),%eax
0871f993 +0x13:  mov    %eax,0x4(%esp)
0871f997 +0x17:  mov    0xc(%ebp),%eax
0871f99a +0x1a:  mov    %eax,(%esp)
0871f99d +0x1d:  call   0807e640 <_init+0xf38>
0871f9a2 +0x22:  leave
0871f9a3 +0x23:  mov    %eax,%edx
0871f9a5 +0x25:  xor    %eax,%eax
0871f9a7 +0x27:  test   %edx,%edx
0871f9a9 +0x29:  setne  %al
0871f9ac +0x2c:  sar    $0x1e,%edx
0871f9af +0x2f:  or     %edx,%eax
0871f9b1 +0x31:  ret
0871f9b2 +0x32:  nop
0871f9b3 +0x33:  nop
0871f9b4 +0x34:  nop
0871f9b5 +0x35:  nop
0871f9b6 +0x36:  nop
0871f9b7 +0x37:  nop
0871f9b8 +0x38:  nop
0871f9b9 +0x39:  nop
0871f9ba +0x3a:  nop
0871f9bb +0x3b:  nop
0871f9bc +0x3c:  nop
0871f9bd +0x3d:  nop
0871f9be +0x3e:  nop
0871f9bf +0x3f:  nop
```

## 反编译 C

```c
// std::collate<char>::_M_compare @ 0x871f980

/* std::collate<char>::_M_compare(char const*, char const*) const */

uint __thiscall std::collate<char>::_M_compare(collate<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = __strcoll_l(param_1,param_2,*(undefined4 *)(this + 8));
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}
```
