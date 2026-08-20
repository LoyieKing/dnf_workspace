# use_money

`_ZN10CInventory9use_moneyEi15eMoneySubReasonb`

`CInventory::use_money(int, eMoneySubReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084ff54c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ff54c  _ZN10CInventory9use_moneyEi15eMoneySubReasonb
#           CInventory::use_money(int, eMoneySubReason, bool)
# range [0x084ff54c, 0x084ff761]
084ff54c +0x000:  push   %ebp
084ff54d +0x001:  mov    %esp,%ebp
084ff54f +0x003:  push   %edi
084ff550 +0x004:  push   %esi
084ff551 +0x005:  push   %ebx
084ff552 +0x006:  sub    $0x5c,%esp
084ff555 +0x009:  mov    0x14(%ebp),%eax
084ff558 +0x00c:  mov    %al,-0x3c(%ebp)
084ff55b +0x00f:  mov    0x8(%ebp),%eax
084ff55e +0x012:  mov    0x4(%eax),%eax
084ff561 +0x015:  cmp    0xc(%ebp),%eax
084ff564 +0x018:  jl     084ff56c <+0x20>
084ff566 +0x01a:  cmpl   $0x0,0xc(%ebp)
084ff56a +0x01e:  jns    084ff576 <+0x2a>
084ff56c +0x020:  mov    $0x0,%eax
084ff571 +0x025:  jmp    084ff759 <+0x20d>
084ff576 +0x02a:  mov    0x8(%ebp),%eax
084ff579 +0x02d:  mov    0x4(%eax),%eax
084ff57c +0x030:  mov    %eax,-0x20(%ebp)
084ff57f +0x033:  mov    0x8(%ebp),%eax
084ff582 +0x036:  mov    0x4(%eax),%eax
084ff585 +0x039:  mov    %eax,%edx
084ff587 +0x03b:  sub    0xc(%ebp),%edx
084ff58a +0x03e:  mov    0x8(%ebp),%eax
084ff58d +0x041:  mov    %edx,0x4(%eax)
084ff590 +0x044:  movl   $0x7fffffff,-0x1c(%ebp)
084ff597 +0x04b:  mov    0x8(%ebp),%eax
084ff59a +0x04e:  mov    (%eax),%eax
084ff59c +0x050:  test   %eax,%eax
084ff59e +0x052:  je     084ff5d6 <+0x8a>
084ff5a0 +0x054:  mov    0x8(%ebp),%eax
084ff5a3 +0x057:  mov    (%eax),%eax
084ff5a5 +0x059:  mov    %eax,(%esp)
084ff5a8 +0x05c:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
084ff5ad +0x061:  mov    %eax,%esi
084ff5af +0x063:  mov    0x8(%ebp),%eax
084ff5b2 +0x066:  mov    (%eax),%eax
084ff5b4 +0x068:  mov    %eax,(%esp)
084ff5b7 +0x06b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084ff5bc +0x070:  mov    %eax,%ebx
084ff5be +0x072:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ff5c3 +0x077:  mov    %esi,0x8(%esp)
084ff5c7 +0x07b:  mov    %ebx,0x4(%esp)
084ff5cb +0x07f:  mov    %eax,(%esp)
084ff5ce +0x082:  call   08360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>  ; CDataManager::GetMoneyLimitPerLevel(int, char const*) const
084ff5d3 +0x087:  mov    %eax,-0x1c(%ebp)
084ff5d6 +0x08a:  mov    0x8(%ebp),%eax
084ff5d9 +0x08d:  mov    0x4(%eax),%eax
084ff5dc +0x090:  cmp    -0x1c(%ebp),%eax
084ff5df +0x093:  jle    084ff68c <+0x140>
084ff5e5 +0x099:  mov    0x8(%ebp),%eax
084ff5e8 +0x09c:  mov    -0x1c(%ebp),%edx
084ff5eb +0x09f:  mov    %edx,0x4(%eax)
084ff5ee +0x0a2:  mov    0x8(%ebp),%eax
084ff5f1 +0x0a5:  mov    0x4(%eax),%eax
084ff5f4 +0x0a8:  mov    %eax,-0x40(%ebp)
084ff5f7 +0x0ab:  mov    0x8(%ebp),%eax
084ff5fa +0x0ae:  mov    (%eax),%eax
084ff5fc +0x0b0:  mov    %eax,(%esp)
084ff5ff +0x0b3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084ff604 +0x0b8:  mov    %eax,%edi
084ff606 +0x0ba:  mov    0x8(%ebp),%eax
084ff609 +0x0bd:  mov    (%eax),%eax
084ff60b +0x0bf:  movl   $0xffffffff,0x4(%esp)
084ff613 +0x0c7:  mov    %eax,(%esp)
084ff616 +0x0ca:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ff61b +0x0cf:  mov    %eax,%esi
084ff61d +0x0d1:  mov    0x8(%ebp),%eax
084ff620 +0x0d4:  mov    (%eax),%eax
084ff622 +0x0d6:  mov    %eax,(%esp)
084ff625 +0x0d9:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084ff62a +0x0de:  movl   $0x0,0x4(%esp)
084ff632 +0x0e6:  mov    %eax,(%esp)
084ff635 +0x0e9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084ff63a +0x0ee:  mov    %eax,%ebx
084ff63c +0x0f0:  movl   $0x4,0xc(%esp)
084ff644 +0x0f8:  movl   $0xf30,0x8(%esp)
084ff64c +0x100:  movl   $&_ZZN10CInventory9use_moneyEi15eMoneySubReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
084ff654 +0x108:  lea    -0x30(%ebp),%eax
084ff657 +0x10b:  mov    %eax,(%esp)
084ff65a +0x10e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ff65f +0x113:  mov    0xc(%ebp),%eax
084ff662 +0x116:  mov    %eax,0x18(%esp)
084ff666 +0x11a:  mov    -0x40(%ebp),%eax
084ff669 +0x11d:  mov    %eax,0x14(%esp)
084ff66d +0x121:  mov    %edi,0x10(%esp)
084ff671 +0x125:  mov    %esi,0xc(%esp)
084ff675 +0x129:  mov    %ebx,0x8(%esp)
084ff679 +0x12d:  movl   $"over money limit:m_id(%s),charac_no(%d),level(%d) use_money inven(%d)-sub(%d)",0x4(%esp)
084ff681 +0x135:  lea    -0x30(%ebp),%eax
084ff684 +0x138:  mov    %eax,(%esp)
084ff687 +0x13b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ff68c +0x140:  mov    0x8(%ebp),%eax
084ff68f +0x143:  mov    0x4(%eax),%eax
084ff692 +0x146:  test   %eax,%eax
084ff694 +0x148:  jns    084ff6a0 <+0x154>
084ff696 +0x14a:  mov    0x8(%ebp),%eax
084ff699 +0x14d:  movl   $0x0,0x4(%eax)
084ff6a0 +0x154:  mov    0x8(%ebp),%eax
084ff6a3 +0x157:  mov    (%eax),%eax
084ff6a5 +0x159:  test   %eax,%eax
084ff6a7 +0x15b:  je     084ff714 <+0x1c8>
084ff6a9 +0x15d:  mov    0x8(%ebp),%eax
084ff6ac +0x160:  mov    (%eax),%eax
084ff6ae +0x162:  mov    0x8(%ebp),%edx
084ff6b1 +0x165:  mov    0x4(%edx),%edx
084ff6b4 +0x168:  mov    -0x20(%ebp),%ecx
084ff6b7 +0x16b:  mov    %ecx,%ebx
084ff6b9 +0x16d:  sub    %edx,%ebx
084ff6bb +0x16f:  mov    %ebx,%edx
084ff6bd +0x171:  mov    %eax,0x8(%esp)
084ff6c1 +0x175:  mov    %edx,0x4(%esp)
084ff6c5 +0x179:  mov    0x10(%ebp),%eax
084ff6c8 +0x17c:  mov    %eax,(%esp)
084ff6cb +0x17f:  call   084fed9b <_Z19write_log_use_money15eMoneySubReasoniP5CUser>  ; write_log_use_money(eMoneySubReason, int, CUser*)
084ff6d0 +0x184:  mov    0x8(%ebp),%eax
084ff6d3 +0x187:  mov    0x4(%eax),%eax
084ff6d6 +0x18a:  mov    -0x20(%ebp),%edx
084ff6d9 +0x18d:  mov    %edx,%ecx
084ff6db +0x18f:  sub    %eax,%ecx
084ff6dd +0x191:  mov    %ecx,%eax
084ff6df +0x193:  test   %eax,%eax
084ff6e1 +0x195:  jle    084ff714 <+0x1c8>
084ff6e3 +0x197:  mov    0x8(%ebp),%eax
084ff6e6 +0x19a:  mov    0x4(%eax),%eax
084ff6e9 +0x19d:  mov    -0x20(%ebp),%edx
084ff6ec +0x1a0:  mov    %edx,%ebx
084ff6ee +0x1a2:  sub    %eax,%ebx
084ff6f0 +0x1a4:  mov    %ebx,%eax
084ff6f2 +0x1a6:  mov    %eax,%ebx
084ff6f4 +0x1a8:  mov    0x8(%ebp),%eax
084ff6f7 +0x1ab:  mov    (%eax),%eax
084ff6f9 +0x1ad:  mov    %eax,(%esp)
084ff6fc +0x1b0:  call   084ed008 <_GLOBAL__I__Z7getUserj+0x3fba>  ; global constructors keyed to getUser(unsigned int)+0x3fba
084ff701 +0x1b5:  mov    0x10(%ebp),%edx
084ff704 +0x1b8:  mov    %edx,0x8(%esp)
084ff708 +0x1bc:  mov    %ebx,0x4(%esp)
084ff70c +0x1c0:  mov    %eax,(%esp)
084ff70f +0x1c3:  call   0828764a <_ZN16Secu_GoldControl7SubGoldEj15eMoneySubReason>  ; Secu_GoldControl::SubGold(unsigned int, eMoneySubReason)
084ff714 +0x1c8:  cmpb   $0x0,-0x3c(%ebp)
084ff718 +0x1cc:  je     084ff754 <+0x208>
084ff71a +0x1ce:  mov    0x8(%ebp),%eax
084ff71d +0x1d1:  mov    (%eax),%eax
084ff71f +0x1d3:  test   %eax,%eax
084ff721 +0x1d5:  je     084ff754 <+0x208>
084ff723 +0x1d7:  cmpl   $0x0,0xc(%ebp)
084ff727 +0x1db:  jle    084ff754 <+0x208>
084ff729 +0x1dd:  mov    0x8(%ebp),%eax
084ff72c +0x1e0:  mov    0x4(%eax),%eax
084ff72f +0x1e3:  mov    0x8(%ebp),%edx
084ff732 +0x1e6:  mov    (%edx),%edx
084ff734 +0x1e8:  lea    0x79700(%edx),%ecx
084ff73a +0x1ee:  mov    0x10(%ebp),%edx
084ff73d +0x1f1:  mov    %edx,0xc(%esp)
084ff741 +0x1f5:  mov    0xc(%ebp),%edx
084ff744 +0x1f8:  mov    %edx,0x8(%esp)
084ff748 +0x1fc:  mov    %eax,0x4(%esp)
084ff74c +0x200:  mov    %ecx,(%esp)
084ff74f +0x203:  call   08683a80 <_ZN15cUserHistoryLog8MoneySubEii15eMoneySubReason>  ; cUserHistoryLog::MoneySub(int, int, eMoneySubReason)
084ff754 +0x208:  mov    $0x1,%eax
084ff759 +0x20d:  add    $0x5c,%esp
084ff75c +0x210:  pop    %ebx
084ff75d +0x211:  pop    %esi
084ff75e +0x212:  pop    %edi
084ff75f +0x213:  pop    %ebp
084ff760 +0x214:  ret
084ff761 +0x215:  nop
```

