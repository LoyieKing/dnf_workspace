# send_area_users

`_ZN4Area15send_area_usersEP5CUser`

`Area::send_area_users(CUser*)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c22f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c22f2  _ZN4Area15send_area_usersEP5CUser
#           Area::send_area_users(CUser*)
# range [0x086c22f2, 0x086c25a5]
086c22f2 +0x000:  push   %ebp
086c22f3 +0x001:  mov    %esp,%ebp
086c22f5 +0x003:  push   %esi
086c22f6 +0x004:  push   %ebx
086c22f7 +0x005:  sub    $0x40,%esp
086c22fa +0x008:  mov    0xc(%ebp),%eax
086c22fd +0x00b:  mov    %eax,(%esp)
086c2300 +0x00e:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c2305 +0x013:  movsbl %al,%edx
086c2308 +0x016:  mov    0x8(%ebp),%eax
086c230b +0x019:  mov    0x4(%eax),%eax
086c230e +0x01c:  cmp    %eax,%edx
086c2310 +0x01e:  jne    086c232e <+0x3c>
086c2312 +0x020:  movl   $0x0,0x4(%esp)
086c231a +0x028:  mov    0xc(%ebp),%eax
086c231d +0x02b:  mov    %eax,(%esp)
086c2320 +0x02e:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c2325 +0x033:  mov    0x8(%ebp),%edx
086c2328 +0x036:  mov    (%edx),%edx
086c232a +0x038:  cmp    %edx,%eax
086c232c +0x03a:  je     086c2335 <+0x43>
086c232e +0x03c:  mov    $0x1,%eax
086c2333 +0x041:  jmp    086c233a <+0x48>
086c2335 +0x043:  mov    $0x0,%eax
086c233a +0x048:  test   %al,%al
086c233c +0x04a:  jne    086c259a <+0x2a8>
086c2342 +0x050:  lea    -0x24(%ebp),%eax
086c2345 +0x053:  mov    %eax,(%esp)
086c2348 +0x056:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c234d +0x05b:  lea    -0x24(%ebp),%eax
086c2350 +0x05e:  mov    %eax,(%esp)
086c2353 +0x061:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086c2358 +0x066:  movl   $0x18,0x8(%esp)
086c2360 +0x06e:  movl   $0x0,0x4(%esp)
086c2368 +0x076:  lea    -0x24(%ebp),%eax
086c236b +0x079:  mov    %eax,(%esp)
086c236e +0x07c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c2373 +0x081:  mov    0x8(%ebp),%eax
086c2376 +0x084:  mov    0x4(%eax),%eax
086c2379 +0x087:  mov    %eax,0x4(%esp)
086c237d +0x08b:  lea    -0x24(%ebp),%eax
086c2380 +0x08e:  mov    %eax,(%esp)
086c2383 +0x091:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c2388 +0x096:  movl   $0x1,0x4(%esp)
086c2390 +0x09e:  mov    0xc(%ebp),%eax
086c2393 +0x0a1:  mov    %eax,(%esp)
086c2396 +0x0a4:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c239b +0x0a9:  mov    %eax,0x4(%esp)
086c239f +0x0ad:  lea    -0x24(%ebp),%eax
086c23a2 +0x0b0:  mov    %eax,(%esp)
086c23a5 +0x0b3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c23aa +0x0b8:  lea    -0x24(%ebp),%eax
086c23ad +0x0bb:  mov    %eax,(%esp)
086c23b0 +0x0be:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086c23b5 +0x0c3:  mov    %eax,-0x28(%ebp)
086c23b8 +0x0c6:  movl   $0x0,-0x10(%ebp)
086c23bf +0x0cd:  mov    0x8(%ebp),%eax
086c23c2 +0x0d0:  add    $0x44,%eax
086c23c5 +0x0d3:  mov    %eax,(%esp)
086c23c8 +0x0d6:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086c23cd +0x0db:  mov    %eax,0x4(%esp)
086c23d1 +0x0df:  lea    -0x24(%ebp),%eax
086c23d4 +0x0e2:  mov    %eax,(%esp)
086c23d7 +0x0e5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c23dc +0x0ea:  mov    0x8(%ebp),%eax
086c23df +0x0ed:  lea    0x44(%eax),%edx
086c23e2 +0x0f0:  lea    -0x2c(%ebp),%eax
086c23e5 +0x0f3:  mov    %edx,0x4(%esp)
086c23e9 +0x0f7:  mov    %eax,(%esp)
086c23ec +0x0fa:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c23f1 +0x0ff:  sub    $0x4,%esp
086c23f4 +0x102:  movl   $0x0,-0xc(%ebp)
086c23fb +0x109:  jmp    086c2500 <+0x20e>
086c2400 +0x10e:  lea    -0x2c(%ebp),%eax
086c2403 +0x111:  mov    %eax,(%esp)
086c2406 +0x114:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c240b +0x119:  mov    0x4(%eax),%eax
086c240e +0x11c:  mov    %eax,-0xc(%ebp)
086c2411 +0x11f:  mov    -0xc(%ebp),%eax
086c2414 +0x122:  mov    %eax,(%esp)
086c2417 +0x125:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
086c241c +0x12a:  test   %al,%al
086c241e +0x12c:  jne    086c243a <+0x148>
086c2420 +0x12e:  mov    -0xc(%ebp),%eax
086c2423 +0x131:  mov    %eax,(%esp)
086c2426 +0x134:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
086c242b +0x139:  xor    $0x1,%eax
086c242e +0x13c:  test   %al,%al
086c2430 +0x13e:  je     086c2441 <+0x14f>
086c2432 +0x140:  mov    -0xc(%ebp),%eax
086c2435 +0x143:  cmp    0xc(%ebp),%eax
086c2438 +0x146:  jne    086c2441 <+0x14f>
086c243a +0x148:  mov    $0x1,%eax
086c243f +0x14d:  jmp    086c2446 <+0x154>
086c2441 +0x14f:  mov    $0x0,%eax
086c2446 +0x154:  test   %al,%al
086c2448 +0x156:  je     086c24e3 <+0x1f1>
086c244e +0x15c:  mov    -0xc(%ebp),%eax
086c2451 +0x15f:  mov    %eax,(%esp)
086c2454 +0x162:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c2459 +0x167:  movzwl %ax,%eax
086c245c +0x16a:  mov    %eax,0x4(%esp)
086c2460 +0x16e:  lea    -0x24(%ebp),%eax
086c2463 +0x171:  mov    %eax,(%esp)
086c2466 +0x174:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c246b +0x179:  mov    -0xc(%ebp),%eax
086c246e +0x17c:  mov    %eax,(%esp)
086c2471 +0x17f:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c2476 +0x184:  movzwl %ax,%eax
086c2479 +0x187:  mov    %eax,0x4(%esp)
086c247d +0x18b:  lea    -0x24(%ebp),%eax
086c2480 +0x18e:  mov    %eax,(%esp)
086c2483 +0x191:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2488 +0x196:  mov    -0xc(%ebp),%eax
086c248b +0x199:  mov    %eax,(%esp)
086c248e +0x19c:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c2493 +0x1a1:  movzwl %ax,%eax
086c2496 +0x1a4:  mov    %eax,0x4(%esp)
086c249a +0x1a8:  lea    -0x24(%ebp),%eax
086c249d +0x1ab:  mov    %eax,(%esp)
086c24a0 +0x1ae:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c24a5 +0x1b3:  mov    -0xc(%ebp),%eax
086c24a8 +0x1b6:  mov    %eax,(%esp)
086c24ab +0x1b9:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c24b0 +0x1be:  movsbl %al,%eax
086c24b3 +0x1c1:  mov    %eax,0x4(%esp)
086c24b7 +0x1c5:  lea    -0x24(%ebp),%eax
086c24ba +0x1c8:  mov    %eax,(%esp)
086c24bd +0x1cb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c24c2 +0x1d0:  mov    -0xc(%ebp),%eax
086c24c5 +0x1d3:  mov    %eax,(%esp)
086c24c8 +0x1d6:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c24cd +0x1db:  movsbl %al,%eax
086c24d0 +0x1de:  mov    %eax,0x4(%esp)
086c24d4 +0x1e2:  lea    -0x24(%ebp),%eax
086c24d7 +0x1e5:  mov    %eax,(%esp)
086c24da +0x1e8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c24df +0x1ed:  addl   $0x1,-0x10(%ebp)
086c24e3 +0x1f1:  lea    -0x14(%ebp),%eax
086c24e6 +0x1f4:  movl   $0x0,0x8(%esp)
086c24ee +0x1fc:  lea    -0x2c(%ebp),%edx
086c24f1 +0x1ff:  mov    %edx,0x4(%esp)
086c24f5 +0x203:  mov    %eax,(%esp)
086c24f8 +0x206:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c24fd +0x20b:  sub    $0x4,%esp
086c2500 +0x20e:  mov    0x8(%ebp),%eax
086c2503 +0x211:  lea    0x44(%eax),%edx
086c2506 +0x214:  lea    -0x18(%ebp),%eax
086c2509 +0x217:  mov    %edx,0x4(%esp)
086c250d +0x21b:  mov    %eax,(%esp)
086c2510 +0x21e:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c2515 +0x223:  sub    $0x4,%esp
086c2518 +0x226:  lea    -0x18(%ebp),%eax
086c251b +0x229:  mov    %eax,0x4(%esp)
086c251f +0x22d:  lea    -0x2c(%ebp),%eax
086c2522 +0x230:  mov    %eax,(%esp)
086c2525 +0x233:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c252a +0x238:  test   %al,%al
086c252c +0x23a:  jne    086c2400 <+0x10e>
086c2532 +0x240:  mov    -0x10(%ebp),%eax
086c2535 +0x243:  mov    %eax,0x8(%esp)
086c2539 +0x247:  lea    -0x28(%ebp),%eax
086c253c +0x24a:  mov    %eax,0x4(%esp)
086c2540 +0x24e:  lea    -0x24(%ebp),%eax
086c2543 +0x251:  mov    %eax,(%esp)
086c2546 +0x254:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
086c254b +0x259:  movl   $0x1,0x4(%esp)
086c2553 +0x261:  lea    -0x24(%ebp),%eax
086c2556 +0x264:  mov    %eax,(%esp)
086c2559 +0x267:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c255e +0x26c:  lea    -0x24(%ebp),%eax
086c2561 +0x26f:  mov    %eax,0x4(%esp)
086c2565 +0x273:  mov    0xc(%ebp),%eax
086c2568 +0x276:  mov    %eax,(%esp)
086c256b +0x279:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c2570 +0x27e:  jmp    086c258d <+0x29b>
086c2572 +0x280:  mov    %edx,%ebx
086c2574 +0x282:  mov    %eax,%esi
086c2576 +0x284:  lea    -0x24(%ebp),%eax
086c2579 +0x287:  mov    %eax,(%esp)
086c257c +0x28a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c2581 +0x28f:  mov    %esi,%eax
086c2583 +0x291:  mov    %ebx,%edx
086c2585 +0x293:  mov    %eax,(%esp)
086c2588 +0x296:  call   08ae3750 <_Unwind_Resume>
086c258d +0x29b:  lea    -0x24(%ebp),%eax
086c2590 +0x29e:  mov    %eax,(%esp)
086c2593 +0x2a1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c2598 +0x2a6:  jmp    086c259b <+0x2a9>
086c259a +0x2a8:  nop
086c259b +0x2a9:  lea    -0x8(%ebp),%esp
086c259e +0x2ac:  add    $0x0,%esp
086c25a1 +0x2af:  pop    %ebx
086c25a2 +0x2b0:  pop    %esi
086c25a3 +0x2b1:  pop    %ebp
086c25a4 +0x2b2:  ret
086c25a5 +0x2b3:  nop
```

