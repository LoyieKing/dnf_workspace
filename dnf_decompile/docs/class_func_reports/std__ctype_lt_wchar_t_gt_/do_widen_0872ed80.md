# do_widen

`_ZNKSt5ctypeIwE8do_widenEPKcS2_Pw`

`std::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const`

| 类 | 地址 |
|---|---|
| `std::ctype<wchar_t>` | `0x0872ed80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0872ed80  _ZNKSt5ctypeIwE8do_widenEPKcS2_Pw
#           std::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const
# range [0x0872ed80, 0x0872edbf]
0872ed80 +0x00:  push   %ebp
0872ed81 +0x01:  mov    %esp,%ebp
0872ed83 +0x03:  mov    0xc(%ebp),%edx
0872ed86 +0x06:  mov    0x10(%ebp),%eax
0872ed89 +0x09:  push   %esi
0872ed8a +0x0a:  mov    0x14(%ebp),%ecx
0872ed8d +0x0d:  push   %ebx
0872ed8e +0x0e:  mov    0x8(%ebp),%esi
0872ed91 +0x11:  cmp    %eax,%edx
0872ed93 +0x13:  jae    0872edae <+0x2e>
0872ed95 +0x15:  lea    0x0(%esi),%esi
0872ed98 +0x18:  movzbl (%edx),%ebx
0872ed9b +0x1b:  add    $0x1,%edx
0872ed9e +0x1e:  mov    0x90(%esi,%ebx,4),%ebx
0872eda5 +0x25:  mov    %ebx,(%ecx)
0872eda7 +0x27:  add    $0x4,%ecx
0872edaa +0x2a:  cmp    %edx,%eax
0872edac +0x2c:  ja     0872ed98 <+0x18>
0872edae +0x2e:  pop    %ebx
0872edaf +0x2f:  pop    %esi
0872edb0 +0x30:  pop    %ebp
0872edb1 +0x31:  ret
0872edb2 +0x32:  nop
0872edb3 +0x33:  nop
0872edb4 +0x34:  nop
0872edb5 +0x35:  nop
0872edb6 +0x36:  nop
0872edb7 +0x37:  nop
0872edb8 +0x38:  nop
0872edb9 +0x39:  nop
0872edba +0x3a:  nop
0872edbb +0x3b:  nop
0872edbc +0x3c:  nop
0872edbd +0x3d:  nop
0872edbe +0x3e:  nop
0872edbf +0x3f:  nop
```

## 反编译 C

```c
// std::ctype<wchar_t>::do_widen @ 0x872ed80

/* std::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

void __thiscall
std::ctype<wchar_t>::do_widen(ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    *param_3 = *(wchar_t *)(this + (uint)(byte)*param_1 * 4 + 0x90);
    param_3 = param_3 + 1;
  }
  return;
}
```
