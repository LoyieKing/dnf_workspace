# LoadLitmitItem

`_ZN10DB_LoadEtc14LoadLitmitItemEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08405c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08405c60  _ZN10DB_LoadEtc14LoadLitmitItemEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC*)
# range [0x08405c60, 0x08405c6d]
08405c60 +0x00:  push   %ebp
08405c61 +0x01:  mov    %esp,%ebp
08405c63 +0x03:  sub    $0x30,%esp
08405c66 +0x06:  mov    $0x1,%eax
08405c6b +0x0b:  leave
08405c6c +0x0c:  ret
08405c6d +0x0d:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadLitmitItem @ 0x8405c60

/* DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC*) */

undefined4 DB_LoadEtc::LoadLitmitItem(SIG_LOAD_ETC *param_1)

{
  return 1;
}
```
