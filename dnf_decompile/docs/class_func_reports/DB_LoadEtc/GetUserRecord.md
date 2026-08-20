# GetUserRecord

`_ZN10DB_LoadEtc13GetUserRecordEP12SIG_LOAD_ETC`

`DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084075c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084075c4  _ZN10DB_LoadEtc13GetUserRecordEP12SIG_LOAD_ETC
#           DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC*)
# range [0x084075c4, 0x084075d1]
084075c4 +0x00:  push   %ebp
084075c5 +0x01:  mov    %esp,%ebp
084075c7 +0x03:  sub    $0x10,%esp
084075ca +0x06:  mov    $0x1,%eax
084075cf +0x0b:  leave
084075d0 +0x0c:  ret
084075d1 +0x0d:  nop
```

## 反编译 C

```c
// DB_LoadEtc::GetUserRecord @ 0x84075c4

/* DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::GetUserRecord(SIG_LOAD_ETC *param_1)

{
  return 1;
}
```
