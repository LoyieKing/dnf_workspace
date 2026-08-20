# OnLoadTeamInfo

`_ZN18online_preliminary25COnlinePreliminaryTeamMgr14OnLoadTeamInfoEP5CUserPc`

`online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x08588be4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08588be4  _ZN18online_preliminary25COnlinePreliminaryTeamMgr14OnLoadTeamInfoEP5CUserPc
#           online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo(CUser*, char*)
# range [0x08588be4, 0x08588c5b]
08588be4 +0x00:  push   %ebp
08588be5 +0x01:  mov    %esp,%ebp
08588be7 +0x03:  sub    $0x28,%esp
08588bea +0x06:  mov    0x10(%ebp),%eax
08588bed +0x09:  mov    %eax,-0xc(%ebp)
08588bf0 +0x0c:  mov    -0xc(%ebp),%edx
08588bf3 +0x0f:  mov    0x8(%ebp),%eax
08588bf6 +0x12:  lea    0x4(%eax),%ecx
08588bf9 +0x15:  lea    -0x14(%ebp),%eax
08588bfc +0x18:  mov    %edx,0x8(%esp)
08588c00 +0x1c:  mov    %ecx,0x4(%esp)
08588c04 +0x20:  mov    %eax,(%esp)
08588c07 +0x23:  call   08589728 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa1b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa1b
08588c0c +0x28:  sub    $0x4,%esp
08588c0f +0x2b:  mov    0x8(%ebp),%eax
08588c12 +0x2e:  lea    0x4(%eax),%edx
08588c15 +0x31:  lea    -0x10(%ebp),%eax
08588c18 +0x34:  mov    %edx,0x4(%esp)
08588c1c +0x38:  mov    %eax,(%esp)
08588c1f +0x3b:  call   08589754 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa47>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa47
08588c24 +0x40:  sub    $0x4,%esp
08588c27 +0x43:  lea    -0x10(%ebp),%eax
08588c2a +0x46:  mov    %eax,0x4(%esp)
08588c2e +0x4a:  lea    -0x14(%ebp),%eax
08588c31 +0x4d:  mov    %eax,(%esp)
08588c34 +0x50:  call   0858977a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa6d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa6d
08588c39 +0x55:  test   %al,%al
08588c3b +0x57:  je     08588c5a <+0x76>
08588c3d +0x59:  lea    -0x14(%ebp),%eax
08588c40 +0x5c:  mov    %eax,(%esp)
08588c43 +0x5f:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
08588c48 +0x64:  mov    0x4(%eax),%eax
08588c4b +0x67:  mov    0x10(%ebp),%edx
08588c4e +0x6a:  mov    %edx,0x4(%esp)
08588c52 +0x6e:  mov    %eax,(%esp)
08588c55 +0x71:  call   0858831a <_ZN18online_preliminary22COnlinePreliminaryTeam32loadDataPreliminaryTeamMatchListEPc>  ; online_preliminary::COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList(char*)
08588c5a +0x76:  leave
08588c5b +0x77:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo @ 0x8588be4

/* online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo(CUser*, char*) */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::OnLoadTeamInfo
          (COnlinePreliminaryTeamMgr *this,CUser *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>> local_18 [4];
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_14 [4];
  char *local_10;
  
  local_10 = param_2;
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find((int *)local_18);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->(local_18);
    COnlinePreliminaryTeam::loadDataPreliminaryTeamMatchList
              (*(COnlinePreliminaryTeam **)(iVar2 + 4),param_2);
  }
  return;
}
```
