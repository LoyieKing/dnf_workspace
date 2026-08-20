# dailyresetData

`_ZN10CEventBase14dailyresetDataEv`

`CEventBase::dailyresetData()`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810ae9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ae9c  _ZN10CEventBase14dailyresetDataEv
#           CEventBase::dailyresetData()
# range [0x0810ae9c, 0x0810aea1]
0810ae9c +0x00:  push   %ebp
0810ae9d +0x01:  mov    %esp,%ebp
0810ae9f +0x03:  pop    %ebp
0810aea0 +0x04:  ret
0810aea1 +0x05:  nop
```

## 反编译 C

```c
// CEventBase::dailyresetData @ 0x810ae9c

/* CEventBase::dailyresetData() */

void CEventBase::dailyresetData(void)

{
  return;
}
```
