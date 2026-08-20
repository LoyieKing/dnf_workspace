# _reset

`_ZN12CBoosterGage6_resetEv`

`CBoosterGage::_reset()`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd468` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd468  _ZN12CBoosterGage6_resetEv
#           CBoosterGage::_reset()
# range [0x080dd468, 0x080dd476]
080dd468 +0x00:  push   %ebp
080dd469 +0x01:  mov    %esp,%ebp
080dd46b +0x03:  mov    0x8(%ebp),%eax
080dd46e +0x06:  movl   $0x0,0x8(%eax)
080dd475 +0x0d:  pop    %ebp
080dd476 +0x0e:  ret
```

## 反编译 C

```c
// CBoosterGage::_reset @ 0x80dd468

/* CBoosterGage::_reset() */

void __thiscall CBoosterGage::_reset(CBoosterGage *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}
```
