# process

`_ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseLimitCube` | `0x081d3d38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3d38  _ZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d3d38, 0x081d4783]
081d3d38 +0x000:  push   %ebp
081d3d39 +0x001:  mov    %esp,%ebp
081d3d3b +0x003:  push   %esi
081d3d3c +0x004:  push   %ebx
081d3d3d +0x005:  sub    $0xcac0,%esp
081d3d43 +0x00b:  mov    0xc(%ebp),%eax
081d3d46 +0x00e:  mov    %eax,(%esp)
081d3d49 +0x011:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d3d4e +0x016:  cmp    $0x3,%eax
081d3d51 +0x019:  setne  %al
081d3d54 +0x01c:  test   %al,%al
081d3d56 +0x01e:  je     081d3d62 <+0x2a>
081d3d58 +0x020:  mov    $0x0,%ebx
081d3d5d +0x025:  jmp    081d4778 <+0xa40>
081d3d62 +0x02a:  mov    0x14(%ebp),%eax
081d3d65 +0x02d:  mov    %eax,-0x48(%ebp)
081d3d68 +0x030:  mov    0x10(%ebp),%eax
081d3d6b +0x033:  mov    %eax,-0x44(%ebp)
081d3d6e +0x036:  mov    -0x44(%ebp),%eax
081d3d71 +0x039:  movzwl 0xd(%eax),%eax
081d3d75 +0x03d:  cwtl
081d3d76 +0x03e:  mov    %eax,-0x84(%ebp)
081d3d7c +0x044:  mov    -0x44(%ebp),%eax
081d3d7f +0x047:  mov    0xf(%eax),%eax
081d3d82 +0x04a:  mov    %eax,-0x88(%ebp)
081d3d88 +0x050:  mov    -0x44(%ebp),%eax
081d3d8b +0x053:  movzwl 0x13(%eax),%eax
081d3d8f +0x057:  cwtl
081d3d90 +0x058:  mov    %eax,-0x8c(%ebp)
081d3d96 +0x05e:  mov    -0x84(%ebp),%ebx
081d3d9c +0x064:  mov    0xc(%ebp),%eax
081d3d9f +0x067:  mov    %eax,(%esp)
081d3da2 +0x06a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d3da7 +0x06f:  lea    -0xf9(%ebp),%edx
081d3dad +0x075:  mov    %ebx,0xc(%esp)
081d3db1 +0x079:  movl   $0x1,0x8(%esp)
081d3db9 +0x081:  mov    %eax,0x4(%esp)
081d3dbd +0x085:  mov    %edx,(%esp)
081d3dc0 +0x088:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d3dc5 +0x08d:  sub    $0x4,%esp
081d3dc8 +0x090:  mov    -0x8c(%ebp),%ebx
081d3dce +0x096:  mov    0xc(%ebp),%eax
081d3dd1 +0x099:  mov    %eax,(%esp)
081d3dd4 +0x09c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d3dd9 +0x0a1:  lea    -0x136(%ebp),%edx
081d3ddf +0x0a7:  mov    %ebx,0xc(%esp)
081d3de3 +0x0ab:  movl   $0x1,0x8(%esp)
081d3deb +0x0b3:  mov    %eax,0x4(%esp)
081d3def +0x0b7:  mov    %edx,(%esp)
081d3df2 +0x0ba:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d3df7 +0x0bf:  sub    $0x4,%esp
081d3dfa +0x0c2:  mov    -0x134(%ebp),%eax
081d3e00 +0x0c8:  mov    %eax,%ebx
081d3e02 +0x0ca:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d3e07 +0x0cf:  mov    %ebx,0x4(%esp)
081d3e0b +0x0d3:  mov    %eax,(%esp)
081d3e0e +0x0d6:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d3e13 +0x0db:  mov    %eax,-0x40(%ebp)
081d3e16 +0x0de:  mov    -0xf7(%ebp),%eax
081d3e1c +0x0e4:  mov    %eax,%ebx
081d3e1e +0x0e6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d3e23 +0x0eb:  mov    %ebx,0x4(%esp)
081d3e27 +0x0ef:  mov    %eax,(%esp)
081d3e2a +0x0f2:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d3e2f +0x0f7:  mov    %eax,-0x3c(%ebp)
081d3e32 +0x0fa:  mov    -0x84(%ebp),%ebx
081d3e38 +0x100:  movl   $0x0,(%esp)
081d3e3f +0x107:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d3e44 +0x10c:  mov    %ebx,0x8(%esp)
081d3e48 +0x110:  mov    %eax,0x4(%esp)
081d3e4c +0x114:  mov    0xc(%ebp),%eax
081d3e4f +0x117:  mov    %eax,(%esp)
081d3e52 +0x11a:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081d3e57 +0x11f:  test   %al,%al
081d3e59 +0x121:  je     081d3e6c <+0x134>
081d3e5b +0x123:  mov    -0x48(%ebp),%eax
081d3e5e +0x126:  movb   $0x1,0x4(%eax)
081d3e62 +0x12a:  mov    $0x0,%ebx
081d3e67 +0x12f:  jmp    081d4778 <+0xa40>
081d3e6c +0x134:  movl   $0x0,-0x38(%ebp)
081d3e73 +0x13b:  mov    -0x8c(%ebp),%ecx
081d3e79 +0x141:  mov    -0x88(%ebp),%edx
081d3e7f +0x147:  mov    -0x84(%ebp),%eax
081d3e85 +0x14d:  mov    -0x40(%ebp),%ebx
081d3e88 +0x150:  mov    %ebx,0x18(%esp)
081d3e8c +0x154:  lea    -0x136(%ebp),%ebx
081d3e92 +0x15a:  mov    %ebx,0x14(%esp)
081d3e96 +0x15e:  lea    -0xf9(%ebp),%ebx
081d3e9c +0x164:  mov    %ebx,0x10(%esp)
081d3ea0 +0x168:  mov    %ecx,0xc(%esp)
081d3ea4 +0x16c:  mov    %edx,0x8(%esp)
081d3ea8 +0x170:  mov    %eax,0x4(%esp)
081d3eac +0x174:  mov    0x8(%ebp),%eax
081d3eaf +0x177:  mov    %eax,(%esp)
081d3eb2 +0x17a:  call   081d3bbc <_ZN23Dispatcher_UseLimitCube11check_errorEijiR10Inven_ItemS1_PK5CItem>  ; Dispatcher_UseLimitCube::check_error(int, unsigned int, int, Inven_Item&, Inven_Item&, CItem const*)
081d3eb7 +0x17f:  mov    %eax,-0x38(%ebp)
081d3eba +0x182:  cmpl   $0x0,-0x38(%ebp)
081d3ebe +0x186:  setne  %al
081d3ec1 +0x189:  test   %al,%al
081d3ec3 +0x18b:  je     081d3eda <+0x1a2>
081d3ec5 +0x18d:  mov    -0x38(%ebp),%eax
081d3ec8 +0x190:  mov    %eax,%edx
081d3eca +0x192:  mov    -0x48(%ebp),%eax
081d3ecd +0x195:  mov    %dl,0x4(%eax)
081d3ed0 +0x198:  mov    $0x0,%ebx
081d3ed5 +0x19d:  jmp    081d4778 <+0xa40>
081d3eda +0x1a2:  lea    -0x94(%ebp),%eax
081d3ee0 +0x1a8:  mov    %eax,(%esp)
081d3ee3 +0x1ab:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
081d3ee8 +0x1b0:  mov    -0x40(%ebp),%eax
081d3eeb +0x1b3:  lea    -0x94(%ebp),%edx
081d3ef1 +0x1b9:  mov    %edx,0x4(%esp)
081d3ef5 +0x1bd:  mov    %eax,(%esp)
081d3ef8 +0x1c0:  call   0850fbe4 <_ZN14CStackableItem19get_limit_cube_itemERSt4pairIiiE>  ; CStackableItem::get_limit_cube_item(std::pair<int, int>&)
081d3efd +0x1c5:  mov    -0x94(%ebp),%eax
081d3f03 +0x1cb:  test   %eax,%eax
081d3f05 +0x1cd:  jne    081d3f22 <+0x1ea>
081d3f07 +0x1cf:  mov    -0x90(%ebp),%eax
081d3f0d +0x1d5:  test   %eax,%eax
081d3f0f +0x1d7:  jne    081d3f22 <+0x1ea>
081d3f11 +0x1d9:  mov    -0x48(%ebp),%eax
081d3f14 +0x1dc:  movb   $0x11,0x4(%eax)
081d3f18 +0x1e0:  mov    $0x0,%ebx
081d3f1d +0x1e5:  jmp    081d4778 <+0xa40>
081d3f22 +0x1ea:  mov    -0x94(%ebp),%eax
081d3f28 +0x1f0:  mov    %eax,%edx
081d3f2a +0x1f2:  mov    -0x48(%ebp),%eax
081d3f2d +0x1f5:  mov    %edx,0x8(%eax)
081d3f30 +0x1f8:  mov    -0x90(%ebp),%eax
081d3f36 +0x1fe:  mov    %eax,%edx
081d3f38 +0x200:  mov    -0x48(%ebp),%eax
081d3f3b +0x203:  mov    %edx,0xc(%eax)
081d3f3e +0x206:  mov    -0x88(%ebp),%edx
081d3f44 +0x20c:  mov    -0x40(%ebp),%eax
081d3f47 +0x20f:  mov    %edx,0x4(%esp)
081d3f4b +0x213:  mov    %eax,(%esp)
081d3f4e +0x216:  call   0850fb32 <_ZN14CStackableItem22get_1st_material_countEj>  ; CStackableItem::get_1st_material_count(unsigned int)
081d3f53 +0x21b:  mov    %eax,-0x98(%ebp)
081d3f59 +0x221:  mov    -0x40(%ebp),%eax
081d3f5c +0x224:  mov    %eax,(%esp)
081d3f5f +0x227:  call   0822c9e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x208a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x208a
081d3f64 +0x22c:  mov    %eax,-0x9c(%ebp)
081d3f6a +0x232:  mov    -0x40(%ebp),%eax
081d3f6d +0x235:  mov    %eax,(%esp)
081d3f70 +0x238:  call   0822c9ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2098>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2098
081d3f75 +0x23d:  mov    %eax,-0xa0(%ebp)
081d3f7b +0x243:  lea    -0xac(%ebp),%eax
081d3f81 +0x249:  mov    %eax,(%esp)
081d3f84 +0x24c:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
081d3f89 +0x251:  lea    -0x98(%ebp),%eax
081d3f8f +0x257:  mov    %eax,0x8(%esp)
081d3f93 +0x25b:  lea    -0x88(%ebp),%eax
081d3f99 +0x261:  mov    %eax,0x4(%esp)
081d3f9d +0x265:  lea    -0x80(%ebp),%eax
081d3fa0 +0x268:  mov    %eax,(%esp)
081d3fa3 +0x26b:  call   08236fb6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc660>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc660
081d3fa8 +0x270:  lea    -0x80(%ebp),%eax
081d3fab +0x273:  mov    %eax,0x4(%esp)
081d3faf +0x277:  lea    -0xac(%ebp),%eax
081d3fb5 +0x27d:  mov    %eax,(%esp)
081d3fb8 +0x280:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
081d3fbd +0x285:  movl   $0x1,-0x70(%ebp)
081d3fc4 +0x28c:  lea    -0x70(%ebp),%eax
081d3fc7 +0x28f:  mov    %eax,0x8(%esp)
081d3fcb +0x293:  lea    -0x136(%ebp),%eax
081d3fd1 +0x299:  add    $0x2,%eax
081d3fd4 +0x29c:  mov    %eax,0x4(%esp)
081d3fd8 +0x2a0:  lea    -0x78(%ebp),%eax
081d3fdb +0x2a3:  mov    %eax,(%esp)
081d3fde +0x2a6:  call   08236fe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc690
081d3fe3 +0x2ab:  lea    -0x78(%ebp),%eax
081d3fe6 +0x2ae:  mov    %eax,0x4(%esp)
081d3fea +0x2b2:  lea    -0xac(%ebp),%eax
081d3ff0 +0x2b8:  mov    %eax,(%esp)
081d3ff3 +0x2bb:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
081d3ff8 +0x2c0:  lea    -0xa0(%ebp),%eax
081d3ffe +0x2c6:  mov    %eax,0x8(%esp)
081d4002 +0x2ca:  lea    -0x9c(%ebp),%eax
081d4008 +0x2d0:  mov    %eax,0x4(%esp)
081d400c +0x2d4:  lea    -0x6c(%ebp),%eax
081d400f +0x2d7:  mov    %eax,(%esp)
081d4012 +0x2da:  call   080c6cf2 <_GLOBAL__I_g_ServerString_+0x25d>  ; global constructors keyed to g_ServerString_+0x25d
081d4017 +0x2df:  lea    -0x6c(%ebp),%eax
081d401a +0x2e2:  mov    %eax,0x4(%esp)
081d401e +0x2e6:  lea    -0xac(%ebp),%eax
081d4024 +0x2ec:  mov    %eax,(%esp)
081d4027 +0x2ef:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
081d402c +0x2f4:  mov    0xc(%ebp),%eax
081d402f +0x2f7:  mov    %eax,(%esp)
081d4032 +0x2fa:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d4037 +0x2ff:  lea    -0xac(%ebp),%edx
081d403d +0x305:  mov    %edx,0x4(%esp)
081d4041 +0x309:  mov    %eax,(%esp)
081d4044 +0x30c:  call   08507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::CheckNeedItemList(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&) const
081d4049 +0x311:  xor    $0x1,%eax
081d404c +0x314:  test   %al,%al
081d404e +0x316:  je     081d4061 <+0x329>
081d4050 +0x318:  mov    -0x48(%ebp),%eax
081d4053 +0x31b:  movb   $0x11,0x4(%eax)
081d4057 +0x31f:  mov    $0x0,%ebx
081d405c +0x324:  jmp    081d476a <+0xa32>
081d4061 +0x329:  lea    -0x92c(%ebp),%eax
081d4067 +0x32f:  mov    %eax,(%esp)
081d406a +0x332:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
081d406f +0x337:  lea    -0xca6b(%ebp),%eax
081d4075 +0x33d:  mov    %eax,(%esp)
081d4078 +0x340:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
081d407d +0x345:  lea    -0xca6b(%ebp),%eax
081d4083 +0x34b:  mov    %eax,0x4(%esp)
081d4087 +0x34f:  lea    -0x92c(%ebp),%eax
081d408d +0x355:  mov    %eax,(%esp)
081d4090 +0x358:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
081d4095 +0x35d:  mov    0xc(%ebp),%eax
081d4098 +0x360:  mov    %eax,(%esp)
081d409b +0x363:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081d40a0 +0x368:  mov    %eax,0x4(%esp)
081d40a4 +0x36c:  lea    -0x92c(%ebp),%eax
081d40aa +0x372:  mov    %eax,(%esp)
081d40ad +0x375:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
081d40b2 +0x37a:  lea    -0xac(%ebp),%eax
081d40b8 +0x380:  mov    %eax,0x4(%esp)
081d40bc +0x384:  lea    -0x92c(%ebp),%eax
081d40c2 +0x38a:  mov    %eax,(%esp)
081d40c5 +0x38d:  call   085058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>  ; CInventory::tryDeleteEventItems(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
081d40ca +0x392:  xor    $0x1,%eax
081d40cd +0x395:  test   %al,%al
081d40cf +0x397:  je     081d40e2 <+0x3aa>
081d40d1 +0x399:  mov    -0x48(%ebp),%eax
081d40d4 +0x39c:  movb   $0x11,0x4(%eax)
081d40d8 +0x3a0:  mov    $0x0,%ebx
081d40dd +0x3a5:  jmp    081d473c <+0xa04>
081d40e2 +0x3aa:  movb   $0x0,-0x31(%ebp)
081d40e6 +0x3ae:  movl   $0x0,-0x30(%ebp)
081d40ed +0x3b5:  movl   $0x0,-0x2c(%ebp)
081d40f4 +0x3bc:  movl   $0x0,-0x28(%ebp)
081d40fb +0x3c3:  mov    -0x3c(%ebp),%eax
081d40fe +0x3c6:  mov    %eax,(%esp)
081d4101 +0x3c9:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d4106 +0x3ce:  xor    $0x1,%eax
081d4109 +0x3d1:  test   %al,%al
081d410b +0x3d3:  je     081d4145 <+0x40d>
081d410d +0x3d5:  movzbl -0xf9(%ebp),%eax
081d4114 +0x3dc:  mov    %al,-0x31(%ebp)
081d4117 +0x3df:  lea    -0xf9(%ebp),%eax
081d411d +0x3e5:  mov    %eax,(%esp)
081d4120 +0x3e8:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
081d4125 +0x3ed:  movzbl %al,%eax
081d4128 +0x3f0:  mov    %eax,-0x30(%ebp)
081d412b +0x3f3:  mov    -0xec(%ebp),%eax
081d4131 +0x3f9:  mov    %eax,-0x2c(%ebp)
081d4134 +0x3fc:  lea    -0xf9(%ebp),%eax
081d413a +0x402:  mov    %eax,(%esp)
081d413d +0x405:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081d4142 +0x40a:  mov    %eax,-0x28(%ebp)
081d4145 +0x40d:  lea    -0xb8(%ebp),%eax
081d414b +0x413:  mov    %eax,(%esp)
081d414e +0x416:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081d4153 +0x41b:  mov    -0x98(%ebp),%esi
081d4159 +0x421:  mov    -0x84(%ebp),%ebx
081d415f +0x427:  mov    0xc(%ebp),%eax
081d4162 +0x42a:  mov    %eax,(%esp)
081d4165 +0x42d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d416a +0x432:  movl   $0x1,0x14(%esp)
081d4172 +0x43a:  movl   $0x8,0x10(%esp)
081d417a +0x442:  mov    %esi,0xc(%esp)
081d417e +0x446:  mov    %ebx,0x8(%esp)
081d4182 +0x44a:  movl   $0x1,0x4(%esp)
081d418a +0x452:  mov    %eax,(%esp)
081d418d +0x455:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d4192 +0x45a:  test   %al,%al
081d4194 +0x45c:  je     081d41e2 <+0x4aa>
081d4196 +0x45e:  movl   $0x0,-0x64(%ebp)
081d419d +0x465:  lea    -0x64(%ebp),%eax
081d41a0 +0x468:  mov    %eax,0x4(%esp)
081d41a4 +0x46c:  lea    -0xb8(%ebp),%eax
081d41aa +0x472:  mov    %eax,(%esp)
081d41ad +0x475:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081d41b2 +0x47a:  lea    -0x84(%ebp),%eax
081d41b8 +0x480:  mov    %eax,0x4(%esp)
081d41bc +0x484:  lea    -0xb8(%ebp),%eax
081d41c2 +0x48a:  mov    %eax,(%esp)
081d41c5 +0x48d:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
081d41ca +0x492:  lea    -0x98(%ebp),%eax
081d41d0 +0x498:  mov    %eax,0x4(%esp)
081d41d4 +0x49c:  lea    -0xb8(%ebp),%eax
081d41da +0x4a2:  mov    %eax,(%esp)
081d41dd +0x4a5:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
081d41e2 +0x4aa:  mov    -0x8c(%ebp),%ebx
081d41e8 +0x4b0:  mov    0xc(%ebp),%eax
081d41eb +0x4b3:  mov    %eax,(%esp)
081d41ee +0x4b6:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d41f3 +0x4bb:  movl   $0x1,0x14(%esp)
081d41fb +0x4c3:  movl   $0x8,0x10(%esp)
081d4203 +0x4cb:  movl   $0x1,0xc(%esp)
081d420b +0x4d3:  mov    %ebx,0x8(%esp)
081d420f +0x4d7:  movl   $0x1,0x4(%esp)
081d4217 +0x4df:  mov    %eax,(%esp)
081d421a +0x4e2:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d421f +0x4e7:  test   %al,%al
081d4221 +0x4e9:  je     081d4273 <+0x53b>
081d4223 +0x4eb:  movl   $0x0,-0x60(%ebp)
081d422a +0x4f2:  lea    -0x60(%ebp),%eax
081d422d +0x4f5:  mov    %eax,0x4(%esp)
081d4231 +0x4f9:  lea    -0xb8(%ebp),%eax
081d4237 +0x4ff:  mov    %eax,(%esp)
081d423a +0x502:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081d423f +0x507:  lea    -0x8c(%ebp),%eax
081d4245 +0x50d:  mov    %eax,0x4(%esp)
081d4249 +0x511:  lea    -0xb8(%ebp),%eax
081d424f +0x517:  mov    %eax,(%esp)
081d4252 +0x51a:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
081d4257 +0x51f:  movl   $0x1,-0x5c(%ebp)
081d425e +0x526:  lea    -0x5c(%ebp),%eax
081d4261 +0x529:  mov    %eax,0x4(%esp)
081d4265 +0x52d:  lea    -0xb8(%ebp),%eax
081d426b +0x533:  mov    %eax,(%esp)
081d426e +0x536:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081d4273 +0x53b:  mov    -0x9c(%ebp),%ebx
081d4279 +0x541:  mov    0xc(%ebp),%eax
081d427c +0x544:  mov    %eax,(%esp)
081d427f +0x547:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d4284 +0x54c:  mov    %ebx,0x4(%esp)
081d4288 +0x550:  mov    %eax,(%esp)
081d428b +0x553:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
081d4290 +0x558:  mov    %ax,-0x22(%ebp)
081d4294 +0x55c:  cmpw   $0x0,-0x22(%ebp)
081d4299 +0x561:  jns    081d42ac <+0x574>
081d429b +0x563:  mov    -0x48(%ebp),%eax
081d429e +0x566:  movb   $0x11,0x4(%eax)
081d42a2 +0x56a:  mov    $0x0,%ebx
081d42a7 +0x56f:  jmp    081d4714 <+0x9dc>
081d42ac +0x574:  mov    -0xa0(%ebp),%esi
081d42b2 +0x57a:  movswl -0x22(%ebp),%ebx
081d42b6 +0x57e:  mov    0xc(%ebp),%eax
081d42b9 +0x581:  mov    %eax,(%esp)
081d42bc +0x584:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d42c1 +0x589:  movl   $0x1,0x14(%esp)
081d42c9 +0x591:  movl   $0x8,0x10(%esp)
081d42d1 +0x599:  mov    %esi,0xc(%esp)
081d42d5 +0x59d:  mov    %ebx,0x8(%esp)
081d42d9 +0x5a1:  movl   $0x1,0x4(%esp)
081d42e1 +0x5a9:  mov    %eax,(%esp)
081d42e4 +0x5ac:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081d42e9 +0x5b1:  test   %al,%al
081d42eb +0x5b3:  je     081d433d <+0x605>
081d42ed +0x5b5:  movl   $0x0,-0x58(%ebp)
081d42f4 +0x5bc:  lea    -0x58(%ebp),%eax
081d42f7 +0x5bf:  mov    %eax,0x4(%esp)
081d42fb +0x5c3:  lea    -0xb8(%ebp),%eax
081d4301 +0x5c9:  mov    %eax,(%esp)
081d4304 +0x5cc:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081d4309 +0x5d1:  movswl -0x22(%ebp),%eax
081d430d +0x5d5:  mov    %eax,-0x54(%ebp)
081d4310 +0x5d8:  lea    -0x54(%ebp),%eax
081d4313 +0x5db:  mov    %eax,0x4(%esp)
081d4317 +0x5df:  lea    -0xb8(%ebp),%eax
081d431d +0x5e5:  mov    %eax,(%esp)
081d4320 +0x5e8:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
081d4325 +0x5ed:  lea    -0xa0(%ebp),%eax
081d432b +0x5f3:  mov    %eax,0x4(%esp)
081d432f +0x5f7:  lea    -0xb8(%ebp),%eax
081d4335 +0x5fd:  mov    %eax,(%esp)
081d4338 +0x600:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
081d433d +0x605:  movl   $0x0,-0x20(%ebp)
081d4344 +0x60c:  lea    -0x50(%ebp),%eax
081d4347 +0x60f:  lea    -0xb8(%ebp),%edx
081d434d +0x615:  mov    %edx,0x4(%esp)
081d4351 +0x619:  mov    %eax,(%esp)
081d4354 +0x61c:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
081d4359 +0x621:  sub    $0x4,%esp
081d435c +0x624:  lea    -0x50(%ebp),%eax
081d435f +0x627:  mov    %eax,0x4(%esp)
081d4363 +0x62b:  lea    -0xbc(%ebp),%eax
081d4369 +0x631:  mov    %eax,(%esp)
081d436c +0x634:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
081d4371 +0x639:  jmp    081d43fe <+0x6c6>
081d4376 +0x63e:  lea    -0xbc(%ebp),%eax
081d437c +0x644:  mov    %eax,(%esp)
081d437f +0x647:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
081d4384 +0x64c:  mov    (%eax),%eax
081d4386 +0x64e:  mov    %eax,-0x14(%ebp)
081d4389 +0x651:  lea    -0xbc(%ebp),%eax
081d438f +0x657:  mov    %eax,(%esp)
081d4392 +0x65a:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
081d4397 +0x65f:  lea    -0xbc(%ebp),%eax
081d439d +0x665:  mov    %eax,(%esp)
081d43a0 +0x668:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
081d43a5 +0x66d:  mov    (%eax),%eax
081d43a7 +0x66f:  mov    %eax,-0x10(%ebp)
081d43aa +0x672:  lea    -0xbc(%ebp),%eax
081d43b0 +0x678:  mov    %eax,(%esp)
081d43b3 +0x67b:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
081d43b8 +0x680:  lea    -0xbc(%ebp),%eax
081d43be +0x686:  mov    %eax,(%esp)
081d43c1 +0x689:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
081d43c6 +0x68e:  mov    (%eax),%eax
081d43c8 +0x690:  mov    %eax,-0xc(%ebp)
081d43cb +0x693:  lea    -0xbc(%ebp),%eax
081d43d1 +0x699:  mov    %eax,(%esp)
081d43d4 +0x69c:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
081d43d9 +0x6a1:  mov    -0x10(%ebp),%eax
081d43dc +0x6a4:  mov    %eax,0xc(%esp)
081d43e0 +0x6a8:  mov    -0x14(%ebp),%eax
081d43e3 +0x6ab:  mov    %eax,0x8(%esp)
081d43e7 +0x6af:  movl   $0x1,0x4(%esp)
081d43ef +0x6b7:  mov    0xc(%ebp),%eax
081d43f2 +0x6ba:  mov    %eax,(%esp)
081d43f5 +0x6bd:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081d43fa +0x6c2:  addl   $0x1,-0x20(%ebp)
081d43fe +0x6c6:  lea    -0x4c(%ebp),%eax
081d4401 +0x6c9:  lea    -0xb8(%ebp),%edx
081d4407 +0x6cf:  mov    %edx,0x4(%esp)
081d440b +0x6d3:  mov    %eax,(%esp)
081d440e +0x6d6:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081d4413 +0x6db:  sub    $0x4,%esp
081d4416 +0x6de:  lea    -0x4c(%ebp),%eax
081d4419 +0x6e1:  mov    %eax,0x4(%esp)
081d441d +0x6e5:  lea    -0xbc(%ebp),%eax
081d4423 +0x6eb:  mov    %eax,(%esp)
081d4426 +0x6ee:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
081d442b +0x6f3:  test   %al,%al
081d442d +0x6f5:  je     081d443c <+0x704>
081d442f +0x6f7:  cmpl   $0x9,-0x20(%ebp)
081d4433 +0x6fb:  jg     081d443c <+0x704>
081d4435 +0x6fd:  mov    $0x1,%eax
081d443a +0x702:  jmp    081d4441 <+0x709>
081d443c +0x704:  mov    $0x0,%eax
081d4441 +0x709:  test   %al,%al
081d4443 +0x70b:  jne    081d4376 <+0x63e>
081d4449 +0x711:  lea    -0x173(%ebp),%eax
081d444f +0x717:  mov    %eax,(%esp)
081d4452 +0x71a:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081d4457 +0x71f:  mov    -0x94(%ebp),%eax
081d445d +0x725:  mov    %eax,-0x171(%ebp)
081d4463 +0x72b:  mov    -0x171(%ebp),%eax
081d4469 +0x731:  mov    %eax,%ebx
081d446b +0x733:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d4470 +0x738:  mov    %ebx,0x4(%esp)
081d4474 +0x73c:  mov    %eax,(%esp)
081d4477 +0x73f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d447c +0x744:  mov    %eax,-0x1c(%ebp)
081d447f +0x747:  cmpl   $0x0,-0x1c(%ebp)
081d4483 +0x74b:  jne    081d4496 <+0x75e>
081d4485 +0x74d:  mov    -0x48(%ebp),%eax
081d4488 +0x750:  movb   $0x11,0x4(%eax)
081d448c +0x754:  mov    $0x0,%ebx
081d4491 +0x759:  jmp    081d4714 <+0x9dc>
081d4496 +0x75e:  mov    -0x1c(%ebp),%eax
081d4499 +0x761:  mov    (%eax),%eax
081d449b +0x763:  add    $0x8,%eax
081d449e +0x766:  mov    (%eax),%edx
081d44a0 +0x768:  lea    -0x173(%ebp),%eax
081d44a6 +0x76e:  mov    %eax,0x4(%esp)
081d44aa +0x772:  mov    -0x1c(%ebp),%eax
081d44ad +0x775:  mov    %eax,(%esp)
081d44b0 +0x778:  call   *%edx
081d44b2 +0x77a:  mov    -0x1c(%ebp),%eax
081d44b5 +0x77d:  mov    %eax,(%esp)
081d44b8 +0x780:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d44bd +0x785:  test   %al,%al
081d44bf +0x787:  je     081d44cf <+0x797>
081d44c1 +0x789:  mov    -0x90(%ebp),%eax
081d44c7 +0x78f:  mov    %eax,-0x16c(%ebp)
081d44cd +0x795:  jmp    081d450f <+0x7d7>
081d44cf +0x797:  movzbl -0x31(%ebp),%eax
081d44d3 +0x79b:  mov    %al,-0x173(%ebp)
081d44d9 +0x7a1:  mov    -0x30(%ebp),%eax
081d44dc +0x7a4:  movzbl %al,%eax
081d44df +0x7a7:  mov    %eax,0x4(%esp)
081d44e3 +0x7ab:  lea    -0x173(%ebp),%eax
081d44e9 +0x7b1:  mov    %eax,(%esp)
081d44ec +0x7b4:  call   0822b466 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb10>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb10
081d44f1 +0x7b9:  mov    -0x2c(%ebp),%eax
081d44f4 +0x7bc:  mov    %eax,-0x166(%ebp)
081d44fa +0x7c2:  mov    -0x28(%ebp),%eax
081d44fd +0x7c5:  mov    %eax,0x4(%esp)
081d4501 +0x7c9:  lea    -0x173(%ebp),%eax
081d4507 +0x7cf:  mov    %eax,(%esp)
081d450a +0x7d2:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
081d450f +0x7d7:  mov    0xc(%ebp),%eax
081d4512 +0x7da:  mov    %eax,(%esp)
081d4515 +0x7dd:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081d451a +0x7e2:  movl   $0x1,0x4c(%esp)
081d4522 +0x7ea:  movl   $0x1,0x48(%esp)
081d452a +0x7f2:  movl   $0x9,0x44(%esp)
081d4532 +0x7fa:  mov    -0x173(%ebp),%edx
081d4538 +0x800:  mov    %edx,0x4(%esp)
081d453c +0x804:  mov    -0x16f(%ebp),%edx
081d4542 +0x80a:  mov    %edx,0x8(%esp)
081d4546 +0x80e:  mov    -0x16b(%ebp),%edx
081d454c +0x814:  mov    %edx,0xc(%esp)
081d4550 +0x818:  mov    -0x167(%ebp),%edx
081d4556 +0x81e:  mov    %edx,0x10(%esp)
081d455a +0x822:  mov    -0x163(%ebp),%edx
081d4560 +0x828:  mov    %edx,0x14(%esp)
081d4564 +0x82c:  mov    -0x15f(%ebp),%edx
081d456a +0x832:  mov    %edx,0x18(%esp)
081d456e +0x836:  mov    -0x15b(%ebp),%edx
081d4574 +0x83c:  mov    %edx,0x1c(%esp)
081d4578 +0x840:  mov    -0x157(%ebp),%edx
081d457e +0x846:  mov    %edx,0x20(%esp)
081d4582 +0x84a:  mov    -0x153(%ebp),%edx
081d4588 +0x850:  mov    %edx,0x24(%esp)
081d458c +0x854:  mov    -0x14f(%ebp),%edx
081d4592 +0x85a:  mov    %edx,0x28(%esp)
081d4596 +0x85e:  mov    -0x14b(%ebp),%edx
081d459c +0x864:  mov    %edx,0x2c(%esp)
081d45a0 +0x868:  mov    -0x147(%ebp),%edx
081d45a6 +0x86e:  mov    %edx,0x30(%esp)
081d45aa +0x872:  mov    -0x143(%ebp),%edx
081d45b0 +0x878:  mov    %edx,0x34(%esp)
081d45b4 +0x87c:  mov    -0x13f(%ebp),%edx
081d45ba +0x882:  mov    %edx,0x38(%esp)
081d45be +0x886:  mov    -0x13b(%ebp),%edx
081d45c4 +0x88c:  mov    %edx,0x3c(%esp)
081d45c8 +0x890:  movzbl -0x137(%ebp),%edx
081d45cf +0x897:  mov    %dl,0x40(%esp)
081d45d3 +0x89b:  mov    %eax,(%esp)
081d45d6 +0x89e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
081d45db +0x8a3:  mov    %ax,-0x16(%ebp)
081d45df +0x8a7:  cmpw   $0x0,-0x16(%ebp)
081d45e4 +0x8ac:  jns    081d45f7 <+0x8bf>
081d45e6 +0x8ae:  mov    -0x48(%ebp),%eax
081d45e9 +0x8b1:  movb   $0x11,0x4(%eax)
081d45ed +0x8b5:  mov    $0x0,%ebx
081d45f2 +0x8ba:  jmp    081d4714 <+0x9dc>
081d45f7 +0x8bf:  mov    -0x48(%ebp),%eax
081d45fa +0x8c2:  movb   $0x0,0x4(%eax)
081d45fe +0x8c6:  mov    -0x134(%ebp),%eax
081d4604 +0x8cc:  cmp    $0x1f06,%eax
081d4609 +0x8d1:  jne    081d466b <+0x933>
081d460b +0x8d3:  mov    -0x171(%ebp),%eax
081d4611 +0x8d9:  cmp    $0x671d,%eax
081d4616 +0x8de:  jbe    081d4629 <+0x8f1>
081d4618 +0x8e0:  mov    -0x171(%ebp),%eax
081d461e +0x8e6:  cmp    $0x6749,%eax
081d4623 +0x8eb:  jbe    081d46d2 <+0x99a>
081d4629 +0x8f1:  mov    -0x171(%ebp),%edx
081d462f +0x8f7:  mov    -0x134(%ebp),%eax
081d4635 +0x8fd:  mov    %edx,0x18(%esp)
081d4639 +0x901:  mov    %eax,0x14(%esp)
081d463d +0x905:  movl   $"LIMIT CUBE : WRONG RESULT - cube_item(%u), result_item(%u)",0x10(%esp)
081d4645 +0x90d:  movl   $0x344b,0xc(%esp)
081d464d +0x915:  movl   $&_ZZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081d4655 +0x91d:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081d465d +0x925:  movl   $0x1,(%esp)
081d4664 +0x92c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081d4669 +0x931:  jmp    081d46d2 <+0x99a>
081d466b +0x933:  mov    -0x134(%ebp),%eax
081d4671 +0x939:  cmp    $0x1f11,%eax
081d4676 +0x93e:  jne    081d46d2 <+0x99a>
081d4678 +0x940:  mov    -0x171(%ebp),%eax
081d467e +0x946:  cmp    $0x6749,%eax
081d4683 +0x94b:  jbe    081d4692 <+0x95a>
081d4685 +0x94d:  mov    -0x171(%ebp),%eax
081d468b +0x953:  cmp    $0x6775,%eax
081d4690 +0x958:  jbe    081d46d2 <+0x99a>
081d4692 +0x95a:  mov    -0x171(%ebp),%edx
081d4698 +0x960:  mov    -0x134(%ebp),%eax
081d469e +0x966:  mov    %edx,0x18(%esp)
081d46a2 +0x96a:  mov    %eax,0x14(%esp)
081d46a6 +0x96e:  movl   $"LIMIT CUBE : WRONG RESULT - cube_item(%u), result_item(%u)",0x10(%esp)
081d46ae +0x976:  movl   $0x3452,0xc(%esp)
081d46b6 +0x97e:  movl   $&_ZZN23Dispatcher_UseLimitCube7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081d46be +0x986:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081d46c6 +0x98e:  movl   $0x1,(%esp)
081d46cd +0x995:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081d46d2 +0x99a:  movswl -0x16(%ebp),%eax
081d46d6 +0x99e:  mov    %eax,0xc(%esp)
081d46da +0x9a2:  movl   $0x0,0x8(%esp)
081d46e2 +0x9aa:  movl   $0x1,0x4(%esp)
081d46ea +0x9b2:  mov    0xc(%ebp),%eax
081d46ed +0x9b5:  mov    %eax,(%esp)
081d46f0 +0x9b8:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081d46f5 +0x9bd:  mov    $0x0,%ebx
081d46fa +0x9c2:  jmp    081d4714 <+0x9dc>
081d46fc +0x9c4:  mov    %edx,%ebx
081d46fe +0x9c6:  mov    %eax,%esi
081d4700 +0x9c8:  lea    -0xb8(%ebp),%eax
081d4706 +0x9ce:  mov    %eax,(%esp)
081d4709 +0x9d1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081d470e +0x9d6:  mov    %esi,%eax
081d4710 +0x9d8:  mov    %ebx,%edx
081d4712 +0x9da:  jmp    081d4724 <+0x9ec>
081d4714 +0x9dc:  lea    -0xb8(%ebp),%eax
081d471a +0x9e2:  mov    %eax,(%esp)
081d471d +0x9e5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
081d4722 +0x9ea:  jmp    081d473c <+0xa04>
081d4724 +0x9ec:  mov    %edx,%ebx
081d4726 +0x9ee:  mov    %eax,%esi
081d4728 +0x9f0:  lea    -0x92c(%ebp),%eax
081d472e +0x9f6:  mov    %eax,(%esp)
081d4731 +0x9f9:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081d4736 +0x9fe:  mov    %esi,%eax
081d4738 +0xa00:  mov    %ebx,%edx
081d473a +0xa02:  jmp    081d474c <+0xa14>
081d473c +0xa04:  lea    -0x92c(%ebp),%eax
081d4742 +0xa0a:  mov    %eax,(%esp)
081d4745 +0xa0d:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081d474a +0xa12:  jmp    081d476a <+0xa32>
081d474c +0xa14:  mov    %edx,%ebx
081d474e +0xa16:  mov    %eax,%esi
081d4750 +0xa18:  lea    -0xac(%ebp),%eax
081d4756 +0xa1e:  mov    %eax,(%esp)
081d4759 +0xa21:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081d475e +0xa26:  mov    %esi,%eax
081d4760 +0xa28:  mov    %ebx,%edx
081d4762 +0xa2a:  mov    %eax,(%esp)
081d4765 +0xa2d:  call   08ae3750 <_Unwind_Resume>
081d476a +0xa32:  lea    -0xac(%ebp),%eax
081d4770 +0xa38:  mov    %eax,(%esp)
081d4773 +0xa3b:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
081d4778 +0xa40:  mov    %ebx,%eax
081d477a +0xa42:  lea    -0x8(%ebp),%esp
081d477d +0xa45:  add    $0x0,%esp
081d4780 +0xa48:  pop    %ebx
081d4781 +0xa49:  pop    %esi
081d4782 +0xa4a:  pop    %ebp
081d4783 +0xa4b:  ret
```

