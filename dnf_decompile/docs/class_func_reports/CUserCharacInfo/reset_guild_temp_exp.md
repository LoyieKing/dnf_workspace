# reset_guild_temp_exp

`_ZN15CUserCharacInfo20reset_guild_temp_expEv`

`CUserCharacInfo::reset_guild_temp_exp()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645c58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645c58  _ZN15CUserCharacInfo20reset_guild_temp_expEv
#           CUserCharacInfo::reset_guild_temp_exp()
# range [0x08645c58, 0x08645c75]
08645c58 +0x00:  push   %ebp
08645c59 +0x01:  mov    %esp,%ebp
08645c5b +0x03:  mov    0x8(%ebp),%eax
08645c5e +0x06:  mov    0x10(%eax),%eax
08645c61 +0x09:  test   %eax,%eax
08645c63 +0x0b:  je     08645c74 <+0x1c>
08645c65 +0x0d:  mov    0x8(%ebp),%eax
08645c68 +0x10:  mov    0x10(%eax),%eax
08645c6b +0x13:  movw   $0x0,0xded(%eax)
08645c74 +0x1c:  pop    %ebp
08645c75 +0x1d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::reset_guild_temp_exp @ 0x8645c58

/* CUserCharacInfo::reset_guild_temp_exp() */

void __thiscall CUserCharacInfo::reset_guild_temp_exp(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined2 *)(*(int *)(this + 0x10) + 0xded) = 0;
  }
  return;
}
```
