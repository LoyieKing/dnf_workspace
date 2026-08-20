# _AddUser

`_ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e7018` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e7018  _ZN11pvp_assault13CAssaultPlace8_AddUserEP5CUser17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM)
# range [0x082e7018, 0x082e70c3]
082e7018 +0x00:  push   %ebp
082e7019 +0x01:  mov    %esp,%ebp
082e701b +0x03:  sub    $0x28,%esp
082e701e +0x06:  movl   $0x0,-0xc(%ebp)
082e7025 +0x0d:  jmp    082e7091 <+0x79>
082e7027 +0x0f:  mov    -0xc(%ebp),%eax
082e702a +0x12:  shl    $0x5,%eax
082e702d +0x15:  add    0x8(%ebp),%eax
082e7030 +0x18:  mov    %eax,(%esp)
082e7033 +0x1b:  call   082f054c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2d0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2d0
082e7038 +0x20:  test   %al,%al
082e703a +0x22:  je     082e708d <+0x75>
082e703c +0x24:  mov    -0xc(%ebp),%eax
082e703f +0x27:  shl    $0x5,%eax
082e7042 +0x2a:  add    0x8(%ebp),%eax
082e7045 +0x2d:  mov    0x10(%ebp),%edx
082e7048 +0x30:  mov    %edx,0x8(%esp)
082e704c +0x34:  mov    0xc(%ebp),%edx
082e704f +0x37:  mov    %edx,0x4(%esp)
082e7053 +0x3b:  mov    %eax,(%esp)
082e7056 +0x3e:  call   082e67e6 <_ZN11pvp_assault10CAssaulter10AttachUserEP5CUser17ENUM_ASSAULT_TEAM>  ; pvp_assault::CAssaulter::AttachUser(CUser*, ENUM_ASSAULT_TEAM)
082e705b +0x43:  mov    0x8(%ebp),%eax
082e705e +0x46:  mov    0x104(%eax),%eax
082e7064 +0x4c:  mov    %eax,%edx
082e7066 +0x4e:  mov    0xc(%ebp),%eax
082e7069 +0x51:  mov    %edx,0x4(%esp)
082e706d +0x55:  mov    %eax,(%esp)
082e7070 +0x58:  call   082f0a7a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7fe>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7fe
082e7075 +0x5d:  mov    0x8(%ebp),%eax
082e7078 +0x60:  mov    0x100(%eax),%eax
082e707e +0x66:  lea    0x1(%eax),%edx
082e7081 +0x69:  mov    0x8(%ebp),%eax
082e7084 +0x6c:  mov    %edx,0x100(%eax)
082e708a +0x72:  nop
082e708b +0x73:  leave
082e708c +0x74:  ret
082e708d +0x75:  addl   $0x1,-0xc(%ebp)
082e7091 +0x79:  cmpl   $0x7,-0xc(%ebp)
082e7095 +0x7d:  setle  %al
082e7098 +0x80:  test   %al,%al
082e709a +0x82:  jne    082e7027 <+0xf>
082e709c +0x84:  movl   $0x4,(%esp)
082e70a3 +0x8b:  call   08725800 <__cxa_allocate_exception>
082e70a8 +0x90:  mov    %eax,%edx
082e70aa +0x92:  movl   $0x4,(%edx)
082e70b0 +0x98:  movl   $0x0,0x8(%esp)
082e70b8 +0xa0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082e70c0 +0xa8:  mov    %eax,(%esp)
082e70c3 +0xab:  call   08724c50 <__cxa_throw>
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_AddUser @ 0x82e7018

/* pvp_assault::CAssaultPlace::_AddUser(CUser*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaultPlace::_AddUser
          (CAssaultPlace *this,CUserCharacInfo *param_1,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (7 < local_10) {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = 4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
    }
    cVar1 = CAssaulter::IsAttachAble((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 != '\0') break;
    local_10 = local_10 + 1;
  }
  CAssaulter::AttachUser((CAssaulter *)(this + local_10 * 0x20),param_1,param_3);
  CUserCharacInfo::SetAssaultPlace(param_1,*(int *)(this + 0x104));
  *(int *)(this + 0x100) = *(int *)(this + 0x100) + 1;
  return;
}
```
