# ExistUser

`_ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser`

`pvp_assault::CAssaultPlace::ExistUser(CUser*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e8366` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e8366  _ZN11pvp_assault13CAssaultPlace9ExistUserEP5CUser
#           pvp_assault::CAssaultPlace::ExistUser(CUser*)
# range [0x082e8366, 0x082e83c3]
082e8366 +0x00:  push   %ebp
082e8367 +0x01:  mov    %esp,%ebp
082e8369 +0x03:  sub    $0x28,%esp
082e836c +0x06:  movl   $0x0,-0xc(%ebp)
082e8373 +0x0d:  jmp    082e83b1 <+0x4b>
082e8375 +0x0f:  mov    -0xc(%ebp),%eax
082e8378 +0x12:  shl    $0x5,%eax
082e837b +0x15:  add    0x8(%ebp),%eax
082e837e +0x18:  mov    %eax,(%esp)
082e8381 +0x1b:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e8386 +0x20:  test   %al,%al
082e8388 +0x22:  jne    082e83ac <+0x46>
082e838a +0x24:  mov    -0xc(%ebp),%eax
082e838d +0x27:  shl    $0x5,%eax
082e8390 +0x2a:  add    0x8(%ebp),%eax
082e8393 +0x2d:  mov    %eax,(%esp)
082e8396 +0x30:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e839b +0x35:  cmp    0xc(%ebp),%eax
082e839e +0x38:  sete   %al
082e83a1 +0x3b:  test   %al,%al
082e83a3 +0x3d:  je     082e83ad <+0x47>
082e83a5 +0x3f:  mov    $0x1,%eax
082e83aa +0x44:  jmp    082e83c1 <+0x5b>
082e83ac +0x46:  nop
082e83ad +0x47:  addl   $0x1,-0xc(%ebp)
082e83b1 +0x4b:  cmpl   $0x7,-0xc(%ebp)
082e83b5 +0x4f:  setle  %al
082e83b8 +0x52:  test   %al,%al
082e83ba +0x54:  jne    082e8375 <+0xf>
082e83bc +0x56:  mov    $0x0,%eax
082e83c1 +0x5b:  leave
082e83c2 +0x5c:  ret
082e83c3 +0x5d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::ExistUser @ 0x82e8366

/* pvp_assault::CAssaultPlace::ExistUser(CUser*) */

undefined4 __thiscall pvp_assault::CAssaultPlace::ExistUser(CAssaultPlace *this,CUser *param_1)

{
  char cVar1;
  CUser *pCVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      return 0;
    }
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if ((cVar1 == '\0') &&
       (pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20)),
       pCVar2 == param_1)) break;
    local_10 = local_10 + 1;
  }
  return 1;
}
```
