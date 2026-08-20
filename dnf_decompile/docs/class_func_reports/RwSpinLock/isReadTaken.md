# isReadTaken

`_ZN10RwSpinLock11isReadTakenEv`

`RwSpinLock::isReadTaken()`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad3612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3612  _ZN10RwSpinLock11isReadTakenEv
#           RwSpinLock::isReadTaken()
# range [0x08ad3612, 0x08ad3625]
08ad3612 +0x00:  push   %ebp
08ad3613 +0x01:  mov    %esp,%ebp
08ad3615 +0x03:  mov    0x8(%ebp),%eax
08ad3618 +0x06:  mov    (%eax),%eax
08ad361a +0x08:  and    $0x3fffffff,%eax
08ad361f +0x0d:  test   %eax,%eax
08ad3621 +0x0f:  setne  %al
08ad3624 +0x12:  pop    %ebp
08ad3625 +0x13:  ret
```

## 反编译 C

```c
// RwSpinLock::isReadTaken @ 0x8ad3612

/* DWARF original prototype: bool isReadTaken(RwSpinLock * this) */

bool __thiscall RwSpinLock::isReadTaken(RwSpinLock *this)

{
  return (this->state_ & 0x3fffffffU) != 0;
}
```
