# dispatch_sig

`_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij`

`TimerPremiumServiceUpdate::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPremiumServiceUpdate` | `0x086348d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086348d4  _ZN25TimerPremiumServiceUpdate12dispatch_sigEiij
#           TimerPremiumServiceUpdate::dispatch_sig(int, int, unsigned int)
# range [0x086348d4, 0x08634a2f]
086348d4 +0x000:  push   %ebp
086348d5 +0x001:  mov    %esp,%ebp
086348d7 +0x003:  push   %ebx
086348d8 +0x004:  sub    $0x64,%esp
086348db +0x007:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
086348e0 +0x00c:  movl   $0x6,0x8(%esp)
086348e8 +0x014:  mov    0xc(%ebp),%edx
086348eb +0x017:  mov    %edx,0x4(%esp)
086348ef +0x01b:  mov    %eax,(%esp)
086348f2 +0x01e:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
086348f7 +0x023:  mov    %eax,-0x10(%ebp)
086348fa +0x026:  cmpl   $0x0,-0x10(%ebp)
086348fe +0x02a:  jne    0863490a <+0x36>
08634900 +0x02c:  mov    $0x0,%eax
08634905 +0x031:  jmp    08634a29 <+0x155>
0863490a +0x036:  mov    -0x10(%ebp),%eax
0863490d +0x039:  mov    %eax,(%esp)
08634910 +0x03c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08634915 +0x041:  cmp    0x14(%ebp),%eax
08634918 +0x044:  setne  %al
0863491b +0x047:  test   %al,%al
0863491d +0x049:  je     08634929 <+0x55>
0863491f +0x04b:  mov    $0x0,%eax
08634924 +0x050:  jmp    08634a29 <+0x155>
08634929 +0x055:  mov    -0x10(%ebp),%eax
0863492c +0x058:  mov    %eax,(%esp)
0863492f +0x05b:  call   0863bea2 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3b3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3b3
08634934 +0x060:  xor    $0x1,%eax
08634937 +0x063:  test   %al,%al
08634939 +0x065:  je     08634945 <+0x71>
0863493b +0x067:  mov    $0x0,%eax
08634940 +0x06c:  jmp    08634a29 <+0x155>
08634945 +0x071:  mov    -0x10(%ebp),%eax
08634948 +0x074:  mov    %eax,(%esp)
0863494b +0x077:  call   0863be94 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3a5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3a5
08634950 +0x07c:  mov    %eax,(%esp)
08634953 +0x07f:  call   086ae10e <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv>  ; WongWork::CUserPremium::ReCalcAdvantage()
08634958 +0x084:  mov    -0x10(%ebp),%eax
0863495b +0x087:  mov    %eax,(%esp)
0863495e +0x08a:  call   0863be94 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3a5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3a5
08634963 +0x08f:  mov    -0x10(%ebp),%edx
08634966 +0x092:  mov    %edx,0x4(%esp)
0863496a +0x096:  mov    %eax,(%esp)
0863496d +0x099:  call   086ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>  ; WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
08634972 +0x09e:  mov    -0x10(%ebp),%eax
08634975 +0x0a1:  mov    %eax,(%esp)
08634978 +0x0a4:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0863497d +0x0a9:  cmp    $0x3,%eax
08634980 +0x0ac:  setg   %al
08634983 +0x0af:  test   %al,%al
08634985 +0x0b1:  je     08634992 <+0xbe>
08634987 +0x0b3:  mov    -0x10(%ebp),%eax
0863498a +0x0b6:  mov    %eax,(%esp)
0863498d +0x0b9:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
08634992 +0x0be:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08634999 +0x0c5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863499e +0x0ca:  mov    %eax,-0x14(%ebp)
086349a1 +0x0cd:  lea    -0x40(%ebp),%eax
086349a4 +0x0d0:  mov    %eax,0x4(%esp)
086349a8 +0x0d4:  lea    -0x14(%ebp),%eax
086349ab +0x0d7:  mov    %eax,(%esp)
086349ae +0x0da:  call   0807e360 <_init+0xc58>
086349b3 +0x0df:  movl   $0x0,-0x38(%ebp)
086349ba +0x0e6:  movl   $0x0,-0x3c(%ebp)
086349c1 +0x0ed:  movl   $0x0,-0x40(%ebp)
086349c8 +0x0f4:  lea    -0x40(%ebp),%eax
086349cb +0x0f7:  mov    %eax,(%esp)
086349ce +0x0fa:  call   0807e820 <_init+0x1118>
086349d3 +0x0ff:  mov    %eax,-0xc(%ebp)
086349d6 +0x102:  mov    -0x38(%ebp),%eax
086349d9 +0x105:  test   %eax,%eax
086349db +0x107:  js     086349e4 <+0x110>
086349dd +0x109:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0xc(%ebp)
086349e4 +0x110:  mov    -0x14(%ebp),%eax
086349e7 +0x113:  mov    -0xc(%ebp),%edx
086349ea +0x116:  mov    %edx,%ebx
086349ec +0x118:  sub    %eax,%ebx
086349ee +0x11a:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086349f3 +0x11f:  mov    0x14(%ebp),%edx
086349f6 +0x122:  mov    %edx,0x18(%esp)
086349fa +0x126:  mov    0x10(%ebp),%edx
086349fd +0x129:  mov    %edx,0x14(%esp)
08634a01 +0x12d:  mov    %ebx,0x10(%esp)
08634a05 +0x131:  movl   $0x5,0xc(%esp)
08634a0d +0x139:  mov    0xc(%ebp),%edx
08634a10 +0x13c:  mov    %edx,0x8(%esp)
08634a14 +0x140:  movl   $0x0,0x4(%esp)
08634a1c +0x148:  mov    %eax,(%esp)
08634a1f +0x14b:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08634a24 +0x150:  mov    $0x1,%eax
08634a29 +0x155:  add    $0x64,%esp
08634a2c +0x158:  pop    %ebx
08634a2d +0x159:  pop    %ebp
08634a2e +0x15a:  ret
08634a2f +0x15b:  nop
```

## 反编译 C

```c
// TimerPremiumServiceUpdate::dispatch_sig @ 0x86348d4

/* TimerPremiumServiceUpdate::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerPremiumServiceUpdate::dispatch_sig
          (TimerPremiumServiceUpdate *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CUserPremium *pCVar5;
  TimerQueue *pTVar6;
  tm local_44;
  int local_18;
  CUser *local_14;
  int local_10;
  
  iVar2 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (local_14 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_acc_id(local_14);
    if (uVar4 == param_3) {
      cVar1 = CUser::IsPremiumUser(local_14);
      if (cVar1 == '\x01') {
        pCVar5 = (CUserPremium *)CUser::GetPremiumInfoW(local_14);
        WongWork::CUserPremium::ReCalcAdvantage(pCVar5);
        pCVar5 = (CUserPremium *)CUser::GetPremiumInfoW(local_14);
        WongWork::CUserPremium::RecalcAdditionalInfo(pCVar5,local_14);
        iVar2 = CUser::get_state(local_14);
        if (3 < iVar2) {
          CUser::SendFatigue(local_14);
        }
        local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        localtime_r(&local_18,&local_44);
        local_44.tm_hour = 0;
        local_44.tm_min = 0;
        local_44.tm_sec = 0;
        local_10 = mktime(&local_44);
        if (-1 < local_44.tm_hour) {
          local_10 = local_10 + 0x15180;
        }
        iVar2 = local_10 - local_18;
        pTVar6 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar6,0,param_1,5,iVar2,param_2,param_3);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
