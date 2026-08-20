# GuildCargoMoveItem

`_ZN15cUserHistoryLog18GuildCargoMoveItemE31ENUM_GUILD_CARGO_HISTORY_REASONii`

`cUserHistoryLog::GuildCargoMoveItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086867ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086867ce  _ZN15cUserHistoryLog18GuildCargoMoveItemE31ENUM_GUILD_CARGO_HISTORY_REASONii
#           cUserHistoryLog::GuildCargoMoveItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)
# range [0x086867ce, 0x086867ff]
086867ce +0x00:  push   %ebp
086867cf +0x01:  mov    %esp,%ebp
086867d1 +0x03:  sub    $0x28,%esp
086867d4 +0x06:  mov    0xc(%ebp),%edx
086867d7 +0x09:  mov    0x8(%ebp),%eax
086867da +0x0c:  mov    (%eax),%eax
086867dc +0x0e:  mov    0x14(%ebp),%ecx
086867df +0x11:  mov    %ecx,0x10(%esp)
086867e3 +0x15:  mov    0x10(%ebp),%ecx
086867e6 +0x18:  mov    %ecx,0xc(%esp)
086867ea +0x1c:  mov    %edx,0x8(%esp)
086867ee +0x20:  movl   $"GuildCargo,%d,%d,%d",0x4(%esp)
086867f6 +0x28:  mov    %eax,(%esp)
086867f9 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086867fe +0x30:  leave
086867ff +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoMoveItem @ 0x86867ce

/* cUserHistoryLog::GuildCargoMoveItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoMoveItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d",param_2,param_3,param_4);
  return;
}
```
