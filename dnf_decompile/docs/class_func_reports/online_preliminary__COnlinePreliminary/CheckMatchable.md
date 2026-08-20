# CheckMatchable

`_ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch`

`online_preliminary::COnlinePreliminary::CheckMatchable(IMatch*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085623ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085623ec  _ZN18online_preliminary18COnlinePreliminary14CheckMatchableEP6IMatch
#           online_preliminary::COnlinePreliminary::CheckMatchable(IMatch*)
# range [0x085623ec, 0x085624dd]
085623ec +0x00:  push   %ebp
085623ed +0x01:  mov    %esp,%ebp
085623ef +0x03:  push   %ebx
085623f0 +0x04:  sub    $0x24,%esp
085623f3 +0x07:  movl   $0x0,-0x14(%ebp)
085623fa +0x0e:  movl   $0x0,-0x10(%ebp)
08562401 +0x15:  movl   $0x0,-0xc(%ebp)
08562408 +0x1c:  jmp    08562430 <+0x44>
0856240a +0x1e:  mov    0xc(%ebp),%eax
0856240d +0x21:  mov    (%eax),%eax
0856240f +0x23:  add    $0x10,%eax
08562412 +0x26:  mov    (%eax),%edx
08562414 +0x28:  mov    -0xc(%ebp),%eax
08562417 +0x2b:  mov    %eax,0x4(%esp)
0856241b +0x2f:  mov    0xc(%ebp),%eax
0856241e +0x32:  mov    %eax,(%esp)
08562421 +0x35:  call   *%edx
08562423 +0x37:  mov    %eax,-0x10(%ebp)
08562426 +0x3a:  cmpl   $0x0,-0x10(%ebp)
0856242a +0x3e:  jne    0856243d <+0x51>
0856242c +0x40:  addl   $0x1,-0xc(%ebp)
08562430 +0x44:  cmpl   $0x3,-0xc(%ebp)
08562434 +0x48:  setle  %al
08562437 +0x4b:  test   %al,%al
08562439 +0x4d:  jne    0856240a <+0x1e>
0856243b +0x4f:  jmp    0856243e <+0x52>
0856243d +0x51:  nop
0856243e +0x52:  cmpl   $0x0,-0x10(%ebp)
08562442 +0x56:  jne    0856244e <+0x62>
08562444 +0x58:  mov    $0x0,%eax
08562449 +0x5d:  jmp    085624d8 <+0xec>
0856244e +0x62:  movl   $0x0,-0xc(%ebp)
08562455 +0x69:  jmp    0856247d <+0x91>
08562457 +0x6b:  mov    0x8(%ebp),%eax
0856245a +0x6e:  mov    (%eax),%eax
0856245c +0x70:  add    $0x10,%eax
0856245f +0x73:  mov    (%eax),%edx
08562461 +0x75:  mov    -0xc(%ebp),%eax
08562464 +0x78:  mov    %eax,0x4(%esp)
08562468 +0x7c:  mov    0x8(%ebp),%eax
0856246b +0x7f:  mov    %eax,(%esp)
0856246e +0x82:  call   *%edx
08562470 +0x84:  mov    %eax,-0x14(%ebp)
08562473 +0x87:  cmpl   $0x0,-0x14(%ebp)
08562477 +0x8b:  jne    0856248a <+0x9e>
08562479 +0x8d:  addl   $0x1,-0xc(%ebp)
0856247d +0x91:  cmpl   $0x3,-0xc(%ebp)
08562481 +0x95:  setle  %al
08562484 +0x98:  test   %al,%al
08562486 +0x9a:  jne    08562457 <+0x6b>
08562488 +0x9c:  jmp    0856248b <+0x9f>
0856248a +0x9e:  nop
0856248b +0x9f:  cmpl   $0x0,-0x14(%ebp)
0856248f +0xa3:  jne    08562498 <+0xac>
08562491 +0xa5:  mov    $0x0,%eax
08562496 +0xaa:  jmp    085624d8 <+0xec>
08562498 +0xac:  mov    -0x10(%ebp),%eax
0856249b +0xaf:  mov    %eax,0x8(%esp)
0856249f +0xb3:  mov    -0x14(%ebp),%eax
085624a2 +0xb6:  mov    %eax,0x4(%esp)
085624a6 +0xba:  mov    0x8(%ebp),%eax
085624a9 +0xbd:  mov    %eax,(%esp)
085624ac +0xc0:  call   08560212 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_>  ; online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(CUser*, CUser*)
085624b1 +0xc5:  mov    %eax,%ebx
085624b3 +0xc7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085624b8 +0xcc:  add    $0x68,%eax
085624bb +0xcf:  mov    %eax,(%esp)
085624be +0xd2:  call   08568bb0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x57a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x57a
085624c3 +0xd7:  cmp    %eax,%ebx
085624c5 +0xd9:  setge  %al
085624c8 +0xdc:  test   %al,%al
085624ca +0xde:  je     085624d3 <+0xe7>
085624cc +0xe0:  mov    $0x0,%eax
085624d1 +0xe5:  jmp    085624d8 <+0xec>
085624d3 +0xe7:  mov    $0x1,%eax
085624d8 +0xec:  add    $0x24,%esp
085624db +0xef:  pop    %ebx
085624dc +0xf0:  pop    %ebp
085624dd +0xf1:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::CheckMatchable @ 0x85623ec

/* online_preliminary::COnlinePreliminary::CheckMatchable(IMatch*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::CheckMatchable(COnlinePreliminary *this,IMatch *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  CUser *local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = (CUser *)0x0;
  local_14 = (CUser *)0x0;
  local_10 = 0;
  while ((local_10 < 4 &&
         (local_14 = (CUser *)(**(code **)(*(int *)param_1 + 0x10))(param_1,local_10),
         local_14 == (CUser *)0x0))) {
    local_10 = local_10 + 1;
  }
  if (local_14 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    local_10 = 0;
    while ((local_10 < 4 &&
           (local_18 = (CUser *)(**(code **)(*(int *)this + 0x10))(this,local_10),
           local_18 == (CUser *)0x0))) {
      local_10 = local_10 + 1;
    }
    if (local_18 == (CUser *)0x0) {
      uVar1 = 0;
    }
    else {
      iVar2 = _GetEachOtherPlayCount(this,local_18,local_14);
      iVar3 = G_CDataManager();
      iVar3 = ServerParameterScript::GetDailyMatchCount((ServerParameterScript *)(iVar3 + 0x68));
      if (iVar2 < iVar3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
