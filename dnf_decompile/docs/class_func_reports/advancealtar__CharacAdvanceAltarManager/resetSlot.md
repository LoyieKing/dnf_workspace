# resetSlot

`_ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE`

`advancealtar::CharacAdvanceAltarManager::resetSlot(advancealtar::AdvanceAltarData&, CMDPacketStruct::_SetSlotData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132bfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132bfa  _ZN12advancealtar25CharacAdvanceAltarManager9resetSlotERNS_16AdvanceAltarDataERKN15CMDPacketStruct12_SetSlotDataE
#           advancealtar::CharacAdvanceAltarManager::resetSlot(advancealtar::AdvanceAltarData&, CMDPacketStruct::_SetSlotData const&)
# range [0x08132bfa, 0x08132cb7]
08132bfa +0x00:  push   %ebp
08132bfb +0x01:  mov    %esp,%ebp
08132bfd +0x03:  sub    $0x28,%esp
08132c00 +0x06:  mov    0x10(%ebp),%eax
08132c03 +0x09:  mov    (%eax),%eax
08132c05 +0x0b:  mov    %eax,0x4(%esp)
08132c09 +0x0f:  mov    0xc(%ebp),%eax
08132c0c +0x12:  mov    %eax,(%esp)
08132c0f +0x15:  call   08899a0c <_ZN12advancealtar16AdvanceAltarData10getSlotMapENS_20AdvanceAltarSlotType1TE>  ; advancealtar::AdvanceAltarData::getSlotMap(advancealtar::AdvanceAltarSlotType::T)
08132c14 +0x1a:  mov    %eax,-0xc(%ebp)
08132c17 +0x1d:  cmpl   $0x0,-0xc(%ebp)
08132c1b +0x21:  jne    08132c27 <+0x2d>
08132c1d +0x23:  mov    $0x3,%eax
08132c22 +0x28:  jmp    08132cb6 <+0xbc>
08132c27 +0x2d:  mov    0x10(%ebp),%eax
08132c2a +0x30:  lea    0x4(%eax),%edx
08132c2d +0x33:  lea    -0x14(%ebp),%eax
08132c30 +0x36:  mov    %edx,0x8(%esp)
08132c34 +0x3a:  mov    -0xc(%ebp),%edx
08132c37 +0x3d:  mov    %edx,0x4(%esp)
08132c3b +0x41:  mov    %eax,(%esp)
08132c3e +0x44:  call   0813650e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2115>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2115
08132c43 +0x49:  sub    $0x4,%esp
08132c46 +0x4c:  lea    -0x10(%ebp),%eax
08132c49 +0x4f:  mov    -0xc(%ebp),%edx
08132c4c +0x52:  mov    %edx,0x4(%esp)
08132c50 +0x56:  mov    %eax,(%esp)
08132c53 +0x59:  call   081361e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1def>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1def
08132c58 +0x5e:  sub    $0x4,%esp
08132c5b +0x61:  lea    -0x10(%ebp),%eax
08132c5e +0x64:  mov    %eax,0x4(%esp)
08132c62 +0x68:  lea    -0x14(%ebp),%eax
08132c65 +0x6b:  mov    %eax,(%esp)
08132c68 +0x6e:  call   0813626e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e75>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e75
08132c6d +0x73:  test   %al,%al
08132c6f +0x75:  je     08132c78 <+0x7e>
08132c71 +0x77:  mov    $0x2,%eax
08132c76 +0x7c:  jmp    08132cb6 <+0xbc>
08132c78 +0x7e:  lea    -0x14(%ebp),%eax
08132c7b +0x81:  mov    %eax,(%esp)
08132c7e +0x84:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132c83 +0x89:  movzbl 0x1(%eax),%eax
08132c87 +0x8d:  xor    $0x1,%eax
08132c8a +0x90:  test   %al,%al
08132c8c +0x92:  je     08132cb1 <+0xb7>
08132c8e +0x94:  lea    -0x14(%ebp),%eax
08132c91 +0x97:  mov    %eax,(%esp)
08132c94 +0x9a:  call   08136260 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1e67>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1e67
08132c99 +0x9f:  movl   $0x0,0x7(%eax)
08132ca0 +0xa6:  mov    0xc(%ebp),%eax
08132ca3 +0xa9:  movb   $0x1,0xcc(%eax)
08132caa +0xb0:  mov    $0x0,%eax
08132caf +0xb5:  jmp    08132cb6 <+0xbc>
08132cb1 +0xb7:  mov    $0x2,%eax
08132cb6 +0xbc:  leave
08132cb7 +0xbd:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::resetSlot @ 0x8132bfa

/* advancealtar::CharacAdvanceAltarManager::resetSlot(advancealtar::AdvanceAltarData&,
   CMDPacketStruct::_SetSlotData const&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::resetSlot
          (CharacAdvanceAltarManager *this,AdvanceAltarData *param_1,_SetSlotData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>> local_18 [4];
  map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
  local_14 [4];
  int local_10;
  
  local_10 = AdvanceAltarData::getSlotMap(param_1,*(undefined4 *)param_2);
  if (local_10 == 0) {
    uVar2 = 3;
  }
  else {
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::find((uchar *)local_18);
    std::
    map<unsigned_char,advancealtar::_Slot,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_Slot>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator==
                      (local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::operator->
                        (local_18);
      if (*(char *)(iVar3 + 1) == '\x01') {
        uVar2 = 2;
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,advancealtar::_Slot>>::
                operator->(local_18);
        *(undefined4 *)(iVar3 + 7) = 0;
        param_1[0xcc] = (AdvanceAltarData)0x1;
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}
```
