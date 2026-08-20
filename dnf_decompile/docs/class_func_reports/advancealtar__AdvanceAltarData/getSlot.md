# getSlot

`_ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i`

`advancealtar::AdvanceAltarData::getSlot(std::map<unsigned char, advancealtar::_Slot, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_Slot> > > const&, advancealtar::_Slot*, int) const`

| 类 | 地址 |
|---|---|
| `advancealtar::AdvanceAltarData` | `0x08899b4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08899b4e  _ZNK12advancealtar16AdvanceAltarData7getSlotERKSt3mapIhNS_5_SlotESt4lessIhESaISt4pairIKhS2_EEEPS2_i
#           advancealtar::AdvanceAltarData::getSlot(std::map<unsigned char, advancealtar::_Slot, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_Slot> > > const&, advancealtar::_Slot*, int) const
# range [0x08899b4e, 0x08899c61]
08899b4e +0x000:  push   %ebp
08899b4f +0x001:  mov    %esp,%ebp
08899b51 +0x003:  sub    $0x38,%esp
08899b54 +0x006:  movl   $0x0,-0xc(%ebp)
08899b5b +0x00d:  lea    -0x1c(%ebp),%eax
08899b5e +0x010:  mov    0xc(%ebp),%edx
08899b61 +0x013:  mov    %edx,0x4(%esp)
08899b65 +0x017:  mov    %eax,(%esp)
08899b68 +0x01a:  call   081362f6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1efd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1efd
08899b6d +0x01f:  sub    $0x4,%esp
08899b70 +0x022:  jmp    08899c19 <+0xcb>
08899b75 +0x027:  lea    -0x1c(%ebp),%eax
08899b78 +0x02a:  mov    %eax,(%esp)
08899b7b +0x02d:  call   08136394 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f9b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f9b
08899b80 +0x032:  mov    0x2(%eax),%eax
08899b83 +0x035:  test   %eax,%eax
08899b85 +0x037:  sete   %al
08899b88 +0x03a:  test   %al,%al
08899b8a +0x03c:  je     08899bab <+0x5d>
08899b8c +0x03e:  lea    -0x14(%ebp),%eax
08899b8f +0x041:  movl   $0x0,0x8(%esp)
08899b97 +0x049:  lea    -0x1c(%ebp),%edx
08899b9a +0x04c:  mov    %edx,0x4(%esp)
08899b9e +0x050:  mov    %eax,(%esp)
08899ba1 +0x053:  call   08136356 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f5d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f5d
08899ba6 +0x058:  sub    $0x4,%esp
08899ba9 +0x05b:  jmp    08899c19 <+0xcb>
08899bab +0x05d:  mov    -0xc(%ebp),%edx
08899bae +0x060:  mov    %edx,%eax
08899bb0 +0x062:  shl    $0x2,%eax
08899bb3 +0x065:  add    %edx,%eax
08899bb5 +0x067:  add    %eax,%eax
08899bb7 +0x069:  add    0x10(%ebp),%eax
08899bba +0x06c:  mov    0x1(%eax),%eax
08899bbd +0x06f:  test   %eax,%eax
08899bbf +0x071:  je     08899bc7 <+0x79>
08899bc1 +0x073:  addl   $0x1,-0xc(%ebp)
08899bc5 +0x077:  jmp    08899c19 <+0xcb>
08899bc7 +0x079:  lea    -0x1c(%ebp),%eax
08899bca +0x07c:  mov    %eax,(%esp)
08899bcd +0x07f:  call   08136394 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f9b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f9b
08899bd2 +0x084:  lea    0x1(%eax),%ecx
08899bd5 +0x087:  mov    -0xc(%ebp),%edx
08899bd8 +0x08a:  mov    %edx,%eax
08899bda +0x08c:  shl    $0x2,%eax
08899bdd +0x08f:  add    %edx,%eax
08899bdf +0x091:  add    %eax,%eax
08899be1 +0x093:  add    0x10(%ebp),%eax
08899be4 +0x096:  movl   $0xa,0x8(%esp)
08899bec +0x09e:  mov    %ecx,0x4(%esp)
08899bf0 +0x0a2:  mov    %eax,(%esp)
08899bf3 +0x0a5:  call   0807d8a0 <_init+0x198>
08899bf8 +0x0aa:  lea    -0x10(%ebp),%eax
08899bfb +0x0ad:  movl   $0x0,0x8(%esp)
08899c03 +0x0b5:  lea    -0x1c(%ebp),%edx
08899c06 +0x0b8:  mov    %edx,0x4(%esp)
08899c0a +0x0bc:  mov    %eax,(%esp)
08899c0d +0x0bf:  call   08136356 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f5d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f5d
08899c12 +0x0c4:  sub    $0x4,%esp
08899c15 +0x0c7:  addl   $0x1,-0xc(%ebp)
08899c19 +0x0cb:  lea    -0x18(%ebp),%eax
08899c1c +0x0ce:  mov    0xc(%ebp),%edx
08899c1f +0x0d1:  mov    %edx,0x4(%esp)
08899c23 +0x0d5:  mov    %eax,(%esp)
08899c26 +0x0d8:  call   0813631c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f23>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f23
08899c2b +0x0dd:  sub    $0x4,%esp
08899c2e +0x0e0:  lea    -0x18(%ebp),%eax
08899c31 +0x0e3:  mov    %eax,0x4(%esp)
08899c35 +0x0e7:  lea    -0x1c(%ebp),%eax
08899c38 +0x0ea:  mov    %eax,(%esp)
08899c3b +0x0ed:  call   08136342 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1f49>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1f49
08899c40 +0x0f2:  test   %al,%al
08899c42 +0x0f4:  je     08899c53 <+0x105>
08899c44 +0x0f6:  mov    -0xc(%ebp),%eax
08899c47 +0x0f9:  cmp    0x14(%ebp),%eax
08899c4a +0x0fc:  jge    08899c53 <+0x105>
08899c4c +0x0fe:  mov    $0x1,%eax
08899c51 +0x103:  jmp    08899c58 <+0x10a>
08899c53 +0x105:  mov    $0x0,%eax
08899c58 +0x10a:  test   %al,%al
08899c5a +0x10c:  jne    08899b75 <+0x27>
08899c60 +0x112:  leave
08899c61 +0x113:  ret
```

## 反编译 C

```c
// advancealtar::AdvanceAltarData::getSlot @ 0x8899b4e

/* advancealtar::AdvanceAltarData::getSlot(std::map<unsigned char, advancealtar::_Slot,
   std::less<unsigned char>, std::allocator<std::pair<unsigned char const, advancealtar::_Slot> > >
   const&, advancealtar::_Slot*, int) const */

void __thiscall
advancealtar::AdvanceAltarData::getSlot
          (AdvanceAltarData *this,map *param_1,_Slot *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_20 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_1c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  ::begin(local_20);
  while( true ) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator!=((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_20,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 == '\0') || (param_3 <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                        *)local_20);
    if (*(int *)(iVar3 + 2) == 0) {
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_18,(int)local_20);
    }
    else if (*(int *)(param_2 + local_10 * 10 + 1) == 0) {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
              operator->((_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                          *)local_20);
      memcpy(param_2 + local_10 * 10,(void *)(iVar3 + 1),10);
      std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
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
