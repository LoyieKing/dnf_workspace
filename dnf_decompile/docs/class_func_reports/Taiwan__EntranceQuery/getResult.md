# getResult

`_ZN6Taiwan13EntranceQuery9getResultER5MySQL`

`Taiwan::EntranceQuery::getResult(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::EntranceQuery` | `0x08174026` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174026  _ZN6Taiwan13EntranceQuery9getResultER5MySQL
#           Taiwan::EntranceQuery::getResult(MySQL&)
# range [0x08174026, 0x0817402f]
08174026 +0x00:  push   %ebp
08174027 +0x01:  mov    %esp,%ebp
08174029 +0x03:  mov    $0x1,%eax
0817402e +0x08:  pop    %ebp
0817402f +0x09:  ret
```

## 反编译 C

```c
// Taiwan::EntranceQuery::getResult @ 0x8174026

/* Taiwan::EntranceQuery::getResult(MySQL&) */

undefined4 Taiwan::EntranceQuery::getResult(MySQL *param_1)

{
  return 1;
}
```
