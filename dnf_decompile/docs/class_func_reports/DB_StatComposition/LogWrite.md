# LogWrite

`_ZN18DB_StatComposition8LogWriteEP19MSG_STAT_COMPOSITON`

`DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON*)`

| 类 | 地址 |
|---|---|
| `DB_StatComposition` | `0x08417c6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417c6a  _ZN18DB_StatComposition8LogWriteEP19MSG_STAT_COMPOSITON
#           DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON*)
# range [0x08417c6a, 0x08417c73]
08417c6a +0x00:  push   %ebp
08417c6b +0x01:  mov    %esp,%ebp
08417c6d +0x03:  mov    $0x1,%eax
08417c72 +0x08:  pop    %ebp
08417c73 +0x09:  ret
```

## 反编译 C

```c
// DB_StatComposition::LogWrite @ 0x8417c6a

/* DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON*) */

undefined4 DB_StatComposition::LogWrite(MSG_STAT_COMPOSITON *param_1)

{
  return 1;
}
```
