# dispatch

`_ZN17DB_LoadGameOption8dispatchEiiP6Stream`

`DB_LoadGameOption::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadGameOption` | `0x0842f7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842f7f4  _ZN17DB_LoadGameOption8dispatchEiiP6Stream
#           DB_LoadGameOption::dispatch(int, int, Stream*)
# range [0x0842f7f4, 0x0842fd41]
0842f7f4 +0x000:  push   %ebp
0842f7f5 +0x001:  mov    %esp,%ebp
0842f7f7 +0x003:  push   %edi
0842f7f8 +0x004:  push   %esi
0842f7f9 +0x005:  push   %ebx
0842f7fa +0x006:  sub    $0x36c,%esp
0842f800 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842f805 +0x011:  movl   $0x0,0x8(%esp)
0842f80d +0x019:  movl   $0x6,0x4(%esp)
0842f815 +0x021:  mov    %eax,(%esp)
0842f818 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842f81d +0x029:  mov    %eax,-0x34(%ebp)
0842f820 +0x02c:  mov    0x14(%ebp),%eax
0842f823 +0x02f:  mov    %eax,(%esp)
0842f826 +0x032:  call   08452b58 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x576e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x576e
0842f82b +0x037:  mov    %eax,-0x30(%ebp)
0842f82e +0x03a:  mov    -0x30(%ebp),%eax
0842f831 +0x03d:  mov    (%eax),%eax
0842f833 +0x03f:  movl   $0x0,0x4(%esp)
0842f83b +0x047:  mov    %eax,(%esp)
0842f83e +0x04a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f843 +0x04f:  mov    %eax,%ebx
0842f845 +0x051:  call   083fbe25 <_Z22get_member_game_optionv>  ; get_member_game_option()
0842f84a +0x056:  mov    %ebx,0xc(%esp)
0842f84e +0x05a:  mov    %eax,0x8(%esp)
0842f852 +0x05e:  movl   $"seLect option_1,option_3,shortcut_emoticon from %s where m_id = %s",0x4(%esp)
0842f85a +0x066:  mov    -0x34(%ebp),%eax
0842f85d +0x069:  mov    %eax,(%esp)
0842f860 +0x06c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842f865 +0x071:  movl   $0x1,0x4(%esp)
0842f86d +0x079:  mov    -0x34(%ebp),%eax
0842f870 +0x07c:  mov    %eax,(%esp)
0842f873 +0x07f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842f878 +0x084:  xor    $0x1,%eax
0842f87b +0x087:  test   %al,%al
0842f87d +0x089:  je     0842f889 <+0x95>
0842f87f +0x08b:  mov    $0x0,%ebx
0842f884 +0x090:  jmp    0842fd35 <+0x541>
0842f889 +0x095:  mov    -0x34(%ebp),%eax
0842f88c +0x098:  mov    %eax,(%esp)
0842f88f +0x09b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842f894 +0x0a0:  test   %eax,%eax
0842f896 +0x0a2:  sete   %al
0842f899 +0x0a5:  test   %al,%al
0842f89b +0x0a7:  je     0842f9a5 <+0x1b1>
0842f8a1 +0x0ad:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842f8a6 +0x0b2:  movl   $0x74c2,0x8(%esp)
0842f8ae +0x0ba:  movl   $"DBThread.cpp",0x4(%esp)
0842f8b6 +0x0c2:  mov    %eax,(%esp)
0842f8b9 +0x0c5:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842f8be +0x0ca:  movl   $0x1,0x8(%esp)
0842f8c6 +0x0d2:  mov    %eax,0x4(%esp)
0842f8ca +0x0d6:  lea    -0x74(%ebp),%eax
0842f8cd +0x0d9:  mov    %eax,(%esp)
0842f8d0 +0x0dc:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842f8d5 +0x0e1:  lea    -0x74(%ebp),%eax
0842f8d8 +0x0e4:  mov    %eax,(%esp)
0842f8db +0x0e7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f8e0 +0x0ec:  movl   $0x12f,0x4(%esp)
0842f8e8 +0x0f4:  mov    %eax,(%esp)
0842f8eb +0x0f7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f8f0 +0x0fc:  lea    -0x74(%ebp),%eax
0842f8f3 +0x0ff:  mov    %eax,(%esp)
0842f8f6 +0x102:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842f8fb +0x107:  mov    0x10(%ebp),%edx
0842f8fe +0x10a:  mov    %edx,0x4(%esp)
0842f902 +0x10e:  mov    %eax,(%esp)
0842f905 +0x111:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842f90a +0x116:  lea    -0x74(%ebp),%eax
0842f90d +0x119:  mov    %eax,(%esp)
0842f910 +0x11c:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842f915 +0x121:  mov    %eax,(%esp)
0842f918 +0x124:  call   08452bac <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x57c2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x57c2
0842f91d +0x129:  mov    %eax,-0x24(%ebp)
0842f920 +0x12c:  mov    -0x24(%ebp),%eax
0842f923 +0x12f:  mov    %eax,(%esp)
0842f926 +0x132:  call   0822ab34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1de
0842f92b +0x137:  mov    -0x24(%ebp),%eax
0842f92e +0x13a:  add    $0x48,%eax
0842f931 +0x13d:  mov    %eax,(%esp)
0842f934 +0x140:  call   0822abac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x256>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x256
0842f939 +0x145:  mov    -0x24(%ebp),%eax
0842f93c +0x148:  add    $0x174,%eax
0842f941 +0x14d:  mov    %eax,(%esp)
0842f944 +0x150:  call   0822abac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x256>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x256
0842f949 +0x155:  mov    -0x24(%ebp),%eax
0842f94c +0x158:  add    $0x2a0,%eax
0842f951 +0x15d:  mov    %eax,(%esp)
0842f954 +0x160:  call   080e5f12 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x48>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x48
0842f959 +0x165:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842f95e +0x16a:  lea    -0x74(%ebp),%edx
0842f961 +0x16d:  mov    %edx,0x8(%esp)
0842f965 +0x171:  movl   $0x1,0x4(%esp)
0842f96d +0x179:  mov    %eax,(%esp)
0842f970 +0x17c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842f975 +0x181:  mov    $0x1,%ebx
0842f97a +0x186:  lea    -0x74(%ebp),%eax
0842f97d +0x189:  mov    %eax,(%esp)
0842f980 +0x18c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f985 +0x191:  jmp    0842fd35 <+0x541>
0842f98a +0x196:  mov    %edx,%ebx
0842f98c +0x198:  mov    %eax,%esi
0842f98e +0x19a:  lea    -0x74(%ebp),%eax
0842f991 +0x19d:  mov    %eax,(%esp)
0842f994 +0x1a0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842f999 +0x1a5:  mov    %esi,%eax
0842f99b +0x1a7:  mov    %ebx,%edx
0842f99d +0x1a9:  mov    %eax,(%esp)
0842f9a0 +0x1ac:  call   08ae3750 <_Unwind_Resume>
0842f9a5 +0x1b1:  mov    -0x34(%ebp),%eax
0842f9a8 +0x1b4:  mov    %eax,(%esp)
0842f9ab +0x1b7:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842f9b0 +0x1bc:  mov    %al,-0x29(%ebp)
0842f9b3 +0x1bf:  movzbl -0x29(%ebp),%eax
0842f9b7 +0x1c3:  xor    $0x1,%eax
0842f9ba +0x1c6:  test   %al,%al
0842f9bc +0x1c8:  je     0842fa19 <+0x225>
0842f9be +0x1ca:  mov    -0x30(%ebp),%eax
0842f9c1 +0x1cd:  mov    (%eax),%eax
0842f9c3 +0x1cf:  movl   $0x0,0x4(%esp)
0842f9cb +0x1d7:  mov    %eax,(%esp)
0842f9ce +0x1da:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842f9d3 +0x1df:  mov    %eax,%ebx
0842f9d5 +0x1e1:  movl   $0x5,0xc(%esp)
0842f9dd +0x1e9:  movl   $0x74dd,0x8(%esp)
0842f9e5 +0x1f1:  movl   $&_ZZN17DB_LoadGameOption8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842f9ed +0x1f9:  lea    -0x64(%ebp),%eax
0842f9f0 +0x1fc:  mov    %eax,(%esp)
0842f9f3 +0x1ff:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842f9f8 +0x204:  mov    %ebx,0x8(%esp)
0842f9fc +0x208:  movl   $"DB_LoadGameOption::dispatch, fetch ERROR m_id=%s",0x4(%esp)
0842fa04 +0x210:  lea    -0x64(%ebp),%eax
0842fa07 +0x213:  mov    %eax,(%esp)
0842fa0a +0x216:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842fa0f +0x21b:  mov    $0x0,%ebx
0842fa14 +0x220:  jmp    0842fd35 <+0x541>
0842fa19 +0x225:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842fa1e +0x22a:  movl   $0x74e1,0x8(%esp)
0842fa26 +0x232:  movl   $"DBThread.cpp",0x4(%esp)
0842fa2e +0x23a:  mov    %eax,(%esp)
0842fa31 +0x23d:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842fa36 +0x242:  movl   $0x1,0x8(%esp)
0842fa3e +0x24a:  mov    %eax,0x4(%esp)
0842fa42 +0x24e:  lea    -0x6c(%ebp),%eax
0842fa45 +0x251:  mov    %eax,(%esp)
0842fa48 +0x254:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842fa4d +0x259:  lea    -0x6c(%ebp),%eax
0842fa50 +0x25c:  mov    %eax,(%esp)
0842fa53 +0x25f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842fa58 +0x264:  movl   $0x12f,0x4(%esp)
0842fa60 +0x26c:  mov    %eax,(%esp)
0842fa63 +0x26f:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842fa68 +0x274:  lea    -0x6c(%ebp),%eax
0842fa6b +0x277:  mov    %eax,(%esp)
0842fa6e +0x27a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842fa73 +0x27f:  mov    0x10(%ebp),%edx
0842fa76 +0x282:  mov    %edx,0x4(%esp)
0842fa7a +0x286:  mov    %eax,(%esp)
0842fa7d +0x289:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842fa82 +0x28e:  lea    -0x6c(%ebp),%eax
0842fa85 +0x291:  mov    %eax,(%esp)
0842fa88 +0x294:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842fa8d +0x299:  mov    %eax,(%esp)
0842fa90 +0x29c:  call   08452bac <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x57c2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x57c2
0842fa95 +0x2a1:  mov    %eax,-0x28(%ebp)
0842fa98 +0x2a4:  mov    -0x28(%ebp),%eax
0842fa9b +0x2a7:  mov    %eax,(%esp)
0842fa9e +0x2aa:  call   0822ab34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1de
0842faa3 +0x2af:  mov    -0x28(%ebp),%eax
0842faa6 +0x2b2:  add    $0x48,%eax
0842faa9 +0x2b5:  mov    %eax,(%esp)
0842faac +0x2b8:  call   0822abac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x256>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x256
0842fab1 +0x2bd:  mov    -0x28(%ebp),%eax
0842fab4 +0x2c0:  add    $0x174,%eax
0842fab9 +0x2c5:  mov    %eax,(%esp)
0842fabc +0x2c8:  call   0822abac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x256>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x256
0842fac1 +0x2cd:  mov    -0x28(%ebp),%eax
0842fac4 +0x2d0:  add    $0x2a0,%eax
0842fac9 +0x2d5:  mov    %eax,(%esp)
0842facc +0x2d8:  call   080e5f12 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x48>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x48
0842fad1 +0x2dd:  lea    -0x358(%ebp),%edx
0842fad7 +0x2e3:  mov    $0x0,%eax
0842fadc +0x2e8:  mov    $0x18,%ecx
0842fae1 +0x2ed:  mov    %edx,%edi
0842fae3 +0x2ef:  rep stos %eax,%es:(%edi)
0842fae5 +0x2f1:  mov    %edi,%edx
0842fae7 +0x2f3:  mov    %ax,(%edx)
0842faea +0x2f6:  add    $0x2,%edx
0842faed +0x2f9:  movl   $0x62,0xc(%esp)
0842faf5 +0x301:  lea    -0x358(%ebp),%eax
0842fafb +0x307:  mov    %eax,0x8(%esp)
0842faff +0x30b:  movl   $0x0,0x4(%esp)
0842fb07 +0x313:  mov    -0x34(%ebp),%eax
0842fb0a +0x316:  mov    %eax,(%esp)
0842fb0d +0x319:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0842fb12 +0x31e:  mov    %al,-0x29(%ebp)
0842fb15 +0x321:  movzbl -0x29(%ebp),%eax
0842fb19 +0x325:  xor    $0x1,%eax
0842fb1c +0x328:  test   %al,%al
0842fb1e +0x32a:  je     0842fb7b <+0x387>
0842fb20 +0x32c:  mov    -0x30(%ebp),%eax
0842fb23 +0x32f:  mov    (%eax),%eax
0842fb25 +0x331:  movl   $0x0,0x4(%esp)
0842fb2d +0x339:  mov    %eax,(%esp)
0842fb30 +0x33c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842fb35 +0x341:  mov    %eax,%ebx
0842fb37 +0x343:  movl   $0x5,0xc(%esp)
0842fb3f +0x34b:  movl   $0x74f9,0x8(%esp)
0842fb47 +0x353:  movl   $&_ZZN17DB_LoadGameOption8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842fb4f +0x35b:  lea    -0x54(%ebp),%eax
0842fb52 +0x35e:  mov    %eax,(%esp)
0842fb55 +0x361:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842fb5a +0x366:  mov    %ebx,0x8(%esp)
0842fb5e +0x36a:  movl   $"DB_LoadGameOption, get_binary(0) ERROR m_id=%s",0x4(%esp)
0842fb66 +0x372:  lea    -0x54(%ebp),%eax
0842fb69 +0x375:  mov    %eax,(%esp)
0842fb6c +0x378:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842fb71 +0x37d:  mov    $0x0,%ebx
0842fb76 +0x382:  jmp    0842fd2a <+0x536>
0842fb7b +0x387:  movl   $0x0,0x4(%esp)
0842fb83 +0x38f:  mov    -0x34(%ebp),%eax
0842fb86 +0x392:  mov    %eax,(%esp)
0842fb89 +0x395:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0842fb8e +0x39a:  mov    %eax,-0x20(%ebp)
0842fb91 +0x39d:  movl   $0x48,-0x78(%ebp)
0842fb98 +0x3a4:  mov    -0x28(%ebp),%eax
0842fb9b +0x3a7:  mov    -0x20(%ebp),%edx
0842fb9e +0x3aa:  mov    %edx,0xc(%esp)
0842fba2 +0x3ae:  lea    -0x358(%ebp),%edx
0842fba8 +0x3b4:  mov    %edx,0x8(%esp)
0842fbac +0x3b8:  lea    -0x78(%ebp),%edx
0842fbaf +0x3bb:  mov    %edx,0x4(%esp)
0842fbb3 +0x3bf:  mov    %eax,(%esp)
0842fbb6 +0x3c2:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0842fbbb +0x3c7:  xor    $0x1,%eax
0842fbbe +0x3ca:  test   %al,%al
0842fbc0 +0x3cc:  je     0842fbcc <+0x3d8>
0842fbc2 +0x3ce:  mov    $0x0,%ebx
0842fbc7 +0x3d3:  jmp    0842fd2a <+0x536>
0842fbcc +0x3d8:  lea    -0x358(%ebp),%ebx
0842fbd2 +0x3de:  mov    $0x0,%eax
0842fbd7 +0x3e3:  mov    $0xb7,%edx
0842fbdc +0x3e8:  mov    %ebx,%edi
0842fbde +0x3ea:  mov    %edx,%ecx
0842fbe0 +0x3ec:  rep stos %eax,%es:(%edi)
0842fbe2 +0x3ee:  movl   $0x2dc,0xc(%esp)
0842fbea +0x3f6:  lea    -0x358(%ebp),%eax
0842fbf0 +0x3fc:  mov    %eax,0x8(%esp)
0842fbf4 +0x400:  movl   $0x1,0x4(%esp)
0842fbfc +0x408:  mov    -0x34(%ebp),%eax
0842fbff +0x40b:  mov    %eax,(%esp)
0842fc02 +0x40e:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0842fc07 +0x413:  mov    %al,-0x29(%ebp)
0842fc0a +0x416:  movzbl -0x29(%ebp),%eax
0842fc0e +0x41a:  xor    $0x1,%eax
0842fc11 +0x41d:  test   %al,%al
0842fc13 +0x41f:  je     0842fc5e <+0x46a>
0842fc15 +0x421:  mov    -0x30(%ebp),%eax
0842fc18 +0x424:  mov    (%eax),%ebx
0842fc1a +0x426:  movl   $0x5,0xc(%esp)
0842fc22 +0x42e:  movl   $0x7515,0x8(%esp)
0842fc2a +0x436:  movl   $&_ZZN17DB_LoadGameOption8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
0842fc32 +0x43e:  lea    -0x44(%ebp),%eax
0842fc35 +0x441:  mov    %eax,(%esp)
0842fc38 +0x444:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0842fc3d +0x449:  mov    %ebx,0x8(%esp)
0842fc41 +0x44d:  movl   $"DB_LoadGameOption, get_binary(1) ERROR m_id=%u",0x4(%esp)
0842fc49 +0x455:  lea    -0x44(%ebp),%eax
0842fc4c +0x458:  mov    %eax,(%esp)
0842fc4f +0x45b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0842fc54 +0x460:  mov    $0x0,%ebx
0842fc59 +0x465:  jmp    0842fd2a <+0x536>
0842fc5e +0x46a:  movl   $0x1,0x4(%esp)
0842fc66 +0x472:  mov    -0x34(%ebp),%eax
0842fc69 +0x475:  mov    %eax,(%esp)
0842fc6c +0x478:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0842fc71 +0x47d:  mov    %eax,-0x1c(%ebp)
0842fc74 +0x480:  movl   $0x258,-0x7c(%ebp)
0842fc7b +0x487:  mov    -0x28(%ebp),%eax
0842fc7e +0x48a:  add    $0x48,%eax
0842fc81 +0x48d:  mov    -0x1c(%ebp),%edx
0842fc84 +0x490:  mov    %edx,0xc(%esp)
0842fc88 +0x494:  lea    -0x358(%ebp),%edx
0842fc8e +0x49a:  mov    %edx,0x8(%esp)
0842fc92 +0x49e:  lea    -0x7c(%ebp),%edx
0842fc95 +0x4a1:  mov    %edx,0x4(%esp)
0842fc99 +0x4a5:  mov    %eax,(%esp)
0842fc9c +0x4a8:  call   086b2102 <_Z14uncompress_zipPcRjPKcj>  ; uncompress_zip(char*, unsigned int&, char const*, unsigned int)
0842fca1 +0x4ad:  xor    $0x1,%eax
0842fca4 +0x4b0:  test   %al,%al
0842fca6 +0x4b2:  je     0842fcaf <+0x4bb>
0842fca8 +0x4b4:  mov    $0x0,%ebx
0842fcad +0x4b9:  jmp    0842fd2a <+0x536>
0842fcaf +0x4bb:  mov    -0x28(%ebp),%eax
0842fcb2 +0x4be:  add    $0x2a0,%eax
0842fcb7 +0x4c3:  movl   $0x16,0x10(%esp)
0842fcbf +0x4cb:  movl   $0x210,0xc(%esp)
0842fcc7 +0x4d3:  mov    %eax,0x8(%esp)
0842fccb +0x4d7:  movl   $0x2,0x4(%esp)
0842fcd3 +0x4df:  mov    -0x34(%ebp),%eax
0842fcd6 +0x4e2:  mov    %eax,(%esp)
0842fcd9 +0x4e5:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0842fcde +0x4ea:  xor    $0x1,%eax
0842fce1 +0x4ed:  test   %al,%al
0842fce3 +0x4ef:  je     0842fcec <+0x4f8>
0842fce5 +0x4f1:  mov    $0x0,%ebx
0842fcea +0x4f6:  jmp    0842fd2a <+0x536>
0842fcec +0x4f8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842fcf1 +0x4fd:  lea    -0x6c(%ebp),%edx
0842fcf4 +0x500:  mov    %edx,0x8(%esp)
0842fcf8 +0x504:  movl   $0x1,0x4(%esp)
0842fd00 +0x50c:  mov    %eax,(%esp)
0842fd03 +0x50f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842fd08 +0x514:  mov    $0x1,%ebx
0842fd0d +0x519:  jmp    0842fd2a <+0x536>
0842fd0f +0x51b:  mov    %edx,%ebx
0842fd11 +0x51d:  mov    %eax,%esi
0842fd13 +0x51f:  lea    -0x6c(%ebp),%eax
0842fd16 +0x522:  mov    %eax,(%esp)
0842fd19 +0x525:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842fd1e +0x52a:  mov    %esi,%eax
0842fd20 +0x52c:  mov    %ebx,%edx
0842fd22 +0x52e:  mov    %eax,(%esp)
0842fd25 +0x531:  call   08ae3750 <_Unwind_Resume>
0842fd2a +0x536:  lea    -0x6c(%ebp),%eax
0842fd2d +0x539:  mov    %eax,(%esp)
0842fd30 +0x53c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842fd35 +0x541:  mov    %ebx,%eax
0842fd37 +0x543:  add    $0x36c,%esp
0842fd3d +0x549:  pop    %ebx
0842fd3e +0x54a:  pop    %esi
0842fd3f +0x54b:  pop    %edi
0842fd40 +0x54c:  pop    %ebp
0842fd41 +0x54d:  ret
```

