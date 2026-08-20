# load_list

`_ZN9QuestList9load_listEv`

`QuestList::load_list()`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08353d98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08353d98  _ZN9QuestList9load_listEv
#           QuestList::load_list()
# range [0x08353d98, 0x08354f01]
08353d98 +0x0000:  push   %ebp
08353d99 +0x0001:  mov    %esp,%ebp
08353d9b +0x0003:  push   %edi
08353d9c +0x0004:  push   %esi
08353d9d +0x0005:  push   %ebx
08353d9e +0x0006:  sub    $0x76c,%esp
08353da4 +0x000c:  lea    -0x40c(%ebp),%eax
08353daa +0x0012:  mov    %eax,(%esp)
08353dad +0x0015:  call   082b3cd8 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5bd3>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5bd3
08353db2 +0x001a:  lea    -0x734(%ebp),%eax
08353db8 +0x0020:  mov    %eax,(%esp)
08353dbb +0x0023:  call   0836e4e2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x84ae>  ; global constructors keyed to CServerEvent::m_nExpRate+0x84ae
08353dc0 +0x0028:  movl   $0x0,-0x410(%ebp)
08353dca +0x0032:  lea    -0x414(%ebp),%eax
08353dd0 +0x0038:  mov    %eax,(%esp)
08353dd3 +0x003b:  call   083912c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d66
08353dd8 +0x0040:  movl   $0x0,-0x40(%ebp)
08353ddf +0x0047:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08353de4 +0x004c:  mov    %eax,(%esp)
08353de7 +0x004f:  call   086225b6 <_ZN11sync_script11CSyncScript23truncate_quest_categoryEv>  ; sync_script::CSyncScript::truncate_quest_category()
08353dec +0x0054:  lea    -0x73c(%ebp),%eax
08353df2 +0x005a:  movl   $&g_questScriptFileList,0x4(%esp)
08353dfa +0x0062:  mov    %eax,(%esp)
08353dfd +0x0065:  call   080e60f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x228>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x228
08353e02 +0x006a:  sub    $0x4,%esp
08353e05 +0x006d:  mov    -0x73c(%ebp),%eax
08353e0b +0x0073:  mov    %eax,-0x40c(%ebp)
08353e11 +0x0079:  jmp    08354c2b <+0xe93>
08353e16 +0x007e:  lea    -0x40c(%ebp),%eax
08353e1c +0x0084:  mov    %eax,(%esp)
08353e1f +0x0087:  call   080e61b8 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x2ee>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x2ee
08353e24 +0x008c:  add    $0x4,%eax
08353e27 +0x008f:  mov    %eax,(%esp)
08353e2a +0x0092:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08353e2f +0x0097:  mov    %eax,-0x44(%ebp)
08353e32 +0x009a:  cmpl   $0x0,-0x44(%ebp)
08353e36 +0x009e:  je     08354c66 <+0xece>
08353e3c +0x00a4:  mov    -0x44(%ebp),%eax
08353e3f +0x00a7:  mov    %eax,0x4(%esp)
08353e43 +0x00ab:  lea    -0x734(%ebp),%eax
08353e49 +0x00b1:  mov    %eax,(%esp)
08353e4c +0x00b4:  call   08a61813 <_Z17importQuestScriptP11QuestScriptPKc>  ; importQuestScript(QuestScript*, char const*)
08353e51 +0x00b9:  xor    $0x1,%eax
08353e54 +0x00bc:  test   %al,%al
08353e56 +0x00be:  je     08353e95 <+0xfd>
08353e58 +0x00c0:  mov    -0x44(%ebp),%eax
08353e5b +0x00c3:  mov    %eax,0x14(%esp)
08353e5f +0x00c7:  movl   $"Quest Script Error: %s\n",0x10(%esp)
08353e67 +0x00cf:  movl   $0x1357,0xc(%esp)
08353e6f +0x00d7:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08353e77 +0x00df:  movl   $"data_manager.cpp",0x4(%esp)
08353e7f +0x00e7:  movl   $0x1,(%esp)
08353e86 +0x00ee:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08353e8b +0x00f3:  mov    $0x0,%ebx
08353e90 +0x00f8:  jmp    08354ee6 <+0x114e>
08353e95 +0x00fd:  lea    -0x734(%ebp),%eax
08353e9b +0x0103:  add    $0x2dc,%eax
08353ea0 +0x0108:  mov    %eax,(%esp)
08353ea3 +0x010b:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08353ea8 +0x0110:  test   %eax,%eax
08353eaa +0x0112:  setne  %al
08353ead +0x0115:  test   %al,%al
08353eaf +0x0117:  je     08353ece <+0x136>
08353eb1 +0x0119:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
08353eb6 +0x011e:  lea    -0x734(%ebp),%edx
08353ebc +0x0124:  add    $0x2dc,%edx
08353ec2 +0x012a:  mov    %edx,0x4(%esp)
08353ec6 +0x012e:  mov    %eax,(%esp)
08353ec9 +0x0131:  call   08125c3c <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE>  ; CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule> > const&)
08353ece +0x0136:  lea    -0x734(%ebp),%eax
08353ed4 +0x013c:  add    $0x144,%eax
08353ed9 +0x0141:  mov    %eax,(%esp)
08353edc +0x0144:  call   08390ebc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2095c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2095c
08353ee1 +0x0149:  xor    $0x1,%eax
08353ee4 +0x014c:  test   %al,%al
08353ee6 +0x014e:  je     0835408a <+0x2f2>
08353eec +0x0154:  lea    -0x73c(%ebp),%eax
08353ef2 +0x015a:  lea    -0x734(%ebp),%edx
08353ef8 +0x0160:  add    $0x144,%edx
08353efe +0x0166:  mov    %edx,0x4(%esp)
08353f02 +0x016a:  mov    %eax,(%esp)
08353f05 +0x016d:  call   083912d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d74>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d74
08353f0a +0x0172:  sub    $0x4,%esp
08353f0d +0x0175:  mov    -0x73c(%ebp),%eax
08353f13 +0x017b:  mov    %eax,-0x414(%ebp)
08353f19 +0x0181:  jmp    08354049 <+0x2b1>
08353f1e +0x0186:  lea    -0x414(%ebp),%eax
08353f24 +0x018c:  mov    %eax,(%esp)
08353f27 +0x018f:  call   0839137e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20e1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20e1e
08353f2c +0x0194:  mov    0x10(%eax),%ebx
08353f2f +0x0197:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08353f34 +0x019c:  mov    %ebx,0x4(%esp)
08353f38 +0x01a0:  mov    %eax,(%esp)
08353f3b +0x01a3:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08353f40 +0x01a8:  mov    %eax,-0x40(%ebp)
08353f43 +0x01ab:  cmpl   $0x0,-0x40(%ebp)
08353f47 +0x01af:  jne    08353f9b <+0x203>
08353f49 +0x01b1:  lea    -0x414(%ebp),%eax
08353f4f +0x01b7:  mov    %eax,(%esp)
08353f52 +0x01ba:  call   0839137e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20e1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20e1e
08353f57 +0x01bf:  mov    0x10(%eax),%eax
08353f5a +0x01c2:  mov    %eax,0x18(%esp)
08353f5e +0x01c6:  mov    -0x44(%ebp),%eax
08353f61 +0x01c9:  mov    %eax,0x14(%esp)
08353f65 +0x01cd:  movl   $"Quest Script Error: %s - Monster Kill Item %d is not Exist\n",0x10(%esp)
08353f6d +0x01d5:  movl   $0x136f,0xc(%esp)
08353f75 +0x01dd:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08353f7d +0x01e5:  movl   $"data_manager.cpp",0x4(%esp)
08353f85 +0x01ed:  movl   $0x1,(%esp)
08353f8c +0x01f4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08353f91 +0x01f9:  mov    $0x0,%ebx
08353f96 +0x01fe:  jmp    08354ee6 <+0x114e>
08353f9b +0x0203:  mov    -0x40(%ebp),%eax
08353f9e +0x0206:  mov    %eax,(%esp)
08353fa1 +0x0209:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08353fa6 +0x020e:  xor    $0x1,%eax
08353fa9 +0x0211:  test   %al,%al
08353fab +0x0213:  jne    08353fc4 <+0x22c>
08353fad +0x0215:  mov    -0x40(%ebp),%eax
08353fb0 +0x0218:  mov    (%eax),%eax
08353fb2 +0x021a:  add    $0xc,%eax
08353fb5 +0x021d:  mov    (%eax),%edx
08353fb7 +0x021f:  mov    -0x40(%ebp),%eax
08353fba +0x0222:  mov    %eax,(%esp)
08353fbd +0x0225:  call   *%edx
08353fbf +0x0227:  cmp    $0x8,%eax
08353fc2 +0x022a:  je     08353fcb <+0x233>
08353fc4 +0x022c:  mov    $0x1,%eax
08353fc9 +0x0231:  jmp    08353fd0 <+0x238>
08353fcb +0x0233:  mov    $0x0,%eax
08353fd0 +0x0238:  test   %al,%al
08353fd2 +0x023a:  je     08354026 <+0x28e>
08353fd4 +0x023c:  lea    -0x414(%ebp),%eax
08353fda +0x0242:  mov    %eax,(%esp)
08353fdd +0x0245:  call   0839137e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20e1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20e1e
08353fe2 +0x024a:  mov    0x10(%eax),%eax
08353fe5 +0x024d:  mov    %eax,0x18(%esp)
08353fe9 +0x0251:  mov    -0x44(%ebp),%eax
08353fec +0x0254:  mov    %eax,0x14(%esp)
08353ff0 +0x0258:  movl   $"Quest Script Error: %s - Monster Kill Item %d is not Quest Item\n",0x10(%esp)
08353ff8 +0x0260:  movl   $0x1375,0xc(%esp)
08354000 +0x0268:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354008 +0x0270:  movl   $"data_manager.cpp",0x4(%esp)
08354010 +0x0278:  movl   $0x1,(%esp)
08354017 +0x027f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0835401c +0x0284:  mov    $0x0,%ebx
08354021 +0x0289:  jmp    08354ee6 <+0x114e>
08354026 +0x028e:  lea    -0x400(%ebp),%eax
0835402c +0x0294:  movl   $0x0,0x8(%esp)
08354034 +0x029c:  lea    -0x414(%ebp),%edx
0835403a +0x02a2:  mov    %edx,0x4(%esp)
0835403e +0x02a6:  mov    %eax,(%esp)
08354041 +0x02a9:  call   0839134a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20dea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20dea
08354046 +0x02ae:  sub    $0x4,%esp
08354049 +0x02b1:  lea    -0x404(%ebp),%eax
0835404f +0x02b7:  lea    -0x734(%ebp),%edx
08354055 +0x02bd:  add    $0x144,%edx
0835405b +0x02c3:  mov    %edx,0x4(%esp)
0835405f +0x02c7:  mov    %eax,(%esp)
08354062 +0x02ca:  call   083912f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20d98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20d98
08354067 +0x02cf:  sub    $0x4,%esp
0835406a +0x02d2:  lea    -0x404(%ebp),%eax
08354070 +0x02d8:  mov    %eax,0x4(%esp)
08354074 +0x02dc:  lea    -0x414(%ebp),%eax
0835407a +0x02e2:  mov    %eax,(%esp)
0835407d +0x02e5:  call   0839131e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20dbe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20dbe
08354082 +0x02ea:  test   %al,%al
08354084 +0x02ec:  jne    08353f1e <+0x186>
0835408a +0x02f2:  mov    -0x5bc(%ebp),%eax
08354090 +0x02f8:  cmp    $0x2,%eax
08354093 +0x02fb:  je     083540a4 <+0x30c>
08354095 +0x02fd:  mov    -0x5bc(%ebp),%eax
0835409b +0x0303:  cmp    $0x6,%eax
0835409e +0x0306:  jne    08354400 <+0x668>
083540a4 +0x030c:  movl   $0x4,-0x3c(%ebp)
083540ab +0x0313:  mov    -0x5bc(%ebp),%eax
083540b1 +0x0319:  cmp    $0x6,%eax
083540b4 +0x031c:  jne    083540bd <+0x325>
083540b6 +0x031e:  movl   $0x5,-0x3c(%ebp)
083540bd +0x0325:  lea    -0x734(%ebp),%eax
083540c3 +0x032b:  add    $0x180,%eax
083540c8 +0x0330:  mov    %eax,(%esp)
083540cb +0x0333:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083540d0 +0x0338:  mov    -0x3c(%ebp),%ecx
083540d3 +0x033b:  mov    $0x0,%edx
083540d8 +0x0340:  div    %ecx
083540da +0x0342:  mov    %edx,%eax
083540dc +0x0344:  test   %eax,%eax
083540de +0x0346:  jne    0835410c <+0x374>
083540e0 +0x0348:  lea    -0x734(%ebp),%eax
083540e6 +0x034e:  add    $0x180,%eax
083540eb +0x0353:  mov    %eax,(%esp)
083540ee +0x0356:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083540f3 +0x035b:  mov    -0x3c(%ebp),%edx
083540f6 +0x035e:  mov    %edx,-0x74c(%ebp)
083540fc +0x0364:  mov    $0x0,%edx
08354101 +0x0369:  divl   -0x74c(%ebp)
08354107 +0x036f:  cmp    $0x3,%eax
0835410a +0x0372:  jbe    08354113 <+0x37b>
0835410c +0x0374:  mov    $0x1,%eax
08354111 +0x0379:  jmp    08354118 <+0x380>
08354113 +0x037b:  mov    $0x0,%eax
08354118 +0x0380:  test   %al,%al
0835411a +0x0382:  je     0835417a <+0x3e2>
0835411c +0x0384:  lea    -0x734(%ebp),%eax
08354122 +0x038a:  add    $0x180,%eax
08354127 +0x038f:  mov    %eax,(%esp)
0835412a +0x0392:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0835412f +0x0397:  mov    -0x5bc(%ebp),%edx
08354135 +0x039d:  mov    %eax,0x1c(%esp)
08354139 +0x03a1:  mov    %edx,0x18(%esp)
0835413d +0x03a5:  mov    -0x44(%ebp),%eax
08354140 +0x03a8:  mov    %eax,0x14(%esp)
08354144 +0x03ac:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n",0x10(%esp)
0835414c +0x03b4:  movl   $0x1383,0xc(%esp)
08354154 +0x03bc:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
0835415c +0x03c4:  movl   $"data_manager.cpp",0x4(%esp)
08354164 +0x03cc:  movl   $0x1,(%esp)
0835416b +0x03d3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354170 +0x03d8:  mov    $0x0,%ebx
08354175 +0x03dd:  jmp    08354ee6 <+0x114e>
0835417a +0x03e2:  lea    -0x3fc(%ebp),%eax
08354180 +0x03e8:  lea    -0x734(%ebp),%edx
08354186 +0x03ee:  add    $0x180,%edx
0835418c +0x03f4:  mov    %edx,0x4(%esp)
08354190 +0x03f8:  mov    %eax,(%esp)
08354193 +0x03fb:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08354198 +0x0400:  sub    $0x4,%esp
0835419b +0x0403:  lea    -0x3fc(%ebp),%eax
083541a1 +0x0409:  mov    %eax,0x4(%esp)
083541a5 +0x040d:  lea    -0x418(%ebp),%eax
083541ab +0x0413:  mov    %eax,(%esp)
083541ae +0x0416:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
083541b3 +0x041b:  lea    -0x3f8(%ebp),%eax
083541b9 +0x0421:  lea    -0x734(%ebp),%edx
083541bf +0x0427:  add    $0x180,%edx
083541c5 +0x042d:  mov    %edx,0x4(%esp)
083541c9 +0x0431:  mov    %eax,(%esp)
083541cc +0x0434:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
083541d1 +0x0439:  sub    $0x4,%esp
083541d4 +0x043c:  lea    -0x3f8(%ebp),%eax
083541da +0x0442:  mov    %eax,0x4(%esp)
083541de +0x0446:  lea    -0x41c(%ebp),%eax
083541e4 +0x044c:  mov    %eax,(%esp)
083541e7 +0x044f:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
083541ec +0x0454:  movl   $0x0,-0x422(%ebp)
083541f6 +0x045e:  movw   $0x0,-0x41e(%ebp)
083541ff +0x0467:  jmp    083543db <+0x643>
08354204 +0x046c:  lea    -0x3f4(%ebp),%eax
0835420a +0x0472:  movl   $0x0,0x8(%esp)
08354212 +0x047a:  lea    -0x418(%ebp),%edx
08354218 +0x0480:  mov    %edx,0x4(%esp)
0835421c +0x0484:  mov    %eax,(%esp)
0835421f +0x0487:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08354224 +0x048c:  sub    $0x4,%esp
08354227 +0x048f:  lea    -0x3f4(%ebp),%eax
0835422d +0x0495:  mov    %eax,(%esp)
08354230 +0x0498:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08354235 +0x049d:  mov    (%eax),%eax
08354237 +0x049f:  mov    %eax,-0x38(%ebp)
0835423a +0x04a2:  lea    -0x3f0(%ebp),%eax
08354240 +0x04a8:  movl   $0x0,0x8(%esp)
08354248 +0x04b0:  lea    -0x418(%ebp),%edx
0835424e +0x04b6:  mov    %edx,0x4(%esp)
08354252 +0x04ba:  mov    %eax,(%esp)
08354255 +0x04bd:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0835425a +0x04c2:  sub    $0x4,%esp
0835425d +0x04c5:  lea    -0x3f0(%ebp),%eax
08354263 +0x04cb:  mov    %eax,(%esp)
08354266 +0x04ce:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0835426b +0x04d3:  mov    (%eax),%eax
0835426d +0x04d5:  mov    %eax,-0x34(%ebp)
08354270 +0x04d8:  lea    -0x3ec(%ebp),%eax
08354276 +0x04de:  movl   $0x0,0x8(%esp)
0835427e +0x04e6:  lea    -0x418(%ebp),%edx
08354284 +0x04ec:  mov    %edx,0x4(%esp)
08354288 +0x04f0:  mov    %eax,(%esp)
0835428b +0x04f3:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08354290 +0x04f8:  sub    $0x4,%esp
08354293 +0x04fb:  lea    -0x3ec(%ebp),%eax
08354299 +0x0501:  mov    %eax,(%esp)
0835429c +0x0504:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083542a1 +0x0509:  mov    (%eax),%eax
083542a3 +0x050b:  mov    %eax,-0x30(%ebp)
083542a6 +0x050e:  mov    -0x5bc(%ebp),%eax
083542ac +0x0514:  cmp    $0x6,%eax
083542af +0x0517:  jne    0835434e <+0x5b6>
083542b5 +0x051d:  lea    -0x3e8(%ebp),%eax
083542bb +0x0523:  movl   $0x0,0x8(%esp)
083542c3 +0x052b:  lea    -0x418(%ebp),%edx
083542c9 +0x0531:  mov    %edx,0x4(%esp)
083542cd +0x0535:  mov    %eax,(%esp)
083542d0 +0x0538:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
083542d5 +0x053d:  sub    $0x4,%esp
083542d8 +0x0540:  lea    -0x3e8(%ebp),%eax
083542de +0x0546:  mov    %eax,(%esp)
083542e1 +0x0549:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
083542e6 +0x054e:  mov    (%eax),%eax
083542e8 +0x0550:  mov    %eax,-0x28(%ebp)
083542eb +0x0553:  mov    -0x28(%ebp),%eax
083542ee +0x0556:  cmp    $0xa,%eax
083542f1 +0x0559:  ja     08354309 <+0x571>
083542f3 +0x055b:  mov    $0x1,%edx
083542f8 +0x0560:  mov    %edx,%ebx
083542fa +0x0562:  mov    %eax,%ecx
083542fc +0x0564:  shl    %cl,%ebx
083542fe +0x0566:  mov    %ebx,%eax
08354300 +0x0568:  and    $0x40e,%eax
08354305 +0x056d:  test   %eax,%eax
08354307 +0x056f:  jne    0835434d <+0x5b5>
08354309 +0x0571:  mov    -0x28(%ebp),%eax
0835430c +0x0574:  mov    %eax,0x18(%esp)
08354310 +0x0578:  mov    -0x44(%ebp),%eax
08354313 +0x057b:  mov    %eax,0x14(%esp)
08354317 +0x057f:  movl   $"Quest Script Error: %s - Unknown enemy type(%d)\n",0x10(%esp)
0835431f +0x0587:  movl   $0x139d,0xc(%esp)
08354327 +0x058f:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
0835432f +0x0597:  movl   $"data_manager.cpp",0x4(%esp)
08354337 +0x059f:  movl   $0x1,(%esp)
0835433e +0x05a6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354343 +0x05ab:  mov    $0x0,%ebx
08354348 +0x05b0:  jmp    08354ee6 <+0x114e>
0835434d +0x05b5:  nop
0835434e +0x05b6:  lea    -0x3e4(%ebp),%eax
08354354 +0x05bc:  movl   $0x0,0x8(%esp)
0835435c +0x05c4:  lea    -0x418(%ebp),%edx
08354362 +0x05ca:  mov    %edx,0x4(%esp)
08354366 +0x05ce:  mov    %eax,(%esp)
08354369 +0x05d1:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0835436e +0x05d6:  sub    $0x4,%esp
08354371 +0x05d9:  lea    -0x3e4(%ebp),%eax
08354377 +0x05df:  mov    %eax,(%esp)
0835437a +0x05e2:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0835437f +0x05e7:  mov    (%eax),%eax
08354381 +0x05e9:  mov    %eax,-0x2c(%ebp)
08354384 +0x05ec:  cmpl   $0x1ff,-0x2c(%ebp)
0835438b +0x05f3:  jle    083543db <+0x643>
0835438d +0x05f5:  mov    -0x5bc(%ebp),%eax
08354393 +0x05fb:  mov    -0x2c(%ebp),%edx
08354396 +0x05fe:  mov    %edx,0x1c(%esp)
0835439a +0x0602:  mov    %eax,0x18(%esp)
0835439e +0x0606:  mov    -0x44(%ebp),%eax
083543a1 +0x0609:  mov    %eax,0x14(%esp)
083543a5 +0x060d:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Trigger Size is Wrong(%d)\n",0x10(%esp)
083543ad +0x0615:  movl   $0x13a4,0xc(%esp)
083543b5 +0x061d:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
083543bd +0x0625:  movl   $"data_manager.cpp",0x4(%esp)
083543c5 +0x062d:  movl   $0x1,(%esp)
083543cc +0x0634:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083543d1 +0x0639:  mov    $0x0,%ebx
083543d6 +0x063e:  jmp    08354ee6 <+0x114e>
083543db +0x0643:  lea    -0x41c(%ebp),%eax
083543e1 +0x0649:  mov    %eax,0x4(%esp)
083543e5 +0x064d:  lea    -0x418(%ebp),%eax
083543eb +0x0653:  mov    %eax,(%esp)
083543ee +0x0656:  call   080f9a26 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x232>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x232
083543f3 +0x065b:  test   %al,%al
083543f5 +0x065d:  jne    08354204 <+0x46c>
083543fb +0x0663:  jmp    083546fb <+0x963>
08354400 +0x0668:  mov    -0x5bc(%ebp),%eax
08354406 +0x066e:  test   %eax,%eax
08354408 +0x0670:  jne    08354486 <+0x6ee>
0835440a +0x0672:  lea    -0x734(%ebp),%eax
08354410 +0x0678:  add    $0x180,%eax
08354415 +0x067d:  mov    %eax,(%esp)
08354418 +0x0680:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0835441d +0x0685:  and    $0x1,%eax
08354420 +0x0688:  test   %al,%al
08354422 +0x068a:  je     083546fb <+0x963>
08354428 +0x0690:  lea    -0x734(%ebp),%eax
0835442e +0x0696:  add    $0x180,%eax
08354433 +0x069b:  mov    %eax,(%esp)
08354436 +0x069e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0835443b +0x06a3:  mov    -0x5bc(%ebp),%edx
08354441 +0x06a9:  mov    %eax,0x1c(%esp)
08354445 +0x06ad:  mov    %edx,0x18(%esp)
08354449 +0x06b1:  mov    -0x44(%ebp),%eax
0835444c +0x06b4:  mov    %eax,0x14(%esp)
08354450 +0x06b8:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n",0x10(%esp)
08354458 +0x06c0:  movl   $0x13ba,0xc(%esp)
08354460 +0x06c8:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354468 +0x06d0:  movl   $"data_manager.cpp",0x4(%esp)
08354470 +0x06d8:  movl   $0x1,(%esp)
08354477 +0x06df:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0835447c +0x06e4:  mov    $0x0,%ebx
08354481 +0x06e9:  jmp    08354ee6 <+0x114e>
08354486 +0x06ee:  mov    -0x5bc(%ebp),%eax
0835448c +0x06f4:  cmp    $0x1,%eax
0835448f +0x06f7:  jne    083546fb <+0x963>
08354495 +0x06fd:  mov    -0x5b8(%ebp),%eax
0835449b +0x0703:  cmp    $0x4,%eax
0835449e +0x0706:  jne    0835451f <+0x787>
083544a0 +0x0708:  lea    -0x734(%ebp),%eax
083544a6 +0x070e:  add    $0x180,%eax
083544ab +0x0713:  mov    %eax,(%esp)
083544ae +0x0716:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083544b3 +0x071b:  cmp    $0x2,%eax
083544b6 +0x071e:  setne  %al
083544b9 +0x0721:  test   %al,%al
083544bb +0x0723:  je     083546fb <+0x963>
083544c1 +0x0729:  lea    -0x734(%ebp),%eax
083544c7 +0x072f:  add    $0x180,%eax
083544cc +0x0734:  mov    %eax,(%esp)
083544cf +0x0737:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083544d4 +0x073c:  mov    -0x5bc(%ebp),%edx
083544da +0x0742:  mov    %eax,0x1c(%esp)
083544de +0x0746:  mov    %edx,0x18(%esp)
083544e2 +0x074a:  mov    -0x44(%ebp),%eax
083544e5 +0x074d:  mov    %eax,0x14(%esp)
083544e9 +0x0751:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n",0x10(%esp)
083544f1 +0x0759:  movl   $0x13c4,0xc(%esp)
083544f9 +0x0761:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354501 +0x0769:  movl   $"data_manager.cpp",0x4(%esp)
08354509 +0x0771:  movl   $0x1,(%esp)
08354510 +0x0778:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354515 +0x077d:  mov    $0x0,%ebx
0835451a +0x0782:  jmp    08354ee6 <+0x114e>
0835451f +0x0787:  mov    -0x5b8(%ebp),%eax
08354525 +0x078d:  cmp    $0x6,%eax
08354528 +0x0790:  jne    083545d0 <+0x838>
0835452e +0x0796:  lea    -0x734(%ebp),%eax
08354534 +0x079c:  add    $0x180,%eax
08354539 +0x07a1:  mov    %eax,(%esp)
0835453c +0x07a4:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354541 +0x07a9:  cmp    $0x2,%eax
08354544 +0x07ac:  je     08354565 <+0x7cd>
08354546 +0x07ae:  lea    -0x734(%ebp),%eax
0835454c +0x07b4:  add    $0x180,%eax
08354551 +0x07b9:  mov    %eax,(%esp)
08354554 +0x07bc:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354559 +0x07c1:  cmp    $0x3,%eax
0835455c +0x07c4:  je     08354565 <+0x7cd>
0835455e +0x07c6:  mov    $0x1,%eax
08354563 +0x07cb:  jmp    0835456a <+0x7d2>
08354565 +0x07cd:  mov    $0x0,%eax
0835456a +0x07d2:  test   %al,%al
0835456c +0x07d4:  je     083546fb <+0x963>
08354572 +0x07da:  lea    -0x734(%ebp),%eax
08354578 +0x07e0:  add    $0x180,%eax
0835457d +0x07e5:  mov    %eax,(%esp)
08354580 +0x07e8:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354585 +0x07ed:  mov    -0x5bc(%ebp),%edx
0835458b +0x07f3:  mov    %eax,0x1c(%esp)
0835458f +0x07f7:  mov    %edx,0x18(%esp)
08354593 +0x07fb:  mov    -0x44(%ebp),%eax
08354596 +0x07fe:  mov    %eax,0x14(%esp)
0835459a +0x0802:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n",0x10(%esp)
083545a2 +0x080a:  movl   $0x13cc,0xc(%esp)
083545aa +0x0812:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
083545b2 +0x081a:  movl   $"data_manager.cpp",0x4(%esp)
083545ba +0x0822:  movl   $0x1,(%esp)
083545c1 +0x0829:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083545c6 +0x082e:  mov    $0x0,%ebx
083545cb +0x0833:  jmp    08354ee6 <+0x114e>
083545d0 +0x0838:  mov    -0x5b8(%ebp),%eax
083545d6 +0x083e:  cmp    $0x3,%eax
083545d9 +0x0841:  jle    08354600 <+0x868>
083545db +0x0843:  mov    -0x5b8(%ebp),%eax
083545e1 +0x0849:  cmp    $0x5,%eax
083545e4 +0x084c:  je     08354600 <+0x868>
083545e6 +0x084e:  mov    -0x5b8(%ebp),%eax
083545ec +0x0854:  cmp    $0x6,%eax
083545ef +0x0857:  jle    0835467f <+0x8e7>
083545f5 +0x085d:  mov    -0x5b8(%ebp),%eax
083545fb +0x0863:  cmp    $0xb,%eax
083545fe +0x0866:  jg     0835467f <+0x8e7>
08354600 +0x0868:  lea    -0x734(%ebp),%eax
08354606 +0x086e:  add    $0x180,%eax
0835460b +0x0873:  mov    %eax,(%esp)
0835460e +0x0876:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354613 +0x087b:  cmp    $0x3,%eax
08354616 +0x087e:  setne  %al
08354619 +0x0881:  test   %al,%al
0835461b +0x0883:  je     083546fa <+0x962>
08354621 +0x0889:  lea    -0x734(%ebp),%eax
08354627 +0x088f:  add    $0x180,%eax
0835462c +0x0894:  mov    %eax,(%esp)
0835462f +0x0897:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354634 +0x089c:  mov    -0x5bc(%ebp),%edx
0835463a +0x08a2:  mov    %eax,0x1c(%esp)
0835463e +0x08a6:  mov    %edx,0x18(%esp)
08354642 +0x08aa:  mov    -0x44(%ebp),%eax
08354645 +0x08ad:  mov    %eax,0x14(%esp)
08354649 +0x08b1:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n",0x10(%esp)
08354651 +0x08b9:  movl   $0x13d4,0xc(%esp)
08354659 +0x08c1:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354661 +0x08c9:  movl   $"data_manager.cpp",0x4(%esp)
08354669 +0x08d1:  movl   $0x1,(%esp)
08354670 +0x08d8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354675 +0x08dd:  mov    $0x0,%ebx
0835467a +0x08e2:  jmp    08354ee6 <+0x114e>
0835467f +0x08e7:  lea    -0x734(%ebp),%eax
08354685 +0x08ed:  add    $0x180,%eax
0835468a +0x08f2:  mov    %eax,(%esp)
0835468d +0x08f5:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354692 +0x08fa:  cmp    $0x4,%eax
08354695 +0x08fd:  setne  %al
08354698 +0x0900:  test   %al,%al
0835469a +0x0902:  je     083546fb <+0x963>
0835469c +0x0904:  lea    -0x734(%ebp),%eax
083546a2 +0x090a:  add    $0x180,%eax
083546a7 +0x090f:  mov    %eax,(%esp)
083546aa +0x0912:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
083546af +0x0917:  mov    -0x5bc(%ebp),%edx
083546b5 +0x091d:  mov    %eax,0x1c(%esp)
083546b9 +0x0921:  mov    %edx,0x18(%esp)
083546bd +0x0925:  mov    -0x44(%ebp),%eax
083546c0 +0x0928:  mov    %eax,0x14(%esp)
083546c4 +0x092c:  movl   $"Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n",0x10(%esp)
083546cc +0x0934:  movl   $0x13dc,0xc(%esp)
083546d4 +0x093c:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
083546dc +0x0944:  movl   $"data_manager.cpp",0x4(%esp)
083546e4 +0x094c:  movl   $0x1,(%esp)
083546eb +0x0953:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083546f0 +0x0958:  mov    $0x0,%ebx
083546f5 +0x095d:  jmp    08354ee6 <+0x114e>
083546fa +0x0962:  nop
083546fb +0x0963:  mov    -0x5e4(%ebp),%eax
08354701 +0x0969:  cmp    $0xffffffff,%eax
08354704 +0x096c:  je     083547a0 <+0xa08>
0835470a +0x0972:  mov    -0x5dc(%ebp),%ebx
08354710 +0x0978:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08354715 +0x097d:  mov    %ebx,0x4(%esp)
08354719 +0x0981:  mov    %eax,(%esp)
0835471c +0x0984:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
08354721 +0x0989:  mov    %eax,-0x24(%ebp)
08354724 +0x098c:  cmpl   $0x0,-0x24(%ebp)
08354728 +0x0990:  jne    08354771 <+0x9d9>
0835472a +0x0992:  mov    -0x5dc(%ebp),%eax
08354730 +0x0998:  mov    %eax,0x18(%esp)
08354734 +0x099c:  mov    -0x44(%ebp),%eax
08354737 +0x099f:  mov    %eax,0x14(%esp)
0835473b +0x09a3:  movl   $"Quest Script Error: %s - NPC wrong npc appear map index %d.",0x10(%esp)
08354743 +0x09ab:  movl   $0x13e9,0xc(%esp)
0835474b +0x09b3:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354753 +0x09bb:  movl   $"data_manager.cpp",0x4(%esp)
0835475b +0x09c3:  movl   $0x1,(%esp)
08354762 +0x09ca:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354767 +0x09cf:  mov    $0x0,%ebx
0835476c +0x09d4:  jmp    08354ee6 <+0x114e>
08354771 +0x09d9:  mov    -0x5e4(%ebp),%ebx
08354777 +0x09df:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0835477c +0x09e4:  mov    %ebx,0x8(%esp)
08354780 +0x09e8:  mov    -0x24(%ebp),%edx
08354783 +0x09eb:  mov    %edx,0x4(%esp)
08354787 +0x09ef:  mov    %eax,(%esp)
0835478a +0x09f2:  call   083620ee <_ZNK12CDataManager9VerifyMapERK4CMapi>  ; CDataManager::VerifyMap(CMap const&, int) const
0835478f +0x09f7:  xor    $0x1,%eax
08354792 +0x09fa:  test   %al,%al
08354794 +0x09fc:  je     083547a0 <+0xa08>
08354796 +0x09fe:  mov    $0x0,%ebx
0835479b +0x0a03:  jmp    08354ee6 <+0x114e>
083547a0 +0x0a08:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
083547a5 +0x0a0d:  lea    -0x734(%ebp),%edx
083547ab +0x0a13:  mov    %edx,0x4(%esp)
083547af +0x0a17:  mov    %eax,(%esp)
083547b2 +0x0a1a:  call   0862243a <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript>  ; sync_script::CSyncScript::insert_quest_category(QuestScript*)
083547b7 +0x0a1f:  xor    $0x1,%eax
083547ba +0x0a22:  test   %al,%al
083547bc +0x0a24:  je     083547db <+0xa43>
083547be +0x0a26:  mov    -0x44(%ebp),%eax
083547c1 +0x0a29:  mov    %eax,0x4(%esp)
083547c5 +0x0a2d:  movl   $"insert_quest_category Error: %s\n",(%esp)
083547cc +0x0a34:  call   0807db60 <_init+0x458>
083547d1 +0x0a39:  mov    $0x0,%ebx
083547d6 +0x0a3e:  jmp    08354ee6 <+0x114e>
083547db +0x0a43:  movl   $0x150,(%esp)
083547e2 +0x0a4a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083547e7 +0x0a4f:  mov    %eax,%ebx
083547e9 +0x0a51:  mov    %ebx,%eax
083547eb +0x0a53:  mov    %eax,(%esp)
083547ee +0x0a56:  call   0837aa28 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa4c8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa4c8
083547f3 +0x0a5b:  jmp    0835480a <+0xa72>
083547f5 +0x0a5d:  mov    %edx,%esi
083547f7 +0x0a5f:  mov    %eax,%edi
083547f9 +0x0a61:  mov    %ebx,(%esp)
083547fc +0x0a64:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08354801 +0x0a69:  mov    %edi,%eax
08354803 +0x0a6b:  mov    %esi,%edx
08354805 +0x0a6d:  jmp    08354ec8 <+0x1130>
0835480a +0x0a72:  mov    %ebx,%eax
0835480c +0x0a74:  mov    %eax,-0x410(%ebp)
08354812 +0x0a7a:  mov    -0x410(%ebp),%eax
08354818 +0x0a80:  test   %eax,%eax
0835481a +0x0a82:  jne    08354872 <+0xada>
0835481c +0x0a84:  movl   $0x5,0xc(%esp)
08354824 +0x0a8c:  movl   $0x13ff,0x8(%esp)
0835482c +0x0a94:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x4(%esp)
08354834 +0x0a9c:  lea    -0x3e0(%ebp),%eax
0835483a +0x0aa2:  mov    %eax,(%esp)
0835483d +0x0aa5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08354842 +0x0aaa:  movl   $0x13ff,0xc(%esp)
0835484a +0x0ab2:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354852 +0x0aba:  movl   $"[%s][%d]",0x4(%esp)
0835485a +0x0ac2:  lea    -0x3e0(%ebp),%eax
08354860 +0x0ac8:  mov    %eax,(%esp)
08354863 +0x0acb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08354868 +0x0ad0:  mov    $0x0,%ebx
0835486d +0x0ad5:  jmp    08354ee6 <+0x114e>
08354872 +0x0ada:  lea    -0x734(%ebp),%eax
08354878 +0x0ae0:  mov    %eax,0x4(%esp)
0835487c +0x0ae4:  lea    -0x3d0(%ebp),%eax
08354882 +0x0aea:  mov    %eax,(%esp)
08354885 +0x0aed:  call   0837adc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xa868>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xa868
0835488a +0x0af2:  mov    -0x410(%ebp),%eax
08354890 +0x0af8:  lea    -0x3d0(%ebp),%edx
08354896 +0x0afe:  mov    %edx,0x4(%esp)
0835489a +0x0b02:  mov    %eax,(%esp)
0835489d +0x0b05:  call   0835233e <_ZN5Quest9set_questE11QuestScript>  ; Quest::set_quest(QuestScript)
083548a2 +0x0b0a:  jmp    083548bf <+0xb27>
083548a4 +0x0b0c:  mov    %edx,%ebx
083548a6 +0x0b0e:  mov    %eax,%esi
083548a8 +0x0b10:  lea    -0x3d0(%ebp),%eax
083548ae +0x0b16:  mov    %eax,(%esp)
083548b1 +0x0b19:  call   0836eaf0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8abc>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8abc
083548b6 +0x0b1e:  mov    %esi,%eax
083548b8 +0x0b20:  mov    %ebx,%edx
083548ba +0x0b22:  jmp    08354ec8 <+0x1130>
083548bf +0x0b27:  lea    -0x3d0(%ebp),%eax
083548c5 +0x0b2d:  mov    %eax,(%esp)
083548c8 +0x0b30:  call   0836eaf0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8abc>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8abc
083548cd +0x0b35:  lea    -0xc4(%ebp),%eax
083548d3 +0x0b3b:  movl   $0x0,0x8(%esp)
083548db +0x0b43:  lea    -0x40c(%ebp),%edx
083548e1 +0x0b49:  mov    %edx,0x4(%esp)
083548e5 +0x0b4d:  mov    %eax,(%esp)
083548e8 +0x0b50:  call   083416e4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x37b1>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x37b1
083548ed +0x0b55:  sub    $0x4,%esp
083548f0 +0x0b58:  mov    -0x650(%ebp),%eax
083548f6 +0x0b5e:  mov    %eax,0x4(%esp)
083548fa +0x0b62:  mov    0x8(%ebp),%eax
083548fd +0x0b65:  mov    %eax,(%esp)
08354900 +0x0b68:  call   08354f02 <_ZN9QuestList10insert_NPCEi>  ; QuestList::insert_NPC(int)
08354905 +0x0b6d:  lea    -0x410(%ebp),%eax
0835490b +0x0b73:  mov    %eax,0x8(%esp)
0835490f +0x0b77:  lea    -0x734(%ebp),%eax
08354915 +0x0b7d:  mov    %eax,0x4(%esp)
08354919 +0x0b81:  lea    -0xb4(%ebp),%eax
0835491f +0x0b87:  mov    %eax,(%esp)
08354922 +0x0b8a:  call   08391b78 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21618>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21618
08354927 +0x0b8f:  mov    0x8(%ebp),%edx
0835492a +0x0b92:  lea    -0xc0(%ebp),%eax
08354930 +0x0b98:  lea    -0xb4(%ebp),%ecx
08354936 +0x0b9e:  mov    %ecx,0x8(%esp)
0835493a +0x0ba2:  mov    %edx,0x4(%esp)
0835493e +0x0ba6:  mov    %eax,(%esp)
08354941 +0x0ba9:  call   08391ba6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21646>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21646
08354946 +0x0bae:  sub    $0x4,%esp
08354949 +0x0bb1:  mov    -0x660(%ebp),%eax
0835494f +0x0bb7:  cmp    $0x4,%eax
08354952 +0x0bba:  jne    083549a5 <+0xc0d>
08354954 +0x0bbc:  lea    -0x734(%ebp),%eax
0835495a +0x0bc2:  mov    %eax,0x8(%esp)
0835495e +0x0bc6:  lea    -0x734(%ebp),%eax
08354964 +0x0bcc:  add    $0xe4,%eax
08354969 +0x0bd1:  mov    %eax,0x4(%esp)
0835496d +0x0bd5:  lea    -0xa8(%ebp),%eax
08354973 +0x0bdb:  mov    %eax,(%esp)
08354976 +0x0bde:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
0835497b +0x0be3:  mov    0x8(%ebp),%eax
0835497e +0x0be6:  lea    0x44(%eax),%ecx
08354981 +0x0be9:  lea    -0xac(%ebp),%eax
08354987 +0x0bef:  lea    -0xa8(%ebp),%edx
0835498d +0x0bf5:  mov    %edx,0x8(%esp)
08354991 +0x0bf9:  mov    %ecx,0x4(%esp)
08354995 +0x0bfd:  mov    %eax,(%esp)
08354998 +0x0c00:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
0835499d +0x0c05:  sub    $0x4,%esp
083549a0 +0x0c08:  jmp    08354c05 <+0xe6d>
083549a5 +0x0c0d:  mov    -0x660(%ebp),%eax
083549ab +0x0c13:  cmp    $0x5,%eax
083549ae +0x0c16:  jne    08354a01 <+0xc69>
083549b0 +0x0c18:  lea    -0x734(%ebp),%eax
083549b6 +0x0c1e:  mov    %eax,0x8(%esp)
083549ba +0x0c22:  lea    -0x734(%ebp),%eax
083549c0 +0x0c28:  add    $0xe4,%eax
083549c5 +0x0c2d:  mov    %eax,0x4(%esp)
083549c9 +0x0c31:  lea    -0x9c(%ebp),%eax
083549cf +0x0c37:  mov    %eax,(%esp)
083549d2 +0x0c3a:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
083549d7 +0x0c3f:  mov    0x8(%ebp),%eax
083549da +0x0c42:  lea    0x2c(%eax),%ecx
083549dd +0x0c45:  lea    -0xa0(%ebp),%eax
083549e3 +0x0c4b:  lea    -0x9c(%ebp),%edx
083549e9 +0x0c51:  mov    %edx,0x8(%esp)
083549ed +0x0c55:  mov    %ecx,0x4(%esp)
083549f1 +0x0c59:  mov    %eax,(%esp)
083549f4 +0x0c5c:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
083549f9 +0x0c61:  sub    $0x4,%esp
083549fc +0x0c64:  jmp    08354c05 <+0xe6d>
08354a01 +0x0c69:  mov    -0x660(%ebp),%eax
08354a07 +0x0c6f:  test   %eax,%eax
08354a09 +0x0c71:  jne    08354a5c <+0xcc4>
08354a0b +0x0c73:  lea    -0x734(%ebp),%eax
08354a11 +0x0c79:  mov    %eax,0x8(%esp)
08354a15 +0x0c7d:  lea    -0x734(%ebp),%eax
08354a1b +0x0c83:  add    $0xe4,%eax
08354a20 +0x0c88:  mov    %eax,0x4(%esp)
08354a24 +0x0c8c:  lea    -0x90(%ebp),%eax
08354a2a +0x0c92:  mov    %eax,(%esp)
08354a2d +0x0c95:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
08354a32 +0x0c9a:  mov    0x8(%ebp),%eax
08354a35 +0x0c9d:  lea    0x14(%eax),%ecx
08354a38 +0x0ca0:  lea    -0x94(%ebp),%eax
08354a3e +0x0ca6:  lea    -0x90(%ebp),%edx
08354a44 +0x0cac:  mov    %edx,0x8(%esp)
08354a48 +0x0cb0:  mov    %ecx,0x4(%esp)
08354a4c +0x0cb4:  mov    %eax,(%esp)
08354a4f +0x0cb7:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08354a54 +0x0cbc:  sub    $0x4,%esp
08354a57 +0x0cbf:  jmp    08354c05 <+0xe6d>
08354a5c +0x0cc4:  mov    -0x660(%ebp),%eax
08354a62 +0x0cca:  cmp    $0x2,%eax
08354a65 +0x0ccd:  jne    08354ab8 <+0xd20>
08354a67 +0x0ccf:  lea    -0x734(%ebp),%eax
08354a6d +0x0cd5:  mov    %eax,0x8(%esp)
08354a71 +0x0cd9:  lea    -0x734(%ebp),%eax
08354a77 +0x0cdf:  add    $0xe4,%eax
08354a7c +0x0ce4:  mov    %eax,0x4(%esp)
08354a80 +0x0ce8:  lea    -0x84(%ebp),%eax
08354a86 +0x0cee:  mov    %eax,(%esp)
08354a89 +0x0cf1:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
08354a8e +0x0cf6:  mov    0x8(%ebp),%eax
08354a91 +0x0cf9:  lea    0x74(%eax),%ecx
08354a94 +0x0cfc:  lea    -0x88(%ebp),%eax
08354a9a +0x0d02:  lea    -0x84(%ebp),%edx
08354aa0 +0x0d08:  mov    %edx,0x8(%esp)
08354aa4 +0x0d0c:  mov    %ecx,0x4(%esp)
08354aa8 +0x0d10:  mov    %eax,(%esp)
08354aab +0x0d13:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08354ab0 +0x0d18:  sub    $0x4,%esp
08354ab3 +0x0d1b:  jmp    08354c05 <+0xe6d>
08354ab8 +0x0d20:  mov    -0x660(%ebp),%eax
08354abe +0x0d26:  cmp    $0x6,%eax
08354ac1 +0x0d29:  jne    08354b0e <+0xd76>
08354ac3 +0x0d2b:  lea    -0x734(%ebp),%eax
08354ac9 +0x0d31:  mov    %eax,0x8(%esp)
08354acd +0x0d35:  lea    -0x734(%ebp),%eax
08354ad3 +0x0d3b:  add    $0xe4,%eax
08354ad8 +0x0d40:  mov    %eax,0x4(%esp)
08354adc +0x0d44:  lea    -0x78(%ebp),%eax
08354adf +0x0d47:  mov    %eax,(%esp)
08354ae2 +0x0d4a:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
08354ae7 +0x0d4f:  mov    0x8(%ebp),%eax
08354aea +0x0d52:  lea    0x8c(%eax),%ecx
08354af0 +0x0d58:  lea    -0x7c(%ebp),%eax
08354af3 +0x0d5b:  lea    -0x78(%ebp),%edx
08354af6 +0x0d5e:  mov    %edx,0x8(%esp)
08354afa +0x0d62:  mov    %ecx,0x4(%esp)
08354afe +0x0d66:  mov    %eax,(%esp)
08354b01 +0x0d69:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08354b06 +0x0d6e:  sub    $0x4,%esp
08354b09 +0x0d71:  jmp    08354c05 <+0xe6d>
08354b0e +0x0d76:  mov    -0x660(%ebp),%eax
08354b14 +0x0d7c:  cmp    $0x3,%eax
08354b17 +0x0d7f:  jne    08354b64 <+0xdcc>
08354b19 +0x0d81:  lea    -0x734(%ebp),%eax
08354b1f +0x0d87:  mov    %eax,0x8(%esp)
08354b23 +0x0d8b:  lea    -0x734(%ebp),%eax
08354b29 +0x0d91:  add    $0xe4,%eax
08354b2e +0x0d96:  mov    %eax,0x4(%esp)
08354b32 +0x0d9a:  lea    -0x6c(%ebp),%eax
08354b35 +0x0d9d:  mov    %eax,(%esp)
08354b38 +0x0da0:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
08354b3d +0x0da5:  mov    0x8(%ebp),%eax
08354b40 +0x0da8:  lea    0xbc(%eax),%ecx
08354b46 +0x0dae:  lea    -0x70(%ebp),%eax
08354b49 +0x0db1:  lea    -0x6c(%ebp),%edx
08354b4c +0x0db4:  mov    %edx,0x8(%esp)
08354b50 +0x0db8:  mov    %ecx,0x4(%esp)
08354b54 +0x0dbc:  mov    %eax,(%esp)
08354b57 +0x0dbf:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08354b5c +0x0dc4:  sub    $0x4,%esp
08354b5f +0x0dc7:  jmp    08354c05 <+0xe6d>
08354b64 +0x0dcc:  mov    -0x660(%ebp),%eax
08354b6a +0x0dd2:  cmp    $0x1,%eax
08354b6d +0x0dd5:  jne    08354bb4 <+0xe1c>
08354b6f +0x0dd7:  lea    -0x734(%ebp),%eax
08354b75 +0x0ddd:  mov    %eax,0x8(%esp)
08354b79 +0x0de1:  lea    -0x734(%ebp),%eax
08354b7f +0x0de7:  add    $0xe4,%eax
08354b84 +0x0dec:  mov    %eax,0x4(%esp)
08354b88 +0x0df0:  lea    -0x60(%ebp),%eax
08354b8b +0x0df3:  mov    %eax,(%esp)
08354b8e +0x0df6:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
08354b93 +0x0dfb:  mov    0x8(%ebp),%eax
08354b96 +0x0dfe:  lea    0x5c(%eax),%ecx
08354b99 +0x0e01:  lea    -0x64(%ebp),%eax
08354b9c +0x0e04:  lea    -0x60(%ebp),%edx
08354b9f +0x0e07:  mov    %edx,0x8(%esp)
08354ba3 +0x0e0b:  mov    %ecx,0x4(%esp)
08354ba7 +0x0e0f:  mov    %eax,(%esp)
08354baa +0x0e12:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08354baf +0x0e17:  sub    $0x4,%esp
08354bb2 +0x0e1a:  jmp    08354c05 <+0xe6d>
08354bb4 +0x0e1c:  mov    -0x660(%ebp),%eax
08354bba +0x0e22:  cmp    $0x8,%eax
08354bbd +0x0e25:  jne    08354c05 <+0xe6d>
08354bbf +0x0e27:  lea    -0x734(%ebp),%eax
08354bc5 +0x0e2d:  mov    %eax,0x8(%esp)
08354bc9 +0x0e31:  lea    -0x734(%ebp),%eax
08354bcf +0x0e37:  add    $0xe4,%eax
08354bd4 +0x0e3c:  mov    %eax,0x4(%esp)
08354bd8 +0x0e40:  lea    -0x54(%ebp),%eax
08354bdb +0x0e43:  mov    %eax,(%esp)
08354bde +0x0e46:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
08354be3 +0x0e4b:  mov    0x8(%ebp),%eax
08354be6 +0x0e4e:  lea    0xa4(%eax),%ecx
08354bec +0x0e54:  lea    -0x58(%ebp),%eax
08354bef +0x0e57:  lea    -0x54(%ebp),%edx
08354bf2 +0x0e5a:  mov    %edx,0x8(%esp)
08354bf6 +0x0e5e:  mov    %ecx,0x4(%esp)
08354bfa +0x0e62:  mov    %eax,(%esp)
08354bfd +0x0e65:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
08354c02 +0x0e6a:  sub    $0x4,%esp
08354c05 +0x0e6d:  movzbl -0x4dc(%ebp),%eax
08354c0c +0x0e74:  cmp    $0xff,%al
08354c0e +0x0e76:  je     08354c2b <+0xe93>
08354c10 +0x0e78:  mov    0x8(%ebp),%eax
08354c13 +0x0e7b:  lea    0xd4(%eax),%edx
08354c19 +0x0e81:  lea    -0x734(%ebp),%eax
08354c1f +0x0e87:  mov    %eax,0x4(%esp)
08354c23 +0x0e8b:  mov    %edx,(%esp)
08354c26 +0x0e8e:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08354c2b +0x0e93:  lea    -0x408(%ebp),%eax
08354c31 +0x0e99:  movl   $&g_questScriptFileList,0x4(%esp)
08354c39 +0x0ea1:  mov    %eax,(%esp)
08354c3c +0x0ea4:  call   080e6118 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x24e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x24e
08354c41 +0x0ea9:  sub    $0x4,%esp
08354c44 +0x0eac:  lea    -0x408(%ebp),%eax
08354c4a +0x0eb2:  mov    %eax,0x4(%esp)
08354c4e +0x0eb6:  lea    -0x40c(%ebp),%eax
08354c54 +0x0ebc:  mov    %eax,(%esp)
08354c57 +0x0ebf:  call   080e613e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x274>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x274
08354c5c +0x0ec4:  test   %al,%al
08354c5e +0x0ec6:  jne    08353e16 <+0x7e>
08354c64 +0x0ecc:  jmp    08354c67 <+0xecf>
08354c66 +0x0ece:  nop
08354c67 +0x0ecf:  mov    0x8(%ebp),%eax
08354c6a +0x0ed2:  add    $0xd4,%eax
08354c6f +0x0ed7:  mov    %eax,(%esp)
08354c72 +0x0eda:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08354c77 +0x0edf:  xor    $0x1,%eax
08354c7a +0x0ee2:  test   %al,%al
08354c7c +0x0ee4:  je     08354e82 <+0x10ea>
08354c82 +0x0eea:  movl   $0x0,-0x1c(%ebp)
08354c89 +0x0ef1:  mov    0x8(%ebp),%eax
08354c8c +0x0ef4:  lea    0xd4(%eax),%edx
08354c92 +0x0efa:  lea    -0x4c(%ebp),%eax
08354c95 +0x0efd:  mov    %edx,0x4(%esp)
08354c99 +0x0f01:  mov    %eax,(%esp)
08354c9c +0x0f04:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08354ca1 +0x0f09:  sub    $0x4,%esp
08354ca4 +0x0f0c:  lea    -0x4c(%ebp),%eax
08354ca7 +0x0f0f:  mov    %eax,0x4(%esp)
08354cab +0x0f13:  lea    -0x428(%ebp),%eax
08354cb1 +0x0f19:  mov    %eax,(%esp)
08354cb4 +0x0f1c:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08354cb9 +0x0f21:  jmp    08354e4a <+0x10b2>
08354cbe +0x0f26:  lea    -0x428(%ebp),%eax
08354cc4 +0x0f2c:  mov    %eax,(%esp)
08354cc7 +0x0f2f:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08354ccc +0x0f34:  mov    (%eax),%eax
08354cce +0x0f36:  mov    %eax,-0x20(%ebp)
08354cd1 +0x0f39:  mov    -0x20(%ebp),%eax
08354cd4 +0x0f3c:  mov    %eax,0x4(%esp)
08354cd8 +0x0f40:  mov    0x8(%ebp),%eax
08354cdb +0x0f43:  mov    %eax,(%esp)
08354cde +0x0f46:  call   08355a5c <_ZN9QuestList10find_questEi>  ; QuestList::find_quest(int)
08354ce3 +0x0f4b:  mov    %eax,-0x1c(%ebp)
08354ce6 +0x0f4e:  cmpl   $0x0,-0x1c(%ebp)
08354cea +0x0f52:  je     08354e3b <+0x10a3>
08354cf0 +0x0f58:  mov    -0x1c(%ebp),%eax
08354cf3 +0x0f5b:  movzbl 0x108(%eax),%eax
08354cfa +0x0f62:  cmp    $0xff,%al
08354cfc +0x0f64:  jne    08354d3b <+0xfa3>
08354cfe +0x0f66:  mov    -0x20(%ebp),%eax
08354d01 +0x0f69:  mov    %eax,0x14(%esp)
08354d05 +0x0f6d:  movl   $"Mail Quest Error (quest index : %d)",0x10(%esp)
08354d0d +0x0f75:  movl   $0x145c,0xc(%esp)
08354d15 +0x0f7d:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354d1d +0x0f85:  movl   $"data_manager.cpp",0x4(%esp)
08354d25 +0x0f8d:  movl   $0x1,(%esp)
08354d2c +0x0f94:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354d31 +0x0f99:  mov    $0x0,%ebx
08354d36 +0x0f9e:  jmp    08354ee6 <+0x114e>
08354d3b +0x0fa3:  mov    -0x1c(%ebp),%eax
08354d3e +0x0fa6:  add    $0x10c,%eax
08354d43 +0x0fab:  mov    %eax,(%esp)
08354d46 +0x0fae:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08354d4b +0x0fb3:  test   %eax,%eax
08354d4d +0x0fb5:  sete   %al
08354d50 +0x0fb8:  test   %al,%al
08354d52 +0x0fba:  je     08354d91 <+0xff9>
08354d54 +0x0fbc:  mov    -0x20(%ebp),%eax
08354d57 +0x0fbf:  mov    %eax,0x14(%esp)
08354d5b +0x0fc3:  movl   $"Mail Quest Error! mail title err(quest index : %d)",0x10(%esp)
08354d63 +0x0fcb:  movl   $0x1462,0xc(%esp)
08354d6b +0x0fd3:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354d73 +0x0fdb:  movl   $"data_manager.cpp",0x4(%esp)
08354d7b +0x0fe3:  movl   $0x1,(%esp)
08354d82 +0x0fea:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354d87 +0x0fef:  mov    $0x0,%ebx
08354d8c +0x0ff4:  jmp    08354ee6 <+0x114e>
08354d91 +0x0ff9:  mov    -0x1c(%ebp),%eax
08354d94 +0x0ffc:  add    $0x110,%eax
08354d99 +0x1001:  mov    %eax,(%esp)
08354d9c +0x1004:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08354da1 +0x1009:  test   %eax,%eax
08354da3 +0x100b:  sete   %al
08354da6 +0x100e:  test   %al,%al
08354da8 +0x1010:  je     08354de7 <+0x104f>
08354daa +0x1012:  mov    -0x20(%ebp),%eax
08354dad +0x1015:  mov    %eax,0x14(%esp)
08354db1 +0x1019:  movl   $"Mail Quest Error! mail contents err(quest index : %d)",0x10(%esp)
08354db9 +0x1021:  movl   $0x1467,0xc(%esp)
08354dc1 +0x1029:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354dc9 +0x1031:  movl   $"data_manager.cpp",0x4(%esp)
08354dd1 +0x1039:  movl   $0x1,(%esp)
08354dd8 +0x1040:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354ddd +0x1045:  mov    $0x0,%ebx
08354de2 +0x104a:  jmp    08354ee6 <+0x114e>
08354de7 +0x104f:  mov    -0x1c(%ebp),%eax
08354dea +0x1052:  add    $0x114,%eax
08354def +0x1057:  mov    %eax,(%esp)
08354df2 +0x105a:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08354df7 +0x105f:  and    $0x1,%eax
08354dfa +0x1062:  test   %al,%al
08354dfc +0x1064:  je     08354e3c <+0x10a4>
08354dfe +0x1066:  mov    -0x20(%ebp),%eax
08354e01 +0x1069:  mov    %eax,0x14(%esp)
08354e05 +0x106d:  movl   $"Mail Quest Error! mail enclose item err(quest index : %d)",0x10(%esp)
08354e0d +0x1075:  movl   $0x146c,0xc(%esp)
08354e15 +0x107d:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354e1d +0x1085:  movl   $"data_manager.cpp",0x4(%esp)
08354e25 +0x108d:  movl   $0x1,(%esp)
08354e2c +0x1094:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354e31 +0x1099:  mov    $0x0,%ebx
08354e36 +0x109e:  jmp    08354ee6 <+0x114e>
08354e3b +0x10a3:  nop
08354e3c +0x10a4:  lea    -0x428(%ebp),%eax
08354e42 +0x10aa:  mov    %eax,(%esp)
08354e45 +0x10ad:  call   080f9a06 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x212>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x212
08354e4a +0x10b2:  mov    0x8(%ebp),%eax
08354e4d +0x10b5:  lea    0xd4(%eax),%edx
08354e53 +0x10bb:  lea    -0x48(%ebp),%eax
08354e56 +0x10be:  mov    %edx,0x4(%esp)
08354e5a +0x10c2:  mov    %eax,(%esp)
08354e5d +0x10c5:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08354e62 +0x10ca:  sub    $0x4,%esp
08354e65 +0x10cd:  lea    -0x48(%ebp),%eax
08354e68 +0x10d0:  mov    %eax,0x4(%esp)
08354e6c +0x10d4:  lea    -0x428(%ebp),%eax
08354e72 +0x10da:  mov    %eax,(%esp)
08354e75 +0x10dd:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
08354e7a +0x10e2:  test   %al,%al
08354e7c +0x10e4:  jne    08354cbe <+0xf26>
08354e82 +0x10ea:  call   0808bb34 <_ZN8WongWork11CQuestClear10syncScriptEv>  ; WongWork::CQuestClear::syncScript()
08354e87 +0x10ef:  xor    $0x1,%eax
08354e8a +0x10f2:  test   %al,%al
08354e8c +0x10f4:  je     08354ec1 <+0x1129>
08354e8e +0x10f6:  movl   $"WongWork::CQuestClear::syncScript() fail",0x10(%esp)
08354e96 +0x10fe:  movl   $0x1496,0xc(%esp)
08354e9e +0x1106:  movl   $&_ZZN9QuestList9load_listEvE19__PRETTY_FUNCTION__,0x8(%esp)
08354ea6 +0x110e:  movl   $"data_manager.cpp",0x4(%esp)
08354eae +0x1116:  movl   $0x1,(%esp)
08354eb5 +0x111d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08354eba +0x1122:  mov    $0x0,%ebx
08354ebf +0x1127:  jmp    08354ee6 <+0x114e>
08354ec1 +0x1129:  mov    $0x1,%ebx
08354ec6 +0x112e:  jmp    08354ee6 <+0x114e>
08354ec8 +0x1130:  mov    %edx,%ebx
08354eca +0x1132:  mov    %eax,%esi
08354ecc +0x1134:  lea    -0x734(%ebp),%eax
08354ed2 +0x113a:  mov    %eax,(%esp)
08354ed5 +0x113d:  call   0836eaf0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8abc>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8abc
08354eda +0x1142:  mov    %esi,%eax
08354edc +0x1144:  mov    %ebx,%edx
08354ede +0x1146:  mov    %eax,(%esp)
08354ee1 +0x1149:  call   08ae3750 <_Unwind_Resume>
08354ee6 +0x114e:  lea    -0x734(%ebp),%eax
08354eec +0x1154:  mov    %eax,(%esp)
08354eef +0x1157:  call   0836eaf0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x8abc>  ; global constructors keyed to CServerEvent::m_nExpRate+0x8abc
08354ef4 +0x115c:  mov    %ebx,%eax
08354ef6 +0x115e:  lea    -0xc(%ebp),%esp
08354ef9 +0x1161:  add    $0x0,%esp
08354efc +0x1164:  pop    %ebx
08354efd +0x1165:  pop    %esi
08354efe +0x1166:  pop    %edi
08354eff +0x1167:  pop    %ebp
08354f00 +0x1168:  ret
08354f01 +0x1169:  nop
```

## 反编译 C

```c
// QuestList::load_list @ 0x8353d98

