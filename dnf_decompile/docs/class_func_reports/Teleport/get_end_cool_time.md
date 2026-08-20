# get_end_cool_time

`_ZN8Teleport17get_end_cool_timeEv`

`Teleport::get_end_cool_time()`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283e24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283e24  _ZN8Teleport17get_end_cool_timeEv
#           Teleport::get_end_cool_time()
# range [0x08283e24, 0x08283e2f]
08283e24 +0x00:  push   %ebp
08283e25 +0x01:  mov    %esp,%ebp
08283e27 +0x03:  mov    0x8(%ebp),%eax
08283e2a +0x06:  mov    0x10(%eax),%eax
08283e2d +0x09:  pop    %ebp
08283e2e +0x0a:  ret
08283e2f +0x0b:  nop
```

## 反编译 C

```c
// Teleport::get_end_cool_time @ 0x8283e24

/* Teleport::get_end_cool_time() */

undefined4 __thiscall Teleport::get_end_cool_time(Teleport *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
