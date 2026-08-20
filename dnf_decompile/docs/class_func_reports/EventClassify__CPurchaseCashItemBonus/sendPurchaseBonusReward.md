# sendPurchaseBonusReward

`_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri`

`EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CPurchaseCashItemBonus` | `0x0810fb34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810fb34  _ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri
#           EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)
# range [0x0810fb34, 0x0810fcb1]
0810fb34 +0x000:  push   %ebp
0810fb35 +0x001:  mov    %esp,%ebp
0810fb37 +0x003:  push   %esi
0810fb38 +0x004:  push   %ebx
0810fb39 +0x005:  sub    $0x40,%esp
0810fb3c +0x008:  cmpl   $0x0,0xc(%ebp)
0810fb40 +0x00c:  jne    0810fb78 <+0x44>
0810fb42 +0x00e:  movl   $"CPurchaseCashItemBonus::sendPurchaseBonusReward(pUser(NULL))",0x10(%esp)
0810fb4a +0x016:  movl   $0x755,0xc(%esp)
0810fb52 +0x01e:  movl   $&_ZZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
0810fb5a +0x026:  movl   $"EventClassify.cpp",0x4(%esp)
0810fb62 +0x02e:  movl   $0x1,(%esp)
0810fb69 +0x035:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810fb6e +0x03a:  mov    $0x0,%eax
0810fb73 +0x03f:  jmp    0810fca7 <+0x173>
0810fb78 +0x044:  movl   $0x0,-0x10(%ebp)
0810fb7f +0x04b:  movb   $0x1,-0x9(%ebp)
0810fb83 +0x04f:  mov    0x8(%ebp),%eax
0810fb86 +0x052:  mov    0x1c(%eax),%eax
0810fb89 +0x055:  lea    0x24(%eax),%edx
0810fb8c +0x058:  lea    -0x1c(%ebp),%eax
0810fb8f +0x05b:  mov    %edx,0x4(%esp)
0810fb93 +0x05f:  mov    %eax,(%esp)
0810fb96 +0x062:  call   08111dd4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x12e6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x12e6
0810fb9b +0x067:  sub    $0x4,%esp
0810fb9e +0x06a:  jmp    0810fc6e <+0x13a>
0810fba3 +0x06f:  lea    -0x1c(%ebp),%eax
0810fba6 +0x072:  mov    %eax,(%esp)
0810fba9 +0x075:  call   08111e60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1372>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1372
0810fbae +0x07a:  mov    0x10(%ebp),%edx
0810fbb1 +0x07d:  mov    %edx,0x8(%esp)
0810fbb5 +0x081:  mov    %eax,0x4(%esp)
0810fbb9 +0x085:  mov    0x8(%ebp),%eax
0810fbbc +0x088:  mov    %eax,(%esp)
0810fbbf +0x08b:  call   0810fae0 <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi>  ; EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward(PurchaseCashItemBonusScript::PurchaseBonusRule&, int)
0810fbc4 +0x090:  test   %al,%al
0810fbc6 +0x092:  je     0810fc63 <+0x12f>
0810fbcc +0x098:  lea    -0x1c(%ebp),%eax
0810fbcf +0x09b:  mov    %eax,(%esp)
0810fbd2 +0x09e:  call   08111e60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1372>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1372
0810fbd7 +0x0a3:  add    $0xc,%eax
0810fbda +0x0a6:  movl   $0x1,0xc(%esp)
0810fbe2 +0x0ae:  mov    %eax,0x8(%esp)
0810fbe6 +0x0b2:  mov    0xc(%ebp),%eax
0810fbe9 +0x0b5:  mov    %eax,0x4(%esp)
0810fbed +0x0b9:  lea    -0x15(%ebp),%eax
0810fbf0 +0x0bc:  mov    %eax,(%esp)
0810fbf3 +0x0bf:  call   0810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>  ; EventClassify::CEventActionMng::process_action_send_mail(CUser*, Action_SendMail&, bool)
0810fbf8 +0x0c4:  mov    %eax,-0x10(%ebp)
0810fbfb +0x0c7:  cmpl   $0x0,-0x10(%ebp)
0810fbff +0x0cb:  je     0810fc63 <+0x12f>
0810fc01 +0x0cd:  lea    -0x1c(%ebp),%eax
0810fc04 +0x0d0:  mov    %eax,(%esp)
0810fc07 +0x0d3:  call   08111e60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1372>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1372
0810fc0c +0x0d8:  mov    0x2c(%eax),%esi
0810fc0f +0x0db:  mov    0xc(%ebp),%eax
0810fc12 +0x0de:  mov    %eax,(%esp)
0810fc15 +0x0e1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0810fc1a +0x0e6:  mov    %eax,%ebx
0810fc1c +0x0e8:  mov    0xc(%ebp),%eax
0810fc1f +0x0eb:  mov    %eax,(%esp)
0810fc22 +0x0ee:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0810fc27 +0x0f3:  mov    %esi,0x1c(%esp)
0810fc2b +0x0f7:  mov    %ebx,0x18(%esp)
0810fc2f +0x0fb:  mov    %eax,0x14(%esp)
0810fc33 +0x0ff:  movl   $"CPurchaseCashItemBonus::sendPurchaseBonusReward(m_id:%d, charac_no:%d, reward:%d)",0x10(%esp)
0810fc3b +0x107:  movl   $0x763,0xc(%esp)
0810fc43 +0x10f:  movl   $&_ZZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
0810fc4b +0x117:  movl   $"EventClassify.cpp",0x4(%esp)
0810fc53 +0x11f:  movl   $0x1,(%esp)
0810fc5a +0x126:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0810fc5f +0x12b:  movb   $0x0,-0x9(%ebp)
0810fc63 +0x12f:  lea    -0x1c(%ebp),%eax
0810fc66 +0x132:  mov    %eax,(%esp)
0810fc69 +0x135:  call   08111e4a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x135c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x135c
0810fc6e +0x13a:  mov    0x8(%ebp),%eax
0810fc71 +0x13d:  mov    0x1c(%eax),%eax
0810fc74 +0x140:  lea    0x24(%eax),%edx
0810fc77 +0x143:  lea    -0x14(%ebp),%eax
0810fc7a +0x146:  mov    %edx,0x4(%esp)
0810fc7e +0x14a:  mov    %eax,(%esp)
0810fc81 +0x14d:  call   08111df8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x130a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x130a
0810fc86 +0x152:  sub    $0x4,%esp
0810fc89 +0x155:  lea    -0x14(%ebp),%eax
0810fc8c +0x158:  mov    %eax,0x4(%esp)
0810fc90 +0x15c:  lea    -0x1c(%ebp),%eax
0810fc93 +0x15f:  mov    %eax,(%esp)
0810fc96 +0x162:  call   08111e1e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1330>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1330
0810fc9b +0x167:  test   %al,%al
0810fc9d +0x169:  jne    0810fba3 <+0x6f>
0810fca3 +0x16f:  movzbl -0x9(%ebp),%eax
0810fca7 +0x173:  lea    -0x8(%ebp),%esp
0810fcaa +0x176:  add    $0x0,%esp
0810fcad +0x179:  pop    %ebx
0810fcae +0x17a:  pop    %esi
0810fcaf +0x17b:  pop    %ebp
0810fcb0 +0x17c:  ret
0810fcb1 +0x17d:  nop
```

