# endProcAllKillMonster

`_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv`

`advancealtar::ProcStage::endProcAllKillMonster()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812ea00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812ea00  _ZN12advancealtar9ProcStage21endProcAllKillMonsterEv
#           advancealtar::ProcStage::endProcAllKillMonster()
# range [0x0812ea00, 0x0812eaa5]
0812ea00 +0x00:  push   %ebp
0812ea01 +0x01:  mov    %esp,%ebp
0812ea03 +0x03:  push   %ebx
0812ea04 +0x04:  sub    $0x24,%esp
0812ea07 +0x07:  mov    0x8(%ebp),%eax
0812ea0a +0x0a:  mov    (%eax),%eax
0812ea0c +0x0c:  mov    %eax,(%esp)
0812ea0f +0x0f:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812ea14 +0x14:  mov    %eax,-0xc(%ebp)
0812ea17 +0x17:  cmpl   $0x0,-0xc(%ebp)
0812ea1b +0x1b:  jne    0812ea24 <+0x24>
0812ea1d +0x1d:  mov    $0x1,%eax
0812ea22 +0x22:  jmp    0812eaa0 <+0xa0>
0812ea24 +0x24:  mov    0x8(%ebp),%eax
0812ea27 +0x27:  mov    %eax,(%esp)
0812ea2a +0x2a:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812ea2f +0x2f:  cmp    $0x1,%eax
0812ea32 +0x32:  sete   %al
0812ea35 +0x35:  test   %al,%al
0812ea37 +0x37:  je     0812ea90 <+0x90>
0812ea39 +0x39:  mov    0x8(%ebp),%eax
0812ea3c +0x3c:  mov    %eax,(%esp)
0812ea3f +0x3f:  call   0813486c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x473>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x473
0812ea44 +0x44:  mov    %eax,%ebx
0812ea46 +0x46:  mov    0x8(%ebp),%eax
0812ea49 +0x49:  mov    %eax,(%esp)
0812ea4c +0x4c:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
0812ea51 +0x51:  mov    %ebx,0x8(%esp)
0812ea55 +0x55:  mov    %eax,0x4(%esp)
0812ea59 +0x59:  mov    0x8(%ebp),%eax
0812ea5c +0x5c:  mov    %eax,(%esp)
0812ea5f +0x5f:  call   0812de70 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE>  ; advancealtar::ProcStage::startStage(int, advancealtar::StageDifficulty::T)
0812ea64 +0x64:  test   %eax,%eax
0812ea66 +0x66:  setne  %al
0812ea69 +0x69:  test   %al,%al
0812ea6b +0x6b:  je     0812ea7f <+0x7f>
0812ea6d +0x6d:  mov    0x8(%ebp),%eax
0812ea70 +0x70:  mov    %eax,(%esp)
0812ea73 +0x73:  call   0812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>  ; advancealtar::ProcStage::clearStageAndReward()
0812ea78 +0x78:  mov    $0x1,%eax
0812ea7d +0x7d:  jmp    0812eaa0 <+0xa0>
0812ea7f +0x7f:  mov    0x8(%ebp),%eax
0812ea82 +0x82:  movl   $0x3,0x4(%eax)
0812ea89 +0x89:  mov    $0x0,%eax
0812ea8e +0x8e:  jmp    0812eaa0 <+0xa0>
0812ea90 +0x90:  mov    0x8(%ebp),%eax
0812ea93 +0x93:  mov    %eax,(%esp)
0812ea96 +0x96:  call   0812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>  ; advancealtar::ProcStage::clearStageAndReward()
0812ea9b +0x9b:  mov    $0x1,%eax
0812eaa0 +0xa0:  add    $0x24,%esp
0812eaa3 +0xa3:  pop    %ebx
0812eaa4 +0xa4:  pop    %ebp
0812eaa5 +0xa5:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::endProcAllKillMonster @ 0x812ea00

/* advancealtar::ProcStage::endProcAllKillMonster() */

undefined4 __thiscall advancealtar::ProcStage::endProcAllKillMonster(ProcStage *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = CharacData::getUser(*(CharacData **)this);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = getStageType(this);
    if (iVar1 == 1) {
      uVar2 = getStageDifficulty(this);
      uVar3 = getStageIndex(this);
      iVar1 = startStage(this,uVar3,uVar2);
      if (iVar1 == 0) {
        *(undefined4 *)(this + 4) = 3;
        uVar2 = 0;
      }
      else {
        clearStageAndReward(this);
        uVar2 = 1;
      }
    }
    else {
      clearStageAndReward(this);
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
