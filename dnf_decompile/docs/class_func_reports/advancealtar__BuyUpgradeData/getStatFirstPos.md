# getStatFirstPos

`_ZNK12advancealtar14BuyUpgradeData15getStatFirstPosEv`

`advancealtar::BuyUpgradeData::getStatFirstPos() const`

| 类 | 地址 |
|---|---|
| `advancealtar::BuyUpgradeData` | `0x088a2f7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a2f7a  _ZNK12advancealtar14BuyUpgradeData15getStatFirstPosEv
#           advancealtar::BuyUpgradeData::getStatFirstPos() const
# range [0x088a2f7a, 0x088a3011]
088a2f7a +0x00:  push   %ebp
088a2f7b +0x01:  mov    %esp,%ebp
088a2f7d +0x03:  sub    $0x28,%esp
088a2f80 +0x06:  movl   $0x0,-0xc(%ebp)
088a2f87 +0x0d:  mov    0x8(%ebp),%eax
088a2f8a +0x10:  lea    0x10(%eax),%edx
088a2f8d +0x13:  lea    -0x18(%ebp),%eax
088a2f90 +0x16:  mov    %edx,0x4(%esp)
088a2f94 +0x1a:  mov    %eax,(%esp)
088a2f97 +0x1d:  call   088a44a6 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xfc4>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xfc4
088a2f9c +0x22:  sub    $0x4,%esp
088a2f9f +0x25:  jmp    088a2fdc <+0x62>
088a2fa1 +0x27:  lea    -0x18(%ebp),%eax
088a2fa4 +0x2a:  mov    %eax,(%esp)
088a2fa7 +0x2d:  call   088a452a <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1048>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1048
088a2fac +0x32:  mov    (%eax),%eax
088a2fae +0x34:  sub    $0xa,%eax
088a2fb1 +0x37:  cmp    $0xe,%eax
088a2fb4 +0x3a:  ja     088a2fbb <+0x41>
088a2fb6 +0x3c:  mov    -0xc(%ebp),%eax
088a2fb9 +0x3f:  jmp    088a300f <+0x95>
088a2fbb +0x41:  addl   $0x1,-0xc(%ebp)
088a2fbf +0x45:  lea    -0x10(%ebp),%eax
088a2fc2 +0x48:  movl   $0x0,0x8(%esp)
088a2fca +0x50:  lea    -0x18(%ebp),%edx
088a2fcd +0x53:  mov    %edx,0x4(%esp)
088a2fd1 +0x57:  mov    %eax,(%esp)
088a2fd4 +0x5a:  call   088a4534 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x1052>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x1052
088a2fd9 +0x5f:  sub    $0x4,%esp
088a2fdc +0x62:  mov    0x8(%ebp),%eax
088a2fdf +0x65:  lea    0x10(%eax),%edx
088a2fe2 +0x68:  lea    -0x14(%ebp),%eax
088a2fe5 +0x6b:  mov    %edx,0x4(%esp)
088a2fe9 +0x6f:  mov    %eax,(%esp)
088a2fec +0x72:  call   088a44d2 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xff0>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xff0
088a2ff1 +0x77:  sub    $0x4,%esp
088a2ff4 +0x7a:  lea    -0x14(%ebp),%eax
088a2ff7 +0x7d:  mov    %eax,0x4(%esp)
088a2ffb +0x81:  lea    -0x18(%ebp),%eax
088a2ffe +0x84:  mov    %eax,(%esp)
088a3001 +0x87:  call   088a44fe <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0x101c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0x101c
088a3006 +0x8c:  test   %al,%al
088a3008 +0x8e:  jne    088a2fa1 <+0x27>
088a300a +0x90:  mov    $0xffffffff,%eax
088a300f +0x95:  leave
088a3010 +0x96:  ret
088a3011 +0x97:  nop
```

## 反编译 C

```c
// advancealtar::BuyUpgradeData::getStatFirstPos @ 0x88a2f7a

/* advancealtar::BuyUpgradeData::getStatFirstPos() const */

int advancealtar::BuyUpgradeData::getStatFirstPos(void)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::begin();
  while( true ) {
    std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return -1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
                    ::operator*(local_1c);
    if (*piVar2 - 10U < 0xf) break;
    local_10 = local_10 + 1;
    __gnu_cxx::
    __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}
```
