# gainMoneyFromHackUser

`_ZN5CUser21gainMoneyFromHackUserEjyjy`

`CUser::gainMoneyFromHackUser(unsigned int, unsigned long long, unsigned int, unsigned long long)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867fbba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867fbba  _ZN5CUser21gainMoneyFromHackUserEjyjy
#           CUser::gainMoneyFromHackUser(unsigned int, unsigned long long, unsigned int, unsigned long long)
# range [0x0867fbba, 0x0867fd09]
0867fbba +0x000:  push   %ebp
0867fbbb +0x001:  mov    %esp,%ebp
0867fbbd +0x003:  push   %esi
0867fbbe +0x004:  push   %ebx
0867fbbf +0x005:  sub    $0x30,%esp
0867fbc2 +0x008:  mov    0x10(%ebp),%eax
0867fbc5 +0x00b:  mov    %eax,-0x10(%ebp)
0867fbc8 +0x00e:  mov    0x14(%ebp),%eax
0867fbcb +0x011:  mov    %eax,-0xc(%ebp)
0867fbce +0x014:  mov    0x1c(%ebp),%eax
0867fbd1 +0x017:  mov    %eax,-0x18(%ebp)
0867fbd4 +0x01a:  mov    0x20(%ebp),%eax
0867fbd7 +0x01d:  mov    %eax,-0x14(%ebp)
0867fbda +0x020:  mov    0x8(%ebp),%eax
0867fbdd +0x023:  mov    %eax,(%esp)
0867fbe0 +0x026:  call   08697448 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3c9d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3c9d
0867fbe5 +0x02b:  xor    $0x1,%eax
0867fbe8 +0x02e:  test   %al,%al
0867fbea +0x030:  je     0867fc3f <+0x85>
0867fbec +0x032:  movl   $0x1,0x4(%esp)
0867fbf4 +0x03a:  mov    0x8(%ebp),%eax
0867fbf7 +0x03d:  mov    %eax,(%esp)
0867fbfa +0x040:  call   08697458 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3cad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3cad
0867fbff +0x045:  mov    0x8(%ebp),%eax
0867fc02 +0x048:  mov    %eax,(%esp)
0867fc05 +0x04b:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0867fc0a +0x050:  mov    %eax,%ebx
0867fc0c +0x052:  mov    0x8(%ebp),%eax
0867fc0f +0x055:  mov    %eax,(%esp)
0867fc12 +0x058:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867fc17 +0x05d:  mov    %eax,%ecx
0867fc19 +0x05f:  mov    0xc(%ebp),%eax
0867fc1c +0x062:  mov    %eax,0x10(%esp)
0867fc20 +0x066:  mov    %ebx,0xc(%esp)
0867fc24 +0x06a:  mov    -0x10(%ebp),%eax
0867fc27 +0x06d:  mov    -0xc(%ebp),%edx
0867fc2a +0x070:  mov    %eax,0x4(%esp)
0867fc2e +0x074:  mov    %edx,0x8(%esp)
0867fc32 +0x078:  mov    %ecx,(%esp)
0867fc35 +0x07b:  call   0843a790 <_ZN29DB_AutoPunishedSecondUserData11makeRequestEjyjj>  ; DB_AutoPunishedSecondUserData::makeRequest(unsigned int, unsigned long long, unsigned int, unsigned int)
0867fc3a +0x080:  jmp    0867fd03 <+0x149>
0867fc3f +0x085:  mov    -0x18(%ebp),%eax
0867fc42 +0x088:  mov    -0x14(%ebp),%edx
0867fc45 +0x08b:  mov    -0x10(%ebp),%ecx
0867fc48 +0x08e:  mov    -0xc(%ebp),%ebx
0867fc4b +0x091:  add    %ecx,%eax
0867fc4d +0x093:  adc    %ebx,%edx
0867fc4f +0x095:  mov    %eax,0x4(%esp)
0867fc53 +0x099:  mov    %edx,0x8(%esp)
0867fc57 +0x09d:  mov    0x8(%ebp),%eax
0867fc5a +0x0a0:  mov    %eax,(%esp)
0867fc5d +0x0a3:  call   086972b6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3b0b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3b0b
0867fc62 +0x0a8:  mov    0x18(%ebp),%eax
0867fc65 +0x0ab:  mov    %eax,0x4(%esp)
0867fc69 +0x0af:  mov    0x8(%ebp),%eax
0867fc6c +0x0b2:  mov    %eax,(%esp)
0867fc6f +0x0b5:  call   086972ee <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3b43>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3b43
0867fc74 +0x0ba:  mov    0x8(%ebp),%eax
0867fc77 +0x0bd:  mov    %eax,(%esp)
0867fc7a +0x0c0:  call   08532078 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0xd6>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0xd6
0867fc7f +0x0c5:  mov    %eax,%ebx
0867fc81 +0x0c7:  mov    %edx,%esi
0867fc83 +0x0c9:  mov    0x8(%ebp),%eax
0867fc86 +0x0cc:  mov    %eax,(%esp)
0867fc89 +0x0cf:  call   0853208c <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0xea>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0xea
0867fc8e +0x0d4:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%edx
0867fc94 +0x0da:  mov    %ebx,0x8(%esp)
0867fc98 +0x0de:  mov    %esi,0xc(%esp)
0867fc9c +0x0e2:  mov    %eax,0x4(%esp)
0867fca0 +0x0e6:  mov    %edx,(%esp)
0867fca3 +0x0e9:  call   08531fd2 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x30>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x30
0867fca8 +0x0ee:  test   %al,%al
0867fcaa +0x0f0:  je     0867fcbf <+0x105>
0867fcac +0x0f2:  movl   $0x8,0x4(%esp)
0867fcb4 +0x0fa:  mov    0x8(%ebp),%eax
0867fcb7 +0x0fd:  mov    %eax,(%esp)
0867fcba +0x100:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
0867fcbf +0x105:  movl   $0x8,0x4(%esp)
0867fcc7 +0x10d:  mov    0x8(%ebp),%eax
0867fcca +0x110:  mov    %eax,(%esp)
0867fccd +0x113:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
0867fcd2 +0x118:  movzbl %al,%ebx
0867fcd5 +0x11b:  mov    0x8(%ebp),%eax
0867fcd8 +0x11e:  mov    %eax,(%esp)
0867fcdb +0x121:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867fce0 +0x126:  mov    %eax,%ecx
0867fce2 +0x128:  mov    %ebx,0x10(%esp)
0867fce6 +0x12c:  mov    -0x10(%ebp),%eax
0867fce9 +0x12f:  mov    -0xc(%ebp),%edx
0867fcec +0x132:  mov    %eax,0x8(%esp)
0867fcf0 +0x136:  mov    %edx,0xc(%esp)
0867fcf4 +0x13a:  mov    0xc(%ebp),%eax
0867fcf7 +0x13d:  mov    %eax,0x4(%esp)
0867fcfb +0x141:  mov    %ecx,(%esp)
0867fcfe +0x144:  call   0842e34e <_ZN29DB_InsertAutoPunishSecondUser11makeRequestEjjyb>  ; DB_InsertAutoPunishSecondUser::makeRequest(unsigned int, unsigned int, unsigned long long, bool)
0867fd03 +0x149:  add    $0x30,%esp
0867fd06 +0x14c:  pop    %ebx
0867fd07 +0x14d:  pop    %esi
0867fd08 +0x14e:  pop    %ebp
0867fd09 +0x14f:  ret
```

