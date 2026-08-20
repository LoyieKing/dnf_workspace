# GuildCargoPushItemResult

`_ZN15cUserHistoryLog24GuildCargoPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii`

`cUserHistoryLog::GuildCargoPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686732` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686732  _ZN15cUserHistoryLog24GuildCargoPushItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii
#           cUserHistoryLog::GuildCargoPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
# range [0x08686732, 0x0868677f]
08686732 +0x00:  push   %ebp
08686733 +0x01:  mov    %esp,%ebp
08686735 +0x03:  sub    $0x38,%esp
08686738 +0x06:  mov    0xc(%ebp),%edx
0868673b +0x09:  mov    0x8(%ebp),%eax
0868673e +0x0c:  mov    (%eax),%eax
08686740 +0x0e:  mov    0x24(%ebp),%ecx
08686743 +0x11:  mov    %ecx,0x20(%esp)
08686747 +0x15:  mov    0x20(%ebp),%ecx
0868674a +0x18:  mov    %ecx,0x1c(%esp)
0868674e +0x1c:  mov    0x1c(%ebp),%ecx
08686751 +0x1f:  mov    %ecx,0x18(%esp)
08686755 +0x23:  mov    0x18(%ebp),%ecx
08686758 +0x26:  mov    %ecx,0x14(%esp)
0868675c +0x2a:  mov    0x14(%ebp),%ecx
0868675f +0x2d:  mov    %ecx,0x10(%esp)
08686763 +0x31:  mov    0x10(%ebp),%ecx
08686766 +0x34:  mov    %ecx,0xc(%esp)
0868676a +0x38:  mov    %edx,0x8(%esp)
0868676e +0x3c:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
08686776 +0x44:  mov    %eax,(%esp)
08686779 +0x47:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868677e +0x4c:  leave
0868677f +0x4d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoPushItemResult @ 0x8686732

/* cUserHistoryLog::GuildCargoPushItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int,
   int, int) */

void __thiscall
cUserHistoryLog::GuildCargoPushItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}
```
