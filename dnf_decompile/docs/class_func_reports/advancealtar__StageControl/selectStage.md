# selectStage

`_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE`

`advancealtar::StageControl::selectStage(CUser*, int, advancealtar::StageDifficulty::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x0812fa7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812fa7a  _ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE
#           advancealtar::StageControl::selectStage(CUser*, int, advancealtar::StageDifficulty::T)
# range [0x0812fa7a, 0x0812fb97]
0812fa7a +0x000:  push   %ebp
0812fa7b +0x001:  mov    %esp,%ebp
0812fa7d +0x003:  sub    $0x28,%esp
0812fa80 +0x006:  cmpl   $0x0,0xc(%ebp)
0812fa84 +0x00a:  jne    0812fa90 <+0x16>
0812fa86 +0x00c:  mov    $0x3,%eax
0812fa8b +0x011:  jmp    0812fb96 <+0x11c>
0812fa90 +0x016:  mov    0xc(%ebp),%eax
0812fa93 +0x019:  add    $0x8df60,%eax
0812fa98 +0x01e:  mov    %eax,(%esp)
0812fa9b +0x021:  call   081312ec <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv>  ; advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const
0812faa0 +0x026:  xor    $0x1,%eax
0812faa3 +0x029:  test   %al,%al
0812faa5 +0x02b:  je     0812fab1 <+0x37>
0812faa7 +0x02d:  mov    $0xf5,%eax
0812faac +0x032:  jmp    0812fb96 <+0x11c>
0812fab1 +0x037:  mov    0xc(%ebp),%eax
0812fab4 +0x03a:  lea    0x8df60(%eax),%edx
0812faba +0x040:  mov    0x10(%ebp),%eax
0812fabd +0x043:  mov    %eax,0x4(%esp)
0812fac1 +0x047:  mov    %edx,(%esp)
0812fac4 +0x04a:  call   0813131a <_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi>  ; advancealtar::CharacAdvanceAltarManager::isEnterStage(int) const
0812fac9 +0x04f:  xor    $0x1,%eax
0812facc +0x052:  test   %al,%al
0812face +0x054:  je     0812fada <+0x60>
0812fad0 +0x056:  mov    $0x8,%eax
0812fad5 +0x05b:  jmp    0812fb96 <+0x11c>
0812fada +0x060:  mov    0xc(%ebp),%eax
0812fadd +0x063:  add    $0x8df60,%eax
0812fae2 +0x068:  mov    %eax,(%esp)
0812fae5 +0x06b:  call   081312d0 <_ZNK12advancealtar25CharacAdvanceAltarManager19getCurrentRidableIdEv>  ; advancealtar::CharacAdvanceAltarManager::getCurrentRidableId() const
0812faea +0x070:  mov    0x8(%ebp),%edx
0812faed +0x073:  mov    %eax,0x98(%edx)
0812faf3 +0x079:  mov    0x8(%ebp),%eax
0812faf6 +0x07c:  lea    0x98(%eax),%edx
0812fafc +0x082:  mov    0xc(%ebp),%eax
0812faff +0x085:  mov    %eax,0x4(%esp)
0812fb03 +0x089:  mov    %edx,(%esp)
0812fb06 +0x08c:  call   08134806 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x40d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x40d
0812fb0b +0x091:  mov    0x8(%ebp),%eax
0812fb0e +0x094:  add    $0x98,%eax
0812fb13 +0x099:  mov    %eax,(%esp)
0812fb16 +0x09c:  call   0812d246 <_ZN12advancealtar10CharacData11setSlotItemEv>  ; advancealtar::CharacData::setSlotItem()
0812fb1b +0x0a1:  mov    0x8(%ebp),%eax
0812fb1e +0x0a4:  add    $0x4,%eax
0812fb21 +0x0a7:  mov    %eax,(%esp)
0812fb24 +0x0aa:  call   0812dd9a <_ZN12advancealtar9ProcStage8resetAllEv>  ; advancealtar::ProcStage::resetAll()
0812fb29 +0x0af:  movl   $0x0,-0xc(%ebp)
0812fb30 +0x0b6:  mov    0x8(%ebp),%eax
0812fb33 +0x0b9:  lea    0x4(%eax),%edx
0812fb36 +0x0bc:  mov    0x14(%ebp),%eax
0812fb39 +0x0bf:  mov    %eax,0x8(%esp)
0812fb3d +0x0c3:  mov    0x10(%ebp),%eax
0812fb40 +0x0c6:  mov    %eax,0x4(%esp)
0812fb44 +0x0ca:  mov    %edx,(%esp)
0812fb47 +0x0cd:  call   0812de70 <_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE>  ; advancealtar::ProcStage::startStage(int, advancealtar::StageDifficulty::T)
0812fb4c +0x0d2:  mov    %eax,-0xc(%ebp)
0812fb4f +0x0d5:  cmpl   $0x0,-0xc(%ebp)
0812fb53 +0x0d9:  je     0812fb5a <+0xe0>
0812fb55 +0x0db:  mov    -0xc(%ebp),%eax
0812fb58 +0x0de:  jmp    0812fb96 <+0x11c>
0812fb5a +0x0e0:  mov    0x8(%ebp),%eax
0812fb5d +0x0e3:  mov    %eax,(%esp)
0812fb60 +0x0e6:  call   081300f6 <_ZN12advancealtar12StageControl13sendStageInfoEv>  ; advancealtar::StageControl::sendStageInfo()
0812fb65 +0x0eb:  mov    0x8(%ebp),%eax
0812fb68 +0x0ee:  mov    %eax,(%esp)
0812fb6b +0x0f1:  call   081301e0 <_ZN12advancealtar12StageControl11sendMapInfoEv>  ; advancealtar::StageControl::sendMapInfo()
0812fb70 +0x0f6:  mov    0x8(%ebp),%eax
0812fb73 +0x0f9:  add    $0x4,%eax
0812fb76 +0x0fc:  mov    %eax,(%esp)
0812fb79 +0x0ff:  call   0812f74c <_ZN12advancealtar9ProcStage28setNotSurvivalModeFirstRoundEv>  ; advancealtar::ProcStage::setNotSurvivalModeFirstRound()
0812fb7e +0x104:  movl   $0xd,0x4(%esp)
0812fb86 +0x10c:  mov    0xc(%ebp),%eax
0812fb89 +0x10f:  mov    %eax,(%esp)
0812fb8c +0x112:  call   0867edb2 <_ZN5CUser9set_stateE8ch_state>  ; CUser::set_state(ch_state)
0812fb91 +0x117:  mov    $0x0,%eax
0812fb96 +0x11c:  leave
0812fb97 +0x11d:  ret
```

