# LogWrite

`_ZN15DB_StatGameRank8LogWriteEP16MSG_STAT_RANKRES`

`DB_StatGameRank::LogWrite(MSG_STAT_RANKRES*)`

| 类 | 地址 |
|---|---|
| `DB_StatGameRank` | `0x08417e4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417e4e  _ZN15DB_StatGameRank8LogWriteEP16MSG_STAT_RANKRES
#           DB_StatGameRank::LogWrite(MSG_STAT_RANKRES*)
# range [0x08417e4e, 0x08417e57]
08417e4e +0x00:  push   %ebp
08417e4f +0x01:  mov    %esp,%ebp
08417e51 +0x03:  mov    $0x1,%eax
08417e56 +0x08:  pop    %ebp
08417e57 +0x09:  ret
```

## 反编译 C

```c
// DB_StatGameRank::LogWrite @ 0x8417e4e

/* DB_StatGameRank::LogWrite(MSG_STAT_RANKRES*) */

undefined4 DB_StatGameRank::LogWrite(MSG_STAT_RANKRES *param_1)

{
  return 1;
}
```
