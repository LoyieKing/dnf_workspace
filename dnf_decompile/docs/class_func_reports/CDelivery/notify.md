# notify

`_ZN9CDelivery6notifyEiR11DeliveryMsg`

`CDelivery::notify(int, DeliveryMsg&)`

| 类 | 地址 |
|---|---|
| `CDelivery` | `0x08116682` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08116682  _ZN9CDelivery6notifyEiR11DeliveryMsg
#           CDelivery::notify(int, DeliveryMsg&)
# range [0x08116682, 0x08116873]
08116682 +0x000:  push   %ebp
08116683 +0x001:  mov    %esp,%ebp
08116685 +0x003:  push   %ebx
08116686 +0x004:  sub    $0x44,%esp
08116689 +0x007:  mov    0xc(%ebp),%eax
0811668c +0x00a:  mov    %eax,0x4(%esp)
08116690 +0x00e:  mov    0x8(%ebp),%eax
08116693 +0x011:  mov    %eax,(%esp)
08116696 +0x014:  call   081163dc <_ZN9CDelivery12checkAddressEi>  ; CDelivery::checkAddress(int)
0811669b +0x019:  xor    $0x1,%eax
0811669e +0x01c:  test   %al,%al
081166a0 +0x01e:  jne    0811686d <+0x1eb>
081166a6 +0x024:  mov    0x8(%ebp),%edx
081166a9 +0x027:  lea    -0x2c(%ebp),%eax
081166ac +0x02a:  lea    0xc(%ebp),%ecx
081166af +0x02d:  mov    %ecx,0x8(%esp)
081166b3 +0x031:  mov    %edx,0x4(%esp)
081166b7 +0x035:  mov    %eax,(%esp)
081166ba +0x038:  call   08117b60 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1275>  ; global constructors keyed to CEventManager::CEventManager()+0x1275
081166bf +0x03d:  sub    $0x4,%esp
081166c2 +0x040:  mov    0x8(%ebp),%edx
081166c5 +0x043:  lea    -0x28(%ebp),%eax
081166c8 +0x046:  mov    %edx,0x4(%esp)
081166cc +0x04a:  mov    %eax,(%esp)
081166cf +0x04d:  call   08117b8c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12a1>  ; global constructors keyed to CEventManager::CEventManager()+0x12a1
081166d4 +0x052:  sub    $0x4,%esp
081166d7 +0x055:  lea    -0x28(%ebp),%eax
081166da +0x058:  mov    %eax,0x4(%esp)
081166de +0x05c:  lea    -0x2c(%ebp),%eax
081166e1 +0x05f:  mov    %eax,(%esp)
081166e4 +0x062:  call   08117bb2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12c7>  ; global constructors keyed to CEventManager::CEventManager()+0x12c7
081166e9 +0x067:  test   %al,%al
081166eb +0x069:  je     0811686e <+0x1ec>
081166f1 +0x06f:  mov    $0x0,%ebx
081166f6 +0x074:  lea    -0x2c(%ebp),%eax
081166f9 +0x077:  mov    %eax,(%esp)
081166fc +0x07a:  call   08117bc6 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12db>  ; global constructors keyed to CEventManager::CEventManager()+0x12db
08116701 +0x07f:  lea    0x4(%eax),%edx
08116704 +0x082:  lea    -0x24(%ebp),%eax
08116707 +0x085:  mov    %ebx,0x8(%esp)
0811670b +0x089:  mov    %edx,0x4(%esp)
0811670f +0x08d:  mov    %eax,(%esp)
08116712 +0x090:  call   08117bd3 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x12e8>  ; global constructors keyed to CEventManager::CEventManager()+0x12e8
08116717 +0x095:  sub    $0x4,%esp
0811671a +0x098:  lea    -0x24(%ebp),%eax
0811671d +0x09b:  mov    %eax,-0x18(%ebp)
08116720 +0x09e:  mov    -0x18(%ebp),%eax
08116723 +0x0a1:  mov    %eax,(%esp)
08116726 +0x0a4:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
0811672b +0x0a9:  test   %al,%al
0811672d +0x0ab:  jne    0811686e <+0x1ec>
08116733 +0x0b1:  mov    $0x0,%edx
08116738 +0x0b6:  lea    -0x20(%ebp),%eax
0811673b +0x0b9:  mov    %edx,0xc(%esp)
0811673f +0x0bd:  movl   $0x0,0x8(%esp)
08116747 +0x0c5:  mov    -0x18(%ebp),%edx
0811674a +0x0c8:  mov    %edx,0x4(%esp)
0811674e +0x0cc:  mov    %eax,(%esp)
08116751 +0x0cf:  call   08117c04 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1319>  ; global constructors keyed to CEventManager::CEventManager()+0x1319
08116756 +0x0d4:  sub    $0x4,%esp
08116759 +0x0d7:  lea    -0x20(%ebp),%eax
0811675c +0x0da:  mov    %eax,-0x14(%ebp)
0811675f +0x0dd:  mov    -0x14(%ebp),%eax
08116762 +0x0e0:  mov    %eax,(%esp)
08116765 +0x0e3:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
0811676a +0x0e8:  test   %al,%al
0811676c +0x0ea:  jne    0811686e <+0x1ec>
08116772 +0x0f0:  mov    $0x0,%edx
08116777 +0x0f5:  lea    -0x1c(%ebp),%eax
0811677a +0x0f8:  mov    %edx,0xc(%esp)
0811677e +0x0fc:  movl   $0x0,0x8(%esp)
08116786 +0x104:  mov    -0x18(%ebp),%edx
08116789 +0x107:  mov    %edx,0x4(%esp)
0811678d +0x10b:  mov    %eax,(%esp)
08116790 +0x10e:  call   08117c4d <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1362>  ; global constructors keyed to CEventManager::CEventManager()+0x1362
08116795 +0x113:  sub    $0x4,%esp
08116798 +0x116:  lea    -0x1c(%ebp),%eax
0811679b +0x119:  mov    %eax,-0x10(%ebp)
0811679e +0x11c:  mov    -0x10(%ebp),%eax
081167a1 +0x11f:  mov    %eax,(%esp)
081167a4 +0x122:  call   080ccf1a <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d67>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d67
081167a9 +0x127:  test   %al,%al
081167ab +0x129:  jne    0811686e <+0x1ec>
081167b1 +0x12f:  movb   $0x1,-0x2d(%ebp)
081167b5 +0x133:  jmp    0811682e <+0x1ac>
081167b7 +0x135:  lea    -0x2d(%ebp),%eax
081167ba +0x138:  mov    %eax,(%esp)
081167bd +0x13b:  call   080ccf24 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1d71>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1d71
081167c2 +0x140:  test   %al,%al
081167c4 +0x142:  jne    08116813 <+0x191>
081167c6 +0x144:  movl   $0x0,0x4(%esp)
081167ce +0x14c:  mov    -0x14(%ebp),%eax
081167d1 +0x14f:  mov    %eax,(%esp)
081167d4 +0x152:  call   08117ce2 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x13f7>  ; global constructors keyed to CEventManager::CEventManager()+0x13f7
081167d9 +0x157:  mov    %eax,-0xc(%ebp)
081167dc +0x15a:  jmp    08116808 <+0x186>
081167de +0x15c:  mov    -0xc(%ebp),%eax
081167e1 +0x15f:  mov    (%eax),%eax
081167e3 +0x161:  test   %eax,%eax
081167e5 +0x163:  je     08116804 <+0x182>
081167e7 +0x165:  mov    -0xc(%ebp),%eax
081167ea +0x168:  mov    (%eax),%eax
081167ec +0x16a:  mov    (%eax),%eax
081167ee +0x16c:  add    $0x30,%eax
081167f1 +0x16f:  mov    (%eax),%ecx
081167f3 +0x171:  mov    -0xc(%ebp),%eax
081167f6 +0x174:  mov    (%eax),%eax
081167f8 +0x176:  mov    0x10(%ebp),%edx
081167fb +0x179:  mov    %edx,0x4(%esp)
081167ff +0x17d:  mov    %eax,(%esp)
08116802 +0x180:  call   *%ecx
08116804 +0x182:  movb   $0x1,-0x2d(%ebp)
08116808 +0x186:  movzbl -0x2d(%ebp),%eax
0811680c +0x18a:  xor    $0x1,%eax
0811680f +0x18d:  test   %al,%al
08116811 +0x18f:  jne    081167de <+0x15c>
08116813 +0x191:  movzbl -0x2d(%ebp),%eax
08116817 +0x195:  test   %al,%al
08116819 +0x197:  je     0811682e <+0x1ac>
0811681b +0x199:  movl   $0x0,0x4(%esp)
08116823 +0x1a1:  mov    -0x14(%ebp),%eax
08116826 +0x1a4:  mov    %eax,(%esp)
08116829 +0x1a7:  call   08117cc7 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x13dc>  ; global constructors keyed to CEventManager::CEventManager()+0x13dc
0811682e +0x1ac:  movzbl -0x2d(%ebp),%eax
08116832 +0x1b0:  test   %al,%al
08116834 +0x1b2:  je     0811685e <+0x1dc>
08116836 +0x1b4:  movl   $0x0,0x8(%esp)
0811683e +0x1bc:  mov    -0x10(%ebp),%eax
08116841 +0x1bf:  mov    %eax,0x4(%esp)
08116845 +0x1c3:  mov    -0x14(%ebp),%eax
08116848 +0x1c6:  mov    %eax,(%esp)
0811684b +0x1c9:  call   08117c96 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x13ab>  ; global constructors keyed to CEventManager::CEventManager()+0x13ab
08116850 +0x1ce:  xor    $0x1,%eax
08116853 +0x1d1:  test   %al,%al
08116855 +0x1d3:  je     0811685e <+0x1dc>
08116857 +0x1d5:  mov    $0x1,%eax
0811685c +0x1da:  jmp    08116863 <+0x1e1>
0811685e +0x1dc:  mov    $0x0,%eax
08116863 +0x1e1:  test   %al,%al
08116865 +0x1e3:  jne    081167b7 <+0x135>
0811686b +0x1e9:  jmp    0811686e <+0x1ec>
0811686d +0x1eb:  nop
0811686e +0x1ec:  mov    -0x4(%ebp),%ebx
08116871 +0x1ef:  leave
08116872 +0x1f0:  ret
08116873 +0x1f1:  nop
```

## 反编译 C

```c
// CDelivery::notify @ 0x8116682

/* CDelivery::notify(int, DeliveryMsg&) */

void __thiscall CDelivery::notify(CDelivery *this,int param_1,DeliveryMsg *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
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
                  if (*local_10 != 0) {
                    (**(code **)(*(int *)*local_10 + 0x30))(*local_10,param_2);
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
  }
  return;
}
```
