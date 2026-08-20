# _GetAssaultPlace

`_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji`

`pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082eda94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eda94  _ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEji
#           pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int)
# range [0x082eda94, 0x082edb69]
082eda94 +0x00:  push   %ebp
082eda95 +0x01:  mov    %esp,%ebp
082eda97 +0x03:  sub    $0x28,%esp
082eda9a +0x06:  mov    0x8(%ebp),%eax
082eda9d +0x09:  lea    0x8(%eax),%ecx
082edaa0 +0x0c:  lea    -0x14(%ebp),%eax
082edaa3 +0x0f:  lea    0xc(%ebp),%edx
082edaa6 +0x12:  mov    %edx,0x8(%esp)
082edaaa +0x16:  mov    %ecx,0x4(%esp)
082edaae +0x1a:  mov    %eax,(%esp)
082edab1 +0x1d:  call   082f1c9e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a22>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a22
082edab6 +0x22:  sub    $0x4,%esp
082edab9 +0x25:  mov    0x8(%ebp),%eax
082edabc +0x28:  lea    0x8(%eax),%edx
082edabf +0x2b:  lea    -0x10(%ebp),%eax
082edac2 +0x2e:  mov    %edx,0x4(%esp)
082edac6 +0x32:  mov    %eax,(%esp)
082edac9 +0x35:  call   082f1c38 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19bc>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19bc
082edace +0x3a:  sub    $0x4,%esp
082edad1 +0x3d:  lea    -0x10(%ebp),%eax
082edad4 +0x40:  mov    %eax,0x4(%esp)
082edad8 +0x44:  lea    -0x14(%ebp),%eax
082edadb +0x47:  mov    %eax,(%esp)
082edade +0x4a:  call   082f1cca <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a4e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a4e
082edae3 +0x4f:  test   %al,%al
082edae5 +0x51:  je     082edb13 <+0x7f>
082edae7 +0x53:  movl   $0x4,(%esp)
082edaee +0x5a:  call   08725800 <__cxa_allocate_exception>
082edaf3 +0x5f:  mov    %eax,%edx
082edaf5 +0x61:  movl   $0x15,(%edx)
082edafb +0x67:  movl   $0x0,0x8(%esp)
082edb03 +0x6f:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082edb0b +0x77:  mov    %eax,(%esp)
082edb0e +0x7a:  call   08724c50 <__cxa_throw>
082edb13 +0x7f:  lea    -0x14(%ebp),%eax
082edb16 +0x82:  mov    %eax,(%esp)
082edb19 +0x85:  call   082f1c90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a14>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a14
082edb1e +0x8a:  mov    0x4(%eax),%eax
082edb21 +0x8d:  mov    %eax,-0xc(%ebp)
082edb24 +0x90:  mov    -0xc(%ebp),%eax
082edb27 +0x93:  mov    %eax,(%esp)
082edb2a +0x96:  call   082f06a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x424>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x424
082edb2f +0x9b:  cmp    0x10(%ebp),%eax
082edb32 +0x9e:  setne  %al
082edb35 +0xa1:  test   %al,%al
082edb37 +0xa3:  je     082edb65 <+0xd1>
082edb39 +0xa5:  movl   $0x4,(%esp)
082edb40 +0xac:  call   08725800 <__cxa_allocate_exception>
082edb45 +0xb1:  mov    %eax,%edx
082edb47 +0xb3:  movl   $0x8,(%edx)
082edb4d +0xb9:  movl   $0x0,0x8(%esp)
082edb55 +0xc1:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082edb5d +0xc9:  mov    %eax,(%esp)
082edb60 +0xcc:  call   08724c50 <__cxa_throw>
082edb65 +0xd1:  mov    -0xc(%ebp),%eax
082edb68 +0xd4:  leave
082edb69 +0xd5:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::_GetAssaultPlace @ 0x82eda94

/* pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int, int) */

CAssaultPlace * __thiscall
pvp_assault::CAssaultMgr::_GetAssaultPlace(CAssaultMgr *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  uint *puVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> local_18 [4];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_14 [4];
  CAssaultPlace *local_10;
  
  puVar5 = &param_1;
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::end(local_14);
  p_Var4 = (_Rb_tree_iterator *)local_14;
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
          operator==(local_18,p_Var4);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4,p_Var4,puVar5);
    *puVar2 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
          operator->(local_18);
  local_10 = *(CAssaultPlace **)(iVar3 + 4);
  iVar3 = CAssaultPlace::GetAuthenValue(local_10);
  if (iVar3 != param_2) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&ENUM_ERROR::typeinfo,0);
  }
  return local_10;
}
```
