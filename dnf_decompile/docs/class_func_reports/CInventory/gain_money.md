# gain_money

`_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi`

`CInventory::gain_money(int, eMoneyAddReason, bool, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084ff29c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ff29c  _ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi
#           CInventory::gain_money(int, eMoneyAddReason, bool, int)
# range [0x084ff29c, 0x084ff54b]
084ff29c +0x000:  push   %ebp
084ff29d +0x001:  mov    %esp,%ebp
084ff29f +0x003:  push   %edi
084ff2a0 +0x004:  push   %esi
084ff2a1 +0x005:  push   %ebx
084ff2a2 +0x006:  sub    $0x5c,%esp
084ff2a5 +0x009:  mov    0x14(%ebp),%eax
084ff2a8 +0x00c:  mov    %al,-0x3c(%ebp)
084ff2ab +0x00f:  movl   $0x7fffffff,-0x28(%ebp)
084ff2b2 +0x016:  mov    0x8(%ebp),%eax
084ff2b5 +0x019:  mov    (%eax),%eax
084ff2b7 +0x01b:  test   %eax,%eax
084ff2b9 +0x01d:  je     084ff2f1 <+0x55>
084ff2bb +0x01f:  mov    0x8(%ebp),%eax
084ff2be +0x022:  mov    (%eax),%eax
084ff2c0 +0x024:  mov    %eax,(%esp)
084ff2c3 +0x027:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084ff2c8 +0x02c:  mov    %eax,%esi
084ff2ca +0x02e:  mov    0x8(%ebp),%eax
084ff2cd +0x031:  mov    (%eax),%eax
084ff2cf +0x033:  mov    %eax,(%esp)
084ff2d2 +0x036:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084ff2d7 +0x03b:  mov    %eax,%ebx
084ff2d9 +0x03d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ff2de +0x042:  mov    %esi,0x8(%esp)
084ff2e2 +0x046:  mov    %ebx,0x4(%esp)
084ff2e6 +0x04a:  mov    %eax,(%esp)
084ff2e9 +0x04d:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
084ff2ee +0x052:  mov    %eax,-0x28(%ebp)
084ff2f1 +0x055:  mov    0x8(%ebp),%eax
084ff2f4 +0x058:  mov    0x4(%eax),%eax
084ff2f7 +0x05b:  mov    %eax,-0x24(%ebp)
084ff2fa +0x05e:  mov    0xc(%ebp),%eax
084ff2fd +0x061:  mov    -0x28(%ebp),%edx
084ff300 +0x064:  sub    %eax,%edx
084ff302 +0x066:  mov    0x8(%ebp),%eax
084ff305 +0x069:  mov    0x4(%eax),%eax
084ff308 +0x06c:  cmp    %eax,%edx
084ff30a +0x06e:  jge    084ff3b9 <+0x11d>
084ff310 +0x074:  mov    0x8(%ebp),%eax
084ff313 +0x077:  mov    -0x28(%ebp),%edx
084ff316 +0x07a:  mov    %edx,0x4(%eax)
084ff319 +0x07d:  mov    0x8(%ebp),%eax
084ff31c +0x080:  mov    0x4(%eax),%eax
084ff31f +0x083:  mov    %eax,-0x40(%ebp)
084ff322 +0x086:  mov    0x8(%ebp),%eax
084ff325 +0x089:  mov    (%eax),%eax
084ff327 +0x08b:  mov    %eax,(%esp)
084ff32a +0x08e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084ff32f +0x093:  mov    %eax,%edi
084ff331 +0x095:  mov    0x8(%ebp),%eax
084ff334 +0x098:  mov    (%eax),%eax
084ff336 +0x09a:  movl   $0xffffffff,0x4(%esp)
084ff33e +0x0a2:  mov    %eax,(%esp)
084ff341 +0x0a5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ff346 +0x0aa:  mov    %eax,%esi
084ff348 +0x0ac:  mov    0x8(%ebp),%eax
084ff34b +0x0af:  mov    (%eax),%eax
084ff34d +0x0b1:  mov    %eax,(%esp)
084ff350 +0x0b4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084ff355 +0x0b9:  movl   $0x0,0x4(%esp)
084ff35d +0x0c1:  mov    %eax,(%esp)
084ff360 +0x0c4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084ff365 +0x0c9:  mov    %eax,%ebx
084ff367 +0x0cb:  movl   $0x4,0xc(%esp)
084ff36f +0x0d3:  movl   $0xef1,0x8(%esp)
084ff377 +0x0db:  movl   $&_ZZN10CInventory10gain_moneyEi15eMoneyAddReasonbiE19__PRETTY_FUNCTION__,0x4(%esp)
084ff37f +0x0e3:  lea    -0x38(%ebp),%eax
084ff382 +0x0e6:  mov    %eax,(%esp)
084ff385 +0x0e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ff38a +0x0ee:  mov    0xc(%ebp),%eax
084ff38d +0x0f1:  mov    %eax,0x18(%esp)
084ff391 +0x0f5:  mov    -0x40(%ebp),%eax
084ff394 +0x0f8:  mov    %eax,0x14(%esp)
084ff398 +0x0fc:  mov    %edi,0x10(%esp)
084ff39c +0x100:  mov    %esi,0xc(%esp)
084ff3a0 +0x104:  mov    %ebx,0x8(%esp)
084ff3a4 +0x108:  movl   $"over money limit:m_id(%s),charac_no(%d),level(%d) gain_money inven(%d)+add(%d)",0x4(%esp)
084ff3ac +0x110:  lea    -0x38(%ebp),%eax
084ff3af +0x113:  mov    %eax,(%esp)
084ff3b2 +0x116:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ff3b7 +0x11b:  jmp    084ff3ca <+0x12e>
084ff3b9 +0x11d:  mov    0x8(%ebp),%eax
084ff3bc +0x120:  mov    0x4(%eax),%eax
084ff3bf +0x123:  mov    %eax,%edx
084ff3c1 +0x125:  add    0xc(%ebp),%edx
084ff3c4 +0x128:  mov    0x8(%ebp),%eax
084ff3c7 +0x12b:  mov    %edx,0x4(%eax)
084ff3ca +0x12e:  mov    0x8(%ebp),%eax
084ff3cd +0x131:  mov    (%eax),%eax
084ff3cf +0x133:  test   %eax,%eax
084ff3d1 +0x135:  je     084ff3e9 <+0x14d>
084ff3d3 +0x137:  mov    0x10(%ebp),%eax
084ff3d6 +0x13a:  mov    %eax,(%esp)
084ff3d9 +0x13d:  call   0850d32a <_GLOBAL__I_g_emptySlot+0x25f>  ; global constructors keyed to g_emptySlot+0x25f
084ff3de +0x142:  test   %al,%al
084ff3e0 +0x144:  je     084ff3e9 <+0x14d>
084ff3e2 +0x146:  mov    $0x1,%eax
084ff3e7 +0x14b:  jmp    084ff3ee <+0x152>
084ff3e9 +0x14d:  mov    $0x0,%eax
084ff3ee +0x152:  test   %al,%al
084ff3f0 +0x154:  je     084ff469 <+0x1cd>
084ff3f2 +0x156:  mov    0xc(%ebp),%ebx
084ff3f5 +0x159:  mov    0x8(%ebp),%eax
084ff3f8 +0x15c:  mov    (%eax),%eax
084ff3fa +0x15e:  mov    %eax,(%esp)
084ff3fd +0x161:  call   084ec86c <_GLOBAL__I__Z7getUserj+0x381e>  ; global constructors keyed to getUser(unsigned int)+0x381e
084ff402 +0x166:  mov    %ebx,0x4(%esp)
084ff406 +0x16a:  mov    %eax,(%esp)
084ff409 +0x16d:  call   0850d4b6 <_GLOBAL__I_g_emptySlot+0x3eb>  ; global constructors keyed to g_emptySlot+0x3eb
084ff40e +0x172:  mov    %eax,-0x20(%ebp)
084ff411 +0x175:  movl   $0x0,-0x1c(%ebp)
084ff418 +0x17c:  jmp    084ff45c <+0x1c0>
084ff41a +0x17e:  mov    0x8(%ebp),%eax
084ff41d +0x181:  mov    (%eax),%ebx
084ff41f +0x183:  mov    0x8(%ebp),%eax
084ff422 +0x186:  mov    (%eax),%eax
084ff424 +0x188:  mov    %eax,(%esp)
084ff427 +0x18b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084ff42c +0x190:  movl   $0x0,0x14(%esp)
084ff434 +0x198:  movl   $0x0,0x10(%esp)
084ff43c +0x1a0:  movl   $0x1,0xc(%esp)
084ff444 +0x1a8:  movl   $0x2bf,0x8(%esp)
084ff44c +0x1b0:  mov    %ebx,0x4(%esp)
084ff450 +0x1b4:  mov    %eax,(%esp)
084ff453 +0x1b7:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084ff458 +0x1bc:  addl   $0x1,-0x1c(%ebp)
084ff45c +0x1c0:  mov    -0x1c(%ebp),%eax
084ff45f +0x1c3:  cmp    -0x20(%ebp),%eax
084ff462 +0x1c6:  setb   %al
084ff465 +0x1c9:  test   %al,%al
084ff467 +0x1cb:  jne    084ff41a <+0x17e>
084ff469 +0x1cd:  cmpb   $0x0,-0x3c(%ebp)
084ff46d +0x1d1:  je     084ff4a3 <+0x207>
084ff46f +0x1d3:  mov    0x8(%ebp),%eax
084ff472 +0x1d6:  mov    (%eax),%eax
084ff474 +0x1d8:  test   %eax,%eax
084ff476 +0x1da:  je     084ff4a3 <+0x207>
084ff478 +0x1dc:  mov    0x8(%ebp),%eax
084ff47b +0x1df:  mov    0x4(%eax),%eax
084ff47e +0x1e2:  mov    0x8(%ebp),%edx
084ff481 +0x1e5:  mov    (%edx),%edx
084ff483 +0x1e7:  lea    0x79700(%edx),%ecx
084ff489 +0x1ed:  mov    0x10(%ebp),%edx
084ff48c +0x1f0:  mov    %edx,0xc(%esp)
084ff490 +0x1f4:  mov    0xc(%ebp),%edx
084ff493 +0x1f7:  mov    %edx,0x8(%esp)
084ff497 +0x1fb:  mov    %eax,0x4(%esp)
084ff49b +0x1ff:  mov    %ecx,(%esp)
084ff49e +0x202:  call   08683a20 <_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason>  ; cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason)
084ff4a3 +0x207:  mov    0x8(%ebp),%eax
084ff4a6 +0x20a:  mov    (%eax),%eax
084ff4a8 +0x20c:  test   %eax,%eax
084ff4aa +0x20e:  je     084ff53b <+0x29f>
084ff4b0 +0x214:  cmpl   $0x4,0x10(%ebp)
084ff4b4 +0x218:  je     084ff4bc <+0x220>
084ff4b6 +0x21a:  cmpl   $0x1a,0x10(%ebp)
084ff4ba +0x21e:  jne    084ff4e2 <+0x246>
084ff4bc +0x220:  mov    0x8(%ebp),%eax
084ff4bf +0x223:  mov    (%eax),%edx
084ff4c1 +0x225:  mov    0x8(%ebp),%eax
084ff4c4 +0x228:  mov    0x4(%eax),%eax
084ff4c7 +0x22b:  sub    -0x24(%ebp),%eax
084ff4ca +0x22e:  sub    0x18(%ebp),%eax
084ff4cd +0x231:  mov    %edx,0x8(%esp)
084ff4d1 +0x235:  mov    %eax,0x4(%esp)
084ff4d5 +0x239:  mov    0x10(%ebp),%eax
084ff4d8 +0x23c:  mov    %eax,(%esp)
084ff4db +0x23f:  call   084febd9 <_Z20write_log_gain_money15eMoneyAddReasoniP5CUser>  ; write_log_gain_money(eMoneyAddReason, int, CUser*)
084ff4e0 +0x244:  jmp    084ff503 <+0x267>
084ff4e2 +0x246:  mov    0x8(%ebp),%eax
084ff4e5 +0x249:  mov    (%eax),%edx
084ff4e7 +0x24b:  mov    0x8(%ebp),%eax
084ff4ea +0x24e:  mov    0x4(%eax),%eax
084ff4ed +0x251:  sub    -0x24(%ebp),%eax
084ff4f0 +0x254:  mov    %edx,0x8(%esp)
084ff4f4 +0x258:  mov    %eax,0x4(%esp)
084ff4f8 +0x25c:  mov    0x10(%ebp),%eax
084ff4fb +0x25f:  mov    %eax,(%esp)
084ff4fe +0x262:  call   084febd9 <_Z20write_log_gain_money15eMoneyAddReasoniP5CUser>  ; write_log_gain_money(eMoneyAddReason, int, CUser*)
084ff503 +0x267:  mov    0x8(%ebp),%eax
084ff506 +0x26a:  mov    0x4(%eax),%eax
084ff509 +0x26d:  sub    -0x24(%ebp),%eax
084ff50c +0x270:  test   %eax,%eax
084ff50e +0x272:  jle    084ff53b <+0x29f>
084ff510 +0x274:  mov    0x8(%ebp),%eax
084ff513 +0x277:  mov    0x4(%eax),%eax
084ff516 +0x27a:  sub    -0x24(%ebp),%eax
084ff519 +0x27d:  mov    %eax,%ebx
084ff51b +0x27f:  mov    0x8(%ebp),%eax
084ff51e +0x282:  mov    (%eax),%eax
084ff520 +0x284:  mov    %eax,(%esp)
084ff523 +0x287:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
084ff528 +0x28c:  mov    0x10(%ebp),%edx
084ff52b +0x28f:  mov    %edx,0x8(%esp)
084ff52f +0x293:  mov    %ebx,0x4(%esp)
084ff533 +0x297:  mov    %eax,(%esp)
084ff536 +0x29a:  call   0828757c <_ZN16Secu_GoldControl7AddGoldEj15eMoneyAddReason>  ; Secu_GoldControl::AddGold(unsigned int, eMoneyAddReason)
084ff53b +0x29f:  mov    0x8(%ebp),%eax
084ff53e +0x2a2:  mov    0x4(%eax),%eax
084ff541 +0x2a5:  sub    -0x24(%ebp),%eax
084ff544 +0x2a8:  add    $0x5c,%esp
084ff547 +0x2ab:  pop    %ebx
084ff548 +0x2ac:  pop    %esi
084ff549 +0x2ad:  pop    %edi
084ff54a +0x2ae:  pop    %ebp
084ff54b +0x2af:  ret
```

