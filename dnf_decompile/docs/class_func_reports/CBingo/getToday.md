# getToday

`_ZN6CBingo8getTodayEv`

`CBingo::getToday()`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080ca936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca936  _ZN6CBingo8getTodayEv
#           CBingo::getToday()
# range [0x080ca936, 0x080ca941]
080ca936 +0x00:  push   %ebp
080ca937 +0x01:  mov    %esp,%ebp
080ca939 +0x03:  mov    0x8(%ebp),%eax
080ca93c +0x06:  mov    0x18(%eax),%eax
080ca93f +0x09:  pop    %ebp
080ca940 +0x0a:  ret
080ca941 +0x0b:  nop
```

## 反编译 C

```c
// CBingo::getToday @ 0x80ca936

/* CBingo::getToday() */

undefined4 __thiscall CBingo::getToday(CBingo *this)

{
  return *(undefined4 *)(this + 0x18);
}
```
