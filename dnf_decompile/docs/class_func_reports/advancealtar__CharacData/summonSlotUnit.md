# summonSlotUnit

`_ZN12advancealtar10CharacData14summonSlotUnitEhi`

`advancealtar::CharacData::summonSlotUnit(unsigned char, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d278` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d278  _ZN12advancealtar10CharacData14summonSlotUnitEhi
#           advancealtar::CharacData::summonSlotUnit(unsigned char, int)
# range [0x0812d278, 0x0812d371]
0812d278 +0x00:  push   %ebp
0812d279 +0x01:  mov    %esp,%ebp
0812d27b +0x03:  sub    $0x48,%esp
0812d27e +0x06:  mov    0xc(%ebp),%eax
0812d281 +0x09:  mov    %al,-0x2c(%ebp)
0812d284 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812d289 +0x11:  add    $0x6364,%eax
0812d28e +0x16:  mov    %eax,-0x10(%ebp)
0812d291 +0x19:  mov    0x8(%ebp),%eax
0812d294 +0x1c:  lea    0x10(%eax),%ecx
0812d297 +0x1f:  lea    -0x1c(%ebp),%eax
0812d29a +0x22:  lea    -0x2c(%ebp),%edx
0812d29d +0x25:  mov    %edx,0x8(%esp)
0812d2a1 +0x29:  mov    %ecx,0x4(%esp)
0812d2a5 +0x2d:  mov    %eax,(%esp)
0812d2a8 +0x30:  call   08134ee4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xaeb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xaeb
0812d2ad +0x35:  sub    $0x4,%esp
0812d2b0 +0x38:  lea    -0x1c(%ebp),%eax
0812d2b3 +0x3b:  mov    %eax,0x4(%esp)
0812d2b7 +0x3f:  lea    -0x20(%ebp),%eax
0812d2ba +0x42:  mov    %eax,(%esp)
0812d2bd +0x45:  call   08134f10 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb17>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb17
0812d2c2 +0x4a:  mov    0x8(%ebp),%eax
0812d2c5 +0x4d:  lea    0x10(%eax),%edx
0812d2c8 +0x50:  lea    -0x14(%ebp),%eax
0812d2cb +0x53:  mov    %edx,0x4(%esp)
0812d2cf +0x57:  mov    %eax,(%esp)
0812d2d2 +0x5a:  call   08134f20 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb27>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb27
0812d2d7 +0x5f:  sub    $0x4,%esp
0812d2da +0x62:  lea    -0x14(%ebp),%eax
0812d2dd +0x65:  mov    %eax,0x4(%esp)
0812d2e1 +0x69:  lea    -0x18(%ebp),%eax
0812d2e4 +0x6c:  mov    %eax,(%esp)
0812d2e7 +0x6f:  call   08134f10 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb17>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb17
0812d2ec +0x74:  lea    -0x18(%ebp),%eax
0812d2ef +0x77:  mov    %eax,0x4(%esp)
0812d2f3 +0x7b:  lea    -0x20(%ebp),%eax
0812d2f6 +0x7e:  mov    %eax,(%esp)
0812d2f9 +0x81:  call   08134f46 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb4d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb4d
0812d2fe +0x86:  test   %al,%al
0812d300 +0x88:  je     0812d309 <+0x91>
0812d302 +0x8a:  mov    $0x4,%eax
0812d307 +0x8f:  jmp    0812d370 <+0xf8>
0812d309 +0x91:  lea    -0x20(%ebp),%eax
0812d30c +0x94:  mov    %eax,(%esp)
0812d30f +0x97:  call   08134f5a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb61>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb61
0812d314 +0x9c:  mov    0xc(%eax),%edx
0812d317 +0x9f:  mov    -0x10(%ebp),%eax
0812d31a +0xa2:  mov    0x18(%eax),%eax
0812d31d +0xa5:  mov    (%eax),%eax
0812d31f +0xa7:  imul   %edx,%eax
0812d322 +0xaa:  mov    %eax,-0xc(%ebp)
0812d325 +0xad:  lea    -0x20(%ebp),%eax
0812d328 +0xb0:  mov    %eax,(%esp)
0812d32b +0xb3:  call   08134f5a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xb61>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xb61
0812d330 +0xb8:  mov    0x8(%eax),%eax
0812d333 +0xbb:  cmp    0x10(%ebp),%eax
0812d336 +0xbe:  jne    0812d34a <+0xd2>
0812d338 +0xc0:  mov    0x8(%ebp),%eax
0812d33b +0xc3:  mov    0xc(%eax),%eax
0812d33e +0xc6:  cmp    -0xc(%ebp),%eax
0812d341 +0xc9:  jl     0812d34a <+0xd2>
0812d343 +0xcb:  mov    $0x1,%eax
0812d348 +0xd0:  jmp    0812d34f <+0xd7>
0812d34a +0xd2:  mov    $0x0,%eax
0812d34f +0xd7:  test   %al,%al
0812d351 +0xd9:  je     0812d36b <+0xf3>
0812d353 +0xdb:  mov    0x8(%ebp),%eax
0812d356 +0xde:  mov    0xc(%eax),%eax
0812d359 +0xe1:  mov    %eax,%edx
0812d35b +0xe3:  sub    -0xc(%ebp),%edx
0812d35e +0xe6:  mov    0x8(%ebp),%eax
0812d361 +0xe9:  mov    %edx,0xc(%eax)
0812d364 +0xec:  mov    $0x0,%eax
0812d369 +0xf1:  jmp    0812d370 <+0xf8>
0812d36b +0xf3:  mov    $0x2,%eax
0812d370 +0xf8:  leave
0812d371 +0xf9:  ret
```

## 反编译 C

```c
// advancealtar::CharacData::summonSlotUnit @ 0x812d278

/* advancealtar::CharacData::summonSlotUnit(unsigned char, int) */

undefined4 __thiscall
advancealtar::CharacData::summonSlotUnit(CharacData *this,uchar param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>> local_24 [4];
  _Rb_tree_iterator local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>> local_1c [4];
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = G_CDataManager();
  local_14 = local_14 + 0x6364;
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::find((uchar *)local_20);
  std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
  _Rb_tree_const_iterator(local_24,local_20);
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::end(local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
  _Rb_tree_const_iterator(local_1c,(_Rb_tree_iterator *)local_18);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
          operator==(local_24,(_Rb_tree_const_iterator *)local_1c);
  if (cVar2 == '\0') {
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
            operator->(local_24);
    local_10 = **(int **)(local_14 + 0x18) * *(int *)(iVar4 + 0xc);
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
            operator->(local_24);
    if ((*(int *)(iVar4 + 8) == param_2) && (local_10 <= *(int *)(this + 0xc))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) - local_10;
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}
```
