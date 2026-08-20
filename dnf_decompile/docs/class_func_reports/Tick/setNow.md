# setNow

`_ZN4Tick6setNowEv`

`Tick::setNow()`

| 类 | 地址 |
|---|---|
| `Tick` | `0x08ade8b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ade8b6  _ZN4Tick6setNowEv
#           Tick::setNow()
# range [0x08ade8b6, 0x08ade8c7]
08ade8b6 +0x00:  push   %ebp
08ade8b7 +0x01:  mov    %esp,%ebp
08ade8b9 +0x03:  sub    $0x8,%esp
08ade8bc +0x06:  call   08ade86a <_ZN4Tick18nowAsInternalValueEv>  ; Tick::nowAsInternalValue()
08ade8c1 +0x0b:  mov    0x8(%ebp),%edx
08ade8c4 +0x0e:  mov    %eax,(%edx)
08ade8c6 +0x10:  leave
08ade8c7 +0x11:  ret
```

## 反编译 C

```c
// Tick::setNow @ 0x8ade8b6

/* DWARF original prototype: void setNow(Tick * this) */

void __thiscall Tick::setNow(Tick *this)

{
  uint32 uVar1;
  
  uVar1 = nowAsInternalValue();
  this->value_ = uVar1;
  return;
}
```
