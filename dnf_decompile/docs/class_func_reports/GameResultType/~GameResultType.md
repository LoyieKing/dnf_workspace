# ~GameResultType

`_ZN14GameResultTypeD1Ev`

`GameResultType::~GameResultType()`

| 类 | 地址 |
|---|---|
| `GameResultType` | `0x084b7416` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b7416  _ZN14GameResultTypeD1Ev
#           GameResultType::~GameResultType()
# range [0x084b7416, 0x084b741b]
084b7416 +0x00:  push   %ebp
084b7417 +0x01:  mov    %esp,%ebp
084b7419 +0x03:  pop    %ebp
084b741a +0x04:  ret
084b741b +0x05:  nop
```

## 反编译 C

```c
// GameResultType::~GameResultType @ 0x84b7416

/* GameResultType::~GameResultType() */

void __thiscall GameResultType::~GameResultType(GameResultType *this)

{
  return;
}
```
