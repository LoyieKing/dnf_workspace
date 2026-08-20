# add_guild_exp

`_ZN15CUserCharacInfo13add_guild_expEi`

`CUserCharacInfo::add_guild_exp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645c76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645c76  _ZN15CUserCharacInfo13add_guild_expEi
#           CUserCharacInfo::add_guild_exp(int)
# range [0x08645c76, 0x08645cb3]
08645c76 +0x00:  push   %ebp
08645c77 +0x01:  mov    %esp,%ebp
08645c79 +0x03:  mov    0x8(%ebp),%eax
08645c7c +0x06:  mov    0x10(%eax),%eax
08645c7f +0x09:  test   %eax,%eax
08645c81 +0x0b:  je     08645cb1 <+0x3b>
08645c83 +0x0d:  mov    0x8(%ebp),%eax
08645c86 +0x10:  mov    0x10(%eax),%eax
08645c89 +0x13:  mov    0xdbe(%eax),%eax
08645c8f +0x19:  test   %eax,%eax
08645c91 +0x1b:  je     08645cb1 <+0x3b>
08645c93 +0x1d:  mov    0x8(%ebp),%eax
08645c96 +0x20:  mov    0x10(%eax),%eax
08645c99 +0x23:  mov    0x8(%ebp),%edx
08645c9c +0x26:  mov    0x10(%edx),%edx
08645c9f +0x29:  mov    0xde9(%edx),%ecx
08645ca5 +0x2f:  mov    0xc(%ebp),%edx
08645ca8 +0x32:  lea    (%ecx,%edx,1),%edx
08645cab +0x35:  mov    %edx,0xde9(%eax)
08645cb1 +0x3b:  pop    %ebp
08645cb2 +0x3c:  ret
08645cb3 +0x3d:  nop
```

## 反编译 C

```c
// CUserCharacInfo::add_guild_exp @ 0x8645c76

/* CUserCharacInfo::add_guild_exp(int) */

void __thiscall CUserCharacInfo::add_guild_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(int *)(*(int *)(this + 0x10) + 0xde9) = *(int *)(*(int *)(this + 0x10) + 0xde9) + param_1;
  }
  return;
}
```
