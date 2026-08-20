# LogWrite

`_ZN19DB_StatDungeonClear8LogWriteEP21MSG_STAT_DUNGEONCLEAR`

`DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR*)`

| 类 | 地址 |
|---|---|
| `DB_StatDungeonClear` | `0x08417d5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417d5c  _ZN19DB_StatDungeonClear8LogWriteEP21MSG_STAT_DUNGEONCLEAR
#           DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR*)
# range [0x08417d5c, 0x08417d65]
08417d5c +0x00:  push   %ebp
08417d5d +0x01:  mov    %esp,%ebp
08417d5f +0x03:  mov    $0x1,%eax
08417d64 +0x08:  pop    %ebp
08417d65 +0x09:  ret
```

## 反编译 C

```c
// DB_StatDungeonClear::LogWrite @ 0x8417d5c

/* DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR*) */

undefined4 DB_StatDungeonClear::LogWrite(MSG_STAT_DUNGEONCLEAR *param_1)

{
  return 1;
}
```
