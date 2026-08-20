# GetEachOtherTeamPlayCount

`_ZNK18online_preliminary22COnlinePreliminaryTeam25GetEachOtherTeamPlayCountEi`

`online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int) const`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeam` | `0x0858844c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858844c  _ZNK18online_preliminary22COnlinePreliminaryTeam25GetEachOtherTeamPlayCountEi
#           online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int) const
# range [0x0858844c, 0x085884b5]
0858844c +0x00:  push   %ebp
0858844d +0x01:  mov    %esp,%ebp
0858844f +0x03:  sub    $0x28,%esp
08588452 +0x06:  mov    0x8(%ebp),%eax
08588455 +0x09:  lea    0x24(%eax),%ecx
08588458 +0x0c:  lea    -0x10(%ebp),%eax
0858845b +0x0f:  lea    0xc(%ebp),%edx
0858845e +0x12:  mov    %edx,0x8(%esp)
08588462 +0x16:  mov    %ecx,0x4(%esp)
08588466 +0x1a:  mov    %eax,(%esp)
08588469 +0x1d:  call   085892f8 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x5eb>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x5eb
0858846e +0x22:  sub    $0x4,%esp
08588471 +0x25:  mov    0x8(%ebp),%eax
08588474 +0x28:  lea    0x24(%eax),%edx
08588477 +0x2b:  lea    -0xc(%ebp),%eax
0858847a +0x2e:  mov    %edx,0x4(%esp)
0858847e +0x32:  mov    %eax,(%esp)
08588481 +0x35:  call   08589324 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x617>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x617
08588486 +0x3a:  sub    $0x4,%esp
08588489 +0x3d:  lea    -0xc(%ebp),%eax
0858848c +0x40:  mov    %eax,0x4(%esp)
08588490 +0x44:  lea    -0x10(%ebp),%eax
08588493 +0x47:  mov    %eax,(%esp)
08588496 +0x4a:  call   0858934a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x63d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x63d
0858849b +0x4f:  test   %al,%al
0858849d +0x51:  je     085884af <+0x63>
0858849f +0x53:  lea    -0x10(%ebp),%eax
085884a2 +0x56:  mov    %eax,(%esp)
085884a5 +0x59:  call   0858935e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x651>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x651
085884aa +0x5e:  mov    0x4(%eax),%eax
085884ad +0x61:  jmp    085884b4 <+0x68>
085884af +0x63:  mov    $0x0,%eax
085884b4 +0x68:  leave
085884b5 +0x69:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount @ 0x858844c

/* online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int) const */

undefined4 online_preliminary::COnlinePreliminaryTeam::GetEachOtherTeamPlayCount(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>> local_14 [4];
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  local_10 [12];
  
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::find((int *)local_14);
  std::
  map<int,online_preliminary::PlayCountInfoEx,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
          operator!=(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,online_preliminary::PlayCountInfoEx>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
