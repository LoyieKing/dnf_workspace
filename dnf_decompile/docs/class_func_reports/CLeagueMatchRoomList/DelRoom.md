# DelRoom

`_ZN20CLeagueMatchRoomList7DelRoomEP6IMatch`

`CLeagueMatchRoomList::DelRoom(IMatch*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatchRoomList` | `0x08567f72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08567f72  _ZN20CLeagueMatchRoomList7DelRoomEP6IMatch
#           CLeagueMatchRoomList::DelRoom(IMatch*)
# range [0x08567f72, 0x08567fe7]
08567f72 +0x00:  push   %ebp
08567f73 +0x01:  mov    %esp,%ebp
08567f75 +0x03:  sub    $0x28,%esp
08567f78 +0x06:  mov    0x8(%ebp),%eax
08567f7b +0x09:  lea    0x4(%eax),%ecx
08567f7e +0x0c:  lea    -0x10(%ebp),%eax
08567f81 +0x0f:  lea    0xc(%ebp),%edx
08567f84 +0x12:  mov    %edx,0x8(%esp)
08567f88 +0x16:  mov    %ecx,0x4(%esp)
08567f8c +0x1a:  mov    %eax,(%esp)
08567f8f +0x1d:  call   08569d14 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x16de>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x16de
08567f94 +0x22:  sub    $0x4,%esp
08567f97 +0x25:  mov    0x8(%ebp),%eax
08567f9a +0x28:  lea    0x4(%eax),%edx
08567f9d +0x2b:  lea    -0xc(%ebp),%eax
08567fa0 +0x2e:  mov    %edx,0x4(%esp)
08567fa4 +0x32:  mov    %eax,(%esp)
08567fa7 +0x35:  call   08569bd0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x159a>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x159a
08567fac +0x3a:  sub    $0x4,%esp
08567faf +0x3d:  lea    -0xc(%ebp),%eax
08567fb2 +0x40:  mov    %eax,0x4(%esp)
08567fb6 +0x44:  lea    -0x10(%ebp),%eax
08567fb9 +0x47:  mov    %eax,(%esp)
08567fbc +0x4a:  call   08569c1c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x15e6>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x15e6
08567fc1 +0x4f:  test   %al,%al
08567fc3 +0x51:  je     08567fe1 <+0x6f>
08567fc5 +0x53:  mov    0x8(%ebp),%eax
08567fc8 +0x56:  lea    0x4(%eax),%edx
08567fcb +0x59:  mov    -0x10(%ebp),%eax
08567fce +0x5c:  mov    %eax,0x4(%esp)
08567fd2 +0x60:  mov    %edx,(%esp)
08567fd5 +0x63:  call   08569c5c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1626>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1626
08567fda +0x68:  mov    $0x1,%eax
08567fdf +0x6d:  jmp    08567fe6 <+0x74>
08567fe1 +0x6f:  mov    $0x0,%eax
08567fe6 +0x74:  leave
08567fe7 +0x75:  ret
```

## 反编译 C

```c
// CLeagueMatchRoomList::DelRoom @ 0x8567f72

/* CLeagueMatchRoomList::DelRoom(IMatch*) */

bool CLeagueMatchRoomList::DelRoom(IMatch *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  IMatch *local_14;
  map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> local_10 [12];
  
  puVar2 = &stack0x00000008;
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::find
            (&local_14);
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::erase
              ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
               (param_1 + 4),local_14,puVar2);
  }
  return cVar1 != '\0';
}
```
