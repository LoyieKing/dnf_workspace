# punish_check_by_HUB

`_ZN4ARAD12PUNISH_CHECK19punish_check_by_HUBEP14SIG_LOGIN_DATAi`

`ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::PUNISH_CHECK` | `0x08196dbf` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08196dbf  _ZN4ARAD12PUNISH_CHECK19punish_check_by_HUBEP14SIG_LOGIN_DATAi
#           ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA*, int)
# range [0x08196dbf, 0x08196dcd]
08196dbf +0x00:  push   %ebp
08196dc0 +0x01:  mov    %esp,%ebp
08196dc2 +0x03:  mov    0x8(%ebp),%eax
08196dc5 +0x06:  movb   $0x1,0x3a20(%eax)
08196dcc +0x0d:  pop    %ebp
08196dcd +0x0e:  ret
```

## 反编译 C

```c
// ARAD::PUNISH_CHECK::punish_check_by_HUB @ 0x8196dbf

/* ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA*, int) */

void ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA *param_1,int param_2)

{
  param_1[0x3a20] = (SIG_LOGIN_DATA)0x1;
  return;
}
```
