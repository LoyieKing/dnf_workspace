# _findBonusItem

`_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t`

`ARAD::CeraShopPurcahseCountBonus::_findBonusItem(std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > const&, ARAD::PurcahseBonus&, unsigned short)`

| 类 | 地址 |
|---|---|
| `ARAD::CeraShopPurcahseCountBonus` | `0x081ac04c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ac04c  _ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t
#           ARAD::CeraShopPurcahseCountBonus::_findBonusItem(std::vector<ARAD::PurcahseBonus, std::allocator<ARAD::PurcahseBonus> > const&, ARAD::PurcahseBonus&, unsigned short)
# range [0x081ac04c, 0x081ac13d]
081ac04c +0x00:  push   %ebp
081ac04d +0x01:  mov    %esp,%ebp
081ac04f +0x03:  sub    $0x38,%esp
081ac052 +0x06:  mov    0x14(%ebp),%eax
081ac055 +0x09:  mov    %ax,-0x1c(%ebp)
081ac059 +0x0d:  lea    -0x14(%ebp),%eax
081ac05c +0x10:  mov    0xc(%ebp),%edx
081ac05f +0x13:  mov    %edx,0x4(%esp)
081ac063 +0x17:  mov    %eax,(%esp)
081ac066 +0x1a:  call   081ac7bc <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0xc8>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0xc8
081ac06b +0x1f:  sub    $0x4,%esp
081ac06e +0x22:  lea    -0x18(%ebp),%eax
081ac071 +0x25:  mov    0xc(%ebp),%edx
081ac074 +0x28:  mov    %edx,0x4(%esp)
081ac078 +0x2c:  mov    %eax,(%esp)
081ac07b +0x2f:  call   081ac7e8 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0xf4>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0xf4
081ac080 +0x34:  sub    $0x4,%esp
081ac083 +0x37:  jmp    081ac0b2 <+0x66>
081ac085 +0x39:  lea    -0x14(%ebp),%eax
081ac088 +0x3c:  mov    %eax,(%esp)
081ac08b +0x3f:  call   081ac856 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x162>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x162
081ac090 +0x44:  movzbl (%eax),%eax
081ac093 +0x47:  movzbl %al,%eax
081ac096 +0x4a:  cmp    -0x1c(%ebp),%ax
081ac09a +0x4e:  setbe  %al
081ac09d +0x51:  test   %al,%al
081ac09f +0x53:  je     081ac0a7 <+0x5b>
081ac0a1 +0x55:  mov    -0x14(%ebp),%eax
081ac0a4 +0x58:  mov    %eax,-0x18(%ebp)
081ac0a7 +0x5b:  lea    -0x14(%ebp),%eax
081ac0aa +0x5e:  mov    %eax,(%esp)
081ac0ad +0x61:  call   081ac840 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x14c>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x14c
081ac0b2 +0x66:  lea    -0x10(%ebp),%eax
081ac0b5 +0x69:  mov    0xc(%ebp),%edx
081ac0b8 +0x6c:  mov    %edx,0x4(%esp)
081ac0bc +0x70:  mov    %eax,(%esp)
081ac0bf +0x73:  call   081ac7e8 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0xf4>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0xf4
081ac0c4 +0x78:  sub    $0x4,%esp
081ac0c7 +0x7b:  lea    -0x10(%ebp),%eax
081ac0ca +0x7e:  mov    %eax,0x4(%esp)
081ac0ce +0x82:  lea    -0x14(%ebp),%eax
081ac0d1 +0x85:  mov    %eax,(%esp)
081ac0d4 +0x88:  call   081ac814 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x120>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x120
081ac0d9 +0x8d:  test   %al,%al
081ac0db +0x8f:  jne    081ac085 <+0x39>
081ac0dd +0x91:  lea    -0xc(%ebp),%eax
081ac0e0 +0x94:  mov    0xc(%ebp),%edx
081ac0e3 +0x97:  mov    %edx,0x4(%esp)
081ac0e7 +0x9b:  mov    %eax,(%esp)
081ac0ea +0x9e:  call   081ac7e8 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0xf4>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0xf4
081ac0ef +0xa3:  sub    $0x4,%esp
081ac0f2 +0xa6:  lea    -0xc(%ebp),%eax
081ac0f5 +0xa9:  mov    %eax,0x4(%esp)
081ac0f9 +0xad:  lea    -0x18(%ebp),%eax
081ac0fc +0xb0:  mov    %eax,(%esp)
081ac0ff +0xb3:  call   081ac860 <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x16c>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x16c
081ac104 +0xb8:  test   %al,%al
081ac106 +0xba:  je     081ac10f <+0xc3>
081ac108 +0xbc:  mov    $0x0,%eax
081ac10d +0xc1:  jmp    081ac13b <+0xef>
081ac10f +0xc3:  lea    -0x18(%ebp),%eax
081ac112 +0xc6:  mov    %eax,(%esp)
081ac115 +0xc9:  call   081ac88c <_GLOBAL__I__ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x198>  ; global constructors keyed to ARAD::CeraShopPurcahseCountBonus::LoadScript()+0x198
081ac11a +0xce:  cmp    %eax,0x10(%ebp)
081ac11d +0xd1:  je     081ac136 <+0xea>
081ac11f +0xd3:  movl   $0xa,0x8(%esp)
081ac127 +0xdb:  mov    %eax,0x4(%esp)
081ac12b +0xdf:  mov    0x10(%ebp),%eax
081ac12e +0xe2:  mov    %eax,(%esp)
081ac131 +0xe5:  call   0807d8a0 <_init+0x198>
081ac136 +0xea:  mov    $0x1,%eax
081ac13b +0xef:  leave
081ac13c +0xf0:  ret
081ac13d +0xf1:  nop
```

## 反编译 C

```c
// ARAD::CeraShopPurcahseCountBonus::_findBonusItem @ 0x81ac04c

/* ARAD::CeraShopPurcahseCountBonus::_findBonusItem(std::vector<ARAD::PurcahseBonus,
   std::allocator<ARAD::PurcahseBonus> > const&, ARAD::PurcahseBonus&, unsigned short) */

undefined4 __thiscall
ARAD::CeraShopPurcahseCountBonus::_findBonusItem
          (CeraShopPurcahseCountBonus *this,vector *param_1,PurcahseBonus *param_2,ushort param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  PurcahseBonus *__src;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::begin();
  std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
  while( true ) {
    std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
    if (!bVar1) break;
    pbVar2 = (byte *)__gnu_cxx::
                     __normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                     ::operator->((__normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                                   *)&local_18);
    if (*pbVar2 <= param_3) {
      local_1c = local_18;
    }
    __gnu_cxx::
    __normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
    ::operator++((__normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                  *)&local_18);
  }
  std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    __src = (PurcahseBonus *)
            __gnu_cxx::
            __normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
            ::operator*((__normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                         *)&local_1c);
    if (param_2 != __src) {
      memcpy(param_2,__src,10);
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
