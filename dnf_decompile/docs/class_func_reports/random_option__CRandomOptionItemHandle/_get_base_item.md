# _get_base_item

`_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi`

`random_option::CRandomOptionItemHandle::_get_base_item(ENUM_RARITY, int)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f1426` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f1426  _ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi
#           random_option::CRandomOptionItemHandle::_get_base_item(ENUM_RARITY, int)
# range [0x085f1426, 0x085f155f]
085f1426 +0x000:  push   %ebp
085f1427 +0x001:  mov    %esp,%ebp
085f1429 +0x003:  sub    $0x38,%esp
085f142c +0x006:  mov    0x10(%ebp),%eax
085f142f +0x009:  movzbl %al,%edx
085f1432 +0x00c:  mov    0xc(%ebp),%eax
085f1435 +0x00f:  movzbl %al,%eax
085f1438 +0x012:  mov    %edx,0x8(%esp)
085f143c +0x016:  mov    %eax,0x4(%esp)
085f1440 +0x01a:  lea    -0x1e(%ebp),%eax
085f1443 +0x01d:  mov    %eax,(%esp)
085f1446 +0x020:  call   085f414e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x169>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x169
085f144b +0x025:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1450 +0x02a:  lea    0x48(%eax),%ecx
085f1453 +0x02d:  lea    -0x24(%ebp),%eax
085f1456 +0x030:  lea    -0x1e(%ebp),%edx
085f1459 +0x033:  mov    %edx,0x8(%esp)
085f145d +0x037:  mov    %ecx,0x4(%esp)
085f1461 +0x03b:  mov    %eax,(%esp)
085f1464 +0x03e:  call   085f4496 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x4b1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x4b1
085f1469 +0x043:  sub    $0x4,%esp
085f146c +0x046:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1471 +0x04b:  lea    0x48(%eax),%edx
085f1474 +0x04e:  lea    -0x1c(%ebp),%eax
085f1477 +0x051:  mov    %edx,0x4(%esp)
085f147b +0x055:  mov    %eax,(%esp)
085f147e +0x058:  call   085f44c2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x4dd>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x4dd
085f1483 +0x05d:  sub    $0x4,%esp
085f1486 +0x060:  lea    -0x1c(%ebp),%eax
085f1489 +0x063:  mov    %eax,0x4(%esp)
085f148d +0x067:  lea    -0x24(%ebp),%eax
085f1490 +0x06a:  mov    %eax,(%esp)
085f1493 +0x06d:  call   085f44e8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x503>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x503
085f1498 +0x072:  test   %al,%al
085f149a +0x074:  je     085f1559 <+0x133>
085f14a0 +0x07a:  lea    -0x24(%ebp),%eax
085f14a3 +0x07d:  mov    %eax,(%esp)
085f14a6 +0x080:  call   085f44fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x517>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x517
085f14ab +0x085:  mov    0x10(%eax),%eax
085f14ae +0x088:  mov    %eax,-0x18(%ebp)
085f14b1 +0x08b:  mov    0x8(%ebp),%eax
085f14b4 +0x08e:  mov    0x4(%eax),%eax
085f14b7 +0x091:  lea    0x1d58(%eax),%edx
085f14bd +0x097:  lea    -0x18(%ebp),%eax
085f14c0 +0x09a:  mov    %eax,0x4(%esp)
085f14c4 +0x09e:  mov    %edx,(%esp)
085f14c7 +0x0a1:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f14cc +0x0a6:  mov    %eax,-0x10(%ebp)
085f14cf +0x0a9:  movl   $0x0,-0xc(%ebp)
085f14d6 +0x0b0:  lea    -0x24(%ebp),%eax
085f14d9 +0x0b3:  mov    %eax,(%esp)
085f14dc +0x0b6:  call   085f44fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x517>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x517
085f14e1 +0x0bb:  lea    0x4(%eax),%edx
085f14e4 +0x0be:  lea    -0x28(%ebp),%eax
085f14e7 +0x0c1:  mov    %edx,0x4(%esp)
085f14eb +0x0c5:  mov    %eax,(%esp)
085f14ee +0x0c8:  call   080e3350 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x10f6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x10f6
085f14f3 +0x0cd:  sub    $0x4,%esp
085f14f6 +0x0d0:  jmp    085f1523 <+0xfd>
085f14f8 +0x0d2:  lea    -0x28(%ebp),%eax
085f14fb +0x0d5:  mov    %eax,(%esp)
085f14fe +0x0d8:  call   085f454c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x567>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x567
085f1503 +0x0dd:  mov    (%eax),%eax
085f1505 +0x0df:  cmp    -0x10(%ebp),%eax
085f1508 +0x0e2:  seta   %al
085f150b +0x0e5:  test   %al,%al
085f150d +0x0e7:  je     085f1514 <+0xee>
085f150f +0x0e9:  mov    -0xc(%ebp),%eax
085f1512 +0x0ec:  jmp    085f155e <+0x138>
085f1514 +0x0ee:  lea    -0x28(%ebp),%eax
085f1517 +0x0f1:  mov    %eax,(%esp)
085f151a +0x0f4:  call   085f4536 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x551>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x551
085f151f +0x0f9:  addl   $0x1,-0xc(%ebp)
085f1523 +0x0fd:  lea    -0x24(%ebp),%eax
085f1526 +0x100:  mov    %eax,(%esp)
085f1529 +0x103:  call   085f44fc <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x517>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x517
085f152e +0x108:  lea    0x4(%eax),%edx
085f1531 +0x10b:  lea    -0x14(%ebp),%eax
085f1534 +0x10e:  mov    %edx,0x4(%esp)
085f1538 +0x112:  mov    %eax,(%esp)
085f153b +0x115:  call   080e3324 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x10ca>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x10ca
085f1540 +0x11a:  sub    $0x4,%esp
085f1543 +0x11d:  lea    -0x14(%ebp),%eax
085f1546 +0x120:  mov    %eax,0x4(%esp)
085f154a +0x124:  lea    -0x28(%ebp),%eax
085f154d +0x127:  mov    %eax,(%esp)
085f1550 +0x12a:  call   085f4509 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x524>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x524
085f1555 +0x12f:  test   %al,%al
085f1557 +0x131:  jne    085f14f8 <+0xd2>
085f1559 +0x133:  mov    $0x0,%eax
085f155e +0x138:  leave
085f155f +0x139:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_base_item @ 0x85f1426

