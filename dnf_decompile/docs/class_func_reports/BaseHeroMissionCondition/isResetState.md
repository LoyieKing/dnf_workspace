# isResetState

`_ZN24BaseHeroMissionCondition12isResetStateEv`

`BaseHeroMissionCondition::isResetState()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164fce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164fce  _ZN24BaseHeroMissionCondition12isResetStateEv
#           BaseHeroMissionCondition::isResetState()
# range [0x08164fce, 0x08164fd9]
08164fce +0x00:  push   %ebp
08164fcf +0x01:  mov    %esp,%ebp
08164fd1 +0x03:  mov    0x8(%ebp),%eax
08164fd4 +0x06:  movzbl 0x11(%eax),%eax
08164fd8 +0x0a:  pop    %ebp
08164fd9 +0x0b:  ret
```

## 反编译 C

```c
// BaseHeroMissionCondition::isResetState @ 0x8164fce

/* BaseHeroMissionCondition::isResetState() */

BaseHeroMissionCondition __thiscall
BaseHeroMissionCondition::isResetState(BaseHeroMissionCondition *this)

{
  return this[0x11];
}
```
