# process

`_ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PcRoomRentItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomRentItem` | `0x081e52c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e52c0  _ZN25Dispatcher_PcRoomRentItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PcRoomRentItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e52c0, 0x081e542d]
081e52c0 +0x000:  push   %ebp
081e52c1 +0x001:  mov    %esp,%ebp
081e52c3 +0x003:  push   %esi
081e52c4 +0x004:  push   %ebx
081e52c5 +0x005:  sub    $0x40,%esp
081e52c8 +0x008:  mov    0x14(%ebp),%eax
081e52cb +0x00b:  mov    %eax,-0x14(%ebp)
081e52ce +0x00e:  mov    0x10(%ebp),%eax
081e52d1 +0x011:  mov    %eax,0x8(%esp)
081e52d5 +0x015:  mov    0xc(%ebp),%eax
081e52d8 +0x018:  mov    %eax,0x4(%esp)
081e52dc +0x01c:  mov    0x8(%ebp),%eax
081e52df +0x01f:  mov    %eax,(%esp)
081e52e2 +0x022:  call   081e5762 <_ZN25Dispatcher_PcRoomRentItem11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_PcRoomRentItem::check_error(CUser*, MSG_BASE&)
081e52e7 +0x027:  mov    %eax,%edx
081e52e9 +0x029:  mov    -0x14(%ebp),%eax
081e52ec +0x02c:  mov    %edx,0x4(%eax)
081e52ef +0x02f:  mov    -0x14(%ebp),%eax
081e52f2 +0x032:  mov    0x4(%eax),%eax
081e52f5 +0x035:  test   %eax,%eax
081e52f7 +0x037:  je     081e5303 <+0x43>
081e52f9 +0x039:  mov    $0x0,%ebx
081e52fe +0x03e:  jmp    081e5425 <+0x165>
081e5303 +0x043:  mov    0x10(%ebp),%eax
081e5306 +0x046:  mov    %eax,-0x10(%ebp)
081e5309 +0x049:  lea    -0x28(%ebp),%eax
081e530c +0x04c:  mov    %eax,(%esp)
081e530f +0x04f:  call   0822f058 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4702>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4702
081e5314 +0x054:  movb   $0x1,-0x18(%ebp)
081e5318 +0x058:  mov    -0x10(%ebp),%eax
081e531b +0x05b:  movzbl 0xe(%eax),%eax
081e531f +0x05f:  movsbl %al,%eax
081e5322 +0x062:  mov    %eax,-0x1c(%ebp)
081e5325 +0x065:  movl   $0x0,-0xc(%ebp)
081e532c +0x06c:  jmp    081e536b <+0xab>
081e532e +0x06e:  lea    -0x30(%ebp),%eax
081e5331 +0x071:  mov    %eax,(%esp)
081e5334 +0x074:  call   0822f02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46d8
081e5339 +0x079:  mov    -0xc(%ebp),%edx
081e533c +0x07c:  mov    -0x10(%ebp),%eax
081e533f +0x07f:  movzbl 0xf(%eax,%edx,2),%eax
081e5344 +0x084:  mov    %al,-0x30(%ebp)
081e5347 +0x087:  mov    -0xc(%ebp),%edx
081e534a +0x08a:  mov    -0x10(%ebp),%eax
081e534d +0x08d:  movzbl 0x10(%eax,%edx,2),%eax
081e5352 +0x092:  mov    %al,-0x2f(%ebp)
081e5355 +0x095:  lea    -0x30(%ebp),%eax
081e5358 +0x098:  mov    %eax,0x4(%esp)
081e535c +0x09c:  lea    -0x28(%ebp),%eax
081e535f +0x09f:  mov    %eax,(%esp)
081e5362 +0x0a2:  call   08237464 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb0e
081e5367 +0x0a7:  addl   $0x1,-0xc(%ebp)
081e536b +0x0ab:  mov    -0x10(%ebp),%eax
081e536e +0x0ae:  movzbl 0xd(%eax),%eax
081e5372 +0x0b2:  movsbl %al,%eax
081e5375 +0x0b5:  cmp    -0xc(%ebp),%eax
081e5378 +0x0b8:  setg   %al
081e537b +0x0bb:  test   %al,%al
081e537d +0x0bd:  jne    081e532e <+0x6e>
081e537f +0x0bf:  lea    -0x28(%ebp),%eax
081e5382 +0x0c2:  mov    %eax,0x8(%esp)
081e5386 +0x0c6:  mov    0xc(%ebp),%eax
081e5389 +0x0c9:  mov    %eax,0x4(%esp)
081e538d +0x0cd:  mov    0x8(%ebp),%eax
081e5390 +0x0d0:  mov    %eax,(%esp)
081e5393 +0x0d3:  call   081e583e <_ZN25Dispatcher_PcRoomRentItem18giveDimensionItemsEP5CUserRN20InstanceRentalSystem9RentInputE>  ; Dispatcher_PcRoomRentItem::giveDimensionItems(CUser*, InstanceRentalSystem::RentInput&)
081e5398 +0x0d8:  mov    -0x14(%ebp),%eax
081e539b +0x0db:  lea    0x8(%eax),%edx
081e539e +0x0de:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
081e53a3 +0x0e3:  mov    %edx,0xc(%esp)
081e53a7 +0x0e7:  lea    -0x28(%ebp),%edx
081e53aa +0x0ea:  mov    %edx,0x8(%esp)
081e53ae +0x0ee:  mov    0xc(%ebp),%edx
081e53b1 +0x0f1:  mov    %edx,0x4(%esp)
081e53b5 +0x0f5:  mov    %eax,(%esp)
081e53b8 +0x0f8:  call   08270288 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE>  ; InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)
081e53bd +0x0fd:  mov    -0x14(%ebp),%edx
081e53c0 +0x100:  mov    %eax,0x4(%edx)
081e53c3 +0x103:  mov    -0x14(%ebp),%eax
081e53c6 +0x106:  mov    0x4(%eax),%eax
081e53c9 +0x109:  test   %eax,%eax
081e53cb +0x10b:  jne    081e53f8 <+0x138>
081e53cd +0x10d:  mov    -0x10(%ebp),%eax
081e53d0 +0x110:  movzbl 0xe(%eax),%eax
081e53d4 +0x114:  movsbl %al,%eax
081e53d7 +0x117:  mov    -0x14(%ebp),%edx
081e53da +0x11a:  add    $0x8,%edx
081e53dd +0x11d:  movl   $0x0,0xc(%esp)
081e53e5 +0x125:  mov    %eax,0x8(%esp)
081e53e9 +0x129:  mov    %edx,0x4(%esp)
081e53ed +0x12d:  mov    0xc(%ebp),%eax
081e53f0 +0x130:  mov    %eax,(%esp)
081e53f3 +0x133:  call   08676e3c <_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib>  ; CUser::UpdateCurrentCharacRentalInfo(InstanceRentalSystem::RentOutput const&, int, bool)
081e53f8 +0x138:  mov    $0x0,%ebx
081e53fd +0x13d:  lea    -0x28(%ebp),%eax
081e5400 +0x140:  mov    %eax,(%esp)
081e5403 +0x143:  call   082352b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa95c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa95c
081e5408 +0x148:  jmp    081e5425 <+0x165>
081e540a +0x14a:  mov    %edx,%ebx
081e540c +0x14c:  mov    %eax,%esi
081e540e +0x14e:  lea    -0x28(%ebp),%eax
081e5411 +0x151:  mov    %eax,(%esp)
081e5414 +0x154:  call   082352b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa95c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa95c
081e5419 +0x159:  mov    %esi,%eax
081e541b +0x15b:  mov    %ebx,%edx
081e541d +0x15d:  mov    %eax,(%esp)
081e5420 +0x160:  call   08ae3750 <_Unwind_Resume>
081e5425 +0x165:  mov    %ebx,%eax
081e5427 +0x167:  add    $0x40,%esp
081e542a +0x16a:  pop    %ebx
081e542b +0x16b:  pop    %esi
081e542c +0x16c:  pop    %ebp
081e542d +0x16d:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomRentItem::process @ 0x81e52c0

/* Dispatcher_PcRoomRentItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PcRoomRentItem::process
          (Dispatcher_PcRoomRentItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  MSG_BASE local_34;
  MSG_BASE local_33;
  RentInput local_2c [12];
  int local_20;
  undefined1 local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_18 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_18 + 4) = uVar1;
  if (*(int *)(local_18 + 4) == 0) {
    local_14 = param_2;
    InstanceRentalSystem::RentInput::RentInput(local_2c);
    local_1c = 1;
    local_20 = (int)(char)local_14[0xe];
    for (local_10 = 0; local_10 < (char)local_14[0xd]; local_10 = local_10 + 1) {
      InstanceRentalSystem::RentInput::RentInElem::RentInElem((RentInElem *)&local_34);
      local_34 = local_14[local_10 * 2 + 0xf];
      local_33 = local_14[local_10 * 2 + 0x10];
                    /* try { // try from 081e5362 to 081e53f7 has its CatchHandler @ 081e540a */
      std::
      vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
      ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                   *)local_2c,(RentInElem *)&local_34);
    }
    giveDimensionItems(this,param_1,local_2c);
    uVar1 = InstanceRentalSystem::Rent
                      (GlobalData::s_rentalSystem,param_1,local_2c,(RentOutput *)(local_18 + 8));
    *(undefined4 *)(local_18 + 4) = uVar1;
    if (*(int *)(local_18 + 4) == 0) {
      CUser::UpdateCurrentCharacRentalInfo
                (param_1,(RentOutput *)(local_18 + 8),(int)(char)local_14[0xe],false);
    }
    InstanceRentalSystem::RentInput::~RentInput(local_2c);
  }
  return 0;
}
```
