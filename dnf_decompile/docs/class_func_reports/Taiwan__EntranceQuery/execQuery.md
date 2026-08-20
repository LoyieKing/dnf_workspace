# execQuery

`_ZN6Taiwan13EntranceQuery9execQueryER5MySQL`

`Taiwan::EntranceQuery::execQuery(MySQL&)`

| 类 | 地址 |
|---|---|
| `Taiwan::EntranceQuery` | `0x0817401c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817401c  _ZN6Taiwan13EntranceQuery9execQueryER5MySQL
#           Taiwan::EntranceQuery::execQuery(MySQL&)
# range [0x0817401c, 0x08174025]
0817401c +0x00:  push   %ebp
0817401d +0x01:  mov    %esp,%ebp
0817401f +0x03:  mov    $0x1,%eax
08174024 +0x08:  pop    %ebp
08174025 +0x09:  ret
```

## 反编译 C

```c
// Taiwan::EntranceQuery::execQuery @ 0x817401c

/* Taiwan::EntranceQuery::execQuery(MySQL&) */

undefined4 Taiwan::EntranceQuery::execQuery(MySQL *param_1)

{
  return 1;
}
```
