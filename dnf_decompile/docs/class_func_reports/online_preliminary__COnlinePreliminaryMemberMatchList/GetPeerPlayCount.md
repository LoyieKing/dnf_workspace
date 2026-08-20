# GetPeerPlayCount

`_ZNK18online_preliminary33COnlinePreliminaryMemberMatchList16GetPeerPlayCountEij`

`online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount(int, unsigned int) const`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586184` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586184  _ZNK18online_preliminary33COnlinePreliminaryMemberMatchList16GetPeerPlayCountEij
#           online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount(int, unsigned int) const
# range [0x08586184, 0x08586207]
08586184 +0x00:  push   %ebp
08586185 +0x01:  mov    %esp,%ebp
08586187 +0x03:  sub    $0x28,%esp
0858618a +0x06:  mov    0x10(%ebp),%eax
0858618d +0x09:  mov    %eax,0x8(%esp)
08586191 +0x0d:  mov    0xc(%ebp),%eax
08586194 +0x10:  mov    %eax,0x4(%esp)
08586198 +0x14:  lea    -0x14(%ebp),%eax
0858619b +0x17:  mov    %eax,(%esp)
0858619e +0x1a:  call   0858691e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x66>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x66
085861a3 +0x1f:  mov    0x8(%ebp),%eax
085861a6 +0x22:  lea    0x8(%eax),%ecx
085861a9 +0x25:  lea    -0x18(%ebp),%eax
085861ac +0x28:  lea    -0x14(%ebp),%edx
085861af +0x2b:  mov    %edx,0x8(%esp)
085861b3 +0x2f:  mov    %ecx,0x4(%esp)
085861b7 +0x33:  mov    %eax,(%esp)
085861ba +0x36:  call   08586998 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0xe0>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0xe0
085861bf +0x3b:  sub    $0x4,%esp
085861c2 +0x3e:  mov    0x8(%ebp),%eax
085861c5 +0x41:  lea    0x8(%eax),%edx
085861c8 +0x44:  lea    -0xc(%ebp),%eax
085861cb +0x47:  mov    %edx,0x4(%esp)
085861cf +0x4b:  mov    %eax,(%esp)
085861d2 +0x4e:  call   085869c4 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x10c>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x10c
085861d7 +0x53:  sub    $0x4,%esp
085861da +0x56:  lea    -0xc(%ebp),%eax
085861dd +0x59:  mov    %eax,0x4(%esp)
085861e1 +0x5d:  lea    -0x18(%ebp),%eax
085861e4 +0x60:  mov    %eax,(%esp)
085861e7 +0x63:  call   085869ea <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x132>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x132
085861ec +0x68:  test   %al,%al
085861ee +0x6a:  je     08586200 <+0x7c>
085861f0 +0x6c:  lea    -0x18(%ebp),%eax
085861f3 +0x6f:  mov    %eax,(%esp)
085861f6 +0x72:  call   085869fe <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x146>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x146
085861fb +0x77:  mov    0x8(%eax),%eax
085861fe +0x7a:  jmp    08586205 <+0x81>
08586200 +0x7c:  mov    $0x0,%eax
08586205 +0x81:  leave
08586206 +0x82:  ret
08586207 +0x83:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount @ 0x8586184

/* online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount(int, unsigned int) const
    */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::GetPeerPlayCount
          (COnlinePreliminaryMemberMatchList *this,int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CharacterInServer local_1c [4];
  CharacterInServer local_18 [8];
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  local_10 [12];
  
  CharacterInServer::CharacterInServer(local_18,param_1,param_2);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::find(local_1c);
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
            ::operator->((_Rb_tree_const_iterator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>
                          *)local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 8);
  }
  return uVar3;
}
```
