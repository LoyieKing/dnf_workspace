# compute_quest_basic_reward_gold

`_ZN5CUser31compute_quest_basic_reward_goldEP5Quest`

`CUser::compute_quest_basic_reward_gold(Quest*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866e5e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866e5e6  _ZN5CUser31compute_quest_basic_reward_goldEP5Quest
#           CUser::compute_quest_basic_reward_gold(Quest*)
# range [0x0866e5e6, 0x0866e7a7]
0866e5e6 +0x000:  push   %ebp
0866e5e7 +0x001:  mov    %esp,%ebp
0866e5e9 +0x003:  push   %ebx
0866e5ea +0x004:  sub    $0x34,%esp
0866e5ed +0x007:  mov    0xc(%ebp),%eax
0866e5f0 +0x00a:  mov    0xb8(%eax),%eax
0866e5f6 +0x010:  test   %eax,%eax
0866e5f8 +0x012:  je     0866e612 <+0x2c>
0866e5fa +0x014:  mov    0xc(%ebp),%eax
0866e5fd +0x017:  mov    0xb8(%eax),%eax
0866e603 +0x01d:  cmp    $0x19,%eax
0866e606 +0x020:  je     0866e612 <+0x2c>
0866e608 +0x022:  mov    $0x0,%eax
0866e60d +0x027:  jmp    0866e7a3 <+0x1bd>
0866e612 +0x02c:  mov    0xc(%ebp),%eax
0866e615 +0x02f:  lea    0xc4(%eax),%edx
0866e61b +0x035:  lea    -0x20(%ebp),%eax
0866e61e +0x038:  mov    %edx,0x4(%esp)
0866e622 +0x03c:  mov    %eax,(%esp)
0866e625 +0x03f:  call   083948c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24368>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24368
0866e62a +0x044:  sub    $0x4,%esp
0866e62d +0x047:  lea    -0x20(%ebp),%eax
0866e630 +0x04a:  mov    %eax,0x4(%esp)
0866e634 +0x04e:  lea    -0x24(%ebp),%eax
0866e637 +0x051:  mov    %eax,(%esp)
0866e63a +0x054:  call   083948ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2438c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2438c
0866e63f +0x059:  mov    0xc(%ebp),%eax
0866e642 +0x05c:  lea    0xc4(%eax),%edx
0866e648 +0x062:  lea    -0x1c(%ebp),%eax
0866e64b +0x065:  mov    %edx,0x4(%esp)
0866e64f +0x069:  mov    %eax,(%esp)
0866e652 +0x06c:  call   08394906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243a6
0866e657 +0x071:  sub    $0x4,%esp
0866e65a +0x074:  lea    -0x1c(%ebp),%eax
0866e65d +0x077:  mov    %eax,0x4(%esp)
0866e661 +0x07b:  lea    -0x28(%ebp),%eax
0866e664 +0x07e:  mov    %eax,(%esp)
0866e667 +0x081:  call   083948ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2438c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2438c
0866e66c +0x086:  jmp    0866e66f <+0x89>
0866e66e +0x088:  nop
0866e66f +0x089:  lea    -0x28(%ebp),%eax
0866e672 +0x08c:  mov    %eax,0x4(%esp)
0866e676 +0x090:  lea    -0x24(%ebp),%eax
0866e679 +0x093:  mov    %eax,(%esp)
0866e67c +0x096:  call   0869b233 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7a88>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7a88
0866e681 +0x09b:  test   %al,%al
0866e683 +0x09d:  je     0866e68f <+0xa9>
0866e685 +0x09f:  mov    $0x0,%eax
0866e68a +0x0a4:  jmp    0866e7a3 <+0x1bd>
0866e68f +0x0a9:  lea    -0x24(%ebp),%eax
0866e692 +0x0ac:  mov    %eax,(%esp)
0866e695 +0x0af:  call   0839496e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2440e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2440e
0866e69a +0x0b4:  mov    (%eax),%eax
0866e69c +0x0b6:  mov    %eax,-0xc(%ebp)
0866e69f +0x0b9:  cmpl   $0x0,-0xc(%ebp)
0866e6a3 +0x0bd:  je     0866e6d0 <+0xea>
0866e6a5 +0x0bf:  lea    -0x24(%ebp),%eax
0866e6a8 +0x0c2:  mov    %eax,(%esp)
0866e6ab +0x0c5:  call   08394958 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x243f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x243f8
0866e6b0 +0x0ca:  lea    -0x28(%ebp),%eax
0866e6b3 +0x0cd:  mov    %eax,0x4(%esp)
0866e6b7 +0x0d1:  lea    -0x24(%ebp),%eax
0866e6ba +0x0d4:  mov    %eax,(%esp)
0866e6bd +0x0d7:  call   0869b233 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7a88>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7a88
0866e6c2 +0x0dc:  test   %al,%al
0866e6c4 +0x0de:  je     0866e66e <+0x88>
0866e6c6 +0x0e0:  mov    $0x0,%eax
0866e6cb +0x0e5:  jmp    0866e7a3 <+0x1bd>
0866e6d0 +0x0ea:  nop
0866e6d1 +0x0eb:  mov    0x8(%ebp),%eax
0866e6d4 +0x0ee:  mov    %eax,(%esp)
0866e6d7 +0x0f1:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866e6dc +0x0f6:  mov    0xc(%ebp),%edx
0866e6df +0x0f9:  mov    0x20(%edx),%edx
0866e6e2 +0x0fc:  sub    %edx,%eax
0866e6e4 +0x0fe:  mov    %eax,-0x18(%ebp)
0866e6e7 +0x101:  movl   $0x64,-0x14(%ebp)
0866e6ee +0x108:  movl   $0x0,-0x10(%ebp)
0866e6f5 +0x10f:  mov    0xc(%ebp),%eax
0866e6f8 +0x112:  movzbl 0x130(%eax),%eax
0866e6ff +0x119:  xor    $0x1,%eax
0866e702 +0x11c:  test   %al,%al
0866e704 +0x11e:  je     0866e73c <+0x156>
0866e706 +0x120:  mov    -0x18(%ebp),%eax
0866e709 +0x123:  mov    %eax,0x4(%esp)
0866e70d +0x127:  mov    0x8(%ebp),%eax
0866e710 +0x12a:  mov    %eax,(%esp)
0866e713 +0x12d:  call   0866e3a8 <_ZN5CUser21compute_level_penaltyEi>  ; CUser::compute_level_penalty(int)
0866e718 +0x132:  mov    %eax,-0x14(%ebp)
0866e71b +0x135:  mov    0xc(%ebp),%eax
0866e71e +0x138:  mov    0x20(%eax),%ebx
0866e721 +0x13b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e726 +0x140:  add    $0x8cc8,%eax
0866e72b +0x145:  mov    %ebx,0x4(%esp)
0866e72f +0x149:  mov    %eax,(%esp)
0866e732 +0x14c:  call   08a6bda6 <_ZN20QuestParameterScript13getRewardGoldEi>  ; QuestParameterScript::getRewardGold(int)
0866e737 +0x151:  mov    %eax,-0x10(%ebp)
0866e73a +0x154:  jmp    0866e762 <+0x17c>
0866e73c +0x156:  mov    0x8(%ebp),%eax
0866e73f +0x159:  mov    %eax,(%esp)
0866e742 +0x15c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866e747 +0x161:  mov    %eax,%ebx
0866e749 +0x163:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866e74e +0x168:  add    $0x8cc8,%eax
0866e753 +0x16d:  mov    %ebx,0x4(%esp)
0866e757 +0x171:  mov    %eax,(%esp)
0866e75a +0x174:  call   08a6bda6 <_ZN20QuestParameterScript13getRewardGoldEi>  ; QuestParameterScript::getRewardGold(int)
0866e75f +0x179:  mov    %eax,-0x10(%ebp)
0866e762 +0x17c:  mov    -0x10(%ebp),%eax
0866e765 +0x17f:  mov    %eax,%ecx
0866e767 +0x181:  imul   -0x14(%ebp),%ecx
0866e76b +0x185:  mov    $0x51eb851f,%edx
0866e770 +0x18a:  mov    %ecx,%eax
0866e772 +0x18c:  imul   %edx
0866e774 +0x18e:  sar    $0x5,%edx
0866e777 +0x191:  mov    %ecx,%eax
0866e779 +0x193:  sar    $0x1f,%eax
0866e77c +0x196:  sub    %eax,%edx
0866e77e +0x198:  mov    0xc(%ebp),%eax
0866e781 +0x19b:  mov    0x104(%eax),%eax
0866e787 +0x1a1:  mov    %edx,%ecx
0866e789 +0x1a3:  imul   %eax,%ecx
0866e78c +0x1a6:  mov    $0x51eb851f,%edx
0866e791 +0x1ab:  mov    %ecx,%eax
0866e793 +0x1ad:  imul   %edx
0866e795 +0x1af:  sar    $0x5,%edx
0866e798 +0x1b2:  mov    %ecx,%eax
0866e79a +0x1b4:  sar    $0x1f,%eax
0866e79d +0x1b7:  mov    %edx,%ecx
0866e79f +0x1b9:  sub    %eax,%ecx
0866e7a1 +0x1bb:  mov    %ecx,%eax
0866e7a3 +0x1bd:  mov    -0x4(%ebp),%ebx
0866e7a6 +0x1c0:  leave
0866e7a7 +0x1c1:  ret
```

