# FrocedCloseAssaults

`_ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv`

`pvp_assault::CAssaultMgr::FrocedCloseAssaults()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082ed5f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ed5f4  _ZN11pvp_assault11CAssaultMgr19FrocedCloseAssaultsEv
#           pvp_assault::CAssaultMgr::FrocedCloseAssaults()
# range [0x082ed5f4, 0x082ed671]
082ed5f4 +0x00:  push   %ebp
082ed5f5 +0x01:  mov    %esp,%ebp
082ed5f7 +0x03:  sub    $0x28,%esp
082ed5fa +0x06:  mov    0x8(%ebp),%eax
082ed5fd +0x09:  lea    0x8(%eax),%edx
082ed600 +0x0c:  lea    -0x14(%ebp),%eax
082ed603 +0x0f:  mov    %edx,0x4(%esp)
082ed607 +0x13:  mov    %eax,(%esp)
082ed60a +0x16:  call   082f1c12 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1996>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1996
082ed60f +0x1b:  sub    $0x4,%esp
082ed612 +0x1e:  jmp    082ed641 <+0x4d>
082ed614 +0x20:  lea    -0x14(%ebp),%eax
082ed617 +0x23:  mov    %eax,(%esp)
082ed61a +0x26:  call   082f1c90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1a14>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1a14
082ed61f +0x2b:  mov    0x4(%eax),%eax
082ed622 +0x2e:  mov    %eax,-0xc(%ebp)
082ed625 +0x31:  cmpl   $0x0,-0xc(%ebp)
082ed629 +0x35:  je     082ed636 <+0x42>
082ed62b +0x37:  mov    -0xc(%ebp),%eax
082ed62e +0x3a:  mov    %eax,(%esp)
082ed631 +0x3d:  call   082e99a2 <_ZN11pvp_assault13CAssaultPlace10EndAssaultEv>  ; pvp_assault::CAssaultPlace::EndAssault()
082ed636 +0x42:  lea    -0x14(%ebp),%eax
082ed639 +0x45:  mov    %eax,(%esp)
082ed63c +0x48:  call   082f1c72 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19f6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19f6
082ed641 +0x4d:  mov    0x8(%ebp),%eax
082ed644 +0x50:  lea    0x8(%eax),%edx
082ed647 +0x53:  lea    -0x10(%ebp),%eax
082ed64a +0x56:  mov    %edx,0x4(%esp)
082ed64e +0x5a:  mov    %eax,(%esp)
082ed651 +0x5d:  call   082f1c38 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19bc>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19bc
082ed656 +0x62:  sub    $0x4,%esp
082ed659 +0x65:  lea    -0x10(%ebp),%eax
082ed65c +0x68:  mov    %eax,0x4(%esp)
082ed660 +0x6c:  lea    -0x14(%ebp),%eax
082ed663 +0x6f:  mov    %eax,(%esp)
082ed666 +0x72:  call   082f1c5e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x19e2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x19e2
082ed66b +0x77:  test   %al,%al
082ed66d +0x79:  jne    082ed614 <+0x20>
082ed66f +0x7b:  leave
082ed670 +0x7c:  ret
082ed671 +0x7d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::FrocedCloseAssaults @ 0x82ed5f4

/* pvp_assault::CAssaultMgr::FrocedCloseAssaults() */

void pvp_assault::CAssaultMgr::FrocedCloseAssaults(void)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_18 [4];
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  local_14 [4];
  CAssaultPlace *local_10;
  
  std::
  map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_int,pvp_assault::CAssaultPlace*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>
                        *)local_18);
    local_10 = *(CAssaultPlace **)(iVar2 + 4);
    if (local_10 != (CAssaultPlace *)0x0) {
      CAssaultPlace::EndAssault(local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,pvp_assault::CAssaultPlace*>> *)
               local_18);
  }
  return;
}
```
