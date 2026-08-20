# attach

`_ZN9CDelivery6attachEiP10CEventBase`

`CDelivery::attach(int, CEventBase*)`

| 类 | 地址 |
|---|---|
| `CDelivery` | `0x081163fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081163fa  _ZN9CDelivery6attachEiP10CEventBase
#           CDelivery::attach(int, CEventBase*)
# range [0x081163fa, 0x081165f9]
081163fa +0x000:  push   %ebp
081163fb +0x001:  mov    %esp,%ebp
081163fd +0x003:  push   %ebx
081163fe +0x004:  sub    $0x44,%esp
08116401 +0x007:  mov    0xc(%ebp),%eax
08116404 +0x00a:  mov    %eax,0x4(%esp)
08116408 +0x00e:  mov    0x8(%ebp),%eax
0811640b +0x011:  mov    %eax,(%esp)
0811640e +0x014:  call   081163dc <_ZN9CDelivery12checkAddressEi>  ; CDelivery::checkAddress(int)
08116413 +0x019:  xor    $0x1,%eax
08116416 +0x01c:  test   %al,%al
08116418 +0x01e:  jne    081165f0 <+0x1f6>
0811641e +0x024:  mov    0x8(%ebp),%edx
08116421 +0x027:  lea    -0x2c(%ebp),%eax
08116424 +0x02a:  lea    0xc(%ebp),%ecx
08116427 +0x02d:  mov    %ecx,0x8(%esp)
0811642b +0x031:  mov    %edx,0x4(%esp)
0811642f +0x035:  mov    %eax,(%esp)
08116432 +0x038:  call   08117b60 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1275>  ; global constructors keyed to CEventManager::CEventManager()+0x1275
08116437 +0x03d:  sub    $0x4,%esp
0811643a +0x040:  mov    0x8(%ebp),%edx
0811643d +0x043:  lea    -0x28(%ebp),%eax
08116440 +0x046:  mov    %edx,0x4(%esp)
08116444 +0x04a:  mov    %eax,(%esp)
08116447 +0x04d:  call   08117b8c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12a1>  ; global constructors keyed to CEventManager::CEventManager()+0x12a1
0811644c +0x052:  sub    $0x4,%esp
0811644f +0x055:  lea    -0x28(%ebp),%eax
08116452 +0x058:  mov    %eax,0x4(%esp)
08116456 +0x05c:  lea    -0x2c(%ebp),%eax
08116459 +0x05f:  mov    %eax,(%esp)
0811645c +0x062:  call   08117bb2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12c7>  ; global constructors keyed to CEventManager::CEventManager()+0x12c7
08116461 +0x067:  test   %al,%al
08116463 +0x069:  je     081165cd <+0x1d3>
08116469 +0x06f:  mov    $0x0,%ebx
0811646e +0x074:  lea    -0x2c(%ebp),%eax
08116471 +0x077:  mov    %eax,(%esp)
08116474 +0x07a:  call   08117bc6 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12db>  ; global constructors keyed to CEventManager::CEventManager()+0x12db
08116479 +0x07f:  lea    0x4(%eax),%edx
0811647c +0x082:  lea    -0x24(%ebp),%eax
0811647f +0x085:  mov    %ebx,0x8(%esp)
08116483 +0x089:  mov    %edx,0x4(%esp)
08116487 +0x08d:  mov    %eax,(%esp)
0811648a +0x090:  call   08117bd3 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12e8>  ; global constructors keyed to CEventManager::CEventManager()+0x12e8
0811648f +0x095:  sub    $0x4,%esp
08116492 +0x098:  lea    -0x24(%ebp),%eax
08116495 +0x09b:  mov    %eax,-0x18(%ebp)
08116498 +0x09e:  mov    -0x18(%ebp),%eax
0811649b +0x0a1:  mov    %eax,(%esp)
0811649e +0x0a4:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
081164a3 +0x0a9:  test   %al,%al
081164a5 +0x0ab:  jne    081165cd <+0x1d3>
081164ab +0x0b1:  mov    $0x0,%edx
081164b0 +0x0b6:  lea    -0x20(%ebp),%eax
081164b3 +0x0b9:  mov    %edx,0xc(%esp)
081164b7 +0x0bd:  movl   $0x0,0x8(%esp)
081164bf +0x0c5:  mov    -0x18(%ebp),%edx
081164c2 +0x0c8:  mov    %edx,0x4(%esp)
081164c6 +0x0cc:  mov    %eax,(%esp)
081164c9 +0x0cf:  call   08117c04 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1319>  ; global constructors keyed to CEventManager::CEventManager()+0x1319
081164ce +0x0d4:  sub    $0x4,%esp
081164d1 +0x0d7:  lea    -0x20(%ebp),%eax
081164d4 +0x0da:  mov    %eax,-0x14(%ebp)
081164d7 +0x0dd:  mov    -0x14(%ebp),%eax
081164da +0x0e0:  mov    %eax,(%esp)
081164dd +0x0e3:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
081164e2 +0x0e8:  test   %al,%al
081164e4 +0x0ea:  jne    081165cd <+0x1d3>
081164ea +0x0f0:  mov    $0x0,%edx
081164ef +0x0f5:  lea    -0x1c(%ebp),%eax
081164f2 +0x0f8:  mov    %edx,0xc(%esp)
081164f6 +0x0fc:  movl   $0x0,0x8(%esp)
081164fe +0x104:  mov    -0x18(%ebp),%edx
08116501 +0x107:  mov    %edx,0x4(%esp)
08116505 +0x10b:  mov    %eax,(%esp)
08116508 +0x10e:  call   08117c4d <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1362>  ; global constructors keyed to CEventManager::CEventManager()+0x1362
0811650d +0x113:  sub    $0x4,%esp
08116510 +0x116:  lea    -0x1c(%ebp),%eax
08116513 +0x119:  mov    %eax,-0x10(%ebp)
08116516 +0x11c:  mov    -0x10(%ebp),%eax
08116519 +0x11f:  mov    %eax,(%esp)
0811651c +0x122:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
08116521 +0x127:  test   %al,%al
08116523 +0x129:  jne    081165cd <+0x1d3>
08116529 +0x12f:  movb   $0x1,-0x2d(%ebp)
0811652d +0x133:  jmp    08116590 <+0x196>
0811652f +0x135:  lea    -0x2d(%ebp),%eax
08116532 +0x138:  mov    %eax,(%esp)
08116535 +0x13b:  call   080ccf24 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d71>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d71
0811653a +0x140:  test   %al,%al
0811653c +0x142:  jne    08116575 <+0x17b>
0811653e +0x144:  movl   $0x0,0x4(%esp)
08116546 +0x14c:  mov    -0x14(%ebp),%eax
08116549 +0x14f:  mov    %eax,(%esp)
0811654c +0x152:  call   08117ce2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x13f7>  ; global constructors keyed to CEventManager::CEventManager()+0x13f7
08116551 +0x157:  mov    %eax,-0xc(%ebp)
08116554 +0x15a:  jmp    0811656a <+0x170>
08116556 +0x15c:  mov    -0xc(%ebp),%eax
08116559 +0x15f:  mov    (%eax),%edx
0811655b +0x161:  mov    0x10(%ebp),%eax
0811655e +0x164:  cmp    %eax,%edx
08116560 +0x166:  je     081165f3 <+0x1f9>
08116566 +0x16c:  movb   $0x1,-0x2d(%ebp)
0811656a +0x170:  movzbl -0x2d(%ebp),%eax
0811656e +0x174:  xor    $0x1,%eax
08116571 +0x177:  test   %al,%al
08116573 +0x179:  jne    08116556 <+0x15c>
08116575 +0x17b:  movzbl -0x2d(%ebp),%eax
08116579 +0x17f:  test   %al,%al
0811657b +0x181:  je     08116590 <+0x196>
0811657d +0x183:  movl   $0x0,0x4(%esp)
08116585 +0x18b:  mov    -0x14(%ebp),%eax
08116588 +0x18e:  mov    %eax,(%esp)
0811658b +0x191:  call   08117cc7 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x13dc>  ; global constructors keyed to CEventManager::CEventManager()+0x13dc
08116590 +0x196:  movzbl -0x2d(%ebp),%eax
08116594 +0x19a:  test   %al,%al
08116596 +0x19c:  je     081165c0 <+0x1c6>
08116598 +0x19e:  movl   $0x0,0x8(%esp)
081165a0 +0x1a6:  mov    -0x10(%ebp),%eax
081165a3 +0x1a9:  mov    %eax,0x4(%esp)
081165a7 +0x1ad:  mov    -0x14(%ebp),%eax
081165aa +0x1b0:  mov    %eax,(%esp)
081165ad +0x1b3:  call   08117c96 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x13ab>  ; global constructors keyed to CEventManager::CEventManager()+0x13ab
081165b2 +0x1b8:  xor    $0x1,%eax
081165b5 +0x1bb:  test   %al,%al
081165b7 +0x1bd:  je     081165c0 <+0x1c6>
081165b9 +0x1bf:  mov    $0x1,%eax
081165be +0x1c4:  jmp    081165c5 <+0x1cb>
081165c0 +0x1c6:  mov    $0x0,%eax
081165c5 +0x1cb:  test   %al,%al
081165c7 +0x1cd:  jne    0811652f <+0x135>
081165cd +0x1d3:  mov    0x8(%ebp),%eax
081165d0 +0x1d6:  lea    0xc(%ebp),%edx
081165d3 +0x1d9:  mov    %edx,0x4(%esp)
081165d7 +0x1dd:  mov    %eax,(%esp)
081165da +0x1e0:  call   08117d28 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x143d>  ; global constructors keyed to CEventManager::CEventManager()+0x143d
081165df +0x1e5:  lea    0x10(%ebp),%edx
081165e2 +0x1e8:  mov    %edx,0x4(%esp)
081165e6 +0x1ec:  mov    %eax,(%esp)
081165e9 +0x1ef:  call   08117e74 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1589>  ; global constructors keyed to CEventManager::CEventManager()+0x1589
081165ee +0x1f4:  jmp    081165f4 <+0x1fa>
081165f0 +0x1f6:  nop
081165f1 +0x1f7:  jmp    081165f4 <+0x1fa>
081165f3 +0x1f9:  nop
081165f4 +0x1fa:  mov    -0x4(%ebp),%ebx
081165f7 +0x1fd:  leave
081165f8 +0x1fe:  ret
081165f9 +0x1ff:  nop
```

