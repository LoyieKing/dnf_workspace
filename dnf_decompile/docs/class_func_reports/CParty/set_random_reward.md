# set_random_reward

`_ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE`

`CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859b8fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859b8fa  _ZN6CParty17set_random_rewardEN10QuickParty14RandomBuffTypeENS0_16RewardData_ParamERNS0_17RewardData_ResultE
#           CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param, QuickParty::RewardData_Result&)
# range [0x0859b8fa, 0x0859b991]
0859b8fa +0x00:  push   %ebp
0859b8fb +0x01:  mov    %esp,%ebp
0859b8fd +0x03:  push   %ebx
0859b8fe +0x04:  sub    $0x24,%esp
0859b901 +0x07:  mov    0x8(%ebp),%eax
0859b904 +0x0a:  mov    %eax,(%esp)
0859b907 +0x0d:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
0859b90c +0x12:  xor    $0x1,%eax
0859b90f +0x15:  test   %al,%al
0859b911 +0x17:  jne    0859b985 <+0x8b>
0859b913 +0x19:  mov    0x8(%ebp),%eax
0859b916 +0x1c:  mov    0x1ae8(%eax),%eax
0859b91c +0x22:  cmp    $0xb,%eax
0859b91f +0x25:  je     0859b988 <+0x8e>
0859b921 +0x27:  mov    0x8(%ebp),%eax
0859b924 +0x2a:  mov    0x1ae8(%eax),%eax
0859b92a +0x30:  cmp    0xc(%ebp),%eax
0859b92d +0x33:  jne    0859b98b <+0x91>
0859b92f +0x35:  mov    0xc(%ebp),%ebx
0859b932 +0x38:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0859b937 +0x3d:  mov    %eax,(%esp)
0859b93a +0x40:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0859b93f +0x45:  mov    %ebx,0x8(%esp)
0859b943 +0x49:  movl   $0x1,0x4(%esp)
0859b94b +0x51:  mov    %eax,(%esp)
0859b94e +0x54:  call   0826d8e2 <_ZN10QuickParty24CQuickPartyRewardManager22get_reward_type_objectENS_16ENUM_REWARD_TYPEEj>  ; QuickParty::CQuickPartyRewardManager::get_reward_type_object(QuickParty::ENUM_REWARD_TYPE, unsigned int)
0859b953 +0x59:  mov    %eax,-0xc(%ebp)
0859b956 +0x5c:  cmpl   $0x0,-0xc(%ebp)
0859b95a +0x60:  je     0859b98c <+0x92>
0859b95c +0x62:  mov    -0xc(%ebp),%eax
0859b95f +0x65:  mov    (%eax),%eax
0859b961 +0x67:  add    $0x4,%eax
0859b964 +0x6a:  mov    (%eax),%ecx
0859b966 +0x6c:  mov    0x18(%ebp),%eax
0859b969 +0x6f:  mov    %eax,0xc(%esp)
0859b96d +0x73:  mov    0x10(%ebp),%eax
0859b970 +0x76:  mov    0x14(%ebp),%edx
0859b973 +0x79:  mov    %eax,0x4(%esp)
0859b977 +0x7d:  mov    %edx,0x8(%esp)
0859b97b +0x81:  mov    -0xc(%ebp),%eax
0859b97e +0x84:  mov    %eax,(%esp)
0859b981 +0x87:  call   *%ecx
0859b983 +0x89:  jmp    0859b98c <+0x92>
0859b985 +0x8b:  nop
0859b986 +0x8c:  jmp    0859b98c <+0x92>
0859b988 +0x8e:  nop
0859b989 +0x8f:  jmp    0859b98c <+0x92>
0859b98b +0x91:  nop
0859b98c +0x92:  add    $0x24,%esp
0859b98f +0x95:  pop    %ebx
0859b990 +0x96:  pop    %ebp
0859b991 +0x97:  ret
```

## 反编译 C

```c
// CParty::set_random_reward @ 0x859b8fa

/* CParty::set_random_reward(QuickParty::RandomBuffType, QuickParty::RewardData_Param,
   QuickParty::RewardData_Result&) */

void CParty::set_random_reward
               (CParty *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               )

{
  char cVar1;
  CGameManager *this;
  CQuickPartyRewardManager *pCVar2;
  int *piVar3;
  
  cVar1 = is_quick_party(param_1);
  if (((cVar1 == '\x01') && (*(int *)(param_1 + 0x1ae8) != 0xb)) &&
     (*(int *)(param_1 + 0x1ae8) == param_2)) {
    this = (CGameManager *)G_CGameManager();
    pCVar2 = (CQuickPartyRewardManager *)CGameManager::GetQuickPartyRewardManager(this);
    piVar3 = (int *)QuickParty::CQuickPartyRewardManager::get_reward_type_object(pCVar2,1,param_2);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3,param_3,param_4,param_5);
    }
  }
  return;
}
```