## 反编译 C

```c
// Dispatcher_UseLimitCube::process @ 0x81d3d38

/* Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseLimitCube::process
          (Dispatcher_UseLimitCube *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  CDataManager *pCVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  InventoryMemory local_ca6f [49471];
  CInventory local_930 [1977];
  Inven_Item local_177;
  undefined1 uStack_176;
  undefined2 uStack_175;
  undefined2 uStack_173;
  undefined1 uStack_171;
  int iStack_170;
  undefined1 uStack_16c;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined4 local_157;
  undefined4 local_153;
  undefined4 local_14f;
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined1 local_13b;
  Inven_Item local_13a [2];
  ulong local_138 [14];
  Inven_Item local_fd [2];
  int local_fb;
  undefined4 local_f0;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_c0 [4];
  vector<int,std::allocator<int>> local_bc [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_b0 [12];
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  int local_88;
  pair<int,int> local_84 [8];
  pair<int,int> local_7c [8];
  int local_74;
  pair<int,int> local_70 [8];
  int local_68 [5];
  __normal_iterator local_54 [4];
  __normal_iterator local_50 [4];
  ParamBase *local_4c;
  MSG_BASE *local_48;
  CItem *local_44;
  CItem *local_40;
  int local_3c;
  Inven_Item local_35;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  short local_26;
  int local_24;
  CItem *local_20;
  short local_1a;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    local_4c = param_3;
    local_48 = param_2;
    local_88 = (int)*(short *)(param_2 + 0xd);
    local_8c = *(uint *)(param_2 + 0xf);
    local_90 = (int)*(short *)(param_2 + 0x13);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_fd,iVar4);
    iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_13a,iVar4);
    uVar1 = local_138[0];
    pCVar5 = (CDataManager *)G_CDataManager();
    local_44 = (CItem *)CDataManager::find_item(pCVar5,uVar1);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_40 = (CItem *)CDataManager::find_item(pCVar5,local_fb);
    iVar4 = local_88;
    iVar6 = GetInvenTypeFromItemSpace(0);
    cVar2 = CUser::CheckItemLock(param_1,iVar6,iVar4);
    if (cVar2 == '\0') {
      local_3c = 0;
      local_3c = check_error(this,local_88,local_8c,local_90,local_fd,local_13a,local_44);
      if (local_3c == 0) {
        std::pair<int,int>::pair((pair<int,int> *)&local_98);
        CStackableItem::get_limit_cube_item((CStackableItem *)local_44,(pair *)&local_98);
        if ((local_98 == 0) && (local_94 == 0)) {
          local_4c[4] = (ParamBase)0x11;
        }
        else {
          *(int *)(local_4c + 8) = local_98;
          *(int *)(local_4c + 0xc) = local_94;
          local_9c = CStackableItem::get_1st_material_count((CStackableItem *)local_44,local_8c);
          local_a0 = CStackableItem::get_2nd_material_index((CStackableItem *)local_44);
          local_a4 = CStackableItem::get_2nd_material_count((CStackableItem *)local_44);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_b0);
                    /* try { // try from 081d3fa3 to 081d406e has its CatchHandler @ 081d474c */
          std::pair<int,int>::pair<unsigned_int&,int&>(local_84,&local_8c,&local_9c);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_b0,local_84);
          local_74 = 1;
          std::pair<int,int>::pair<unsigned_long&,int>(local_7c,local_138,&local_74);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_b0,local_7c);
          std::pair<int,int>::pair<int&,int&>(local_70,&local_a0,&local_a4);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_b0,local_70);
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          cVar2 = CInventory::CheckNeedItemList(pCVar7,(vector *)local_b0);
          if (cVar2 == '\x01') {
            CInventory::CInventory(local_930);
            InventoryMemory::InventoryMemory(local_ca6f);
            CInventory::SetInventoryMemory(local_930,local_ca6f);
            pCVar7 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081d40ad to 081d4152 has its CatchHandler @ 081d4724 */
            CInventory::setCopy(local_930,pCVar7);
            cVar2 = CInventory::tryDeleteEventItems(local_930,(vector *)local_b0);
            if (cVar2 == '\x01') {
              local_35 = (Inven_Item)0x0;
              local_34 = 0;
              local_30 = 0;
              local_2c = 0;
              cVar2 = CItem::is_stackable(local_40);
              if (cVar2 != '\x01') {
                local_35 = local_fd[0];
                local_34 = Inven_Item::GetReSealCount(local_fd);
                local_34 = local_34 & 0xff;
                local_30 = local_f0;
                local_2c = Inven_Item::get_add_info(local_fd);
              }
              std::vector<int,std::allocator<int>>::vector(local_bc);
              iVar6 = local_88;
              iVar4 = local_9c;
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
                    /* try { // try from 081d418d to 081d46f4 has its CatchHandler @ 081d46fc */
              cVar2 = CInventory::delete_item(pCVar7,1,iVar6,iVar4,8,1);
              if (cVar2 != '\0') {
                local_68[0] = 0;
                std::vector<int,std::allocator<int>>::push_back(local_bc,local_68);
                std::vector<int,std::allocator<int>>::push_back(local_bc,&local_88);
                std::vector<int,std::allocator<int>>::push_back(local_bc,&local_9c);
              }
              iVar4 = local_90;
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar2 = CInventory::delete_item(pCVar7,1,iVar4,1,8,1);
              if (cVar2 != '\0') {
                local_68[1] = 0;
                std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 1);
                std::vector<int,std::allocator<int>>::push_back(local_bc,&local_90);
                local_68[2] = 1;
                std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 2);
              }
              iVar4 = local_a0;
              pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              local_26 = CInventory::check_item_exist(pCVar7,iVar4);
              iVar4 = local_a4;
              if (local_26 < 0) {
                local_4c[4] = (ParamBase)0x11;
              }
              else {
                iVar6 = (int)local_26;
                pCVar7 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                cVar2 = CInventory::delete_item(pCVar7,1,iVar6,iVar4,8,1);
                if (cVar2 != '\0') {
                  local_68[3] = 0;
                  std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 3);
                  local_68[4] = (int)local_26;
                  std::vector<int,std::allocator<int>>::push_back(local_bc,local_68 + 4);
                  std::vector<int,std::allocator<int>>::push_back(local_bc,&local_a4);
                }
                local_24 = 0;
                std::vector<int,std::allocator<int>>::begin();
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                __normal_iterator<int*>(local_c0,local_54);
                while( true ) {
                  std::vector<int,std::allocator<int>>::end();
                  bVar3 = __gnu_cxx::operator!=(local_c0,local_50);
                  if ((bVar3) && (local_24 < 10)) {
                    bVar3 = true;
                  }
                  else {
                    bVar3 = false;
                  }
                  if (!bVar3) break;
                  puVar8 = (undefined4 *)
                           __gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_c0);
                  local_18 = *puVar8;
                  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                  operator++(local_c0);
                  puVar8 = (undefined4 *)
                           __gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_c0);
                  local_14 = *puVar8;
                  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                  operator++(local_c0);
                  puVar8 = (undefined4 *)
                           __gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_c0);
                  local_10 = *puVar8;
                  __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                  operator++(local_c0);
                  CUser::SendUpdateItem(param_1,1,local_18,local_14);
                  local_24 = local_24 + 1;
                }
                Inven_Item::Inven_Item(&local_177);
                uStack_175 = (undefined2)local_98;
                uStack_173 = (undefined2)((uint)local_98 >> 0x10);
                pCVar5 = (CDataManager *)G_CDataManager();
                local_20 = (CItem *)CDataManager::find_item(pCVar5,local_98);
                if (local_20 == (CItem *)0x0) {
                  local_4c[4] = (ParamBase)0x11;
                }
                else {
                  (**(code **)(*(int *)local_20 + 8))(local_20,&local_177);
                  cVar2 = CItem::is_stackable(local_20);
                  if (cVar2 == '\0') {
                    local_177 = local_35;
                    Inven_Item::SetReSealCount(&local_177,(uchar)local_34);
                    local_16b._1_3_ = (undefined3)local_30;
                    local_167._0_1_ = (undefined1)((uint)local_30 >> 0x18);
                    Inven_Item::set_add_info(&local_177,local_2c);
                  }
                  else {
                    iStack_170 = local_94;
                  }
                  uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  local_1a = CInventory::insertItemIntoInventory
                                       (uVar9,CONCAT22(uStack_175,CONCAT11(uStack_176,local_177)),
                                        CONCAT13((undefined1)iStack_170,
                                                 CONCAT12(uStack_171,uStack_173)),
                                        CONCAT13(uStack_16c,iStack_170._1_3_),local_16b,local_167,
                                        local_163,local_15f,local_15b,local_157,local_153,local_14f,
                                        local_14b,local_147,local_143,local_13f,local_13b,9,1,1);
                  if (local_1a < 0) {
                    local_4c[4] = (ParamBase)0x11;
                  }
                  else {
                    local_4c[4] = (ParamBase)0x0;
                    if (local_138[0] == 0x1f06) {
                      if ((CONCAT22(uStack_173,uStack_175) < 0x671e) ||
                         (0x6749 < CONCAT22(uStack_173,uStack_175))) {
                        LogManager::logFormat
                                  (1,"PacketDispatcher_Impl_1.cpp",
                                   "virtual int Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&)"
                                   ,0x344b,
                                   "LIMIT CUBE : WRONG RESULT - cube_item(%u), result_item(%u)",
                                   0x1f06,CONCAT22(uStack_173,uStack_175));
                      }
                    }
                    else if ((local_138[0] == 0x1f11) &&
                            ((CONCAT22(uStack_173,uStack_175) < 0x674a ||
                             (0x6775 < CONCAT22(uStack_173,uStack_175))))) {
                      LogManager::logFormat
                                (1,"PacketDispatcher_Impl_1.cpp",
                                 "virtual int Dispatcher_UseLimitCube::process(CUser*, MSG_BASE&, ParamBase&)"
                                 ,0x3452,
                                 "LIMIT CUBE : WRONG RESULT - cube_item(%u), result_item(%u)",0x1f11
                                 ,CONCAT22(uStack_173,uStack_175));
                    }
                    CUser::SendUpdateItem(param_1,1,0,(int)local_1a);
                  }
                }
              }
                    /* try { // try from 081d471d to 081d4721 has its CatchHandler @ 081d4724 */
              std::vector<int,std::allocator<int>>::~vector(local_bc);
            }
            else {
              local_4c[4] = (ParamBase)0x11;
            }
                    /* try { // try from 081d4745 to 081d4749 has its CatchHandler @ 081d474c */
            CInventory::~CInventory(local_930);
          }
          else {
            local_4c[4] = (ParamBase)0x11;
          }
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_b0);
        }
      }
      else {
        local_4c[4] = SUB41(local_3c,0);
      }
    }
    else {
      local_4c[4] = (ParamBase)0x1;
    }
  }
  return 0;
}
```
