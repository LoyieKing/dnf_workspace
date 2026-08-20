# add_guild_today_exp

`_ZN15CUserCharacInfo19add_guild_today_expEi`

`CUserCharacInfo::add_guild_today_exp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645ce4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645ce4  _ZN15CUserCharacInfo19add_guild_today_expEi
#           CUserCharacInfo::add_guild_today_exp(int)
# range [0x08645ce4, 0x08645d21]
08645ce4 +0x00:  push   %ebp
08645ce5 +0x01:  mov    %esp,%ebp
08645ce7 +0x03:  mov    0x8(%ebp),%eax
08645cea +0x06:  mov    0x10(%eax),%eax
08645ced +0x09:  test   %eax,%eax
08645cef +0x0b:  je     08645d1f <+0x3b>
08645cf1 +0x0d:  mov    0x8(%ebp),%eax
08645cf4 +0x10:  mov    0x10(%eax),%eax
08645cf7 +0x13:  mov    0xdbe(%eax),%eax
08645cfd +0x19:  test   %eax,%eax
08645cff +0x1b:  je     08645d1f <+0x3b>
08645d01 +0x1d:  mov    0x8(%ebp),%eax
08645d04 +0x20:  mov    0x10(%eax),%eax
08645d07 +0x23:  mov    0x8(%ebp),%edx
08645d0a +0x26:  mov    0x10(%edx),%edx
08645d0d +0x29:  mov    0xdef(%edx),%ecx
08645d13 +0x2f:  mov    0xc(%ebp),%edx
08645d16 +0x32:  lea    (%ecx,%edx,1),%edx
08645d19 +0x35:  mov    %edx,0xdef(%eax)
08645d1f +0x3b:  pop    %ebp
08645d20 +0x3c:  ret
08645d21 +0x3d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::add_guild_today_exp @ 0x8645ce4

/* CUserCharacInfo::add_guild_today_exp(int) */

void __thiscall CUserCharacInfo::add_guild_today_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(int *)(*(int *)(this + 0x10) + 0xdef) = *(int *)(*(int *)(this + 0x10) + 0xdef) + param_1;
  }
  return;
}
```
