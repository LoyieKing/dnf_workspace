# handlePremiumTimeout

`_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser`

`WongWork::CHandlePremium::handlePremiumTimeout(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086afa7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086afa7c  _ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser
#           WongWork::CHandlePremium::handlePremiumTimeout(CUser*)
# range [0x086afa7c, 0x086afc31]
086afa7c +0x000:  push   %ebp
086afa7d +0x001:  mov    %esp,%ebp
086afa7f +0x003:  push   %ebx
086afa80 +0x004:  sub    $0x44,%esp
086afa83 +0x007:  mov    0x8(%ebp),%eax
086afa86 +0x00a:  mov    %eax,(%esp)
086afa89 +0x00d:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
086afa8e +0x012:  lea    -0x1c(%ebp),%edx
086afa91 +0x015:  mov    %eax,0x4(%esp)
086afa95 +0x019:  mov    %edx,(%esp)
086afa98 +0x01c:  call   086add9c <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv>  ; WongWork::CUserPremium::CheckPremiumTimeout() const
086afa9d +0x021:  sub    $0x4,%esp
086afaa0 +0x024:  mov    -0x1c(%ebp),%eax
086afaa3 +0x027:  cmp    $0xc,%eax
086afaa6 +0x02a:  jne    086afaeb <+0x6f>
086afaa8 +0x02c:  mov    -0x1c(%ebp),%eax
086afaab +0x02f:  mov    %eax,%ebx
086afaad +0x031:  mov    0x8(%ebp),%eax
086afab0 +0x034:  mov    %eax,(%esp)
086afab3 +0x037:  call   0863be94 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3a5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3a5
086afab8 +0x03c:  movl   $0x3,0x8(%esp)
086afac0 +0x044:  mov    %ebx,0x4(%esp)
086afac4 +0x048:  mov    %eax,(%esp)
086afac7 +0x04b:  call   086b084c <_GLOBAL__I_g_SPremiumInfo+0x42>  ; global constructors keyed to g_SPremiumInfo+0x42
086afacc +0x050:  mov    -0x1c(%ebp),%eax
086afacf +0x053:  movl   $0x0,0x8(%esp)
086afad7 +0x05b:  mov    %eax,0x4(%esp)
086afadb +0x05f:  mov    0x8(%ebp),%eax
086afade +0x062:  mov    %eax,(%esp)
086afae1 +0x065:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
086afae6 +0x06a:  jmp    086afc2d <+0x1b1>
086afaeb +0x06f:  mov    -0x1c(%ebp),%eax
086afaee +0x072:  test   %eax,%eax
086afaf0 +0x074:  je     086afc2d <+0x1b1>
086afaf6 +0x07a:  mov    -0x1c(%ebp),%eax
086afaf9 +0x07d:  movl   $0x1,0x14(%esp)
086afb01 +0x085:  movl   $0x0,0x10(%esp)
086afb09 +0x08d:  movl   $0x0,0xc(%esp)
086afb11 +0x095:  movl   $0x0,0x8(%esp)
086afb19 +0x09d:  mov    %eax,0x4(%esp)
086afb1d +0x0a1:  mov    0x8(%ebp),%eax
086afb20 +0x0a4:  mov    %eax,(%esp)
086afb23 +0x0a7:  call   086af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>  ; WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
086afb28 +0x0ac:  mov    -0x10(%ebp),%eax
086afb2b +0x0af:  mov    %eax,0x4(%esp)
086afb2f +0x0b3:  mov    0x8(%ebp),%eax
086afb32 +0x0b6:  mov    %eax,(%esp)
086afb35 +0x0b9:  call   0864d90a <_ZN5CUser21RemoveRestrictedGoodsEi>  ; CUser::RemoveRestrictedGoods(int)
086afb3a +0x0be:  mov    0x8(%ebp),%eax
086afb3d +0x0c1:  mov    %eax,(%esp)
086afb40 +0x0c4:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086afb45 +0x0c9:  test   %eax,%eax
086afb47 +0x0cb:  setne  %al
086afb4a +0x0ce:  test   %al,%al
086afb4c +0x0d0:  je     086afc13 <+0x197>
086afb52 +0x0d6:  mov    0x8(%ebp),%eax
086afb55 +0x0d9:  mov    %eax,(%esp)
086afb58 +0x0dc:  call   0867cbe4 <_ZN5CUser18ProcPremiumFatigueEv>  ; CUser::ProcPremiumFatigue()
086afb5d +0x0e1:  mov    0x8(%ebp),%eax
086afb60 +0x0e4:  mov    %eax,(%esp)
086afb63 +0x0e7:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
086afb68 +0x0ec:  mov    -0x1c(%ebp),%edx
086afb6b +0x0ef:  mov    %edx,%eax
086afb6d +0x0f1:  shl    $0x3,%eax
086afb70 +0x0f4:  add    %edx,%eax
086afb72 +0x0f6:  shl    $0x5,%eax
086afb75 +0x0f9:  mov    &g_SPremiumInfo(%eax),%eax
086afb7b +0x0ff:  cmp    $0x1,%eax
086afb7e +0x102:  jne    086afbc5 <+0x149>
086afb80 +0x104:  mov    -0x1c(%ebp),%edx
086afb83 +0x107:  mov    %edx,%eax
086afb85 +0x109:  shl    $0x3,%eax
086afb88 +0x10c:  add    %edx,%eax
086afb8a +0x10e:  shl    $0x5,%eax
086afb8d +0x111:  mov    &g_SPremiumInfo+0x64(%eax),%eax
086afb93 +0x117:  test   %eax,%eax
086afb95 +0x119:  jle    086afba2 <+0x126>
086afb97 +0x11b:  mov    0x8(%ebp),%eax
086afb9a +0x11e:  mov    %eax,(%esp)
086afb9d +0x121:  call   0867ceae <_ZN5CUser25SetNeedCheckOverEquipItemEv>  ; CUser::SetNeedCheckOverEquipItem()
086afba2 +0x126:  movl   $0x1,0xc(%esp)
086afbaa +0x12e:  movl   $0x2,0x8(%esp)
086afbb2 +0x136:  movl   $0x1,0x4(%esp)
086afbba +0x13e:  mov    0x8(%ebp),%eax
086afbbd +0x141:  mov    %eax,(%esp)
086afbc0 +0x144:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
086afbc5 +0x149:  mov    -0x1c(%ebp),%eax
086afbc8 +0x14c:  cmp    $0x53,%eax
086afbcb +0x14f:  je     086afbfd <+0x181>
086afbcd +0x151:  cmp    $0x57,%eax
086afbd0 +0x154:  je     086afbfd <+0x181>
086afbd2 +0x156:  cmp    $0x21,%eax
086afbd5 +0x159:  jne    086afc13 <+0x197>
086afbd7 +0x15b:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
086afbde +0x162:  movzbl %al,%edx
086afbe1 +0x165:  mov    0x8(%ebp),%eax
086afbe4 +0x168:  mov    %edx,0x4(%esp)
086afbe8 +0x16c:  mov    %eax,(%esp)
086afbeb +0x16f:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
086afbf0 +0x174:  mov    0x8(%ebp),%eax
086afbf3 +0x177:  mov    %eax,(%esp)
086afbf6 +0x17a:  call   086b087c <_GLOBAL__I_g_SPremiumInfo+0x72>  ; global constructors keyed to g_SPremiumInfo+0x72
086afbfb +0x17f:  jmp    086afc13 <+0x197>
086afbfd +0x181:  mov    0x8(%ebp),%eax
086afc00 +0x184:  mov    %eax,(%esp)
086afc03 +0x187:  call   08689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>  ; CUser::ReCalcChattingEmoticon()
086afc08 +0x18c:  mov    0x8(%ebp),%eax
086afc0b +0x18f:  mov    %eax,(%esp)
086afc0e +0x192:  call   08689b90 <_ZN5CUser20SendChattingEmoticonEv>  ; CUser::SendChattingEmoticon()
086afc13 +0x197:  mov    -0x1c(%ebp),%eax
086afc16 +0x19a:  movl   $0x0,0x8(%esp)
086afc1e +0x1a2:  mov    %eax,0x4(%esp)
086afc22 +0x1a6:  mov    0x8(%ebp),%eax
086afc25 +0x1a9:  mov    %eax,(%esp)
086afc28 +0x1ac:  call   086af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>  ; WongWork::CHandlePremium::handleNotifyPremiumInfo(CUser*, int, int)
086afc2d +0x1b1:  mov    -0x4(%ebp),%ebx
086afc30 +0x1b4:  leave
086afc31 +0x1b5:  ret
```

