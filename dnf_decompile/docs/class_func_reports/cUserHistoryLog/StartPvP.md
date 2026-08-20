# StartPvP

`_ZN15cUserHistoryLog8StartPvPE23ENUM_PVP_HISTORY_REASONPKcS2_S2_S2_S2_S2_S2_S2_`

`cUserHistoryLog::StartPvP(ENUM_PVP_HISTORY_REASON, char const*, char const*, char const*, char const*, char const*, char const*, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086863b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086863b6  _ZN15cUserHistoryLog8StartPvPE23ENUM_PVP_HISTORY_REASONPKcS2_S2_S2_S2_S2_S2_S2_
#           cUserHistoryLog::StartPvP(ENUM_PVP_HISTORY_REASON, char const*, char const*, char const*, char const*, char const*, char const*, char const*, char const*)
# range [0x086863b6, 0x0868642d]
086863b6 +0x00:  push   %ebp
086863b7 +0x01:  mov    %esp,%ebp
086863b9 +0x03:  sub    $0x28,%esp
086863bc +0x06:  mov    0xc(%ebp),%edx
086863bf +0x09:  mov    0x8(%ebp),%eax
086863c2 +0x0c:  mov    (%eax),%eax
086863c4 +0x0e:  mov    0x1c(%ebp),%ecx
086863c7 +0x11:  mov    %ecx,0x18(%esp)
086863cb +0x15:  mov    0x18(%ebp),%ecx
086863ce +0x18:  mov    %ecx,0x14(%esp)
086863d2 +0x1c:  mov    0x14(%ebp),%ecx
086863d5 +0x1f:  mov    %ecx,0x10(%esp)
086863d9 +0x23:  mov    0x10(%ebp),%ecx
086863dc +0x26:  mov    %ecx,0xc(%esp)
086863e0 +0x2a:  mov    %edx,0x8(%esp)
086863e4 +0x2e:  movl   $"PVP,%d,\"%s\",\"%s\",\"%s\",\"%s\"",0x4(%esp)
086863ec +0x36:  mov    %eax,(%esp)
086863ef +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086863f4 +0x3e:  mov    0xc(%ebp),%edx
086863f7 +0x41:  mov    0x8(%ebp),%eax
086863fa +0x44:  mov    (%eax),%eax
086863fc +0x46:  mov    0x2c(%ebp),%ecx
086863ff +0x49:  mov    %ecx,0x18(%esp)
08686403 +0x4d:  mov    0x28(%ebp),%ecx
08686406 +0x50:  mov    %ecx,0x14(%esp)
0868640a +0x54:  mov    0x24(%ebp),%ecx
0868640d +0x57:  mov    %ecx,0x10(%esp)
08686411 +0x5b:  mov    0x20(%ebp),%ecx
08686414 +0x5e:  mov    %ecx,0xc(%esp)
08686418 +0x62:  mov    %edx,0x8(%esp)
0868641c +0x66:  movl   $"PVP,%d,\"%s\",\"%s\",\"%s\",\"%s\"",0x4(%esp)
08686424 +0x6e:  mov    %eax,(%esp)
08686427 +0x71:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868642c +0x76:  leave
0868642d +0x77:  ret
```

## 反编译 C

```c
// cUserHistoryLog::StartPvP @ 0x86863b6

/* cUserHistoryLog::StartPvP(ENUM_PVP_HISTORY_REASON, char const*, char const*, char const*, char
   const*, char const*, char const*, char const*, char const*) */

void __thiscall
cUserHistoryLog::StartPvP
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d,\"%s\",\"%s\",\"%s\",\"%s\"",param_2,param_3,param_4,
                    param_5,param_6);
  CUser::LogHistory(*(CUser **)this,"PVP,%d,\"%s\",\"%s\",\"%s\",\"%s\"",param_2,param_7,param_8,
                    param_9,param_10);
  return;
}
```
