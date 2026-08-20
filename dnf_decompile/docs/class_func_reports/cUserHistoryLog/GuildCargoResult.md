# GuildCargoResult

`_ZN15cUserHistoryLog16GuildCargoResultE31ENUM_GUILD_CARGO_HISTORY_REASONii`

`cUserHistoryLog::GuildCargoResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686512` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686512  _ZN15cUserHistoryLog16GuildCargoResultE31ENUM_GUILD_CARGO_HISTORY_REASONii
#           cUserHistoryLog::GuildCargoResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)
# range [0x08686512, 0x08686543]
08686512 +0x00:  push   %ebp
08686513 +0x01:  mov    %esp,%ebp
08686515 +0x03:  sub    $0x28,%esp
08686518 +0x06:  mov    0xc(%ebp),%edx
0868651b +0x09:  mov    0x8(%ebp),%eax
0868651e +0x0c:  mov    (%eax),%eax
08686520 +0x0e:  mov    0x14(%ebp),%ecx
08686523 +0x11:  mov    %ecx,0x10(%esp)
08686527 +0x15:  mov    0x10(%ebp),%ecx
0868652a +0x18:  mov    %ecx,0xc(%esp)
0868652e +0x1c:  mov    %edx,0x8(%esp)
08686532 +0x20:  movl   $"GuildCargo,%d,%d,%d",0x4(%esp)
0868653a +0x28:  mov    %eax,(%esp)
0868653d +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686542 +0x30:  leave
08686543 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoResult @ 0x8686512

/* cUserHistoryLog::GuildCargoResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d",param_2,param_3,param_4);
  return;
}
```
