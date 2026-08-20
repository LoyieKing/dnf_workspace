# ResetDailyMidnight

`_ZN18online_preliminary25COnlinePreliminaryTeamMgr18ResetDailyMidnightEv`

`online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x08588c5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08588c5c  _ZN18online_preliminary25COnlinePreliminaryTeamMgr18ResetDailyMidnightEv
#           online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight()
# range [0x08588c5c, 0x08588ccc]
08588c5c +0x00:  push   %ebp
08588c5d +0x01:  mov    %esp,%ebp
08588c5f +0x03:  sub    $0x28,%esp
08588c62 +0x06:  mov    0x8(%ebp),%eax
08588c65 +0x09:  lea    0x4(%eax),%edx
08588c68 +0x0c:  lea    -0x10(%ebp),%eax
08588c6b +0x0f:  mov    %edx,0x4(%esp)
08588c6f +0x13:  mov    %eax,(%esp)
08588c72 +0x16:  call   08589850 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xb43>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xb43
08588c77 +0x1b:  sub    $0x4,%esp
08588c7a +0x1e:  jmp    08588c9d <+0x41>
08588c7c +0x20:  lea    -0x10(%ebp),%eax
08588c7f +0x23:  mov    %eax,(%esp)
08588c82 +0x26:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
08588c87 +0x2b:  mov    0x4(%eax),%eax
08588c8a +0x2e:  mov    %eax,(%esp)
08588c8d +0x31:  call   08588374 <_ZN18online_preliminary22COnlinePreliminaryTeam18ResetDailyMidnightEv>  ; online_preliminary::COnlinePreliminaryTeam::ResetDailyMidnight()
08588c92 +0x36:  lea    -0x10(%ebp),%eax
08588c95 +0x39:  mov    %eax,(%esp)
08588c98 +0x3c:  call   08589876 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xb69>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xb69
08588c9d +0x41:  mov    0x8(%ebp),%eax
08588ca0 +0x44:  lea    0x4(%eax),%edx
08588ca3 +0x47:  lea    -0xc(%ebp),%eax
08588ca6 +0x4a:  mov    %edx,0x4(%esp)
08588caa +0x4e:  mov    %eax,(%esp)
08588cad +0x51:  call   08589754 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa47>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa47
08588cb2 +0x56:  sub    $0x4,%esp
08588cb5 +0x59:  lea    -0xc(%ebp),%eax
08588cb8 +0x5c:  mov    %eax,0x4(%esp)
08588cbc +0x60:  lea    -0x10(%ebp),%eax
08588cbf +0x63:  mov    %eax,(%esp)
08588cc2 +0x66:  call   0858977a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa6d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa6d
08588cc7 +0x6b:  test   %al,%al
08588cc9 +0x6d:  jne    08588c7c <+0x20>
08588ccb +0x6f:  leave
08588ccc +0x70:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight @ 0x8588c5c

/* online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight() */

void online_preliminary::COnlinePreliminaryTeamMgr::ResetDailyMidnight(void)

{
  char cVar1;
  int iVar2;
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_14 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_10 [12];
  
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::begin(local_14);
  while( true ) {
    std::
    map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)local_14);
    COnlinePreliminaryTeam::ResetDailyMidnight(*(COnlinePreliminaryTeam **)(iVar2 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
    operator++((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                *)local_14);
  }
  return;
}
```
