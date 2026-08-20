# PvP_GuildWar_Log

`_ZN16PvP_GuildWar_LogC1Ev`

`PvP_GuildWar_Log::PvP_GuildWar_Log()`

| 类 | 地址 |
|---|---|
| `PvP_GuildWar_Log` | `0x085dda46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dda46  _ZN16PvP_GuildWar_LogC1Ev
#           PvP_GuildWar_Log::PvP_GuildWar_Log()
# range [0x085dda46, 0x085dda85]
085dda46 +0x00:  push   %ebp
085dda47 +0x01:  mov    %esp,%ebp
085dda49 +0x03:  push   %esi
085dda4a +0x04:  push   %ebx
085dda4b +0x05:  sub    $0x10,%esp
085dda4e +0x08:  mov    0x8(%ebp),%eax
085dda51 +0x0b:  movl   $0x0,0x4(%eax)
085dda58 +0x12:  mov    0x8(%ebp),%eax
085dda5b +0x15:  add    $0x8,%eax
085dda5e +0x18:  mov    %eax,%ebx
085dda60 +0x1a:  mov    $0x7,%esi
085dda65 +0x1f:  jmp    085dda75 <+0x2f>
085dda67 +0x21:  mov    %ebx,(%esp)
085dda6a +0x24:  call   085df7d0 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x57>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x57
085dda6f +0x29:  add    $0xc,%ebx
085dda72 +0x2c:  sub    $0x1,%esi
085dda75 +0x2f:  cmp    $0xffffffff,%esi
085dda78 +0x32:  setne  %al
085dda7b +0x35:  test   %al,%al
085dda7d +0x37:  jne    085dda67 <+0x21>
085dda7f +0x39:  add    $0x10,%esp
085dda82 +0x3c:  pop    %ebx
085dda83 +0x3d:  pop    %esi
085dda84 +0x3e:  pop    %ebp
085dda85 +0x3f:  ret
```

## 反编译 C

```c
// PvP_GuildWar_Log::PvP_GuildWar_Log @ 0x85dda46

/* PvP_GuildWar_Log::PvP_GuildWar_Log() */

void __thiscall PvP_GuildWar_Log::PvP_GuildWar_Log(PvP_GuildWar_Log *this)

{
  STPvPGuild *this_00;
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  this_00 = (STPvPGuild *)(this + 8);
  for (iVar1 = 7; iVar1 != -1; iVar1 = iVar1 + -1) {
    STPvPGuild::STPvPGuild(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}
```
