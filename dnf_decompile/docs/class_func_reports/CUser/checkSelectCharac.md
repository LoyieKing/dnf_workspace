# checkSelectCharac

`_ZN5CUser17checkSelectCharacEi`

`CUser::checkSelectCharac(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864aaf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864aaf6  _ZN5CUser17checkSelectCharacEi
#           CUser::checkSelectCharac(int)
# range [0x0864aaf6, 0x0864ac19]
0864aaf6 +0x000:  push   %ebp
0864aaf7 +0x001:  mov    %esp,%ebp
0864aaf9 +0x003:  push   %ebx
0864aafa +0x004:  sub    $0x24,%esp
0864aafd +0x007:  mov    0x8(%ebp),%eax
0864ab00 +0x00a:  mov    %eax,(%esp)
0864ab03 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864ab08 +0x012:  test   %eax,%eax
0864ab0a +0x014:  setne  %al
0864ab0d +0x017:  test   %al,%al
0864ab0f +0x019:  je     0864ab51 <+0x5b>
0864ab11 +0x01b:  movl   $0x5,0xc(%esp)
0864ab19 +0x023:  movl   $0xea4,0x8(%esp)
0864ab21 +0x02b:  movl   $&_ZZN5CUser17checkSelectCharacEiE19__PRETTY_FUNCTION__,0x4(%esp)
0864ab29 +0x033:  lea    -0x18(%ebp),%eax
0864ab2c +0x036:  mov    %eax,(%esp)
0864ab2f +0x039:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864ab34 +0x03e:  movl   $"CUser::SelectCharac m_selected is not null",0x4(%esp)
0864ab3c +0x046:  lea    -0x18(%ebp),%eax
0864ab3f +0x049:  mov    %eax,(%esp)
0864ab42 +0x04c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864ab47 +0x051:  mov    $0x0,%eax
0864ab4c +0x056:  jmp    0864ac14 <+0x11e>
0864ab51 +0x05b:  cmpl   $0x0,0xc(%ebp)
0864ab55 +0x05f:  js     0864ab73 <+0x7d>
0864ab57 +0x061:  mov    0x8(%ebp),%eax
0864ab5a +0x064:  add    $0x796e8,%eax
0864ab5f +0x069:  mov    %eax,(%esp)
0864ab62 +0x06c:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0864ab67 +0x071:  cmp    0xc(%ebp),%eax
0864ab6a +0x074:  jle    0864ab73 <+0x7d>
0864ab6c +0x076:  mov    $0x1,%eax
0864ab71 +0x07b:  jmp    0864ab78 <+0x82>
0864ab73 +0x07d:  mov    $0x0,%eax
0864ab78 +0x082:  test   %al,%al
0864ab7a +0x084:  je     0864ac0f <+0x119>
0864ab80 +0x08a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0864ab85 +0x08f:  mov    %eax,(%esp)
0864ab88 +0x092:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0864ab8d +0x097:  test   %al,%al
0864ab8f +0x099:  je     0864ac08 <+0x112>
0864ab91 +0x09b:  mov    0xc(%ebp),%eax
0864ab94 +0x09e:  mov    0x8(%ebp),%edx
0864ab97 +0x0a1:  add    $0x796e8,%edx
0864ab9d +0x0a7:  mov    %eax,0x4(%esp)
0864aba1 +0x0ab:  mov    %edx,(%esp)
0864aba4 +0x0ae:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864aba9 +0x0b3:  movzwl 0x27(%eax),%eax
0864abad +0x0b7:  movswl %ax,%ebx
0864abb0 +0x0ba:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864abb5 +0x0bf:  mov    %eax,(%esp)
0864abb8 +0x0c2:  call   0819ee2e <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x6a>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x6a
0864abbd +0x0c7:  cmp    %eax,%ebx
0864abbf +0x0c9:  jl     0864abf1 <+0xfb>
0864abc1 +0x0cb:  mov    0xc(%ebp),%eax
0864abc4 +0x0ce:  mov    0x8(%ebp),%edx
0864abc7 +0x0d1:  add    $0x796e8,%edx
0864abcd +0x0d7:  mov    %eax,0x4(%esp)
0864abd1 +0x0db:  mov    %edx,(%esp)
0864abd4 +0x0de:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
0864abd9 +0x0e3:  movzwl 0x27(%eax),%eax
0864abdd +0x0e7:  movswl %ax,%ebx
0864abe0 +0x0ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0864abe5 +0x0ef:  mov    %eax,(%esp)
0864abe8 +0x0f2:  call   0819ee3c <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x78>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x78
0864abed +0x0f7:  cmp    %eax,%ebx
0864abef +0x0f9:  jle    0864abf8 <+0x102>
0864abf1 +0x0fb:  mov    $0x1,%eax
0864abf6 +0x100:  jmp    0864abfd <+0x107>
0864abf8 +0x102:  mov    $0x0,%eax
0864abfd +0x107:  test   %al,%al
0864abff +0x109:  je     0864ac08 <+0x112>
0864ac01 +0x10b:  mov    $0x0,%eax
0864ac06 +0x110:  jmp    0864ac14 <+0x11e>
0864ac08 +0x112:  mov    $0x1,%eax
0864ac0d +0x117:  jmp    0864ac14 <+0x11e>
0864ac0f +0x119:  mov    $0x0,%eax
0864ac14 +0x11e:  add    $0x24,%esp
0864ac17 +0x121:  pop    %ebx
0864ac18 +0x122:  pop    %ebp
0864ac19 +0x123:  ret
```

## 反编译 C

```c
// CUser::checkSelectCharac @ 0x864aaf6

/* CUser::checkSelectCharac(int) */

undefined4 __thiscall CUser::checkSelectCharac(CUser *this,int param_1)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  CDataManager *pCVar5;
  cMyTrace local_1c [20];
  
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar4 != 0) {
    cMyTrace::cMyTrace(local_1c,"bool CUser::checkSelectCharac(int)",0xea4,5);
    cMyTrace::operator()(local_1c,"CUser::SelectCharac m_selected is not null");
    return 0;
  }
  if ((param_1 < 0) ||
     (iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8)),
     iVar4 <= param_1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsPVPChannel(this_00);
  if (cVar3 == '\0') {
    return 1;
  }
  iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                    ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),param_1);
  sVar1 = *(short *)(iVar4 + 0x27);
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar4 = CDataManager::GetMinLevelPvPChannel(pCVar5);
  if (iVar4 <= sVar1) {
    iVar4 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),param_1
                      );
    sVar1 = *(short *)(iVar4 + 0x27);
    pCVar5 = (CDataManager *)G_CDataManager();
    iVar4 = CDataManager::GetMaxLevelPvPChannel(pCVar5);
    if (sVar1 <= iVar4) {
      bVar2 = false;
      goto LAB_0864abfd;
    }
  }
  bVar2 = true;
LAB_0864abfd:
  if (!bVar2) {
    return 1;
  }
  return 0;
}
```
