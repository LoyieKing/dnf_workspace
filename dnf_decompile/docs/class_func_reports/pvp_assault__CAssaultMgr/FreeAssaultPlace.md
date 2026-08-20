# FreeAssaultPlace

`_ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE`

`pvp_assault::CAssaultMgr::FreeAssaultPlace(int, pvp_assault::CAssaultPlace*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082edb6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082edb6a  _ZN11pvp_assault11CAssaultMgr16FreeAssaultPlaceEiPNS_13CAssaultPlaceE
#           pvp_assault::CAssaultMgr::FreeAssaultPlace(int, pvp_assault::CAssaultPlace*)
# range [0x082edb6a, 0x082edc04]
082edb6a +0x00:  push   %ebp
082edb6b +0x01:  mov    %esp,%ebp
082edb6d +0x03:  sub    $0x28,%esp
082edb70 +0x06:  cmpl   $0x0,0xc(%ebp)
082edb74 +0x0a:  je     082edbde <+0x74>
082edb76 +0x0c:  mov    0xc(%ebp),%eax
082edb79 +0x0f:  mov    %eax,-0x10(%ebp)
082edb7c +0x12:  mov    0x8(%ebp),%eax
082edb7f +0x15:  lea    0x8(%eax),%ecx
082edb82 +0x18:  lea    -0x14(%ebp),%eax
082edb85 +0x1b:  lea    -0x10(%ebp),%edx
082edb88 +0x1e:  mov    %edx,0x8(%esp)
082edb8c +0x22:  mov    %ecx,0x4(%esp)
082edb90 +0x26:  mov    %eax,(%esp)
082edb93 +0x29:  call   082f1c9e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a22>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a22
082edb98 +0x2e:  sub    $0x4,%esp
082edb9b +0x31:  mov    0x8(%ebp),%eax
082edb9e +0x34:  lea    0x8(%eax),%edx
082edba1 +0x37:  lea    -0xc(%ebp),%eax
082edba4 +0x3a:  mov    %edx,0x4(%esp)
082edba8 +0x3e:  mov    %eax,(%esp)
082edbab +0x41:  call   082f1c38 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19bc>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19bc
082edbb0 +0x46:  sub    $0x4,%esp
082edbb3 +0x49:  lea    -0xc(%ebp),%eax
082edbb6 +0x4c:  mov    %eax,0x4(%esp)
082edbba +0x50:  lea    -0x14(%ebp),%eax
082edbbd +0x53:  mov    %eax,(%esp)
082edbc0 +0x56:  call   082f1c5e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19e2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19e2
082edbc5 +0x5b:  test   %al,%al
082edbc7 +0x5d:  je     082edbde <+0x74>
082edbc9 +0x5f:  mov    0x8(%ebp),%eax
082edbcc +0x62:  lea    0x8(%eax),%edx
082edbcf +0x65:  mov    -0x14(%ebp),%eax
082edbd2 +0x68:  mov    %eax,0x4(%esp)
082edbd6 +0x6c:  mov    %edx,(%esp)
082edbd9 +0x6f:  call   082f1cde <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a62>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a62
082edbde +0x74:  cmpl   $0x0,0x10(%ebp)
082edbe2 +0x78:  je     082edc03 <+0x99>
082edbe4 +0x7a:  mov    0x10(%ebp),%eax
082edbe7 +0x7d:  mov    %eax,(%esp)
082edbea +0x80:  call   082e6ab8 <_ZN11pvp_assault13CAssaultPlace5ResetEv>  ; pvp_assault::CAssaultPlace::Reset()
082edbef +0x85:  call   082f0fa9 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xd2d>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xd2d
082edbf4 +0x8a:  mov    0x10(%ebp),%edx
082edbf7 +0x8d:  mov    %edx,0x4(%esp)
082edbfb +0x91:  mov    %eax,(%esp)
082edbfe +0x94:  call   082f0f68 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcec>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcec
082edc03 +0x99:  leave
082edc04 +0x9a:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::FreeAssaultPlace @ 0x82edb6a

/* pvp_assault::CAssaultMgr::FreeAssaultPlace(int, pvp_assault::CAssaultPlace*) */

void __thiscall
pvp_assault::CAssaultMgr::FreeAssaultPlace(CAssaultMgr *this,int param_1,CAssaultPlace *param_2)

{
  char cVar1;
  CAssaultPlaceFactory *this_00;
  int *piVar2;
  uint local_18;
  int local_14;
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_10 [12];
  
  if (param_1 != 0) {
    local_14 = param_1;
    piVar2 = &local_14;
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::find(&local_18);
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)&local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 != '\0') {
      std::
      map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
      ::erase((map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
               *)(this + 8),local_18,piVar2);
    }
  }
  if (param_2 != (CAssaultPlace *)0x0) {
    CAssaultPlace::Reset(param_2);
    this_00 = (CAssaultPlaceFactory *)GetInstanceAssaultPlaceFactory();
    CAssaultPlaceFactory::FreeAssaultPlace(this_00,param_2);
  }
  return;
}
```
