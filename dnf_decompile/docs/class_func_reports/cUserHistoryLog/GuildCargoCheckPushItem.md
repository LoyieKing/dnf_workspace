# GuildCargoCheckPushItem

`_ZN15cUserHistoryLog23GuildCargoCheckPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii`

`cUserHistoryLog::GuildCargoCheckPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868659c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868659c  _ZN15cUserHistoryLog23GuildCargoCheckPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii
#           cUserHistoryLog::GuildCargoCheckPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
# range [0x0868659c, 0x086865e9]
0868659c +0x00:  push   %ebp
0868659d +0x01:  mov    %esp,%ebp
0868659f +0x03:  sub    $0x38,%esp
086865a2 +0x06:  mov    0xc(%ebp),%edx
086865a5 +0x09:  mov    0x8(%ebp),%eax
086865a8 +0x0c:  mov    (%eax),%eax
086865aa +0x0e:  mov    0x24(%ebp),%ecx
086865ad +0x11:  mov    %ecx,0x20(%esp)
086865b1 +0x15:  mov    0x20(%ebp),%ecx
086865b4 +0x18:  mov    %ecx,0x1c(%esp)
086865b8 +0x1c:  mov    0x1c(%ebp),%ecx
086865bb +0x1f:  mov    %ecx,0x18(%esp)
086865bf +0x23:  mov    0x18(%ebp),%ecx
086865c2 +0x26:  mov    %ecx,0x14(%esp)
086865c6 +0x2a:  mov    0x14(%ebp),%ecx
086865c9 +0x2d:  mov    %ecx,0x10(%esp)
086865cd +0x31:  mov    0x10(%ebp),%ecx
086865d0 +0x34:  mov    %ecx,0xc(%esp)
086865d4 +0x38:  mov    %edx,0x8(%esp)
086865d8 +0x3c:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
086865e0 +0x44:  mov    %eax,(%esp)
086865e3 +0x47:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086865e8 +0x4c:  leave
086865e9 +0x4d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoCheckPushItem @ 0x868659c

/* cUserHistoryLog::GuildCargoCheckPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int,
   int, int) */

void __thiscall
cUserHistoryLog::GuildCargoCheckPushItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}
```
