# CheckEquipmentItemCondition

`_ZNK10CInventory27CheckEquipmentItemConditionERKSt6vectorISt4pairIiiESaIS2_EER16stEquipConditionR10Inven_Item`

`CInventory::CheckEquipmentItemCondition(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, stEquipCondition&, Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08507f1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08507f1a  _ZNK10CInventory27CheckEquipmentItemConditionERKSt6vectorISt4pairIiiESaIS2_EER16stEquipConditionR10Inven_Item
#           CInventory::CheckEquipmentItemCondition(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, stEquipCondition&, Inven_Item&) const
# range [0x08507f1a, 0x085083cf]
08507f1a +0x000:  push   %ebp
08507f1b +0x001:  mov    %esp,%ebp
08507f1d +0x003:  push   %ebx
08507f1e +0x004:  sub    $0x74,%esp
08507f21 +0x007:  mov    0xc(%ebp),%eax
08507f24 +0x00a:  mov    %eax,(%esp)
08507f27 +0x00d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
08507f2c +0x012:  test   %eax,%eax
08507f2e +0x014:  sete   %al
08507f31 +0x017:  test   %al,%al
08507f33 +0x019:  je     08507f3f <+0x25>
08507f35 +0x01b:  mov    $0x0,%eax
08507f3a +0x020:  jmp    085083cb <+0x4b1>
08507f3f +0x025:  lea    -0x50(%ebp),%eax
08507f42 +0x028:  mov    0xc(%ebp),%edx
08507f45 +0x02b:  mov    %edx,0x4(%esp)
08507f49 +0x02f:  mov    %eax,(%esp)
08507f4c +0x032:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
08507f51 +0x037:  sub    $0x4,%esp
08507f54 +0x03a:  lea    -0x58(%ebp),%eax
08507f57 +0x03d:  mov    %eax,(%esp)
08507f5a +0x040:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08507f5f +0x045:  movb   $0x0,-0x31(%ebp)
08507f63 +0x049:  movl   $0x0,-0x30(%ebp)
08507f6a +0x050:  movl   $0x0,-0x5c(%ebp)
08507f71 +0x057:  movl   $0x0,-0x60(%ebp)
08507f78 +0x05e:  movl   $0x0,-0x2c(%ebp)
08507f7f +0x065:  movl   $0x0,-0x28(%ebp)
08507f86 +0x06c:  movl   $0x0,-0x24(%ebp)
08507f8d +0x073:  movl   $0xb,-0x20(%ebp)
08507f94 +0x07a:  jmp    0850826b <+0x351>
08507f99 +0x07f:  movb   $0x0,-0x31(%ebp)
08507f9d +0x083:  lea    -0x50(%ebp),%eax
08507fa0 +0x086:  mov    %eax,(%esp)
08507fa3 +0x089:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08507fa8 +0x08e:  mov    0x4(%eax),%edx
08507fab +0x091:  mov    (%eax),%eax
08507fad +0x093:  mov    %eax,-0x48(%ebp)
08507fb0 +0x096:  mov    %edx,-0x44(%ebp)
08507fb3 +0x099:  lea    -0x48(%ebp),%eax
08507fb6 +0x09c:  mov    %eax,0x4(%esp)
08507fba +0x0a0:  lea    -0x58(%ebp),%eax
08507fbd +0x0a3:  mov    %eax,(%esp)
08507fc0 +0x0a6:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08507fc5 +0x0ab:  mov    -0x58(%ebp),%eax
08507fc8 +0x0ae:  mov    %eax,-0x30(%ebp)
08507fcb +0x0b1:  mov    -0x54(%ebp),%eax
08507fce +0x0b4:  mov    %eax,-0x28(%ebp)
08507fd1 +0x0b7:  mov    -0x30(%ebp),%eax
08507fd4 +0x0ba:  mov    %eax,0x4(%esp)
08507fd8 +0x0be:  mov    0x8(%ebp),%eax
08507fdb +0x0c1:  mov    %eax,(%esp)
08507fde +0x0c4:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
08507fe3 +0x0c9:  mov    %eax,-0x20(%ebp)
08507fe6 +0x0cc:  cmpl   $0x1,-0x20(%ebp)
08507fea +0x0d0:  je     0850800e <+0xf4>
08507fec +0x0d2:  lea    -0x40(%ebp),%eax
08507fef +0x0d5:  movl   $0x0,0x8(%esp)
08507ff7 +0x0dd:  lea    -0x50(%ebp),%edx
08507ffa +0x0e0:  mov    %edx,0x4(%esp)
08507ffe +0x0e4:  mov    %eax,(%esp)
08508001 +0x0e7:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08508006 +0x0ec:  sub    $0x4,%esp
08508009 +0x0ef:  jmp    0850826b <+0x351>
0850800e +0x0f4:  cmpl   $0x0,-0x20(%ebp)
08508012 +0x0f8:  jne    08508036 <+0x11c>
08508014 +0x0fa:  lea    -0x3c(%ebp),%eax
08508017 +0x0fd:  movl   $0x0,0x8(%esp)
0850801f +0x105:  lea    -0x50(%ebp),%edx
08508022 +0x108:  mov    %edx,0x4(%esp)
08508026 +0x10c:  mov    %eax,(%esp)
08508029 +0x10f:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
0850802e +0x114:  sub    $0x4,%esp
08508031 +0x117:  jmp    0850826b <+0x351>
08508036 +0x11c:  cmpl   $0x1,-0x28(%ebp)
0850803a +0x120:  jle    08508046 <+0x12c>
0850803c +0x122:  mov    $0x1,%eax
08508041 +0x127:  jmp    085083cb <+0x4b1>
08508046 +0x12c:  lea    -0x60(%ebp),%eax
08508049 +0x12f:  mov    %eax,0xc(%esp)
0850804d +0x133:  lea    -0x5c(%ebp),%eax
08508050 +0x136:  mov    %eax,0x8(%esp)
08508054 +0x13a:  mov    -0x20(%ebp),%eax
08508057 +0x13d:  mov    %eax,0x4(%esp)
0850805b +0x141:  mov    0x8(%ebp),%eax
0850805e +0x144:  mov    %eax,(%esp)
08508061 +0x147:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08508066 +0x14c:  movl   $0x0,-0x24(%ebp)
0850806d +0x153:  mov    -0x5c(%ebp),%eax
08508070 +0x156:  mov    %eax,-0x2c(%ebp)
08508073 +0x159:  jmp    0850814d <+0x233>
08508078 +0x15e:  mov    0x8(%ebp),%eax
0850807b +0x161:  mov    0x650(%eax),%edx
08508081 +0x167:  mov    -0x2c(%ebp),%eax
08508084 +0x16a:  imul   $0x3d,%eax,%eax
08508087 +0x16d:  lea    (%edx,%eax,1),%eax
0850808a +0x170:  mov    0x2(%eax),%edx
0850808d +0x173:  mov    -0x30(%ebp),%eax
08508090 +0x176:  cmp    %eax,%edx
08508092 +0x178:  jne    08508149 <+0x22f>
08508098 +0x17e:  addl   $0x1,-0x24(%ebp)
0850809c +0x182:  cmpl   $0x1,-0x24(%ebp)
085080a0 +0x186:  jle    085080ac <+0x192>
085080a2 +0x188:  mov    $0x12,%eax
085080a7 +0x18d:  jmp    085083cb <+0x4b1>
085080ac +0x192:  mov    0x8(%ebp),%eax
085080af +0x195:  mov    0x650(%eax),%edx
085080b5 +0x19b:  mov    -0x2c(%ebp),%eax
085080b8 +0x19e:  imul   $0x3d,%eax,%eax
085080bb +0x1a1:  add    %eax,%edx
085080bd +0x1a3:  mov    0x14(%ebp),%eax
085080c0 +0x1a6:  mov    (%edx),%ecx
085080c2 +0x1a8:  mov    %ecx,(%eax)
085080c4 +0x1aa:  mov    0x4(%edx),%ecx
085080c7 +0x1ad:  mov    %ecx,0x4(%eax)
085080ca +0x1b0:  mov    0x8(%edx),%ecx
085080cd +0x1b3:  mov    %ecx,0x8(%eax)
085080d0 +0x1b6:  mov    0xc(%edx),%ecx
085080d3 +0x1b9:  mov    %ecx,0xc(%eax)
085080d6 +0x1bc:  mov    0x10(%edx),%ecx
085080d9 +0x1bf:  mov    %ecx,0x10(%eax)
085080dc +0x1c2:  mov    0x14(%edx),%ecx
085080df +0x1c5:  mov    %ecx,0x14(%eax)
085080e2 +0x1c8:  mov    0x18(%edx),%ecx
085080e5 +0x1cb:  mov    %ecx,0x18(%eax)
085080e8 +0x1ce:  mov    0x1c(%edx),%ecx
085080eb +0x1d1:  mov    %ecx,0x1c(%eax)
085080ee +0x1d4:  mov    0x20(%edx),%ecx
085080f1 +0x1d7:  mov    %ecx,0x20(%eax)
085080f4 +0x1da:  mov    0x24(%edx),%ecx
085080f7 +0x1dd:  mov    %ecx,0x24(%eax)
085080fa +0x1e0:  mov    0x28(%edx),%ecx
085080fd +0x1e3:  mov    %ecx,0x28(%eax)
08508100 +0x1e6:  mov    0x2c(%edx),%ecx
08508103 +0x1e9:  mov    %ecx,0x2c(%eax)
08508106 +0x1ec:  mov    0x30(%edx),%ecx
08508109 +0x1ef:  mov    %ecx,0x30(%eax)
0850810c +0x1f2:  mov    0x34(%edx),%ecx
0850810f +0x1f5:  mov    %ecx,0x34(%eax)
08508112 +0x1f8:  mov    0x38(%edx),%ecx
08508115 +0x1fb:  mov    %ecx,0x38(%eax)
08508118 +0x1fe:  movzbl 0x3c(%edx),%edx
0850811c +0x202:  mov    %dl,0x3c(%eax)
0850811f +0x205:  mov    0x8(%ebp),%eax
08508122 +0x208:  mov    (%eax),%eax
08508124 +0x20a:  mov    -0x2c(%ebp),%edx
08508127 +0x20d:  mov    %edx,0x8(%esp)
0850812b +0x211:  movl   $0x1,0x4(%esp)
08508133 +0x219:  mov    %eax,(%esp)
08508136 +0x21c:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
0850813b +0x221:  test   %al,%al
0850813d +0x223:  je     08508149 <+0x22f>
0850813f +0x225:  mov    $0xd5,%eax
08508144 +0x22a:  jmp    085083cb <+0x4b1>
08508149 +0x22f:  addl   $0x1,-0x2c(%ebp)
0850814d +0x233:  mov    -0x60(%ebp),%eax
08508150 +0x236:  cmp    %eax,-0x2c(%ebp)
08508153 +0x239:  setle  %al
08508156 +0x23c:  test   %al,%al
08508158 +0x23e:  jne    08508078 <+0x15e>
0850815e +0x244:  movl   $0x3,-0x2c(%ebp)
08508165 +0x24b:  jmp    0850823f <+0x325>
0850816a +0x250:  mov    0x8(%ebp),%eax
0850816d +0x253:  mov    0x650(%eax),%edx
08508173 +0x259:  mov    -0x2c(%ebp),%eax
08508176 +0x25c:  imul   $0x3d,%eax,%eax
08508179 +0x25f:  lea    (%edx,%eax,1),%eax
0850817c +0x262:  mov    0x2(%eax),%edx
0850817f +0x265:  mov    -0x30(%ebp),%eax
08508182 +0x268:  cmp    %eax,%edx
08508184 +0x26a:  jne    0850823b <+0x321>
0850818a +0x270:  addl   $0x1,-0x24(%ebp)
0850818e +0x274:  cmpl   $0x1,-0x24(%ebp)
08508192 +0x278:  jle    0850819e <+0x284>
08508194 +0x27a:  mov    $0x12,%eax
08508199 +0x27f:  jmp    085083cb <+0x4b1>
0850819e +0x284:  mov    0x8(%ebp),%eax
085081a1 +0x287:  mov    0x650(%eax),%edx
085081a7 +0x28d:  mov    -0x2c(%ebp),%eax
085081aa +0x290:  imul   $0x3d,%eax,%eax
085081ad +0x293:  add    %eax,%edx
085081af +0x295:  mov    0x14(%ebp),%eax
085081b2 +0x298:  mov    (%edx),%ecx
085081b4 +0x29a:  mov    %ecx,(%eax)
085081b6 +0x29c:  mov    0x4(%edx),%ecx
085081b9 +0x29f:  mov    %ecx,0x4(%eax)
085081bc +0x2a2:  mov    0x8(%edx),%ecx
085081bf +0x2a5:  mov    %ecx,0x8(%eax)
085081c2 +0x2a8:  mov    0xc(%edx),%ecx
085081c5 +0x2ab:  mov    %ecx,0xc(%eax)
085081c8 +0x2ae:  mov    0x10(%edx),%ecx
085081cb +0x2b1:  mov    %ecx,0x10(%eax)
085081ce +0x2b4:  mov    0x14(%edx),%ecx
085081d1 +0x2b7:  mov    %ecx,0x14(%eax)
085081d4 +0x2ba:  mov    0x18(%edx),%ecx
085081d7 +0x2bd:  mov    %ecx,0x18(%eax)
085081da +0x2c0:  mov    0x1c(%edx),%ecx
085081dd +0x2c3:  mov    %ecx,0x1c(%eax)
085081e0 +0x2c6:  mov    0x20(%edx),%ecx
085081e3 +0x2c9:  mov    %ecx,0x20(%eax)
085081e6 +0x2cc:  mov    0x24(%edx),%ecx
085081e9 +0x2cf:  mov    %ecx,0x24(%eax)
085081ec +0x2d2:  mov    0x28(%edx),%ecx
085081ef +0x2d5:  mov    %ecx,0x28(%eax)
085081f2 +0x2d8:  mov    0x2c(%edx),%ecx
085081f5 +0x2db:  mov    %ecx,0x2c(%eax)
085081f8 +0x2de:  mov    0x30(%edx),%ecx
085081fb +0x2e1:  mov    %ecx,0x30(%eax)
085081fe +0x2e4:  mov    0x34(%edx),%ecx
08508201 +0x2e7:  mov    %ecx,0x34(%eax)
08508204 +0x2ea:  mov    0x38(%edx),%ecx
08508207 +0x2ed:  mov    %ecx,0x38(%eax)
0850820a +0x2f0:  movzbl 0x3c(%edx),%edx
0850820e +0x2f4:  mov    %dl,0x3c(%eax)
08508211 +0x2f7:  mov    0x8(%ebp),%eax
08508214 +0x2fa:  mov    (%eax),%eax
08508216 +0x2fc:  mov    -0x2c(%ebp),%edx
08508219 +0x2ff:  mov    %edx,0x8(%esp)
0850821d +0x303:  movl   $0x1,0x4(%esp)
08508225 +0x30b:  mov    %eax,(%esp)
08508228 +0x30e:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
0850822d +0x313:  test   %al,%al
0850822f +0x315:  je     0850823b <+0x321>
08508231 +0x317:  mov    $0xd5,%eax
08508236 +0x31c:  jmp    085083cb <+0x4b1>
0850823b +0x321:  addl   $0x1,-0x2c(%ebp)
0850823f +0x325:  cmpl   $0x8,-0x2c(%ebp)
08508243 +0x329:  setle  %al
08508246 +0x32c:  test   %al,%al
08508248 +0x32e:  jne    0850816a <+0x250>
0850824e +0x334:  lea    -0x38(%ebp),%eax
08508251 +0x337:  movl   $0x0,0x8(%esp)
08508259 +0x33f:  lea    -0x50(%ebp),%edx
0850825c +0x342:  mov    %edx,0x4(%esp)
08508260 +0x346:  mov    %eax,(%esp)
08508263 +0x349:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
08508268 +0x34e:  sub    $0x4,%esp
0850826b +0x351:  lea    -0x4c(%ebp),%eax
0850826e +0x354:  mov    0xc(%ebp),%edx
08508271 +0x357:  mov    %edx,0x4(%esp)
08508275 +0x35b:  mov    %eax,(%esp)
08508278 +0x35e:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0850827d +0x363:  sub    $0x4,%esp
08508280 +0x366:  lea    -0x4c(%ebp),%eax
08508283 +0x369:  mov    %eax,0x4(%esp)
08508287 +0x36d:  lea    -0x50(%ebp),%eax
0850828a +0x370:  mov    %eax,(%esp)
0850828d +0x373:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
08508292 +0x378:  test   %al,%al
08508294 +0x37a:  jne    08507f99 <+0x7f>
0850829a +0x380:  mov    0x14(%ebp),%eax
0850829d +0x383:  mov    0x2(%eax),%eax
085082a0 +0x386:  test   %eax,%eax
085082a2 +0x388:  je     085083c6 <+0x4ac>
085082a8 +0x38e:  mov    0x14(%ebp),%eax
085082ab +0x391:  mov    0x2(%eax),%eax
085082ae +0x394:  mov    %eax,%ebx
085082b0 +0x396:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085082b5 +0x39b:  mov    %ebx,0x4(%esp)
085082b9 +0x39f:  mov    %eax,(%esp)
085082bc +0x3a2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085082c1 +0x3a7:  mov    %eax,-0x1c(%ebp)
085082c4 +0x3aa:  cmpl   $0x0,-0x1c(%ebp)
085082c8 +0x3ae:  jne    085082d4 <+0x3ba>
085082ca +0x3b0:  mov    $0x11,%eax
085082cf +0x3b5:  jmp    085083cb <+0x4b1>
085082d4 +0x3ba:  mov    0x14(%ebp),%eax
085082d7 +0x3bd:  add    $0x11,%eax
085082da +0x3c0:  mov    %eax,(%esp)
085082dd +0x3c3:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085082e2 +0x3c8:  mov    %al,-0x15(%ebp)
085082e5 +0x3cb:  cmpb   $0x80,-0x15(%ebp)
085082e9 +0x3cf:  jne    085082f5 <+0x3db>
085082eb +0x3d1:  mov    $0x13,%eax
085082f0 +0x3d6:  jmp    085083cb <+0x4b1>
085082f5 +0x3db:  mov    -0x1c(%ebp),%eax
085082f8 +0x3de:  mov    %eax,(%esp)
085082fb +0x3e1:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08508300 +0x3e6:  mov    %eax,-0x14(%ebp)
08508303 +0x3e9:  mov    0x14(%ebp),%eax
08508306 +0x3ec:  movzwl 0xb(%eax),%eax
0850830a +0x3f0:  movzwl %ax,%eax
0850830d +0x3f3:  cmp    -0x14(%ebp),%eax
08508310 +0x3f6:  je     0850831c <+0x402>
08508312 +0x3f8:  mov    $0xd8,%eax
08508317 +0x3fd:  jmp    085083cb <+0x4b1>
0850831c +0x402:  mov    0x10(%ebp),%eax
0850831f +0x405:  movb   $0x1,(%eax)
08508322 +0x408:  mov    0x14(%ebp),%eax
08508325 +0x40b:  mov    %eax,(%esp)
08508328 +0x40e:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0850832d +0x413:  mov    0x10(%ebp),%edx
08508330 +0x416:  mov    %al,0x1(%edx)
08508333 +0x419:  cmpb   $0x0,-0x15(%ebp)
08508337 +0x41d:  jne    08508352 <+0x438>
08508339 +0x41f:  mov    0x10(%ebp),%eax
0850833c +0x422:  movb   $0x0,0x2(%eax)
08508340 +0x426:  mov    0x10(%ebp),%eax
08508343 +0x429:  movb   $0x0,0x3(%eax)
08508347 +0x42d:  mov    0x10(%ebp),%eax
0850834a +0x430:  movw   $0x0,0x4(%eax)
08508350 +0x436:  jmp    08508378 <+0x45e>
08508352 +0x438:  mov    0x10(%ebp),%eax
08508355 +0x43b:  movb   $0x1,0x2(%eax)
08508359 +0x43f:  mov    0x10(%ebp),%eax
0850835c +0x442:  movzbl -0x15(%ebp),%edx
08508360 +0x446:  mov    %dl,0x3(%eax)
08508363 +0x449:  mov    0x14(%ebp),%eax
08508366 +0x44c:  add    $0x11,%eax
08508369 +0x44f:  mov    %eax,(%esp)
0850836c +0x452:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08508371 +0x457:  mov    0x10(%ebp),%edx
08508374 +0x45a:  mov    %ax,0x4(%edx)
08508378 +0x45e:  mov    -0x1c(%ebp),%eax
0850837b +0x461:  mov    %eax,-0x10(%ebp)
0850837e +0x464:  mov    -0x10(%ebp),%eax
08508381 +0x467:  mov    %eax,(%esp)
08508384 +0x46a:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
08508389 +0x46f:  mov    %eax,-0xc(%ebp)
0850838c +0x472:  cmpl   $0x0,-0xc(%ebp)
08508390 +0x476:  jne    0850839b <+0x481>
08508392 +0x478:  mov    0x10(%ebp),%eax
08508395 +0x47b:  movb   $0x1,0x6(%eax)
08508399 +0x47f:  jmp    085083b5 <+0x49b>
0850839b +0x481:  mov    0x14(%ebp),%eax
0850839e +0x484:  movzbl (%eax),%eax
085083a1 +0x487:  test   %al,%al
085083a3 +0x489:  je     085083ae <+0x494>
085083a5 +0x48b:  mov    0x10(%ebp),%eax
085083a8 +0x48e:  movb   $0x1,0x6(%eax)
085083ac +0x492:  jmp    085083b5 <+0x49b>
085083ae +0x494:  mov    0x10(%ebp),%eax
085083b1 +0x497:  movb   $0x0,0x6(%eax)
085083b5 +0x49b:  mov    0x14(%ebp),%eax
085083b8 +0x49e:  mov    %eax,(%esp)
085083bb +0x4a1:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
085083c0 +0x4a6:  mov    0x10(%ebp),%edx
085083c3 +0x4a9:  mov    %al,0x7(%edx)
085083c6 +0x4ac:  mov    $0x0,%eax
085083cb +0x4b1:  mov    -0x4(%ebp),%ebx
085083ce +0x4b4:  leave
085083cf +0x4b5:  ret
```