## 反编译 C

```c
// DB_LoadGameOption::dispatch @ 0x842f7f4

/* DB_LoadGameOption::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadGameOption::dispatch(DB_LoadGameOption *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  char *pcVar8;
  byte bVar9;
  char local_35c [732];
  uint local_80 [2];
  CStreamGuard local_78 [8];
  CStreamGuard local_70 [8];
  cMyTrace local_68 [16];
  cMyTrace local_58 [16];
  cMyTrace local_48 [16];
  MySQL *local_38;
  SIG_REQ_LOAD_GAME_OPTION *local_34;
  char local_2d;
  SIG_LOAD_GAME_OPTION *local_2c;
  SIG_LOAD_GAME_OPTION *local_28;
  uint local_24;
  uint local_20;
  
  bVar9 = 0;
  local_38 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_34 = Stream::GetOutBuffer<SIG_REQ_LOAD_GAME_OPTION>(param_3);
  uVar3 = NumberToString(*(uint *)local_34,0);
  uVar4 = get_member_game_option();
  MySQL::set_query(local_38,"seLect option_1,option_3,shortcut_emoticon from %s where m_id = %s",
                   uVar4,uVar3);
  cVar2 = MySQL::exec(local_38,true);
  if (cVar2 == '\x01') {
    iVar5 = MySQL::get_n_rows(local_38);
    if (iVar5 == 0) {
      pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x74c2);
      CStreamGuard::CStreamGuard(local_78,pSVar6,true);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
                    /* try { // try from 0842f8eb to 0842f974 has its CatchHandler @ 0842f98a */
      CStreamGuard::operator<<(pCVar7,0x12f);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_78);
      CStreamGuard::operator<<(pCVar7,param_2);
      pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_78);
      local_28 = CStreamGuard::GetInBuffer<SIG_LOAD_GAME_OPTION>(pCVar7);
      CETCOption::clear((CETCOption *)local_28);
      CQuickChattingOption::clear((CQuickChattingOption *)(local_28 + 0x48));
      CQuickChattingOption::clear((CQuickChattingOption *)(local_28 + 0x174));
      CChattingEmoticonConfig::clear((CChattingEmoticonConfig *)(local_28 + 0x2a0));
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_78);
      uVar3 = 1;
      CStreamGuard::~CStreamGuard(local_78);
    }
    else {
      local_2d = MySQL::fetch(local_38);
      if (local_2d == '\x01') {
        pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x74e1);
        CStreamGuard::CStreamGuard(local_70,pSVar6,true);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_70);
                    /* try { // try from 0842fa63 to 0842fd07 has its CatchHandler @ 0842fd0f */
        CStreamGuard::operator<<(pCVar7,0x12f);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_70);
        CStreamGuard::operator<<(pCVar7,param_2);
        pCVar7 = (CStreamGuard *)CStreamGuard::operator->(local_70);
        local_2c = CStreamGuard::GetInBuffer<SIG_LOAD_GAME_OPTION>(pCVar7);
        CETCOption::clear((CETCOption *)local_2c);
        CQuickChattingOption::clear((CQuickChattingOption *)(local_2c + 0x48));
        CQuickChattingOption::clear((CQuickChattingOption *)(local_2c + 0x174));
        CChattingEmoticonConfig::clear((CChattingEmoticonConfig *)(local_2c + 0x2a0));
        pcVar8 = local_35c;
        for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
        }
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        local_2d = MySQL::get_binary(local_38,0,local_35c,0x62);
        if (local_2d == '\x01') {
          local_24 = MySQL::get_binary_length(local_38,0);
          local_80[1] = 0x48;
          cVar2 = uncompress_zip((char *)local_2c,local_80 + 1,local_35c,local_24);
          if (cVar2 == '\x01') {
            pcVar8 = local_35c;
            for (iVar5 = 0xb7; iVar5 != 0; iVar5 = iVar5 + -1) {
              pcVar8[0] = '\0';
              pcVar8[1] = '\0';
              pcVar8[2] = '\0';
              pcVar8[3] = '\0';
              pcVar8 = pcVar8 + ((uint)bVar9 * -2 + 1) * 4;
            }
            local_2d = MySQL::get_binary(local_38,1,local_35c,0x2dc);
            if (local_2d == '\x01') {
              local_20 = MySQL::get_binary_length(local_38,1);
              local_80[0] = 600;
              cVar2 = uncompress_zip((char *)(local_2c + 0x48),local_80,local_35c,local_20);
              if (cVar2 == '\x01') {
                cVar2 = get_compressed_blob_data(local_38,2,(char *)(local_2c + 0x2a0),0x210,0x16);
                if (cVar2 == '\x01') {
                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_70);
                  uVar3 = 1;
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar1 = *(uint *)local_34;
              cMyTrace::cMyTrace(local_48,
                                 "virtual bool DB_LoadGameOption::dispatch(int, int, Stream*)",
                                 0x7515,5);
              cMyTrace::operator()(local_48,"DB_LoadGameOption, get_binary(1) ERROR m_id=%u",uVar1);
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = NumberToString(*(uint *)local_34,0);
          cMyTrace::cMyTrace(local_58,"virtual bool DB_LoadGameOption::dispatch(int, int, Stream*)",
                             0x74f9,5);
          cMyTrace::operator()(local_58,"DB_LoadGameOption, get_binary(0) ERROR m_id=%s",uVar3);
          uVar3 = 0;
        }
        CStreamGuard::~CStreamGuard(local_70);
      }
      else {
        uVar3 = NumberToString(*(uint *)local_34,0);
        cMyTrace::cMyTrace(local_68,"virtual bool DB_LoadGameOption::dispatch(int, int, Stream*)",
                           0x74dd,5);
        cMyTrace::operator()(local_68,"DB_LoadGameOption::dispatch, fetch ERROR m_id=%s",uVar3);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
