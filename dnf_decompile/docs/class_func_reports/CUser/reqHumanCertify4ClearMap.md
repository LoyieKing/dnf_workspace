# reqHumanCertify4ClearMap

`_ZN5CUser24reqHumanCertify4ClearMapEb`

`CUser::reqHumanCertify4ClearMap(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086802b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086802b8  _ZN5CUser24reqHumanCertify4ClearMapEb
#           CUser::reqHumanCertify4ClearMap(bool)
# range [0x086802b8, 0x086804cd]
086802b8 +0x000:  push   %ebp
086802b9 +0x001:  mov    %esp,%ebp
086802bb +0x003:  push   %esi
086802bc +0x004:  push   %ebx
086802bd +0x005:  sub    $0x50,%esp
086802c0 +0x008:  mov    0xc(%ebp),%eax
086802c3 +0x00b:  mov    %al,-0x1c(%ebp)
086802c6 +0x00e:  movzbl -0x1c(%ebp),%eax
086802ca +0x012:  xor    $0x1,%eax
086802cd +0x015:  test   %al,%al
086802cf +0x017:  jne    086802f3 <+0x3b>
086802d1 +0x019:  mov    0x8(%ebp),%eax
086802d4 +0x01c:  add    $0x8e3f0,%eax
086802d9 +0x021:  mov    %eax,(%esp)
086802dc +0x024:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
086802e1 +0x029:  mov    %eax,%ebx
086802e3 +0x02b:  movl   $0x2710,(%esp)
086802ea +0x032:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086802ef +0x037:  cmp    %eax,%ebx
086802f1 +0x039:  jbe    086802fa <+0x42>
086802f3 +0x03b:  mov    $0x1,%eax
086802f8 +0x040:  jmp    086802ff <+0x47>
086802fa +0x042:  mov    $0x0,%eax
086802ff +0x047:  test   %al,%al
08680301 +0x049:  je     086804c7 <+0x20f>
08680307 +0x04f:  mov    0x8(%ebp),%eax
0868030a +0x052:  add    $0x8e3f0,%eax
0868030f +0x057:  mov    %eax,(%esp)
08680312 +0x05a:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
08680317 +0x05f:  mov    $0x0,%edx
0868031c +0x064:  mov    %eax,-0x28(%ebp)
0868031f +0x067:  mov    %edx,-0x24(%ebp)
08680322 +0x06a:  fildll -0x28(%ebp)
08680325 +0x06d:  fldl   &data#69d7849f(.rodata)
0868032b +0x073:  fxch   %st(1)
0868032d +0x075:  fucompp
0868032f +0x077:  fnstsw %ax
08680331 +0x079:  sahf
08680332 +0x07a:  setae  %al
08680335 +0x07d:  test   %al,%al
08680337 +0x07f:  je     0868041c <+0x164>
0868033d +0x085:  mov    0x8(%ebp),%eax
08680340 +0x088:  add    $0x8e3f0,%eax
08680345 +0x08d:  mov    %eax,(%esp)
08680348 +0x090:  call   0822eea4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x454e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x454e
0868034d +0x095:  mov    %eax,-0x2c(%ebp)
08680350 +0x098:  mov    $0x51eb851f,%edx
08680355 +0x09d:  mov    -0x2c(%ebp),%eax
08680358 +0x0a0:  mul    %edx
0868035a +0x0a2:  shr    $0x5,%edx
0868035d +0x0a5:  mov    $0x64,%eax
08680362 +0x0aa:  sub    %edx,%eax
08680364 +0x0ac:  mov    %eax,-0x14(%ebp)
08680367 +0x0af:  movl   $0x0,-0x10(%ebp)
0868036e +0x0b6:  lea    -0x14(%ebp),%eax
08680371 +0x0b9:  mov    %eax,0x4(%esp)
08680375 +0x0bd:  lea    -0x10(%ebp),%eax
08680378 +0x0c0:  mov    %eax,(%esp)
0868037b +0x0c3:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08680380 +0x0c8:  mov    (%eax),%eax
08680382 +0x0ca:  mov    %eax,-0xc(%ebp)
08680385 +0x0cd:  mov    0x8(%ebp),%eax
08680388 +0x0d0:  mov    %eax,(%esp)
0868038b +0x0d3:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
08680390 +0x0d8:  cmp    -0xc(%ebp),%eax
08680393 +0x0db:  jle    086803bd <+0x105>
08680395 +0x0dd:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0868039a +0x0e2:  movl   $0x1,0x8(%esp)
086803a2 +0x0ea:  movl   $0x3,0x4(%esp)
086803aa +0x0f2:  mov    %eax,(%esp)
086803ad +0x0f5:  call   0816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)
086803b2 +0x0fa:  test   %al,%al
086803b4 +0x0fc:  je     086803bd <+0x105>
086803b6 +0x0fe:  mov    $0x1,%eax
086803bb +0x103:  jmp    086803c2 <+0x10a>
086803bd +0x105:  mov    $0x0,%eax
086803c2 +0x10a:  test   %al,%al
086803c4 +0x10c:  je     0868041c <+0x164>
086803c6 +0x10e:  mov    -0xc(%ebp),%eax
086803c9 +0x111:  mov    %eax,0x4(%esp)
086803cd +0x115:  mov    0x8(%ebp),%eax
086803d0 +0x118:  mov    %eax,(%esp)
086803d3 +0x11b:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
086803d8 +0x120:  mov    0x8(%ebp),%eax
086803db +0x123:  mov    %eax,(%esp)
086803de +0x126:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
086803e3 +0x12b:  mov    %eax,%ebx
086803e5 +0x12d:  mov    0x8(%ebp),%eax
086803e8 +0x130:  mov    %eax,(%esp)
086803eb +0x133:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086803f0 +0x138:  movl   $0x0,0x14(%esp)
086803f8 +0x140:  movl   $0x1,0x10(%esp)
08680400 +0x148:  mov    %ebx,0xc(%esp)
08680404 +0x14c:  movl   $0x65,0x8(%esp)
0868040c +0x154:  movl   $0x9c41,0x4(%esp)
08680414 +0x15c:  mov    %eax,(%esp)
08680417 +0x15f:  call   0842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>  ; DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int)
0868041c +0x164:  mov    0x8(%ebp),%eax
0868041f +0x167:  mov    %eax,(%esp)
08680422 +0x16a:  call   0867f26e <_ZN5CUser15reqHumanCertifyEv>  ; CUser::reqHumanCertify()
08680427 +0x16f:  xor    $0x1,%eax
0868042a +0x172:  test   %al,%al
0868042c +0x174:  jne    086804c6 <+0x20e>
08680432 +0x17a:  movl   $0x0,0x4(%esp)
0868043a +0x182:  mov    0x8(%ebp),%eax
0868043d +0x185:  mov    %eax,(%esp)
08680440 +0x188:  call   0823022a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58d4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58d4
08680445 +0x18d:  mov    0x8(%ebp),%eax
08680448 +0x190:  mov    0x8e0f8(%eax),%eax
0868044e +0x196:  cmp    $0x7ffffffe,%eax
08680453 +0x19b:  jbe    08680462 <+0x1aa>
08680455 +0x19d:  mov    0x8(%ebp),%eax
08680458 +0x1a0:  movl   $0x0,0x8e0f8(%eax)
08680462 +0x1aa:  mov    0x8(%ebp),%eax
08680465 +0x1ad:  mov    0x8e0f8(%eax),%eax
0868046b +0x1b3:  lea    0x1(%eax),%edx
0868046e +0x1b6:  mov    0x8(%ebp),%eax
08680471 +0x1b9:  mov    %edx,0x8e0f8(%eax)
08680477 +0x1bf:  mov    0x8(%ebp),%eax
0868047a +0x1c2:  mov    0x8e0f8(%eax),%eax
08680480 +0x1c8:  mov    %eax,%esi
08680482 +0x1ca:  mov    0x8(%ebp),%eax
08680485 +0x1cd:  mov    %eax,(%esp)
08680488 +0x1d0:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868048d +0x1d5:  mov    %eax,%ebx
0868048f +0x1d7:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08680494 +0x1dc:  movl   $0xffffffff,0x18(%esp)
0868049c +0x1e4:  mov    %esi,0x14(%esp)
086804a0 +0x1e8:  movl   $0x3c,0x10(%esp)
086804a8 +0x1f0:  movl   $0x9,0xc(%esp)
086804b0 +0x1f8:  mov    %ebx,0x8(%esp)
086804b4 +0x1fc:  movl   $0x0,0x4(%esp)
086804bc +0x204:  mov    %eax,(%esp)
086804bf +0x207:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086804c4 +0x20c:  jmp    086804c7 <+0x20f>
086804c6 +0x20e:  nop
086804c7 +0x20f:  add    $0x50,%esp
086804ca +0x212:  pop    %ebx
086804cb +0x213:  pop    %esi
086804cc +0x214:  pop    %ebp
086804cd +0x215:  ret
```