## 反编译 C

```c
// Area::send_area_users @ 0x86c22f2

/* Area::send_area_users(CUser*) */

void __thiscall Area::send_area_users(Area *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  int local_2c;
  PacketGuard local_28 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  int local_14;
  CUser *local_10;
  
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if ((int)cVar2 == *(int *)(this + 4)) {
    iVar3 = CUser::get_area(param_1,false);
    if (iVar3 == *(int *)this) {
      bVar1 = false;
      goto LAB_086c233a;
    }
  }
  bVar1 = true;
LAB_086c233a:
  if (!bVar1) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086c2353 to 086c256f has its CatchHandler @ 086c2572 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x18);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(this + 4));
    iVar3 = CUser::get_area(param_1,true);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar3);
    local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    local_14 = 0;
    iVar3 = std::
            map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
            ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                    *)(this + 0x44));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar3);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_30);
    local_10 = (CUser *)0x0;
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_1c);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_30);
      local_10 = *(CUser **)(iVar3 + 4);
      cVar2 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)local_10);
      if (cVar2 == '\0') {
        cVar2 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)local_10);
        if ((cVar2 != '\x01') && (local_10 == param_1)) goto LAB_086c243a;
        bVar1 = false;
      }
      else {
LAB_086c243a:
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = CUser::get_unique_id(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar4 & 0xffff);
        uVar4 = CUser::get_posX(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar4 & 0xffff);
        uVar4 = CUser::get_posY(local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar4 & 0xffff);
        cVar2 = CUser::get_direction(local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar2);
        cVar2 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)cVar2);
        local_14 = local_14 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)local_30);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,&local_2c,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
