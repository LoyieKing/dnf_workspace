# _GetTeamCount

`_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE`

`pvp_assault::CAssaultPlace::_GetTeamCount(int*, pvp_assault::ENUM_ASSAULT_STATE)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7288` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7288  _ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPiNS_18ENUM_ASSAULT_STATEE
#           pvp_assault::CAssaultPlace::_GetTeamCount(int*, pvp_assault::ENUM_ASSAULT_STATE)
# range [0x082e7288, 0x082e72f9]
082e7288 +0x00:  push   %ebp
082e7289 +0x01:  mov    %esp,%ebp
082e728b +0x03:  sub    $0x28,%esp
082e728e +0x06:  movl   $0x0,-0xc(%ebp)
082e7295 +0x0d:  jmp    082e72ec <+0x64>
082e7297 +0x0f:  mov    -0xc(%ebp),%eax
082e729a +0x12:  shl    $0x5,%eax
082e729d +0x15:  add    0x8(%ebp),%eax
082e72a0 +0x18:  mov    %eax,(%esp)
082e72a3 +0x1b:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e72a8 +0x20:  test   %al,%al
082e72aa +0x22:  jne    082e72e7 <+0x5f>
082e72ac +0x24:  mov    -0xc(%ebp),%eax
082e72af +0x27:  shl    $0x5,%eax
082e72b2 +0x2a:  add    0x8(%ebp),%eax
082e72b5 +0x2d:  mov    %eax,(%esp)
082e72b8 +0x30:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082e72bd +0x35:  cmp    0x10(%ebp),%eax
082e72c0 +0x38:  sete   %al
082e72c3 +0x3b:  test   %al,%al
082e72c5 +0x3d:  je     082e72e8 <+0x60>
082e72c7 +0x3f:  mov    -0xc(%ebp),%eax
082e72ca +0x42:  shl    $0x5,%eax
082e72cd +0x45:  add    0x8(%ebp),%eax
082e72d0 +0x48:  mov    %eax,(%esp)
082e72d3 +0x4b:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e72d8 +0x50:  shl    $0x2,%eax
082e72db +0x53:  add    0xc(%ebp),%eax
082e72de +0x56:  mov    (%eax),%edx
082e72e0 +0x58:  add    $0x1,%edx
082e72e3 +0x5b:  mov    %edx,(%eax)
082e72e5 +0x5d:  jmp    082e72e8 <+0x60>
082e72e7 +0x5f:  nop
082e72e8 +0x60:  addl   $0x1,-0xc(%ebp)
082e72ec +0x64:  cmpl   $0x7,-0xc(%ebp)
082e72f0 +0x68:  setle  %al
082e72f3 +0x6b:  test   %al,%al
082e72f5 +0x6d:  jne    082e7297 <+0xf>
082e72f7 +0x6f:  leave
082e72f8 +0x70:  ret
082e72f9 +0x71:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetTeamCount @ 0x82e7288

/* pvp_assault::CAssaultPlace::_GetTeamCount(int*, pvp_assault::ENUM_ASSAULT_STATE) */

void __thiscall
pvp_assault::CAssaultPlace::_GetTeamCount(CAssaultPlace *this,int param_1,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = CAssaulter::GetState((CAssaulter *)(this + local_10 * 0x20));
      if (iVar2 == param_3) {
        iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
        piVar3 = (int *)(iVar2 * 4 + param_1);
        *piVar3 = *piVar3 + 1;
      }
    }
  }
  return;
}
```
