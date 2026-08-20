# _M_compare

`_ZNKSt7collateIwE10_M_compareEPKwS2_`

`std::collate<wchar_t>::_M_compare(wchar_t const*, wchar_t const*) const`

| 类 | 地址 |
|---|---|
| `std::collate<wchar_t>` | `0x0871f910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f910  _ZNKSt7collateIwE10_M_compareEPKwS2_
#           std::collate<wchar_t>::_M_compare(wchar_t const*, wchar_t const*) const
# range [0x0871f910, 0x0871f94f]
0871f910 +0x00:  push   %ebp
0871f911 +0x01:  mov    %esp,%ebp
0871f913 +0x03:  sub    $0x18,%esp
0871f916 +0x06:  mov    0x8(%ebp),%eax
0871f919 +0x09:  mov    0x8(%eax),%eax
0871f91c +0x0c:  mov    %eax,0x8(%esp)
0871f920 +0x10:  mov    0x10(%ebp),%eax
0871f923 +0x13:  mov    %eax,0x4(%esp)
0871f927 +0x17:  mov    0xc(%ebp),%eax
0871f92a +0x1a:  mov    %eax,(%esp)
0871f92d +0x1d:  call   0807db90 <_init+0x488>
0871f932 +0x22:  leave
0871f933 +0x23:  mov    %eax,%edx
0871f935 +0x25:  xor    %eax,%eax
0871f937 +0x27:  test   %edx,%edx
0871f939 +0x29:  setne  %al
0871f93c +0x2c:  sar    $0x1e,%edx
0871f93f +0x2f:  or     %edx,%eax
0871f941 +0x31:  ret
0871f942 +0x32:  nop
0871f943 +0x33:  nop
0871f944 +0x34:  nop
0871f945 +0x35:  nop
0871f946 +0x36:  nop
0871f947 +0x37:  nop
0871f948 +0x38:  nop
0871f949 +0x39:  nop
0871f94a +0x3a:  nop
0871f94b +0x3b:  nop
0871f94c +0x3c:  nop
0871f94d +0x3d:  nop
0871f94e +0x3e:  nop
0871f94f +0x3f:  nop
```

## 反编译 C

```c
// std::collate<wchar_t>::_M_compare @ 0x871f910

/* std::collate<wchar_t>::_M_compare(wchar_t const*, wchar_t const*) const */

uint __thiscall
std::collate<wchar_t>::_M_compare(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = __wcscoll_l(param_1,param_2,*(undefined4 *)(this + 8));
  return (uint)(iVar1 != 0) | iVar1 >> 0x1e;
}
```
