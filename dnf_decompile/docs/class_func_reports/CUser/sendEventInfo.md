# sendEventInfo

`_ZN5CUser13sendEventInfoEv`

`CUser::sendEventInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691e6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691e6a  _ZN5CUser13sendEventInfoEv
#           CUser::sendEventInfo()
# range [0x08691e6a, 0x08691e6f]
08691e6a +0x00:  push   %ebp
08691e6b +0x01:  mov    %esp,%ebp
08691e6d +0x03:  pop    %ebp
08691e6e +0x04:  ret
08691e6f +0x05:  nop
```

## 反编译 C

```c
// CUser::sendEventInfo @ 0x8691e6a

/* CUser::sendEventInfo() */

void CUser::sendEventInfo(void)

{
  return;
}
```
