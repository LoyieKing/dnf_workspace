# getMinLevel

`_ZNK12advancealtar14BuyUpgradeData11getMinLevelEv`

`advancealtar::BuyUpgradeData::getMinLevel() const`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a33c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a33c0  _ZNK12advancealtar14BuyUpgradeData11getMinLevelEv
#           advancealtar::BuyUpgradeData::getMinLevel() const
# range [0x088a33c0, 0x088a345d]
088a33c0 +0x00:  push   %ebp
088a33c1 +0x01:  mov    %esp,%ebp
088a33c3 +0x03:  sub    $0x28,%esp
088a33c6 +0x06:  movl   $0x0,-0xc(%ebp)
088a33cd +0x0d:  mov    0x8(%ebp),%eax
088a33d0 +0x10:  lea    0x1c(%eax),%edx
088a33d3 +0x13:  lea    -0x18(%ebp),%eax
088a33d6 +0x16:  mov    %edx,0x4(%esp)
088a33da +0x1a:  mov    %eax,(%esp)
088a33dd +0x1d:  call   088a457a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1098>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1098
088a33e2 +0x22:  sub    $0x4,%esp
088a33e5 +0x25:  jmp    088a342b <+0x6b>
088a33e7 +0x27:  lea    -0x18(%ebp),%eax
088a33ea +0x2a:  mov    %eax,(%esp)
088a33ed +0x2d:  call   088a4618 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1136>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1136
088a33f2 +0x32:  mov    (%eax),%eax
088a33f4 +0x34:  cmp    -0xc(%ebp),%eax
088a33f7 +0x37:  setl   %al
088a33fa +0x3a:  test   %al,%al
088a33fc +0x3c:  je     088a340e <+0x4e>
088a33fe +0x3e:  lea    -0x18(%ebp),%eax
088a3401 +0x41:  mov    %eax,(%esp)
088a3404 +0x44:  call   088a4618 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1136>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1136
088a3409 +0x49:  mov    (%eax),%eax
088a340b +0x4b:  mov    %eax,-0xc(%ebp)
088a340e +0x4e:  lea    -0x10(%ebp),%eax
088a3411 +0x51:  movl   $0x0,0x8(%esp)
088a3419 +0x59:  lea    -0x18(%ebp),%edx
088a341c +0x5c:  mov    %edx,0x4(%esp)
088a3420 +0x60:  mov    %eax,(%esp)
088a3423 +0x63:  call   088a45da <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x10f8>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x10f8
088a3428 +0x68:  sub    $0x4,%esp
088a342b +0x6b:  mov    0x8(%ebp),%eax
088a342e +0x6e:  lea    0x1c(%eax),%edx
088a3431 +0x71:  lea    -0x14(%ebp),%eax
088a3434 +0x74:  mov    %edx,0x4(%esp)
088a3438 +0x78:  mov    %eax,(%esp)
088a343b +0x7b:  call   088a45a0 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x10be>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x10be
088a3440 +0x80:  sub    $0x4,%esp
088a3443 +0x83:  lea    -0x14(%ebp),%eax
088a3446 +0x86:  mov    %eax,0x4(%esp)
088a344a +0x8a:  lea    -0x18(%ebp),%eax
088a344d +0x8d:  mov    %eax,(%esp)
088a3450 +0x90:  call   088a45c6 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x10e4>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x10e4
088a3455 +0x95:  test   %al,%al
088a3457 +0x97:  jne    088a33e7 <+0x27>
088a3459 +0x99:  mov    -0xc(%ebp),%eax
088a345c +0x9c:  leave
088a345d +0x9d:  ret
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getMinLevel @ 0x88a33c0

/* advancealtar::BuyUpgradeData::getMinLevel() const */

int advancealtar::BuyUpgradeData::getMinLevel(void)

{
  char cVar1;
  int *piVar2;
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_1c [4];
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                          *)local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::
                    _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                    ::operator*((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                                 *)local_1c);
    if (*piVar2 < local_10) {
      piVar2 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                      ::operator*((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                                   *)local_1c);
      local_10 = *piVar2;
    }
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}
```
