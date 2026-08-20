# _get_part_type

`_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi`

`random_option::CRandomOptionItemHandle::_get_part_type(int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f1088` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f1088  _ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi
#           random_option::CRandomOptionItemHandle::_get_part_type(int)
# range [0x085f1088, 0x085f11a3]
085f1088 +0x000:  push   %ebp
085f1089 +0x001:  mov    %esp,%ebp
085f108b +0x003:  sub    $0x38,%esp
085f108e +0x006:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1093 +0x00b:  lea    0x30(%eax),%ecx
085f1096 +0x00e:  lea    -0x1c(%ebp),%eax
085f1099 +0x011:  lea    0xc(%ebp),%edx
085f109c +0x014:  mov    %edx,0x8(%esp)
085f10a0 +0x018:  mov    %ecx,0x4(%esp)
085f10a4 +0x01c:  mov    %eax,(%esp)
085f10a7 +0x01f:  call   085f4374 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x38f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x38f
085f10ac +0x024:  sub    $0x4,%esp
085f10af +0x027:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f10b4 +0x02c:  lea    0x30(%eax),%edx
085f10b7 +0x02f:  lea    -0x18(%ebp),%eax
085f10ba +0x032:  mov    %edx,0x4(%esp)
085f10be +0x036:  mov    %eax,(%esp)
085f10c1 +0x039:  call   085f43a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3bb
085f10c6 +0x03e:  sub    $0x4,%esp
085f10c9 +0x041:  lea    -0x18(%ebp),%eax
085f10cc +0x044:  mov    %eax,0x4(%esp)
085f10d0 +0x048:  lea    -0x1c(%ebp),%eax
085f10d3 +0x04b:  mov    %eax,(%esp)
085f10d6 +0x04e:  call   085f43c6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3e1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3e1
085f10db +0x053:  test   %al,%al
085f10dd +0x055:  je     085f119c <+0x114>
085f10e3 +0x05b:  lea    -0x1c(%ebp),%eax
085f10e6 +0x05e:  mov    %eax,(%esp)
085f10e9 +0x061:  call   085f43da <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3f5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3f5
085f10ee +0x066:  mov    0x10(%eax),%eax
085f10f1 +0x069:  mov    %eax,-0x14(%ebp)
085f10f4 +0x06c:  mov    0x8(%ebp),%eax
085f10f7 +0x06f:  mov    0x4(%eax),%eax
085f10fa +0x072:  lea    0x1390(%eax),%edx
085f1100 +0x078:  lea    -0x14(%ebp),%eax
085f1103 +0x07b:  mov    %eax,0x4(%esp)
085f1107 +0x07f:  mov    %edx,(%esp)
085f110a +0x082:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f110f +0x087:  mov    %eax,-0xc(%ebp)
085f1112 +0x08a:  lea    -0x1c(%ebp),%eax
085f1115 +0x08d:  mov    %eax,(%esp)
085f1118 +0x090:  call   085f43da <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3f5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3f5
085f111d +0x095:  lea    0x4(%eax),%edx
085f1120 +0x098:  lea    -0x20(%ebp),%eax
085f1123 +0x09b:  mov    %edx,0x4(%esp)
085f1127 +0x09f:  mov    %eax,(%esp)
085f112a +0x0a2:  call   085f43e8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x403>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x403
085f112f +0x0a7:  sub    $0x4,%esp
085f1132 +0x0aa:  jmp    085f1166 <+0xde>
085f1134 +0x0ac:  lea    -0x20(%ebp),%eax
085f1137 +0x0af:  mov    %eax,(%esp)
085f113a +0x0b2:  call   085f4482 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x49d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x49d
085f113f +0x0b7:  mov    0x4(%eax),%eax
085f1142 +0x0ba:  cmp    -0xc(%ebp),%eax
085f1145 +0x0bd:  seta   %al
085f1148 +0x0c0:  test   %al,%al
085f114a +0x0c2:  je     085f115b <+0xd3>
085f114c +0x0c4:  lea    -0x20(%ebp),%eax
085f114f +0x0c7:  mov    %eax,(%esp)
085f1152 +0x0ca:  call   085f4482 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x49d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x49d
085f1157 +0x0cf:  mov    (%eax),%eax
085f1159 +0x0d1:  jmp    085f11a1 <+0x119>
085f115b +0x0d3:  lea    -0x20(%ebp),%eax
085f115e +0x0d6:  mov    %eax,(%esp)
085f1161 +0x0d9:  call   085f446c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x487>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x487
085f1166 +0x0de:  lea    -0x1c(%ebp),%eax
085f1169 +0x0e1:  mov    %eax,(%esp)
085f116c +0x0e4:  call   085f43da <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3f5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3f5
085f1171 +0x0e9:  lea    0x4(%eax),%edx
085f1174 +0x0ec:  lea    -0x10(%ebp),%eax
085f1177 +0x0ef:  mov    %edx,0x4(%esp)
085f117b +0x0f3:  mov    %eax,(%esp)
085f117e +0x0f6:  call   085f4414 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x42f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x42f
085f1183 +0x0fb:  sub    $0x4,%esp
085f1186 +0x0fe:  lea    -0x10(%ebp),%eax
085f1189 +0x101:  mov    %eax,0x4(%esp)
085f118d +0x105:  lea    -0x20(%ebp),%eax
085f1190 +0x108:  mov    %eax,(%esp)
085f1193 +0x10b:  call   085f4440 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x45b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x45b
085f1198 +0x110:  test   %al,%al
085f119a +0x112:  jne    085f1134 <+0xac>
085f119c +0x114:  mov    $0x0,%eax
085f11a1 +0x119:  leave
085f11a2 +0x11a:  ret
085f11a3 +0x11b:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_part_type @ 0x85f1088

/* random_option::CRandomOptionItemHandle::_get_part_type(int) */

undefined4 random_option::CRandomOptionItemHandle::_get_part_type(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>> local_20 [4];
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>
  local_1c [4];
  ulong local_18;
  __normal_iterator local_14 [4];
  uint local_10;
  
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  find((int *)local_20);
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  end(local_1c);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator!=
                    (local_20,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->
                      (local_20);
    local_18 = *(ulong *)(iVar3 + 0x10);
    local_10 = CMTRand::randInt((CMTRand *)(*(int *)(param_1 + 4) + 0x1390),&local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_20);
    std::vector<PartSelectonField,std::allocator<PartSelectonField>>::begin();
    while( true ) {
      std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_20);
      std::vector<PartSelectonField,std::allocator<PartSelectonField>>::end();
      bVar2 = __gnu_cxx::operator!=(local_24,local_14);
      if (!bVar2) break;
      iVar3 = __gnu_cxx::
              __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
              ::operator*(local_24);
      if (local_10 < *(uint *)(iVar3 + 4)) {
        puVar4 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
                 ::operator*(local_24);
        return *puVar4;
      }
      __gnu_cxx::
      __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
      ::operator++(local_24);
    }
  }
  return 0;
}
```
