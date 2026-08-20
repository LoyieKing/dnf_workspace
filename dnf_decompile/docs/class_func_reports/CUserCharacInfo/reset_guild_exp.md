# reset_guild_exp

`_ZN15CUserCharacInfo15reset_guild_expEv`

`CUserCharacInfo::reset_guild_exp()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645cb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645cb4  _ZN15CUserCharacInfo15reset_guild_expEv
#           CUserCharacInfo::reset_guild_exp()
# range [0x08645cb4, 0x08645ce3]
08645cb4 +0x00:  push   %ebp
08645cb5 +0x01:  mov    %esp,%ebp
08645cb7 +0x03:  mov    0x8(%ebp),%eax
08645cba +0x06:  mov    0x10(%eax),%eax
08645cbd +0x09:  test   %eax,%eax
08645cbf +0x0b:  je     08645ce1 <+0x2d>
08645cc1 +0x0d:  mov    0x8(%ebp),%eax
08645cc4 +0x10:  mov    0x10(%eax),%eax
08645cc7 +0x13:  mov    0xdbe(%eax),%eax
08645ccd +0x19:  test   %eax,%eax
08645ccf +0x1b:  je     08645ce1 <+0x2d>
08645cd1 +0x1d:  mov    0x8(%ebp),%eax
08645cd4 +0x20:  mov    0x10(%eax),%eax
08645cd7 +0x23:  movl   $0x0,0xde9(%eax)
08645ce1 +0x2d:  pop    %ebp
08645ce2 +0x2e:  ret
08645ce3 +0x2f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::reset_guild_exp @ 0x8645cb4

/* CUserCharacInfo::reset_guild_exp() */

void __thiscall CUserCharacInfo::reset_guild_exp(CUserCharacInfo *this)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xde9) = 0;
  }
  return;
}
```
