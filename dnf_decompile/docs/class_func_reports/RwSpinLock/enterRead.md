# enterRead

`_ZN10RwSpinLock9enterReadEv`

`RwSpinLock::enterRead()`

| 类 | 地址 |
|---|---|
| `RwSpinLock` | `0x08ad35c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad35c2  _ZN10RwSpinLock9enterReadEv
#           RwSpinLock::enterRead()
# range [0x08ad35c2, 0x08ad35d5]
08ad35c2 +0x00:  push   %ebp
08ad35c3 +0x01:  mov    %esp,%ebp
08ad35c5 +0x03:  sub    $0x18,%esp
08ad35c8 +0x06:  mov    0x8(%ebp),%eax
08ad35cb +0x09:  mov    %eax,(%esp)
08ad35ce +0x0c:  call   08ad363a <_ZN10RwSpinLock16enterReadToValueEPVl>  ; RwSpinLock::enterReadToValue(long volatile*)
08ad35d3 +0x11:  leave
08ad35d4 +0x12:  ret
08ad35d5 +0x13:  nop
```

## 反编译 C

```c
// RwSpinLock::enterRead @ 0x8ad35c2

/* DWARF original prototype: void enterRead(RwSpinLock * this) */

void __thiscall RwSpinLock::enterRead(RwSpinLock *this)

{
  enterReadToValue(&this->state_);
  return;
}
```
