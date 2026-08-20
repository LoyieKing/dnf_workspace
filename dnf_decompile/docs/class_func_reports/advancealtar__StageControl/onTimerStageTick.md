# onTimerStageTick

`_ZN12advancealtar12StageControl16onTimerStageTickEv`

`advancealtar::StageControl::onTimerStageTick()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fb98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fb98  _ZN12advancealtar12StageControl16onTimerStageTickEv
#           advancealtar::StageControl::onTimerStageTick()
# range [0x0812fb98, 0x0812fbf9]
0812fb98 +0x00:  push   %ebp
0812fb99 +0x01:  mov    %esp,%ebp
0812fb9b +0x03:  sub    $0x18,%esp
0812fb9e +0x06:  mov    0x8(%ebp),%eax
0812fba1 +0x09:  add    $0x4,%eax
0812fba4 +0x0c:  mov    %eax,(%esp)
0812fba7 +0x0f:  call   08134838 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x43f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x43f
0812fbac +0x14:  cmp    $0x3,%eax
0812fbaf +0x17:  je     0812fbc4 <+0x2c>
0812fbb1 +0x19:  mov    0x8(%ebp),%eax
0812fbb4 +0x1c:  add    $0x4,%eax
0812fbb7 +0x1f:  mov    %eax,(%esp)
0812fbba +0x22:  call   08134838 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x43f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x43f
0812fbbf +0x27:  cmp    $0x4,%eax
0812fbc2 +0x2a:  jne    0812fbcb <+0x33>
0812fbc4 +0x2c:  mov    $0x1,%eax
0812fbc9 +0x31:  jmp    0812fbd0 <+0x38>
0812fbcb +0x33:  mov    $0x0,%eax
0812fbd0 +0x38:  test   %al,%al
0812fbd2 +0x3a:  je     0812fbf2 <+0x5a>
0812fbd4 +0x3c:  mov    0x8(%ebp),%eax
0812fbd7 +0x3f:  add    $0x98,%eax
0812fbdc +0x44:  mov    %eax,(%esp)
0812fbdf +0x47:  call   0812d0b6 <_ZN12advancealtar10CharacData6upGageEv>  ; advancealtar::CharacData::upGage()
0812fbe4 +0x4c:  mov    0x8(%ebp),%eax
0812fbe7 +0x4f:  add    $0x4,%eax
0812fbea +0x52:  mov    %eax,(%esp)
0812fbed +0x55:  call   0812e0d6 <_ZN12advancealtar9ProcStage12procTimeLineEv>  ; advancealtar::ProcStage::procTimeLine()
0812fbf2 +0x5a:  mov    $0x1,%eax
0812fbf7 +0x5f:  leave
0812fbf8 +0x60:  ret
0812fbf9 +0x61:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::onTimerStageTick @ 0x812fb98

/* advancealtar::StageControl::onTimerStageTick() */

undefined4 __thiscall advancealtar::StageControl::onTimerStageTick(StageControl *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = ProcStage::getState((ProcStage *)(this + 4));
  if (iVar2 != 3) {
    iVar2 = ProcStage::getState((ProcStage *)(this + 4));
    if (iVar2 != 4) {
      bVar1 = false;
      goto LAB_0812fbd0;
    }
  }
  bVar1 = true;
LAB_0812fbd0:
  if (bVar1) {
    CharacData::upGage((CharacData *)(this + 0x98));
    ProcStage::procTimeLine((ProcStage *)(this + 4));
  }
  return 1;
}
```
