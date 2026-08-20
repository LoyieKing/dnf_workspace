# isTaken

`_ZN11SectionLock7isTakenEv`

`SectionLock::isTaken()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad37e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad37e4  _ZN11SectionLock7isTakenEv
#           SectionLock::isTaken()
# range [0x08ad37e4, 0x08ad37ed]
08ad37e4 +0x00:  push   %ebp
08ad37e5 +0x01:  mov    %esp,%ebp
08ad37e7 +0x03:  mov    $0x0,%eax
08ad37ec +0x08:  pop    %ebp
08ad37ed +0x09:  ret
```

## 反编译 C

```c
// SectionLock::isTaken @ 0x8ad37e4

/* DWARF original prototype: bool isTaken(SectionLock * this) */

bool __thiscall SectionLock::isTaken(SectionLock *this)

{
  return false;
}
```
