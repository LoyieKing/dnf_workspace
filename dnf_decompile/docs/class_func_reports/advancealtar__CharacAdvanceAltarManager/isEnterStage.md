# isEnterStage

`_ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi`

`advancealtar::CharacAdvanceAltarManager::isEnterStage(int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x0813131a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813131a  _ZNK12advancealtar25CharacAdvanceAltarManager12isEnterStageEi
#           advancealtar::CharacAdvanceAltarManager::isEnterStage(int) const
# range [0x0813131a, 0x081313b5]
0813131a +0x00:  push   %ebp
0813131b +0x01:  mov    %esp,%ebp
0813131d +0x03:  sub    $0x28,%esp
08131320 +0x06:  mov    0x8(%ebp),%eax
08131323 +0x09:  mov    (%eax),%eax
08131325 +0x0b:  test   %eax,%eax
08131327 +0x0d:  jne    08131333 <+0x19>
08131329 +0x0f:  mov    $0x0,%eax
0813132e +0x14:  jmp    081313b4 <+0x9a>
08131333 +0x19:  mov    0x8(%ebp),%eax
08131336 +0x1c:  mov    (%eax),%eax
08131338 +0x1e:  lea    0x24(%eax),%ecx
0813133b +0x21:  lea    -0x14(%ebp),%eax
0813133e +0x24:  lea    0xc(%ebp),%edx
08131341 +0x27:  mov    %edx,0x8(%esp)
08131345 +0x2b:  mov    %ecx,0x4(%esp)
08131349 +0x2f:  mov    %eax,(%esp)
0813134c +0x32:  call   08135e2c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a33>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a33
08131351 +0x37:  sub    $0x4,%esp
08131354 +0x3a:  lea    -0x14(%ebp),%eax
08131357 +0x3d:  mov    %eax,0x4(%esp)
0813135b +0x41:  lea    -0x18(%ebp),%eax
0813135e +0x44:  mov    %eax,(%esp)
08131361 +0x47:  call   08135e58 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a5f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a5f
08131366 +0x4c:  mov    0x8(%ebp),%eax
08131369 +0x4f:  mov    (%eax),%eax
0813136b +0x51:  lea    0x24(%eax),%edx
0813136e +0x54:  lea    -0xc(%ebp),%eax
08131371 +0x57:  mov    %edx,0x4(%esp)
08131375 +0x5b:  mov    %eax,(%esp)
08131378 +0x5e:  call   08135e68 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a6f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a6f
0813137d +0x63:  sub    $0x4,%esp
08131380 +0x66:  lea    -0xc(%ebp),%eax
08131383 +0x69:  mov    %eax,0x4(%esp)
08131387 +0x6d:  lea    -0x10(%ebp),%eax
0813138a +0x70:  mov    %eax,(%esp)
0813138d +0x73:  call   08135e58 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a5f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a5f
08131392 +0x78:  lea    -0x10(%ebp),%eax
08131395 +0x7b:  mov    %eax,0x4(%esp)
08131399 +0x7f:  lea    -0x18(%ebp),%eax
0813139c +0x82:  mov    %eax,(%esp)
0813139f +0x85:  call   08135e8e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a95>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a95
081313a4 +0x8a:  test   %al,%al
081313a6 +0x8c:  je     081313af <+0x95>
081313a8 +0x8e:  mov    $0x0,%eax
081313ad +0x93:  jmp    081313b4 <+0x9a>
081313af +0x95:  mov    $0x1,%eax
081313b4 +0x9a:  leave
081313b5 +0x9b:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::isEnterStage @ 0x813131a

/* advancealtar::CharacAdvanceAltarManager::isEnterStage(int) const */

undefined4 advancealtar::CharacAdvanceAltarManager::isEnterStage(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_14 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_10 [12];
  
  if (*(int *)param_1 == 0) {
    uVar2 = 0;
  }
  else {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::find((int *)local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::_Rb_tree_const_iterator
              (local_1c,local_18);
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::_Rb_tree_const_iterator
              (local_14,(_Rb_tree_iterator *)local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator==
                      (local_1c,(_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
