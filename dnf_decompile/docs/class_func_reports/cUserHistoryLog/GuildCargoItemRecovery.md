# GuildCargoItemRecovery

`_ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih`

`cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, unsigned char)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686694  _ZN15cUserHistoryLog22GuildCargoItemRecoveryE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiih
#           cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, unsigned char)
# range [0x08686694, 0x086866e9]
08686694 +0x00:  push   %ebp
08686695 +0x01:  mov    %esp,%ebp
08686697 +0x03:  sub    $0x48,%esp
0868669a +0x06:  mov    0x24(%ebp),%eax
0868669d +0x09:  mov    %al,-0xc(%ebp)
086866a0 +0x0c:  movzbl -0xc(%ebp),%ecx
086866a4 +0x10:  mov    0xc(%ebp),%edx
086866a7 +0x13:  mov    0x8(%ebp),%eax
086866aa +0x16:  mov    (%eax),%eax
086866ac +0x18:  mov    %ecx,0x20(%esp)
086866b0 +0x1c:  mov    0x20(%ebp),%ecx
086866b3 +0x1f:  mov    %ecx,0x1c(%esp)
086866b7 +0x23:  mov    0x1c(%ebp),%ecx
086866ba +0x26:  mov    %ecx,0x18(%esp)
086866be +0x2a:  mov    0x18(%ebp),%ecx
086866c1 +0x2d:  mov    %ecx,0x14(%esp)
086866c5 +0x31:  mov    0x14(%ebp),%ecx
086866c8 +0x34:  mov    %ecx,0x10(%esp)
086866cc +0x38:  mov    0x10(%ebp),%ecx
086866cf +0x3b:  mov    %ecx,0xc(%esp)
086866d3 +0x3f:  mov    %edx,0x8(%esp)
086866d7 +0x43:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d,%d",0x4(%esp)
086866df +0x4b:  mov    %eax,(%esp)
086866e2 +0x4e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086866e7 +0x53:  leave
086866e8 +0x54:  ret
086866e9 +0x55:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoItemRecovery @ 0x8686694

/* cUserHistoryLog::GuildCargoItemRecovery(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int,
   unsigned char) */

void __thiscall
cUserHistoryLog::GuildCargoItemRecovery
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,uint param_8)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8 & 0xff);
  return;
}
```