/* random_option::CRandomOptionItemHandle::_get_base_item(ENUM_RARITY, int) */

int __thiscall
random_option::CRandomOptionItemHandle::_get_base_item
          (CRandomOptionItemHandle *this,uchar param_2,uchar param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_2c [4];
  RandomApplicationKey local_28 [6];
  RandomApplicationKey local_22 [2];
  map<RandomApplicationKey,BaseItemSelectionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>>
  local_20 [4];
  ulong local_1c;
  __normal_iterator local_18 [4];
  uint local_14;
  int local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_22,param_2,param_3);
  GetRandomOption();
  std::
  map<RandomApplicationKey,BaseItemSelectionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>>
  ::find(local_28);
  GetRandomOption();
  std::
  map<RandomApplicationKey,BaseItemSelectionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                        *)local_28,(_Rb_tree_const_iterator *)local_20);
  if (cVar1 != '\0') {
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                        *)local_28);
    local_1c = *(ulong *)(iVar3 + 0x10);
    local_14 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x1d58),&local_1c);
    local_10 = 0;
    std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>::
    operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                *)local_28);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    while( true ) {
      std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>::
      operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                  *)local_28);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_2c,local_18);
      if (!bVar2) break;
      puVar4 = (uint *)__gnu_cxx::
                       __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                       ::operator*(local_2c);
      if (local_14 < *puVar4) {
        return local_10;
      }
      __gnu_cxx::
      __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
      ::operator++(local_2c);
      local_10 = local_10 + 1;
    }
  }
  return 0;
}
```
