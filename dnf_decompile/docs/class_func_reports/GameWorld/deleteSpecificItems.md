# deleteSpecificItems

`_ZN9GameWorld19deleteSpecificItemsEPKSt6vectorISt4pairIiiESaIS2_EE`

`GameWorld::deleteSpecificItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ccbf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ccbf4  _ZN9GameWorld19deleteSpecificItemsEPKSt6vectorISt4pairIiiESaIS2_EE
#           GameWorld::deleteSpecificItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const*)
# range [0x086ccbf4, 0x086ccc77]
086ccbf4 +0x00:  push   %ebp
086ccbf5 +0x01:  mov    %esp,%ebp
086ccbf7 +0x03:  sub    $0x28,%esp
086ccbfa +0x06:  mov    0x8(%ebp),%eax
086ccbfd +0x09:  lea    0x134(%eax),%edx
086ccc03 +0x0f:  lea    -0x14(%ebp),%eax
086ccc06 +0x12:  mov    %edx,0x4(%esp)
086ccc0a +0x16:  mov    %eax,(%esp)
086ccc0d +0x19:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086ccc12 +0x1e:  sub    $0x4,%esp
086ccc15 +0x21:  jmp    086ccc45 <+0x51>
086ccc17 +0x23:  lea    -0x14(%ebp),%eax
086ccc1a +0x26:  mov    %eax,(%esp)
086ccc1d +0x29:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086ccc22 +0x2e:  mov    0x4(%eax),%eax
086ccc25 +0x31:  mov    %eax,-0xc(%ebp)
086ccc28 +0x34:  mov    0xc(%ebp),%eax
086ccc2b +0x37:  mov    %eax,0x4(%esp)
086ccc2f +0x3b:  mov    -0xc(%ebp),%eax
086ccc32 +0x3e:  mov    %eax,(%esp)
086ccc35 +0x41:  call   086cbc85 <_Z19deleteSpecificItemsP5CUserPKSt6vectorISt4pairIiiESaIS3_EE>  ; deleteSpecificItems(CUser*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const*)
086ccc3a +0x46:  lea    -0x14(%ebp),%eax
086ccc3d +0x49:  mov    %eax,(%esp)
086ccc40 +0x4c:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086ccc45 +0x51:  mov    0x8(%ebp),%eax
086ccc48 +0x54:  lea    0x134(%eax),%edx
086ccc4e +0x5a:  lea    -0x10(%ebp),%eax
086ccc51 +0x5d:  mov    %edx,0x4(%esp)
086ccc55 +0x61:  mov    %eax,(%esp)
086ccc58 +0x64:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086ccc5d +0x69:  sub    $0x4,%esp
086ccc60 +0x6c:  lea    -0x10(%ebp),%eax
086ccc63 +0x6f:  mov    %eax,0x4(%esp)
086ccc67 +0x73:  lea    -0x14(%ebp),%eax
086ccc6a +0x76:  mov    %eax,(%esp)
086ccc6d +0x79:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086ccc72 +0x7e:  test   %al,%al
086ccc74 +0x80:  jne    086ccc17 <+0x23>
086ccc76 +0x82:  leave
086ccc77 +0x83:  ret
```

## 反编译 C

```c
// GameWorld::deleteSpecificItems @ 0x86ccbf4

/* GameWorld::deleteSpecificItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const*) */

void __thiscall GameWorld::deleteSpecificItems(GameWorld *this,vector *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18);
    local_10 = *(CUser **)(iVar2 + 4);
    ::deleteSpecificItems(local_10,param_1);
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_18);
  }
  return;
}
```
