# startStage

`_ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE`

`advancealtar::ProcStage::startStage(int, advancealtar::StageDifficulty::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812de70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812de70  _ZN12advancealtar9ProcStage10startStageEiNS_15StageDifficulty1TE
#           advancealtar::ProcStage::startStage(int, advancealtar::StageDifficulty::T)
# range [0x0812de70, 0x0812e0d5]
0812de70 +0x000:  push   %ebp
0812de71 +0x001:  mov    %esp,%ebp
0812de73 +0x003:  push   %ebx
0812de74 +0x004:  sub    $0x24,%esp
0812de77 +0x007:  mov    0x8(%ebp),%eax
0812de7a +0x00a:  mov    (%eax),%eax
0812de7c +0x00c:  mov    %eax,(%esp)
0812de7f +0x00f:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812de84 +0x014:  mov    %eax,-0x10(%ebp)
0812de87 +0x017:  cmpl   $0x0,-0x10(%ebp)
0812de8b +0x01b:  jne    0812de97 <+0x27>
0812de8d +0x01d:  mov    $0x3,%eax
0812de92 +0x022:  jmp    0812e0d1 <+0x261>
0812de97 +0x027:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812de9c +0x02c:  mov    0xc(%ebp),%edx
0812de9f +0x02f:  mov    %edx,0x4(%esp)
0812dea3 +0x033:  mov    %eax,(%esp)
0812dea6 +0x036:  call   0835f9f8 <_ZNK12CDataManager12find_dungeonEi>  ; CDataManager::find_dungeon(int) const
0812deab +0x03b:  mov    0x8(%ebp),%edx
0812deae +0x03e:  mov    %eax,0x70(%edx)
0812deb1 +0x041:  mov    0x8(%ebp),%eax
0812deb4 +0x044:  mov    0x70(%eax),%eax
0812deb7 +0x047:  test   %eax,%eax
0812deb9 +0x049:  jne    0812dec5 <+0x55>
0812debb +0x04b:  mov    $0x15,%eax
0812dec0 +0x050:  jmp    0812e0d1 <+0x261>
0812dec5 +0x055:  movl   $0x0,-0xc(%ebp)
0812decc +0x05c:  mov    0x8(%ebp),%eax
0812decf +0x05f:  mov    %eax,(%esp)
0812ded2 +0x062:  call   0812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>  ; advancealtar::ProcStage::getStageType() const
0812ded7 +0x067:  cmp    $0x1,%eax
0812deda +0x06a:  sete   %al
0812dedd +0x06d:  test   %al,%al
0812dedf +0x06f:  je     0812e011 <+0x1a1>
0812dee5 +0x075:  movl   $0x1,0x4(%esp)
0812deed +0x07d:  mov    0x8(%ebp),%eax
0812def0 +0x080:  mov    %eax,(%esp)
0812def3 +0x083:  call   0812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>  ; advancealtar::ProcStage::reset(advancealtar::StageType::T)
0812def8 +0x088:  mov    0x8(%ebp),%eax
0812defb +0x08b:  mov    %eax,(%esp)
0812defe +0x08e:  call   0812f70c <_ZNK12advancealtar9ProcStage24isSurvivalModeFirstRoundEv>  ; advancealtar::ProcStage::isSurvivalModeFirstRound() const
0812df03 +0x093:  test   %al,%al
0812df05 +0x095:  je     0812dfa4 <+0x134>
0812df0b +0x09b:  mov    0x8(%ebp),%eax
0812df0e +0x09e:  mov    0x70(%eax),%eax
0812df11 +0x0a1:  lea    0x814(%eax),%edx
0812df17 +0x0a7:  mov    0x8(%ebp),%eax
0812df1a +0x0aa:  sub    $0xffffff80,%eax
0812df1d +0x0ad:  mov    %edx,0x4(%esp)
0812df21 +0x0b1:  mov    %eax,(%esp)
0812df24 +0x0b4:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
0812df29 +0x0b9:  mov    0x8(%ebp),%eax
0812df2c +0x0bc:  lea    0x80(%eax),%edx
0812df32 +0x0c2:  lea    -0x18(%ebp),%eax
0812df35 +0x0c5:  mov    %edx,0x4(%esp)
0812df39 +0x0c9:  mov    %eax,(%esp)
0812df3c +0x0cc:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0812df41 +0x0d1:  sub    $0x4,%esp
0812df44 +0x0d4:  mov    0x8(%ebp),%eax
0812df47 +0x0d7:  lea    0x80(%eax),%edx
0812df4d +0x0dd:  lea    -0x14(%ebp),%eax
0812df50 +0x0e0:  mov    %edx,0x4(%esp)
0812df54 +0x0e4:  mov    %eax,(%esp)
0812df57 +0x0e7:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0812df5c +0x0ec:  sub    $0x4,%esp
0812df5f +0x0ef:  mov    -0x18(%ebp),%eax
0812df62 +0x0f2:  mov    %eax,0x4(%esp)
0812df66 +0x0f6:  mov    -0x14(%ebp),%eax
0812df69 +0x0f9:  mov    %eax,(%esp)
0812df6c +0x0fc:  call   08134d8e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x995>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x995
0812df71 +0x101:  mov    0x8(%ebp),%eax
0812df74 +0x104:  movl   $0x1,0x4(%eax)
0812df7b +0x10b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0812df82 +0x112:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0812df87 +0x117:  mov    0x8(%ebp),%edx
0812df8a +0x11a:  mov    %eax,0x8c(%edx)
0812df90 +0x120:  mov    0x8(%ebp),%eax
0812df93 +0x123:  mov    %eax,0x4(%esp)
0812df97 +0x127:  mov    -0x10(%ebp),%eax
0812df9a +0x12a:  mov    %eax,(%esp)
0812df9d +0x12d:  call   081339b0 <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE>  ; advancealtar::HistoryLog::enterDungeon(CUser&, advancealtar::ProcStage const&)
0812dfa2 +0x132:  jmp    0812dfb3 <+0x143>
0812dfa4 +0x134:  mov    0x8(%ebp),%eax
0812dfa7 +0x137:  mov    0x7c(%eax),%eax
0812dfaa +0x13a:  lea    0x1(%eax),%edx
0812dfad +0x13d:  mov    0x8(%ebp),%eax
0812dfb0 +0x140:  mov    %edx,0x7c(%eax)
0812dfb3 +0x143:  mov    0x8(%ebp),%eax
0812dfb6 +0x146:  mov    0x7c(%eax),%ebx
0812dfb9 +0x149:  mov    0x8(%ebp),%eax
0812dfbc +0x14c:  sub    $0xffffff80,%eax
0812dfbf +0x14f:  mov    %eax,(%esp)
0812dfc2 +0x152:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0812dfc7 +0x157:  cmp    %eax,%ebx
0812dfc9 +0x159:  setae  %al
0812dfcc +0x15c:  test   %al,%al
0812dfce +0x15e:  je     0812dfe4 <+0x174>
0812dfd0 +0x160:  mov    0x8(%ebp),%eax
0812dfd3 +0x163:  movl   $0x7,0x4(%eax)
0812dfda +0x16a:  mov    $0x15,%eax
0812dfdf +0x16f:  jmp    0812e0d1 <+0x261>
0812dfe4 +0x174:  mov    0x8(%ebp),%eax
0812dfe7 +0x177:  mov    0x7c(%eax),%eax
0812dfea +0x17a:  mov    0x8(%ebp),%edx
0812dfed +0x17d:  sub    $0xffffff80,%edx
0812dff0 +0x180:  mov    %eax,0x4(%esp)
0812dff4 +0x184:  mov    %edx,(%esp)
0812dff7 +0x187:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0812dffc +0x18c:  mov    (%eax),%eax
0812dffe +0x18e:  mov    %eax,-0xc(%ebp)
0812e001 +0x191:  mov    0x8(%ebp),%eax
0812e004 +0x194:  mov    0x7c(%eax),%eax
0812e007 +0x197:  mov    %eax,%edx
0812e009 +0x199:  mov    0x8(%ebp),%eax
0812e00c +0x19c:  mov    %edx,0x6c(%eax)
0812e00f +0x19f:  jmp    0812e08c <+0x21c>
0812e011 +0x1a1:  movl   $0x0,0x4(%esp)
0812e019 +0x1a9:  mov    0x8(%ebp),%eax
0812e01c +0x1ac:  mov    %eax,(%esp)
0812e01f +0x1af:  call   0812dde0 <_ZN12advancealtar9ProcStage5resetENS_9StageType1TE>  ; advancealtar::ProcStage::reset(advancealtar::StageType::T)
0812e024 +0x1b4:  mov    0x8(%ebp),%eax
0812e027 +0x1b7:  mov    0x10(%ebp),%edx
0812e02a +0x1ba:  mov    %edx,0x68(%eax)
0812e02d +0x1bd:  mov    0x8(%ebp),%eax
0812e030 +0x1c0:  movl   $0x1,0x4(%eax)
0812e037 +0x1c7:  mov    0x8(%ebp),%eax
0812e03a +0x1ca:  mov    0x70(%eax),%eax
0812e03d +0x1cd:  mov    0x10(%ebp),%edx
0812e040 +0x1d0:  add    $0x200,%edx
0812e046 +0x1d6:  mov    0x8(%eax,%edx,4),%eax
0812e04a +0x1da:  mov    %eax,-0xc(%ebp)
0812e04d +0x1dd:  mov    0x8(%ebp),%eax
0812e050 +0x1e0:  mov    0x70(%eax),%eax
0812e053 +0x1e3:  mov    0x10(%ebp),%edx
0812e056 +0x1e6:  add    $0x208,%edx
0812e05c +0x1ec:  mov    (%eax,%edx,4),%edx
0812e05f +0x1ef:  mov    0x8(%ebp),%eax
0812e062 +0x1f2:  mov    %edx,0x6c(%eax)
0812e065 +0x1f5:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0812e06c +0x1fc:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0812e071 +0x201:  mov    0x8(%ebp),%edx
0812e074 +0x204:  mov    %eax,0x8c(%edx)
0812e07a +0x20a:  mov    0x8(%ebp),%eax
0812e07d +0x20d:  mov    %eax,0x4(%esp)
0812e081 +0x211:  mov    -0x10(%ebp),%eax
0812e084 +0x214:  mov    %eax,(%esp)
0812e087 +0x217:  call   081339b0 <_ZN12advancealtar10HistoryLog12enterDungeonER5CUserRKNS_9ProcStageE>  ; advancealtar::HistoryLog::enterDungeon(CUser&, advancealtar::ProcStage const&)
0812e08c +0x21c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812e091 +0x221:  mov    -0xc(%ebp),%edx
0812e094 +0x224:  mov    %edx,0x4(%esp)
0812e098 +0x228:  mov    %eax,(%esp)
0812e09b +0x22b:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0812e0a0 +0x230:  mov    0x8(%ebp),%edx
0812e0a3 +0x233:  mov    %eax,0x74(%edx)
0812e0a6 +0x236:  mov    0x8(%ebp),%eax
0812e0a9 +0x239:  mov    0x74(%eax),%eax
0812e0ac +0x23c:  test   %eax,%eax
0812e0ae +0x23e:  jne    0812e0b7 <+0x247>
0812e0b0 +0x240:  mov    $0x15,%eax
0812e0b5 +0x245:  jmp    0812e0d1 <+0x261>
0812e0b7 +0x247:  mov    0x8(%ebp),%eax
0812e0ba +0x24a:  mov    0x74(%eax),%eax
0812e0bd +0x24d:  lea    0xf4(%eax),%edx
0812e0c3 +0x253:  mov    0x8(%ebp),%eax
0812e0c6 +0x256:  mov    %edx,0x90(%eax)
0812e0cc +0x25c:  mov    $0x0,%eax
0812e0d1 +0x261:  mov    -0x4(%ebp),%ebx
0812e0d4 +0x264:  leave
0812e0d5 +0x265:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::startStage @ 0x812de70

/* advancealtar::ProcStage::startStage(int, advancealtar::StageDifficulty::T) */

undefined4 __thiscall
advancealtar::ProcStage::startStage(ProcStage *this,undefined4 param_1,int param_3)

{
  uint uVar1;
  char cVar2;
  CUser *pCVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  
  pCVar3 = (CUser *)CharacData::getUser(*(CharacData **)this);
  if (pCVar3 == (CUser *)0x0) {
    uVar4 = 3;
  }
  else {
    iVar5 = G_CDataManager();
    uVar4 = CDataManager::find_dungeon(iVar5);
    *(undefined4 *)(this + 0x70) = uVar4;
    if (*(int *)(this + 0x70) == 0) {
      uVar4 = 0x15;
    }
    else {
      iVar5 = getStageType(this);
      if (iVar5 == 1) {
        reset(this,1);
        cVar2 = isSurvivalModeFirstRound(this);
        if (cVar2 == '\0') {
          *(int *)(this + 0x7c) = *(int *)(this + 0x7c) + 1;
        }
        else {
          std::vector<int,std::allocator<int>>::operator=
                    ((vector<int,std::allocator<int>> *)(this + 0x80),
                     (vector *)(*(int *)(this + 0x70) + 0x814));
          std::vector<int,std::allocator<int>>::end();
          std::vector<int,std::allocator<int>>::begin();
          std::
          random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
                    (local_18,local_1c);
          *(undefined4 *)(this + 4) = 1;
          uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          *(undefined4 *)(this + 0x8c) = uVar4;
          HistoryLog::enterDungeon(pCVar3,this);
        }
        uVar1 = *(uint *)(this + 0x7c);
        uVar6 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this + 0x80));
        if (uVar6 <= uVar1) {
          *(undefined4 *)(this + 4) = 7;
          return 0x15;
        }
        std::vector<int,std::allocator<int>>::operator[]
                  ((vector<int,std::allocator<int>> *)(this + 0x80),*(uint *)(this + 0x7c));
        *(undefined4 *)(this + 0x6c) = *(undefined4 *)(this + 0x7c);
      }
      else {
        reset(this,0);
        *(int *)(this + 0x68) = param_3;
        *(undefined4 *)(this + 4) = 1;
        *(undefined4 *)(this + 0x6c) =
             *(undefined4 *)(*(int *)(this + 0x70) + (param_3 + 0x208) * 4);
        uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(this + 0x8c) = uVar4;
        HistoryLog::enterDungeon(pCVar3,this);
      }
      iVar5 = G_CDataManager();
      uVar4 = CDataManager::find_map(iVar5);
      *(undefined4 *)(this + 0x74) = uVar4;
      if (*(int *)(this + 0x74) == 0) {
        uVar4 = 0x15;
      }
      else {
        *(int *)(this + 0x90) = *(int *)(this + 0x74) + 0xf4;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```
