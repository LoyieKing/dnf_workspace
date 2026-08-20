# delete_event_items

`_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb`

`CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08505db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08505db4  _ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb
#           CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)
# range [0x08505db4, 0x0850675d]
08505db4 +0x000:  push   %ebp
08505db5 +0x001:  mov    %esp,%ebp
08505db7 +0x003:  push   %esi
08505db8 +0x004:  push   %ebx
08505db9 +0x005:  sub    $0xb0,%esp
08505dbf +0x00b:  mov    0x20(%ebp),%eax
08505dc2 +0x00e:  mov    %al,-0x8c(%ebp)
08505dc8 +0x014:  mov    0x8(%ebp),%eax
08505dcb +0x017:  mov    (%eax),%eax
08505dcd +0x019:  mov    %eax,(%esp)
08505dd0 +0x01c:  call   0850d522 <_GLOBAL__I_g_emptySlot+0x457>  ; global constructors keyed to g_emptySlot+0x457
08505dd5 +0x021:  test   %al,%al
08505dd7 +0x023:  je     08505de3 <+0x2f>
08505dd9 +0x025:  mov    $0x1,%eax
08505dde +0x02a:  jmp    08506754 <+0x9a0>
08505de3 +0x02f:  movl   $0x0,-0xc(%ebp)
08505dea +0x036:  mov    0xc(%ebp),%eax
08505ded +0x039:  mov    %eax,(%esp)
08505df0 +0x03c:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08505df5 +0x041:  test   %eax,%eax
08505df7 +0x043:  sete   %al
08505dfa +0x046:  test   %al,%al
08505dfc +0x048:  je     08505e06 <+0x52>
08505dfe +0x04a:  mov    -0xc(%ebp),%eax
08505e01 +0x04d:  jmp    08506754 <+0x9a0>
08505e06 +0x052:  lea    -0x7c(%ebp),%eax
08505e09 +0x055:  mov    %eax,(%esp)
08505e0c +0x058:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08505e11 +0x05d:  lea    -0x80(%ebp),%eax
08505e14 +0x060:  mov    %eax,(%esp)
08505e17 +0x063:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
08505e1c +0x068:  lea    -0x90(%ebp),%eax
08505e22 +0x06e:  mov    0xc(%ebp),%edx
08505e25 +0x071:  mov    %edx,0x4(%esp)
08505e29 +0x075:  mov    %eax,(%esp)
08505e2c +0x078:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08505e31 +0x07d:  sub    $0x4,%esp
08505e34 +0x080:  mov    -0x90(%ebp),%eax
08505e3a +0x086:  mov    %eax,-0x80(%ebp)
08505e3d +0x089:  jmp    08506704 <+0x950>
08505e42 +0x08e:  movb   $0x0,-0x15(%ebp)
08505e46 +0x092:  lea    -0x80(%ebp),%eax
08505e49 +0x095:  mov    %eax,(%esp)
08505e4c +0x098:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08505e51 +0x09d:  mov    0x4(%eax),%edx
08505e54 +0x0a0:  mov    (%eax),%eax
08505e56 +0x0a2:  mov    %eax,-0x60(%ebp)
08505e59 +0x0a5:  mov    %edx,-0x5c(%ebp)
08505e5c +0x0a8:  lea    -0x60(%ebp),%eax
08505e5f +0x0ab:  mov    %eax,0x4(%esp)
08505e63 +0x0af:  lea    -0x7c(%ebp),%eax
08505e66 +0x0b2:  mov    %eax,(%esp)
08505e69 +0x0b5:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08505e6e +0x0ba:  mov    -0x7c(%ebp),%eax
08505e71 +0x0bd:  mov    %eax,-0x14(%ebp)
08505e74 +0x0c0:  mov    -0x78(%ebp),%eax
08505e77 +0x0c3:  mov    %eax,-0x74(%ebp)
08505e7a +0x0c6:  cmpl   $0x0,-0x14(%ebp)
08505e7e +0x0ca:  jne    08505f49 <+0x195>
08505e84 +0x0d0:  mov    -0x74(%ebp),%eax
08505e87 +0x0d3:  movl   $0x1,0xc(%esp)
08505e8f +0x0db:  mov    0x18(%ebp),%edx
08505e92 +0x0de:  mov    %edx,0x8(%esp)
08505e96 +0x0e2:  mov    %eax,0x4(%esp)
08505e9a +0x0e6:  mov    0x8(%ebp),%eax
08505e9d +0x0e9:  mov    %eax,(%esp)
08505ea0 +0x0ec:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08505ea5 +0x0f1:  test   %al,%al
08505ea7 +0x0f3:  je     08505ef1 <+0x13d>
08505ea9 +0x0f5:  addl   $0x1,-0xc(%ebp)
08505ead +0x0f9:  movl   $0x0,-0x58(%ebp)
08505eb4 +0x100:  lea    -0x58(%ebp),%eax
08505eb7 +0x103:  mov    %eax,0x4(%esp)
08505ebb +0x107:  mov    0x10(%ebp),%eax
08505ebe +0x10a:  mov    %eax,(%esp)
08505ec1 +0x10d:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08505ec6 +0x112:  movl   $0x0,-0x54(%ebp)
08505ecd +0x119:  lea    -0x54(%ebp),%eax
08505ed0 +0x11c:  mov    %eax,0x4(%esp)
08505ed4 +0x120:  mov    0x10(%ebp),%eax
08505ed7 +0x123:  mov    %eax,(%esp)
08505eda +0x126:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08505edf +0x12b:  lea    -0x74(%ebp),%eax
08505ee2 +0x12e:  mov    %eax,0x4(%esp)
08505ee6 +0x132:  mov    0x10(%ebp),%eax
08505ee9 +0x135:  mov    %eax,(%esp)
08505eec +0x138:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08505ef1 +0x13d:  cmpl   $0x4,0x18(%ebp)
08505ef5 +0x141:  jne    08505f27 <+0x173>
08505ef7 +0x143:  mov    0x8(%ebp),%eax
08505efa +0x146:  mov    (%eax),%eax
08505efc +0x148:  test   %eax,%eax
08505efe +0x14a:  je     08505f27 <+0x173>
08505f00 +0x14c:  mov    -0x74(%ebp),%eax
08505f03 +0x14f:  mov    %eax,%esi
08505f05 +0x151:  mov    0x8(%ebp),%eax
08505f08 +0x154:  mov    (%eax),%ebx
08505f0a +0x156:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
08505f0f +0x15b:  mov    %esi,0xc(%esp)
08505f13 +0x15f:  mov    %ebx,0x8(%esp)
08505f17 +0x163:  movl   $0x11,0x4(%esp)
08505f1f +0x16b:  mov    %eax,(%esp)
08505f22 +0x16e:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08505f27 +0x173:  lea    -0x50(%ebp),%eax
08505f2a +0x176:  movl   $0x0,0x8(%esp)
08505f32 +0x17e:  lea    -0x80(%ebp),%edx
08505f35 +0x181:  mov    %edx,0x4(%esp)
08505f39 +0x185:  mov    %eax,(%esp)
08505f3c +0x188:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08505f41 +0x18d:  sub    $0x4,%esp
08505f44 +0x190:  jmp    08506704 <+0x950>
08505f49 +0x195:  cmpl   $0x2,-0x14(%ebp)
08505f4d +0x199:  jne    08505ff2 <+0x23e>
08505f53 +0x19f:  mov    0x8(%ebp),%eax
08505f56 +0x1a2:  mov    (%eax),%eax
08505f58 +0x1a4:  mov    %eax,(%esp)
08505f5b +0x1a7:  call   0817a17c <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x1fa>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x1fa
08505f60 +0x1ac:  mov    -0x74(%ebp),%edx
08505f63 +0x1af:  cmp    %edx,%eax
08505f65 +0x1b1:  setae  %al
08505f68 +0x1b4:  test   %al,%al
08505f6a +0x1b6:  je     08505fd0 <+0x21c>
08505f6c +0x1b8:  mov    -0x74(%ebp),%edx
08505f6f +0x1bb:  mov    0x8(%ebp),%eax
08505f72 +0x1be:  mov    (%eax),%eax
08505f74 +0x1c0:  movl   $0x3,0x8(%esp)
08505f7c +0x1c8:  mov    %edx,0x4(%esp)
08505f80 +0x1cc:  mov    %eax,(%esp)
08505f83 +0x1cf:  call   0864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>  ; CUser::UseWinPoint(int, eWPSubReason)
08505f88 +0x1d4:  addl   $0x1,-0xc(%ebp)
08505f8c +0x1d8:  movl   $0x0,-0x4c(%ebp)
08505f93 +0x1df:  lea    -0x4c(%ebp),%eax
08505f96 +0x1e2:  mov    %eax,0x4(%esp)
08505f9a +0x1e6:  mov    0x10(%ebp),%eax
08505f9d +0x1e9:  mov    %eax,(%esp)
08505fa0 +0x1ec:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08505fa5 +0x1f1:  movl   $0x2,-0x48(%ebp)
08505fac +0x1f8:  lea    -0x48(%ebp),%eax
08505faf +0x1fb:  mov    %eax,0x4(%esp)
08505fb3 +0x1ff:  mov    0x10(%ebp),%eax
08505fb6 +0x202:  mov    %eax,(%esp)
08505fb9 +0x205:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08505fbe +0x20a:  lea    -0x74(%ebp),%eax
08505fc1 +0x20d:  mov    %eax,0x4(%esp)
08505fc5 +0x211:  mov    0x10(%ebp),%eax
08505fc8 +0x214:  mov    %eax,(%esp)
08505fcb +0x217:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08505fd0 +0x21c:  lea    -0x44(%ebp),%eax
08505fd3 +0x21f:  movl   $0x0,0x8(%esp)
08505fdb +0x227:  lea    -0x80(%ebp),%edx
08505fde +0x22a:  mov    %edx,0x4(%esp)
08505fe2 +0x22e:  mov    %eax,(%esp)
08505fe5 +0x231:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08505fea +0x236:  sub    $0x4,%esp
08505fed +0x239:  jmp    08506704 <+0x950>
08505ff2 +0x23e:  mov    -0x14(%ebp),%eax
08505ff5 +0x241:  mov    %eax,0x4(%esp)
08505ff9 +0x245:  mov    0x8(%ebp),%eax
08505ffc +0x248:  mov    %eax,(%esp)
08505fff +0x24b:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08506004 +0x250:  mov    %eax,-0x10(%ebp)
08506007 +0x253:  cmpl   $0x0,-0x10(%ebp)
0850600b +0x257:  je     08506703 <+0x94f>
08506011 +0x25d:  lea    -0x70(%ebp),%eax
08506014 +0x260:  mov    %eax,0xc(%esp)
08506018 +0x264:  lea    -0x6c(%ebp),%eax
0850601b +0x267:  mov    %eax,0x8(%esp)
0850601f +0x26b:  mov    -0x10(%ebp),%eax
08506022 +0x26e:  mov    %eax,0x4(%esp)
08506026 +0x272:  mov    0x8(%ebp),%eax
08506029 +0x275:  mov    %eax,(%esp)
0850602c +0x278:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08506031 +0x27d:  cmpl   $0x1,-0x10(%ebp)
08506035 +0x281:  jne    0850631d <+0x569>
0850603b +0x287:  mov    -0x6c(%ebp),%eax
0850603e +0x28a:  mov    %eax,-0x68(%ebp)
08506041 +0x28d:  jmp    08506103 <+0x34f>
08506046 +0x292:  mov    0x8(%ebp),%eax
08506049 +0x295:  mov    0x650(%eax),%edx
0850604f +0x29b:  mov    -0x68(%ebp),%eax
08506052 +0x29e:  imul   $0x3d,%eax,%eax
08506055 +0x2a1:  lea    (%edx,%eax,1),%eax
08506058 +0x2a4:  mov    0x2(%eax),%edx
0850605b +0x2a7:  mov    -0x14(%ebp),%eax
0850605e +0x2aa:  cmp    %eax,%edx
08506060 +0x2ac:  jne    085060fa <+0x346>
08506066 +0x2b2:  addl   $0x1,-0xc(%ebp)
0850606a +0x2b6:  movl   $0x0,-0x40(%ebp)
08506071 +0x2bd:  lea    -0x40(%ebp),%eax
08506074 +0x2c0:  mov    %eax,0x4(%esp)
08506078 +0x2c4:  mov    0x10(%ebp),%eax
0850607b +0x2c7:  mov    %eax,(%esp)
0850607e +0x2ca:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08506083 +0x2cf:  lea    -0x68(%ebp),%eax
08506086 +0x2d2:  mov    %eax,0x4(%esp)
0850608a +0x2d6:  mov    0x10(%ebp),%eax
0850608d +0x2d9:  mov    %eax,(%esp)
08506090 +0x2dc:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08506095 +0x2e1:  mov    0x8(%ebp),%eax
08506098 +0x2e4:  mov    0x650(%eax),%edx
0850609e +0x2ea:  mov    -0x68(%ebp),%eax
085060a1 +0x2ed:  imul   $0x3d,%eax,%eax
085060a4 +0x2f0:  lea    (%edx,%eax,1),%eax
085060a7 +0x2f3:  add    $0x7,%eax
085060aa +0x2f6:  mov    %eax,0x4(%esp)
085060ae +0x2fa:  mov    0x10(%ebp),%eax
085060b1 +0x2fd:  mov    %eax,(%esp)
085060b4 +0x300:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085060b9 +0x305:  mov    -0x68(%ebp),%eax
085060bc +0x308:  movl   $0x1,0x14(%esp)
085060c4 +0x310:  mov    0x1c(%ebp),%edx
085060c7 +0x313:  mov    %edx,0x10(%esp)
085060cb +0x317:  movl   $0x1,0xc(%esp)
085060d3 +0x31f:  mov    %eax,0x8(%esp)
085060d7 +0x323:  movl   $0x1,0x4(%esp)
085060df +0x32b:  mov    0x8(%ebp),%eax
085060e2 +0x32e:  mov    %eax,(%esp)
085060e5 +0x331:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085060ea +0x336:  mov    -0x74(%ebp),%eax
085060ed +0x339:  sub    $0x1,%eax
085060f0 +0x33c:  mov    %eax,-0x74(%ebp)
085060f3 +0x33f:  mov    -0x74(%ebp),%eax
085060f6 +0x342:  test   %eax,%eax
085060f8 +0x344:  je     08506118 <+0x364>
085060fa +0x346:  mov    -0x68(%ebp),%eax
085060fd +0x349:  add    $0x1,%eax
08506100 +0x34c:  mov    %eax,-0x68(%ebp)
08506103 +0x34f:  mov    -0x68(%ebp),%edx
08506106 +0x352:  mov    -0x70(%ebp),%eax
08506109 +0x355:  cmp    %eax,%edx
0850610b +0x357:  setle  %al
0850610e +0x35a:  test   %al,%al
08506110 +0x35c:  jne    08506046 <+0x292>
08506116 +0x362:  jmp    08506119 <+0x365>
08506118 +0x364:  nop
08506119 +0x365:  mov    -0x74(%ebp),%eax
0850611c +0x368:  test   %eax,%eax
0850611e +0x36a:  jle    08506201 <+0x44d>
08506124 +0x370:  movl   $0x3,-0x68(%ebp)
0850612b +0x377:  jmp    085061ed <+0x439>
08506130 +0x37c:  mov    0x8(%ebp),%eax
08506133 +0x37f:  mov    0x650(%eax),%edx
08506139 +0x385:  mov    -0x68(%ebp),%eax
0850613c +0x388:  imul   $0x3d,%eax,%eax
0850613f +0x38b:  lea    (%edx,%eax,1),%eax
08506142 +0x38e:  mov    0x2(%eax),%edx
08506145 +0x391:  mov    -0x14(%ebp),%eax
08506148 +0x394:  cmp    %eax,%edx
0850614a +0x396:  jne    085061e4 <+0x430>
08506150 +0x39c:  addl   $0x1,-0xc(%ebp)
08506154 +0x3a0:  movl   $0x0,-0x3c(%ebp)
0850615b +0x3a7:  lea    -0x3c(%ebp),%eax
0850615e +0x3aa:  mov    %eax,0x4(%esp)
08506162 +0x3ae:  mov    0x10(%ebp),%eax
08506165 +0x3b1:  mov    %eax,(%esp)
08506168 +0x3b4:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0850616d +0x3b9:  lea    -0x68(%ebp),%eax
08506170 +0x3bc:  mov    %eax,0x4(%esp)
08506174 +0x3c0:  mov    0x10(%ebp),%eax
08506177 +0x3c3:  mov    %eax,(%esp)
0850617a +0x3c6:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850617f +0x3cb:  mov    0x8(%ebp),%eax
08506182 +0x3ce:  mov    0x650(%eax),%edx
08506188 +0x3d4:  mov    -0x68(%ebp),%eax
0850618b +0x3d7:  imul   $0x3d,%eax,%eax
0850618e +0x3da:  lea    (%edx,%eax,1),%eax
08506191 +0x3dd:  add    $0x7,%eax
08506194 +0x3e0:  mov    %eax,0x4(%esp)
08506198 +0x3e4:  mov    0x10(%ebp),%eax
0850619b +0x3e7:  mov    %eax,(%esp)
0850619e +0x3ea:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085061a3 +0x3ef:  mov    -0x68(%ebp),%eax
085061a6 +0x3f2:  movl   $0x1,0x14(%esp)
085061ae +0x3fa:  mov    0x1c(%ebp),%edx
085061b1 +0x3fd:  mov    %edx,0x10(%esp)
085061b5 +0x401:  movl   $0x1,0xc(%esp)
085061bd +0x409:  mov    %eax,0x8(%esp)
085061c1 +0x40d:  movl   $0x1,0x4(%esp)
085061c9 +0x415:  mov    0x8(%ebp),%eax
085061cc +0x418:  mov    %eax,(%esp)
085061cf +0x41b:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085061d4 +0x420:  mov    -0x74(%ebp),%eax
085061d7 +0x423:  sub    $0x1,%eax
085061da +0x426:  mov    %eax,-0x74(%ebp)
085061dd +0x429:  mov    -0x74(%ebp),%eax
085061e0 +0x42c:  test   %eax,%eax
085061e2 +0x42e:  je     08506200 <+0x44c>
085061e4 +0x430:  mov    -0x68(%ebp),%eax
085061e7 +0x433:  add    $0x1,%eax
085061ea +0x436:  mov    %eax,-0x68(%ebp)
085061ed +0x439:  mov    -0x68(%ebp),%eax
085061f0 +0x43c:  cmp    $0x8,%eax
085061f3 +0x43f:  setle  %al
085061f6 +0x442:  test   %al,%al
085061f8 +0x444:  jne    08506130 <+0x37c>
085061fe +0x44a:  jmp    08506201 <+0x44d>
08506200 +0x44c:  nop
08506201 +0x44d:  mov    -0x74(%ebp),%eax
08506204 +0x450:  test   %eax,%eax
08506206 +0x452:  jle    08506309 <+0x555>
0850620c +0x458:  movl   $0x0,-0x84(%ebp)
08506216 +0x462:  jmp    085062f2 <+0x53e>
0850621b +0x467:  mov    -0x84(%ebp),%eax
08506221 +0x46d:  mov    0x8(%ebp),%edx
08506224 +0x470:  imul   $0x3d,%eax,%eax
08506227 +0x473:  lea    (%edx,%eax,1),%eax
0850622a +0x476:  add    $0x10,%eax
0850622d +0x479:  mov    0xe(%eax),%edx
08506230 +0x47c:  mov    -0x14(%ebp),%eax
08506233 +0x47f:  cmp    %eax,%edx
08506235 +0x481:  jne    085062e3 <+0x52f>
0850623b +0x487:  mov    -0x84(%ebp),%eax
08506241 +0x48d:  cmp    $0xb,%eax
08506244 +0x490:  jg     0850624c <+0x498>
08506246 +0x492:  mov    0x14(%ebp),%eax
08506249 +0x495:  movb   $0x1,(%eax)
0850624c +0x498:  addl   $0x1,-0xc(%ebp)
08506250 +0x49c:  movl   $0x3,-0x38(%ebp)
08506257 +0x4a3:  lea    -0x38(%ebp),%eax
0850625a +0x4a6:  mov    %eax,0x4(%esp)
0850625e +0x4aa:  mov    0x10(%ebp),%eax
08506261 +0x4ad:  mov    %eax,(%esp)
08506264 +0x4b0:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08506269 +0x4b5:  lea    -0x84(%ebp),%eax
0850626f +0x4bb:  mov    %eax,0x4(%esp)
08506273 +0x4bf:  mov    0x10(%ebp),%eax
08506276 +0x4c2:  mov    %eax,(%esp)
08506279 +0x4c5:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850627e +0x4ca:  mov    -0x84(%ebp),%eax
08506284 +0x4d0:  imul   $0x3d,%eax,%eax
08506287 +0x4d3:  add    $0x10,%eax
0850628a +0x4d6:  add    0x8(%ebp),%eax
0850628d +0x4d9:  add    $0x13,%eax
08506290 +0x4dc:  mov    %eax,0x4(%esp)
08506294 +0x4e0:  mov    0x10(%ebp),%eax
08506297 +0x4e3:  mov    %eax,(%esp)
0850629a +0x4e6:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850629f +0x4eb:  mov    -0x84(%ebp),%eax
085062a5 +0x4f1:  movl   $0x1,0x14(%esp)
085062ad +0x4f9:  mov    0x1c(%ebp),%edx
085062b0 +0x4fc:  mov    %edx,0x10(%esp)
085062b4 +0x500:  movl   $0x1,0xc(%esp)
085062bc +0x508:  mov    %eax,0x8(%esp)
085062c0 +0x50c:  movl   $0x0,0x4(%esp)
085062c8 +0x514:  mov    0x8(%ebp),%eax
085062cb +0x517:  mov    %eax,(%esp)
085062ce +0x51a:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085062d3 +0x51f:  mov    -0x74(%ebp),%eax
085062d6 +0x522:  sub    $0x1,%eax
085062d9 +0x525:  mov    %eax,-0x74(%ebp)
085062dc +0x528:  mov    -0x74(%ebp),%eax
085062df +0x52b:  test   %eax,%eax
085062e1 +0x52d:  je     08506308 <+0x554>
085062e3 +0x52f:  mov    -0x84(%ebp),%eax
085062e9 +0x535:  add    $0x1,%eax
085062ec +0x538:  mov    %eax,-0x84(%ebp)
085062f2 +0x53e:  mov    -0x84(%ebp),%eax
085062f8 +0x544:  cmp    $0x19,%eax
085062fb +0x547:  setle  %al
085062fe +0x54a:  test   %al,%al
08506300 +0x54c:  jne    0850621b <+0x467>
08506306 +0x552:  jmp    08506309 <+0x555>
08506308 +0x554:  nop
08506309 +0x555:  mov    -0x74(%ebp),%eax
0850630c +0x558:  test   %eax,%eax
0850630e +0x55a:  jne    08506695 <+0x8e1>
08506314 +0x560:  movb   $0x1,-0x15(%ebp)
08506318 +0x564:  jmp    08506695 <+0x8e1>
0850631d +0x569:  movl   $0x3,-0x68(%ebp)
08506324 +0x570:  jmp    085064ba <+0x706>
08506329 +0x575:  mov    0x8(%ebp),%eax
0850632c +0x578:  mov    0x650(%eax),%edx
08506332 +0x57e:  mov    -0x68(%ebp),%eax
08506335 +0x581:  imul   $0x3d,%eax,%eax
08506338 +0x584:  lea    (%edx,%eax,1),%eax
0850633b +0x587:  mov    0x2(%eax),%edx
0850633e +0x58a:  mov    -0x14(%ebp),%eax
08506341 +0x58d:  cmp    %eax,%edx
08506343 +0x58f:  jne    085064b1 <+0x6fd>
08506349 +0x595:  mov    0x8(%ebp),%eax
0850634c +0x598:  mov    0x650(%eax),%edx
08506352 +0x59e:  mov    -0x68(%ebp),%eax
08506355 +0x5a1:  imul   $0x3d,%eax,%eax
08506358 +0x5a4:  lea    (%edx,%eax,1),%eax
0850635b +0x5a7:  mov    0x7(%eax),%edx
0850635e +0x5aa:  mov    -0x74(%ebp),%eax
08506361 +0x5ad:  cmp    %eax,%edx
08506363 +0x5af:  jl     085064b1 <+0x6fd>
08506369 +0x5b5:  mov    -0x74(%ebp),%edx
0850636c +0x5b8:  mov    -0x68(%ebp),%eax
0850636f +0x5bb:  movl   $0x1,0x14(%esp)
08506377 +0x5c3:  mov    0x1c(%ebp),%ecx
0850637a +0x5c6:  mov    %ecx,0x10(%esp)
0850637e +0x5ca:  mov    %edx,0xc(%esp)
08506382 +0x5ce:  mov    %eax,0x8(%esp)
08506386 +0x5d2:  movl   $0x1,0x4(%esp)
0850638e +0x5da:  mov    0x8(%ebp),%eax
08506391 +0x5dd:  mov    %eax,(%esp)
08506394 +0x5e0:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08506399 +0x5e5:  movb   $0x1,-0x15(%ebp)
0850639d +0x5e9:  addl   $0x1,-0xc(%ebp)
085063a1 +0x5ed:  movl   $0x0,-0x34(%ebp)
085063a8 +0x5f4:  lea    -0x34(%ebp),%eax
085063ab +0x5f7:  mov    %eax,0x4(%esp)
085063af +0x5fb:  mov    0x10(%ebp),%eax
085063b2 +0x5fe:  mov    %eax,(%esp)
085063b5 +0x601:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
085063ba +0x606:  lea    -0x68(%ebp),%eax
085063bd +0x609:  mov    %eax,0x4(%esp)
085063c1 +0x60d:  mov    0x10(%ebp),%eax
085063c4 +0x610:  mov    %eax,(%esp)
085063c7 +0x613:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085063cc +0x618:  lea    -0x74(%ebp),%eax
085063cf +0x61b:  mov    %eax,0x4(%esp)
085063d3 +0x61f:  mov    0x10(%ebp),%eax
085063d6 +0x622:  mov    %eax,(%esp)
085063d9 +0x625:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085063de +0x62a:  mov    0x8(%ebp),%eax
085063e1 +0x62d:  mov    (%eax),%eax
085063e3 +0x62f:  test   %eax,%eax
085063e5 +0x631:  je     08506427 <+0x673>
085063e7 +0x633:  cmpl   $0x8,0x1c(%ebp)
085063eb +0x637:  jne    08506427 <+0x673>
085063ed +0x639:  cmpb   $0x0,-0x8c(%ebp)
085063f4 +0x640:  je     08506427 <+0x673>
085063f6 +0x642:  mov    0x8(%ebp),%eax
085063f9 +0x645:  mov    (%eax),%esi
085063fb +0x647:  mov    -0x74(%ebp),%ebx
085063fe +0x64a:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08506403 +0x64f:  movl   $0x65,0x10(%esp)
0850640b +0x657:  mov    %esi,0xc(%esp)
0850640f +0x65b:  mov    %ebx,0x8(%esp)
08506413 +0x65f:  mov    -0x14(%ebp),%edx
08506416 +0x662:  mov    %edx,0x4(%esp)
0850641a +0x666:  mov    %eax,(%esp)
0850641d +0x669:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
08506422 +0x66e:  jmp    085064af <+0x6fb>
08506427 +0x673:  mov    0x8(%ebp),%eax
0850642a +0x676:  mov    (%eax),%eax
0850642c +0x678:  test   %eax,%eax
0850642e +0x67a:  je     08506472 <+0x6be>
08506430 +0x67c:  cmpl   $0x8,0x1c(%ebp)
08506434 +0x680:  jne    08506472 <+0x6be>
08506436 +0x682:  movzbl -0x8c(%ebp),%eax
0850643d +0x689:  xor    $0x1,%eax
08506440 +0x68c:  test   %al,%al
08506442 +0x68e:  je     08506472 <+0x6be>
08506444 +0x690:  mov    0x8(%ebp),%eax
08506447 +0x693:  mov    (%eax),%esi
08506449 +0x695:  mov    -0x74(%ebp),%ebx
0850644c +0x698:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08506451 +0x69d:  movl   $0x64,0x10(%esp)
08506459 +0x6a5:  mov    %esi,0xc(%esp)
0850645d +0x6a9:  mov    %ebx,0x8(%esp)
08506461 +0x6ad:  mov    -0x14(%ebp),%edx
08506464 +0x6b0:  mov    %edx,0x4(%esp)
08506468 +0x6b4:  mov    %eax,(%esp)
0850646b +0x6b7:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
08506470 +0x6bc:  jmp    085064af <+0x6fb>
08506472 +0x6be:  mov    0x8(%ebp),%eax
08506475 +0x6c1:  mov    (%eax),%eax
08506477 +0x6c3:  test   %eax,%eax
08506479 +0x6c5:  je     085064cd <+0x719>
0850647b +0x6c7:  cmpl   $0x4,0x1c(%ebp)
0850647f +0x6cb:  jne    085064d0 <+0x71c>
08506481 +0x6cd:  mov    0x8(%ebp),%eax
08506484 +0x6d0:  mov    (%eax),%esi
08506486 +0x6d2:  mov    -0x74(%ebp),%ebx
08506489 +0x6d5:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
0850648e +0x6da:  movl   $0x66,0x10(%esp)
08506496 +0x6e2:  mov    %esi,0xc(%esp)
0850649a +0x6e6:  mov    %ebx,0x8(%esp)
0850649e +0x6ea:  mov    -0x14(%ebp),%edx
085064a1 +0x6ed:  mov    %edx,0x4(%esp)
085064a5 +0x6f1:  mov    %eax,(%esp)
085064a8 +0x6f4:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
085064ad +0x6f9:  jmp    085064d1 <+0x71d>
085064af +0x6fb:  jmp    085064d1 <+0x71d>
085064b1 +0x6fd:  mov    -0x68(%ebp),%eax
085064b4 +0x700:  add    $0x1,%eax
085064b7 +0x703:  mov    %eax,-0x68(%ebp)
085064ba +0x706:  mov    -0x68(%ebp),%eax
085064bd +0x709:  cmp    $0x8,%eax
085064c0 +0x70c:  setle  %al
085064c3 +0x70f:  test   %al,%al
085064c5 +0x711:  jne    08506329 <+0x575>
085064cb +0x717:  jmp    085064d1 <+0x71d>
085064cd +0x719:  nop
085064ce +0x71a:  jmp    085064d1 <+0x71d>
085064d0 +0x71c:  nop
085064d1 +0x71d:  movzbl -0x15(%ebp),%eax
085064d5 +0x721:  xor    $0x1,%eax
085064d8 +0x724:  test   %al,%al
085064da +0x726:  je     08506695 <+0x8e1>
085064e0 +0x72c:  mov    -0x6c(%ebp),%eax
085064e3 +0x72f:  mov    %eax,-0x68(%ebp)
085064e6 +0x732:  jmp    0850667c <+0x8c8>
085064eb +0x737:  mov    0x8(%ebp),%eax
085064ee +0x73a:  mov    0x650(%eax),%edx
085064f4 +0x740:  mov    -0x68(%ebp),%eax
085064f7 +0x743:  imul   $0x3d,%eax,%eax
085064fa +0x746:  lea    (%edx,%eax,1),%eax
085064fd +0x749:  mov    0x2(%eax),%edx
08506500 +0x74c:  mov    -0x14(%ebp),%eax
08506503 +0x74f:  cmp    %eax,%edx
08506505 +0x751:  jne    08506673 <+0x8bf>
0850650b +0x757:  mov    0x8(%ebp),%eax
0850650e +0x75a:  mov    0x650(%eax),%edx
08506514 +0x760:  mov    -0x68(%ebp),%eax
08506517 +0x763:  imul   $0x3d,%eax,%eax
0850651a +0x766:  lea    (%edx,%eax,1),%eax
0850651d +0x769:  mov    0x7(%eax),%edx
08506520 +0x76c:  mov    -0x74(%ebp),%eax
08506523 +0x76f:  cmp    %eax,%edx
08506525 +0x771:  jl     08506673 <+0x8bf>
0850652b +0x777:  mov    -0x74(%ebp),%edx
0850652e +0x77a:  mov    -0x68(%ebp),%eax
08506531 +0x77d:  movl   $0x1,0x14(%esp)
08506539 +0x785:  mov    0x1c(%ebp),%ecx
0850653c +0x788:  mov    %ecx,0x10(%esp)
08506540 +0x78c:  mov    %edx,0xc(%esp)
08506544 +0x790:  mov    %eax,0x8(%esp)
08506548 +0x794:  movl   $0x1,0x4(%esp)
08506550 +0x79c:  mov    0x8(%ebp),%eax
08506553 +0x79f:  mov    %eax,(%esp)
08506556 +0x7a2:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0850655b +0x7a7:  movb   $0x1,-0x15(%ebp)
0850655f +0x7ab:  addl   $0x1,-0xc(%ebp)
08506563 +0x7af:  movl   $0x0,-0x30(%ebp)
0850656a +0x7b6:  lea    -0x30(%ebp),%eax
0850656d +0x7b9:  mov    %eax,0x4(%esp)
08506571 +0x7bd:  mov    0x10(%ebp),%eax
08506574 +0x7c0:  mov    %eax,(%esp)
08506577 +0x7c3:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0850657c +0x7c8:  lea    -0x68(%ebp),%eax
0850657f +0x7cb:  mov    %eax,0x4(%esp)
08506583 +0x7cf:  mov    0x10(%ebp),%eax
08506586 +0x7d2:  mov    %eax,(%esp)
08506589 +0x7d5:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
0850658e +0x7da:  lea    -0x74(%ebp),%eax
08506591 +0x7dd:  mov    %eax,0x4(%esp)
08506595 +0x7e1:  mov    0x10(%ebp),%eax
08506598 +0x7e4:  mov    %eax,(%esp)
0850659b +0x7e7:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085065a0 +0x7ec:  mov    0x8(%ebp),%eax
085065a3 +0x7ef:  mov    (%eax),%eax
085065a5 +0x7f1:  test   %eax,%eax
085065a7 +0x7f3:  je     085065e9 <+0x835>
085065a9 +0x7f5:  cmpl   $0x8,0x1c(%ebp)
085065ad +0x7f9:  jne    085065e9 <+0x835>
085065af +0x7fb:  cmpb   $0x0,-0x8c(%ebp)
085065b6 +0x802:  je     085065e9 <+0x835>
085065b8 +0x804:  mov    0x8(%ebp),%eax
085065bb +0x807:  mov    (%eax),%esi
085065bd +0x809:  mov    -0x74(%ebp),%ebx
085065c0 +0x80c:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
085065c5 +0x811:  movl   $0x65,0x10(%esp)
085065cd +0x819:  mov    %esi,0xc(%esp)
085065d1 +0x81d:  mov    %ebx,0x8(%esp)
085065d5 +0x821:  mov    -0x14(%ebp),%edx
085065d8 +0x824:  mov    %edx,0x4(%esp)
085065dc +0x828:  mov    %eax,(%esp)
085065df +0x82b:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
085065e4 +0x830:  jmp    08506671 <+0x8bd>
085065e9 +0x835:  mov    0x8(%ebp),%eax
085065ec +0x838:  mov    (%eax),%eax
085065ee +0x83a:  test   %eax,%eax
085065f0 +0x83c:  je     08506634 <+0x880>
085065f2 +0x83e:  cmpl   $0x8,0x1c(%ebp)
085065f6 +0x842:  jne    08506634 <+0x880>
085065f8 +0x844:  movzbl -0x8c(%ebp),%eax
085065ff +0x84b:  xor    $0x1,%eax
08506602 +0x84e:  test   %al,%al
08506604 +0x850:  je     08506634 <+0x880>
08506606 +0x852:  mov    0x8(%ebp),%eax
08506609 +0x855:  mov    (%eax),%esi
0850660b +0x857:  mov    -0x74(%ebp),%ebx
0850660e +0x85a:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08506613 +0x85f:  movl   $0x64,0x10(%esp)
0850661b +0x867:  mov    %esi,0xc(%esp)
0850661f +0x86b:  mov    %ebx,0x8(%esp)
08506623 +0x86f:  mov    -0x14(%ebp),%edx
08506626 +0x872:  mov    %edx,0x4(%esp)
0850662a +0x876:  mov    %eax,(%esp)
0850662d +0x879:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
08506632 +0x87e:  jmp    08506671 <+0x8bd>
08506634 +0x880:  mov    0x8(%ebp),%eax
08506637 +0x883:  mov    (%eax),%eax
08506639 +0x885:  test   %eax,%eax
0850663b +0x887:  je     08506691 <+0x8dd>
0850663d +0x889:  cmpl   $0x4,0x1c(%ebp)
08506641 +0x88d:  jne    08506694 <+0x8e0>
08506643 +0x88f:  mov    0x8(%ebp),%eax
08506646 +0x892:  mov    (%eax),%esi
08506648 +0x894:  mov    -0x74(%ebp),%ebx
0850664b +0x897:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08506650 +0x89c:  movl   $0x66,0x10(%esp)
08506658 +0x8a4:  mov    %esi,0xc(%esp)
0850665c +0x8a8:  mov    %ebx,0x8(%esp)
08506660 +0x8ac:  mov    -0x14(%ebp),%edx
08506663 +0x8af:  mov    %edx,0x4(%esp)
08506667 +0x8b3:  mov    %eax,(%esp)
0850666a +0x8b6:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
0850666f +0x8bb:  jmp    08506695 <+0x8e1>
08506671 +0x8bd:  jmp    08506695 <+0x8e1>
08506673 +0x8bf:  mov    -0x68(%ebp),%eax
08506676 +0x8c2:  add    $0x1,%eax
08506679 +0x8c5:  mov    %eax,-0x68(%ebp)
0850667c +0x8c8:  mov    -0x68(%ebp),%edx
0850667f +0x8cb:  mov    -0x70(%ebp),%eax
08506682 +0x8ce:  cmp    %eax,%edx
08506684 +0x8d0:  setle  %al
08506687 +0x8d3:  test   %al,%al
08506689 +0x8d5:  jne    085064eb <+0x737>
0850668f +0x8db:  jmp    08506695 <+0x8e1>
08506691 +0x8dd:  nop
08506692 +0x8de:  jmp    08506695 <+0x8e1>
08506694 +0x8e0:  nop
08506695 +0x8e1:  movzbl -0x15(%ebp),%eax
08506699 +0x8e5:  xor    $0x1,%eax
0850669c +0x8e8:  test   %al,%al
0850669e +0x8ea:  je     085066e4 <+0x930>
085066a0 +0x8ec:  movl   $0x5,0xc(%esp)
085066a8 +0x8f4:  movl   $0x1d3a,0x8(%esp)
085066b0 +0x8fc:  movl   $&_ZZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonbE19__PRETTY_FUNCTION__,0x4(%esp)
085066b8 +0x904:  lea    -0x2c(%ebp),%eax
085066bb +0x907:  mov    %eax,(%esp)
085066be +0x90a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085066c3 +0x90f:  mov    -0x14(%ebp),%eax
085066c6 +0x912:  mov    %eax,0x8(%esp)
085066ca +0x916:  movl   $"NOT CRITICAL BUT FOR OBSERVING, No Event Item %d FOUND!",0x4(%esp)
085066d2 +0x91e:  lea    -0x2c(%ebp),%eax
085066d5 +0x921:  mov    %eax,(%esp)
085066d8 +0x924:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085066dd +0x929:  mov    $0x0,%eax
085066e2 +0x92e:  jmp    08506754 <+0x9a0>
085066e4 +0x930:  lea    -0x1c(%ebp),%eax
085066e7 +0x933:  movl   $0x0,0x8(%esp)
085066ef +0x93b:  lea    -0x80(%ebp),%edx
085066f2 +0x93e:  mov    %edx,0x4(%esp)
085066f6 +0x942:  mov    %eax,(%esp)
085066f9 +0x945:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
085066fe +0x94a:  sub    $0x4,%esp
08506701 +0x94d:  jmp    08506704 <+0x950>
08506703 +0x94f:  nop
08506704 +0x950:  lea    -0x64(%ebp),%eax
08506707 +0x953:  mov    0xc(%ebp),%edx
0850670a +0x956:  mov    %edx,0x4(%esp)
0850670e +0x95a:  mov    %eax,(%esp)
08506711 +0x95d:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
08506716 +0x962:  sub    $0x4,%esp
08506719 +0x965:  lea    -0x64(%ebp),%eax
0850671c +0x968:  mov    %eax,0x4(%esp)
08506720 +0x96c:  lea    -0x80(%ebp),%eax
08506723 +0x96f:  mov    %eax,(%esp)
08506726 +0x972:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
0850672b +0x977:  test   %al,%al
0850672d +0x979:  jne    08505e42 <+0x8e>
08506733 +0x97f:  mov    0xc(%ebp),%eax
08506736 +0x982:  mov    %eax,(%esp)
08506739 +0x985:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0850673e +0x98a:  mov    -0xc(%ebp),%edx
08506741 +0x98d:  cmp    %edx,%eax
08506743 +0x98f:  setne  %al
08506746 +0x992:  test   %al,%al
08506748 +0x994:  je     08506751 <+0x99d>
0850674a +0x996:  mov    $0x0,%eax
0850674f +0x99b:  jmp    08506754 <+0x9a0>
08506751 +0x99d:  mov    -0xc(%ebp),%eax
08506754 +0x9a0:  lea    -0x8(%ebp),%esp
08506757 +0x9a3:  add    $0x0,%esp
0850675a +0x9a6:  pop    %ebx
0850675b +0x9a7:  pop    %esi
0850675c +0x9a8:  pop    %ebp
0850675d +0x9a9:  ret
```

