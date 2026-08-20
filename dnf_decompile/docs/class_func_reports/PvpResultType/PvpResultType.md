# PvpResultType

`_ZN13PvpResultTypeC1Ev`

`PvpResultType::PvpResultType()`

| 类 | 地址 |
|---|---|
| `PvpResultType` | `0x085d58da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d58da  _ZN13PvpResultTypeC1Ev
#           PvpResultType::PvpResultType()
# range [0x085d58da, 0x085d58df]
085d58da +0x00:  push   %ebp
085d58db +0x01:  mov    %esp,%ebp
085d58dd +0x03:  pop    %ebp
085d58de +0x04:  ret
085d58df +0x05:  nop
```

## 反编译 C

```c
// PvpResultType::PvpResultType @ 0x85d58da

/* PvpResultType::PvpResultType() */

void __thiscall PvpResultType::PvpResultType(PvpResultType *this)

{
  return;
}
```
