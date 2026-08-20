# _getGiveItem

`_ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t`

`Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t const*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821bf82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821bf82  _ZNK28Dispatcher_UseVendingMachine12_getGiveItemEPK22stVendingMachineInfo_t
#           Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t const*) const
# range [0x0821bf82, 0x0821c057]
0821bf82 +0x00:  push   %ebp
0821bf83 +0x01:  mov    %esp,%ebp
0821bf85 +0x03:  push   %ebx
0821bf86 +0x04:  sub    $0x24,%esp
0821bf89 +0x07:  mov    0x8(%ebp),%ebx
0821bf8c +0x0a:  mov    %ebx,(%esp)
0821bf8f +0x0d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821bf94 +0x12:  movl   $0xffffffff,0x2(%ebx)
0821bf9b +0x19:  mov    0x10(%ebp),%eax
0821bf9e +0x1c:  mov    0xc(%eax),%eax
0821bfa1 +0x1f:  sub    $0x1,%eax
0821bfa4 +0x22:  mov    %eax,-0x10(%ebp)
0821bfa7 +0x25:  mov    0xc(%ebp),%eax
0821bfaa +0x28:  mov    0x4(%eax),%eax
0821bfad +0x2b:  lea    -0x10(%ebp),%edx
0821bfb0 +0x2e:  mov    %edx,0x4(%esp)
0821bfb4 +0x32:  mov    %eax,(%esp)
0821bfb7 +0x35:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0821bfbc +0x3a:  mov    %eax,-0xc(%ebp)
0821bfbf +0x3d:  mov    0x10(%ebp),%eax
0821bfc2 +0x40:  lea    0x10(%eax),%edx
0821bfc5 +0x43:  lea    -0x14(%ebp),%eax
0821bfc8 +0x46:  mov    %edx,0x4(%esp)
0821bfcc +0x4a:  mov    %eax,(%esp)
0821bfcf +0x4d:  call   08237f0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5b8
0821bfd4 +0x52:  sub    $0x4,%esp
0821bfd7 +0x55:  mov    0x10(%ebp),%eax
0821bfda +0x58:  lea    0x10(%eax),%edx
0821bfdd +0x5b:  lea    -0x18(%ebp),%eax
0821bfe0 +0x5e:  mov    %edx,0x4(%esp)
0821bfe4 +0x62:  mov    %eax,(%esp)
0821bfe7 +0x65:  call   08237f3a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5e4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5e4
0821bfec +0x6a:  sub    $0x4,%esp
0821bfef +0x6d:  jmp    0821c037 <+0xb5>
0821bff1 +0x6f:  lea    -0x14(%ebp),%eax
0821bff4 +0x72:  mov    %eax,(%esp)
0821bff7 +0x75:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
0821bffc +0x7a:  mov    0x4(%eax),%eax
0821bfff +0x7d:  cmp    -0xc(%ebp),%eax
0821c002 +0x80:  seta   %al
0821c005 +0x83:  test   %al,%al
0821c007 +0x85:  je     0821c02c <+0xaa>
0821c009 +0x87:  lea    -0x14(%ebp),%eax
0821c00c +0x8a:  mov    %eax,(%esp)
0821c00f +0x8d:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
0821c014 +0x92:  mov    (%eax),%eax
0821c016 +0x94:  mov    %eax,0x2(%ebx)
0821c019 +0x97:  lea    -0x14(%ebp),%eax
0821c01c +0x9a:  mov    %eax,(%esp)
0821c01f +0x9d:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
0821c024 +0xa2:  mov    0x8(%eax),%eax
0821c027 +0xa5:  mov    %eax,0x7(%ebx)
0821c02a +0xa8:  jmp    0821c04e <+0xcc>
0821c02c +0xaa:  lea    -0x14(%ebp),%eax
0821c02f +0xad:  mov    %eax,(%esp)
0821c032 +0xb0:  call   08237f92 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd63c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd63c
0821c037 +0xb5:  lea    -0x18(%ebp),%eax
0821c03a +0xb8:  mov    %eax,0x4(%esp)
0821c03e +0xbc:  lea    -0x14(%ebp),%eax
0821c041 +0xbf:  mov    %eax,(%esp)
0821c044 +0xc2:  call   08237f66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd610>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd610
0821c049 +0xc7:  test   %al,%al
0821c04b +0xc9:  jne    0821bff1 <+0x6f>
0821c04d +0xcb:  nop
0821c04e +0xcc:  mov    %ebx,%eax
0821c050 +0xce:  mov    -0x4(%ebp),%ebx
0821c053 +0xd1:  leave
0821c054 +0xd2:  ret    $0x4
0821c057 +0xd5:  nop
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::_getGiveItem @ 0x821bf82

/* Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t const*) const */

stVendingMachineInfo_t * Dispatcher_UseVendingMachine::_getGiveItem(stVendingMachineInfo_t *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_stack_00000008;
  int in_stack_0000000c;
  __normal_iterator local_1c [4];
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)param_1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  local_14 = *(int *)(in_stack_0000000c + 0xc) - 1;
  local_10 = CMTRand::randInt(*(CMTRand **)(in_stack_00000008 + 4),&local_14);
  std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
  std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return param_1;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
            ::operator->(local_18);
    if (local_10 < *(uint *)(iVar2 + 4)) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
    ::operator++(local_18);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
           ::operator->(local_18);
  *(undefined4 *)(param_1 + 2) = *puVar3;
  iVar2 = __gnu_cxx::
          __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
          ::operator->(local_18);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(iVar2 + 8);
  return param_1;
}
```
