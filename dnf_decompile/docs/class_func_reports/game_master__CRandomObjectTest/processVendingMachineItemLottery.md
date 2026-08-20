# processVendingMachineItemLottery

`_ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item`

`game_master::CRandomObjectTest::processVendingMachineItemLottery(CMTRand&, stVendingMachineInfo_t const*, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `game_master::CRandomObjectTest` | `0x084b0550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0550  _ZN11game_master17CRandomObjectTest32processVendingMachineItemLotteryER7CMTRandPK22stVendingMachineInfo_tR10Inven_Item
#           game_master::CRandomObjectTest::processVendingMachineItemLottery(CMTRand&, stVendingMachineInfo_t const*, Inven_Item&)
# range [0x084b0550, 0x084b060f]
084b0550 +0x00:  push   %ebp
084b0551 +0x01:  mov    %esp,%ebp
084b0553 +0x03:  sub    $0x28,%esp
084b0556 +0x06:  mov    0x10(%ebp),%eax
084b0559 +0x09:  mov    0xc(%eax),%eax
084b055c +0x0c:  sub    $0x1,%eax
084b055f +0x0f:  mov    %eax,-0x14(%ebp)
084b0562 +0x12:  lea    -0x14(%ebp),%eax
084b0565 +0x15:  mov    %eax,0x4(%esp)
084b0569 +0x19:  mov    0xc(%ebp),%eax
084b056c +0x1c:  mov    %eax,(%esp)
084b056f +0x1f:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
084b0574 +0x24:  mov    %eax,-0xc(%ebp)
084b0577 +0x27:  mov    0x10(%ebp),%eax
084b057a +0x2a:  lea    0x10(%eax),%edx
084b057d +0x2d:  lea    -0x18(%ebp),%eax
084b0580 +0x30:  mov    %edx,0x4(%esp)
084b0584 +0x34:  mov    %eax,(%esp)
084b0587 +0x37:  call   08237f0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5b8
084b058c +0x3c:  sub    $0x4,%esp
084b058f +0x3f:  jmp    084b05df <+0x8f>
084b0591 +0x41:  lea    -0x18(%ebp),%eax
084b0594 +0x44:  mov    %eax,(%esp)
084b0597 +0x47:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
084b059c +0x4c:  mov    0x4(%eax),%eax
084b059f +0x4f:  cmp    -0xc(%ebp),%eax
084b05a2 +0x52:  seta   %al
084b05a5 +0x55:  test   %al,%al
084b05a7 +0x57:  je     084b05d4 <+0x84>
084b05a9 +0x59:  lea    -0x18(%ebp),%eax
084b05ac +0x5c:  mov    %eax,(%esp)
084b05af +0x5f:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
084b05b4 +0x64:  mov    (%eax),%edx
084b05b6 +0x66:  mov    0x14(%ebp),%eax
084b05b9 +0x69:  mov    %edx,0x2(%eax)
084b05bc +0x6c:  lea    -0x18(%ebp),%eax
084b05bf +0x6f:  mov    %eax,(%esp)
084b05c2 +0x72:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
084b05c7 +0x77:  mov    0x8(%eax),%eax
084b05ca +0x7a:  mov    %eax,%edx
084b05cc +0x7c:  mov    0x14(%ebp),%eax
084b05cf +0x7f:  mov    %edx,0x7(%eax)
084b05d2 +0x82:  jmp    084b060d <+0xbd>
084b05d4 +0x84:  lea    -0x18(%ebp),%eax
084b05d7 +0x87:  mov    %eax,(%esp)
084b05da +0x8a:  call   08237f92 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd63c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd63c
084b05df +0x8f:  mov    0x10(%ebp),%eax
084b05e2 +0x92:  lea    0x10(%eax),%edx
084b05e5 +0x95:  lea    -0x10(%ebp),%eax
084b05e8 +0x98:  mov    %edx,0x4(%esp)
084b05ec +0x9c:  mov    %eax,(%esp)
084b05ef +0x9f:  call   08237f3a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5e4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5e4
084b05f4 +0xa4:  sub    $0x4,%esp
084b05f7 +0xa7:  lea    -0x10(%ebp),%eax
084b05fa +0xaa:  mov    %eax,0x4(%esp)
084b05fe +0xae:  lea    -0x18(%ebp),%eax
084b0601 +0xb1:  mov    %eax,(%esp)
084b0604 +0xb4:  call   08237f66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd610>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd610
084b0609 +0xb9:  test   %al,%al
084b060b +0xbb:  jne    084b0591 <+0x41>
084b060d +0xbd:  leave
084b060e +0xbe:  ret
084b060f +0xbf:  nop
```

## 反编译 C

```c
// game_master::CRandomObjectTest::processVendingMachineItemLottery @ 0x84b0550

/* game_master::CRandomObjectTest::processVendingMachineItemLottery(CMTRand&, stVendingMachineInfo_t
   const*, Inven_Item&) */

void __thiscall
game_master::CRandomObjectTest::processVendingMachineItemLottery
          (CRandomObjectTest *this,CMTRand *param_1,stVendingMachineInfo_t *param_2,
          Inven_Item *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_1c [4];
  ulong local_18;
  __normal_iterator local_14 [4];
  uint local_10;
  
  local_18 = *(int *)(param_2 + 0xc) - 1;
  local_10 = CMTRand::randInt(param_1,&local_18);
  std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
  while( true ) {
    std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
            ::operator->(local_1c);
    if (local_10 < *(uint *)(iVar2 + 4)) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
    ::operator++(local_1c);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
           ::operator->(local_1c);
  *(undefined4 *)(param_3 + 2) = *puVar3;
  iVar2 = __gnu_cxx::
          __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
          ::operator->(local_1c);
  *(undefined4 *)(param_3 + 7) = *(undefined4 *)(iVar2 + 8);
  return;
}
```
