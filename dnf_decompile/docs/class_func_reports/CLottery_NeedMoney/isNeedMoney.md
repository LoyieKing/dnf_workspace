# isNeedMoney

`_ZNK18CLottery_NeedMoney11isNeedMoneyEj`

`CLottery_NeedMoney::isNeedMoney(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CLottery_NeedMoney` | `0x08365162` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365162  _ZNK18CLottery_NeedMoney11isNeedMoneyEj
#           CLottery_NeedMoney::isNeedMoney(unsigned int) const
# range [0x08365162, 0x08365209]
08365162 +0x00:  push   %ebp
08365163 +0x01:  mov    %esp,%ebp
08365165 +0x03:  sub    $0x38,%esp
08365168 +0x06:  mov    $&_ZGVZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr,%eax
0836516d +0x0b:  movzbl (%eax),%eax
08365170 +0x0e:  test   %al,%al
08365172 +0x10:  jne    083651a1 <+0x3f>
08365174 +0x12:  movl   $&_ZGVZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr,(%esp)
0836517b +0x19:  call   08725330 <__cxa_guard_acquire>
08365180 +0x1e:  test   %eax,%eax
08365182 +0x20:  setne  %al
08365185 +0x23:  test   %al,%al
08365187 +0x25:  je     083651a1 <+0x3f>
08365189 +0x27:  movl   $&_ZZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr,(%esp)
08365190 +0x2e:  call   08395ad2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25572>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25572
08365195 +0x33:  movl   $&_ZGVZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr,(%esp)
0836519c +0x3a:  call   08725250 <__cxa_guard_release>
083651a1 +0x3f:  mov    0x8(%ebp),%edx
083651a4 +0x42:  lea    -0x1c(%ebp),%eax
083651a7 +0x45:  lea    0xc(%ebp),%ecx
083651aa +0x48:  mov    %ecx,0x8(%esp)
083651ae +0x4c:  mov    %edx,0x4(%esp)
083651b2 +0x50:  mov    %eax,(%esp)
083651b5 +0x53:  call   08395ae0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25580>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25580
083651ba +0x58:  sub    $0x4,%esp
083651bd +0x5b:  mov    -0x1c(%ebp),%eax
083651c0 +0x5e:  mov    %eax,&_ZZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr
083651c5 +0x63:  mov    0x8(%ebp),%edx
083651c8 +0x66:  lea    -0xc(%ebp),%eax
083651cb +0x69:  mov    %edx,0x4(%esp)
083651cf +0x6d:  mov    %eax,(%esp)
083651d2 +0x70:  call   08395b0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255ac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255ac
083651d7 +0x75:  sub    $0x4,%esp
083651da +0x78:  movl   $&_ZZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr,0x4(%esp)
083651e2 +0x80:  lea    -0xc(%ebp),%eax
083651e5 +0x83:  mov    %eax,(%esp)
083651e8 +0x86:  call   08395b32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255d2
083651ed +0x8b:  test   %al,%al
083651ef +0x8d:  je     08365202 <+0xa0>
083651f1 +0x8f:  movl   $&_ZZNK18CLottery_NeedMoney11isNeedMoneyEjE4_itr,(%esp)
083651f8 +0x96:  call   08395b46 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x255e6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x255e6
083651fd +0x9b:  mov    0x4(%eax),%eax
08365200 +0x9e:  jmp    08365207 <+0xa5>
08365202 +0xa0:  mov    $0x0,%eax
08365207 +0xa5:  leave
08365208 +0xa6:  ret
08365209 +0xa7:  nop
```

## 反编译 C

```c
// CLottery_NeedMoney::isNeedMoney @ 0x8365162

/* CLottery_NeedMoney::isNeedMoney(unsigned int) const */

undefined4 CLottery_NeedMoney::isNeedMoney(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20 [4];
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_10 [12];
  
  if (isNeedMoney(unsigned_int)::_itr == '\0') {
    iVar2 = __cxa_guard_acquire(&isNeedMoney(unsigned_int)::_itr);
    if (iVar2 != 0) {
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::
      _Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                 &isNeedMoney(unsigned_int)::_itr);
      __cxa_guard_release(&isNeedMoney(unsigned_int)::_itr);
    }
  }
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::find(local_20);
  isNeedMoney(unsigned_int)::_itr = local_20[0];
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                    ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)local_10
                     ,(_Rb_tree_const_iterator *)&isNeedMoney(unsigned_int)::_itr);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                       &isNeedMoney(unsigned_int)::_itr);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
