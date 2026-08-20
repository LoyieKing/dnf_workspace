# RegenVer_get_option_quantity

`_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI`

`random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity(ENUM_RARITY, int, int, int, int&, RegenerationROI*)`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f1a62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f1a62  _ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI
#           random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity(ENUM_RARITY, int, int, int, int&, RegenerationROI*)
# range [0x085f1a62, 0x085f1baf]
085f1a62 +0x000:  push   %ebp
085f1a63 +0x001:  mov    %esp,%ebp
085f1a65 +0x003:  push   %ebx
085f1a66 +0x004:  sub    $0x34,%esp
085f1a69 +0x007:  mov    0xc(%ebp),%eax
085f1a6c +0x00a:  mov    %al,-0x14(%ebp)
085f1a6f +0x00d:  movb   $0xff,-0x13(%ebp)
085f1a73 +0x011:  mov    0x14(%ebp),%eax
085f1a76 +0x014:  mov    %al,-0x12(%ebp)
085f1a79 +0x017:  mov    0x18(%ebp),%eax
085f1a7c +0x01a:  mov    %al,-0x11(%ebp)
085f1a7f +0x01d:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1a84 +0x022:  lea    0xb4(%eax),%ecx
085f1a8a +0x028:  lea    -0x18(%ebp),%eax
085f1a8d +0x02b:  lea    -0x14(%ebp),%edx
085f1a90 +0x02e:  mov    %edx,0x8(%esp)
085f1a94 +0x032:  mov    %ecx,0x4(%esp)
085f1a98 +0x036:  mov    %eax,(%esp)
085f1a9b +0x039:  call   085f469c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6b7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6b7
085f1aa0 +0x03e:  sub    $0x4,%esp
085f1aa3 +0x041:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1aa8 +0x046:  lea    0xb4(%eax),%edx
085f1aae +0x04c:  lea    -0x10(%ebp),%eax
085f1ab1 +0x04f:  mov    %edx,0x4(%esp)
085f1ab5 +0x053:  mov    %eax,(%esp)
085f1ab8 +0x056:  call   085f46c8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6e3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6e3
085f1abd +0x05b:  sub    $0x4,%esp
085f1ac0 +0x05e:  lea    -0x10(%ebp),%eax
085f1ac3 +0x061:  mov    %eax,0x4(%esp)
085f1ac7 +0x065:  lea    -0x18(%ebp),%eax
085f1aca +0x068:  mov    %eax,(%esp)
085f1acd +0x06b:  call   085f46ee <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x709>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x709
085f1ad2 +0x070:  test   %al,%al
085f1ad4 +0x072:  je     085f1b3a <+0xd8>
085f1ad6 +0x074:  mov    0x10(%ebp),%eax
085f1ad9 +0x077:  mov    %al,-0x13(%ebp)
085f1adc +0x07a:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1ae1 +0x07f:  lea    0xb4(%eax),%ecx
085f1ae7 +0x085:  lea    -0x1c(%ebp),%eax
085f1aea +0x088:  lea    -0x14(%ebp),%edx
085f1aed +0x08b:  mov    %edx,0x8(%esp)
085f1af1 +0x08f:  mov    %ecx,0x4(%esp)
085f1af5 +0x093:  mov    %eax,(%esp)
085f1af8 +0x096:  call   085f469c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6b7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6b7
085f1afd +0x09b:  sub    $0x4,%esp
085f1b00 +0x09e:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f1b05 +0x0a3:  lea    0xb4(%eax),%edx
085f1b0b +0x0a9:  lea    -0xc(%ebp),%eax
085f1b0e +0x0ac:  mov    %edx,0x4(%esp)
085f1b12 +0x0b0:  mov    %eax,(%esp)
085f1b15 +0x0b3:  call   085f46c8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x6e3>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x6e3
085f1b1a +0x0b8:  sub    $0x4,%esp
085f1b1d +0x0bb:  lea    -0xc(%ebp),%eax
085f1b20 +0x0be:  mov    %eax,0x4(%esp)
085f1b24 +0x0c2:  lea    -0x1c(%ebp),%eax
085f1b27 +0x0c5:  mov    %eax,(%esp)
085f1b2a +0x0c8:  call   085f46ee <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x709>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x709
085f1b2f +0x0cd:  test   %al,%al
085f1b31 +0x0cf:  je     085f1b3a <+0xd8>
085f1b33 +0x0d1:  mov    $0x1ad,%eax
085f1b38 +0x0d6:  jmp    085f1bab <+0x149>
085f1b3a +0x0d8:  lea    -0x18(%ebp),%eax
085f1b3d +0x0db:  mov    %eax,(%esp)
085f1b40 +0x0de:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f1b45 +0x0e3:  movzwl 0x6(%eax),%eax
085f1b49 +0x0e7:  test   %ax,%ax
085f1b4c +0x0ea:  sete   %al
085f1b4f +0x0ed:  test   %al,%al
085f1b51 +0x0ef:  je     085f1b5a <+0xf8>
085f1b53 +0x0f1:  mov    $0x1b1,%eax
085f1b58 +0x0f6:  jmp    085f1bab <+0x149>
085f1b5a +0x0f8:  lea    -0x18(%ebp),%eax
085f1b5d +0x0fb:  mov    %eax,(%esp)
085f1b60 +0x0fe:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f1b65 +0x103:  movzwl 0x6(%eax),%eax
085f1b69 +0x107:  movswl %ax,%ebx
085f1b6c +0x10a:  lea    -0x18(%ebp),%eax
085f1b6f +0x10d:  mov    %eax,(%esp)
085f1b72 +0x110:  call   085f4702 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x71d>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x71d
085f1b77 +0x115:  movzwl 0x4(%eax),%eax
085f1b7b +0x119:  cwtl
085f1b7c +0x11a:  mov    %ebx,0x8(%esp)
085f1b80 +0x11e:  mov    %eax,0x4(%esp)
085f1b84 +0x122:  mov    0x20(%ebp),%eax
085f1b87 +0x125:  mov    %eax,(%esp)
085f1b8a +0x128:  call   085f8cb4 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii>  ; RegenerationROI::RegenVer_get_option_quantity(int, int)
085f1b8f +0x12d:  mov    %eax,%edx
085f1b91 +0x12f:  mov    0x1c(%ebp),%eax
085f1b94 +0x132:  mov    %edx,(%eax)
085f1b96 +0x134:  mov    0x1c(%ebp),%eax
085f1b99 +0x137:  mov    (%eax),%eax
085f1b9b +0x139:  test   %eax,%eax
085f1b9d +0x13b:  jne    085f1ba6 <+0x144>
085f1b9f +0x13d:  mov    $0x1b5,%eax
085f1ba4 +0x142:  jmp    085f1bab <+0x149>
085f1ba6 +0x144:  mov    $0x0,%eax
085f1bab +0x149:  mov    -0x4(%ebp),%ebx
085f1bae +0x14c:  leave
085f1baf +0x14d:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity @ 0x85f1a62

/* random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity(ENUM_RARITY, int, int, int,
   int&, RegenerationROI*) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity
          (undefined4 this,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,int *param_6,RegenerationROI *param_7)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_20 [4];
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_1c [4];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_14 [4];
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_10 [8];
  
  local_18 = param_2;
  local_17 = 0xff;
  local_16 = param_4;
  local_15 = param_5;
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::find((int *)local_1c);
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_14);
  if (cVar2 != '\0') {
    local_17 = param_3;
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::find((int *)local_20);
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::end(local_10);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                      (local_20,(_Rb_tree_const_iterator *)local_10);
    if (cVar2 != '\0') {
      return 0x1ad;
    }
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                    (local_1c);
  if (*(short *)(iVar3 + 6) == 0) {
    uVar4 = 0x1b1;
  }
  else {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                      (local_1c);
    sVar1 = *(short *)(iVar3 + 6);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                      (local_1c);
    iVar3 = RegenerationROI::RegenVer_get_option_quantity
                      (param_7,(int)*(short *)(iVar3 + 4),(int)sVar1);
    *param_6 = iVar3;
    if (*param_6 == 0) {
      uVar4 = 0x1b5;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
