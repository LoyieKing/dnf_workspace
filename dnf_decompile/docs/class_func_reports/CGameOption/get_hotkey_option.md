# get_hotkey_option

`_ZN11CGameOption17get_hotkey_optionEh`

`CGameOption::get_hotkey_option(unsigned char)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b7266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7266  _ZN11CGameOption17get_hotkey_optionEh
#           CGameOption::get_hotkey_option(unsigned char)
# range [0x084b7266, 0x084b7281]
084b7266 +0x00:  push   %ebp
084b7267 +0x01:  mov    %esp,%ebp
084b7269 +0x03:  sub    $0x4,%esp
084b726c +0x06:  mov    0xc(%ebp),%eax
084b726f +0x09:  mov    %al,-0x4(%ebp)
084b7272 +0x0c:  movzbl -0x4(%ebp),%eax
084b7276 +0x10:  imul   $0xbc,%eax,%eax
084b727c +0x16:  add    0x8(%ebp),%eax
084b727f +0x19:  leave
084b7280 +0x1a:  ret
084b7281 +0x1b:  nop
```

## 反编译 C

```c
// CGameOption::get_hotkey_option @ 0x84b7266

/* CGameOption::get_hotkey_option(unsigned char) */

CGameOption * __thiscall CGameOption::get_hotkey_option(CGameOption *this,uchar param_1)

{
  return this + (uint)param_1 * 0xbc;
}
```
