# CheckPickupItem

`_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE`

`WarField::CheckPickupItem(int, int, std::_Rb_tree_iterator<std::pair<int const, map_item> >&)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086ba0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba0a0  _ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE
#           WarField::CheckPickupItem(int, int, std::_Rb_tree_iterator<std::pair<int const, map_item> >&)
# range [0x086ba0a0, 0x086ba18f]
086ba0a0 +0x00:  push   %ebp
086ba0a1 +0x01:  mov    %esp,%ebp
086ba0a3 +0x03:  sub    $0x38,%esp
086ba0a6 +0x06:  lea    -0x14(%ebp),%eax
086ba0a9 +0x09:  mov    %eax,(%esp)
086ba0ac +0x0c:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
086ba0b1 +0x11:  mov    0x8(%ebp),%eax
086ba0b4 +0x14:  lea    0x2c(%eax),%ecx
086ba0b7 +0x17:  lea    -0x1c(%ebp),%eax
086ba0ba +0x1a:  lea    0xc(%ebp),%edx
086ba0bd +0x1d:  mov    %edx,0x8(%esp)
086ba0c1 +0x21:  mov    %ecx,0x4(%esp)
086ba0c5 +0x25:  mov    %eax,(%esp)
086ba0c8 +0x28:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
086ba0cd +0x2d:  sub    $0x4,%esp
086ba0d0 +0x30:  mov    -0x1c(%ebp),%eax
086ba0d3 +0x33:  mov    %eax,-0x14(%ebp)
086ba0d6 +0x36:  mov    0x8(%ebp),%eax
086ba0d9 +0x39:  lea    0x2c(%eax),%edx
086ba0dc +0x3c:  lea    -0x10(%ebp),%eax
086ba0df +0x3f:  mov    %edx,0x4(%esp)
086ba0e3 +0x43:  mov    %eax,(%esp)
086ba0e6 +0x46:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
086ba0eb +0x4b:  sub    $0x4,%esp
086ba0ee +0x4e:  lea    -0x10(%ebp),%eax
086ba0f1 +0x51:  mov    %eax,0x4(%esp)
086ba0f5 +0x55:  lea    -0x14(%ebp),%eax
086ba0f8 +0x58:  mov    %eax,(%esp)
086ba0fb +0x5b:  call   0815494c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4281>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4281
086ba100 +0x60:  test   %al,%al
086ba102 +0x62:  je     086ba10e <+0x6e>
086ba104 +0x64:  mov    $0x15,%eax
086ba109 +0x69:  jmp    086ba18e <+0xee>
086ba10e +0x6e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086ba115 +0x75:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086ba11a +0x7a:  mov    %eax,-0xc(%ebp)
086ba11d +0x7d:  lea    -0x14(%ebp),%eax
086ba120 +0x80:  mov    %eax,(%esp)
086ba123 +0x83:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
086ba128 +0x88:  mov    0x10(%eax),%eax
086ba12b +0x8b:  mov    -0xc(%ebp),%edx
086ba12e +0x8e:  mov    %edx,%ecx
086ba130 +0x90:  sub    %eax,%ecx
086ba132 +0x92:  mov    %ecx,%eax
086ba134 +0x94:  cmp    $0x9,%eax
086ba137 +0x97:  setle  %al
086ba13a +0x9a:  test   %al,%al
086ba13c +0x9c:  je     086ba181 <+0xe1>
086ba13e +0x9e:  lea    -0x14(%ebp),%eax
086ba141 +0xa1:  mov    %eax,(%esp)
086ba144 +0xa4:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
086ba149 +0xa9:  movzwl 0xc(%eax),%eax
086ba14d +0xad:  cmp    $0xffff,%ax
086ba151 +0xb1:  je     086ba171 <+0xd1>
086ba153 +0xb3:  lea    -0x14(%ebp),%eax
086ba156 +0xb6:  mov    %eax,(%esp)
086ba159 +0xb9:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
086ba15e +0xbe:  movzwl 0xc(%eax),%eax
086ba162 +0xc2:  movzwl %ax,%eax
086ba165 +0xc5:  cmp    0x10(%ebp),%eax
086ba168 +0xc8:  je     086ba171 <+0xd1>
086ba16a +0xca:  mov    $0x1,%eax
086ba16f +0xcf:  jmp    086ba176 <+0xd6>
086ba171 +0xd1:  mov    $0x0,%eax
086ba176 +0xd6:  test   %al,%al
086ba178 +0xd8:  je     086ba181 <+0xe1>
086ba17a +0xda:  mov    $0x1c,%eax
086ba17f +0xdf:  jmp    086ba18e <+0xee>
086ba181 +0xe1:  mov    0x14(%ebp),%eax
086ba184 +0xe4:  mov    -0x14(%ebp),%edx
086ba187 +0xe7:  mov    %edx,(%eax)
086ba189 +0xe9:  mov    $0x0,%eax
086ba18e +0xee:  leave
086ba18f +0xef:  ret
```

## 反编译 C

```c
// WarField::CheckPickupItem @ 0x86ba0a0

/* WarField::CheckPickupItem(int, int, std::_Rb_tree_iterator<std::pair<int const, map_item> >&) */

undefined4 __thiscall
WarField::CheckPickupItem(WarField *this,int param_1,int param_2,_Rb_tree_iterator *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_20 [2];
  int local_18;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_14 [4];
  int local_10;
  
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_20);
  local_18 = local_20[0];
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_14)
  ;
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    return 0x15;
  }
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
  if (local_10 - *(int *)(iVar3 + 0x10) < 10) {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
    if ((*(short *)(iVar3 + 0xc) == -1) ||
       (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18),
       (uint)*(ushort *)(iVar3 + 0xc) == param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x1c;
    }
  }
  *(int *)param_3 = local_18;
  return 0;
}
```
