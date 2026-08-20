# isClearedAchievement

`_ZN12CAchievement20isClearedAchievementEj`

`CAchievement::isClearedAchievement(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828cbe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828cbe4  _ZN12CAchievement20isClearedAchievementEj
#           CAchievement::isClearedAchievement(unsigned int)
# range [0x0828cbe4, 0x0828cc55]
0828cbe4 +0x00:  push   %ebp
0828cbe5 +0x01:  mov    %esp,%ebp
0828cbe7 +0x03:  sub    $0x28,%esp
0828cbea +0x06:  mov    0x8(%ebp),%eax
0828cbed +0x09:  lea    0xc(%eax),%ecx
0828cbf0 +0x0c:  lea    -0x10(%ebp),%eax
0828cbf3 +0x0f:  lea    0xc(%ebp),%edx
0828cbf6 +0x12:  mov    %edx,0x8(%esp)
0828cbfa +0x16:  mov    %ecx,0x4(%esp)
0828cbfe +0x1a:  mov    %eax,(%esp)
0828cc01 +0x1d:  call   0828ddbe <_GLOBAL__I__ZN12CAchievementC2Ev+0x56b>  ; global constructors keyed to CAchievement::CAchievement()+0x56b
0828cc06 +0x22:  sub    $0x4,%esp
0828cc09 +0x25:  mov    0x8(%ebp),%eax
0828cc0c +0x28:  lea    0xc(%eax),%edx
0828cc0f +0x2b:  lea    -0xc(%ebp),%eax
0828cc12 +0x2e:  mov    %edx,0x4(%esp)
0828cc16 +0x32:  mov    %eax,(%esp)
0828cc19 +0x35:  call   0828ddea <_GLOBAL__I__ZN12CAchievementC2Ev+0x597>  ; global constructors keyed to CAchievement::CAchievement()+0x597
0828cc1e +0x3a:  sub    $0x4,%esp
0828cc21 +0x3d:  lea    -0xc(%ebp),%eax
0828cc24 +0x40:  mov    %eax,0x4(%esp)
0828cc28 +0x44:  lea    -0x10(%ebp),%eax
0828cc2b +0x47:  mov    %eax,(%esp)
0828cc2e +0x4a:  call   0828de10 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5bd>  ; global constructors keyed to CAchievement::CAchievement()+0x5bd
0828cc33 +0x4f:  test   %al,%al
0828cc35 +0x51:  je     0828cc4f <+0x6b>
0828cc37 +0x53:  lea    -0x10(%ebp),%eax
0828cc3a +0x56:  mov    %eax,(%esp)
0828cc3d +0x59:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828cc42 +0x5e:  add    $0x4,%eax
0828cc45 +0x61:  mov    %eax,(%esp)
0828cc48 +0x64:  call   0828d8a2 <_GLOBAL__I__ZN12CAchievementC2Ev+0x4f>  ; global constructors keyed to CAchievement::CAchievement()+0x4f
0828cc4d +0x69:  jmp    0828cc54 <+0x70>
0828cc4f +0x6b:  mov    $0x0,%eax
0828cc54 +0x70:  leave
0828cc55 +0x71:  ret
```

## 反编译 C

```c
// CAchievement::isClearedAchievement @ 0x828cbe4

/* CAchievement::isClearedAchievement(unsigned int) */

undefined4 CAchievement::isClearedAchievement(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_14 [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_10 [12];
  
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_14);
    uVar3 = stAchievement::isComplete((stAchievement *)(iVar2 + 4));
  }
  return uVar3;
}
```
