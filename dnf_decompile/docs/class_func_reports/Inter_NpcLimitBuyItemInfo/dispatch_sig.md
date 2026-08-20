# dispatch_sig

`_ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci`

`Inter_NpcLimitBuyItemInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NpcLimitBuyItemInfo` | `0x084e65a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e65a2  _ZN25Inter_NpcLimitBuyItemInfo12dispatch_sigEP5CUserPci
#           Inter_NpcLimitBuyItemInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e65a2, 0x084e6acb]
084e65a2 +0x000:  push   %ebp
084e65a3 +0x001:  mov    %esp,%ebp
084e65a5 +0x003:  push   %esi
084e65a6 +0x004:  push   %ebx
084e65a7 +0x005:  sub    $0x2d0,%esp
084e65ad +0x00b:  mov    0x8(%ebp),%eax
084e65b0 +0x00e:  mov    %eax,(%esp)
084e65b3 +0x011:  call   084e6e1a <_ZN25Inter_NpcLimitBuyItemInfo5resetEv>  ; Inter_NpcLimitBuyItemInfo::reset()
084e65b8 +0x016:  mov    0x10(%ebp),%eax
084e65bb +0x019:  mov    %eax,-0xc(%ebp)
084e65be +0x01c:  lea    -0x2e(%ebp),%eax
084e65c1 +0x01f:  mov    %eax,(%esp)
084e65c4 +0x022:  call   084e9570 <_GLOBAL__I__Z7getUserj+0x522>  ; global constructors keyed to getUser(unsigned int)+0x522
084e65c9 +0x027:  mov    -0xc(%ebp),%eax
084e65cc +0x02a:  mov    0xa(%eax),%ebx
084e65cf +0x02d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084e65d4 +0x032:  movl   $0xa,0x8(%esp)
084e65dc +0x03a:  mov    %ebx,0x4(%esp)
084e65e0 +0x03e:  mov    %eax,(%esp)
084e65e3 +0x041:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084e65e8 +0x046:  mov    %eax,0xc(%ebp)
084e65eb +0x049:  cmpl   $0x0,0xc(%ebp)
084e65ef +0x04d:  jne    084e6651 <+0xaf>
084e65f1 +0x04f:  movl   $0x3,-0x18(%ebp)
084e65f8 +0x056:  mov    -0xc(%ebp),%eax
084e65fb +0x059:  mov    0x16(%eax),%eax
084e65fe +0x05c:  mov    %eax,-0x24(%ebp)
084e6601 +0x05f:  mov    -0xc(%ebp),%eax
084e6604 +0x062:  mov    0x12(%eax),%eax
084e6607 +0x065:  mov    %eax,-0x20(%ebp)
084e660a +0x068:  mov    -0xc(%ebp),%eax
084e660d +0x06b:  mov    0x1a(%eax),%eax
084e6610 +0x06e:  mov    %eax,-0x1c(%ebp)
084e6613 +0x071:  lea    -0x2e(%ebp),%ebx
084e6616 +0x074:  mov    0xc(%ebp),%eax
084e6619 +0x077:  mov    %eax,(%esp)
084e661c +0x07a:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e6621 +0x07f:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084e6627 +0x085:  mov    %eax,0x4(%esp)
084e662b +0x089:  mov    %edx,(%esp)
084e662e +0x08c:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e6633 +0x091:  movl   $0x1a,0x8(%esp)
084e663b +0x099:  mov    %ebx,0x4(%esp)
084e663f +0x09d:  mov    %eax,(%esp)
084e6642 +0x0a0:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e6647 +0x0a5:  mov    $0x0,%eax
084e664c +0x0aa:  jmp    084e6ac2 <+0x520>
084e6651 +0x0af:  mov    -0xc(%ebp),%eax
084e6654 +0x0b2:  mov    0x22(%eax),%eax
084e6657 +0x0b5:  test   %eax,%eax
084e6659 +0x0b7:  je     084e6685 <+0xe3>
084e665b +0x0b9:  mov    -0xc(%ebp),%eax
084e665e +0x0bc:  mov    0x22(%eax),%eax
084e6661 +0x0bf:  movzbl %al,%eax
084e6664 +0x0c2:  mov    %eax,0x8(%esp)
084e6668 +0x0c6:  movl   $0x1d1,0x4(%esp)
084e6670 +0x0ce:  mov    0xc(%ebp),%eax
084e6673 +0x0d1:  mov    %eax,(%esp)
084e6676 +0x0d4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e667b +0x0d9:  mov    $0x0,%eax
084e6680 +0x0de:  jmp    084e6ac2 <+0x520>
084e6685 +0x0e3:  mov    -0xc(%ebp),%eax
084e6688 +0x0e6:  mov    %eax,0x8(%esp)
084e668c +0x0ea:  mov    0xc(%ebp),%eax
084e668f +0x0ed:  mov    %eax,0x4(%esp)
084e6693 +0x0f1:  mov    0x8(%ebp),%eax
084e6696 +0x0f4:  mov    %eax,(%esp)
084e6699 +0x0f7:  call   084e6acc <_ZN25Inter_NpcLimitBuyItemInfo10checkErrorEP5CUserP19LimitNpcBuyItemInfo>  ; Inter_NpcLimitBuyItemInfo::checkError(CUser*, LimitNpcBuyItemInfo*)
084e669e +0x0fc:  mov    %eax,-0x18(%ebp)
084e66a1 +0x0ff:  mov    -0x18(%ebp),%eax
084e66a4 +0x102:  test   %eax,%eax
084e66a6 +0x104:  je     084e672f <+0x18d>
084e66ac +0x10a:  mov    0x8(%ebp),%eax
084e66af +0x10d:  mov    0x4(%eax),%eax
084e66b2 +0x110:  mov    %eax,-0x24(%ebp)
084e66b5 +0x113:  movl   $0xffffffff,0x4(%esp)
084e66bd +0x11b:  mov    0xc(%ebp),%eax
084e66c0 +0x11e:  mov    %eax,(%esp)
084e66c3 +0x121:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e66c8 +0x126:  mov    %eax,-0x20(%ebp)
084e66cb +0x129:  mov    -0xc(%ebp),%eax
084e66ce +0x12c:  mov    0x1a(%eax),%eax
084e66d1 +0x12f:  mov    %eax,-0x1c(%ebp)
084e66d4 +0x132:  lea    -0x2e(%ebp),%ebx
084e66d7 +0x135:  mov    0xc(%ebp),%eax
084e66da +0x138:  mov    %eax,(%esp)
084e66dd +0x13b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e66e2 +0x140:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084e66e8 +0x146:  mov    %eax,0x4(%esp)
084e66ec +0x14a:  mov    %edx,(%esp)
084e66ef +0x14d:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e66f4 +0x152:  movl   $0x1a,0x8(%esp)
084e66fc +0x15a:  mov    %ebx,0x4(%esp)
084e6700 +0x15e:  mov    %eax,(%esp)
084e6703 +0x161:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e6708 +0x166:  mov    -0x18(%ebp),%eax
084e670b +0x169:  movzbl %al,%eax
084e670e +0x16c:  mov    %eax,0x8(%esp)
084e6712 +0x170:  movl   $0x1d1,0x4(%esp)
084e671a +0x178:  mov    0xc(%ebp),%eax
084e671d +0x17b:  mov    %eax,(%esp)
084e6720 +0x17e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e6725 +0x183:  mov    $0x0,%eax
084e672a +0x188:  jmp    084e6ac2 <+0x520>
084e672f +0x18d:  mov    0x8(%ebp),%eax
084e6732 +0x190:  mov    0x4(%eax),%edx
084e6735 +0x193:  mov    0x8(%ebp),%eax
084e6738 +0x196:  mov    %edx,0x1f(%eax)
084e673b +0x199:  mov    0x8(%ebp),%eax
084e673e +0x19c:  lea    0x1d(%eax),%ebx
084e6741 +0x19f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e6746 +0x1a4:  mov    0xc(%eax),%eax
084e6749 +0x1a7:  movl   $0x1,0xc(%esp)
084e6751 +0x1af:  mov    %ebx,0x8(%esp)
084e6755 +0x1b3:  movl   $0x0,0x4(%esp)
084e675d +0x1bb:  mov    %eax,(%esp)
084e6760 +0x1be:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
084e6765 +0x1c3:  mov    0xc(%ebp),%eax
084e6768 +0x1c6:  mov    %eax,(%esp)
084e676b +0x1c9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084e6770 +0x1ce:  mov    %eax,%edx
084e6772 +0x1d0:  movl   $0x0,0x4c(%esp)
084e677a +0x1d8:  movl   $0x1,0x48(%esp)
084e6782 +0x1e0:  movl   $0x0,0x44(%esp)
084e678a +0x1e8:  mov    0x8(%ebp),%eax
084e678d +0x1eb:  mov    0x1d(%eax),%ecx
084e6790 +0x1ee:  mov    %ecx,0x4(%esp)
084e6794 +0x1f2:  mov    0x21(%eax),%ecx
084e6797 +0x1f5:  mov    %ecx,0x8(%esp)
084e679b +0x1f9:  mov    0x25(%eax),%ecx
084e679e +0x1fc:  mov    %ecx,0xc(%esp)
084e67a2 +0x200:  mov    0x29(%eax),%ecx
084e67a5 +0x203:  mov    %ecx,0x10(%esp)
084e67a9 +0x207:  mov    0x2d(%eax),%ecx
084e67ac +0x20a:  mov    %ecx,0x14(%esp)
084e67b0 +0x20e:  mov    0x31(%eax),%ecx
084e67b3 +0x211:  mov    %ecx,0x18(%esp)
084e67b7 +0x215:  mov    0x35(%eax),%ecx
084e67ba +0x218:  mov    %ecx,0x1c(%esp)
084e67be +0x21c:  mov    0x39(%eax),%ecx
084e67c1 +0x21f:  mov    %ecx,0x20(%esp)
084e67c5 +0x223:  mov    0x3d(%eax),%ecx
084e67c8 +0x226:  mov    %ecx,0x24(%esp)
084e67cc +0x22a:  mov    0x41(%eax),%ecx
084e67cf +0x22d:  mov    %ecx,0x28(%esp)
084e67d3 +0x231:  mov    0x45(%eax),%ecx
084e67d6 +0x234:  mov    %ecx,0x2c(%esp)
084e67da +0x238:  mov    0x49(%eax),%ecx
084e67dd +0x23b:  mov    %ecx,0x30(%esp)
084e67e1 +0x23f:  mov    0x4d(%eax),%ecx
084e67e4 +0x242:  mov    %ecx,0x34(%esp)
084e67e8 +0x246:  mov    0x51(%eax),%ecx
084e67eb +0x249:  mov    %ecx,0x38(%esp)
084e67ef +0x24d:  mov    0x55(%eax),%ecx
084e67f2 +0x250:  mov    %ecx,0x3c(%esp)
084e67f6 +0x254:  movzbl 0x59(%eax),%eax
084e67fa +0x258:  mov    %al,0x40(%esp)
084e67fe +0x25c:  mov    %edx,(%esp)
084e6801 +0x25f:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
084e6806 +0x264:  mov    0x8(%ebp),%edx
084e6809 +0x267:  mov    %eax,0x10(%edx)
084e680c +0x26a:  mov    0x8(%ebp),%eax
084e680f +0x26d:  movb   $0x0,0x1c(%eax)
084e6813 +0x271:  mov    0x8(%ebp),%eax
084e6816 +0x274:  mov    0x10(%eax),%eax
084e6819 +0x277:  test   %eax,%eax
084e681b +0x279:  jns    084e6a09 <+0x467>
084e6821 +0x27f:  lea    -0x14(%ebp),%eax
084e6824 +0x282:  movl   $0x0,0xc(%esp)
084e682c +0x28a:  movl   $0x436,0x8(%esp)
084e6834 +0x292:  movl   $&g_ServerString_,0x4(%esp)
084e683c +0x29a:  mov    %eax,(%esp)
084e683f +0x29d:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
084e6844 +0x2a2:  sub    $0x4,%esp
084e6847 +0x2a5:  lea    -0x14(%ebp),%eax
084e684a +0x2a8:  mov    %eax,(%esp)
084e684d +0x2ab:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084e6852 +0x2b0:  movl   $0x14,0x8(%esp)
084e685a +0x2b8:  mov    %eax,0x4(%esp)
084e685e +0x2bc:  lea    -0x43(%ebp),%eax
084e6861 +0x2bf:  mov    %eax,(%esp)
084e6864 +0x2c2:  call   0807d8d0 <_init+0x1c8>
084e6869 +0x2c7:  lea    -0x14(%ebp),%eax
084e686c +0x2ca:  mov    %eax,(%esp)
084e686f +0x2cd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084e6874 +0x2d2:  lea    -0x10(%ebp),%eax
084e6877 +0x2d5:  movl   $0x0,0xc(%esp)
084e687f +0x2dd:  movl   $0x437,0x8(%esp)
084e6887 +0x2e5:  movl   $&g_ServerString_,0x4(%esp)
084e688f +0x2ed:  mov    %eax,(%esp)
084e6892 +0x2f0:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
084e6897 +0x2f5:  sub    $0x4,%esp
084e689a +0x2f8:  lea    -0x10(%ebp),%eax
084e689d +0x2fb:  mov    %eax,(%esp)
084e68a0 +0x2fe:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084e68a5 +0x303:  movl   $0xff,0x8(%esp)
084e68ad +0x30b:  mov    %eax,0x4(%esp)
084e68b1 +0x30f:  lea    -0x143(%ebp),%eax
084e68b7 +0x315:  mov    %eax,(%esp)
084e68ba +0x318:  call   0807d8d0 <_init+0x1c8>
084e68bf +0x31d:  lea    -0x10(%ebp),%eax
084e68c2 +0x320:  mov    %eax,(%esp)
084e68c5 +0x323:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084e68ca +0x328:  mov    0xc(%ebp),%eax
084e68cd +0x32b:  mov    %eax,(%esp)
084e68d0 +0x32e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e68d5 +0x333:  mov    %eax,%ebx
084e68d7 +0x335:  lea    -0x143(%ebp),%eax
084e68dd +0x33b:  mov    %eax,(%esp)
084e68e0 +0x33e:  call   0807e3b0 <_init+0xca8>
084e68e5 +0x343:  mov    %eax,%esi
084e68e7 +0x345:  movl   $0xffffffff,0x4(%esp)
084e68ef +0x34d:  mov    0xc(%ebp),%eax
084e68f2 +0x350:  mov    %eax,(%esp)
084e68f5 +0x353:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e68fa +0x358:  mov    0x8(%ebp),%edx
084e68fd +0x35b:  lea    0x1d(%edx),%ecx
084e6900 +0x35e:  movl   $0x0,0x24(%esp)
084e6908 +0x366:  movl   $0x0,0x20(%esp)
084e6910 +0x36e:  mov    %ebx,0x1c(%esp)
084e6914 +0x372:  movl   $0x1e,0x18(%esp)
084e691c +0x37a:  mov    %esi,0x14(%esp)
084e6920 +0x37e:  lea    -0x143(%ebp),%edx
084e6926 +0x384:  mov    %edx,0x10(%esp)
084e692a +0x388:  mov    %eax,0xc(%esp)
084e692e +0x38c:  movl   $0x0,0x8(%esp)
084e6936 +0x394:  mov    %ecx,0x4(%esp)
084e693a +0x398:  lea    -0x43(%ebp),%eax
084e693d +0x39b:  mov    %eax,(%esp)
084e6940 +0x39e:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e6945 +0x3a3:  test   %eax,%eax
084e6947 +0x3a5:  sete   %al
084e694a +0x3a8:  test   %al,%al
084e694c +0x3aa:  jne    084e6989 <+0x3e7>
084e694e +0x3ac:  jmp    084e6a02 <+0x460>
084e6953 +0x3b1:  mov    %edx,%ebx
084e6955 +0x3b3:  mov    %eax,%esi
084e6957 +0x3b5:  lea    -0x14(%ebp),%eax
084e695a +0x3b8:  mov    %eax,(%esp)
084e695d +0x3bb:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084e6962 +0x3c0:  mov    %esi,%eax
084e6964 +0x3c2:  mov    %ebx,%edx
084e6966 +0x3c4:  mov    %eax,(%esp)
084e6969 +0x3c7:  call   08ae3750 <_Unwind_Resume>
084e696e +0x3cc:  mov    %edx,%ebx
084e6970 +0x3ce:  mov    %eax,%esi
084e6972 +0x3d0:  lea    -0x10(%ebp),%eax
084e6975 +0x3d3:  mov    %eax,(%esp)
084e6978 +0x3d6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084e697d +0x3db:  mov    %esi,%eax
084e697f +0x3dd:  mov    %ebx,%edx
084e6981 +0x3df:  mov    %eax,(%esp)
084e6984 +0x3e2:  call   08ae3750 <_Unwind_Resume>
084e6989 +0x3e7:  movl   $0x145,0x8(%esp)
084e6991 +0x3ef:  movl   $0x0,0x4(%esp)
084e6999 +0x3f7:  lea    -0x288(%ebp),%eax
084e699f +0x3fd:  mov    %eax,(%esp)
084e69a2 +0x400:  call   0807dcc0 <_init+0x5b8>
084e69a7 +0x405:  movl   $0x14,0x8(%esp)
084e69af +0x40d:  lea    -0x43(%ebp),%eax
084e69b2 +0x410:  mov    %eax,0x4(%esp)
084e69b6 +0x414:  lea    -0x288(%ebp),%eax
084e69bc +0x41a:  add    $0x11,%eax
084e69bf +0x41d:  mov    %eax,(%esp)
084e69c2 +0x420:  call   0807d8d0 <_init+0x1c8>
084e69c7 +0x425:  mov    0x8(%ebp),%eax
084e69ca +0x428:  mov    0x1f(%eax),%eax
084e69cd +0x42b:  mov    %eax,-0x24f(%ebp)
084e69d3 +0x431:  mov    0x8(%ebp),%eax
084e69d6 +0x434:  mov    0x24(%eax),%eax
084e69d9 +0x437:  mov    %eax,-0x24b(%ebp)
084e69df +0x43d:  mov    0xc(%ebp),%eax
084e69e2 +0x440:  lea    0x79700(%eax),%edx
084e69e8 +0x446:  movl   $0x0,0x8(%esp)
084e69f0 +0x44e:  lea    -0x288(%ebp),%eax
084e69f6 +0x454:  mov    %eax,0x4(%esp)
084e69fa +0x458:  mov    %edx,(%esp)
084e69fd +0x45b:  call   086847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>  ; cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int)
084e6a02 +0x460:  mov    0x8(%ebp),%eax
084e6a05 +0x463:  movb   $0x1,0x1c(%eax)
084e6a09 +0x467:  mov    0x8(%ebp),%eax
084e6a0c +0x46a:  mov    0xc(%eax),%esi
084e6a0f +0x46d:  mov    0x8(%ebp),%eax
084e6a12 +0x470:  mov    0x14(%eax),%ebx
084e6a15 +0x473:  mov    0xc(%ebp),%eax
084e6a18 +0x476:  mov    %eax,(%esp)
084e6a1b +0x479:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084e6a20 +0x47e:  movl   $0x1,0x14(%esp)
084e6a28 +0x486:  movl   $0x1a,0x10(%esp)
084e6a30 +0x48e:  mov    %esi,0xc(%esp)
084e6a34 +0x492:  mov    %ebx,0x8(%esp)
084e6a38 +0x496:  movl   $0x1,0x4(%esp)
084e6a40 +0x49e:  mov    %eax,(%esp)
084e6a43 +0x4a1:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
084e6a48 +0x4a6:  movl   $0x0,-0x18(%ebp)
084e6a4f +0x4ad:  mov    0x8(%ebp),%eax
084e6a52 +0x4b0:  mov    0x4(%eax),%eax
084e6a55 +0x4b3:  mov    %eax,-0x24(%ebp)
084e6a58 +0x4b6:  movl   $0xffffffff,0x4(%esp)
084e6a60 +0x4be:  mov    0xc(%ebp),%eax
084e6a63 +0x4c1:  mov    %eax,(%esp)
084e6a66 +0x4c4:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e6a6b +0x4c9:  mov    %eax,-0x20(%ebp)
084e6a6e +0x4cc:  mov    -0xc(%ebp),%eax
084e6a71 +0x4cf:  mov    0x1a(%eax),%eax
084e6a74 +0x4d2:  mov    %eax,-0x1c(%ebp)
084e6a77 +0x4d5:  lea    -0x2e(%ebp),%ebx
084e6a7a +0x4d8:  mov    0xc(%ebp),%eax
084e6a7d +0x4db:  mov    %eax,(%esp)
084e6a80 +0x4de:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e6a85 +0x4e3:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084e6a8b +0x4e9:  mov    %eax,0x4(%esp)
084e6a8f +0x4ed:  mov    %edx,(%esp)
084e6a92 +0x4f0:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e6a97 +0x4f5:  movl   $0x1a,0x8(%esp)
084e6a9f +0x4fd:  mov    %ebx,0x4(%esp)
084e6aa3 +0x501:  mov    %eax,(%esp)
084e6aa6 +0x504:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e6aab +0x509:  mov    0xc(%ebp),%eax
084e6aae +0x50c:  mov    %eax,0x4(%esp)
084e6ab2 +0x510:  mov    0x8(%ebp),%eax
084e6ab5 +0x513:  mov    %eax,(%esp)
084e6ab8 +0x516:  call   084e6c42 <_ZN25Inter_NpcLimitBuyItemInfo10sendPacketEP5CUser>  ; Inter_NpcLimitBuyItemInfo::sendPacket(CUser*)
084e6abd +0x51b:  mov    $0x0,%eax
084e6ac2 +0x520:  lea    -0x8(%ebp),%esp
084e6ac5 +0x523:  add    $0x0,%esp
084e6ac8 +0x526:  pop    %ebx
084e6ac9 +0x527:  pop    %esi
084e6aca +0x528:  pop    %ebp
084e6acb +0x529:  ret
```

