# LogWrite

`_ZN14DB_StatCoinUse8LogWriteER16MSG_STAT_USECOIN`

`DB_StatCoinUse::LogWrite(MSG_STAT_USECOIN&)`

| 类 | 地址 |
|---|---|
| `DB_StatCoinUse` | `0x08417b78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b78  _ZN14DB_StatCoinUse8LogWriteER16MSG_STAT_USECOIN
#           DB_StatCoinUse::LogWrite(MSG_STAT_USECOIN&)
# range [0x08417b78, 0x08417b81]
08417b78 +0x00:  push   %ebp
08417b79 +0x01:  mov    %esp,%ebp
08417b7b +0x03:  mov    $0x1,%eax
08417b80 +0x08:  pop    %ebp
08417b81 +0x09:  ret
```

## 反编译 C

```c
// DB_StatCoinUse::LogWrite @ 0x8417b78

/* DB_StatCoinUse::LogWrite(MSG_STAT_USECOIN&) */

undefined4 DB_StatCoinUse::LogWrite(MSG_STAT_USECOIN *param_1)

{
  return 1;
}
```
