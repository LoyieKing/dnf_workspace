# isTaken

`_ZN8SpinLock7isTakenEv`

`SpinLock::isTaken()`

| 类 | 地址 |
|---|---|
| `SpinLock` | `0x08ad3596` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3596  _ZN8SpinLock7isTakenEv
#           SpinLock::isTaken()
# range [0x08ad3596, 0x08ad35a5]
08ad3596 +0x00:  push   %ebp
08ad3597 +0x01:  mov    %esp,%ebp
08ad3599 +0x03:  mov    0x8(%ebp),%eax
08ad359c +0x06:  mov    (%eax),%eax
08ad359e +0x08:  cmp    $0x1,%eax
08ad35a1 +0x0b:  sete   %al
08ad35a4 +0x0e:  pop    %ebp
08ad35a5 +0x0f:  ret
```

## 反编译 C

```c
// SpinLock::isTaken @ 0x8ad3596

/* DWARF original prototype: bool isTaken(SpinLock * this) */

bool __thiscall SpinLock::isTaken(SpinLock *this)

{
  return this->state_ == 1;
}
```
