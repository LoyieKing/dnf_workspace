# getBuyUpgradeDataVec

`_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE`

`advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a0fe8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a0fe8  _ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE
#           advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)
# range [0x088a0fe8, 0x088a105b]
088a0fe8 +0x00:  push   %ebp
088a0fe9 +0x01:  mov    %esp,%ebp
088a0feb +0x03:  sub    $0x28,%esp
088a0fee +0x06:  mov    0x8(%ebp),%edx
088a0ff1 +0x09:  lea    -0x10(%ebp),%eax
088a0ff4 +0x0c:  lea    0xc(%ebp),%ecx
088a0ff7 +0x0f:  mov    %ecx,0x8(%esp)
088a0ffb +0x13:  mov    %edx,0x4(%esp)
088a0fff +0x17:  mov    %eax,(%esp)
088a1002 +0x1a:  call   088a3b6c <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x68a>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x68a
088a1007 +0x1f:  sub    $0x4,%esp
088a100a +0x22:  mov    0x8(%ebp),%edx
088a100d +0x25:  lea    -0xc(%ebp),%eax
088a1010 +0x28:  mov    %edx,0x4(%esp)
088a1014 +0x2c:  mov    %eax,(%esp)
088a1017 +0x2f:  call   088a3b98 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x6b6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x6b6
088a101c +0x34:  sub    $0x4,%esp
088a101f +0x37:  lea    -0xc(%ebp),%eax
088a1022 +0x3a:  mov    %eax,0x4(%esp)
088a1026 +0x3e:  lea    -0x10(%ebp),%eax
088a1029 +0x41:  mov    %eax,(%esp)
088a102c +0x44:  call   088a3bbe <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x6dc>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x6dc
088a1031 +0x49:  test   %al,%al
088a1033 +0x4b:  je     088a1054 <+0x6c>
088a1035 +0x4d:  lea    -0x10(%ebp),%eax
088a1038 +0x50:  mov    %eax,(%esp)
088a103b +0x53:  call   088a3bd2 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x6f0>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x6f0
088a1040 +0x58:  lea    0x4(%eax),%edx
088a1043 +0x5b:  mov    0x10(%ebp),%eax
088a1046 +0x5e:  mov    %eax,0x4(%esp)
088a104a +0x62:  mov    %edx,(%esp)
088a104d +0x65:  call   088a105c <_ZN12advancealtar11BuyShopData20getBuyUpgradeDataVecENS_20AdvanceAltarShopType1TE>  ; advancealtar::BuyShopData::getBuyUpgradeDataVec(advancealtar::AdvanceAltarShopType::T)
088a1052 +0x6a:  jmp    088a1059 <+0x71>
088a1054 +0x6c:  mov    $0x0,%eax
088a1059 +0x71:  leave
088a105a +0x72:  ret
088a105b +0x73:  nop
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec @ 0x88a0fe8

/* advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int,
   advancealtar::AdvanceAltarShopType::T) */

undefined4 __thiscall
advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec
          (undefined4 this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::BuyShopData>> local_14 [4];
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  local_10 [12];
  
  puVar4 = (undefined1 *)&param_1;
  std::
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  ::find((int *)local_14);
  std::
  map<int,advancealtar::BuyShopData,std::less<int>,std::allocator<std::pair<int_const,advancealtar::BuyShopData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::BuyShopData>>::operator->
                      (local_14);
    uVar3 = BuyShopData::getBuyUpgradeDataVec((BuyShopData *)(iVar2 + 4),param_3,puVar4);
  }
  return uVar3;
}
```