## 反编译 C

```c
// CInventory::gain_money @ 0x84ff29c

/* CInventory::gain_money(int, eMoneyAddReason, bool, int) */

int __thiscall
CInventory::gain_money(CInventory *this,uint param_1,int param_3,char param_4,int param_5)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  CDataManager *this_00;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  CDungeonGainedGold *this_01;
  CHackAnalyzer *pCVar10;
  Secu_GoldControl *pSVar11;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  
  local_2c = 0x7fffffff;
  if (*(int *)this != 0) {
    pcVar4 = (char *)CUser::get_acc_name(*(CUser **)this);
    iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    this_00 = (CDataManager *)G_CDataManager();
    local_2c = CDataManager::GetMoneyLimitPerLevel(this_00,iVar5,pcVar4);
  }
  local_28 = *(int *)(this + 4);
  if ((int)(local_2c - param_1) < *(int *)(this + 4)) {
    *(int *)(this + 4) = local_2c;
    uVar1 = *(undefined4 *)(this + 4);
    uVar6 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
    uVar7 = CUser::get_charac_no(*(CUser **)this,-1);
    uVar8 = CUser::get_acc_id(*(CUser **)this);
    uVar9 = NumberToString(uVar8,0);
    cMyTrace::cMyTrace(local_3c,"int CInventory::gain_money(int, eMoneyAddReason, bool, int)",0xef1,
                       4);
    cMyTrace::operator()
              (local_3c,
               "over money limit:m_id(%s),charac_no(%d),level(%d) gain_money inven(%d)+add(%d)",
               uVar9,uVar7,uVar6,uVar1,param_1);
  }
  else {
    *(uint *)(this + 4) = *(int *)(this + 4) + param_1;
  }
  if (*(int *)this != 0) {
    cVar3 = isGainedGoldFromDungeonReason(param_3);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_084ff3ee;
    }
  }
  bVar2 = false;
LAB_084ff3ee:
  if (bVar2) {
    this_01 = (CDungeonGainedGold *)CUser::getDungeonGainedGold(*(CUser **)this);
    local_24 = CDungeonGainedGold::incGainedGold(this_01,param_1);
    for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
      uVar1 = *(undefined4 *)this;
      pCVar10 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar10,uVar1,0x2bf,1,0,0);
    }
  }
  if ((param_4 != '\0') && (*(int *)this != 0)) {
    cUserHistoryLog::MoneyAdd
              ((cUserHistoryLog *)(*(int *)this + 0x79700),*(undefined4 *)(this + 4),param_1,param_3
              );
  }
  if (*(int *)this != 0) {
    if ((param_3 == 4) || (param_3 == 0x1a)) {
      write_log_gain_money(param_3,(*(int *)(this + 4) - local_28) - param_5,*(undefined4 *)this);
    }
    else {
      write_log_gain_money(param_3,*(int *)(this + 4) - local_28,*(undefined4 *)this);
    }
    if (*(int *)(this + 4) != local_28 && -1 < *(int *)(this + 4) - local_28) {
      iVar5 = *(int *)(this + 4) - local_28;
      pSVar11 = (Secu_GoldControl *)CUser::GetGoldControl(*(CUser **)this);
      Secu_GoldControl::AddGold(pSVar11,iVar5,param_3);
    }
  }
  return *(int *)(this + 4) - local_28;
}
```
