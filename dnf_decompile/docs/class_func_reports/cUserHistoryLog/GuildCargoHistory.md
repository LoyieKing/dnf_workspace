# GuildCargoHistory

`_ZN15cUserHistoryLog17GuildCargoHistoryE31ENUM_GUILD_CARGO_HISTORY_REASONi`

`cUserHistoryLog::GuildCargoHistory(ENUM_GUILD_CARGO_HISTORY_REASON, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686544` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686544  _ZN15cUserHistoryLog17GuildCargoHistoryE31ENUM_GUILD_CARGO_HISTORY_REASONi
#           cUserHistoryLog::GuildCargoHistory(ENUM_GUILD_CARGO_HISTORY_REASON, int)
# range [0x08686544, 0x0868656f]
08686544 +0x00:  push   %ebp
08686545 +0x01:  mov    %esp,%ebp
08686547 +0x03:  sub    $0x18,%esp
0868654a +0x06:  mov    0xc(%ebp),%edx
0868654d +0x09:  mov    0x8(%ebp),%eax
08686550 +0x0c:  mov    (%eax),%eax
08686552 +0x0e:  mov    0x10(%ebp),%ecx
08686555 +0x11:  mov    %ecx,0xc(%esp)
08686559 +0x15:  mov    %edx,0x8(%esp)
0868655d +0x19:  movl   $"GuildCargo,%d,%d",0x4(%esp)
08686565 +0x21:  mov    %eax,(%esp)
08686568 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868656d +0x29:  leave
0868656e +0x2a:  ret
0868656f +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoHistory @ 0x8686544

/* cUserHistoryLog::GuildCargoHistory(ENUM_GUILD_CARGO_HISTORY_REASON, int) */

void __thiscall
cUserHistoryLog::GuildCargoHistory(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d",param_2,param_3);
  return;
}
```
