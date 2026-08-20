# GetUserPvpBase

`_ZN10DB_LoadEtc14GetUserPvpBaseEP12SIG_LOAD_ETC`

`DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08407db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08407db4  _ZN10DB_LoadEtc14GetUserPvpBaseEP12SIG_LOAD_ETC
#           DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC*)
# range [0x08407db4, 0x08407dc1]
08407db4 +0x00:  push   %ebp
08407db5 +0x01:  mov    %esp,%ebp
08407db7 +0x03:  sub    $0x10,%esp
08407dba +0x06:  mov    $0x1,%eax
08407dbf +0x0b:  leave
08407dc0 +0x0c:  ret
08407dc1 +0x0d:  nop
```

## 反编译 C

```c
// DB_LoadEtc::GetUserPvpBase @ 0x8407db4

/* DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::GetUserPvpBase(SIG_LOAD_ETC *param_1)

{
  return 1;
}
```
