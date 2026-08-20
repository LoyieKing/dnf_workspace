# AbuseUser

`_ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser`

`pvp_assault::CAssaultPlace::AbuseUser(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eb5e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eb5e2  _ZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUser
#           pvp_assault::CAssaultPlace::AbuseUser(CUser*)
# range [0x082eb5e2, 0x082eb773]
082eb5e2 +0x000:  push   %ebp
082eb5e3 +0x001:  mov    %esp,%ebp
082eb5e5 +0x003:  push   %esi
082eb5e6 +0x004:  push   %ebx
082eb5e7 +0x005:  sub    $0x40,%esp
082eb5ea +0x008:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082eb5f1 +0x00f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082eb5f6 +0x014:  mov    0x8(%ebp),%edx
082eb5f9 +0x017:  mov    0x13c(%edx),%edx
082eb5ff +0x01d:  sub    %edx,%eax
082eb601 +0x01f:  cmp    $0x13,%eax
082eb604 +0x022:  setle  %al
082eb607 +0x025:  test   %al,%al
082eb609 +0x027:  je     082eb66f <+0x8d>
082eb60b +0x029:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082eb612 +0x030:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082eb617 +0x035:  mov    0x8(%ebp),%edx
082eb61a +0x038:  mov    0x13c(%edx),%edx
082eb620 +0x03e:  mov    %eax,%esi
082eb622 +0x040:  sub    %edx,%esi
082eb624 +0x042:  mov    0xc(%ebp),%eax
082eb627 +0x045:  mov    %eax,(%esp)
082eb62a +0x048:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
082eb62f +0x04d:  mov    %eax,%ebx
082eb631 +0x04f:  movl   $0x0,0xc(%esp)
082eb639 +0x057:  movl   $0xc23,0x8(%esp)
082eb641 +0x05f:  movl   $&_ZZN11pvp_assault13CAssaultPlace9AbuseUserEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
082eb649 +0x067:  lea    -0x1c(%ebp),%eax
082eb64c +0x06a:  mov    %eax,(%esp)
082eb64f +0x06d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082eb654 +0x072:  mov    %esi,0xc(%esp)
082eb658 +0x076:  mov    %ebx,0x8(%esp)
082eb65c +0x07a:  movl   $"CAssaultPlace::AbuseUser() charac_no(%d), timeout sec(%d)",0x4(%esp)
082eb664 +0x082:  lea    -0x1c(%ebp),%eax
082eb667 +0x085:  mov    %eax,(%esp)
082eb66a +0x088:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
082eb66f +0x08d:  mov    0x8(%ebp),%eax
082eb672 +0x090:  mov    0x10c(%eax),%eax
082eb678 +0x096:  cmp    $0x4,%eax
082eb67b +0x099:  jne    082eb76d <+0x18b>
082eb681 +0x09f:  movl   $0x0,-0xc(%ebp)
082eb688 +0x0a6:  jmp    082eb6fe <+0x11c>
082eb68a +0x0a8:  mov    -0xc(%ebp),%eax
082eb68d +0x0ab:  shl    $0x5,%eax
082eb690 +0x0ae:  add    0x8(%ebp),%eax
082eb693 +0x0b1:  mov    %eax,(%esp)
082eb696 +0x0b4:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eb69b +0x0b9:  test   %al,%al
082eb69d +0x0bb:  jne    082eb6f9 <+0x117>
082eb69f +0x0bd:  mov    -0xc(%ebp),%eax
082eb6a2 +0x0c0:  shl    $0x5,%eax
082eb6a5 +0x0c3:  add    0x8(%ebp),%eax
082eb6a8 +0x0c6:  mov    %eax,(%esp)
082eb6ab +0x0c9:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eb6b0 +0x0ce:  mov    %eax,%ebx
082eb6b2 +0x0d0:  mov    -0xc(%ebp),%eax
082eb6b5 +0x0d3:  shl    $0x5,%eax
082eb6b8 +0x0d6:  add    0x8(%ebp),%eax
082eb6bb +0x0d9:  mov    %eax,(%esp)
082eb6be +0x0dc:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eb6c3 +0x0e1:  mov    %eax,(%esp)
082eb6c6 +0x0e4:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082eb6cb +0x0e9:  movl   $0x0,0x14(%esp)
082eb6d3 +0x0f1:  movl   $0x0,0x10(%esp)
082eb6db +0x0f9:  movl   $0x1,0xc(%esp)
082eb6e3 +0x101:  movl   $0x32e,0x8(%esp)
082eb6eb +0x109:  mov    %ebx,0x4(%esp)
082eb6ef +0x10d:  mov    %eax,(%esp)
082eb6f2 +0x110:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
082eb6f7 +0x115:  jmp    082eb6fa <+0x118>
082eb6f9 +0x117:  nop
082eb6fa +0x118:  addl   $0x1,-0xc(%ebp)
082eb6fe +0x11c:  cmpl   $0x7,-0xc(%ebp)
082eb702 +0x120:  setle  %al
082eb705 +0x123:  test   %al,%al
082eb707 +0x125:  jne    082eb68a <+0xa8>
082eb709 +0x127:  mov    0x8(%ebp),%eax
082eb70c +0x12a:  movl   $0x6,0x10c(%eax)
082eb716 +0x134:  mov    0x8(%ebp),%eax
082eb719 +0x137:  mov    0x12c(%eax),%eax
082eb71f +0x13d:  test   %eax,%eax
082eb721 +0x13f:  je     082eb73c <+0x15a>
082eb723 +0x141:  mov    0x8(%ebp),%eax
082eb726 +0x144:  mov    0x12c(%eax),%eax
082eb72c +0x14a:  movl   $0x6,0x4(%esp)
082eb734 +0x152:  mov    %eax,(%esp)
082eb737 +0x155:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb73c +0x15a:  mov    0x8(%ebp),%eax
082eb73f +0x15d:  mov    0x130(%eax),%eax
082eb745 +0x163:  test   %eax,%eax
082eb747 +0x165:  je     082eb762 <+0x180>
082eb749 +0x167:  mov    0x8(%ebp),%eax
082eb74c +0x16a:  mov    0x130(%eax),%eax
082eb752 +0x170:  movl   $0x6,0x4(%esp)
082eb75a +0x178:  mov    %eax,(%esp)
082eb75d +0x17b:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082eb762 +0x180:  mov    0x8(%ebp),%eax
082eb765 +0x183:  mov    %eax,(%esp)
082eb768 +0x186:  call   082ea188 <_ZN11pvp_assault13CAssaultPlace19TimeoutCloseAssaultEv>  ; pvp_assault::CAssaultPlace::TimeoutCloseAssault()
082eb76d +0x18b:  add    $0x40,%esp
082eb770 +0x18e:  pop    %ebx
082eb771 +0x18f:  pop    %esi
082eb772 +0x190:  pop    %ebp
082eb773 +0x191:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::AbuseUser @ 0x82eb5e2

/* pvp_assault::CAssaultPlace::AbuseUser(CUser*) */

void __thiscall pvp_assault::CAssaultPlace::AbuseUser(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CUser *this_00;
  CHackAnalyzer *pCVar5;
  cMyTrace local_20 [16];
  int local_10;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar2 - *(int *)(this + 0x13c) < 0x14) {
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar2 = *(int *)(this + 0x13c);
    uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cMyTrace::cMyTrace(local_20,"void pvp_assault::CAssaultPlace::AbuseUser(CUser*)",0xc23,0);
    cMyTrace::operator()
              (local_20,"CAssaultPlace::AbuseUser() charac_no(%d), timeout sec(%d)",uVar4,
               iVar3 - iVar2);
  }
  if (*(int *)(this + 0x10c) == 4) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
      if (cVar1 == '\0') {
        uVar4 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(this_00);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar4,0x32e,1,0,0);
      }
    }
    *(undefined4 *)(this + 0x10c) = 6;
    if (*(int *)(this + 300) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 300),'\x06');
    }
    if (*(int *)(this + 0x130) != 0) {
      CParty::SetAssaultState(*(CParty **)(this + 0x130),'\x06');
    }
    TimeoutCloseAssault(this);
  }
  return;
}
```
