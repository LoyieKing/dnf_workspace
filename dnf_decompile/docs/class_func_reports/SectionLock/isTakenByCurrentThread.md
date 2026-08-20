# isTakenByCurrentThread

`_ZN11SectionLock22isTakenByCurrentThreadEv`

`SectionLock::isTakenByCurrentThread()`

| 类 | 地址 |
|---|---|
| `SectionLock` | `0x08ad37ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad37ee  _ZN11SectionLock22isTakenByCurrentThreadEv
#           SectionLock::isTakenByCurrentThread()
# range [0x08ad37ee, 0x08ad37f7]
08ad37ee +0x00:  push   %ebp
08ad37ef +0x01:  mov    %esp,%ebp
08ad37f1 +0x03:  mov    $0x0,%eax
08ad37f6 +0x08:  pop    %ebp
08ad37f7 +0x09:  ret
```

## 反编译 C

```c
// SectionLock::isTakenByCurrentThread @ 0x8ad37ee

/* DWARF original prototype: bool isTakenByCurrentThread(SectionLock * this) */

bool __thiscall SectionLock::isTakenByCurrentThread(SectionLock *this)

{
  return false;
}
```
