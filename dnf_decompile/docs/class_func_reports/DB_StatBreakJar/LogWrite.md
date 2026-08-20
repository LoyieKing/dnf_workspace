# LogWrite

`_ZN15DB_StatBreakJar8LogWriteEP17MSG_STAT_BREAKJAR`

`DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR*)`

| 类 | 地址 |
|---|---|
| `DB_StatBreakJar` | `0x08417afa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417afa  _ZN15DB_StatBreakJar8LogWriteEP17MSG_STAT_BREAKJAR
#           DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR*)
# range [0x08417afa, 0x08417b03]
08417afa +0x00:  push   %ebp
08417afb +0x01:  mov    %esp,%ebp
08417afd +0x03:  mov    $0x1,%eax
08417b02 +0x08:  pop    %ebp
08417b03 +0x09:  ret
```

## 反编译 C

```c
// DB_StatBreakJar::LogWrite @ 0x8417afa

/* DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR*) */

undefined4 DB_StatBreakJar::LogWrite(MSG_STAT_BREAKJAR *param_1)

{
  return 1;
}
```
