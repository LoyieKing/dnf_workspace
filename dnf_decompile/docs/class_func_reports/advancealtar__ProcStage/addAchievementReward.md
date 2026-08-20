# addAchievementReward

`_ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE`

`advancealtar::ProcStage::addAchievementReward(std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&)`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812f3ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812f3ae  _ZN12advancealtar9ProcStage20addAchievementRewardERSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE
#           advancealtar::ProcStage::addAchievementReward(std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&)
# range [0x0812f3ae, 0x0812f479]
0812f3ae +0x00:  push   %ebp
0812f3af +0x01:  mov    %esp,%ebp
0812f3b1 +0x03:  sub    $0x38,%esp
0812f3b4 +0x06:  mov    0x8(%ebp),%eax
0812f3b7 +0x09:  mov    (%eax),%eax
0812f3b9 +0x0b:  mov    %eax,(%esp)
0812f3bc +0x0e:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812f3c1 +0x13:  mov    %eax,-0x1c(%ebp)
0812f3c4 +0x16:  cmpl   $0x0,-0x1c(%ebp)
0812f3c8 +0x1a:  je     0812f476 <+0xc8>
0812f3ce +0x20:  movl   $0xc,0x8(%esp)
0812f3d6 +0x28:  movl   $0x0,0x4(%esp)
0812f3de +0x30:  lea    -0x28(%ebp),%eax
0812f3e1 +0x33:  mov    %eax,(%esp)
0812f3e4 +0x36:  call   0807dcc0 <_init+0x5b8>
0812f3e9 +0x3b:  mov    -0x1c(%ebp),%eax
0812f3ec +0x3e:  lea    0x8df60(%eax),%edx
0812f3f2 +0x44:  lea    -0x28(%ebp),%eax
0812f3f5 +0x47:  mov    %eax,0x4(%esp)
0812f3f9 +0x4b:  mov    %edx,(%esp)
0812f3fc +0x4e:  call   081318e2 <_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi>  ; advancealtar::CharacAdvanceAltarManager::getClearStageSummary(int*) const
0812f401 +0x53:  movl   $0x0,-0x18(%ebp)
0812f408 +0x5a:  jmp    0812f469 <+0xbb>
0812f40a +0x5c:  mov    -0x18(%ebp),%eax
0812f40d +0x5f:  mov    %eax,-0x14(%ebp)
0812f410 +0x62:  mov    -0x14(%ebp),%eax
0812f413 +0x65:  mov    -0x28(%ebp,%eax,4),%eax
0812f417 +0x69:  mov    %eax,-0x10(%ebp)
0812f41a +0x6c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812f41f +0x71:  lea    0x634c(%eax),%edx
0812f425 +0x77:  mov    -0x10(%ebp),%eax
0812f428 +0x7a:  mov    %eax,0x8(%esp)
0812f42c +0x7e:  mov    -0x14(%ebp),%eax
0812f42f +0x81:  mov    %eax,0x4(%esp)
0812f433 +0x85:  mov    %edx,(%esp)
0812f436 +0x88:  call   0889b5a8 <_ZNK12advancealtar15RewardParameter24getAchievementRewardDataENS_15StageDifficulty1TEi>  ; advancealtar::RewardParameter::getAchievementRewardData(advancealtar::StageDifficulty::T, int) const
0812f43b +0x8d:  mov    %eax,-0xc(%ebp)
0812f43e +0x90:  cmpl   $0x0,-0xc(%ebp)
0812f442 +0x94:  je     0812f465 <+0xb7>
0812f444 +0x96:  mov    -0xc(%ebp),%eax
0812f447 +0x99:  mov    (%eax),%eax
0812f449 +0x9b:  mov    -0x1c(%ebp),%edx
0812f44c +0x9e:  lea    0x8df60(%edx),%ecx
0812f452 +0xa4:  mov    0xc(%ebp),%edx
0812f455 +0xa7:  mov    %edx,0x8(%esp)
0812f459 +0xab:  mov    %eax,0x4(%esp)
0812f45d +0xaf:  mov    %ecx,(%esp)
0812f460 +0xb2:  call   08132abe <_ZN12advancealtar25CharacAdvanceAltarManager13addRewardDataEiRSt3mapIiNS_7_RewardESt4lessIiESaISt4pairIKiS2_EEE>  ; advancealtar::CharacAdvanceAltarManager::addRewardData(int, std::map<int, advancealtar::_Reward, std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&)
0812f465 +0xb7:  addl   $0x1,-0x18(%ebp)
0812f469 +0xbb:  cmpl   $0x2,-0x18(%ebp)
0812f46d +0xbf:  setle  %al
0812f470 +0xc2:  test   %al,%al
0812f472 +0xc4:  jne    0812f40a <+0x5c>
0812f474 +0xc6:  jmp    0812f477 <+0xc9>
0812f476 +0xc8:  nop
0812f477 +0xc9:  leave
0812f478 +0xca:  ret
0812f479 +0xcb:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::addAchievementReward @ 0x812f3ae

/* advancealtar::ProcStage::addAchievementReward(std::map<int, advancealtar::_Reward,
   std::less<int>, std::allocator<std::pair<int const, advancealtar::_Reward> > >&) */

void __thiscall advancealtar::ProcStage::addAchievementReward(ProcStage *this,map *param_1)

{
  int iVar1;
  int local_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  local_2c[3] = CharacData::getUser(*(CharacData **)this);
  if (local_2c[3] != 0) {
    memset(local_2c,0,0xc);
    CharacAdvanceAltarManager::getClearStageSummary
              ((CharacAdvanceAltarManager *)(local_2c[3] + 0x8df60),local_2c);
    for (local_1c = 0; local_1c < 3; local_1c = local_1c + 1) {
      local_18 = local_1c;
      local_14 = local_2c[local_1c];
      iVar1 = G_CDataManager();
      local_10 = (int *)RewardParameter::getAchievementRewardData
                                  ((RewardParameter *)(iVar1 + 0x634c),local_18,local_14);
      if (local_10 != (int *)0x0) {
        CharacAdvanceAltarManager::addRewardData
                  ((CharacAdvanceAltarManager *)(local_2c[3] + 0x8df60),*local_10,param_1);
      }
    }
  }
  return;
}
```
