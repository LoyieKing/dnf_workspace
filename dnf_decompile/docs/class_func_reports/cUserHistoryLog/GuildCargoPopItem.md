# GuildCargoPopItem

`_ZN15cUserHistoryLog17GuildCargoPopItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiii`

`cUserHistoryLog::GuildCargoPopItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086866ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086866ea  _ZN15cUserHistoryLog17GuildCargoPopItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiii
#           cUserHistoryLog::GuildCargoPopItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int)
# range [0x086866ea, 0x08686731]
086866ea +0x00:  push   %ebp
086866eb +0x01:  mov    %esp,%ebp
086866ed +0x03:  sub    $0x28,%esp
086866f0 +0x06:  mov    0xc(%ebp),%edx
086866f3 +0x09:  mov    0x8(%ebp),%eax
086866f6 +0x0c:  mov    (%eax),%eax
086866f8 +0x0e:  mov    0x20(%ebp),%ecx
086866fb +0x11:  mov    %ecx,0x1c(%esp)
086866ff +0x15:  mov    0x1c(%ebp),%ecx
08686702 +0x18:  mov    %ecx,0x18(%esp)
08686706 +0x1c:  mov    0x18(%ebp),%ecx
08686709 +0x1f:  mov    %ecx,0x14(%esp)
0868670d +0x23:  mov    0x14(%ebp),%ecx
08686710 +0x26:  mov    %ecx,0x10(%esp)
08686714 +0x2a:  mov    0x10(%ebp),%ecx
08686717 +0x2d:  mov    %ecx,0xc(%esp)
0868671b +0x31:  mov    %edx,0x8(%esp)
0868671f +0x35:  movl   $"GuildCargo,%d,%d,%d,%d,%d,%d",0x4(%esp)
08686727 +0x3d:  mov    %eax,(%esp)
0868672a +0x40:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868672f +0x45:  leave
08686730 +0x46:  ret
08686731 +0x47:  nop
```

## 反编译 C

```c
// cUserHistoryLog::GuildCargoPopItem @ 0x86866ea

/* cUserHistoryLog::GuildCargoPopItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int) */

void __thiscall
cUserHistoryLog::GuildCargoPopItem
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  CUser::LogHistory(*(CUser **)this,"GuildCargo,%d,%d,%d,%d,%d,%d",param_2,param_3,param_4,param_5,
                    param_6,param_7);
  return;
}
```
