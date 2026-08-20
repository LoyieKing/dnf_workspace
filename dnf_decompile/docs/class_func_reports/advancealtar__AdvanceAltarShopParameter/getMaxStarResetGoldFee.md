# getMaxStarResetGoldFee

`_ZN12advancealtar25AdvanceAltarShopParameter22getMaxStarResetGoldFeeEv`

`advancealtar::AdvanceAltarShopParameter::getMaxStarResetGoldFee()`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarShopParameter` | `0x088a2bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088a2bc0  _ZN12advancealtar25AdvanceAltarShopParameter22getMaxStarResetGoldFeeEv
#           advancealtar::AdvanceAltarShopParameter::getMaxStarResetGoldFee()
# range [0x088a2bc0, 0x088a2c61]
088a2bc0 +0x00:  push   %ebp
088a2bc1 +0x01:  mov    %esp,%ebp
088a2bc3 +0x03:  sub    $0x28,%esp
088a2bc6 +0x06:  movl   $0x0,-0x10(%ebp)
088a2bcd +0x0d:  mov    0x8(%ebp),%eax
088a2bd0 +0x10:  lea    0x18(%eax),%edx
088a2bd3 +0x13:  lea    -0x14(%ebp),%eax
088a2bd6 +0x16:  mov    %edx,0x4(%esp)
088a2bda +0x1a:  mov    %eax,(%esp)
088a2bdd +0x1d:  call   088a4238 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xd56>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xd56
088a2be2 +0x22:  sub    $0x4,%esp
088a2be5 +0x25:  jmp    088a2c1b <+0x5b>
088a2be7 +0x27:  lea    -0x14(%ebp),%eax
088a2bea +0x2a:  mov    %eax,(%esp)
088a2bed +0x2d:  call   088a4298 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xdb6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xdb6
088a2bf2 +0x32:  mov    (%eax),%edx
088a2bf4 +0x34:  mov    -0x10(%ebp),%eax
088a2bf7 +0x37:  cmp    %eax,%edx
088a2bf9 +0x39:  setg   %al
088a2bfc +0x3c:  test   %al,%al
088a2bfe +0x3e:  je     088a2c10 <+0x50>
088a2c00 +0x40:  lea    -0x14(%ebp),%eax
088a2c03 +0x43:  mov    %eax,(%esp)
088a2c06 +0x46:  call   088a4298 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xdb6>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xdb6
088a2c0b +0x4b:  mov    (%eax),%eax
088a2c0d +0x4d:  mov    %eax,-0x10(%ebp)
088a2c10 +0x50:  lea    -0x14(%ebp),%eax
088a2c13 +0x53:  mov    %eax,(%esp)
088a2c16 +0x56:  call   088a42a6 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xdc4>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xdc4
088a2c1b +0x5b:  mov    0x8(%ebp),%eax
088a2c1e +0x5e:  lea    0x18(%eax),%edx
088a2c21 +0x61:  lea    -0xc(%ebp),%eax
088a2c24 +0x64:  mov    %edx,0x4(%esp)
088a2c28 +0x68:  mov    %eax,(%esp)
088a2c2b +0x6b:  call   088a425e <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xd7c>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xd7c
088a2c30 +0x70:  sub    $0x4,%esp
088a2c33 +0x73:  lea    -0xc(%ebp),%eax
088a2c36 +0x76:  mov    %eax,0x4(%esp)
088a2c3a +0x7a:  lea    -0x14(%ebp),%eax
088a2c3d +0x7d:  mov    %eax,(%esp)
088a2c40 +0x80:  call   088a4284 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xda2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xda2
088a2c45 +0x85:  test   %al,%al
088a2c47 +0x87:  jne    088a2be7 <+0x27>
088a2c49 +0x89:  mov    0x8(%ebp),%eax
088a2c4c +0x8c:  lea    0x18(%eax),%edx
088a2c4f +0x8f:  lea    -0x10(%ebp),%eax
088a2c52 +0x92:  mov    %eax,0x4(%esp)
088a2c56 +0x96:  mov    %edx,(%esp)
088a2c59 +0x99:  call   088a42c4 <_GLOBAL__I__ZN12advancealtar25AdvanceAltarShopParameterC2Ev+0xde2>  ; global constructors keyed to advancealtar::AdvanceAltarShopParameter::AdvanceAltarShopParameter()+0xde2
088a2c5e +0x9e:  mov    (%eax),%eax
088a2c60 +0xa0:  leave
088a2c61 +0xa1:  ret
```

## 反编译 C

```c
// advancealtar::AdvanceAltarShopParameter::getMaxStarResetGoldFee @ 0x88a2bc0

/* advancealtar::AdvanceAltarShopParameter::getMaxStarResetGoldFee() */

undefined4 __thiscall
advancealtar::AdvanceAltarShopParameter::getMaxStarResetGoldFee(AdvanceAltarShopParameter *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  local_18 [4];
  int local_14;
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  local_10 [12];
  
  local_14 = 0;
  std::
  map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::
            operator!=((_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>> *)
                       local_18,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::
                    operator->((_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>
                                *)local_18);
    if (local_14 < *piVar2) {
      piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>
                                    *)local_18);
      local_14 = *piVar2;
    }
    std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,advancealtar::_StarRestFeeByGold>> *)local_18)
    ;
  }
  puVar3 = (undefined4 *)
           std::
           map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
           ::operator[]((map<int,advancealtar::_StarRestFeeByGold,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_StarRestFeeByGold>>>
                         *)(this + 0x18),&local_14);
  return *puVar3;
}
```
