# setNotSurvivalModeFirstRound

`_ZN12advancealtar9ProcStage28setNotSurvivalModeFirstRoundEv`

`advancealtar::ProcStage::setNotSurvivalModeFirstRound()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812f74c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f74c  _ZN12advancealtar9ProcStage28setNotSurvivalModeFirstRoundEv
#           advancealtar::ProcStage::setNotSurvivalModeFirstRound()
# range [0x0812f74c, 0x0812f76f]
0812f74c +0x00:  push   %ebp
0812f74d +0x01:  mov    %esp,%ebp
0812f74f +0x03:  sub    $0x4,%esp
0812f752 +0x06:  mov    0x8(%ebp),%eax
0812f755 +0x09:  mov    %eax,(%esp)
0812f758 +0x0c:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812f75d +0x11:  cmp    $0x1,%eax
0812f760 +0x14:  sete   %al
0812f763 +0x17:  test   %al,%al
0812f765 +0x19:  je     0812f76e <+0x22>
0812f767 +0x1b:  mov    0x8(%ebp),%eax
0812f76a +0x1e:  movb   $0x0,0x78(%eax)
0812f76e +0x22:  leave
0812f76f +0x23:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::setNotSurvivalModeFirstRound @ 0x812f74c

/* advancealtar::ProcStage::setNotSurvivalModeFirstRound() */

void __thiscall advancealtar::ProcStage::setNotSurvivalModeFirstRound(ProcStage *this)

{
  int iVar1;
  
  iVar1 = getStageType(this);
  if (iVar1 == 1) {
    this[0x78] = (ProcStage)0x0;
  }
  return;
}
```
