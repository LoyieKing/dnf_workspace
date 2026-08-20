# getData

`_ZNK17CPvPLiveEventData7getDataEPc`

`CPvPLiveEventData::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CPvPLiveEventData` | `0x08269206` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08269206  _ZNK17CPvPLiveEventData7getDataEPc
#           CPvPLiveEventData::getData(char*) const
# range [0x08269206, 0x0826920b]
08269206 +0x00:  push   %ebp
08269207 +0x01:  mov    %esp,%ebp
08269209 +0x03:  pop    %ebp
0826920a +0x04:  ret
0826920b +0x05:  nop
```

## 反编译 C

```c
// CPvPLiveEventData::getData @ 0x8269206

/* CPvPLiveEventData::getData(char*) const */

void CPvPLiveEventData::getData(char *param_1)

{
  return;
}
```
