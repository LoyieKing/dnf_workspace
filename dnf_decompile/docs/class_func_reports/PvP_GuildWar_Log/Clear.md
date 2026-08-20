# Clear

`_ZN16PvP_GuildWar_Log5ClearEv`

`PvP_GuildWar_Log::Clear()`

| 类 | 地址 |
|---|---|
| `PvP_GuildWar_Log` | `0x085dda9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dda9a  _ZN16PvP_GuildWar_Log5ClearEv
#           PvP_GuildWar_Log::Clear()
# range [0x085dda9a, 0x085ddacf]
085dda9a +0x00:  push   %ebp
085dda9b +0x01:  mov    %esp,%ebp
085dda9d +0x03:  sub    $0x18,%esp
085ddaa0 +0x06:  mov    0x8(%ebp),%eax
085ddaa3 +0x09:  movb   $0x0,(%eax)
085ddaa6 +0x0c:  mov    0x8(%ebp),%eax
085ddaa9 +0x0f:  movl   $0x0,0x4(%eax)
085ddab0 +0x16:  mov    0x8(%ebp),%eax
085ddab3 +0x19:  add    $0x8,%eax
085ddab6 +0x1c:  movl   $0x60,0x8(%esp)
085ddabe +0x24:  movl   $0x0,0x4(%esp)
085ddac6 +0x2c:  mov    %eax,(%esp)
085ddac9 +0x2f:  call   0807dcc0 <_init+0x5b8>
085ddace +0x34:  leave
085ddacf +0x35:  ret
```

## 反编译 C

```c
// PvP_GuildWar_Log::Clear @ 0x85dda9a

/* PvP_GuildWar_Log::Clear() */

void __thiscall PvP_GuildWar_Log::Clear(PvP_GuildWar_Log *this)

{
  *this = (PvP_GuildWar_Log)0x0;
  *(undefined4 *)(this + 4) = 0;
  memset(this + 8,0,0x60);
  return;
}
```