## 反编译 C

```c
// CInventory::delete_event_items @ 0x8505db4

/* CInventory::delete_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason,
   bool) */

int __thiscall
CInventory::delete_event_items
          (CInventory *this,vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *param_1,
          vector<int,std::allocator<int>> *param_2,undefined1 *param_3,int param_5,int param_6,
          char param_7)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CValueStatistic *pCVar6;
  uint uVar7;
  CCubeStatistic *pCVar8;
  int local_88;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_84 [4];
  int local_80;
  uint local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  __normal_iterator local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c [2];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_54 [4];
  int local_50 [2];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  int local_44 [5];
  cMyTrace local_30 [16];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [7];
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  
  cVar2 = CUser::getGmQuestFlag(*(CUser **)this);
  if (cVar2 == '\0') {
    local_10 = 0;
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_1);
    if (iVar4 != 0) {
      std::pair<int,int>::pair((pair<int,int> *)&local_80);
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::__normal_iterator(local_84);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar3 = __gnu_cxx::operator!=(local_84,local_68);
        if (!bVar3) break;
        local_19 = '\0';
        puVar5 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                 ::operator*(local_84);
        local_60 = puVar5[1];
        local_64 = *puVar5;
        std::pair<int,int>::operator=((pair<int,int> *)&local_80,(pair *)&local_64);
        local_18 = local_80;
        local_78 = local_7c;
        if (local_80 == 0) {
          cVar2 = use_money(this,local_7c,param_5,1);
          if (cVar2 != '\0') {
            local_10 = local_10 + 1;
            local_5c[0] = 0;
            std::vector<int,std::allocator<int>>::push_back(param_2,local_5c);
            local_5c[1] = 0;
            std::vector<int,std::allocator<int>>::push_back(param_2,local_5c + 1);
            std::vector<int,std::allocator<int>>::push_back(param_2,(int *)&local_78);
          }
          uVar7 = local_78;
          if ((param_5 == 4) && (*(int *)this != 0)) {
            uVar1 = *(undefined4 *)this;
            pCVar6 = (CValueStatistic *)GetInstanceValueStatistic();
            CValueStatistic::AddValueStatistic(pCVar6,0x11,uVar1,uVar7);
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_54,(int)local_84);
        }
        else if (local_80 == 2) {
          uVar7 = CUserCharacInfo::GetWinPoint(*(CUserCharacInfo **)this);
          if (local_78 <= uVar7) {
            CUser::UseWinPoint(*(CUser **)this,local_78,3);
            local_10 = local_10 + 1;
            local_50[0] = 0;
            std::vector<int,std::allocator<int>>::push_back(param_2,local_50);
            local_50[1] = 2;
            std::vector<int,std::allocator<int>>::push_back(param_2,local_50 + 1);
            std::vector<int,std::allocator<int>>::push_back(param_2,(int *)&local_78);
          }
          __gnu_cxx::
          __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
          ::operator++(local_48,(int)local_84);
        }
        else {
          local_14 = GetItemType(this,local_80);
          if (local_14 != 0) {
            StartEndPos(this,local_14,&local_70,&local_74);
            if (local_14 == 1) {
              for (local_6c = local_70; local_6c <= local_74; local_6c = local_6c + 1) {
                if (*(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 2) == local_18) {
                  local_10 = local_10 + 1;
                  local_44[0] = 0;
                  std::vector<int,std::allocator<int>>::push_back(param_2,local_44);
                  std::vector<int,std::allocator<int>>::push_back(param_2,&local_6c);
                  std::vector<int,std::allocator<int>>::push_back
                            (param_2,(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 7));
                  delete_item(this,1,local_6c,1,param_6,1);
                  local_78 = local_78 - 1;
                  if (local_78 == 0) break;
                }
              }
              if (0 < (int)local_78) {
                for (local_6c = 3; local_6c < 9; local_6c = local_6c + 1) {
                  if (*(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 2) == local_18) {
                    local_10 = local_10 + 1;
                    local_44[1] = 0;
                    std::vector<int,std::allocator<int>>::push_back(param_2,local_44 + 1);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_6c);
                    std::vector<int,std::allocator<int>>::push_back
                              (param_2,(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 7));
                    delete_item(this,1,local_6c,1,param_6,1);
                    local_78 = local_78 - 1;
                    if (local_78 == 0) break;
                  }
                }
              }
              if (0 < (int)local_78) {
                for (local_88 = 0; local_88 < 0x1a; local_88 = local_88 + 1) {
                  if (*(int *)(this + local_88 * 0x3d + 0x1e) == local_18) {
                    if (local_88 < 0xc) {
                      *param_3 = 1;
                    }
                    local_10 = local_10 + 1;
                    local_44[2] = 3;
                    std::vector<int,std::allocator<int>>::push_back(param_2,local_44 + 2);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_88);
                    std::vector<int,std::allocator<int>>::push_back
                              (param_2,(int *)(this + local_88 * 0x3d + 0x23));
                    delete_item(this,0,local_88,1,param_6,1);
                    local_78 = local_78 - 1;
                    if (local_78 == 0) break;
                  }
                }
              }
              if (local_78 == 0) {
                local_19 = '\x01';
              }
            }
            else {
              for (local_6c = 3; local_6c < 9; local_6c = local_6c + 1) {
                if ((*(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 2) == local_18) &&
                   ((int)local_78 <= *(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 7))) {
                  delete_item(this,1,local_6c,local_78,param_6,1);
                  local_19 = '\x01';
                  local_10 = local_10 + 1;
                  local_44[3] = 0;
                  std::vector<int,std::allocator<int>>::push_back(param_2,local_44 + 3);
                  std::vector<int,std::allocator<int>>::push_back(param_2,&local_6c);
                  std::vector<int,std::allocator<int>>::push_back(param_2,(int *)&local_78);
                  uVar7 = local_78;
                  if ((*(int *)this == 0) || ((param_6 != 8 || (param_7 == '\0')))) {
                    if ((*(int *)this == 0) || ((param_6 != 8 || (param_7 == '\x01')))) {
                      if ((*(int *)this != 0) && (param_6 == 4)) {
                        uVar1 = *(undefined4 *)this;
                        pCVar8 = (CCubeStatistic *)GetInstanceCubeStatistic();
                        CCubeStatistic::collectCubeStatistics(pCVar8,local_18,uVar7,uVar1,0x66);
                      }
                    }
                    else {
                      uVar1 = *(undefined4 *)this;
                      pCVar8 = (CCubeStatistic *)GetInstanceCubeStatistic();
                      CCubeStatistic::collectCubeStatistics(pCVar8,local_18,uVar7,uVar1,100);
                    }
                  }
                  else {
                    uVar1 = *(undefined4 *)this;
                    pCVar8 = (CCubeStatistic *)GetInstanceCubeStatistic();
                    CCubeStatistic::collectCubeStatistics(pCVar8,local_18,uVar7,uVar1,0x65);
                  }
                  break;
                }
              }
              if (local_19 != '\x01') {
                for (local_6c = local_70; local_6c <= local_74; local_6c = local_6c + 1) {
                  if ((*(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 2) == local_18) &&
                     ((int)local_78 <= *(int *)(*(int *)(this + 0x650) + local_6c * 0x3d + 7))) {
                    delete_item(this,1,local_6c,local_78,param_6,1);
                    local_19 = '\x01';
                    local_10 = local_10 + 1;
                    local_44[4] = 0;
                    std::vector<int,std::allocator<int>>::push_back(param_2,local_44 + 4);
                    std::vector<int,std::allocator<int>>::push_back(param_2,&local_6c);
                    std::vector<int,std::allocator<int>>::push_back(param_2,(int *)&local_78);
                    uVar7 = local_78;
                    if ((*(int *)this == 0) || ((param_6 != 8 || (param_7 == '\0')))) {
                      if ((*(int *)this == 0) || ((param_6 != 8 || (param_7 == '\x01')))) {
                        if ((*(int *)this != 0) && (param_6 == 4)) {
                          uVar1 = *(undefined4 *)this;
                          pCVar8 = (CCubeStatistic *)GetInstanceCubeStatistic();
                          CCubeStatistic::collectCubeStatistics(pCVar8,local_18,uVar7,uVar1,0x66);
                        }
                      }
                      else {
                        uVar1 = *(undefined4 *)this;
                        pCVar8 = (CCubeStatistic *)GetInstanceCubeStatistic();
                        CCubeStatistic::collectCubeStatistics(pCVar8,local_18,uVar7,uVar1,100);
                      }
                    }
                    else {
                      uVar1 = *(undefined4 *)this;
                      pCVar8 = (CCubeStatistic *)GetInstanceCubeStatistic();
                      CCubeStatistic::collectCubeStatistics(pCVar8,local_18,uVar7,uVar1,0x65);
                    }
                    break;
                  }
                }
              }
            }
            if (local_19 != '\x01') {
              cMyTrace::cMyTrace(local_30,
                                 "int CInventory::delete_event_items(const std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, std::vector<int, std::allocator<int> >&, bool&, eMoneySubReason, eItemDelReason, bool)"
                                 ,0x1d3a,5);
              cMyTrace::operator()
                        (local_30,"NOT CRITICAL BUT FOR OBSERVING, No Event Item %d FOUND!",local_18
                        );
              return 0;
            }
            __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator++(local_20,(int)local_84);
          }
        }
      }
      iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(param_1);
      if (iVar4 != local_10) {
        local_10 = 0;
      }
    }
  }
  else {
    local_10 = 1;
  }
  return local_10;
}
```
