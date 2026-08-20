# getMissionCode

`_ZN24BaseHeroMissionCondition14getMissionCodeEv`

`BaseHeroMissionCondition::getMissionCode()`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164faa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164faa  _ZN24BaseHeroMissionCondition14getMissionCodeEv
#           BaseHeroMissionCondition::getMissionCode()
# range [0x08164faa, 0x08164fb5]
08164faa +0x00:  push   %ebp
08164fab +0x01:  mov    %esp,%ebp
08164fad +0x03:  mov    0x8(%ebp),%eax
08164fb0 +0x06:  mov    0x4(%eax),%eax
08164fb3 +0x09:  pop    %ebp
08164fb4 +0x0a:  ret
08164fb5 +0x0b:  nop
```

## 反编译 C

```c
// BaseHeroMissionCondition::getMissionCode @ 0x8164faa

/* BaseHeroMissionCondition::getMissionCode() */

undefined4 __thiscall BaseHeroMissionCondition::getMissionCode(BaseHeroMissionCondition *this)

{
  return *(undefined4 *)(this + 4);
}
```
