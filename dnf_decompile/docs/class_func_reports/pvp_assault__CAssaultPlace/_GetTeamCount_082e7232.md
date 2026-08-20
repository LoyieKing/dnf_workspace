# _GetTeamCount

`_ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi`

`pvp_assault::CAssaultPlace::_GetTeamCount(int*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7232` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7232  _ZN11pvp_assault13CAssaultPlace13_GetTeamCountEPi
#           pvp_assault::CAssaultPlace::_GetTeamCount(int*)
# range [0x082e7232, 0x082e7287]
082e7232 +0x00:  push   %ebp
082e7233 +0x01:  mov    %esp,%ebp
082e7235 +0x03:  sub    $0x28,%esp
082e7238 +0x06:  movl   $0x0,-0xc(%ebp)
082e723f +0x0d:  jmp    082e727b <+0x49>
082e7241 +0x0f:  mov    -0xc(%ebp),%eax
082e7244 +0x12:  shl    $0x5,%eax
082e7247 +0x15:  add    0x8(%ebp),%eax
082e724a +0x18:  mov    %eax,(%esp)
082e724d +0x1b:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e7252 +0x20:  test   %al,%al
082e7254 +0x22:  jne    082e7276 <+0x44>
082e7256 +0x24:  mov    -0xc(%ebp),%eax
082e7259 +0x27:  shl    $0x5,%eax
082e725c +0x2a:  add    0x8(%ebp),%eax
082e725f +0x2d:  mov    %eax,(%esp)
082e7262 +0x30:  call   082f0570 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2f4
082e7267 +0x35:  shl    $0x2,%eax
082e726a +0x38:  add    0xc(%ebp),%eax
082e726d +0x3b:  mov    (%eax),%edx
082e726f +0x3d:  add    $0x1,%edx
082e7272 +0x40:  mov    %edx,(%eax)
082e7274 +0x42:  jmp    082e7277 <+0x45>
082e7276 +0x44:  nop
082e7277 +0x45:  addl   $0x1,-0xc(%ebp)
082e727b +0x49:  cmpl   $0x7,-0xc(%ebp)
082e727f +0x4d:  setle  %al
082e7282 +0x50:  test   %al,%al
082e7284 +0x52:  jne    082e7241 <+0xf>
082e7286 +0x54:  leave
082e7287 +0x55:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetTeamCount @ 0x82e7232

/* pvp_assault::CAssaultPlace::_GetTeamCount(int*) */

void __thiscall pvp_assault::CAssaultPlace::_GetTeamCount(CAssaultPlace *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = CAssaulter::GetTeam((CAssaulter *)(this + local_10 * 0x20));
      param_1[iVar2] = param_1[iVar2] + 1;
    }
  }
  return;
}
```
