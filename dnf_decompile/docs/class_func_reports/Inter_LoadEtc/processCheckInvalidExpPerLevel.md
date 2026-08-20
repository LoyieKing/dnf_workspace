# processCheckInvalidExpPerLevel

`_ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser`

`Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084e84f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e84f6  _ZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUser
#           Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&)
# range [0x084e84f6, 0x084e866b]
084e84f6 +0x000:  push   %ebp
084e84f7 +0x001:  mov    %esp,%ebp
084e84f9 +0x003:  push   %edi
084e84fa +0x004:  push   %esi
084e84fb +0x005:  push   %ebx
084e84fc +0x006:  sub    $0x5c,%esp
084e84ff +0x009:  mov    0xc(%ebp),%eax
084e8502 +0x00c:  mov    %eax,(%esp)
084e8505 +0x00f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084e850a +0x014:  mov    %eax,%ebx
084e850c +0x016:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e8511 +0x01b:  mov    %ebx,0x4(%esp)
084e8515 +0x01f:  mov    %eax,(%esp)
084e8518 +0x022:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
084e851d +0x027:  mov    %eax,-0x24(%ebp)
084e8520 +0x02a:  mov    0xc(%ebp),%eax
084e8523 +0x02d:  mov    %eax,(%esp)
084e8526 +0x030:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084e852b +0x035:  lea    0x1(%eax),%ebx
084e852e +0x038:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e8533 +0x03d:  mov    %ebx,0x4(%esp)
084e8537 +0x041:  mov    %eax,(%esp)
084e853a +0x044:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
084e853f +0x049:  mov    %eax,-0x20(%ebp)
084e8542 +0x04c:  mov    0xc(%ebp),%eax
084e8545 +0x04f:  mov    %eax,(%esp)
084e8548 +0x052:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
084e854d +0x057:  mov    %eax,-0x1c(%ebp)
084e8550 +0x05a:  mov    -0x24(%ebp),%eax
084e8553 +0x05d:  cmp    -0x1c(%ebp),%eax
084e8556 +0x060:  ja     084e8564 <+0x6e>
084e8558 +0x062:  mov    -0x1c(%ebp),%eax
084e855b +0x065:  cmp    -0x20(%ebp),%eax
084e855e +0x068:  jbe    084e8664 <+0x16e>
084e8564 +0x06e:  movl   $0x1,0x4(%esp)
084e856c +0x076:  mov    0xc(%ebp),%eax
084e856f +0x079:  mov    %eax,(%esp)
084e8572 +0x07c:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
084e8577 +0x081:  xor    $0x1,%eax
084e857a +0x084:  test   %al,%al
084e857c +0x086:  je     084e8664 <+0x16e>
084e8582 +0x08c:  movl   $0x1,0x4(%esp)
084e858a +0x094:  mov    0xc(%ebp),%eax
084e858d +0x097:  mov    %eax,(%esp)
084e8590 +0x09a:  call   08689890 <_ZN5CUser18SetTradePunishTypeEi>  ; CUser::SetTradePunishType(int)
084e8595 +0x09f:  mov    0xc(%ebp),%eax
084e8598 +0x0a2:  mov    %eax,(%esp)
084e859b +0x0a5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e85a0 +0x0aa:  movl   $0x0,0x14(%esp)
084e85a8 +0x0b2:  movl   $0x3,0x10(%esp)
084e85b0 +0x0ba:  movl   $0x0,0xc(%esp)
084e85b8 +0x0c2:  movl   $0xb,0x8(%esp)
084e85c0 +0x0ca:  movl   $0x9c42,0x4(%esp)
084e85c8 +0x0d2:  mov    %eax,(%esp)
084e85cb +0x0d5:  call   0842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>  ; DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int)
084e85d0 +0x0da:  mov    0xc(%ebp),%eax
084e85d3 +0x0dd:  mov    %eax,(%esp)
084e85d6 +0x0e0:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
084e85db +0x0e5:  mov    %eax,-0x3c(%ebp)
084e85de +0x0e8:  mov    0xc(%ebp),%eax
084e85e1 +0x0eb:  mov    %eax,(%esp)
084e85e4 +0x0ee:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084e85e9 +0x0f3:  mov    %eax,%edi
084e85eb +0x0f5:  movl   $0xffffffff,0x4(%esp)
084e85f3 +0x0fd:  mov    0xc(%ebp),%eax
084e85f6 +0x100:  mov    %eax,(%esp)
084e85f9 +0x103:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e85fe +0x108:  mov    %eax,%esi
084e8600 +0x10a:  mov    0xc(%ebp),%eax
084e8603 +0x10d:  mov    %eax,(%esp)
084e8606 +0x110:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e860b +0x115:  mov    %eax,%ebx
084e860d +0x117:  movl   $0x5,0xc(%esp)
084e8615 +0x11f:  movl   $0x6c7d,0x8(%esp)
084e861d +0x127:  movl   $&_ZZN13Inter_LoadEtc30processCheckInvalidExpPerLevelER5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
084e8625 +0x12f:  lea    -0x34(%ebp),%eax
084e8628 +0x132:  mov    %eax,(%esp)
084e862b +0x135:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e8630 +0x13a:  mov    -0x20(%ebp),%eax
084e8633 +0x13d:  mov    %eax,0x1c(%esp)
084e8637 +0x141:  mov    -0x24(%ebp),%eax
084e863a +0x144:  mov    %eax,0x18(%esp)
084e863e +0x148:  mov    -0x3c(%ebp),%eax
084e8641 +0x14b:  mov    %eax,0x14(%esp)
084e8645 +0x14f:  mov    %edi,0x10(%esp)
084e8649 +0x153:  mov    %esi,0xc(%esp)
084e864d +0x157:  mov    %ebx,0x8(%esp)
084e8651 +0x15b:  movl   $"[InvalidExp] Invalid character exp per level. (mid:%u, charac:%u, level:%d, exp:%d,%d,%d)",0x4(%esp)
084e8659 +0x163:  lea    -0x34(%ebp),%eax
084e865c +0x166:  mov    %eax,(%esp)
084e865f +0x169:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e8664 +0x16e:  add    $0x5c,%esp
084e8667 +0x171:  pop    %ebx
084e8668 +0x172:  pop    %esi
084e8669 +0x173:  pop    %edi
084e866a +0x174:  pop    %ebp
084e866b +0x175:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::processCheckInvalidExpPerLevel @ 0x84e84f6

/* Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&) */

void __thiscall Inter_LoadEtc::processCheckInvalidExpPerLevel(Inter_LoadEtc *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  cMyTrace local_38 [16];
  uint local_28;
  uint local_24;
  uint local_20;
  
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_28 = CDataManager::get_level_exp(pCVar3,iVar2);
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::get_level_exp(pCVar3,iVar2 + 1);
  local_20 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
  if ((local_20 < local_28) || (local_24 < local_20)) {
    cVar1 = CUser::isTradePunishType(param_1,1);
    if (cVar1 != '\x01') {
      CUser::SetTradePunishType(param_1,1);
      uVar4 = CUser::get_acc_id(param_1);
      DB_SaveUserHandicap::makeRequest(uVar4,0x9c42,0xb,0,3,0);
      uVar5 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)param_1);
      uVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      uVar7 = CUser::get_charac_no(param_1,-1);
      uVar8 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_38,"void Inter_LoadEtc::processCheckInvalidExpPerLevel(CUser&)",
                         0x6c7d,5);
      cMyTrace::operator()
                (local_38,
                 "[InvalidExp] Invalid character exp per level. (mid:%u, charac:%u, level:%d, exp:%d,%d,%d)"
                 ,uVar8,uVar7,uVar6,uVar5,local_28,local_24);
    }
  }
  return;
}
```
