# check_restrictive_commercial_transaction_zone

`_ZN9GameWorld45check_restrictive_commercial_transaction_zoneEiiii`

`GameWorld::check_restrictive_commercial_transaction_zone(int, int, int, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c45aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c45aa  _ZN9GameWorld45check_restrictive_commercial_transaction_zoneEiiii
#           GameWorld::check_restrictive_commercial_transaction_zone(int, int, int, int)
# range [0x086c45aa, 0x086c46b9]
086c45aa +0x000:  push   %ebp
086c45ab +0x001:  mov    %esp,%ebp
086c45ad +0x003:  sub    $0x38,%esp
086c45b0 +0x006:  mov    0x10(%ebp),%eax
086c45b3 +0x009:  mov    %eax,0x8(%esp)
086c45b7 +0x00d:  mov    0xc(%ebp),%eax
086c45ba +0x010:  mov    %eax,0x4(%esp)
086c45be +0x014:  mov    0x8(%ebp),%eax
086c45c1 +0x017:  mov    %eax,(%esp)
086c45c4 +0x01a:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c45c9 +0x01f:  test   %al,%al
086c45cb +0x021:  je     086c46b2 <+0x108>
086c45d1 +0x027:  lea    -0x14(%ebp),%eax
086c45d4 +0x02a:  mov    %eax,(%esp)
086c45d7 +0x02d:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
086c45dc +0x032:  mov    0x8(%ebp),%eax
086c45df +0x035:  mov    0x1c(%eax),%edx
086c45e2 +0x038:  mov    0xc(%ebp),%eax
086c45e5 +0x03b:  imul   $0x34,%eax,%eax
086c45e8 +0x03e:  add    %eax,%edx
086c45ea +0x040:  mov    0x10(%ebp),%eax
086c45ed +0x043:  mov    %eax,0x4(%esp)
086c45f1 +0x047:  mov    %edx,(%esp)
086c45f4 +0x04a:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c45f9 +0x04f:  mov    %eax,-0xc(%ebp)
086c45fc +0x052:  cmpl   $0x0,-0xc(%ebp)
086c4600 +0x056:  je     086c46b2 <+0x108>
086c4606 +0x05c:  mov    -0xc(%ebp),%eax
086c4609 +0x05f:  movzbl 0x6c(%eax),%eax
086c460d +0x063:  xor    $0x1,%eax
086c4610 +0x066:  test   %al,%al
086c4612 +0x068:  je     086c461e <+0x74>
086c4614 +0x06a:  mov    $0x3e,%eax
086c4619 +0x06f:  jmp    086c46b7 <+0x10d>
086c461e +0x074:  mov    -0xc(%ebp),%eax
086c4621 +0x077:  lea    0x70(%eax),%edx
086c4624 +0x07a:  lea    -0x18(%ebp),%eax
086c4627 +0x07d:  mov    %edx,0x4(%esp)
086c462b +0x081:  mov    %eax,(%esp)
086c462e +0x084:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
086c4633 +0x089:  sub    $0x4,%esp
086c4636 +0x08c:  mov    -0xc(%ebp),%eax
086c4639 +0x08f:  lea    0x70(%eax),%edx
086c463c +0x092:  lea    -0x1c(%ebp),%eax
086c463f +0x095:  mov    %edx,0x4(%esp)
086c4643 +0x099:  mov    %eax,(%esp)
086c4646 +0x09c:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086c464b +0x0a1:  sub    $0x4,%esp
086c464e +0x0a4:  jmp    086c469c <+0xf2>
086c4650 +0x0a6:  lea    -0x18(%ebp),%eax
086c4653 +0x0a9:  mov    %eax,(%esp)
086c4656 +0x0ac:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
086c465b +0x0b1:  mov    0x4(%eax),%edx
086c465e +0x0b4:  mov    (%eax),%eax
086c4660 +0x0b6:  mov    %eax,-0x14(%ebp)
086c4663 +0x0b9:  mov    %edx,-0x10(%ebp)
086c4666 +0x0bc:  mov    -0x10(%ebp),%edx
086c4669 +0x0bf:  mov    -0x14(%ebp),%eax
086c466c +0x0c2:  mov    0x18(%ebp),%ecx
086c466f +0x0c5:  mov    %ecx,0xc(%esp)
086c4673 +0x0c9:  mov    0x14(%ebp),%ecx
086c4676 +0x0cc:  mov    %ecx,0x8(%esp)
086c467a +0x0d0:  mov    %edx,0x4(%esp)
086c467e +0x0d4:  mov    %eax,(%esp)
086c4681 +0x0d7:  call   086c4568 <_Z42Is_restrictive_commercial_transaction_zoneiiii>  ; Is_restrictive_commercial_transaction_zone(int, int, int, int)
086c4686 +0x0dc:  test   %al,%al
086c4688 +0x0de:  je     086c4691 <+0xe7>
086c468a +0x0e0:  mov    $0x52,%eax
086c468f +0x0e5:  jmp    086c46b7 <+0x10d>
086c4691 +0x0e7:  lea    -0x18(%ebp),%eax
086c4694 +0x0ea:  mov    %eax,(%esp)
086c4697 +0x0ed:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
086c469c +0x0f2:  lea    -0x1c(%ebp),%eax
086c469f +0x0f5:  mov    %eax,0x4(%esp)
086c46a3 +0x0f9:  lea    -0x18(%ebp),%eax
086c46a6 +0x0fc:  mov    %eax,(%esp)
086c46a9 +0x0ff:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
086c46ae +0x104:  test   %al,%al
086c46b0 +0x106:  jne    086c4650 <+0xa6>
086c46b2 +0x108:  mov    $0x0,%eax
086c46b7 +0x10d:  leave
086c46b8 +0x10e:  ret
086c46b9 +0x10f:  nop
```

## 反编译 C

```c
// GameWorld::check_restrictive_commercial_transaction_zone @ 0x86c45aa

/* GameWorld::check_restrictive_commercial_transaction_zone(int, int, int, int) */

undefined4 __thiscall
GameWorld::check_restrictive_commercial_transaction_zone
          (GameWorld *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  __normal_iterator local_20 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = check_valid_area(this,param_1,param_2);
  if (cVar1 != '\0') {
    std::pair<int,int>::pair((pair<int,int> *)&local_18);
    local_10 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
    if (local_10 != 0) {
      if (*(char *)(local_10 + 0x6c) != '\x01') {
        return 0x3e;
      }
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_1c,local_20), bVar2) {
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_1c);
        local_14 = piVar3[1];
        local_18 = *piVar3;
        cVar1 = Is_restrictive_commercial_transaction_zone(local_18,local_14,param_3,param_4);
        if (cVar1 != '\0') {
          return 0x52;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_1c);
      }
    }
  }
  return 0;
}
```
