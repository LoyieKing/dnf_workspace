# setConditionData

`_ZN24BaseHeroMissionCondition16setConditionDataER20HeroMissionCondition`

`BaseHeroMissionCondition::setConditionData(HeroMissionCondition&)`

| 类 | 地址 |
|---|---|
| `BaseHeroMissionCondition` | `0x08164f8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164f8c  _ZN24BaseHeroMissionCondition16setConditionDataER20HeroMissionCondition
#           BaseHeroMissionCondition::setConditionData(HeroMissionCondition&)
# range [0x08164f8c, 0x08164fa9]
08164f8c +0x00:  push   %ebp
08164f8d +0x01:  mov    %esp,%ebp
08164f8f +0x03:  sub    $0x18,%esp
08164f92 +0x06:  mov    0x8(%ebp),%eax
08164f95 +0x09:  lea    0x8(%eax),%edx
08164f98 +0x0c:  mov    0xc(%ebp),%eax
08164f9b +0x0f:  mov    %eax,0x4(%esp)
08164f9f +0x13:  mov    %edx,(%esp)
08164fa2 +0x16:  call   08961234 <_ZN20HeroMissionConditionaSERKS_>  ; HeroMissionCondition::operator=(HeroMissionCondition const&)
08164fa7 +0x1b:  leave
08164fa8 +0x1c:  ret
08164fa9 +0x1d:  nop
```

## 反编译 C

```c
// BaseHeroMissionCondition::setConditionData @ 0x8164f8c

/* BaseHeroMissionCondition::setConditionData(HeroMissionCondition&) */

void __thiscall
BaseHeroMissionCondition::setConditionData
          (BaseHeroMissionCondition *this,HeroMissionCondition *param_1)

{
  HeroMissionCondition::operator=((HeroMissionCondition *)(this + 8),param_1);
  return;
}
```
