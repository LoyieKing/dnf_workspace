# getClearStageSummary

`_ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi`

`advancealtar::CharacAdvanceAltarManager::getClearStageSummary(int*) const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081318e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081318e2  _ZNK12advancealtar25CharacAdvanceAltarManager20getClearStageSummaryEPi
#           advancealtar::CharacAdvanceAltarManager::getClearStageSummary(int*) const
# range [0x081318e2, 0x081319ad]
081318e2 +0x00:  push   %ebp
081318e3 +0x01:  mov    %esp,%ebp
081318e5 +0x03:  sub    $0x28,%esp
081318e8 +0x06:  mov    0x8(%ebp),%eax
081318eb +0x09:  mov    (%eax),%eax
081318ed +0x0b:  mov    %eax,-0xc(%ebp)
081318f0 +0x0e:  cmpl   $0x0,-0xc(%ebp)
081318f4 +0x12:  je     081319aa <+0xc8>
081318fa +0x18:  mov    -0xc(%ebp),%eax
081318fd +0x1b:  lea    0x24(%eax),%edx
08131900 +0x1e:  lea    -0x18(%ebp),%eax
08131903 +0x21:  mov    %edx,0x4(%esp)
08131907 +0x25:  mov    %eax,(%esp)
0813190a +0x28:  call   08135ed8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1adf>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1adf
0813190f +0x2d:  sub    $0x4,%esp
08131912 +0x30:  jmp    08131976 <+0x94>
08131914 +0x32:  lea    -0x18(%ebp),%eax
08131917 +0x35:  mov    %eax,(%esp)
0813191a +0x38:  call   08135f76 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b7d
0813191f +0x3d:  mov    0x8(%eax),%eax
08131922 +0x40:  cmp    $0x1,%eax
08131925 +0x43:  je     0813193f <+0x5d>
08131927 +0x45:  cmp    $0x2,%eax
0813192a +0x48:  je     08131932 <+0x50>
0813192c +0x4a:  test   %eax,%eax
0813192e +0x4c:  je     0813194c <+0x6a>
08131930 +0x4e:  jmp    08131959 <+0x77>
08131932 +0x50:  mov    0xc(%ebp),%eax
08131935 +0x53:  add    $0x8,%eax
08131938 +0x56:  mov    (%eax),%edx
0813193a +0x58:  add    $0x1,%edx
0813193d +0x5b:  mov    %edx,(%eax)
0813193f +0x5d:  mov    0xc(%ebp),%eax
08131942 +0x60:  add    $0x4,%eax
08131945 +0x63:  mov    (%eax),%edx
08131947 +0x65:  add    $0x1,%edx
0813194a +0x68:  mov    %edx,(%eax)
0813194c +0x6a:  mov    0xc(%ebp),%eax
0813194f +0x6d:  mov    (%eax),%eax
08131951 +0x6f:  lea    0x1(%eax),%edx
08131954 +0x72:  mov    0xc(%ebp),%eax
08131957 +0x75:  mov    %edx,(%eax)
08131959 +0x77:  lea    -0x10(%ebp),%eax
0813195c +0x7a:  movl   $0x0,0x8(%esp)
08131964 +0x82:  lea    -0x18(%ebp),%edx
08131967 +0x85:  mov    %edx,0x4(%esp)
0813196b +0x89:  mov    %eax,(%esp)
0813196e +0x8c:  call   08135f38 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b3f
08131973 +0x91:  sub    $0x4,%esp
08131976 +0x94:  mov    -0xc(%ebp),%eax
08131979 +0x97:  lea    0x24(%eax),%edx
0813197c +0x9a:  lea    -0x14(%ebp),%eax
0813197f +0x9d:  mov    %edx,0x4(%esp)
08131983 +0xa1:  mov    %eax,(%esp)
08131986 +0xa4:  call   08135efe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b05>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b05
0813198b +0xa9:  sub    $0x4,%esp
0813198e +0xac:  lea    -0x14(%ebp),%eax
08131991 +0xaf:  mov    %eax,0x4(%esp)
08131995 +0xb3:  lea    -0x18(%ebp),%eax
08131998 +0xb6:  mov    %eax,(%esp)
0813199b +0xb9:  call   08135f24 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b2b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b2b
081319a0 +0xbe:  test   %al,%al
081319a2 +0xc0:  jne    08131914 <+0x32>
081319a8 +0xc6:  jmp    081319ab <+0xc9>
081319aa +0xc8:  nop
081319ab +0xc9:  leave
081319ac +0xca:  ret
081319ad +0xcb:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::getClearStageSummary @ 0x81318e2

/* advancealtar::CharacAdvanceAltarManager::getClearStageSummary(int*) const */

void __thiscall
advancealtar::CharacAdvanceAltarManager::getClearStageSummary
          (CharacAdvanceAltarManager *this,int *param_1)

{
  char cVar1;
  int iVar2;
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_1c [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_14 [4];
  int local_10;
  
  local_10 = *(int *)this;
  if (local_10 != 0) {
    std::
    map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                         local_1c,(_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> *)
                         local_1c);
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 1) {
LAB_0813193f:
        param_1[1] = param_1[1] + 1;
LAB_0813194c:
        *param_1 = *param_1 + 1;
      }
      else {
        if (iVar2 == 2) {
          param_1[2] = param_1[2] + 1;
          goto LAB_0813193f;
        }
        if (iVar2 == 0) goto LAB_0813194c;
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return;
}
```
