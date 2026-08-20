# EvadeAssaultPlace

`_ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser`

`pvp_assault::CAssaultPlace::EvadeAssaultPlace(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eb49c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eb49c  _ZN11pvp_assault13CAssaultPlace17EvadeAssaultPlaceEP5CUser
#           pvp_assault::CAssaultPlace::EvadeAssaultPlace(CUser*)
# range [0x082eb49c, 0x082eb5e1]
082eb49c +0x000:  push   %ebp
082eb49d +0x001:  mov    %esp,%ebp
082eb49f +0x003:  sub    $0x28,%esp
082eb4a2 +0x006:  mov    0x8(%ebp),%eax
082eb4a5 +0x009:  mov    0x10c(%eax),%eax
082eb4ab +0x00f:  sub    $0x2,%eax
082eb4ae +0x012:  cmp    $0x1,%eax
082eb4b1 +0x015:  jbe    082eb500 <+0x64>
082eb4b3 +0x017:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082eb4ba +0x01e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082eb4bf +0x023:  mov    0x8(%ebp),%edx
082eb4c2 +0x026:  mov    0x13c(%edx),%edx
082eb4c8 +0x02c:  sub    %edx,%eax
082eb4ca +0x02e:  cmp    $0x5,%eax
082eb4cd +0x031:  setg   %al
082eb4d0 +0x034:  test   %al,%al
082eb4d2 +0x036:  je     082eb501 <+0x65>
082eb4d4 +0x038:  movl   $0x4,(%esp)
082eb4db +0x03f:  call   08725800 <__cxa_allocate_exception>
082eb4e0 +0x044:  mov    %eax,%edx
082eb4e2 +0x046:  movl   $0x13,(%edx)
082eb4e8 +0x04c:  movl   $0x0,0x8(%esp)
082eb4f0 +0x054:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eb4f8 +0x05c:  mov    %eax,(%esp)
082eb4fb +0x05f:  call   08724c50 <__cxa_throw>
082eb500 +0x064:  nop
082eb501 +0x065:  mov    0x8(%ebp),%eax
082eb504 +0x068:  mov    0x134(%eax),%eax
082eb50a +0x06e:  cmp    0xc(%ebp),%eax
082eb50d +0x071:  jne    082eb53b <+0x9f>
082eb50f +0x073:  movl   $0x4,(%esp)
082eb516 +0x07a:  call   08725800 <__cxa_allocate_exception>
082eb51b +0x07f:  mov    %eax,%edx
082eb51d +0x081:  movl   $0x13,(%edx)
082eb523 +0x087:  movl   $0x0,0x8(%esp)
082eb52b +0x08f:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eb533 +0x097:  mov    %eax,(%esp)
082eb536 +0x09a:  call   08724c50 <__cxa_throw>
082eb53b +0x09f:  movl   $0x1,0x8(%esp)
082eb543 +0x0a7:  mov    0xc(%ebp),%eax
082eb546 +0x0aa:  mov    %eax,0x4(%esp)
082eb54a +0x0ae:  mov    0x8(%ebp),%eax
082eb54d +0x0b1:  mov    %eax,(%esp)
082eb550 +0x0b4:  call   082e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>  ; pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)
082eb555 +0x0b9:  mov    %eax,-0xc(%ebp)
082eb558 +0x0bc:  mov    -0xc(%ebp),%eax
082eb55b +0x0bf:  shl    $0x5,%eax
082eb55e +0x0c2:  add    0x8(%ebp),%eax
082eb561 +0x0c5:  mov    %eax,(%esp)
082eb564 +0x0c8:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082eb569 +0x0cd:  mov    0x8(%ebp),%edx
082eb56c +0x0d0:  mov    0x124(%edx),%edx
082eb572 +0x0d6:  cmp    %edx,%eax
082eb574 +0x0d8:  setne  %al
082eb577 +0x0db:  test   %al,%al
082eb579 +0x0dd:  je     082eb5a7 <+0x10b>
082eb57b +0x0df:  movl   $0x4,(%esp)
082eb582 +0x0e6:  call   08725800 <__cxa_allocate_exception>
082eb587 +0x0eb:  mov    %eax,%edx
082eb589 +0x0ed:  movl   $0x13,(%edx)
082eb58f +0x0f3:  movl   $0x0,0x8(%esp)
082eb597 +0x0fb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eb59f +0x103:  mov    %eax,(%esp)
082eb5a2 +0x106:  call   08724c50 <__cxa_throw>
082eb5a7 +0x10b:  movl   $0x1,0x8(%esp)
082eb5af +0x113:  mov    0xc(%ebp),%eax
082eb5b2 +0x116:  mov    %eax,0x4(%esp)
082eb5b6 +0x11a:  mov    0x8(%ebp),%eax
082eb5b9 +0x11d:  mov    %eax,(%esp)
082eb5bc +0x120:  call   082e849a <_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb>  ; pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)
082eb5c1 +0x125:  movl   $0x1,0xc(%esp)
082eb5c9 +0x12d:  movl   $0x1,0x8(%esp)
082eb5d1 +0x135:  mov    %eax,0x4(%esp)
082eb5d5 +0x139:  mov    0x8(%ebp),%eax
082eb5d8 +0x13c:  mov    %eax,(%esp)
082eb5db +0x13f:  call   082ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
082eb5e0 +0x144:  leave
082eb5e1 +0x145:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::EvadeAssaultPlace @ 0x82eb49c

/* pvp_assault::CAssaultPlace::EvadeAssaultPlace(CUser*) */

void __thiscall pvp_assault::CAssaultPlace::EvadeAssaultPlace(CAssaultPlace *this,CUser *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (1 < *(int *)(this + 0x10c) - 2U) {
    iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (5 < iVar1 - *(int *)(this + 0x13c)) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
    }
  }
  if (*(CUser **)(this + 0x134) == param_1) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar1 = _GetUserIndex(this,param_1,true);
  iVar1 = CAssaulter::GetTeam((CAssaulter *)(this + iVar1 * 0x20));
  if (iVar1 != *(int *)(this + 0x124)) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar1 = _GetUserIndex(this,param_1,true);
  LeaveAssaultPlace(this,iVar1,true,true);
  return;
}
```
