# add_guild_temp_exp

`_ZN15CUserCharacInfo18add_guild_temp_expEi`

`CUserCharacInfo::add_guild_temp_exp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645c18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645c18  _ZN15CUserCharacInfo18add_guild_temp_expEi
#           CUserCharacInfo::add_guild_temp_exp(int)
# range [0x08645c18, 0x08645c57]
08645c18 +0x00:  push   %ebp
08645c19 +0x01:  mov    %esp,%ebp
08645c1b +0x03:  mov    0x8(%ebp),%eax
08645c1e +0x06:  mov    0x10(%eax),%eax
08645c21 +0x09:  test   %eax,%eax
08645c23 +0x0b:  je     08645c55 <+0x3d>
08645c25 +0x0d:  mov    0x8(%ebp),%eax
08645c28 +0x10:  mov    0x10(%eax),%eax
08645c2b +0x13:  mov    0xdbe(%eax),%eax
08645c31 +0x19:  test   %eax,%eax
08645c33 +0x1b:  je     08645c55 <+0x3d>
08645c35 +0x1d:  mov    0x8(%ebp),%eax
08645c38 +0x20:  mov    0x10(%eax),%eax
08645c3b +0x23:  mov    0x8(%ebp),%edx
08645c3e +0x26:  mov    0x10(%edx),%edx
08645c41 +0x29:  movzwl 0xded(%edx),%ecx
08645c48 +0x30:  mov    0xc(%ebp),%edx
08645c4b +0x33:  lea    (%ecx,%edx,1),%edx
08645c4e +0x36:  mov    %dx,0xded(%eax)
08645c55 +0x3d:  pop    %ebp
08645c56 +0x3e:  ret
08645c57 +0x3f:  nop
```

## 反编译 C

```c
// CUserCharacInfo::add_guild_temp_exp @ 0x8645c18

/* CUserCharacInfo::add_guild_temp_exp(int) */

void __thiscall CUserCharacInfo::add_guild_temp_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(short *)(*(int *)(this + 0x10) + 0xded) =
         *(short *)(*(int *)(this + 0x10) + 0xded) + (short)param_1;
  }
  return;
}
```
