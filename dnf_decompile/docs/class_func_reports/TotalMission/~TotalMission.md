# ~TotalMission

`_ZN12TotalMissionD1Ev`

`TotalMission::~TotalMission()`

| 类 | 地址 |
|---|---|
| `TotalMission` | `0x0816632a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816632a  _ZN12TotalMissionD1Ev
#           TotalMission::~TotalMission()
# range [0x0816632a, 0x08166359]
0816632a +0x00:  push   %ebp
0816632b +0x01:  mov    %esp,%ebp
0816632d +0x03:  sub    $0x18,%esp
08166330 +0x06:  mov    0x8(%ebp),%eax
08166333 +0x09:  movl   $&_ZTV12TotalMission+0x8,(%eax)
08166339 +0x0f:  mov    0x8(%ebp),%eax
0816633c +0x12:  mov    %eax,(%esp)
0816633f +0x15:  call   08164f3a <_ZN24BaseHeroMissionConditionD1Ev>  ; BaseHeroMissionCondition::~BaseHeroMissionCondition()
08166344 +0x1a:  mov    $0x0,%eax
08166349 +0x1f:  test   %al,%al
0816634b +0x21:  je     08166358 <+0x2e>
0816634d +0x23:  mov    0x8(%ebp),%eax
08166350 +0x26:  mov    %eax,(%esp)
08166353 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08166358 +0x2e:  leave
08166359 +0x2f:  ret
```

## 反编译 C

```c
// TotalMission::~TotalMission @ 0x816632a

/* WARNING: Removing unreachable block (ram,0x0816634d) */
/* TotalMission::~TotalMission() */

void __thiscall TotalMission::~TotalMission(TotalMission *this)

{
  *(undefined ***)this = &PTR__TotalMission_08b7f048;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}
```
