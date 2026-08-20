# set_basic_reward

`_ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE`

`CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b992` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b992  _ZN6CParty16set_basic_rewardEN10QuickParty15BasicRewardTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE
#           CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0859b992, 0x0859ba97]
0859b992 +0x000:  push   %ebp
0859b993 +0x001:  mov    %esp,%ebp
0859b995 +0x003:  push   %ebx
0859b996 +0x004:  sub    $0x24,%esp
0859b999 +0x007:  mov    0x8(%ebp),%eax
0859b99c +0x00a:  mov    %eax,(%esp)
0859b99f +0x00d:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
0859b9a4 +0x012:  xor    $0x1,%eax
0859b9a7 +0x015:  test   %al,%al
0859b9a9 +0x017:  jne    0859ba8f <+0xfd>
0859b9af +0x01d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859b9b4 +0x022:  mov    %eax,(%esp)
0859b9b7 +0x025:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0859b9bc +0x02a:  mov    %eax,(%esp)
0859b9bf +0x02d:  call   0826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>  ; QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
0859b9c4 +0x032:  lea    -0x10(%ebp),%edx
0859b9c7 +0x035:  mov    %eax,0x4(%esp)
0859b9cb +0x039:  mov    %edx,(%esp)
0859b9ce +0x03c:  call   080cd34e <_GLOBAL__I__ZN10BingoEventC2Ev+0x219b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x219b
0859b9d3 +0x041:  sub    $0x4,%esp
0859b9d6 +0x044:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859b9db +0x049:  mov    %eax,(%esp)
0859b9de +0x04c:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0859b9e3 +0x051:  mov    %eax,(%esp)
0859b9e6 +0x054:  call   0826d896 <_ZN10QuickParty24CQuickPartyRewardManager20get_dungeon_idx_listEv>  ; QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list()
0859b9eb +0x059:  lea    -0x14(%ebp),%edx
0859b9ee +0x05c:  mov    %eax,0x4(%esp)
0859b9f2 +0x060:  mov    %edx,(%esp)
0859b9f5 +0x063:  call   080cd37a <_GLOBAL__I__ZN10BingoEventC2Ev+0x21c7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x21c7
0859b9fa +0x068:  sub    $0x4,%esp
0859b9fd +0x06b:  jmp    0859ba23 <+0x91>
0859b9ff +0x06d:  mov    0x14(%ebp),%ebx
0859ba02 +0x070:  lea    -0x10(%ebp),%eax
0859ba05 +0x073:  mov    %eax,(%esp)
0859ba08 +0x076:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0859ba0d +0x07b:  mov    (%eax),%eax
0859ba0f +0x07d:  cmp    %eax,%ebx
0859ba11 +0x07f:  sete   %al
0859ba14 +0x082:  test   %al,%al
0859ba16 +0x084:  jne    0859ba92 <+0x100>
0859ba18 +0x086:  lea    -0x10(%ebp),%eax
0859ba1b +0x089:  mov    %eax,(%esp)
0859ba1e +0x08c:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
0859ba23 +0x091:  lea    -0x14(%ebp),%eax
0859ba26 +0x094:  mov    %eax,0x4(%esp)
0859ba2a +0x098:  lea    -0x10(%ebp),%eax
0859ba2d +0x09b:  mov    %eax,(%esp)
0859ba30 +0x09e:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
0859ba35 +0x0a3:  test   %al,%al
0859ba37 +0x0a5:  jne    0859b9ff <+0x6d>
0859ba39 +0x0a7:  mov    0xc(%ebp),%ebx
0859ba3c +0x0aa:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859ba41 +0x0af:  mov    %eax,(%esp)
0859ba44 +0x0b2:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0859ba49 +0x0b7:  mov    %ebx,0x8(%esp)
0859ba4d +0x0bb:  movl   $0x0,0x4(%esp)
0859ba55 +0x0c3:  mov    %eax,(%esp)
0859ba58 +0x0c6:  call   0826d8e2 <_ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj>  ; QuickParty::CQuickPartyRewardManager::get_reward_type_object(QuickParty::ENUM_REWARD_TYPE, unsigned int)
0859ba5d +0x0cb:  mov    %eax,-0xc(%ebp)
0859ba60 +0x0ce:  cmpl   $0x0,-0xc(%ebp)
0859ba64 +0x0d2:  je     0859ba93 <+0x101>
0859ba66 +0x0d4:  mov    -0xc(%ebp),%eax
0859ba69 +0x0d7:  mov    (%eax),%eax
0859ba6b +0x0d9:  add    $0x4,%eax
0859ba6e +0x0dc:  mov    (%eax),%ecx
0859ba70 +0x0de:  mov    0x18(%ebp),%eax
0859ba73 +0x0e1:  mov    %eax,0xc(%esp)
0859ba77 +0x0e5:  mov    0x10(%ebp),%eax
0859ba7a +0x0e8:  mov    0x14(%ebp),%edx
0859ba7d +0x0eb:  mov    %eax,0x4(%esp)
0859ba81 +0x0ef:  mov    %edx,0x8(%esp)
0859ba85 +0x0f3:  mov    -0xc(%ebp),%eax
0859ba88 +0x0f6:  mov    %eax,(%esp)
0859ba8b +0x0f9:  call   *%ecx
0859ba8d +0x0fb:  jmp    0859ba93 <+0x101>
0859ba8f +0x0fd:  nop
0859ba90 +0x0fe:  jmp    0859ba93 <+0x101>
0859ba92 +0x100:  nop
0859ba93 +0x101:  mov    -0x4(%ebp),%ebx
0859ba96 +0x104:  leave
0859ba97 +0x105:  ret
```

## 反编译 C

```c
// CParty::set_basic_reward @ 0x859b992

/* CParty::set_basic_reward(QuickParty::BasicRewardType, QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void CParty::set_basic_reward
               (CParty *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
               )

{
  char cVar1;
  bool bVar2;
  CGameManager *pCVar3;
  CQuickPartyRewardManager *pCVar4;
  int *piVar5;
  __normal_iterator local_18 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_14 [4];
  int *local_10;
  
  cVar1 = is_quick_party(param_1);
  if (cVar1 == '\x01') {
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list(pCVar4);
    std::vector<int,std::allocator<int>>::begin();
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    QuickParty::CQuickPartyRewardManager::get_dungeon_idx_list(pCVar4);
    std::vector<int,std::allocator<int>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_14,local_18), bVar2) {
      piVar5 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_14);
      if (param_4 == *piVar5) {
        return;
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_14);
    }
    pCVar3 = (CGameManager *)G_CGameManager();
    pCVar4 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(pCVar3);
    local_10 = (int *)QuickParty::CQuickPartyRewardManager::get_reward_type_object(pCVar4,0,param_2)
    ;
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 4))(local_10,param_3,param_4,param_5);
    }
  }
  return;
}
```
