# tryEnter

`_ZN8SpinLock8tryEnterEv`

`SpinLock::tryEnter()`

| 类 | 地址 |
|---|---|
| `SpinLock` | `0x08ad3572` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3572  _ZN8SpinLock8tryEnterEv
#           SpinLock::tryEnter()
# range [0x08ad3572, 0x08ad3585]
08ad3572 +0x00:  push   %ebp
08ad3573 +0x01:  mov    %esp,%ebp
08ad3575 +0x03:  mov    0x8(%ebp),%edx
08ad3578 +0x06:  mov    $0x1,%eax
08ad357d +0x0b:  xchg   %eax,(%edx)
08ad357f +0x0d:  test   %eax,%eax
08ad3581 +0x0f:  sete   %al
08ad3584 +0x12:  pop    %ebp
08ad3585 +0x13:  ret
```

## 反编译 C

```c
// SpinLock::tryEnter @ 0x8ad3572

/* DWARF original prototype: bool tryEnter(SpinLock * this) */

bool __thiscall SpinLock::tryEnter(SpinLock *this)

{
  int iVar1;
  
  LOCK();
  iVar1 = this->state_;
  this->state_ = 1;
  UNLOCK();
  return iVar1 == 0;
}
```
