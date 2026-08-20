# getData

`_ZNK12CAchievement7getDataEPc`

`CAchievement::getData(char*) const`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c6a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c6a4  _ZNK12CAchievement7getDataEPc
#           CAchievement::getData(char*) const
# range [0x0828c6a4, 0x0828c773]
0828c6a4 +0x00:  push   %ebp
0828c6a5 +0x01:  mov    %esp,%ebp
0828c6a7 +0x03:  push   %ebx
0828c6a8 +0x04:  sub    $0x24,%esp
0828c6ab +0x07:  mov    0xc(%ebp),%eax
0828c6ae +0x0a:  mov    %eax,-0x10(%ebp)
0828c6b1 +0x0d:  movl   $0x0,-0xc(%ebp)
0828c6b8 +0x14:  mov    0x8(%ebp),%eax
0828c6bb +0x17:  lea    0xc(%eax),%edx
0828c6be +0x1a:  lea    -0x18(%ebp),%eax
0828c6c1 +0x1d:  mov    %edx,0x4(%esp)
0828c6c5 +0x21:  mov    %eax,(%esp)
0828c6c8 +0x24:  call   0828e140 <_GLOBAL__I__ZN12CAchievementC2Ev+0x8ed>  ; global constructors keyed to CAchievement::CAchievement()+0x8ed
0828c6cd +0x29:  sub    $0x4,%esp
0828c6d0 +0x2c:  jmp    0828c711 <+0x6d>
0828c6d2 +0x2e:  mov    -0xc(%ebp),%ebx
0828c6d5 +0x31:  lea    -0x18(%ebp),%eax
0828c6d8 +0x34:  mov    %eax,(%esp)
0828c6db +0x37:  call   0828e1a0 <_GLOBAL__I__ZN12CAchievementC2Ev+0x94d>  ; global constructors keyed to CAchievement::CAchievement()+0x94d
0828c6e0 +0x3c:  mov    %eax,%edx
0828c6e2 +0x3e:  mov    -0x10(%ebp),%ecx
0828c6e5 +0x41:  mov    %ebx,%eax
0828c6e7 +0x43:  add    %eax,%eax
0828c6e9 +0x45:  add    %ebx,%eax
0828c6eb +0x47:  shl    $0x2,%eax
0828c6ee +0x4a:  mov    0x4(%edx),%ebx
0828c6f1 +0x4d:  mov    %ebx,(%eax,%ecx,1)
0828c6f4 +0x50:  mov    0x8(%edx),%ebx
0828c6f7 +0x53:  mov    %ebx,0x4(%eax,%ecx,1)
0828c6fb +0x57:  mov    0xc(%edx),%edx
0828c6fe +0x5a:  mov    %edx,0x8(%eax,%ecx,1)
0828c702 +0x5e:  lea    -0x18(%ebp),%eax
0828c705 +0x61:  mov    %eax,(%esp)
0828c708 +0x64:  call   0828e1ae <_GLOBAL__I__ZN12CAchievementC2Ev+0x95b>  ; global constructors keyed to CAchievement::CAchievement()+0x95b
0828c70d +0x69:  addl   $0x1,-0xc(%ebp)
0828c711 +0x6d:  mov    0x8(%ebp),%eax
0828c714 +0x70:  lea    0xc(%eax),%edx
0828c717 +0x73:  lea    -0x14(%ebp),%eax
0828c71a +0x76:  mov    %edx,0x4(%esp)
0828c71e +0x7a:  mov    %eax,(%esp)
0828c721 +0x7d:  call   0828e166 <_GLOBAL__I__ZN12CAchievementC2Ev+0x913>  ; global constructors keyed to CAchievement::CAchievement()+0x913
0828c726 +0x82:  sub    $0x4,%esp
0828c729 +0x85:  lea    -0x14(%ebp),%eax
0828c72c +0x88:  mov    %eax,0x4(%esp)
0828c730 +0x8c:  lea    -0x18(%ebp),%eax
0828c733 +0x8f:  mov    %eax,(%esp)
0828c736 +0x92:  call   0828e18c <_GLOBAL__I__ZN12CAchievementC2Ev+0x939>  ; global constructors keyed to CAchievement::CAchievement()+0x939
0828c73b +0x97:  test   %al,%al
0828c73d +0x99:  jne    0828c6d2 <+0x2e>
0828c73f +0x9b:  mov    0x8(%ebp),%eax
0828c742 +0x9e:  add    $0xc,%eax
0828c745 +0xa1:  mov    %eax,(%esp)
0828c748 +0xa4:  call   0828e1cc <_GLOBAL__I__ZN12CAchievementC2Ev+0x979>  ; global constructors keyed to CAchievement::CAchievement()+0x979
0828c74d +0xa9:  mov    %eax,%edx
0828c74f +0xab:  mov    -0x10(%ebp),%eax
0828c752 +0xae:  mov    %edx,0x1800(%eax)
0828c758 +0xb4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0828c75f +0xbb:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0828c764 +0xc0:  mov    %eax,%edx
0828c766 +0xc2:  mov    -0x10(%ebp),%eax
0828c769 +0xc5:  mov    %edx,0x1804(%eax)
0828c76f +0xcb:  mov    -0x4(%ebp),%ebx
0828c772 +0xce:  leave
0828c773 +0xcf:  ret
```

## 反编译 C

```c
// CAchievement::getData @ 0x828c6a4

/* CAchievement::getData(char*) const */

void __thiscall CAchievement::getData(CAchievement *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_1c [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = 0;
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>> *)
                       local_1c,(_Rb_tree_const_iterator *)local_18);
    iVar3 = local_10;
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>> *)
                       local_1c);
    iVar3 = iVar3 * 0xc;
    *(undefined4 *)(local_14 + iVar3) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(local_14 + iVar3 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(local_14 + iVar3 + 8) = *(undefined4 *)(iVar2 + 0xc);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_1c);
    local_10 = local_10 + 1;
  }
  uVar4 = std::
          map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
          ::size((map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
                  *)(this + 0xc));
  *(undefined4 *)(local_14 + 0x1800) = uVar4;
  uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_14 + 0x1804) = uVar4;
  return;
}
```
