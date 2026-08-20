# getRecipeProbability

`_ZN5CUser20getRecipeProbabilityEv`

`CUser::getRecipeProbability()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869318a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869318a  _ZN5CUser20getRecipeProbabilityEv
#           CUser::getRecipeProbability()
# range [0x0869318a, 0x08693197]
0869318a +0x00:  push   %ebp
0869318b +0x01:  mov    %esp,%ebp
0869318d +0x03:  mov    0x8(%ebp),%eax
08693190 +0x06:  mov    0x8ec2c(%eax),%eax
08693196 +0x0c:  pop    %ebp
08693197 +0x0d:  ret
```

## 反编译 C

```c
// CUser::getRecipeProbability @ 0x869318a

/* CUser::getRecipeProbability() */

undefined4 __thiscall CUser::getRecipeProbability(CUser *this)

{
  return *(undefined4 *)(this + 0x8ec2c);
}
```