## 反编译 C

```c
// advancealtar::StageControl::selectStage @ 0x812fa7a

/* advancealtar::StageControl::selectStage(CUser*, int, advancealtar::StageDifficulty::T) */

int __thiscall
advancealtar::StageControl::selectStage
          (StageControl *this,CUser *param_1,undefined4 param_2,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = 3;
  }
  else {
    cVar1 = CharacAdvanceAltarManager::isAvailableTciket
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
    if (cVar1 == '\x01') {
      cVar1 = CharacAdvanceAltarManager::isEnterStage((int)(param_1 + 0x8df60));
      if (cVar1 == '\x01') {
        uVar3 = CharacAdvanceAltarManager::getCurrentRidableId
                          ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
        *(undefined4 *)(this + 0x98) = uVar3;
        CharacData::setUser((CharacData *)(this + 0x98),param_1);
        CharacData::setSlotItem((CharacData *)(this + 0x98));
        ProcStage::resetAll((ProcStage *)(this + 4));
        iVar2 = ProcStage::startStage((ProcStage *)(this + 4),param_2,param_4);
        if (iVar2 == 0) {
          sendStageInfo(this);
          sendMapInfo(this);
          ProcStage::setNotSurvivalModeFirstRound((ProcStage *)(this + 4));
          CUser::set_state(param_1,0xd);
          iVar2 = 0;
        }
      }
      else {
        iVar2 = 8;
      }
    }
    else {
      iVar2 = 0xf5;
    }
  }
  return iVar2;
}
```
