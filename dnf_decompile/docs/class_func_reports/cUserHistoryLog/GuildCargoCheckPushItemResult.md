# GuildCargoCheckPushItemResult

`_ZN15cUserHistoryLog29GuildCargoCheckPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii`

`cUserHistoryLog::GuildCargoCheckPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086865ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086865ea  _ZN15cUserHistoryLog29GuildCargoCheckPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii
#           cUserHistoryLog::GuildCargoCheckPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
# range [0x086865ea, 0x08686637]
086865ea +0x00:  push   %ebp
086865eb +0x01:  mov    %esp,%ebp
086865ed +0x03:  sub    $0x38,%esp
086865f0 +0x06:  mov    0xc(%ebp),%edx
086865f3 +0x09:  mov    0x8(%ebp),%eax
086865f6 +0x0c:  mov    (%eax),%eax
086865f8 +0x0e:  mov    0x24(%ebp),%ecx
086865fb +0x11:  mov    %ecx,0x20(%esp)
086865ff +0x15:  mov    0x20(%ebp),%ecx
08686602 +0x18:  mov    %ecx,0x1c(%esp)
08686606 +0x1c:  mov    0x1c(%ebp),%ecx
08686609 +0x1f:  mov    %ecx,0x18(%esp)
0868660d +0x23:  mov    0x18(%ebp),%ecx
08686610 +0x26:  mov    %ecx,0x14(%esp)
08686614 +0x2a:  mov    0x14(%ebp),%ecx
08686617 +0x2d:  mov    %ecx,0x10(%esp)
0868661b +0x31:  mov    0x10(%ebp),%ecx
0868661e +0x34:  mov    %ecx,0xc(%esp)
08686622 +0x38:  mov    %edx,0x8(%esp)
08686626 +0x3c:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
0868662e +0x44:  mov    %eax,(%esp)
08686631 +0x47:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686636 +0x4c:  leave
08686637 +0x4d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoCheckPushItemResult @ 0x86865ea

/* cUserHistoryLog::GuildCargoCheckPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int,
   int, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoCheckPushItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}
```