## 反编译 C

```c
// CInventory::CheckEquipmentItemCondition @ 0x8507f1a

/* WARNING: Removing unreachable block (ram,0x08508014) */
/* CInventory::CheckEquipmentItemCondition(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > > const&, stEquipCondition&, Inven_Item&) const */

undefined4 __thiscall
CInventory::CheckEquipmentItemCondition
          (CInventory *this,vector *param_1,stEquipCondition *param_2,Inven_Item *param_3)

{
  char cVar1;
  bool bVar2;
  stEquipCondition sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  CDataManager *this_00;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_54 [4];
  __normal_iterator local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_44 [8];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_3c [7];
  undefined1 local_35;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  CEquipItem *local_20;
  stEquipCondition local_19;
  uint local_18;
  CItem *local_14;
  int local_10;
  
  iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  if (iVar5 == 0) {
    return 0;
  }
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::pair<int,int>::pair((pair<int,int> *)&local_5c);
  local_35 = 0;
  local_34 = 0;
  local_60 = 0;
  local_64 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0xb;
  do {
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar2 = __gnu_cxx::operator!=(local_54,local_50);
      if (!bVar2) {
        if (*(int *)(param_3 + 2) != 0) {
          iVar5 = *(int *)(param_3 + 2);
          this_00 = (CDataManager *)G_CDataManager();
          local_20 = (CEquipItem *)CDataManager::find_item(this_00,iVar5);
          if (local_20 == (CEquipItem *)0x0) {
            return 0x11;
          }
          local_19 = (stEquipCondition)
                     stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_3 + 0x11));
          if (local_19 == (stEquipCondition)0x80) {
            return 0x13;
          }
          local_18 = CEquipItem::get_endurance(local_20);
          if (*(ushort *)(param_3 + 0xb) != local_18) {
            return 0xd8;
          }
          *param_2 = (stEquipCondition)0x1;
          sVar3 = (stEquipCondition)Inven_Item::GetUpgrade(param_3);
          param_2[1] = sVar3;
          if (local_19 == (stEquipCondition)0x0) {
            param_2[2] = (stEquipCondition)0x0;
            param_2[3] = (stEquipCondition)0x0;
            *(undefined2 *)(param_2 + 4) = 0;
          }
          else {
            param_2[2] = (stEquipCondition)0x1;
            param_2[3] = local_19;
            uVar4 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_3 + 0x11));
            *(undefined2 *)(param_2 + 4) = uVar4;
          }
          local_14 = (CItem *)local_20;
          local_10 = CItem::GetAttachType((CItem *)local_20);
          if (local_10 == 0) {
            param_2[6] = (stEquipCondition)0x1;
          }
          else if (*param_3 == (Inven_Item)0x0) {
            param_2[6] = (stEquipCondition)0x0;
          }
          else {
            param_2[6] = (stEquipCondition)0x1;
          }
          sVar3 = (stEquipCondition)Inven_Item::GetReSealCount(param_3);
          param_2[7] = sVar3;
        }
        return 0;
      }
      local_35 = 0;
      puVar6 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_54);
      local_48 = puVar6[1];
      local_4c = *puVar6;
      std::pair<int,int>::operator=((pair<int,int> *)&local_5c,(pair *)&local_4c);
      local_34 = local_5c;
      local_2c = local_58;
      local_24 = GetItemType(this,local_5c);
      if (local_24 == 1) break;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_44,(int)local_54);
    }
    if (1 < local_2c) {
      return 1;
    }
    StartEndPos(this,1,&local_60,&local_64);
    local_28 = 0;
    for (local_30 = local_60; local_30 <= local_64; local_30 = local_30 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2) == local_34) {
        local_28 = local_28 + 1;
        if (1 < local_28) {
          return 0x12;
        }
        puVar6 = (undefined4 *)(*(int *)(this + 0x650) + local_30 * 0x3d);
        *(undefined4 *)param_3 = *puVar6;
        *(undefined4 *)(param_3 + 4) = puVar6[1];
        *(undefined4 *)(param_3 + 8) = puVar6[2];
        *(undefined4 *)(param_3 + 0xc) = puVar6[3];
        *(undefined4 *)(param_3 + 0x10) = puVar6[4];
        *(undefined4 *)(param_3 + 0x14) = puVar6[5];
        *(undefined4 *)(param_3 + 0x18) = puVar6[6];
        *(undefined4 *)(param_3 + 0x1c) = puVar6[7];
        *(undefined4 *)(param_3 + 0x20) = puVar6[8];
        *(undefined4 *)(param_3 + 0x24) = puVar6[9];
        *(undefined4 *)(param_3 + 0x28) = puVar6[10];
        *(undefined4 *)(param_3 + 0x2c) = puVar6[0xb];
        *(undefined4 *)(param_3 + 0x30) = puVar6[0xc];
        *(undefined4 *)(param_3 + 0x34) = puVar6[0xd];
        *(undefined4 *)(param_3 + 0x38) = puVar6[0xe];
        param_3[0x3c] = *(Inven_Item *)(puVar6 + 0xf);
        cVar1 = CUser::CheckItemLock(*(CUser **)this,1,local_30);
        if (cVar1 != '\0') {
          return 0xd5;
        }
      }
    }
    for (local_30 = 3; local_30 < 9; local_30 = local_30 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2) == local_34) {
        local_28 = local_28 + 1;
        if (1 < local_28) {
          return 0x12;
        }
        puVar6 = (undefined4 *)(*(int *)(this + 0x650) + local_30 * 0x3d);
        *(undefined4 *)param_3 = *puVar6;
        *(undefined4 *)(param_3 + 4) = puVar6[1];
        *(undefined4 *)(param_3 + 8) = puVar6[2];
        *(undefined4 *)(param_3 + 0xc) = puVar6[3];
        *(undefined4 *)(param_3 + 0x10) = puVar6[4];
        *(undefined4 *)(param_3 + 0x14) = puVar6[5];
        *(undefined4 *)(param_3 + 0x18) = puVar6[6];
        *(undefined4 *)(param_3 + 0x1c) = puVar6[7];
        *(undefined4 *)(param_3 + 0x20) = puVar6[8];
        *(undefined4 *)(param_3 + 0x24) = puVar6[9];
        *(undefined4 *)(param_3 + 0x28) = puVar6[10];
        *(undefined4 *)(param_3 + 0x2c) = puVar6[0xb];
        *(undefined4 *)(param_3 + 0x30) = puVar6[0xc];
        *(undefined4 *)(param_3 + 0x34) = puVar6[0xd];
        *(undefined4 *)(param_3 + 0x38) = puVar6[0xe];
        param_3[0x3c] = *(Inven_Item *)(puVar6 + 0xf);
        cVar1 = CUser::CheckItemLock(*(CUser **)this,1,local_30);
        if (cVar1 != '\0') {
          return 0xd5;
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_3c,(int)local_54);
  } while( true );
}
```
