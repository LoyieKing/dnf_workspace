# get_load_hotkey_flag

`_ZN11CGameOption20get_load_hotkey_flagEh`

`CGameOption::get_load_hotkey_flag(unsigned char)`

| 类 | 地址 |
|---|---|
| `CGameOption` | `0x084b72b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b72b0  _ZN11CGameOption20get_load_hotkey_flagEh
#           CGameOption::get_load_hotkey_flag(unsigned char)
# range [0x084b72b0, 0x084b72d9]
084b72b0 +0x00:  push   %ebp
084b72b1 +0x01:  mov    %esp,%ebp
084b72b3 +0x03:  sub    $0x4,%esp
084b72b6 +0x06:  mov    0xc(%ebp),%eax
084b72b9 +0x09:  mov    %al,-0x4(%ebp)
084b72bc +0x0c:  cmpb   $0x1,-0x4(%ebp)
084b72c0 +0x10:  jbe    084b72c9 <+0x19>
084b72c2 +0x12:  mov    $0x0,%eax
084b72c7 +0x17:  jmp    084b72d8 <+0x28>
084b72c9 +0x19:  movzbl -0x4(%ebp),%eax
084b72cd +0x1d:  mov    0x8(%ebp),%edx
084b72d0 +0x20:  movzbl 0x178(%edx,%eax,1),%eax
084b72d8 +0x28:  leave
084b72d9 +0x29:  ret
```

## 反编译 C

```c
// CGameOption::get_load_hotkey_flag @ 0x84b72b0

/* CGameOption::get_load_hotkey_flag(unsigned char) */

CGameOption __thiscall CGameOption::get_load_hotkey_flag(CGameOption *this,uchar param_1)

{
  CGameOption CVar1;
  
  if (param_1 < 2) {
    CVar1 = this[param_1 + 0x178];
  }
  else {
    CVar1 = (CGameOption)0x0;
  }
  return CVar1;
}
```
