# getGuildLevelUpParam

`_ZN20GuildParameterScript20getGuildLevelUpParamEi`

`GuildParameterScript::getGuildLevelUpParam(int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x08979648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08979648  _ZN20GuildParameterScript20getGuildLevelUpParamEi
#           GuildParameterScript::getGuildLevelUpParam(int)
# range [0x08979648, 0x08979671]
08979648 +0x00:  push   %ebp
08979649 +0x01:  mov    %esp,%ebp
0897964b +0x03:  cmpl   $0x0,0xc(%ebp)
0897964f +0x07:  jle    0897966b <+0x23>
08979651 +0x09:  cmpl   $0x10,0xc(%ebp)
08979655 +0x0d:  jg     0897966b <+0x23>
08979657 +0x0f:  mov    0x8(%ebp),%eax
0897965a +0x12:  lea    0x5c(%eax),%edx
0897965d +0x15:  mov    0xc(%ebp),%eax
08979660 +0x18:  sub    $0x1,%eax
08979663 +0x1b:  shl    $0x3,%eax
08979666 +0x1e:  lea    (%edx,%eax,1),%eax
08979669 +0x21:  jmp    08979670 <+0x28>
0897966b +0x23:  mov    $0x0,%eax
08979670 +0x28:  pop    %ebp
08979671 +0x29:  ret
```

## 反编译 C

```c
// GuildParameterScript::getGuildLevelUpParam @ 0x8979648

/* GuildParameterScript::getGuildLevelUpParam(int) */

GuildParameterScript * __thiscall
GuildParameterScript::getGuildLevelUpParam(GuildParameterScript *this,int param_1)

{
  GuildParameterScript *pGVar1;
  
  if ((param_1 < 1) || (0x10 < param_1)) {
    pGVar1 = (GuildParameterScript *)0x0;
  }
  else {
    pGVar1 = this + (param_1 + -1) * 8 + 0x5c;
  }
  return pGVar1;
}
```
