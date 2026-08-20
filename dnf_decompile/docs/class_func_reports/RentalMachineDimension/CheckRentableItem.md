# CheckRentableItem

`_ZN22RentalMachineDimension17CheckRentableItemEj`

`RentalMachineDimension::CheckRentableItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826eea8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826eea8  _ZN22RentalMachineDimension17CheckRentableItemEj
#           RentalMachineDimension::CheckRentableItem(unsigned int)
# range [0x0826eea8, 0x0826ef15]
0826eea8 +0x00:  push   %ebp
0826eea9 +0x01:  mov    %esp,%ebp
0826eeab +0x03:  sub    $0x28,%esp
0826eeae +0x06:  mov    0x8(%ebp),%eax
0826eeb1 +0x09:  add    $0x4,%eax
0826eeb4 +0x0c:  mov    %eax,(%esp)
0826eeb7 +0x0f:  call   0826fbee <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1f0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1f0
0826eebc +0x14:  lea    0x104(%eax),%ecx
0826eec2 +0x1a:  lea    -0x10(%ebp),%eax
0826eec5 +0x1d:  lea    0xc(%ebp),%edx
0826eec8 +0x20:  mov    %edx,0x8(%esp)
0826eecc +0x24:  mov    %ecx,0x4(%esp)
0826eed0 +0x28:  mov    %eax,(%esp)
0826eed3 +0x2b:  call   08111332 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x844>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x844
0826eed8 +0x30:  sub    $0x4,%esp
0826eedb +0x33:  mov    0x8(%ebp),%eax
0826eede +0x36:  add    $0x4,%eax
0826eee1 +0x39:  mov    %eax,(%esp)
0826eee4 +0x3c:  call   0826fbee <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1f0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1f0
0826eee9 +0x41:  lea    0x104(%eax),%edx
0826eeef +0x47:  lea    -0xc(%ebp),%eax
0826eef2 +0x4a:  mov    %edx,0x4(%esp)
0826eef6 +0x4e:  mov    %eax,(%esp)
0826eef9 +0x51:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
0826eefe +0x56:  sub    $0x4,%esp
0826ef01 +0x59:  lea    -0x10(%ebp),%eax
0826ef04 +0x5c:  mov    %eax,0x4(%esp)
0826ef08 +0x60:  lea    -0xc(%ebp),%eax
0826ef0b +0x63:  mov    %eax,(%esp)
0826ef0e +0x66:  call   0811129e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7b0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7b0
0826ef13 +0x6b:  leave
0826ef14 +0x6c:  ret
0826ef15 +0x6d:  nop
```

## 反编译 C

```c
// RentalMachineDimension::CheckRentableItem @ 0x826eea8

/* RentalMachineDimension::CheckRentableItem(unsigned int) */

void RentalMachineDimension::CheckRentableItem(uint param_1)

{
  _Rb_tree_const_iterator local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
            ((uint *)local_14);
  std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
            ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
  std::_Rb_tree_const_iterator<unsigned_int>::operator!=
            ((_Rb_tree_const_iterator<unsigned_int> *)local_10,local_14);
  return;
}
```
