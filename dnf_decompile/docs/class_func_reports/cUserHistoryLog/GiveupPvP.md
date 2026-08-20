# GiveupPvP

`_ZN15cUserHistoryLog9GiveupPvPE23ENUM_PVP_HISTORY_REASON`

`cUserHistoryLog::GiveupPvP(ENUM_PVP_HISTORY_REASON)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868646c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868646c  _ZN15cUserHistoryLog9GiveupPvPE23ENUM_PVP_HISTORY_REASON
#           cUserHistoryLog::GiveupPvP(ENUM_PVP_HISTORY_REASON)
# range [0x0868646c, 0x0868648f]
0868646c +0x00:  push   %ebp
0868646d +0x01:  mov    %esp,%ebp
0868646f +0x03:  sub    $0x18,%esp
08686472 +0x06:  mov    0xc(%ebp),%edx
08686475 +0x09:  mov    0x8(%ebp),%eax
08686478 +0x0c:  mov    (%eax),%eax
0868647a +0x0e:  mov    %edx,0x8(%esp)
0868647e +0x12:  movl   $"PVP,%d",0x4(%esp)
08686486 +0x1a:  mov    %eax,(%esp)
08686489 +0x1d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868648e +0x22:  leave
0868648f +0x23:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GiveupPvP @ 0x868646c

/* cUserHistoryLog::GiveupPvP(ENUM_PVP_HISTORY_REASON) */

void __thiscall cUserHistoryLog::GiveupPvP(cUserHistoryLog *this,undefined4 param_2)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d",param_2);
  return;
}
```
