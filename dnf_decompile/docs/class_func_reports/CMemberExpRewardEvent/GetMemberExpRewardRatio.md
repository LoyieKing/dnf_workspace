# GetMemberExpRewardRatio

`_ZN21CMemberExpRewardEvent23GetMemberExpRewardRatioEv`

`CMemberExpRewardEvent::GetMemberExpRewardRatio()`

| 类 | 地址 |
|---|---|
| `CMemberExpRewardEvent` | `0x081b2ab6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2ab6  _ZN21CMemberExpRewardEvent23GetMemberExpRewardRatioEv
#           CMemberExpRewardEvent::GetMemberExpRewardRatio()
# range [0x081b2ab6, 0x081b2ac0]
081b2ab6 +0x00:  push   %ebp
081b2ab7 +0x01:  mov    %esp,%ebp
081b2ab9 +0x03:  mov    0x8(%ebp),%eax
081b2abc +0x06:  mov    0xc(%eax),%eax
081b2abf +0x09:  pop    %ebp
081b2ac0 +0x0a:  ret
```

## 反编译 C

```c
// CMemberExpRewardEvent::GetMemberExpRewardRatio @ 0x81b2ab6

/* CMemberExpRewardEvent::GetMemberExpRewardRatio() */

undefined4 __thiscall CMemberExpRewardEvent::GetMemberExpRewardRatio(CMemberExpRewardEvent *this)

{
  return *(undefined4 *)(this + 0xc);
}
```
