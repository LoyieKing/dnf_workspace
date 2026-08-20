# send_AllBasicInfo

`_ZN9GameWorld17send_AllBasicInfoEP5CUser`

`GameWorld::send_AllBasicInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c83fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c83fc  _ZN9GameWorld17send_AllBasicInfoEP5CUser
#           GameWorld::send_AllBasicInfo(CUser*)
# range [0x086c83fc, 0x086c8693]
086c83fc +0x000:  push   %ebp
086c83fd +0x001:  mov    %esp,%ebp
086c83ff +0x003:  push   %esi
086c8400 +0x004:  push   %ebx
086c8401 +0x005:  sub    $0x70,%esp
086c8404 +0x008:  lea    -0x44(%ebp),%eax
086c8407 +0x00b:  mov    %eax,(%esp)
086c840a +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c840f +0x013:  lea    -0x44(%ebp),%eax
086c8412 +0x016:  mov    %eax,(%esp)
086c8415 +0x019:  call   086c8396 <_Z20_makeBasicInfoHeaderR11PacketGuard>  ; _makeBasicInfoHeader(PacketGuard&)
086c841a +0x01e:  mov    %eax,-0x48(%ebp)
086c841d +0x021:  movl   $0x0,-0x14(%ebp)
086c8424 +0x028:  lea    -0x4c(%ebp),%eax
086c8427 +0x02b:  mov    %eax,(%esp)
086c842a +0x02e:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c842f +0x033:  movl   $0x0,-0x10(%ebp)
086c8436 +0x03a:  mov    0x8(%ebp),%eax
086c8439 +0x03d:  add    $0x134,%eax
086c843e +0x042:  mov    %eax,(%esp)
086c8441 +0x045:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086c8446 +0x04a:  test   %eax,%eax
086c8448 +0x04c:  setne  %al
086c844b +0x04f:  test   %al,%al
086c844d +0x051:  je     086c8623 <+0x227>
086c8453 +0x057:  mov    0x8(%ebp),%eax
086c8456 +0x05a:  lea    0x134(%eax),%edx
086c845c +0x060:  lea    -0x5c(%ebp),%eax
086c845f +0x063:  mov    %edx,0x4(%esp)
086c8463 +0x067:  mov    %eax,(%esp)
086c8466 +0x06a:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c846b +0x06f:  sub    $0x4,%esp
086c846e +0x072:  mov    -0x5c(%ebp),%eax
086c8471 +0x075:  mov    %eax,-0x4c(%ebp)
086c8474 +0x078:  jmp    086c85ee <+0x1f2>
086c8479 +0x07d:  lea    -0x4c(%ebp),%eax
086c847c +0x080:  mov    %eax,(%esp)
086c847f +0x083:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c8484 +0x088:  mov    0x4(%eax),%eax
086c8487 +0x08b:  mov    %eax,-0x10(%ebp)
086c848a +0x08e:  cmpl   $0x0,-0x10(%ebp)
086c848e +0x092:  je     086c859d <+0x1a1>
086c8494 +0x098:  mov    -0x10(%ebp),%eax
086c8497 +0x09b:  mov    %eax,(%esp)
086c849a +0x09e:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
086c849f +0x0a3:  test   %al,%al
086c84a1 +0x0a5:  je     086c85e3 <+0x1e7>
086c84a7 +0x0ab:  lea    -0x44(%ebp),%eax
086c84aa +0x0ae:  mov    %eax,(%esp)
086c84ad +0x0b1:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086c84b2 +0x0b6:  mov    %eax,-0xc(%ebp)
086c84b5 +0x0b9:  lea    -0x44(%ebp),%eax
086c84b8 +0x0bc:  movl   $0x0,0x8(%esp)
086c84c0 +0x0c4:  mov    %eax,0x4(%esp)
086c84c4 +0x0c8:  mov    -0x10(%ebp),%eax
086c84c7 +0x0cb:  mov    %eax,(%esp)
086c84ca +0x0ce:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
086c84cf +0x0d3:  xor    $0x1,%eax
086c84d2 +0x0d6:  test   %al,%al
086c84d4 +0x0d8:  je     086c851c <+0x120>
086c84d6 +0x0da:  movl   $0x5,0xc(%esp)
086c84de +0x0e2:  movl   $0xbe3,0x8(%esp)
086c84e6 +0x0ea:  movl   $&_ZZN9GameWorld17send_AllBasicInfoEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c84ee +0x0f2:  lea    -0x34(%ebp),%eax
086c84f1 +0x0f5:  mov    %eax,(%esp)
086c84f4 +0x0f8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c84f9 +0x0fd:  movl   $0xbe3,0xc(%esp)
086c8501 +0x105:  movl   $&_ZZN9GameWorld17send_AllBasicInfoEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c8509 +0x10d:  movl   $"[%s][%d]",0x4(%esp)
086c8511 +0x115:  lea    -0x34(%ebp),%eax
086c8514 +0x118:  mov    %eax,(%esp)
086c8517 +0x11b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c851c +0x120:  lea    -0x44(%ebp),%eax
086c851f +0x123:  mov    %eax,(%esp)
086c8522 +0x126:  call   086d18ee <_GLOBAL__I_MAX_VILLAGE_NUM+0x11f>  ; global constructors keyed to MAX_VILLAGE_NUM+0x11f
086c8527 +0x12b:  test   %eax,%eax
086c8529 +0x12d:  setne  %al
086c852c +0x130:  test   %al,%al
086c852e +0x132:  je     086c8597 <+0x19b>
086c8530 +0x134:  mov    -0xc(%ebp),%eax
086c8533 +0x137:  mov    %eax,0x4(%esp)
086c8537 +0x13b:  lea    -0x44(%ebp),%eax
086c853a +0x13e:  mov    %eax,(%esp)
086c853d +0x141:  call   0822b7b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe5a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe5a
086c8542 +0x146:  mov    -0x14(%ebp),%eax
086c8545 +0x149:  mov    %eax,0x8(%esp)
086c8549 +0x14d:  lea    -0x48(%ebp),%eax
086c854c +0x150:  mov    %eax,0x4(%esp)
086c8550 +0x154:  lea    -0x44(%ebp),%eax
086c8553 +0x157:  mov    %eax,(%esp)
086c8556 +0x15a:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
086c855b +0x15f:  movl   $0x1,0x4(%esp)
086c8563 +0x167:  lea    -0x44(%ebp),%eax
086c8566 +0x16a:  mov    %eax,(%esp)
086c8569 +0x16d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c856e +0x172:  lea    -0x44(%ebp),%eax
086c8571 +0x175:  mov    %eax,0x4(%esp)
086c8575 +0x179:  mov    0xc(%ebp),%eax
086c8578 +0x17c:  mov    %eax,(%esp)
086c857b +0x17f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c8580 +0x184:  lea    -0x44(%ebp),%eax
086c8583 +0x187:  mov    %eax,(%esp)
086c8586 +0x18a:  call   086c8396 <_Z20_makeBasicInfoHeaderR11PacketGuard>  ; _makeBasicInfoHeader(PacketGuard&)
086c858b +0x18f:  mov    %eax,-0x48(%ebp)
086c858e +0x192:  movl   $0x0,-0x14(%ebp)
086c8595 +0x199:  jmp    086c85ee <+0x1f2>
086c8597 +0x19b:  addl   $0x1,-0x14(%ebp)
086c859b +0x19f:  jmp    086c85e3 <+0x1e7>
086c859d +0x1a1:  movl   $0x5,0xc(%esp)
086c85a5 +0x1a9:  movl   $0xbf6,0x8(%esp)
086c85ad +0x1b1:  movl   $&_ZZN9GameWorld17send_AllBasicInfoEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086c85b5 +0x1b9:  lea    -0x24(%ebp),%eax
086c85b8 +0x1bc:  mov    %eax,(%esp)
086c85bb +0x1bf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c85c0 +0x1c4:  movl   $0xbf6,0xc(%esp)
086c85c8 +0x1cc:  movl   $&_ZZN9GameWorld17send_AllBasicInfoEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
086c85d0 +0x1d4:  movl   $"[%s][%d]",0x4(%esp)
086c85d8 +0x1dc:  lea    -0x24(%ebp),%eax
086c85db +0x1df:  mov    %eax,(%esp)
086c85de +0x1e2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c85e3 +0x1e7:  lea    -0x4c(%ebp),%eax
086c85e6 +0x1ea:  mov    %eax,(%esp)
086c85e9 +0x1ed:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086c85ee +0x1f2:  mov    0x8(%ebp),%eax
086c85f1 +0x1f5:  lea    0x134(%eax),%edx
086c85f7 +0x1fb:  lea    -0x38(%ebp),%eax
086c85fa +0x1fe:  mov    %edx,0x4(%esp)
086c85fe +0x202:  mov    %eax,(%esp)
086c8601 +0x205:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c8606 +0x20a:  sub    $0x4,%esp
086c8609 +0x20d:  lea    -0x38(%ebp),%eax
086c860c +0x210:  mov    %eax,0x4(%esp)
086c8610 +0x214:  lea    -0x4c(%ebp),%eax
086c8613 +0x217:  mov    %eax,(%esp)
086c8616 +0x21a:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c861b +0x21f:  test   %al,%al
086c861d +0x221:  jne    086c8479 <+0x7d>
086c8623 +0x227:  mov    -0x14(%ebp),%eax
086c8626 +0x22a:  mov    %eax,0x8(%esp)
086c862a +0x22e:  lea    -0x48(%ebp),%eax
086c862d +0x231:  mov    %eax,0x4(%esp)
086c8631 +0x235:  lea    -0x44(%ebp),%eax
086c8634 +0x238:  mov    %eax,(%esp)
086c8637 +0x23b:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
086c863c +0x240:  movl   $0x1,0x4(%esp)
086c8644 +0x248:  lea    -0x44(%ebp),%eax
086c8647 +0x24b:  mov    %eax,(%esp)
086c864a +0x24e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c864f +0x253:  lea    -0x44(%ebp),%eax
086c8652 +0x256:  mov    %eax,0x4(%esp)
086c8656 +0x25a:  mov    0xc(%ebp),%eax
086c8659 +0x25d:  mov    %eax,(%esp)
086c865c +0x260:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c8661 +0x265:  jmp    086c867e <+0x282>
086c8663 +0x267:  mov    %edx,%ebx
086c8665 +0x269:  mov    %eax,%esi
086c8667 +0x26b:  lea    -0x44(%ebp),%eax
086c866a +0x26e:  mov    %eax,(%esp)
086c866d +0x271:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8672 +0x276:  mov    %esi,%eax
086c8674 +0x278:  mov    %ebx,%edx
086c8676 +0x27a:  mov    %eax,(%esp)
086c8679 +0x27d:  call   08ae3750 <_Unwind_Resume>
086c867e +0x282:  lea    -0x44(%ebp),%eax
086c8681 +0x285:  mov    %eax,(%esp)
086c8684 +0x288:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8689 +0x28d:  lea    -0x8(%ebp),%esp
086c868c +0x290:  add    $0x0,%esp
086c868f +0x293:  pop    %ebx
086c8690 +0x294:  pop    %esi
086c8691 +0x295:  pop    %ebp
086c8692 +0x296:  ret
086c8693 +0x297:  nop
```

