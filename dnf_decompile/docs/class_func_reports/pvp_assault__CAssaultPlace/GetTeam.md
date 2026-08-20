# GetTeam

`_ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaultPlace::GetTeam(CUser*, ENUM_ASSAULT_TEAM&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6cdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6cdc  _ZN11pvp_assault13CAssaultPlace7GetTeamEP5CUserR17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaultPlace::GetTeam(CUser*, ENUM_ASSAULT_TEAM&)
# range [0x082e6cdc, 0x082e6d39]
082e6cdc +0x00:  push   %ebp
082e6cdd +0x01:  mov    %esp,%ebp
082e6cdf +0x03:  sub    $0x28,%esp
082e6ce2 +0x06:  movl   $0x0,-0xc(%ebp)
082e6ce9 +0x0d:  jmp    082e6d27 <+0x4b>
082e6ceb +0x0f:  mov    -0xc(%ebp),%eax
082e6cee +0x12:  shl    $0x5,%eax
082e6cf1 +0x15:  add    0x8(%ebp),%eax
082e6cf4 +0x18:  mov    %eax,(%esp)
082e6cf7 +0x1b:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6cfc +0x20:  cmp    0xc(%ebp),%eax
082e6cff +0x23:  sete   %al
082e6d02 +0x26:  test   %al,%al
082e6d04 +0x28:  je     082e6d23 <+0x47>
082e6d06 +0x2a:  mov    -0xc(%ebp),%eax
082e6d09 +0x2d:  shl    $0x5,%eax
082e6d0c +0x30:  add    0x8(%ebp),%eax
082e6d0f +0x33:  mov    %eax,(%esp)
082e6d12 +0x36:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e6d17 +0x3b:  mov    0x10(%ebp),%edx
082e6d1a +0x3e:  mov    %eax,(%edx)
082e6d1c +0x40:  mov    $0x1,%eax
082e6d21 +0x45:  jmp    082e6d37 <+0x5b>
082e6d23 +0x47:  addl   $0x1,-0xc(%ebp)
082e6d27 +0x4b:  cmpl   $0x7,-0xc(%ebp)
082e6d2b +0x4f:  setle  %al
082e6d2e +0x52:  test   %al,%al
082e6d30 +0x54:  jne    082e6ceb <+0xf>
082e6d32 +0x56:  mov    $0x0,%eax
082e6d37 +0x5b:  leave
082e6d38 +0x5c:  ret
082e6d39 +0x5d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::GetTeam @ 0x82e6cdc

/* pvp_assault::CAssaultPlace::GetTeam(CUser*, ENUM_ASSAULT_TEAM&) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::GetTeam(CAssaultPlace *this,CUser *param_1,ENUM_ASSAULT_TEAM *param_2)

{
  CUser *pCVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    pCVar1 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
    if (pCVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  uVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
  *(undefined4 *)param_2 = uVar2;
  return 1;
}
```
