# _get_option_type

`_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh`

`random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int, unsigned char&)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f2338` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f2338  _ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh
#           random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int, unsigned char&)
# range [0x085f2338, 0x085f25af]
085f2338 +0x000:  push   %ebp
085f2339 +0x001:  mov    %esp,%ebp
085f233b +0x003:  sub    $0x98,%esp
085f2341 +0x009:  mov    0x14(%ebp),%eax
085f2344 +0x00c:  movzbl %al,%edx
085f2347 +0x00f:  mov    0x10(%ebp),%eax
085f234a +0x012:  movzbl %al,%eax
085f234d +0x015:  mov    %edx,0x8(%esp)
085f2351 +0x019:  mov    %eax,0x4(%esp)
085f2355 +0x01d:  lea    -0x52(%ebp),%eax
085f2358 +0x020:  mov    %eax,(%esp)
085f235b +0x023:  call   085f414e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x169>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x169
085f2360 +0x028:  mov    0x8(%ebp),%eax
085f2363 +0x02b:  mov    0x14(%eax),%eax
085f2366 +0x02e:  mov    (%eax),%eax
085f2368 +0x030:  mov    (%eax),%edx
085f236a +0x032:  mov    0x8(%ebp),%eax
085f236d +0x035:  mov    0x14(%eax),%eax
085f2370 +0x038:  mov    %eax,(%esp)
085f2373 +0x03b:  call   *%edx
085f2375 +0x03d:  lea    -0x58(%ebp),%edx
085f2378 +0x040:  lea    -0x52(%ebp),%ecx
085f237b +0x043:  mov    %ecx,0x8(%esp)
085f237f +0x047:  mov    %eax,0x4(%esp)
085f2383 +0x04b:  mov    %edx,(%esp)
085f2386 +0x04e:  call   085f4aec <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb07>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb07
085f238b +0x053:  sub    $0x4,%esp
085f238e +0x056:  lea    -0x58(%ebp),%eax
085f2391 +0x059:  mov    %eax,0x4(%esp)
085f2395 +0x05d:  lea    -0x5c(%ebp),%eax
085f2398 +0x060:  mov    %eax,(%esp)
085f239b +0x063:  call   085f4b18 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb33>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb33
085f23a0 +0x068:  mov    0x8(%ebp),%eax
085f23a3 +0x06b:  mov    0x14(%eax),%eax
085f23a6 +0x06e:  mov    (%eax),%eax
085f23a8 +0x070:  mov    (%eax),%edx
085f23aa +0x072:  mov    0x8(%ebp),%eax
085f23ad +0x075:  mov    0x14(%eax),%eax
085f23b0 +0x078:  mov    %eax,(%esp)
085f23b3 +0x07b:  call   *%edx
085f23b5 +0x07d:  lea    -0x4c(%ebp),%edx
085f23b8 +0x080:  mov    %eax,0x4(%esp)
085f23bc +0x084:  mov    %edx,(%esp)
085f23bf +0x087:  call   085f4b28 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb43>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb43
085f23c4 +0x08c:  sub    $0x4,%esp
085f23c7 +0x08f:  lea    -0x4c(%ebp),%eax
085f23ca +0x092:  mov    %eax,0x4(%esp)
085f23ce +0x096:  lea    -0x50(%ebp),%eax
085f23d1 +0x099:  mov    %eax,(%esp)
085f23d4 +0x09c:  call   085f4b18 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb33>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb33
085f23d9 +0x0a1:  lea    -0x50(%ebp),%eax
085f23dc +0x0a4:  mov    %eax,0x4(%esp)
085f23e0 +0x0a8:  lea    -0x5c(%ebp),%eax
085f23e3 +0x0ab:  mov    %eax,(%esp)
085f23e6 +0x0ae:  call   085f4b4e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb69>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb69
085f23eb +0x0b3:  test   %al,%al
085f23ed +0x0b5:  je     085f23f9 <+0xc1>
085f23ef +0x0b7:  mov    $0x23f,%eax
085f23f4 +0x0bc:  jmp    085f25ad <+0x275>
085f23f9 +0x0c1:  movl   $0x0,-0x10(%ebp)
085f2400 +0x0c8:  movl   $0xffffffff,-0x48(%ebp)
085f2407 +0x0cf:  lea    -0x5c(%ebp),%eax
085f240a +0x0d2:  mov    %eax,(%esp)
085f240d +0x0d5:  call   085f4b62 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb7d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb7d
085f2412 +0x0da:  lea    0x4(%eax),%ecx
085f2415 +0x0dd:  lea    -0x60(%ebp),%eax
085f2418 +0x0e0:  lea    -0x48(%ebp),%edx
085f241b +0x0e3:  mov    %edx,0x8(%esp)
085f241f +0x0e7:  mov    %ecx,0x4(%esp)
085f2423 +0x0eb:  mov    %eax,(%esp)
085f2426 +0x0ee:  call   085f4b70 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb8b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb8b
085f242b +0x0f3:  sub    $0x4,%esp
085f242e +0x0f6:  lea    -0x5c(%ebp),%eax
085f2431 +0x0f9:  mov    %eax,(%esp)
085f2434 +0x0fc:  call   085f4b62 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb7d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb7d
085f2439 +0x101:  lea    0x4(%eax),%edx
085f243c +0x104:  lea    -0x44(%ebp),%eax
085f243f +0x107:  mov    %edx,0x4(%esp)
085f2443 +0x10b:  mov    %eax,(%esp)
085f2446 +0x10e:  call   085f4b9c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbb7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbb7
085f244b +0x113:  sub    $0x4,%esp
085f244e +0x116:  lea    -0x44(%ebp),%eax
085f2451 +0x119:  mov    %eax,0x4(%esp)
085f2455 +0x11d:  lea    -0x60(%ebp),%eax
085f2458 +0x120:  mov    %eax,(%esp)
085f245b +0x123:  call   085f4bc2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbdd>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbdd
085f2460 +0x128:  test   %al,%al
085f2462 +0x12a:  je     085f247a <+0x142>
085f2464 +0x12c:  lea    -0x60(%ebp),%eax
085f2467 +0x12f:  mov    %eax,(%esp)
085f246a +0x132:  call   085f4bd6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbf1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbf1
085f246f +0x137:  add    $0x4,%eax
085f2472 +0x13a:  mov    %eax,-0x10(%ebp)
085f2475 +0x13d:  jmp    085f24fa <+0x1c2>
085f247a +0x142:  lea    -0x5c(%ebp),%eax
085f247d +0x145:  mov    %eax,(%esp)
085f2480 +0x148:  call   085f4b62 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb7d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb7d
085f2485 +0x14d:  lea    0x4(%eax),%ecx
085f2488 +0x150:  lea    -0x6c(%ebp),%eax
085f248b +0x153:  lea    0x18(%ebp),%edx
085f248e +0x156:  mov    %edx,0x8(%esp)
085f2492 +0x15a:  mov    %ecx,0x4(%esp)
085f2496 +0x15e:  mov    %eax,(%esp)
085f2499 +0x161:  call   085f4b70 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb8b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb8b
085f249e +0x166:  sub    $0x4,%esp
085f24a1 +0x169:  mov    -0x6c(%ebp),%eax
085f24a4 +0x16c:  mov    %eax,-0x60(%ebp)
085f24a7 +0x16f:  lea    -0x5c(%ebp),%eax
085f24aa +0x172:  mov    %eax,(%esp)
085f24ad +0x175:  call   085f4b62 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xb7d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xb7d
085f24b2 +0x17a:  lea    0x4(%eax),%edx
085f24b5 +0x17d:  lea    -0x40(%ebp),%eax
085f24b8 +0x180:  mov    %edx,0x4(%esp)
085f24bc +0x184:  mov    %eax,(%esp)
085f24bf +0x187:  call   085f4b9c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbb7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbb7
085f24c4 +0x18c:  sub    $0x4,%esp
085f24c7 +0x18f:  lea    -0x40(%ebp),%eax
085f24ca +0x192:  mov    %eax,0x4(%esp)
085f24ce +0x196:  lea    -0x60(%ebp),%eax
085f24d1 +0x199:  mov    %eax,(%esp)
085f24d4 +0x19c:  call   085f4bc2 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbdd>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbdd
085f24d9 +0x1a1:  test   %al,%al
085f24db +0x1a3:  je     085f24f0 <+0x1b8>
085f24dd +0x1a5:  lea    -0x60(%ebp),%eax
085f24e0 +0x1a8:  mov    %eax,(%esp)
085f24e3 +0x1ab:  call   085f4bd6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbf1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbf1
085f24e8 +0x1b0:  add    $0x4,%eax
085f24eb +0x1b3:  mov    %eax,-0x10(%ebp)
085f24ee +0x1b6:  jmp    085f24fa <+0x1c2>
085f24f0 +0x1b8:  mov    $0x255,%eax
085f24f5 +0x1bd:  jmp    085f25ad <+0x275>
085f24fa +0x1c2:  mov    -0x10(%ebp),%eax
085f24fd +0x1c5:  mov    0xc(%eax),%eax
085f2500 +0x1c8:  mov    %eax,-0x3c(%ebp)
085f2503 +0x1cb:  mov    0x8(%ebp),%eax
085f2506 +0x1ce:  mov    0x4(%eax),%eax
085f2509 +0x1d1:  lea    0x2720(%eax),%edx
085f250f +0x1d7:  lea    -0x3c(%ebp),%eax
085f2512 +0x1da:  mov    %eax,0x4(%esp)
085f2516 +0x1de:  mov    %edx,(%esp)
085f2519 +0x1e1:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f251e +0x1e6:  mov    %eax,-0xc(%ebp)
085f2521 +0x1e9:  mov    -0xc(%ebp),%eax
085f2524 +0x1ec:  mov    %eax,0x4(%esp)
085f2528 +0x1f0:  lea    -0x28(%ebp),%eax
085f252b +0x1f3:  mov    %eax,(%esp)
085f252e +0x1f6:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f2533 +0x1fb:  mov    -0x10(%ebp),%edx
085f2536 +0x1fe:  lea    -0x18(%ebp),%eax
085f2539 +0x201:  mov    %edx,0x4(%esp)
085f253d +0x205:  mov    %eax,(%esp)
085f2540 +0x208:  call   080e3324 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x10ca>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x10ca
085f2545 +0x20d:  sub    $0x4,%esp
085f2548 +0x210:  mov    -0x10(%ebp),%edx
085f254b +0x213:  lea    -0x14(%ebp),%eax
085f254e +0x216:  mov    %edx,0x4(%esp)
085f2552 +0x21a:  mov    %eax,(%esp)
085f2555 +0x21d:  call   080e3350 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x10f6>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x10f6
085f255a +0x222:  sub    $0x4,%esp
085f255d +0x225:  lea    -0x38(%ebp),%eax
085f2560 +0x228:  mov    -0x28(%ebp),%edx
085f2563 +0x22b:  mov    %edx,0xc(%esp)
085f2567 +0x22f:  mov    -0x24(%ebp),%edx
085f256a +0x232:  mov    %edx,0x10(%esp)
085f256e +0x236:  mov    -0x20(%ebp),%edx
085f2571 +0x239:  mov    %edx,0x14(%esp)
085f2575 +0x23d:  mov    -0x1c(%ebp),%edx
085f2578 +0x240:  mov    %edx,0x18(%esp)
085f257c +0x244:  mov    -0x18(%ebp),%edx
085f257f +0x247:  mov    %edx,0x8(%esp)
085f2583 +0x24b:  mov    -0x14(%ebp),%edx
085f2586 +0x24e:  mov    %edx,0x4(%esp)
085f258a +0x252:  mov    %eax,(%esp)
085f258d +0x255:  call   085f4be3 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xbfe>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xbfe
085f2592 +0x25a:  sub    $0x4,%esp
085f2595 +0x25d:  lea    -0x38(%ebp),%eax
085f2598 +0x260:  mov    %eax,(%esp)
085f259b +0x263:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f25a0 +0x268:  lea    0x1(%eax),%edx
085f25a3 +0x26b:  mov    0x1c(%ebp),%eax
085f25a6 +0x26e:  mov    %dl,(%eax)
085f25a8 +0x270:  mov    $0x0,%eax
085f25ad +0x275:  leave
085f25ae +0x276:  ret
085f25af +0x277:  nop
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_option_type @ 0x85f2338