## 反编译 C

```c
// CUser::reqHumanCertify4ClearMap @ 0x86802b8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUser::reqHumanCertify4ClearMap(bool) */

void __thiscall CUser::reqHumanCertify4ClearMap(CUser *this,bool param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  ServiceRestrictManager *pSVar8;
  undefined4 uVar9;
  TimerQueue *pTVar10;
  int local_18 [3];
  
  if (param_1) {
    uVar4 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
    uVar5 = get_rand_int(10000);
    if (uVar5 < uVar4) goto LAB_086802f3;
    bVar2 = false;
  }
  else {
LAB_086802f3:
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  uVar4 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
  if ((double)uVar4 < _DAT_08cf3978) goto LAB_0868041c;
  uVar4 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(this + 0x8e3f0));
  local_18[0] = 100 - uVar4 / 100;
  local_18[1] = 0;
  piVar6 = std::max<int>(local_18 + 1,local_18);
  local_18[2] = *piVar6;
  iVar7 = getStdDropRate(this);
  if (local_18[2] < iVar7) {
    pSVar8 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar8,3,1);
    if (cVar3 == '\0') goto LAB_086803bd;
    bVar2 = true;
  }
  else {
LAB_086803bd:
    bVar2 = false;
  }
  if (bVar2) {
    setStdDropRate(this,local_18[2]);
    iVar7 = getStdDropRate(this);
    uVar4 = get_acc_id(this);
    DB_SaveUserHandicap::makeRequest(uVar4,0x9c41,0x65,iVar7,1,0);
  }
LAB_0868041c:
  cVar3 = reqHumanCertify(this);
  if (cVar3 == '\x01') {
    setHumanCertified(this,false);
    if (0x7ffffffe < *(uint *)(this + 0x8e0f8)) {
      *(undefined4 *)(this + 0x8e0f8) = 0;
    }
    *(int *)(this + 0x8e0f8) = *(int *)(this + 0x8e0f8) + 1;
    uVar1 = *(undefined4 *)(this + 0x8e0f8);
    uVar9 = GetUID(this);
    pTVar10 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar10,0,uVar9,9,0x3c,uVar1,0xffffffff);
  }
  return;
}
```
