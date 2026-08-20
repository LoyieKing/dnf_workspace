# GuildCargoMoveItemResult

`_ZN15cUserHistoryLog24GuildCargoMoveItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiii`

`cUserHistoryLog::GuildCargoMoveItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686800  _ZN15cUserHistoryLog24GuildCargoMoveItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiii
#           cUserHistoryLog::GuildCargoMoveItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int)
# range [0x08686800, 0x08686839]
08686800 +0x00:  push   %ebp
08686801 +0x01:  mov    %esp,%ebp
08686803 +0x03:  sub    $0x28,%esp
08686806 +0x06:  mov    0xc(%ebp),%edx
08686809 +0x09:  mov    0x8(%ebp),%eax
0868680c +0x0c:  mov    (%eax),%eax
0868680e +0x0e:  mov    0x18(%ebp),%ecx
08686811 +0x11:  mov    %ecx,0x14(%esp)
08686815 +0x15:  mov    0x14(%ebp),%ecx
08686818 +0x18:  mov    %ecx,0x10(%esp)
0868681c +0x1c:  mov    0x10(%ebp),%ecx
0868681f +0x1f:  mov    %ecx,0xc(%esp)
08686823 +0x23:  mov    %edx,0x8(%esp)
08686827 +0x27:  movl   $"GuildCargo,%d,%d,%d,%d",0x4(%esp)
0868682f +0x2f:  mov    %eax,(%esp)
08686832 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686837 +0x37:  leave
08686838 +0x38:  ret
08686839 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoMoveItemResult @ 0x8686800

/* cUserHistoryLog::GuildCargoMoveItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoMoveItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d",param_2,param_3,param_4,param_5);
  return;
}
```