/* random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int,
   unsigned char&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_get_option_type
          (CRandomOptionItemHandle *this,undefined4 param_1,uchar param_3,uchar param_4,
          undefined4 param_5,char *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  RandomApplicationKey *pRVar5;
  int local_70 [3];
  int local_64;
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  local_60 [4];
  RandomApplicationKey local_5c [6];
  RandomApplicationKey local_56 [2];
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  local_54 [4];
  map<RandomApplicationKey,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>>
  local_50 [4];
  undefined4 local_4c;
  map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
  local_48 [4];
  map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
  local_44 [4];
  ulong local_40;
  CRandomList<unsigned_int> local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_56,param_3,param_4);
  (**(code **)**(undefined4 **)(this + 0x14))(*(undefined4 *)(this + 0x14));
  pRVar5 = local_56;
  std::
  map<RandomApplicationKey,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>>
  ::find(local_5c);
  p_Var4 = (_Rb_tree_iterator *)local_5c;
  std::
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  ::_Rb_tree_const_iterator(local_60,p_Var4);
  (**(code **)**(undefined4 **)(this + 0x14))(*(undefined4 *)(this + 0x14),p_Var4,pRVar5);
  std::
  map<RandomApplicationKey,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>>
  ::end(local_50);
  std::
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  ::_Rb_tree_const_iterator(local_54,(_Rb_tree_iterator *)local_50);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
          ::operator==(local_60,(_Rb_tree_const_iterator *)local_54);
  if (cVar1 == '\0') {
    local_14 = 0;
    local_4c = 0xffffffff;
    std::
    _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
    ::operator->(local_60);
    std::
    map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>::
    find(&local_64);
    std::
    _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
    ::operator->(local_60);
    std::
    map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>::
    end(local_48);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64,
                       (_Rb_tree_const_iterator *)local_48);
    if (cVar1 == '\0') {
      std::
      _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
      ::operator->(local_60);
      std::
      map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
      ::find(local_70);
      local_64 = local_70[0];
      std::
      _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
      ::operator->(local_60);
      std::
      map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
      ::end(local_44);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64
                         ,(_Rb_tree_const_iterator *)local_44);
      if (cVar1 == '\0') {
        return 0x255;
      }
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64
                        );
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64
                        );
    }
    local_14 = iVar3 + 4;
    local_40 = *(ulong *)(iVar3 + 0x10);
    local_10 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x2720),&local_40);
    CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_2c,local_10);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,CRandomList<unsigned_int>>
              (local_3c,local_18,local_1c,local_2c,local_28,local_24,local_20);
    cVar1 = CRandomList<unsigned_int>::get_value(local_3c);
    *param_6 = cVar1 + '\x01';
    uVar2 = 0;
  }
  else {
    uVar2 = 0x23f;
  }
  return uVar2;
}
```
