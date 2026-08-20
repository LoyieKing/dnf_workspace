# VerifyPresentAvengerTitle

`_ZN5CUser25VerifyPresentAvengerTitleEv`

`CUser::VerifyPresentAvengerTitle()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868b552` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868b552  _ZN5CUser25VerifyPresentAvengerTitleEv
#           CUser::VerifyPresentAvengerTitle()
# range [0x0868b552, 0x0868ba37]
0868b552 +0x000:  push   %ebp
0868b553 +0x001:  mov    %esp,%ebp
0868b555 +0x003:  push   %edi
0868b556 +0x004:  push   %esi
0868b557 +0x005:  push   %ebx
0868b558 +0x006:  sub    $0x1cc,%esp
0868b55e +0x00c:  mov    0x8(%ebp),%eax
0868b561 +0x00f:  mov    %eax,(%esp)
0868b564 +0x012:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868b569 +0x017:  mov    %eax,%ebx
0868b56b +0x019:  mov    0x8(%ebp),%eax
0868b56e +0x01c:  mov    %eax,(%esp)
0868b571 +0x01f:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
0868b576 +0x024:  mov    %eax,%esi
0868b578 +0x026:  lea    -0x35(%ebp),%eax
0868b57b +0x029:  mov    %eax,(%esp)
0868b57e +0x02c:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0868b583 +0x031:  lea    -0x35(%ebp),%eax
0868b586 +0x034:  mov    %eax,0x8(%esp)
0868b58a +0x038:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
0868b592 +0x040:  lea    -0x3c(%ebp),%eax
0868b595 +0x043:  mov    %eax,(%esp)
0868b598 +0x046:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0868b59d +0x04b:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
0868b5a2 +0x050:  lea    -0x3c(%ebp),%edx
0868b5a5 +0x053:  mov    %edx,0x4(%esp)
0868b5a9 +0x057:  mov    %eax,(%esp)
0868b5ac +0x05a:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
0868b5b1 +0x05f:  mov    %ebx,0xc(%esp)
0868b5b5 +0x063:  mov    %esi,0x8(%esp)
0868b5b9 +0x067:  movl   $0x8e,0x4(%esp)
0868b5c1 +0x06f:  mov    %eax,(%esp)
0868b5c4 +0x072:  call   08195794 <_ZN4ARAD27Arad_EventPeriodDataManager15checkCreateTimeE22ENUM_REPEAT_EVENT_CODEjj>  ; ARAD::Arad_EventPeriodDataManager::checkCreateTime(ENUM_REPEAT_EVENT_CODE, unsigned int, unsigned int)
0868b5c9 +0x077:  mov    %eax,%ebx
0868b5cb +0x079:  xor    $0x1,%ebx
0868b5ce +0x07c:  lea    -0x3c(%ebp),%eax
0868b5d1 +0x07f:  mov    %eax,(%esp)
0868b5d4 +0x082:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0868b5d9 +0x087:  jmp    0868b60b <+0xb9>
0868b5db +0x089:  mov    %edx,%ebx
0868b5dd +0x08b:  mov    %eax,%esi
0868b5df +0x08d:  lea    -0x3c(%ebp),%eax
0868b5e2 +0x090:  mov    %eax,(%esp)
0868b5e5 +0x093:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0868b5ea +0x098:  mov    %esi,%eax
0868b5ec +0x09a:  mov    %ebx,%edx
0868b5ee +0x09c:  jmp    0868b5f0 <+0x9e>
0868b5f0 +0x09e:  mov    %edx,%ebx
0868b5f2 +0x0a0:  mov    %eax,%esi
0868b5f4 +0x0a2:  lea    -0x35(%ebp),%eax
0868b5f7 +0x0a5:  mov    %eax,(%esp)
0868b5fa +0x0a8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0868b5ff +0x0ad:  mov    %esi,%eax
0868b601 +0x0af:  mov    %ebx,%edx
0868b603 +0x0b1:  mov    %eax,(%esp)
0868b606 +0x0b4:  call   08ae3750 <_Unwind_Resume>
0868b60b +0x0b9:  lea    -0x35(%ebp),%eax
0868b60e +0x0bc:  mov    %eax,(%esp)
0868b611 +0x0bf:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0868b616 +0x0c4:  test   %bl,%bl
0868b618 +0x0c6:  je     0868b624 <+0xd2>
0868b61a +0x0c8:  mov    $0x0,%eax
0868b61f +0x0cd:  jmp    0868ba2c <+0x4da>
0868b624 +0x0d2:  mov    0x8(%ebp),%eax
0868b627 +0x0d5:  mov    %eax,(%esp)
0868b62a +0x0d8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868b62f +0x0dd:  cmp    $0x13,%eax
0868b632 +0x0e0:  jle    0868b65a <+0x108>
0868b634 +0x0e2:  mov    0x8(%ebp),%eax
0868b637 +0x0e5:  mov    %eax,(%esp)
0868b63a +0x0e8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0868b63f +0x0ed:  cmp    $0x4,%eax
0868b642 +0x0f0:  jne    0868b65a <+0x108>
0868b644 +0x0f2:  mov    0x8(%ebp),%eax
0868b647 +0x0f5:  mov    %eax,(%esp)
0868b64a +0x0f8:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0868b64f +0x0fd:  test   %al,%al
0868b651 +0x0ff:  jne    0868b65a <+0x108>
0868b653 +0x101:  mov    $0x1,%eax
0868b658 +0x106:  jmp    0868b65f <+0x10d>
0868b65a +0x108:  mov    $0x0,%eax
0868b65f +0x10d:  test   %al,%al
0868b661 +0x10f:  je     0868ba27 <+0x4d5>
0868b667 +0x115:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0868b66e +0x11c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0868b673 +0x121:  mov    %eax,-0x1c(%ebp)
0868b676 +0x124:  mov    $0x0,%ebx
0868b67b +0x129:  mov    $0x0,%esi
0868b680 +0x12e:  mov    0x8(%ebp),%eax
0868b683 +0x131:  mov    %eax,(%esp)
0868b686 +0x134:  call   08697578 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3dcd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3dcd
0868b68b +0x139:  xor    $0x1,%eax
0868b68e +0x13c:  test   %al,%al
0868b690 +0x13e:  je     0868b6f7 <+0x1a5>
0868b692 +0x140:  lea    -0x2d(%ebp),%eax
0868b695 +0x143:  mov    %eax,(%esp)
0868b698 +0x146:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0868b69d +0x14b:  mov    $0x1,%ebx
0868b6a2 +0x150:  lea    -0x2d(%ebp),%eax
0868b6a5 +0x153:  mov    %eax,0x8(%esp)
0868b6a9 +0x157:  movl   $"Arad_EventPeriodDataManager",0x4(%esp)
0868b6b1 +0x15f:  lea    -0x34(%ebp),%eax
0868b6b4 +0x162:  mov    %eax,(%esp)
0868b6b7 +0x165:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0868b6bc +0x16a:  mov    $0x1,%esi
0868b6c1 +0x16f:  call   08197efa <_GLOBAL__I__ZN4ARAD16CheckAccountItemEP5CUserjRN17PurchaseLimitItem4InfoE+0x105>  ; global constructors keyed to ARAD::CheckAccountItem(CUser*, unsigned int, PurchaseLimitItem::Info&)+0x105
0868b6c6 +0x174:  lea    -0x34(%ebp),%edx
0868b6c9 +0x177:  mov    %edx,0x4(%esp)
0868b6cd +0x17b:  mov    %eax,(%esp)
0868b6d0 +0x17e:  call   081882ac <_ZN4ARAD16Arad_DataManager14findGameScriptESs>  ; ARAD::Arad_DataManager::findGameScript(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
0868b6d5 +0x183:  mov    -0x1c(%ebp),%edx
0868b6d8 +0x186:  mov    %edx,0x8(%esp)
0868b6dc +0x18a:  movl   $0x8e,0x4(%esp)
0868b6e4 +0x192:  mov    %eax,(%esp)
0868b6e7 +0x195:  call   081956b0 <_ZN4ARAD27Arad_EventPeriodDataManager9isAppliedE22ENUM_REPEAT_EVENT_CODEj>  ; ARAD::Arad_EventPeriodDataManager::isApplied(ENUM_REPEAT_EVENT_CODE, unsigned int)
0868b6ec +0x19a:  test   %al,%al
0868b6ee +0x19c:  je     0868b6f7 <+0x1a5>
0868b6f0 +0x19e:  mov    $0x1,%eax
0868b6f5 +0x1a3:  jmp    0868b6fc <+0x1aa>
0868b6f7 +0x1a5:  mov    $0x0,%eax
0868b6fc +0x1aa:  mov    %eax,%edi
0868b6fe +0x1ac:  mov    %esi,%eax
0868b700 +0x1ae:  test   %al,%al
0868b702 +0x1b0:  jne    0868b729 <+0x1d7>
0868b704 +0x1b2:  jmp    0868b755 <+0x203>
0868b706 +0x1b4:  mov    %edx,%edi
0868b708 +0x1b6:  mov    %eax,-0x19c(%ebp)
0868b70e +0x1bc:  mov    %esi,%eax
0868b710 +0x1be:  test   %al,%al
0868b712 +0x1c0:  je     0868b71f <+0x1cd>
0868b714 +0x1c2:  lea    -0x34(%ebp),%eax
0868b717 +0x1c5:  mov    %eax,(%esp)
0868b71a +0x1c8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0868b71f +0x1cd:  mov    -0x19c(%ebp),%eax
0868b725 +0x1d3:  mov    %edi,%edx
0868b727 +0x1d5:  jmp    0868b736 <+0x1e4>
0868b729 +0x1d7:  lea    -0x34(%ebp),%eax
0868b72c +0x1da:  mov    %eax,(%esp)
0868b72f +0x1dd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0868b734 +0x1e2:  jmp    0868b755 <+0x203>
0868b736 +0x1e4:  mov    %edx,%esi
0868b738 +0x1e6:  mov    %eax,%edi
0868b73a +0x1e8:  test   %bl,%bl
0868b73c +0x1ea:  je     0868b749 <+0x1f7>
0868b73e +0x1ec:  lea    -0x2d(%ebp),%eax
0868b741 +0x1ef:  mov    %eax,(%esp)
0868b744 +0x1f2:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0868b749 +0x1f7:  mov    %edi,%eax
0868b74b +0x1f9:  mov    %esi,%edx
0868b74d +0x1fb:  mov    %eax,(%esp)
0868b750 +0x1fe:  call   08ae3750 <_Unwind_Resume>
0868b755 +0x203:  test   %bl,%bl
0868b757 +0x205:  je     0868b764 <+0x212>
0868b759 +0x207:  lea    -0x2d(%ebp),%eax
0868b75c +0x20a:  mov    %eax,(%esp)
0868b75f +0x20d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0868b764 +0x212:  mov    %edi,%eax
0868b766 +0x214:  test   %al,%al
0868b768 +0x216:  je     0868ba27 <+0x4d5>
0868b76e +0x21c:  lea    -0x8e(%ebp),%eax
0868b774 +0x222:  mov    %eax,(%esp)
0868b777 +0x225:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0868b77c +0x22a:  movl   $0x28d3af,-0x8c(%ebp)
0868b786 +0x234:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868b78b +0x239:  mov    0xc(%eax),%eax
0868b78e +0x23c:  movl   $0x1,0xc(%esp)
0868b796 +0x244:  lea    -0x8e(%ebp),%edx
0868b79c +0x24a:  mov    %edx,0x8(%esp)
0868b7a0 +0x24e:  movl   $0x0,0x4(%esp)
0868b7a8 +0x256:  mov    %eax,(%esp)
0868b7ab +0x259:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0868b7b0 +0x25e:  mov    -0x8c(%ebp),%eax
0868b7b6 +0x264:  test   %eax,%eax
0868b7b8 +0x266:  je     0868b7c5 <+0x273>
0868b7ba +0x268:  mov    -0x8c(%ebp),%eax
0868b7c0 +0x26e:  cmp    $0xffffffff,%eax
0868b7c3 +0x271:  jne    0868b7cf <+0x27d>
0868b7c5 +0x273:  mov    $0x0,%eax
0868b7ca +0x278:  jmp    0868ba2c <+0x4da>
0868b7cf +0x27d:  movl   $0x1,0x4(%esp)
0868b7d7 +0x285:  mov    0x8(%ebp),%eax
0868b7da +0x288:  mov    %eax,(%esp)
0868b7dd +0x28b:  call   084ed016 <_GLOBAL__I__Z7getUserj+0x3fc8>  ; global constructors keyed to getUser(unsigned int)+0x3fc8
0868b7e2 +0x290:  lea    -0x18e(%ebp),%edx
0868b7e8 +0x296:  mov    $0x100,%ebx
0868b7ed +0x29b:  mov    $0x0,%eax
0868b7f2 +0x2a0:  mov    %edx,%ecx
0868b7f4 +0x2a2:  and    $0x2,%ecx
0868b7f7 +0x2a5:  test   %ecx,%ecx
0868b7f9 +0x2a7:  je     0868b804 <+0x2b2>
0868b7fb +0x2a9:  mov    %ax,(%edx)
0868b7fe +0x2ac:  add    $0x2,%edx
0868b801 +0x2af:  sub    $0x2,%ebx
0868b804 +0x2b2:  mov    %ebx,%ecx
0868b806 +0x2b4:  shr    $0x2,%ecx
0868b809 +0x2b7:  mov    %edx,%edi
0868b80b +0x2b9:  rep stos %eax,%es:(%edi)
0868b80d +0x2bb:  mov    %edi,%edx
0868b80f +0x2bd:  mov    %ebx,%ecx
0868b811 +0x2bf:  and    $0x2,%ecx
0868b814 +0x2c2:  test   %ecx,%ecx
0868b816 +0x2c4:  je     0868b81e <+0x2cc>
0868b818 +0x2c6:  mov    %ax,(%edx)
0868b81b +0x2c9:  add    $0x2,%edx
0868b81e +0x2cc:  mov    %ebx,%ecx
0868b820 +0x2ce:  and    $0x1,%ecx
0868b823 +0x2d1:  test   %ecx,%ecx
0868b825 +0x2d3:  je     0868b82c <+0x2da>
0868b827 +0x2d5:  mov    %al,(%edx)
0868b829 +0x2d7:  add    $0x1,%edx
0868b82c +0x2da:  lea    -0x51(%ebp),%eax
0868b82f +0x2dd:  mov    $0x15,%edx
0868b834 +0x2e2:  mov    $0x0,%ecx
0868b839 +0x2e7:  mov    %eax,%ebx
0868b83b +0x2e9:  and    $0x1,%ebx
0868b83e +0x2ec:  test   %ebx,%ebx
0868b840 +0x2ee:  je     0868b84a <+0x2f8>
0868b842 +0x2f0:  mov    %cl,(%eax)
0868b844 +0x2f2:  add    $0x1,%eax
0868b847 +0x2f5:  sub    $0x1,%edx
0868b84a +0x2f8:  mov    %eax,%ebx
0868b84c +0x2fa:  and    $0x2,%ebx
0868b84f +0x2fd:  test   %ebx,%ebx
0868b851 +0x2ff:  je     0868b85c <+0x30a>
0868b853 +0x301:  mov    %cx,(%eax)
0868b856 +0x304:  add    $0x2,%eax
0868b859 +0x307:  sub    $0x2,%edx
0868b85c +0x30a:  mov    %edx,%esi
0868b85e +0x30c:  and    $0xfffffffc,%esi
0868b861 +0x30f:  mov    $0x0,%ebx
0868b866 +0x314:  mov    %ecx,(%eax,%ebx,1)
0868b869 +0x317:  add    $0x4,%ebx
0868b86c +0x31a:  cmp    %esi,%ebx
0868b86e +0x31c:  jb     0868b866 <+0x314>
0868b870 +0x31e:  add    %ebx,%eax
0868b872 +0x320:  mov    %edx,%ebx
0868b874 +0x322:  and    $0x2,%ebx
0868b877 +0x325:  test   %ebx,%ebx
0868b879 +0x327:  je     0868b881 <+0x32f>
0868b87b +0x329:  mov    %cx,(%eax)
0868b87e +0x32c:  add    $0x2,%eax
0868b881 +0x32f:  and    $0x1,%edx
0868b884 +0x332:  test   %edx,%edx
0868b886 +0x334:  je     0868b88d <+0x33b>
0868b888 +0x336:  mov    %cl,(%eax)
0868b88a +0x338:  add    $0x1,%eax
0868b88d +0x33b:  movl   $0x0,0xc(%esp)
0868b895 +0x343:  movl   $"ready_to_avenger_title",0x8(%esp)
0868b89d +0x34b:  movl   $0x4,0x4(%esp)
0868b8a5 +0x353:  movl   $&g_scriptStringManager_,(%esp)
0868b8ac +0x35a:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0868b8b1 +0x35f:  movl   $0x14,0x8(%esp)
0868b8b9 +0x367:  mov    %eax,0x4(%esp)
0868b8bd +0x36b:  lea    -0x51(%ebp),%eax
0868b8c0 +0x36e:  mov    %eax,(%esp)
0868b8c3 +0x371:  call   0807d8d0 <_init+0x1c8>
0868b8c8 +0x376:  movl   $0x0,0xc(%esp)
0868b8d0 +0x37e:  movl   $"ready_to_avenger_mail",0x8(%esp)
0868b8d8 +0x386:  movl   $0x4,0x4(%esp)
0868b8e0 +0x38e:  movl   $&g_scriptStringManager_,(%esp)
0868b8e7 +0x395:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0868b8ec +0x39a:  movl   $0xff,0x8(%esp)
0868b8f4 +0x3a2:  mov    %eax,0x4(%esp)
0868b8f8 +0x3a6:  lea    -0x18e(%ebp),%eax
0868b8fe +0x3ac:  mov    %eax,(%esp)
0868b901 +0x3af:  call   0807d8d0 <_init+0x1c8>
0868b906 +0x3b4:  mov    0x8(%ebp),%eax
0868b909 +0x3b7:  mov    %eax,(%esp)
0868b90c +0x3ba:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0868b911 +0x3bf:  mov    %eax,%ebx
0868b913 +0x3c1:  lea    -0x18e(%ebp),%eax
0868b919 +0x3c7:  mov    %eax,(%esp)
0868b91c +0x3ca:  call   0807e3b0 <_init+0xca8>
0868b921 +0x3cf:  mov    %eax,%esi
0868b923 +0x3d1:  mov    0x8(%ebp),%eax
0868b926 +0x3d4:  mov    %eax,(%esp)
0868b929 +0x3d7:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868b92e +0x3dc:  movl   $0x0,0x24(%esp)
0868b936 +0x3e4:  movl   $0x0,0x20(%esp)
0868b93e +0x3ec:  mov    %ebx,0x1c(%esp)
0868b942 +0x3f0:  movl   $0x0,0x18(%esp)
0868b94a +0x3f8:  mov    %esi,0x14(%esp)
0868b94e +0x3fc:  lea    -0x18e(%ebp),%edx
0868b954 +0x402:  mov    %edx,0x10(%esp)
0868b958 +0x406:  mov    %eax,0xc(%esp)
0868b95c +0x40a:  movl   $0x0,0x8(%esp)
0868b964 +0x412:  lea    -0x8e(%ebp),%eax
0868b96a +0x418:  mov    %eax,0x4(%esp)
0868b96e +0x41c:  lea    -0x51(%ebp),%eax
0868b971 +0x41f:  mov    %eax,(%esp)
0868b974 +0x422:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0868b979 +0x427:  mov    0x8(%ebp),%eax
0868b97c +0x42a:  mov    %eax,(%esp)
0868b97f +0x42d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868b984 +0x432:  mov    %eax,%esi
0868b986 +0x434:  mov    0x8(%ebp),%eax
0868b989 +0x437:  mov    %eax,(%esp)
0868b98c +0x43a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868b991 +0x43f:  mov    %eax,%ebx
0868b993 +0x441:  mov    0x8(%ebp),%eax
0868b996 +0x444:  mov    %eax,(%esp)
0868b999 +0x447:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868b99e +0x44c:  mov    %esi,0x8(%esp)
0868b9a2 +0x450:  mov    %ebx,0x4(%esp)
0868b9a6 +0x454:  mov    %eax,(%esp)
0868b9a9 +0x457:  call   084422dc <_ZN27DB_SaveGiveAvengerTitleFlag11makeRequestEijj>  ; DB_SaveGiveAvengerTitleFlag::makeRequest(int, unsigned int, unsigned int)
0868b9ae +0x45c:  mov    -0x8c(%ebp),%edi
0868b9b4 +0x462:  mov    0x8(%ebp),%eax
0868b9b7 +0x465:  mov    %eax,(%esp)
0868b9ba +0x468:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868b9bf +0x46d:  mov    %eax,%esi
0868b9c1 +0x46f:  mov    0x8(%ebp),%eax
0868b9c4 +0x472:  mov    %eax,(%esp)
0868b9c7 +0x475:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868b9cc +0x47a:  movl   $0x0,0x4(%esp)
0868b9d4 +0x482:  mov    %eax,(%esp)
0868b9d7 +0x485:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0868b9dc +0x48a:  mov    %eax,%ebx
0868b9de +0x48c:  movl   $0x0,0xc(%esp)
0868b9e6 +0x494:  movl   $0xa6eb,0x8(%esp)
0868b9ee +0x49c:  movl   $&_ZZN5CUser25VerifyPresentAvengerTitleEvE19__PRETTY_FUNCTION__,0x4(%esp)
0868b9f6 +0x4a4:  lea    -0x2c(%ebp),%eax
0868b9f9 +0x4a7:  mov    %eax,(%esp)
0868b9fc +0x4aa:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0868ba01 +0x4af:  mov    %edi,0x10(%esp)
0868ba05 +0x4b3:  mov    %esi,0xc(%esp)
0868ba09 +0x4b7:  mov    %ebx,0x8(%esp)
0868ba0d +0x4bb:  movl   $"avenger plan event item post m_id(%s),charac_no(%u), itemidx(%u)",0x4(%esp)
0868ba15 +0x4c3:  lea    -0x2c(%ebp),%eax
0868ba18 +0x4c6:  mov    %eax,(%esp)
0868ba1b +0x4c9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0868ba20 +0x4ce:  mov    $0x1,%eax
0868ba25 +0x4d3:  jmp    0868ba2c <+0x4da>
0868ba27 +0x4d5:  mov    $0x0,%eax
0868ba2c +0x4da:  add    $0x1cc,%esp
0868ba32 +0x4e0:  pop    %ebx
0868ba33 +0x4e1:  pop    %esi
0868ba34 +0x4e2:  pop    %edi
0868ba35 +0x4e3:  pop    %ebp
0868ba36 +0x4e4:  ret
0868ba37 +0x4e5:  nop
```

## 反编译 C

```c
// CUser::VerifyPresentAvengerTitle @ 0x868b552

/* WARNING: Removing unreachable block (ram,0x0868b827) */
/* WARNING: Type propagation algorithm not settling */
/* CUser::VerifyPresentAvengerTitle() */

undefined4 __thiscall CUser::VerifyPresentAvengerTitle(CUser *this)

{
  char *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Arad_DataManager *pAVar7;
  Arad_EventPeriodDataManager *pAVar8;
  int iVar9;
  char *pcVar10;
  size_t sVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  byte bVar15;
  char local_192 [256];
  Inven_Item local_92 [2];
  int local_90;
  char local_55;
  char local_54 [20];
  string local_40 [7];
  allocator<char> local_39;
  string local_38 [7];
  allocator<char> local_31;
  cMyTrace local_30 [16];
  undefined4 local_20;
  
  bVar15 = 0;
  uVar5 = get_acc_id(this);
  uVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)this);
  std::allocator<char>::allocator();
                    /* try { // try from 0868b598 to 0868b59c has its CatchHandler @ 0868b5f0 */
  std::string::string(local_40,"Arad_EventPeriodDataManager",(allocator *)&local_39);
                    /* try { // try from 0868b59d to 0868b5c8 has its CatchHandler @ 0868b5db */
  pAVar7 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
  pAVar8 = (Arad_EventPeriodDataManager *)
           ARAD::Arad_DataManager::findGameScript(pAVar7,(string)local_40);
  cVar4 = ARAD::Arad_EventPeriodDataManager::checkCreateTime(pAVar8,0x8e,uVar6,uVar5);
                    /* try { // try from 0868b5d4 to 0868b5d8 has its CatchHandler @ 0868b5f0 */
  std::string::~string(local_40);
  std::allocator<char>::~allocator(&local_39);
  if (cVar4 != '\x01') {
    return 0;
  }
  iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (((iVar9 < 0x14) ||
      (iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this), iVar9 != 4)) ||
     (cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this), cVar4 != '\0')) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  if (!bVar14) {
    return 0;
  }
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  bVar2 = false;
  bVar14 = false;
  cVar4 = getFlagPresentAvengerTitle(this);
  if (cVar4 != '\x01') {
    std::allocator<char>::allocator();
    bVar2 = true;
                    /* try { // try from 0868b6b7 to 0868b6eb has its CatchHandler @ 0868b706 */
    std::string::string(local_38,"Arad_EventPeriodDataManager",(allocator *)&local_31);
    bVar14 = true;
    pAVar7 = (Arad_DataManager *)ARAD::Singleton<ARAD::Arad_DataManager>::Get();
    pAVar8 = (Arad_EventPeriodDataManager *)
             ARAD::Arad_DataManager::findGameScript(pAVar7,(string)local_38);
    cVar4 = ARAD::Arad_EventPeriodDataManager::isApplied(pAVar8,0x8e,local_20);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_0868b6fc;
    }
  }
  bVar3 = false;
