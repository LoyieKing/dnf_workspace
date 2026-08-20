# CheckRentableItem

`_ZN19RentalMachinePcRoom17CheckRentableItemEj`

`RentalMachinePcRoom::CheckRentableItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x08270752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270752  _ZN19RentalMachinePcRoom17CheckRentableItemEj
#           RentalMachinePcRoom::CheckRentableItem(unsigned int)
# range [0x08270752, 0x082707bf]
08270752 +0x00:  push   %ebp
08270753 +0x01:  mov    %esp,%ebp
08270755 +0x03:  sub    $0x28,%esp
08270758 +0x06:  mov    0x8(%ebp),%eax
0827075b +0x09:  add    $0x4,%eax
0827075e +0x0c:  mov    %eax,(%esp)
08270761 +0x0f:  call   08271d8e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3b4>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3b4
08270766 +0x14:  lea    0x104(%eax),%ecx
0827076c +0x1a:  lea    -0x10(%ebp),%eax
0827076f +0x1d:  lea    0xc(%ebp),%edx
08270772 +0x20:  mov    %edx,0x8(%esp)
08270776 +0x24:  mov    %ecx,0x4(%esp)
0827077a +0x28:  mov    %eax,(%esp)
0827077d +0x2b:  call   08111332 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x844>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x844
08270782 +0x30:  sub    $0x4,%esp
08270785 +0x33:  mov    0x8(%ebp),%eax
08270788 +0x36:  add    $0x4,%eax
0827078b +0x39:  mov    %eax,(%esp)
0827078e +0x3c:  call   08271d8e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3b4>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3b4
08270793 +0x41:  lea    0x104(%eax),%edx
08270799 +0x47:  lea    -0xc(%ebp),%eax
0827079c +0x4a:  mov    %edx,0x4(%esp)
082707a0 +0x4e:  mov    %eax,(%esp)
082707a3 +0x51:  call   08111278 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x78a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x78a
082707a8 +0x56:  sub    $0x4,%esp
082707ab +0x59:  lea    -0x10(%ebp),%eax
082707ae +0x5c:  mov    %eax,0x4(%esp)
082707b2 +0x60:  lea    -0xc(%ebp),%eax
082707b5 +0x63:  mov    %eax,(%esp)
082707b8 +0x66:  call   0811129e <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7b0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7b0
082707bd +0x6b:  leave
082707be +0x6c:  ret
082707bf +0x6d:  nop
```

## 反编译 C

```c
// RentalMachinePcRoom::CheckRentableItem @ 0x8270752

/* RentalMachinePcRoom::CheckRentableItem(unsigned int) */

void RentalMachinePcRoom::CheckRentableItem(uint param_1)

{
  _Rb_tree_const_iterator local_14 [4];
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_10 [12];
  
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
            ((uint *)local_14);
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(param_1 + 4));
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_10);
  std::_Rb_tree_const_iterator<unsigned_int>::operator!=
            ((_Rb_tree_const_iterator<unsigned_int> *)local_10,local_14);
  return;
}
```
