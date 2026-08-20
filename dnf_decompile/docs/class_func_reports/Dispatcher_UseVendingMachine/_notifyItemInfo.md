# _notifyItemInfo

`_ZNK28Dispatcher_UseVendingMachine15_notifyItemInfoEPK22stVendingMachineInfo_tP5CUserRKNS_17stPutItemResult_tE`

`Dispatcher_UseVendingMachine::_notifyItemInfo(stVendingMachineInfo_t const*, CUser*, Dispatcher_UseVendingMachine::stPutItemResult_t const&) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821c17c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821c17c  _ZNK28Dispatcher_UseVendingMachine15_notifyItemInfoEPK22stVendingMachineInfo_tP5CUserRKNS_17stPutItemResult_tE
#           Dispatcher_UseVendingMachine::_notifyItemInfo(stVendingMachineInfo_t const*, CUser*, Dispatcher_UseVendingMachine::stPutItemResult_t const&) const
# range [0x0821c17c, 0x0821c25b]
0821c17c +0x00:  push   %ebp
0821c17d +0x01:  mov    %esp,%ebp
0821c17f +0x03:  push   %esi
0821c180 +0x04:  push   %ebx
0821c181 +0x05:  sub    $0x30,%esp
0821c184 +0x08:  mov    0x14(%ebp),%eax
0821c187 +0x0b:  lea    0x4(%eax),%edx
0821c18a +0x0e:  mov    0x14(%ebp),%eax
0821c18d +0x11:  mov    %edx,0x8(%esp)
0821c191 +0x15:  mov    %eax,0x4(%esp)
0821c195 +0x19:  lea    -0x1c(%ebp),%eax
0821c198 +0x1c:  mov    %eax,(%esp)
0821c19b +0x1f:  call   08237ff6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd6a0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd6a0
0821c1a0 +0x24:  mov    0xc(%ebp),%eax
0821c1a3 +0x27:  lea    0x2c(%eax),%edx
0821c1a6 +0x2a:  lea    -0x14(%ebp),%eax
0821c1a9 +0x2d:  mov    %edx,0x4(%esp)
0821c1ad +0x31:  mov    %eax,(%esp)
0821c1b0 +0x34:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0821c1b5 +0x39:  sub    $0x4,%esp
0821c1b8 +0x3c:  mov    0xc(%ebp),%eax
0821c1bb +0x3f:  lea    0x2c(%eax),%edx
0821c1be +0x42:  lea    -0x10(%ebp),%eax
0821c1c1 +0x45:  mov    %edx,0x4(%esp)
0821c1c5 +0x49:  mov    %eax,(%esp)
0821c1c8 +0x4c:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0821c1cd +0x51:  sub    $0x4,%esp
0821c1d0 +0x54:  lea    -0x20(%ebp),%eax
0821c1d3 +0x57:  lea    -0x1c(%ebp),%edx
0821c1d6 +0x5a:  mov    %edx,0xc(%esp)
0821c1da +0x5e:  mov    -0x14(%ebp),%edx
0821c1dd +0x61:  mov    %edx,0x8(%esp)
0821c1e1 +0x65:  mov    -0x10(%ebp),%edx
0821c1e4 +0x68:  mov    %edx,0x4(%esp)
0821c1e8 +0x6c:  mov    %eax,(%esp)
0821c1eb +0x6f:  call   08238027 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd6d1>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd6d1
0821c1f0 +0x74:  sub    $0x4,%esp
0821c1f3 +0x77:  mov    0xc(%ebp),%eax
0821c1f6 +0x7a:  lea    0x2c(%eax),%edx
0821c1f9 +0x7d:  lea    -0xc(%ebp),%eax
0821c1fc +0x80:  mov    %edx,0x4(%esp)
0821c200 +0x84:  mov    %eax,(%esp)
0821c203 +0x87:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0821c208 +0x8c:  sub    $0x4,%esp
0821c20b +0x8f:  lea    -0xc(%ebp),%eax
0821c20e +0x92:  mov    %eax,0x4(%esp)
0821c212 +0x96:  lea    -0x20(%ebp),%eax
0821c215 +0x99:  mov    %eax,(%esp)
0821c218 +0x9c:  call   081123d7 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18e9>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18e9
0821c21d +0xa1:  test   %al,%al
0821c21f +0xa3:  jne    0821c251 <+0xd5>
0821c221 +0xa5:  mov    0x14(%ebp),%eax
0821c224 +0xa8:  mov    0x4(%eax),%esi
0821c227 +0xab:  mov    0x14(%ebp),%eax
0821c22a +0xae:  mov    (%eax),%ebx
0821c22c +0xb0:  mov    0x10(%ebp),%eax
0821c22f +0xb3:  mov    %eax,(%esp)
0821c232 +0xb6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0821c237 +0xbb:  movl   $0x5,0xc(%esp)
0821c23f +0xc3:  mov    %esi,0x8(%esp)
0821c243 +0xc7:  mov    %ebx,0x4(%esp)
0821c247 +0xcb:  mov    %eax,(%esp)
0821c24a +0xce:  call   08638074 <_ZN29TimerVendingMachineItemNotify11registTimerEimjj>  ; TimerVendingMachineItemNotify::registTimer(int, unsigned long, unsigned int, unsigned int)
0821c24f +0xd3:  jmp    0821c252 <+0xd6>
0821c251 +0xd5:  nop
0821c252 +0xd6:  lea    -0x8(%ebp),%esp
0821c255 +0xd9:  add    $0x0,%esp
0821c258 +0xdc:  pop    %ebx
0821c259 +0xdd:  pop    %esi
0821c25a +0xde:  pop    %ebp
0821c25b +0xdf:  ret
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::_notifyItemInfo @ 0x821c17c

/* Dispatcher_UseVendingMachine::_notifyItemInfo(stVendingMachineInfo_t const*, CUser*,
   Dispatcher_UseVendingMachine::stPutItemResult_t const&) const */

void __thiscall
Dispatcher_UseVendingMachine::_notifyItemInfo
          (Dispatcher_UseVendingMachine *this,stVendingMachineInfo_t *param_1,CUser *param_2,
          stPutItemResult_t *param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined1 local_24 [4];
  pair<int,int> local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [4];
  
  std::pair<int,int>::pair<unsigned_long_const&,unsigned_int_const&>
            (local_20,(ulong *)param_3,(uint *)(param_3 + 4));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>,std::pair<int,int>>
            (local_24,local_14,local_18,local_20);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  bVar3 = __gnu_cxx::operator==(local_24,local_10);
  if (!bVar3) {
    uVar1 = *(uint *)(param_3 + 4);
    uVar2 = *(ulong *)param_3;
    iVar4 = CUser::GetUID(param_2);
    TimerVendingMachineItemNotify::registTimer(iVar4,uVar2,uVar1,5);
  }
  return;
}
```
