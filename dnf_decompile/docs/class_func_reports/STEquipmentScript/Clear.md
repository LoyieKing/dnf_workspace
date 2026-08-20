# Clear

`_ZN17STEquipmentScript5ClearEv`

`STEquipmentScript::Clear()`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898e9e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898e9e4  _ZN17STEquipmentScript5ClearEv
#           STEquipmentScript::Clear()
# range [0x0898e9e4, 0x0898ef19]
0898e9e4 +0x000:  push   %ebp
0898e9e5 +0x001:  mov    %esp,%ebp
0898e9e7 +0x003:  sub    $0x28,%esp
0898e9ea +0x006:  mov    0x8(%ebp),%eax
0898e9ed +0x009:  mov    %eax,(%esp)
0898e9f0 +0x00c:  call   0898d718 <_ZN12STItemScript5ClearEv>  ; STItemScript::Clear()
0898e9f5 +0x011:  mov    0x8(%ebp),%eax
0898e9f8 +0x014:  movl   $0x0,0x6bc(%eax)
0898ea02 +0x01e:  mov    0x8(%ebp),%eax
0898ea05 +0x021:  movl   $0x0,0x764(%eax)
0898ea0f +0x02b:  mov    0x8(%ebp),%eax
0898ea12 +0x02e:  add    $0x6a4,%eax
0898ea17 +0x033:  movl   $"",0x4(%esp)
0898ea1f +0x03b:  mov    %eax,(%esp)
0898ea22 +0x03e:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ea27 +0x043:  mov    0x8(%ebp),%eax
0898ea2a +0x046:  add    $0x6ac,%eax
0898ea2f +0x04b:  movl   $"",0x4(%esp)
0898ea37 +0x053:  mov    %eax,(%esp)
0898ea3a +0x056:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ea3f +0x05b:  mov    0x8(%ebp),%eax
0898ea42 +0x05e:  add    $0x6b8,%eax
0898ea47 +0x063:  movl   $"",0x4(%esp)
0898ea4f +0x06b:  mov    %eax,(%esp)
0898ea52 +0x06e:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ea57 +0x073:  mov    0x8(%ebp),%eax
0898ea5a +0x076:  add    $0x668,%eax
0898ea5f +0x07b:  movl   $"",0x4(%esp)
0898ea67 +0x083:  mov    %eax,(%esp)
0898ea6a +0x086:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ea6f +0x08b:  mov    0x8(%ebp),%eax
0898ea72 +0x08e:  movl   $0xffffffff,0x178(%eax)
0898ea7c +0x098:  mov    0x8(%ebp),%eax
0898ea7f +0x09b:  movl   $0x46,0x17c(%eax)
0898ea89 +0x0a5:  mov    0x8(%ebp),%eax
0898ea8c +0x0a8:  movl   $0xffffffff,0x180(%eax)
0898ea96 +0x0b2:  mov    0x8(%ebp),%eax
0898ea99 +0x0b5:  movl   $0xffffffff,0x184(%eax)
0898eaa3 +0x0bf:  mov    0x8(%ebp),%eax
0898eaa6 +0x0c2:  movl   $0xffffffff,0x188(%eax)
0898eab0 +0x0cc:  mov    0x8(%ebp),%eax
0898eab3 +0x0cf:  add    $0x1a4,%eax
0898eab8 +0x0d4:  movl   $"",0x4(%esp)
0898eac0 +0x0dc:  mov    %eax,(%esp)
0898eac3 +0x0df:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898eac8 +0x0e4:  mov    0x8(%ebp),%eax
0898eacb +0x0e7:  add    $0x1a8,%eax
0898ead0 +0x0ec:  mov    %eax,(%esp)
0898ead3 +0x0ef:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898ead8 +0x0f4:  mov    0x8(%ebp),%eax
0898eadb +0x0f7:  movl   $0x1a,0x1b4(%eax)
0898eae5 +0x101:  mov    0x8(%ebp),%eax
0898eae8 +0x104:  movl   $0x0,0x1b8(%eax)
0898eaf2 +0x10e:  mov    0x8(%ebp),%eax
0898eaf5 +0x111:  movl   $0x0,0x1bc(%eax)
0898eaff +0x11b:  mov    0x8(%ebp),%eax
0898eb02 +0x11e:  add    $0x1c0,%eax
0898eb07 +0x123:  mov    %eax,(%esp)
0898eb0a +0x126:  call   089193c0 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x9f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x9f
0898eb0f +0x12b:  mov    0x8(%ebp),%eax
0898eb12 +0x12e:  add    $0x640,%eax
0898eb17 +0x133:  mov    %eax,(%esp)
0898eb1a +0x136:  call   089c573a <_GLOBAL__I_g_npcNameVector+0x2b15>  ; global constructors keyed to g_npcNameVector+0x2b15
0898eb1f +0x13b:  mov    0x8(%ebp),%eax
0898eb22 +0x13e:  add    $0x658,%eax
0898eb27 +0x143:  mov    %eax,(%esp)
0898eb2a +0x146:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898eb2f +0x14b:  mov    0x8(%ebp),%eax
0898eb32 +0x14e:  add    $0x664,%eax
0898eb37 +0x153:  movl   $"",0x4(%esp)
0898eb3f +0x15b:  mov    %eax,(%esp)
0898eb42 +0x15e:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898eb47 +0x163:  mov    0x8(%ebp),%eax
0898eb4a +0x166:  add    $0x66c,%eax
0898eb4f +0x16b:  mov    %eax,(%esp)
0898eb52 +0x16e:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898eb57 +0x173:  mov    0x8(%ebp),%eax
0898eb5a +0x176:  add    $0x678,%eax
0898eb5f +0x17b:  mov    %eax,(%esp)
0898eb62 +0x17e:  call   0891eeee <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x5bcd>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x5bcd
0898eb67 +0x183:  mov    0x8(%ebp),%eax
0898eb6a +0x186:  movl   $0xffffffff,0x6a0(%eax)
0898eb74 +0x190:  mov    0x8(%ebp),%eax
0898eb77 +0x193:  add    $0x768,%eax
0898eb7c +0x198:  mov    %eax,(%esp)
0898eb7f +0x19b:  call   089c574e <_GLOBAL__I_g_npcNameVector+0x2b29>  ; global constructors keyed to g_npcNameVector+0x2b29
0898eb84 +0x1a0:  mov    0x8(%ebp),%eax
0898eb87 +0x1a3:  add    $0x774,%eax
0898eb8c +0x1a8:  mov    %eax,(%esp)
0898eb8f +0x1ab:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898eb94 +0x1b0:  mov    0x8(%ebp),%eax
0898eb97 +0x1b3:  add    $0x780,%eax
0898eb9c +0x1b8:  mov    %eax,(%esp)
0898eb9f +0x1bb:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898eba4 +0x1c0:  mov    0x8(%ebp),%eax
0898eba7 +0x1c3:  movb   $0x0,0x78c(%eax)
0898ebae +0x1ca:  mov    0x8(%ebp),%eax
0898ebb1 +0x1cd:  movl   $0x0,0x794(%eax)
0898ebbb +0x1d7:  mov    0x8(%ebp),%eax
0898ebbe +0x1da:  movl   $0x0,0x790(%eax)
0898ebc8 +0x1e4:  mov    0x8(%ebp),%eax
0898ebcb +0x1e7:  movl   $0xffffffff,0x798(%eax)
0898ebd5 +0x1f1:  mov    0x8(%ebp),%eax
0898ebd8 +0x1f4:  movl   $0xffffffff,0x79c(%eax)
0898ebe2 +0x1fe:  mov    0x8(%ebp),%eax
0898ebe5 +0x201:  add    $0x7a0,%eax
0898ebea +0x206:  mov    %eax,(%esp)
0898ebed +0x209:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898ebf2 +0x20e:  mov    0x8(%ebp),%eax
0898ebf5 +0x211:  movb   $0x0,0x7ac(%eax)
0898ebfc +0x218:  mov    0x8(%ebp),%eax
0898ebff +0x21b:  add    $0x7b0,%eax
0898ec04 +0x220:  mov    %eax,(%esp)
0898ec07 +0x223:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898ec0c +0x228:  mov    0x8(%ebp),%eax
0898ec0f +0x22b:  add    $0x6c0,%eax
0898ec14 +0x230:  mov    %eax,(%esp)
0898ec17 +0x233:  call   089c576a <_GLOBAL__I_g_npcNameVector+0x2b45>  ; global constructors keyed to g_npcNameVector+0x2b45
0898ec1c +0x238:  mov    0x8(%ebp),%eax
0898ec1f +0x23b:  add    $0x6cc,%eax
0898ec24 +0x240:  mov    %eax,(%esp)
0898ec27 +0x243:  call   0896313c <_GLOBAL__I__ZN21EventAvatarListScript17isfindEventAvatarEi+0xd9f>  ; global constructors keyed to EventAvatarListScript::isfindEventAvatar(int)+0xd9f
0898ec2c +0x248:  mov    0x8(%ebp),%eax
0898ec2f +0x24b:  movl   $0xffffffff,0x6d8(%eax)
0898ec39 +0x255:  mov    0x8(%ebp),%eax
0898ec3c +0x258:  movl   $0xffffffff,0x6dc(%eax)
0898ec46 +0x262:  mov    0x8(%ebp),%eax
0898ec49 +0x265:  movl   $0xffffffff,0x6e4(%eax)
0898ec53 +0x26f:  mov    0x8(%ebp),%eax
0898ec56 +0x272:  movb   $0x0,0x7bc(%eax)
0898ec5d +0x279:  mov    0x8(%ebp),%eax
0898ec60 +0x27c:  movl   $0xffffffff,0x7c0(%eax)
0898ec6a +0x286:  mov    0x8(%ebp),%eax
0898ec6d +0x289:  movl   $0xffffffff,0x7c4(%eax)
0898ec77 +0x293:  mov    0x8(%ebp),%eax
0898ec7a +0x296:  movb   $0x0,0x7c8(%eax)
0898ec81 +0x29d:  mov    0x8(%ebp),%eax
0898ec84 +0x2a0:  movb   $0x0,0x6f4(%eax)
0898ec8b +0x2a7:  mov    0x8(%ebp),%eax
0898ec8e +0x2aa:  movb   $0x0,0x6f5(%eax)
0898ec95 +0x2b1:  mov    0x8(%ebp),%eax
0898ec98 +0x2b4:  movb   $0x0,0x6f6(%eax)
0898ec9f +0x2bb:  mov    0x8(%ebp),%eax
0898eca2 +0x2be:  movl   $0x0,0xd4(%eax)
0898ecac +0x2c8:  mov    0x8(%ebp),%eax
0898ecaf +0x2cb:  movl   $0x0,0x6f8(%eax)
0898ecb9 +0x2d5:  mov    0x8(%ebp),%eax
0898ecbc +0x2d8:  add    $0x7d8,%eax
0898ecc1 +0x2dd:  mov    %eax,(%esp)
0898ecc4 +0x2e0:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0898ecc9 +0x2e5:  mov    0x8(%ebp),%eax
0898eccc +0x2e8:  add    $0x7e4,%eax
0898ecd1 +0x2ed:  mov    %eax,(%esp)
0898ecd4 +0x2f0:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
0898ecd9 +0x2f5:  mov    0x8(%ebp),%eax
0898ecdc +0x2f8:  add    $0x7f0,%eax
0898ece1 +0x2fd:  mov    %eax,(%esp)
0898ece4 +0x300:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0898ece9 +0x305:  mov    0x8(%ebp),%eax
0898ecec +0x308:  add    $0x7cc,%eax
0898ecf1 +0x30d:  mov    %eax,(%esp)
0898ecf4 +0x310:  call   089c5786 <_GLOBAL__I_g_npcNameVector+0x2b61>  ; global constructors keyed to g_npcNameVector+0x2b61
0898ecf9 +0x315:  mov    0x8(%ebp),%eax
0898ecfc +0x318:  add    $0x7f4,%eax
0898ed01 +0x31d:  mov    %eax,(%esp)
0898ed04 +0x320:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0898ed09 +0x325:  mov    0x8(%ebp),%eax
0898ed0c +0x328:  movl   $0x0,0x804(%eax)
0898ed16 +0x332:  mov    0x8(%ebp),%eax
0898ed19 +0x335:  movl   $0x3,0x808(%eax)
0898ed23 +0x33f:  mov    0x8(%ebp),%eax
0898ed26 +0x342:  movw   $0x0,0x80c(%eax)
0898ed2f +0x34b:  mov    0x8(%ebp),%eax
0898ed32 +0x34e:  movw   $0x0,0x80e(%eax)
0898ed3b +0x357:  mov    0x8(%ebp),%eax
0898ed3e +0x35a:  movl   $0x0,0x810(%eax)
0898ed48 +0x364:  mov    0x8(%ebp),%eax
0898ed4b +0x367:  add    $0x690,%eax
0898ed50 +0x36c:  mov    %eax,(%esp)
0898ed53 +0x36f:  call   089c57a2 <_GLOBAL__I_g_npcNameVector+0x2b7d>  ; global constructors keyed to g_npcNameVector+0x2b7d
0898ed58 +0x374:  mov    0x8(%ebp),%eax
0898ed5b +0x377:  movb   $0x0,0x69c(%eax)
0898ed62 +0x37e:  mov    0x8(%ebp),%eax
0898ed65 +0x381:  movb   $0x2,0x814(%eax)
0898ed6c +0x388:  mov    0x8(%ebp),%eax
0898ed6f +0x38b:  movl   $0x0,0x818(%eax)
0898ed79 +0x395:  mov    0x8(%ebp),%eax
0898ed7c +0x398:  add    $0x84c,%eax
0898ed81 +0x39d:  mov    %eax,(%esp)
0898ed84 +0x3a0:  call   089c57be <_GLOBAL__I_g_npcNameVector+0x2b99>  ; global constructors keyed to g_npcNameVector+0x2b99
0898ed89 +0x3a5:  mov    0x8(%ebp),%eax
0898ed8c +0x3a8:  add    $0x714,%eax
0898ed91 +0x3ad:  mov    %eax,(%esp)
0898ed94 +0x3b0:  call   080da456 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x5f3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x5f3
0898ed99 +0x3b5:  movl   $0x14,-0xc(%ebp)
0898eda0 +0x3bc:  mov    0x8(%ebp),%eax
0898eda3 +0x3bf:  lea    0x714(%eax),%ecx
0898eda9 +0x3c5:  lea    -0x14(%ebp),%eax
0898edac +0x3c8:  lea    -0xc(%ebp),%edx
0898edaf +0x3cb:  mov    %edx,0x8(%esp)
0898edb3 +0x3cf:  mov    %ecx,0x4(%esp)
0898edb7 +0x3d3:  mov    %eax,(%esp)
0898edba +0x3d6:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
0898edbf +0x3db:  sub    $0x4,%esp
0898edc2 +0x3de:  mov    0x8(%ebp),%eax
0898edc5 +0x3e1:  movb   $0x0,0x72c(%eax)
0898edcc +0x3e8:  mov    0x8(%ebp),%eax
0898edcf +0x3eb:  movl   $0x0,0x730(%eax)
0898edd9 +0x3f5:  mov    0x8(%ebp),%eax
0898eddc +0x3f8:  movl   $0x0,0x734(%eax)
0898ede6 +0x402:  mov    0x8(%ebp),%eax
0898ede9 +0x405:  movl   $0x0,0x6e0(%eax)
0898edf3 +0x40f:  mov    0x8(%ebp),%eax
0898edf6 +0x412:  add    $0x858,%eax
0898edfb +0x417:  mov    %eax,(%esp)
0898edfe +0x41a:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898ee03 +0x41f:  mov    0x8(%ebp),%eax
0898ee06 +0x422:  add    $0x864,%eax
0898ee0b +0x427:  mov    %eax,(%esp)
0898ee0e +0x42a:  call   0814abba <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x959>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x959
0898ee13 +0x42f:  mov    0x8(%ebp),%eax
0898ee16 +0x432:  add    $0x878,%eax
0898ee1b +0x437:  mov    %eax,(%esp)
0898ee1e +0x43a:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0898ee23 +0x43f:  mov    0x8(%ebp),%eax
0898ee26 +0x442:  movl   $0x0,0x87c(%eax)
0898ee30 +0x44c:  mov    0x8(%ebp),%eax
0898ee33 +0x44f:  movb   $0xff,0x880(%eax)
0898ee3a +0x456:  mov    0x8(%ebp),%eax
0898ee3d +0x459:  movl   $0x0,0x884(%eax)
0898ee47 +0x463:  mov    0x8(%ebp),%eax
0898ee4a +0x466:  movb   $0x0,0x888(%eax)
0898ee51 +0x46d:  mov    0x8(%ebp),%eax
0898ee54 +0x470:  movb   $0x1,0x889(%eax)
0898ee5b +0x477:  mov    0x8(%ebp),%eax
0898ee5e +0x47a:  movb   $0x0,0x82c(%eax)
0898ee65 +0x481:  mov    0x8(%ebp),%eax
0898ee68 +0x484:  add    $0x830,%eax
0898ee6d +0x489:  mov    %eax,(%esp)
0898ee70 +0x48c:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898ee75 +0x491:  mov    0x8(%ebp),%eax
0898ee78 +0x494:  add    $0x83c,%eax
0898ee7d +0x499:  movl   $"",0x4(%esp)
0898ee85 +0x4a1:  mov    %eax,(%esp)
0898ee88 +0x4a4:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ee8d +0x4a9:  mov    0x8(%ebp),%eax
0898ee90 +0x4ac:  add    $0x840,%eax
0898ee95 +0x4b1:  mov    %eax,(%esp)
0898ee98 +0x4b4:  call   089c57da <_GLOBAL__I_g_npcNameVector+0x2bb5>  ; global constructors keyed to g_npcNameVector+0x2bb5
0898ee9d +0x4b9:  mov    0x8(%ebp),%eax
0898eea0 +0x4bc:  movb   $0x0,0x88a(%eax)
0898eea7 +0x4c3:  mov    0x8(%ebp),%eax
0898eeaa +0x4c6:  movb   $0x0,0x88b(%eax)
0898eeb1 +0x4cd:  mov    0x8(%ebp),%eax
0898eeb4 +0x4d0:  movl   $0x0,0x890(%eax)
0898eebe +0x4da:  mov    0x8(%ebp),%eax
0898eec1 +0x4dd:  movl   $0x0,0x88c(%eax)
0898eecb +0x4e7:  mov    0x8(%ebp),%eax
0898eece +0x4ea:  movb   $0x0,0x72d(%eax)
0898eed5 +0x4f1:  mov    0x8(%ebp),%eax
0898eed8 +0x4f4:  movb   $0x0,0x82c(%eax)
0898eedf +0x4fb:  mov    0x8(%ebp),%eax
0898eee2 +0x4fe:  add    $0x830,%eax
0898eee7 +0x503:  mov    %eax,(%esp)
0898eeea +0x506:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
0898eeef +0x50b:  mov    0x8(%ebp),%eax
0898eef2 +0x50e:  add    $0x83c,%eax
0898eef7 +0x513:  movl   $"",0x4(%esp)
0898eeff +0x51b:  mov    %eax,(%esp)
0898ef02 +0x51e:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0898ef07 +0x523:  mov    0x8(%ebp),%eax
0898ef0a +0x526:  add    $0x840,%eax
0898ef0f +0x52b:  mov    %eax,(%esp)
0898ef12 +0x52e:  call   089c57da <_GLOBAL__I_g_npcNameVector+0x2bb5>  ; global constructors keyed to g_npcNameVector+0x2bb5
0898ef17 +0x533:  leave
0898ef18 +0x534:  ret
0898ef19 +0x535:  nop
```

## 反编译 C

```c
// STEquipmentScript::Clear @ 0x898e9e4