## 反编译 C

```c
// EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward @ 0x810fb34

/* EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int) */

undefined1 __thiscall
EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward
          (CPurchaseCashItemBonus *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  PurchaseBonusRule *pPVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
  local_20 [7];
  CEventActionMng local_19;
  __normal_iterator local_18 [4];
  int local_14;
  undefined1 local_d;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"EventClassify.cpp",
               "bool EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)",
               0x755,"CPurchaseCashItemBonus::sendPurchaseBonusReward(pUser(NULL))");
    local_d = 0;
  }
  else {
    local_14 = 0;
    local_d = 1;
    std::
    vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>
      ::end();
      bVar3 = __gnu_cxx::operator!=(local_20,local_18);
      if (!bVar3) break;
      pPVar4 = (PurchaseBonusRule *)
               __gnu_cxx::
               __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
               ::operator->(local_20);
      cVar2 = verifyGiveBonusReward(this,pPVar4,param_2);
      if (cVar2 != '\0') {
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
                ::operator->(local_20);
        local_14 = CEventActionMng::process_action_send_mail
                             (&local_19,param_1,(Action_SendMail *)(iVar5 + 0xc),true);
        if (local_14 != 0) {
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
                  ::operator->(local_20);
          uVar1 = *(undefined4 *)(iVar5 + 0x2c);
          uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar7 = CUser::get_acc_id(param_1);
          LogManager::logFormat
                    (1,"EventClassify.cpp",
                     "bool EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)"
                     ,0x763,
                     "CPurchaseCashItemBonus::sendPurchaseBonusReward(m_id:%d, charac_no:%d, reward:%d)"
                     ,uVar7,uVar6,uVar1);
          local_d = 0;
        }
      }
      __gnu_cxx::
      __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
      ::operator++(local_20);
    }
  }
  return local_d;
}
```
