# punish_check_by_RES

`_ZN4ARAD12PUNISH_CHECK19punish_check_by_RESEP14SIG_LOGIN_DATAi`

`ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::PUNISH_CHECK` | `0x08196dce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196dce  _ZN4ARAD12PUNISH_CHECK19punish_check_by_RESEP14SIG_LOGIN_DATAi
#           ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA*, int)
# range [0x08196dce, 0x08196dd2]
08196dce +0x00:  push   %ebp
08196dcf +0x01:  mov    %esp,%ebp
08196dd1 +0x03:  pop    %ebp
08196dd2 +0x04:  ret
```

## 反编译 C

```c
// ARAD::PUNISH_CHECK::punish_check_by_RES @ 0x8196dce

/* ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA*, int) */

void ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA *param_1,int param_2)

{
  return;
}
```
