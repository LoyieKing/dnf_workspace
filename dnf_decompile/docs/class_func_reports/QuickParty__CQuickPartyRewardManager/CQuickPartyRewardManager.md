# CQuickPartyRewardManager

`_ZN10QuickParty24CQuickPartyRewardManagerC1Ev`

`QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager()`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartyRewardManager` | `0x0826d688` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826d688  _ZN10QuickParty24CQuickPartyRewardManagerC1Ev
#           QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager()
# range [0x0826d688, 0x0826d69b]
0826d688 +0x00:  push   %ebp
0826d689 +0x01:  mov    %esp,%ebp
0826d68b +0x03:  sub    $0x18,%esp
0826d68e +0x06:  mov    0x8(%ebp),%eax
0826d691 +0x09:  mov    %eax,(%esp)
0826d694 +0x0c:  call   0826dad4 <_GLOBAL__I__ZN10QuickParty14RewardCardGold7processENS_16RewardData_ParamERNS_17RewardData_ResultE+0x100>  ; global constructors keyed to QuickParty::RewardCardGold::process(QuickParty::RewardData_Param, QuickParty::RewardData_Result&)+0x100
0826d699 +0x11:  leave
0826d69a +0x12:  ret
0826d69b +0x13:  nop
```

## 反编译 C

```c
// QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager @ 0x826d688

/* QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager() */

void __thiscall
QuickParty::CQuickPartyRewardManager::CQuickPartyRewardManager(CQuickPartyRewardManager *this)

{
  QuickPartyData::QuickPartyData((QuickPartyData *)this);
  return;
}
```
