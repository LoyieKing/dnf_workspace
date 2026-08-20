# _GetAssaultPlace

`_ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj`

`pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ed9fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed9fe  _ZN11pvp_assault11CAssaultMgr16_GetAssaultPlaceEj
#           pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int)
# range [0x082ed9fe, 0x082eda93]
082ed9fe +0x00:  push   %ebp
082ed9ff +0x01:  mov    %esp,%ebp
082eda01 +0x03:  sub    $0x28,%esp
082eda04 +0x06:  mov    0x8(%ebp),%eax
082eda07 +0x09:  lea    0x8(%eax),%ecx
082eda0a +0x0c:  lea    -0x14(%ebp),%eax
082eda0d +0x0f:  lea    0xc(%ebp),%edx
082eda10 +0x12:  mov    %edx,0x8(%esp)
082eda14 +0x16:  mov    %ecx,0x4(%esp)
082eda18 +0x1a:  mov    %eax,(%esp)
082eda1b +0x1d:  call   082f1c9e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a22>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a22
082eda20 +0x22:  sub    $0x4,%esp
082eda23 +0x25:  mov    0x8(%ebp),%eax
082eda26 +0x28:  lea    0x8(%eax),%edx
082eda29 +0x2b:  lea    -0x10(%ebp),%eax
082eda2c +0x2e:  mov    %edx,0x4(%esp)
082eda30 +0x32:  mov    %eax,(%esp)
082eda33 +0x35:  call   082f1c38 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19bc>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19bc
082eda38 +0x3a:  sub    $0x4,%esp
082eda3b +0x3d:  lea    -0x10(%ebp),%eax
082eda3e +0x40:  mov    %eax,0x4(%esp)
082eda42 +0x44:  lea    -0x14(%ebp),%eax
082eda45 +0x47:  mov    %eax,(%esp)
082eda48 +0x4a:  call   082f1cca <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a4e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a4e
082eda4d +0x4f:  test   %al,%al
082eda4f +0x51:  je     082eda7d <+0x7f>
082eda51 +0x53:  movl   $0x4,(%esp)
082eda58 +0x5a:  call   08725800 <__cxa_allocate_exception>
082eda5d +0x5f:  mov    %eax,%edx
082eda5f +0x61:  movl   $0x15,(%edx)
082eda65 +0x67:  movl   $0x0,0x8(%esp)
082eda6d +0x6f:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eda75 +0x77:  mov    %eax,(%esp)
082eda78 +0x7a:  call   08724c50 <__cxa_throw>
082eda7d +0x7f:  lea    -0x14(%ebp),%eax
082eda80 +0x82:  mov    %eax,(%esp)
082eda83 +0x85:  call   082f1c90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a14>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a14
082eda88 +0x8a:  mov    0x4(%eax),%eax
082eda8b +0x8d:  mov    %eax,-0xc(%ebp)
082eda8e +0x90:  mov    -0xc(%ebp),%eax
082eda91 +0x93:  leave
082eda92 +0x94:  ret
082eda93 +0x95:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::_GetAssaultPlace @ 0x82ed9fe

/* pvp_assault::CAssaultMgr::_GetAssaultPlace(unsigned int) */

undefined4 pvp_assault::CAssaultMgr::_GetAssaultPlace(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  undefined1 *puVar5;
  _Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> local_18 [4];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_14 [16];
  
  puVar5 = &stack0x00000008;
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
  return *(undefined4 *)(iVar3 + 4);
}
```
