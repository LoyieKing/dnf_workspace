# FindTeam

`_ZN18online_preliminary25COnlinePreliminaryTeamMgr8FindTeamEi`

`online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x0858875e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858875e  _ZN18online_preliminary25COnlinePreliminaryTeamMgr8FindTeamEi
#           online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int)
# range [0x0858875e, 0x085887c7]
0858875e +0x00:  push   %ebp
0858875f +0x01:  mov    %esp,%ebp
08588761 +0x03:  sub    $0x28,%esp
08588764 +0x06:  mov    0x8(%ebp),%eax
08588767 +0x09:  lea    0x4(%eax),%ecx
0858876a +0x0c:  lea    -0x10(%ebp),%eax
0858876d +0x0f:  lea    0xc(%ebp),%edx
08588770 +0x12:  mov    %edx,0x8(%esp)
08588774 +0x16:  mov    %ecx,0x4(%esp)
08588778 +0x1a:  mov    %eax,(%esp)
0858877b +0x1d:  call   08589728 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa1b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa1b
08588780 +0x22:  sub    $0x4,%esp
08588783 +0x25:  mov    0x8(%ebp),%eax
08588786 +0x28:  lea    0x4(%eax),%edx
08588789 +0x2b:  lea    -0xc(%ebp),%eax
0858878c +0x2e:  mov    %edx,0x4(%esp)
08588790 +0x32:  mov    %eax,(%esp)
08588793 +0x35:  call   08589754 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa47>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa47
08588798 +0x3a:  sub    $0x4,%esp
0858879b +0x3d:  lea    -0xc(%ebp),%eax
0858879e +0x40:  mov    %eax,0x4(%esp)
085887a2 +0x44:  lea    -0x10(%ebp),%eax
085887a5 +0x47:  mov    %eax,(%esp)
085887a8 +0x4a:  call   0858977a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa6d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa6d
085887ad +0x4f:  test   %al,%al
085887af +0x51:  je     085887c1 <+0x63>
085887b1 +0x53:  lea    -0x10(%ebp),%eax
085887b4 +0x56:  mov    %eax,(%esp)
085887b7 +0x59:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
085887bc +0x5e:  mov    0x4(%eax),%eax
085887bf +0x61:  jmp    085887c6 <+0x68>
085887c1 +0x63:  mov    $0x0,%eax
085887c6 +0x68:  leave
085887c7 +0x69:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::FindTeam @ 0x858875e

/* online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int) */

undefined4 online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>> local_14 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_10 [12];
  
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find((int *)local_14);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
