# handleSetUserPremium

`_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib`

`WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CHandlePremium` | `0x086af7e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086af7e8  _ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib
#           WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
# range [0x086af7e8, 0x086af8b3]
086af7e8 +0x00:  push   %ebp
086af7e9 +0x01:  mov    %esp,%ebp
086af7eb +0x03:  sub    $0x48,%esp
086af7ee +0x06:  mov    0x1c(%ebp),%eax
086af7f1 +0x09:  mov    %al,-0x1c(%ebp)
086af7f4 +0x0c:  mov    0x8(%ebp),%eax
086af7f7 +0x0f:  mov    %eax,(%esp)
086af7fa +0x12:  call   0863be94 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x3a5>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x3a5
086af7ff +0x17:  mov    %eax,-0x10(%ebp)
086af802 +0x1a:  cmpl   $0x5,0xc(%ebp)
086af806 +0x1e:  jne    086af831 <+0x49>
086af808 +0x20:  mov    0xc(%ebp),%eax
086af80b +0x23:  mov    0x18(%ebp),%edx
086af80e +0x26:  mov    %edx,0x10(%esp)
086af812 +0x2a:  mov    0x14(%ebp),%edx
086af815 +0x2d:  mov    %edx,0xc(%esp)
086af819 +0x31:  mov    0x10(%ebp),%edx
086af81c +0x34:  mov    %edx,0x8(%esp)
086af820 +0x38:  mov    %eax,0x4(%esp)
086af824 +0x3c:  mov    -0x10(%ebp),%eax
086af827 +0x3f:  mov    %eax,(%esp)
086af82a +0x42:  call   086adad2 <_ZN8WongWork12CUserPremium10AddPremiumEiiii>  ; WongWork::CUserPremium::AddPremium(int, int, int, int)
086af82f +0x47:  jmp    086af88f <+0xa7>
086af831 +0x49:  cmpl   $0x0,0x10(%ebp)
086af835 +0x4d:  je     086af83d <+0x55>
086af837 +0x4f:  cmpl   $0x0,0x14(%ebp)
086af83b +0x53:  jne    086af851 <+0x69>
086af83d +0x55:  mov    0xc(%ebp),%eax
086af840 +0x58:  mov    %eax,0x4(%esp)
086af844 +0x5c:  mov    -0x10(%ebp),%eax
086af847 +0x5f:  mov    %eax,(%esp)
086af84a +0x62:  call   086adba6 <_ZN8WongWork12CUserPremium13RemovePremiumEi>  ; WongWork::CUserPremium::RemovePremium(int)
086af84f +0x67:  jmp    086af88f <+0xa7>
086af851 +0x69:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086af858 +0x70:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086af85d +0x75:  mov    %eax,-0xc(%ebp)
086af860 +0x78:  mov    -0xc(%ebp),%eax
086af863 +0x7b:  cmp    0x14(%ebp),%eax
086af866 +0x7e:  jge    086af88f <+0xa7>
086af868 +0x80:  mov    0xc(%ebp),%eax
086af86b +0x83:  mov    0x18(%ebp),%edx
086af86e +0x86:  mov    %edx,0x10(%esp)
086af872 +0x8a:  mov    0x14(%ebp),%edx
086af875 +0x8d:  mov    %edx,0xc(%esp)
086af879 +0x91:  mov    0x10(%ebp),%edx
086af87c +0x94:  mov    %edx,0x8(%esp)
086af880 +0x98:  mov    %eax,0x4(%esp)
086af884 +0x9c:  mov    -0x10(%ebp),%eax
086af887 +0x9f:  mov    %eax,(%esp)
086af88a +0xa2:  call   086adad2 <_ZN8WongWork12CUserPremium10AddPremiumEiiii>  ; WongWork::CUserPremium::AddPremium(int, int, int, int)
086af88f +0xa7:  cmpb   $0x0,-0x1c(%ebp)
086af893 +0xab:  je     086af8b2 <+0xca>
086af895 +0xad:  mov    -0x10(%ebp),%eax
086af898 +0xb0:  mov    %eax,(%esp)
086af89b +0xb3:  call   086ae10e <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv>  ; WongWork::CUserPremium::ReCalcAdvantage()
086af8a0 +0xb8:  mov    0x8(%ebp),%eax
086af8a3 +0xbb:  mov    %eax,0x4(%esp)
086af8a7 +0xbf:  mov    -0x10(%ebp),%eax
086af8aa +0xc2:  mov    %eax,(%esp)
086af8ad +0xc5:  call   086ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>  ; WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*)
086af8b2 +0xca:  leave
086af8b3 +0xcb:  ret
```

## 反编译 C

```c
// WongWork::CHandlePremium::handleSetUserPremium @ 0x86af7e8

/* WongWork::CHandlePremium::handleSetUserPremium(CUser*, ENUM_PREMIUM_TYPE, long, long, int, bool)
    */

void WongWork::CHandlePremium::handleSetUserPremium
               (CUser *param_1,int param_2,int param_3,int param_4,int param_5,char param_6)

{
  CUserPremium *this;
  int iVar1;
  
  this = (CUserPremium *)CUser::GetPremiumInfoW(param_1);
  if (param_2 == 5) {
    CUserPremium::AddPremium(this,5,param_3,param_4,param_5);
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    CUserPremium::RemovePremium(this,param_2);
  }
  else {
    iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar1 < param_4) {
      CUserPremium::AddPremium(this,param_2,param_3,param_4,param_5);
    }
  }
  if (param_6 != '\0') {
    CUserPremium::ReCalcAdvantage(this);
    CUserPremium::RecalcAdditionalInfo(this,param_1);
  }
  return;
}
```
