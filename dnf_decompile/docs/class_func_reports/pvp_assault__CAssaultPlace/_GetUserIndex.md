# _GetUserIndex

`_ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb`

`pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e849a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e849a  _ZN11pvp_assault13CAssaultPlace13_GetUserIndexEP5CUserb
#           pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool)
# range [0x082e849a, 0x082e852d]
082e849a +0x00:  push   %ebp
082e849b +0x01:  mov    %esp,%ebp
082e849d +0x03:  sub    $0x38,%esp
082e84a0 +0x06:  mov    0x10(%ebp),%eax
082e84a3 +0x09:  mov    %al,-0x1c(%ebp)
082e84a6 +0x0c:  movl   $0x0,-0xc(%ebp)
082e84ad +0x13:  jmp    082e84e9 <+0x4f>
082e84af +0x15:  mov    -0xc(%ebp),%eax
082e84b2 +0x18:  shl    $0x5,%eax
082e84b5 +0x1b:  add    0x8(%ebp),%eax
082e84b8 +0x1e:  mov    %eax,(%esp)
082e84bb +0x21:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e84c0 +0x26:  test   %al,%al
082e84c2 +0x28:  jne    082e84e4 <+0x4a>
082e84c4 +0x2a:  mov    -0xc(%ebp),%eax
082e84c7 +0x2d:  shl    $0x5,%eax
082e84ca +0x30:  add    0x8(%ebp),%eax
082e84cd +0x33:  mov    %eax,(%esp)
082e84d0 +0x36:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e84d5 +0x3b:  cmp    0xc(%ebp),%eax
082e84d8 +0x3e:  sete   %al
082e84db +0x41:  test   %al,%al
082e84dd +0x43:  je     082e84e5 <+0x4b>
082e84df +0x45:  mov    -0xc(%ebp),%eax
082e84e2 +0x48:  jmp    082e852b <+0x91>
082e84e4 +0x4a:  nop
082e84e5 +0x4b:  addl   $0x1,-0xc(%ebp)
082e84e9 +0x4f:  cmpl   $0x7,-0xc(%ebp)
082e84ed +0x53:  setle  %al
082e84f0 +0x56:  test   %al,%al
082e84f2 +0x58:  jne    082e84af <+0x15>
082e84f4 +0x5a:  cmpb   $0x0,-0x1c(%ebp)
082e84f8 +0x5e:  je     082e8526 <+0x8c>
082e84fa +0x60:  movl   $0x4,(%esp)
082e8501 +0x67:  call   08725800 <__cxa_allocate_exception>
082e8506 +0x6c:  mov    %eax,%edx
082e8508 +0x6e:  movl   $0x15,(%edx)
082e850e +0x74:  movl   $0x0,0x8(%esp)
082e8516 +0x7c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e851e +0x84:  mov    %eax,(%esp)
082e8521 +0x87:  call   08724c50 <__cxa_throw>
082e8526 +0x8c:  mov    $0xffffffff,%eax
082e852b +0x91:  leave
082e852c +0x92:  ret
082e852d +0x93:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetUserIndex @ 0x82e849a

/* pvp_assault::CAssaultPlace::_GetUserIndex(CUser*, bool) */

int __thiscall
pvp_assault::CAssaultPlace::_GetUserIndex(CAssaultPlace *this,CUser *param_1,bool param_2)

{
  char cVar1;
  CUser *pCVar2;
  undefined4 *puVar3;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      if (!param_2) {
        return -1;
      }
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = 0x15;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
    }
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if ((cVar1 == '\0') &&
       (pCVar2 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20)),
       pCVar2 == param_1)) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
