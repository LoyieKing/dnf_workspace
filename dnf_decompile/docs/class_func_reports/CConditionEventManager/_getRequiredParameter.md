# _getRequiredParameter

`_ZN22CConditionEventManager21_getRequiredParameterEs`

`CConditionEventManager::_getRequiredParameter(short)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x083356a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083356a4  _ZN22CConditionEventManager21_getRequiredParameterEs
#           CConditionEventManager::_getRequiredParameter(short)
# range [0x083356a4, 0x08335751]
083356a4 +0x00:  push   %ebp
083356a5 +0x01:  mov    %esp,%ebp
083356a7 +0x03:  push   %ebx
083356a8 +0x04:  sub    $0x34,%esp
083356ab +0x07:  mov    0x8(%ebp),%ebx
083356ae +0x0a:  mov    0x10(%ebp),%eax
083356b1 +0x0d:  mov    %ax,-0x1c(%ebp)
083356b5 +0x11:  mov    %ebx,(%esp)
083356b8 +0x14:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
083356bd +0x19:  movswl -0x1c(%ebp),%eax
083356c1 +0x1d:  mov    %eax,-0x10(%ebp)
083356c4 +0x20:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083356c9 +0x25:  lea    0x4da0(%eax),%ecx
083356cf +0x2b:  lea    -0x14(%ebp),%eax
083356d2 +0x2e:  lea    -0x10(%ebp),%edx
083356d5 +0x31:  mov    %edx,0x8(%esp)
083356d9 +0x35:  mov    %ecx,0x4(%esp)
083356dd +0x39:  mov    %eax,(%esp)
083356e0 +0x3c:  call   080ce89a <_GLOBAL__I__ZN10BingoEventC2Ev+0x36e7>  ; global constructors keyed to BingoEvent::BingoEvent()+0x36e7
083356e5 +0x41:  sub    $0x4,%esp
083356e8 +0x44:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083356ed +0x49:  lea    0x4da0(%eax),%edx
083356f3 +0x4f:  lea    -0xc(%ebp),%eax
083356f6 +0x52:  mov    %edx,0x4(%esp)
083356fa +0x56:  mov    %eax,(%esp)
083356fd +0x59:  call   080cd2c8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x2115>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2115
08335702 +0x5e:  sub    $0x4,%esp
08335705 +0x61:  lea    -0xc(%ebp),%eax
08335708 +0x64:  mov    %eax,0x4(%esp)
0833570c +0x68:  lea    -0x14(%ebp),%eax
0833570f +0x6b:  mov    %eax,(%esp)
08335712 +0x6e:  call   081b47d4 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x48>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x48
08335717 +0x73:  test   %al,%al
08335719 +0x75:  je     0833573e <+0x9a>
0833571b +0x77:  lea    -0x14(%ebp),%eax
0833571e +0x7a:  mov    %eax,(%esp)
08335721 +0x7d:  call   081b5d20 <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0xc3>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0xc3
08335726 +0x82:  mov    0x4(%eax),%eax
08335729 +0x85:  mov    %eax,(%ebx)
0833572b +0x87:  lea    -0x14(%ebp),%eax
0833572e +0x8a:  mov    %eax,(%esp)
08335731 +0x8d:  call   081b5d20 <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0xc3>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0xc3
08335736 +0x92:  mov    0x8(%eax),%eax
08335739 +0x95:  mov    %eax,0x4(%ebx)
0833573c +0x98:  jmp    0833574b <+0xa7>
0833573e +0x9a:  movl   $0xffffffff,(%ebx)
08335744 +0xa0:  movl   $0xffffffff,0x4(%ebx)
0833574b +0xa7:  mov    %ebx,%eax
0833574d +0xa9:  mov    -0x4(%ebp),%ebx
08335750 +0xac:  leave
08335751 +0xad:  ret    $0x4
```

## 反编译 C

```c
// CConditionEventManager::_getRequiredParameter @ 0x83356a4

/* CConditionEventManager::_getRequiredParameter(short) */

pair<int,int> * CConditionEventManager::_getRequiredParameter(short param_1)

{
  char cVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  short in_stack_0000000c;
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_18 [4];
  int local_14;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_10 [8];
  
  std::pair<int,int>::pair(_param_1);
  local_14 = (int)in_stack_0000000c;
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_18);
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)_param_1 = 0xffffffff;
    *(undefined4 *)(_param_1 + 4) = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator*(local_18);
    *(undefined4 *)_param_1 = *(undefined4 *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator*(local_18);
    *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(iVar2 + 8);
  }
  return _param_1;
}
```
