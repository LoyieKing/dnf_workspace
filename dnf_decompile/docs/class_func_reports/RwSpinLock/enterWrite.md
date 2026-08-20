# enterWrite

`_ZN10RwSpinLock10enterWriteEv`

`RwSpinLock::enterWrite()`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad35ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad35ea  _ZN10RwSpinLock10enterWriteEv
#           RwSpinLock::enterWrite()
# range [0x08ad35ea, 0x08ad35fd]
08ad35ea +0x00:  push   %ebp
08ad35eb +0x01:  mov    %esp,%ebp
08ad35ed +0x03:  sub    $0x18,%esp
08ad35f0 +0x06:  mov    0x8(%ebp),%eax
08ad35f3 +0x09:  mov    %eax,(%esp)
08ad35f6 +0x0c:  call   08ad36be <_ZN10RwSpinLock17enterWriteToValueEPVl>  ; RwSpinLock::enterWriteToValue(long volatile*)
08ad35fb +0x11:  leave
08ad35fc +0x12:  ret
08ad35fd +0x13:  nop
```

## 反编译 C

```c
// RwSpinLock::enterWrite @ 0x8ad35ea

/* DWARF original prototype: void enterWrite(RwSpinLock * this) */

void __thiscall RwSpinLock::enterWrite(RwSpinLock *this)

{
  enterWriteToValue(&this->state_);
  return;
}
```