## 反编译 C

```c
// CUser::gainMoneyFromHackUser @ 0x867fbba

/* CUser::gainMoneyFromHackUser(unsigned int, unsigned long long, unsigned int, unsigned long long)
    */

void CUser::gainMoneyFromHackUser(uint param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  undefined4 uVar2;
  DB_AutoPunishedSecondUserData *this;
  undefined4 uVar3;
  DB_InsertAutoPunishSecondUser *this_00;
  undefined1 uVar4;
  uint in_stack_ffffffd8;
  
  cVar1 = isLoadingHackGold((CUser *)param_1);
  if (cVar1 == '\x01') {
    incTotalHackUserTradeGold(CONCAT44(param_4._4_4_ + param_2._4_4_,param_1));
    uVar4 = (undefined1)in_stack_ffffffd8;
    incTotalHackUserTradeCnt((CUser *)param_1,(uint)param_4);
    uVar2 = getTotalHackUserTradeGold((CUser *)param_1);
    uVar3 = getTotalHackUserTradeCnt((CUser *)param_1);
    cVar1 = WongWork::CAutoPunishRuleHackTypeMgr::checkTotalTradeRuleOver
                      (GlobalData::g_autoPunishRuleHackTypeMgr,CONCAT44(uVar2,uVar3));
    if (cVar1 != '\0') {
      SetTradePunishType((CUser *)param_1,8);
    }
    uVar2 = isTradePunishType((CUser *)param_1,8);
    this_00 = (DB_InsertAutoPunishSecondUser *)get_acc_id((CUser *)param_1);
    DB_InsertAutoPunishSecondUser::makeRequest
              (this_00,(uint)param_2,param_2._4_4_,CONCAT44(uVar2,param_3) & 0xffffffffff,
               (bool)uVar4);
  }
  else {
    setLoadHackGold((CUser *)param_1,true);
    uVar2 = GetUID((CUser *)param_1);
    this = (DB_AutoPunishedSecondUserData *)get_acc_id((CUser *)param_1);
    DB_AutoPunishedSecondUserData::makeRequest
              (this,param_2._4_4_,CONCAT44(uVar2,param_3),(uint)param_2,in_stack_ffffffd8);
  }
  return;
}
```
