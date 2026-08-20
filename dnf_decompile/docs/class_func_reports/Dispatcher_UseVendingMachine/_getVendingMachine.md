# _getVendingMachine

`_ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj`

`Dispatcher_UseVendingMachine::_getVendingMachine(unsigned int) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821b60a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b60a  _ZNK28Dispatcher_UseVendingMachine18_getVendingMachineEj
#           Dispatcher_UseVendingMachine::_getVendingMachine(unsigned int) const
# range [0x0821b60a, 0x0821b697]
0821b60a +0x00:  push   %ebp
0821b60b +0x01:  mov    %esp,%ebp
0821b60d +0x03:  sub    $0x28,%esp
0821b610 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0821b615 +0x0b:  mov    %eax,(%esp)
0821b618 +0x0e:  call   0822b64c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcf6
0821b61d +0x13:  mov    %eax,-0xc(%ebp)
0821b620 +0x16:  lea    -0x10(%ebp),%eax
0821b623 +0x19:  mov    -0xc(%ebp),%edx
0821b626 +0x1c:  mov    %edx,0x4(%esp)
0821b62a +0x20:  mov    %eax,(%esp)
0821b62d +0x23:  call   08237c5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd304>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd304
0821b632 +0x28:  sub    $0x4,%esp
0821b635 +0x2b:  lea    -0x14(%ebp),%eax
0821b638 +0x2e:  mov    -0xc(%ebp),%edx
0821b63b +0x31:  mov    %edx,0x4(%esp)
0821b63f +0x35:  mov    %eax,(%esp)
0821b642 +0x38:  call   08237c86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd330>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd330
0821b647 +0x3d:  sub    $0x4,%esp
0821b64a +0x40:  jmp    0821b67b <+0x71>
0821b64c +0x42:  lea    -0x10(%ebp),%eax
0821b64f +0x45:  mov    %eax,(%esp)
0821b652 +0x48:  call   08237cf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd39e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd39e
0821b657 +0x4d:  mov    (%eax),%eax
0821b659 +0x4f:  cmp    0xc(%ebp),%eax
0821b65c +0x52:  sete   %al
0821b65f +0x55:  test   %al,%al
0821b661 +0x57:  je     0821b670 <+0x66>
0821b663 +0x59:  lea    -0x10(%ebp),%eax
0821b666 +0x5c:  mov    %eax,(%esp)
0821b669 +0x5f:  call   08237cfe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd3a8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd3a8
0821b66e +0x64:  jmp    0821b696 <+0x8c>
0821b670 +0x66:  lea    -0x10(%ebp),%eax
0821b673 +0x69:  mov    %eax,(%esp)
0821b676 +0x6c:  call   08237cde <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd388>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd388
0821b67b +0x71:  lea    -0x14(%ebp),%eax
0821b67e +0x74:  mov    %eax,0x4(%esp)
0821b682 +0x78:  lea    -0x10(%ebp),%eax
0821b685 +0x7b:  mov    %eax,(%esp)
0821b688 +0x7e:  call   08237cb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd35c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd35c
0821b68d +0x83:  test   %al,%al
0821b68f +0x85:  jne    0821b64c <+0x42>
0821b691 +0x87:  mov    $0x0,%eax
0821b696 +0x8c:  leave
0821b697 +0x8d:  ret
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::_getVendingMachine @ 0x821b60a

/* Dispatcher_UseVendingMachine::_getVendingMachine(unsigned int) const */

undefined4 __thiscall
Dispatcher_UseVendingMachine::_getVendingMachine(Dispatcher_UseVendingMachine *this,uint param_1)

{
  bool bVar1;
  CDataManager *this_00;
  uint *puVar2;
  undefined4 uVar3;
  __normal_iterator local_18 [4];
  __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
  local_14 [4];
  undefined4 local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::getVendingMachineTable(this_00);
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::begin();
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
                     ::operator->(local_14);
    if (*puVar2 == param_1) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
    ::operator++(local_14);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
          ::operator*(local_14);
  return uVar3;
}
```
