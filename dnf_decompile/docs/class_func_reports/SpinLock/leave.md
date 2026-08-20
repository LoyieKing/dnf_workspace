# leave

`_ZN8SpinLock5leaveEv`

`SpinLock::leave()`

| 类 | 地址 |
|---|---|
| `SpinLock` | `0x08ad3586` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3586  _ZN8SpinLock5leaveEv
#           SpinLock::leave()
# range [0x08ad3586, 0x08ad3595]
08ad3586 +0x00:  push   %ebp
08ad3587 +0x01:  mov    %esp,%ebp
08ad3589 +0x03:  mov    0x8(%ebp),%eax
08ad358c +0x06:  mov    $0x0,%edx
08ad3591 +0x0b:  xchg   %edx,(%eax)
08ad3593 +0x0d:  pop    %ebp
08ad3594 +0x0e:  ret
08ad3595 +0x0f:  nop
```

## 反编译 C

```c
// SpinLock::leave @ 0x8ad3586

/* DWARF original prototype: void leave(SpinLock * this) */

void __thiscall SpinLock::leave(SpinLock *this)

{
  LOCK();
  this->state_ = 0;
  UNLOCK();
  return;
}
```
