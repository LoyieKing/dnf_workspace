# GuildCargo

`_ZN15cUserHistoryLog10GuildCargoE31ENUM_GUILD_CARGO_HISTORY_REASONi`

`cUserHistoryLog::GuildCargo(ENUM_GUILD_CARGO_HISTORY_REASON, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086864e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086864e6  _ZN15cUserHistoryLog10GuildCargoE31ENUM_GUILD_CARGO_HISTORY_REASONi
#           cUserHistoryLog::GuildCargo(ENUM_GUILD_CARGO_HISTORY_REASON, int)
# range [0x086864e6, 0x08686511]
086864e6 +0x00:  push   %ebp
086864e7 +0x01:  mov    %esp,%ebp
086864e9 +0x03:  sub    $0x18,%esp
086864ec +0x06:  mov    0xc(%ebp),%edx
086864ef +0x09:  mov    0x8(%ebp),%eax
086864f2 +0x0c:  mov    (%eax),%eax
086864f4 +0x0e:  mov    0x10(%ebp),%ecx
086864f7 +0x11:  mov    %ecx,0xc(%esp)
086864fb +0x15:  mov    %edx,0x8(%esp)
086864ff +0x19:  movl   $"GuildCargo,%d,%d",0x4(%esp)
08686507 +0x21:  mov    %eax,(%esp)
0868650a +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868650f +0x29:  leave
08686510 +0x2a:  ret
08686511 +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargo @ 0x86864e6

/* cUserHistoryLog::GuildCargo(ENUM_GUILD_CARGO_HISTORY_REASON, int) */

void __thiscall
cUserHistoryLog::GuildCargo(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d",param_2,param_3);
  return;
}
```
