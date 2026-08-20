# GuildCargoPopItemResult

`_ZN15cUserHistoryLog23GuildCargoPopItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii`

`cUserHistoryLog::GuildCargoPopItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686780  _ZN15cUserHistoryLog23GuildCargoPopItemResultE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii
#           cUserHistoryLog::GuildCargoPopItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
# range [0x08686780, 0x086867cd]
08686780 +0x00:  push   %ebp
08686781 +0x01:  mov    %esp,%ebp
08686783 +0x03:  sub    $0x38,%esp
08686786 +0x06:  mov    0xc(%ebp),%edx
08686789 +0x09:  mov    0x8(%ebp),%eax
0868678c +0x0c:  mov    (%eax),%eax
0868678e +0x0e:  mov    0x24(%ebp),%ecx
08686791 +0x11:  mov    %ecx,0x20(%esp)
08686795 +0x15:  mov    0x20(%ebp),%ecx
08686798 +0x18:  mov    %ecx,0x1c(%esp)
0868679c +0x1c:  mov    0x1c(%ebp),%ecx
0868679f +0x1f:  mov    %ecx,0x18(%esp)
086867a3 +0x23:  mov    0x18(%ebp),%ecx
086867a6 +0x26:  mov    %ecx,0x14(%esp)
086867aa +0x2a:  mov    0x14(%ebp),%ecx
086867ad +0x2d:  mov    %ecx,0x10(%esp)
086867b1 +0x31:  mov    0x10(%ebp),%ecx
086867b4 +0x34:  mov    %ecx,0xc(%esp)
086867b8 +0x38:  mov    %edx,0x8(%esp)
086867bc +0x3c:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
086867c4 +0x44:  mov    %eax,(%esp)
086867c7 +0x47:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086867cc +0x4c:  leave
086867cd +0x4d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoPopItemResult @ 0x8686780

/* cUserHistoryLog::GuildCargoPopItemResult(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int,
   int, int) */

void __thiscall
cUserHistoryLog::GuildCargoPopItemResult
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8);
  return;
}
```
