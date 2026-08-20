# setUnlockItemToEmptySlot

`_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi`

`advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot(advancealtar::AdvanceAltarShopType::T, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132234` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132234  _ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi
#           advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot(advancealtar::AdvanceAltarShopType::T, int)
# range [0x08132234, 0x0813234d]
08132234 +0x000:  push   %ebp
08132235 +0x001:  mov    %esp,%ebp
08132237 +0x003:  sub    $0x38,%esp
0813223a +0x006:  mov    0xc(%ebp),%eax
0813223d +0x009:  test   %eax,%eax
0813223f +0x00b:  je     0813224b <+0x17>
08132241 +0x00d:  cmp    $0x1,%eax
08132244 +0x010:  je     08132254 <+0x20>
08132246 +0x012:  jmp    0813234b <+0x117>
0813224b +0x017:  movl   $0x1,-0x14(%ebp)
08132252 +0x01e:  jmp    0813225c <+0x28>
08132254 +0x020:  movl   $0x2,-0x14(%ebp)
0813225b +0x027:  nop
0813225c +0x028:  mov    0x8(%ebp),%eax
0813225f +0x02b:  mov    (%eax),%eax
08132261 +0x02d:  mov    %eax,-0x10(%ebp)
08132264 +0x030:  cmpl   $0x0,-0x10(%ebp)
08132268 +0x034:  je     08132347 <+0x113>
0813226e +0x03a:  mov    -0x14(%ebp),%eax
08132271 +0x03d:  mov    %eax,0x4(%esp)
08132275 +0x041:  mov    -0x10(%ebp),%eax
08132278 +0x044:  mov    %eax,(%esp)
0813227b +0x047:  call   08899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>  ; advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T)
08132280 +0x04c:  mov    %eax,-0xc(%ebp)
08132283 +0x04f:  cmpl   $0x0,-0xc(%ebp)
08132287 +0x053:  je     0813234a <+0x116>
0813228d +0x059:  lea    -0x20(%ebp),%eax
08132290 +0x05c:  mov    -0xc(%ebp),%edx
08132293 +0x05f:  mov    %edx,0x4(%esp)
08132297 +0x063:  mov    %eax,(%esp)
0813229a +0x066:  call   081361c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1dc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1dc9
0813229f +0x06b:  sub    $0x4,%esp
081322a2 +0x06e:  jmp    08132316 <+0xe2>
081322a4 +0x070:  lea    -0x20(%ebp),%eax
081322a7 +0x073:  mov    %eax,(%esp)
081322aa +0x076:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
081322af +0x07b:  movzbl 0x1(%eax),%eax
081322b3 +0x07f:  xor    $0x1,%eax
081322b6 +0x082:  test   %al,%al
081322b8 +0x084:  je     081322d3 <+0x9f>
081322ba +0x086:  lea    -0x20(%ebp),%eax
081322bd +0x089:  mov    %eax,(%esp)
081322c0 +0x08c:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
081322c5 +0x091:  mov    0x7(%eax),%eax
081322c8 +0x094:  test   %eax,%eax
081322ca +0x096:  jne    081322d3 <+0x9f>
081322cc +0x098:  mov    $0x1,%eax
081322d1 +0x09d:  jmp    081322d8 <+0xa4>
081322d3 +0x09f:  mov    $0x0,%eax
081322d8 +0x0a4:  test   %al,%al
081322da +0x0a6:  je     081322f9 <+0xc5>
081322dc +0x0a8:  lea    -0x20(%ebp),%eax
081322df +0x0ab:  mov    %eax,(%esp)
081322e2 +0x0ae:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
081322e7 +0x0b3:  mov    0x10(%ebp),%edx
081322ea +0x0b6:  mov    %edx,0x7(%eax)
081322ed +0x0b9:  mov    -0x10(%ebp),%eax
081322f0 +0x0bc:  movb   $0x1,0xcc(%eax)
081322f7 +0x0c3:  jmp    0813234b <+0x117>
081322f9 +0x0c5:  lea    -0x18(%ebp),%eax
081322fc +0x0c8:  movl   $0x0,0x8(%esp)
08132304 +0x0d0:  lea    -0x20(%ebp),%edx
08132307 +0x0d3:  mov    %edx,0x4(%esp)
0813230b +0x0d7:  mov    %eax,(%esp)
0813230e +0x0da:  call   08136222 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e29>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e29
08132313 +0x0df:  sub    $0x4,%esp
08132316 +0x0e2:  lea    -0x1c(%ebp),%eax
08132319 +0x0e5:  mov    -0xc(%ebp),%edx
0813231c +0x0e8:  mov    %edx,0x4(%esp)
08132320 +0x0ec:  mov    %eax,(%esp)
08132323 +0x0ef:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08132328 +0x0f4:  sub    $0x4,%esp
0813232b +0x0f7:  lea    -0x1c(%ebp),%eax
0813232e +0x0fa:  mov    %eax,0x4(%esp)
08132332 +0x0fe:  lea    -0x20(%ebp),%eax
08132335 +0x101:  mov    %eax,(%esp)
08132338 +0x104:  call   0813620e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e15>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e15
0813233d +0x109:  test   %al,%al
0813233f +0x10b:  jne    081322a4 <+0x70>
08132345 +0x111:  jmp    0813234b <+0x117>
08132347 +0x113:  nop
08132348 +0x114:  jmp    0813234b <+0x117>
0813234a +0x116:  nop
0813234b +0x117:  leave
0813234c +0x118:  ret
0813234d +0x119:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot @ 0x8132234

/* advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot(advancealtar::AdvanceAltarShopType::T,
   int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot
          (CharacAdvanceAltarManager *this,int param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_24 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_1c [4];
  undefined4 local_18;
  AdvanceAltarData *local_14;
  int local_10;
  
  if (param_2 == 0) {
    local_18 = 1;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    local_18 = 2;
  }
  local_14 = *(AdvanceAltarData **)this;
  if ((local_14 != (AdvanceAltarData *)0x0) &&
     (local_10 = AdvanceAltarData::getSlotMap(local_14,local_18), local_10 != 0)) {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                         local_24,(_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                         local_24);
      if ((*(char *)(iVar3 + 1) == '\x01') ||
         (iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                  operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>
                              *)local_24), *(int *)(iVar3 + 7) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> *)
                           local_24);
        *(undefined4 *)(iVar3 + 7) = param_3;
        local_14[0xcc] = (AdvanceAltarData)0x1;
        return;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator++
                (local_1c,(int)local_24);
    }
  }
  return;
}
```
