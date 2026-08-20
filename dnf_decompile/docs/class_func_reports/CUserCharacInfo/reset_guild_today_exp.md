# reset_guild_today_exp

`_ZN15CUserCharacInfo21reset_guild_today_expEv`

`CUserCharacInfo::reset_guild_today_exp()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645d22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645d22  _ZN15CUserCharacInfo21reset_guild_today_expEv
#           CUserCharacInfo::reset_guild_today_exp()
# range [0x08645d22, 0x08645d51]
08645d22 +0x00:  push   %ebp
08645d23 +0x01:  mov    %esp,%ebp
08645d25 +0x03:  mov    0x8(%ebp),%eax
08645d28 +0x06:  mov    0x10(%eax),%eax
08645d2b +0x09:  test   %eax,%eax
08645d2d +0x0b:  je     08645d4f <+0x2d>
08645d2f +0x0d:  mov    0x8(%ebp),%eax
08645d32 +0x10:  mov    0x10(%eax),%eax
08645d35 +0x13:  mov    0xdbe(%eax),%eax
08645d3b +0x19:  test   %eax,%eax
08645d3d +0x1b:  je     08645d4f <+0x2d>
08645d3f +0x1d:  mov    0x8(%ebp),%eax
08645d42 +0x20:  mov    0x10(%eax),%eax
08645d45 +0x23:  movl   $0x0,0xdef(%eax)
08645d4f +0x2d:  pop    %ebp
08645d50 +0x2e:  ret
08645d51 +0x2f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::reset_guild_today_exp @ 0x8645d22

/* CUserCharacInfo::reset_guild_today_exp() */

void __thiscall CUserCharacInfo::reset_guild_today_exp(CUserCharacInfo *this)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xdef) = 0;
  }
  return;
}
```
