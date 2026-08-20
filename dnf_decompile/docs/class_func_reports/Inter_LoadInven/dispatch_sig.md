# dispatch_sig

`_ZN15Inter_LoadInven12dispatch_sigEP5CUserPci`

`Inter_LoadInven::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadInven` | `0x084c3f92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c3f92  _ZN15Inter_LoadInven12dispatch_sigEP5CUserPci
#           Inter_LoadInven::dispatch_sig(CUser*, char*, int)
# range [0x084c3f92, 0x084c455b]
084c3f92 +0x000:  push   %ebp
084c3f93 +0x001:  mov    %esp,%ebp
084c3f95 +0x003:  push   %esi
084c3f96 +0x004:  push   %ebx
084c3f97 +0x005:  sub    $0x40,%esp
084c3f9a +0x008:  mov    0xc(%ebp),%eax
084c3f9d +0x00b:  mov    %eax,(%esp)
084c3fa0 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c3fa5 +0x013:  test   %eax,%eax
084c3fa7 +0x015:  sete   %al
084c3faa +0x018:  test   %al,%al
084c3fac +0x01a:  je     084c3fb8 <+0x26>
084c3fae +0x01c:  mov    $0x1835,%eax
084c3fb3 +0x021:  jmp    084c4555 <+0x5c3>
084c3fb8 +0x026:  mov    0x10(%ebp),%eax
084c3fbb +0x029:  mov    %eax,-0x34(%ebp)
084c3fbe +0x02c:  mov    -0x34(%ebp),%eax
084c3fc1 +0x02f:  mov    0x4030(%eax),%eax
084c3fc7 +0x035:  cmp    $0x1,%eax
084c3fca +0x038:  jne    084c3fd6 <+0x44>
084c3fcc +0x03a:  mov    $0x183c,%eax
084c3fd1 +0x03f:  jmp    084c4555 <+0x5c3>
084c3fd6 +0x044:  mov    0xc(%ebp),%eax
084c3fd9 +0x047:  mov    %eax,(%esp)
084c3fdc +0x04a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084c3fe1 +0x04f:  test   %eax,%eax
084c3fe3 +0x051:  sete   %al
084c3fe6 +0x054:  test   %al,%al
084c3fe8 +0x056:  je     084c3ff4 <+0x62>
084c3fea +0x058:  mov    $0x1841,%eax
084c3fef +0x05d:  jmp    084c4555 <+0x5c3>
084c3ff4 +0x062:  mov    -0x34(%ebp),%eax
084c3ff7 +0x065:  mov    &_ZL14gUnicodeBuffer+0xae10(%eax),%eax
084c3ffd +0x06b:  mov    %eax,%ebx
084c3fff +0x06d:  mov    0xc(%ebp),%eax
084c4002 +0x070:  mov    %eax,(%esp)
084c4005 +0x073:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084c400a +0x078:  mov    %ebx,0x4(%esp)
084c400e +0x07c:  mov    %eax,(%esp)
084c4011 +0x07f:  call   0822d6ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2d98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2d98
084c4016 +0x084:  movl   $0x2,0x4(%esp)
084c401e +0x08c:  mov    0xc(%ebp),%eax
084c4021 +0x08f:  mov    %eax,(%esp)
084c4024 +0x092:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c4029 +0x097:  mov    %eax,(%esp)
084c402c +0x09a:  call   0849aaa4 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x1c>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x1c
084c4031 +0x09f:  mov    0xc(%ebp),%edx
084c4034 +0x0a2:  mov    %edx,0x8(%esp)
084c4038 +0x0a6:  mov    %eax,0x4(%esp)
084c403c +0x0aa:  mov    -0x34(%ebp),%eax
084c403f +0x0ad:  mov    %eax,(%esp)
084c4042 +0x0b0:  call   084f0145 <_GLOBAL__I__Z7getUserj+0x70f7>  ; global constructors keyed to getUser(unsigned int)+0x70f7
084c4047 +0x0b5:  xor    $0x1,%eax
084c404a +0x0b8:  test   %al,%al
084c404c +0x0ba:  je     084c4071 <+0xdf>
084c404e +0x0bc:  movl   $0x0,0xc(%esp)
084c4056 +0x0c4:  movl   $0x1,0x8(%esp)
084c405e +0x0cc:  movl   $0x24,0x4(%esp)
084c4066 +0x0d4:  mov    0xc(%ebp),%eax
084c4069 +0x0d7:  mov    %eax,(%esp)
084c406c +0x0da:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084c4071 +0x0df:  mov    0xc(%ebp),%eax
084c4074 +0x0e2:  mov    %eax,(%esp)
084c4077 +0x0e5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c407c +0x0ea:  mov    %eax,(%esp)
084c407f +0x0ed:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
084c4084 +0x0f2:  mov    %eax,(%esp)
084c4087 +0x0f5:  call   0833a45a <_ZN13user_creature12CCreatureMgr5ResetEv>  ; user_creature::CCreatureMgr::Reset()
084c408c +0x0fa:  mov    0xc(%ebp),%eax
084c408f +0x0fd:  mov    %eax,(%esp)
084c4092 +0x100:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c4097 +0x105:  mov    %eax,(%esp)
084c409a +0x108:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
084c409f +0x10d:  mov    0xc(%ebp),%edx
084c40a2 +0x110:  mov    %edx,0x4(%esp)
084c40a6 +0x114:  mov    %eax,(%esp)
084c40a9 +0x117:  call   0822d39a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a44
084c40ae +0x11c:  movl   $0x0,-0x2c(%ebp)
084c40b5 +0x123:  jmp    084c4122 <+0x190>
084c40b7 +0x125:  mov    -0x2c(%ebp),%eax
084c40ba +0x128:  shl    $0x3,%eax
084c40bd +0x12b:  lea    0x0(,%eax,8),%edx
084c40c4 +0x132:  sub    %eax,%edx
084c40c6 +0x134:  lea    &_ZL14gUnicodeBuffer+0x8354(%edx),%eax
084c40cc +0x13a:  mov    %eax,%ebx
084c40ce +0x13c:  add    -0x34(%ebp),%ebx
084c40d1 +0x13f:  mov    -0x2c(%ebp),%eax
084c40d4 +0x142:  mov    -0x34(%ebp),%ecx
084c40d7 +0x145:  shl    $0x3,%eax
084c40da +0x148:  lea    0x0(,%eax,8),%edx
084c40e1 +0x14f:  sub    %eax,%edx
084c40e3 +0x151:  lea    (%ecx,%edx,1),%eax
084c40e6 +0x154:  add    $&_ZL14gUnicodeBuffer+0x8354,%eax
084c40eb +0x159:  mov    (%eax),%eax
084c40ed +0x15b:  imul   $0x3d,%eax,%eax
084c40f0 +0x15e:  add    $0xeed0,%eax
084c40f5 +0x163:  add    -0x34(%ebp),%eax
084c40f8 +0x166:  lea    0x1(%eax),%esi
084c40fb +0x169:  mov    0xc(%ebp),%eax
084c40fe +0x16c:  mov    %eax,(%esp)
084c4101 +0x16f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c4106 +0x174:  mov    %eax,(%esp)
084c4109 +0x177:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
084c410e +0x17c:  mov    %ebx,0x8(%esp)
084c4112 +0x180:  mov    %esi,0x4(%esp)
084c4116 +0x184:  mov    %eax,(%esp)
084c4119 +0x187:  call   0833b68c <_ZN13user_creature12CCreatureMgr16LoadCreatureItemEP10Inven_ItemP29SIG_CREATURE_ITEM_DETAIL_INFO>  ; user_creature::CCreatureMgr::LoadCreatureItem(Inven_Item*, SIG_CREATURE_ITEM_DETAIL_INFO*)
084c411e +0x18c:  addl   $0x1,-0x2c(%ebp)
084c4122 +0x190:  mov    -0x34(%ebp),%eax
084c4125 +0x193:  mov    &_ZL14gUnicodeBuffer+0x8350(%eax),%eax
084c412b +0x199:  cmp    -0x2c(%ebp),%eax
084c412e +0x19c:  setg   %al
084c4131 +0x19f:  test   %al,%al
084c4133 +0x1a1:  jne    084c40b7 <+0x125>
084c4135 +0x1a3:  movl   $0x0,-0x28(%ebp)
084c413c +0x1aa:  jmp    084c4172 <+0x1e0>
084c413e +0x1ac:  mov    -0x28(%ebp),%eax
084c4141 +0x1af:  add    $0x2a68,%eax
084c4146 +0x1b4:  shl    $0x3,%eax
084c4149 +0x1b7:  add    -0x34(%ebp),%eax
084c414c +0x1ba:  lea    0x4(%eax),%ebx
084c414f +0x1bd:  mov    0xc(%ebp),%eax
084c4152 +0x1c0:  mov    %eax,(%esp)
084c4155 +0x1c3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c415a +0x1c8:  mov    %eax,(%esp)
084c415d +0x1cb:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
084c4162 +0x1d0:  mov    %ebx,0x4(%esp)
084c4166 +0x1d4:  mov    %eax,(%esp)
084c4169 +0x1d7:  call   0833d9d8 <_ZN13user_creature12CCreatureMgr22LoadCreatureTempPeriodEP31SIG_POSTAL_CREATURE_TEMP_PERIOD>  ; user_creature::CCreatureMgr::LoadCreatureTempPeriod(SIG_POSTAL_CREATURE_TEMP_PERIOD*)
084c416e +0x1dc:  addl   $0x1,-0x28(%ebp)
084c4172 +0x1e0:  mov    -0x34(%ebp),%eax
084c4175 +0x1e3:  mov    &_ZL14gUnicodeBuffer+0xae14(%eax),%eax
084c417b +0x1e9:  cmp    -0x28(%ebp),%eax
084c417e +0x1ec:  setg   %al
084c4181 +0x1ef:  test   %al,%al
084c4183 +0x1f1:  jne    084c413e <+0x1ac>
084c4185 +0x1f3:  mov    -0x34(%ebp),%eax
084c4188 +0x1f6:  mov    %eax,0x4(%esp)
084c418c +0x1fa:  mov    0xc(%ebp),%eax
084c418f +0x1fd:  mov    %eax,(%esp)
084c4192 +0x200:  call   0864d160 <_ZN5CUser12SetInventoryEP18SIG_LOAD_INVENTORY>  ; CUser::SetInventory(SIG_LOAD_INVENTORY*)
084c4197 +0x205:  xor    $0x1,%eax
084c419a +0x208:  test   %al,%al
084c419c +0x20a:  je     084c41a8 <+0x216>
084c419e +0x20c:  mov    $0x1872,%eax
084c41a3 +0x211:  jmp    084c4555 <+0x5c3>
084c41a8 +0x216:  mov    -0x34(%ebp),%eax
084c41ab +0x219:  mov    0x8(%eax),%eax
084c41ae +0x21c:  mov    %eax,0x4(%esp)
084c41b2 +0x220:  mov    0xc(%ebp),%eax
084c41b5 +0x223:  mov    %eax,(%esp)
084c41b8 +0x226:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084c41bd +0x22b:  mov    %eax,-0x30(%ebp)
084c41c0 +0x22e:  mov    -0x34(%ebp),%eax
084c41c3 +0x231:  mov    0x8(%eax),%eax
084c41c6 +0x234:  test   %eax,%eax
084c41c8 +0x236:  je     084c41f6 <+0x264>
084c41ca +0x238:  cmpl   $0xffffffff,-0x30(%ebp)
084c41ce +0x23c:  je     084c41f6 <+0x264>
084c41d0 +0x23e:  mov    -0x34(%ebp),%eax
084c41d3 +0x241:  add    $0xc,%eax
084c41d6 +0x244:  mov    %eax,0x4(%esp)
084c41da +0x248:  mov    0xc(%ebp),%eax
084c41dd +0x24b:  mov    %eax,(%esp)
084c41e0 +0x24e:  call   08690226 <_ZN5CUser17setTagCharacInvenEP21TAG_CHARAC_INVEN_DATA>  ; CUser::setTagCharacInven(TAG_CHARAC_INVEN_DATA*)
084c41e5 +0x253:  xor    $0x1,%eax
084c41e8 +0x256:  test   %al,%al
084c41ea +0x258:  je     084c41f6 <+0x264>
084c41ec +0x25a:  mov    $0x1892,%eax
084c41f1 +0x25f:  jmp    084c4555 <+0x5c3>
084c41f6 +0x264:  mov    -0x34(%ebp),%eax
084c41f9 +0x267:  lea    &_ZL14gUnicodeBuffer+0xa22c(%eax),%ebx
084c41ff +0x26d:  mov    0xc(%ebp),%eax
084c4202 +0x270:  mov    %eax,(%esp)
084c4205 +0x273:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c420a +0x278:  mov    %ebx,0x4(%esp)
084c420e +0x27c:  mov    %eax,(%esp)
084c4211 +0x27f:  call   084e99b4 <_GLOBAL__I__Z7getUserj+0x966>  ; global constructors keyed to getUser(unsigned int)+0x966
084c4216 +0x284:  movl   $0x0,-0x24(%ebp)
084c421d +0x28b:  jmp    084c4317 <+0x385>
084c4222 +0x290:  movl   $0x0,-0x20(%ebp)
084c4229 +0x297:  mov    -0x24(%ebp),%eax
084c422c +0x29a:  mov    -0x34(%ebp),%edx
084c422f +0x29d:  imul   $0x4b,%eax,%eax
084c4232 +0x2a0:  lea    (%edx,%eax,1),%eax
084c4235 +0x2a3:  add    $0xcd40,%eax
084c423a +0x2a8:  mov    0x5(%eax),%eax
084c423d +0x2ab:  test   %eax,%eax
084c423f +0x2ad:  je     084c42dc <+0x34a>
084c4245 +0x2b3:  mov    -0x24(%ebp),%eax
084c4248 +0x2b6:  mov    -0x34(%ebp),%edx
084c424b +0x2b9:  imul   $0x4b,%eax,%eax
084c424e +0x2bc:  lea    (%edx,%eax,1),%eax
084c4251 +0x2bf:  add    $0xcd40,%eax
084c4256 +0x2c4:  mov    0x5(%eax),%eax
084c4259 +0x2c7:  mov    -0x34(%ebp),%edx
084c425c +0x2ca:  add    $0x4044,%edx
084c4262 +0x2d0:  mov    %eax,0x8(%esp)
084c4266 +0x2d4:  movl   $0x69,0x4(%esp)
084c426e +0x2dc:  mov    %edx,(%esp)
084c4271 +0x2df:  call   084e91a4 <_GLOBAL__I__Z7getUserj+0x156>  ; global constructors keyed to getUser(unsigned int)+0x156
084c4276 +0x2e4:  mov    %eax,-0x20(%ebp)
084c4279 +0x2e7:  movl   $0x0,-0x1c(%ebp)
084c4280 +0x2ee:  jmp    084c42d1 <+0x33f>
084c4282 +0x2f0:  mov    -0x1c(%ebp),%eax
084c4285 +0x2f3:  mov    -0x34(%ebp),%edx
084c4288 +0x2f6:  imul   $0x3d,%eax,%eax
084c428b +0x2f9:  lea    (%edx,%eax,1),%eax
084c428e +0x2fc:  add    $0xa3a8,%eax
084c4293 +0x301:  mov    (%eax),%edx
084c4295 +0x303:  mov    -0x24(%ebp),%eax
084c4298 +0x306:  mov    -0x34(%ebp),%ecx
084c429b +0x309:  imul   $0x4b,%eax,%eax
084c429e +0x30c:  lea    (%ecx,%eax,1),%eax
084c42a1 +0x30f:  add    $0xcd20,%eax
084c42a6 +0x314:  mov    (%eax),%eax
084c42a8 +0x316:  cmp    %eax,%edx
084c42aa +0x318:  jne    084c42cd <+0x33b>
084c42ac +0x31a:  mov    0xc(%ebp),%eax
084c42af +0x31d:  mov    %eax,(%esp)
084c42b2 +0x320:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c42b7 +0x325:  mov    -0x20(%ebp),%edx
084c42ba +0x328:  mov    %edx,0x8(%esp)
084c42be +0x32c:  mov    -0x1c(%ebp),%edx
084c42c1 +0x32f:  mov    %edx,0x4(%esp)
084c42c5 +0x333:  mov    %eax,(%esp)
084c42c8 +0x336:  call   084e9990 <_GLOBAL__I__Z7getUserj+0x942>  ; global constructors keyed to getUser(unsigned int)+0x942
084c42cd +0x33b:  addl   $0x1,-0x1c(%ebp)
084c42d1 +0x33f:  cmpl   $0x9,-0x1c(%ebp)
084c42d5 +0x343:  setle  %al
084c42d8 +0x346:  test   %al,%al
084c42da +0x348:  jne    084c4282 <+0x2f0>
084c42dc +0x34a:  mov    -0x24(%ebp),%eax
084c42df +0x34d:  imul   $0x4b,%eax,%eax
084c42e2 +0x350:  add    $0xcd20,%eax
084c42e7 +0x355:  mov    %eax,%ebx
084c42e9 +0x357:  add    -0x34(%ebp),%ebx
084c42ec +0x35a:  mov    0xc(%ebp),%eax
084c42ef +0x35d:  mov    %eax,(%esp)
084c42f2 +0x360:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c42f7 +0x365:  mov    %eax,(%esp)
084c42fa +0x368:  call   08110c6c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x17e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x17e
084c42ff +0x36d:  movl   $0x0,0x8(%esp)
084c4307 +0x375:  mov    %ebx,0x4(%esp)
084c430b +0x379:  mov    %eax,(%esp)
084c430e +0x37c:  call   082f8fb0 <_ZN8WongWork14CAvatarItemMgr10RegistItemERK16AvatarDetailInfob>  ; WongWork::CAvatarItemMgr::RegistItem(AvatarDetailInfo const&, bool)
084c4313 +0x381:  addl   $0x1,-0x24(%ebp)
084c4317 +0x385:  mov    -0x34(%ebp),%eax
084c431a +0x388:  mov    0xcd1c(%eax),%eax
084c4320 +0x38e:  cmp    -0x24(%ebp),%eax
084c4323 +0x391:  setg   %al
084c4326 +0x394:  test   %al,%al
084c4328 +0x396:  jne    084c4222 <+0x290>
084c432e +0x39c:  mov    -0x34(%ebp),%eax
084c4331 +0x39f:  mov    &_ZL14gUnicodeBuffer+0xaf1c(%eax),%eax
084c4337 +0x3a5:  test   %eax,%eax
084c4339 +0x3a7:  je     084c4353 <+0x3c1>
084c433b +0x3a9:  mov    -0x34(%ebp),%eax
084c433e +0x3ac:  mov    &_ZL14gUnicodeBuffer+0xaf1c(%eax),%edx
084c4344 +0x3b2:  mov    0xc(%ebp),%eax
084c4347 +0x3b5:  mov    %edx,0x4(%esp)
084c434b +0x3b9:  mov    %eax,(%esp)
084c434e +0x3bc:  call   086467c2 <_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi>  ; CUserCharacInfo::SetCurCharacMaxEquipLevel(int)
084c4353 +0x3c1:  mov    0xc(%ebp),%eax
084c4356 +0x3c4:  mov    %eax,0x4(%esp)
084c435a +0x3c8:  mov    0x8(%ebp),%eax
084c435d +0x3cb:  mov    %eax,(%esp)
084c4360 +0x3ce:  call   084c4d38 <_ZN15Inter_LoadInven19_CheckOverEquipItemEP5CUser>  ; Inter_LoadInven::_CheckOverEquipItem(CUser*)
084c4365 +0x3d3:  mov    0xc(%ebp),%eax
084c4368 +0x3d6:  mov    %eax,0x4(%esp)
084c436c +0x3da:  mov    0x8(%ebp),%eax
084c436f +0x3dd:  mov    %eax,(%esp)
084c4372 +0x3e0:  call   084c4b38 <_ZN15Inter_LoadInven30_CheckUsableExpertJobEquipmentEP5CUser>  ; Inter_LoadInven::_CheckUsableExpertJobEquipment(CUser*)
084c4377 +0x3e5:  movl   $0x1,0x4(%esp)
084c437f +0x3ed:  mov    0xc(%ebp),%eax
084c4382 +0x3f0:  mov    %eax,(%esp)
084c4385 +0x3f3:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084c438a +0x3f8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c438f +0x3fd:  mov    %eax,(%esp)
084c4392 +0x400:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c4397 +0x405:  cmp    $0x7,%eax
084c439a +0x408:  sete   %al
084c439d +0x40b:  test   %al,%al
084c439f +0x40d:  je     084c44a2 <+0x510>
084c43a5 +0x413:  mov    0xc(%ebp),%eax
084c43a8 +0x416:  mov    %eax,(%esp)
084c43ab +0x419:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c43b0 +0x41e:  movl   $0xa,0x8(%esp)
084c43b8 +0x426:  movl   $0x0,0x4(%esp)
084c43c0 +0x42e:  mov    %eax,(%esp)
084c43c3 +0x431:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
084c43c8 +0x436:  movl   $0x0,0x4(%esp)
084c43d0 +0x43e:  mov    %eax,(%esp)
084c43d3 +0x441:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
084c43d8 +0x446:  movl   $0xb,-0x18(%ebp)
084c43df +0x44d:  jmp    084c4417 <+0x485>
084c43e1 +0x44f:  mov    0xc(%ebp),%eax
084c43e4 +0x452:  mov    %eax,(%esp)
084c43e7 +0x455:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c43ec +0x45a:  mov    -0x18(%ebp),%edx
084c43ef +0x45d:  mov    %edx,0x8(%esp)
084c43f3 +0x461:  movl   $0x0,0x4(%esp)
084c43fb +0x469:  mov    %eax,(%esp)
084c43fe +0x46c:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
084c4403 +0x471:  movl   $0x0,0x4(%esp)
084c440b +0x479:  mov    %eax,(%esp)
084c440e +0x47c:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
084c4413 +0x481:  addl   $0x1,-0x18(%ebp)
084c4417 +0x485:  cmpl   $0x15,-0x18(%ebp)
084c441b +0x489:  setle  %al
084c441e +0x48c:  test   %al,%al
084c4420 +0x48e:  jne    084c43e1 <+0x44f>
084c4422 +0x490:  movl   $0x3,-0x14(%ebp)
084c4429 +0x497:  jmp    084c4497 <+0x505>
084c442b +0x499:  mov    0xc(%ebp),%eax
084c442e +0x49c:  mov    %eax,(%esp)
084c4431 +0x49f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084c4436 +0x4a4:  mov    -0x14(%ebp),%edx
084c4439 +0x4a7:  mov    %edx,0x8(%esp)
084c443d +0x4ab:  movl   $0x1,0x4(%esp)
084c4445 +0x4b3:  mov    %eax,(%esp)
084c4448 +0x4b6:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
084c444d +0x4bb:  mov    %eax,-0x10(%ebp)
084c4450 +0x4be:  mov    -0x10(%ebp),%eax
084c4453 +0x4c1:  movzbl 0x1(%eax),%eax
084c4457 +0x4c5:  cmp    $0x1,%al
084c4459 +0x4c7:  jne    084c4493 <+0x501>
084c445b +0x4c9:  mov    -0x10(%ebp),%eax
084c445e +0x4cc:  mov    0x2(%eax),%eax
084c4461 +0x4cf:  mov    %eax,%ebx
084c4463 +0x4d1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084c4468 +0x4d6:  mov    %ebx,0x4(%esp)
084c446c +0x4da:  mov    %eax,(%esp)
084c446f +0x4dd:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084c4474 +0x4e2:  mov    %eax,-0xc(%ebp)
084c4477 +0x4e5:  cmpl   $0x0,-0xc(%ebp)
084c447b +0x4e9:  je     084c4492 <+0x500>
084c447d +0x4eb:  movl   $0x0,0x4(%esp)
084c4485 +0x4f3:  mov    -0x10(%ebp),%eax
084c4488 +0x4f6:  mov    %eax,(%esp)
084c448b +0x4f9:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
084c4490 +0x4fe:  jmp    084c4493 <+0x501>
084c4492 +0x500:  nop
084c4493 +0x501:  addl   $0x1,-0x14(%ebp)
084c4497 +0x505:  cmpl   $0x38,-0x14(%ebp)
084c449b +0x509:  setle  %al
084c449e +0x50c:  test   %al,%al
084c44a0 +0x50e:  jne    084c442b <+0x499>
084c44a2 +0x510:  movl   $0x2,0x4(%esp)
084c44aa +0x518:  mov    0xc(%ebp),%eax
084c44ad +0x51b:  mov    %eax,(%esp)
084c44b0 +0x51e:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c44b5 +0x523:  mov    (%eax),%edx
084c44b7 +0x525:  add    $0x4,%edx
084c44ba +0x528:  mov    (%edx),%ecx
084c44bc +0x52a:  mov    -0x34(%ebp),%edx
084c44bf +0x52d:  add    $&_ZL14gUnicodeBuffer+0xa258,%edx
084c44c5 +0x533:  mov    %edx,0x8(%esp)
084c44c9 +0x537:  mov    0xc(%ebp),%edx
084c44cc +0x53a:  mov    %edx,0x4(%esp)
084c44d0 +0x53e:  mov    %eax,(%esp)
084c44d3 +0x541:  call   *%ecx
084c44d5 +0x543:  movl   $0x9,0x4(%esp)
084c44dd +0x54b:  mov    0xc(%ebp),%eax
084c44e0 +0x54e:  mov    %eax,(%esp)
084c44e3 +0x551:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084c44e8 +0x556:  mov    (%eax),%edx
084c44ea +0x558:  add    $0x4,%edx
084c44ed +0x55b:  mov    (%edx),%ecx
084c44ef +0x55d:  mov    -0x34(%ebp),%edx
084c44f2 +0x560:  add    $&_ZL14gUnicodeBuffer+0xa578,%edx
084c44f8 +0x566:  mov    %edx,0x8(%esp)
084c44fc +0x56a:  mov    0xc(%ebp),%edx
084c44ff +0x56d:  mov    %edx,0x4(%esp)
084c4503 +0x571:  mov    %eax,(%esp)
084c4506 +0x574:  call   *%ecx
084c4508 +0x576:  mov    0xc(%ebp),%eax
084c450b +0x579:  mov    %eax,(%esp)
084c450e +0x57c:  call   084ebf18 <_GLOBAL__I__Z7getUserj+0x2eca>  ; global constructors keyed to getUser(unsigned int)+0x2eca
084c4513 +0x581:  mov    0xc(%ebp),%eax
084c4516 +0x584:  mov    %eax,(%esp)
084c4519 +0x587:  call   084ebf48 <_GLOBAL__I__Z7getUserj+0x2efa>  ; global constructors keyed to getUser(unsigned int)+0x2efa
084c451e +0x58c:  mov    -0x34(%ebp),%eax
084c4521 +0x58f:  mov    %eax,0x8(%esp)
084c4525 +0x593:  mov    0xc(%ebp),%eax
084c4528 +0x596:  mov    %eax,0x4(%esp)
084c452c +0x59a:  mov    0x8(%ebp),%eax
084c452f +0x59d:  mov    %eax,(%esp)
084c4532 +0x5a0:  call   084c455c <_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY>  ; Inter_LoadInven::_UpdateRentalItems(CUser*, SIG_LOAD_INVENTORY*)
084c4537 +0x5a5:  mov    -0x34(%ebp),%eax
084c453a +0x5a8:  mov    %eax,0x8(%esp)
084c453e +0x5ac:  mov    0xc(%ebp),%eax
084c4541 +0x5af:  mov    %eax,0x4(%esp)
084c4545 +0x5b3:  mov    0x8(%ebp),%eax
084c4548 +0x5b6:  mov    %eax,(%esp)
084c454b +0x5b9:  call   084c4858 <_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY>  ; Inter_LoadInven::_UpdateDimensionRentalItems(CUser*, SIG_LOAD_INVENTORY*)
084c4550 +0x5be:  mov    $0x0,%eax
084c4555 +0x5c3:  add    $0x40,%esp
084c4558 +0x5c6:  pop    %ebx
084c4559 +0x5c7:  pop    %esi
084c455a +0x5c8:  pop    %ebp
084c455b +0x5c9:  ret
```

