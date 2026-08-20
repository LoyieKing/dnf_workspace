# leaveRead

`_ZN10RwSpinLock9leaveReadEv`

`RwSpinLock::leaveRead()`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad35d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad35d6  _ZN10RwSpinLock9leaveReadEv
#           RwSpinLock::leaveRead()
# range [0x08ad35d6, 0x08ad35e9]
08ad35d6 +0x00:  push   %ebp
08ad35d7 +0x01:  mov    %esp,%ebp
08ad35d9 +0x03:  sub    $0x18,%esp
08ad35dc +0x06:  mov    0x8(%ebp),%eax
08ad35df +0x09:  mov    %eax,(%esp)
08ad35e2 +0x0c:  call   08ad367a <_ZN10RwSpinLock16leaveReadToValueEPVl>  ; RwSpinLock::leaveReadToValue(long volatile*)
08ad35e7 +0x11:  leave
08ad35e8 +0x12:  ret
08ad35e9 +0x13:  nop
```

## 反编译 C

```c
// RwSpinLock::leaveRead @ 0x8ad35d6

/* DWARF original prototype: void leaveRead(RwSpinLock * this) */

void __thiscall RwSpinLock::leaveRead(RwSpinLock *this)

{
  leaveReadToValue(&this->state_);
  return;
}
```