## 反编译 C

```c
// GameWorld::send_AllBasicInfo @ 0x86c83fc

/* GameWorld::send_AllBasicInfo(CUser*) */

void __thiscall GameWorld::send_AllBasicInfo(GameWorld *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_60 [4];
  undefined4 local_50;
  int local_4c;
  PacketGuard local_48 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_3c [4];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  CUserCharacInfo *local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_48);
                    /* try { // try from 086c8415 to 086c8660 has its CatchHandler @ 086c8663 */
  local_4c = _makeBasicInfoHeader(local_48);
  local_18 = 0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_50);
  local_14 = (CUserCharacInfo *)0x0;
  iVar2 = std::
          map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
                  *)(this + 0x134));
  if (iVar2 != 0) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
             *)local_60);
    local_50 = local_60[0];
LAB_086c85ee:
    do {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_3c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_50,
                         (_Rb_tree_iterator *)local_3c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_50);
      local_14 = *(CUserCharacInfo **)(iVar2 + 4);
      if (local_14 == (CUserCharacInfo *)0x0) {
        cMyTrace::cMyTrace(local_28,"void GameWorld::send_AllBasicInfo(CUser*)",0xbf6,5);
        cMyTrace::operator()(local_28,"[%s][%d]","void GameWorld::send_AllBasicInfo(CUser*)",0xbf6);
      }
      else {
        cVar1 = CUserCharacInfo::IsCurCharacVisible(local_14);
        if (cVar1 != '\0') {
          local_10 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_48);
          cVar1 = CUser::make_basic_info((CUser *)local_14,(char *)local_48,'\0');
          if (cVar1 != '\x01') {
            cMyTrace::cMyTrace(local_38,"void GameWorld::send_AllBasicInfo(CUser*)",0xbe3,5);
            cMyTrace::operator()
                      (local_38,"[%s][%d]","void GameWorld::send_AllBasicInfo(CUser*)",0xbe3);
          }
          iVar2 = InterfacePacketBuf::getLastError((InterfacePacketBuf *)local_48);
          if (iVar2 != 0) {
            InterfacePacketBuf::set_index((InterfacePacketBuf *)local_48,local_10);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,&local_4c,local_18);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
            CUser::Send(param_1,local_48);
            local_4c = _makeBasicInfoHeader(local_48);
            local_18 = 0;
            goto LAB_086c85ee;
          }
          local_18 = local_18 + 1;
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_50);
    } while( true );
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,&local_4c,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
  CUser::Send(param_1,local_48);
  PacketGuard::~PacketGuard(local_48);
  return;
}
```
