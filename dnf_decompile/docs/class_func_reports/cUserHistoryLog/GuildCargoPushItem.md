# GuildCargoPushItem

`_ZN15cUserHistoryLog18GuildCargoPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiiih`

`cUserHistoryLog::GuildCargoPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686638  _ZN15cUserHistoryLog18GuildCargoPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiiih
#           cUserHistoryLog::GuildCargoPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int, unsigned char)
# range [0x08686638, 0x08686693]
08686638 +0x00:  push   %ebp
08686639 +0x01:  mov    %esp,%ebp
0868663b +0x03:  sub    $0x48,%esp
0868663e +0x06:  mov    0x28(%ebp),%eax
08686641 +0x09:  mov    %al,-0xc(%ebp)
08686644 +0x0c:  movzbl -0xc(%ebp),%ecx
08686648 +0x10:  mov    0xc(%ebp),%edx
0868664b +0x13:  mov    0x8(%ebp),%eax
0868664e +0x16:  mov    (%eax),%eax
08686650 +0x18:  mov    %ecx,0x24(%esp)
08686654 +0x1c:  mov    0x24(%ebp),%ecx
08686657 +0x1f:  mov    %ecx,0x20(%esp)
0868665b +0x23:  mov    0x20(%ebp),%ecx
0868665e +0x26:  mov    %ecx,0x1c(%esp)
08686662 +0x2a:  mov    0x1c(%ebp),%ecx
08686665 +0x2d:  mov    %ecx,0x18(%esp)
08686669 +0x31:  mov    0x18(%ebp),%ecx
0868666c +0x34:  mov    %ecx,0x14(%esp)
08686670 +0x38:  mov    0x14(%ebp),%ecx
08686673 +0x3b:  mov    %ecx,0x10(%esp)
08686677 +0x3f:  mov    0x10(%ebp),%ecx
0868667a +0x42:  mov    %ecx,0xc(%esp)
0868667e +0x46:  mov    %edx,0x8(%esp)
08686682 +0x4a:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
0868668a +0x52:  mov    %eax,(%esp)
0868668d +0x55:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686692 +0x5a:  leave
08686693 +0x5b:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoPushItem @ 0x8686638

/* cUserHistoryLog::GuildCargoPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int,
   int, unsigned char) */

void __thiscall
cUserHistoryLog::GuildCargoPushItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,uint param_9)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9 & 0xff);
  return;
}
```
