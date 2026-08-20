# getPatchTime

`_ZN6Taiwan14GarenaAuthData12getPatchTimeEv`

`Taiwan::GarenaAuthData::getPatchTime()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08173042` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173042  _ZN6Taiwan14GarenaAuthData12getPatchTimeEv
#           Taiwan::GarenaAuthData::getPatchTime()
# range [0x08173042, 0x0817304d]
08173042 +0x00:  push   %ebp
08173043 +0x01:  mov    %esp,%ebp
08173045 +0x03:  mov    0x8(%ebp),%eax
08173048 +0x06:  mov    0x64(%eax),%eax
0817304b +0x09:  pop    %ebp
0817304c +0x0a:  ret
0817304d +0x0b:  nop
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getPatchTime @ 0x8173042

/* Taiwan::GarenaAuthData::getPatchTime() */

undefined4 __thiscall Taiwan::GarenaAuthData::getPatchTime(GarenaAuthData *this)

{
  return *(undefined4 *)(this + 100);
}
```
