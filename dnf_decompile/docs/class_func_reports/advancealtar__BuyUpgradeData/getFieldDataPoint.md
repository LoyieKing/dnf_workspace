# getFieldDataPoint

`_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE`

`advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a2e4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a2e4c  _ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE
#           advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
# range [0x088a2e4c, 0x088a2f19]
088a2e4c +0x00:  push   %ebp
088a2e4d +0x01:  mov    %esp,%ebp
088a2e4f +0x03:  sub    $0x28,%esp
088a2e52 +0x06:  mov    0x8(%ebp),%eax
088a2e55 +0x09:  lea    0x1c(%eax),%ecx
088a2e58 +0x0c:  lea    -0x14(%ebp),%eax
088a2e5b +0x0f:  lea    0xc(%ebp),%edx
088a2e5e +0x12:  mov    %edx,0x8(%esp)
088a2e62 +0x16:  mov    %ecx,0x4(%esp)
088a2e66 +0x1a:  mov    %eax,(%esp)
088a2e69 +0x1d:  call   088a43be <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xedc>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xedc
088a2e6e +0x22:  sub    $0x4,%esp
088a2e71 +0x25:  mov    0x8(%ebp),%eax
088a2e74 +0x28:  lea    0x1c(%eax),%edx
088a2e77 +0x2b:  lea    -0x10(%ebp),%eax
088a2e7a +0x2e:  mov    %edx,0x4(%esp)
088a2e7e +0x32:  mov    %eax,(%esp)
088a2e81 +0x35:  call   088a43ea <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf08>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf08
088a2e86 +0x3a:  sub    $0x4,%esp
088a2e89 +0x3d:  lea    -0x10(%ebp),%eax
088a2e8c +0x40:  mov    %eax,0x4(%esp)
088a2e90 +0x44:  lea    -0x14(%ebp),%eax
088a2e93 +0x47:  mov    %eax,(%esp)
088a2e96 +0x4a:  call   088a4410 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf2e>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf2e
088a2e9b +0x4f:  test   %al,%al
088a2e9d +0x51:  je     088a2f13 <+0xc7>
088a2e9f +0x53:  lea    -0x14(%ebp),%eax
088a2ea2 +0x56:  mov    %eax,(%esp)
088a2ea5 +0x59:  call   088a4424 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf42>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf42
088a2eaa +0x5e:  lea    0x4(%eax),%ecx
088a2ead +0x61:  lea    -0x18(%ebp),%eax
088a2eb0 +0x64:  lea    0x10(%ebp),%edx
088a2eb3 +0x67:  mov    %edx,0x8(%esp)
088a2eb7 +0x6b:  mov    %ecx,0x4(%esp)
088a2ebb +0x6f:  mov    %eax,(%esp)
088a2ebe +0x72:  call   088a4432 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf50>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf50
088a2ec3 +0x77:  sub    $0x4,%esp
088a2ec6 +0x7a:  lea    -0x14(%ebp),%eax
088a2ec9 +0x7d:  mov    %eax,(%esp)
088a2ecc +0x80:  call   088a4424 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf42>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf42
088a2ed1 +0x85:  lea    0x4(%eax),%edx
088a2ed4 +0x88:  lea    -0xc(%ebp),%eax
088a2ed7 +0x8b:  mov    %edx,0x4(%esp)
088a2edb +0x8f:  mov    %eax,(%esp)
088a2ede +0x92:  call   088a445e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xf7c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xf7c
088a2ee3 +0x97:  sub    $0x4,%esp
088a2ee6 +0x9a:  lea    -0xc(%ebp),%eax
088a2ee9 +0x9d:  mov    %eax,0x4(%esp)
088a2eed +0xa1:  lea    -0x18(%ebp),%eax
088a2ef0 +0xa4:  mov    %eax,(%esp)
088a2ef3 +0xa7:  call   088a4484 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xfa2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xfa2
088a2ef8 +0xac:  test   %al,%al
088a2efa +0xae:  je     088a2f0c <+0xc0>
088a2efc +0xb0:  lea    -0x18(%ebp),%eax
088a2eff +0xb3:  mov    %eax,(%esp)
088a2f02 +0xb6:  call   088a4498 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xfb6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xfb6
088a2f07 +0xbb:  add    $0x4,%eax
088a2f0a +0xbe:  jmp    088a2f18 <+0xcc>
088a2f0c +0xc0:  mov    $0x0,%eax
088a2f11 +0xc5:  jmp    088a2f18 <+0xcc>
088a2f13 +0xc7:  mov    $0x0,%eax
088a2f18 +0xcc:  leave
088a2f19 +0xcd:  ret
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getFieldDataPoint @ 0x88a2e4c

/* advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T) */

int advancealtar::BuyUpgradeData::getFieldDataPoint(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  local_18 [4];
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_14 [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_10 [12];
  
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->(local_18);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::find(local_1c);
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->(local_18);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>::
            operator!=(local_1c,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
              ::operator->(local_1c);
      iVar2 = iVar2 + 4;
    }
  }
  return iVar2;
}
```
