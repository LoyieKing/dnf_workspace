# isSurvivalModeFirstRound

`_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv`

`advancealtar::ProcStage::isSurvivalModeFirstRound() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812f70c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f70c  _ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv
#           advancealtar::ProcStage::isSurvivalModeFirstRound() const
# range [0x0812f70c, 0x0812f74b]
0812f70c +0x00:  push   %ebp
0812f70d +0x01:  mov    %esp,%ebp
0812f70f +0x03:  sub    $0x4,%esp
0812f712 +0x06:  mov    0x8(%ebp),%eax
0812f715 +0x09:  mov    %eax,(%esp)
0812f718 +0x0c:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812f71d +0x11:  cmp    $0x1,%eax
0812f720 +0x14:  jne    0812f734 <+0x28>
0812f722 +0x16:  mov    0x8(%ebp),%eax
0812f725 +0x19:  movzbl 0x78(%eax),%eax
0812f729 +0x1d:  test   %al,%al
0812f72b +0x1f:  je     0812f734 <+0x28>
0812f72d +0x21:  mov    $0x1,%eax
0812f732 +0x26:  jmp    0812f739 <+0x2d>
0812f734 +0x28:  mov    $0x0,%eax
0812f739 +0x2d:  test   %al,%al
0812f73b +0x2f:  je     0812f744 <+0x38>
0812f73d +0x31:  mov    $0x1,%eax
0812f742 +0x36:  jmp    0812f749 <+0x3d>
0812f744 +0x38:  mov    $0x0,%eax
0812f749 +0x3d:  leave
0812f74a +0x3e:  ret
0812f74b +0x3f:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::isSurvivalModeFirstRound @ 0x812f70c

/* advancealtar::ProcStage::isSurvivalModeFirstRound() const */

undefined1 __thiscall advancealtar::ProcStage::isSurvivalModeFirstRound(ProcStage *this)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = getStageType(this);
  if ((iVar2 == 1) && (this[0x78] != (ProcStage)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
