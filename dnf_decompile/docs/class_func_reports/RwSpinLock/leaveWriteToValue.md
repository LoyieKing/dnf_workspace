# leaveWriteToValue

`_ZN10RwSpinLock17leaveWriteToValueEPVl`

`RwSpinLock::leaveWriteToValue(long volatile*)`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad372a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad372a  _ZN10RwSpinLock17leaveWriteToValueEPVl
#           RwSpinLock::leaveWriteToValue(long volatile*)
# range [0x08ad372a, 0x08ad3741]
08ad372a +0x00:  push   %ebp
08ad372b +0x01:  mov    %esp,%ebp
08ad372d +0x03:  mov    0x8(%ebp),%eax
08ad3730 +0x06:  mov    (%eax),%eax
08ad3732 +0x08:  mov    %eax,%edx
08ad3734 +0x0a:  and    $0x40000000,%edx
08ad373a +0x10:  mov    0x8(%ebp),%eax
08ad373d +0x13:  xchg   %edx,(%eax)
08ad373f +0x15:  pop    %ebp
08ad3740 +0x16:  ret
08ad3741 +0x17:  nop
```

## 反编译 C

```c
// RwSpinLock::leaveWriteToValue @ 0x8ad372a

void RwSpinLock::leaveWriteToValue(long *state)

{
  LOCK();
  *state = *state & 0x40000000;
  UNLOCK();
  return;
}
```
