# OnLeaveUser

`_ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser`

`online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryTeamMgr` | `0x08588ae8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08588ae8  _ZN18online_preliminary25COnlinePreliminaryTeamMgr11OnLeaveUserEP5CUser
#           online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*)
# range [0x08588ae8, 0x08588be3]
08588ae8 +0x00:  push   %ebp
08588ae9 +0x01:  mov    %esp,%ebp
08588aeb +0x03:  sub    $0x28,%esp
08588aee +0x06:  mov    0xc(%ebp),%eax
08588af1 +0x09:  mov    %eax,(%esp)
08588af4 +0x0c:  call   08645de2 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv>  ; CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const
08588af9 +0x11:  mov    %eax,-0x10(%ebp)
08588afc +0x14:  mov    0x8(%ebp),%eax
08588aff +0x17:  lea    0x4(%eax),%ecx
08588b02 +0x1a:  lea    -0x14(%ebp),%eax
08588b05 +0x1d:  lea    -0x10(%ebp),%edx
08588b08 +0x20:  mov    %edx,0x8(%esp)
08588b0c +0x24:  mov    %ecx,0x4(%esp)
08588b10 +0x28:  mov    %eax,(%esp)
08588b13 +0x2b:  call   08589728 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa1b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa1b
08588b18 +0x30:  sub    $0x4,%esp
08588b1b +0x33:  mov    0x8(%ebp),%eax
08588b1e +0x36:  lea    0x4(%eax),%edx
08588b21 +0x39:  lea    -0xc(%ebp),%eax
08588b24 +0x3c:  mov    %edx,0x4(%esp)
08588b28 +0x40:  mov    %eax,(%esp)
08588b2b +0x43:  call   08589754 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa47>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa47
08588b30 +0x48:  sub    $0x4,%esp
08588b33 +0x4b:  lea    -0xc(%ebp),%eax
08588b36 +0x4e:  mov    %eax,0x4(%esp)
08588b3a +0x52:  lea    -0x14(%ebp),%eax
08588b3d +0x55:  mov    %eax,(%esp)
08588b40 +0x58:  call   0858977a <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa6d>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa6d
08588b45 +0x5d:  test   %al,%al
08588b47 +0x5f:  je     08588be2 <+0xfa>
08588b4d +0x65:  mov    0xc(%ebp),%eax
08588b50 +0x68:  movl   $0x0,0x4(%esp)
08588b58 +0x70:  mov    %eax,(%esp)
08588b5b +0x73:  call   08588dba <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xad>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xad
08588b60 +0x78:  lea    -0x14(%ebp),%eax
08588b63 +0x7b:  mov    %eax,(%esp)
08588b66 +0x7e:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
08588b6b +0x83:  mov    0x4(%eax),%eax
08588b6e +0x86:  mov    %eax,(%esp)
08588b71 +0x89:  call   08588d7e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x71>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x71
08588b76 +0x8e:  cmp    $0x1,%eax
08588b79 +0x91:  sete   %al
08588b7c +0x94:  test   %al,%al
08588b7e +0x96:  je     08588bcc <+0xe4>
08588b80 +0x98:  lea    -0x14(%ebp),%eax
08588b83 +0x9b:  mov    %eax,(%esp)
08588b86 +0x9e:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
08588b8b +0xa3:  mov    0x4(%eax),%eax
08588b8e +0xa6:  mov    %eax,(%esp)
08588b91 +0xa9:  call   08588d60 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x53>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x53
08588b96 +0xae:  lea    -0x14(%ebp),%eax
08588b99 +0xb1:  mov    %eax,(%esp)
08588b9c +0xb4:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
08588ba1 +0xb9:  mov    0x4(%eax),%edx
08588ba4 +0xbc:  mov    0x8(%ebp),%eax
08588ba7 +0xbf:  mov    (%eax),%eax
08588ba9 +0xc1:  mov    %edx,0x4(%esp)
08588bad +0xc5:  mov    %eax,(%esp)
08588bb0 +0xc8:  call   08588dec <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xdf>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xdf
08588bb5 +0xcd:  mov    0x8(%ebp),%eax
08588bb8 +0xd0:  lea    0x4(%eax),%edx
08588bbb +0xd3:  mov    -0x14(%ebp),%eax
08588bbe +0xd6:  mov    %eax,0x4(%esp)
08588bc2 +0xda:  mov    %edx,(%esp)
08588bc5 +0xdd:  call   08589836 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xb29>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xb29
08588bca +0xe2:  jmp    08588be2 <+0xfa>
08588bcc +0xe4:  lea    -0x14(%ebp),%eax
08588bcf +0xe7:  mov    %eax,(%esp)
08588bd2 +0xea:  call   0858978e <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0xa81>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0xa81
08588bd7 +0xef:  mov    0x4(%eax),%eax
08588bda +0xf2:  mov    %eax,(%esp)
08588bdd +0xf5:  call   08588da8 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x9b>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x9b
08588be2 +0xfa:  leave
08588be3 +0xfb:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser @ 0x8588ae8

/* online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminaryTeamMgr::OnLeaveUser
          (COnlinePreliminaryTeamMgr *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int local_18;
  undefined4 local_14;
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  local_10 [12];
  
  local_14 = CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId((CUserCharacInfo *)param_1);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::find(&local_18);
  std::
  map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
          operator!=((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                      *)&local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    CUserCharacInfo::SetCurCharacOnlinePreliminaryTeam
              ((CUserCharacInfo *)param_1,(COnlinePreliminaryTeam *)0x0);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
            ::operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
    iVar2 = COnlinePreliminaryTeam::GetCurrentUserCount(*(COnlinePreliminaryTeam **)(iVar2 + 4));
    if (iVar2 == 1) {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
      COnlinePreliminaryTeam::saveData(*(COnlinePreliminaryTeam **)(iVar2 + 4));
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
      CTeamFactory::Free(*(CTeamFactory **)this,*(COnlinePreliminaryTeam **)(iVar2 + 4));
      std::
      map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
      ::erase((map<int,online_preliminary::COnlinePreliminaryTeam*,std::less<int>,std::allocator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>>
               *)(this + 4),local_18);
    }
    else {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,online_preliminary::COnlinePreliminaryTeam*>>
                          *)&local_18);
      COnlinePreliminaryTeam::DecreaseCurrentUserCount(*(COnlinePreliminaryTeam **)(iVar2 + 4));
    }
  }
  return;
}
```
