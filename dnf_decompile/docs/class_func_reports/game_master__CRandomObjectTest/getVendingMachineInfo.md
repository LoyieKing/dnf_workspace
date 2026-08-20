# getVendingMachineInfo

`_ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv`

`game_master::CRandomObjectTest::getVendingMachineInfo()`

| 类 | 地址 |
|---|---|
| `game_master::CRandomObjectTest` | `0x084b0444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0444  _ZN11game_master17CRandomObjectTest21getVendingMachineInfoEv
#           game_master::CRandomObjectTest::getVendingMachineInfo()
# range [0x084b0444, 0x084b054f]
084b0444 +0x000:  push   %ebp
084b0445 +0x001:  mov    %esp,%ebp
084b0447 +0x003:  sub    $0x38,%esp
084b044a +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084b044f +0x00b:  mov    %eax,(%esp)
084b0452 +0x00e:  call   0822b64c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcf6
084b0457 +0x013:  mov    %eax,-0xc(%ebp)
084b045a +0x016:  lea    -0x18(%ebp),%eax
084b045d +0x019:  mov    -0xc(%ebp),%edx
084b0460 +0x01c:  mov    %edx,0x4(%esp)
084b0464 +0x020:  mov    %eax,(%esp)
084b0467 +0x023:  call   08237c5a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd304>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd304
084b046c +0x028:  sub    $0x4,%esp
084b046f +0x02b:  jmp    084b0493 <+0x4f>
084b0471 +0x02d:  lea    -0x18(%ebp),%eax
084b0474 +0x030:  mov    %eax,(%esp)
084b0477 +0x033:  call   08237cf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd39e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd39e
084b047c +0x038:  mov    (%eax),%eax
084b047e +0x03a:  cmp    $0x1,%eax
084b0481 +0x03d:  sete   %al
084b0484 +0x040:  test   %al,%al
084b0486 +0x042:  jne    084b04c0 <+0x7c>
084b0488 +0x044:  lea    -0x18(%ebp),%eax
084b048b +0x047:  mov    %eax,(%esp)
084b048e +0x04a:  call   08237cde <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd388>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd388
084b0493 +0x04f:  lea    -0x14(%ebp),%eax
084b0496 +0x052:  mov    -0xc(%ebp),%edx
084b0499 +0x055:  mov    %edx,0x4(%esp)
084b049d +0x059:  mov    %eax,(%esp)
084b04a0 +0x05c:  call   08237c86 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd330>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd330
084b04a5 +0x061:  sub    $0x4,%esp
084b04a8 +0x064:  lea    -0x14(%ebp),%eax
084b04ab +0x067:  mov    %eax,0x4(%esp)
084b04af +0x06b:  lea    -0x18(%ebp),%eax
084b04b2 +0x06e:  mov    %eax,(%esp)
084b04b5 +0x071:  call   08237cb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd35c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd35c
084b04ba +0x076:  test   %al,%al
084b04bc +0x078:  jne    084b0471 <+0x2d>
084b04be +0x07a:  jmp    084b04c1 <+0x7d>
084b04c0 +0x07c:  nop
084b04c1 +0x07d:  lea    -0x18(%ebp),%eax
084b04c4 +0x080:  mov    %eax,(%esp)
084b04c7 +0x083:  call   08237cf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd39e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd39e
084b04cc +0x088:  lea    0x4(%eax),%edx
084b04cf +0x08b:  lea    -0x1c(%ebp),%eax
084b04d2 +0x08e:  mov    %edx,0x4(%esp)
084b04d6 +0x092:  mov    %eax,(%esp)
084b04d9 +0x095:  call   08237d08 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd3b2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd3b2
084b04de +0x09a:  sub    $0x4,%esp
084b04e1 +0x09d:  jmp    084b0512 <+0xce>
084b04e3 +0x09f:  lea    -0x1c(%ebp),%eax
084b04e6 +0x0a2:  mov    %eax,(%esp)
084b04e9 +0x0a5:  call   08237da2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd44c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd44c
084b04ee +0x0aa:  mov    (%eax),%eax
084b04f0 +0x0ac:  cmp    $0x1,%eax
084b04f3 +0x0af:  sete   %al
084b04f6 +0x0b2:  test   %al,%al
084b04f8 +0x0b4:  je     084b0507 <+0xc3>
084b04fa +0x0b6:  lea    -0x1c(%ebp),%eax
084b04fd +0x0b9:  mov    %eax,(%esp)
084b0500 +0x0bc:  call   08237dac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd456>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd456
084b0505 +0x0c1:  jmp    084b054d <+0x109>
084b0507 +0x0c3:  lea    -0x1c(%ebp),%eax
084b050a +0x0c6:  mov    %eax,(%esp)
084b050d +0x0c9:  call   08237d8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd436>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd436
084b0512 +0x0ce:  lea    -0x18(%ebp),%eax
084b0515 +0x0d1:  mov    %eax,(%esp)
084b0518 +0x0d4:  call   08237cf4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd39e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd39e
084b051d +0x0d9:  lea    0x4(%eax),%edx
084b0520 +0x0dc:  lea    -0x10(%ebp),%eax
084b0523 +0x0df:  mov    %edx,0x4(%esp)
084b0527 +0x0e3:  mov    %eax,(%esp)
084b052a +0x0e6:  call   08237d34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd3de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd3de
084b052f +0x0eb:  sub    $0x4,%esp
084b0532 +0x0ee:  lea    -0x10(%ebp),%eax
084b0535 +0x0f1:  mov    %eax,0x4(%esp)
084b0539 +0x0f5:  lea    -0x1c(%ebp),%eax
084b053c +0x0f8:  mov    %eax,(%esp)
084b053f +0x0fb:  call   08237d60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd40a
084b0544 +0x100:  test   %al,%al
084b0546 +0x102:  jne    084b04e3 <+0x9f>
084b0548 +0x104:  mov    $0x0,%eax
084b054d +0x109:  leave
084b054e +0x10a:  ret
084b054f +0x10b:  nop
```

## 反编译 C

```c
// game_master::CRandomObjectTest::getVendingMachineInfo @ 0x84b0444

/* game_master::CRandomObjectTest::getVendingMachineInfo() */

undefined4 game_master::CRandomObjectTest::getVendingMachineInfo(void)

{
  bool bVar1;
  CDataManager *this;
  int *piVar2;
  undefined4 uVar3;
  __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
  local_20 [4];
  __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  undefined4 local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::getVendingMachineTable(this);
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::begin();
  while( true ) {
    std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if ((!bVar1) ||
       (piVar2 = (int *)__gnu_cxx::
                        __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
                        ::operator->(local_1c), *piVar2 == 1)) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
    ::operator++(local_1c);
  }
  __gnu_cxx::
  __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
  ::operator->(local_1c);
  std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::begin();
  while( true ) {
    __gnu_cxx::
    __normal_iterator<stVendingMachine_t_const*,std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>>
    ::operator->(local_1c);
    std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::end();
    bVar1 = __gnu_cxx::operator!=(local_20,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
                    ::operator->(local_20);
    if (*piVar2 == 1) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
    ::operator++(local_20);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
          ::operator*(local_20);
  return uVar3;
}
```