## 反编译 C

```c
// Inter_NpcLimitBuyItemInfo::dispatch_sig @ 0x84e65a2

/* Inter_NpcLimitBuyItemInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CUser *this;
  undefined4 uVar2;
  CMonitorServerProxy *pCVar3;
  int iVar4;
  char *pcVar5;
  size_t sVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  MSG_MAILBOX_SEND local_28c [17];
  char acStack_27b [40];
  undefined4 local_253;
  undefined4 local_24f;
  char local_147 [256];
  char local_47 [21];
  LimitNpcBuyItemUpdate local_32 [10];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  string local_18 [4];
  string local_14 [4];
  LimitNpcBuyItemInfo *local_10;
  
  reset((Inter_NpcLimitBuyItemInfo *)param_1);
  local_10 = (LimitNpcBuyItemInfo *)param_3;
  LimitNpcBuyItemUpdate::LimitNpcBuyItemUpdate(local_32);
  iVar4 = *(int *)(local_10 + 10);
  iVar1 = G_CGameManager();
  uVar8 = 10;
  this = (CUser *)CGameManager::getUser(iVar1,iVar4);
  if (this == (CUser *)0x0) {
    local_1c = 3;
    local_28 = *(undefined4 *)(local_10 + 0x16);
    local_24 = *(undefined4 *)(local_10 + 0x12);
    local_20 = *(undefined4 *)(local_10 + 0x1a);
    uVar2 = CUser::GetServerGroup((CUser *)0x0);
    pCVar3 = (CMonitorServerProxy *)
             CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                       (GlobalData::s_monitor_proxy_mgr,uVar2,uVar8);
    CMonitorServerProxy::SendPacket(pCVar3,(char *)local_32,0x1a);
  }
  else if (*(int *)(local_10 + 0x22) == 0) {
    local_1c = checkError((Inter_NpcLimitBuyItemInfo *)param_1,this,local_10);
    if (local_1c == 0) {
      *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_1 + 4);
      iVar4 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,param_1 + 0x1d,1);
      uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      uVar8 = CInventory::insertItemIntoInventory
                        (uVar8,*(undefined4 *)(param_1 + 0x1d),*(undefined4 *)(param_1 + 0x21),
                         *(undefined4 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 0x29),
                         *(undefined4 *)(param_1 + 0x2d),*(undefined4 *)(param_1 + 0x31),
                         *(undefined4 *)(param_1 + 0x35),*(undefined4 *)(param_1 + 0x39),
                         *(undefined4 *)(param_1 + 0x3d),*(undefined4 *)(param_1 + 0x41),
                         *(undefined4 *)(param_1 + 0x45),*(undefined4 *)(param_1 + 0x49),
                         *(undefined4 *)(param_1 + 0x4d),*(undefined4 *)(param_1 + 0x51),
                         *(undefined4 *)(param_1 + 0x55),param_1[0x59],0,1,0);
      *(undefined4 *)(param_1 + 0x10) = uVar8;
      param_1[0x1c] = (CUser)0x0;
      if (*(int *)(param_1 + 0x10) < 0) {
        np_server_xml::CServerXml::GetServerString((int)local_18,(bool *)g_ServerString_);
                    /* try { // try from 084e684d to 084e6851 has its CatchHandler @ 084e6953 */
        pcVar5 = (char *)std::string::c_str(local_18);
        strncpy(local_47,pcVar5,0x14);
        std::string::~string(local_18);
        np_server_xml::CServerXml::GetServerString((int)local_14,(bool *)g_ServerString_);
                    /* try { // try from 084e68a0 to 084e68a4 has its CatchHandler @ 084e696e */
        pcVar5 = (char *)std::string::c_str(local_14);
        strncpy(local_147,pcVar5,0xff);
        std::string::~string(local_14);
        uVar8 = CUser::GetServerGroup(this);
        sVar6 = strlen(local_147);
        uVar2 = CUser::get_charac_no(this,-1);
        iVar4 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (local_47,param_1 + 0x1d,0,uVar2,local_147,sVar6,0x1e,uVar8,0,0);
        if (iVar4 == 0) {
          memset(local_28c,0,0x145);
          strncpy(acStack_27b,local_47,0x14);
          local_253 = *(undefined4 *)(param_1 + 0x1f);
          local_24f = *(undefined4 *)(param_1 + 0x24);
          cUserHistoryLog::SendMail((cUserHistoryLog *)(this + 0x79700),local_28c,0);
        }
        param_1[0x1c] = (CUser)0x1;
      }
      uVar8 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
      CInventory::delete_item(pCVar7,1,uVar2,uVar8,0x1a,1);
      local_1c = 0;
      local_28 = *(undefined4 *)(param_1 + 4);
      local_24 = CUser::get_charac_no(this,-1);
      local_20 = *(undefined4 *)(local_10 + 0x1a);
      uVar8 = CUser::GetServerGroup(this);
      pCVar3 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar8);
      CMonitorServerProxy::SendPacket(pCVar3,(char *)local_32,0x1a);
      sendPacket((Inter_NpcLimitBuyItemInfo *)param_1,this);
    }
    else {
      local_28 = *(undefined4 *)(param_1 + 4);
      local_24 = CUser::get_charac_no(this,-1);
      local_20 = *(undefined4 *)(local_10 + 0x1a);
      uVar8 = CUser::GetServerGroup(this);
      pCVar3 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar8);
      CMonitorServerProxy::SendPacket(pCVar3,(char *)local_32,0x1a);
      CUser::SendCmdErrorPacket(this,0x1d1,local_1c & 0xff);
    }
  }
  else {
    CUser::SendCmdErrorPacket(this,0x1d1,*(uint *)(local_10 + 0x22) & 0xff);
  }
  return 0;
}
```