## 反编译 C

```c
// Inter_LoadInven::dispatch_sig @ 0x84c3f92

/* Inter_LoadInven::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadInven::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *pCVar4;
  CItemLock *this;
  vector *pvVar5;
  CCreatureMgr *pCVar6;
  CAvatarItemMgr *this_00;
  GameWorld *this_01;
  Inven_Item *pIVar7;
  CDataManager *this_02;
  int *piVar8;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0x1835;
  }
  else if (*(int *)(param_3 + 0x4030) == 1) {
    uVar3 = 0x183c;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x1841;
    }
    else {
      iVar2 = *(int *)(param_3 + 0x1533c);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::set_inventory_capacity(pCVar4,iVar2);
      this = (CItemLock *)CUser::GetCharacExpandData((CUser *)param_2,2);
      pvVar5 = (vector *)item_lock::CItemLock::GetItemLockRefVec(this);
      cVar1 = _verifyInventory((SIG_LOAD_INVENTORY *)param_3,pvVar5,(CUser *)param_2);
      if (cVar1 != '\x01') {
        CUser::DisConnSig((CUser *)param_2,0x24,1,0);
      }
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
      user_creature::CCreatureMgr::Reset(pCVar6);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
      user_creature::CCreatureMgr::SetUser(pCVar6,(CUser *)param_2);
      for (local_30 = 0; local_30 < *(int *)(param_3 + 0x1287c); local_30 = local_30 + 1) {
        iVar2 = *(int *)(param_3 + local_30 * 0x38 + 0x12880);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
        user_creature::CCreatureMgr::LoadCreatureItem
                  (pCVar6,(Inven_Item *)(iVar2 * 0x3d + param_3 + 0xeed1),
                   (SIG_CREATURE_ITEM_DETAIL_INFO *)(local_30 * 0x38 + 0x12880 + param_3));
      }
      for (local_2c = 0; local_2c < *(int *)(param_3 + 0x15340); local_2c = local_2c + 1) {
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        pCVar6 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar4);
        user_creature::CCreatureMgr::LoadCreatureTempPeriod
                  (pCVar6,(SIG_POSTAL_CREATURE_TEMP_PERIOD *)((local_2c + 0x2a68) * 8 + param_3 + 4)
                  );
      }
      cVar1 = CUser::SetInventory((CUser *)param_2,(SIG_LOAD_INVENTORY *)param_3);
      if (cVar1 == '\x01') {
        iVar2 = CUser::get_charac_idx((CUser *)param_2,*(uint *)(param_3 + 8));
        if (((*(int *)(param_3 + 8) != 0) && (iVar2 != -1)) &&
           (cVar1 = CUser::setTagCharacInven
                              ((CUser *)param_2,(TAG_CHARAC_INVEN_DATA *)(param_3 + 0xc)),
           cVar1 != '\x01')) {
          return 0x1892;
        }
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        CInventory::SetClearAvatar(pCVar4,(ulong *)(param_3 + 0x14758));
        for (local_28 = 0; local_28 < *(int *)(param_3 + 0xcd1c); local_28 = local_28 + 1) {
          if (*(int *)(param_3 + local_28 * 0x4b + 0xcd45) != 0) {
            iVar2 = GetItemIdByAddInfo((Inven_Item *)(param_3 + 0x4044),0x69,
                                       *(int *)(param_3 + local_28 * 0x4b + 0xcd45));
            for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
              if (*(int *)(param_3 + local_20 * 0x3d + 0xa3a8) ==
                  *(int *)(param_3 + local_28 * 0x4b + 0xcd20)) {
                pCVar4 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
                CInventory::SetClearAvatar(pCVar4,local_20,iVar2);
              }
            }
          }
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
          this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar4);
          WongWork::CAvatarItemMgr::RegistItem
                    (this_00,(AvatarDetailInfo *)(local_28 * 0x4b + 0xcd20 + param_3),false);
        }
        if (*(int *)(param_3 + 0x15448) != 0) {
          CUserCharacInfo::SetCurCharacMaxEquipLevel
                    ((CUserCharacInfo *)param_2,*(int *)(param_3 + 0x15448));
        }
        _CheckOverEquipItem((Inter_LoadInven *)param_1,(CUser *)param_2);
        _CheckUsableExpertJobEquipment((Inter_LoadInven *)param_1,(CUser *)param_2);
        CUser::EnableCharacInfo((CUser *)param_2,1);
        this_01 = (GameWorld *)G_GameWorld();
        iVar2 = GameWorld::GetChannelType(this_01);
        if (iVar2 == 7) {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
          pIVar7 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,0,10);
          Inven_Item::SetUpgrade(pIVar7,'\0');
          for (local_1c = 0xb; local_1c < 0x16; local_1c = local_1c + 1) {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            pIVar7 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,0,local_1c);
            Inven_Item::SetUpgrade(pIVar7,'\0');
          }
          for (local_18 = 3; local_18 < 0x39; local_18 = local_18 + 1) {
            pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
            pIVar7 = (Inven_Item *)CInventory::GetInvenRef(pCVar4,1,local_18);
            if (pIVar7[1] == (Inven_Item)0x1) {
              iVar2 = *(int *)(pIVar7 + 2);
              this_02 = (CDataManager *)G_CDataManager();
              iVar2 = CDataManager::find_item(this_02,iVar2);
              if (iVar2 != 0) {
                Inven_Item::SetUpgrade(pIVar7,'\0');
              }
            }
          }
        }
        piVar8 = (int *)CUser::GetCharacExpandData((CUser *)param_2,2);
        (**(code **)(*piVar8 + 4))(piVar8,param_2,param_3 + 0x14784);
        piVar8 = (int *)CUser::GetCharacExpandData((CUser *)param_2,9);
        (**(code **)(*piVar8 + 4))(piVar8,param_2,param_3 + 0x14aa4);
        CUserCharacInfo::disableSaveInven((CUserCharacInfo *)param_2);
        CUserCharacInfo::disableSaveCargo((CUserCharacInfo *)param_2);
        _UpdateRentalItems((Inter_LoadInven *)param_1,(CUser *)param_2,(SIG_LOAD_INVENTORY *)param_3
                          );
        _UpdateDimensionRentalItems
                  ((Inter_LoadInven *)param_1,(CUser *)param_2,(SIG_LOAD_INVENTORY *)param_3);
        uVar3 = 0;
      }
      else {
        uVar3 = 0x1872;
      }
    }
  }
  return uVar3;
}
```