## 反编译 C

```c
// CUser::compute_quest_basic_reward_gold @ 0x866e5e6

/* CUser::compute_quest_basic_reward_gold(Quest*) */

int __thiscall CUser::compute_quest_basic_reward_gold(CUser *this,Quest *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_2c [4];
  __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
  local_28 [4];
  __normal_iterator local_24 [4];
  __normal_iterator local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(param_1 + 0xb8) == 0) || (*(int *)(param_1 + 0xb8) == 0x19)) {
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::begin();
    __gnu_cxx::
    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
    ::__normal_iterator<RewardItemInfo*>(local_28,local_24);
    std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::end();
    __gnu_cxx::
    __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
    ::__normal_iterator<RewardItemInfo*>(local_2c,local_20);
    do {
      bVar1 = __gnu_cxx::operator==(local_28,local_2c);
      if (bVar1) {
        return 0;
      }
      piVar2 = (int *)__gnu_cxx::
                      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
                      ::operator->(local_28);
      local_10 = *piVar2;
      if (local_10 == 0) {
        local_1c = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        local_1c = local_1c - *(int *)(param_1 + 0x20);
        local_18 = 100;
        local_14 = 0;
        if (param_1[0x130] == (Quest)0x1) {
          iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
          iVar3 = G_CDataManager();
          local_14 = QuestParameterScript::getRewardGold
                               ((QuestParameterScript *)(iVar3 + 0x8cc8),iVar4);
        }
        else {
          local_18 = compute_level_penalty(this,local_1c);
          iVar4 = *(int *)(param_1 + 0x20);
          iVar3 = G_CDataManager();
          local_14 = QuestParameterScript::getRewardGold
                               ((QuestParameterScript *)(iVar3 + 0x8cc8),iVar4);
        }
        return (((local_14 * local_18) / 100) * *(int *)(param_1 + 0x104)) / 100;
      }
      __gnu_cxx::
      __normal_iterator<RewardItemInfo_const*,std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>>
      ::operator++(local_28);
      bVar1 = __gnu_cxx::operator==(local_28,local_2c);
    } while (!bVar1);
  }
  return 0;
}
```
