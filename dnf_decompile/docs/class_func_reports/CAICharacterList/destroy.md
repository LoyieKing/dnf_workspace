# destroy

`_ZN16CAICharacterList7destroyEv`

`CAICharacterList::destroy()`

| 类 | 地址 |
|---|---|
| `CAICharacterList` | `0x0834a59a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a59a  _ZN16CAICharacterList7destroyEv
#           CAICharacterList::destroy()
# range [0x0834a59a, 0x0834a61b]
0834a59a +0x00:  push   %ebp
0834a59b +0x01:  mov    %esp,%ebp
0834a59d +0x03:  push   %ebx
0834a59e +0x04:  sub    $0x24,%esp
0834a5a1 +0x07:  mov    0x8(%ebp),%edx
0834a5a4 +0x0a:  lea    -0x10(%ebp),%eax
0834a5a7 +0x0d:  mov    %edx,0x4(%esp)
0834a5ab +0x11:  mov    %eax,(%esp)
0834a5ae +0x14:  call   0838887e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1831e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1831e
0834a5b3 +0x19:  sub    $0x4,%esp
0834a5b6 +0x1c:  mov    0x8(%ebp),%edx
0834a5b9 +0x1f:  lea    -0x14(%ebp),%eax
0834a5bc +0x22:  mov    %edx,0x4(%esp)
0834a5c0 +0x26:  mov    %eax,(%esp)
0834a5c3 +0x29:  call   083888a4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x18344>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x18344
0834a5c8 +0x2e:  sub    $0x4,%esp
0834a5cb +0x31:  jmp    0834a600 <+0x66>
0834a5cd +0x33:  lea    -0x10(%ebp),%eax
0834a5d0 +0x36:  mov    %eax,(%esp)
0834a5d3 +0x39:  call   083888fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1839c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1839c
0834a5d8 +0x3e:  mov    0x4(%eax),%eax
0834a5db +0x41:  mov    %eax,-0xc(%ebp)
0834a5de +0x44:  mov    -0xc(%ebp),%ebx
0834a5e1 +0x47:  test   %ebx,%ebx
0834a5e3 +0x49:  je     0834a5f5 <+0x5b>
0834a5e5 +0x4b:  mov    %ebx,(%esp)
0834a5e8 +0x4e:  call   08373b32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdafe>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdafe
0834a5ed +0x53:  mov    %ebx,(%esp)
0834a5f0 +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0834a5f5 +0x5b:  lea    -0x10(%ebp),%eax
0834a5f8 +0x5e:  mov    %eax,(%esp)
0834a5fb +0x61:  call   083888de <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1837e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1837e
0834a600 +0x66:  lea    -0x14(%ebp),%eax
0834a603 +0x69:  mov    %eax,0x4(%esp)
0834a607 +0x6d:  lea    -0x10(%ebp),%eax
0834a60a +0x70:  mov    %eax,(%esp)
0834a60d +0x73:  call   083888ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1836a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1836a
0834a612 +0x78:  test   %al,%al
0834a614 +0x7a:  jne    0834a5cd <+0x33>
0834a616 +0x7c:  mov    -0x4(%ebp),%ebx
0834a619 +0x7f:  leave
0834a61a +0x80:  ret
0834a61b +0x81:  nop
```

## 反编译 C

```c
// CAICharacterList::destroy @ 0x834a59a

/* CAICharacterList::destroy() */

void CAICharacterList::destroy(void)

{
  CAICharacter *this;
  char cVar1;
  int iVar2;
  map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>
  local_18 [4];
  map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>
  local_14 [4];
  CAICharacter *local_10;
  
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::
  begin(local_14);
  std::map<int,CAICharacter*,std::less<int>,std::allocator<std::pair<int_const,CAICharacter*>>>::end
            (local_18);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CAICharacter*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CAICharacter*>> *)local_14,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,CAICharacter*>>::operator*
                      ((_Rb_tree_iterator<std::pair<int_const,CAICharacter*>> *)local_14);
    this = *(CAICharacter **)(iVar2 + 4);
    local_10 = this;
    if (this != (CAICharacter *)0x0) {
      CAICharacter::~CAICharacter(this);
      operator_delete(this);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CAICharacter*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CAICharacter*>> *)local_14);
  }
  return;
}
```
