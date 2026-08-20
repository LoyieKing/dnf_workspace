# clearStage

`_ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_`

`advancealtar::CharacAdvanceAltarManager::clearStage(int, advancealtar::StageDifficulty::T, advancealtar::StageType::T, int, int&, bool&, bool&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813175a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813175a  _ZN12advancealtar25CharacAdvanceAltarManager10clearStageEiNS_15StageDifficulty1TENS_9StageType1TEiRiRbS6_
#           advancealtar::CharacAdvanceAltarManager::clearStage(int, advancealtar::StageDifficulty::T, advancealtar::StageType::T, int, int&, bool&, bool&)
# range [0x0813175a, 0x081318e1]
0813175a +0x000:  push   %ebp
0813175b +0x001:  mov    %esp,%ebp
0813175d +0x003:  push   %ebx
0813175e +0x004:  sub    $0x24,%esp
08131761 +0x007:  mov    0x20(%ebp),%eax
08131764 +0x00a:  movb   $0x0,(%eax)
08131767 +0x00d:  mov    0x8(%ebp),%eax
0813176a +0x010:  mov    (%eax),%eax
0813176c +0x012:  mov    %eax,-0xc(%ebp)
0813176f +0x015:  cmpl   $0x0,-0xc(%ebp)
08131773 +0x019:  jne    0813177f <+0x25>
08131775 +0x01b:  mov    $0x0,%eax
0813177a +0x020:  jmp    081318dd <+0x183>
0813177f +0x025:  mov    0xc(%ebp),%ebx
08131782 +0x028:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08131787 +0x02d:  add    $0x8798,%eax
0813178c +0x032:  mov    %ebx,0x4(%esp)
08131790 +0x036:  mov    %eax,(%esp)
08131793 +0x039:  call   08364df6 <_ZNK12StageMapList7isExistEi>  ; StageMapList::isExist(int) const
08131798 +0x03e:  xor    $0x1,%eax
0813179b +0x041:  test   %al,%al
0813179d +0x043:  je     081317a9 <+0x4f>
0813179f +0x045:  mov    $0x0,%eax
081317a4 +0x04a:  jmp    081318dd <+0x183>
081317a9 +0x04f:  mov    -0xc(%ebp),%eax
081317ac +0x052:  lea    0x24(%eax),%ecx
081317af +0x055:  lea    -0x14(%ebp),%eax
081317b2 +0x058:  lea    0xc(%ebp),%edx
081317b5 +0x05b:  mov    %edx,0x8(%esp)
081317b9 +0x05f:  mov    %ecx,0x4(%esp)
081317bd +0x063:  mov    %eax,(%esp)
081317c0 +0x066:  call   08135e2c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a33>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a33
081317c5 +0x06b:  sub    $0x4,%esp
081317c8 +0x06e:  mov    -0xc(%ebp),%eax
081317cb +0x071:  lea    0x24(%eax),%edx
081317ce +0x074:  lea    -0x10(%ebp),%eax
081317d1 +0x077:  mov    %edx,0x4(%esp)
081317d5 +0x07b:  mov    %eax,(%esp)
081317d8 +0x07e:  call   08135e68 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a6f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a6f
081317dd +0x083:  sub    $0x4,%esp
081317e0 +0x086:  lea    -0x10(%ebp),%eax
081317e3 +0x089:  mov    %eax,0x4(%esp)
081317e7 +0x08d:  lea    -0x14(%ebp),%eax
081317ea +0x090:  mov    %eax,(%esp)
081317ed +0x093:  call   08135eb6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1abd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1abd
081317f2 +0x098:  test   %al,%al
081317f4 +0x09a:  je     08131800 <+0xa6>
081317f6 +0x09c:  mov    $0x0,%eax
081317fb +0x0a1:  jmp    081318dd <+0x183>
08131800 +0x0a6:  cmpl   $0x1,0x14(%ebp)
08131804 +0x0aa:  jne    08131839 <+0xdf>
08131806 +0x0ac:  mov    -0xc(%ebp),%eax
08131809 +0x0af:  movzwl 0x18(%eax),%eax
0813180d +0x0b3:  cwtl
0813180e +0x0b4:  cmp    0x18(%ebp),%eax
08131811 +0x0b7:  jge    0813182f <+0xd5>
08131813 +0x0b9:  mov    0x18(%ebp),%eax
08131816 +0x0bc:  mov    %eax,%edx
08131818 +0x0be:  mov    -0xc(%ebp),%eax
0813181b +0x0c1:  mov    %dx,0x18(%eax)
0813181f +0x0c5:  mov    0x24(%ebp),%eax
08131822 +0x0c8:  movb   $0x1,(%eax)
08131825 +0x0cb:  mov    -0xc(%ebp),%eax
08131828 +0x0ce:  movb   $0x1,0xcc(%eax)
0813182f +0x0d5:  mov    $0x1,%eax
08131834 +0x0da:  jmp    081318dd <+0x183>
08131839 +0x0df:  lea    -0x14(%ebp),%eax
0813183c +0x0e2:  mov    %eax,(%esp)
0813183f +0x0e5:  call   08135eca <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ad1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ad1
08131844 +0x0ea:  mov    0x8(%eax),%eax
08131847 +0x0ed:  cmp    $0xffffffff,%eax
0813184a +0x0f0:  sete   %al
0813184d +0x0f3:  test   %al,%al
0813184f +0x0f5:  je     08131857 <+0xfd>
08131851 +0x0f7:  mov    0x20(%ebp),%eax
08131854 +0x0fa:  movb   $0x1,(%eax)
08131857 +0x0fd:  lea    -0x14(%ebp),%eax
0813185a +0x100:  mov    %eax,(%esp)
0813185d +0x103:  call   08135eca <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ad1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ad1
08131862 +0x108:  mov    0x8(%eax),%eax
08131865 +0x10b:  mov    %eax,%edx
08131867 +0x10d:  mov    0x10(%ebp),%eax
0813186a +0x110:  cmp    %eax,%edx
0813186c +0x112:  setl   %al
0813186f +0x115:  test   %al,%al
08131871 +0x117:  je     081318d8 <+0x17e>
08131873 +0x119:  lea    -0x14(%ebp),%eax
08131876 +0x11c:  mov    %eax,(%esp)
08131879 +0x11f:  call   08135eca <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ad1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ad1
0813187e +0x124:  mov    %eax,%ebx
08131880 +0x126:  lea    -0x14(%ebp),%eax
08131883 +0x129:  mov    %eax,(%esp)
08131886 +0x12c:  call   08135eca <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ad1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ad1
0813188b +0x131:  mov    0x8(%eax),%eax
0813188e +0x134:  mov    %eax,(%esp)
08131891 +0x137:  call   0889900a <_ZN12advancealtar15StageDifficulty17getNextDifficultyENS0_1TE>  ; advancealtar::StageDifficulty::getNextDifficulty(advancealtar::StageDifficulty::T)
08131896 +0x13c:  mov    %eax,0x8(%ebx)
08131899 +0x13f:  mov    0x10(%ebp),%eax
0813189c +0x142:  mov    &_ZN12advancealtarL11kRewardStarE(,%eax,4),%edx
081318a3 +0x149:  mov    0x1c(%ebp),%eax
081318a6 +0x14c:  mov    %edx,(%eax)
081318a8 +0x14e:  mov    -0xc(%ebp),%eax
081318ab +0x151:  mov    0xc(%eax),%edx
081318ae +0x154:  mov    0x1c(%ebp),%eax
081318b1 +0x157:  mov    (%eax),%eax
081318b3 +0x159:  add    %eax,%edx
081318b5 +0x15b:  mov    -0xc(%ebp),%eax
081318b8 +0x15e:  mov    %edx,0xc(%eax)
081318bb +0x161:  mov    -0xc(%ebp),%eax
081318be +0x164:  mov    0x14(%eax),%edx
081318c1 +0x167:  mov    0x1c(%ebp),%eax
081318c4 +0x16a:  mov    (%eax),%eax
081318c6 +0x16c:  add    %eax,%edx
081318c8 +0x16e:  mov    -0xc(%ebp),%eax
081318cb +0x171:  mov    %edx,0x14(%eax)
081318ce +0x174:  mov    -0xc(%ebp),%eax
081318d1 +0x177:  movb   $0x1,0xcc(%eax)
081318d8 +0x17e:  mov    $0x1,%eax
081318dd +0x183:  mov    -0x4(%ebp),%ebx
081318e0 +0x186:  leave
081318e1 +0x187:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::clearStage @ 0x813175a

/* advancealtar::CharacAdvanceAltarManager::clearStage(int, advancealtar::StageDifficulty::T,
   advancealtar::StageType::T, int, int&, bool&, bool&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::clearStage
          (CharacAdvanceAltarManager *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int *param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>> local_18 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_14 [4];
  int local_10;
  
  *param_7 = 0;
  local_10 = *(int *)this;
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = G_CDataManager();
    cVar1 = StageMapList::isExist(iVar3 + 0x8798);
    if (cVar1 == '\x01') {
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::find((int *)local_18);
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator==
                        (local_18,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        if (param_4 == 1) {
          if (*(short *)(local_10 + 0x18) < param_5) {
            *(short *)(local_10 + 0x18) = (short)param_5;
            *param_8 = 1;
            *(undefined1 *)(local_10 + 0xcc) = 1;
          }
          uVar2 = 1;
        }
        else {
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                            (local_18);
          if (*(int *)(iVar3 + 8) == -1) {
            *param_7 = 1;
          }
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                            (local_18);
          if (*(int *)(iVar3 + 8) < param_3) {
            iVar3 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                              (local_18);
            iVar4 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                              (local_18);
            uVar2 = StageDifficulty::getNextDifficulty(*(undefined4 *)(iVar4 + 8));
            *(undefined4 *)(iVar3 + 8) = uVar2;
            *param_6 = *(int *)(advancealtar::kRewardStar + param_3 * 4);
            *(int *)(local_10 + 0xc) = *(int *)(local_10 + 0xc) + *param_6;
            *(int *)(local_10 + 0x14) = *(int *)(local_10 + 0x14) + *param_6;
            *(undefined1 *)(local_10 + 0xcc) = 1;
          }
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
