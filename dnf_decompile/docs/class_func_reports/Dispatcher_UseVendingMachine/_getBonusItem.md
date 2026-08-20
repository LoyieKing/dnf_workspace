# _getBonusItem

`_ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t`

`Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t const*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821c058` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821c058  _ZNK28Dispatcher_UseVendingMachine13_getBonusItemEPK22stVendingMachineInfo_t
#           Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t const*) const
# range [0x0821c058, 0x0821c179]
0821c058 +0x000:  push   %ebp
0821c059 +0x001:  mov    %esp,%ebp
0821c05b +0x003:  push   %ebx
0821c05c +0x004:  sub    $0x24,%esp
0821c05f +0x007:  mov    0x8(%ebp),%ebx
0821c062 +0x00a:  mov    %ebx,(%esp)
0821c065 +0x00d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0821c06a +0x012:  movl   $0xffffffff,0x2(%ebx)
0821c071 +0x019:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0821c076 +0x01e:  movl   $0x23,0x4(%esp)
0821c07e +0x026:  mov    %eax,(%esp)
0821c081 +0x029:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0821c086 +0x02e:  mov    (%eax),%edx
0821c088 +0x030:  add    $0x34,%edx
0821c08b +0x033:  mov    (%edx),%edx
0821c08d +0x035:  movl   $0x0,0x4(%esp)
0821c095 +0x03d:  mov    %eax,(%esp)
0821c098 +0x040:  call   *%edx
0821c09a +0x042:  xor    $0x1,%eax
0821c09d +0x045:  test   %al,%al
0821c09f +0x047:  jne    0821c16f <+0x117>
0821c0a5 +0x04d:  mov    0x10(%ebp),%eax
0821c0a8 +0x050:  add    $0x20,%eax
0821c0ab +0x053:  mov    %eax,(%esp)
0821c0ae +0x056:  call   08237fb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd65c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd65c
0821c0b3 +0x05b:  test   %al,%al
0821c0b5 +0x05d:  jne    0821c172 <+0x11a>
0821c0bb +0x063:  mov    0x10(%ebp),%eax
0821c0be +0x066:  mov    0x1c(%eax),%eax
0821c0c1 +0x069:  sub    $0x1,%eax
0821c0c4 +0x06c:  mov    %eax,-0x10(%ebp)
0821c0c7 +0x06f:  mov    0xc(%ebp),%eax
0821c0ca +0x072:  mov    0x4(%eax),%eax
0821c0cd +0x075:  lea    -0x10(%ebp),%edx
0821c0d0 +0x078:  mov    %edx,0x4(%esp)
0821c0d4 +0x07c:  mov    %eax,(%esp)
0821c0d7 +0x07f:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0821c0dc +0x084:  mov    %eax,-0xc(%ebp)
0821c0df +0x087:  mov    0x10(%ebp),%eax
0821c0e2 +0x08a:  lea    0x20(%eax),%edx
0821c0e5 +0x08d:  lea    -0x14(%ebp),%eax
0821c0e8 +0x090:  mov    %edx,0x4(%esp)
0821c0ec +0x094:  mov    %eax,(%esp)
0821c0ef +0x097:  call   08237f0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5b8
0821c0f4 +0x09c:  sub    $0x4,%esp
0821c0f7 +0x09f:  mov    0x10(%ebp),%eax
0821c0fa +0x0a2:  lea    0x20(%eax),%edx
0821c0fd +0x0a5:  lea    -0x18(%ebp),%eax
0821c100 +0x0a8:  mov    %edx,0x4(%esp)
0821c104 +0x0ac:  mov    %eax,(%esp)
0821c107 +0x0af:  call   08237f3a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd5e4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd5e4
0821c10c +0x0b4:  sub    $0x4,%esp
0821c10f +0x0b7:  jmp    0821c157 <+0xff>
0821c111 +0x0b9:  lea    -0x14(%ebp),%eax
0821c114 +0x0bc:  mov    %eax,(%esp)
0821c117 +0x0bf:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
0821c11c +0x0c4:  mov    0x4(%eax),%eax
0821c11f +0x0c7:  cmp    -0xc(%ebp),%eax
0821c122 +0x0ca:  seta   %al
0821c125 +0x0cd:  test   %al,%al
0821c127 +0x0cf:  je     0821c14c <+0xf4>
0821c129 +0x0d1:  lea    -0x14(%ebp),%eax
0821c12c +0x0d4:  mov    %eax,(%esp)
0821c12f +0x0d7:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
0821c134 +0x0dc:  mov    (%eax),%eax
0821c136 +0x0de:  mov    %eax,0x2(%ebx)
0821c139 +0x0e1:  lea    -0x14(%ebp),%eax
0821c13c +0x0e4:  mov    %eax,(%esp)
0821c13f +0x0e7:  call   08237fa8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd652>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd652
0821c144 +0x0ec:  mov    0x8(%eax),%eax
0821c147 +0x0ef:  mov    %eax,0x7(%ebx)
0821c14a +0x0f2:  jmp    0821c173 <+0x11b>
0821c14c +0x0f4:  lea    -0x14(%ebp),%eax
0821c14f +0x0f7:  mov    %eax,(%esp)
0821c152 +0x0fa:  call   08237f92 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd63c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd63c
0821c157 +0x0ff:  lea    -0x18(%ebp),%eax
0821c15a +0x102:  mov    %eax,0x4(%esp)
0821c15e +0x106:  lea    -0x14(%ebp),%eax
0821c161 +0x109:  mov    %eax,(%esp)
0821c164 +0x10c:  call   08237f66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd610>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd610
0821c169 +0x111:  test   %al,%al
0821c16b +0x113:  jne    0821c111 <+0xb9>
0821c16d +0x115:  jmp    0821c173 <+0x11b>
0821c16f +0x117:  nop
0821c170 +0x118:  jmp    0821c173 <+0x11b>
0821c172 +0x11a:  nop
0821c173 +0x11b:  mov    %ebx,%eax
0821c175 +0x11d:  mov    -0x4(%ebp),%ebx
0821c178 +0x120:  leave
0821c179 +0x121:  ret    $0x4
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::_getBonusItem @ 0x821c058

/* Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t const*) const */

stVendingMachineInfo_t *
Dispatcher_UseVendingMachine::_getBonusItem(stVendingMachineInfo_t *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_stack_00000008;
  int in_stack_0000000c;
  __normal_iterator local_1c [4];
  __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)param_1);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x23);
  cVar1 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if ((cVar1 == '\x01') &&
     (cVar1 = std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::empty
                        (), cVar1 == '\0')) {
    local_14 = *(int *)(in_stack_0000000c + 0x1c) - 1;
    local_10 = CMTRand::randInt(*(CMTRand **)(in_stack_00000008 + 4),&local_14);
    std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::begin();
    std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_18,local_1c), bVar2) {
      iVar4 = __gnu_cxx::
              __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
              ::operator->(local_18);
      if (local_10 < *(uint *)(iVar4 + 4)) {
        puVar5 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
                 ::operator->(local_18);
        *(undefined4 *)(param_1 + 2) = *puVar5;
        iVar4 = __gnu_cxx::
                __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
                ::operator->(local_18);
        *(undefined4 *)(param_1 + 7) = *(undefined4 *)(iVar4 + 8);
        return param_1;
      }
      __gnu_cxx::
      __normal_iterator<stVendingMachineOutput_t_const*,std::vector<stVendingMachineOutput_t,std::allocator<stVendingMachineOutput_t>>>
      ::operator++(local_18);
    }
  }
  return param_1;
}
```
