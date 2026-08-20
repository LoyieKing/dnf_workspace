# dispatch_sig

`_ZN24TimerPremiumServiceStart12dispatch_sigEiij`

`TimerPremiumServiceStart::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerPremiumServiceStart` | `0x08634a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08634a30  _ZN24TimerPremiumServiceStart12dispatch_sigEiij
#           TimerPremiumServiceStart::dispatch_sig(int, int, unsigned int)
# range [0x08634a30, 0x08634b5f]
08634a30 +0x000:  push   %ebp
08634a31 +0x001:  mov    %esp,%ebp
08634a33 +0x003:  sub    $0x28,%esp
08634a36 +0x006:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634a3b +0x00b:  movl   $0x6,0x8(%esp)
08634a43 +0x013:  mov    0xc(%ebp),%edx
08634a46 +0x016:  mov    %edx,0x4(%esp)
08634a4a +0x01a:  mov    %eax,(%esp)
08634a4d +0x01d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08634a52 +0x022:  mov    %eax,-0x10(%ebp)
08634a55 +0x025:  cmpl   $0x0,-0x10(%ebp)
08634a59 +0x029:  jne    08634a65 <+0x35>
08634a5b +0x02b:  mov    $0x0,%eax
08634a60 +0x030:  jmp    08634b5d <+0x12d>
08634a65 +0x035:  mov    -0x10(%ebp),%eax
08634a68 +0x038:  mov    %eax,(%esp)
08634a6b +0x03b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08634a70 +0x040:  cmp    0x14(%ebp),%eax
08634a73 +0x043:  setne  %al
08634a76 +0x046:  test   %al,%al
08634a78 +0x048:  je     08634a84 <+0x54>
08634a7a +0x04a:  mov    $0x0,%eax
08634a7f +0x04f:  jmp    08634b5d <+0x12d>
08634a84 +0x054:  mov    -0x10(%ebp),%eax
08634a87 +0x057:  mov    %eax,(%esp)
08634a8a +0x05a:  call   0863be94 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3a5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3a5
08634a8f +0x05f:  movl   $0x0,0x8(%esp)
08634a97 +0x067:  mov    0x10(%ebp),%edx
08634a9a +0x06a:  mov    %edx,0x4(%esp)
08634a9e +0x06e:  mov    %eax,(%esp)
08634aa1 +0x071:  call   086adc6a <_ZN8WongWork12CUserPremium12startPremiumEib>  ; WongWork::CUserPremium::startPremium(int, bool)
08634aa6 +0x076:  xor    $0x1,%eax
08634aa9 +0x079:  test   %al,%al
08634aab +0x07b:  je     08634ab7 <+0x87>
08634aad +0x07d:  mov    $0x0,%eax
08634ab2 +0x082:  jmp    08634b5d <+0x12d>
08634ab7 +0x087:  mov    -0x10(%ebp),%eax
08634aba +0x08a:  mov    %eax,(%esp)
08634abd +0x08d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08634ac2 +0x092:  cmp    $0x2,%eax
08634ac5 +0x095:  setg   %al
08634ac8 +0x098:  test   %al,%al
08634aca +0x09a:  je     08634b58 <+0x128>
08634ad0 +0x0a0:  mov    -0x10(%ebp),%eax
08634ad3 +0x0a3:  mov    %eax,(%esp)
08634ad6 +0x0a6:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
08634adb +0x0ab:  mov    0x10(%ebp),%edx
08634ade +0x0ae:  mov    %edx,0x4(%esp)
08634ae2 +0x0b2:  mov    %eax,(%esp)
08634ae5 +0x0b5:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
08634aea +0x0ba:  mov    %eax,-0xc(%ebp)
08634aed +0x0bd:  mov    -0xc(%ebp),%eax
08634af0 +0x0c0:  mov    (%eax),%eax
08634af2 +0x0c2:  test   %eax,%eax
08634af4 +0x0c4:  jne    08634afd <+0xcd>
08634af6 +0x0c6:  mov    $0x1,%eax
08634afb +0x0cb:  jmp    08634b5d <+0x12d>
08634afd +0x0cd:  mov    -0xc(%ebp),%eax
08634b00 +0x0d0:  mov    0x8(%eax),%edx
08634b03 +0x0d3:  mov    -0xc(%ebp),%eax
08634b06 +0x0d6:  mov    0x4(%eax),%eax
08634b09 +0x0d9:  sub    %eax,%edx
08634b0b +0x0db:  mov    -0xc(%ebp),%eax
08634b0e +0x0de:  mov    (%eax),%eax
08634b10 +0x0e0:  mov    %edx,0x8(%esp)
08634b14 +0x0e4:  mov    %eax,0x4(%esp)
08634b18 +0x0e8:  mov    -0x10(%ebp),%eax
08634b1b +0x0eb:  mov    %eax,(%esp)
08634b1e +0x0ee:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
08634b23 +0x0f3:  mov    -0xc(%ebp),%eax
08634b26 +0x0f6:  mov    (%eax),%edx
08634b28 +0x0f8:  mov    %edx,%eax
08634b2a +0x0fa:  shl    $0x3,%eax
08634b2d +0x0fd:  add    %edx,%eax
08634b2f +0x0ff:  shl    $0x5,%eax
08634b32 +0x102:  mov    &g_SPremiumInfo(%eax),%eax
08634b38 +0x108:  cmp    $0x2,%eax
08634b3b +0x10b:  jne    08634b44 <+0x114>
08634b3d +0x10d:  mov    $0x1,%eax
08634b42 +0x112:  jmp    08634b5d <+0x12d>
08634b44 +0x114:  mov    -0xc(%ebp),%eax
08634b47 +0x117:  mov    (%eax),%eax
08634b49 +0x119:  mov    %eax,0x4(%esp)
08634b4d +0x11d:  mov    -0x10(%ebp),%eax
08634b50 +0x120:  mov    %eax,(%esp)
08634b53 +0x123:  call   086afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>  ; WongWork::CHandlePremium::handlePremiumEffect(CUser*, ENUM_PREMIUM_TYPE)
08634b58 +0x128:  mov    $0x1,%eax
08634b5d +0x12d:  leave
08634b5e +0x12e:  ret
08634b5f +0x12f:  nop
```

## 反编译 C

```c
// TimerPremiumServiceStart::dispatch_sig @ 0x8634a30

/* TimerPremiumServiceStart::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerPremiumServiceStart::dispatch_sig
          (TimerPremiumServiceStart *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  CUserPremium *pCVar5;
  int *piVar6;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_acc_id(this_00);
    if (uVar4 == param_3) {
      pCVar5 = (CUserPremium *)CUser::GetPremiumInfoW(this_00);
      cVar1 = WongWork::CUserPremium::startPremium(pCVar5,param_2,false);
      if (cVar1 == '\x01') {
        iVar2 = CUser::get_state(this_00);
        if (2 < iVar2) {
          pCVar5 = (CUserPremium *)CUser::GetPremiumInfo(this_00);
          piVar6 = (int *)WongWork::CUserPremium::GetPremiumInfo(pCVar5,param_2);
          if (*piVar6 == 0) {
            return 1;
          }
          WongWork::CHandlePremium::handleNotifyPremiumInfo(this_00,*piVar6,piVar6[2] - piVar6[1]);
          if (*(int *)(g_SPremiumInfo + *piVar6 * 0x120) == 2) {
            return 1;
          }
          WongWork::CHandlePremium::handlePremiumEffect(this_00,*piVar6);
        }
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
