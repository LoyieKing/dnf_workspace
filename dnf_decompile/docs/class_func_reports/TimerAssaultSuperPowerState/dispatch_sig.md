# dispatch_sig

`_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij`

`TimerAssaultSuperPowerState::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerAssaultSuperPowerState` | `0x0863414e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863414e  _ZN27TimerAssaultSuperPowerState12dispatch_sigEiij
#           TimerAssaultSuperPowerState::dispatch_sig(int, int, unsigned int)
# range [0x0863414e, 0x086341d1]
0863414e +0x00:  push   %ebp
0863414f +0x01:  mov    %esp,%ebp
08634151 +0x03:  sub    $0x28,%esp
08634154 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08634159 +0x0b:  movl   $0x3,0x8(%esp)
08634161 +0x13:  mov    0xc(%ebp),%edx
08634164 +0x16:  mov    %edx,0x4(%esp)
08634168 +0x1a:  mov    %eax,(%esp)
0863416b +0x1d:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
08634170 +0x22:  mov    %eax,-0xc(%ebp)
08634173 +0x25:  cmpl   $0x0,-0xc(%ebp)
08634177 +0x29:  jne    08634180 <+0x32>
08634179 +0x2b:  mov    $0x0,%eax
0863417e +0x30:  jmp    086341d0 <+0x82>
08634180 +0x32:  cmpl   $0x0,0x14(%ebp)
08634184 +0x36:  je     0863419d <+0x4f>
08634186 +0x38:  mov    -0xc(%ebp),%eax
08634189 +0x3b:  mov    %eax,(%esp)
0863418c +0x3e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08634191 +0x43:  cmp    0x14(%ebp),%eax
08634194 +0x46:  je     0863419d <+0x4f>
08634196 +0x48:  mov    $0x1,%eax
0863419b +0x4d:  jmp    086341a2 <+0x54>
0863419d +0x4f:  mov    $0x0,%eax
086341a2 +0x54:  test   %al,%al
086341a4 +0x56:  je     086341ad <+0x5f>
086341a6 +0x58:  mov    $0x0,%eax
086341ab +0x5d:  jmp    086341d0 <+0x82>
086341ad +0x5f:  mov    -0xc(%ebp),%eax
086341b0 +0x62:  movl   $0x0,0x4(%esp)
086341b8 +0x6a:  mov    %eax,(%esp)
086341bb +0x6d:  call   082f0b60 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x8e4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x8e4
086341c0 +0x72:  mov    -0xc(%ebp),%eax
086341c3 +0x75:  mov    %eax,(%esp)
086341c6 +0x78:  call   082e83c4 <_ZN11pvp_assault13CAssaultPlace13SendUserStateEP5CUser>  ; pvp_assault::CAssaultPlace::SendUserState(CUser*)
086341cb +0x7d:  mov    $0x1,%eax
086341d0 +0x82:  leave
086341d1 +0x83:  ret
```

## 反编译 C

```c
// TimerAssaultSuperPowerState::dispatch_sig @ 0x863414e

/* TimerAssaultSuperPowerState::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerAssaultSuperPowerState::dispatch_sig
          (TimerAssaultSuperPowerState *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  uint uVar3;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return false;
  }
  if ((param_3 == 0) || (uVar3 = CUserCharacInfo::getCurCharacNo(this_00), uVar3 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    CUserCharacInfo::SetCurCharacSuperState(this_00,false);
    pvp_assault::CAssaultPlace::SendUserState((CUser *)this_00);
  }
  return !bVar1;
}
```
