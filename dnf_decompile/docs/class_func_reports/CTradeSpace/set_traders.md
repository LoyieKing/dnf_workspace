# set_traders

`_ZN11CTradeSpace11set_tradersEP5CUserS1_`

`CTradeSpace::set_traders(CUser*, CUser*)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x085295f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085295f0  _ZN11CTradeSpace11set_tradersEP5CUserS1_
#           CTradeSpace::set_traders(CUser*, CUser*)
# range [0x085295f0, 0x085297f1]
085295f0 +0x000:  push   %ebp
085295f1 +0x001:  mov    %esp,%ebp
085295f3 +0x003:  push   %ebx
085295f4 +0x004:  sub    $0x14,%esp
085295f7 +0x007:  mov    0x8(%ebp),%eax
085295fa +0x00a:  mov    %eax,(%esp)
085295fd +0x00d:  call   085320e2 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x140>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x140
08529602 +0x012:  mov    0x8(%ebp),%eax
08529605 +0x015:  movb   $0x1,0x1c(%eax)
08529609 +0x019:  movl   $0x0,0x4(%esp)
08529611 +0x021:  mov    0x8(%ebp),%eax
08529614 +0x024:  mov    %eax,(%esp)
08529617 +0x027:  call   085320fa <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x158>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x158
0852961c +0x02c:  mov    0x8(%ebp),%eax
0852961f +0x02f:  mov    0xc(%ebp),%edx
08529622 +0x032:  mov    %edx,0x20(%eax)
08529625 +0x035:  mov    0x8(%ebp),%eax
08529628 +0x038:  mov    0x20(%eax),%ebx
0852962b +0x03b:  mov    0x10(%ebp),%eax
0852962e +0x03e:  mov    %eax,(%esp)
08529631 +0x041:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08529636 +0x046:  movzwl %ax,%eax
08529639 +0x049:  mov    %eax,0x8d25c(%ebx)
0852963f +0x04f:  mov    0x8(%ebp),%eax
08529642 +0x052:  mov    0x10(%ebp),%edx
08529645 +0x055:  mov    %edx,0x24(%eax)
08529648 +0x058:  mov    0x8(%ebp),%eax
0852964b +0x05b:  mov    0x24(%eax),%ebx
0852964e +0x05e:  mov    0xc(%ebp),%eax
08529651 +0x061:  mov    %eax,(%esp)
08529654 +0x064:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08529659 +0x069:  movzwl %ax,%eax
0852965c +0x06c:  mov    %eax,0x8d25c(%ebx)
08529662 +0x072:  mov    0x8(%ebp),%eax
08529665 +0x075:  mov    0x24(%eax),%eax
08529668 +0x078:  mov    %eax,(%esp)
0852966b +0x07b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08529670 +0x080:  test   %eax,%eax
08529672 +0x082:  je     0852968d <+0x9d>
08529674 +0x084:  mov    0x8(%ebp),%eax
08529677 +0x087:  mov    0x20(%eax),%eax
0852967a +0x08a:  mov    %eax,(%esp)
0852967d +0x08d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08529682 +0x092:  test   %eax,%eax
08529684 +0x094:  je     0852968d <+0x9d>
08529686 +0x096:  mov    $0x1,%eax
0852968b +0x09b:  jmp    08529692 <+0xa2>
0852968d +0x09d:  mov    $0x0,%eax
08529692 +0x0a2:  test   %al,%al
08529694 +0x0a4:  je     0852970a <+0x11a>
08529696 +0x0a6:  mov    0x8(%ebp),%eax
08529699 +0x0a9:  mov    0x24(%eax),%eax
0852969c +0x0ac:  mov    %eax,(%esp)
0852969f +0x0af:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085296a4 +0x0b4:  mov    %eax,%ebx
085296a6 +0x0b6:  mov    0x8(%ebp),%eax
085296a9 +0x0b9:  mov    0x24(%eax),%eax
085296ac +0x0bc:  mov    %eax,(%esp)
085296af +0x0bf:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085296b4 +0x0c4:  mov    0x8(%ebp),%edx
085296b7 +0x0c7:  mov    0x20(%edx),%edx
085296ba +0x0ca:  add    $0x79700,%edx
085296c0 +0x0d0:  mov    %ebx,0x8(%esp)
085296c4 +0x0d4:  mov    %eax,0x4(%esp)
085296c8 +0x0d8:  mov    %edx,(%esp)
085296cb +0x0db:  call   08532036 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x94>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x94
085296d0 +0x0e0:  mov    0x8(%ebp),%eax
085296d3 +0x0e3:  mov    0x20(%eax),%eax
085296d6 +0x0e6:  mov    %eax,(%esp)
085296d9 +0x0e9:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085296de +0x0ee:  mov    %eax,%ebx
085296e0 +0x0f0:  mov    0x8(%ebp),%eax
085296e3 +0x0f3:  mov    0x20(%eax),%eax
085296e6 +0x0f6:  mov    %eax,(%esp)
085296e9 +0x0f9:  call   08101072 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x94>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x94
085296ee +0x0fe:  mov    0x8(%ebp),%edx
085296f1 +0x101:  mov    0x24(%edx),%edx
085296f4 +0x104:  add    $0x79700,%edx
085296fa +0x10a:  mov    %ebx,0x8(%esp)
085296fe +0x10e:  mov    %eax,0x4(%esp)
08529702 +0x112:  mov    %edx,(%esp)
08529705 +0x115:  call   08532036 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x94>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x94
0852970a +0x11a:  mov    0x8(%ebp),%eax
0852970d +0x11d:  mov    0x18(%eax),%eax
08529710 +0x120:  mov    %eax,0x4(%esp)
08529714 +0x124:  mov    0xc(%ebp),%eax
08529717 +0x127:  mov    %eax,(%esp)
0852971a +0x12a:  call   085320b4 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x112>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x112
0852971f +0x12f:  mov    0x8(%ebp),%eax
08529722 +0x132:  mov    0x18(%eax),%eax
08529725 +0x135:  mov    %eax,0x4(%esp)
08529729 +0x139:  mov    0x10(%ebp),%eax
0852972c +0x13c:  mov    %eax,(%esp)
0852972f +0x13f:  call   085320b4 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x112>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x112
08529734 +0x144:  mov    0x8(%ebp),%eax
08529737 +0x147:  movl   $0x0,0xf60(%eax)
08529741 +0x151:  mov    0x8(%ebp),%eax
08529744 +0x154:  movl   $0x0,0xf64(%eax)
0852974e +0x15e:  mov    0x8(%ebp),%eax
08529751 +0x161:  movl   $0x0,0x28(%eax)
08529758 +0x168:  mov    0x8(%ebp),%eax
0852975b +0x16b:  movl   $0x0,0x2c(%eax)
08529762 +0x172:  mov    0x8(%ebp),%eax
08529765 +0x175:  add    $0x30,%eax
08529768 +0x178:  movl   $0x798,0x8(%esp)
08529770 +0x180:  movl   $0x0,0x4(%esp)
08529778 +0x188:  mov    %eax,(%esp)
0852977b +0x18b:  call   0807dcc0 <_init+0x5b8>
08529780 +0x190:  mov    0x8(%ebp),%eax
08529783 +0x193:  add    $0x7c8,%eax
08529788 +0x198:  movl   $0x798,0x8(%esp)
08529790 +0x1a0:  movl   $0x0,0x4(%esp)
08529798 +0x1a8:  mov    %eax,(%esp)
0852979b +0x1ab:  call   0807dcc0 <_init+0x5b8>
085297a0 +0x1b0:  mov    0x8(%ebp),%eax
085297a3 +0x1b3:  add    $0xf68,%eax
085297a8 +0x1b8:  movl   $0x8,0x8(%esp)
085297b0 +0x1c0:  movl   $0x0,0x4(%esp)
085297b8 +0x1c8:  mov    %eax,(%esp)
085297bb +0x1cb:  call   0807dcc0 <_init+0x5b8>
085297c0 +0x1d0:  mov    0x8(%ebp),%eax
085297c3 +0x1d3:  mov    %eax,(%esp)
085297c6 +0x1d6:  call   085320e8 <_GLOBAL__I__ZN11CTradeSpace11set_tradersEP5CUserS1_+0x146>  ; global constructors keyed to CTradeSpace::set_traders(CUser*, CUser*)+0x146
085297cb +0x1db:  mov    0xc(%ebp),%eax
085297ce +0x1de:  add    $0x79700,%eax
085297d3 +0x1e3:  mov    %eax,(%esp)
085297d6 +0x1e6:  call   0868503e <_ZN15cUserHistoryLog10TradeBeginEv>  ; cUserHistoryLog::TradeBegin()
085297db +0x1eb:  mov    0x10(%ebp),%eax
085297de +0x1ee:  add    $0x79700,%eax
085297e3 +0x1f3:  mov    %eax,(%esp)
085297e6 +0x1f6:  call   0868503e <_ZN15cUserHistoryLog10TradeBeginEv>  ; cUserHistoryLog::TradeBegin()
085297eb +0x1fb:  add    $0x14,%esp
085297ee +0x1fe:  pop    %ebx
085297ef +0x1ff:  pop    %ebp
085297f0 +0x200:  ret
085297f1 +0x201:  nop
```

