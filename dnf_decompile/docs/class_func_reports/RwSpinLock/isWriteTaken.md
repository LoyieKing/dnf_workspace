# isWriteTaken

`_ZN10RwSpinLock12isWriteTakenEv`

`RwSpinLock::isWriteTaken()`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad3626` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad3626  _ZN10RwSpinLock12isWriteTakenEv
#           RwSpinLock::isWriteTaken()
# range [0x08ad3626, 0x08ad3639]
08ad3626 +0x00:  push   %ebp
08ad3627 +0x01:  mov    %esp,%ebp
08ad3629 +0x03:  mov    0x8(%ebp),%eax
08ad362c +0x06:  mov    (%eax),%eax
08ad362e +0x08:  and    $0xc0000000,%eax
08ad3633 +0x0d:  test   %eax,%eax
08ad3635 +0x0f:  setne  %al
08ad3638 +0x12:  pop    %ebp
08ad3639 +0x13:  ret
```

## 反编译 C

```c
// RwSpinLock::isWriteTaken @ 0x8ad3626

/* DWARF original prototype: bool isWriteTaken(RwSpinLock * this) */

bool __thiscall RwSpinLock::isWriteTaken(RwSpinLock *this)

{
  return (this->state_ & 0xc0000000U) != 0;
}
```
