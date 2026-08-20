# LogWrite

`_ZN14DB_StatPvpPlay8LogWriteEP16MSG_STAT_PVPPLAY`

`DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY*)`

| 类 | 地址 |
|---|---|
| `DB_StatPvpPlay` | `0x08417f40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417f40  _ZN14DB_StatPvpPlay8LogWriteEP16MSG_STAT_PVPPLAY
#           DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY*)
# range [0x08417f40, 0x08417f49]
08417f40 +0x00:  push   %ebp
08417f41 +0x01:  mov    %esp,%ebp
08417f43 +0x03:  mov    $0x1,%eax
08417f48 +0x08:  pop    %ebp
08417f49 +0x09:  ret
```

## 反编译 C

```c
// DB_StatPvpPlay::LogWrite @ 0x8417f40

/* DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY*) */

undefined4 DB_StatPvpPlay::LogWrite(MSG_STAT_PVPPLAY *param_1)

{
  return 1;
}
```
