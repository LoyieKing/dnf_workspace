# _getTrigger

`_ZN12CAchievement11_getTriggerEj`

`CAchievement::_getTrigger(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828bb14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828bb14  _ZN12CAchievement11_getTriggerEj
#           CAchievement::_getTrigger(unsigned int)
# range [0x0828bb14, 0x0828bbab]
0828bb14 +0x00:  push   %ebp
0828bb15 +0x01:  mov    %esp,%ebp
0828bb17 +0x03:  push   %ebx
0828bb18 +0x04:  sub    $0x34,%esp
0828bb1b +0x07:  mov    0x8(%ebp),%ebx
0828bb1e +0x0a:  lea    -0x18(%ebp),%eax
0828bb21 +0x0d:  mov    %eax,(%esp)
0828bb24 +0x10:  call   0828d870 <_GLOBAL__I__ZN12CAchievementC2Ev+0x1d>  ; global constructors keyed to CAchievement::CAchievement()+0x1d
0828bb29 +0x15:  mov    0xc(%ebp),%eax
0828bb2c +0x18:  lea    0xc(%eax),%ecx
0828bb2f +0x1b:  lea    -0x1c(%ebp),%eax
0828bb32 +0x1e:  lea    0x10(%ebp),%edx
0828bb35 +0x21:  mov    %edx,0x8(%esp)
0828bb39 +0x25:  mov    %ecx,0x4(%esp)
0828bb3d +0x29:  mov    %eax,(%esp)
0828bb40 +0x2c:  call   0828ddbe <_GLOBAL__I__ZN12CAchievementC2Ev+0x56b>  ; global constructors keyed to CAchievement::CAchievement()+0x56b
0828bb45 +0x31:  sub    $0x4,%esp
0828bb48 +0x34:  mov    0xc(%ebp),%eax
0828bb4b +0x37:  lea    0xc(%eax),%edx
0828bb4e +0x3a:  lea    -0xc(%ebp),%eax
0828bb51 +0x3d:  mov    %edx,0x4(%esp)
0828bb55 +0x41:  mov    %eax,(%esp)
0828bb58 +0x44:  call   0828ddea <_GLOBAL__I__ZN12CAchievementC2Ev+0x597>  ; global constructors keyed to CAchievement::CAchievement()+0x597
0828bb5d +0x49:  sub    $0x4,%esp
0828bb60 +0x4c:  lea    -0xc(%ebp),%eax
0828bb63 +0x4f:  mov    %eax,0x4(%esp)
0828bb67 +0x53:  lea    -0x1c(%ebp),%eax
0828bb6a +0x56:  mov    %eax,(%esp)
0828bb6d +0x59:  call   0828de10 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5bd>  ; global constructors keyed to CAchievement::CAchievement()+0x5bd
0828bb72 +0x5e:  test   %al,%al
0828bb74 +0x60:  je     0828bb94 <+0x80>
0828bb76 +0x62:  lea    -0x1c(%ebp),%eax
0828bb79 +0x65:  mov    %eax,(%esp)
0828bb7c +0x68:  call   0828de24 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5d1>  ; global constructors keyed to CAchievement::CAchievement()+0x5d1
0828bb81 +0x6d:  mov    0x4(%eax),%edx
0828bb84 +0x70:  mov    %edx,(%ebx)
0828bb86 +0x72:  mov    0x8(%eax),%edx
0828bb89 +0x75:  mov    %edx,0x4(%ebx)
0828bb8c +0x78:  mov    0xc(%eax),%eax
0828bb8f +0x7b:  mov    %eax,0x8(%ebx)
0828bb92 +0x7e:  jmp    0828bba5 <+0x91>
0828bb94 +0x80:  mov    -0x18(%ebp),%eax
0828bb97 +0x83:  mov    %eax,(%ebx)
0828bb99 +0x85:  mov    -0x14(%ebp),%eax
0828bb9c +0x88:  mov    %eax,0x4(%ebx)
0828bb9f +0x8b:  mov    -0x10(%ebp),%eax
0828bba2 +0x8e:  mov    %eax,0x8(%ebx)
0828bba5 +0x91:  mov    %ebx,%eax
0828bba7 +0x93:  mov    -0x4(%ebp),%ebx
0828bbaa +0x96:  leave
0828bbab +0x97:  ret    $0x4
```

## 反编译 C

```c
// CAchievement::_getTrigger @ 0x828bb14

/* CAchievement::_getTrigger(unsigned int) */

uint CAchievement::_getTrigger(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_10 [8];
  
  stAchievement::stAchievement((stAchievement *)&local_1c);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::find((uint *)local_20);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = local_1c;
    *(undefined4 *)(param_1 + 4) = local_18;
    *(undefined4 *)(param_1 + 8) = local_14;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_20);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0xc);
  }
  return param_1;
}
```