## 反编译 C

```c
// CDelivery::attach @ 0x81163fa

/* CDelivery::attach(int, CEventBase*) */

void __thiscall CDelivery::attach(CDelivery *this,int param_1,CEventBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  list<CEventBase*,std::allocator<CEventBase*>> *this_00;
  bool local_31;
  _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
  local_30 [4];
  map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
  local_2c [4];
  list local_28 [4];
  auto_any_base local_24 [4];
  auto_any_base local_20 [4];
  type2type *local_1c;
  auto_any_base *local_18;
  auto_any_base *local_14;
  int *local_10;
  
  cVar1 = checkAddress(this,param_1);
  if (cVar1 == '\x01') {
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::find((int *)local_30);
    std::
    map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
    ::end(local_2c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
            ::operator!=(local_30,(_Rb_tree_iterator *)local_2c);
    if (cVar1 != '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>
              ::operator->(local_30);
      boost::foreach_detail_::contain<std::list<CEventBase*,std::allocator<CEventBase*>>>
                (local_28,(bool_ *)(iVar3 + 4));
      local_1c = (type2type *)local_28;
      bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool
                        ((auto_any_base *)local_1c);
      if (!bVar2) {
        boost::foreach_detail_::
        begin<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                  (local_24,local_1c,(bool_ *)0x0);
        local_18 = local_24;
        bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
        if (!bVar2) {
          boost::foreach_detail_::
          end<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                    (local_20,local_1c,(bool_ *)0x0);
          local_14 = local_20;
          bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_14);
          if (!bVar2) {
            local_31 = true;
            while( true ) {
              if ((local_31 == false) ||
                 (bVar2 = boost::foreach_detail_::
                          done<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                                    (local_18,local_14,(type2type *)0x0), bVar2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              cVar1 = boost::foreach_detail_::set_false(&local_31);
              if (cVar1 == '\0') {
                local_10 = (int *)boost::foreach_detail_::
                                  deref<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                                            (local_18,(type2type *)0x0);
                while (local_31 != true) {
                  if ((CEventBase *)*local_10 == param_2) {
                    return;
                  }
                  local_31 = true;
                }
              }
              if (local_31 != false) {
                boost::foreach_detail_::
                next<std::list<CEventBase*,std::allocator<CEventBase*>>,mpl_::bool_<false>>
                          (local_18,(type2type *)0x0);
              }
            }
          }
        }
      }
    }
    this_00 = (list<CEventBase*,std::allocator<CEventBase*>> *)
              std::
              map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
              ::operator[]((map<int,std::list<CEventBase*,std::allocator<CEventBase*>>,std::less<int>,std::allocator<std::pair<int_const,std::list<CEventBase*,std::allocator<CEventBase*>>>>>
                            *)this,&param_1);
    std::list<CEventBase*,std::allocator<CEventBase*>>::push_back(this_00,&param_2);
  }
  return;
}
```