## 反编译 C

```c
// CInventory::use_money @ 0x84ff54c

/* CInventory::use_money(int, eMoneySubReason, bool) */

undefined4 __thiscall
CInventory::use_money(CInventory *this,int param_1,undefined4 param_3,char param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  CDataManager *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  Secu_GoldControl *pSVar8;
  cMyTrace local_34 [16];
  int local_24;
  int local_20;
  
  if ((*(int *)(this + 4) < param_1) || (param_1 < 0)) {
    uVar1 = 0;
  }
  else {
    local_24 = *(int *)(this + 4);
    *(int *)(this + 4) = *(int *)(this + 4) - param_1;
    local_20 = 0x7fffffff;
    if (*(int *)this != 0) {
      pcVar2 = (char *)CUser::get_acc_name(*(CUser **)this);
      iVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = CDataManager::GetMoneyLimitPerLevel(this_00,iVar3,pcVar2);
    }
    if (local_20 < *(int *)(this + 4)) {
      *(int *)(this + 4) = local_20;
      uVar1 = *(undefined4 *)(this + 4);
      uVar4 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
      uVar5 = CUser::get_charac_no(*(CUser **)this,-1);
      uVar6 = CUser::get_acc_id(*(CUser **)this);
      uVar7 = NumberToString(uVar6,0);
      cMyTrace::cMyTrace(local_34,"bool CInventory::use_money(int, eMoneySubReason, bool)",0xf30,4);
      cMyTrace::operator()
                (local_34,
                 "over money limit:m_id(%s),charac_no(%d),level(%d) use_money inven(%d)-sub(%d)",
                 uVar7,uVar5,uVar4,uVar1,param_1);
    }
    if (*(int *)(this + 4) < 0) {
      *(undefined4 *)(this + 4) = 0;
    }
    if (*(int *)this != 0) {
      write_log_use_money(param_3,local_24 - *(int *)(this + 4),*(undefined4 *)this);
      if (local_24 != *(int *)(this + 4) && -1 < local_24 - *(int *)(this + 4)) {
        iVar3 = local_24 - *(int *)(this + 4);
        pSVar8 = (Secu_GoldControl *)CUser::GetGoldControl(*(CUser **)this);
        Secu_GoldControl::SubGold(pSVar8,iVar3,param_3);
      }
    }
    if (((param_4 != '\0') && (*(int *)this != 0)) && (0 < param_1)) {
      cUserHistoryLog::MoneySub
                ((cUserHistoryLog *)(*(int *)this + 0x79700),*(undefined4 *)(this + 4),param_1,
                 param_3);
    }
    uVar1 = 1;
  }
  return uVar1;
}
```