## 反编译 C

```c
// CTradeSpace::set_traders @ 0x85295f0

/* CTradeSpace::set_traders(CUser*, CUser*) */

void __thiscall CTradeSpace::set_traders(CTradeSpace *this,CUser *param_1,CUser *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  lock();
  this[0x1c] = (CTradeSpace)0x1;
  _SetLock(this,false);
  *(CUser **)(this + 0x20) = param_1;
  iVar3 = *(int *)(this + 0x20);
  uVar2 = CUser::get_unique_id(param_2);
  *(uint *)(iVar3 + 0x8d25c) = uVar2 & 0xffff;
  *(CUser **)(this + 0x24) = param_2;
  iVar3 = *(int *)(this + 0x24);
  uVar2 = CUser::get_unique_id(param_1);
  *(uint *)(iVar3 + 0x8d25c) = uVar2 & 0xffff;
  iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x24));
  if (iVar3 != 0) {
    iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x20));
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_08529692;
    }
  }
  bVar1 = false;
LAB_08529692:
  if (bVar1) {
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x24));
    pcVar5 = (char *)CUser::get_acc_name(*(CUser **)(this + 0x24));
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x20) + 0x79700),pcVar5,pcVar4);
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x20));
    pcVar5 = (char *)CUser::get_acc_name(*(CUser **)(this + 0x20));
    cUserHistoryLog::SetTrader((cUserHistoryLog *)(*(int *)(this + 0x24) + 0x79700),pcVar5,pcVar4);
  }
  CUser::SetTradeSpace(param_1,*(int *)(this + 0x18));
  CUser::SetTradeSpace(param_2,*(int *)(this + 0x18));
  *(undefined4 *)(this + 0xf60) = 0;
  *(undefined4 *)(this + 0xf64) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  memset(this + 0x30,0,0x798);
  memset(this + 0x7c8,0,0x798);
  memset(this + 0xf68,0,8);
  unlock();
  cUserHistoryLog::TradeBegin((cUserHistoryLog *)(param_1 + 0x79700));
  cUserHistoryLog::TradeBegin((cUserHistoryLog *)(param_2 + 0x79700));
  return;
}
```
