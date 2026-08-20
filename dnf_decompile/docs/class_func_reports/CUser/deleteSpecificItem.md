# deleteSpecificItem

`_ZN5CUser18deleteSpecificItemERKSt6vectorISt4pairIiiESaIS2_EERS4_`

`CUser::deleteSpecificItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867dba0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867dba0  _ZN5CUser18deleteSpecificItemERKSt6vectorISt4pairIiiESaIS2_EERS4_
#           CUser::deleteSpecificItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0867dba0, 0x0867e091]
0867dba0 +0x000:  push   %ebp
0867dba1 +0x001:  mov    %esp,%ebp
0867dba3 +0x003:  push   %edi
0867dba4 +0x004:  push   %esi
0867dba5 +0x005:  push   %ebx
0867dba6 +0x006:  sub    $0x20c,%esp
0867dbac +0x00c:  mov    0x8(%ebp),%eax
0867dbaf +0x00f:  mov    %eax,(%esp)
0867dbb2 +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867dbb7 +0x017:  test   %eax,%eax
0867dbb9 +0x019:  sete   %al
0867dbbc +0x01c:  test   %al,%al
0867dbbe +0x01e:  jne    0867e085 <+0x4e5>
0867dbc4 +0x024:  movl   $0x0,-0x28(%ebp)
0867dbcb +0x02b:  call   085c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>  ; private_store::GetInstancePrivateStoreMgr()
0867dbd0 +0x030:  mov    0x8(%ebp),%edx
0867dbd3 +0x033:  mov    %edx,0x4(%esp)
0867dbd7 +0x037:  mov    %eax,(%esp)
0867dbda +0x03a:  call   085ca358 <_ZN13private_store16CPrivateStoreMgr15FindStoreSellerEP5CUser>  ; private_store::CPrivateStoreMgr::FindStoreSeller(CUser*)
0867dbdf +0x03f:  mov    %eax,-0x28(%ebp)
0867dbe2 +0x042:  cmpl   $0x0,-0x28(%ebp)
0867dbe6 +0x046:  setne  %al
0867dbe9 +0x049:  test   %al,%al
0867dbeb +0x04b:  je     0867dc07 <+0x67>
0867dbed +0x04d:  mov    -0x28(%ebp),%eax
0867dbf0 +0x050:  mov    (%eax),%eax
0867dbf2 +0x052:  add    $0x4,%eax
0867dbf5 +0x055:  mov    (%eax),%edx
0867dbf7 +0x057:  movl   $0x0,0x4(%esp)
0867dbff +0x05f:  mov    -0x28(%ebp),%eax
0867dc02 +0x062:  mov    %eax,(%esp)
0867dc05 +0x065:  call   *%edx
0867dc07 +0x067:  movl   $0x15,0x14(%esp)
0867dc0f +0x06f:  movl   $0xa,0x10(%esp)
0867dc17 +0x077:  mov    0x10(%ebp),%eax
0867dc1a +0x07a:  mov    %eax,0xc(%esp)
0867dc1e +0x07e:  mov    0xc(%ebp),%eax
0867dc21 +0x081:  mov    %eax,0x8(%esp)
0867dc25 +0x085:  movl   $0x0,0x4(%esp)
0867dc2d +0x08d:  mov    0x8(%ebp),%eax
0867dc30 +0x090:  mov    %eax,(%esp)
0867dc33 +0x093:  call   0867d0be <_ZN5CUser24_deleteSpecificItemInvenE10INVEN_TYPERKSt6vectorISt4pairIiiESaIS3_EERS5_ii>  ; CUser::_deleteSpecificItemInven(INVEN_TYPE, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
0867dc38 +0x098:  movl   $0x137,0x14(%esp)
0867dc40 +0x0a0:  movl   $0x3,0x10(%esp)
0867dc48 +0x0a8:  mov    0x10(%ebp),%eax
0867dc4b +0x0ab:  mov    %eax,0xc(%esp)
0867dc4f +0x0af:  mov    0xc(%ebp),%eax
0867dc52 +0x0b2:  mov    %eax,0x8(%esp)
0867dc56 +0x0b6:  movl   $0x1,0x4(%esp)
0867dc5e +0x0be:  mov    0x8(%ebp),%eax
0867dc61 +0x0c1:  mov    %eax,(%esp)
0867dc64 +0x0c4:  call   0867d0be <_ZN5CUser24_deleteSpecificItemInvenE10INVEN_TYPERKSt6vectorISt4pairIiiESaIS3_EERS5_ii>  ; CUser::_deleteSpecificItemInven(INVEN_TYPE, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int)
0867dc69 +0x0c9:  mov    0x10(%ebp),%eax
0867dc6c +0x0cc:  mov    %eax,0x8(%esp)
0867dc70 +0x0d0:  mov    0xc(%ebp),%eax
0867dc73 +0x0d3:  mov    %eax,0x4(%esp)
0867dc77 +0x0d7:  mov    0x8(%ebp),%eax
0867dc7a +0x0da:  mov    %eax,(%esp)
0867dc7d +0x0dd:  call   0867d3ee <_ZN5CUser24_deleteSpecificItemCargoERKSt6vectorISt4pairIiiESaIS2_EERS4_>  ; CUser::_deleteSpecificItemCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0867dc82 +0x0e2:  mov    0x10(%ebp),%eax
0867dc85 +0x0e5:  mov    %eax,0x8(%esp)
0867dc89 +0x0e9:  mov    0xc(%ebp),%eax
0867dc8c +0x0ec:  mov    %eax,0x4(%esp)
0867dc90 +0x0f0:  mov    0x8(%ebp),%eax
0867dc93 +0x0f3:  mov    %eax,(%esp)
0867dc96 +0x0f6:  call   0867d8a4 <_ZN5CUser31_deleteSpecificItemAccountCargoERKSt6vectorISt4pairIiiESaIS2_EERS4_>  ; CUser::_deleteSpecificItemAccountCargo(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0867dc9b +0x0fb:  mov    0xc(%ebp),%eax
0867dc9e +0x0fe:  mov    %eax,0x4(%esp)
0867dca2 +0x102:  mov    0x8(%ebp),%eax
0867dca5 +0x105:  mov    %eax,(%esp)
0867dca8 +0x108:  call   0867db66 <_ZN5CUser28_deleteSpecificItemTitieBookERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_deleteSpecificItemTitieBook(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867dcad +0x10d:  mov    0x8(%ebp),%eax
0867dcb0 +0x110:  mov    0x71b98(%eax),%eax
0867dcb6 +0x116:  test   %eax,%eax
0867dcb8 +0x118:  je     0867e071 <+0x4d1>
0867dcbe +0x11e:  lea    -0x18c(%ebp),%eax
0867dcc4 +0x124:  mov    %eax,(%esp)
0867dcc7 +0x127:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0867dccc +0x12c:  movl   $0x0,-0x24(%ebp)
0867dcd3 +0x133:  mov    0x8(%ebp),%eax
0867dcd6 +0x136:  mov    0x71b98(%eax),%eax
0867dcdc +0x13c:  mov    %eax,(%esp)
0867dcdf +0x13f:  call   0855232e <_ZN8WongWork8CMailBox15setMailIteratorEv>  ; WongWork::CMailBox::setMailIterator()
0867dce4 +0x144:  lea    -0x1ec(%ebp),%ebx
0867dcea +0x14a:  mov    $0x0,%eax
0867dcef +0x14f:  mov    $0x15,%edx
0867dcf4 +0x154:  mov    %ebx,%edi
0867dcf6 +0x156:  mov    %edx,%ecx
0867dcf8 +0x158:  rep stos %eax,%es:(%edi)
0867dcfa +0x15a:  jmp    0867de9d <+0x2fd>
0867dcff +0x15f:  movb   $0x0,-0x1d(%ebp)
0867dd03 +0x163:  lea    -0x17f(%ebp),%eax
0867dd09 +0x169:  mov    -0x24(%ebp),%edx
0867dd0c +0x16c:  mov    %edx,0x4(%esp)
0867dd10 +0x170:  mov    %eax,(%esp)
0867dd13 +0x173:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0867dd18 +0x178:  sub    $0x4,%esp
0867dd1b +0x17b:  lea    -0x17f(%ebp),%eax
0867dd21 +0x181:  mov    %eax,(%esp)
0867dd24 +0x184:  call   0867cf8d <_Z17_checkTimeoutItemRK10Inven_Item>  ; _checkTimeoutItem(Inven_Item const&)
0867dd29 +0x189:  test   %al,%al
0867dd2b +0x18b:  je     0867dd36 <+0x196>
0867dd2d +0x18d:  movb   $0x1,-0x1d(%ebp)
0867dd31 +0x191:  jmp    0867de50 <+0x2b0>
0867dd36 +0x196:  lea    -0x142(%ebp),%eax
0867dd3c +0x19c:  mov    -0x24(%ebp),%edx
0867dd3f +0x19f:  mov    %edx,0x4(%esp)
0867dd43 +0x1a3:  mov    %eax,(%esp)
0867dd46 +0x1a6:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0867dd4b +0x1ab:  sub    $0x4,%esp
0867dd4e +0x1ae:  mov    -0x140(%ebp),%eax
0867dd54 +0x1b4:  mov    0xc(%ebp),%edx
0867dd57 +0x1b7:  mov    %edx,0x8(%esp)
0867dd5b +0x1bb:  mov    %eax,0x4(%esp)
0867dd5f +0x1bf:  mov    0x8(%ebp),%eax
0867dd62 +0x1c2:  mov    %eax,(%esp)
0867dd65 +0x1c5:  call   0867cf0c <_ZN5CUser14_isMatchedItemEiRKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_isMatchedItem(int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867dd6a +0x1ca:  cmp    $0xffffffff,%eax
0867dd6d +0x1cd:  setne  %al
0867dd70 +0x1d0:  test   %al,%al
0867dd72 +0x1d2:  je     0867dd7d <+0x1dd>
0867dd74 +0x1d4:  movb   $0x1,-0x1d(%ebp)
0867dd78 +0x1d8:  jmp    0867de50 <+0x2b0>
0867dd7d +0x1dd:  lea    -0x105(%ebp),%eax
0867dd83 +0x1e3:  mov    -0x24(%ebp),%edx
0867dd86 +0x1e6:  mov    %edx,0x4(%esp)
0867dd8a +0x1ea:  mov    %eax,(%esp)
0867dd8d +0x1ed:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0867dd92 +0x1f2:  sub    $0x4,%esp
0867dd95 +0x1f5:  mov    -0x103(%ebp),%eax
0867dd9b +0x1fb:  mov    %eax,%ebx
0867dd9d +0x1fd:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0867dda2 +0x202:  add    $0xb658,%eax
0867dda7 +0x207:  mov    %ebx,0x4(%esp)
0867ddab +0x20b:  mov    %eax,(%esp)
0867ddae +0x20e:  call   08ac2096 <_ZN23DeleteInvalidItemScript20IsInvalidItem2DeleteEi>  ; DeleteInvalidItemScript::IsInvalidItem2Delete(int)
0867ddb3 +0x213:  test   %al,%al
0867ddb5 +0x215:  je     0867de50 <+0x2b0>
0867ddbb +0x21b:  lea    -0xb1(%ebp),%eax
0867ddc1 +0x221:  mov    -0x24(%ebp),%edx
0867ddc4 +0x224:  mov    %edx,0x4(%esp)
0867ddc8 +0x228:  mov    %eax,(%esp)
0867ddcb +0x22b:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0867ddd0 +0x230:  sub    $0x4,%esp
0867ddd3 +0x233:  mov    -0xaa(%ebp),%eax
0867ddd9 +0x239:  mov    %eax,-0xb8(%ebp)
0867dddf +0x23f:  lea    -0x6d(%ebp),%eax
0867dde2 +0x242:  mov    -0x24(%ebp),%edx
0867dde5 +0x245:  mov    %edx,0x4(%esp)
0867dde9 +0x249:  mov    %eax,(%esp)
0867ddec +0x24c:  call   08557522 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x83>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x83
0867ddf1 +0x251:  sub    $0x4,%esp
0867ddf4 +0x254:  mov    -0x6b(%ebp),%eax
0867ddf7 +0x257:  mov    %eax,-0x74(%ebp)
0867ddfa +0x25a:  lea    -0xc0(%ebp),%eax
0867de00 +0x260:  lea    -0xb8(%ebp),%edx
0867de06 +0x266:  mov    %edx,0x8(%esp)
0867de0a +0x26a:  lea    -0x74(%ebp),%edx
0867de0d +0x26d:  mov    %edx,0x4(%esp)
0867de11 +0x271:  mov    %eax,(%esp)
0867de14 +0x274:  call   085187dc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x4e11>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x4e11
0867de19 +0x279:  sub    $0x4,%esp
0867de1c +0x27c:  lea    -0xc0(%ebp),%eax
0867de22 +0x282:  mov    %eax,0x4(%esp)
0867de26 +0x286:  lea    -0xc8(%ebp),%eax
0867de2c +0x28c:  mov    %eax,(%esp)
0867de2f +0x28f:  call   08111a76 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xf88>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xf88
0867de34 +0x294:  lea    -0xc8(%ebp),%eax
0867de3a +0x29a:  mov    %eax,0x4(%esp)
0867de3e +0x29e:  lea    -0x18c(%ebp),%eax
0867de44 +0x2a4:  mov    %eax,(%esp)
0867de47 +0x2a7:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
0867de4c +0x2ac:  movb   $0x1,-0x1d(%ebp)
0867de50 +0x2b0:  cmpb   $0x0,-0x1d(%ebp)
0867de54 +0x2b4:  je     0867de9d <+0x2fd>
0867de56 +0x2b6:  mov    -0x1ec(%ebp),%eax
0867de5c +0x2bc:  add    $0x1,%eax
0867de5f +0x2bf:  mov    %eax,-0x1ec(%ebp)
0867de65 +0x2c5:  mov    -0x1ec(%ebp),%ebx
0867de6b +0x2cb:  mov    -0x24(%ebp),%eax
0867de6e +0x2ce:  mov    %eax,(%esp)
0867de71 +0x2d1:  call   0869782e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4083>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4083
0867de76 +0x2d6:  mov    %eax,-0x1ec(%ebp,%ebx,4)
0867de7d +0x2dd:  mov    -0x24(%ebp),%eax
0867de80 +0x2e0:  mov    %eax,(%esp)
0867de83 +0x2e3:  call   0869782e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4083>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4083
0867de88 +0x2e8:  mov    0x8(%ebp),%edx
0867de8b +0x2eb:  mov    0x71b98(%edx),%edx
0867de91 +0x2f1:  mov    %eax,0x4(%esp)
0867de95 +0x2f5:  mov    %edx,(%esp)
0867de98 +0x2f8:  call   08552138 <_ZN8WongWork8CMailBox10RemoveMailEj>  ; WongWork::CMailBox::RemoveMail(unsigned int)
0867de9d +0x2fd:  mov    0x8(%ebp),%eax
0867dea0 +0x300:  mov    0x71b98(%eax),%eax
0867dea6 +0x306:  mov    %eax,(%esp)
0867dea9 +0x309:  call   0855236a <_ZN8WongWork8CMailBox11getNextMailEv>  ; WongWork::CMailBox::getNextMail()
0867deae +0x30e:  mov    %eax,-0x24(%ebp)
0867deb1 +0x311:  cmpl   $0x0,-0x24(%ebp)
0867deb5 +0x315:  setne  %al
0867deb8 +0x318:  test   %al,%al
0867deba +0x31a:  jne    0867dcff <+0x15f>
0867dec0 +0x320:  mov    -0x1ec(%ebp),%eax
0867dec6 +0x326:  test   %eax,%eax
0867dec8 +0x328:  je     0867dfbe <+0x41e>
0867dece +0x32e:  movl   $0x0,0x8(%esp)
0867ded6 +0x336:  lea    -0x1ec(%ebp),%eax
0867dedc +0x33c:  mov    %eax,0x4(%esp)
0867dee0 +0x340:  mov    0x8(%ebp),%eax
0867dee3 +0x343:  mov    %eax,(%esp)
0867dee6 +0x346:  call   08556772 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb>  ; WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool)
0867deeb +0x34b:  lea    -0x198(%ebp),%eax
0867def1 +0x351:  mov    %eax,(%esp)
0867def4 +0x354:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0867def9 +0x359:  movl   $0x62,0x8(%esp)
0867df01 +0x361:  movl   $0x0,0x4(%esp)
0867df09 +0x369:  lea    -0x198(%ebp),%eax
0867df0f +0x36f:  mov    %eax,(%esp)
0867df12 +0x372:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0867df17 +0x377:  mov    -0x1ec(%ebp),%eax
0867df1d +0x37d:  mov    %eax,0x4(%esp)
0867df21 +0x381:  lea    -0x198(%ebp),%eax
0867df27 +0x387:  mov    %eax,(%esp)
0867df2a +0x38a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867df2f +0x38f:  movl   $0x1,-0x1c(%ebp)
0867df36 +0x396:  jmp    0867df58 <+0x3b8>
0867df38 +0x398:  mov    -0x1c(%ebp),%eax
0867df3b +0x39b:  mov    -0x1ec(%ebp,%eax,4),%eax
0867df42 +0x3a2:  mov    %eax,0x4(%esp)
0867df46 +0x3a6:  lea    -0x198(%ebp),%eax
0867df4c +0x3ac:  mov    %eax,(%esp)
0867df4f +0x3af:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0867df54 +0x3b4:  addl   $0x1,-0x1c(%ebp)
0867df58 +0x3b8:  mov    -0x1ec(%ebp),%eax
0867df5e +0x3be:  cmp    -0x1c(%ebp),%eax
0867df61 +0x3c1:  setae  %al
0867df64 +0x3c4:  test   %al,%al
0867df66 +0x3c6:  jne    0867df38 <+0x398>
0867df68 +0x3c8:  movl   $0x1,0x4(%esp)
0867df70 +0x3d0:  lea    -0x198(%ebp),%eax
0867df76 +0x3d6:  mov    %eax,(%esp)
0867df79 +0x3d9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0867df7e +0x3de:  lea    -0x198(%ebp),%eax
0867df84 +0x3e4:  mov    %eax,0x4(%esp)
0867df88 +0x3e8:  mov    0x8(%ebp),%eax
0867df8b +0x3eb:  mov    %eax,(%esp)
0867df8e +0x3ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867df93 +0x3f3:  jmp    0867dfb0 <+0x410>
0867df95 +0x3f5:  mov    %edx,%ebx
0867df97 +0x3f7:  mov    %eax,%esi
0867df99 +0x3f9:  lea    -0x198(%ebp),%eax
0867df9f +0x3ff:  mov    %eax,(%esp)
0867dfa2 +0x402:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867dfa7 +0x407:  mov    %esi,%eax
0867dfa9 +0x409:  mov    %ebx,%edx
0867dfab +0x40b:  jmp    0867e053 <+0x4b3>
0867dfb0 +0x410:  lea    -0x198(%ebp),%eax
0867dfb6 +0x416:  mov    %eax,(%esp)
0867dfb9 +0x419:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0867dfbe +0x41e:  lea    -0x29(%ebp),%eax
0867dfc1 +0x421:  mov    %eax,(%esp)
0867dfc4 +0x424:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0867dfc9 +0x429:  lea    -0x29(%ebp),%eax
0867dfcc +0x42c:  mov    %eax,0x8(%esp)
0867dfd0 +0x430:  movl   $"Mail",0x4(%esp)
0867dfd8 +0x438:  lea    -0x30(%ebp),%eax
0867dfdb +0x43b:  mov    %eax,(%esp)
0867dfde +0x43e:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0867dfe3 +0x443:  lea    -0x18c(%ebp),%eax
0867dfe9 +0x449:  mov    %eax,0x8(%esp)
0867dfed +0x44d:  lea    -0x30(%ebp),%eax
0867dff0 +0x450:  mov    %eax,0x4(%esp)
0867dff4 +0x454:  mov    0x8(%ebp),%eax
0867dff7 +0x457:  mov    %eax,(%esp)
0867dffa +0x45a:  call   086931c4 <_ZN5CUser28RewardItem2DeleteInvalidItemERKSsRKSt6vectorISt4pairIiiESaIS4_EE>  ; CUser::RewardItem2DeleteInvalidItem(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867dfff +0x45f:  jmp    0867e016 <+0x476>
0867e001 +0x461:  mov    %edx,%ebx
0867e003 +0x463:  mov    %eax,%esi
0867e005 +0x465:  lea    -0x30(%ebp),%eax
0867e008 +0x468:  mov    %eax,(%esp)
0867e00b +0x46b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867e010 +0x470:  mov    %esi,%eax
0867e012 +0x472:  mov    %ebx,%edx
0867e014 +0x474:  jmp    0867e023 <+0x483>
0867e016 +0x476:  lea    -0x30(%ebp),%eax
0867e019 +0x479:  mov    %eax,(%esp)
0867e01c +0x47c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0867e021 +0x481:  jmp    0867e038 <+0x498>
0867e023 +0x483:  mov    %edx,%ebx
0867e025 +0x485:  mov    %eax,%esi
0867e027 +0x487:  lea    -0x29(%ebp),%eax
0867e02a +0x48a:  mov    %eax,(%esp)
0867e02d +0x48d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867e032 +0x492:  mov    %esi,%eax
0867e034 +0x494:  mov    %ebx,%edx
0867e036 +0x496:  jmp    0867e053 <+0x4b3>
0867e038 +0x498:  lea    -0x29(%ebp),%eax
0867e03b +0x49b:  mov    %eax,(%esp)
0867e03e +0x49e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0867e043 +0x4a3:  lea    -0x18c(%ebp),%eax
0867e049 +0x4a9:  mov    %eax,(%esp)
0867e04c +0x4ac:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867e051 +0x4b1:  jmp    0867e071 <+0x4d1>
0867e053 +0x4b3:  mov    %edx,%ebx
0867e055 +0x4b5:  mov    %eax,%esi
0867e057 +0x4b7:  lea    -0x18c(%ebp),%eax
0867e05d +0x4bd:  mov    %eax,(%esp)
0867e060 +0x4c0:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0867e065 +0x4c5:  mov    %esi,%eax
0867e067 +0x4c7:  mov    %ebx,%edx
0867e069 +0x4c9:  mov    %eax,(%esp)
0867e06c +0x4cc:  call   08ae3750 <_Unwind_Resume>
0867e071 +0x4d1:  mov    0xc(%ebp),%eax
0867e074 +0x4d4:  mov    %eax,0x4(%esp)
0867e078 +0x4d8:  mov    0x8(%ebp),%eax
0867e07b +0x4db:  mov    %eax,(%esp)
0867e07e +0x4de:  call   0867d69c <_ZN5CUser25_deleteSpecificRedeemItemERKSt6vectorISt4pairIiiESaIS2_EE>  ; CUser::_deleteSpecificRedeemItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
0867e083 +0x4e3:  jmp    0867e086 <+0x4e6>
0867e085 +0x4e5:  nop
0867e086 +0x4e6:  lea    -0xc(%ebp),%esp
0867e089 +0x4e9:  add    $0x0,%esp
0867e08c +0x4ec:  pop    %ebx
0867e08d +0x4ed:  pop    %esi
0867e08e +0x4ee:  pop    %edi
0867e08f +0x4ef:  pop    %ebp
0867e090 +0x4f0:  ret
0867e091 +0x4f1:  nop
```

