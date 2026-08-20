# _PowerWarAssaultCheckIn

`_ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv`

`pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e72fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e72fa  _ZN11pvp_assault13CAssaultPlace23_PowerWarAssaultCheckInEv
#           pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn()
# range [0x082e72fa, 0x082e7361]
082e72fa +0x00:  push   %ebp
082e72fb +0x01:  mov    %esp,%ebp
082e72fd +0x03:  sub    $0x28,%esp
082e7300 +0x06:  movl   $0x0,-0x10(%ebp)
082e7307 +0x0d:  jmp    082e7354 <+0x5a>
082e7309 +0x0f:  mov    -0x10(%ebp),%eax
082e730c +0x12:  shl    $0x5,%eax
082e730f +0x15:  add    0x8(%ebp),%eax
082e7312 +0x18:  mov    %eax,(%esp)
082e7315 +0x1b:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e731a +0x20:  test   %al,%al
082e731c +0x22:  jne    082e734f <+0x55>
082e731e +0x24:  mov    -0x10(%ebp),%eax
082e7321 +0x27:  shl    $0x5,%eax
082e7324 +0x2a:  add    0x8(%ebp),%eax
082e7327 +0x2d:  mov    %eax,(%esp)
082e732a +0x30:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e732f +0x35:  mov    %eax,-0xc(%ebp)
082e7332 +0x38:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
082e7339 +0x3f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
082e733e +0x44:  mov    -0xc(%ebp),%edx
082e7341 +0x47:  mov    %eax,0x4(%esp)
082e7345 +0x4b:  mov    %edx,(%esp)
082e7348 +0x4e:  call   082f0982 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x706>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x706
082e734d +0x53:  jmp    082e7350 <+0x56>
082e734f +0x55:  nop
082e7350 +0x56:  addl   $0x1,-0x10(%ebp)
082e7354 +0x5a:  cmpl   $0x7,-0x10(%ebp)
082e7358 +0x5e:  setle  %al
082e735b +0x61:  test   %al,%al
082e735d +0x63:  jne    082e7309 <+0xf>
082e735f +0x65:  leave
082e7360 +0x66:  ret
082e7361 +0x67:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn @ 0x82e72fa

/* pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn() */

void __thiscall pvp_assault::CAssaultPlace::_PowerWarAssaultCheckIn(CAssaultPlace *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  long lVar2;
  int local_14;
  
  for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_14 * 0x20));
    if (cVar1 == '\0') {
      this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_14 * 0x20));
      lVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      CUserCharacInfo::SetPowerWarLastPlayTime(this_00,lVar2);
    }
  }
  return;
}
```
