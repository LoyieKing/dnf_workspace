# _get_option_quantity

`_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi`

`random_option::CRandomOptionItemHandle::_get_option_quantity(ENUM_RARITY, int, int, int, int&)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f25b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f25b0  _ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi
#           random_option::CRandomOptionItemHandle::_get_option_quantity(ENUM_RARITY, int, int, int, int&)
# range [0x085f25b0, 0x085f2881]
085f25b0 +0x000:  push   %ebp
085f25b1 +0x001:  mov    %esp,%ebp
085f25b3 +0x003:  push   %esi
085f25b4 +0x004:  push   %ebx
085f25b5 +0x005:  add    $0xffffff80,%esp
085f25b8 +0x008:  mov    0xc(%ebp),%eax
085f25bb +0x00b:  mov    %al,-0x54(%ebp)
085f25be +0x00e:  movb   $0xff,-0x53(%ebp)
085f25c2 +0x012:  mov    0x14(%ebp),%eax
085f25c5 +0x015:  mov    %al,-0x52(%ebp)
085f25c8 +0x018:  mov    0x18(%ebp),%eax
085f25cb +0x01b:  mov    %al,-0x51(%ebp)
085f25ce +0x01e:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f25d3 +0x023:  lea    0xb4(%eax),%ecx
085f25d9 +0x029:  lea    -0x58(%ebp),%eax
085f25dc +0x02c:  lea    -0x54(%ebp),%edx
085f25df +0x02f:  mov    %edx,0x8(%esp)
085f25e3 +0x033:  mov    %ecx,0x4(%esp)
085f25e7 +0x037:  mov    %eax,(%esp)
085f25ea +0x03a:  call   085f469c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6b7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6b7
085f25ef +0x03f:  sub    $0x4,%esp
085f25f2 +0x042:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f25f7 +0x047:  lea    0xb4(%eax),%edx
085f25fd +0x04d:  lea    -0x50(%ebp),%eax
085f2600 +0x050:  mov    %edx,0x4(%esp)
085f2604 +0x054:  mov    %eax,(%esp)
085f2607 +0x057:  call   085f46c8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6e3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6e3
085f260c +0x05c:  sub    $0x4,%esp
085f260f +0x05f:  lea    -0x50(%ebp),%eax
085f2612 +0x062:  mov    %eax,0x4(%esp)
085f2616 +0x066:  lea    -0x58(%ebp),%eax
085f2619 +0x069:  mov    %eax,(%esp)
085f261c +0x06c:  call   085f46ee <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x709>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x709
085f2621 +0x071:  test   %al,%al
085f2623 +0x073:  je     085f268c <+0xdc>
085f2625 +0x075:  mov    0x10(%ebp),%eax
085f2628 +0x078:  mov    %al,-0x53(%ebp)
085f262b +0x07b:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2630 +0x080:  lea    0xb4(%eax),%ecx
085f2636 +0x086:  lea    -0x68(%ebp),%eax
085f2639 +0x089:  lea    -0x54(%ebp),%edx
085f263c +0x08c:  mov    %edx,0x8(%esp)
085f2640 +0x090:  mov    %ecx,0x4(%esp)
085f2644 +0x094:  mov    %eax,(%esp)
085f2647 +0x097:  call   085f469c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6b7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6b7
085f264c +0x09c:  sub    $0x4,%esp
085f264f +0x09f:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f2654 +0x0a4:  lea    0xb4(%eax),%edx
085f265a +0x0aa:  lea    -0x4c(%ebp),%eax
085f265d +0x0ad:  mov    %edx,0x4(%esp)
085f2661 +0x0b1:  mov    %eax,(%esp)
085f2664 +0x0b4:  call   085f46c8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6e3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6e3
085f2669 +0x0b9:  sub    $0x4,%esp
085f266c +0x0bc:  lea    -0x4c(%ebp),%eax
085f266f +0x0bf:  mov    %eax,0x4(%esp)
085f2673 +0x0c3:  lea    -0x68(%ebp),%eax
085f2676 +0x0c6:  mov    %eax,(%esp)
085f2679 +0x0c9:  call   085f46ee <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x709>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x709
085f267e +0x0ce:  test   %al,%al
085f2680 +0x0d0:  je     085f268c <+0xdc>
085f2682 +0x0d2:  mov    $0x26c,%ebx
085f2687 +0x0d7:  jmp    085f2876 <+0x2c6>
085f268c +0x0dc:  lea    -0x58(%ebp),%eax
085f268f +0x0df:  mov    %eax,(%esp)
085f2692 +0x0e2:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f2697 +0x0e7:  movzwl 0x6(%eax),%eax
085f269b +0x0eb:  test   %ax,%ax
085f269e +0x0ee:  sete   %al
085f26a1 +0x0f1:  test   %al,%al
085f26a3 +0x0f3:  je     085f26af <+0xff>
085f26a5 +0x0f5:  mov    $0x270,%ebx
085f26aa +0x0fa:  jmp    085f2876 <+0x2c6>
085f26af +0x0ff:  lea    -0x64(%ebp),%eax
085f26b2 +0x102:  mov    %eax,(%esp)
085f26b5 +0x105:  call   080e247e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x224>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x224
085f26ba +0x10a:  movl   $0x0,-0x18(%ebp)
085f26c1 +0x111:  movl   $0x0,-0x14(%ebp)
085f26c8 +0x118:  lea    -0x58(%ebp),%eax
085f26cb +0x11b:  mov    %eax,(%esp)
085f26ce +0x11e:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f26d3 +0x123:  movzwl 0x4(%eax),%eax
085f26d7 +0x127:  cwtl
085f26d8 +0x128:  sub    $0x1,%eax
085f26db +0x12b:  mov    %eax,-0xc(%ebp)
085f26de +0x12e:  jmp    085f2721 <+0x171>
085f26e0 +0x130:  mov    -0xc(%ebp),%ebx
085f26e3 +0x133:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f26e8 +0x138:  add    $0xa8,%eax
085f26ed +0x13d:  mov    %ebx,0x4(%esp)
085f26f1 +0x141:  mov    %eax,(%esp)
085f26f4 +0x144:  call   085f4c4e <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xc69>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xc69
085f26f9 +0x149:  mov    0x4(%eax),%eax
085f26fc +0x14c:  mov    %eax,-0x14(%ebp)
085f26ff +0x14f:  mov    -0x14(%ebp),%eax
085f2702 +0x152:  mov    %eax,-0x48(%ebp)
085f2705 +0x155:  lea    -0x48(%ebp),%eax
085f2708 +0x158:  mov    %eax,0x4(%esp)
085f270c +0x15c:  lea    -0x64(%ebp),%eax
085f270f +0x15f:  mov    %eax,(%esp)
085f2712 +0x162:  call   081527c6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x20fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x20fb
085f2717 +0x167:  mov    -0x14(%ebp),%eax
085f271a +0x16a:  add    %eax,-0x18(%ebp)
085f271d +0x16d:  addl   $0x1,-0xc(%ebp)
085f2721 +0x171:  lea    -0x58(%ebp),%eax
085f2724 +0x174:  mov    %eax,(%esp)
085f2727 +0x177:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f272c +0x17c:  movzwl 0x6(%eax),%eax
085f2730 +0x180:  cwtl
085f2731 +0x181:  cmp    -0xc(%ebp),%eax
085f2734 +0x184:  setg   %al
085f2737 +0x187:  test   %al,%al
085f2739 +0x189:  jne    085f26e0 <+0x130>
085f273b +0x18b:  lea    -0x64(%ebp),%eax
085f273e +0x18e:  mov    %eax,(%esp)
085f2741 +0x191:  call   080e286c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x612>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x612
085f2746 +0x196:  test   %al,%al
085f2748 +0x198:  je     085f2754 <+0x1a4>
085f274a +0x19a:  mov    $0x27d,%ebx
085f274f +0x19f:  jmp    085f286b <+0x2bb>
085f2754 +0x1a4:  lea    -0x64(%ebp),%eax
085f2757 +0x1a7:  mov    %eax,(%esp)
085f275a +0x1aa:  call   080e2462 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x208>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x208
085f275f +0x1af:  cmp    $0x1,%eax
085f2762 +0x1b2:  sete   %al
085f2765 +0x1b5:  test   %al,%al
085f2767 +0x1b7:  je     085f278a <+0x1da>
085f2769 +0x1b9:  lea    -0x58(%ebp),%eax
085f276c +0x1bc:  mov    %eax,(%esp)
085f276f +0x1bf:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f2774 +0x1c4:  movzwl 0x4(%eax),%eax
085f2778 +0x1c8:  movswl %ax,%edx
085f277b +0x1cb:  mov    0x1c(%ebp),%eax
085f277e +0x1ce:  mov    %edx,(%eax)
085f2780 +0x1d0:  mov    $0x0,%ebx
085f2785 +0x1d5:  jmp    085f286b <+0x2bb>
085f278a +0x1da:  mov    -0x18(%ebp),%eax
085f278d +0x1dd:  mov    %eax,-0x44(%ebp)
085f2790 +0x1e0:  mov    0x8(%ebp),%eax
085f2793 +0x1e3:  mov    0x4(%eax),%eax
085f2796 +0x1e6:  lea    0x30e8(%eax),%edx
085f279c +0x1ec:  lea    -0x44(%ebp),%eax
085f279f +0x1ef:  mov    %eax,0x4(%esp)
085f27a3 +0x1f3:  mov    %edx,(%esp)
085f27a6 +0x1f6:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f27ab +0x1fb:  mov    %eax,-0x10(%ebp)
085f27ae +0x1fe:  mov    -0x10(%ebp),%eax
085f27b1 +0x201:  mov    %eax,0x4(%esp)
085f27b5 +0x205:  lea    -0x30(%ebp),%eax
085f27b8 +0x208:  mov    %eax,(%esp)
085f27bb +0x20b:  call   085f4904 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x91f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x91f
085f27c0 +0x210:  lea    -0x20(%ebp),%eax
085f27c3 +0x213:  lea    -0x64(%ebp),%edx
085f27c6 +0x216:  mov    %edx,0x4(%esp)
085f27ca +0x21a:  mov    %eax,(%esp)
085f27cd +0x21d:  call   080e2a8a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x830>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x830
085f27d2 +0x222:  sub    $0x4,%esp
085f27d5 +0x225:  lea    -0x1c(%ebp),%eax
085f27d8 +0x228:  lea    -0x64(%ebp),%edx
085f27db +0x22b:  mov    %edx,0x4(%esp)
085f27df +0x22f:  mov    %eax,(%esp)
085f27e2 +0x232:  call   080e384e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x15f4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x15f4
085f27e7 +0x237:  sub    $0x4,%esp
085f27ea +0x23a:  lea    -0x40(%ebp),%eax
085f27ed +0x23d:  mov    -0x30(%ebp),%edx
085f27f0 +0x240:  mov    %edx,0xc(%esp)
085f27f4 +0x244:  mov    -0x2c(%ebp),%edx
085f27f7 +0x247:  mov    %edx,0x10(%esp)
085f27fb +0x24b:  mov    -0x28(%ebp),%edx
085f27fe +0x24e:  mov    %edx,0x14(%esp)
085f2802 +0x252:  mov    -0x24(%ebp),%edx
085f2805 +0x255:  mov    %edx,0x18(%esp)
085f2809 +0x259:  mov    -0x20(%ebp),%edx
085f280c +0x25c:  mov    %edx,0x8(%esp)
085f2810 +0x260:  mov    -0x1c(%ebp),%edx
085f2813 +0x263:  mov    %edx,0x4(%esp)
085f2817 +0x267:  mov    %eax,(%esp)
085f281a +0x26a:  call   085f4c60 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0xc7b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0xc7b
085f281f +0x26f:  sub    $0x4,%esp
085f2822 +0x272:  lea    -0x40(%ebp),%eax
085f2825 +0x275:  mov    %eax,(%esp)
085f2828 +0x278:  call   085f49a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x9bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x9bb
085f282d +0x27d:  mov    %eax,%ebx
085f282f +0x27f:  lea    -0x58(%ebp),%eax
085f2832 +0x282:  mov    %eax,(%esp)
085f2835 +0x285:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f283a +0x28a:  movzwl 0x4(%eax),%eax
085f283e +0x28e:  cwtl
085f283f +0x28f:  lea    (%ebx,%eax,1),%eax
085f2842 +0x292:  mov    %eax,%edx
085f2844 +0x294:  mov    0x1c(%ebp),%eax
085f2847 +0x297:  mov    %edx,(%eax)
085f2849 +0x299:  mov    $0x0,%ebx
085f284e +0x29e:  jmp    085f286b <+0x2bb>
085f2850 +0x2a0:  mov    %edx,%ebx
085f2852 +0x2a2:  mov    %eax,%esi
085f2854 +0x2a4:  lea    -0x64(%ebp),%eax
085f2857 +0x2a7:  mov    %eax,(%esp)
085f285a +0x2aa:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085f285f +0x2af:  mov    %esi,%eax
085f2861 +0x2b1:  mov    %ebx,%edx
085f2863 +0x2b3:  mov    %eax,(%esp)
085f2866 +0x2b6:  call   08ae3750 <_Unwind_Resume>
085f286b +0x2bb:  lea    -0x64(%ebp),%eax
085f286e +0x2be:  mov    %eax,(%esp)
085f2871 +0x2c1:  call   080e2492 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x238>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x238
085f2876 +0x2c6:  mov    %ebx,%eax
085f2878 +0x2c8:  lea    -0x8(%ebp),%esp
085f287b +0x2cb:  add    $0x0,%esp
085f287e +0x2ce:  pop    %ebx
085f287f +0x2cf:  pop    %esi
085f2880 +0x2d0:  pop    %ebp
085f2881 +0x2d1:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_option_quantity @ 0x85f25b0

/* random_option::CRandomOptionItemHandle::_get_option_quantity(ENUM_RARITY, int, int, int, int&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_get_option_quantity
          (CRandomOptionItemHandle *this,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,int *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_6c [4];
  vector<unsigned_int,std::allocator<unsigned_int>> local_68 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_5c [4];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_54 [4];
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_50 [4];
  uint local_4c;
  ulong local_48;
  CRandomList<unsigned_int> local_44 [16];
  CRandomList<unsigned_int> local_34 [24];
  ulong local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  piVar6 = (int *)&stack0xffffff74;
  local_58 = param_2;
  local_57 = 0xff;
  local_56 = param_4;
  local_55 = param_5;
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::find((int *)local_5c);
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::end(local_54);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                    (local_5c,(_Rb_tree_const_iterator *)local_54);
  if (cVar2 != '\0') {
    local_57 = param_3;
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::find((int *)local_6c);
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::end(local_50);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                      (local_6c,(_Rb_tree_const_iterator *)local_50);
    if (cVar2 != '\0') {
      return 0x26c;
    }
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                    (local_5c);
  if (*(short *)(iVar3 + 6) == 0) {
    uVar5 = 0x270;
  }
  else {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_68);
    local_1c = 0;
    local_18 = 0;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                      (local_5c);
    local_10 = (int)*(short *)(iVar3 + 4) - 1;
    while (iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::
                   operator->(local_5c), uVar1 = local_10,
          (int)local_10 < (int)*(short *)(iVar3 + 6)) {
                    /* try { // try from 085f26e3 to 085f281e has its CatchHandler @ 085f2850 */
      iVar3 = GetRandomOption();
      iVar3 = std::vector<QuantityRatio,std::allocator<QuantityRatio>>::operator[]
                        ((vector<QuantityRatio,std::allocator<QuantityRatio>> *)(iVar3 + 0xa8),uVar1
                        );
      local_4c = *(uint *)(iVar3 + 4);
      local_18 = local_4c;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_68,&local_4c);
      local_1c = local_1c + local_18;
      local_10 = local_10 + 1;
    }
    cVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
    if (cVar2 == '\0') {
      iVar3 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_68);
      if (iVar3 == 1) {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                          (local_5c);
        *param_6 = (int)*(short *)(iVar3 + 4);
        uVar5 = 0;
      }
      else {
        local_48 = local_1c;
        local_14 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x30e8),&local_48);
        CRandomList<unsigned_int>::CRandomList(local_34,local_14);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
        std::
        for_each<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,CRandomList<unsigned_int>>
                  ();
        piVar6 = (int *)&stack0xffffff70;
        iVar3 = CRandomList<unsigned_int>::get_value(local_44);
        iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                          (local_5c);
        *param_6 = iVar3 + *(short *)(iVar4 + 4);
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0x27d;
      piVar6 = (int *)&stack0xffffff74;
    }
    *piVar6 = (int)local_68;
    piVar6[-1] = 0x85f2876;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)*piVar6);
  }
  return uVar5;
}
```
