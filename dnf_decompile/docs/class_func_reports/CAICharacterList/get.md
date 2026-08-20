# get

`_ZN16CAICharacterList3getEj`

`CAICharacterList::get(unsigned int)`

| 类 | 地址 |
|---|---|
| `CAICharacterList` | `0x0834a9d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a9d2  _ZN16CAICharacterList3getEj
#           CAICharacterList::get(unsigned int)
# range [0x0834a9d2, 0x0834aa5f]
0834a9d2 +0x00:  push   %ebp
0834a9d3 +0x01:  mov    %esp,%ebp
0834a9d5 +0x03:  sub    $0x38,%esp
0834a9d8 +0x06:  mov    0xc(%ebp),%eax
0834a9db +0x09:  mov    %eax,-0x14(%ebp)
0834a9de +0x0c:  mov    0x8(%ebp),%edx
0834a9e1 +0x0f:  lea    -0x18(%ebp),%eax
0834a9e4 +0x12:  lea    -0x14(%ebp),%ecx
0834a9e7 +0x15:  mov    %ecx,0x8(%esp)
0834a9eb +0x19:  mov    %edx,0x4(%esp)
0834a9ef +0x1d:  mov    %eax,(%esp)
0834a9f2 +0x20:  call   08388b48 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x185e8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x185e8
0834a9f7 +0x25:  sub    $0x4,%esp
0834a9fa +0x28:  lea    -0x18(%ebp),%eax
0834a9fd +0x2b:  mov    %eax,0x4(%esp)
0834aa01 +0x2f:  lea    -0x1c(%ebp),%eax
0834aa04 +0x32:  mov    %eax,(%esp)
0834aa07 +0x35:  call   08388b74 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18614>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18614
0834aa0c +0x3a:  mov    0x8(%ebp),%edx
0834aa0f +0x3d:  lea    -0xc(%ebp),%eax
0834aa12 +0x40:  mov    %edx,0x4(%esp)
0834aa16 +0x44:  mov    %eax,(%esp)
0834aa19 +0x47:  call   083888a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18344>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18344
0834aa1e +0x4c:  sub    $0x4,%esp
0834aa21 +0x4f:  lea    -0xc(%ebp),%eax
0834aa24 +0x52:  mov    %eax,0x4(%esp)
0834aa28 +0x56:  lea    -0x10(%ebp),%eax
0834aa2b +0x59:  mov    %eax,(%esp)
0834aa2e +0x5c:  call   08388b74 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18614>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18614
0834aa33 +0x61:  lea    -0x10(%ebp),%eax
0834aa36 +0x64:  mov    %eax,0x4(%esp)
0834aa3a +0x68:  lea    -0x1c(%ebp),%eax
0834aa3d +0x6b:  mov    %eax,(%esp)
0834aa40 +0x6e:  call   08388b84 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18624>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18624
0834aa45 +0x73:  test   %al,%al
0834aa47 +0x75:  je     0834aa59 <+0x87>
0834aa49 +0x77:  lea    -0x1c(%ebp),%eax
0834aa4c +0x7a:  mov    %eax,(%esp)
0834aa4f +0x7d:  call   08388b98 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18638>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18638
0834aa54 +0x82:  mov    0x4(%eax),%eax
0834aa57 +0x85:  jmp    0834aa5e <+0x8c>
0834aa59 +0x87:  mov    $0x0,%eax
0834aa5e +0x8c:  leave
0834aa5f +0x8d:  ret
```

## 反编译 C

```c
// CAICharacterList::get @ 0x834a9d2

/* CAICharacterList::get(unsigned int) */

undefined4 __thiscall CAICharacterList::get(CAICharacterList *this,uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  uint local_18;
  _Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>> local_14 [4];
  map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>
  local_10 [12];
  
  local_18 = param_1;
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::
  find((int *)local_1c);
  std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::_Rb_tree_const_iterator
            (local_20,local_1c);
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::end
            (local_10);
  std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::_Rb_tree_const_iterator
            (local_14,(_Rb_tree_iterator *)local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::operator!=
                    (local_20,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,CAICharacter*>>::operator->(local_20);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