## 反编译 C

```c
// WongWork::CHandlePremium::handlePremiumTimeout @ 0x86afa7c

/* WongWork::CHandlePremium::handlePremiumTimeout(CUser*) */

void WongWork::CHandlePremium::handlePremiumTimeout(CUser *param_1)

{
  CUserPremium *pCVar1;
  int iVar2;
  int local_20;
  
  CUser::GetPremiumInfo(param_1);
  CUserPremium::CheckPremiumTimeout();
  if (local_20 == 0xc) {
    pCVar1 = (CUserPremium *)CUser::GetPremiumInfoW(param_1);
    CUserPremium::setPremiumState(pCVar1,0xc,3);
    handleNotifyPremiumInfo(param_1,0xc,0);
  }
  else if (local_20 != 0) {
    handleSetUserPremium(param_1,local_20,0,0,0,1);
    CUser::RemoveRestrictedGoods((int)param_1);
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      CUser::ProcPremiumFatigue(param_1);
      CUser::SendFatigue(param_1);
      if (*(int *)(g_SPremiumInfo + local_20 * 0x120) == 1) {
        if (0 < *(int *)(g_SPremiumInfo + local_20 * 0x120 + 100)) {
          CUser::SetNeedCheckOverEquipItem(param_1);
        }
        CUser::SendNotiPacket(param_1,1,2,1);
      }
      if ((local_20 == 0x53) || (local_20 == 0x57)) {
        CUser::ReCalcChattingEmoticon(param_1);
        CUser::SendChattingEmoticon(param_1);
      }
      else if (local_20 == 0x21) {
        CUserCharacInfo::SetOneDayLetheFlag
                  ((CUserCharacInfo *)param_1,CPremiumLetheManager::NOT_USE_LETHE_STATE);
        CUserCharacInfo::SetIsEndLetheAtLogin((CUserCharacInfo *)param_1);
      }
    }
    handleNotifyPremiumInfo(param_1,local_20,0);
  }
  return;
}
```
