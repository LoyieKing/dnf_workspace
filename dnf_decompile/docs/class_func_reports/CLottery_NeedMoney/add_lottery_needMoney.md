# add_lottery_needMoney

`_ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj`

`CLottery_NeedMoney::add_lottery_needMoney(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CLottery_NeedMoney` | `0x08365066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365066  _ZN18CLottery_NeedMoney21add_lottery_needMoneyEjj
#           CLottery_NeedMoney::add_lottery_needMoney(unsigned int, unsigned int)
# range [0x08365066, 0x08365161]
08365066 +0x00:  push   %ebp
08365067 +0x01:  mov    %esp,%ebp
08365069 +0x03:  sub    $0x48,%esp
0836506c +0x06:  mov    $&_ZGVZN18CLottery_NeedMoney21add_lottery_needMoneyEjjE4_itr,%eax
08365071 +0x0b:  movzbl (%eax),%eax
08365074 +0x0e:  test   %al,%al
08365076 +0x10:  jne    083650a5 <+0x3f>
08365078 +0x12:  movl   $&_ZGVZN18CLottery_NeedMoney21add_lottery_needMoneyEjjE4_itr,(%esp)
0836507f +0x19:  call   08725330 <__cxa_guard_acquire>
08365084 +0x1e:  test   %eax,%eax
08365086 +0x20:  setne  %al
08365089 +0x23:  test   %al,%al
0836508b +0x25:  je     083650a5 <+0x3f>
0836508d +0x27:  movl   $&_ZZN18CLottery_NeedMoney21add_lottery_needMoneyEjjE4_itr,(%esp)
08365094 +0x2e:  call   08395a56 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x254f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x254f6
08365099 +0x33:  movl   $&_ZGVZN18CLottery_NeedMoney21add_lottery_needMoneyEjjE4_itr,(%esp)
083650a0 +0x3a:  call   08725250 <__cxa_guard_release>
083650a5 +0x3f:  mov    0x8(%ebp),%edx
083650a8 +0x42:  lea    -0x28(%ebp),%eax
083650ab +0x45:  mov    %edx,0x4(%esp)
083650af +0x49:  mov    %eax,(%esp)
083650b2 +0x4c:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
083650b7 +0x51:  sub    $0x4,%esp
083650ba +0x54:  mov    0x8(%ebp),%edx
083650bd +0x57:  lea    -0x2c(%ebp),%eax
083650c0 +0x5a:  lea    0xc(%ebp),%ecx
083650c3 +0x5d:  mov    %ecx,0x8(%esp)
083650c7 +0x61:  mov    %edx,0x4(%esp)
083650cb +0x65:  mov    %eax,(%esp)
083650ce +0x68:  call   080e25f6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x39c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x39c
083650d3 +0x6d:  sub    $0x4,%esp
083650d6 +0x70:  mov    -0x2c(%ebp),%eax
083650d9 +0x73:  mov    %eax,&_ZZN18CLottery_NeedMoney21add_lottery_needMoneyEjjE4_itr
083650de +0x78:  lea    -0x28(%ebp),%eax
083650e1 +0x7b:  mov    %eax,0x4(%esp)
083650e5 +0x7f:  movl   $&_ZZN18CLottery_NeedMoney21add_lottery_needMoneyEjjE4_itr,(%esp)
083650ec +0x86:  call   080e290a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6b0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6b0
083650f1 +0x8b:  test   %al,%al
083650f3 +0x8d:  je     08365115 <+0xaf>
083650f5 +0x8f:  lea    -0x21(%ebp),%eax
083650f8 +0x92:  mov    %eax,(%esp)
083650fb +0x95:  call   0822ad5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x404>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x404
08365100 +0x9a:  movl   $"already exist item index!!",0x4(%esp)
08365108 +0xa2:  lea    -0x21(%ebp),%eax
0836510b +0xa5:  mov    %eax,(%esp)
0836510e +0xa8:  call   0822ad60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x40a
08365113 +0xad:  jmp    0836515f <+0xf9>
08365115 +0xaf:  lea    -0x10(%ebp),%eax
08365118 +0xb2:  lea    0x10(%ebp),%edx
0836511b +0xb5:  mov    %edx,0x8(%esp)
0836511f +0xb9:  lea    0xc(%ebp),%edx
08365122 +0xbc:  mov    %edx,0x4(%esp)
08365126 +0xc0:  mov    %eax,(%esp)
08365129 +0xc3:  call   08395a64 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25504>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25504
0836512e +0xc8:  sub    $0x4,%esp
08365131 +0xcb:  lea    -0x10(%ebp),%eax
08365134 +0xce:  mov    %eax,0x4(%esp)
08365138 +0xd2:  lea    -0x18(%ebp),%eax
0836513b +0xd5:  mov    %eax,(%esp)
0836513e +0xd8:  call   08395aa2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25542>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25542
08365143 +0xdd:  mov    0x8(%ebp),%edx
08365146 +0xe0:  lea    -0x20(%ebp),%eax
08365149 +0xe3:  lea    -0x18(%ebp),%ecx
0836514c +0xe6:  mov    %ecx,0x8(%esp)
08365150 +0xea:  mov    %edx,0x4(%esp)
08365154 +0xee:  mov    %eax,(%esp)
08365157 +0xf1:  call   080e268c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x432>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x432
0836515c +0xf6:  sub    $0x4,%esp
0836515f +0xf9:  leave
08365160 +0xfa:  ret
08365161 +0xfb:  nop
```

## 反编译 C

```c
// CLottery_NeedMoney::add_lottery_needMoney @ 0x8365066

/* CLottery_NeedMoney::add_lottery_needMoney(unsigned int, unsigned int) */

void CLottery_NeedMoney::add_lottery_needMoney(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint local_30;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_2c [7];
  cMyTraceNoop local_25;
  pair local_24 [8];
  pair<unsigned_int_const,unsigned_int> local_1c [8];
  uint local_14 [4];
  
  if (add_lottery_needMoney(unsigned_int,unsigned_int)::_itr == '\0') {
    iVar2 = __cxa_guard_acquire(&add_lottery_needMoney(unsigned_int,unsigned_int)::_itr);
    if (iVar2 != 0) {
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::_Rb_tree_iterator
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                 &add_lottery_needMoney(unsigned_int,unsigned_int)::_itr);
      __cxa_guard_release(&add_lottery_needMoney(unsigned_int,unsigned_int)::_itr);
    }
  }
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::end(local_2c);
  puVar3 = &param_2;
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::find(&local_30);
  add_lottery_needMoney(unsigned_int,unsigned_int)::_itr = local_30;
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)
                     &add_lottery_needMoney(unsigned_int,unsigned_int)::_itr,
                     (_Rb_tree_iterator *)local_2c);
  if (cVar1 == '\0') {
    std::make_pair<unsigned_int&,unsigned_int&>(local_14,&param_2);
    std::pair<unsigned_int_const,unsigned_int>::pair<unsigned_int,unsigned_int>
              (local_1c,(pair *)local_14);
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::insert(local_24);
  }
  else {
    cMyTraceNoop::cMyTraceNoop(&local_25);
    cMyTraceNoop::operator()((char *)&local_25,"already exist item index!!",puVar3);
  }
  return;
}
```
