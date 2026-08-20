# getBuyItem

`_ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i`

`advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>, std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*, int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x08899a3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899a3a  _ZNK12advancealtar16AdvanceAltarData10getBuyItemERKSt3mapIiNS_8_BuyItemESt4lessIiESaISt4pairIKiS2_EEEPS2_i
#           advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>, std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*, int) const
# range [0x08899a3a, 0x08899b4d]
08899a3a +0x000:  push   %ebp
08899a3b +0x001:  mov    %esp,%ebp
08899a3d +0x003:  sub    $0x38,%esp
08899a40 +0x006:  movl   $0x0,-0xc(%ebp)
08899a47 +0x00d:  lea    -0x1c(%ebp),%eax
08899a4a +0x010:  mov    0xc(%ebp),%edx
08899a4d +0x013:  mov    %edx,0x4(%esp)
08899a51 +0x017:  mov    %eax,(%esp)
08899a54 +0x01a:  call   0814289c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xbf0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xbf0
08899a59 +0x01f:  sub    $0x4,%esp
08899a5c +0x022:  jmp    08899b05 <+0xcb>
08899a61 +0x027:  lea    -0x1c(%ebp),%eax
08899a64 +0x02a:  mov    %eax,(%esp)
08899a67 +0x02d:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
08899a6c +0x032:  mov    0x8(%eax),%eax
08899a6f +0x035:  test   %eax,%eax
08899a71 +0x037:  setle  %al
08899a74 +0x03a:  test   %al,%al
08899a76 +0x03c:  je     08899a97 <+0x5d>
08899a78 +0x03e:  lea    -0x14(%ebp),%eax
08899a7b +0x041:  movl   $0x0,0x8(%esp)
08899a83 +0x049:  lea    -0x1c(%ebp),%edx
08899a86 +0x04c:  mov    %edx,0x4(%esp)
08899a8a +0x050:  mov    %eax,(%esp)
08899a8d +0x053:  call   081428c2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc16>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc16
08899a92 +0x058:  sub    $0x4,%esp
08899a95 +0x05b:  jmp    08899b05 <+0xcb>
08899a97 +0x05d:  mov    -0xc(%ebp),%edx
08899a9a +0x060:  mov    %edx,%eax
08899a9c +0x062:  add    %eax,%eax
08899a9e +0x064:  add    %edx,%eax
08899aa0 +0x066:  shl    $0x2,%eax
08899aa3 +0x069:  add    0x10(%ebp),%eax
08899aa6 +0x06c:  mov    0x4(%eax),%eax
08899aa9 +0x06f:  test   %eax,%eax
08899aab +0x071:  jle    08899ab3 <+0x79>
08899aad +0x073:  addl   $0x1,-0xc(%ebp)
08899ab1 +0x077:  jmp    08899b05 <+0xcb>
08899ab3 +0x079:  lea    -0x1c(%ebp),%eax
08899ab6 +0x07c:  mov    %eax,(%esp)
08899ab9 +0x07f:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
08899abe +0x084:  lea    0x4(%eax),%ecx
08899ac1 +0x087:  mov    -0xc(%ebp),%edx
08899ac4 +0x08a:  mov    %edx,%eax
08899ac6 +0x08c:  add    %eax,%eax
08899ac8 +0x08e:  add    %edx,%eax
08899aca +0x090:  shl    $0x2,%eax
08899acd +0x093:  add    0x10(%ebp),%eax
08899ad0 +0x096:  movl   $0xc,0x8(%esp)
08899ad8 +0x09e:  mov    %ecx,0x4(%esp)
08899adc +0x0a2:  mov    %eax,(%esp)
08899adf +0x0a5:  call   0807d8a0 <_init+0x198>
08899ae4 +0x0aa:  lea    -0x10(%ebp),%eax
08899ae7 +0x0ad:  movl   $0x0,0x8(%esp)
08899aef +0x0b5:  lea    -0x1c(%ebp),%edx
08899af2 +0x0b8:  mov    %edx,0x4(%esp)
08899af6 +0x0bc:  mov    %eax,(%esp)
08899af9 +0x0bf:  call   081428c2 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xc16>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xc16
08899afe +0x0c4:  sub    $0x4,%esp
08899b01 +0x0c7:  addl   $0x1,-0xc(%ebp)
08899b05 +0x0cb:  lea    -0x18(%ebp),%eax
08899b08 +0x0ce:  mov    0xc(%ebp),%edx
08899b0b +0x0d1:  mov    %edx,0x4(%esp)
08899b0f +0x0d5:  mov    %eax,(%esp)
08899b12 +0x0d8:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
08899b17 +0x0dd:  sub    $0x4,%esp
08899b1a +0x0e0:  lea    -0x18(%ebp),%eax
08899b1d +0x0e3:  mov    %eax,0x4(%esp)
08899b21 +0x0e7:  lea    -0x1c(%ebp),%eax
08899b24 +0x0ea:  mov    %eax,(%esp)
08899b27 +0x0ed:  call   081363a2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fa9
08899b2c +0x0f2:  test   %al,%al
08899b2e +0x0f4:  je     08899b3f <+0x105>
08899b30 +0x0f6:  mov    -0xc(%ebp),%eax
08899b33 +0x0f9:  cmp    0x14(%ebp),%eax
08899b36 +0x0fc:  jge    08899b3f <+0x105>
08899b38 +0x0fe:  mov    $0x1,%eax
08899b3d +0x103:  jmp    08899b44 <+0x10a>
08899b3f +0x105:  mov    $0x0,%eax
08899b44 +0x10a:  test   %al,%al
08899b46 +0x10c:  jne    08899a61 <+0x27>
08899b4c +0x112:  leave
08899b4d +0x113:  ret
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::getBuyItem @ 0x8899a3a

/* advancealtar::AdvanceAltarData::getBuyItem(std::map<int, advancealtar::_BuyItem, std::less<int>,
   std::allocator<std::pair<int const, advancealtar::_BuyItem> > > const&, advancealtar::_BuyItem*,
   int) const */

void __thiscall
advancealtar::AdvanceAltarData::getBuyItem
          (AdvanceAltarData *this,map *param_1,_BuyItem *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_20 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_20,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 == '\0') || (param_3 <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                       local_20);
    if (*(int *)(iVar3 + 8) < 1) {
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
                (local_18,(int)local_20);
    }
    else if (*(int *)(param_2 + local_10 * 0xc + 4) < 1) {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> *)
                         local_20);
      memcpy(param_2 + local_10 * 0xc,(void *)(iVar3 + 4),0xc);
      std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator++
                (local_14,(int)local_20);
      local_10 = local_10 + 1;
    }
    else {
      local_10 = local_10 + 1;
    }
  }
  return;
}
```
