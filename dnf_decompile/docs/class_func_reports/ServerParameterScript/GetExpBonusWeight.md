# GetExpBonusWeight

`_ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex`

`ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c28c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c28c  _ZNK21ServerParameterScript17GetExpBonusWeightE15eRankBonusIndex
#           ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const
# range [0x08a8c28c, 0x08a8c2bf]
08a8c28c +0x00:  push   %ebp
08a8c28d +0x01:  mov    %esp,%ebp
08a8c28f +0x03:  sub    $0x4,%esp
08a8c292 +0x06:  mov    0xc(%ebp),%eax
08a8c295 +0x09:  test   %eax,%eax
08a8c297 +0x0b:  js     08a8c2b3 <+0x27>
08a8c299 +0x0d:  mov    0xc(%ebp),%eax
08a8c29c +0x10:  cmp    $0x4,%eax
08a8c29f +0x13:  jg     08a8c2b3 <+0x27>
08a8c2a1 +0x15:  mov    0xc(%ebp),%edx
08a8c2a4 +0x18:  mov    0x8(%ebp),%eax
08a8c2a7 +0x1b:  add    $0xe8,%edx
08a8c2ad +0x21:  mov    0xc(%eax,%edx,4),%eax
08a8c2b1 +0x25:  jmp    08a8c2b8 <+0x2c>
08a8c2b3 +0x27:  mov    $0x0,%eax
08a8c2b8 +0x2c:  mov    %eax,-0x4(%ebp)
08a8c2bb +0x2f:  flds   -0x4(%ebp)
08a8c2be +0x32:  leave
08a8c2bf +0x33:  ret
```

## 反编译 C

```c
// ServerParameterScript::GetExpBonusWeight @ 0x8a8c28c

/* ServerParameterScript::GetExpBonusWeight(eRankBonusIndex) const */

longdouble __thiscall
ServerParameterScript::GetExpBonusWeight(ServerParameterScript *this,int param_2)

{
  float fVar1;
  
  if ((param_2 < 0) || (4 < param_2)) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(this + (param_2 + 0xe8) * 4 + 0xc);
  }
  return (longdouble)fVar1;
}
```
