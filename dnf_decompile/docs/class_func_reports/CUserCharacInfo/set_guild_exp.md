# set_guild_exp

`_ZN15CUserCharacInfo13set_guild_expEi`

`CUserCharacInfo::set_guild_exp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645db4  _ZN15CUserCharacInfo13set_guild_expEi
#           CUserCharacInfo::set_guild_exp(int)
# range [0x08645db4, 0x08645de1]
08645db4 +0x00:  push   %ebp
08645db5 +0x01:  mov    %esp,%ebp
08645db7 +0x03:  mov    0x8(%ebp),%eax
08645dba +0x06:  mov    0x10(%eax),%eax
08645dbd +0x09:  test   %eax,%eax
08645dbf +0x0b:  je     08645de0 <+0x2c>
08645dc1 +0x0d:  mov    0x8(%ebp),%eax
08645dc4 +0x10:  mov    0x10(%eax),%eax
08645dc7 +0x13:  mov    0xdbe(%eax),%eax
08645dcd +0x19:  test   %eax,%eax
08645dcf +0x1b:  je     08645de0 <+0x2c>
08645dd1 +0x1d:  mov    0x8(%ebp),%eax
08645dd4 +0x20:  mov    0x10(%eax),%eax
08645dd7 +0x23:  mov    0xc(%ebp),%edx
08645dda +0x26:  mov    %edx,0xde9(%eax)
08645de0 +0x2c:  pop    %ebp
08645de1 +0x2d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::set_guild_exp @ 0x8645db4

/* CUserCharacInfo::set_guild_exp(int) */

void __thiscall CUserCharacInfo::set_guild_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(int *)(*(int *)(this + 0x10) + 0xde9) = param_1;
  }
  return;
}
```