/* STEquipmentScript::Clear() */

void __thiscall STEquipmentScript::Clear(STEquipmentScript *this)

{
  int local_18 [2];
  undefined4 local_10;
  
  STItemScript::Clear((STItemScript *)this);
  *(undefined4 *)(this + 0x6bc) = 0;
  *(undefined4 *)(this + 0x764) = 0;
  std::string::operator=((string *)(this + 0x6a4),"");
  std::string::operator=((string *)(this + 0x6ac),"");
  std::string::operator=((string *)(this + 0x6b8),"");
  std::string::operator=((string *)(this + 0x668),"");
  *(undefined4 *)(this + 0x178) = 0xffffffff;
  *(undefined4 *)(this + 0x17c) = 0x46;
  *(undefined4 *)(this + 0x180) = 0xffffffff;
  *(undefined4 *)(this + 0x184) = 0xffffffff;
  *(undefined4 *)(this + 0x188) = 0xffffffff;
  std::string::operator=((string *)(this + 0x1a4),"");
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x1a8));
  *(undefined4 *)(this + 0x1b4) = 0x1a;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  EquipmentParameterInfo::clear((EquipmentParameterInfo *)(this + 0x1c0));
  std::
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  ::clear((map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
           *)(this + 0x640));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x658));
  std::string::operator=((string *)(this + 0x664),"");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x66c));
  std::
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  ::clear((map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
           *)(this + 0x678));
  *(undefined4 *)(this + 0x6a0) = 0xffffffff;
  std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::clear
            ((vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>> *)(this + 0x768));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x774));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x780));
  this[0x78c] = (STEquipmentScript)0x0;
  *(undefined4 *)(this + 0x794) = 0;
  *(undefined4 *)(this + 0x790) = 0;
  *(undefined4 *)(this + 0x798) = 0xffffffff;
  *(undefined4 *)(this + 0x79c) = 0xffffffff;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x7a0));
  this[0x7ac] = (STEquipmentScript)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x7b0));
  std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::clear
            ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)(this + 0x6c0));
  std::vector<unsigned_short,std::allocator<unsigned_short>>::clear
            ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x6cc));
  *(undefined4 *)(this + 0x6d8) = 0xffffffff;
  *(undefined4 *)(this + 0x6dc) = 0xffffffff;
  *(undefined4 *)(this + 0x6e4) = 0xffffffff;
  this[0x7bc] = (STEquipmentScript)0x0;
  *(undefined4 *)(this + 0x7c0) = 0xffffffff;
  *(undefined4 *)(this + 0x7c4) = 0xffffffff;
  this[0x7c8] = (STEquipmentScript)0x0;
  this[0x6f4] = (STEquipmentScript)0x0;
  this[0x6f5] = (STEquipmentScript)0x0;
  this[0x6f6] = (STEquipmentScript)0x0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0x6f8) = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x7d8));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x7e4));
  std::string::clear((string *)(this + 0x7f0));
  std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::clear
            ((vector<STEnchantSystemData,std::allocator<STEnchantSystemData>> *)(this + 0x7cc));
  std::string::clear((string *)(this + 0x7f4));
  *(undefined4 *)(this + 0x804) = 0;
  *(undefined4 *)(this + 0x808) = 3;
  *(undefined2 *)(this + 0x80c) = 0;
  *(undefined2 *)(this + 0x80e) = 0;
  *(undefined4 *)(this + 0x810) = 0;
  std::vector<EquipmentParameterInfo,std::allocator<EquipmentParameterInfo>>::clear
            ((vector<EquipmentParameterInfo,std::allocator<EquipmentParameterInfo>> *)(this + 0x690)
            );
  this[0x69c] = (STEquipmentScript)0x0;
  this[0x814] = (STEquipmentScript)0x2;
  *(undefined4 *)(this + 0x818) = 0;
  std::vector<effect::STEffect,std::allocator<effect::STEffect>>::clear
            ((vector<effect::STEffect,std::allocator<effect::STEffect>> *)(this + 0x84c));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x714));
  local_10 = 0x14;
  std::set<int,std::less<int>,std::allocator<int>>::insert(local_18);
  this[0x72c] = (STEquipmentScript)0x0;
  *(undefined4 *)(this + 0x730) = 0;
  *(undefined4 *)(this + 0x734) = 0;
  *(undefined4 *)(this + 0x6e0) = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x858));
  std::vector<bool,std::allocator<bool>>::clear((vector<bool,std::allocator<bool>> *)(this + 0x864))
  ;
  std::string::clear((string *)(this + 0x878));
  *(undefined4 *)(this + 0x87c) = 0;
  this[0x880] = (STEquipmentScript)0xff;
  *(undefined4 *)(this + 0x884) = 0;
  this[0x888] = (STEquipmentScript)0x0;
  this[0x889] = (STEquipmentScript)0x1;
  this[0x82c] = (STEquipmentScript)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x830));
  std::string::operator=((string *)(this + 0x83c),"");
  std::vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>>::clear
            ((vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>> *)(this + 0x840)
            );
  this[0x88a] = (STEquipmentScript)0x0;
  this[0x88b] = (STEquipmentScript)0x0;
  *(undefined4 *)(this + 0x890) = 0;
  *(undefined4 *)(this + 0x88c) = 0;
  this[0x72d] = (STEquipmentScript)0x0;
  this[0x82c] = (STEquipmentScript)0x0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x830));
  std::string::operator=((string *)(this + 0x83c),"");
  std::vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>>::clear
            ((vector<stSetItemBackImageInfo,std::allocator<stSetItemBackImageInfo>> *)(this + 0x840)
            );
  return;
}
```