LAB_0868b6fc:
  if (bVar14) {
                    /* try { // try from 0868b72f to 0868b733 has its CatchHandler @ 0868b736 */
    std::string::~string(local_38);
  }
  if (bVar2) {
    std::allocator<char>::~allocator(&local_31);
  }
  if (!bVar3) {
    return 0;
  }
  Inven_Item::Inven_Item(local_92);
  local_90 = 0x28d3af;
  iVar9 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar9 + 0xc),0,local_92,1);
  if ((local_90 != 0) && (local_90 != -1)) {
    setFlagPresentAvengerTitle(this,true);
    pcVar10 = local_192;
    uVar12 = 0x100;
    bVar14 = ((uint)pcVar10 & 2) != 0;
    if (bVar14) {
      local_192[0] = '\0';
      local_192[1] = '\0';
      pcVar10 = local_192 + 2;
      uVar12 = 0xfe;
    }
    for (uVar12 = uVar12 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10 = pcVar10 + ((uint)bVar15 * -2 + 1) * 4;
    }
    if (bVar14) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
    }
    pcVar10 = &local_55;
    uVar12 = 0x15;
    bVar14 = ((uint)pcVar10 & 1) != 0;
    if (bVar14) {
      local_55 = '\0';
      pcVar10 = local_54;
      uVar12 = 0x14;
    }
    if (((uint)pcVar10 & 2) != 0) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10 = pcVar10 + 2;
      uVar12 = uVar12 - 2;
    }
    uVar13 = 0;
    do {
      pcVar1 = pcVar10 + uVar13;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar13 = uVar13 + 4;
    } while (uVar13 < (uVar12 & 0xfffffffc));
    pcVar10 = pcVar10 + uVar13;
    if ((uVar12 & 2) != 0) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10 = pcVar10 + 2;
    }
    if (!bVar14) {
      *pcVar10 = '\0';
    }
    pcVar10 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "ready_to_avenger_title",(bool *)0x0);
    strncpy(&local_55,pcVar10,0x14);
    pcVar10 = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "ready_to_avenger_mail",(bool *)0x0);
    strncpy(local_192,pcVar10,0xff);
    uVar5 = GetServerGroup(this);
    sVar11 = strlen(local_192);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_55,local_92,0,uVar6,local_192,sVar11,0,uVar5,0,0);
    uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar13 = get_acc_id(this);
    iVar9 = GetUID(this);
    DB_SaveGiveAvengerTitleFlag::makeRequest(iVar9,uVar13,uVar12);
    iVar9 = local_90;
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar12 = get_acc_id(this);
    uVar6 = NumberToString(uVar12,0);
    cMyTrace::cMyTrace(local_30,"bool CUser::VerifyPresentAvengerTitle()",0xa6eb,0);
    cMyTrace::operator()
              (local_30,"avenger plan event item post m_id(%s),charac_no(%u), itemidx(%u)",uVar6,
               uVar5,iVar9);
    return 1;
  }
  return 0;
}
```