/* QuestList::load_list() */

undefined4 __thiscall QuestList::load_list(QuestList *this)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  CSyncScript *pCVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  CDataManager *pCVar8;
  Quest *this_00;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_740 [2];
  QuestScript local_738 [212];
  int local_664;
  int local_654 [27];
  int local_5e8;
  undefined4 local_5e0;
  int local_5c0;
  int local_5bc;
  vector<int,std::allocator<int>> avStack_5b8 [216];
  char local_4e0;
  vector<_DailySchedule,std::allocator<_DailySchedule>> avStack_45c [48];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_42c [6];
  undefined4 local_426;
  undefined2 local_422;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_420 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_41c [4];
  undefined4 local_418;
  Quest *local_414;
  undefined4 local_410;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_40c [4]
  ;
  __normal_iterator local_408 [4];
  __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
  local_404 [4];
  __normal_iterator local_400 [4];
  __normal_iterator local_3fc [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3f8 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3f4 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3f0 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3ec [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_3e8 [4];
  cMyTrace local_3e4 [16];
  QuestScript local_3d4 [780];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_c8 [4];
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_c4 [12];
  pair<int_const,Quest*> local_b8 [8];
  pair local_b0 [4];
  pair<int_const,int> local_ac [8];
  pair local_a4 [4];
  pair<int_const,int> local_a0 [8];
  pair local_98 [4];
  pair<int_const,int> local_94 [8];
  pair local_8c [4];
  pair<int_const,int> local_88 [8];
  pair local_80 [4];
  pair<int_const,int> local_7c [8];
  pair local_74 [4];
  pair<int_const,int> local_70 [8];
  pair local_68 [4];
  pair<int_const,int> local_64 [8];
  pair local_5c [4];
  pair<int_const,int> local_58 [8];
  __normal_iterator local_50 [4];
  __normal_iterator local_4c [4];
  char *local_48;
  CItem *local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  CMap *local_28;
  undefined4 local_24;
  int local_20;
  
  std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_410);
  QuestScript::QuestScript(local_738);
  local_414 = (Quest *)0x0;
  __gnu_cxx::
  __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>::
  __normal_iterator((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                     *)&local_418);
  local_44 = (CItem *)0x0;
                    /* try { // try from 08353ddf to 083547e6 has its CatchHandler @ 08354ec8 */
  pCVar4 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::truncate_quest_category(pCVar4);
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )local_740);
  local_410 = local_740[0];
  while( true ) {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_40c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_410,
                       (_Rb_tree_iterator *)local_40c);
    if (cVar1 == '\0') break;
    iVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_410);
    local_48 = (char *)std::string::c_str((string *)(iVar10 + 4));
    if (local_48 == (char *)0x0) break;
    cVar1 = importQuestScript(local_738,local_48);
    if (cVar1 != '\x01') {
      LogManager::logFormat
                (1,"data_manager.cpp","bool QuestList::load_list()",0x1357,
                 "Quest Script Error: %s\n",local_48);
      uVar11 = 0;
      goto LAB_08354ee6;
    }
    iVar10 = std::vector<_DailySchedule,std::allocator<_DailySchedule>>::size(avStack_45c);
    if (iVar10 != 0) {
      CDailyScheduleManager::AddDailSchedule
                (GlobalData::s_DailyScheduleManager,(vector *)avStack_45c);
    }
    cVar1 = std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::empty();
    if (cVar1 != '\x01') {
      std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::begin();
      local_418 = local_740[0];
      while( true ) {
        std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>::end();
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_418,local_408);
        if (!bVar3) break;
        iVar10 = __gnu_cxx::
                 __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                 ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                              *)&local_418);
        iVar10 = *(int *)(iVar10 + 0x10);
        pCVar8 = (CDataManager *)G_CDataManager();
        local_44 = (CItem *)CDataManager::find_item(pCVar8,iVar10);
        if (local_44 == (CItem *)0x0) {
          iVar10 = __gnu_cxx::
                   __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                   ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                                *)&local_418);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x136f,
                     "Quest Script Error: %s - Monster Kill Item %d is not Exist\n",local_48,
                     *(undefined4 *)(iVar10 + 0x10));
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        cVar1 = CItem::is_stackable(local_44);
        if ((cVar1 == '\x01') &&
           (iVar10 = (**(code **)(*(int *)local_44 + 0xc))(local_44), iVar10 == 8)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar10 = __gnu_cxx::
                   __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                   ::operator*((__normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
                                *)&local_418);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x1375,
                     "Quest Script Error: %s - Monster Kill Item %d is not Quest Item\n",local_48,
                     *(undefined4 *)(iVar10 + 0x10));
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        __gnu_cxx::
        __normal_iterator<MonsterKillItem*,std::vector<MonsterKillItem,std::allocator<MonsterKillItem>>>
        ::operator++(local_404,(int)&local_418);
      }
    }
    if ((local_5c0 == 2) || (local_5c0 == 6)) {
      local_40 = 4;
      if (local_5c0 == 6) {
        local_40 = 5;
      }
      uVar5 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
      if ((uVar5 % local_40 == 0) &&
         (uVar5 = std::vector<int,std::allocator<int>>::size(avStack_5b8), uVar5 / local_40 < 4)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        LogManager::logFormat
                  (1,"data_manager.cpp","bool QuestList::load_list()",0x1383,
                   "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                   ,local_48,local_5c0,uVar11);
        uVar11 = 0;
        goto LAB_08354ee6;
      }
      std::vector<int,std::allocator<int>>::begin();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>(local_41c,local_400);
      std::vector<int,std::allocator<int>>::end();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>(local_420,local_3fc);
      local_426 = 0;
      local_422 = 0;
      while (bVar3 = __gnu_cxx::operator!=(local_41c,local_420), bVar3) {
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3f8,(int)local_41c);
        puVar9 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                 operator*(local_3f8);
        local_3c = *puVar9;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3f4,(int)local_41c);
        puVar9 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                 operator*(local_3f4);
        local_38 = *puVar9;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3f0,(int)local_41c);
        puVar9 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                 operator*(local_3f0);
        local_34 = *puVar9;
        if (local_5c0 == 6) {
          __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                    (local_3ec,(int)local_41c);
          puVar6 = (uint *)__gnu_cxx::
                           __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                           operator*(local_3ec);
          local_2c = *puVar6;
          if ((10 < local_2c) || ((1 << ((byte)local_2c & 0x1f) & 0x40eU) == 0)) {
            LogManager::logFormat
                      (1,"data_manager.cpp","bool QuestList::load_list()",0x139d,
                       "Quest Script Error: %s - Unknown enemy type(%d)\n",local_48,local_2c);
            uVar11 = 0;
            goto LAB_08354ee6;
          }
        }
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_3e8,(int)local_41c);
        piVar7 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_3e8);
        local_30 = *piVar7;
        if (0x1ff < local_30) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13a4,
                     "Quest Script Error: %s - Quest Data Type is %d, But Trigger Size is Wrong(%d)\n"
                     ,local_48,local_5c0,local_30);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
    }
    else if (local_5c0 == 0) {
      bVar2 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
      if ((bVar2 & 1) != 0) {
        uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        LogManager::logFormat
                  (1,"data_manager.cpp","bool QuestList::load_list()",0x13ba,
                   "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                   ,local_48,local_5c0,uVar11);
        uVar11 = 0;
        goto LAB_08354ee6;
      }
    }
    else if (local_5c0 == 1) {
      if (local_5bc == 4) {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if (iVar10 != 2) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13c4,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      else if (local_5bc == 6) {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if ((iVar10 == 2) ||
           (iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8), iVar10 == 3)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13cc,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      else if (((local_5bc < 4) || (local_5bc == 5)) || ((6 < local_5bc && (local_5bc < 0xc)))) {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if (iVar10 != 3) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13d4,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      else {
        iVar10 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
        if (iVar10 != 4) {
          uVar11 = std::vector<int,std::allocator<int>>::size(avStack_5b8);
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x13dc,
                     "Quest Script Error: %s - Quest Data Type is %d, But Argumemt Size is Wrong(%d)\n"
                     ,local_48,local_5c0,uVar11);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
    }
    if (local_5e8 != -1) {
      iVar10 = G_CDataManager();
      local_28 = (CMap *)CDataManager::find_map(iVar10);
      iVar10 = local_5e8;
      if (local_28 == (CMap *)0x0) {
        LogManager::logFormat
                  (1,"data_manager.cpp","bool QuestList::load_list()",0x13e9,
                   "Quest Script Error: %s - NPC wrong npc appear map index %d.",local_48,local_5e0)
        ;
        uVar11 = 0;
        goto LAB_08354ee6;
      }
      pCVar8 = (CDataManager *)G_CDataManager();
      cVar1 = CDataManager::VerifyMap(pCVar8,local_28,iVar10);
      if (cVar1 != '\x01') {
        uVar11 = 0;
        goto LAB_08354ee6;
      }
    }
    pCVar4 = (CSyncScript *)sync_script::GetInstanceSyncScript();
    cVar1 = sync_script::CSyncScript::insert_quest_category(pCVar4,local_738);
    if (cVar1 != '\x01') {
      printf("insert_quest_category Error: %s\n",local_48);
      uVar11 = 0;
      goto LAB_08354ee6;
    }
    this_00 = operator_new(0x150);
                    /* try { // try from 083547ee to 083547f2 has its CatchHandler @ 083547f5 */
    Quest::Quest(this_00);
    local_414 = this_00;
    if (this_00 == (Quest *)0x0) {
                    /* try { // try from 0835483d to 08354889 has its CatchHandler @ 08354ec8 */
      cMyTrace::cMyTrace(local_3e4,"bool QuestList::load_list()",0x13ff,5);
      cMyTrace::operator()(local_3e4,"[%s][%d]","bool QuestList::load_list()",0x13ff);
      uVar11 = 0;
      goto LAB_08354ee6;
    }
    QuestScript::QuestScript(local_3d4,local_738);
                    /* try { // try from 0835489d to 083548a1 has its CatchHandler @ 083548a4 */
    Quest::set_quest(local_414,local_3d4);
                    /* try { // try from 083548c8 to 08354eb9 has its CatchHandler @ 08354ec8 */
    QuestScript::~QuestScript(local_3d4);
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_c8,(int)&local_410);
    insert_NPC(this,local_654[0]);
    std::pair<int_const,Quest*>::pair<int&,Quest*&>(local_b8,(int *)local_738,&local_414);
    __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
    insert(local_c4,this);
    if (local_664 == 4) {
      std::pair<int_const,int>::pair<int&,int&>(local_ac,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_b0);
    }
    else if (local_664 == 5) {
      std::pair<int_const,int>::pair<int&,int&>(local_a0,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_a4);
    }
    else if (local_664 == 0) {
      std::pair<int_const,int>::pair<int&,int&>(local_94,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_98);
    }
    else if (local_664 == 2) {
      std::pair<int_const,int>::pair<int&,int&>(local_88,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_8c);
    }
    else if (local_664 == 6) {
      std::pair<int_const,int>::pair<int&,int&>(local_7c,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_80);
    }
    else if (local_664 == 3) {
      std::pair<int_const,int>::pair<int&,int&>(local_70,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_74);
    }
    else if (local_664 == 1) {
      std::pair<int_const,int>::pair<int&,int&>(local_64,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_68);
    }
    else if (local_664 == 8) {
      std::pair<int_const,int>::pair<int&,int&>(local_58,local_654,(int *)local_738);
      std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                (local_5c);
    }
    if (local_4e0 != -1) {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + 0xd4),(int *)local_738);
    }
  }
  cVar1 = std::vector<int,std::allocator<int>>::empty();
  if (cVar1 != '\x01') {
    local_20 = 0;
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_42c,local_50);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar3 = __gnu_cxx::operator!=(local_42c,local_4c);
      if (!bVar3) break;
      puVar9 = (undefined4 *)
               __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
               operator*(local_42c);
      local_24 = *puVar9;
      local_20 = find_quest((int)this);
      if (local_20 != 0) {
        if (*(char *)(local_20 + 0x108) == -1) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x145c,
                     "Mail Quest Error (quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        iVar10 = std::string::size((string *)(local_20 + 0x10c));
        if (iVar10 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x1462,
                     "Mail Quest Error! mail title err(quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        iVar10 = std::string::size((string *)(local_20 + 0x110));
        if (iVar10 == 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x1467,
                     "Mail Quest Error! mail contents err(quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
        bVar2 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(local_20 + 0x114));
        if ((bVar2 & 1) != 0) {
          LogManager::logFormat
                    (1,"data_manager.cpp","bool QuestList::load_list()",0x146c,
                     "Mail Quest Error! mail enclose item err(quest index : %d)",local_24);
          uVar11 = 0;
          goto LAB_08354ee6;
        }
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_42c);
    }
  }
  cVar1 = WongWork::CQuestClear::syncScript();
  if (cVar1 == '\x01') {
    uVar11 = 1;
  }
  else {
    LogManager::logFormat
              (1,"data_manager.cpp","bool QuestList::load_list()",0x1496,
               "WongWork::CQuestClear::syncScript() fail");
    uVar11 = 0;
  }
LAB_08354ee6:
  QuestScript::~QuestScript(local_738);
  return uVar11;
}
```