## 反编译 C

```c
// CUser::deleteSpecificItem @ 0x867dba0

/* CUser::deleteSpecificItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >
   const&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall CUser::deleteSpecificItem(CUser *this,vector *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  CPrivateStoreMgr *this_00;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  uint local_1f0 [21];
  PacketGuard local_19c [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_190 [13];
  Inven_Item local_183 [63];
  vector *local_144;
  pair<int,int> local_cc [8];
  ulong local_c4 [2];
  undefined4 local_bc;
  undefined4 local_ae;
  int local_78 [2];
  int local_6f;
  string local_34;
  allocator<char> local_2d;
  int *local_2c;
  CMail *local_28;
  char local_21;
  uint local_20;
  
  bVar6 = 0;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    local_2c = (int *)0x0;
    this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    local_2c = (int *)private_store::CPrivateStoreMgr::FindStoreSeller(this_00,this);
    if (local_2c != (int *)0x0) {
      (**(code **)(*local_2c + 4))(local_2c,0);
    }
    _deleteSpecificItemInven(this,0,param_1,param_2,10,0x15);
    _deleteSpecificItemInven(this,1,param_1,param_2,3,0x137);
    _deleteSpecificItemCargo(this,param_1,param_2);
    _deleteSpecificItemAccountCargo(this,param_1,param_2);
    _deleteSpecificItemTitieBook((vector *)this);
    if (*(int *)(this + 0x71b98) != 0) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_190);
      local_28 = (CMail *)0x0;
                    /* try { // try from 0867dcdf to 0867def8 has its CatchHandler @ 0867e053 */
      WongWork::CMailBox::setMailIterator(*(CMailBox **)(this + 0x71b98));
      puVar5 = local_1f0;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      while (local_28 = (CMail *)WongWork::CMailBox::getNextMail(*(CMailBox **)(this + 0x71b98)),
            local_28 != (CMail *)0x0) {
        local_21 = '\0';
        WongWork::CMailBox::CMail::GetPackageItem();
        cVar1 = _checkTimeoutItem(local_183);
        if (cVar1 == '\0') {
          WongWork::CMailBox::CMail::GetPackageItem();
          iVar2 = _isMatchedItem((int)this,local_144);
          if (iVar2 == -1) {
            WongWork::CMailBox::CMail::GetPackageItem();
            iVar2 = G_CDataManager();
            cVar1 = DeleteInvalidItemScript::IsInvalidItem2Delete(iVar2 + 0xb658);
            if (cVar1 != '\0') {
              WongWork::CMailBox::CMail::GetPackageItem();
              local_bc = local_ae;
              WongWork::CMailBox::CMail::GetPackageItem();
              local_78[0] = local_6f;
              std::make_pair<unsigned_long,int>(local_c4,local_78);
              std::pair<int,int>::pair<unsigned_long,int>(local_cc,(pair *)local_c4);
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        (local_190,local_cc);
              local_21 = '\x01';
            }
          }
          else {
            local_21 = '\x01';
          }
        }
        else {
          local_21 = '\x01';
        }
        if (local_21 != '\0') {
          uVar3 = local_1f0[0] + 1;
          local_1f0[0] = uVar3;
          uVar4 = WongWork::CMailBox::CMail::getMailIdx(local_28);
          local_1f0[uVar3] = uVar4;
          WongWork::CMailBox::CMail::getMailIdx(local_28);
          WongWork::CMailBox::RemoveMail(*(uint *)(this + 0x71b98));
        }
      }
      if (local_1f0[0] != 0) {
        WongWork::CMailBoxHelper::ReqDBRemoveMail(this,local_1f0,false);
        PacketGuard::PacketGuard(local_19c);
                    /* try { // try from 0867df12 to 0867df92 has its CatchHandler @ 0867df95 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_19c,0,0x62);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_19c,local_1f0[0]);
        for (local_20 = 1; local_20 <= local_1f0[0]; local_20 = local_20 + 1) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_19c,local_1f0[local_20]);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_19c,true);
        Send(this,local_19c);
                    /* try { // try from 0867dfb9 to 0867dfbd has its CatchHandler @ 0867e053 */
        PacketGuard::~PacketGuard(local_19c);
      }
      std::allocator<char>::allocator();
                    /* try { // try from 0867dfde to 0867dfe2 has its CatchHandler @ 0867e023 */
      std::string::string((string *)&local_34,"Mail",(allocator *)&local_2d);
                    /* try { // try from 0867dffa to 0867dffe has its CatchHandler @ 0867e001 */
      RewardItem2DeleteInvalidItem(this,&local_34,(vector *)local_190);
                    /* try { // try from 0867e01c to 0867e020 has its CatchHandler @ 0867e023 */
      std::string::~string((string *)&local_34);
      std::allocator<char>::~allocator(&local_2d);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_190);
    }
    _deleteSpecificRedeemItem((vector *)this);
  }
  return;
}
```
