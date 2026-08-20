# init

`_ZN12CDataManager4initEv`

`CDataManager::init()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08358332` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08358332  _ZN12CDataManager4initEv
#           CDataManager::init()
# range [0x08358332, 0x0835f1d5]
08358332 +0x0000:  push   %ebp
08358333 +0x0001:  mov    %esp,%ebp
08358335 +0x0003:  push   %edi
08358336 +0x0004:  push   %esi
08358337 +0x0005:  push   %ebx
08358338 +0x0006:  sub    $0x192c,%esp
0835833e +0x000c:  movl   $0x0,-0x28(%ebp)
08358345 +0x0013:  jmp    08358375 <+0x43>
08358347 +0x0015:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0835834c +0x001a:  lea    0x2fc(%eax),%edx
08358352 +0x0020:  mov    -0x28(%ebp),%eax
08358355 +0x0023:  mov    %eax,0x4(%esp)
08358359 +0x0027:  mov    %edx,(%esp)
0835835c +0x002a:  call   08237ace <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd178>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd178
08358361 +0x002f:  mov    %eax,(%esp)
08358364 +0x0032:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08358369 +0x0037:  mov    %eax,(%esp)
0835836c +0x003a:  call   088bb40a <_Z24SetPriorityBaseDirectoryPKc>  ; SetPriorityBaseDirectory(char const*)
08358371 +0x003f:  addl   $0x1,-0x28(%ebp)
08358375 +0x0043:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0835837a +0x0048:  add    $0x2fc,%eax
0835837f +0x004d:  mov    %eax,(%esp)
08358382 +0x0050:  call   08237a90 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd13a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd13a
08358387 +0x0055:  cmp    -0x28(%ebp),%eax
0835838a +0x0058:  seta   %al
0835838d +0x005b:  test   %al,%al
0835838f +0x005d:  jne    08358347 <+0x15>
08358391 +0x005f:  mov    0x8(%ebp),%eax
08358394 +0x0062:  movb   $0x0,0xa8d8(%eax)
0835839b +0x0069:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083583a0 +0x006e:  mov    %eax,(%esp)
083583a3 +0x0071:  call   08364202 <_ZNK12CDataManager14GetScriptPacksEv>  ; CDataManager::GetScriptPacks() const
083583a8 +0x0076:  mov    %eax,%ebx
083583aa +0x0078:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083583af +0x007d:  movzbl 0x308(%eax),%eax
083583b6 +0x0084:  movzbl %al,%esi
083583b9 +0x0087:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083583be +0x008c:  add    $0x2f8,%eax
083583c3 +0x0091:  mov    %eax,(%esp)
083583c6 +0x0094:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
083583cb +0x0099:  movl   $0x0,0xc(%esp)
083583d3 +0x00a1:  mov    %ebx,0x8(%esp)
083583d7 +0x00a5:  mov    %esi,0x4(%esp)
083583db +0x00a9:  mov    %eax,(%esp)
083583de +0x00ac:  call   088bb5d2 <_Z14InitRDARScriptPKcbS0_Pi>  ; InitRDARScript(char const*, bool, char const*, int*)
083583e3 +0x00b1:  movl   $0x0,0x8(%esp)
083583eb +0x00b9:  movl   $0x0,0x4(%esp)
083583f3 +0x00c1:  movl   $"n_String.lst",(%esp)
083583fa +0x00c8:  call   088bff9c <_Z27InitRDARScriptStringManagerPKcS0_PSt6vectorI8ErrorLogSaIS2_EE>  ; InitRDARScriptStringManager(char const*, char const*, std::vector<ErrorLog, std::allocator<ErrorLog> >*)
083583ff +0x00cd:  xor    $0x1,%eax
08358402 +0x00d0:  test   %al,%al
08358404 +0x00d2:  je     0835845c <+0x12a>
08358406 +0x00d4:  movl   $0x1,0x14(%esp)
0835840e +0x00dc:  movl   $0x1,0x10(%esp)
08358416 +0x00e4:  movl   $0x9,0xc(%esp)
0835841e +0x00ec:  movl   $0x1972,0x8(%esp)
08358426 +0x00f4:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835842e +0x00fc:  lea    -0xf08(%ebp),%eax
08358434 +0x0102:  mov    %eax,(%esp)
08358437 +0x0105:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835843c +0x010a:  movl   $"\t- InitRDARScriptStringManager Fail",0x4(%esp)
08358444 +0x0112:  lea    -0xf08(%ebp),%eax
0835844a +0x0118:  mov    %eax,(%esp)
0835844d +0x011b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358452 +0x0120:  mov    $0x0,%ebx
08358457 +0x0125:  jmp    0835f1c8 <+0x6e96>
0835845c +0x012a:  movl   $0x1,0x14(%esp)
08358464 +0x0132:  movl   $0x1,0x10(%esp)
0835846c +0x013a:  movl   $0x9,0xc(%esp)
08358474 +0x0142:  movl   $0x1975,0x8(%esp)
0835847c +0x014a:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358484 +0x0152:  lea    -0xef8(%ebp),%eax
0835848a +0x0158:  mov    %eax,(%esp)
0835848d +0x015b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358492 +0x0160:  movl   $"\t- InitRDARScriptStringManager Success",0x4(%esp)
0835849a +0x0168:  lea    -0xef8(%ebp),%eax
083584a0 +0x016e:  mov    %eax,(%esp)
083584a3 +0x0171:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083584a8 +0x0176:  call   089c0586 <_Z25InitMapEquipmentAniScriptv>  ; InitMapEquipmentAniScript()
083584ad +0x017b:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
083584b2 +0x0180:  movl   $"Etc/ItemTypeMaster.etc",0x4(%esp)
083584ba +0x0188:  mov    %eax,(%esp)
083584bd +0x018b:  call   08625064 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc>  ; sync_script::CSyncScript::LoadItemInfoMasterScript(char const*)
083584c2 +0x0190:  xor    $0x1,%eax
083584c5 +0x0193:  test   %al,%al
083584c7 +0x0195:  je     0835851a <+0x1e8>
083584c9 +0x0197:  movl   $0x1,0x14(%esp)
083584d1 +0x019f:  movl   $0x1,0x10(%esp)
083584d9 +0x01a7:  movl   $0x9,0xc(%esp)
083584e1 +0x01af:  movl   $0x1982,0x8(%esp)
083584e9 +0x01b7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083584f1 +0x01bf:  lea    -0xee8(%ebp),%eax
083584f7 +0x01c5:  mov    %eax,(%esp)
083584fa +0x01c8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083584ff +0x01cd:  movl   $"\t- Failed to load < ITEM INFO MASTER SCRIPT >",0x4(%esp)
08358507 +0x01d5:  lea    -0xee8(%ebp),%eax
0835850d +0x01db:  mov    %eax,(%esp)
08358510 +0x01de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358515 +0x01e3:  jmp    083585da <+0x2a8>
0835851a +0x01e8:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835851f +0x01ed:  mov    %eax,(%esp)
08358522 +0x01f0:  call   08625696 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv>  ; sync_script::CSyncScript::truncate_item_info_master_table()
08358527 +0x01f5:  xor    $0x1,%eax
0835852a +0x01f8:  test   %al,%al
0835852c +0x01fa:  je     0835857a <+0x248>
0835852e +0x01fc:  movl   $0x1,0x14(%esp)
08358536 +0x0204:  movl   $0x1,0x10(%esp)
0835853e +0x020c:  movl   $0x9,0xc(%esp)
08358546 +0x0214:  movl   $0x1986,0x8(%esp)
0835854e +0x021c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358556 +0x0224:  lea    -0xed8(%ebp),%eax
0835855c +0x022a:  mov    %eax,(%esp)
0835855f +0x022d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358564 +0x0232:  movl   $"\t- Failed to < TRUNCATE ITEM INFO MASTER TABLE >",0x4(%esp)
0835856c +0x023a:  lea    -0xed8(%ebp),%eax
08358572 +0x0240:  mov    %eax,(%esp)
08358575 +0x0243:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835857a +0x0248:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835857f +0x024d:  mov    %eax,(%esp)
08358582 +0x0250:  call   0862571a <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv>  ; sync_script::CSyncScript::insert_item_info_master_to_db()
08358587 +0x0255:  xor    $0x1,%eax
0835858a +0x0258:  test   %al,%al
0835858c +0x025a:  je     083585da <+0x2a8>
0835858e +0x025c:  movl   $0x1,0x14(%esp)
08358596 +0x0264:  movl   $0x1,0x10(%esp)
0835859e +0x026c:  movl   $0x9,0xc(%esp)
083585a6 +0x0274:  movl   $0x1989,0x8(%esp)
083585ae +0x027c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083585b6 +0x0284:  lea    -0xec8(%ebp),%eax
083585bc +0x028a:  mov    %eax,(%esp)
083585bf +0x028d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083585c4 +0x0292:  movl   $"\t- Failed to < INSERT ITEM INFO MASTER TO DB >",0x4(%esp)
083585cc +0x029a:  lea    -0xec8(%ebp),%eax
083585d2 +0x02a0:  mov    %eax,(%esp)
083585d5 +0x02a3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083585da +0x02a8:  movl   $"",(%esp)
083585e1 +0x02af:  call   08a58174 <_Z26importOldEquipmentStatInfoPKc>  ; importOldEquipmentStatInfo(char const*)
083585e6 +0x02b4:  xor    $0x1,%eax
083585e9 +0x02b7:  test   %al,%al
083585eb +0x02b9:  je     0835863e <+0x30c>
083585ed +0x02bb:  movl   $0x1,0x14(%esp)
083585f5 +0x02c3:  movl   $0x1,0x10(%esp)
083585fd +0x02cb:  movl   $0x9,0xc(%esp)
08358605 +0x02d3:  movl   $0x198f,0x8(%esp)
0835860d +0x02db:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358615 +0x02e3:  lea    -0xeb8(%ebp),%eax
0835861b +0x02e9:  mov    %eax,(%esp)
0835861e +0x02ec:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358623 +0x02f1:  movl   $"\t- Failed to import < OldEquipmentStatInfo.dat >",0x4(%esp)
0835862b +0x02f9:  lea    -0xeb8(%ebp),%eax
08358631 +0x02ff:  mov    %eax,(%esp)
08358634 +0x0302:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358639 +0x0307:  jmp    083586fe <+0x3cc>
0835863e +0x030c:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08358643 +0x0311:  mov    %eax,(%esp)
08358646 +0x0314:  call   08624c96 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv>  ; sync_script::CSyncScript::truncate_old_equip_info_table()
0835864b +0x0319:  xor    $0x1,%eax
0835864e +0x031c:  test   %al,%al
08358650 +0x031e:  je     0835869e <+0x36c>
08358652 +0x0320:  movl   $0x1,0x14(%esp)
0835865a +0x0328:  movl   $0x1,0x10(%esp)
08358662 +0x0330:  movl   $0x9,0xc(%esp)
0835866a +0x0338:  movl   $0x1993,0x8(%esp)
08358672 +0x0340:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835867a +0x0348:  lea    -0xea8(%ebp),%eax
08358680 +0x034e:  mov    %eax,(%esp)
08358683 +0x0351:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358688 +0x0356:  movl   $"\t- Failed to < TRUNCATE OLD EQUIP INFO TABLE >",0x4(%esp)
08358690 +0x035e:  lea    -0xea8(%ebp),%eax
08358696 +0x0364:  mov    %eax,(%esp)
08358699 +0x0367:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835869e +0x036c:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
083586a3 +0x0371:  mov    %eax,(%esp)
083586a6 +0x0374:  call   08624d1a <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv>  ; sync_script::CSyncScript::insert_old_equip_info_to_db()
083586ab +0x0379:  xor    $0x1,%eax
083586ae +0x037c:  test   %al,%al
083586b0 +0x037e:  je     083586fe <+0x3cc>
083586b2 +0x0380:  movl   $0x1,0x14(%esp)
083586ba +0x0388:  movl   $0x1,0x10(%esp)
083586c2 +0x0390:  movl   $0x9,0xc(%esp)
083586ca +0x0398:  movl   $0x1996,0x8(%esp)
083586d2 +0x03a0:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083586da +0x03a8:  lea    -0xe98(%ebp),%eax
083586e0 +0x03ae:  mov    %eax,(%esp)
083586e3 +0x03b1:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083586e8 +0x03b6:  movl   $"\t- Failed to < INSERT OLD EQUIP INFO TO DB >",0x4(%esp)
083586f0 +0x03be:  lea    -0xe98(%ebp),%eax
083586f6 +0x03c4:  mov    %eax,(%esp)
083586f9 +0x03c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083586fe +0x03cc:  mov    0x8(%ebp),%eax
08358701 +0x03cf:  add    $0x68,%eax
08358704 +0x03d2:  movl   $"Etc/ServerParameter.etc",0x4(%esp)
0835870c +0x03da:  mov    %eax,(%esp)
0835870f +0x03dd:  call   08a870b7 <_Z27importServerParameterScriptP21ServerParameterScriptPKc>  ; importServerParameterScript(ServerParameterScript*, char const*)
08358714 +0x03e2:  xor    $0x1,%eax
08358717 +0x03e5:  test   %al,%al
08358719 +0x03e7:  je     08358771 <+0x43f>
0835871b +0x03e9:  movl   $0x1,0x14(%esp)
08358723 +0x03f1:  movl   $0x1,0x10(%esp)
0835872b +0x03f9:  movl   $0x9,0xc(%esp)
08358733 +0x0401:  movl   $0x1a35,0x8(%esp)
0835873b +0x0409:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358743 +0x0411:  lea    -0xe88(%ebp),%eax
08358749 +0x0417:  mov    %eax,(%esp)
0835874c +0x041a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358751 +0x041f:  movl   $"\t- importServerParameterScript Fail",0x4(%esp)
08358759 +0x0427:  lea    -0xe88(%ebp),%eax
0835875f +0x042d:  mov    %eax,(%esp)
08358762 +0x0430:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358767 +0x0435:  mov    $0x0,%ebx
0835876c +0x043a:  jmp    0835f1c8 <+0x6e96>
08358771 +0x043f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08358776 +0x0444:  mov    0x1a8(%eax),%eax
0835877c +0x044a:  cmp    $0x2,%eax
0835877f +0x044d:  sete   %al
08358782 +0x0450:  test   %al,%al
08358784 +0x0452:  je     083587ab <+0x479>
08358786 +0x0454:  mov    0x8(%ebp),%eax
08358789 +0x0457:  lea    0x3e0(%eax),%edx
0835878f +0x045d:  mov    0x8(%ebp),%eax
08358792 +0x0460:  add    $0x3d0,%eax
08358797 +0x0465:  movl   $0x10,0x8(%esp)
0835879f +0x046d:  mov    %edx,0x4(%esp)
083587a3 +0x0471:  mov    %eax,(%esp)
083587a6 +0x0474:  call   0807d8a0 <_init+0x198>
083587ab +0x0479:  mov    0x8(%ebp),%eax
083587ae +0x047c:  add    $0x4a5c,%eax
083587b3 +0x0481:  movl   $"Etc/IngameAdvertisementParameter.etc",0x4(%esp)
083587bb +0x0489:  mov    %eax,(%esp)
083587be +0x048c:  call   0897e9c4 <_Z34importInGameAdvertisementEtcScriptP25InGameAdvertisementScriptPKc>  ; importInGameAdvertisementEtcScript(InGameAdvertisementScript*, char const*)
083587c3 +0x0491:  xor    $0x1,%eax
083587c6 +0x0494:  test   %al,%al
083587c8 +0x0496:  je     08358820 <+0x4ee>
083587ca +0x0498:  movl   $0x1,0x14(%esp)
083587d2 +0x04a0:  movl   $0x1,0x10(%esp)
083587da +0x04a8:  movl   $0x9,0xc(%esp)
083587e2 +0x04b0:  movl   $0x1a4a,0x8(%esp)
083587ea +0x04b8:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083587f2 +0x04c0:  lea    -0xe78(%ebp),%eax
083587f8 +0x04c6:  mov    %eax,(%esp)
083587fb +0x04c9:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358800 +0x04ce:  movl   $"\t- importInGameAdvertisementEtcScript Fail",0x4(%esp)
08358808 +0x04d6:  lea    -0xe78(%ebp),%eax
0835880e +0x04dc:  mov    %eax,(%esp)
08358811 +0x04df:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358816 +0x04e4:  mov    $0x0,%ebx
0835881b +0x04e9:  jmp    0835f1c8 <+0x6e96>
08358820 +0x04ee:  mov    0x8(%ebp),%eax
08358823 +0x04f1:  add    $0x4b70,%eax
08358828 +0x04f6:  movl   $"Event/SeriaRoomDecoEvent.evt",0x4(%esp)
08358830 +0x04fe:  mov    %eax,(%esp)
08358833 +0x0501:  call   0895e4bf <_Z24importSeriaRoomDecoEventP24seriaRoomDecoEventScriptPKc>  ; importSeriaRoomDecoEvent(seriaRoomDecoEventScript*, char const*)
08358838 +0x0506:  xor    $0x1,%eax
0835883b +0x0509:  test   %al,%al
0835883d +0x050b:  je     08358895 <+0x563>
0835883f +0x050d:  movl   $0x1,0x14(%esp)
08358847 +0x0515:  movl   $0x1,0x10(%esp)
0835884f +0x051d:  movl   $0x9,0xc(%esp)
08358857 +0x0525:  movl   $0x1a53,0x8(%esp)
0835885f +0x052d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358867 +0x0535:  lea    -0xe68(%ebp),%eax
0835886d +0x053b:  mov    %eax,(%esp)
08358870 +0x053e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358875 +0x0543:  movl   $"\t- SeriaRoomDecoEventScript Fail!",0x4(%esp)
0835887d +0x054b:  lea    -0xe68(%ebp),%eax
08358883 +0x0551:  mov    %eax,(%esp)
08358886 +0x0554:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835888b +0x0559:  mov    $0x0,%ebx
08358890 +0x055e:  jmp    0835f1c8 <+0x6e96>
08358895 +0x0563:  mov    0x8(%ebp),%eax
08358898 +0x0566:  add    $0x4bac,%eax
0835889d +0x056b:  movl   $"Event/GrowthWeapon.evt",0x4(%esp)
083588a5 +0x0573:  mov    %eax,(%esp)
083588a8 +0x0576:  call   0895eb3f <_Z27importGrowthEquipmentScriptP21growthEquipmentScriptPKc>  ; importGrowthEquipmentScript(growthEquipmentScript*, char const*)
083588ad +0x057b:  xor    $0x1,%eax
083588b0 +0x057e:  test   %al,%al
083588b2 +0x0580:  je     0835890a <+0x5d8>
083588b4 +0x0582:  movl   $0x1,0x14(%esp)
083588bc +0x058a:  movl   $0x1,0x10(%esp)
083588c4 +0x0592:  movl   $0x9,0xc(%esp)
083588cc +0x059a:  movl   $0x1a5b,0x8(%esp)
083588d4 +0x05a2:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083588dc +0x05aa:  lea    -0xe58(%ebp),%eax
083588e2 +0x05b0:  mov    %eax,(%esp)
083588e5 +0x05b3:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083588ea +0x05b8:  movl   $"\t- GrownEquipmentScript Fail!",0x4(%esp)
083588f2 +0x05c0:  lea    -0xe58(%ebp),%eax
083588f8 +0x05c6:  mov    %eax,(%esp)
083588fb +0x05c9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358900 +0x05ce:  mov    $0x0,%ebx
08358905 +0x05d3:  jmp    0835f1c8 <+0x6e96>
0835890a +0x05d8:  mov    0x8(%ebp),%eax
0835890d +0x05db:  add    $0x4bd4,%eax
08358912 +0x05e0:  movl   $"Event/CreateCharacterGift.evt",0x4(%esp)
0835891a +0x05e8:  mov    %eax,(%esp)
0835891d +0x05eb:  call   0895eda1 <_Z31importCharacterCreateGiftScriptP17createChracScriptPKc>  ; importCharacterCreateGiftScript(createChracScript*, char const*)
08358922 +0x05f0:  xor    $0x1,%eax
08358925 +0x05f3:  test   %al,%al
08358927 +0x05f5:  je     0835897f <+0x64d>
08358929 +0x05f7:  movl   $0x1,0x14(%esp)
08358931 +0x05ff:  movl   $0x1,0x10(%esp)
08358939 +0x0607:  movl   $0x9,0xc(%esp)
08358941 +0x060f:  movl   $0x1a63,0x8(%esp)
08358949 +0x0617:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358951 +0x061f:  lea    -0xe48(%ebp),%eax
08358957 +0x0625:  mov    %eax,(%esp)
0835895a +0x0628:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835895f +0x062d:  movl   $"\t- CharacterCreateGiftScript Fail!",0x4(%esp)
08358967 +0x0635:  lea    -0xe48(%ebp),%eax
0835896d +0x063b:  mov    %eax,(%esp)
08358970 +0x063e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358975 +0x0643:  mov    $0x0,%ebx
0835897a +0x0648:  jmp    0835f1c8 <+0x6e96>
0835897f +0x064d:  mov    0x8(%ebp),%eax
08358982 +0x0650:  add    $0x4bec,%eax
08358987 +0x0655:  movl   $"Event/JobFatigue.evt",0x4(%esp)
0835898f +0x065d:  mov    %eax,(%esp)
08358992 +0x0660:  call   0895f817 <_Z29importUseJobFatigueGiftScriptP22useCharacterJobFatiguePKc>  ; importUseJobFatigueGiftScript(useCharacterJobFatigue*, char const*)
08358997 +0x0665:  xor    $0x1,%eax
0835899a +0x0668:  test   %al,%al
0835899c +0x066a:  je     083589f4 <+0x6c2>
0835899e +0x066c:  movl   $0x1,0x14(%esp)
083589a6 +0x0674:  movl   $0x1,0x10(%esp)
083589ae +0x067c:  movl   $0x9,0xc(%esp)
083589b6 +0x0684:  movl   $0x1a6b,0x8(%esp)
083589be +0x068c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083589c6 +0x0694:  lea    -0xe38(%ebp),%eax
083589cc +0x069a:  mov    %eax,(%esp)
083589cf +0x069d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083589d4 +0x06a2:  movl   $"\t- UseJobFatigueGiftScript Fail!",0x4(%esp)
083589dc +0x06aa:  lea    -0xe38(%ebp),%eax
083589e2 +0x06b0:  mov    %eax,(%esp)
083589e5 +0x06b3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083589ea +0x06b8:  mov    $0x0,%ebx
083589ef +0x06bd:  jmp    0835f1c8 <+0x6e96>
083589f4 +0x06c2:  mov    0x8(%ebp),%eax
083589f7 +0x06c5:  add    $0x4c04,%eax
083589fc +0x06ca:  movl   $"Event/CreateCharacterGiftCreature.evt",0x4(%esp)
08358a04 +0x06d2:  mov    %eax,(%esp)
08358a07 +0x06d5:  call   0896001a <_Z39importCharacterCreateCreatureGiftScriptP33CharacterCreateCreatureGiftScriptPKc>  ; importCharacterCreateCreatureGiftScript(CharacterCreateCreatureGiftScript*, char const*)
08358a0c +0x06da:  xor    $0x1,%eax
08358a0f +0x06dd:  test   %al,%al
08358a11 +0x06df:  je     08358a69 <+0x737>
08358a13 +0x06e1:  movl   $0x1,0x14(%esp)
08358a1b +0x06e9:  movl   $0x1,0x10(%esp)
08358a23 +0x06f1:  movl   $0x9,0xc(%esp)
08358a2b +0x06f9:  movl   $0x1a73,0x8(%esp)
08358a33 +0x0701:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358a3b +0x0709:  lea    -0xe28(%ebp),%eax
08358a41 +0x070f:  mov    %eax,(%esp)
08358a44 +0x0712:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358a49 +0x0717:  movl   $"\t- CharacterCreateCreatureGiftScript Fail!",0x4(%esp)
08358a51 +0x071f:  lea    -0xe28(%ebp),%eax
08358a57 +0x0725:  mov    %eax,(%esp)
08358a5a +0x0728:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358a5f +0x072d:  mov    $0x0,%ebx
08358a64 +0x0732:  jmp    0835f1c8 <+0x6e96>
08358a69 +0x0737:  mov    0x8(%ebp),%eax
08358a6c +0x073a:  add    $0x4c50,%eax
08358a71 +0x073f:  movl   $"Event/SeriaRoomDecoAnimation.evt",0x4(%esp)
08358a79 +0x0747:  mov    %eax,(%esp)
08358a7c +0x074a:  call   08960861 <_Z33importSeriaRoomAnimationDecoEventP27seriaRoomDecoAniEventScriptPKc>  ; importSeriaRoomAnimationDecoEvent(seriaRoomDecoAniEventScript*, char const*)
08358a81 +0x074f:  xor    $0x1,%eax
08358a84 +0x0752:  test   %al,%al
08358a86 +0x0754:  je     08358ade <+0x7ac>
08358a88 +0x0756:  movl   $0x1,0x14(%esp)
08358a90 +0x075e:  movl   $0x1,0x10(%esp)
08358a98 +0x0766:  movl   $0x9,0xc(%esp)
08358aa0 +0x076e:  movl   $0x1a7b,0x8(%esp)
08358aa8 +0x0776:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358ab0 +0x077e:  lea    -0xe18(%ebp),%eax
08358ab6 +0x0784:  mov    %eax,(%esp)
08358ab9 +0x0787:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358abe +0x078c:  movl   $"\t- SeriaRoomAnimationDecoEventScript Fail!",0x4(%esp)
08358ac6 +0x0794:  lea    -0xe18(%ebp),%eax
08358acc +0x079a:  mov    %eax,(%esp)
08358acf +0x079d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358ad4 +0x07a2:  mov    $0x0,%ebx
08358ad9 +0x07a7:  jmp    0835f1c8 <+0x6e96>
08358ade +0x07ac:  mov    0x8(%ebp),%eax
08358ae1 +0x07af:  add    $0xb628,%eax
08358ae6 +0x07b4:  movl   $"reward.evt",0x8(%esp)
08358aee +0x07bc:  movl   $"Event/EventReward/",0x4(%esp)
08358af6 +0x07c4:  mov    %eax,(%esp)
08358af9 +0x07c7:  call   080ef29c <_ZN11eventReward17importRewardTableEPKcS1_>  ; eventReward::importRewardTable(char const*, char const*)
08358afe +0x07cc:  test   %eax,%eax
08358b00 +0x07ce:  setne  %al
08358b03 +0x07d1:  test   %al,%al
08358b05 +0x07d3:  je     08358b5d <+0x82b>
08358b07 +0x07d5:  movl   $0x1,0x14(%esp)
08358b0f +0x07dd:  movl   $0x1,0x10(%esp)
08358b17 +0x07e5:  movl   $0x9,0xc(%esp)
08358b1f +0x07ed:  movl   $0x1a83,0x8(%esp)
08358b27 +0x07f5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358b2f +0x07fd:  lea    -0xe08(%ebp),%eax
08358b35 +0x0803:  mov    %eax,(%esp)
08358b38 +0x0806:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358b3d +0x080b:  movl   $"\t- JumpingCharacterEventScript Fail!",0x4(%esp)
08358b45 +0x0813:  lea    -0xe08(%ebp),%eax
08358b4b +0x0819:  mov    %eax,(%esp)
08358b4e +0x081c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358b53 +0x0821:  mov    $0x0,%ebx
08358b58 +0x0826:  jmp    0835f1c8 <+0x6e96>
08358b5d +0x082b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358b62 +0x0830:  movzbl 0x3bc(%eax),%eax
08358b69 +0x0837:  movzbl %al,%eax
08358b6c +0x083a:  mov    %eax,-0xf1c(%ebp)
08358b72 +0x0840:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358b77 +0x0845:  movzbl 0x3bd(%eax),%eax
08358b7e +0x084c:  movzbl %al,%eax
08358b81 +0x084f:  mov    %eax,-0xf18(%ebp)
08358b87 +0x0855:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358b8c +0x085a:  movzbl 0x3be(%eax),%eax
08358b93 +0x0861:  mov    $0x29,%edx
08358b98 +0x0866:  mul    %dl
08358b9a +0x0868:  shr    $0x8,%ax
08358b9e +0x086c:  shr    $0x4,%al
08358ba1 +0x086f:  movzbl %al,%eax
08358ba4 +0x0872:  mov    %eax,-0xf14(%ebp)
08358baa +0x0878:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358baf +0x087d:  movzbl 0x3be(%eax),%eax
08358bb6 +0x0884:  movzbl %al,%edx
08358bb9 +0x0887:  mov    -0xf14(%ebp),%eax
08358bbf +0x088d:  imul   $0xffffff9c,%eax,%eax
08358bc2 +0x0890:  lea    (%edx,%eax,1),%eax
08358bc5 +0x0893:  mov    %eax,-0xf10(%ebp)
08358bcb +0x0899:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358bd0 +0x089e:  movzbl 0x3bf(%eax),%eax
08358bd7 +0x08a5:  movzbl %al,%eax
08358bda +0x08a8:  mov    %eax,-0xf0c(%ebp)
08358be0 +0x08ae:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358be5 +0x08b3:  mov    -0xf1c(%ebp),%edx
08358beb +0x08b9:  imul   $0x989680,%edx,%ecx
08358bf1 +0x08bf:  mov    -0xf18(%ebp),%edx
08358bf7 +0x08c5:  imul   $&_ZL14gUnicodeBuffer+0xe174,%edx,%edx
08358bfd +0x08cb:  lea    (%ecx,%edx,1),%ebx
08358c00 +0x08ce:  mov    -0xf10(%ebp),%edx
08358c06 +0x08d4:  imul   $0x64,%edx,%ecx
08358c09 +0x08d7:  mov    -0xf14(%ebp),%edx
08358c0f +0x08dd:  imul   $0x2710,%edx,%edx
08358c15 +0x08e3:  lea    (%ecx,%edx,1),%edx
08358c18 +0x08e6:  lea    (%ebx,%edx,1),%ecx
08358c1b +0x08e9:  mov    -0xf0c(%ebp),%edx
08358c21 +0x08ef:  lea    (%ecx,%edx,1),%edx
08358c24 +0x08f2:  mov    %edx,0x3c4(%eax)
08358c2a +0x08f8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358c2f +0x08fd:  mov    0x3c4(%eax),%ebx
08358c35 +0x0903:  movl   $0x1,0x14(%esp)
08358c3d +0x090b:  movl   $0x1,0x10(%esp)
08358c45 +0x0913:  movl   $0x9,0xc(%esp)
08358c4d +0x091b:  movl   $0x1aa7,0x8(%esp)
08358c55 +0x0923:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358c5d +0x092b:  lea    -0xdf8(%ebp),%eax
08358c63 +0x0931:  mov    %eax,(%esp)
08358c66 +0x0934:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358c6b +0x0939:  mov    %ebx,0x8(%esp)
08358c6f +0x093d:  movl   $"\t- Server version for antibot : %d",0x4(%esp)
08358c77 +0x0945:  lea    -0xdf8(%ebp),%eax
08358c7d +0x094b:  mov    %eax,(%esp)
08358c80 +0x094e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358c85 +0x0953:  mov    0x8(%ebp),%eax
08358c88 +0x0956:  add    $0xb4c4,%eax
08358c8d +0x095b:  mov    %eax,0x4(%esp)
08358c91 +0x095f:  movl   $"Etc/ImageCommunication.etc",(%esp)
08358c98 +0x0966:  call   08913dbc <_Z28importImageCommunicationInfoPKcP22ImageCommunicationData>  ; importImageCommunicationInfo(char const*, ImageCommunicationData*)
08358c9d +0x096b:  xor    $0x1,%eax
08358ca0 +0x096e:  test   %al,%al
08358ca2 +0x0970:  je     08358cfa <+0x9c8>
08358ca4 +0x0972:  movl   $0x1,0x14(%esp)
08358cac +0x097a:  movl   $0x1,0x10(%esp)
08358cb4 +0x0982:  movl   $0x9,0xc(%esp)
08358cbc +0x098a:  movl   $0x1aad,0x8(%esp)
08358cc4 +0x0992:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358ccc +0x099a:  lea    -0xde8(%ebp),%eax
08358cd2 +0x09a0:  mov    %eax,(%esp)
08358cd5 +0x09a3:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358cda +0x09a8:  movl   $"\t- Import ImageCommunicationInfo Failed\n",0x4(%esp)
08358ce2 +0x09b0:  lea    -0xde8(%ebp),%eax
08358ce8 +0x09b6:  mov    %eax,(%esp)
08358ceb +0x09b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358cf0 +0x09be:  mov    $0x0,%ebx
08358cf5 +0x09c3:  jmp    0835f1c8 <+0x6e96>
08358cfa +0x09c8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08358cff +0x09cd:  add    $0x68,%eax
08358d02 +0x09d0:  mov    %eax,(%esp)
08358d05 +0x09d3:  call   083703e2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xa3ae>  ; global constructors keyed to CServerEvent::m_nExpRate+0xa3ae
08358d0a +0x09d8:  xor    $0x1,%eax
08358d0d +0x09db:  test   %al,%al
08358d0f +0x09dd:  je     08358d67 <+0xa35>
08358d11 +0x09df:  movl   $0x1,0x14(%esp)
08358d19 +0x09e7:  movl   $0x1,0x10(%esp)
08358d21 +0x09ef:  movl   $0x9,0xc(%esp)
08358d29 +0x09f7:  movl   $0x1ab7,0x8(%esp)
08358d31 +0x09ff:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358d39 +0x0a07:  lea    -0xdd8(%ebp),%eax
08358d3f +0x0a0d:  mov    %eax,(%esp)
08358d42 +0x0a10:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358d47 +0x0a15:  movl   $"\t- [training first give] error",0x4(%esp)
08358d4f +0x0a1d:  lea    -0xdd8(%ebp),%eax
08358d55 +0x0a23:  mov    %eax,(%esp)
08358d58 +0x0a26:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358d5d +0x0a2b:  mov    $0x0,%ebx
08358d62 +0x0a30:  jmp    0835f1c8 <+0x6e96>
08358d67 +0x0a35:  movl   $"expertjob.lst",0x4(%esp)
08358d6f +0x0a3d:  movl   $"Character/",(%esp)
08358d76 +0x0a44:  call   0896d830 <_Z19initExpertJobScriptPcS_>  ; initExpertJobScript(char*, char*)
08358d7b +0x0a49:  xor    $0x1,%eax
08358d7e +0x0a4c:  test   %al,%al
08358d80 +0x0a4e:  je     08358dd8 <+0xaa6>
08358d82 +0x0a50:  movl   $0x1,0x14(%esp)
08358d8a +0x0a58:  movl   $0x1,0x10(%esp)
08358d92 +0x0a60:  movl   $0x9,0xc(%esp)
08358d9a +0x0a68:  movl   $0x1abf,0x8(%esp)
08358da2 +0x0a70:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358daa +0x0a78:  lea    -0xdc8(%ebp),%eax
08358db0 +0x0a7e:  mov    %eax,(%esp)
08358db3 +0x0a81:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358db8 +0x0a86:  movl   $"\t- Load expertjob.lst fail",0x4(%esp)
08358dc0 +0x0a8e:  lea    -0xdc8(%ebp),%eax
08358dc6 +0x0a94:  mov    %eax,(%esp)
08358dc9 +0x0a97:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358dce +0x0a9c:  mov    $0x0,%ebx
08358dd3 +0x0aa1:  jmp    0835f1c8 <+0x6e96>
08358dd8 +0x0aa6:  movl   $0x48,(%esp)
08358ddf +0x0aad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08358de4 +0x0ab2:  mov    %eax,%ebx
08358de6 +0x0ab4:  mov    %ebx,%eax
08358de8 +0x0ab6:  mov    %eax,(%esp)
08358deb +0x0ab9:  call   08371834 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb800>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb800
08358df0 +0x0abe:  jmp    08358e0a <+0xad8>
08358df2 +0x0ac0:  mov    %edx,%esi
08358df4 +0x0ac2:  mov    %eax,%edi
08358df6 +0x0ac4:  mov    %ebx,(%esp)
08358df9 +0x0ac7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08358dfe +0x0acc:  mov    %edi,%eax
08358e00 +0x0ace:  mov    %esi,%edx
08358e02 +0x0ad0:  mov    %eax,(%esp)
08358e05 +0x0ad3:  call   08ae3750 <_Unwind_Resume>
08358e0a +0x0ad8:  mov    %ebx,%edx
08358e0c +0x0ada:  mov    0x8(%ebp),%eax
08358e0f +0x0add:  mov    %edx,0x5090(%eax)
08358e15 +0x0ae3:  mov    0x8(%ebp),%eax
08358e18 +0x0ae6:  mov    0x5090(%eax),%eax
08358e1e +0x0aec:  mov    %eax,(%esp)
08358e21 +0x0aef:  call   0896d8ec <_ZN14CExpertJobList4initEv>  ; CExpertJobList::init()
08358e26 +0x0af4:  xor    $0x1,%eax
08358e29 +0x0af7:  test   %al,%al
08358e2b +0x0af9:  je     08358e83 <+0xb51>
08358e2d +0x0afb:  movl   $0x1,0x14(%esp)
08358e35 +0x0b03:  movl   $0x1,0x10(%esp)
08358e3d +0x0b0b:  movl   $0x9,0xc(%esp)
08358e45 +0x0b13:  movl   $0x1ac5,0x8(%esp)
08358e4d +0x0b1b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358e55 +0x0b23:  lea    -0xdb8(%ebp),%eax
08358e5b +0x0b29:  mov    %eax,(%esp)
08358e5e +0x0b2c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358e63 +0x0b31:  movl   $"\t- Load expertjob fail",0x4(%esp)
08358e6b +0x0b39:  lea    -0xdb8(%ebp),%eax
08358e71 +0x0b3f:  mov    %eax,(%esp)
08358e74 +0x0b42:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358e79 +0x0b47:  mov    $0x0,%ebx
08358e7e +0x0b4c:  jmp    0835f1c8 <+0x6e96>
08358e83 +0x0b51:  mov    0x8(%ebp),%eax
08358e86 +0x0b54:  add    $0x5180,%eax
08358e8b +0x0b59:  mov    %eax,0x8(%esp)
08358e8f +0x0b5d:  movl   $"TowerList.lst",0x4(%esp)
08358e97 +0x0b65:  movl   $"Etc/",(%esp)
08358e9e +0x0b6c:  call   0890b8d0 <_Z15importTowerInfoPKcS0_RSt3mapIj14stDeathTower_tSt4lessIjESaISt4pairIKjS2_EEE>  ; importTowerInfo(char const*, char const*, std::map<unsigned int, stDeathTower_t, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, stDeathTower_t> > >&)
08358ea3 +0x0b71:  test   %eax,%eax
08358ea5 +0x0b73:  setne  %al
08358ea8 +0x0b76:  test   %al,%al
08358eaa +0x0b78:  je     08358ec2 <+0xb90>
08358eac +0x0b7a:  movl   $"importTowerInfo Faile",(%esp)
08358eb3 +0x0b81:  call   0807e570 <_init+0xe68>
08358eb8 +0x0b86:  mov    $0x0,%ebx
08358ebd +0x0b8b:  jmp    0835f1c8 <+0x6e96>
08358ec2 +0x0b90:  movl   $0x0,-0x3c(%ebp)
08358ec9 +0x0b97:  mov    0x8(%ebp),%eax
08358ecc +0x0b9a:  add    $0x5198,%eax
08358ed1 +0x0b9f:  mov    %eax,0x4(%esp)
08358ed5 +0x0ba3:  movl   $"Etc/DeathTower.etc",(%esp)
08358edc +0x0baa:  call   089089f3 <_Z22importDeathTowerScriptPKcR14stDeathTower_t>  ; importDeathTowerScript(char const*, stDeathTower_t&)
08358ee1 +0x0baf:  mov    %eax,-0x3c(%ebp)
08358ee4 +0x0bb2:  cmpl   $0x0,-0x3c(%ebp)
08358ee8 +0x0bb6:  setne  %al
08358eeb +0x0bb9:  test   %al,%al
08358eed +0x0bbb:  je     08358f4c <+0xc1a>
08358eef +0x0bbd:  movl   $0x1,0x14(%esp)
08358ef7 +0x0bc5:  movl   $0x1,0x10(%esp)
08358eff +0x0bcd:  movl   $0x9,0xc(%esp)
08358f07 +0x0bd5:  movl   $0x1ad4,0x8(%esp)
08358f0f +0x0bdd:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358f17 +0x0be5:  lea    -0xda8(%ebp),%eax
08358f1d +0x0beb:  mov    %eax,(%esp)
08358f20 +0x0bee:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358f25 +0x0bf3:  mov    -0x3c(%ebp),%eax
08358f28 +0x0bf6:  mov    %eax,0x8(%esp)
08358f2c +0x0bfa:  movl   $"\t- importDeathTowerScript Fail(%d)",0x4(%esp)
08358f34 +0x0c02:  lea    -0xda8(%ebp),%eax
08358f3a +0x0c08:  mov    %eax,(%esp)
08358f3d +0x0c0b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358f42 +0x0c10:  mov    $0x0,%ebx
08358f47 +0x0c15:  jmp    0835f1c8 <+0x6e96>
08358f4c +0x0c1a:  mov    0x8(%ebp),%eax
08358f4f +0x0c1d:  add    $0x5108,%eax
08358f54 +0x0c22:  mov    %eax,0x4(%esp)
08358f58 +0x0c26:  movl   $"Etc/RankSystemInfo.etc",(%esp)
08358f5f +0x0c2d:  call   0890ed7f <_Z22importRankSystemScriptPKcP16stRankSystemInfo>  ; importRankSystemScript(char const*, stRankSystemInfo*)
08358f64 +0x0c32:  xor    $0x1,%eax
08358f67 +0x0c35:  test   %al,%al
08358f69 +0x0c37:  je     08358fc1 <+0xc8f>
08358f6b +0x0c39:  movl   $0x1,0x14(%esp)
08358f73 +0x0c41:  movl   $0x1,0x10(%esp)
08358f7b +0x0c49:  movl   $0x9,0xc(%esp)
08358f83 +0x0c51:  movl   $0x1ada,0x8(%esp)
08358f8b +0x0c59:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08358f93 +0x0c61:  lea    -0xd98(%ebp),%eax
08358f99 +0x0c67:  mov    %eax,(%esp)
08358f9c +0x0c6a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08358fa1 +0x0c6f:  movl   $"\t- importRankSystemScript Fail",0x4(%esp)
08358fa9 +0x0c77:  lea    -0xd98(%ebp),%eax
08358faf +0x0c7d:  mov    %eax,(%esp)
08358fb2 +0x0c80:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08358fb7 +0x0c85:  mov    $0x0,%ebx
08358fbc +0x0c8a:  jmp    0835f1c8 <+0x6e96>
08358fc1 +0x0c8f:  movl   $0x0,-0x38(%ebp)
08358fc8 +0x0c96:  mov    0x8(%ebp),%eax
08358fcb +0x0c99:  add    $0x5e30,%eax
08358fd0 +0x0c9e:  mov    %eax,0x4(%esp)
08358fd4 +0x0ca2:  movl   $"Etc/BloodClearReward.etc",(%esp)
08358fdb +0x0ca9:  call   08909016 <_Z24importBloodDungeonScriptPKcR16stBloodDungeon_t>  ; importBloodDungeonScript(char const*, stBloodDungeon_t&)
08358fe0 +0x0cae:  mov    %eax,-0x38(%ebp)
08358fe3 +0x0cb1:  cmpl   $0x0,-0x38(%ebp)
08358fe7 +0x0cb5:  setne  %al
08358fea +0x0cb8:  test   %al,%al
08358fec +0x0cba:  je     0835904b <+0xd19>
08358fee +0x0cbc:  movl   $0x1,0x14(%esp)
08358ff6 +0x0cc4:  movl   $0x1,0x10(%esp)
08358ffe +0x0ccc:  movl   $0x9,0xc(%esp)
08359006 +0x0cd4:  movl   $0x1ae1,0x8(%esp)
0835900e +0x0cdc:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359016 +0x0ce4:  lea    -0xd88(%ebp),%eax
0835901c +0x0cea:  mov    %eax,(%esp)
0835901f +0x0ced:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359024 +0x0cf2:  mov    -0x38(%ebp),%eax
08359027 +0x0cf5:  mov    %eax,0x8(%esp)
0835902b +0x0cf9:  movl   $"\t- importBloodDungeonScript Fail(%d)",0x4(%esp)
08359033 +0x0d01:  lea    -0xd88(%ebp),%eax
08359039 +0x0d07:  mov    %eax,(%esp)
0835903c +0x0d0a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359041 +0x0d0f:  mov    $0x0,%ebx
08359046 +0x0d14:  jmp    0835f1c8 <+0x6e96>
0835904b +0x0d19:  movl   $0x0,-0x38(%ebp)
08359052 +0x0d20:  call   089097c4 <_Z26Get_instance_stHellParty_tv>  ; Get_instance_stHellParty_t()
08359057 +0x0d25:  mov    %eax,0x4(%esp)
0835905b +0x0d29:  movl   $"Etc/HellParty.etc",(%esp)
08359062 +0x0d30:  call   08909857 <_Z21importHellPartyScriptPKcR13stHellParty_t>  ; importHellPartyScript(char const*, stHellParty_t&)
08359067 +0x0d35:  mov    %eax,-0x38(%ebp)
0835906a +0x0d38:  cmpl   $0x0,-0x38(%ebp)
0835906e +0x0d3c:  setne  %al
08359071 +0x0d3f:  test   %al,%al
08359073 +0x0d41:  je     083590d2 <+0xda0>
08359075 +0x0d43:  movl   $0x1,0x14(%esp)
0835907d +0x0d4b:  movl   $0x1,0x10(%esp)
08359085 +0x0d53:  movl   $0x9,0xc(%esp)
0835908d +0x0d5b:  movl   $0x1ae8,0x8(%esp)
08359095 +0x0d63:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835909d +0x0d6b:  lea    -0xd78(%ebp),%eax
083590a3 +0x0d71:  mov    %eax,(%esp)
083590a6 +0x0d74:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083590ab +0x0d79:  mov    -0x38(%ebp),%eax
083590ae +0x0d7c:  mov    %eax,0x8(%esp)
083590b2 +0x0d80:  movl   $"\t- importHellPartyScript Fail(%d)",0x4(%esp)
083590ba +0x0d88:  lea    -0xd78(%ebp),%eax
083590c0 +0x0d8e:  mov    %eax,(%esp)
083590c3 +0x0d91:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083590c8 +0x0d96:  mov    $0x0,%ebx
083590cd +0x0d9b:  jmp    0835f1c8 <+0x6e96>
083590d2 +0x0da0:  movl   $0x0,-0x38(%ebp)
083590d9 +0x0da7:  mov    0x8(%ebp),%eax
083590dc +0x0daa:  add    $0x629c,%eax
083590e1 +0x0daf:  mov    %eax,0x4(%esp)
083590e5 +0x0db3:  movl   $"Etc/LinkSystem/CharacLinkSystem.etc",(%esp)
083590ec +0x0dba:  call   08909529 <_Z28importCharacLinkSystemScriptPKcR20stCharacLinkSystem_t>  ; importCharacLinkSystemScript(char const*, stCharacLinkSystem_t&)
083590f1 +0x0dbf:  mov    %eax,-0x38(%ebp)
083590f4 +0x0dc2:  cmpl   $0x0,-0x38(%ebp)
083590f8 +0x0dc6:  setne  %al
083590fb +0x0dc9:  test   %al,%al
083590fd +0x0dcb:  je     0835915c <+0xe2a>
083590ff +0x0dcd:  movl   $0x1,0x14(%esp)
08359107 +0x0dd5:  movl   $0x1,0x10(%esp)
0835910f +0x0ddd:  movl   $0x9,0xc(%esp)
08359117 +0x0de5:  movl   $0x1af3,0x8(%esp)
0835911f +0x0ded:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359127 +0x0df5:  lea    -0xd68(%ebp),%eax
0835912d +0x0dfb:  mov    %eax,(%esp)
08359130 +0x0dfe:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359135 +0x0e03:  mov    -0x38(%ebp),%eax
08359138 +0x0e06:  mov    %eax,0x8(%esp)
0835913c +0x0e0a:  movl   $"\t- importCharacLinkSystemScript Fail(%d)",0x4(%esp)
08359144 +0x0e12:  lea    -0xd68(%ebp),%eax
0835914a +0x0e18:  mov    %eax,(%esp)
0835914d +0x0e1b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359152 +0x0e20:  mov    $0x0,%ebx
08359157 +0x0e25:  jmp    0835f1c8 <+0x6e96>
0835915c +0x0e2a:  call   08a9d836 <_ZN13StrikerScript10getInsanceEv>  ; StrikerScript::getInsance()
08359161 +0x0e2f:  mov    0x8(%ebp),%edx
08359164 +0x0e32:  mov    %eax,0x6390(%edx)
0835916a +0x0e38:  mov    0x8(%ebp),%eax
0835916d +0x0e3b:  mov    0x6390(%eax),%eax
08359173 +0x0e41:  movl   $"Etc/LinkSystem/striker.etc",0x4(%esp)
0835917b +0x0e49:  mov    %eax,(%esp)
0835917e +0x0e4c:  call   08a9ddb2 <_ZN13StrikerScript12importScriptEPKc>  ; StrikerScript::importScript(char const*)
08359183 +0x0e51:  xor    $0x1,%eax
08359186 +0x0e54:  test   %al,%al
08359188 +0x0e56:  je     083591e0 <+0xeae>
0835918a +0x0e58:  movl   $0x1,0x14(%esp)
08359192 +0x0e60:  movl   $0x1,0x10(%esp)
0835919a +0x0e68:  movl   $0x9,0xc(%esp)
083591a2 +0x0e70:  movl   $0x1afb,0x8(%esp)
083591aa +0x0e78:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083591b2 +0x0e80:  lea    -0xd58(%ebp),%eax
083591b8 +0x0e86:  mov    %eax,(%esp)
083591bb +0x0e89:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083591c0 +0x0e8e:  movl   $"\t- importStrikerScript Fail",0x4(%esp)
083591c8 +0x0e96:  lea    -0xd58(%ebp),%eax
083591ce +0x0e9c:  mov    %eax,(%esp)
083591d1 +0x0e9f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083591d6 +0x0ea4:  mov    $0x0,%ebx
083591db +0x0ea9:  jmp    0835f1c8 <+0x6e96>
083591e0 +0x0eae:  call   088e0674 <_ZN18CharacManageScript10getInsanceEv>  ; CharacManageScript::getInsance()
083591e5 +0x0eb3:  mov    0x8(%ebp),%edx
083591e8 +0x0eb6:  mov    %eax,0x6394(%edx)
083591ee +0x0ebc:  mov    0x8(%ebp),%eax
083591f1 +0x0ebf:  mov    0x6394(%eax),%eax
083591f7 +0x0ec5:  movl   $"Etc/LinkSystem/CharacterManage.etc",0x4(%esp)
083591ff +0x0ecd:  mov    %eax,(%esp)
08359202 +0x0ed0:  call   088e0968 <_ZN18CharacManageScript12importScriptEPKc>  ; CharacManageScript::importScript(char const*)
08359207 +0x0ed5:  xor    $0x1,%eax
0835920a +0x0ed8:  test   %al,%al
0835920c +0x0eda:  je     08359264 <+0xf32>
0835920e +0x0edc:  movl   $0x1,0x14(%esp)
08359216 +0x0ee4:  movl   $0x1,0x10(%esp)
0835921e +0x0eec:  movl   $0x9,0xc(%esp)
08359226 +0x0ef4:  movl   $0x1b02,0x8(%esp)
0835922e +0x0efc:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359236 +0x0f04:  lea    -0xd48(%ebp),%eax
0835923c +0x0f0a:  mov    %eax,(%esp)
0835923f +0x0f0d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359244 +0x0f12:  movl   $"\t- importCharacterManageScript Fail",0x4(%esp)
0835924c +0x0f1a:  lea    -0xd48(%ebp),%eax
08359252 +0x0f20:  mov    %eax,(%esp)
08359255 +0x0f23:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835925a +0x0f28:  mov    $0x0,%ebx
0835925f +0x0f2d:  jmp    0835f1c8 <+0x6e96>
08359264 +0x0f32:  call   088d60f2 <_ZN23BlueMarbleScriptManager10getInsanceEv>  ; BlueMarbleScriptManager::getInsance()
08359269 +0x0f37:  mov    0x8(%ebp),%edx
0835926c +0x0f3a:  mov    %eax,0xb4a8(%edx)
08359272 +0x0f40:  mov    0x8(%ebp),%eax
08359275 +0x0f43:  mov    0xb4a8(%eax),%eax
0835927b +0x0f49:  movl   $"BlueMarbleTile.lst",0x8(%esp)
08359283 +0x0f51:  movl   $"Event/BlueMarble/",0x4(%esp)
0835928b +0x0f59:  mov    %eax,(%esp)
0835928e +0x0f5c:  call   088d626e <_ZN23BlueMarbleScriptManager12initTileListEPKcS1_>  ; BlueMarbleScriptManager::initTileList(char const*, char const*)
08359293 +0x0f61:  xor    $0x1,%eax
08359296 +0x0f64:  test   %al,%al
08359298 +0x0f66:  je     083592f0 <+0xfbe>
0835929a +0x0f68:  movl   $0x1,0x14(%esp)
083592a2 +0x0f70:  movl   $0x1,0x10(%esp)
083592aa +0x0f78:  movl   $0x9,0xc(%esp)
083592b2 +0x0f80:  movl   $0x1b14,0x8(%esp)
083592ba +0x0f88:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083592c2 +0x0f90:  lea    -0xd38(%ebp),%eax
083592c8 +0x0f96:  mov    %eax,(%esp)
083592cb +0x0f99:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083592d0 +0x0f9e:  movl   $"\t- BlueMarble initTileList Fail\n",0x4(%esp)
083592d8 +0x0fa6:  lea    -0xd38(%ebp),%eax
083592de +0x0fac:  mov    %eax,(%esp)
083592e1 +0x0faf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083592e6 +0x0fb4:  mov    $0x0,%ebx
083592eb +0x0fb9:  jmp    0835f1c8 <+0x6e96>
083592f0 +0x0fbe:  mov    0x8(%ebp),%eax
083592f3 +0x0fc1:  mov    0xb4a8(%eax),%eax
083592f9 +0x0fc7:  movl   $"BlueMarbleMap.lst",0x8(%esp)
08359301 +0x0fcf:  movl   $"Event/BlueMarble/",0x4(%esp)
08359309 +0x0fd7:  mov    %eax,(%esp)
0835930c +0x0fda:  call   088d6438 <_ZN23BlueMarbleScriptManager11initMapListEPKcS1_>  ; BlueMarbleScriptManager::initMapList(char const*, char const*)
08359311 +0x0fdf:  xor    $0x1,%eax
08359314 +0x0fe2:  test   %al,%al
08359316 +0x0fe4:  je     0835936e <+0x103c>
08359318 +0x0fe6:  movl   $0x1,0x14(%esp)
08359320 +0x0fee:  movl   $0x1,0x10(%esp)
08359328 +0x0ff6:  movl   $0x9,0xc(%esp)
08359330 +0x0ffe:  movl   $0x1b1a,0x8(%esp)
08359338 +0x1006:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359340 +0x100e:  lea    -0xd28(%ebp),%eax
08359346 +0x1014:  mov    %eax,(%esp)
08359349 +0x1017:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835934e +0x101c:  movl   $"\t- BlueMarble initMapList Fail\n",0x4(%esp)
08359356 +0x1024:  lea    -0xd28(%ebp),%eax
0835935c +0x102a:  mov    %eax,(%esp)
0835935f +0x102d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359364 +0x1032:  mov    $0x0,%ebx
08359369 +0x1037:  jmp    0835f1c8 <+0x6e96>
0835936e +0x103c:  mov    0x8(%ebp),%eax
08359371 +0x103f:  mov    0xb4a8(%eax),%eax
08359377 +0x1045:  movl   $"BlueMarble.blu",0x8(%esp)
0835937f +0x104d:  movl   $"Event/BlueMarble/",0x4(%esp)
08359387 +0x1055:  mov    %eax,(%esp)
0835938a +0x1058:  call   088d6622 <_ZN23BlueMarbleScriptManager18initBlueMarbleInfoEPKcS1_>  ; BlueMarbleScriptManager::initBlueMarbleInfo(char const*, char const*)
0835938f +0x105d:  xor    $0x1,%eax
08359392 +0x1060:  test   %al,%al
08359394 +0x1062:  je     083593ec <+0x10ba>
08359396 +0x1064:  movl   $0x1,0x14(%esp)
0835939e +0x106c:  movl   $0x1,0x10(%esp)
083593a6 +0x1074:  movl   $0x9,0xc(%esp)
083593ae +0x107c:  movl   $0x1b20,0x8(%esp)
083593b6 +0x1084:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083593be +0x108c:  lea    -0xd18(%ebp),%eax
083593c4 +0x1092:  mov    %eax,(%esp)
083593c7 +0x1095:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083593cc +0x109a:  movl   $"\t- BlueMarble initBlueMarbleInfo Fail\n",0x4(%esp)
083593d4 +0x10a2:  lea    -0xd18(%ebp),%eax
083593da +0x10a8:  mov    %eax,(%esp)
083593dd +0x10ab:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083593e2 +0x10b0:  mov    $0x0,%ebx
083593e7 +0x10b5:  jmp    0835f1c8 <+0x6e96>
083593ec +0x10ba:  movl   $0x0,-0x38(%ebp)
083593f3 +0x10c1:  mov    0x8(%ebp),%eax
083593f6 +0x10c4:  add    $0x6398,%eax
083593fb +0x10c9:  mov    %eax,0x4(%esp)
083593ff +0x10cd:  movl   $"Etc/questshop.etc",(%esp)
08359406 +0x10d4:  call   0890fa3d <_Z21importQuestShopScriptPKcR11stQuestShop>  ; importQuestShopScript(char const*, stQuestShop&)
0835940b +0x10d9:  mov    %eax,-0x38(%ebp)
0835940e +0x10dc:  cmpl   $0x0,-0x38(%ebp)
08359412 +0x10e0:  setne  %al
08359415 +0x10e3:  test   %al,%al
08359417 +0x10e5:  je     08359476 <+0x1144>
08359419 +0x10e7:  movl   $0x1,0x14(%esp)
08359421 +0x10ef:  movl   $0x1,0x10(%esp)
08359429 +0x10f7:  movl   $0x9,0xc(%esp)
08359431 +0x10ff:  movl   $0x1b4f,0x8(%esp)
08359439 +0x1107:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359441 +0x110f:  lea    -0xd08(%ebp),%eax
08359447 +0x1115:  mov    %eax,(%esp)
0835944a +0x1118:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835944f +0x111d:  mov    -0x38(%ebp),%eax
08359452 +0x1120:  mov    %eax,0x8(%esp)
08359456 +0x1124:  movl   $"\t- importQuestShopScript Fail(%d)",0x4(%esp)
0835945e +0x112c:  lea    -0xd08(%ebp),%eax
08359464 +0x1132:  mov    %eax,(%esp)
08359467 +0x1135:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835946c +0x113a:  mov    $0x0,%ebx
08359471 +0x113f:  jmp    0835f1c8 <+0x6e96>
08359476 +0x1144:  movl   $"IndependentDrop.lst",0x4(%esp)
0835947e +0x114c:  movl   $"Etc/",(%esp)
08359485 +0x1153:  call   0897c01c <_Z25initIndependentDropScriptPcS_>  ; initIndependentDropScript(char*, char*)
0835948a +0x1158:  xor    $0x1,%eax
0835948d +0x115b:  test   %al,%al
0835948f +0x115d:  je     083594e7 <+0x11b5>
08359491 +0x115f:  movl   $0x1,0x14(%esp)
08359499 +0x1167:  movl   $0x1,0x10(%esp)
083594a1 +0x116f:  movl   $0x9,0xc(%esp)
083594a9 +0x1177:  movl   $0x1b56,0x8(%esp)
083594b1 +0x117f:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083594b9 +0x1187:  lea    -0xcf8(%ebp),%eax
083594bf +0x118d:  mov    %eax,(%esp)
083594c2 +0x1190:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083594c7 +0x1195:  movl   $"\t- Load IndependentDrop.lst fail",0x4(%esp)
083594cf +0x119d:  lea    -0xcf8(%ebp),%eax
083594d5 +0x11a3:  mov    %eax,(%esp)
083594d8 +0x11a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083594dd +0x11ab:  mov    $0x0,%ebx
083594e2 +0x11b0:  jmp    0835f1c8 <+0x6e96>
083594e7 +0x11b5:  mov    0x8(%ebp),%eax
083594ea +0x11b8:  add    $0xa884,%eax
083594ef +0x11bd:  mov    %eax,(%esp)
083594f2 +0x11c0:  call   0897c0d8 <_ZN30IndependentDropParameterScript26load_independent_drop_listEv>  ; IndependentDropParameterScript::load_independent_drop_list()
083594f7 +0x11c5:  xor    $0x1,%eax
083594fa +0x11c8:  test   %al,%al
083594fc +0x11ca:  je     08359554 <+0x1222>
083594fe +0x11cc:  movl   $0x1,0x14(%esp)
08359506 +0x11d4:  movl   $0x1,0x10(%esp)
0835950e +0x11dc:  movl   $0x9,0xc(%esp)
08359516 +0x11e4:  movl   $0x1b5c,0x8(%esp)
0835951e +0x11ec:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359526 +0x11f4:  lea    -0xce8(%ebp),%eax
0835952c +0x11fa:  mov    %eax,(%esp)
0835952f +0x11fd:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359534 +0x1202:  movl   $"\t- Load IndependentDrop.lst fail",0x4(%esp)
0835953c +0x120a:  lea    -0xce8(%ebp),%eax
08359542 +0x1210:  mov    %eax,(%esp)
08359545 +0x1213:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835954a +0x1218:  mov    $0x0,%ebx
0835954f +0x121d:  jmp    0835f1c8 <+0x6e96>
08359554 +0x1222:  movl   $0x0,-0x38(%ebp)
0835955b +0x1229:  mov    0x8(%ebp),%eax
0835955e +0x122c:  add    $0xa884,%eax
08359563 +0x1231:  movl   $"Etc/Independent_Drop.etc",0x4(%esp)
0835956b +0x1239:  mov    %eax,(%esp)
0835956e +0x123c:  call   0897c398 <_ZN30IndependentDropParameterScript21ImportIndependentDropEPKc>  ; IndependentDropParameterScript::ImportIndependentDrop(char const*)
08359573 +0x1241:  mov    %eax,-0x38(%ebp)
08359576 +0x1244:  cmpl   $0x0,-0x38(%ebp)
0835957a +0x1248:  setne  %al
0835957d +0x124b:  test   %al,%al
0835957f +0x124d:  je     083595de <+0x12ac>
08359581 +0x124f:  movl   $0x1,0x14(%esp)
08359589 +0x1257:  movl   $0x1,0x10(%esp)
08359591 +0x125f:  movl   $0x9,0xc(%esp)
08359599 +0x1267:  movl   $0x1b63,0x8(%esp)
083595a1 +0x126f:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083595a9 +0x1277:  lea    -0xcd8(%ebp),%eax
083595af +0x127d:  mov    %eax,(%esp)
083595b2 +0x1280:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083595b7 +0x1285:  mov    -0x38(%ebp),%eax
083595ba +0x1288:  mov    %eax,0x8(%esp)
083595be +0x128c:  movl   $"\t- importIndependent_DropScript Fail(%d)",0x4(%esp)
083595c6 +0x1294:  lea    -0xcd8(%ebp),%eax
083595cc +0x129a:  mov    %eax,(%esp)
083595cf +0x129d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083595d4 +0x12a2:  mov    $0x0,%ebx
083595d9 +0x12a7:  jmp    0835f1c8 <+0x6e96>
083595de +0x12ac:  movl   $0x0,-0x38(%ebp)
083595e5 +0x12b3:  mov    0x8(%ebp),%eax
083595e8 +0x12b6:  add    $0x5094,%eax
083595ed +0x12bb:  mov    %eax,0x4(%esp)
083595f1 +0x12bf:  movl   $"Event/SeriaBlessing.evt",(%esp)
083595f8 +0x12c6:  call   0891063b <_Z25ImportSeriaBlessingScriptPKcR21stSeriaBlessingScript>  ; ImportSeriaBlessingScript(char const*, stSeriaBlessingScript&)
083595fd +0x12cb:  mov    %eax,-0x38(%ebp)
08359600 +0x12ce:  cmpl   $0x0,-0x38(%ebp)
08359604 +0x12d2:  setne  %al
08359607 +0x12d5:  test   %al,%al
08359609 +0x12d7:  je     08359668 <+0x1336>
0835960b +0x12d9:  movl   $0x1,0x14(%esp)
08359613 +0x12e1:  movl   $0x1,0x10(%esp)
0835961b +0x12e9:  movl   $0x9,0xc(%esp)
08359623 +0x12f1:  movl   $0x1b83,0x8(%esp)
0835962b +0x12f9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359633 +0x1301:  lea    -0xcc8(%ebp),%eax
08359639 +0x1307:  mov    %eax,(%esp)
0835963c +0x130a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359641 +0x130f:  mov    -0x38(%ebp),%eax
08359644 +0x1312:  mov    %eax,0x8(%esp)
08359648 +0x1316:  movl   $"\t- ImportSeriaBlessingScript Fail(%d)",0x4(%esp)
08359650 +0x131e:  lea    -0xcc8(%ebp),%eax
08359656 +0x1324:  mov    %eax,(%esp)
08359659 +0x1327:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835965e +0x132c:  mov    $0x0,%ebx
08359663 +0x1331:  jmp    0835f1c8 <+0x6e96>
08359668 +0x1336:  movl   $0x0,-0x38(%ebp)
0835966f +0x133d:  mov    0x8(%ebp),%eax
08359672 +0x1340:  add    $0x50ac,%eax
08359677 +0x1345:  mov    %eax,0x4(%esp)
0835967b +0x1349:  movl   $"Event/LevelUpRewardItem.evt",(%esp)
08359682 +0x1350:  call   089107e9 <_Z29ImportLevelUpRewardItemScriptPKcR25stLevelUpRewardItemScript>  ; ImportLevelUpRewardItemScript(char const*, stLevelUpRewardItemScript&)
08359687 +0x1355:  mov    %eax,-0x38(%ebp)
0835968a +0x1358:  cmpl   $0x0,-0x38(%ebp)
0835968e +0x135c:  setne  %al
08359691 +0x135f:  test   %al,%al
08359693 +0x1361:  je     083596f2 <+0x13c0>
08359695 +0x1363:  movl   $0x1,0x14(%esp)
0835969d +0x136b:  movl   $0x1,0x10(%esp)
083596a5 +0x1373:  movl   $0x9,0xc(%esp)
083596ad +0x137b:  movl   $0x1b8a,0x8(%esp)
083596b5 +0x1383:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083596bd +0x138b:  lea    -0xcb8(%ebp),%eax
083596c3 +0x1391:  mov    %eax,(%esp)
083596c6 +0x1394:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083596cb +0x1399:  mov    -0x38(%ebp),%eax
083596ce +0x139c:  mov    %eax,0x8(%esp)
083596d2 +0x13a0:  movl   $"\t- ImportLevelUpRewardItemScript Fail(%d)",0x4(%esp)
083596da +0x13a8:  lea    -0xcb8(%ebp),%eax
083596e0 +0x13ae:  mov    %eax,(%esp)
083596e3 +0x13b1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083596e8 +0x13b6:  mov    $0x0,%ebx
083596ed +0x13bb:  jmp    0835f1c8 <+0x6e96>
083596f2 +0x13c0:  movl   $0x0,-0x38(%ebp)
083596f9 +0x13c7:  mov    0x8(%ebp),%eax
083596fc +0x13ca:  add    $0x50c4,%eax
08359701 +0x13cf:  mov    %eax,0x4(%esp)
08359705 +0x13d3:  movl   $"Event/GrowthCapsule.evt",(%esp)
0835970c +0x13da:  call   0891120c <_Z25ImportGrowthCapsuleScriptPKcR21stGrowthCapsuleScript>  ; ImportGrowthCapsuleScript(char const*, stGrowthCapsuleScript&)
08359711 +0x13df:  mov    %eax,-0x38(%ebp)
08359714 +0x13e2:  cmpl   $0x0,-0x38(%ebp)
08359718 +0x13e6:  setne  %al
0835971b +0x13e9:  test   %al,%al
0835971d +0x13eb:  je     0835973c <+0x140a>
0835971f +0x13ed:  mov    -0x38(%ebp),%eax
08359722 +0x13f0:  mov    %eax,0x4(%esp)
08359726 +0x13f4:  movl   $"ImportGrowthCapsuleScript Fail(%d)\n",(%esp)
0835972d +0x13fb:  call   0807db60 <_init+0x458>
08359732 +0x1400:  mov    $0x0,%ebx
08359737 +0x1405:  jmp    0835f1c8 <+0x6e96>
0835973c +0x140a:  movl   $0x0,-0x38(%ebp)
08359743 +0x1411:  mov    0x8(%ebp),%eax
08359746 +0x1414:  add    $0xb5e0,%eax
0835974b +0x1419:  mov    %eax,0x4(%esp)
0835974f +0x141d:  movl   $"Event/NewAccountLevelUpToJob.evt",(%esp)
08359756 +0x1424:  call   089179eb <_Z35ImportNewAccountLeventUpToJobScriptPKcR30stNewAccountLevelUpToJobScript>  ; ImportNewAccountLeventUpToJobScript(char const*, stNewAccountLevelUpToJobScript&)
0835975b +0x1429:  mov    %eax,-0x38(%ebp)
0835975e +0x142c:  cmpl   $0x0,-0x38(%ebp)
08359762 +0x1430:  setne  %al
08359765 +0x1433:  test   %al,%al
08359767 +0x1435:  je     083597c6 <+0x1494>
08359769 +0x1437:  movl   $0x1,0x14(%esp)
08359771 +0x143f:  movl   $0x1,0x10(%esp)
08359779 +0x1447:  movl   $0x9,0xc(%esp)
08359781 +0x144f:  movl   $0x1ba7,0x8(%esp)
08359789 +0x1457:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359791 +0x145f:  lea    -0xca8(%ebp),%eax
08359797 +0x1465:  mov    %eax,(%esp)
0835979a +0x1468:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835979f +0x146d:  mov    -0x38(%ebp),%eax
083597a2 +0x1470:  mov    %eax,0x8(%esp)
083597a6 +0x1474:  movl   $"\t- NewAccountLevelUpToJob StackableReward Fail(%d)",0x4(%esp)
083597ae +0x147c:  lea    -0xca8(%ebp),%eax
083597b4 +0x1482:  mov    %eax,(%esp)
083597b7 +0x1485:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083597bc +0x148a:  mov    $0x0,%ebx
083597c1 +0x148f:  jmp    0835f1c8 <+0x6e96>
083597c6 +0x1494:  movl   $0x0,-0x38(%ebp)
083597cd +0x149b:  mov    0x8(%ebp),%eax
083597d0 +0x149e:  add    $0xb548,%eax
083597d5 +0x14a3:  mov    %eax,0x4(%esp)
083597d9 +0x14a7:  movl   $"Event/ReturnUserReward.evt",(%esp)
083597e0 +0x14ae:  call   089180ea <_Z28ImportReturnUserRewardScriptPKcR24stReturnUserRewardScript>  ; ImportReturnUserRewardScript(char const*, stReturnUserRewardScript&)
083597e5 +0x14b3:  mov    %eax,-0x38(%ebp)
083597e8 +0x14b6:  cmpl   $0x0,-0x38(%ebp)
083597ec +0x14ba:  setne  %al
083597ef +0x14bd:  test   %al,%al
083597f1 +0x14bf:  je     08359850 <+0x151e>
083597f3 +0x14c1:  movl   $0x1,0x14(%esp)
083597fb +0x14c9:  movl   $0x1,0x10(%esp)
08359803 +0x14d1:  movl   $0x9,0xc(%esp)
0835980b +0x14d9:  movl   $0x1bb0,0x8(%esp)
08359813 +0x14e1:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835981b +0x14e9:  lea    -0xc98(%ebp),%eax
08359821 +0x14ef:  mov    %eax,(%esp)
08359824 +0x14f2:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359829 +0x14f7:  mov    -0x38(%ebp),%eax
0835982c +0x14fa:  mov    %eax,0x8(%esp)
08359830 +0x14fe:  movl   $"\t- ReturnUserReward Fail(%d)",0x4(%esp)
08359838 +0x1506:  lea    -0xc98(%ebp),%eax
0835983e +0x150c:  mov    %eax,(%esp)
08359841 +0x150f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359846 +0x1514:  mov    $0x0,%ebx
0835984b +0x1519:  jmp    0835f1c8 <+0x6e96>
08359850 +0x151e:  movl   $0x0,-0x38(%ebp)
08359857 +0x1525:  mov    0x8(%ebp),%eax
0835985a +0x1528:  add    $0xb568,%eax
0835985f +0x152d:  mov    %eax,0x4(%esp)
08359863 +0x1531:  movl   $"Event/BingoEvent.evt",(%esp)
0835986a +0x1538:  call   089187b9 <_Z17ImportBingoScriptPKcR13stBingoScript>  ; ImportBingoScript(char const*, stBingoScript&)
0835986f +0x153d:  mov    %eax,-0x38(%ebp)
08359872 +0x1540:  cmpl   $0x0,-0x38(%ebp)
08359876 +0x1544:  setne  %al
08359879 +0x1547:  test   %al,%al
0835987b +0x1549:  je     083598da <+0x15a8>
0835987d +0x154b:  movl   $0x1,0x14(%esp)
08359885 +0x1553:  movl   $0x1,0x10(%esp)
0835988d +0x155b:  movl   $0x9,0xc(%esp)
08359895 +0x1563:  movl   $0x1bbb,0x8(%esp)
0835989d +0x156b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083598a5 +0x1573:  lea    -0xc88(%ebp),%eax
083598ab +0x1579:  mov    %eax,(%esp)
083598ae +0x157c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083598b3 +0x1581:  mov    -0x38(%ebp),%eax
083598b6 +0x1584:  mov    %eax,0x8(%esp)
083598ba +0x1588:  movl   $"\t- ImportBingoScript Fail(%d)",0x4(%esp)
083598c2 +0x1590:  lea    -0xc88(%ebp),%eax
083598c8 +0x1596:  mov    %eax,(%esp)
083598cb +0x1599:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083598d0 +0x159e:  mov    $0x0,%ebx
083598d5 +0x15a3:  jmp    0835f1c8 <+0x6e96>
083598da +0x15a8:  movl   $0x0,-0x38(%ebp)
083598e1 +0x15af:  mov    0x8(%ebp),%eax
083598e4 +0x15b2:  add    $0xb5bc,%eax
083598e9 +0x15b7:  mov    %eax,0x4(%esp)
083598ed +0x15bb:  movl   $"Etc/BroadCastItem.etc",(%esp)
083598f4 +0x15c2:  call   08918f24 <_Z25ImportBroadCastItemScriptPKcR21stBroadCastItemScript>  ; ImportBroadCastItemScript(char const*, stBroadCastItemScript&)
083598f9 +0x15c7:  mov    %eax,-0x38(%ebp)
083598fc +0x15ca:  cmpl   $0x0,-0x38(%ebp)
08359900 +0x15ce:  setne  %al
08359903 +0x15d1:  test   %al,%al
08359905 +0x15d3:  je     08359964 <+0x1632>
08359907 +0x15d5:  movl   $0x1,0x14(%esp)
0835990f +0x15dd:  movl   $0x1,0x10(%esp)
08359917 +0x15e5:  movl   $0x9,0xc(%esp)
0835991f +0x15ed:  movl   $0x1bcf,0x8(%esp)
08359927 +0x15f5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835992f +0x15fd:  lea    -0xc78(%ebp),%eax
08359935 +0x1603:  mov    %eax,(%esp)
08359938 +0x1606:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835993d +0x160b:  mov    -0x38(%ebp),%eax
08359940 +0x160e:  mov    %eax,0x8(%esp)
08359944 +0x1612:  movl   $"\t- ImportBroadCastItemScript Fail(%d)",0x4(%esp)
0835994c +0x161a:  lea    -0xc78(%ebp),%eax
08359952 +0x1620:  mov    %eax,(%esp)
08359955 +0x1623:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835995a +0x1628:  mov    $0x0,%ebx
0835995f +0x162d:  jmp    0835f1c8 <+0x6e96>
08359964 +0x1632:  mov    0x8(%ebp),%eax
08359967 +0x1635:  add    $0x50d8,%eax
0835996c +0x163a:  mov    %eax,(%esp)
0835996f +0x163d:  call   089113ec <_Z20ImportSecurityRewardP14SecurityReward>  ; ImportSecurityReward(SecurityReward*)
08359974 +0x1642:  xor    $0x1,%eax
08359977 +0x1645:  test   %al,%al
08359979 +0x1647:  je     083599d1 <+0x169f>
0835997b +0x1649:  movl   $0x1,0x14(%esp)
08359983 +0x1651:  movl   $0x1,0x10(%esp)
0835998b +0x1659:  movl   $0x9,0xc(%esp)
08359993 +0x1661:  movl   $0x1bd7,0x8(%esp)
0835999b +0x1669:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
083599a3 +0x1671:  lea    -0xc68(%ebp),%eax
083599a9 +0x1677:  mov    %eax,(%esp)
083599ac +0x167a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
083599b1 +0x167f:  movl   $"\t- ImportSecurityReward Fail",0x4(%esp)
083599b9 +0x1687:  lea    -0xc68(%ebp),%eax
083599bf +0x168d:  mov    %eax,(%esp)
083599c2 +0x1690:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083599c7 +0x1695:  mov    $0x0,%ebx
083599cc +0x169a:  jmp    0835f1c8 <+0x6e96>
083599d1 +0x169f:  movl   $0x0,-0x38(%ebp)
083599d8 +0x16a6:  mov    0x8(%ebp),%eax
083599db +0x16a9:  add    $0xb458,%eax
083599e0 +0x16ae:  mov    %eax,0x4(%esp)
083599e4 +0x16b2:  movl   $"Etc/ItemMakingSkill.etc",(%esp)
083599eb +0x16b9:  call   0890f564 <_Z21ImportItemMakingSkillPKcR17stItemMakingSkill>  ; ImportItemMakingSkill(char const*, stItemMakingSkill&)
083599f0 +0x16be:  mov    %eax,-0x38(%ebp)
083599f3 +0x16c1:  cmpl   $0x0,-0x38(%ebp)
083599f7 +0x16c5:  setne  %al
083599fa +0x16c8:  test   %al,%al
083599fc +0x16ca:  je     08359a5b <+0x1729>
083599fe +0x16cc:  movl   $0x1,0x14(%esp)
08359a06 +0x16d4:  movl   $0x1,0x10(%esp)
08359a0e +0x16dc:  movl   $0x9,0xc(%esp)
08359a16 +0x16e4:  movl   $0x1be0,0x8(%esp)
08359a1e +0x16ec:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359a26 +0x16f4:  lea    -0xc58(%ebp),%eax
08359a2c +0x16fa:  mov    %eax,(%esp)
08359a2f +0x16fd:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359a34 +0x1702:  mov    -0x38(%ebp),%eax
08359a37 +0x1705:  mov    %eax,0x8(%esp)
08359a3b +0x1709:  movl   $"\t- importItemMakingSkillScript Fail(%d)",0x4(%esp)
08359a43 +0x1711:  lea    -0xc58(%ebp),%eax
08359a49 +0x1717:  mov    %eax,(%esp)
08359a4c +0x171a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359a51 +0x171f:  mov    $0x0,%ebx
08359a56 +0x1724:  jmp    0835f1c8 <+0x6e96>
08359a5b +0x1729:  mov    0x8(%ebp),%eax
08359a5e +0x172c:  add    $0xb488,%eax
08359a63 +0x1731:  mov    %eax,0x4(%esp)
08359a67 +0x1735:  movl   $"Etc/UltimateDungeonList.etc",(%esp)
08359a6e +0x173c:  call   08913c7e <_Z25importUltimateDungeonListPKcRSt3setIiSt4lessIiESaIiEE>  ; importUltimateDungeonList(char const*, std::set<int, std::less<int>, std::allocator<int> >&)
08359a73 +0x1741:  xor    $0x1,%eax
08359a76 +0x1744:  test   %al,%al
08359a78 +0x1746:  je     08359ad0 <+0x179e>
08359a7a +0x1748:  movl   $0x1,0x14(%esp)
08359a82 +0x1750:  movl   $0x1,0x10(%esp)
08359a8a +0x1758:  movl   $0x9,0xc(%esp)
08359a92 +0x1760:  movl   $0x1be8,0x8(%esp)
08359a9a +0x1768:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359aa2 +0x1770:  lea    -0xc48(%ebp),%eax
08359aa8 +0x1776:  mov    %eax,(%esp)
08359aab +0x1779:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359ab0 +0x177e:  movl   $"\t- import UltimateDungeonList Script Fail(%d)",0x4(%esp)
08359ab8 +0x1786:  lea    -0xc48(%ebp),%eax
08359abe +0x178c:  mov    %eax,(%esp)
08359ac1 +0x178f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359ac6 +0x1794:  mov    $0x0,%ebx
08359acb +0x1799:  jmp    0835f1c8 <+0x6e96>
08359ad0 +0x179e:  nop
08359ad1 +0x179f:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08359ad6 +0x17a4:  mov    %eax,(%esp)
08359ad9 +0x17a7:  call   0862676c <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv>  ; sync_script::CSyncScript::truncate_mapping_equip_info_table()
08359ade +0x17ac:  xor    $0x1,%eax
08359ae1 +0x17af:  test   %al,%al
08359ae3 +0x17b1:  je     08359b3b <+0x1809>
08359ae5 +0x17b3:  movl   $0x1,0x14(%esp)
08359aed +0x17bb:  movl   $0x1,0x10(%esp)
08359af5 +0x17c3:  movl   $0x9,0xc(%esp)
08359afd +0x17cb:  movl   $0x1c06,0x8(%esp)
08359b05 +0x17d3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359b0d +0x17db:  lea    -0xc28(%ebp),%eax
08359b13 +0x17e1:  mov    %eax,(%esp)
08359b16 +0x17e4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359b1b +0x17e9:  movl   $"\t- Fail truncate_mapping_equip_info_table",0x4(%esp)
08359b23 +0x17f1:  lea    -0xc28(%ebp),%eax
08359b29 +0x17f7:  mov    %eax,(%esp)
08359b2c +0x17fa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359b31 +0x17ff:  mov    $0x0,%ebx
08359b36 +0x1804:  jmp    0835f1c8 <+0x6e96>
08359b3b +0x1809:  mov    0x8(%ebp),%eax
08359b3e +0x180c:  add    $0xa928,%eax
08359b43 +0x1811:  movl   $0x0,0x4(%esp)
08359b4b +0x1819:  mov    %eax,(%esp)
08359b4e +0x181c:  call   089136a4 <_Z27importExperienceItemMapInfoRSt3mapIiiSt4lessIiESaISt4pairIKiiEEEb>  ; importExperienceItemMapInfo(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, bool)
08359b53 +0x1821:  xor    $0x1,%eax
08359b56 +0x1824:  test   %al,%al
08359b58 +0x1826:  je     08359bb0 <+0x187e>
08359b5a +0x1828:  movl   $0x1,0x14(%esp)
08359b62 +0x1830:  movl   $0x1,0x10(%esp)
08359b6a +0x1838:  movl   $0x9,0xc(%esp)
08359b72 +0x1840:  movl   $0x1c0c,0x8(%esp)
08359b7a +0x1848:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359b82 +0x1850:  lea    -0xc18(%ebp),%eax
08359b88 +0x1856:  mov    %eax,(%esp)
08359b8b +0x1859:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359b90 +0x185e:  movl   $"\t- Equipment Script mapping table load fail",0x4(%esp)
08359b98 +0x1866:  lea    -0xc18(%ebp),%eax
08359b9e +0x186c:  mov    %eax,(%esp)
08359ba1 +0x186f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359ba6 +0x1874:  mov    $0x0,%ebx
08359bab +0x1879:  jmp    0835f1c8 <+0x6e96>
08359bb0 +0x187e:  mov    0x8(%ebp),%eax
08359bb3 +0x1881:  add    $0xa940,%eax
08359bb8 +0x1886:  movl   $0x1,0x4(%esp)
08359bc0 +0x188e:  mov    %eax,(%esp)
08359bc3 +0x1891:  call   089136a4 <_Z27importExperienceItemMapInfoRSt3mapIiiSt4lessIiESaISt4pairIKiiEEEb>  ; importExperienceItemMapInfo(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&, bool)
08359bc8 +0x1896:  xor    $0x1,%eax
08359bcb +0x1899:  test   %al,%al
08359bcd +0x189b:  je     08359c25 <+0x18f3>
08359bcf +0x189d:  movl   $0x1,0x14(%esp)
08359bd7 +0x18a5:  movl   $0x1,0x10(%esp)
08359bdf +0x18ad:  movl   $0x9,0xc(%esp)
08359be7 +0x18b5:  movl   $0x1c12,0x8(%esp)
08359bef +0x18bd:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359bf7 +0x18c5:  lea    -0xc08(%ebp),%eax
08359bfd +0x18cb:  mov    %eax,(%esp)
08359c00 +0x18ce:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359c05 +0x18d3:  movl   $"\t- Equipment Script mapping table load fail",0x4(%esp)
08359c0d +0x18db:  lea    -0xc08(%ebp),%eax
08359c13 +0x18e1:  mov    %eax,(%esp)
08359c16 +0x18e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359c1b +0x18e9:  mov    $0x0,%ebx
08359c20 +0x18ee:  jmp    0835f1c8 <+0x6e96>
08359c25 +0x18f3:  mov    0x8(%ebp),%eax
08359c28 +0x18f6:  lea    0xa940(%eax),%ebx
08359c2e +0x18fc:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08359c33 +0x1901:  mov    %ebx,0x4(%esp)
08359c37 +0x1905:  mov    %eax,(%esp)
08359c3a +0x1908:  call   086267f0 <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; sync_script::CSyncScript::insert_mapping_equip_info_to_db(std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
08359c3f +0x190d:  xor    $0x1,%eax
08359c42 +0x1910:  test   %al,%al
08359c44 +0x1912:  je     08359c9c <+0x196a>
08359c46 +0x1914:  movl   $0x1,0x14(%esp)
08359c4e +0x191c:  movl   $0x1,0x10(%esp)
08359c56 +0x1924:  movl   $0x9,0xc(%esp)
08359c5e +0x192c:  movl   $0x1c18,0x8(%esp)
08359c66 +0x1934:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359c6e +0x193c:  lea    -0xbf8(%ebp),%eax
08359c74 +0x1942:  mov    %eax,(%esp)
08359c77 +0x1945:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359c7c +0x194a:  movl   $"\t- Fail insert_mapping_equip_info_table",0x4(%esp)
08359c84 +0x1952:  lea    -0xbf8(%ebp),%eax
08359c8a +0x1958:  mov    %eax,(%esp)
08359c8d +0x195b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359c92 +0x1960:  mov    $0x0,%ebx
08359c97 +0x1965:  jmp    0835f1c8 <+0x6e96>
08359c9c +0x196a:  movl   $0x0,-0x38(%ebp)
08359ca3 +0x1971:  mov    0x8(%ebp),%eax
08359ca6 +0x1974:  add    $0x61a0,%eax
08359cab +0x1979:  mov    %eax,0x4(%esp)
08359caf +0x197d:  movl   $"Etc/VillageAttacked.etc",(%esp)
08359cb6 +0x1984:  call   089093ee <_Z27importVillageAttackedScriptPKcR19stVillageAttacked_t>  ; importVillageAttackedScript(char const*, stVillageAttacked_t&)
08359cbb +0x1989:  mov    %eax,-0x38(%ebp)
08359cbe +0x198c:  cmpl   $0x0,-0x38(%ebp)
08359cc2 +0x1990:  setne  %al
08359cc5 +0x1993:  test   %al,%al
08359cc7 +0x1995:  je     08359d26 <+0x19f4>
08359cc9 +0x1997:  movl   $0x1,0x14(%esp)
08359cd1 +0x199f:  movl   $0x1,0x10(%esp)
08359cd9 +0x19a7:  movl   $0x9,0xc(%esp)
08359ce1 +0x19af:  movl   $0x1c20,0x8(%esp)
08359ce9 +0x19b7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359cf1 +0x19bf:  lea    -0xbe8(%ebp),%eax
08359cf7 +0x19c5:  mov    %eax,(%esp)
08359cfa +0x19c8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359cff +0x19cd:  mov    -0x38(%ebp),%eax
08359d02 +0x19d0:  mov    %eax,0x8(%esp)
08359d06 +0x19d4:  movl   $"\t- importVillageAttackedScript Fail(%d)",0x4(%esp)
08359d0e +0x19dc:  lea    -0xbe8(%ebp),%eax
08359d14 +0x19e2:  mov    %eax,(%esp)
08359d17 +0x19e5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359d1c +0x19ea:  mov    $0x0,%ebx
08359d21 +0x19ef:  jmp    0835f1c8 <+0x6e96>
08359d26 +0x19f4:  movl   $0x0,-0x38(%ebp)
08359d2d +0x19fb:  movl   $0x0,0x4(%esp)
08359d35 +0x1a03:  mov    0x8(%ebp),%eax
08359d38 +0x1a06:  mov    %eax,(%esp)
08359d3b +0x1a09:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
08359d40 +0x1a0e:  mov    %eax,0x4(%esp)
08359d44 +0x1a12:  movl   $"Etc/Chn_ActionPointSystem.etc",(%esp)
08359d4b +0x1a19:  call   08894996 <_ZN8APSystem24CActionPointEtcParameter32importActionPointSystemEtcScriptEPKcRS0_>  ; APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript(char const*, APSystem::CActionPointEtcParameter&)
08359d50 +0x1a1e:  mov    %eax,-0x38(%ebp)
08359d53 +0x1a21:  cmpl   $0x0,-0x38(%ebp)
08359d57 +0x1a25:  setne  %al
08359d5a +0x1a28:  test   %al,%al
08359d5c +0x1a2a:  je     08359dbb <+0x1a89>
08359d5e +0x1a2c:  movl   $0x1,0x14(%esp)
08359d66 +0x1a34:  movl   $0x1,0x10(%esp)
08359d6e +0x1a3c:  movl   $0x9,0xc(%esp)
08359d76 +0x1a44:  movl   $0x1c3a,0x8(%esp)
08359d7e +0x1a4c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359d86 +0x1a54:  lea    -0xbd8(%ebp),%eax
08359d8c +0x1a5a:  mov    %eax,(%esp)
08359d8f +0x1a5d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359d94 +0x1a62:  mov    -0x38(%ebp),%eax
08359d97 +0x1a65:  mov    %eax,0x8(%esp)
08359d9b +0x1a69:  movl   $"\t- importActionPointSystemEtcScript Chn_ActionPointSystem.etc Fail(%d)",0x4(%esp)
08359da3 +0x1a71:  lea    -0xbd8(%ebp),%eax
08359da9 +0x1a77:  mov    %eax,(%esp)
08359dac +0x1a7a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359db1 +0x1a7f:  mov    $0x0,%ebx
08359db6 +0x1a84:  jmp    0835f1c8 <+0x6e96>
08359dbb +0x1a89:  movl   $0x0,-0x38(%ebp)
08359dc2 +0x1a90:  movl   $0x1,0x4(%esp)
08359dca +0x1a98:  mov    0x8(%ebp),%eax
08359dcd +0x1a9b:  mov    %eax,(%esp)
08359dd0 +0x1a9e:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
08359dd5 +0x1aa3:  mov    %eax,0x4(%esp)
08359dd9 +0x1aa7:  movl   $"Etc/Chn_ActionPointSystem_GM.etc",(%esp)
08359de0 +0x1aae:  call   08894996 <_ZN8APSystem24CActionPointEtcParameter32importActionPointSystemEtcScriptEPKcRS0_>  ; APSystem::CActionPointEtcParameter::importActionPointSystemEtcScript(char const*, APSystem::CActionPointEtcParameter&)
08359de5 +0x1ab3:  mov    %eax,-0x38(%ebp)
08359de8 +0x1ab6:  cmpl   $0x0,-0x38(%ebp)
08359dec +0x1aba:  setne  %al
08359def +0x1abd:  test   %al,%al
08359df1 +0x1abf:  je     08359e50 <+0x1b1e>
08359df3 +0x1ac1:  movl   $0x1,0x14(%esp)
08359dfb +0x1ac9:  movl   $0x1,0x10(%esp)
08359e03 +0x1ad1:  movl   $0x9,0xc(%esp)
08359e0b +0x1ad9:  movl   $0x1c41,0x8(%esp)
08359e13 +0x1ae1:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
08359e1b +0x1ae9:  lea    -0xbc8(%ebp),%eax
08359e21 +0x1aef:  mov    %eax,(%esp)
08359e24 +0x1af2:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08359e29 +0x1af7:  mov    -0x38(%ebp),%eax
08359e2c +0x1afa:  mov    %eax,0x8(%esp)
08359e30 +0x1afe:  movl   $"\t- importActionPointSystemEtcScript Chn_ActionPointSystemGM.etc Fail(%d)",0x4(%esp)
08359e38 +0x1b06:  lea    -0xbc8(%ebp),%eax
08359e3e +0x1b0c:  mov    %eax,(%esp)
08359e41 +0x1b0f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08359e46 +0x1b14:  mov    $0x0,%ebx
08359e4b +0x1b19:  jmp    0835f1c8 <+0x6e96>
08359e50 +0x1b1e:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08359e55 +0x1b23:  mov    %eax,(%esp)
08359e58 +0x1b26:  call   08625d96 <_ZN11sync_script11CSyncScript33truncate_charac_action_point_descEv>  ; sync_script::CSyncScript::truncate_charac_action_point_desc()
08359e5d +0x1b2b:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08359e62 +0x1b30:  mov    %eax,(%esp)
08359e65 +0x1b33:  call   08625db8 <_ZN11sync_script11CSyncScript31insert_charac_action_point_descEv>  ; sync_script::CSyncScript::insert_charac_action_point_desc()
08359e6a +0x1b38:  movl   $0x0,-0x38(%ebp)
08359e71 +0x1b3f:  lea    -0xf28(%ebp),%eax
08359e77 +0x1b45:  mov    %eax,(%esp)
08359e7a +0x1b48:  call   08127294 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x1d>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x1d
08359e7f +0x1b4d:  lea    -0xf28(%ebp),%eax
08359e85 +0x1b53:  mov    %eax,0x4(%esp)
08359e89 +0x1b57:  movl   $"Etc/Chn_ServerCheckSchedule.etc",(%esp)
08359e90 +0x1b5e:  call   0891826c <_Z28importDailyScheduleEtcScriptPKcRSt6vectorI14_DailyScheduleSaIS2_EE>  ; importDailyScheduleEtcScript(char const*, std::vector<_DailySchedule, std::allocator<_DailySchedule> >&)
08359e95 +0x1b63:  mov    %eax,-0x38(%ebp)
08359e98 +0x1b66:  cmpl   $0x0,-0x38(%ebp)
08359e9c +0x1b6a:  setne  %al
08359e9f +0x1b6d:  test   %al,%al
08359ea1 +0x1b6f:  je     08359ec0 <+0x1b8e>
08359ea3 +0x1b71:  mov    -0x38(%ebp),%eax
08359ea6 +0x1b74:  mov    %eax,0x4(%esp)
08359eaa +0x1b78:  movl   $"importDDayEventEtcScript Fail(%d)\n",(%esp)
08359eb1 +0x1b7f:  call   0807db60 <_init+0x458>
08359eb6 +0x1b84:  mov    $0x0,%ebx
08359ebb +0x1b89:  jmp    0835f1ba <+0x6e88>
08359ec0 +0x1b8e:  lea    -0xf28(%ebp),%eax
08359ec6 +0x1b94:  mov    %eax,(%esp)
08359ec9 +0x1b97:  call   08127306 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x8f>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x8f
08359ece +0x1b9c:  test   %eax,%eax
08359ed0 +0x1b9e:  setne  %al
08359ed3 +0x1ba1:  test   %al,%al
08359ed5 +0x1ba3:  je     08359eee <+0x1bbc>
08359ed7 +0x1ba5:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
08359edc +0x1baa:  lea    -0xf28(%ebp),%edx
08359ee2 +0x1bb0:  mov    %edx,0x4(%esp)
08359ee6 +0x1bb4:  mov    %eax,(%esp)
08359ee9 +0x1bb7:  call   08125c3c <_ZN21CDailyScheduleManager15AddDailScheduleERKSt6vectorI14_DailyScheduleSaIS1_EE>  ; CDailyScheduleManager::AddDailSchedule(std::vector<_DailySchedule, std::allocator<_DailySchedule> > const&)
08359eee +0x1bbc:  mov    0x8(%ebp),%eax
08359ef1 +0x1bbf:  add    $0x62d0,%eax
08359ef6 +0x1bc4:  mov    %eax,(%esp)
08359ef9 +0x1bc7:  call   08365010 <_ZN12CDataManager33loadAdvanceAltarTimeLineParameterERN12advancealtar22StageTimeLineParameterE>  ; CDataManager::loadAdvanceAltarTimeLineParameter(advancealtar::StageTimeLineParameter&)
08359efe +0x1bcc:  mov    %eax,-0x38(%ebp)
08359f01 +0x1bcf:  cmpl   $0x0,-0x38(%ebp)
08359f05 +0x1bd3:  je     08359f24 <+0x1bf2>
08359f07 +0x1bd5:  mov    -0x38(%ebp),%eax
08359f0a +0x1bd8:  mov    %eax,0x4(%esp)
08359f0e +0x1bdc:  movl   $"loadAdvanceAltarTimeLineParameter Fail(%d)\n",(%esp)
08359f15 +0x1be3:  call   0807db60 <_init+0x458>
08359f1a +0x1be8:  mov    $0x0,%ebx
08359f1f +0x1bed:  jmp    0835f1ba <+0x6e88>
08359f24 +0x1bf2:  mov    0x8(%ebp),%eax
08359f27 +0x1bf5:  add    $0x631c,%eax
08359f2c +0x1bfa:  movl   $"Etc/AdvanceAltar/AdvanceAltarShop.etc",0x4(%esp)
08359f34 +0x1c02:  mov    %eax,(%esp)
08359f37 +0x1c05:  call   088a10cc <_ZN12advancealtar25AdvanceAltarShopParameter31importAdvanceAltarShopParameterEPKc>  ; advancealtar::AdvanceAltarShopParameter::importAdvanceAltarShopParameter(char const*)
08359f3c +0x1c0a:  mov    %eax,-0x38(%ebp)
08359f3f +0x1c0d:  cmpl   $0x0,-0x38(%ebp)
08359f43 +0x1c11:  je     08359f62 <+0x1c30>
08359f45 +0x1c13:  mov    -0x38(%ebp),%eax
08359f48 +0x1c16:  mov    %eax,0x4(%esp)
08359f4c +0x1c1a:  movl   $"importAdvanceAltarShopParameter Fail(%d)\n",(%esp)
08359f53 +0x1c21:  call   0807db60 <_init+0x458>
08359f58 +0x1c26:  mov    $0x0,%ebx
08359f5d +0x1c2b:  jmp    0835f1ba <+0x6e88>
08359f62 +0x1c30:  mov    0x8(%ebp),%eax
08359f65 +0x1c33:  add    $0x634c,%eax
08359f6a +0x1c38:  movl   $"Etc/AdvanceAltar/AdvanceAltarAchievementReward.etc",0x4(%esp)
08359f72 +0x1c40:  mov    %eax,(%esp)
08359f75 +0x1c43:  call   0889afb0 <_ZN12advancealtar15RewardParameter32importAchievementRewardParameterEPKc>  ; advancealtar::RewardParameter::importAchievementRewardParameter(char const*)
08359f7a +0x1c48:  mov    %eax,-0x38(%ebp)
08359f7d +0x1c4b:  cmpl   $0x0,-0x38(%ebp)
08359f81 +0x1c4f:  je     08359fa0 <+0x1c6e>
08359f83 +0x1c51:  mov    -0x38(%ebp),%eax
08359f86 +0x1c54:  mov    %eax,0x4(%esp)
08359f8a +0x1c58:  movl   $"importAchievementRewardParameter Fail(%d)\n",(%esp)
08359f91 +0x1c5f:  call   0807db60 <_init+0x458>
08359f96 +0x1c64:  mov    $0x0,%ebx
08359f9b +0x1c69:  jmp    0835f1ba <+0x6e88>
08359fa0 +0x1c6e:  mov    0x8(%ebp),%eax
08359fa3 +0x1c71:  add    $0x6364,%eax
08359fa8 +0x1c76:  movl   $"Etc/AdvanceAltar/AdvanceAltarConfig.etc",0x4(%esp)
08359fb0 +0x1c7e:  mov    %eax,(%esp)
08359fb3 +0x1c81:  call   0889b6cc <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc>  ; advancealtar::ConfigParameter::importConfigParameter(char const*)
08359fb8 +0x1c86:  mov    %eax,-0x38(%ebp)
08359fbb +0x1c89:  cmpl   $0x0,-0x38(%ebp)
08359fbf +0x1c8d:  je     08359fde <+0x1cac>
08359fc1 +0x1c8f:  mov    -0x38(%ebp),%eax
08359fc4 +0x1c92:  mov    %eax,0x4(%esp)
08359fc8 +0x1c96:  movl   $"importConfigParameter Fail(%d)\n",(%esp)
08359fcf +0x1c9d:  call   0807db60 <_init+0x458>
08359fd4 +0x1ca2:  mov    $0x0,%ebx
08359fd9 +0x1ca7:  jmp    0835f1ba <+0x6e88>
08359fde +0x1cac:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08359fe3 +0x1cb1:  mov    %eax,(%esp)
08359fe6 +0x1cb4:  call   08625dda <_ZN11sync_script11CSyncScript39truncate_charac_advance_altar_item_descEv>  ; sync_script::CSyncScript::truncate_charac_advance_altar_item_desc()
08359feb +0x1cb9:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
08359ff0 +0x1cbe:  mov    %eax,(%esp)
08359ff3 +0x1cc1:  call   08625dfc <_ZN11sync_script11CSyncScript37insert_charac_advance_altar_item_descEv>  ; sync_script::CSyncScript::insert_charac_advance_altar_item_desc()
08359ff8 +0x1cc6:  mov    0x8(%ebp),%eax
08359ffb +0x1cc9:  add    $0xb4ec,%eax
0835a000 +0x1cce:  movl   $0x0,0x8(%esp)
0835a008 +0x1cd6:  mov    %eax,0x4(%esp)
0835a00c +0x1cda:  movl   $"Etc/pvpChannelList.etc",(%esp)
0835a013 +0x1ce1:  call   08901f10 <_Z20importPVPChannelListPcP18live_server_info_ti>  ; importPVPChannelList(char*, live_server_info_t*, int)
0835a018 +0x1ce6:  xor    $0x1,%eax
0835a01b +0x1ce9:  test   %al,%al
0835a01d +0x1ceb:  je     0835a075 <+0x1d43>
0835a01f +0x1ced:  movl   $0x1,0x14(%esp)
0835a027 +0x1cf5:  movl   $0x1,0x10(%esp)
0835a02f +0x1cfd:  movl   $0x9,0xc(%esp)
0835a037 +0x1d05:  movl   $0x1cd5,0x8(%esp)
0835a03f +0x1d0d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a047 +0x1d15:  lea    -0xbb8(%ebp),%eax
0835a04d +0x1d1b:  mov    %eax,(%esp)
0835a050 +0x1d1e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a055 +0x1d23:  movl   $"\t- importPVPChannelList Fail()",0x4(%esp)
0835a05d +0x1d2b:  lea    -0xbb8(%ebp),%eax
0835a063 +0x1d31:  mov    %eax,(%esp)
0835a066 +0x1d34:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a06b +0x1d39:  mov    $0x0,%ebx
0835a070 +0x1d3e:  jmp    0835f1ba <+0x6e88>
0835a075 +0x1d43:  mov    0x8(%ebp),%eax
0835a078 +0x1d46:  add    $0xa50c,%eax
0835a07d +0x1d4b:  movl   $"Etc/Guild.etc",0x4(%esp)
0835a085 +0x1d53:  mov    %eax,(%esp)
0835a088 +0x1d56:  call   08978d48 <_Z26importGuildParameterScriptP20GuildParameterScriptPKc>  ; importGuildParameterScript(GuildParameterScript*, char const*)
0835a08d +0x1d5b:  xor    $0x1,%eax
0835a090 +0x1d5e:  test   %al,%al
0835a092 +0x1d60:  je     0835a0ea <+0x1db8>
0835a094 +0x1d62:  movl   $0x1,0x14(%esp)
0835a09c +0x1d6a:  movl   $0x1,0x10(%esp)
0835a0a4 +0x1d72:  movl   $0x9,0xc(%esp)
0835a0ac +0x1d7a:  movl   $0x1ce2,0x8(%esp)
0835a0b4 +0x1d82:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a0bc +0x1d8a:  lea    -0xba8(%ebp),%eax
0835a0c2 +0x1d90:  mov    %eax,(%esp)
0835a0c5 +0x1d93:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a0ca +0x1d98:  movl   $"\t- importGuildParameterScript Fail",0x4(%esp)
0835a0d2 +0x1da0:  lea    -0xba8(%ebp),%eax
0835a0d8 +0x1da6:  mov    %eax,(%esp)
0835a0db +0x1da9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a0e0 +0x1dae:  mov    $0x0,%ebx
0835a0e5 +0x1db3:  jmp    0835f1ba <+0x6e88>
0835a0ea +0x1db8:  mov    0x8(%ebp),%eax
0835a0ed +0x1dbb:  add    $0xa628,%eax
0835a0f2 +0x1dc0:  movl   $"Etc/Power.etc",0x4(%esp)
0835a0fa +0x1dc8:  mov    %eax,(%esp)
0835a0fd +0x1dcb:  call   08a592bc <_Z26importPowerParameterScriptP20PowerParameterScriptPKc>  ; importPowerParameterScript(PowerParameterScript*, char const*)
0835a102 +0x1dd0:  xor    $0x1,%eax
0835a105 +0x1dd3:  test   %al,%al
0835a107 +0x1dd5:  je     0835a15f <+0x1e2d>
0835a109 +0x1dd7:  movl   $0x1,0x14(%esp)
0835a111 +0x1ddf:  movl   $0x1,0x10(%esp)
0835a119 +0x1de7:  movl   $0x9,0xc(%esp)
0835a121 +0x1def:  movl   $0x1ce9,0x8(%esp)
0835a129 +0x1df7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a131 +0x1dff:  lea    -0xb98(%ebp),%eax
0835a137 +0x1e05:  mov    %eax,(%esp)
0835a13a +0x1e08:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a13f +0x1e0d:  movl   $"\t- importPowerParameterScript Fail",0x4(%esp)
0835a147 +0x1e15:  lea    -0xb98(%ebp),%eax
0835a14d +0x1e1b:  mov    %eax,(%esp)
0835a150 +0x1e1e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a155 +0x1e23:  mov    $0x0,%ebx
0835a15a +0x1e28:  jmp    0835f1ba <+0x6e88>
0835a15f +0x1e2d:  mov    0x8(%ebp),%eax
0835a162 +0x1e30:  add    $0xa700,%eax
0835a167 +0x1e35:  movl   $"Etc/SecretShop.etc",0x4(%esp)
0835a16f +0x1e3d:  mov    %eax,(%esp)
0835a172 +0x1e40:  call   08a81cf0 <_Z22importSecretShopScriptP16SecretShopScriptPKc>  ; importSecretShopScript(SecretShopScript*, char const*)
0835a177 +0x1e45:  xor    $0x1,%eax
0835a17a +0x1e48:  test   %al,%al
0835a17c +0x1e4a:  je     0835a1d4 <+0x1ea2>
0835a17e +0x1e4c:  movl   $0x1,0x14(%esp)
0835a186 +0x1e54:  movl   $0x1,0x10(%esp)
0835a18e +0x1e5c:  movl   $0x9,0xc(%esp)
0835a196 +0x1e64:  movl   $0x1d0f,0x8(%esp)
0835a19e +0x1e6c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a1a6 +0x1e74:  lea    -0xb88(%ebp),%eax
0835a1ac +0x1e7a:  mov    %eax,(%esp)
0835a1af +0x1e7d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a1b4 +0x1e82:  movl   $"\t- importSecretShopScript Fail",0x4(%esp)
0835a1bc +0x1e8a:  lea    -0xb88(%ebp),%eax
0835a1c2 +0x1e90:  mov    %eax,(%esp)
0835a1c5 +0x1e93:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a1ca +0x1e98:  mov    $0x0,%ebx
0835a1cf +0x1e9d:  jmp    0835f1ba <+0x6e88>
0835a1d4 +0x1ea2:  mov    0x8(%ebp),%eax
0835a1d7 +0x1ea5:  add    $0xa7e0,%eax
0835a1dc +0x1eaa:  movl   $"Etc/AccountCargo.etc",0x4(%esp)
0835a1e4 +0x1eb2:  mov    %eax,(%esp)
0835a1e7 +0x1eb5:  call   088c7e80 <_Z24importAccountCargoScriptP18AccountCargoScriptPKc>  ; importAccountCargoScript(AccountCargoScript*, char const*)
0835a1ec +0x1eba:  xor    $0x1,%eax
0835a1ef +0x1ebd:  test   %al,%al
0835a1f1 +0x1ebf:  je     0835a249 <+0x1f17>
0835a1f3 +0x1ec1:  movl   $0x1,0x14(%esp)
0835a1fb +0x1ec9:  movl   $0x1,0x10(%esp)
0835a203 +0x1ed1:  movl   $0x9,0xc(%esp)
0835a20b +0x1ed9:  movl   $0x1d16,0x8(%esp)
0835a213 +0x1ee1:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a21b +0x1ee9:  lea    -0xb78(%ebp),%eax
0835a221 +0x1eef:  mov    %eax,(%esp)
0835a224 +0x1ef2:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a229 +0x1ef7:  movl   $"\t- importAccountCargoScript Fail",0x4(%esp)
0835a231 +0x1eff:  lea    -0xb78(%ebp),%eax
0835a237 +0x1f05:  mov    %eax,(%esp)
0835a23a +0x1f08:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a23f +0x1f0d:  mov    $0x0,%ebx
0835a244 +0x1f12:  jmp    0835f1ba <+0x6e88>
0835a249 +0x1f17:  mov    0x8(%ebp),%eax
0835a24c +0x1f1a:  add    $0xa788,%eax
0835a251 +0x1f1f:  mov    %eax,0x4(%esp)
0835a255 +0x1f23:  movl   $"Etc/TitleBook.etc",(%esp)
0835a25c +0x1f2a:  call   08aa8110 <_Z24importTitleBookEtcScriptPKcP15stTitleBookInfo>  ; importTitleBookEtcScript(char const*, stTitleBookInfo*)
0835a261 +0x1f2f:  xor    $0x1,%eax
0835a264 +0x1f32:  test   %al,%al
0835a266 +0x1f34:  je     0835a2be <+0x1f8c>
0835a268 +0x1f36:  movl   $0x1,0x14(%esp)
0835a270 +0x1f3e:  movl   $0x1,0x10(%esp)
0835a278 +0x1f46:  movl   $0x9,0xc(%esp)
0835a280 +0x1f4e:  movl   $0x1d1e,0x8(%esp)
0835a288 +0x1f56:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a290 +0x1f5e:  lea    -0xb68(%ebp),%eax
0835a296 +0x1f64:  mov    %eax,(%esp)
0835a299 +0x1f67:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a29e +0x1f6c:  movl   $"\t- importTitleBookEtcScript Fail",0x4(%esp)
0835a2a6 +0x1f74:  lea    -0xb68(%ebp),%eax
0835a2ac +0x1f7a:  mov    %eax,(%esp)
0835a2af +0x1f7d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a2b4 +0x1f82:  mov    $0x0,%ebx
0835a2b9 +0x1f87:  jmp    0835f1ba <+0x6e88>
0835a2be +0x1f8c:  movl   $"EventCharacter.lst",0x4(%esp)
0835a2c6 +0x1f94:  movl   $"Event/EventCharacter/",(%esp)
0835a2cd +0x1f9b:  call   0895ae5c <_Z24initEventCharacterScriptPcS_>  ; initEventCharacterScript(char*, char*)
0835a2d2 +0x1fa0:  xor    $0x1,%eax
0835a2d5 +0x1fa3:  test   %al,%al
0835a2d7 +0x1fa5:  je     0835a32f <+0x1ffd>
0835a2d9 +0x1fa7:  movl   $0x1,0x14(%esp)
0835a2e1 +0x1faf:  movl   $0x1,0x10(%esp)
0835a2e9 +0x1fb7:  movl   $0x9,0xc(%esp)
0835a2f1 +0x1fbf:  movl   $0x1d38,0x8(%esp)
0835a2f9 +0x1fc7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a301 +0x1fcf:  lea    -0xb58(%ebp),%eax
0835a307 +0x1fd5:  mov    %eax,(%esp)
0835a30a +0x1fd8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a30f +0x1fdd:  movl   $"\t- Load EventCharacter.lst fail",0x4(%esp)
0835a317 +0x1fe5:  lea    -0xb58(%ebp),%eax
0835a31d +0x1feb:  mov    %eax,(%esp)
0835a320 +0x1fee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a325 +0x1ff3:  mov    $0x0,%ebx
0835a32a +0x1ff8:  jmp    0835f1ba <+0x6e88>
0835a32f +0x1ffd:  mov    0x8(%ebp),%eax
0835a332 +0x2000:  add    $0xa86c,%eax
0835a337 +0x2005:  mov    %eax,(%esp)
0835a33a +0x2008:  call   0895af18 <_ZN29EventCharacterParameterScript25load_event_character_listEv>  ; EventCharacterParameterScript::load_event_character_list()
0835a33f +0x200d:  xor    $0x1,%eax
0835a342 +0x2010:  test   %al,%al
0835a344 +0x2012:  je     0835a39c <+0x206a>
0835a346 +0x2014:  movl   $0x1,0x14(%esp)
0835a34e +0x201c:  movl   $0x1,0x10(%esp)
0835a356 +0x2024:  movl   $0x9,0xc(%esp)
0835a35e +0x202c:  movl   $0x1d3e,0x8(%esp)
0835a366 +0x2034:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a36e +0x203c:  lea    -0xb48(%ebp),%eax
0835a374 +0x2042:  mov    %eax,(%esp)
0835a377 +0x2045:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a37c +0x204a:  movl   $"\t- Load EventCharacter.lst fail",0x4(%esp)
0835a384 +0x2052:  lea    -0xb48(%ebp),%eax
0835a38a +0x2058:  mov    %eax,(%esp)
0835a38d +0x205b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a392 +0x2060:  mov    $0x0,%ebx
0835a397 +0x2065:  jmp    0835f1ba <+0x6e88>
0835a39c +0x206a:  mov    0x8(%ebp),%eax
0835a39f +0x206d:  add    $0x8cc8,%eax
0835a3a4 +0x2072:  movl   $"n_Quest/questParameter.etc",0x4(%esp)
0835a3ac +0x207a:  mov    %eax,(%esp)
0835a3af +0x207d:  call   08a6b660 <_Z26importQuestParameterScriptP20QuestParameterScriptPKc>  ; importQuestParameterScript(QuestParameterScript*, char const*)
0835a3b4 +0x2082:  xor    $0x1,%eax
0835a3b7 +0x2085:  test   %al,%al
0835a3b9 +0x2087:  je     0835a411 <+0x20df>
0835a3bb +0x2089:  movl   $0x1,0x14(%esp)
0835a3c3 +0x2091:  movl   $0x1,0x10(%esp)
0835a3cb +0x2099:  movl   $0x9,0xc(%esp)
0835a3d3 +0x20a1:  movl   $0x1d57,0x8(%esp)
0835a3db +0x20a9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a3e3 +0x20b1:  lea    -0xb38(%ebp),%eax
0835a3e9 +0x20b7:  mov    %eax,(%esp)
0835a3ec +0x20ba:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a3f1 +0x20bf:  movl   $"\t- importQuestParameterScript Fail",0x4(%esp)
0835a3f9 +0x20c7:  lea    -0xb38(%ebp),%eax
0835a3ff +0x20cd:  mov    %eax,(%esp)
0835a402 +0x20d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a407 +0x20d5:  mov    $0x0,%ebx
0835a40c +0x20da:  jmp    0835f1ba <+0x6e88>
0835a411 +0x20df:  mov    0x8(%ebp),%eax
0835a414 +0x20e2:  add    $0x8d34,%eax
0835a419 +0x20e7:  movl   $"n_Quest/TrainingQuest.lst",0x4(%esp)
0835a421 +0x20ef:  mov    %eax,(%esp)
0835a424 +0x20f2:  call   08aaf554 <_Z25importTrainingQuestScriptP19TrainingQuestScriptPKc>  ; importTrainingQuestScript(TrainingQuestScript*, char const*)
0835a429 +0x20f7:  xor    $0x1,%eax
0835a42c +0x20fa:  test   %al,%al
0835a42e +0x20fc:  je     0835a486 <+0x2154>
0835a430 +0x20fe:  movl   $0x1,0x14(%esp)
0835a438 +0x2106:  movl   $0x1,0x10(%esp)
0835a440 +0x210e:  movl   $0x9,0xc(%esp)
0835a448 +0x2116:  movl   $0x1d61,0x8(%esp)
0835a450 +0x211e:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a458 +0x2126:  lea    -0xb28(%ebp),%eax
0835a45e +0x212c:  mov    %eax,(%esp)
0835a461 +0x212f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a466 +0x2134:  movl   $"\t- importTrainingQuestScript Fail",0x4(%esp)
0835a46e +0x213c:  lea    -0xb28(%ebp),%eax
0835a474 +0x2142:  mov    %eax,(%esp)
0835a477 +0x2145:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a47c +0x214a:  mov    $0x0,%ebx
0835a481 +0x214f:  jmp    0835f1ba <+0x6e88>
0835a486 +0x2154:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0835a48b +0x2159:  mov    0x1b0(%eax),%ebx
0835a491 +0x215f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0835a496 +0x2164:  mov    0x378(%eax),%eax
0835a49c +0x216a:  mov    0x8(%ebp),%edx
0835a49f +0x216d:  add    $0x68,%edx
0835a4a2 +0x2170:  mov    %ebx,0x8(%esp)
0835a4a6 +0x2174:  mov    %eax,0x4(%esp)
0835a4aa +0x2178:  mov    %edx,(%esp)
0835a4ad +0x217b:  call   08a8c2c0 <_ZN21ServerParameterScript34CheckCollectDungeonStatisticServerEii>  ; ServerParameterScript::CheckCollectDungeonStatisticServer(int, int)
0835a4b2 +0x2180:  test   %al,%al
0835a4b4 +0x2182:  je     0835a50e <+0x21dc>
0835a4b6 +0x2184:  movl   $0x1,(%esp)
0835a4bd +0x218b:  call   08484a67 <_Z26SetCollectDungeonStatisticb>  ; SetCollectDungeonStatistic(bool)
0835a4c2 +0x2190:  movl   $0x1,0x14(%esp)
0835a4ca +0x2198:  movl   $0x1,0x10(%esp)
0835a4d2 +0x21a0:  movl   $0x9,0xc(%esp)
0835a4da +0x21a8:  movl   $0x1d84,0x8(%esp)
0835a4e2 +0x21b0:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a4ea +0x21b8:  lea    -0xb18(%ebp),%eax
0835a4f0 +0x21be:  mov    %eax,(%esp)
0835a4f3 +0x21c1:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a4f8 +0x21c6:  movl   $"\t- Collect Dungeon Data Statistic start!",0x4(%esp)
0835a500 +0x21ce:  lea    -0xb18(%ebp),%eax
0835a506 +0x21d4:  mov    %eax,(%esp)
0835a509 +0x21d7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a50e +0x21dc:  call   082350a0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa74a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa74a
0835a513 +0x21e1:  movl   $0x1,0x4(%esp)
0835a51b +0x21e9:  mov    %eax,(%esp)
0835a51e +0x21ec:  call   08376048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ae8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ae8
0835a523 +0x21f1:  mov    0x8(%ebp),%eax
0835a526 +0x21f4:  add    $0x86a0,%eax
0835a52b +0x21f9:  mov    %eax,0x4(%esp)
0835a52f +0x21fd:  movl   $"Etc/slangname.etc",(%esp)
0835a536 +0x2204:  call   089081a3 <_Z15importSlangNamePcP13SlangNameData>  ; importSlangName(char*, SlangNameData*)
0835a53b +0x2209:  xor    $0x1,%eax
0835a53e +0x220c:  test   %al,%al
0835a540 +0x220e:  je     0835a598 <+0x2266>
0835a542 +0x2210:  movl   $0x1,0x14(%esp)
0835a54a +0x2218:  movl   $0x1,0x10(%esp)
0835a552 +0x2220:  movl   $0x9,0xc(%esp)
0835a55a +0x2228:  movl   $0x1d8b,0x8(%esp)
0835a562 +0x2230:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a56a +0x2238:  lea    -0xb08(%ebp),%eax
0835a570 +0x223e:  mov    %eax,(%esp)
0835a573 +0x2241:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a578 +0x2246:  movl   $"\t- slangname.etc file load failed",0x4(%esp)
0835a580 +0x224e:  lea    -0xb08(%ebp),%eax
0835a586 +0x2254:  mov    %eax,(%esp)
0835a589 +0x2257:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a58e +0x225c:  mov    $0x0,%ebx
0835a593 +0x2261:  jmp    0835f1ba <+0x6e88>
0835a598 +0x2266:  mov    0x8(%ebp),%eax
0835a59b +0x2269:  add    $0x86c4,%eax
0835a5a0 +0x226e:  mov    %eax,0x4(%esp)
0835a5a4 +0x2272:  movl   $"Etc/invalidName.etc",(%esp)
0835a5ab +0x2279:  call   08908338 <_Z17importInvalidNamePcP15InvalidCharData>  ; importInvalidName(char*, InvalidCharData*)
0835a5b0 +0x227e:  xor    $0x1,%eax
0835a5b3 +0x2281:  test   %al,%al
0835a5b5 +0x2283:  je     0835a60d <+0x22db>
0835a5b7 +0x2285:  movl   $0x1,0x14(%esp)
0835a5bf +0x228d:  movl   $0x1,0x10(%esp)
0835a5c7 +0x2295:  movl   $0x9,0xc(%esp)
0835a5cf +0x229d:  movl   $0x1d90,0x8(%esp)
0835a5d7 +0x22a5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a5df +0x22ad:  lea    -0xaf8(%ebp),%eax
0835a5e5 +0x22b3:  mov    %eax,(%esp)
0835a5e8 +0x22b6:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a5ed +0x22bb:  movl   $"\t- invalidName.etc file load failed",0x4(%esp)
0835a5f5 +0x22c3:  lea    -0xaf8(%ebp),%eax
0835a5fb +0x22c9:  mov    %eax,(%esp)
0835a5fe +0x22cc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a603 +0x22d1:  mov    $0x0,%ebx
0835a608 +0x22d6:  jmp    0835f1ba <+0x6e88>
0835a60d +0x22db:  movl   $0x80,(%esp)
0835a614 +0x22e2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835a619 +0x22e7:  mov    %eax,%ebx
0835a61b +0x22e9:  mov    %ebx,%eax
0835a61d +0x22eb:  mov    %eax,(%esp)
0835a620 +0x22ee:  call   08094e78 <_ZN11SlangFilterC1Ev>  ; SlangFilter::SlangFilter()
0835a625 +0x22f3:  jmp    0835a63c <+0x230a>
0835a627 +0x22f5:  mov    %edx,%esi
0835a629 +0x22f7:  mov    %eax,%edi
0835a62b +0x22f9:  mov    %ebx,(%esp)
0835a62e +0x22fc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835a633 +0x2301:  mov    %edi,%eax
0835a635 +0x2303:  mov    %esi,%edx
0835a637 +0x2305:  jmp    0835f19c <+0x6e6a>
0835a63c +0x230a:  mov    %ebx,%edx
0835a63e +0x230c:  mov    0x8(%ebp),%eax
0835a641 +0x230f:  mov    %edx,0x86f4(%eax)
0835a647 +0x2315:  mov    0x8(%ebp),%eax
0835a64a +0x2318:  add    $0x86f8,%eax
0835a64f +0x231d:  mov    %eax,0x4(%esp)
0835a653 +0x2321:  movl   $"Etc/FairPVPEquipment.etc",(%esp)
0835a65a +0x2328:  call   088ffbfc <_Z22importFairPVPEquipmentPcPSt3mapIiSt6vectorIS1_I22STStackablePackageDataSaIS2_EESaIS4_EESt4lessIiESaISt4pairIKiS6_EEE>  ; importFairPVPEquipment(char*, std::map<int, std::vector<std::vector<STStackablePackageData, std::allocator<STStackablePackageData> >, std::allocator<std::vector<STStackablePackageData, std::allocator<STStackablePackageData> > > >, std::less<int>, std::allocator<std::pair<int const, std::vector<std::vector<STStackablePackageData, std::allocator<STStackablePackageData> >, std::allocator<std::vector<STStackablePackageData, std::allocator<STStackablePackageData> > > > > > >*)
0835a65f +0x232d:  xor    $0x1,%eax
0835a662 +0x2330:  test   %al,%al
0835a664 +0x2332:  je     0835a6bc <+0x238a>
0835a666 +0x2334:  movl   $0x1,0x14(%esp)
0835a66e +0x233c:  movl   $0x1,0x10(%esp)
0835a676 +0x2344:  movl   $0x9,0xc(%esp)
0835a67e +0x234c:  movl   $0x1d99,0x8(%esp)
0835a686 +0x2354:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a68e +0x235c:  lea    -0xae8(%ebp),%eax
0835a694 +0x2362:  mov    %eax,(%esp)
0835a697 +0x2365:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a69c +0x236a:  movl   $"\t- FairPVPEquipment.etc file load failed",0x4(%esp)
0835a6a4 +0x2372:  lea    -0xae8(%ebp),%eax
0835a6aa +0x2378:  mov    %eax,(%esp)
0835a6ad +0x237b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a6b2 +0x2380:  mov    $0x0,%ebx
0835a6b7 +0x2385:  jmp    0835f1ba <+0x6e88>
0835a6bc +0x238a:  mov    0x8(%ebp),%eax
0835a6bf +0x238d:  add    $0x8710,%eax
0835a6c4 +0x2392:  mov    %eax,0x4(%esp)
0835a6c8 +0x2396:  movl   $"Etc/GrowthPowerRewardBuff.etc",(%esp)
0835a6cf +0x239d:  call   08911ee3 <_Z17importGrowthPowerPcP17STGrowthPowerData>  ; importGrowthPower(char*, STGrowthPowerData*)
0835a6d4 +0x23a2:  xor    $0x1,%eax
0835a6d7 +0x23a5:  test   %al,%al
0835a6d9 +0x23a7:  je     0835a731 <+0x23ff>
0835a6db +0x23a9:  movl   $0x1,0x14(%esp)
0835a6e3 +0x23b1:  movl   $0x1,0x10(%esp)
0835a6eb +0x23b9:  movl   $0x9,0xc(%esp)
0835a6f3 +0x23c1:  movl   $0x1da1,0x8(%esp)
0835a6fb +0x23c9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a703 +0x23d1:  lea    -0xad8(%ebp),%eax
0835a709 +0x23d7:  mov    %eax,(%esp)
0835a70c +0x23da:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a711 +0x23df:  movl   $"\t- GrowthPowerRewardBuff.etc file load failed",0x4(%esp)
0835a719 +0x23e7:  lea    -0xad8(%ebp),%eax
0835a71f +0x23ed:  mov    %eax,(%esp)
0835a722 +0x23f0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a727 +0x23f5:  mov    $0x0,%ebx
0835a72c +0x23fa:  jmp    0835f1ba <+0x6e88>
0835a731 +0x23ff:  mov    0x8(%ebp),%eax
0835a734 +0x2402:  add    $0x8770,%eax
0835a739 +0x2407:  mov    %eax,0x4(%esp)
0835a73d +0x240b:  movl   $"Etc/BoosterGage.etc",(%esp)
0835a744 +0x2412:  call   08913a7e <_Z17importBoosterGagePcP15BoosterGageData>  ; importBoosterGage(char*, BoosterGageData*)
0835a749 +0x2417:  xor    $0x1,%eax
0835a74c +0x241a:  test   %al,%al
0835a74e +0x241c:  je     0835a7a6 <+0x2474>
0835a750 +0x241e:  movl   $0x1,0x14(%esp)
0835a758 +0x2426:  movl   $0x1,0x10(%esp)
0835a760 +0x242e:  movl   $0x9,0xc(%esp)
0835a768 +0x2436:  movl   $0x1dac,0x8(%esp)
0835a770 +0x243e:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a778 +0x2446:  lea    -0xac8(%ebp),%eax
0835a77e +0x244c:  mov    %eax,(%esp)
0835a781 +0x244f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a786 +0x2454:  movl   $"\t- BoosterGage.etc file load failed",0x4(%esp)
0835a78e +0x245c:  lea    -0xac8(%ebp),%eax
0835a794 +0x2462:  mov    %eax,(%esp)
0835a797 +0x2465:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a79c +0x246a:  mov    $0x0,%ebx
0835a7a1 +0x246f:  jmp    0835f1ba <+0x6e88>
0835a7a6 +0x2474:  movl   $"AICharacter.lst",0x4(%esp)
0835a7ae +0x247c:  movl   $"AICharacter/",(%esp)
0835a7b5 +0x2483:  call   088c98d4 <_Z21initAICharacterScriptPKcS0_>  ; initAICharacterScript(char const*, char const*)
0835a7ba +0x2488:  xor    $0x1,%eax
0835a7bd +0x248b:  test   %al,%al
0835a7bf +0x248d:  je     0835a817 <+0x24e5>
0835a7c1 +0x248f:  movl   $0x1,0x14(%esp)
0835a7c9 +0x2497:  movl   $0x1,0x10(%esp)
0835a7d1 +0x249f:  movl   $0x9,0xc(%esp)
0835a7d9 +0x24a7:  movl   $0x1db9,0x8(%esp)
0835a7e1 +0x24af:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a7e9 +0x24b7:  lea    -0xab8(%ebp),%eax
0835a7ef +0x24bd:  mov    %eax,(%esp)
0835a7f2 +0x24c0:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a7f7 +0x24c5:  movl   $"\t- Load AICharacter.lst fail",0x4(%esp)
0835a7ff +0x24cd:  lea    -0xab8(%ebp),%eax
0835a805 +0x24d3:  mov    %eax,(%esp)
0835a808 +0x24d6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a80d +0x24db:  mov    $0x0,%ebx
0835a812 +0x24e0:  jmp    0835f1ba <+0x6e88>
0835a817 +0x24e5:  movl   $0x538,(%esp)
0835a81e +0x24ec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835a823 +0x24f1:  mov    %eax,%ebx
0835a825 +0x24f3:  mov    %ebx,%eax
0835a827 +0x24f5:  mov    %eax,(%esp)
0835a82a +0x24f8:  call   08373bf6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdbc2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdbc2
0835a82f +0x24fd:  jmp    0835a846 <+0x2514>
0835a831 +0x24ff:  mov    %edx,%esi
0835a833 +0x2501:  mov    %eax,%edi
0835a835 +0x2503:  mov    %ebx,(%esp)
0835a838 +0x2506:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835a83d +0x250b:  mov    %edi,%eax
0835a83f +0x250d:  mov    %esi,%edx
0835a841 +0x250f:  jmp    0835f19c <+0x6e6a>
0835a846 +0x2514:  mov    %ebx,%edx
0835a848 +0x2516:  mov    0x8(%ebp),%eax
0835a84b +0x2519:  mov    %edx,0x869c(%eax)
0835a851 +0x251f:  mov    0x8(%ebp),%eax
0835a854 +0x2522:  mov    0x869c(%eax),%eax
0835a85a +0x2528:  mov    %eax,(%esp)
0835a85d +0x252b:  call   0834a28c <_ZN16CAICharacterList4initEv>  ; CAICharacterList::init()
0835a862 +0x2530:  xor    $0x1,%eax
0835a865 +0x2533:  test   %al,%al
0835a867 +0x2535:  je     0835a8bf <+0x258d>
0835a869 +0x2537:  movl   $0x1,0x14(%esp)
0835a871 +0x253f:  movl   $0x1,0x10(%esp)
0835a879 +0x2547:  movl   $0x9,0xc(%esp)
0835a881 +0x254f:  movl   $0x1dbf,0x8(%esp)
0835a889 +0x2557:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a891 +0x255f:  lea    -0xaa8(%ebp),%eax
0835a897 +0x2565:  mov    %eax,(%esp)
0835a89a +0x2568:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a89f +0x256d:  movl   $"\t- Load AI Character fail",0x4(%esp)
0835a8a7 +0x2575:  lea    -0xaa8(%ebp),%eax
0835a8ad +0x257b:  mov    %eax,(%esp)
0835a8b0 +0x257e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a8b5 +0x2583:  mov    $0x0,%ebx
0835a8ba +0x2588:  jmp    0835f1ba <+0x6e88>
0835a8bf +0x258d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0835a8c4 +0x2592:  mov    0x378(%eax),%eax
0835a8ca +0x2598:  mov    0x8(%ebp),%edx
0835a8cd +0x259b:  add    $0x68,%edx
0835a8d0 +0x259e:  mov    %eax,0x4(%esp)
0835a8d4 +0x25a2:  mov    %edx,(%esp)
0835a8d7 +0x25a5:  call   08a8c372 <_ZN21ServerParameterScript16CheckLightServerEi>  ; ServerParameterScript::CheckLightServer(int)
0835a8dc +0x25aa:  test   %al,%al
0835a8de +0x25ac:  je     0835a92c <+0x25fa>
0835a8e0 +0x25ae:  movl   $0x1,0x14(%esp)
0835a8e8 +0x25b6:  movl   $0x1,0x10(%esp)
0835a8f0 +0x25be:  movl   $0x9,0xc(%esp)
0835a8f8 +0x25c6:  movl   $0x1dc5,0x8(%esp)
0835a900 +0x25ce:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a908 +0x25d6:  lea    -0xa98(%ebp),%eax
0835a90e +0x25dc:  mov    %eax,(%esp)
0835a911 +0x25df:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a916 +0x25e4:  movl   $"\t- Light Server Mode start!",0x4(%esp)
0835a91e +0x25ec:  lea    -0xa98(%ebp),%eax
0835a924 +0x25f2:  mov    %eax,(%esp)
0835a927 +0x25f5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a92c +0x25fa:  mov    0x8(%ebp),%eax
0835a92f +0x25fd:  add    $0x6734,%eax
0835a934 +0x2602:  movl   $"Etc/WorldDrop.etc",0x4(%esp)
0835a93c +0x260a:  mov    %eax,(%esp)
0835a93f +0x260d:  call   089022be <_Z15ImportWorldDropP13WorldDropInfoPKc>  ; ImportWorldDrop(WorldDropInfo*, char const*)
0835a944 +0x2612:  mov    0x8(%ebp),%eax
0835a947 +0x2615:  add    $0x76e8,%eax
0835a94c +0x261a:  movl   $"Etc/WorldDropWarArea.etc",0x4(%esp)
0835a954 +0x2622:  mov    %eax,(%esp)
0835a957 +0x2625:  call   089022be <_Z15ImportWorldDropP13WorldDropInfoPKc>  ; ImportWorldDrop(WorldDropInfo*, char const*)
0835a95c +0x262a:  movl   $0x0,-0x34(%ebp)
0835a963 +0x2631:  movl   $"Etc/PremiumList_New.etc",(%esp)
0835a96a +0x2638:  call   086aeca4 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc>  ; WongWork::CUserPremium::LoadPremiumInfo(char const*)
0835a96f +0x263d:  mov    %eax,-0x34(%ebp)
0835a972 +0x2640:  cmpl   $0x0,-0x34(%ebp)
0835a976 +0x2644:  setne  %al
0835a979 +0x2647:  test   %al,%al
0835a97b +0x2649:  je     0835a9da <+0x26a8>
0835a97d +0x264b:  movl   $0x1,0x14(%esp)
0835a985 +0x2653:  movl   $0x1,0x10(%esp)
0835a98d +0x265b:  movl   $0x9,0xc(%esp)
0835a995 +0x2663:  movl   $0x1e0f,0x8(%esp)
0835a99d +0x266b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835a9a5 +0x2673:  lea    -0xa88(%ebp),%eax
0835a9ab +0x2679:  mov    %eax,(%esp)
0835a9ae +0x267c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835a9b3 +0x2681:  mov    -0x34(%ebp),%eax
0835a9b6 +0x2684:  mov    %eax,0x8(%esp)
0835a9ba +0x2688:  movl   $"\t- LoadPremiumInfo Fail(Line: %d)",0x4(%esp)
0835a9c2 +0x2690:  lea    -0xa88(%ebp),%eax
0835a9c8 +0x2696:  mov    %eax,(%esp)
0835a9cb +0x2699:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835a9d0 +0x269e:  mov    $0x0,%ebx
0835a9d5 +0x26a3:  jmp    0835f1ba <+0x6e88>
0835a9da +0x26a8:  call   0822ad44 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3ee>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3ee
0835a9df +0x26ad:  xor    $0x1,%eax
0835a9e2 +0x26b0:  test   %al,%al
0835a9e4 +0x26b2:  je     0835aa53 <+0x2721>
0835a9e6 +0x26b4:  mov    0x8(%ebp),%eax
0835a9e9 +0x26b7:  add    $0x87b4,%eax
0835a9ee +0x26bc:  mov    %eax,(%esp)
0835a9f1 +0x26bf:  call   089026f3 <_Z20ImportWarAreaCounterP14WarAreaCounter>  ; ImportWarAreaCounter(WarAreaCounter*)
0835a9f6 +0x26c4:  xor    $0x1,%eax
0835a9f9 +0x26c7:  test   %al,%al
0835a9fb +0x26c9:  je     0835aa53 <+0x2721>
0835a9fd +0x26cb:  movl   $0x1,0x14(%esp)
0835aa05 +0x26d3:  movl   $0x1,0x10(%esp)
0835aa0d +0x26db:  movl   $0x9,0xc(%esp)
0835aa15 +0x26e3:  movl   $0x1e18,0x8(%esp)
0835aa1d +0x26eb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835aa25 +0x26f3:  lea    -0xa78(%ebp),%eax
0835aa2b +0x26f9:  mov    %eax,(%esp)
0835aa2e +0x26fc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835aa33 +0x2701:  movl   $"\t- WarArea.etc file load failed",0x4(%esp)
0835aa3b +0x2709:  lea    -0xa78(%ebp),%eax
0835aa41 +0x270f:  mov    %eax,(%esp)
0835aa44 +0x2712:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835aa49 +0x2717:  mov    $0x0,%ebx
0835aa4e +0x271c:  jmp    0835f1ba <+0x6e88>
0835aa53 +0x2721:  movl   $0x0,0xc(%esp)
0835aa5b +0x2729:  movl   $"ExpTable.tbl",0x8(%esp)
0835aa63 +0x2731:  movl   $"Character.lst",0x4(%esp)
0835aa6b +0x2739:  movl   $"Character/",(%esp)
0835aa72 +0x2740:  call   08a0cc3c <_Z19InitCharacterScriptPKcS0_S0_S0_>  ; InitCharacterScript(char const*, char const*, char const*, char const*)
0835aa77 +0x2745:  xor    $0x1,%eax
0835aa7a +0x2748:  test   %al,%al
0835aa7c +0x274a:  je     0835aad4 <+0x27a2>
0835aa7e +0x274c:  movl   $0x1,0x14(%esp)
0835aa86 +0x2754:  movl   $0x1,0x10(%esp)
0835aa8e +0x275c:  movl   $0x9,0xc(%esp)
0835aa96 +0x2764:  movl   $0x1e23,0x8(%esp)
0835aa9e +0x276c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835aaa6 +0x2774:  lea    -0xa68(%ebp),%eax
0835aaac +0x277a:  mov    %eax,(%esp)
0835aaaf +0x277d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835aab4 +0x2782:  movl   $"\t- Load Character.lst fail",0x4(%esp)
0835aabc +0x278a:  lea    -0xa68(%ebp),%eax
0835aac2 +0x2790:  mov    %eax,(%esp)
0835aac5 +0x2793:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835aaca +0x2798:  mov    $0x0,%ebx
0835aacf +0x279d:  jmp    0835f1ba <+0x6e88>
0835aad4 +0x27a2:  movl   $"MonsterApcDifficultyBonus.tbl",0x8(%esp)
0835aadc +0x27aa:  movl   $"Monster.lst",0x4(%esp)
0835aae4 +0x27b2:  movl   $"Monster/",(%esp)
0835aaeb +0x27b9:  call   08a11311 <_Z17InitMonsterScriptPKcS0_S0_>  ; InitMonsterScript(char const*, char const*, char const*)
0835aaf0 +0x27be:  xor    $0x1,%eax
0835aaf3 +0x27c1:  test   %al,%al
0835aaf5 +0x27c3:  je     0835ab4d <+0x281b>
0835aaf7 +0x27c5:  movl   $0x1,0x14(%esp)
0835aaff +0x27cd:  movl   $0x1,0x10(%esp)
0835ab07 +0x27d5:  movl   $0x9,0xc(%esp)
0835ab0f +0x27dd:  movl   $0x1e28,0x8(%esp)
0835ab17 +0x27e5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ab1f +0x27ed:  lea    -0xa58(%ebp),%eax
0835ab25 +0x27f3:  mov    %eax,(%esp)
0835ab28 +0x27f6:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ab2d +0x27fb:  movl   $"\t- Load Monster.lst fail",0x4(%esp)
0835ab35 +0x2803:  lea    -0xa58(%ebp),%eax
0835ab3b +0x2809:  mov    %eax,(%esp)
0835ab3e +0x280c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ab43 +0x2811:  mov    $0x0,%ebx
0835ab48 +0x2816:  jmp    0835f1ba <+0x6e88>
0835ab4d +0x281b:  movl   $"PassiveObject.lst",0x4(%esp)
0835ab55 +0x2823:  movl   $"PassiveObject/",(%esp)
0835ab5c +0x282a:  call   08a29ead <_Z23InitPassiveObjectScriptPKcS0_>  ; InitPassiveObjectScript(char const*, char const*)
0835ab61 +0x282f:  xor    $0x1,%eax
0835ab64 +0x2832:  test   %al,%al
0835ab66 +0x2834:  je     0835abbe <+0x288c>
0835ab68 +0x2836:  movl   $0x1,0x14(%esp)
0835ab70 +0x283e:  movl   $0x1,0x10(%esp)
0835ab78 +0x2846:  movl   $0x9,0xc(%esp)
0835ab80 +0x284e:  movl   $0x1e2d,0x8(%esp)
0835ab88 +0x2856:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ab90 +0x285e:  lea    -0xa48(%ebp),%eax
0835ab96 +0x2864:  mov    %eax,(%esp)
0835ab99 +0x2867:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ab9e +0x286c:  movl   $"\t- Load PassiveObject.lst fail",0x4(%esp)
0835aba6 +0x2874:  lea    -0xa48(%ebp),%eax
0835abac +0x287a:  mov    %eax,(%esp)
0835abaf +0x287d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835abb4 +0x2882:  mov    $0x0,%ebx
0835abb9 +0x2887:  jmp    0835f1ba <+0x6e88>
0835abbe +0x288c:  movl   $"pricetable.tbl",0x8(%esp)
0835abc6 +0x2894:  movl   $"equipment.lst",0x4(%esp)
0835abce +0x289c:  movl   $"equipment/",(%esp)
0835abd5 +0x28a3:  call   08991601 <_Z19InitEquipmentScriptPKcS0_S0_>  ; InitEquipmentScript(char const*, char const*, char const*)
0835abda +0x28a8:  xor    $0x1,%eax
0835abdd +0x28ab:  test   %al,%al
0835abdf +0x28ad:  je     0835ac37 <+0x2905>
0835abe1 +0x28af:  movl   $0x1,0x14(%esp)
0835abe9 +0x28b7:  movl   $0x1,0x10(%esp)
0835abf1 +0x28bf:  movl   $0x9,0xc(%esp)
0835abf9 +0x28c7:  movl   $0x1e33,0x8(%esp)
0835ac01 +0x28cf:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ac09 +0x28d7:  lea    -0xa38(%ebp),%eax
0835ac0f +0x28dd:  mov    %eax,(%esp)
0835ac12 +0x28e0:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ac17 +0x28e5:  movl   $"\t- Load equipment.lst fail",0x4(%esp)
0835ac1f +0x28ed:  lea    -0xa38(%ebp),%eax
0835ac25 +0x28f3:  mov    %eax,(%esp)
0835ac28 +0x28f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ac2d +0x28fb:  mov    $0x0,%ebx
0835ac32 +0x2900:  jmp    0835f1ba <+0x6e88>
0835ac37 +0x2905:  movl   $"pricetable.tbl",0x8(%esp)
0835ac3f +0x290d:  movl   $"stackable.lst",0x4(%esp)
0835ac47 +0x2915:  movl   $"stackable/",(%esp)
0835ac4e +0x291c:  call   089ae72e <_Z19InitStackableScriptPKcS0_S0_>  ; InitStackableScript(char const*, char const*, char const*)
0835ac53 +0x2921:  xor    $0x1,%eax
0835ac56 +0x2924:  test   %al,%al
0835ac58 +0x2926:  je     0835ac70 <+0x293e>
0835ac5a +0x2928:  movl   $"Load stackable.lst fail",(%esp)
0835ac61 +0x292f:  call   0807e570 <_init+0xe68>
0835ac66 +0x2934:  mov    $0x0,%ebx
0835ac6b +0x2939:  jmp    0835f1ba <+0x6e88>
0835ac70 +0x293e:  movl   $"Map.lst",0x4(%esp)
0835ac78 +0x2946:  movl   $"Map/",(%esp)
0835ac7f +0x294d:  call   089dce98 <_Z13InitMapScriptPKcS0_>  ; InitMapScript(char const*, char const*)
0835ac84 +0x2952:  xor    $0x1,%eax
0835ac87 +0x2955:  test   %al,%al
0835ac89 +0x2957:  je     0835ace1 <+0x29af>
0835ac8b +0x2959:  movl   $0x1,0x14(%esp)
0835ac93 +0x2961:  movl   $0x1,0x10(%esp)
0835ac9b +0x2969:  movl   $0x9,0xc(%esp)
0835aca3 +0x2971:  movl   $0x1e48,0x8(%esp)
0835acab +0x2979:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835acb3 +0x2981:  lea    -0xa28(%ebp),%eax
0835acb9 +0x2987:  mov    %eax,(%esp)
0835acbc +0x298a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835acc1 +0x298f:  movl   $"\t- Load Map.lst fail\n",0x4(%esp)
0835acc9 +0x2997:  lea    -0xa28(%ebp),%eax
0835accf +0x299d:  mov    %eax,(%esp)
0835acd2 +0x29a0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835acd7 +0x29a5:  mov    $0x0,%ebx
0835acdc +0x29aa:  jmp    0835f1ba <+0x6e88>
0835ace1 +0x29af:  movl   $"Dungeon.lst",0x4(%esp)
0835ace9 +0x29b7:  movl   $"Dungeon/",(%esp)
0835acf0 +0x29be:  call   088e5e3c <_Z17InitDungeonScriptPcS_>  ; InitDungeonScript(char*, char*)
0835acf5 +0x29c3:  xor    $0x1,%eax
0835acf8 +0x29c6:  test   %al,%al
0835acfa +0x29c8:  je     0835ad52 <+0x2a20>
0835acfc +0x29ca:  movl   $0x1,0x14(%esp)
0835ad04 +0x29d2:  movl   $0x1,0x10(%esp)
0835ad0c +0x29da:  movl   $0x9,0xc(%esp)
0835ad14 +0x29e2:  movl   $0x1e4d,0x8(%esp)
0835ad1c +0x29ea:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ad24 +0x29f2:  lea    -0xa18(%ebp),%eax
0835ad2a +0x29f8:  mov    %eax,(%esp)
0835ad2d +0x29fb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ad32 +0x2a00:  movl   $"\t- Load Dungeon.lst fail\n",0x4(%esp)
0835ad3a +0x2a08:  lea    -0xa18(%ebp),%eax
0835ad40 +0x2a0e:  mov    %eax,(%esp)
0835ad43 +0x2a11:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ad48 +0x2a16:  mov    $0x0,%ebx
0835ad4d +0x2a1b:  jmp    0835f1ba <+0x6e88>
0835ad52 +0x2a20:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0835ad57 +0x2a25:  mov    %eax,(%esp)
0835ad5a +0x2a28:  call   08298e24 <_ZN12CGameManager26GetQuickPartyRewardManagerEv>  ; CGameManager::GetQuickPartyRewardManager()
0835ad5f +0x2a2d:  mov    %eax,(%esp)
0835ad62 +0x2a30:  call   0826d6b0 <_ZN10QuickParty24CQuickPartyRewardManager4initEv>  ; QuickParty::CQuickPartyRewardManager::init()
0835ad67 +0x2a35:  xor    $0x1,%eax
0835ad6a +0x2a38:  test   %al,%al
0835ad6c +0x2a3a:  je     0835ad78 <+0x2a46>
0835ad6e +0x2a3c:  mov    $0x0,%ebx
0835ad73 +0x2a41:  jmp    0835f1ba <+0x6e88>
0835ad78 +0x2a46:  movl   $"Quest.lst",0x4(%esp)
0835ad80 +0x2a4e:  movl   $"n_Quest/",(%esp)
0835ad87 +0x2a55:  call   08a61642 <_Z15initQuestScriptPKcS0_>  ; initQuestScript(char const*, char const*)
0835ad8c +0x2a5a:  xor    $0x1,%eax
0835ad8f +0x2a5d:  test   %al,%al
0835ad91 +0x2a5f:  je     0835ade9 <+0x2ab7>
0835ad93 +0x2a61:  movl   $0x1,0x14(%esp)
0835ad9b +0x2a69:  movl   $0x1,0x10(%esp)
0835ada3 +0x2a71:  movl   $0x9,0xc(%esp)
0835adab +0x2a79:  movl   $0x1e5c,0x8(%esp)
0835adb3 +0x2a81:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835adbb +0x2a89:  lea    -0xa08(%ebp),%eax
0835adc1 +0x2a8f:  mov    %eax,(%esp)
0835adc4 +0x2a92:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835adc9 +0x2a97:  movl   $"\t- Load Quest.lst fail\n",0x4(%esp)
0835add1 +0x2a9f:  lea    -0xa08(%ebp),%eax
0835add7 +0x2aa5:  mov    %eax,(%esp)
0835adda +0x2aa8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835addf +0x2aad:  mov    $0x0,%ebx
0835ade4 +0x2ab2:  jmp    0835f1ba <+0x6e88>
0835ade9 +0x2ab7:  movl   $"SkillList.lst",0x4(%esp)
0835adf1 +0x2abf:  movl   $"Skill/",(%esp)
0835adf8 +0x2ac6:  call   08a97438 <_Z15InitSkillScriptPKcS0_>  ; InitSkillScript(char const*, char const*)
0835adfd +0x2acb:  xor    $0x1,%eax
0835ae00 +0x2ace:  test   %al,%al
0835ae02 +0x2ad0:  je     0835ae5a <+0x2b28>
0835ae04 +0x2ad2:  movl   $0x1,0x14(%esp)
0835ae0c +0x2ada:  movl   $0x1,0x10(%esp)
0835ae14 +0x2ae2:  movl   $0x9,0xc(%esp)
0835ae1c +0x2aea:  movl   $0x1e61,0x8(%esp)
0835ae24 +0x2af2:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ae2c +0x2afa:  lea    -0x9f8(%ebp),%eax
0835ae32 +0x2b00:  mov    %eax,(%esp)
0835ae35 +0x2b03:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ae3a +0x2b08:  movl   $"\t- Load SkillList.lst fail\n",0x4(%esp)
0835ae42 +0x2b10:  lea    -0x9f8(%ebp),%eax
0835ae48 +0x2b16:  mov    %eax,(%esp)
0835ae4b +0x2b19:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ae50 +0x2b1e:  mov    $0x0,%ebx
0835ae55 +0x2b23:  jmp    0835f1ba <+0x6e88>
0835ae5a +0x2b28:  movl   $0x24,(%esp)
0835ae61 +0x2b2f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835ae66 +0x2b34:  mov    %eax,%ebx
0835ae68 +0x2b36:  mov    %ebx,%eax
0835ae6a +0x2b38:  mov    %eax,(%esp)
0835ae6d +0x2b3b:  call   08374e76 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xee42>  ; global constructors keyed to CServerEvent::m_nExpRate+0xee42
0835ae72 +0x2b40:  jmp    0835ae89 <+0x2b57>
0835ae74 +0x2b42:  mov    %edx,%esi
0835ae76 +0x2b44:  mov    %eax,%edi
0835ae78 +0x2b46:  mov    %ebx,(%esp)
0835ae7b +0x2b49:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835ae80 +0x2b4e:  mov    %edi,%eax
0835ae82 +0x2b50:  mov    %esi,%edx
0835ae84 +0x2b52:  jmp    0835f19c <+0x6e6a>
0835ae89 +0x2b57:  mov    %ebx,%edx
0835ae8b +0x2b59:  mov    0x8(%ebp),%eax
0835ae8e +0x2b5c:  mov    %edx,0x8cbc(%eax)
0835ae94 +0x2b62:  movl   $"ItemShop.lst",0x4(%esp)
0835ae9c +0x2b6a:  movl   $"ItemShop/",(%esp)
0835aea3 +0x2b71:  call   089dc4f8 <_Z18initItemShopScriptPcS_>  ; initItemShopScript(char*, char*)
0835aea8 +0x2b76:  xor    $0x1,%eax
0835aeab +0x2b79:  test   %al,%al
0835aead +0x2b7b:  je     0835af05 <+0x2bd3>
0835aeaf +0x2b7d:  movl   $0x1,0x14(%esp)
0835aeb7 +0x2b85:  movl   $0x1,0x10(%esp)
0835aebf +0x2b8d:  movl   $0x9,0xc(%esp)
0835aec7 +0x2b95:  movl   $0x1e68,0x8(%esp)
0835aecf +0x2b9d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835aed7 +0x2ba5:  lea    -0x9e8(%ebp),%eax
0835aedd +0x2bab:  mov    %eax,(%esp)
0835aee0 +0x2bae:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835aee5 +0x2bb3:  movl   $"\t- Load ItemShop.lst fail\n",0x4(%esp)
0835aeed +0x2bbb:  lea    -0x9e8(%ebp),%eax
0835aef3 +0x2bc1:  mov    %eax,(%esp)
0835aef6 +0x2bc4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835aefb +0x2bc9:  mov    $0x0,%ebx
0835af00 +0x2bce:  jmp    0835f1ba <+0x6e88>
0835af05 +0x2bd3:  mov    0x8(%ebp),%eax
0835af08 +0x2bd6:  mov    0x8cbc(%eax),%eax
0835af0e +0x2bdc:  mov    %eax,(%esp)
0835af11 +0x2bdf:  call   08512aa0 <_ZN9CItemShop17loadItemShopFilesEv>  ; CItemShop::loadItemShopFiles()
0835af16 +0x2be4:  xor    $0x1,%eax
0835af19 +0x2be7:  test   %al,%al
0835af1b +0x2be9:  je     0835af73 <+0x2c41>
0835af1d +0x2beb:  movl   $0x1,0x14(%esp)
0835af25 +0x2bf3:  movl   $0x1,0x10(%esp)
0835af2d +0x2bfb:  movl   $0x9,0xc(%esp)
0835af35 +0x2c03:  movl   $0x1e6d,0x8(%esp)
0835af3d +0x2c0b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835af45 +0x2c13:  lea    -0x9d8(%ebp),%eax
0835af4b +0x2c19:  mov    %eax,(%esp)
0835af4e +0x2c1c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835af53 +0x2c21:  movl   $"\t- Load ItemShop file fail\n",0x4(%esp)
0835af5b +0x2c29:  lea    -0x9d8(%ebp),%eax
0835af61 +0x2c2f:  mov    %eax,(%esp)
0835af64 +0x2c32:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835af69 +0x2c37:  mov    $0x0,%ebx
0835af6e +0x2c3c:  jmp    0835f1ba <+0x6e88>
0835af73 +0x2c41:  movl   $"Mission.lst",0x4(%esp)
0835af7b +0x2c49:  movl   $"PVP_Mission/",(%esp)
0835af82 +0x2c50:  call   08a5aad5 <_Z20initPvpMissionSystemPcS_>  ; initPvpMissionSystem(char*, char*)
0835af87 +0x2c55:  xor    $0x1,%eax
0835af8a +0x2c58:  test   %al,%al
0835af8c +0x2c5a:  je     0835af98 <+0x2c66>
0835af8e +0x2c5c:  mov    $0x0,%ebx
0835af93 +0x2c61:  jmp    0835f1ba <+0x6e88>
0835af98 +0x2c66:  movl   $0x54,(%esp)
0835af9f +0x2c6d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835afa4 +0x2c72:  mov    %eax,%ebx
0835afa6 +0x2c74:  mov    %ebx,%eax
0835afa8 +0x2c76:  mov    %eax,(%esp)
0835afab +0x2c79:  call   085e1abc <_ZN17PvP_MissionSystemC1Ev>  ; PvP_MissionSystem::PvP_MissionSystem()
0835afb0 +0x2c7e:  jmp    0835afc7 <+0x2c95>
0835afb2 +0x2c80:  mov    %edx,%esi
0835afb4 +0x2c82:  mov    %eax,%edi
0835afb6 +0x2c84:  mov    %ebx,(%esp)
0835afb9 +0x2c87:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835afbe +0x2c8c:  mov    %edi,%eax
0835afc0 +0x2c8e:  mov    %esi,%edx
0835afc2 +0x2c90:  jmp    0835f19c <+0x6e6a>
0835afc7 +0x2c95:  mov    %ebx,%edx
0835afc9 +0x2c97:  mov    0x8(%ebp),%eax
0835afcc +0x2c9a:  mov    %edx,0xb454(%eax)
0835afd2 +0x2ca0:  mov    0x8(%ebp),%eax
0835afd5 +0x2ca3:  mov    0xb454(%eax),%eax
0835afdb +0x2ca9:  mov    %eax,(%esp)
0835afde +0x2cac:  call   085e1dc6 <_ZN17PvP_MissionSystem9Load_listEv>  ; PvP_MissionSystem::Load_list()
0835afe3 +0x2cb1:  xor    $0x1,%eax
0835afe6 +0x2cb4:  test   %al,%al
0835afe8 +0x2cb6:  je     0835b040 <+0x2d0e>
0835afea +0x2cb8:  movl   $0x1,0x14(%esp)
0835aff2 +0x2cc0:  movl   $0x1,0x10(%esp)
0835affa +0x2cc8:  movl   $0x9,0xc(%esp)
0835b002 +0x2cd0:  movl   $0x1e79,0x8(%esp)
0835b00a +0x2cd8:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b012 +0x2ce0:  lea    -0x9c8(%ebp),%eax
0835b018 +0x2ce6:  mov    %eax,(%esp)
0835b01b +0x2ce9:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b020 +0x2cee:  movl   $"\t- Mission Script file fail\n",0x4(%esp)
0835b028 +0x2cf6:  lea    -0x9c8(%ebp),%eax
0835b02e +0x2cfc:  mov    %eax,(%esp)
0835b031 +0x2cff:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b036 +0x2d04:  mov    $0x0,%ebx
0835b03b +0x2d09:  jmp    0835f1ba <+0x6e88>
0835b040 +0x2d0e:  mov    0x8(%ebp),%eax
0835b043 +0x2d11:  mov    0xb454(%eax),%eax
0835b049 +0x2d17:  mov    %eax,(%esp)
0835b04c +0x2d1a:  call   085e1fee <_ZN17PvP_MissionSystem17Load_EtcParameterEv>  ; PvP_MissionSystem::Load_EtcParameter()
0835b051 +0x2d1f:  xor    $0x1,%eax
0835b054 +0x2d22:  test   %al,%al
0835b056 +0x2d24:  je     0835b0ae <+0x2d7c>
0835b058 +0x2d26:  movl   $0x1,0x14(%esp)
0835b060 +0x2d2e:  movl   $0x1,0x10(%esp)
0835b068 +0x2d36:  movl   $0x9,0xc(%esp)
0835b070 +0x2d3e:  movl   $0x1e7e,0x8(%esp)
0835b078 +0x2d46:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b080 +0x2d4e:  lea    -0x9b8(%ebp),%eax
0835b086 +0x2d54:  mov    %eax,(%esp)
0835b089 +0x2d57:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b08e +0x2d5c:  movl   $"\t- Mission Parameter Script file fail\n",0x4(%esp)
0835b096 +0x2d64:  lea    -0x9b8(%ebp),%eax
0835b09c +0x2d6a:  mov    %eax,(%esp)
0835b09f +0x2d6d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b0a4 +0x2d72:  mov    $0x0,%ebx
0835b0a9 +0x2d77:  jmp    0835f1ba <+0x6e88>
0835b0ae +0x2d7c:  mov    0x8(%ebp),%eax
0835b0b1 +0x2d7f:  add    $0x8cb8,%eax
0835b0b6 +0x2d84:  movl   $"Etc/NewCashShop.etc",0x4(%esp)
0835b0be +0x2d8c:  mov    %eax,(%esp)
0835b0c1 +0x2d8f:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0835b0c6 +0x2d94:  mov    0x8(%ebp),%eax
0835b0c9 +0x2d97:  add    $0xa8c0,%eax
0835b0ce +0x2d9c:  movl   $"CashShop/NewArad_CashShop.shp",0x4(%esp)
0835b0d6 +0x2da4:  mov    %eax,(%esp)
0835b0d9 +0x2da7:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0835b0de +0x2dac:  mov    0x8(%ebp),%eax
0835b0e1 +0x2daf:  add    $0xa8c4,%eax
0835b0e6 +0x2db4:  movl   $"CashShop/Sudden_Shop_1.shp",0x4(%esp)
0835b0ee +0x2dbc:  mov    %eax,(%esp)
0835b0f1 +0x2dbf:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0835b0f6 +0x2dc4:  mov    0x8(%ebp),%eax
0835b0f9 +0x2dc7:  add    $0xa8c8,%eax
0835b0fe +0x2dcc:  movl   $"CashShop/Sudden_Shop_2.shp",0x4(%esp)
0835b106 +0x2dd4:  mov    %eax,(%esp)
0835b109 +0x2dd7:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0835b10e +0x2ddc:  mov    0x8(%ebp),%eax
0835b111 +0x2ddf:  add    $0xa8cc,%eax
0835b116 +0x2de4:  movl   $"CashShop/Sudden_Shop_3.shp",0x4(%esp)
0835b11e +0x2dec:  mov    %eax,(%esp)
0835b121 +0x2def:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
0835b126 +0x2df4:  movl   $0x0,0x14(%esp)
0835b12e +0x2dfc:  movl   $0x1,0x10(%esp)
0835b136 +0x2e04:  movl   $0x9,0xc(%esp)
0835b13e +0x2e0c:  movl   $0x1eb4,0x8(%esp)
0835b146 +0x2e14:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b14e +0x2e1c:  lea    -0x9a8(%ebp),%eax
0835b154 +0x2e22:  mov    %eax,(%esp)
0835b157 +0x2e25:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b15c +0x2e2a:  movl   $"\t- Loading Money Limit per Level ",0x4(%esp)
0835b164 +0x2e32:  lea    -0x9a8(%ebp),%eax
0835b16a +0x2e38:  mov    %eax,(%esp)
0835b16d +0x2e3b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b172 +0x2e40:  mov    0x8(%ebp),%eax
0835b175 +0x2e43:  add    $0x6410,%eax
0835b17a +0x2e48:  mov    %eax,(%esp)
0835b17d +0x2e4b:  call   088fdb69 <_Z22importGoldLimitByLevelPj>  ; importGoldLimitByLevel(unsigned int*)
0835b182 +0x2e50:  xor    $0x1,%eax
0835b185 +0x2e53:  test   %al,%al
0835b187 +0x2e55:  je     0835b1d5 <+0x2ea3>
0835b189 +0x2e57:  movl   $0x1,0x14(%esp)
0835b191 +0x2e5f:  movl   $0x1,0x10(%esp)
0835b199 +0x2e67:  movl   $0x9,0xc(%esp)
0835b1a1 +0x2e6f:  movl   $0x1eb7,0x8(%esp)
0835b1a9 +0x2e77:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b1b1 +0x2e7f:  lea    -0x998(%ebp),%eax
0835b1b7 +0x2e85:  mov    %eax,(%esp)
0835b1ba +0x2e88:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b1bf +0x2e8d:  movl   $"\t- Loading Money Limit per Level Fail",0x4(%esp)
0835b1c7 +0x2e95:  lea    -0x998(%ebp),%eax
0835b1cd +0x2e9b:  mov    %eax,(%esp)
0835b1d0 +0x2e9e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b1d5 +0x2ea3:  movl   $0x1,0x14(%esp)
0835b1dd +0x2eab:  movl   $0x0,0x10(%esp)
0835b1e5 +0x2eb3:  movl   $0x9,0xc(%esp)
0835b1ed +0x2ebb:  movl   $0x1eb9,0x8(%esp)
0835b1f5 +0x2ec3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b1fd +0x2ecb:  lea    -0x988(%ebp),%eax
0835b203 +0x2ed1:  mov    %eax,(%esp)
0835b206 +0x2ed4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b20b +0x2ed9:  movl   $"Success",0x4(%esp)
0835b213 +0x2ee1:  lea    -0x988(%ebp),%eax
0835b219 +0x2ee7:  mov    %eax,(%esp)
0835b21c +0x2eea:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b221 +0x2eef:  movl   $0x0,0x14(%esp)
0835b229 +0x2ef7:  movl   $0x1,0x10(%esp)
0835b231 +0x2eff:  movl   $0x9,0xc(%esp)
0835b239 +0x2f07:  movl   $0x1ebb,0x8(%esp)
0835b241 +0x2f0f:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b249 +0x2f17:  lea    -0x978(%ebp),%eax
0835b24f +0x2f1d:  mov    %eax,(%esp)
0835b252 +0x2f20:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b257 +0x2f25:  movl   $"\t- Loading Compound Item ",0x4(%esp)
0835b25f +0x2f2d:  lea    -0x978(%ebp),%eax
0835b265 +0x2f33:  mov    %eax,(%esp)
0835b268 +0x2f36:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b26d +0x2f3b:  movl   $0xbec,(%esp)
0835b274 +0x2f42:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835b279 +0x2f47:  mov    %eax,%ebx
0835b27b +0x2f49:  mov    %ebx,%eax
0835b27d +0x2f4b:  mov    %eax,(%esp)
0835b280 +0x2f4e:  call   0832c402 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_ItemC1Ev>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::CCompound_ExtreamDun_Item()
0835b285 +0x2f53:  jmp    0835b29c <+0x2f6a>
0835b287 +0x2f55:  mov    %edx,%esi
0835b289 +0x2f57:  mov    %eax,%edi
0835b28b +0x2f59:  mov    %ebx,(%esp)
0835b28e +0x2f5c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835b293 +0x2f61:  mov    %edi,%eax
0835b295 +0x2f63:  mov    %esi,%edx
0835b297 +0x2f65:  jmp    0835f19c <+0x6e6a>
0835b29c +0x2f6a:  mov    %ebx,%eax
0835b29e +0x2f6c:  mov    %eax,&_ZN10GlobalData19s_pCompoundBindCubeE
0835b2a3 +0x2f71:  mov    &_ZN10GlobalData19s_pCompoundBindCubeE,%eax
0835b2a8 +0x2f76:  movl   $"bindsphere.etc",0x8(%esp)
0835b2b0 +0x2f7e:  movl   $"Etc/",0x4(%esp)
0835b2b8 +0x2f86:  mov    %eax,(%esp)
0835b2bb +0x2f89:  call   0832c65e <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item10LoadScriptEPKcS2_>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::LoadScript(char const*, char const*)
0835b2c0 +0x2f8e:  test   %eax,%eax
0835b2c2 +0x2f90:  setne  %al
0835b2c5 +0x2f93:  test   %al,%al
0835b2c7 +0x2f95:  je     0835b31f <+0x2fed>
0835b2c9 +0x2f97:  movl   $0x1,0x14(%esp)
0835b2d1 +0x2f9f:  movl   $0x1,0x10(%esp)
0835b2d9 +0x2fa7:  movl   $0x9,0xc(%esp)
0835b2e1 +0x2faf:  movl   $0x1ebf,0x8(%esp)
0835b2e9 +0x2fb7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b2f1 +0x2fbf:  lea    -0x968(%ebp),%eax
0835b2f7 +0x2fc5:  mov    %eax,(%esp)
0835b2fa +0x2fc8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b2ff +0x2fcd:  movl   $"\t- Fail load Compound Item Bind Cube Script File",0x4(%esp)
0835b307 +0x2fd5:  lea    -0x968(%ebp),%eax
0835b30d +0x2fdb:  mov    %eax,(%esp)
0835b310 +0x2fde:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b315 +0x2fe3:  mov    $0x0,%ebx
0835b31a +0x2fe8:  jmp    0835f1ba <+0x6e88>
0835b31f +0x2fed:  movl   $0x1,0x14(%esp)
0835b327 +0x2ff5:  movl   $0x0,0x10(%esp)
0835b32f +0x2ffd:  movl   $0x9,0xc(%esp)
0835b337 +0x3005:  movl   $0x1ec2,0x8(%esp)
0835b33f +0x300d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b347 +0x3015:  lea    -0x958(%ebp),%eax
0835b34d +0x301b:  mov    %eax,(%esp)
0835b350 +0x301e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b355 +0x3023:  movl   $"Success",0x4(%esp)
0835b35d +0x302b:  lea    -0x958(%ebp),%eax
0835b363 +0x3031:  mov    %eax,(%esp)
0835b366 +0x3034:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b36b +0x3039:  movl   $0x0,0x14(%esp)
0835b373 +0x3041:  movl   $0x1,0x10(%esp)
0835b37b +0x3049:  movl   $0x9,0xc(%esp)
0835b383 +0x3051:  movl   $0x1ec5,0x8(%esp)
0835b38b +0x3059:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b393 +0x3061:  lea    -0x948(%ebp),%eax
0835b399 +0x3067:  mov    %eax,(%esp)
0835b39c +0x306a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b3a1 +0x306f:  movl   $"\t- Loading ARAD - Event Upgrade Jar ",0x4(%esp)
0835b3a9 +0x3077:  lea    -0x948(%ebp),%eax
0835b3af +0x307d:  mov    %eax,(%esp)
0835b3b2 +0x3080:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b3b7 +0x3085:  movl   $0x8c,(%esp)
0835b3be +0x308c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835b3c3 +0x3091:  mov    %eax,%ebx
0835b3c5 +0x3093:  mov    %ebx,%eax
0835b3c7 +0x3095:  mov    %eax,(%esp)
0835b3ca +0x3098:  call   080f49b8 <_ZN17Event_Upgrade_JarC1Ev>  ; Event_Upgrade_Jar::Event_Upgrade_Jar()
0835b3cf +0x309d:  jmp    0835b3e6 <+0x30b4>
0835b3d1 +0x309f:  mov    %edx,%esi
0835b3d3 +0x30a1:  mov    %eax,%edi
0835b3d5 +0x30a3:  mov    %ebx,(%esp)
0835b3d8 +0x30a6:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835b3dd +0x30ab:  mov    %edi,%eax
0835b3df +0x30ad:  mov    %esi,%edx
0835b3e1 +0x30af:  jmp    0835f19c <+0x6e6a>
0835b3e6 +0x30b4:  mov    %ebx,%eax
0835b3e8 +0x30b6:  mov    %eax,&_ZN10GlobalData20s_pEvent_UpGrade_JarE
0835b3ed +0x30bb:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
0835b3f2 +0x30c0:  movl   $"Etc/EventUpgradeJar.etc",0x8(%esp)
0835b3fa +0x30c8:  movl   $"",0x4(%esp)
0835b402 +0x30d0:  mov    %eax,(%esp)
0835b405 +0x30d3:  call   080f49e0 <_ZN17Event_Upgrade_Jar10LoadScriptEPKcS1_>  ; Event_Upgrade_Jar::LoadScript(char const*, char const*)
0835b40a +0x30d8:  test   %eax,%eax
0835b40c +0x30da:  sete   %al
0835b40f +0x30dd:  test   %al,%al
0835b411 +0x30df:  je     0835b469 <+0x3137>
0835b413 +0x30e1:  movl   $0x1,0x14(%esp)
0835b41b +0x30e9:  movl   $0x1,0x10(%esp)
0835b423 +0x30f1:  movl   $0x9,0xc(%esp)
0835b42b +0x30f9:  movl   $0x1ec9,0x8(%esp)
0835b433 +0x3101:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b43b +0x3109:  lea    -0x938(%ebp),%eax
0835b441 +0x310f:  mov    %eax,(%esp)
0835b444 +0x3112:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b449 +0x3117:  movl   $"\t- Fail load Event.Upgrad.Jar Script File",0x4(%esp)
0835b451 +0x311f:  lea    -0x938(%ebp),%eax
0835b457 +0x3125:  mov    %eax,(%esp)
0835b45a +0x3128:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b45f +0x312d:  mov    $0x0,%ebx
0835b464 +0x3132:  jmp    0835f1ba <+0x6e88>
0835b469 +0x3137:  movl   $0x1,0x14(%esp)
0835b471 +0x313f:  movl   $0x0,0x10(%esp)
0835b479 +0x3147:  movl   $0x9,0xc(%esp)
0835b481 +0x314f:  movl   $0x1ecc,0x8(%esp)
0835b489 +0x3157:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b491 +0x315f:  lea    -0x928(%ebp),%eax
0835b497 +0x3165:  mov    %eax,(%esp)
0835b49a +0x3168:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b49f +0x316d:  movl   $"Success",0x4(%esp)
0835b4a7 +0x3175:  lea    -0x928(%ebp),%eax
0835b4ad +0x317b:  mov    %eax,(%esp)
0835b4b0 +0x317e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b4b5 +0x3183:  movl   $0x0,0x14(%esp)
0835b4bd +0x318b:  movl   $0x1,0x10(%esp)
0835b4c5 +0x3193:  movl   $0x9,0xc(%esp)
0835b4cd +0x319b:  movl   $0x1ed9,0x8(%esp)
0835b4d5 +0x31a3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b4dd +0x31ab:  lea    -0x918(%ebp),%eax
0835b4e3 +0x31b1:  mov    %eax,(%esp)
0835b4e6 +0x31b4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b4eb +0x31b9:  movl   $"\t- Loading Compound Avatar ",0x4(%esp)
0835b4f3 +0x31c1:  lea    -0x918(%ebp),%eax
0835b4f9 +0x31c7:  mov    %eax,(%esp)
0835b4fc +0x31ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b501 +0x31cf:  movl   $&_ZSt7nothrow,0x4(%esp)
0835b509 +0x31d7:  movl   $0x88,(%esp)
0835b510 +0x31de:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0835b515 +0x31e3:  mov    %eax,%ebx
0835b517 +0x31e5:  mov    %ebx,%eax
0835b519 +0x31e7:  test   %eax,%eax
0835b51b +0x31e9:  je     0835b54a <+0x3218>
0835b51d +0x31eb:  mov    %ebx,%eax
0835b51f +0x31ed:  mov    %eax,(%esp)
0835b522 +0x31f0:  call   08331d74 <_ZN8WongWork15CCompoundAvatarC1Ev>  ; WongWork::CCompoundAvatar::CCompoundAvatar()
0835b527 +0x31f5:  jmp    0835b546 <+0x3214>
0835b529 +0x31f7:  mov    %edx,%esi
0835b52b +0x31f9:  mov    %eax,%edi
0835b52d +0x31fb:  movl   $&_ZSt7nothrow,0x4(%esp)
0835b535 +0x3203:  mov    %ebx,(%esp)
0835b538 +0x3206:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0835b53d +0x320b:  mov    %edi,%eax
0835b53f +0x320d:  mov    %esi,%edx
0835b541 +0x320f:  jmp    0835f19c <+0x6e6a>
0835b546 +0x3214:  mov    %ebx,%eax
0835b548 +0x3216:  jmp    0835b54c <+0x321a>
0835b54a +0x3218:  mov    %ebx,%eax
0835b54c +0x321a:  mov    %eax,&_ZN10GlobalData17s_pCompoundAvatarE
0835b551 +0x321f:  mov    &_ZN10GlobalData17s_pCompoundAvatarE,%eax
0835b556 +0x3224:  movl   $"CompoundAvatar.etc",0x8(%esp)
0835b55e +0x322c:  movl   $"Etc/",0x4(%esp)
0835b566 +0x3234:  mov    %eax,(%esp)
0835b569 +0x3237:  call   08333ea6 <_ZN8WongWork15CCompoundAvatar10LoadScriptEPKcS2_>  ; WongWork::CCompoundAvatar::LoadScript(char const*, char const*)
0835b56e +0x323c:  xor    $0x1,%eax
0835b571 +0x323f:  test   %al,%al
0835b573 +0x3241:  je     0835b5cb <+0x3299>
0835b575 +0x3243:  movl   $0x1,0x14(%esp)
0835b57d +0x324b:  movl   $0x1,0x10(%esp)
0835b585 +0x3253:  movl   $0x9,0xc(%esp)
0835b58d +0x325b:  movl   $0x1ee2,0x8(%esp)
0835b595 +0x3263:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b59d +0x326b:  lea    -0x908(%ebp),%eax
0835b5a3 +0x3271:  mov    %eax,(%esp)
0835b5a6 +0x3274:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b5ab +0x3279:  movl   $"\t- Loading Compound Avatar Fail\n",0x4(%esp)
0835b5b3 +0x3281:  lea    -0x908(%ebp),%eax
0835b5b9 +0x3287:  mov    %eax,(%esp)
0835b5bc +0x328a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b5c1 +0x328f:  mov    $0x0,%ebx
0835b5c6 +0x3294:  jmp    0835f1ba <+0x6e88>
0835b5cb +0x3299:  movl   $0x1,0x14(%esp)
0835b5d3 +0x32a1:  movl   $0x0,0x10(%esp)
0835b5db +0x32a9:  movl   $0x9,0xc(%esp)
0835b5e3 +0x32b1:  movl   $0x1ee5,0x8(%esp)
0835b5eb +0x32b9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b5f3 +0x32c1:  lea    -0x8f8(%ebp),%eax
0835b5f9 +0x32c7:  mov    %eax,(%esp)
0835b5fc +0x32ca:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b601 +0x32cf:  movl   $"Success",0x4(%esp)
0835b609 +0x32d7:  lea    -0x8f8(%ebp),%eax
0835b60f +0x32dd:  mov    %eax,(%esp)
0835b612 +0x32e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b617 +0x32e5:  mov    0x8(%ebp),%eax
0835b61a +0x32e8:  add    $0xb424,%eax
0835b61f +0x32ed:  mov    %eax,0x8(%esp)
0835b623 +0x32f1:  movl   $"VendingMachine.lst",0x4(%esp)
0835b62b +0x32f9:  movl   $"Etc/",(%esp)
0835b632 +0x3300:  call   0890b74e <_Z24importVendingMachineInfoPKcS0_RSt6vectorI18stVendingMachine_tSaIS2_EE>  ; importVendingMachineInfo(char const*, char const*, std::vector<stVendingMachine_t, std::allocator<stVendingMachine_t> >&)
0835b637 +0x3305:  movl   $"WorldMap.lst",0x4(%esp)
0835b63f +0x330d:  movl   $"WorldMap/",(%esp)
0835b646 +0x3314:  call   08ab000c <_Z18initWorldMapScriptPcS_>  ; initWorldMapScript(char*, char*)
0835b64b +0x3319:  xor    $0x1,%eax
0835b64e +0x331c:  test   %al,%al
0835b650 +0x331e:  je     0835b668 <+0x3336>
0835b652 +0x3320:  movl   $"Load WorldMap.lst fail",(%esp)
0835b659 +0x3327:  call   0807e570 <_init+0xe68>
0835b65e +0x332c:  mov    $0x0,%ebx
0835b663 +0x3331:  jmp    0835f1ba <+0x6e88>
0835b668 +0x3336:  movl   $"StageMap.lst",0x4(%esp)
0835b670 +0x333e:  movl   $"StageMap/",(%esp)
0835b677 +0x3345:  call   088a9e6c <_Z18initStageMapScriptPcS_>  ; initStageMapScript(char*, char*)
0835b67c +0x334a:  movl   $0x0,0x14(%esp)
0835b684 +0x3352:  movl   $0x1,0x10(%esp)
0835b68c +0x335a:  movl   $0x9,0xc(%esp)
0835b694 +0x3362:  movl   $0x1ef3,0x8(%esp)
0835b69c +0x336a:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b6a4 +0x3372:  lea    -0x8e8(%ebp),%eax
0835b6aa +0x3378:  mov    %eax,(%esp)
0835b6ad +0x337b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b6b2 +0x3380:  movl   $"\t- Loading Dungeons ",0x4(%esp)
0835b6ba +0x3388:  lea    -0x8e8(%ebp),%eax
0835b6c0 +0x338e:  mov    %eax,(%esp)
0835b6c3 +0x3391:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b6c8 +0x3396:  movl   $0x14,(%esp)
0835b6cf +0x339d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835b6d4 +0x33a2:  mov    %eax,%ebx
0835b6d6 +0x33a4:  mov    %ebx,%eax
0835b6d8 +0x33a6:  mov    %eax,(%esp)
0835b6db +0x33a9:  call   0834d320 <_ZN12CDungeonListC1Ev>  ; CDungeonList::CDungeonList()
0835b6e0 +0x33ae:  jmp    0835b6f7 <+0x33c5>
0835b6e2 +0x33b0:  mov    %edx,%esi
0835b6e4 +0x33b2:  mov    %eax,%edi
0835b6e6 +0x33b4:  mov    %ebx,(%esp)
0835b6e9 +0x33b7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835b6ee +0x33bc:  mov    %edi,%eax
0835b6f0 +0x33be:  mov    %esi,%edx
0835b6f2 +0x33c0:  jmp    0835f19c <+0x6e6a>
0835b6f7 +0x33c5:  mov    %ebx,%edx
0835b6f9 +0x33c7:  mov    0x8(%ebp),%eax
0835b6fc +0x33ca:  mov    %edx,(%eax)
0835b6fe +0x33cc:  mov    0x8(%ebp),%eax
0835b701 +0x33cf:  add    $0xaa74,%eax
0835b706 +0x33d4:  movl   $0x6,0x8(%esp)
0835b70e +0x33dc:  movl   $0x0,0x4(%esp)
0835b716 +0x33e4:  mov    %eax,(%esp)
0835b719 +0x33e7:  call   0807dcc0 <_init+0x5b8>
0835b71e +0x33ec:  mov    0x8(%ebp),%eax
0835b721 +0x33ef:  add    $0xaa7a,%eax
0835b726 +0x33f4:  movl   $0x6,0x8(%esp)
0835b72e +0x33fc:  movl   $0x0,0x4(%esp)
0835b736 +0x3404:  mov    %eax,(%esp)
0835b739 +0x3407:  call   0807dcc0 <_init+0x5b8>
0835b73e +0x340c:  mov    0x8(%ebp),%eax
0835b741 +0x340f:  add    $0xaa80,%eax
0835b746 +0x3414:  movl   $0x3,0x8(%esp)
0835b74e +0x341c:  movl   $0x0,0x4(%esp)
0835b756 +0x3424:  mov    %eax,(%esp)
0835b759 +0x3427:  call   0807dcc0 <_init+0x5b8>
0835b75e +0x342c:  mov    0x8(%ebp),%eax
0835b761 +0x342f:  mov    (%eax),%eax
0835b763 +0x3431:  mov    %eax,(%esp)
0835b766 +0x3434:  call   0834d376 <_ZN12CDungeonList9load_listEv>  ; CDungeonList::load_list()
0835b76b +0x3439:  xor    $0x1,%eax
0835b76e +0x343c:  test   %al,%al
0835b770 +0x343e:  je     0835b7c8 <+0x3496>
0835b772 +0x3440:  movl   $0x1,0x14(%esp)
0835b77a +0x3448:  movl   $0x1,0x10(%esp)
0835b782 +0x3450:  movl   $0x9,0xc(%esp)
0835b78a +0x3458:  movl   $0x1f05,0x8(%esp)
0835b792 +0x3460:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b79a +0x3468:  lea    -0x8d8(%ebp),%eax
0835b7a0 +0x346e:  mov    %eax,(%esp)
0835b7a3 +0x3471:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b7a8 +0x3476:  movl   $"\t- Loading Dungeons Fail",0x4(%esp)
0835b7b0 +0x347e:  lea    -0x8d8(%ebp),%eax
0835b7b6 +0x3484:  mov    %eax,(%esp)
0835b7b9 +0x3487:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b7be +0x348c:  mov    $0x0,%ebx
0835b7c3 +0x3491:  jmp    0835f1ba <+0x6e88>
0835b7c8 +0x3496:  movl   $0x1,0x14(%esp)
0835b7d0 +0x349e:  movl   $0x0,0x10(%esp)
0835b7d8 +0x34a6:  movl   $0x9,0xc(%esp)
0835b7e0 +0x34ae:  movl   $0x1f08,0x8(%esp)
0835b7e8 +0x34b6:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b7f0 +0x34be:  lea    -0x8c8(%ebp),%eax
0835b7f6 +0x34c4:  mov    %eax,(%esp)
0835b7f9 +0x34c7:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b7fe +0x34cc:  movl   $"Success",0x4(%esp)
0835b806 +0x34d4:  lea    -0x8c8(%ebp),%eax
0835b80c +0x34da:  mov    %eax,(%esp)
0835b80f +0x34dd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b814 +0x34e2:  movl   $0x0,0x14(%esp)
0835b81c +0x34ea:  movl   $0x1,0x10(%esp)
0835b824 +0x34f2:  movl   $0x9,0xc(%esp)
0835b82c +0x34fa:  movl   $0x1f0b,0x8(%esp)
0835b834 +0x3502:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b83c +0x350a:  lea    -0x8b8(%ebp),%eax
0835b842 +0x3510:  mov    %eax,(%esp)
0835b845 +0x3513:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b84a +0x3518:  movl   $"\t- Loading Tower Of Despair System ",0x4(%esp)
0835b852 +0x3520:  lea    -0x8b8(%ebp),%eax
0835b858 +0x3526:  mov    %eax,(%esp)
0835b85b +0x3529:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b860 +0x352e:  movl   $0x35c,(%esp)
0835b867 +0x3535:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835b86c +0x353a:  mov    %eax,%ebx
0835b86e +0x353c:  mov    %ebx,%eax
0835b870 +0x353e:  mov    %eax,(%esp)
0835b873 +0x3541:  call   08643ac4 <_ZN17TowerOfDespairMgrC1Ev>  ; TowerOfDespairMgr::TowerOfDespairMgr()
0835b878 +0x3546:  jmp    0835b88f <+0x355d>
0835b87a +0x3548:  mov    %edx,%esi
0835b87c +0x354a:  mov    %eax,%edi
0835b87e +0x354c:  mov    %ebx,(%esp)
0835b881 +0x354f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835b886 +0x3554:  mov    %edi,%eax
0835b888 +0x3556:  mov    %esi,%edx
0835b88a +0x3558:  jmp    0835f19c <+0x6e6a>
0835b88f +0x355d:  mov    %ebx,%eax
0835b891 +0x355f:  mov    %eax,&_ZN10GlobalData20s_pTowerOfDespairMgrE
0835b896 +0x3564:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
0835b89b +0x3569:  movl   $"TowerOfDespair.etc",0x8(%esp)
0835b8a3 +0x3571:  movl   $"Etc/",0x4(%esp)
0835b8ab +0x3579:  mov    %eax,(%esp)
0835b8ae +0x357c:  call   08643e7e <_ZN17TowerOfDespairMgr10LoadScriptEPKcS1_>  ; TowerOfDespairMgr::LoadScript(char const*, char const*)
0835b8b3 +0x3581:  test   %eax,%eax
0835b8b5 +0x3583:  setne  %al
0835b8b8 +0x3586:  test   %al,%al
0835b8ba +0x3588:  je     0835b912 <+0x35e0>
0835b8bc +0x358a:  movl   $0x1,0x14(%esp)
0835b8c4 +0x3592:  movl   $0x1,0x10(%esp)
0835b8cc +0x359a:  movl   $0x9,0xc(%esp)
0835b8d4 +0x35a2:  movl   $0x1f0f,0x8(%esp)
0835b8dc +0x35aa:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b8e4 +0x35b2:  lea    -0x8a8(%ebp),%eax
0835b8ea +0x35b8:  mov    %eax,(%esp)
0835b8ed +0x35bb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b8f2 +0x35c0:  movl   $"\t- Fail load TowerOfDespair System Script",0x4(%esp)
0835b8fa +0x35c8:  lea    -0x8a8(%ebp),%eax
0835b900 +0x35ce:  mov    %eax,(%esp)
0835b903 +0x35d1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b908 +0x35d6:  mov    $0x0,%ebx
0835b90d +0x35db:  jmp    0835f1ba <+0x6e88>
0835b912 +0x35e0:  movl   $0x1,0x14(%esp)
0835b91a +0x35e8:  movl   $0x0,0x10(%esp)
0835b922 +0x35f0:  movl   $0x9,0xc(%esp)
0835b92a +0x35f8:  movl   $0x1f12,0x8(%esp)
0835b932 +0x3600:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b93a +0x3608:  lea    -0x898(%ebp),%eax
0835b940 +0x360e:  mov    %eax,(%esp)
0835b943 +0x3611:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b948 +0x3616:  movl   $"Success",0x4(%esp)
0835b950 +0x361e:  lea    -0x898(%ebp),%eax
0835b956 +0x3624:  mov    %eax,(%esp)
0835b959 +0x3627:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b95e +0x362c:  movl   $0x0,0x14(%esp)
0835b966 +0x3634:  movl   $0x1,0x10(%esp)
0835b96e +0x363c:  movl   $0x9,0xc(%esp)
0835b976 +0x3644:  movl   $0x1f16,0x8(%esp)
0835b97e +0x364c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835b986 +0x3654:  lea    -0x888(%ebp),%eax
0835b98c +0x365a:  mov    %eax,(%esp)
0835b98f +0x365d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835b994 +0x3662:  movl   $"\t- Loading Chatting Emoticon ",0x4(%esp)
0835b99c +0x366a:  lea    -0x888(%ebp),%eax
0835b9a2 +0x3670:  mov    %eax,(%esp)
0835b9a5 +0x3673:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835b9aa +0x3678:  movl   $0x48,(%esp)
0835b9b1 +0x367f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835b9b6 +0x3684:  mov    %eax,%ebx
0835b9b8 +0x3686:  mov    %ebx,%eax
0835b9ba +0x3688:  mov    %eax,(%esp)
0835b9bd +0x368b:  call   0837e418 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdeb8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdeb8
0835b9c2 +0x3690:  jmp    0835b9d9 <+0x36a7>
0835b9c4 +0x3692:  mov    %edx,%esi
0835b9c6 +0x3694:  mov    %eax,%edi
0835b9c8 +0x3696:  mov    %ebx,(%esp)
0835b9cb +0x3699:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835b9d0 +0x369e:  mov    %edi,%eax
0835b9d2 +0x36a0:  mov    %esi,%edx
0835b9d4 +0x36a2:  jmp    0835f19c <+0x6e6a>
0835b9d9 +0x36a7:  mov    %ebx,%edx
0835b9db +0x36a9:  mov    0x8(%ebp),%eax
0835b9de +0x36ac:  mov    %edx,0x28(%eax)
0835b9e1 +0x36af:  movl   $"ChatEmoticon.lst",0x4(%esp)
0835b9e9 +0x36b7:  movl   $"ChatEmoticon/",(%esp)
0835b9f0 +0x36be:  call   088e30f8 <_Z30initChattingEmoticonScriptListPcS_>  ; initChattingEmoticonScriptList(char*, char*)
0835b9f5 +0x36c3:  xor    $0x1,%eax
0835b9f8 +0x36c6:  test   %al,%al
0835b9fa +0x36c8:  je     0835ba52 <+0x3720>
0835b9fc +0x36ca:  movl   $0x1,0x14(%esp)
0835ba04 +0x36d2:  movl   $0x1,0x10(%esp)
0835ba0c +0x36da:  movl   $0x9,0xc(%esp)
0835ba14 +0x36e2:  movl   $0x1f1b,0x8(%esp)
0835ba1c +0x36ea:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ba24 +0x36f2:  lea    -0x878(%ebp),%eax
0835ba2a +0x36f8:  mov    %eax,(%esp)
0835ba2d +0x36fb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ba32 +0x3700:  movl   $"\t- Emoticon List file error",0x4(%esp)
0835ba3a +0x3708:  lea    -0x878(%ebp),%eax
0835ba40 +0x370e:  mov    %eax,(%esp)
0835ba43 +0x3711:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ba48 +0x3716:  mov    $0x0,%ebx
0835ba4d +0x371b:  jmp    0835f1ba <+0x6e88>
0835ba52 +0x3720:  mov    0x8(%ebp),%eax
0835ba55 +0x3723:  mov    0x28(%eax),%eax
0835ba58 +0x3726:  mov    %eax,(%esp)
0835ba5b +0x3729:  call   080e54d2 <_ZN21CChattingEmoticonList9Load_listEv>  ; CChattingEmoticonList::Load_list()
0835ba60 +0x372e:  xor    $0x1,%eax
0835ba63 +0x3731:  test   %al,%al
0835ba65 +0x3733:  je     0835babd <+0x378b>
0835ba67 +0x3735:  movl   $0x1,0x14(%esp)
0835ba6f +0x373d:  movl   $0x1,0x10(%esp)
0835ba77 +0x3745:  movl   $0x9,0xc(%esp)
0835ba7f +0x374d:  movl   $0x1f20,0x8(%esp)
0835ba87 +0x3755:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ba8f +0x375d:  lea    -0x868(%ebp),%eax
0835ba95 +0x3763:  mov    %eax,(%esp)
0835ba98 +0x3766:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ba9d +0x376b:  movl   $"\t- Emoticon Script file fail",0x4(%esp)
0835baa5 +0x3773:  lea    -0x868(%ebp),%eax
0835baab +0x3779:  mov    %eax,(%esp)
0835baae +0x377c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bab3 +0x3781:  mov    $0x0,%ebx
0835bab8 +0x3786:  jmp    0835f1ba <+0x6e88>
0835babd +0x378b:  movl   $0x1,0x14(%esp)
0835bac5 +0x3793:  movl   $0x0,0x10(%esp)
0835bacd +0x379b:  movl   $0x9,0xc(%esp)
0835bad5 +0x37a3:  movl   $0x1f23,0x8(%esp)
0835badd +0x37ab:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bae5 +0x37b3:  lea    -0x858(%ebp),%eax
0835baeb +0x37b9:  mov    %eax,(%esp)
0835baee +0x37bc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835baf3 +0x37c1:  movl   $"Success",0x4(%esp)
0835bafb +0x37c9:  lea    -0x858(%ebp),%eax
0835bb01 +0x37cf:  mov    %eax,(%esp)
0835bb04 +0x37d2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bb09 +0x37d7:  lea    -0xf34(%ebp),%eax
0835bb0f +0x37dd:  mov    %eax,(%esp)
0835bb12 +0x37e0:  call   08392e40 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x228e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x228e0
0835bb17 +0x37e5:  lea    -0xf34(%ebp),%eax
0835bb1d +0x37eb:  mov    %eax,0x4(%esp)
0835bb21 +0x37ef:  movl   $"Etc/pvpmapbasicdata.etc",(%esp)
0835bb28 +0x37f6:  call   0890a427 <_Z25loadPvpMapBasicDataScriptPKcPSt6vectorI11PVPMAP_DATASaIS2_EE>  ; loadPvpMapBasicDataScript(char const*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >*)
0835bb2d +0x37fb:  xor    $0x1,%eax
0835bb30 +0x37fe:  test   %al,%al
0835bb32 +0x3800:  je     0835bb8a <+0x3858>
0835bb34 +0x3802:  movl   $0x1,0x14(%esp)
0835bb3c +0x380a:  movl   $0x1,0x10(%esp)
0835bb44 +0x3812:  movl   $0x9,0xc(%esp)
0835bb4c +0x381a:  movl   $0x1f29,0x8(%esp)
0835bb54 +0x3822:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bb5c +0x382a:  lea    -0x848(%ebp),%eax
0835bb62 +0x3830:  mov    %eax,(%esp)
0835bb65 +0x3833:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bb6a +0x3838:  movl   $"Load Etc/pvpmapbasicdata.etc fail",0x4(%esp)
0835bb72 +0x3840:  lea    -0x848(%ebp),%eax
0835bb78 +0x3846:  mov    %eax,(%esp)
0835bb7b +0x3849:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bb80 +0x384e:  mov    $0x0,%ebx
0835bb85 +0x3853:  jmp    0835f18c <+0x6e5a>
0835bb8a +0x3858:  movl   $0x0,0x14(%esp)
0835bb92 +0x3860:  movl   $0x1,0x10(%esp)
0835bb9a +0x3868:  movl   $0x9,0xc(%esp)
0835bba2 +0x3870:  movl   $0x1f2d,0x8(%esp)
0835bbaa +0x3878:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bbb2 +0x3880:  lea    -0x838(%ebp),%eax
0835bbb8 +0x3886:  mov    %eax,(%esp)
0835bbbb +0x3889:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bbc0 +0x388e:  movl   $"\t- Loading Maps ",0x4(%esp)
0835bbc8 +0x3896:  lea    -0x838(%ebp),%eax
0835bbce +0x389c:  mov    %eax,(%esp)
0835bbd1 +0x389f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bbd6 +0x38a4:  movl   $0x3d8,(%esp)
0835bbdd +0x38ab:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835bbe2 +0x38b0:  mov    %eax,%ebx
0835bbe4 +0x38b2:  mov    %ebx,%eax
0835bbe6 +0x38b4:  mov    %eax,(%esp)
0835bbe9 +0x38b7:  call   0834ed24 <_ZN8CMapListC1Ev>  ; CMapList::CMapList()
0835bbee +0x38bc:  jmp    0835bc05 <+0x38d3>
0835bbf0 +0x38be:  mov    %edx,%esi
0835bbf2 +0x38c0:  mov    %eax,%edi
0835bbf4 +0x38c2:  mov    %ebx,(%esp)
0835bbf7 +0x38c5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835bbfc +0x38ca:  mov    %edi,%eax
0835bbfe +0x38cc:  mov    %esi,%edx
0835bc00 +0x38ce:  jmp    0835f174 <+0x6e42>
0835bc05 +0x38d3:  mov    %ebx,%edx
0835bc07 +0x38d5:  mov    0x8(%ebp),%eax
0835bc0a +0x38d8:  mov    %edx,0x4(%eax)
0835bc0d +0x38db:  lea    -0xf34(%ebp),%eax
0835bc13 +0x38e1:  mov    %eax,0x4(%esp)
0835bc17 +0x38e5:  mov    0x8(%ebp),%eax
0835bc1a +0x38e8:  mov    %eax,(%esp)
0835bc1d +0x38eb:  call   0835fe02 <_ZN12CDataManager14load_map_filesERSt6vectorI11PVPMAP_DATASaIS1_EE>  ; CDataManager::load_map_files(std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&)
0835bc22 +0x38f0:  xor    $0x1,%eax
0835bc25 +0x38f3:  test   %al,%al
0835bc27 +0x38f5:  je     0835bc7f <+0x394d>
0835bc29 +0x38f7:  movl   $0x1,0x14(%esp)
0835bc31 +0x38ff:  movl   $0x1,0x10(%esp)
0835bc39 +0x3907:  movl   $0x9,0xc(%esp)
0835bc41 +0x390f:  movl   $0x1f33,0x8(%esp)
0835bc49 +0x3917:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bc51 +0x391f:  lea    -0x828(%ebp),%eax
0835bc57 +0x3925:  mov    %eax,(%esp)
0835bc5a +0x3928:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bc5f +0x392d:  movl   $"\t- Loading Maps Fail",0x4(%esp)
0835bc67 +0x3935:  lea    -0x828(%ebp),%eax
0835bc6d +0x393b:  mov    %eax,(%esp)
0835bc70 +0x393e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bc75 +0x3943:  mov    $0x0,%ebx
0835bc7a +0x3948:  jmp    0835f18c <+0x6e5a>
0835bc7f +0x394d:  movl   $0x1,0x14(%esp)
0835bc87 +0x3955:  movl   $0x0,0x10(%esp)
0835bc8f +0x395d:  movl   $0x9,0xc(%esp)
0835bc97 +0x3965:  movl   $0x1f36,0x8(%esp)
0835bc9f +0x396d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bca7 +0x3975:  lea    -0x818(%ebp),%eax
0835bcad +0x397b:  mov    %eax,(%esp)
0835bcb0 +0x397e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bcb5 +0x3983:  movl   $"Success",0x4(%esp)
0835bcbd +0x398b:  lea    -0x818(%ebp),%eax
0835bcc3 +0x3991:  mov    %eax,(%esp)
0835bcc6 +0x3994:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bccb +0x3999:  movl   $0x0,0x14(%esp)
0835bcd3 +0x39a1:  movl   $0x1,0x10(%esp)
0835bcdb +0x39a9:  movl   $0x9,0xc(%esp)
0835bce3 +0x39b1:  movl   $0x1f38,0x8(%esp)
0835bceb +0x39b9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bcf3 +0x39c1:  lea    -0x808(%ebp),%eax
0835bcf9 +0x39c7:  mov    %eax,(%esp)
0835bcfc +0x39ca:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bd01 +0x39cf:  movl   $"\t- Loading Monsters ",0x4(%esp)
0835bd09 +0x39d7:  lea    -0x808(%ebp),%eax
0835bd0f +0x39dd:  mov    %eax,(%esp)
0835bd12 +0x39e0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bd17 +0x39e5:  movl   $0x2c,(%esp)
0835bd1e +0x39ec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835bd23 +0x39f1:  mov    %eax,%ebx
0835bd25 +0x39f3:  mov    %ebx,%eax
0835bd27 +0x39f5:  mov    %eax,(%esp)
0835bd2a +0x39f8:  call   0834f90e <_ZN15CMonsterManagerC1Ev>  ; CMonsterManager::CMonsterManager()
0835bd2f +0x39fd:  jmp    0835bd46 <+0x3a14>
0835bd31 +0x39ff:  mov    %edx,%esi
0835bd33 +0x3a01:  mov    %eax,%edi
0835bd35 +0x3a03:  mov    %ebx,(%esp)
0835bd38 +0x3a06:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835bd3d +0x3a0b:  mov    %edi,%eax
0835bd3f +0x3a0d:  mov    %esi,%edx
0835bd41 +0x3a0f:  jmp    0835f174 <+0x6e42>
0835bd46 +0x3a14:  mov    %ebx,%edx
0835bd48 +0x3a16:  mov    0x8(%ebp),%eax
0835bd4b +0x3a19:  mov    %edx,0x8(%eax)
0835bd4e +0x3a1c:  mov    0x8(%ebp),%eax
0835bd51 +0x3a1f:  mov    0x8(%eax),%eax
0835bd54 +0x3a22:  mov    %eax,(%esp)
0835bd57 +0x3a25:  call   0834fa84 <_ZN15CMonsterManager13load_monstersEv>  ; CMonsterManager::load_monsters()
0835bd5c +0x3a2a:  xor    $0x1,%eax
0835bd5f +0x3a2d:  test   %al,%al
0835bd61 +0x3a2f:  je     0835bdb9 <+0x3a87>
0835bd63 +0x3a31:  movl   $0x1,0x14(%esp)
0835bd6b +0x3a39:  movl   $0x1,0x10(%esp)
0835bd73 +0x3a41:  movl   $0x9,0xc(%esp)
0835bd7b +0x3a49:  movl   $0x1f3e,0x8(%esp)
0835bd83 +0x3a51:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bd8b +0x3a59:  lea    -0x7f8(%ebp),%eax
0835bd91 +0x3a5f:  mov    %eax,(%esp)
0835bd94 +0x3a62:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bd99 +0x3a67:  movl   $"\t- Loading Monsters Fail",0x4(%esp)
0835bda1 +0x3a6f:  lea    -0x7f8(%ebp),%eax
0835bda7 +0x3a75:  mov    %eax,(%esp)
0835bdaa +0x3a78:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bdaf +0x3a7d:  mov    $0x0,%ebx
0835bdb4 +0x3a82:  jmp    0835f18c <+0x6e5a>
0835bdb9 +0x3a87:  movl   $0x1,0x14(%esp)
0835bdc1 +0x3a8f:  movl   $0x0,0x10(%esp)
0835bdc9 +0x3a97:  movl   $0x9,0xc(%esp)
0835bdd1 +0x3a9f:  movl   $0x1f41,0x8(%esp)
0835bdd9 +0x3aa7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bde1 +0x3aaf:  lea    -0x7e8(%ebp),%eax
0835bde7 +0x3ab5:  mov    %eax,(%esp)
0835bdea +0x3ab8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bdef +0x3abd:  movl   $"Success",0x4(%esp)
0835bdf7 +0x3ac5:  lea    -0x7e8(%ebp),%eax
0835bdfd +0x3acb:  mov    %eax,(%esp)
0835be00 +0x3ace:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835be05 +0x3ad3:  mov    0x8(%ebp),%eax
0835be08 +0x3ad6:  add    $0xa884,%eax
0835be0d +0x3adb:  mov    %eax,(%esp)
0835be10 +0x3ade:  call   08372dfa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xcdc6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xcdc6
0835be15 +0x3ae3:  movl   $0x0,0x14(%esp)
0835be1d +0x3aeb:  movl   $0x1,0x10(%esp)
0835be25 +0x3af3:  movl   $0x9,0xc(%esp)
0835be2d +0x3afb:  movl   $0x1f47,0x8(%esp)
0835be35 +0x3b03:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835be3d +0x3b0b:  lea    -0x7d8(%ebp),%eax
0835be43 +0x3b11:  mov    %eax,(%esp)
0835be46 +0x3b14:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835be4b +0x3b19:  movl   $"\t- Loading Skills ",0x4(%esp)
0835be53 +0x3b21:  lea    -0x7d8(%ebp),%eax
0835be59 +0x3b27:  mov    %eax,(%esp)
0835be5c +0x3b2a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835be61 +0x3b2f:  movl   $0x2ec,(%esp)
0835be68 +0x3b36:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835be6d +0x3b3b:  mov    %eax,%ebx
0835be6f +0x3b3d:  mov    %ebx,%eax
0835be71 +0x3b3f:  mov    %eax,(%esp)
0835be74 +0x3b42:  call   08350842 <_ZN10CSkillListC1Ev>  ; CSkillList::CSkillList()
0835be79 +0x3b47:  jmp    0835be90 <+0x3b5e>
0835be7b +0x3b49:  mov    %edx,%esi
0835be7d +0x3b4b:  mov    %eax,%edi
0835be7f +0x3b4d:  mov    %ebx,(%esp)
0835be82 +0x3b50:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835be87 +0x3b55:  mov    %edi,%eax
0835be89 +0x3b57:  mov    %esi,%edx
0835be8b +0x3b59:  jmp    0835f174 <+0x6e42>
0835be90 +0x3b5e:  mov    %ebx,%edx
0835be92 +0x3b60:  mov    0x8(%ebp),%eax
0835be95 +0x3b63:  mov    %edx,0x10(%eax)
0835be98 +0x3b66:  mov    0x8(%ebp),%eax
0835be9b +0x3b69:  mov    0x10(%eax),%eax
0835be9e +0x3b6c:  mov    %eax,(%esp)
0835bea1 +0x3b6f:  call   08350c26 <_ZN10CSkillList4initEv>  ; CSkillList::init()
0835bea6 +0x3b74:  xor    $0x1,%eax
0835bea9 +0x3b77:  test   %al,%al
0835beab +0x3b79:  je     0835bf03 <+0x3bd1>
0835bead +0x3b7b:  movl   $0x1,0x14(%esp)
0835beb5 +0x3b83:  movl   $0x1,0x10(%esp)
0835bebd +0x3b8b:  movl   $0x9,0xc(%esp)
0835bec5 +0x3b93:  movl   $0x1f4d,0x8(%esp)
0835becd +0x3b9b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bed5 +0x3ba3:  lea    -0x7c8(%ebp),%eax
0835bedb +0x3ba9:  mov    %eax,(%esp)
0835bede +0x3bac:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bee3 +0x3bb1:  movl   $"\t- Loading Skills Fail",0x4(%esp)
0835beeb +0x3bb9:  lea    -0x7c8(%ebp),%eax
0835bef1 +0x3bbf:  mov    %eax,(%esp)
0835bef4 +0x3bc2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bef9 +0x3bc7:  mov    $0x0,%ebx
0835befe +0x3bcc:  jmp    0835f18c <+0x6e5a>
0835bf03 +0x3bd1:  movl   $0x1,0x14(%esp)
0835bf0b +0x3bd9:  movl   $0x0,0x10(%esp)
0835bf13 +0x3be1:  movl   $0x9,0xc(%esp)
0835bf1b +0x3be9:  movl   $0x1f50,0x8(%esp)
0835bf23 +0x3bf1:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bf2b +0x3bf9:  lea    -0x7b8(%ebp),%eax
0835bf31 +0x3bff:  mov    %eax,(%esp)
0835bf34 +0x3c02:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bf39 +0x3c07:  movl   $"Success",0x4(%esp)
0835bf41 +0x3c0f:  lea    -0x7b8(%ebp),%eax
0835bf47 +0x3c15:  mov    %eax,(%esp)
0835bf4a +0x3c18:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bf4f +0x3c1d:  movl   $0x0,0x14(%esp)
0835bf57 +0x3c25:  movl   $0x1,0x10(%esp)
0835bf5f +0x3c2d:  movl   $0x9,0xc(%esp)
0835bf67 +0x3c35:  movl   $0x1f52,0x8(%esp)
0835bf6f +0x3c3d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bf77 +0x3c45:  lea    -0x7a8(%ebp),%eax
0835bf7d +0x3c4b:  mov    %eax,(%esp)
0835bf80 +0x3c4e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bf85 +0x3c53:  movl   $"\t- Loading Creatrue Damage ",0x4(%esp)
0835bf8d +0x3c5b:  lea    -0x7a8(%ebp),%eax
0835bf93 +0x3c61:  mov    %eax,(%esp)
0835bf96 +0x3c64:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bf9b +0x3c69:  call   0809510e <_Z29prepareServerDelayCheckDamagev>  ; prepareServerDelayCheckDamage()
0835bfa0 +0x3c6e:  xor    $0x1,%eax
0835bfa3 +0x3c71:  test   %al,%al
0835bfa5 +0x3c73:  je     0835bffd <+0x3ccb>
0835bfa7 +0x3c75:  movl   $0x1,0x14(%esp)
0835bfaf +0x3c7d:  movl   $0x1,0x10(%esp)
0835bfb7 +0x3c85:  movl   $0x9,0xc(%esp)
0835bfbf +0x3c8d:  movl   $0x1f55,0x8(%esp)
0835bfc7 +0x3c95:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835bfcf +0x3c9d:  lea    -0x798(%ebp),%eax
0835bfd5 +0x3ca3:  mov    %eax,(%esp)
0835bfd8 +0x3ca6:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835bfdd +0x3cab:  movl   $"\t- Loading Creatrue Damage Fail",0x4(%esp)
0835bfe5 +0x3cb3:  lea    -0x798(%ebp),%eax
0835bfeb +0x3cb9:  mov    %eax,(%esp)
0835bfee +0x3cbc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835bff3 +0x3cc1:  mov    $0x0,%ebx
0835bff8 +0x3cc6:  jmp    0835f18c <+0x6e5a>
0835bffd +0x3ccb:  movl   $0x1,0x14(%esp)
0835c005 +0x3cd3:  movl   $0x0,0x10(%esp)
0835c00d +0x3cdb:  movl   $0x9,0xc(%esp)
0835c015 +0x3ce3:  movl   $0x1f58,0x8(%esp)
0835c01d +0x3ceb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c025 +0x3cf3:  lea    -0x788(%ebp),%eax
0835c02b +0x3cf9:  mov    %eax,(%esp)
0835c02e +0x3cfc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c033 +0x3d01:  movl   $"Success",0x4(%esp)
0835c03b +0x3d09:  lea    -0x788(%ebp),%eax
0835c041 +0x3d0f:  mov    %eax,(%esp)
0835c044 +0x3d12:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c049 +0x3d17:  lea    -0xf35(%ebp),%eax
0835c04f +0x3d1d:  mov    %eax,(%esp)
0835c052 +0x3d20:  call   0823487c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f26>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f26
0835c057 +0x3d25:  movl   $0x0,0x14(%esp)
0835c05f +0x3d2d:  movl   $0x1,0x10(%esp)
0835c067 +0x3d35:  movl   $0x9,0xc(%esp)
0835c06f +0x3d3d:  movl   $0x1f5c,0x8(%esp)
0835c077 +0x3d45:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c07f +0x3d4d:  lea    -0x778(%ebp),%eax
0835c085 +0x3d53:  mov    %eax,(%esp)
0835c088 +0x3d56:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c08d +0x3d5b:  movl   $"\t- Loading ActiveStatus Damage ",0x4(%esp)
0835c095 +0x3d63:  lea    -0x778(%ebp),%eax
0835c09b +0x3d69:  mov    %eax,(%esp)
0835c09e +0x3d6c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c0a3 +0x3d71:  lea    -0xf35(%ebp),%eax
0835c0a9 +0x3d77:  mov    %eax,(%esp)
0835c0ac +0x3d7a:  call   0808e13c <_ZN25SDCActiveStatusSyncServer22loadActiveStatusScriptEv>  ; SDCActiveStatusSyncServer::loadActiveStatusScript()
0835c0b1 +0x3d7f:  xor    $0x1,%eax
0835c0b4 +0x3d82:  test   %al,%al
0835c0b6 +0x3d84:  je     0835c10e <+0x3ddc>
0835c0b8 +0x3d86:  movl   $0x1,0x14(%esp)
0835c0c0 +0x3d8e:  movl   $0x1,0x10(%esp)
0835c0c8 +0x3d96:  movl   $0x9,0xc(%esp)
0835c0d0 +0x3d9e:  movl   $0x1f5f,0x8(%esp)
0835c0d8 +0x3da6:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c0e0 +0x3dae:  lea    -0x768(%ebp),%eax
0835c0e6 +0x3db4:  mov    %eax,(%esp)
0835c0e9 +0x3db7:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c0ee +0x3dbc:  movl   $"\t- Loading ActiveStatus Damage Fail",0x4(%esp)
0835c0f6 +0x3dc4:  lea    -0x768(%ebp),%eax
0835c0fc +0x3dca:  mov    %eax,(%esp)
0835c0ff +0x3dcd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c104 +0x3dd2:  mov    $0x0,%ebx
0835c109 +0x3dd7:  jmp    0835f164 <+0x6e32>
0835c10e +0x3ddc:  movl   $0x1,0x14(%esp)
0835c116 +0x3de4:  movl   $0x0,0x10(%esp)
0835c11e +0x3dec:  movl   $0x9,0xc(%esp)
0835c126 +0x3df4:  movl   $0x1f62,0x8(%esp)
0835c12e +0x3dfc:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c136 +0x3e04:  lea    -0x758(%ebp),%eax
0835c13c +0x3e0a:  mov    %eax,(%esp)
0835c13f +0x3e0d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c144 +0x3e12:  movl   $"Success",0x4(%esp)
0835c14c +0x3e1a:  lea    -0x758(%ebp),%eax
0835c152 +0x3e20:  mov    %eax,(%esp)
0835c155 +0x3e23:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c15a +0x3e28:  call   088c0409 <_Z21getItemGroupNameTablev>  ; getItemGroupNameTable()
0835c15f +0x3e2d:  mov    %eax,0x8(%esp)
0835c163 +0x3e31:  movl   $"ItemGroupName.tbl",0x4(%esp)
0835c16b +0x3e39:  movl   $"Etc/",(%esp)
0835c172 +0x3e40:  call   0890bb25 <_Z20importItmeGroupTablePKcS0_RSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE>  ; importItmeGroupTable(char const*, char const*, std::map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int> > >&)
0835c177 +0x3e45:  mov    %eax,-0x3c(%ebp)
0835c17a +0x3e48:  cmpl   $0x0,-0x3c(%ebp)
0835c17e +0x3e4c:  setne  %al
0835c181 +0x3e4f:  test   %al,%al
0835c183 +0x3e51:  je     0835c18f <+0x3e5d>
0835c185 +0x3e53:  mov    $0x0,%ebx
0835c18a +0x3e58:  jmp    0835f164 <+0x6e32>
0835c18f +0x3e5d:  movl   $0x0,0x14(%esp)
0835c197 +0x3e65:  movl   $0x1,0x10(%esp)
0835c19f +0x3e6d:  movl   $0x9,0xc(%esp)
0835c1a7 +0x3e75:  movl   $0x1f69,0x8(%esp)
0835c1af +0x3e7d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c1b7 +0x3e85:  lea    -0x748(%ebp),%eax
0835c1bd +0x3e8b:  mov    %eax,(%esp)
0835c1c0 +0x3e8e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c1c5 +0x3e93:  movl   $"\t- Loading Items ",0x4(%esp)
0835c1cd +0x3e9b:  lea    -0x748(%ebp),%eax
0835c1d3 +0x3ea1:  mov    %eax,(%esp)
0835c1d6 +0x3ea4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c1db +0x3ea9:  movl   $0x74,(%esp)
0835c1e2 +0x3eb0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835c1e7 +0x3eb5:  mov    %eax,%ebx
0835c1e9 +0x3eb7:  mov    %ebx,%eax
0835c1eb +0x3eb9:  mov    %eax,(%esp)
0835c1ee +0x3ebc:  call   08510d12 <_ZN9CItemListC1Ev>  ; CItemList::CItemList()
0835c1f3 +0x3ec1:  jmp    0835c20a <+0x3ed8>
0835c1f5 +0x3ec3:  mov    %edx,%esi
0835c1f7 +0x3ec5:  mov    %eax,%edi
0835c1f9 +0x3ec7:  mov    %ebx,(%esp)
0835c1fc +0x3eca:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835c201 +0x3ecf:  mov    %edi,%eax
0835c203 +0x3ed1:  mov    %esi,%edx
0835c205 +0x3ed3:  jmp    0835f14c <+0x6e1a>
0835c20a +0x3ed8:  mov    %ebx,%edx
0835c20c +0x3eda:  mov    0x8(%ebp),%eax
0835c20f +0x3edd:  mov    %edx,0xc(%eax)
0835c212 +0x3ee0:  mov    0x8(%ebp),%eax
0835c215 +0x3ee3:  mov    0xc(%eax),%eax
0835c218 +0x3ee6:  mov    %eax,(%esp)
0835c21b +0x3ee9:  call   08510ffa <_ZN9CItemList4initEv>  ; CItemList::init()
0835c220 +0x3eee:  xor    $0x1,%eax
0835c223 +0x3ef1:  test   %al,%al
0835c225 +0x3ef3:  je     0835c27d <+0x3f4b>
0835c227 +0x3ef5:  movl   $0x1,0x14(%esp)
0835c22f +0x3efd:  movl   $0x1,0x10(%esp)
0835c237 +0x3f05:  movl   $0x9,0xc(%esp)
0835c23f +0x3f0d:  movl   $0x1f6f,0x8(%esp)
0835c247 +0x3f15:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c24f +0x3f1d:  lea    -0x738(%ebp),%eax
0835c255 +0x3f23:  mov    %eax,(%esp)
0835c258 +0x3f26:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c25d +0x3f2b:  movl   $"\t- Loading items Fail",0x4(%esp)
0835c265 +0x3f33:  lea    -0x738(%ebp),%eax
0835c26b +0x3f39:  mov    %eax,(%esp)
0835c26e +0x3f3c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c273 +0x3f41:  mov    $0x0,%ebx
0835c278 +0x3f46:  jmp    0835f164 <+0x6e32>
0835c27d +0x3f4b:  movl   $0x1,0x14(%esp)
0835c285 +0x3f53:  movl   $0x0,0x10(%esp)
0835c28d +0x3f5b:  movl   $0x9,0xc(%esp)
0835c295 +0x3f63:  movl   $0x1f72,0x8(%esp)
0835c29d +0x3f6b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c2a5 +0x3f73:  lea    -0x728(%ebp),%eax
0835c2ab +0x3f79:  mov    %eax,(%esp)
0835c2ae +0x3f7c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c2b3 +0x3f81:  movl   $"Success",0x4(%esp)
0835c2bb +0x3f89:  lea    -0x728(%ebp),%eax
0835c2c1 +0x3f8f:  mov    %eax,(%esp)
0835c2c4 +0x3f92:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c2c9 +0x3f97:  movl   $0x0,0x14(%esp)
0835c2d1 +0x3f9f:  movl   $0x1,0x10(%esp)
0835c2d9 +0x3fa7:  movl   $0x9,0xc(%esp)
0835c2e1 +0x3faf:  movl   $0x1f8a,0x8(%esp)
0835c2e9 +0x3fb7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c2f1 +0x3fbf:  lea    -0x718(%ebp),%eax
0835c2f7 +0x3fc5:  mov    %eax,(%esp)
0835c2fa +0x3fc8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c2ff +0x3fcd:  movl   $"\t- Loading Avatar Roulette ",0x4(%esp)
0835c307 +0x3fd5:  lea    -0x718(%ebp),%eax
0835c30d +0x3fdb:  mov    %eax,(%esp)
0835c310 +0x3fde:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c315 +0x3fe3:  lea    -0x107c(%ebp),%eax
0835c31b +0x3fe9:  mov    %eax,(%esp)
0835c31e +0x3fec:  call   08911b98 <_ZN14AvatarRouletteC1Ev>  ; AvatarRoulette::AvatarRoulette()
0835c323 +0x3ff1:  lea    -0x107c(%ebp),%eax
0835c329 +0x3ff7:  mov    %eax,0x4(%esp)
0835c32d +0x3ffb:  movl   $"Etc/avatar_roulette_jar.etc",(%esp)
0835c334 +0x4002:  call   089116eb <_Z24importAvatarRouletteListPcR14AvatarRoulette>  ; importAvatarRouletteList(char*, AvatarRoulette&)
0835c339 +0x4007:  xor    $0x1,%eax
0835c33c +0x400a:  test   %al,%al
0835c33e +0x400c:  je     0835c396 <+0x4064>
0835c340 +0x400e:  movl   $0x1,0x14(%esp)
0835c348 +0x4016:  movl   $0x1,0x10(%esp)
0835c350 +0x401e:  movl   $0x9,0xc(%esp)
0835c358 +0x4026:  movl   $0x1f90,0x8(%esp)
0835c360 +0x402e:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c368 +0x4036:  lea    -0x708(%ebp),%eax
0835c36e +0x403c:  mov    %eax,(%esp)
0835c371 +0x403f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c376 +0x4044:  movl   $"\t- Loading Avatar Roulette Fail",0x4(%esp)
0835c37e +0x404c:  lea    -0x708(%ebp),%eax
0835c384 +0x4052:  mov    %eax,(%esp)
0835c387 +0x4055:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c38c +0x405a:  mov    $0x0,%ebx
0835c391 +0x405f:  jmp    0835f13c <+0x6e0a>
0835c396 +0x4064:  movl   $0x20,(%esp)
0835c39d +0x406b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835c3a2 +0x4070:  mov    %eax,%ebx
0835c3a4 +0x4072:  mov    %ebx,%eax
0835c3a6 +0x4074:  mov    %eax,(%esp)
0835c3a9 +0x4077:  call   0817f354 <_ZN20AvatarRouletteServerC1Ev>  ; AvatarRouletteServer::AvatarRouletteServer()
0835c3ae +0x407c:  jmp    0835c3c5 <+0x4093>
0835c3b0 +0x407e:  mov    %edx,%esi
0835c3b2 +0x4080:  mov    %eax,%edi
0835c3b4 +0x4082:  mov    %ebx,(%esp)
0835c3b7 +0x4085:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835c3bc +0x408a:  mov    %edi,%eax
0835c3be +0x408c:  mov    %esi,%edx
0835c3c0 +0x408e:  jmp    0835f124 <+0x6df2>
0835c3c5 +0x4093:  mov    %ebx,%eax
0835c3c7 +0x4095:  mov    %eax,&_ZN10GlobalData17s_pAvatarRouletteE
0835c3cc +0x409a:  mov    &_ZN10GlobalData17s_pAvatarRouletteE,%eax
0835c3d1 +0x409f:  test   %eax,%eax
0835c3d3 +0x40a1:  jne    0835c3df <+0x40ad>
0835c3d5 +0x40a3:  mov    $0x0,%ebx
0835c3da +0x40a8:  jmp    0835f13c <+0x6e0a>
0835c3df +0x40ad:  mov    &_ZN10GlobalData17s_pAvatarRouletteE,%eax
0835c3e4 +0x40b2:  lea    -0x107c(%ebp),%edx
0835c3ea +0x40b8:  mov    %edx,0x4(%esp)
0835c3ee +0x40bc:  mov    %eax,(%esp)
0835c3f1 +0x40bf:  call   0817f706 <_ZN20AvatarRouletteServer4InitEP14AvatarRoulette>  ; AvatarRouletteServer::Init(AvatarRoulette*)
0835c3f6 +0x40c4:  xor    $0x1,%eax
0835c3f9 +0x40c7:  test   %al,%al
0835c3fb +0x40c9:  je     0835c453 <+0x4121>
0835c3fd +0x40cb:  movl   $0x1,0x14(%esp)
0835c405 +0x40d3:  movl   $0x1,0x10(%esp)
0835c40d +0x40db:  movl   $0x9,0xc(%esp)
0835c415 +0x40e3:  movl   $0x1f9a,0x8(%esp)
0835c41d +0x40eb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c425 +0x40f3:  lea    -0x6f8(%ebp),%eax
0835c42b +0x40f9:  mov    %eax,(%esp)
0835c42e +0x40fc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c433 +0x4101:  movl   $"\t- Initalizing Avatar Roulette Fail",0x4(%esp)
0835c43b +0x4109:  lea    -0x6f8(%ebp),%eax
0835c441 +0x410f:  mov    %eax,(%esp)
0835c444 +0x4112:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c449 +0x4117:  mov    $0x0,%ebx
0835c44e +0x411c:  jmp    0835f13c <+0x6e0a>
0835c453 +0x4121:  mov    &_ZN10GlobalData17s_pAvatarRouletteE,%eax
0835c458 +0x4126:  mov    %eax,(%esp)
0835c45b +0x4129:  call   0817f386 <_ZN20AvatarRouletteServer18InitAddCharacSkillEv>  ; AvatarRouletteServer::InitAddCharacSkill()
0835c460 +0x412e:  xor    $0x1,%eax
0835c463 +0x4131:  test   %al,%al
0835c465 +0x4133:  je     0835c49d <+0x416b>
0835c467 +0x4135:  movl   $"[AVATAR ROULETTE] initalizing(InitAddCharacSkill) failed.",0x10(%esp)
0835c46f +0x413d:  movl   $0x1fa1,0xc(%esp)
0835c477 +0x4145:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x8(%esp)
0835c47f +0x414d:  movl   $"data_manager.cpp",0x4(%esp)
0835c487 +0x4155:  movl   $0x1,(%esp)
0835c48e +0x415c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0835c493 +0x4161:  mov    $0x0,%ebx
0835c498 +0x4166:  jmp    0835f13c <+0x6e0a>
0835c49d +0x416b:  movl   $0x1,0x14(%esp)
0835c4a5 +0x4173:  movl   $0x0,0x10(%esp)
0835c4ad +0x417b:  movl   $0x9,0xc(%esp)
0835c4b5 +0x4183:  movl   $0x1fa6,0x8(%esp)
0835c4bd +0x418b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c4c5 +0x4193:  lea    -0x6e8(%ebp),%eax
0835c4cb +0x4199:  mov    %eax,(%esp)
0835c4ce +0x419c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c4d3 +0x41a1:  movl   $"Success",0x4(%esp)
0835c4db +0x41a9:  lea    -0x6e8(%ebp),%eax
0835c4e1 +0x41af:  mov    %eax,(%esp)
0835c4e4 +0x41b2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c4e9 +0x41b7:  movl   $0x0,-0x30(%ebp)
0835c4f0 +0x41be:  movl   $"Etc/RandomOption/OptionGrouping.etc",-0xf54(%ebp)
0835c4fa +0x41c8:  movl   $"Etc/RandomOption/OptionGroupSelection.etc",-0xf50(%ebp)
0835c504 +0x41d2:  movl   $"Etc/RandomOption/OptionNumbering.etc",-0xf4c(%ebp)
0835c50e +0x41dc:  movl   $"Etc/RandomOption/OptionQuantity.etc",-0xf48(%ebp)
0835c518 +0x41e6:  movl   $"Etc/RandomOption/PartSelection.etc",-0xf44(%ebp)
0835c522 +0x41f0:  movl   $"Etc/RandomOption/RandomizedOptionOverall1.etc",-0xf40(%ebp)
0835c52c +0x41fa:  movl   $"Etc/RandomOption/RandomizedOptionOverall2.etc",-0xf3c(%ebp)
0835c536 +0x4204:  movl   $0x0,0x14(%esp)
0835c53e +0x420c:  movl   $0x1,0x10(%esp)
0835c546 +0x4214:  movl   $0x9,0xc(%esp)
0835c54e +0x421c:  movl   $0x1fb6,0x8(%esp)
0835c556 +0x4224:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c55e +0x422c:  lea    -0x6d8(%ebp),%eax
0835c564 +0x4232:  mov    %eax,(%esp)
0835c567 +0x4235:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c56c +0x423a:  movl   $"\t- Loading RandomOption ",0x4(%esp)
0835c574 +0x4242:  lea    -0x6d8(%ebp),%eax
0835c57a +0x4248:  mov    %eax,(%esp)
0835c57d +0x424b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c582 +0x4250:  movl   $0x0,-0x24(%ebp)
0835c589 +0x4257:  jmp    0835c62a <+0x42f8>
0835c58e +0x425c:  mov    -0x24(%ebp),%eax
0835c591 +0x425f:  mov    -0xf54(%ebp,%eax,4),%eax
0835c598 +0x4266:  mov    0x8(%ebp),%edx
0835c59b +0x4269:  add    $0x4e10,%edx
0835c5a1 +0x426f:  mov    %eax,0x4(%esp)
0835c5a5 +0x4273:  mov    %edx,(%esp)
0835c5a8 +0x4276:  call   08a70a90 <_Z24importRandomOptionScriptR18RandomOptionScriptPKc>  ; importRandomOptionScript(RandomOptionScript&, char const*)
0835c5ad +0x427b:  mov    %eax,-0x30(%ebp)
0835c5b0 +0x427e:  cmpl   $0x0,-0x30(%ebp)
0835c5b4 +0x4282:  setne  %al
0835c5b7 +0x4285:  test   %al,%al
0835c5b9 +0x4287:  je     0835c626 <+0x42f4>
0835c5bb +0x4289:  mov    -0x24(%ebp),%eax
0835c5be +0x428c:  mov    -0xf54(%ebp,%eax,4),%ebx
0835c5c5 +0x4293:  movl   $0x1,0x14(%esp)
0835c5cd +0x429b:  movl   $0x1,0x10(%esp)
0835c5d5 +0x42a3:  movl   $0x9,0xc(%esp)
0835c5dd +0x42ab:  movl   $0x1fbb,0x8(%esp)
0835c5e5 +0x42b3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c5ed +0x42bb:  lea    -0x6c8(%ebp),%eax
0835c5f3 +0x42c1:  mov    %eax,(%esp)
0835c5f6 +0x42c4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c5fb +0x42c9:  mov    -0x30(%ebp),%eax
0835c5fe +0x42cc:  mov    %eax,0xc(%esp)
0835c602 +0x42d0:  mov    %ebx,0x8(%esp)
0835c606 +0x42d4:  movl   $"\t- Fail load RandomOption Script File name(%s), error_line(%d)\n",0x4(%esp)
0835c60e +0x42dc:  lea    -0x6c8(%ebp),%eax
0835c614 +0x42e2:  mov    %eax,(%esp)
0835c617 +0x42e5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c61c +0x42ea:  mov    $0x0,%ebx
0835c621 +0x42ef:  jmp    0835f13c <+0x6e0a>
0835c626 +0x42f4:  addl   $0x1,-0x24(%ebp)
0835c62a +0x42f8:  mov    -0x24(%ebp),%eax
0835c62d +0x42fb:  cmp    $0x6,%eax
0835c630 +0x42fe:  setbe  %al
0835c633 +0x4301:  test   %al,%al
0835c635 +0x4303:  jne    0835c58e <+0x425c>
0835c63b +0x4309:  movl   $0x1,0x14(%esp)
0835c643 +0x4311:  movl   $0x0,0x10(%esp)
0835c64b +0x4319:  movl   $0x9,0xc(%esp)
0835c653 +0x4321:  movl   $0x1fbf,0x8(%esp)
0835c65b +0x4329:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c663 +0x4331:  lea    -0x6b8(%ebp),%eax
0835c669 +0x4337:  mov    %eax,(%esp)
0835c66c +0x433a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c671 +0x433f:  movl   $"Success",0x4(%esp)
0835c679 +0x4347:  lea    -0x6b8(%ebp),%eax
0835c67f +0x434d:  mov    %eax,(%esp)
0835c682 +0x4350:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c687 +0x4355:  mov    0x8(%ebp),%eax
0835c68a +0x4358:  mov    %eax,(%esp)
0835c68d +0x435b:  call   083580aa <_ZN12CDataManager20initRandomOptionItemEv>  ; CDataManager::initRandomOptionItem()
0835c692 +0x4360:  xor    $0x1,%eax
0835c695 +0x4363:  test   %al,%al
0835c697 +0x4365:  je     0835c6ef <+0x43bd>
0835c699 +0x4367:  movl   $0x1,0x14(%esp)
0835c6a1 +0x436f:  movl   $0x1,0x10(%esp)
0835c6a9 +0x4377:  movl   $0x9,0xc(%esp)
0835c6b1 +0x437f:  movl   $0x1fc3,0x8(%esp)
0835c6b9 +0x4387:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c6c1 +0x438f:  lea    -0x6a8(%ebp),%eax
0835c6c7 +0x4395:  mov    %eax,(%esp)
0835c6ca +0x4398:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c6cf +0x439d:  movl   $"Fail load initRandomOptionItem",0x4(%esp)
0835c6d7 +0x43a5:  lea    -0x6a8(%ebp),%eax
0835c6dd +0x43ab:  mov    %eax,(%esp)
0835c6e0 +0x43ae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c6e5 +0x43b3:  mov    $0x0,%ebx
0835c6ea +0x43b8:  jmp    0835f13c <+0x6e0a>
0835c6ef +0x43bd:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835c6f4 +0x43c2:  mov    %eax,(%esp)
0835c6f7 +0x43c5:  call   08625e1e <_ZN11sync_script11CSyncScript26truncate_random_option_refEv>  ; sync_script::CSyncScript::truncate_random_option_ref()
0835c6fc +0x43ca:  xor    $0x1,%eax
0835c6ff +0x43cd:  test   %al,%al
0835c701 +0x43cf:  je     0835c759 <+0x4427>
0835c703 +0x43d1:  movl   $0x1,0x14(%esp)
0835c70b +0x43d9:  movl   $0x1,0x10(%esp)
0835c713 +0x43e1:  movl   $0x9,0xc(%esp)
0835c71b +0x43e9:  movl   $0x1fc9,0x8(%esp)
0835c723 +0x43f1:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c72b +0x43f9:  lea    -0x698(%ebp),%eax
0835c731 +0x43ff:  mov    %eax,(%esp)
0835c734 +0x4402:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c739 +0x4407:  movl   $"\t- Fail truncate_random_option_ref",0x4(%esp)
0835c741 +0x440f:  lea    -0x698(%ebp),%eax
0835c747 +0x4415:  mov    %eax,(%esp)
0835c74a +0x4418:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c74f +0x441d:  mov    $0x0,%ebx
0835c754 +0x4422:  jmp    0835f13c <+0x6e0a>
0835c759 +0x4427:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835c75e +0x442c:  mov    %eax,(%esp)
0835c761 +0x442f:  call   08625ea2 <_ZN11sync_script11CSyncScript24insert_random_option_refEv>  ; sync_script::CSyncScript::insert_random_option_ref()
0835c766 +0x4434:  xor    $0x1,%eax
0835c769 +0x4437:  test   %al,%al
0835c76b +0x4439:  je     0835c7c3 <+0x4491>
0835c76d +0x443b:  movl   $0x1,0x14(%esp)
0835c775 +0x4443:  movl   $0x1,0x10(%esp)
0835c77d +0x444b:  movl   $0x9,0xc(%esp)
0835c785 +0x4453:  movl   $0x1fcf,0x8(%esp)
0835c78d +0x445b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c795 +0x4463:  lea    -0x688(%ebp),%eax
0835c79b +0x4469:  mov    %eax,(%esp)
0835c79e +0x446c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c7a3 +0x4471:  movl   $"\t- Fail truncate_random_option_ref",0x4(%esp)
0835c7ab +0x4479:  lea    -0x688(%ebp),%eax
0835c7b1 +0x447f:  mov    %eax,(%esp)
0835c7b4 +0x4482:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c7b9 +0x4487:  mov    $0x0,%ebx
0835c7be +0x448c:  jmp    0835f13c <+0x6e0a>
0835c7c3 +0x4491:  mov    0x8(%ebp),%eax
0835c7c6 +0x4494:  add    $0x5040,%eax
0835c7cb +0x4499:  mov    %eax,(%esp)
0835c7ce +0x449c:  call   085f963e <_ZN15RegenerationROI36_0_Load_RegenerationRandomOptionItemEv>  ; RegenerationROI::_0_Load_RegenerationRandomOptionItem()
0835c7d3 +0x44a1:  test   %eax,%eax
0835c7d5 +0x44a3:  setne  %al
0835c7d8 +0x44a6:  test   %al,%al
0835c7da +0x44a8:  je     0835c7e6 <+0x44b4>
0835c7dc +0x44aa:  mov    $0x0,%ebx
0835c7e1 +0x44af:  jmp    0835f13c <+0x6e0a>
0835c7e6 +0x44b4:  mov    0x8(%ebp),%eax
0835c7e9 +0x44b7:  add    $0x8780,%eax
0835c7ee +0x44bc:  mov    %eax,(%esp)
0835c7f1 +0x44bf:  call   08364506 <_ZN13CWorldMapList9load_listEv>  ; CWorldMapList::load_list()
0835c7f6 +0x44c4:  xor    $0x1,%eax
0835c7f9 +0x44c7:  test   %al,%al
0835c7fb +0x44c9:  je     0835c853 <+0x4521>
0835c7fd +0x44cb:  movl   $0x1,0x14(%esp)
0835c805 +0x44d3:  movl   $0x1,0x10(%esp)
0835c80d +0x44db:  movl   $0x9,0xc(%esp)
0835c815 +0x44e3:  movl   $0x1fe1,0x8(%esp)
0835c81d +0x44eb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c825 +0x44f3:  lea    -0x678(%ebp),%eax
0835c82b +0x44f9:  mov    %eax,(%esp)
0835c82e +0x44fc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c833 +0x4501:  movl   $"\t- Loading World Map List Fail",0x4(%esp)
0835c83b +0x4509:  lea    -0x678(%ebp),%eax
0835c841 +0x450f:  mov    %eax,(%esp)
0835c844 +0x4512:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c849 +0x4517:  mov    $0x0,%ebx
0835c84e +0x451c:  jmp    0835f13c <+0x6e0a>
0835c853 +0x4521:  movl   $0x0,0x14(%esp)
0835c85b +0x4529:  movl   $0x1,0x10(%esp)
0835c863 +0x4531:  movl   $0x9,0xc(%esp)
0835c86b +0x4539:  movl   $0x1fe5,0x8(%esp)
0835c873 +0x4541:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c87b +0x4549:  lea    -0x668(%ebp),%eax
0835c881 +0x454f:  mov    %eax,(%esp)
0835c884 +0x4552:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c889 +0x4557:  movl   $"\t- Loading Quests ",0x4(%esp)
0835c891 +0x455f:  lea    -0x668(%ebp),%eax
0835c897 +0x4565:  mov    %eax,(%esp)
0835c89a +0x4568:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c89f +0x456d:  movl   $0xe8,(%esp)
0835c8a6 +0x4574:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835c8ab +0x4579:  mov    %eax,%ebx
0835c8ad +0x457b:  mov    %ebx,%eax
0835c8af +0x457d:  mov    %eax,(%esp)
0835c8b2 +0x4580:  call   083538f0 <_ZN9QuestListC1Ev>  ; QuestList::QuestList()
0835c8b7 +0x4585:  jmp    0835c8ce <+0x459c>
0835c8b9 +0x4587:  mov    %edx,%esi
0835c8bb +0x4589:  mov    %eax,%edi
0835c8bd +0x458b:  mov    %ebx,(%esp)
0835c8c0 +0x458e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835c8c5 +0x4593:  mov    %edi,%eax
0835c8c7 +0x4595:  mov    %esi,%edx
0835c8c9 +0x4597:  jmp    0835f124 <+0x6df2>
0835c8ce +0x459c:  mov    %ebx,%edx
0835c8d0 +0x459e:  mov    0x8(%ebp),%eax
0835c8d3 +0x45a1:  mov    %edx,0x18(%eax)
0835c8d6 +0x45a4:  mov    0x8(%ebp),%eax
0835c8d9 +0x45a7:  mov    0x18(%eax),%eax
0835c8dc +0x45aa:  mov    %eax,(%esp)
0835c8df +0x45ad:  call   08353d98 <_ZN9QuestList9load_listEv>  ; QuestList::load_list()
0835c8e4 +0x45b2:  xor    $0x1,%eax
0835c8e7 +0x45b5:  test   %al,%al
0835c8e9 +0x45b7:  je     0835c941 <+0x460f>
0835c8eb +0x45b9:  movl   $0x1,0x14(%esp)
0835c8f3 +0x45c1:  movl   $0x1,0x10(%esp)
0835c8fb +0x45c9:  movl   $0x9,0xc(%esp)
0835c903 +0x45d1:  movl   $0x1fe9,0x8(%esp)
0835c90b +0x45d9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c913 +0x45e1:  lea    -0x658(%ebp),%eax
0835c919 +0x45e7:  mov    %eax,(%esp)
0835c91c +0x45ea:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c921 +0x45ef:  movl   $"\t- Loading Quests Fail",0x4(%esp)
0835c929 +0x45f7:  lea    -0x658(%ebp),%eax
0835c92f +0x45fd:  mov    %eax,(%esp)
0835c932 +0x4600:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c937 +0x4605:  mov    $0x0,%ebx
0835c93c +0x460a:  jmp    0835f13c <+0x6e0a>
0835c941 +0x460f:  movl   $0x1,0x14(%esp)
0835c949 +0x4617:  movl   $0x0,0x10(%esp)
0835c951 +0x461f:  movl   $0x9,0xc(%esp)
0835c959 +0x4627:  movl   $0x1fec,0x8(%esp)
0835c961 +0x462f:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c969 +0x4637:  lea    -0x648(%ebp),%eax
0835c96f +0x463d:  mov    %eax,(%esp)
0835c972 +0x4640:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c977 +0x4645:  movl   $"Success",0x4(%esp)
0835c97f +0x464d:  lea    -0x648(%ebp),%eax
0835c985 +0x4653:  mov    %eax,(%esp)
0835c988 +0x4656:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c98d +0x465b:  movl   $0x0,0x14(%esp)
0835c995 +0x4663:  movl   $0x1,0x10(%esp)
0835c99d +0x466b:  movl   $0x9,0xc(%esp)
0835c9a5 +0x4673:  movl   $0x1fee,0x8(%esp)
0835c9ad +0x467b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835c9b5 +0x4683:  lea    -0x638(%ebp),%eax
0835c9bb +0x4689:  mov    %eax,(%esp)
0835c9be +0x468c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835c9c3 +0x4691:  movl   $"\t- Loading Characters ",0x4(%esp)
0835c9cb +0x4699:  lea    -0x638(%ebp),%eax
0835c9d1 +0x469f:  mov    %eax,(%esp)
0835c9d4 +0x46a2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835c9d9 +0x46a7:  movl   $0x5674,(%esp)
0835c9e0 +0x46ae:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835c9e5 +0x46b3:  mov    %eax,%ebx
0835c9e7 +0x46b5:  mov    %ebx,%eax
0835c9e9 +0x46b7:  mov    %eax,(%esp)
0835c9ec +0x46ba:  call   083493ea <_ZN11CCharacListC1Ev>  ; CCharacList::CCharacList()
0835c9f1 +0x46bf:  jmp    0835ca08 <+0x46d6>
0835c9f3 +0x46c1:  mov    %edx,%esi
0835c9f5 +0x46c3:  mov    %eax,%edi
0835c9f7 +0x46c5:  mov    %ebx,(%esp)
0835c9fa +0x46c8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835c9ff +0x46cd:  mov    %edi,%eax
0835ca01 +0x46cf:  mov    %esi,%edx
0835ca03 +0x46d1:  jmp    0835f124 <+0x6df2>
0835ca08 +0x46d6:  mov    %ebx,%edx
0835ca0a +0x46d8:  mov    0x8(%ebp),%eax
0835ca0d +0x46db:  mov    %edx,0x14(%eax)
0835ca10 +0x46de:  mov    0x8(%ebp),%eax
0835ca13 +0x46e1:  mov    0x14(%eax),%eax
0835ca16 +0x46e4:  mov    %eax,(%esp)
0835ca19 +0x46e7:  call   08349514 <_ZN11CCharacList4initEv>  ; CCharacList::init()
0835ca1e +0x46ec:  xor    $0x1,%eax
0835ca21 +0x46ef:  test   %al,%al
0835ca23 +0x46f1:  je     0835ca7b <+0x4749>
0835ca25 +0x46f3:  movl   $0x1,0x14(%esp)
0835ca2d +0x46fb:  movl   $0x1,0x10(%esp)
0835ca35 +0x4703:  movl   $0x9,0xc(%esp)
0835ca3d +0x470b:  movl   $0x1ff2,0x8(%esp)
0835ca45 +0x4713:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ca4d +0x471b:  lea    -0x628(%ebp),%eax
0835ca53 +0x4721:  mov    %eax,(%esp)
0835ca56 +0x4724:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ca5b +0x4729:  movl   $"\t- Loading Characters Fail",0x4(%esp)
0835ca63 +0x4731:  lea    -0x628(%ebp),%eax
0835ca69 +0x4737:  mov    %eax,(%esp)
0835ca6c +0x473a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ca71 +0x473f:  mov    $0x0,%ebx
0835ca76 +0x4744:  jmp    0835f13c <+0x6e0a>
0835ca7b +0x4749:  movl   $0x1,0x14(%esp)
0835ca83 +0x4751:  movl   $0x0,0x10(%esp)
0835ca8b +0x4759:  movl   $0x9,0xc(%esp)
0835ca93 +0x4761:  movl   $0x1ff5,0x8(%esp)
0835ca9b +0x4769:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835caa3 +0x4771:  lea    -0x618(%ebp),%eax
0835caa9 +0x4777:  mov    %eax,(%esp)
0835caac +0x477a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cab1 +0x477f:  movl   $"Success",0x4(%esp)
0835cab9 +0x4787:  lea    -0x618(%ebp),%eax
0835cabf +0x478d:  mov    %eax,(%esp)
0835cac2 +0x4790:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cac7 +0x4795:  movl   $0x0,0x14(%esp)
0835cacf +0x479d:  movl   $0x1,0x10(%esp)
0835cad7 +0x47a5:  movl   $0x9,0xc(%esp)
0835cadf +0x47ad:  movl   $0x1ff7,0x8(%esp)
0835cae7 +0x47b5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835caef +0x47bd:  lea    -0x608(%ebp),%eax
0835caf5 +0x47c3:  mov    %eax,(%esp)
0835caf8 +0x47c6:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cafd +0x47cb:  movl   $"\t- Loading Disjoints ",0x4(%esp)
0835cb05 +0x47d3:  lea    -0x608(%ebp),%eax
0835cb0b +0x47d9:  mov    %eax,(%esp)
0835cb0e +0x47dc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cb13 +0x47e1:  movl   $0x670,(%esp)
0835cb1a +0x47e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835cb1f +0x47ed:  mov    %eax,%ebx
0835cb21 +0x47ef:  mov    %ebx,%eax
0835cb23 +0x47f1:  mov    %eax,(%esp)
0835cb26 +0x47f4:  call   0837e532 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdfd2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdfd2
0835cb2b +0x47f9:  jmp    0835cb42 <+0x4810>
0835cb2d +0x47fb:  mov    %edx,%esi
0835cb2f +0x47fd:  mov    %eax,%edi
0835cb31 +0x47ff:  mov    %ebx,(%esp)
0835cb34 +0x4802:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835cb39 +0x4807:  mov    %edi,%eax
0835cb3b +0x4809:  mov    %esi,%edx
0835cb3d +0x480b:  jmp    0835f124 <+0x6df2>
0835cb42 +0x4810:  mov    %ebx,%edx
0835cb44 +0x4812:  mov    0x8(%ebp),%eax
0835cb47 +0x4815:  mov    %edx,0x1c(%eax)
0835cb4a +0x4818:  mov    0x8(%ebp),%eax
0835cb4d +0x481b:  mov    0x1c(%eax),%eax
0835cb50 +0x481e:  mov    %eax,(%esp)
0835cb53 +0x4821:  call   0847300c <_ZN8DisJoint12LoadDisJointEv>  ; DisJoint::LoadDisJoint()
0835cb58 +0x4826:  xor    $0x1,%eax
0835cb5b +0x4829:  test   %al,%al
0835cb5d +0x482b:  je     0835cbb5 <+0x4883>
0835cb5f +0x482d:  movl   $0x1,0x14(%esp)
0835cb67 +0x4835:  movl   $0x1,0x10(%esp)
0835cb6f +0x483d:  movl   $0x9,0xc(%esp)
0835cb77 +0x4845:  movl   $0x1ffb,0x8(%esp)
0835cb7f +0x484d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cb87 +0x4855:  lea    -0x5f8(%ebp),%eax
0835cb8d +0x485b:  mov    %eax,(%esp)
0835cb90 +0x485e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cb95 +0x4863:  movl   $"\t- Loading Disjoints Fail",0x4(%esp)
0835cb9d +0x486b:  lea    -0x5f8(%ebp),%eax
0835cba3 +0x4871:  mov    %eax,(%esp)
0835cba6 +0x4874:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cbab +0x4879:  mov    $0x0,%ebx
0835cbb0 +0x487e:  jmp    0835f13c <+0x6e0a>
0835cbb5 +0x4883:  movl   $0x1,0x14(%esp)
0835cbbd +0x488b:  movl   $0x0,0x10(%esp)
0835cbc5 +0x4893:  movl   $0x9,0xc(%esp)
0835cbcd +0x489b:  movl   $0x1ffe,0x8(%esp)
0835cbd5 +0x48a3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cbdd +0x48ab:  lea    -0x5e8(%ebp),%eax
0835cbe3 +0x48b1:  mov    %eax,(%esp)
0835cbe6 +0x48b4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cbeb +0x48b9:  movl   $"Success",0x4(%esp)
0835cbf3 +0x48c1:  lea    -0x5e8(%ebp),%eax
0835cbf9 +0x48c7:  mov    %eax,(%esp)
0835cbfc +0x48ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cc01 +0x48cf:  movl   $0x0,0x14(%esp)
0835cc09 +0x48d7:  movl   $0x1,0x10(%esp)
0835cc11 +0x48df:  movl   $0x9,0xc(%esp)
0835cc19 +0x48e7:  movl   $0x2001,0x8(%esp)
0835cc21 +0x48ef:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cc29 +0x48f7:  lea    -0x5d8(%ebp),%eax
0835cc2f +0x48fd:  mov    %eax,(%esp)
0835cc32 +0x4900:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cc37 +0x4905:  movl   $"\t- Loading Advance Altar ",0x4(%esp)
0835cc3f +0x490d:  lea    -0x5d8(%ebp),%eax
0835cc45 +0x4913:  mov    %eax,(%esp)
0835cc48 +0x4916:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cc4d +0x491b:  mov    0x8(%ebp),%eax
0835cc50 +0x491e:  add    $0x8798,%eax
0835cc55 +0x4923:  mov    %eax,(%esp)
0835cc58 +0x4926:  call   0836485c <_ZN12StageMapList8loadListEv>  ; StageMapList::loadList()
0835cc5d +0x492b:  xor    $0x1,%eax
0835cc60 +0x492e:  test   %al,%al
0835cc62 +0x4930:  je     0835ccba <+0x4988>
0835cc64 +0x4932:  movl   $0x1,0x14(%esp)
0835cc6c +0x493a:  movl   $0x1,0x10(%esp)
0835cc74 +0x4942:  movl   $0x9,0xc(%esp)
0835cc7c +0x494a:  movl   $0x2004,0x8(%esp)
0835cc84 +0x4952:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cc8c +0x495a:  lea    -0x5c8(%ebp),%eax
0835cc92 +0x4960:  mov    %eax,(%esp)
0835cc95 +0x4963:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cc9a +0x4968:  movl   $"\t- Loading Advance Altar Fail",0x4(%esp)
0835cca2 +0x4970:  lea    -0x5c8(%ebp),%eax
0835cca8 +0x4976:  mov    %eax,(%esp)
0835ccab +0x4979:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ccb0 +0x497e:  mov    $0x0,%ebx
0835ccb5 +0x4983:  jmp    0835f13c <+0x6e0a>
0835ccba +0x4988:  movl   $0x1,0x14(%esp)
0835ccc2 +0x4990:  movl   $0x0,0x10(%esp)
0835ccca +0x4998:  movl   $0x9,0xc(%esp)
0835ccd2 +0x49a0:  movl   $0x2007,0x8(%esp)
0835ccda +0x49a8:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cce2 +0x49b0:  lea    -0x5b8(%ebp),%eax
0835cce8 +0x49b6:  mov    %eax,(%esp)
0835cceb +0x49b9:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ccf0 +0x49be:  movl   $"Success",0x4(%esp)
0835ccf8 +0x49c6:  lea    -0x5b8(%ebp),%eax
0835ccfe +0x49cc:  mov    %eax,(%esp)
0835cd01 +0x49cf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cd06 +0x49d4:  mov    0x8(%ebp),%eax
0835cd09 +0x49d7:  mov    0x8cc0(%eax),%eax
0835cd0f +0x49dd:  test   %eax,%eax
0835cd11 +0x49df:  jne    0835cd36 <+0x4a04>
0835cd13 +0x49e1:  movl   $0xa28,(%esp)
0835cd1a +0x49e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835cd1f +0x49ed:  mov    %eax,%ebx
0835cd21 +0x49ef:  mov    %ebx,%eax
0835cd23 +0x49f1:  mov    %eax,(%esp)
0835cd26 +0x49f4:  call   08374ef4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeec0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeec0
0835cd2b +0x49f9:  mov    %ebx,%edx
0835cd2d +0x49fb:  mov    0x8(%ebp),%eax
0835cd30 +0x49fe:  mov    %edx,0x8cc0(%eax)
0835cd36 +0x4a04:  mov    0x8(%ebp),%eax
0835cd39 +0x4a07:  mov    0x8cc0(%eax),%eax
0835cd3f +0x4a0d:  mov    %eax,(%esp)
0835cd42 +0x4a10:  call   08533bc8 <_ZN8WongWork17CItemGeneratorMgr10initializeEv>  ; WongWork::CItemGeneratorMgr::initialize()
0835cd47 +0x4a15:  xor    $0x1,%eax
0835cd4a +0x4a18:  test   %al,%al
0835cd4c +0x4a1a:  je     0835cda4 <+0x4a72>
0835cd4e +0x4a1c:  movl   $0x1,0x14(%esp)
0835cd56 +0x4a24:  movl   $0x1,0x10(%esp)
0835cd5e +0x4a2c:  movl   $0x9,0xc(%esp)
0835cd66 +0x4a34:  movl   $0x2012,0x8(%esp)
0835cd6e +0x4a3c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cd76 +0x4a44:  lea    -0x5a8(%ebp),%eax
0835cd7c +0x4a4a:  mov    %eax,(%esp)
0835cd7f +0x4a4d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cd84 +0x4a52:  movl   $"\t- Loading Item Generator Manager Fail\n",0x4(%esp)
0835cd8c +0x4a5a:  lea    -0x5a8(%ebp),%eax
0835cd92 +0x4a60:  mov    %eax,(%esp)
0835cd95 +0x4a63:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cd9a +0x4a68:  mov    $0x0,%ebx
0835cd9f +0x4a6d:  jmp    0835f13c <+0x6e0a>
0835cda4 +0x4a72:  mov    0x8(%ebp),%eax
0835cda7 +0x4a75:  mov    0x8cc4(%eax),%eax
0835cdad +0x4a7b:  test   %eax,%eax
0835cdaf +0x4a7d:  jne    0835cdeb <+0x4ab9>
0835cdb1 +0x4a7f:  movl   $0x444,(%esp)
0835cdb8 +0x4a86:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835cdbd +0x4a8b:  mov    %eax,%ebx
0835cdbf +0x4a8d:  mov    %ebx,%eax
0835cdc1 +0x4a8f:  mov    %eax,(%esp)
0835cdc4 +0x4a92:  call   082f8108 <_ZN28CAutoMarketConditionsControlC1Ev>  ; CAutoMarketConditionsControl::CAutoMarketConditionsControl()
0835cdc9 +0x4a97:  jmp    0835cde0 <+0x4aae>
0835cdcb +0x4a99:  mov    %edx,%esi
0835cdcd +0x4a9b:  mov    %eax,%edi
0835cdcf +0x4a9d:  mov    %ebx,(%esp)
0835cdd2 +0x4aa0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835cdd7 +0x4aa5:  mov    %edi,%eax
0835cdd9 +0x4aa7:  mov    %esi,%edx
0835cddb +0x4aa9:  jmp    0835f124 <+0x6df2>
0835cde0 +0x4aae:  mov    %ebx,%edx
0835cde2 +0x4ab0:  mov    0x8(%ebp),%eax
0835cde5 +0x4ab3:  mov    %edx,0x8cc4(%eax)
0835cdeb +0x4ab9:  mov    0x8(%ebp),%eax
0835cdee +0x4abc:  mov    0x8cc4(%eax),%eax
0835cdf4 +0x4ac2:  movl   $"Etc/ItemDropInfo_Control.etc",0x4(%esp)
0835cdfc +0x4aca:  mov    %eax,(%esp)
0835cdff +0x4acd:  call   082f815c <_ZN28CAutoMarketConditionsControl10LoadScriptEPKc>  ; CAutoMarketConditionsControl::LoadScript(char const*)
0835ce04 +0x4ad2:  mov    %eax,-0x30(%ebp)
0835ce07 +0x4ad5:  cmpl   $0x0,-0x30(%ebp)
0835ce0b +0x4ad9:  setne  %al
0835ce0e +0x4adc:  test   %al,%al
0835ce10 +0x4ade:  je     0835ce6f <+0x4b3d>
0835ce12 +0x4ae0:  movl   $0x1,0x14(%esp)
0835ce1a +0x4ae8:  movl   $0x1,0x10(%esp)
0835ce22 +0x4af0:  movl   $0x9,0xc(%esp)
0835ce2a +0x4af8:  movl   $0x201a,0x8(%esp)
0835ce32 +0x4b00:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ce3a +0x4b08:  lea    -0x598(%ebp),%eax
0835ce40 +0x4b0e:  mov    %eax,(%esp)
0835ce43 +0x4b11:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ce48 +0x4b16:  mov    -0x30(%ebp),%eax
0835ce4b +0x4b19:  mov    %eax,0x8(%esp)
0835ce4f +0x4b1d:  movl   $"\t- LoadScript() error Etc/ItemDropInfo_Control.etc line(%d)",0x4(%esp)
0835ce57 +0x4b25:  lea    -0x598(%ebp),%eax
0835ce5d +0x4b2b:  mov    %eax,(%esp)
0835ce60 +0x4b2e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ce65 +0x4b33:  mov    $0x0,%ebx
0835ce6a +0x4b38:  jmp    0835f13c <+0x6e0a>
0835ce6f +0x4b3d:  movl   $0x0,0x14(%esp)
0835ce77 +0x4b45:  movl   $0x1,0x10(%esp)
0835ce7f +0x4b4d:  movl   $0x9,0xc(%esp)
0835ce87 +0x4b55:  movl   $0x2022,0x8(%esp)
0835ce8f +0x4b5d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ce97 +0x4b65:  lea    -0x588(%ebp),%eax
0835ce9d +0x4b6b:  mov    %eax,(%esp)
0835cea0 +0x4b6e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cea5 +0x4b73:  movl   $"\t- Init Level Exp ",0x4(%esp)
0835cead +0x4b7b:  lea    -0x588(%ebp),%eax
0835ceb3 +0x4b81:  mov    %eax,(%esp)
0835ceb6 +0x4b84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cebb +0x4b89:  mov    0x8(%ebp),%eax
0835cebe +0x4b8c:  mov    %eax,(%esp)
0835cec1 +0x4b8f:  call   08360400 <_ZN12CDataManager13set_level_expEv>  ; CDataManager::set_level_exp()
0835cec6 +0x4b94:  xor    $0x1,%eax
0835cec9 +0x4b97:  test   %al,%al
0835cecb +0x4b99:  jmp    0835cf23 <+0x4bf1>
0835cecd +0x4b9b:  movl   $0x1,0x14(%esp)
0835ced5 +0x4ba3:  movl   $0x1,0x10(%esp)
0835cedd +0x4bab:  movl   $0x9,0xc(%esp)
0835cee5 +0x4bb3:  movl   $0x2025,0x8(%esp)
0835ceed +0x4bbb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cef5 +0x4bc3:  lea    -0x578(%ebp),%eax
0835cefb +0x4bc9:  mov    %eax,(%esp)
0835cefe +0x4bcc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cf03 +0x4bd1:  movl   $"\t- Init Level Exp Fail",0x4(%esp)
0835cf0b +0x4bd9:  lea    -0x578(%ebp),%eax
0835cf11 +0x4bdf:  mov    %eax,(%esp)
0835cf14 +0x4be2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cf19 +0x4be7:  mov    $0x0,%ebx
0835cf1e +0x4bec:  jmp    0835f13c <+0x6e0a>
0835cf23 +0x4bf1:  movl   $0x1,0x14(%esp)
0835cf2b +0x4bf9:  movl   $0x0,0x10(%esp)
0835cf33 +0x4c01:  movl   $0x9,0xc(%esp)
0835cf3b +0x4c09:  movl   $0x2028,0x8(%esp)
0835cf43 +0x4c11:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cf4b +0x4c19:  lea    -0x568(%ebp),%eax
0835cf51 +0x4c1f:  mov    %eax,(%esp)
0835cf54 +0x4c22:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cf59 +0x4c27:  movl   $"Success",0x4(%esp)
0835cf61 +0x4c2f:  lea    -0x568(%ebp),%eax
0835cf67 +0x4c35:  mov    %eax,(%esp)
0835cf6a +0x4c38:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cf6f +0x4c3d:  movl   $0x0,0x14(%esp)
0835cf77 +0x4c45:  movl   $0x1,0x10(%esp)
0835cf7f +0x4c4d:  movl   $0x9,0xc(%esp)
0835cf87 +0x4c55:  movl   $0x202a,0x8(%esp)
0835cf8f +0x4c5d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cf97 +0x4c65:  lea    -0x558(%ebp),%eax
0835cf9d +0x4c6b:  mov    %eax,(%esp)
0835cfa0 +0x4c6e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835cfa5 +0x4c73:  movl   $"\t- Init Mob Reward ",0x4(%esp)
0835cfad +0x4c7b:  lea    -0x558(%ebp),%eax
0835cfb3 +0x4c81:  mov    %eax,(%esp)
0835cfb6 +0x4c84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835cfbb +0x4c89:  mov    0x8(%ebp),%eax
0835cfbe +0x4c8c:  mov    %eax,(%esp)
0835cfc1 +0x4c8f:  call   083605a8 <_ZN12CDataManager14set_mob_rewardEv>  ; CDataManager::set_mob_reward()
0835cfc6 +0x4c94:  xor    $0x1,%eax
0835cfc9 +0x4c97:  test   %al,%al
0835cfcb +0x4c99:  jmp    0835d023 <+0x4cf1>
0835cfcd +0x4c9b:  movl   $0x1,0x14(%esp)
0835cfd5 +0x4ca3:  movl   $0x1,0x10(%esp)
0835cfdd +0x4cab:  movl   $0x9,0xc(%esp)
0835cfe5 +0x4cb3:  movl   $0x202d,0x8(%esp)
0835cfed +0x4cbb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835cff5 +0x4cc3:  lea    -0x548(%ebp),%eax
0835cffb +0x4cc9:  mov    %eax,(%esp)
0835cffe +0x4ccc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d003 +0x4cd1:  movl   $"\t- Init Level Exp Fail",0x4(%esp)
0835d00b +0x4cd9:  lea    -0x548(%ebp),%eax
0835d011 +0x4cdf:  mov    %eax,(%esp)
0835d014 +0x4ce2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d019 +0x4ce7:  mov    $0x0,%ebx
0835d01e +0x4cec:  jmp    0835f13c <+0x6e0a>
0835d023 +0x4cf1:  movl   $0x1,0x14(%esp)
0835d02b +0x4cf9:  movl   $0x0,0x10(%esp)
0835d033 +0x4d01:  movl   $0x9,0xc(%esp)
0835d03b +0x4d09:  movl   $0x2030,0x8(%esp)
0835d043 +0x4d11:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d04b +0x4d19:  lea    -0x538(%ebp),%eax
0835d051 +0x4d1f:  mov    %eax,(%esp)
0835d054 +0x4d22:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d059 +0x4d27:  movl   $"Success",0x4(%esp)
0835d061 +0x4d2f:  lea    -0x538(%ebp),%eax
0835d067 +0x4d35:  mov    %eax,(%esp)
0835d06a +0x4d38:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d06f +0x4d3d:  movl   $0x0,0x14(%esp)
0835d077 +0x4d45:  movl   $0x1,0x10(%esp)
0835d07f +0x4d4d:  movl   $0x9,0xc(%esp)
0835d087 +0x4d55:  movl   $0x2032,0x8(%esp)
0835d08f +0x4d5d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d097 +0x4d65:  lea    -0x528(%ebp),%eax
0835d09d +0x4d6b:  mov    %eax,(%esp)
0835d0a0 +0x4d6e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d0a5 +0x4d73:  movl   $"\t- Init PVP Grade ",0x4(%esp)
0835d0ad +0x4d7b:  lea    -0x528(%ebp),%eax
0835d0b3 +0x4d81:  mov    %eax,(%esp)
0835d0b6 +0x4d84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d0bb +0x4d89:  mov    0x8(%ebp),%eax
0835d0be +0x4d8c:  mov    %eax,(%esp)
0835d0c1 +0x4d8f:  call   08360aa2 <_ZN12CDataManager13set_pvp_gradeEv>  ; CDataManager::set_pvp_grade()
0835d0c6 +0x4d94:  xor    $0x1,%eax
0835d0c9 +0x4d97:  test   %al,%al
0835d0cb +0x4d99:  je     0835d123 <+0x4df1>
0835d0cd +0x4d9b:  movl   $0x1,0x14(%esp)
0835d0d5 +0x4da3:  movl   $0x1,0x10(%esp)
0835d0dd +0x4dab:  movl   $0x9,0xc(%esp)
0835d0e5 +0x4db3:  movl   $0x2035,0x8(%esp)
0835d0ed +0x4dbb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d0f5 +0x4dc3:  lea    -0x518(%ebp),%eax
0835d0fb +0x4dc9:  mov    %eax,(%esp)
0835d0fe +0x4dcc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d103 +0x4dd1:  movl   $"\t- Init PVP Grade Fail\n",0x4(%esp)
0835d10b +0x4dd9:  lea    -0x518(%ebp),%eax
0835d111 +0x4ddf:  mov    %eax,(%esp)
0835d114 +0x4de2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d119 +0x4de7:  mov    $0x0,%ebx
0835d11e +0x4dec:  jmp    0835f13c <+0x6e0a>
0835d123 +0x4df1:  movl   $0x1,0x14(%esp)
0835d12b +0x4df9:  movl   $0x0,0x10(%esp)
0835d133 +0x4e01:  movl   $0x9,0xc(%esp)
0835d13b +0x4e09:  movl   $0x2038,0x8(%esp)
0835d143 +0x4e11:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d14b +0x4e19:  lea    -0x508(%ebp),%eax
0835d151 +0x4e1f:  mov    %eax,(%esp)
0835d154 +0x4e22:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d159 +0x4e27:  movl   $"Success",0x4(%esp)
0835d161 +0x4e2f:  lea    -0x508(%ebp),%eax
0835d167 +0x4e35:  mov    %eax,(%esp)
0835d16a +0x4e38:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d16f +0x4e3d:  movl   $0x0,0x14(%esp)
0835d177 +0x4e45:  movl   $0x1,0x10(%esp)
0835d17f +0x4e4d:  movl   $0x9,0xc(%esp)
0835d187 +0x4e55:  movl   $0x203a,0x8(%esp)
0835d18f +0x4e5d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d197 +0x4e65:  lea    -0x4f8(%ebp),%eax
0835d19d +0x4e6b:  mov    %eax,(%esp)
0835d1a0 +0x4e6e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d1a5 +0x4e73:  movl   $"\t- Init Reward SP ",0x4(%esp)
0835d1ad +0x4e7b:  lea    -0x4f8(%ebp),%eax
0835d1b3 +0x4e81:  mov    %eax,(%esp)
0835d1b6 +0x4e84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d1bb +0x4e89:  mov    0x8(%ebp),%eax
0835d1be +0x4e8c:  mov    %eax,(%esp)
0835d1c1 +0x4e8f:  call   08360bde <_ZN12CDataManager13set_reward_spEv>  ; CDataManager::set_reward_sp()
0835d1c6 +0x4e94:  xor    $0x1,%eax
0835d1c9 +0x4e97:  test   %al,%al
0835d1cb +0x4e99:  je     0835d223 <+0x4ef1>
0835d1cd +0x4e9b:  movl   $0x1,0x14(%esp)
0835d1d5 +0x4ea3:  movl   $0x1,0x10(%esp)
0835d1dd +0x4eab:  movl   $0x9,0xc(%esp)
0835d1e5 +0x4eb3:  movl   $0x203d,0x8(%esp)
0835d1ed +0x4ebb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d1f5 +0x4ec3:  lea    -0x4e8(%ebp),%eax
0835d1fb +0x4ec9:  mov    %eax,(%esp)
0835d1fe +0x4ecc:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d203 +0x4ed1:  movl   $"\t- Init Reward SP Fail\n",0x4(%esp)
0835d20b +0x4ed9:  lea    -0x4e8(%ebp),%eax
0835d211 +0x4edf:  mov    %eax,(%esp)
0835d214 +0x4ee2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d219 +0x4ee7:  mov    $0x0,%ebx
0835d21e +0x4eec:  jmp    0835f13c <+0x6e0a>
0835d223 +0x4ef1:  movl   $0x1,0x14(%esp)
0835d22b +0x4ef9:  movl   $0x0,0x10(%esp)
0835d233 +0x4f01:  movl   $0x9,0xc(%esp)
0835d23b +0x4f09:  movl   $0x2040,0x8(%esp)
0835d243 +0x4f11:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d24b +0x4f19:  lea    -0x4d8(%ebp),%eax
0835d251 +0x4f1f:  mov    %eax,(%esp)
0835d254 +0x4f22:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d259 +0x4f27:  movl   $"Success",0x4(%esp)
0835d261 +0x4f2f:  lea    -0x4d8(%ebp),%eax
0835d267 +0x4f35:  mov    %eax,(%esp)
0835d26a +0x4f38:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d26f +0x4f3d:  movl   $0x0,0x14(%esp)
0835d277 +0x4f45:  movl   $0x1,0x10(%esp)
0835d27f +0x4f4d:  movl   $0x9,0xc(%esp)
0835d287 +0x4f55:  movl   $0x2044,0x8(%esp)
0835d28f +0x4f5d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d297 +0x4f65:  lea    -0x4c8(%ebp),%eax
0835d29d +0x4f6b:  mov    %eax,(%esp)
0835d2a0 +0x4f6e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d2a5 +0x4f73:  movl   $"\t- Init Get Channel Data(channel_info.etc) ",0x4(%esp)
0835d2ad +0x4f7b:  lea    -0x4c8(%ebp),%eax
0835d2b3 +0x4f81:  mov    %eax,(%esp)
0835d2b6 +0x4f84:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d2bb +0x4f89:  mov    &_ZN10GlobalData15s_channel_proxyE,%eax
0835d2c0 +0x4f8e:  mov    %eax,(%esp)
0835d2c3 +0x4f91:  call   081066ea <_ZN15CmmChannelProxy22SendCheckChannelScriptEv>  ; CmmChannelProxy::SendCheckChannelScript()
0835d2c8 +0x4f96:  xor    $0x1,%eax
0835d2cb +0x4f99:  test   %al,%al
0835d2cd +0x4f9b:  je     0835d325 <+0x4ff3>
0835d2cf +0x4f9d:  movl   $0x1,0x14(%esp)
0835d2d7 +0x4fa5:  movl   $0x1,0x10(%esp)
0835d2df +0x4fad:  movl   $0x9,0xc(%esp)
0835d2e7 +0x4fb5:  movl   $0x2047,0x8(%esp)
0835d2ef +0x4fbd:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d2f7 +0x4fc5:  lea    -0x4b8(%ebp),%eax
0835d2fd +0x4fcb:  mov    %eax,(%esp)
0835d300 +0x4fce:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d305 +0x4fd3:  movl   $"\t- Init Get Channel Data(channel_info.etc) Fail",0x4(%esp)
0835d30d +0x4fdb:  lea    -0x4b8(%ebp),%eax
0835d313 +0x4fe1:  mov    %eax,(%esp)
0835d316 +0x4fe4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d31b +0x4fe9:  mov    $0x0,%ebx
0835d320 +0x4fee:  jmp    0835f13c <+0x6e0a>
0835d325 +0x4ff3:  movl   $0x1,0x14(%esp)
0835d32d +0x4ffb:  movl   $0x0,0x10(%esp)
0835d335 +0x5003:  movl   $0x9,0xc(%esp)
0835d33d +0x500b:  movl   $0x204a,0x8(%esp)
0835d345 +0x5013:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d34d +0x501b:  lea    -0x4a8(%ebp),%eax
0835d353 +0x5021:  mov    %eax,(%esp)
0835d356 +0x5024:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d35b +0x5029:  movl   $"Success",0x4(%esp)
0835d363 +0x5031:  lea    -0x4a8(%ebp),%eax
0835d369 +0x5037:  mov    %eax,(%esp)
0835d36c +0x503a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d371 +0x503f:  movl   $0x0,0x14(%esp)
0835d379 +0x5047:  movl   $0x1,0x10(%esp)
0835d381 +0x504f:  movl   $0x9,0xc(%esp)
0835d389 +0x5057:  movl   $0x204e,0x8(%esp)
0835d391 +0x505f:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d399 +0x5067:  lea    -0x498(%ebp),%eax
0835d39f +0x506d:  mov    %eax,(%esp)
0835d3a2 +0x5070:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d3a7 +0x5075:  movl   $"\t- Init Channel Script ",0x4(%esp)
0835d3af +0x507d:  lea    -0x498(%ebp),%eax
0835d3b5 +0x5083:  mov    %eax,(%esp)
0835d3b8 +0x5086:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d3bd +0x508b:  mov    0x8(%ebp),%eax
0835d3c0 +0x508e:  add    $0xb3f4,%eax
0835d3c5 +0x5093:  mov    %eax,(%esp)
0835d3c8 +0x5096:  call   088dc008 <_Z19importChannelScriptP16channel_script_t>  ; importChannelScript(channel_script_t*)
0835d3cd +0x509b:  xor    $0x1,%eax
0835d3d0 +0x509e:  test   %al,%al
0835d3d2 +0x50a0:  je     0835d42a <+0x50f8>
0835d3d4 +0x50a2:  movl   $0x1,0x14(%esp)
0835d3dc +0x50aa:  movl   $0x1,0x10(%esp)
0835d3e4 +0x50b2:  movl   $0x9,0xc(%esp)
0835d3ec +0x50ba:  movl   $0x2058,0x8(%esp)
0835d3f4 +0x50c2:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d3fc +0x50ca:  lea    -0x488(%ebp),%eax
0835d402 +0x50d0:  mov    %eax,(%esp)
0835d405 +0x50d3:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d40a +0x50d8:  movl   $"\t- Init Channel Script Fail",0x4(%esp)
0835d412 +0x50e0:  lea    -0x488(%ebp),%eax
0835d418 +0x50e6:  mov    %eax,(%esp)
0835d41b +0x50e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d420 +0x50ee:  mov    $0x0,%ebx
0835d425 +0x50f3:  jmp    0835f13c <+0x6e0a>
0835d42a +0x50f8:  movl   $0x1,0x14(%esp)
0835d432 +0x5100:  movl   $0x0,0x10(%esp)
0835d43a +0x5108:  movl   $0x9,0xc(%esp)
0835d442 +0x5110:  movl   $0x205b,0x8(%esp)
0835d44a +0x5118:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d452 +0x5120:  lea    -0x478(%ebp),%eax
0835d458 +0x5126:  mov    %eax,(%esp)
0835d45b +0x5129:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d460 +0x512e:  movl   $"Success",0x4(%esp)
0835d468 +0x5136:  lea    -0x478(%ebp),%eax
0835d46e +0x513c:  mov    %eax,(%esp)
0835d471 +0x513f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d476 +0x5144:  movl   $0x4f0,(%esp)
0835d47d +0x514b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835d482 +0x5150:  mov    %eax,%ebx
0835d484 +0x5152:  mov    %ebx,%eax
0835d486 +0x5154:  mov    %eax,(%esp)
0835d489 +0x5157:  call   085461c8 <_ZN8WongWork12CItemUpgradeC1Ev>  ; WongWork::CItemUpgrade::CItemUpgrade()
0835d48e +0x515c:  jmp    0835d4a5 <+0x5173>
0835d490 +0x515e:  mov    %edx,%esi
0835d492 +0x5160:  mov    %eax,%edi
0835d494 +0x5162:  mov    %ebx,(%esp)
0835d497 +0x5165:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835d49c +0x516a:  mov    %edi,%eax
0835d49e +0x516c:  mov    %esi,%edx
0835d4a0 +0x516e:  jmp    0835f124 <+0x6df2>
0835d4a5 +0x5173:  mov    %ebx,%edx
0835d4a7 +0x5175:  mov    0x8(%ebp),%eax
0835d4aa +0x5178:  mov    %edx,0x20(%eax)
0835d4ad +0x517b:  movl   $0x0,0x14(%esp)
0835d4b5 +0x5183:  movl   $0x1,0x10(%esp)
0835d4bd +0x518b:  movl   $0x9,0xc(%esp)
0835d4c5 +0x5193:  movl   $0x205e,0x8(%esp)
0835d4cd +0x519b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d4d5 +0x51a3:  lea    -0x468(%ebp),%eax
0835d4db +0x51a9:  mov    %eax,(%esp)
0835d4de +0x51ac:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d4e3 +0x51b1:  movl   $"\t- Init Item Upgrade Info ",0x4(%esp)
0835d4eb +0x51b9:  lea    -0x468(%ebp),%eax
0835d4f1 +0x51bf:  mov    %eax,(%esp)
0835d4f4 +0x51c2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d4f9 +0x51c7:  mov    0x8(%ebp),%eax
0835d4fc +0x51ca:  mov    0x20(%eax),%eax
0835d4ff +0x51cd:  mov    (%eax),%eax
0835d501 +0x51cf:  add    $0x4,%eax
0835d504 +0x51d2:  mov    (%eax),%edx
0835d506 +0x51d4:  mov    0x8(%ebp),%eax
0835d509 +0x51d7:  mov    0x20(%eax),%eax
0835d50c +0x51da:  movl   $"Etc/Upgrade.etc",0x4(%esp)
0835d514 +0x51e2:  mov    %eax,(%esp)
0835d517 +0x51e5:  call   *%edx
0835d519 +0x51e7:  xor    $0x1,%eax
0835d51c +0x51ea:  test   %al,%al
0835d51e +0x51ec:  je     0835d576 <+0x5244>
0835d520 +0x51ee:  movl   $0x1,0x14(%esp)
0835d528 +0x51f6:  movl   $0x1,0x10(%esp)
0835d530 +0x51fe:  movl   $0x9,0xc(%esp)
0835d538 +0x5206:  movl   $0x2061,0x8(%esp)
0835d540 +0x520e:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d548 +0x5216:  lea    -0x458(%ebp),%eax
0835d54e +0x521c:  mov    %eax,(%esp)
0835d551 +0x521f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d556 +0x5224:  movl   $"\t- Init Item Upgrade Info Fail\n",0x4(%esp)
0835d55e +0x522c:  lea    -0x458(%ebp),%eax
0835d564 +0x5232:  mov    %eax,(%esp)
0835d567 +0x5235:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d56c +0x523a:  mov    $0x0,%ebx
0835d571 +0x523f:  jmp    0835f13c <+0x6e0a>
0835d576 +0x5244:  movl   $0x1,0x14(%esp)
0835d57e +0x524c:  movl   $0x0,0x10(%esp)
0835d586 +0x5254:  movl   $0x9,0xc(%esp)
0835d58e +0x525c:  movl   $0x2064,0x8(%esp)
0835d596 +0x5264:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d59e +0x526c:  lea    -0x448(%ebp),%eax
0835d5a4 +0x5272:  mov    %eax,(%esp)
0835d5a7 +0x5275:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d5ac +0x527a:  movl   $"Success",0x4(%esp)
0835d5b4 +0x5282:  lea    -0x448(%ebp),%eax
0835d5ba +0x5288:  mov    %eax,(%esp)
0835d5bd +0x528b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d5c2 +0x5290:  movl   $0x194,(%esp)
0835d5c9 +0x5297:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835d5ce +0x529c:  mov    %eax,%ebx
0835d5d0 +0x529e:  mov    %ebx,%eax
0835d5d2 +0x52a0:  mov    %eax,(%esp)
0835d5d5 +0x52a3:  call   0811dfc0 <_ZN8WongWork21CItemUpgrade_SeparateC1Ev>  ; WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()
0835d5da +0x52a8:  jmp    0835d5f1 <+0x52bf>
0835d5dc +0x52aa:  mov    %edx,%esi
0835d5de +0x52ac:  mov    %eax,%edi
0835d5e0 +0x52ae:  mov    %ebx,(%esp)
0835d5e3 +0x52b1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835d5e8 +0x52b6:  mov    %edi,%eax
0835d5ea +0x52b8:  mov    %esi,%edx
0835d5ec +0x52ba:  jmp    0835f124 <+0x6df2>
0835d5f1 +0x52bf:  mov    %ebx,%edx
0835d5f3 +0x52c1:  mov    0x8(%ebp),%eax
0835d5f6 +0x52c4:  mov    %edx,0x24(%eax)
0835d5f9 +0x52c7:  mov    0x8(%ebp),%eax
0835d5fc +0x52ca:  mov    0x24(%eax),%eax
0835d5ff +0x52cd:  mov    (%eax),%eax
0835d601 +0x52cf:  add    $0x4,%eax
0835d604 +0x52d2:  mov    (%eax),%edx
0835d606 +0x52d4:  mov    0x8(%ebp),%eax
0835d609 +0x52d7:  mov    0x24(%eax),%eax
0835d60c +0x52da:  movl   $"Etc/Upgrade_Separate.etc",0x4(%esp)
0835d614 +0x52e2:  mov    %eax,(%esp)
0835d617 +0x52e5:  call   *%edx
0835d619 +0x52e7:  xor    $0x1,%eax
0835d61c +0x52ea:  test   %al,%al
0835d61e +0x52ec:  je     0835d676 <+0x5344>
0835d620 +0x52ee:  movl   $0x1,0x14(%esp)
0835d628 +0x52f6:  movl   $0x1,0x10(%esp)
0835d630 +0x52fe:  movl   $0x9,0xc(%esp)
0835d638 +0x5306:  movl   $0x206a,0x8(%esp)
0835d640 +0x530e:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d648 +0x5316:  lea    -0x438(%ebp),%eax
0835d64e +0x531c:  mov    %eax,(%esp)
0835d651 +0x531f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d656 +0x5324:  movl   $"\t- Item Upgrade Separate Fail",0x4(%esp)
0835d65e +0x532c:  lea    -0x438(%ebp),%eax
0835d664 +0x5332:  mov    %eax,(%esp)
0835d667 +0x5335:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d66c +0x533a:  mov    $0x0,%ebx
0835d671 +0x533f:  jmp    0835f13c <+0x6e0a>
0835d676 +0x5344:  mov    0x8(%ebp),%eax
0835d679 +0x5347:  mov    0x20(%eax),%eax
0835d67c +0x534a:  movl   $"Etc/chronicle.etc",0x4(%esp)
0835d684 +0x5352:  mov    %eax,(%esp)
0835d687 +0x5355:  call   085491b8 <_ZN8WongWork12CItemUpgrade29Load3rdChronicleUpgradeScriptEPKc>  ; WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(char const*)
0835d68c +0x535a:  xor    $0x1,%eax
0835d68f +0x535d:  test   %al,%al
0835d691 +0x535f:  je     0835d6e9 <+0x53b7>
0835d693 +0x5361:  movl   $0x1,0x14(%esp)
0835d69b +0x5369:  movl   $0x1,0x10(%esp)
0835d6a3 +0x5371:  movl   $0x9,0xc(%esp)
0835d6ab +0x5379:  movl   $0x2072,0x8(%esp)
0835d6b3 +0x5381:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d6bb +0x5389:  lea    -0x428(%ebp),%eax
0835d6c1 +0x538f:  mov    %eax,(%esp)
0835d6c4 +0x5392:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d6c9 +0x5397:  movl   $"\t- Loading 3rd Chronice Upgrade Script Fail",0x4(%esp)
0835d6d1 +0x539f:  lea    -0x428(%ebp),%eax
0835d6d7 +0x53a5:  mov    %eax,(%esp)
0835d6da +0x53a8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d6df +0x53ad:  mov    $0x0,%ebx
0835d6e4 +0x53b2:  jmp    0835f13c <+0x6e0a>
0835d6e9 +0x53b7:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
0835d6ee +0x53bc:  movl   $"Etc/AmplifyUpgrade.etc",0x8(%esp)
0835d6f6 +0x53c4:  movl   $"Etc/AmplifyItem.etc",0x4(%esp)
0835d6fe +0x53cc:  mov    %eax,(%esp)
0835d701 +0x53cf:  call   08376060 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5b00>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5b00
0835d706 +0x53d4:  movl   $0x0,0x14(%esp)
0835d70e +0x53dc:  movl   $0x1,0x10(%esp)
0835d716 +0x53e4:  movl   $0x9,0xc(%esp)
0835d71e +0x53ec:  movl   $0x2084,0x8(%esp)
0835d726 +0x53f4:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d72e +0x53fc:  lea    -0x418(%ebp),%eax
0835d734 +0x5402:  mov    %eax,(%esp)
0835d737 +0x5405:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d73c +0x540a:  movl   $"\t- Init Reseal table ",0x4(%esp)
0835d744 +0x5412:  lea    -0x418(%ebp),%eax
0835d74a +0x5418:  mov    %eax,(%esp)
0835d74d +0x541b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d752 +0x5420:  mov    0x8(%ebp),%eax
0835d755 +0x5423:  add    $0x2c,%eax
0835d758 +0x5426:  mov    %eax,0x4(%esp)
0835d75c +0x542a:  movl   $"Etc/Reseal.etc",(%esp)
0835d763 +0x5431:  call   089008b8 <_Z17importResealTablePKcP14reseal_table_t>  ; importResealTable(char const*, reseal_table_t*)
0835d768 +0x5436:  xor    $0x1,%eax
0835d76b +0x5439:  test   %al,%al
0835d76d +0x543b:  je     0835d7c5 <+0x5493>
0835d76f +0x543d:  movl   $0x1,0x14(%esp)
0835d777 +0x5445:  movl   $0x1,0x10(%esp)
0835d77f +0x544d:  movl   $0x9,0xc(%esp)
0835d787 +0x5455:  movl   $0x208c,0x8(%esp)
0835d78f +0x545d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d797 +0x5465:  lea    -0x408(%ebp),%eax
0835d79d +0x546b:  mov    %eax,(%esp)
0835d7a0 +0x546e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d7a5 +0x5473:  movl   $"\t- Init Reseal table Fail",0x4(%esp)
0835d7ad +0x547b:  lea    -0x408(%ebp),%eax
0835d7b3 +0x5481:  mov    %eax,(%esp)
0835d7b6 +0x5484:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d7bb +0x5489:  mov    $0x0,%ebx
0835d7c0 +0x548e:  jmp    0835f13c <+0x6e0a>
0835d7c5 +0x5493:  movl   $0x1,0x14(%esp)
0835d7cd +0x549b:  movl   $0x0,0x10(%esp)
0835d7d5 +0x54a3:  movl   $0x9,0xc(%esp)
0835d7dd +0x54ab:  movl   $0x208f,0x8(%esp)
0835d7e5 +0x54b3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d7ed +0x54bb:  lea    -0x3f8(%ebp),%eax
0835d7f3 +0x54c1:  mov    %eax,(%esp)
0835d7f6 +0x54c4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d7fb +0x54c9:  movl   $"Success",0x4(%esp)
0835d803 +0x54d1:  lea    -0x3f8(%ebp),%eax
0835d809 +0x54d7:  mov    %eax,(%esp)
0835d80c +0x54da:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d811 +0x54df:  movl   $0x0,0x14(%esp)
0835d819 +0x54e7:  movl   $0x1,0x10(%esp)
0835d821 +0x54ef:  movl   $0x9,0xc(%esp)
0835d829 +0x54f7:  movl   $0x2092,0x8(%esp)
0835d831 +0x54ff:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d839 +0x5507:  lea    -0x3e8(%ebp),%eax
0835d83f +0x550d:  mov    %eax,(%esp)
0835d842 +0x5510:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d847 +0x5515:  movl   $"\t- Init Unlimit Challenge Info ",0x4(%esp)
0835d84f +0x551d:  lea    -0x3e8(%ebp),%eax
0835d855 +0x5523:  mov    %eax,(%esp)
0835d858 +0x5526:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d85d +0x552b:  mov    0x8(%ebp),%eax
0835d860 +0x552e:  add    $0x4ca8,%eax
0835d865 +0x5533:  mov    %eax,0x4(%esp)
0835d869 +0x5537:  movl   $"Etc/UnlimitChallenge.etc",(%esp)
0835d870 +0x553e:  call   0890bc63 <_Z28importUnlimitChallengeScriptPKcP22stUnlimitChallengeInfo>  ; importUnlimitChallengeScript(char const*, stUnlimitChallengeInfo*)
0835d875 +0x5543:  xor    $0x1,%eax
0835d878 +0x5546:  test   %al,%al
0835d87a +0x5548:  je     0835d8d2 <+0x55a0>
0835d87c +0x554a:  movl   $0x1,0x14(%esp)
0835d884 +0x5552:  movl   $0x1,0x10(%esp)
0835d88c +0x555a:  movl   $0x9,0xc(%esp)
0835d894 +0x5562:  movl   $0x2095,0x8(%esp)
0835d89c +0x556a:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d8a4 +0x5572:  lea    -0x3d8(%ebp),%eax
0835d8aa +0x5578:  mov    %eax,(%esp)
0835d8ad +0x557b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d8b2 +0x5580:  movl   $"\t- Init Unlimit Challenge Info Fail",0x4(%esp)
0835d8ba +0x5588:  lea    -0x3d8(%ebp),%eax
0835d8c0 +0x558e:  mov    %eax,(%esp)
0835d8c3 +0x5591:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d8c8 +0x5596:  mov    $0x0,%ebx
0835d8cd +0x559b:  jmp    0835f13c <+0x6e0a>
0835d8d2 +0x55a0:  call   0837505b <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf027>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf027
0835d8d7 +0x55a5:  mov    0x8(%ebp),%edx
0835d8da +0x55a8:  mov    %eax,0x4cf4(%edx)
0835d8e0 +0x55ae:  mov    0x8(%ebp),%eax
0835d8e3 +0x55b1:  lea    0x4ca8(%eax),%edx
0835d8e9 +0x55b7:  mov    0x8(%ebp),%eax
0835d8ec +0x55ba:  mov    0x4cf4(%eax),%eax
0835d8f2 +0x55c0:  mov    %edx,0x4(%esp)
0835d8f6 +0x55c4:  mov    %eax,(%esp)
0835d8f9 +0x55c7:  call   08687828 <_ZN20CLevelRewardTableMgr16SetChallengeInfoER22stUnlimitChallengeInfo>  ; CLevelRewardTableMgr::SetChallengeInfo(stUnlimitChallengeInfo&)
0835d8fe +0x55cc:  movl   $0x1,0x14(%esp)
0835d906 +0x55d4:  movl   $0x0,0x10(%esp)
0835d90e +0x55dc:  movl   $0x9,0xc(%esp)
0835d916 +0x55e4:  movl   $0x209e,0x8(%esp)
0835d91e +0x55ec:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d926 +0x55f4:  lea    -0x3c8(%ebp),%eax
0835d92c +0x55fa:  mov    %eax,(%esp)
0835d92f +0x55fd:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d934 +0x5602:  movl   $"Success",0x4(%esp)
0835d93c +0x560a:  lea    -0x3c8(%ebp),%eax
0835d942 +0x5610:  mov    %eax,(%esp)
0835d945 +0x5613:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d94a +0x5618:  mov    0x8(%ebp),%eax
0835d94d +0x561b:  add    $0x4cf8,%eax
0835d952 +0x5620:  mov    %eax,0x4(%esp)
0835d956 +0x5624:  movl   $"Etc/Chn_Server_LimititemUsageinfo.etc",(%esp)
0835d95d +0x562b:  call   0890d871 <_Z24importLimitItemUsageInfoPcP22stLimitItemUsageInfoEx>  ; importLimitItemUsageInfo(char*, stLimitItemUsageInfoEx*)
0835d962 +0x5630:  xor    $0x1,%eax
0835d965 +0x5633:  test   %al,%al
0835d967 +0x5635:  je     0835d9bf <+0x568d>
0835d969 +0x5637:  movl   $0x1,0x14(%esp)
0835d971 +0x563f:  movl   $0x1,0x10(%esp)
0835d979 +0x5647:  movl   $0x9,0xc(%esp)
0835d981 +0x564f:  movl   $0x20a5,0x8(%esp)
0835d989 +0x5657:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d991 +0x565f:  lea    -0x3b8(%ebp),%eax
0835d997 +0x5665:  mov    %eax,(%esp)
0835d99a +0x5668:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d99f +0x566d:  movl   $"\t- importLimitItemUsageInfo Fail",0x4(%esp)
0835d9a7 +0x5675:  lea    -0x3b8(%ebp),%eax
0835d9ad +0x567b:  mov    %eax,(%esp)
0835d9b0 +0x567e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835d9b5 +0x5683:  mov    $0x0,%ebx
0835d9ba +0x5688:  jmp    0835f13c <+0x6e0a>
0835d9bf +0x568d:  movl   $0x1,0x14(%esp)
0835d9c7 +0x5695:  movl   $0x1,0x10(%esp)
0835d9cf +0x569d:  movl   $0x9,0xc(%esp)
0835d9d7 +0x56a5:  movl   $0x20a8,0x8(%esp)
0835d9df +0x56ad:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835d9e7 +0x56b5:  lea    -0x3a8(%ebp),%eax
0835d9ed +0x56bb:  mov    %eax,(%esp)
0835d9f0 +0x56be:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835d9f5 +0x56c3:  movl   $"\t- Import Limit Item Usage Info Success",0x4(%esp)
0835d9fd +0x56cb:  lea    -0x3a8(%ebp),%eax
0835da03 +0x56d1:  mov    %eax,(%esp)
0835da06 +0x56d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835da0b +0x56d9:  movl   $0x1,0x14(%esp)
0835da13 +0x56e1:  movl   $0x1,0x10(%esp)
0835da1b +0x56e9:  movl   $0x9,0xc(%esp)
0835da23 +0x56f1:  movl   $0x20b7,0x8(%esp)
0835da2b +0x56f9:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835da33 +0x5701:  lea    -0x398(%ebp),%eax
0835da39 +0x5707:  mov    %eax,(%esp)
0835da3c +0x570a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835da41 +0x570f:  movl   $"\t- Import DB Log Item - ",0x4(%esp)
0835da49 +0x5717:  lea    -0x398(%ebp),%eax
0835da4f +0x571d:  mov    %eax,(%esp)
0835da52 +0x5720:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835da57 +0x5725:  mov    0x8(%ebp),%eax
0835da5a +0x5728:  add    $0x4d1c,%eax
0835da5f +0x572d:  mov    %eax,0x4(%esp)
0835da63 +0x5731:  movl   $"Etc/Chn_DBLogItem.etc",(%esp)
0835da6a +0x5738:  call   0890dbba <_Z15importDBLogItemPcPSt6vectorI11stDBLogItemSaIS1_EE>  ; importDBLogItem(char*, std::vector<stDBLogItem, std::allocator<stDBLogItem> >*)
0835da6f +0x573d:  xor    $0x1,%eax
0835da72 +0x5740:  test   %al,%al
0835da74 +0x5742:  je     0835dacc <+0x579a>
0835da76 +0x5744:  movl   $0x1,0x14(%esp)
0835da7e +0x574c:  movl   $0x1,0x10(%esp)
0835da86 +0x5754:  movl   $0x9,0xc(%esp)
0835da8e +0x575c:  movl   $0x20be,0x8(%esp)
0835da96 +0x5764:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835da9e +0x576c:  lea    -0x388(%ebp),%eax
0835daa4 +0x5772:  mov    %eax,(%esp)
0835daa7 +0x5775:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835daac +0x577a:  movl   $"\t- Import DB Log Item  Fail",0x4(%esp)
0835dab4 +0x5782:  lea    -0x388(%ebp),%eax
0835daba +0x5788:  mov    %eax,(%esp)
0835dabd +0x578b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dac2 +0x5790:  mov    $0x0,%ebx
0835dac7 +0x5795:  jmp    0835f13c <+0x6e0a>
0835dacc +0x579a:  movl   $0x1,0x14(%esp)
0835dad4 +0x57a2:  movl   $0x1,0x10(%esp)
0835dadc +0x57aa:  movl   $0x9,0xc(%esp)
0835dae4 +0x57b2:  movl   $0x20c1,0x8(%esp)
0835daec +0x57ba:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835daf4 +0x57c2:  lea    -0x378(%ebp),%eax
0835dafa +0x57c8:  mov    %eax,(%esp)
0835dafd +0x57cb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835db02 +0x57d0:  movl   $"\t- Import DB Log Item Success",0x4(%esp)
0835db0a +0x57d8:  lea    -0x378(%ebp),%eax
0835db10 +0x57de:  mov    %eax,(%esp)
0835db13 +0x57e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835db18 +0x57e6:  movl   $0x0,0x14(%esp)
0835db20 +0x57ee:  movl   $0x1,0x10(%esp)
0835db28 +0x57f6:  movl   $0x9,0xc(%esp)
0835db30 +0x57fe:  movl   $0x20db,0x8(%esp)
0835db38 +0x5806:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835db40 +0x580e:  lea    -0x368(%ebp),%eax
0835db46 +0x5814:  mov    %eax,(%esp)
0835db49 +0x5817:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835db4e +0x581c:  movl   $"\t- Import Condition Event Info ",0x4(%esp)
0835db56 +0x5824:  lea    -0x368(%ebp),%eax
0835db5c +0x582a:  mov    %eax,(%esp)
0835db5f +0x582d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835db64 +0x5832:  mov    0x8(%ebp),%eax
0835db67 +0x5835:  add    $0x4d98,%eax
0835db6c +0x583a:  mov    %eax,0x4(%esp)
0835db70 +0x583e:  movl   $"Event/ConditionEvent.evt",(%esp)
0835db77 +0x5845:  call   0890e868 <_Z26importConditionEventScriptPKcP20stConditionEventInfo>  ; importConditionEventScript(char const*, stConditionEventInfo*)
0835db7c +0x584a:  xor    $0x1,%eax
0835db7f +0x584d:  test   %al,%al
0835db81 +0x584f:  je     0835dbd9 <+0x58a7>
0835db83 +0x5851:  movl   $0x1,0x14(%esp)
0835db8b +0x5859:  movl   $0x1,0x10(%esp)
0835db93 +0x5861:  movl   $0x9,0xc(%esp)
0835db9b +0x5869:  movl   $0x20e2,0x8(%esp)
0835dba3 +0x5871:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dbab +0x5879:  lea    -0x358(%ebp),%eax
0835dbb1 +0x587f:  mov    %eax,(%esp)
0835dbb4 +0x5882:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dbb9 +0x5887:  movl   $"\t- Import Condition Event Info Fail",0x4(%esp)
0835dbc1 +0x588f:  lea    -0x358(%ebp),%eax
0835dbc7 +0x5895:  mov    %eax,(%esp)
0835dbca +0x5898:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dbcf +0x589d:  mov    $0x0,%ebx
0835dbd4 +0x58a2:  jmp    0835f13c <+0x6e0a>
0835dbd9 +0x58a7:  movl   $0x1,0x14(%esp)
0835dbe1 +0x58af:  movl   $0x0,0x10(%esp)
0835dbe9 +0x58b7:  movl   $0x9,0xc(%esp)
0835dbf1 +0x58bf:  movl   $0x20e5,0x8(%esp)
0835dbf9 +0x58c7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dc01 +0x58cf:  lea    -0x348(%ebp),%eax
0835dc07 +0x58d5:  mov    %eax,(%esp)
0835dc0a +0x58d8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dc0f +0x58dd:  movl   $"Success",0x4(%esp)
0835dc17 +0x58e5:  lea    -0x348(%ebp),%eax
0835dc1d +0x58eb:  mov    %eax,(%esp)
0835dc20 +0x58ee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dc25 +0x58f3:  movl   $0x0,0x14(%esp)
0835dc2d +0x58fb:  movl   $0x1,0x10(%esp)
0835dc35 +0x5903:  movl   $0x9,0xc(%esp)
0835dc3d +0x590b:  movl   $0x2102,0x8(%esp)
0835dc45 +0x5913:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dc4d +0x591b:  lea    -0x338(%ebp),%eax
0835dc53 +0x5921:  mov    %eax,(%esp)
0835dc56 +0x5924:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dc5b +0x5929:  movl   $"\t- Import Condition Event Script Dungeon ",0x4(%esp)
0835dc63 +0x5931:  lea    -0x338(%ebp),%eax
0835dc69 +0x5937:  mov    %eax,(%esp)
0835dc6c +0x593a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dc71 +0x593f:  mov    0x8(%ebp),%eax
0835dc74 +0x5942:  add    $0x4de8,%eax
0835dc79 +0x5947:  mov    %eax,0x4(%esp)
0835dc7d +0x594b:  movl   $"Event/ConditionEventChkDungeon.evt",(%esp)
0835dc84 +0x5952:  call   08913891 <_Z36importConditionEventChkDungeonScriptPKcP24ConditionLevelChkDungeon>  ; importConditionEventChkDungeonScript(char const*, ConditionLevelChkDungeon*)
0835dc89 +0x5957:  xor    $0x1,%eax
0835dc8c +0x595a:  test   %al,%al
0835dc8e +0x595c:  je     0835dce6 <+0x59b4>
0835dc90 +0x595e:  movl   $0x1,0x14(%esp)
0835dc98 +0x5966:  movl   $0x1,0x10(%esp)
0835dca0 +0x596e:  movl   $0x9,0xc(%esp)
0835dca8 +0x5976:  movl   $0x2109,0x8(%esp)
0835dcb0 +0x597e:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dcb8 +0x5986:  lea    -0x328(%ebp),%eax
0835dcbe +0x598c:  mov    %eax,(%esp)
0835dcc1 +0x598f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dcc6 +0x5994:  movl   $"\t- Import Condition Event Script Dungeon Fail",0x4(%esp)
0835dcce +0x599c:  lea    -0x328(%ebp),%eax
0835dcd4 +0x59a2:  mov    %eax,(%esp)
0835dcd7 +0x59a5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dcdc +0x59aa:  mov    $0x0,%ebx
0835dce1 +0x59af:  jmp    0835f13c <+0x6e0a>
0835dce6 +0x59b4:  movl   $0x1,0x14(%esp)
0835dcee +0x59bc:  movl   $0x0,0x10(%esp)
0835dcf6 +0x59c4:  movl   $0x9,0xc(%esp)
0835dcfe +0x59cc:  movl   $0x210c,0x8(%esp)
0835dd06 +0x59d4:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dd0e +0x59dc:  lea    -0x318(%ebp),%eax
0835dd14 +0x59e2:  mov    %eax,(%esp)
0835dd17 +0x59e5:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dd1c +0x59ea:  movl   $"Success",0x4(%esp)
0835dd24 +0x59f2:  lea    -0x318(%ebp),%eax
0835dd2a +0x59f8:  mov    %eax,(%esp)
0835dd2d +0x59fb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dd32 +0x5a00:  movl   $0x0,0x14(%esp)
0835dd3a +0x5a08:  movl   $0x1,0x10(%esp)
0835dd42 +0x5a10:  movl   $0x9,0xc(%esp)
0835dd4a +0x5a18:  movl   $0x2111,0x8(%esp)
0835dd52 +0x5a20:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dd5a +0x5a28:  lea    -0x308(%ebp),%eax
0835dd60 +0x5a2e:  mov    %eax,(%esp)
0835dd63 +0x5a31:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dd68 +0x5a36:  movl   $"\t- Import NPC Relation Event Info Success",0x4(%esp)
0835dd70 +0x5a3e:  lea    -0x308(%ebp),%eax
0835dd76 +0x5a44:  mov    %eax,(%esp)
0835dd79 +0x5a47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dd7e +0x5a4c:  mov    0x8(%ebp),%eax
0835dd81 +0x5a4f:  add    $0x4d28,%eax
0835dd86 +0x5a54:  mov    %eax,0x4(%esp)
0835dd8a +0x5a58:  movl   $"Event/NPCRelationEvent.evt",(%esp)
0835dd91 +0x5a5f:  call   0890d44f <_Z28importNPCRelationEventScriptPKcP24CNPCRelationEventManager>  ; importNPCRelationEventScript(char const*, CNPCRelationEventManager*)
0835dd96 +0x5a64:  xor    $0x1,%eax
0835dd99 +0x5a67:  test   %al,%al
0835dd9b +0x5a69:  je     0835ddf3 <+0x5ac1>
0835dd9d +0x5a6b:  movl   $0x1,0x14(%esp)
0835dda5 +0x5a73:  movl   $0x1,0x10(%esp)
0835ddad +0x5a7b:  movl   $0x9,0xc(%esp)
0835ddb5 +0x5a83:  movl   $0x2118,0x8(%esp)
0835ddbd +0x5a8b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ddc5 +0x5a93:  lea    -0x2f8(%ebp),%eax
0835ddcb +0x5a99:  mov    %eax,(%esp)
0835ddce +0x5a9c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ddd3 +0x5aa1:  movl   $"\t- Import NPC Relation Event Info Fail",0x4(%esp)
0835dddb +0x5aa9:  lea    -0x2f8(%ebp),%eax
0835dde1 +0x5aaf:  mov    %eax,(%esp)
0835dde4 +0x5ab2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835dde9 +0x5ab7:  mov    $0x0,%ebx
0835ddee +0x5abc:  jmp    0835f13c <+0x6e0a>
0835ddf3 +0x5ac1:  movl   $0x1,0x14(%esp)
0835ddfb +0x5ac9:  movl   $0x0,0x10(%esp)
0835de03 +0x5ad1:  movl   $0x9,0xc(%esp)
0835de0b +0x5ad9:  movl   $0x211b,0x8(%esp)
0835de13 +0x5ae1:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835de1b +0x5ae9:  lea    -0x2e8(%ebp),%eax
0835de21 +0x5aef:  mov    %eax,(%esp)
0835de24 +0x5af2:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835de29 +0x5af7:  movl   $"Success",0x4(%esp)
0835de31 +0x5aff:  lea    -0x2e8(%ebp),%eax
0835de37 +0x5b05:  mov    %eax,(%esp)
0835de3a +0x5b08:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835de3f +0x5b0d:  movl   $0x0,0x14(%esp)
0835de47 +0x5b15:  movl   $0x1,0x10(%esp)
0835de4f +0x5b1d:  movl   $0x9,0xc(%esp)
0835de57 +0x5b25:  movl   $0x211e,0x8(%esp)
0835de5f +0x5b2d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835de67 +0x5b35:  lea    -0x2d8(%ebp),%eax
0835de6d +0x5b3b:  mov    %eax,(%esp)
0835de70 +0x5b3e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835de75 +0x5b43:  movl   $"\t- Import Emotion Type Tags Info ",0x4(%esp)
0835de7d +0x5b4b:  lea    -0x2d8(%ebp),%eax
0835de83 +0x5b51:  mov    %eax,(%esp)
0835de86 +0x5b54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835de8b +0x5b59:  mov    0x8(%ebp),%eax
0835de8e +0x5b5c:  add    $0x4d44,%eax
0835de93 +0x5b61:  mov    %eax,0x4(%esp)
0835de97 +0x5b65:  movl   $"Etc/EmotionExpressionData.etc",(%esp)
0835de9e +0x5b6c:  call   0890de85 <_Z27importEmotionTypeTagsScriptPKcP21stEmotionTypeTagsInfo>  ; importEmotionTypeTagsScript(char const*, stEmotionTypeTagsInfo*)
0835dea3 +0x5b71:  xor    $0x1,%eax
0835dea6 +0x5b74:  test   %al,%al
0835dea8 +0x5b76:  je     0835df00 <+0x5bce>
0835deaa +0x5b78:  movl   $0x1,0x14(%esp)
0835deb2 +0x5b80:  movl   $0x1,0x10(%esp)
0835deba +0x5b88:  movl   $0x9,0xc(%esp)
0835dec2 +0x5b90:  movl   $0x2121,0x8(%esp)
0835deca +0x5b98:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ded2 +0x5ba0:  lea    -0x2c8(%ebp),%eax
0835ded8 +0x5ba6:  mov    %eax,(%esp)
0835dedb +0x5ba9:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dee0 +0x5bae:  movl   $"\t- Import Emotion Type Tags Info Fail\n",0x4(%esp)
0835dee8 +0x5bb6:  lea    -0x2c8(%ebp),%eax
0835deee +0x5bbc:  mov    %eax,(%esp)
0835def1 +0x5bbf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835def6 +0x5bc4:  mov    $0x0,%ebx
0835defb +0x5bc9:  jmp    0835f13c <+0x6e0a>
0835df00 +0x5bce:  movl   $0x1,0x14(%esp)
0835df08 +0x5bd6:  movl   $0x0,0x10(%esp)
0835df10 +0x5bde:  movl   $0x9,0xc(%esp)
0835df18 +0x5be6:  movl   $0x2124,0x8(%esp)
0835df20 +0x5bee:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835df28 +0x5bf6:  lea    -0x2b8(%ebp),%eax
0835df2e +0x5bfc:  mov    %eax,(%esp)
0835df31 +0x5bff:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835df36 +0x5c04:  movl   $"Success",0x4(%esp)
0835df3e +0x5c0c:  lea    -0x2b8(%ebp),%eax
0835df44 +0x5c12:  mov    %eax,(%esp)
0835df47 +0x5c15:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835df4c +0x5c1a:  movl   $0x0,0x14(%esp)
0835df54 +0x5c22:  movl   $0x1,0x10(%esp)
0835df5c +0x5c2a:  movl   $0x9,0xc(%esp)
0835df64 +0x5c32:  movl   $0x2126,0x8(%esp)
0835df6c +0x5c3a:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835df74 +0x5c42:  lea    -0x2a8(%ebp),%eax
0835df7a +0x5c48:  mov    %eax,(%esp)
0835df7d +0x5c4b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835df82 +0x5c50:  movl   $"\t- Import Equipment Grade Sample Info ",0x4(%esp)
0835df8a +0x5c58:  lea    -0x2a8(%ebp),%eax
0835df90 +0x5c5e:  mov    %eax,(%esp)
0835df93 +0x5c61:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835df98 +0x5c66:  mov    0x8(%ebp),%eax
0835df9b +0x5c69:  add    $0x4d5c,%eax
0835dfa0 +0x5c6e:  mov    %eax,0x4(%esp)
0835dfa4 +0x5c72:  movl   $"Etc/EquipmentGradeSample.etc",(%esp)
0835dfab +0x5c79:  call   0890e18d <_Z30importEquipmentGradeSampleInfoPKcP22stEquipmentGradeSample>  ; importEquipmentGradeSampleInfo(char const*, stEquipmentGradeSample*)
0835dfb0 +0x5c7e:  xor    $0x1,%eax
0835dfb3 +0x5c81:  test   %al,%al
0835dfb5 +0x5c83:  je     0835e00d <+0x5cdb>
0835dfb7 +0x5c85:  movl   $0x1,0x14(%esp)
0835dfbf +0x5c8d:  movl   $0x1,0x10(%esp)
0835dfc7 +0x5c95:  movl   $0x9,0xc(%esp)
0835dfcf +0x5c9d:  movl   $0x2129,0x8(%esp)
0835dfd7 +0x5ca5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835dfdf +0x5cad:  lea    -0x298(%ebp),%eax
0835dfe5 +0x5cb3:  mov    %eax,(%esp)
0835dfe8 +0x5cb6:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835dfed +0x5cbb:  movl   $"\t- Import Equipment Grade Sample Info Fail\n",0x4(%esp)
0835dff5 +0x5cc3:  lea    -0x298(%ebp),%eax
0835dffb +0x5cc9:  mov    %eax,(%esp)
0835dffe +0x5ccc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e003 +0x5cd1:  mov    $0x0,%ebx
0835e008 +0x5cd6:  jmp    0835f13c <+0x6e0a>
0835e00d +0x5cdb:  movl   $0x1,0x14(%esp)
0835e015 +0x5ce3:  movl   $0x0,0x10(%esp)
0835e01d +0x5ceb:  movl   $0x9,0xc(%esp)
0835e025 +0x5cf3:  movl   $0x212c,0x8(%esp)
0835e02d +0x5cfb:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e035 +0x5d03:  lea    -0x288(%ebp),%eax
0835e03b +0x5d09:  mov    %eax,(%esp)
0835e03e +0x5d0c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e043 +0x5d11:  movl   $"Success",0x4(%esp)
0835e04b +0x5d19:  lea    -0x288(%ebp),%eax
0835e051 +0x5d1f:  mov    %eax,(%esp)
0835e054 +0x5d22:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e059 +0x5d27:  movl   $0x0,0x14(%esp)
0835e061 +0x5d2f:  movl   $0x1,0x10(%esp)
0835e069 +0x5d37:  movl   $0x9,0xc(%esp)
0835e071 +0x5d3f:  movl   $0x215c,0x8(%esp)
0835e079 +0x5d47:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e081 +0x5d4f:  lea    -0x278(%ebp),%eax
0835e087 +0x5d55:  mov    %eax,(%esp)
0835e08a +0x5d58:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e08f +0x5d5d:  movl   $"\t- Import Creature Script",0x4(%esp)
0835e097 +0x5d65:  lea    -0x278(%ebp),%eax
0835e09d +0x5d6b:  mov    %eax,(%esp)
0835e0a0 +0x5d6e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e0a5 +0x5d73:  movl   $"ExpTable.tbl",0x8(%esp)
0835e0ad +0x5d7b:  movl   $"Creature.lst",0x4(%esp)
0835e0b5 +0x5d83:  movl   $"Creature/",(%esp)
0835e0bc +0x5d8a:  call   08a35d37 <_Z18initCreatureScriptPKcS0_S0_>  ; initCreatureScript(char const*, char const*, char const*)
0835e0c1 +0x5d8f:  xor    $0x1,%eax
0835e0c4 +0x5d92:  test   %al,%al
0835e0c6 +0x5d94:  je     0835e11e <+0x5dec>
0835e0c8 +0x5d96:  movl   $0x1,0x14(%esp)
0835e0d0 +0x5d9e:  movl   $0x1,0x10(%esp)
0835e0d8 +0x5da6:  movl   $0x9,0xc(%esp)
0835e0e0 +0x5dae:  movl   $0x215f,0x8(%esp)
0835e0e8 +0x5db6:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e0f0 +0x5dbe:  lea    -0x268(%ebp),%eax
0835e0f6 +0x5dc4:  mov    %eax,(%esp)
0835e0f9 +0x5dc7:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e0fe +0x5dcc:  movl   $"\t- Import Creature Creature.lst fail",0x4(%esp)
0835e106 +0x5dd4:  lea    -0x268(%ebp),%eax
0835e10c +0x5dda:  mov    %eax,(%esp)
0835e10f +0x5ddd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e114 +0x5de2:  mov    $0x0,%ebx
0835e119 +0x5de7:  jmp    0835f13c <+0x6e0a>
0835e11e +0x5dec:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
0835e123 +0x5df1:  mov    %eax,(%esp)
0835e126 +0x5df4:  call   0833cba6 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv>  ; user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()
0835e12b +0x5df9:  xor    $0x1,%eax
0835e12e +0x5dfc:  test   %al,%al
0835e130 +0x5dfe:  je     0835e188 <+0x5e56>
0835e132 +0x5e00:  movl   $0x1,0x14(%esp)
0835e13a +0x5e08:  movl   $0x1,0x10(%esp)
0835e142 +0x5e10:  movl   $0x9,0xc(%esp)
0835e14a +0x5e18:  movl   $0x2165,0x8(%esp)
0835e152 +0x5e20:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e15a +0x5e28:  lea    -0x258(%ebp),%eax
0835e160 +0x5e2e:  mov    %eax,(%esp)
0835e163 +0x5e31:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e168 +0x5e36:  movl   $"\t- Import Creature Script Fail",0x4(%esp)
0835e170 +0x5e3e:  lea    -0x258(%ebp),%eax
0835e176 +0x5e44:  mov    %eax,(%esp)
0835e179 +0x5e47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e17e +0x5e4c:  mov    $0x0,%ebx
0835e183 +0x5e51:  jmp    0835f13c <+0x6e0a>
0835e188 +0x5e56:  movl   $0x1,0x14(%esp)
0835e190 +0x5e5e:  movl   $0x0,0x10(%esp)
0835e198 +0x5e66:  movl   $0x9,0xc(%esp)
0835e1a0 +0x5e6e:  movl   $0x2168,0x8(%esp)
0835e1a8 +0x5e76:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e1b0 +0x5e7e:  lea    -0x248(%ebp),%eax
0835e1b6 +0x5e84:  mov    %eax,(%esp)
0835e1b9 +0x5e87:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e1be +0x5e8c:  movl   $"Success",0x4(%esp)
0835e1c6 +0x5e94:  lea    -0x248(%ebp),%eax
0835e1cc +0x5e9a:  mov    %eax,(%esp)
0835e1cf +0x5e9d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e1d4 +0x5ea2:  movl   $"extern.sd",(%esp)
0835e1db +0x5ea9:  call   0834f4ba <_ZN8CMapList24LoadPvPSinglePlayableMapEPc>  ; CMapList::LoadPvPSinglePlayableMap(char*)
0835e1e0 +0x5eae:  movl   $0x64,(%esp)
0835e1e7 +0x5eb5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835e1ec +0x5eba:  mov    %eax,%ebx
0835e1ee +0x5ebc:  mov    %ebx,%eax
0835e1f0 +0x5ebe:  mov    %eax,(%esp)
0835e1f3 +0x5ec1:  call   08376262 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5d02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5d02
0835e1f8 +0x5ec6:  jmp    0835e20f <+0x5edd>
0835e1fa +0x5ec8:  mov    %edx,%esi
0835e1fc +0x5eca:  mov    %eax,%edi
0835e1fe +0x5ecc:  mov    %ebx,(%esp)
0835e201 +0x5ecf:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835e206 +0x5ed4:  mov    %edi,%eax
0835e208 +0x5ed6:  mov    %esi,%edx
0835e20a +0x5ed8:  jmp    0835f124 <+0x6df2>
0835e20f +0x5edd:  mov    %ebx,%edx
0835e211 +0x5edf:  mov    0x8(%ebp),%eax
0835e214 +0x5ee2:  mov    %edx,0xa8d0(%eax)
0835e21a +0x5ee8:  movl   $0x18,(%esp)
0835e221 +0x5eef:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835e226 +0x5ef4:  mov    %eax,%ebx
0835e228 +0x5ef6:  mov    %ebx,%eax
0835e22a +0x5ef8:  mov    %eax,(%esp)
0835e22d +0x5efb:  call   083760f2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5b92>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5b92
0835e232 +0x5f00:  jmp    0835e249 <+0x5f17>
0835e234 +0x5f02:  mov    %edx,%esi
0835e236 +0x5f04:  mov    %eax,%edi
0835e238 +0x5f06:  mov    %ebx,(%esp)
0835e23b +0x5f09:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835e240 +0x5f0e:  mov    %edi,%eax
0835e242 +0x5f10:  mov    %esi,%edx
0835e244 +0x5f12:  jmp    0835f124 <+0x6df2>
0835e249 +0x5f17:  mov    %ebx,%edx
0835e24b +0x5f19:  mov    0x8(%ebp),%eax
0835e24e +0x5f1c:  mov    %edx,0xa8d4(%eax)
0835e254 +0x5f22:  movl   $0x0,0x14(%esp)
0835e25c +0x5f2a:  movl   $0x1,0x10(%esp)
0835e264 +0x5f32:  movl   $0x9,0xc(%esp)
0835e26c +0x5f3a:  movl   $0x217a,0x8(%esp)
0835e274 +0x5f42:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e27c +0x5f4a:  lea    -0x238(%ebp),%eax
0835e282 +0x5f50:  mov    %eax,(%esp)
0835e285 +0x5f53:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e28a +0x5f58:  movl   $"\t- Import Npc Script ",0x4(%esp)
0835e292 +0x5f60:  lea    -0x238(%ebp),%eax
0835e298 +0x5f66:  mov    %eax,(%esp)
0835e29b +0x5f69:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e2a0 +0x5f6e:  mov    0x8(%ebp),%eax
0835e2a3 +0x5f71:  mov    0xa8d0(%eax),%eax
0835e2a9 +0x5f77:  movl   $"common.dat",0xc(%esp)
0835e2b1 +0x5f7f:  movl   $"Npc.lst",0x8(%esp)
0835e2b9 +0x5f87:  movl   $"Npc/",0x4(%esp)
0835e2c1 +0x5f8f:  mov    %eax,(%esp)
0835e2c4 +0x5f92:  call   08581314 <_ZN14CNPCScriptList10initScriptEPcS0_S0_>  ; CNPCScriptList::initScript(char*, char*, char*)
0835e2c9 +0x5f97:  test   %eax,%eax
0835e2cb +0x5f99:  setne  %al
0835e2ce +0x5f9c:  test   %al,%al
0835e2d0 +0x5f9e:  je     0835e328 <+0x5ff6>
0835e2d2 +0x5fa0:  movl   $0x1,0x14(%esp)
0835e2da +0x5fa8:  movl   $0x1,0x10(%esp)
0835e2e2 +0x5fb0:  movl   $0x9,0xc(%esp)
0835e2ea +0x5fb8:  movl   $0x217d,0x8(%esp)
0835e2f2 +0x5fc0:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e2fa +0x5fc8:  lea    -0x228(%ebp),%eax
0835e300 +0x5fce:  mov    %eax,(%esp)
0835e303 +0x5fd1:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e308 +0x5fd6:  movl   $"\t- Import Npc.lst Fail\n",0x4(%esp)
0835e310 +0x5fde:  lea    -0x228(%ebp),%eax
0835e316 +0x5fe4:  mov    %eax,(%esp)
0835e319 +0x5fe7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e31e +0x5fec:  mov    $0x0,%ebx
0835e323 +0x5ff1:  jmp    0835f13c <+0x6e0a>
0835e328 +0x5ff6:  movl   $0x1,0x14(%esp)
0835e330 +0x5ffe:  movl   $0x0,0x10(%esp)
0835e338 +0x6006:  movl   $0x9,0xc(%esp)
0835e340 +0x600e:  movl   $0x2180,0x8(%esp)
0835e348 +0x6016:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e350 +0x601e:  lea    -0x218(%ebp),%eax
0835e356 +0x6024:  mov    %eax,(%esp)
0835e359 +0x6027:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e35e +0x602c:  movl   $"Success",0x4(%esp)
0835e366 +0x6034:  lea    -0x218(%ebp),%eax
0835e36c +0x603a:  mov    %eax,(%esp)
0835e36f +0x603d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e374 +0x6042:  movl   $0x14,(%esp)
0835e37b +0x6049:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835e380 +0x604e:  mov    %eax,%ebx
0835e382 +0x6050:  mov    %ebx,%eax
0835e384 +0x6052:  mov    %eax,(%esp)
0835e387 +0x6055:  call   08374e0c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xedd8>  ; global constructors keyed to CServerEvent::m_nExpRate+0xedd8
0835e38c +0x605a:  jmp    0835e3a3 <+0x6071>
0835e38e +0x605c:  mov    %edx,%esi
0835e390 +0x605e:  mov    %eax,%edi
0835e392 +0x6060:  mov    %ebx,(%esp)
0835e395 +0x6063:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835e39a +0x6068:  mov    %edi,%eax
0835e39c +0x606a:  mov    %esi,%edx
0835e39e +0x606c:  jmp    0835f124 <+0x6df2>
0835e3a3 +0x6071:  mov    %ebx,%edx
0835e3a5 +0x6073:  mov    0x8(%ebp),%eax
0835e3a8 +0x6076:  mov    %edx,0x4d40(%eax)
0835e3ae +0x607c:  call   080f8aba <_ZN8WongWork12CMCAPManager4initEv>  ; WongWork::CMCAPManager::init()
0835e3b3 +0x6081:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835e3b8 +0x6086:  mov    %eax,(%esp)
0835e3bb +0x6089:  call   08622c66 <_ZN11sync_script11CSyncScript23trancate_item_parts_setEv>  ; sync_script::CSyncScript::trancate_item_parts_set()
0835e3c0 +0x608e:  movl   $0x0,0x14(%esp)
0835e3c8 +0x6096:  movl   $0x1,0x10(%esp)
0835e3d0 +0x609e:  movl   $0x9,0xc(%esp)
0835e3d8 +0x60a6:  movl   $0x21ac,0x8(%esp)
0835e3e0 +0x60ae:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e3e8 +0x60b6:  lea    -0x208(%ebp),%eax
0835e3ee +0x60bc:  mov    %eax,(%esp)
0835e3f1 +0x60bf:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e3f6 +0x60c4:  movl   $"\t- Import Equipment Part Set Info ",0x4(%esp)
0835e3fe +0x60cc:  lea    -0x208(%ebp),%eax
0835e404 +0x60d2:  mov    %eax,(%esp)
0835e407 +0x60d5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e40c +0x60da:  movl   $0x3,0x4(%esp)
0835e414 +0x60e2:  movl   $"Etc/EquipmentPartSet.etc",(%esp)
0835e41b +0x60e9:  call   089073d9 <_Z26importEquipmentPartSetInfoPKc16ENUM_MODULE_TYPE>  ; importEquipmentPartSetInfo(char const*, ENUM_MODULE_TYPE)
0835e420 +0x60ee:  xor    $0x1,%eax
0835e423 +0x60f1:  test   %al,%al
0835e425 +0x60f3:  je     0835e47d <+0x614b>
0835e427 +0x60f5:  movl   $0x1,0x14(%esp)
0835e42f +0x60fd:  movl   $0x1,0x10(%esp)
0835e437 +0x6105:  movl   $0x9,0xc(%esp)
0835e43f +0x610d:  movl   $0x21af,0x8(%esp)
0835e447 +0x6115:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e44f +0x611d:  lea    -0x1f8(%ebp),%eax
0835e455 +0x6123:  mov    %eax,(%esp)
0835e458 +0x6126:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e45d +0x612b:  movl   $"\t- Import Equipment Part Set Info Fail",0x4(%esp)
0835e465 +0x6133:  lea    -0x1f8(%ebp),%eax
0835e46b +0x6139:  mov    %eax,(%esp)
0835e46e +0x613c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e473 +0x6141:  mov    $0x0,%ebx
0835e478 +0x6146:  jmp    0835f13c <+0x6e0a>
0835e47d +0x614b:  movl   $0x1,0x14(%esp)
0835e485 +0x6153:  movl   $0x0,0x10(%esp)
0835e48d +0x615b:  movl   $0x9,0xc(%esp)
0835e495 +0x6163:  movl   $0x21b3,0x8(%esp)
0835e49d +0x616b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e4a5 +0x6173:  lea    -0x1e8(%ebp),%eax
0835e4ab +0x6179:  mov    %eax,(%esp)
0835e4ae +0x617c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e4b3 +0x6181:  movl   $"Success",0x4(%esp)
0835e4bb +0x6189:  lea    -0x1e8(%ebp),%eax
0835e4c1 +0x618f:  mov    %eax,(%esp)
0835e4c4 +0x6192:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e4c9 +0x6197:  lea    -0xf58(%ebp),%eax
0835e4cf +0x619d:  movl   $&g_equipmentPartSetMap_,0x4(%esp)
0835e4d7 +0x61a5:  mov    %eax,(%esp)
0835e4da +0x61a8:  call   08392f10 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x229b0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x229b0
0835e4df +0x61ad:  sub    $0x4,%esp
0835e4e2 +0x61b0:  jmp    0835e6e4 <+0x63b2>
0835e4e7 +0x61b5:  lea    -0xf58(%ebp),%eax
0835e4ed +0x61bb:  mov    %eax,(%esp)
0835e4f0 +0x61be:  call   08392f8e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a2e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a2e
0835e4f5 +0x61c3:  add    $0x4,%eax
0835e4f8 +0x61c6:  mov    %eax,-0x20(%ebp)
0835e4fb +0x61c9:  mov    -0x20(%ebp),%eax
0835e4fe +0x61cc:  add    $0xc,%eax
0835e501 +0x61cf:  mov    %eax,-0x1c(%ebp)
0835e504 +0x61d2:  lea    -0xf5c(%ebp),%eax
0835e50a +0x61d8:  mov    -0x1c(%ebp),%edx
0835e50d +0x61db:  mov    %edx,0x4(%esp)
0835e511 +0x61df:  mov    %eax,(%esp)
0835e514 +0x61e2:  call   08392f9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a3c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a3c
0835e519 +0x61e7:  sub    $0x4,%esp
0835e51c +0x61ea:  jmp    0835e561 <+0x622f>
0835e51e +0x61ec:  lea    -0xf5c(%ebp),%eax
0835e524 +0x61f2:  mov    %eax,(%esp)
0835e527 +0x61f5:  call   08393028 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22ac8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22ac8
0835e52c +0x61fa:  mov    %eax,%ebx
0835e52e +0x61fc:  lea    -0xf58(%ebp),%eax
0835e534 +0x6202:  mov    %eax,(%esp)
0835e537 +0x6205:  call   08392f8e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a2e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a2e
0835e53c +0x620a:  mov    (%eax),%esi
0835e53e +0x620c:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835e543 +0x6211:  mov    %ebx,0x8(%esp)
0835e547 +0x6215:  mov    %esi,0x4(%esp)
0835e54b +0x6219:  mov    %eax,(%esp)
0835e54e +0x621c:  call   08622cdc <_ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece>  ; sync_script::CSyncScript::insert_item_parts_set(int, STEquipmentPartSetPiece&)
0835e553 +0x6221:  lea    -0xf5c(%ebp),%eax
0835e559 +0x6227:  mov    %eax,(%esp)
0835e55c +0x622a:  call   08393012 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22ab2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22ab2
0835e561 +0x622f:  lea    -0x1d4(%ebp),%eax
0835e567 +0x6235:  mov    -0x1c(%ebp),%edx
0835e56a +0x6238:  mov    %edx,0x4(%esp)
0835e56e +0x623c:  mov    %eax,(%esp)
0835e571 +0x623f:  call   08392fc0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a60
0835e576 +0x6244:  sub    $0x4,%esp
0835e579 +0x6247:  lea    -0x1d4(%ebp),%eax
0835e57f +0x624d:  mov    %eax,0x4(%esp)
0835e583 +0x6251:  lea    -0xf5c(%ebp),%eax
0835e589 +0x6257:  mov    %eax,(%esp)
0835e58c +0x625a:  call   08392fe6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a86>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a86
0835e591 +0x625f:  test   %al,%al
0835e593 +0x6261:  jne    0835e51e <+0x61ec>
0835e595 +0x6263:  mov    -0x20(%ebp),%eax
0835e598 +0x6266:  mov    0x8(%eax),%eax
0835e59b +0x6269:  lea    0x678(%eax),%edx
0835e5a1 +0x626f:  lea    -0xf60(%ebp),%eax
0835e5a7 +0x6275:  mov    %edx,0x4(%esp)
0835e5ab +0x6279:  mov    %eax,(%esp)
0835e5ae +0x627c:  call   08393032 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22ad2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22ad2
0835e5b3 +0x6281:  sub    $0x4,%esp
0835e5b6 +0x6284:  jmp    0835e695 <+0x6363>
0835e5bb +0x6289:  lea    -0x1910(%ebp),%eax
0835e5c1 +0x628f:  mov    %eax,(%esp)
0835e5c4 +0x6292:  call   0898db82 <_ZN17STEquipmentScriptC1Ev>  ; STEquipmentScript::STEquipmentScript()
0835e5c9 +0x6297:  mov    -0x20(%ebp),%eax
0835e5cc +0x629a:  mov    0x8(%eax),%eax
0835e5cf +0x629d:  add    $0x668,%eax
0835e5d4 +0x62a2:  mov    %eax,0x4(%esp)
0835e5d8 +0x62a6:  lea    -0x1910(%ebp),%eax
0835e5de +0x62ac:  add    $0xac,%eax
0835e5e3 +0x62b1:  mov    %eax,(%esp)
0835e5e6 +0x62b4:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0835e5eb +0x62b9:  lea    -0xf60(%ebp),%eax
0835e5f1 +0x62bf:  mov    %eax,(%esp)
0835e5f4 +0x62c2:  call   083930b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b50
0835e5f9 +0x62c7:  add    $0x4,%eax
0835e5fc +0x62ca:  mov    %eax,0x4(%esp)
0835e600 +0x62ce:  lea    -0x1910(%ebp),%eax
0835e606 +0x62d4:  add    $0x1c0,%eax
0835e60b +0x62d9:  mov    %eax,(%esp)
0835e60e +0x62dc:  call   083662ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x296>  ; global constructors keyed to CServerEvent::m_nExpRate+0x296
0835e613 +0x62e1:  lea    -0xf60(%ebp),%eax
0835e619 +0x62e7:  mov    %eax,(%esp)
0835e61c +0x62ea:  call   083930b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b50
0835e621 +0x62ef:  mov    (%eax),%esi
0835e623 +0x62f1:  lea    -0xf58(%ebp),%eax
0835e629 +0x62f7:  mov    %eax,(%esp)
0835e62c +0x62fa:  call   08392f8e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a2e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a2e
0835e631 +0x62ff:  mov    (%eax),%eax
0835e633 +0x6301:  mov    %eax,%ebx
0835e635 +0x6303:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0835e63a +0x6308:  mov    %esi,0x10(%esp)
0835e63e +0x630c:  movl   $0x2,0xc(%esp)
0835e646 +0x6314:  mov    %ebx,0x8(%esp)
0835e64a +0x6318:  lea    -0x1910(%ebp),%edx
0835e650 +0x631e:  mov    %edx,0x4(%esp)
0835e654 +0x6322:  mov    %eax,(%esp)
0835e657 +0x6325:  call   0861d87e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii>  ; sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)
0835e65c +0x632a:  jmp    0835e679 <+0x6347>
0835e65e +0x632c:  mov    %edx,%ebx
0835e660 +0x632e:  mov    %eax,%esi
0835e662 +0x6330:  lea    -0x1910(%ebp),%eax
0835e668 +0x6336:  mov    %eax,(%esp)
0835e66b +0x6339:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0835e670 +0x633e:  mov    %esi,%eax
0835e672 +0x6340:  mov    %ebx,%edx
0835e674 +0x6342:  jmp    0835f124 <+0x6df2>
0835e679 +0x6347:  lea    -0x1910(%ebp),%eax
0835e67f +0x634d:  mov    %eax,(%esp)
0835e682 +0x6350:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0835e687 +0x6355:  lea    -0xf60(%ebp),%eax
0835e68d +0x635b:  mov    %eax,(%esp)
0835e690 +0x635e:  call   08393092 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b32
0835e695 +0x6363:  mov    -0x20(%ebp),%eax
0835e698 +0x6366:  mov    0x8(%eax),%eax
0835e69b +0x6369:  lea    0x678(%eax),%edx
0835e6a1 +0x636f:  lea    -0x1d0(%ebp),%eax
0835e6a7 +0x6375:  mov    %edx,0x4(%esp)
0835e6ab +0x6379:  mov    %eax,(%esp)
0835e6ae +0x637c:  call   08393058 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22af8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22af8
0835e6b3 +0x6381:  sub    $0x4,%esp
0835e6b6 +0x6384:  lea    -0x1d0(%ebp),%eax
0835e6bc +0x638a:  mov    %eax,0x4(%esp)
0835e6c0 +0x638e:  lea    -0xf60(%ebp),%eax
0835e6c6 +0x6394:  mov    %eax,(%esp)
0835e6c9 +0x6397:  call   0839307e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b1e
0835e6ce +0x639c:  test   %al,%al
0835e6d0 +0x639e:  jne    0835e5bb <+0x6289>
0835e6d6 +0x63a4:  lea    -0xf58(%ebp),%eax
0835e6dc +0x63aa:  mov    %eax,(%esp)
0835e6df +0x63ad:  call   08392f70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22a10>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22a10
0835e6e4 +0x63b2:  lea    -0x1d8(%ebp),%eax
0835e6ea +0x63b8:  movl   $&g_equipmentPartSetMap_,0x4(%esp)
0835e6f2 +0x63c0:  mov    %eax,(%esp)
0835e6f5 +0x63c3:  call   08392f36 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x229d6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x229d6
0835e6fa +0x63c8:  sub    $0x4,%esp
0835e6fd +0x63cb:  lea    -0x1d8(%ebp),%eax
0835e703 +0x63d1:  mov    %eax,0x4(%esp)
0835e707 +0x63d5:  lea    -0xf58(%ebp),%eax
0835e70d +0x63db:  mov    %eax,(%esp)
0835e710 +0x63de:  call   08392f5c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x229fc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x229fc
0835e715 +0x63e3:  test   %al,%al
0835e717 +0x63e5:  jne    0835e4e7 <+0x61b5>
0835e71d +0x63eb:  movl   $0x0,0x14(%esp)
0835e725 +0x63f3:  movl   $0x1,0x10(%esp)
0835e72d +0x63fb:  movl   $0x9,0xc(%esp)
0835e735 +0x6403:  movl   $0x21ca,0x8(%esp)
0835e73d +0x640b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e745 +0x6413:  lea    -0x1cc(%ebp),%eax
0835e74b +0x6419:  mov    %eax,(%esp)
0835e74e +0x641c:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e753 +0x6421:  movl   $"\t- Import FairPvPStat ",0x4(%esp)
0835e75b +0x6429:  lea    -0x1cc(%ebp),%eax
0835e761 +0x642f:  mov    %eax,(%esp)
0835e764 +0x6432:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e769 +0x6437:  mov    0x8(%ebp),%eax
0835e76c +0x643a:  add    $0x4df8,%eax
0835e771 +0x643f:  movl   $"Etc/FairPvPStat.etc",0x4(%esp)
0835e779 +0x6447:  mov    %eax,(%esp)
0835e77c +0x644a:  call   08977d9c <_Z23importPairPvPStatScriptR17FairPvPStatScriptPKc>  ; importPairPvPStatScript(FairPvPStatScript&, char const*)
0835e781 +0x644f:  xor    $0x1,%eax
0835e784 +0x6452:  test   %al,%al
0835e786 +0x6454:  je     0835e7de <+0x64ac>
0835e788 +0x6456:  movl   $0x1,0x14(%esp)
0835e790 +0x645e:  movl   $0x1,0x10(%esp)
0835e798 +0x6466:  movl   $0x9,0xc(%esp)
0835e7a0 +0x646e:  movl   $0x21cd,0x8(%esp)
0835e7a8 +0x6476:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e7b0 +0x647e:  lea    -0x1bc(%ebp),%eax
0835e7b6 +0x6484:  mov    %eax,(%esp)
0835e7b9 +0x6487:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e7be +0x648c:  movl   $"\t- Fail load FairPvPStat Script File",0x4(%esp)
0835e7c6 +0x6494:  lea    -0x1bc(%ebp),%eax
0835e7cc +0x649a:  mov    %eax,(%esp)
0835e7cf +0x649d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e7d4 +0x64a2:  mov    $0x0,%ebx
0835e7d9 +0x64a7:  jmp    0835f13c <+0x6e0a>
0835e7de +0x64ac:  movl   $0x1,0x14(%esp)
0835e7e6 +0x64b4:  movl   $0x0,0x10(%esp)
0835e7ee +0x64bc:  movl   $0x9,0xc(%esp)
0835e7f6 +0x64c4:  movl   $0x21d1,0x8(%esp)
0835e7fe +0x64cc:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e806 +0x64d4:  lea    -0x1ac(%ebp),%eax
0835e80c +0x64da:  mov    %eax,(%esp)
0835e80f +0x64dd:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e814 +0x64e2:  movl   $"Success",0x4(%esp)
0835e81c +0x64ea:  lea    -0x1ac(%ebp),%eax
0835e822 +0x64f0:  mov    %eax,(%esp)
0835e825 +0x64f3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e82a +0x64f8:  movl   $"PvPSkillTree.lst",0x4(%esp)
0835e832 +0x6500:  movl   $"Etc/",(%esp)
0835e839 +0x6507:  call   08a5cd6c <_Z22initPvPSkillTreeScriptPcS_>  ; initPvPSkillTreeScript(char*, char*)
0835e83e +0x650c:  xor    $0x1,%eax
0835e841 +0x650f:  test   %al,%al
0835e843 +0x6511:  je     0835e89b <+0x6569>
0835e845 +0x6513:  movl   $0x1,0x14(%esp)
0835e84d +0x651b:  movl   $0x1,0x10(%esp)
0835e855 +0x6523:  movl   $0x9,0xc(%esp)
0835e85d +0x652b:  movl   $0x21d7,0x8(%esp)
0835e865 +0x6533:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e86d +0x653b:  lea    -0x19c(%ebp),%eax
0835e873 +0x6541:  mov    %eax,(%esp)
0835e876 +0x6544:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e87b +0x6549:  movl   $"\t- Load PvPSkillTree.lst fail",0x4(%esp)
0835e883 +0x6551:  lea    -0x19c(%ebp),%eax
0835e889 +0x6557:  mov    %eax,(%esp)
0835e88c +0x655a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e891 +0x655f:  mov    $0x0,%ebx
0835e896 +0x6564:  jmp    0835f13c <+0x6e0a>
0835e89b +0x6569:  mov    0x8(%ebp),%eax
0835e89e +0x656c:  add    $0xa800,%eax
0835e8a3 +0x6571:  mov    %eax,(%esp)
0835e8a6 +0x6574:  call   08a5ce28 <_ZN27PvPSkillTreeParameterScript24load_pvp_skill_tree_listEv>  ; PvPSkillTreeParameterScript::load_pvp_skill_tree_list()
0835e8ab +0x6579:  xor    $0x1,%eax
0835e8ae +0x657c:  test   %al,%al
0835e8b0 +0x657e:  je     0835e908 <+0x65d6>
0835e8b2 +0x6580:  movl   $0x1,0x14(%esp)
0835e8ba +0x6588:  movl   $0x1,0x10(%esp)
0835e8c2 +0x6590:  movl   $0x9,0xc(%esp)
0835e8ca +0x6598:  movl   $0x21dd,0x8(%esp)
0835e8d2 +0x65a0:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e8da +0x65a8:  lea    -0x18c(%ebp),%eax
0835e8e0 +0x65ae:  mov    %eax,(%esp)
0835e8e3 +0x65b1:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e8e8 +0x65b6:  movl   $"\t- Load load_pvp_skill_tree_list fail",0x4(%esp)
0835e8f0 +0x65be:  lea    -0x18c(%ebp),%eax
0835e8f6 +0x65c4:  mov    %eax,(%esp)
0835e8f9 +0x65c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e8fe +0x65cc:  mov    $0x0,%ebx
0835e903 +0x65d1:  jmp    0835f13c <+0x6e0a>
0835e908 +0x65d6:  mov    0x8(%ebp),%eax
0835e90b +0x65d9:  add    $0xa800,%eax
0835e910 +0x65de:  movl   $"Etc/PvPSkillPoint.etc",0x4(%esp)
0835e918 +0x65e6:  mov    %eax,(%esp)
0835e91b +0x65e9:  call   08a5e226 <_ZN27PvPSkillTreeParameterScript29importPairPvPSkillPointScriptEPKc>  ; PvPSkillTreeParameterScript::importPairPvPSkillPointScript(char const*)
0835e920 +0x65ee:  xor    $0x1,%eax
0835e923 +0x65f1:  test   %al,%al
0835e925 +0x65f3:  je     0835e97d <+0x664b>
0835e927 +0x65f5:  movl   $0x1,0x14(%esp)
0835e92f +0x65fd:  movl   $0x1,0x10(%esp)
0835e937 +0x6605:  movl   $0x9,0xc(%esp)
0835e93f +0x660d:  movl   $0x21e3,0x8(%esp)
0835e947 +0x6615:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e94f +0x661d:  lea    -0x17c(%ebp),%eax
0835e955 +0x6623:  mov    %eax,(%esp)
0835e958 +0x6626:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e95d +0x662b:  movl   $"\t- Load PairPvPSkillPointScript fail",0x4(%esp)
0835e965 +0x6633:  lea    -0x17c(%ebp),%eax
0835e96b +0x6639:  mov    %eax,(%esp)
0835e96e +0x663c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e973 +0x6641:  mov    $0x0,%ebx
0835e978 +0x6646:  jmp    0835f13c <+0x6e0a>
0835e97d +0x664b:  mov    0x8(%ebp),%eax
0835e980 +0x664e:  mov    %eax,(%esp)
0835e983 +0x6651:  call   0835f1d6 <_ZN12CDataManager21initFairPVPSkillPointEv>  ; CDataManager::initFairPVPSkillPoint()
0835e988 +0x6656:  xor    $0x1,%eax
0835e98b +0x6659:  test   %al,%al
0835e98d +0x665b:  je     0835e9e5 <+0x66b3>
0835e98f +0x665d:  movl   $0x1,0x14(%esp)
0835e997 +0x6665:  movl   $0x1,0x10(%esp)
0835e99f +0x666d:  movl   $0x9,0xc(%esp)
0835e9a7 +0x6675:  movl   $0x21eb,0x8(%esp)
0835e9af +0x667d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835e9b7 +0x6685:  lea    -0x16c(%ebp),%eax
0835e9bd +0x668b:  mov    %eax,(%esp)
0835e9c0 +0x668e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835e9c5 +0x6693:  movl   $"\t- initFairPVPSkillPoint fail",0x4(%esp)
0835e9cd +0x669b:  lea    -0x16c(%ebp),%eax
0835e9d3 +0x66a1:  mov    %eax,(%esp)
0835e9d6 +0x66a4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835e9db +0x66a9:  mov    $0x0,%ebx
0835e9e0 +0x66ae:  jmp    0835f13c <+0x6e0a>
0835e9e5 +0x66b3:  movl   $0x5c,(%esp)
0835e9ec +0x66ba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0835e9f1 +0x66bf:  mov    %eax,%ebx
0835e9f3 +0x66c1:  mov    %ebx,%eax
0835e9f5 +0x66c3:  mov    %eax,(%esp)
0835e9f8 +0x66c6:  call   0810b136 <_ZN13EventClassify15CEventScriptMngC1Ev>  ; EventClassify::CEventScriptMng::CEventScriptMng()
0835e9fd +0x66cb:  jmp    0835ea14 <+0x66e2>
0835e9ff +0x66cd:  mov    %edx,%esi
0835ea01 +0x66cf:  mov    %eax,%edi
0835ea03 +0x66d1:  mov    %ebx,(%esp)
0835ea06 +0x66d4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0835ea0b +0x66d9:  mov    %edi,%eax
0835ea0d +0x66db:  mov    %esi,%edx
0835ea0f +0x66dd:  jmp    0835f124 <+0x6df2>
0835ea14 +0x66e2:  mov    %ebx,%edx
0835ea16 +0x66e4:  mov    0x8(%ebp),%eax
0835ea19 +0x66e7:  mov    %edx,0xb504(%eax)
0835ea1f +0x66ed:  movl   $0x0,0x14(%esp)
0835ea27 +0x66f5:  movl   $0x1,0x10(%esp)
0835ea2f +0x66fd:  movl   $0x9,0xc(%esp)
0835ea37 +0x6705:  movl   $0x221d,0x8(%esp)
0835ea3f +0x670d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ea47 +0x6715:  lea    -0x15c(%ebp),%eax
0835ea4d +0x671b:  mov    %eax,(%esp)
0835ea50 +0x671e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ea55 +0x6723:  movl   $"\t- Loading Ingame Event Script List ",0x4(%esp)
0835ea5d +0x672b:  lea    -0x15c(%ebp),%eax
0835ea63 +0x6731:  mov    %eax,(%esp)
0835ea66 +0x6734:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ea6b +0x6739:  mov    0x8(%ebp),%eax
0835ea6e +0x673c:  mov    0xb504(%eax),%eax
0835ea74 +0x6742:  movl   $"Event/InGameEventList.evt",0x4(%esp)
0835ea7c +0x674a:  mov    %eax,(%esp)
0835ea7f +0x674d:  call   0897eb59 <_Z25importInGameEventInfoListP19InGameEventInfoListPKc>  ; importInGameEventInfoList(InGameEventInfoList*, char const*)
0835ea84 +0x6752:  xor    $0x1,%eax
0835ea87 +0x6755:  test   %al,%al
0835ea89 +0x6757:  je     0835eae1 <+0x67af>
0835ea8b +0x6759:  movl   $0x1,0x14(%esp)
0835ea93 +0x6761:  movl   $0x1,0x10(%esp)
0835ea9b +0x6769:  movl   $0x9,0xc(%esp)
0835eaa3 +0x6771:  movl   $0x2224,0x8(%esp)
0835eaab +0x6779:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835eab3 +0x6781:  lea    -0x14c(%ebp),%eax
0835eab9 +0x6787:  mov    %eax,(%esp)
0835eabc +0x678a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835eac1 +0x678f:  movl   $"\t- Fail load ingame_event_script_list",0x4(%esp)
0835eac9 +0x6797:  lea    -0x14c(%ebp),%eax
0835eacf +0x679d:  mov    %eax,(%esp)
0835ead2 +0x67a0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ead7 +0x67a5:  mov    $0x0,%ebx
0835eadc +0x67aa:  jmp    0835f13c <+0x6e0a>
0835eae1 +0x67af:  movl   $0x1,0x14(%esp)
0835eae9 +0x67b7:  movl   $0x0,0x10(%esp)
0835eaf1 +0x67bf:  movl   $0x9,0xc(%esp)
0835eaf9 +0x67c7:  movl   $0x2228,0x8(%esp)
0835eb01 +0x67cf:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835eb09 +0x67d7:  lea    -0x13c(%ebp),%eax
0835eb0f +0x67dd:  mov    %eax,(%esp)
0835eb12 +0x67e0:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835eb17 +0x67e5:  movl   $"Success",0x4(%esp)
0835eb1f +0x67ed:  lea    -0x13c(%ebp),%eax
0835eb25 +0x67f3:  mov    %eax,(%esp)
0835eb28 +0x67f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835eb2d +0x67fb:  mov    0x8(%ebp),%eax
0835eb30 +0x67fe:  mov    0xb504(%eax),%eax
0835eb36 +0x6804:  mov    %eax,%edx
0835eb38 +0x6806:  mov    0x8(%ebp),%eax
0835eb3b +0x6809:  mov    0xb504(%eax),%eax
0835eb41 +0x680f:  mov    %edx,0x4(%esp)
0835eb45 +0x6813:  mov    %eax,(%esp)
0835eb48 +0x6816:  call   0810ba7a <_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList>  ; EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList&)
0835eb4d +0x681b:  xor    $0x1,%eax
0835eb50 +0x681e:  test   %al,%al
0835eb52 +0x6820:  je     0835eb5e <+0x682c>
0835eb54 +0x6822:  mov    $0x0,%ebx
0835eb59 +0x6827:  jmp    0835f13c <+0x6e0a>
0835eb5e +0x682c:  movl   $0x0,0x14(%esp)
0835eb66 +0x6834:  movl   $0x1,0x10(%esp)
0835eb6e +0x683c:  movl   $0x9,0xc(%esp)
0835eb76 +0x6844:  movl   $0x2231,0x8(%esp)
0835eb7e +0x684c:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835eb86 +0x6854:  lea    -0x12c(%ebp),%eax
0835eb8c +0x685a:  mov    %eax,(%esp)
0835eb8f +0x685d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835eb94 +0x6862:  movl   $"\t- Loading Event Avatar List ",0x4(%esp)
0835eb9c +0x686a:  lea    -0x12c(%ebp),%eax
0835eba2 +0x6870:  mov    %eax,(%esp)
0835eba5 +0x6873:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ebaa +0x6878:  mov    0x8(%ebp),%eax
0835ebad +0x687b:  add    $0xb508,%eax
0835ebb2 +0x6880:  movl   $"Event/EventAvatarList.evt",0x4(%esp)
0835ebba +0x6888:  mov    %eax,(%esp)
0835ebbd +0x688b:  call   0895e1ed <_Z27importEventAvatarListScriptP21EventAvatarListScriptPKc>  ; importEventAvatarListScript(EventAvatarListScript*, char const*)
0835ebc2 +0x6890:  xor    $0x1,%eax
0835ebc5 +0x6893:  test   %al,%al
0835ebc7 +0x6895:  je     0835ec1f <+0x68ed>
0835ebc9 +0x6897:  movl   $0x1,0x14(%esp)
0835ebd1 +0x689f:  movl   $0x1,0x10(%esp)
0835ebd9 +0x68a7:  movl   $0x9,0xc(%esp)
0835ebe1 +0x68af:  movl   $0x223d,0x8(%esp)
0835ebe9 +0x68b7:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ebf1 +0x68bf:  lea    -0x11c(%ebp),%eax
0835ebf7 +0x68c5:  mov    %eax,(%esp)
0835ebfa +0x68c8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ebff +0x68cd:  movl   $"\t- Fail Loading Event Avatar List",0x4(%esp)
0835ec07 +0x68d5:  lea    -0x11c(%ebp),%eax
0835ec0d +0x68db:  mov    %eax,(%esp)
0835ec10 +0x68de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ec15 +0x68e3:  mov    $0x0,%ebx
0835ec1a +0x68e8:  jmp    0835f13c <+0x6e0a>
0835ec1f +0x68ed:  movl   $0x1,0x14(%esp)
0835ec27 +0x68f5:  movl   $0x0,0x10(%esp)
0835ec2f +0x68fd:  movl   $0x9,0xc(%esp)
0835ec37 +0x6905:  movl   $0x2240,0x8(%esp)
0835ec3f +0x690d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ec47 +0x6915:  lea    -0x10c(%ebp),%eax
0835ec4d +0x691b:  mov    %eax,(%esp)
0835ec50 +0x691e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ec55 +0x6923:  movl   $"Success",0x4(%esp)
0835ec5d +0x692b:  lea    -0x10c(%ebp),%eax
0835ec63 +0x6931:  mov    %eax,(%esp)
0835ec66 +0x6934:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ec6b +0x6939:  movl   $0x0,0x14(%esp)
0835ec73 +0x6941:  movl   $0x1,0x10(%esp)
0835ec7b +0x6949:  movl   $0x9,0xc(%esp)
0835ec83 +0x6951:  movl   $0x2244,0x8(%esp)
0835ec8b +0x6959:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ec93 +0x6961:  lea    -0xfc(%ebp),%eax
0835ec99 +0x6967:  mov    %eax,(%esp)
0835ec9c +0x696a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835eca1 +0x696f:  movl   $"\t- Loading Event Etc Info ",0x4(%esp)
0835eca9 +0x6977:  lea    -0xfc(%ebp),%eax
0835ecaf +0x697d:  mov    %eax,(%esp)
0835ecb2 +0x6980:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ecb7 +0x6985:  mov    0x8(%ebp),%eax
0835ecba +0x6988:  add    $0xb520,%eax
0835ecbf +0x698d:  movl   $"Event/EventEtc.evt",0x4(%esp)
0835ecc7 +0x6995:  mov    %eax,(%esp)
0835ecca +0x6998:  call   0895e30f <_Z20importEventEtcScriptP14EventEtcScriptPKc>  ; importEventEtcScript(EventEtcScript*, char const*)
0835eccf +0x699d:  xor    $0x1,%eax
0835ecd2 +0x69a0:  test   %al,%al
0835ecd4 +0x69a2:  je     0835ed2c <+0x69fa>
0835ecd6 +0x69a4:  movl   $0x1,0x14(%esp)
0835ecde +0x69ac:  movl   $0x1,0x10(%esp)
0835ece6 +0x69b4:  movl   $0x9,0xc(%esp)
0835ecee +0x69bc:  movl   $0x224e,0x8(%esp)
0835ecf6 +0x69c4:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ecfe +0x69cc:  lea    -0xec(%ebp),%eax
0835ed04 +0x69d2:  mov    %eax,(%esp)
0835ed07 +0x69d5:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ed0c +0x69da:  movl   $"\t- Fail Loading Event Etc Info",0x4(%esp)
0835ed14 +0x69e2:  lea    -0xec(%ebp),%eax
0835ed1a +0x69e8:  mov    %eax,(%esp)
0835ed1d +0x69eb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ed22 +0x69f0:  mov    $0x0,%ebx
0835ed27 +0x69f5:  jmp    0835f13c <+0x6e0a>
0835ed2c +0x69fa:  movl   $0x1,0x14(%esp)
0835ed34 +0x6a02:  movl   $0x0,0x10(%esp)
0835ed3c +0x6a0a:  movl   $0x9,0xc(%esp)
0835ed44 +0x6a12:  movl   $0x2252,0x8(%esp)
0835ed4c +0x6a1a:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ed54 +0x6a22:  lea    -0xdc(%ebp),%eax
0835ed5a +0x6a28:  mov    %eax,(%esp)
0835ed5d +0x6a2b:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ed62 +0x6a30:  movl   $"Success",0x4(%esp)
0835ed6a +0x6a38:  lea    -0xdc(%ebp),%eax
0835ed70 +0x6a3e:  mov    %eax,(%esp)
0835ed73 +0x6a41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ed78 +0x6a46:  mov    0x8(%ebp),%eax
0835ed7b +0x6a49:  add    $0x8740,%eax
0835ed80 +0x6a4e:  mov    %eax,(%esp)
0835ed83 +0x6a51:  call   088d444f <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE>  ; AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*)
0835ed88 +0x6a56:  xor    $0x1,%eax
0835ed8b +0x6a59:  test   %al,%al
0835ed8d +0x6a5b:  je     0835ede5 <+0x6ab3>
0835ed8f +0x6a5d:  movl   $0x1,0x14(%esp)
0835ed97 +0x6a65:  movl   $0x1,0x10(%esp)
0835ed9f +0x6a6d:  movl   $0x9,0xc(%esp)
0835eda7 +0x6a75:  movl   $0x227b,0x8(%esp)
0835edaf +0x6a7d:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835edb7 +0x6a85:  lea    -0xcc(%ebp),%eax
0835edbd +0x6a8b:  mov    %eax,(%esp)
0835edc0 +0x6a8e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835edc5 +0x6a93:  movl   $"\t- Loading importAvatarColorVariation  Fail",0x4(%esp)
0835edcd +0x6a9b:  lea    -0xcc(%ebp),%eax
0835edd3 +0x6aa1:  mov    %eax,(%esp)
0835edd6 +0x6aa4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835eddb +0x6aa9:  mov    $0x0,%ebx
0835ede0 +0x6aae:  jmp    0835f13c <+0x6e0a>
0835ede5 +0x6ab3:  movl   $0x0,0x14(%esp)
0835eded +0x6abb:  movl   $0x1,0x10(%esp)
0835edf5 +0x6ac3:  movl   $0x9,0xc(%esp)
0835edfd +0x6acb:  movl   $0x229b,0x8(%esp)
0835ee05 +0x6ad3:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ee0d +0x6adb:  lea    -0xbc(%ebp),%eax
0835ee13 +0x6ae1:  mov    %eax,(%esp)
0835ee16 +0x6ae4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ee1b +0x6ae9:  movl   $"\t- Loading Mercenary System ",0x4(%esp)
0835ee23 +0x6af1:  lea    -0xbc(%ebp),%eax
0835ee29 +0x6af7:  mov    %eax,(%esp)
0835ee2c +0x6afa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ee31 +0x6aff:  movl   $0x0,-0x2c(%ebp)
0835ee38 +0x6b06:  mov    0x8(%ebp),%eax
0835ee3b +0x6b09:  add    $0xa8dc,%eax
0835ee40 +0x6b0e:  mov    %eax,0x4(%esp)
0835ee44 +0x6b12:  movl   $"Etc/mercenary.etc",(%esp)
0835ee4b +0x6b19:  call   089f6c50 <_Z30importMercenarySystemEtcScriptPKcP21stMercenarySystemInfo>  ; importMercenarySystemEtcScript(char const*, stMercenarySystemInfo*)
0835ee50 +0x6b1e:  mov    %eax,-0x2c(%ebp)
0835ee53 +0x6b21:  cmpl   $0x0,-0x2c(%ebp)
0835ee57 +0x6b25:  je     0835eeb6 <+0x6b84>
0835ee59 +0x6b27:  movl   $0x1,0x14(%esp)
0835ee61 +0x6b2f:  movl   $0x1,0x10(%esp)
0835ee69 +0x6b37:  movl   $0x9,0xc(%esp)
0835ee71 +0x6b3f:  movl   $0x22a0,0x8(%esp)
0835ee79 +0x6b47:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ee81 +0x6b4f:  lea    -0xac(%ebp),%eax
0835ee87 +0x6b55:  mov    %eax,(%esp)
0835ee8a +0x6b58:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ee8f +0x6b5d:  mov    -0x2c(%ebp),%eax
0835ee92 +0x6b60:  mov    %eax,0x8(%esp)
0835ee96 +0x6b64:  movl   $"\t- Loading Mercenary System Fail - %d line \n",0x4(%esp)
0835ee9e +0x6b6c:  lea    -0xac(%ebp),%eax
0835eea4 +0x6b72:  mov    %eax,(%esp)
0835eea7 +0x6b75:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835eeac +0x6b7a:  mov    $0x0,%ebx
0835eeb1 +0x6b7f:  jmp    0835f13c <+0x6e0a>
0835eeb6 +0x6b84:  movl   $0x1,0x14(%esp)
0835eebe +0x6b8c:  movl   $0x0,0x10(%esp)
0835eec6 +0x6b94:  movl   $0x9,0xc(%esp)
0835eece +0x6b9c:  movl   $0x22a3,0x8(%esp)
0835eed6 +0x6ba4:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835eede +0x6bac:  lea    -0x9c(%ebp),%eax
0835eee4 +0x6bb2:  mov    %eax,(%esp)
0835eee7 +0x6bb5:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835eeec +0x6bba:  movl   $"Success",0x4(%esp)
0835eef4 +0x6bc2:  lea    -0x9c(%ebp),%eax
0835eefa +0x6bc8:  mov    %eax,(%esp)
0835eefd +0x6bcb:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ef02 +0x6bd0:  call   081b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>  ; NeedMaterialDataManager::getInstance()
0835ef07 +0x6bd5:  mov    0x8(%ebp),%eax
0835ef0a +0x6bd8:  add    $0x4af4,%eax
0835ef0f +0x6bdd:  mov    %eax,0x4(%esp)
0835ef13 +0x6be1:  movl   $"Etc/PcBangRentalService.etc",(%esp)
0835ef1a +0x6be8:  call   08915606 <_Z27importPcBangEquipmentRendarPKcP20PcBangItemRentarData>  ; importPcBangEquipmentRendar(char const*, PcBangItemRentarData*)
0835ef1f +0x6bed:  xor    $0x1,%eax
0835ef22 +0x6bf0:  test   %al,%al
0835ef24 +0x6bf2:  je     0835ef7c <+0x6c4a>
0835ef26 +0x6bf4:  movl   $0x1,0x14(%esp)
0835ef2e +0x6bfc:  movl   $0x1,0x10(%esp)
0835ef36 +0x6c04:  movl   $0x9,0xc(%esp)
0835ef3e +0x6c0c:  movl   $0x2304,0x8(%esp)
0835ef46 +0x6c14:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835ef4e +0x6c1c:  lea    -0x8c(%ebp),%eax
0835ef54 +0x6c22:  mov    %eax,(%esp)
0835ef57 +0x6c25:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835ef5c +0x6c2a:  movl   $"\t- PcBangRentalService Fail!\n",0x4(%esp)
0835ef64 +0x6c32:  lea    -0x8c(%ebp),%eax
0835ef6a +0x6c38:  mov    %eax,(%esp)
0835ef6d +0x6c3b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835ef72 +0x6c40:  mov    $0x0,%ebx
0835ef77 +0x6c45:  jmp    0835f13c <+0x6e0a>
0835ef7c +0x6c4a:  mov    0x8(%ebp),%eax
0835ef7f +0x6c4d:  add    $0x4b18,%eax
0835ef84 +0x6c52:  mov    %eax,0x4(%esp)
0835ef88 +0x6c56:  movl   $"Event/DimensionActivationEvent.evt",(%esp)
0835ef8f +0x6c5d:  call   089160f0 <_Z29importDimensionActivationDataPKcP23DimensionActivationData>  ; importDimensionActivationData(char const*, DimensionActivationData*)
0835ef94 +0x6c62:  xor    $0x1,%eax
0835ef97 +0x6c65:  test   %al,%al
0835ef99 +0x6c67:  je     0835efeb <+0x6cb9>
0835ef9b +0x6c69:  movl   $0x1,0x14(%esp)
0835efa3 +0x6c71:  movl   $0x1,0x10(%esp)
0835efab +0x6c79:  movl   $0x9,0xc(%esp)
0835efb3 +0x6c81:  movl   $0x230b,0x8(%esp)
0835efbb +0x6c89:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835efc3 +0x6c91:  lea    -0x7c(%ebp),%eax
0835efc6 +0x6c94:  mov    %eax,(%esp)
0835efc9 +0x6c97:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835efce +0x6c9c:  movl   $"\t- DimensionActivationEvent Fail!\n",0x4(%esp)
0835efd6 +0x6ca4:  lea    -0x7c(%ebp),%eax
0835efd9 +0x6ca7:  mov    %eax,(%esp)
0835efdc +0x6caa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835efe1 +0x6caf:  mov    $0x0,%ebx
0835efe6 +0x6cb4:  jmp    0835f13c <+0x6e0a>
0835efeb +0x6cb9:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
0835eff0 +0x6cbe:  mov    %eax,(%esp)
0835eff3 +0x6cc1:  call   082701dc <_ZN20InstanceRentalSystem5ReadyEv>  ; InstanceRentalSystem::Ready()
0835eff8 +0x6cc6:  xor    $0x1,%eax
0835effb +0x6cc9:  test   %al,%al
0835effd +0x6ccb:  je     0835f02d <+0x6cfb>
0835efff +0x6ccd:  movl   $"[GlobalData::Init] The rental system is not ready!",0x4(%esp)
0835f007 +0x6cd5:  movl   $&_ZSt4cerr,(%esp)
0835f00e +0x6cdc:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0835f013 +0x6ce1:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0835f01b +0x6ce9:  mov    %eax,(%esp)
0835f01e +0x6cec:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0835f023 +0x6cf1:  mov    $0x0,%ebx
0835f028 +0x6cf6:  jmp    0835f13c <+0x6e0a>
0835f02d +0x6cfb:  movl   $0x0,0x14(%esp)
0835f035 +0x6d03:  movl   $0x1,0x10(%esp)
0835f03d +0x6d0b:  movl   $0x9,0xc(%esp)
0835f045 +0x6d13:  movl   $0x2331,0x8(%esp)
0835f04d +0x6d1b:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835f055 +0x6d23:  lea    -0x6c(%ebp),%eax
0835f058 +0x6d26:  mov    %eax,(%esp)
0835f05b +0x6d29:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835f060 +0x6d2e:  movl   $"\t- Load Delete Invalid Item Script",0x4(%esp)
0835f068 +0x6d36:  lea    -0x6c(%ebp),%eax
0835f06b +0x6d39:  mov    %eax,(%esp)
0835f06e +0x6d3c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835f073 +0x6d41:  mov    0x8(%ebp),%eax
0835f076 +0x6d44:  add    $0xb658,%eax
0835f07b +0x6d49:  mov    %eax,(%esp)
0835f07e +0x6d4c:  call   08ac1e60 <_ZN23DeleteInvalidItemScript10loadScriptEv>  ; DeleteInvalidItemScript::loadScript()
0835f083 +0x6d51:  xor    $0x1,%eax
0835f086 +0x6d54:  test   %al,%al
0835f088 +0x6d56:  je     0835f0d7 <+0x6da5>
0835f08a +0x6d58:  movl   $0x1,0x14(%esp)
0835f092 +0x6d60:  movl   $0x1,0x10(%esp)
0835f09a +0x6d68:  movl   $0x9,0xc(%esp)
0835f0a2 +0x6d70:  movl   $0x2334,0x8(%esp)
0835f0aa +0x6d78:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835f0b2 +0x6d80:  lea    -0x5c(%ebp),%eax
0835f0b5 +0x6d83:  mov    %eax,(%esp)
0835f0b8 +0x6d86:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835f0bd +0x6d8b:  movl   $"\t- Load Delete Invalid Item Script Fail",0x4(%esp)
0835f0c5 +0x6d93:  lea    -0x5c(%ebp),%eax
0835f0c8 +0x6d96:  mov    %eax,(%esp)
0835f0cb +0x6d99:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835f0d0 +0x6d9e:  mov    $0x0,%ebx
0835f0d5 +0x6da3:  jmp    0835f13c <+0x6e0a>
0835f0d7 +0x6da5:  movl   $0x1,0x14(%esp)
0835f0df +0x6dad:  movl   $0x0,0x10(%esp)
0835f0e7 +0x6db5:  movl   $0x9,0xc(%esp)
0835f0ef +0x6dbd:  movl   $0x2337,0x8(%esp)
0835f0f7 +0x6dc5:  movl   $&_ZZN12CDataManager4initEvE19__PRETTY_FUNCTION__,0x4(%esp)
0835f0ff +0x6dcd:  lea    -0x4c(%ebp),%eax
0835f102 +0x6dd0:  mov    %eax,(%esp)
0835f105 +0x6dd3:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0835f10a +0x6dd8:  movl   $"Success",0x4(%esp)
0835f112 +0x6de0:  lea    -0x4c(%ebp),%eax
0835f115 +0x6de3:  mov    %eax,(%esp)
0835f118 +0x6de6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0835f11d +0x6deb:  mov    $0x1,%ebx
0835f122 +0x6df0:  jmp    0835f13c <+0x6e0a>
0835f124 +0x6df2:  mov    %edx,%ebx
0835f126 +0x6df4:  mov    %eax,%esi
0835f128 +0x6df6:  lea    -0x107c(%ebp),%eax
0835f12e +0x6dfc:  mov    %eax,(%esp)
0835f131 +0x6dff:  call   0837e484 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdf24>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdf24
0835f136 +0x6e04:  mov    %esi,%eax
0835f138 +0x6e06:  mov    %ebx,%edx
0835f13a +0x6e08:  jmp    0835f14c <+0x6e1a>
0835f13c +0x6e0a:  lea    -0x107c(%ebp),%eax
0835f142 +0x6e10:  mov    %eax,(%esp)
0835f145 +0x6e13:  call   0837e484 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdf24>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdf24
0835f14a +0x6e18:  jmp    0835f164 <+0x6e32>
0835f14c +0x6e1a:  mov    %edx,%ebx
0835f14e +0x6e1c:  mov    %eax,%esi
0835f150 +0x6e1e:  lea    -0xf35(%ebp),%eax
0835f156 +0x6e24:  mov    %eax,(%esp)
0835f159 +0x6e27:  call   08234890 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f3a
0835f15e +0x6e2c:  mov    %esi,%eax
0835f160 +0x6e2e:  mov    %ebx,%edx
0835f162 +0x6e30:  jmp    0835f174 <+0x6e42>
0835f164 +0x6e32:  lea    -0xf35(%ebp),%eax
0835f16a +0x6e38:  mov    %eax,(%esp)
0835f16d +0x6e3b:  call   08234890 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9f3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9f3a
0835f172 +0x6e40:  jmp    0835f18c <+0x6e5a>
0835f174 +0x6e42:  mov    %edx,%ebx
0835f176 +0x6e44:  mov    %eax,%esi
0835f178 +0x6e46:  lea    -0xf34(%ebp),%eax
0835f17e +0x6e4c:  mov    %eax,(%esp)
0835f181 +0x6e4f:  call   08392e54 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x228f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x228f4
0835f186 +0x6e54:  mov    %esi,%eax
0835f188 +0x6e56:  mov    %ebx,%edx
0835f18a +0x6e58:  jmp    0835f19c <+0x6e6a>
0835f18c +0x6e5a:  lea    -0xf34(%ebp),%eax
0835f192 +0x6e60:  mov    %eax,(%esp)
0835f195 +0x6e63:  call   08392e54 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x228f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x228f4
0835f19a +0x6e68:  jmp    0835f1ba <+0x6e88>
0835f19c +0x6e6a:  mov    %edx,%ebx
0835f19e +0x6e6c:  mov    %eax,%esi
0835f1a0 +0x6e6e:  lea    -0xf28(%ebp),%eax
0835f1a6 +0x6e74:  mov    %eax,(%esp)
0835f1a9 +0x6e77:  call   081272a8 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x31>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x31
0835f1ae +0x6e7c:  mov    %esi,%eax
0835f1b0 +0x6e7e:  mov    %ebx,%edx
0835f1b2 +0x6e80:  mov    %eax,(%esp)
0835f1b5 +0x6e83:  call   08ae3750 <_Unwind_Resume>
0835f1ba +0x6e88:  lea    -0xf28(%ebp),%eax
0835f1c0 +0x6e8e:  mov    %eax,(%esp)
0835f1c3 +0x6e91:  call   081272a8 <_GLOBAL__I__ZN21CDailyScheduleManagerC2Ev+0x31>  ; global constructors keyed to CDailyScheduleManager::CDailyScheduleManager()+0x31
0835f1c8 +0x6e96:  mov    %ebx,%eax
0835f1ca +0x6e98:  lea    -0xc(%ebp),%esp
0835f1cd +0x6e9b:  add    $0x0,%esp
0835f1d0 +0x6e9e:  pop    %ebx
0835f1d1 +0x6e9f:  pop    %esi
0835f1d2 +0x6ea0:  pop    %edi
0835f1d3 +0x6ea1:  pop    %ebp
0835f1d4 +0x6ea2:  ret
0835f1d5 +0x6ea3:  nop
```

## 反编译 C

```c
// CDataManager::init @ 0x8358332

/* CDataManager::init() */

undefined4 __thiscall CDataManager::init(CDataManager *this)

{
  char cVar1;
  bool bVar2;
  string *this_00;
  int iVar3;
  uint uVar4;
  CDataManager *this_01;
  char *pcVar5;
  char *pcVar6;
  CSyncScript *pCVar7;
  CExpertJobList *this_02;
  stHellParty_t *psVar8;
  map *pmVar9;
  CActionPointEtcParameter *pCVar10;
  int iVar11;
  CAssaultMgr *this_03;
  SlangFilter *this_04;
  CAICharacterList *this_05;
  CGameManager *this_06;
  CQuickPartyRewardManager *this_07;
  CItemShop *this_08;
  PvP_MissionSystem *this_09;
  CCompound_ExtreamDun_Item *this_10;
  Event_Upgrade_Jar *this_11;
  CCompoundAvatar *this_12;
  CDungeonList *this_13;
  TowerOfDespairMgr *this_14;
  CChattingEmoticonList *this_15;
  CMapList *this_16;
  CMonsterManager *this_17;
  CSkillList *this_18;
  CItemList *this_19;
  AvatarRouletteServer *this_20;
  QuestList *this_21;
  CCharacList *this_22;
  DisJoint *this_23;
  CItemGeneratorMgr *this_24;
  CAutoMarketConditionsControl *this_25;
  CItemUpgrade *this_26;
  CItemUpgrade_Separate *this_27;
  CCreatureScriptMgr *this_28;
  CNPCScriptList *this_29;
  CNPCDynamicInfoManager *this_30;
  CItemLimitEditionMgr *this_31;
  STEquipmentPartSetPiece *pSVar12;
  int *piVar13;
  uint *puVar14;
  CEventScriptMng *this_32;
  ostream *this_33;
  undefined4 uVar15;
  STEquipmentScript local_1914 [172];
  string asStack_1868 [276];
  EquipmentParameterInfo aEStack_1754 [1748];
  AvatarRoulette local_1080 [284];
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  local_f64 [4];
  __normal_iterator<STEquipmentPartSetPiece*,std::vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>>
  local_f60 [4];
  map<int,STEquipmentPartSetData,std::less<int>,std::allocator<std::pair<int_const,STEquipmentPartSetData>>>
  local_f5c [4];
  char *local_f58 [7];
  SDCActiveStatusSyncServer local_f39;
  vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>> local_f38 [12];
  vector<_DailySchedule,std::allocator<_DailySchedule>> local_f2c [12];
  uint local_f20;
  uint local_f1c;
  uint local_f18;
  int local_f14;
  uint local_f10;
  cMyTrace local_f0c [16];
  cMyTrace local_efc [16];
  cMyTrace local_eec [16];
  cMyTrace local_edc [16];
  cMyTrace local_ecc [16];
  cMyTrace local_ebc [16];
  cMyTrace local_eac [16];
  cMyTrace local_e9c [16];
  cMyTrace local_e8c [16];
  cMyTrace local_e7c [16];
  cMyTrace local_e6c [16];
  cMyTrace local_e5c [16];
  cMyTrace local_e4c [16];
  cMyTrace local_e3c [16];
  cMyTrace local_e2c [16];
  cMyTrace local_e1c [16];
  cMyTrace local_e0c [16];
  cMyTrace local_dfc [16];
  cMyTrace local_dec [16];
  cMyTrace local_ddc [16];
  cMyTrace local_dcc [16];
  cMyTrace local_dbc [16];
  cMyTrace local_dac [16];
  cMyTrace local_d9c [16];
  cMyTrace local_d8c [16];
  cMyTrace local_d7c [16];
  cMyTrace local_d6c [16];
  cMyTrace local_d5c [16];
  cMyTrace local_d4c [16];
  cMyTrace local_d3c [16];
  cMyTrace local_d2c [16];
  cMyTrace local_d1c [16];
  cMyTrace local_d0c [16];
  cMyTrace local_cfc [16];
  cMyTrace local_cec [16];
  cMyTrace local_cdc [16];
  cMyTrace local_ccc [16];
  cMyTrace local_cbc [16];
  cMyTrace local_cac [16];
  cMyTrace local_c9c [16];
  cMyTrace local_c8c [16];
  cMyTrace local_c7c [16];
  cMyTrace local_c6c [16];
  cMyTrace local_c5c [16];
  cMyTrace local_c4c [32];
  cMyTrace local_c2c [16];
  cMyTrace local_c1c [16];
  cMyTrace local_c0c [16];
  cMyTrace local_bfc [16];
  cMyTrace local_bec [16];
  cMyTrace local_bdc [16];
  cMyTrace local_bcc [16];
  cMyTrace local_bbc [16];
  cMyTrace local_bac [16];
  cMyTrace local_b9c [16];
  cMyTrace local_b8c [16];
  cMyTrace local_b7c [16];
  cMyTrace local_b6c [16];
  cMyTrace local_b5c [16];
  cMyTrace local_b4c [16];
  cMyTrace local_b3c [16];
  cMyTrace local_b2c [16];
  cMyTrace local_b1c [16];
  cMyTrace local_b0c [16];
  cMyTrace local_afc [16];
  cMyTrace local_aec [16];
  cMyTrace local_adc [16];
  cMyTrace local_acc [16];
  cMyTrace local_abc [16];
  cMyTrace local_aac [16];
  cMyTrace local_a9c [16];
  cMyTrace local_a8c [16];
  cMyTrace local_a7c [16];
  cMyTrace local_a6c [16];
  cMyTrace local_a5c [16];
  cMyTrace local_a4c [16];
  cMyTrace local_a3c [16];
  cMyTrace local_a2c [16];
  cMyTrace local_a1c [16];
  cMyTrace local_a0c [16];
  cMyTrace local_9fc [16];
  cMyTrace local_9ec [16];
  cMyTrace local_9dc [16];
  cMyTrace local_9cc [16];
  cMyTrace local_9bc [16];
  cMyTrace local_9ac [16];
  cMyTrace local_99c [16];
  cMyTrace local_98c [16];
  cMyTrace local_97c [16];
  cMyTrace local_96c [16];
  cMyTrace local_95c [16];
  cMyTrace local_94c [16];
  cMyTrace local_93c [16];
  cMyTrace local_92c [16];
  cMyTrace local_91c [16];
  cMyTrace local_90c [16];
  cMyTrace local_8fc [16];
  cMyTrace local_8ec [16];
  cMyTrace local_8dc [16];
  cMyTrace local_8cc [16];
  cMyTrace local_8bc [16];
  cMyTrace local_8ac [16];
  cMyTrace local_89c [16];
  cMyTrace local_88c [16];
  cMyTrace local_87c [16];
  cMyTrace local_86c [16];
  cMyTrace local_85c [16];
  cMyTrace local_84c [16];
  cMyTrace local_83c [16];
  cMyTrace local_82c [16];
  cMyTrace local_81c [16];
  cMyTrace local_80c [16];
  cMyTrace local_7fc [16];
  cMyTrace local_7ec [16];
  cMyTrace local_7dc [16];
  cMyTrace local_7cc [16];
  cMyTrace local_7bc [16];
  cMyTrace local_7ac [16];
  cMyTrace local_79c [16];
  cMyTrace local_78c [16];
  cMyTrace local_77c [16];
  cMyTrace local_76c [16];
  cMyTrace local_75c [16];
  cMyTrace local_74c [16];
  cMyTrace local_73c [16];
  cMyTrace local_72c [16];
  cMyTrace local_71c [16];
  cMyTrace local_70c [16];
  cMyTrace local_6fc [16];
  cMyTrace local_6ec [16];
  cMyTrace local_6dc [16];
  cMyTrace local_6cc [16];
  cMyTrace local_6bc [16];
  cMyTrace local_6ac [16];
  cMyTrace local_69c [16];
  cMyTrace local_68c [16];
  cMyTrace local_67c [16];
  cMyTrace local_66c [16];
  cMyTrace local_65c [16];
  cMyTrace local_64c [16];
  cMyTrace local_63c [16];
  cMyTrace local_62c [16];
  cMyTrace local_61c [16];
  cMyTrace local_60c [16];
  cMyTrace local_5fc [16];
  cMyTrace local_5ec [16];
  cMyTrace local_5dc [16];
  cMyTrace local_5cc [16];
  cMyTrace local_5bc [16];
  cMyTrace local_5ac [16];
  cMyTrace local_59c [16];
  cMyTrace local_58c [32];
  cMyTrace local_56c [16];
  cMyTrace local_55c [32];
  cMyTrace local_53c [16];
  cMyTrace local_52c [16];
  cMyTrace local_51c [16];
  cMyTrace local_50c [16];
  cMyTrace local_4fc [16];
  cMyTrace local_4ec [16];
  cMyTrace local_4dc [16];
  cMyTrace local_4cc [16];
  cMyTrace local_4bc [16];
  cMyTrace local_4ac [16];
  cMyTrace local_49c [16];
  cMyTrace local_48c [16];
  cMyTrace local_47c [16];
  cMyTrace local_46c [16];
  cMyTrace local_45c [16];
  cMyTrace local_44c [16];
  cMyTrace local_43c [16];
  cMyTrace local_42c [16];
  cMyTrace local_41c [16];
  cMyTrace local_40c [16];
  cMyTrace local_3fc [16];
  cMyTrace local_3ec [16];
  cMyTrace local_3dc [16];
  cMyTrace local_3cc [16];
  cMyTrace local_3bc [16];
  cMyTrace local_3ac [16];
  cMyTrace local_39c [16];
  cMyTrace local_38c [16];
  cMyTrace local_37c [16];
  cMyTrace local_36c [16];
  cMyTrace local_35c [16];
  cMyTrace local_34c [16];
  cMyTrace local_33c [16];
  cMyTrace local_32c [16];
  cMyTrace local_31c [16];
  cMyTrace local_30c [16];
  cMyTrace local_2fc [16];
  cMyTrace local_2ec [16];
  cMyTrace local_2dc [16];
  cMyTrace local_2cc [16];
  cMyTrace local_2bc [16];
  cMyTrace local_2ac [16];
  cMyTrace local_29c [16];
  cMyTrace local_28c [16];
  cMyTrace local_27c [16];
  cMyTrace local_26c [16];
  cMyTrace local_25c [16];
  cMyTrace local_24c [16];
  cMyTrace local_23c [16];
  cMyTrace local_22c [16];
  cMyTrace local_21c [16];
  cMyTrace local_20c [16];
  cMyTrace local_1fc [16];
  cMyTrace local_1ec [16];
  map<int,STEquipmentPartSetData,std::less<int>,std::allocator<std::pair<int_const,STEquipmentPartSetData>>>
  local_1dc [4];
  __normal_iterator local_1d8 [4];
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  local_1d4 [4];
  cMyTrace local_1d0 [16];
  cMyTrace local_1c0 [16];
  cMyTrace local_1b0 [16];
  cMyTrace local_1a0 [16];
  cMyTrace local_190 [16];
  cMyTrace local_180 [16];
  cMyTrace local_170 [16];
  cMyTrace local_160 [16];
  cMyTrace local_150 [16];
  cMyTrace local_140 [16];
  cMyTrace local_130 [16];
  cMyTrace local_120 [16];
  cMyTrace local_110 [16];
  cMyTrace local_100 [16];
  cMyTrace local_f0 [16];
  cMyTrace local_e0 [16];
  cMyTrace local_d0 [16];
  cMyTrace local_c0 [16];
  cMyTrace local_b0 [16];
  cMyTrace local_a0 [16];
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  local_2c = 0;
  while( true ) {
    iVar3 = G_CEnvironment();
    uVar4 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(iVar3 + 0x2fc));
    if (uVar4 <= local_2c) break;
    iVar3 = G_CEnvironment();
    this_00 = (string *)
              std::vector<std::string,std::allocator<std::string>>::operator[]
                        ((vector<std::string,std::allocator<std::string>> *)(iVar3 + 0x2fc),local_2c
                        );
    pcVar5 = (char *)std::string::c_str(this_00);
    SetPriorityBaseDirectory(pcVar5);
    local_2c = local_2c + 1;
  }
  this[0xa8d8] = (CDataManager)0x0;
  this_01 = (CDataManager *)G_CDataManager();
  pcVar5 = (char *)GetScriptPacks(this_01);
  iVar3 = G_CEnvironment();
  bVar2 = *(bool *)(iVar3 + 0x308);
  iVar3 = G_CEnvironment();
  pcVar6 = (char *)std::string::c_str((string *)(iVar3 + 0x2f8));
  InitRDARScript(pcVar6,bVar2,pcVar5,(int *)0x0);
  cVar1 = InitRDARScriptStringManager("n_String.lst",(char *)0x0,(vector *)0x0);
  if (cVar1 == '\x01') {
    cMyTrace::cMyTrace(local_efc,"bool CDataManager::init()",0x1975,9,true,true);
    cMyTrace::operator()(local_efc,"\t- InitRDARScriptStringManager Success");
    InitMapEquipmentAniScript();
    pCVar7 = (CSyncScript *)sync_script::GetInstanceSyncScript();
    cVar1 = sync_script::CSyncScript::LoadItemInfoMasterScript(pCVar7,"Etc/ItemTypeMaster.etc");
    if (cVar1 == '\x01') {
      pCVar7 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::truncate_item_info_master_table(pCVar7);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_edc,"bool CDataManager::init()",0x1986,9,true,true);
        cMyTrace::operator()(local_edc,"\t- Failed to < TRUNCATE ITEM INFO MASTER TABLE >");
      }
      pCVar7 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::insert_item_info_master_to_db(pCVar7);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_ecc,"bool CDataManager::init()",0x1989,9,true,true);
        cMyTrace::operator()(local_ecc,"\t- Failed to < INSERT ITEM INFO MASTER TO DB >");
      }
    }
    else {
      cMyTrace::cMyTrace(local_eec,"bool CDataManager::init()",0x1982,9,true,true);
      cMyTrace::operator()(local_eec,"\t- Failed to load < ITEM INFO MASTER SCRIPT >");
    }
    cVar1 = importOldEquipmentStatInfo("");
    if (cVar1 == '\x01') {
      pCVar7 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::truncate_old_equip_info_table(pCVar7);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_eac,"bool CDataManager::init()",0x1993,9,true,true);
        cMyTrace::operator()(local_eac,"\t- Failed to < TRUNCATE OLD EQUIP INFO TABLE >");
      }
      pCVar7 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::insert_old_equip_info_to_db(pCVar7);
      if (cVar1 != '\x01') {
        cMyTrace::cMyTrace(local_e9c,"bool CDataManager::init()",0x1996,9,true,true);
        cMyTrace::operator()(local_e9c,"\t- Failed to < INSERT OLD EQUIP INFO TO DB >");
      }
    }
    else {
      cMyTrace::cMyTrace(local_ebc,"bool CDataManager::init()",0x198f,9,true,true);
      cMyTrace::operator()(local_ebc,"\t- Failed to import < OldEquipmentStatInfo.dat >");
    }
    cVar1 = importServerParameterScript
                      ((ServerParameterScript *)(this + 0x68),"Etc/ServerParameter.etc");
    if (cVar1 == '\x01') {
      iVar3 = G_CEnvironment();
      if (*(int *)(iVar3 + 0x1a8) == 2) {
        memcpy(this + 0x3d0,this + 0x3e0,0x10);
      }
      cVar1 = importInGameAdvertisementEtcScript
                        ((InGameAdvertisementScript *)(this + 0x4a5c),
                         "Etc/IngameAdvertisementParameter.etc");
      if (cVar1 == '\x01') {
        cVar1 = importSeriaRoomDecoEvent
                          ((seriaRoomDecoEventScript *)(this + 0x4b70),
                           "Event/SeriaRoomDecoEvent.evt");
        if (cVar1 == '\x01') {
          cVar1 = importGrowthEquipmentScript
                            ((growthEquipmentScript *)(this + 0x4bac),"Event/GrowthWeapon.evt");
          if (cVar1 == '\x01') {
            cVar1 = importCharacterCreateGiftScript
                              ((createChracScript *)(this + 0x4bd4),"Event/CreateCharacterGift.evt")
            ;
            if (cVar1 == '\x01') {
              cVar1 = importUseJobFatigueGiftScript
                                ((useCharacterJobFatigue *)(this + 0x4bec),"Event/JobFatigue.evt");
              if (cVar1 == '\x01') {
                cVar1 = importCharacterCreateCreatureGiftScript
                                  ((CharacterCreateCreatureGiftScript *)(this + 0x4c04),
                                   "Event/CreateCharacterGiftCreature.evt");
                if (cVar1 == '\x01') {
                  cVar1 = importSeriaRoomAnimationDecoEvent
                                    ((seriaRoomDecoAniEventScript *)(this + 0x4c50),
                                     "Event/SeriaRoomDecoAnimation.evt");
                  if (cVar1 == '\x01') {
                    iVar3 = eventReward::importRewardTable
                                      ((eventReward *)(this + 0xb628),"Event/EventReward/",
                                       "reward.evt");
                    if (iVar3 == 0) {
                      iVar3 = G_CDataManager();
                      local_f20 = (uint)*(byte *)(iVar3 + 0x3bc);
                      iVar3 = G_CDataManager();
                      local_f1c = (uint)*(byte *)(iVar3 + 0x3bd);
                      iVar3 = G_CDataManager();
                      local_f18 = (uint)(byte)((ushort)((ushort)*(byte *)(iVar3 + 0x3be) * 0x29) >>
                                              0xc);
                      iVar3 = G_CDataManager();
                      local_f14 = (uint)*(byte *)(iVar3 + 0x3be) + local_f18 * -100;
                      iVar3 = G_CDataManager();
                      local_f10 = (uint)*(byte *)(iVar3 + 0x3bf);
                      iVar3 = G_CDataManager();
                      *(uint *)(iVar3 + 0x3c4) =
                           local_f20 * 10000000 + local_f1c * 100000 +
                           local_f14 * 100 + local_f18 * 10000 + local_f10;
                      iVar3 = G_CDataManager();
                      uVar15 = *(undefined4 *)(iVar3 + 0x3c4);
                      cMyTrace::cMyTrace(local_dfc,"bool CDataManager::init()",0x1aa7,9,true,true);
                      cMyTrace::operator()(local_dfc,"\t- Server version for antibot : %d",uVar15);
                      cVar1 = importImageCommunicationInfo
                                        ("Etc/ImageCommunication.etc",
                                         (ImageCommunicationData *)(this + 0xb4c4));
                      if (cVar1 == '\x01') {
                        iVar3 = G_CDataManager();
                        cVar1 = ServerParameterScript::CheckTraningFirstGive
                                          ((ServerParameterScript *)(iVar3 + 0x68));
                        if (cVar1 == '\x01') {
                          cVar1 = initExpertJobScript("Character/","expertjob.lst");
                          if (cVar1 == '\x01') {
                            this_02 = operator_new(0x48);
                    /* try { // try from 08358deb to 08358def has its CatchHandler @ 08358df2 */
                            CExpertJobList::CExpertJobList(this_02);
                            *(CExpertJobList **)(this + 0x5090) = this_02;
                            cVar1 = CExpertJobList::init(*(CExpertJobList **)(this + 0x5090));
                            if (cVar1 == '\x01') {
                              iVar3 = importTowerInfo("Etc/","TowerList.lst",(map *)(this + 0x5180))
                              ;
                              if (iVar3 == 0) {
                                local_40 = 0;
                                local_40 = importDeathTowerScript
                                                     ("Etc/DeathTower.etc",
                                                      (stDeathTower_t *)(this + 0x5198));
                                if (local_40 == 0) {
                                  cVar1 = importRankSystemScript
                                                    ("Etc/RankSystemInfo.etc",
                                                     (stRankSystemInfo *)(this + 0x5108));
                                  if (cVar1 == '\x01') {
                                    local_3c = 0;
                                    local_3c = importBloodDungeonScript
                                                         ("Etc/BloodClearReward.etc",
                                                          (stBloodDungeon_t *)(this + 0x5e30));
                                    if (local_3c == 0) {
                                      local_3c = 0;
                                      psVar8 = (stHellParty_t *)Get_instance_stHellParty_t();
                                      local_3c = importHellPartyScript("Etc/HellParty.etc",psVar8);
                                      if (local_3c == 0) {
                                        local_3c = 0;
                                        local_3c = importCharacLinkSystemScript
                                                             ("Etc/LinkSystem/CharacLinkSystem.etc",
                                                              (stCharacLinkSystem_t *)
                                                              (this + 0x629c));
                                        if (local_3c == 0) {
                                          uVar15 = StrikerScript::getInsance();
                                          *(undefined4 *)(this + 0x6390) = uVar15;
                                          cVar1 = StrikerScript::importScript
                                                            (*(StrikerScript **)(this + 0x6390),
                                                             "Etc/LinkSystem/striker.etc");
                                          if (cVar1 == '\x01') {
                                            uVar15 = CharacManageScript::getInsance();
                                            *(undefined4 *)(this + 0x6394) = uVar15;
                                            cVar1 = CharacManageScript::importScript
                                                              (*(CharacManageScript **)
                                                                (this + 0x6394),
                                                               "Etc/LinkSystem/CharacterManage.etc")
                                            ;
                                            if (cVar1 == '\x01') {
                                              uVar15 = BlueMarbleScriptManager::getInsance();
                                              *(undefined4 *)(this + 0xb4a8) = uVar15;
                                              cVar1 = BlueMarbleScriptManager::initTileList
                                                                (*(BlueMarbleScriptManager **)
                                                                  (this + 0xb4a8),
                                                                 "Event/BlueMarble/",
                                                                 "BlueMarbleTile.lst");
                                              if (cVar1 == '\x01') {
                                                cVar1 = BlueMarbleScriptManager::initMapList
                                                                  (*(BlueMarbleScriptManager **)
                                                                    (this + 0xb4a8),
                                                                   "Event/BlueMarble/",
                                                                   "BlueMarbleMap.lst");
                                                if (cVar1 == '\x01') {
                                                  cVar1 = BlueMarbleScriptManager::
                                                          initBlueMarbleInfo(*(
                                                  BlueMarbleScriptManager **)(this + 0xb4a8),
                                                  "Event/BlueMarble/","BlueMarble.blu");
                                                  if (cVar1 == '\x01') {
                                                    local_3c = 0;
                                                    local_3c = importQuestShopScript
                                                                         ("Etc/questshop.etc",
                                                                          (stQuestShop *)
                                                                          (this + 0x6398));
                                                    if (local_3c == 0) {
                                                      cVar1 = initIndependentDropScript
                                                                        ("Etc/",
                                                  "IndependentDrop.lst");
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = IndependentDropParameterScript::
                                                            load_independent_drop_list
                                                                      ((
                                                  IndependentDropParameterScript *)(this + 0xa884));
                                                  if (cVar1 == '\x01') {
                                                    local_3c = 0;
                                                    local_3c = IndependentDropParameterScript::
                                                               ImportIndependentDrop
                                                                         ((
                                                  IndependentDropParameterScript *)(this + 0xa884),
                                                  "Etc/Independent_Drop.etc");
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    local_3c = ImportSeriaBlessingScript
                                                                         ("Event/SeriaBlessing.evt",
                                                                          (stSeriaBlessingScript *)
                                                                          (this + 0x5094));
                                                    if (local_3c == 0) {
                                                      local_3c = 0;
                                                      local_3c = ImportLevelUpRewardItemScript
                                                                           (
                                                  "Event/LevelUpRewardItem.evt",
                                                  (stLevelUpRewardItemScript *)(this + 0x50ac));
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    local_3c = ImportGrowthCapsuleScript
                                                                         ("Event/GrowthCapsule.evt",
                                                                          (stGrowthCapsuleScript *)
                                                                          (this + 0x50c4));
                                                    if (local_3c == 0) {
                                                      local_3c = 0;
                                                      local_3c = ImportNewAccountLeventUpToJobScript
                                                                           (
                                                  "Event/NewAccountLevelUpToJob.evt",
                                                  (stNewAccountLevelUpToJobScript *)(this + 0xb5e0))
                                                  ;
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    local_3c = ImportReturnUserRewardScript
                                                                         (
                                                  "Event/ReturnUserReward.evt",
                                                  (stReturnUserRewardScript *)(this + 0xb548));
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    local_3c = ImportBingoScript(
                                                  "Event/BingoEvent.evt",
                                                  (stBingoScript *)(this + 0xb568));
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    local_3c = ImportBroadCastItemScript
                                                                         ("Etc/BroadCastItem.etc",
                                                                          (stBroadCastItemScript *)
                                                                          (this + 0xb5bc));
                                                    if (local_3c == 0) {
                                                      cVar1 = ImportSecurityReward
                                                                        ((SecurityReward *)
                                                                         (this + 0x50d8));
                                                      if (cVar1 == '\x01') {
                                                        local_3c = 0;
                                                        local_3c = ImportItemMakingSkill
                                                                             (
                                                  "Etc/ItemMakingSkill.etc",
                                                  (stItemMakingSkill *)(this + 0xb458));
                                                  if (local_3c == 0) {
                                                    cVar1 = importUltimateDungeonList
                                                                      ("Etc/UltimateDungeonList.etc"
                                                                       ,(set *)(this + 0xb488));
                                                    if (cVar1 == '\x01') {
                                                      pCVar7 = (CSyncScript *)
                                                               sync_script::GetInstanceSyncScript();
                                                      cVar1 = sync_script::CSyncScript::
                                                              truncate_mapping_equip_info_table
                                                                        (pCVar7);
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = importExperienceItemMapInfo
                                                                          ((map *)(this + 0xa928),
                                                                           false);
                                                        if (cVar1 == '\x01') {
                                                          cVar1 = importExperienceItemMapInfo
                                                                            ((map *)(this + 0xa940),
                                                                             true);
                                                          if (cVar1 == '\x01') {
                                                            pmVar9 = (map *)sync_script::
                                                                            GetInstanceSyncScript();
                                                            cVar1 = sync_script::CSyncScript::
                                                                    insert_mapping_equip_info_to_db
                                                                              (pmVar9);
                                                            if (cVar1 == '\x01') {
                                                              local_3c = 0;
                                                              local_3c = importVillageAttackedScript
                                                                                   (
                                                  "Etc/VillageAttacked.etc",
                                                  (stVillageAttacked_t *)(this + 0x61a0));
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    pCVar10 = (CActionPointEtcParameter *)
                                                              GetActionPointEtcParameter(this,false)
                                                    ;
                                                    local_3c = APSystem::CActionPointEtcParameter::
                                                               importActionPointSystemEtcScript
                                                                         (
                                                  "Etc/Chn_ActionPointSystem.etc",pCVar10);
                                                  if (local_3c == 0) {
                                                    local_3c = 0;
                                                    pCVar10 = (CActionPointEtcParameter *)
                                                              GetActionPointEtcParameter(this,true);
                                                    local_3c = APSystem::CActionPointEtcParameter::
                                                               importActionPointSystemEtcScript
                                                                         (
                                                  "Etc/Chn_ActionPointSystem_GM.etc",pCVar10);
                                                  if (local_3c == 0) {
                                                    pCVar7 = (CSyncScript *)
                                                             sync_script::GetInstanceSyncScript();
                                                    sync_script::CSyncScript::
                                                    truncate_charac_action_point_desc(pCVar7);
                                                    pCVar7 = (CSyncScript *)
                                                             sync_script::GetInstanceSyncScript();
                                                    sync_script::CSyncScript::
                                                    insert_charac_action_point_desc(pCVar7);
                                                    local_3c = 0;
                                                    std::
                                                  vector<_DailySchedule,std::allocator<_DailySchedule>>
                                                  ::vector(local_f2c);
                    /* try { // try from 08359e90 to 0835a618 has its CatchHandler @ 0835f19c */
                                                  local_3c = importDailyScheduleEtcScript
                                                                       (
                                                  "Etc/Chn_ServerCheckSchedule.etc",
                                                  (vector *)local_f2c);
                                                  if (local_3c == 0) {
                                                    iVar3 = std::
                                                  vector<_DailySchedule,std::allocator<_DailySchedule>>
                                                  ::size(local_f2c);
                                                  if (iVar3 != 0) {
                                                    CDailyScheduleManager::AddDailSchedule
                                                              (GlobalData::s_DailyScheduleManager,
                                                               (vector *)local_f2c);
                                                  }
                                                  local_3c = loadAdvanceAltarTimeLineParameter
                                                                       ((StageTimeLineParameter *)
                                                                        (this + 0x62d0));
                                                  if (local_3c == 0) {
                                                    local_3c = advancealtar::
                                                               AdvanceAltarShopParameter::
                                                               importAdvanceAltarShopParameter
                                                                         ((AdvanceAltarShopParameter
                                                                           *)(this + 0x631c),
                                                                                                                                                    
                                                  "Etc/AdvanceAltar/AdvanceAltarShop.etc");
                                                  if (local_3c == 0) {
                                                    local_3c = advancealtar::RewardParameter::
                                                               importAchievementRewardParameter
                                                                         ((RewardParameter *)
                                                                          (this + 0x634c),
                                                                                                                                                    
                                                  "Etc/AdvanceAltar/AdvanceAltarAchievementReward.etc"
                                                  );
                                                  if (local_3c == 0) {
                                                    local_3c = advancealtar::ConfigParameter::
                                                               importConfigParameter
                                                                         ((ConfigParameter *)
                                                                          (this + 0x6364),
                                                                                                                                                    
                                                  "Etc/AdvanceAltar/AdvanceAltarConfig.etc");
                                                  if (local_3c == 0) {
                                                    pCVar7 = (CSyncScript *)
                                                             sync_script::GetInstanceSyncScript();
                                                    sync_script::CSyncScript::
                                                    truncate_charac_advance_altar_item_desc(pCVar7);
                                                    pCVar7 = (CSyncScript *)
                                                             sync_script::GetInstanceSyncScript();
                                                    sync_script::CSyncScript::
                                                    insert_charac_advance_altar_item_desc(pCVar7);
                                                    cVar1 = importPVPChannelList
                                                                      ("Etc/pvpChannelList.etc",
                                                                       (live_server_info_t *)
                                                                       (this + 0xb4ec),0);
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = importGuildParameterScript
                                                                        ((GuildParameterScript *)
                                                                         (this + 0xa50c),
                                                                         "Etc/Guild.etc");
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = importPowerParameterScript
                                                                          ((PowerParameterScript *)
                                                                           (this + 0xa628),
                                                                           "Etc/Power.etc");
                                                        if (cVar1 == '\x01') {
                                                          cVar1 = importSecretShopScript
                                                                            ((SecretShopScript *)
                                                                             (this + 0xa700),
                                                                             "Etc/SecretShop.etc");
                                                          if (cVar1 == '\x01') {
                                                            cVar1 = importAccountCargoScript
                                                                              ((AccountCargoScript *
                                                                               )(this + 0xa7e0),
                                                                                                                                                              
                                                  "Etc/AccountCargo.etc");
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = importTitleBookEtcScript
                                                                      ("Etc/TitleBook.etc",
                                                                       (stTitleBookInfo *)
                                                                       (this + 0xa788));
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = initEventCharacterScript
                                                                        ("Event/EventCharacter/",
                                                                         "EventCharacter.lst");
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = EventCharacterParameterScript::
                                                                load_event_character_list
                                                                          ((
                                                  EventCharacterParameterScript *)(this + 0xa86c));
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = importQuestParameterScript
                                                                      ((QuestParameterScript *)
                                                                       (this + 0x8cc8),
                                                                       "n_Quest/questParameter.etc")
                                                    ;
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = importTrainingQuestScript
                                                                        ((TrainingQuestScript *)
                                                                         (this + 0x8d34),
                                                                         "n_Quest/TrainingQuest.lst"
                                                                        );
                                                      if (cVar1 == '\x01') {
                                                        iVar3 = G_CEnvironment();
                                                        iVar3 = *(int *)(iVar3 + 0x1b0);
                                                        iVar11 = G_CEnvironment();
                                                        cVar1 = ServerParameterScript::
                                                                CheckCollectDungeonStatisticServer
                                                                          ((ServerParameterScript *)
                                                                           (this + 0x68),
                                                                           *(int *)(iVar11 + 0x378),
                                                                           iVar3);
                                                        if (cVar1 != '\0') {
                                                          SetCollectDungeonStatistic(true);
                                                          cMyTrace::cMyTrace(local_b1c,
                                                                                                                                                          
                                                  "bool CDataManager::init()",0x1d84,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_b1c,
                                                                                                                          
                                                  "\t- Collect Dungeon Data Statistic start!");
                                                  }
                                                  this_03 = (CAssaultMgr *)
                                                            pvp_assault::GetInstanceAssaultMgr();
                                                  pvp_assault::CAssaultMgr::SetAssaultChannel
                                                            (this_03,true);
                                                  cVar1 = importSlangName("Etc/slangname.etc",
                                                                          (SlangNameData *)
                                                                          (this + 0x86a0));
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = importInvalidName("Etc/invalidName.etc",
                                                                              (InvalidCharData *)
                                                                              (this + 0x86c4));
                                                    if (cVar1 == '\x01') {
                                                      this_04 = operator_new(0x80);
                    /* try { // try from 0835a620 to 0835a624 has its CatchHandler @ 0835a627 */
                                                      SlangFilter::SlangFilter(this_04);
                                                      *(SlangFilter **)(this + 0x86f4) = this_04;
                    /* try { // try from 0835a65a to 0835a822 has its CatchHandler @ 0835f19c */
                                                      cVar1 = importFairPVPEquipment
                                                                        ("Etc/FairPVPEquipment.etc",
                                                                         (map *)(this + 0x86f8));
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = importGrowthPower(
                                                  "Etc/GrowthPowerRewardBuff.etc",
                                                  (STGrowthPowerData *)(this + 0x8710));
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = importBoosterGage("Etc/BoosterGage.etc",
                                                                              (BoosterGageData *)
                                                                              (this + 0x8770));
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = initAICharacterScript
                                                                        ("AICharacter/",
                                                                         "AICharacter.lst");
                                                      if (cVar1 == '\x01') {
                                                        this_05 = operator_new(0x538);
                    /* try { // try from 0835a82a to 0835a82e has its CatchHandler @ 0835a831 */
                                                        CAICharacterList::CAICharacterList(this_05);
                                                        *(CAICharacterList **)(this + 0x869c) =
                                                             this_05;
                    /* try { // try from 0835a85d to 0835ae65 has its CatchHandler @ 0835f19c */
                                                        cVar1 = CAICharacterList::init
                                                                          (*(CAICharacterList **)
                                                                            (this + 0x869c));
                                                        if (cVar1 == '\x01') {
                                                          G_CEnvironment();
                                                          cVar1 = ServerParameterScript::
                                                                  CheckLightServer((int)(this + 0x68
                                                                                        ));
                                                          if (cVar1 != '\0') {
                                                            cMyTrace::cMyTrace(local_a9c,
                                                                                                                                                              
                                                  "bool CDataManager::init()",0x1dc5,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_a9c,
                                                             "\t- Light Server Mode start!");
                                                  }
                                                  ImportWorldDrop((WorldDropInfo *)(this + 0x6734),
                                                                  "Etc/WorldDrop.etc");
                                                  ImportWorldDrop((WorldDropInfo *)(this + 0x76e8),
                                                                  "Etc/WorldDropWarArea.etc");
                                                  local_38 = 0;
                                                  local_38 = WongWork::CUserPremium::LoadPremiumInfo
                                                                       ("Etc/PremiumList_New.etc");
                                                  if (local_38 == 0) {
                                                    cVar1 = IsLightServer();
                                                    if ((cVar1 == '\x01') ||
                                                       (cVar1 = ImportWarAreaCounter
                                                                          ((WarAreaCounter *)
                                                                           (this + 0x87b4)),
                                                       cVar1 == '\x01')) {
                                                      cVar1 = InitCharacterScript("Character/",
                                                                                  "Character.lst",
                                                                                  "ExpTable.tbl",
                                                                                  (char *)0x0);
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = InitMonsterScript("Monster/",
                                                                                  "Monster.lst",
                                                                                                                                                                    
                                                  "MonsterApcDifficultyBonus.tbl");
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = InitPassiveObjectScript
                                                                      ("PassiveObject/",
                                                                       "PassiveObject.lst");
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = InitEquipmentScript("equipment/",
                                                                                  "equipment.lst",
                                                                                  "pricetable.tbl");
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = InitStackableScript("stackable/",
                                                                                    "stackable.lst",
                                                                                    "pricetable.tbl"
                                                                                   );
                                                        if (cVar1 == '\x01') {
                                                          cVar1 = InitMapScript("Map/","Map.lst");
                                                          if (cVar1 == '\x01') {
                                                            cVar1 = InitDungeonScript("Dungeon/",
                                                                                      "Dungeon.lst")
                                                            ;
                                                            if (cVar1 == '\x01') {
                                                              this_06 = (CGameManager *)
                                                                        G_CGameManager();
                                                              this_07 = (CQuickPartyRewardManager *)
                                                                        CGameManager::
                                                                        GetQuickPartyRewardManager
                                                                                  (this_06);
                                                              cVar1 = QuickParty::
                                                                      CQuickPartyRewardManager::init
                                                                                (this_07);
                                                              if (cVar1 == '\x01') {
                                                                cVar1 = initQuestScript("n_Quest/",
                                                                                        "Quest.lst")
                                                                ;
                                                                if (cVar1 == '\x01') {
                                                                  cVar1 = InitSkillScript("Skill/",
                                                  "SkillList.lst");
                                                  if (cVar1 == '\x01') {
                                                    this_08 = operator_new(0x24);
                    /* try { // try from 0835ae6d to 0835ae71 has its CatchHandler @ 0835ae74 */
                                                    CItemShop::CItemShop(this_08);
                                                    *(CItemShop **)(this + 0x8cbc) = this_08;
                    /* try { // try from 0835aea3 to 0835afa3 has its CatchHandler @ 0835f19c */
                                                    cVar1 = initItemShopScript("ItemShop/",
                                                                               "ItemShop.lst");
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = CItemShop::loadItemShopFiles
                                                                        (*(CItemShop **)
                                                                          (this + 0x8cbc));
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = initPvpMissionSystem
                                                                          ("PVP_Mission/",
                                                                           "Mission.lst");
                                                        if (cVar1 == '\x01') {
                                                          this_09 = operator_new(0x54);
                    /* try { // try from 0835afab to 0835afaf has its CatchHandler @ 0835afb2 */
                                                          PvP_MissionSystem::PvP_MissionSystem
                                                                    (this_09);
                                                          *(PvP_MissionSystem **)(this + 0xb454) =
                                                               this_09;
                    /* try { // try from 0835afde to 0835b278 has its CatchHandler @ 0835f19c */
                                                          cVar1 = PvP_MissionSystem::Load_list
                                                                            (*(PvP_MissionSystem **)
                                                                              (this + 0xb454));
                                                          if (cVar1 == '\x01') {
                                                            cVar1 = PvP_MissionSystem::
                                                                    Load_EtcParameter(*(
                                                  PvP_MissionSystem **)(this + 0xb454));
                                                  if (cVar1 == '\x01') {
                                                    std::string::operator=
                                                              ((string *)(this + 0x8cb8),
                                                               "Etc/NewCashShop.etc");
                                                    std::string::operator=
                                                              ((string *)(this + 0xa8c0),
                                                               "CashShop/NewArad_CashShop.shp");
                                                    std::string::operator=
                                                              ((string *)(this + 0xa8c4),
                                                               "CashShop/Sudden_Shop_1.shp");
                                                    std::string::operator=
                                                              ((string *)(this + 0xa8c8),
                                                               "CashShop/Sudden_Shop_2.shp");
                                                    std::string::operator=
                                                              ((string *)(this + 0xa8cc),
                                                               "CashShop/Sudden_Shop_3.shp");
                                                    cMyTrace::cMyTrace(local_9ac,
                                                                       "bool CDataManager::init()",
                                                                       0x1eb4,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_9ac,
                                                               "\t- Loading Money Limit per Level ")
                                                    ;
                                                    cVar1 = importGoldLimitByLevel
                                                                      ((uint *)(this + 0x6410));
                                                    if (cVar1 != '\x01') {
                                                      cMyTrace::cMyTrace(local_99c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1eb7,9,true,true);
                                                      cMyTrace::operator()
                                                                (local_99c,
                                                                                                                                  
                                                  "\t- Loading Money Limit per Level Fail");
                                                  }
                                                  cMyTrace::cMyTrace(local_98c,
                                                                     "bool CDataManager::init()",
                                                                     0x1eb9,9,false,true);
                                                  cMyTrace::operator()(local_98c,"Success");
                                                  cMyTrace::cMyTrace(local_97c,
                                                                     "bool CDataManager::init()",
                                                                     0x1ebb,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_97c,"\t- Loading Compound Item ")
                                                  ;
                                                  this_10 = operator_new(0xbec);
                    /* try { // try from 0835b280 to 0835b284 has its CatchHandler @ 0835b287 */
                                                  ExtreamDungeon::CCompound_ExtreamDun_Item::
                                                  CCompound_ExtreamDun_Item(this_10);
                                                  GlobalData::s_pCompoundBindCube = this_10;
                    /* try { // try from 0835b2bb to 0835b3c2 has its CatchHandler @ 0835f19c */
                                                  iVar3 = ExtreamDungeon::CCompound_ExtreamDun_Item
                                                          ::LoadScript(this_10,"Etc/",
                                                                       "bindsphere.etc");
                                                  if (iVar3 == 0) {
                                                    cMyTrace::cMyTrace(local_95c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ec2,9,false,true);
                                                    cMyTrace::operator()(local_95c,"Success");
                                                    cMyTrace::cMyTrace(local_94c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ec5,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_94c,
                                                                                                                              
                                                  "\t- Loading ARAD - Event Upgrade Jar ");
                                                  this_11 = operator_new(0x8c);
                    /* try { // try from 0835b3ca to 0835b3ce has its CatchHandler @ 0835b3d1 */
                                                  Event_Upgrade_Jar::Event_Upgrade_Jar(this_11);
                                                  GlobalData::s_pEvent_UpGrade_Jar = this_11;
                    /* try { // try from 0835b405 to 0835b500 has its CatchHandler @ 0835f19c */
                                                  iVar3 = Event_Upgrade_Jar::LoadScript
                                                                    (this_11,"",
                                                                     "Etc/EventUpgradeJar.etc");
                                                  if (iVar3 == 0) {
                                                    cMyTrace::cMyTrace(local_93c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ec9,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_93c,
                                                                                                                              
                                                  "\t- Fail load Event.Upgrad.Jar Script File");
                                                  uVar15 = 0;
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_92c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ecc,9,false,true);
                                                    cMyTrace::operator()(local_92c,"Success");
                                                    cMyTrace::cMyTrace(local_91c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ed9,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_91c,
                                                               "\t- Loading Compound Avatar ");
                                                    this_12 = operator_new(0x88,(nothrow_t *)
                                                                                &std::nothrow);
                                                    if (this_12 != (CCompoundAvatar *)0x0) {
                    /* try { // try from 0835b522 to 0835b526 has its CatchHandler @ 0835b529 */
                                                      WongWork::CCompoundAvatar::CCompoundAvatar
                                                                (this_12);
                                                    }
                                                    GlobalData::s_pCompoundAvatar = this_12;
                    /* try { // try from 0835b569 to 0835b6d3 has its CatchHandler @ 0835f19c */
                                                    cVar1 = WongWork::CCompoundAvatar::LoadScript
                                                                      (this_12,"Etc/",
                                                                       "CompoundAvatar.etc");
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_8fc,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1ee5,9,false,true);
                                                      cMyTrace::operator()(local_8fc,"Success");
                                                      importVendingMachineInfo
                                                                ("Etc/","VendingMachine.lst",
                                                                 (vector *)(this + 0xb424));
                                                      cVar1 = initWorldMapScript("WorldMap/",
                                                                                 "WorldMap.lst");
                                                      if (cVar1 == '\x01') {
                                                        initStageMapScript("StageMap/",
                                                                           "StageMap.lst");
                                                        cMyTrace::cMyTrace(local_8ec,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x1ef3,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_8ec,"\t- Loading Dungeons ");
                                                  this_13 = operator_new(0x14);
                    /* try { // try from 0835b6db to 0835b6df has its CatchHandler @ 0835b6e2 */
                                                  CDungeonList::CDungeonList(this_13);
                                                  *(CDungeonList **)this = this_13;
                                                  memset(this + 0xaa74,0,6);
                                                  memset(this + 0xaa7a,0,6);
                                                  memset(this + 0xaa80,0,3);
                    /* try { // try from 0835b766 to 0835b86b has its CatchHandler @ 0835f19c */
                                                  cVar1 = CDungeonList::load_list
                                                                    (*(CDungeonList **)this);
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_8cc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f08,9,false,true);
                                                    cMyTrace::operator()(local_8cc,"Success");
                                                    cMyTrace::cMyTrace(local_8bc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f0b,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_8bc,
                                                                                                                              
                                                  "\t- Loading Tower Of Despair System ");
                                                  this_14 = operator_new(0x35c);
                    /* try { // try from 0835b873 to 0835b877 has its CatchHandler @ 0835b87a */
                                                  TowerOfDespairMgr::TowerOfDespairMgr(this_14);
                                                  GlobalData::s_pTowerOfDespairMgr = this_14;
                    /* try { // try from 0835b8ae to 0835b9b5 has its CatchHandler @ 0835f19c */
                                                  iVar3 = TowerOfDespairMgr::LoadScript
                                                                    (this_14,"Etc/",
                                                                     "TowerOfDespair.etc");
                                                  if (iVar3 == 0) {
                                                    cMyTrace::cMyTrace(local_89c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f12,9,false,true);
                                                    cMyTrace::operator()(local_89c,"Success");
                                                    cMyTrace::cMyTrace(local_88c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f16,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_88c,
                                                               "\t- Loading Chatting Emoticon ");
                                                    this_15 = operator_new(0x48);
                    /* try { // try from 0835b9bd to 0835b9c1 has its CatchHandler @ 0835b9c4 */
                                                    CChattingEmoticonList::CChattingEmoticonList
                                                              (this_15);
                                                    *(CChattingEmoticonList **)(this + 0x28) =
                                                         this_15;
                    /* try { // try from 0835b9f0 to 0835bb16 has its CatchHandler @ 0835f19c */
                                                    cVar1 = initChattingEmoticonScriptList
                                                                      ("ChatEmoticon/",
                                                                       "ChatEmoticon.lst");
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = CChattingEmoticonList::Load_list
                                                                        (*(CChattingEmoticonList **)
                                                                          (this + 0x28));
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_85c,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x1f23,9,false,true);
                                                  cMyTrace::operator()(local_85c,"Success");
                                                  std::
                                                  vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>::
                                                  vector(local_f38);
                    /* try { // try from 0835bb28 to 0835bbe1 has its CatchHandler @ 0835f174 */
                                                  cVar1 = loadPvpMapBasicDataScript
                                                                    ("Etc/pvpmapbasicdata.etc",
                                                                     (vector *)local_f38);
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_83c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f2d,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_83c,"\t- Loading Maps ");
                                                    this_16 = operator_new(0x3d8);
                    /* try { // try from 0835bbe9 to 0835bbed has its CatchHandler @ 0835bbf0 */
                                                    CMapList::CMapList(this_16);
                                                    *(CMapList **)(this + 4) = this_16;
                    /* try { // try from 0835bc1d to 0835bd22 has its CatchHandler @ 0835f174 */
                                                    cVar1 = load_map_files(this,(vector *)local_f38)
                                                    ;
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_81c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1f36,9,false,true);
                                                      cMyTrace::operator()(local_81c,"Success");
                                                      cMyTrace::cMyTrace(local_80c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1f38,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_80c,"\t- Loading Monsters ");
                                                      this_17 = operator_new(0x2c);
                    /* try { // try from 0835bd2a to 0835bd2e has its CatchHandler @ 0835bd31 */
                                                      CMonsterManager::CMonsterManager(this_17);
                                                      *(CMonsterManager **)(this + 8) = this_17;
                    /* try { // try from 0835bd57 to 0835be6c has its CatchHandler @ 0835f174 */
                                                      cVar1 = CMonsterManager::load_monsters
                                                                        (*(CMonsterManager **)
                                                                          (this + 8));
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_7ec,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x1f41,9,false,true);
                                                  cMyTrace::operator()(local_7ec,"Success");
                                                  IndependentDropParameterScript::clear
                                                            ((IndependentDropParameterScript *)
                                                             (this + 0xa884));
                                                  cMyTrace::cMyTrace(local_7dc,
                                                                     "bool CDataManager::init()",
                                                                     0x1f47,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_7dc,"\t- Loading Skills ");
                                                  this_18 = operator_new(0x2ec);
                    /* try { // try from 0835be74 to 0835be78 has its CatchHandler @ 0835be7b */
                                                  CSkillList::CSkillList(this_18);
                                                  *(CSkillList **)(this + 0x10) = this_18;
                    /* try { // try from 0835bea1 to 0835c048 has its CatchHandler @ 0835f174 */
                                                  cVar1 = CSkillList::init(*(CSkillList **)
                                                                            (this + 0x10));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_7bc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f50,9,false,true);
                                                    cMyTrace::operator()(local_7bc,"Success");
                                                    cMyTrace::cMyTrace(local_7ac,
                                                                       "bool CDataManager::init()",
                                                                       0x1f52,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_7ac,
                                                               "\t- Loading Creatrue Damage ");
                                                    cVar1 = prepareServerDelayCheckDamage();
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_78c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1f58,9,false,true);
                                                      cMyTrace::operator()(local_78c,"Success");
                                                      SDCActiveStatusSyncServer::
                                                      SDCActiveStatusSyncServer(&local_f39);
                    /* try { // try from 0835c088 to 0835c1e6 has its CatchHandler @ 0835f14c */
                                                      cMyTrace::cMyTrace(local_77c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1f5c,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_77c,
                                                                 "\t- Loading ActiveStatus Damage ")
                                                      ;
                                                      cVar1 = SDCActiveStatusSyncServer::
                                                              loadActiveStatusScript();
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_75c,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x1f62,9,false,true);
                                                  cMyTrace::operator()(local_75c,"Success");
                                                  pmVar9 = (map *)getItemGroupNameTable();
                                                  local_40 = importItmeGroupTable
                                                                       ("Etc/","ItemGroupName.tbl",
                                                                        pmVar9);
                                                  if (local_40 == 0) {
                                                    cMyTrace::cMyTrace(local_74c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f69,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_74c,"\t- Loading Items ");
                                                    this_19 = operator_new(0x74);
                    /* try { // try from 0835c1ee to 0835c1f2 has its CatchHandler @ 0835c1f5 */
                                                    CItemList::CItemList(this_19);
                                                    *(CItemList **)(this + 0xc) = this_19;
                    /* try { // try from 0835c21b to 0835c322 has its CatchHandler @ 0835f14c */
                                                    cVar1 = CItemList::init(*(CItemList **)
                                                                             (this + 0xc));
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_72c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1f72,9,false,true);
                                                      cMyTrace::operator()(local_72c,"Success");
                                                      cMyTrace::cMyTrace(local_71c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1f8a,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_71c,
                                                                 "\t- Loading Avatar Roulette ");
                                                      AvatarRoulette::AvatarRoulette(local_1080);
                    /* try { // try from 0835c334 to 0835c3a1 has its CatchHandler @ 0835f124 */
                                                      cVar1 = importAvatarRouletteList
                                                                        (
                                                  "Etc/avatar_roulette_jar.etc",local_1080);
                                                  if (cVar1 == '\x01') {
                                                    this_20 = operator_new(0x20);
                    /* try { // try from 0835c3a9 to 0835c3ad has its CatchHandler @ 0835c3b0 */
                                                    AvatarRouletteServer::AvatarRouletteServer
                                                              (this_20);
                                                    GlobalData::s_pAvatarRoulette = this_20;
                                                    if (this_20 == (AvatarRouletteServer *)0x0) {
                                                      uVar15 = 0;
                                                    }
                                                    else {
                    /* try { // try from 0835c3f1 to 0835c8aa has its CatchHandler @ 0835f124 */
                                                      cVar1 = AvatarRouletteServer::Init
                                                                        (this_20,local_1080);
                                                      if (cVar1 == '\x01') {
                                                        cVar1 = AvatarRouletteServer::
                                                                InitAddCharacSkill(GlobalData::
                                                                                   s_pAvatarRoulette
                                                                                  );
                                                        if (cVar1 == '\x01') {
                                                          cMyTrace::cMyTrace(local_6ec,
                                                                                                                                                          
                                                  "bool CDataManager::init()",0x1fa6,9,false,true);
                                                  cMyTrace::operator()(local_6ec,"Success");
                                                  local_34 = 0;
                                                  local_f58[0] = 
                                                  "Etc/RandomOption/OptionGrouping.etc";
                                                  local_f58[1] = 
                                                  "Etc/RandomOption/OptionGroupSelection.etc";
                                                  local_f58[2] = 
                                                  "Etc/RandomOption/OptionNumbering.etc";
                                                  local_f58[3] = 
                                                  "Etc/RandomOption/OptionQuantity.etc";
                                                  local_f58[4] = 
                                                  "Etc/RandomOption/PartSelection.etc";
                                                  local_f58[5] = 
                                                  "Etc/RandomOption/RandomizedOptionOverall1.etc";
                                                  local_f58[6] = 
                                                  "Etc/RandomOption/RandomizedOptionOverall2.etc";
                                                  cMyTrace::cMyTrace(local_6dc,
                                                                     "bool CDataManager::init()",
                                                                     0x1fb6,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_6dc,"\t- Loading RandomOption ");
                                                  for (local_28 = 0; local_28 < 7;
                                                      local_28 = local_28 + 1) {
                                                    local_34 = importRandomOptionScript
                                                                         ((RandomOptionScript *)
                                                                          (this + 0x4e10),
                                                                          local_f58[local_28]);
                                                    if (local_34 != 0) {
                                                      pcVar5 = local_f58[local_28];
                                                      cMyTrace::cMyTrace(local_6cc,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1fbb,9,true,true);
                                                      cMyTrace::operator()
                                                                (local_6cc,
                                                                                                                                  
                                                  "\t- Fail load RandomOption Script File name(%s), error_line(%d)\n"
                                                  ,pcVar5,local_34);
                                                  uVar15 = 0;
                                                  goto LAB_0835f13c;
                                                  }
                                                  }
                                                  cMyTrace::cMyTrace(local_6bc,
                                                                     "bool CDataManager::init()",
                                                                     0x1fbf,9,false,true);
                                                  cMyTrace::operator()(local_6bc,"Success");
                                                  cVar1 = initRandomOptionItem();
                                                  if (cVar1 == '\x01') {
                                                    pCVar7 = (CSyncScript *)
                                                             sync_script::GetInstanceSyncScript();
                                                    cVar1 = sync_script::CSyncScript::
                                                            truncate_random_option_ref(pCVar7);
                                                    if (cVar1 == '\x01') {
                                                      pCVar7 = (CSyncScript *)
                                                               sync_script::GetInstanceSyncScript();
                                                      cVar1 = sync_script::CSyncScript::
                                                              insert_random_option_ref(pCVar7);
                                                      if (cVar1 == '\x01') {
                                                        iVar3 = RegenerationROI::
                                                                _0_Load_RegenerationRandomOptionItem
                                                                          ((RegenerationROI *)
                                                                           (this + 0x5040));
                                                        if (iVar3 == 0) {
                                                          cVar1 = CWorldMapList::load_list
                                                                            ((CWorldMapList *)
                                                                             (this + 0x8780));
                                                          if (cVar1 == '\x01') {
                                                            cMyTrace::cMyTrace(local_66c,
                                                                                                                                                              
                                                  "bool CDataManager::init()",0x1fe5,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_66c,"\t- Loading Quests ");
                                                  this_21 = operator_new(0xe8);
                    /* try { // try from 0835c8b2 to 0835c8b6 has its CatchHandler @ 0835c8b9 */
                                                  QuestList::QuestList(this_21);
                                                  *(QuestList **)(this + 0x18) = this_21;
                    /* try { // try from 0835c8df to 0835c9e4 has its CatchHandler @ 0835f124 */
                                                  cVar1 = QuestList::load_list
                                                                    (*(QuestList **)(this + 0x18));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_64c,
                                                                       "bool CDataManager::init()",
                                                                       0x1fec,9,false,true);
                                                    cMyTrace::operator()(local_64c,"Success");
                                                    cMyTrace::cMyTrace(local_63c,
                                                                       "bool CDataManager::init()",
                                                                       0x1fee,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_63c,"\t- Loading Characters ");
                                                    this_22 = operator_new(0x5674);
                    /* try { // try from 0835c9ec to 0835c9f0 has its CatchHandler @ 0835c9f3 */
                                                    CCharacList::CCharacList(this_22);
                                                    *(CCharacList **)(this + 0x14) = this_22;
                    /* try { // try from 0835ca19 to 0835cb1e has its CatchHandler @ 0835f124 */
                                                    cVar1 = CCharacList::init(*(CCharacList **)
                                                                               (this + 0x14));
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_61c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1ff5,9,false,true);
                                                      cMyTrace::operator()(local_61c,"Success");
                                                      cMyTrace::cMyTrace(local_60c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x1ff7,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_60c,"\t- Loading Disjoints ")
                                                      ;
                                                      this_23 = operator_new(0x670);
                    /* try { // try from 0835cb26 to 0835cb2a has its CatchHandler @ 0835cb2d */
                                                      DisJoint::DisJoint(this_23);
                                                      *(DisJoint **)(this + 0x1c) = this_23;
                    /* try { // try from 0835cb53 to 0835cdbc has its CatchHandler @ 0835f124 */
                                                      cVar1 = DisJoint::LoadDisJoint
                                                                        (*(DisJoint **)(this + 0x1c)
                                                                        );
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_5ec,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x1ffe,9,false,true);
                                                  cMyTrace::operator()(local_5ec,"Success");
                                                  cMyTrace::cMyTrace(local_5dc,
                                                                     "bool CDataManager::init()",
                                                                     0x2001,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_5dc,"\t- Loading Advance Altar ")
                                                  ;
                                                  cVar1 = StageMapList::loadList
                                                                    ((StageMapList *)(this + 0x8798)
                                                                    );
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_5bc,
                                                                       "bool CDataManager::init()",
                                                                       0x2007,9,false,true);
                                                    cMyTrace::operator()(local_5bc,"Success");
                                                    if (*(int *)(this + 0x8cc0) == 0) {
                                                      this_24 = operator_new(0xa28);
                                                      WongWork::CItemGeneratorMgr::CItemGeneratorMgr
                                                                (this_24);
                                                      *(CItemGeneratorMgr **)(this + 0x8cc0) =
                                                           this_24;
                                                    }
                                                    cVar1 = WongWork::CItemGeneratorMgr::initialize
                                                                      (*(CItemGeneratorMgr **)
                                                                        (this + 0x8cc0));
                                                    if (cVar1 == '\x01') {
                                                      if (*(int *)(this + 0x8cc4) == 0) {
                                                        this_25 = operator_new(0x444);
                    /* try { // try from 0835cdc4 to 0835cdc8 has its CatchHandler @ 0835cdcb */
                                                        CAutoMarketConditionsControl::
                                                        CAutoMarketConditionsControl(this_25);
                                                        *(CAutoMarketConditionsControl **)
                                                         (this + 0x8cc4) = this_25;
                                                      }
                    /* try { // try from 0835cdff to 0835d481 has its CatchHandler @ 0835f124 */
                                                      local_34 = CAutoMarketConditionsControl::
                                                                 LoadScript(*(
                                                  CAutoMarketConditionsControl **)(this + 0x8cc4),
                                                  "Etc/ItemDropInfo_Control.etc");
                                                  if (local_34 == 0) {
                                                    cMyTrace::cMyTrace(local_58c,
                                                                       "bool CDataManager::init()",
                                                                       0x2022,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_58c,"\t- Init Level Exp ");
                                                    set_level_exp(this);
                                                    cMyTrace::cMyTrace(local_56c,
                                                                       "bool CDataManager::init()",
                                                                       0x2028,9,false,true);
                                                    cMyTrace::operator()(local_56c,"Success");
                                                    cMyTrace::cMyTrace(local_55c,
                                                                       "bool CDataManager::init()",
                                                                       0x202a,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_55c,"\t- Init Mob Reward ");
                                                    set_mob_reward(this);
                                                    cMyTrace::cMyTrace(local_53c,
                                                                       "bool CDataManager::init()",
                                                                       0x2030,9,false,true);
                                                    cMyTrace::operator()(local_53c,"Success");
                                                    cMyTrace::cMyTrace(local_52c,
                                                                       "bool CDataManager::init()",
                                                                       0x2032,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_52c,"\t- Init PVP Grade ");
                                                    cVar1 = set_pvp_grade();
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_50c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x2038,9,false,true);
                                                      cMyTrace::operator()(local_50c,"Success");
                                                      cMyTrace::cMyTrace(local_4fc,
                                                                         "bool CDataManager::init()"
                                                                         ,0x203a,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_4fc,"\t- Init Reward SP ");
                                                      cVar1 = set_reward_sp(this);
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_4dc,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x2040,9,false,true);
                                                  cMyTrace::operator()(local_4dc,"Success");
                                                  cMyTrace::cMyTrace(local_4cc,
                                                                     "bool CDataManager::init()",
                                                                     0x2044,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_4cc,
                                                                                                                          
                                                  "\t- Init Get Channel Data(channel_info.etc) ");
                                                  cVar1 = CmmChannelProxy::SendCheckChannelScript
                                                                    (GlobalData::s_channel_proxy);
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_4ac,
                                                                       "bool CDataManager::init()",
                                                                       0x204a,9,false,true);
                                                    cMyTrace::operator()(local_4ac,"Success");
                                                    cMyTrace::cMyTrace(local_49c,
                                                                       "bool CDataManager::init()",
                                                                       0x204e,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_49c,"\t- Init Channel Script ")
                                                    ;
                                                    cVar1 = importChannelScript((channel_script_t *)
                                                                                (this + 0xb3f4));
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_47c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x205b,9,false,true);
                                                      cMyTrace::operator()(local_47c,"Success");
                                                      this_26 = operator_new(0x4f0);
                    /* try { // try from 0835d489 to 0835d48d has its CatchHandler @ 0835d490 */
                                                      WongWork::CItemUpgrade::CItemUpgrade(this_26);
                                                      *(CItemUpgrade **)(this + 0x20) = this_26;
                    /* try { // try from 0835d4de to 0835d5cd has its CatchHandler @ 0835f124 */
                                                      cMyTrace::cMyTrace(local_46c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x205e,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_46c,
                                                                 "\t- Init Item Upgrade Info ");
                                                      cVar1 = (**(code **)(**(int **)(this + 0x20) +
                                                                          4))(*(undefined4 *)
                                                                               (this + 0x20),
                                                                              "Etc/Upgrade.etc");
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_44c,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x2064,9,false,true);
                                                  cMyTrace::operator()(local_44c,"Success");
                                                  this_27 = operator_new(0x194);
                    /* try { // try from 0835d5d5 to 0835d5d9 has its CatchHandler @ 0835d5dc */
                                                  WongWork::CItemUpgrade_Separate::
                                                  CItemUpgrade_Separate(this_27);
                                                  *(CItemUpgrade_Separate **)(this + 0x24) = this_27
                                                  ;
                    /* try { // try from 0835d617 to 0835e1eb has its CatchHandler @ 0835f124 */
                                                  cVar1 = (**(code **)(**(int **)(this + 0x24) + 4))
                                                                    (*(undefined4 *)(this + 0x24),
                                                                     "Etc/Upgrade_Separate.etc");
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = WongWork::CItemUpgrade::
                                                            Load3rdChronicleUpgradeScript
                                                                      (*(CItemUpgrade **)
                                                                        (this + 0x20),
                                                                       "Etc/chronicle.etc");
                                                    if (cVar1 == '\x01') {
                                                      CItemAmplifier::loadScript
                                                                (GlobalData::s_itemAmplifier_,
                                                                 "Etc/AmplifyItem.etc",
                                                                 "Etc/AmplifyUpgrade.etc");
                                                      cMyTrace::cMyTrace(local_41c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x2084,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_41c,"\t- Init Reseal table ")
                                                      ;
                                                      cVar1 = importResealTable("Etc/Reseal.etc",
                                                                                (reseal_table_t *)
                                                                                (this + 0x2c));
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_3fc,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x208f,9,false,true);
                                                  cMyTrace::operator()(local_3fc,"Success");
                                                  cMyTrace::cMyTrace(local_3ec,
                                                                     "bool CDataManager::init()",
                                                                     0x2092,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_3ec,
                                                             "\t- Init Unlimit Challenge Info ");
                                                  cVar1 = importUnlimitChallengeScript
                                                                    ("Etc/UnlimitChallenge.etc",
                                                                     (stUnlimitChallengeInfo *)
                                                                     (this + 0x4ca8));
                                                  if (cVar1 == '\x01') {
                                                    uVar15 = CLevelRewardTableMgr::GetInstance();
                                                    *(undefined4 *)(this + 0x4cf4) = uVar15;
                                                    CLevelRewardTableMgr::SetChallengeInfo
                                                              (*(CLevelRewardTableMgr **)
                                                                (this + 0x4cf4),
                                                               (stUnlimitChallengeInfo *)
                                                               (this + 0x4ca8));
                                                    cMyTrace::cMyTrace(local_3cc,
                                                                       "bool CDataManager::init()",
                                                                       0x209e,9,false,true);
                                                    cMyTrace::operator()(local_3cc,"Success");
                                                    cVar1 = importLimitItemUsageInfo
                                                                      (
                                                  "Etc/Chn_Server_LimititemUsageinfo.etc",
                                                  (stLimitItemUsageInfoEx *)(this + 0x4cf8));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_3ac,
                                                                       "bool CDataManager::init()",
                                                                       0x20a8,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_3ac,
                                                                                                                              
                                                  "\t- Import Limit Item Usage Info Success");
                                                  cMyTrace::cMyTrace(local_39c,
                                                                     "bool CDataManager::init()",
                                                                     0x20b7,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_39c,"\t- Import DB Log Item - ");
                                                  cVar1 = importDBLogItem("Etc/Chn_DBLogItem.etc",
                                                                          (vector *)(this + 0x4d1c))
                                                  ;
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_37c,
                                                                       "bool CDataManager::init()",
                                                                       0x20c1,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_37c,
                                                               "\t- Import DB Log Item Success");
                                                    cMyTrace::cMyTrace(local_36c,
                                                                       "bool CDataManager::init()",
                                                                       0x20db,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_36c,
                                                               "\t- Import Condition Event Info ");
                                                    cVar1 = importConditionEventScript
                                                                      ("Event/ConditionEvent.evt",
                                                                       (stConditionEventInfo *)
                                                                       (this + 0x4d98));
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_34c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x20e5,9,false,true);
                                                      cMyTrace::operator()(local_34c,"Success");
                                                      cMyTrace::cMyTrace(local_33c,
                                                                         "bool CDataManager::init()"
                                                                         ,0x2102,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_33c,
                                                                                                                                  
                                                  "\t- Import Condition Event Script Dungeon ");
                                                  cVar1 = importConditionEventChkDungeonScript
                                                                    (
                                                  "Event/ConditionEventChkDungeon.evt",
                                                  (ConditionLevelChkDungeon *)(this + 0x4de8));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_31c,
                                                                       "bool CDataManager::init()",
                                                                       0x210c,9,false,true);
                                                    cMyTrace::operator()(local_31c,"Success");
                                                    cMyTrace::cMyTrace(local_30c,
                                                                       "bool CDataManager::init()",
                                                                       0x2111,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_30c,
                                                                                                                              
                                                  "\t- Import NPC Relation Event Info Success");
                                                  cVar1 = importNPCRelationEventScript
                                                                    ("Event/NPCRelationEvent.evt",
                                                                     (CNPCRelationEventManager *)
                                                                     (this + 0x4d28));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_2ec,
                                                                       "bool CDataManager::init()",
                                                                       0x211b,9,false,true);
                                                    cMyTrace::operator()(local_2ec,"Success");
                                                    cMyTrace::cMyTrace(local_2dc,
                                                                       "bool CDataManager::init()",
                                                                       0x211e,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_2dc,
                                                               "\t- Import Emotion Type Tags Info ")
                                                    ;
                                                    cVar1 = importEmotionTypeTagsScript
                                                                      (
                                                  "Etc/EmotionExpressionData.etc",
                                                  (stEmotionTypeTagsInfo *)(this + 0x4d44));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_2bc,
                                                                       "bool CDataManager::init()",
                                                                       0x2124,9,false,true);
                                                    cMyTrace::operator()(local_2bc,"Success");
                                                    cMyTrace::cMyTrace(local_2ac,
                                                                       "bool CDataManager::init()",
                                                                       0x2126,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_2ac,
                                                                                                                              
                                                  "\t- Import Equipment Grade Sample Info ");
                                                  cVar1 = importEquipmentGradeSampleInfo
                                                                    ("Etc/EquipmentGradeSample.etc",
                                                                     (stEquipmentGradeSample *)
                                                                     (this + 0x4d5c));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_28c,
                                                                       "bool CDataManager::init()",
                                                                       0x212c,9,false,true);
                                                    cMyTrace::operator()(local_28c,"Success");
                                                    cMyTrace::cMyTrace(local_27c,
                                                                       "bool CDataManager::init()",
                                                                       0x215c,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_27c,
                                                               "\t- Import Creature Script");
                                                    cVar1 = initCreatureScript("Creature/",
                                                                               "Creature.lst",
                                                                               "ExpTable.tbl");
                                                    if (cVar1 == '\x01') {
                                                      this_28 = (CCreatureScriptMgr *)
                                                                user_creature::
                                                                GetInstanceCreatureScriptMgr();
                                                      cVar1 = user_creature::CCreatureScriptMgr::
                                                              LoadCreatureScriptFile(this_28);
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_24c,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x2168,9,false,true);
                                                  cMyTrace::operator()(local_24c,"Success");
                                                  CMapList::LoadPvPSinglePlayableMap("extern.sd");
                                                  this_29 = operator_new(100);
                    /* try { // try from 0835e1f3 to 0835e1f7 has its CatchHandler @ 0835e1fa */
                                                  CNPCScriptList::CNPCScriptList(this_29);
                                                  *(CNPCScriptList **)(this + 0xa8d0) = this_29;
                    /* try { // try from 0835e221 to 0835e225 has its CatchHandler @ 0835f124 */
                                                  this_30 = operator_new(0x18);
                    /* try { // try from 0835e22d to 0835e231 has its CatchHandler @ 0835e234 */
                                                  CNPCDynamicInfoManager::CNPCDynamicInfoManager
                                                            (this_30);
                                                  *(CNPCDynamicInfoManager **)(this + 0xa8d4) =
                                                       this_30;
                    /* try { // try from 0835e285 to 0835e37f has its CatchHandler @ 0835f124 */
                                                  cMyTrace::cMyTrace(local_23c,
                                                                     "bool CDataManager::init()",
                                                                     0x217a,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_23c,"\t- Import Npc Script ");
                                                  iVar3 = CNPCScriptList::initScript
                                                                    (*(CNPCScriptList **)
                                                                      (this + 0xa8d0),"Npc/",
                                                                     "Npc.lst","common.dat");
                                                  if (iVar3 == 0) {
                                                    cMyTrace::cMyTrace(local_21c,
                                                                       "bool CDataManager::init()",
                                                                       0x2180,9,false,true);
                                                    cMyTrace::operator()(local_21c,"Success");
                                                    this_31 = operator_new(0x14);
                    /* try { // try from 0835e387 to 0835e38b has its CatchHandler @ 0835e38e */
                                                    CItemLimitEditionMgr::CItemLimitEditionMgr
                                                              (this_31);
                                                    *(CItemLimitEditionMgr **)(this + 0x4d40) =
                                                         this_31;
                    /* try { // try from 0835e3ae to 0835e5c8 has its CatchHandler @ 0835f124 */
                                                    WongWork::CMCAPManager::init();
                                                    pCVar7 = (CSyncScript *)
                                                             sync_script::GetInstanceSyncScript();
                                                    sync_script::CSyncScript::
                                                    trancate_item_parts_set(pCVar7);
                                                    cMyTrace::cMyTrace(local_20c,
                                                                       "bool CDataManager::init()",
                                                                       0x21ac,9,true,false);
                                                    cMyTrace::operator()
                                                              (local_20c,
                                                               "\t- Import Equipment Part Set Info "
                                                              );
                                                    cVar1 = importEquipmentPartSetInfo
                                                                      ("Etc/EquipmentPartSet.etc",3)
                                                    ;
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_1ec,
                                                                         "bool CDataManager::init()"
                                                                         ,0x21b3,9,false,true);
                                                      cMyTrace::operator()(local_1ec,"Success");
                                                      std::
                                                  map<int,STEquipmentPartSetData,std::less<int>,std::allocator<std::pair<int_const,STEquipmentPartSetData>>>
                                                  ::begin(local_f5c);
                                                  while( true ) {
                                                    std::
                                                  map<int,STEquipmentPartSetData,std::less<int>,std::allocator<std::pair<int_const,STEquipmentPartSetData>>>
                                                  ::end(local_1dc);
                                                  cVar1 = std::
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  ::operator!=((
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  *)local_f5c,(_Rb_tree_iterator *)local_1dc);
                                                  if (cVar1 == '\0') break;
                                                  local_20 = std::
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  ::operator->((
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  *)local_f5c);
                                                  local_24 = local_20 + 4;
                                                  local_20 = local_20 + 0x10;
                                                  std::
                                                  vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>
                                                  ::begin();
                                                  while( true ) {
                                                    std::
                                                  vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>
                                                  ::end();
                                                  bVar2 = __gnu_cxx::operator!=(local_f60,local_1d8)
                                                  ;
                                                  if (!bVar2) break;
                                                  pSVar12 = (STEquipmentPartSetPiece *)
                                                            __gnu_cxx::
                                                                                                                        
                                                  __normal_iterator<STEquipmentPartSetPiece*,std::vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>>
                                                  ::operator*(local_f60);
                                                  piVar13 = (int *)std::
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  ::operator->((
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  *)local_f5c);
                                                  iVar3 = *piVar13;
                                                  pCVar7 = (CSyncScript *)
                                                           sync_script::GetInstanceSyncScript();
                                                  sync_script::CSyncScript::insert_item_parts_set
                                                            (pCVar7,iVar3,pSVar12);
                                                  __gnu_cxx::
                                                  __normal_iterator<STEquipmentPartSetPiece*,std::vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>>
                                                  ::operator++(local_f60);
                                                  }
                                                  std::
                                                  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
                                                  ::begin(local_f64);
                                                  while( true ) {
                                                    std::
                                                  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
                                                  ::end(local_1d4);
                                                  cVar1 = std::
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  ::operator!=((
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  *)local_f64,(_Rb_tree_iterator *)local_1d4);
                                                  if (cVar1 == '\0') break;
                                                  STEquipmentScript::STEquipmentScript(local_1914);
                    /* try { // try from 0835e5e6 to 0835e65b has its CatchHandler @ 0835e65e */
                                                  std::string::operator=
                                                            (asStack_1868,
                                                             (string *)
                                                             (*(int *)(local_24 + 8) + 0x668));
                                                  iVar3 = std::
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  ::operator->((
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  *)local_f64);
                                                  EquipmentParameterInfo::operator=
                                                            (aEStack_1754,
                                                             (EquipmentParameterInfo *)(iVar3 + 4));
                                                  piVar13 = (int *)std::
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  ::operator->((
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  *)local_f64);
                                                  iVar3 = *piVar13;
                                                  puVar14 = (uint *)std::
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  ::operator->((
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  *)local_f5c);
                                                  uVar4 = *puVar14;
                                                  pCVar7 = (CSyncScript *)
                                                           sync_script::GetInstanceSyncScript();
                                                  sync_script::CSyncScript::
                                                  insert_equiptment_item_to_db
                                                            (pCVar7,local_1914,uVar4,2,iVar3);
                    /* try { // try from 0835e682 to 0835e9f0 has its CatchHandler @ 0835f124 */
                                                  STEquipmentScript::~STEquipmentScript(local_1914);
                                                  std::
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  ::operator++((
                                                  _Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>
                                                  *)local_f64);
                                                  }
                                                  std::
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  ::operator++((
                                                  _Rb_tree_iterator<std::pair<int_const,STEquipmentPartSetData>>
                                                  *)local_f5c);
                                                  }
                                                  cMyTrace::cMyTrace(local_1d0,
                                                                     "bool CDataManager::init()",
                                                                     0x21ca,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_1d0,"\t- Import FairPvPStat ");
                                                  cVar1 = importPairPvPStatScript
                                                                    ((FairPvPStatScript *)
                                                                     (this + 0x4df8),
                                                                     "Etc/FairPvPStat.etc");
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_1b0,
                                                                       "bool CDataManager::init()",
                                                                       0x21d1,9,false,true);
                                                    cMyTrace::operator()(local_1b0,"Success");
                                                    cVar1 = initPvPSkillTreeScript
                                                                      ("Etc/","PvPSkillTree.lst");
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = PvPSkillTreeParameterScript::
                                                              load_pvp_skill_tree_list
                                                                        ((
                                                  PvPSkillTreeParameterScript *)(this + 0xa800));
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = PvPSkillTreeParameterScript::
                                                            importPairPvPSkillPointScript
                                                                      ((PvPSkillTreeParameterScript
                                                                        *)(this + 0xa800),
                                                                       "Etc/PvPSkillPoint.etc");
                                                    if (cVar1 == '\x01') {
                                                      cVar1 = initFairPVPSkillPoint(this);
                                                      if (cVar1 == '\x01') {
                                                        this_32 = operator_new(0x5c);
                    /* try { // try from 0835e9f8 to 0835e9fc has its CatchHandler @ 0835e9ff */
                                                        EventClassify::CEventScriptMng::
                                                        CEventScriptMng(this_32);
                                                        *(CEventScriptMng **)(this + 0xb504) =
                                                             this_32;
                    /* try { // try from 0835ea50 to 0835f11c has its CatchHandler @ 0835f124 */
                                                        cMyTrace::cMyTrace(local_160,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x221d,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_160,
                                                             "\t- Loading Ingame Event Script List "
                                                            );
                                                  cVar1 = importInGameEventInfoList
                                                                    (*(InGameEventInfoList **)
                                                                      (this + 0xb504),
                                                                     "Event/InGameEventList.evt");
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_140,
                                                                       "bool CDataManager::init()",
                                                                       0x2228,9,false,true);
                                                    cMyTrace::operator()(local_140,"Success");
                                                    cVar1 = EventClassify::CEventScriptMng::
                                                            initScriptlist(*(InGameEventInfoList **)
                                                                            (this + 0xb504));
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_130,
                                                                         "bool CDataManager::init()"
                                                                         ,0x2231,9,true,false);
                                                      cMyTrace::operator()
                                                                (local_130,
                                                                 "\t- Loading Event Avatar List ");
                                                      cVar1 = importEventAvatarListScript
                                                                        ((EventAvatarListScript *)
                                                                         (this + 0xb508),
                                                                         "Event/EventAvatarList.evt"
                                                                        );
                                                      if (cVar1 == '\x01') {
                                                        cMyTrace::cMyTrace(local_110,
                                                                                                                                                      
                                                  "bool CDataManager::init()",0x2240,9,false,true);
                                                  cMyTrace::operator()(local_110,"Success");
                                                  cMyTrace::cMyTrace(local_100,
                                                                     "bool CDataManager::init()",
                                                                     0x2244,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_100,"\t- Loading Event Etc Info "
                                                            );
                                                  cVar1 = importEventEtcScript
                                                                    ((EventEtcScript *)
                                                                     (this + 0xb520),
                                                                     "Event/EventEtc.evt");
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_e0,
                                                  "bool CDataManager::init()",0x2252,9,false,true);
                                                  cMyTrace::operator()(local_e0,"Success");
                                                  cVar1 = AvatarVariation::
                                                          importAvatarColorVariation
                                                                    ((AvatarColorInfo *)
                                                                     (this + 0x8740));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_c0,
                                                  "bool CDataManager::init()",0x229b,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_c0,
                                                  "\t- Loading Mercenary System ");
                                                  local_30 = 0;
                                                  local_30 = importMercenarySystemEtcScript
                                                                       ("Etc/mercenary.etc",
                                                                        (stMercenarySystemInfo *)
                                                                        (this + 0xa8dc));
                                                  if (local_30 == 0) {
                                                    cMyTrace::cMyTrace(local_a0,
                                                  "bool CDataManager::init()",0x22a3,9,false,true);
                                                  cMyTrace::operator()(local_a0,"Success");
                                                  NeedMaterialDataManager::getInstance();
                                                  cVar1 = importPcBangEquipmentRendar
                                                                    ("Etc/PcBangRentalService.etc",
                                                                     (PcBangItemRentarData *)
                                                                     (this + 0x4af4));
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = importDimensionActivationData
                                                                      (
                                                  "Event/DimensionActivationEvent.evt",
                                                  (DimensionActivationData *)(this + 0x4b18));
                                                  if (cVar1 == '\x01') {
                                                    cVar1 = InstanceRentalSystem::Ready
                                                                      (GlobalData::s_rentalSystem);
                                                    if (cVar1 == '\x01') {
                                                      cMyTrace::cMyTrace(local_70,
                                                  "bool CDataManager::init()",0x2331,9,true,false);
                                                  cMyTrace::operator()
                                                            (local_70,
                                                  "\t- Load Delete Invalid Item Script");
                                                  cVar1 = DeleteInvalidItemScript::loadScript
                                                                    ((DeleteInvalidItemScript *)
                                                                     (this + 0xb658));
                                                  if (cVar1 == '\x01') {
                                                    cMyTrace::cMyTrace(local_50,
                                                  "bool CDataManager::init()",0x2337,9,false,true);
                                                  cMyTrace::operator()(local_50,"Success");
                                                  uVar15 = 1;
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_60,
                                                  "bool CDataManager::init()",0x2334,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_60,
                                                  "\t- Load Delete Invalid Item Script Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    this_33 = std::operator<<((ostream *)&std::cerr,
                                                                                                                                                            
                                                  "[GlobalData::Init] The rental system is not ready!"
                                                  );
                                                  std::ostream::operator<<
                                                            (this_33,std::
                                                  endl<char,std::char_traits<char>>);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_80,
                                                  "bool CDataManager::init()",0x230b,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_80,
                                                  "\t- DimensionActivationEvent Fail!\n");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_90,
                                                  "bool CDataManager::init()",0x2304,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_90,
                                                  "\t- PcBangRentalService Fail!\n");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b0,
                                                  "bool CDataManager::init()",0x22a0,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_b0,
                                                  "\t- Loading Mercenary System Fail - %d line \n",
                                                  local_30);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_d0,
                                                  "bool CDataManager::init()",0x227b,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_d0,
                                                  "\t- Loading importAvatarColorVariation  Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_f0,
                                                  "bool CDataManager::init()",0x224e,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_f0,
                                                  "\t- Fail Loading Event Etc Info");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_120,
                                                                       "bool CDataManager::init()",
                                                                       0x223d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_120,
                                                               "\t- Fail Loading Event Avatar List")
                                                    ;
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_150,
                                                                       "bool CDataManager::init()",
                                                                       0x2224,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_150,
                                                                                                                              
                                                  "\t- Fail load ingame_event_script_list");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_170,
                                                                       "bool CDataManager::init()",
                                                                       0x21eb,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_170,
                                                               "\t- initFairPVPSkillPoint fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_180,
                                                                       "bool CDataManager::init()",
                                                                       0x21e3,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_180,
                                                                                                                              
                                                  "\t- Load PairPvPSkillPointScript fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_190,
                                                                       "bool CDataManager::init()",
                                                                       0x21dd,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_190,
                                                                                                                              
                                                  "\t- Load load_pvp_skill_tree_list fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_1a0,
                                                                       "bool CDataManager::init()",
                                                                       0x21d7,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_1a0,
                                                               "\t- Load PvPSkillTree.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_1c0,
                                                                       "bool CDataManager::init()",
                                                                       0x21cd,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_1c0,
                                                                                                                              
                                                  "\t- Fail load FairPvPStat Script File");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_1fc,
                                                                       "bool CDataManager::init()",
                                                                       0x21af,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_1fc,
                                                                                                                              
                                                  "\t- Import Equipment Part Set Info Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_22c,
                                                                       "bool CDataManager::init()",
                                                                       0x217d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_22c,"\t- Import Npc.lst Fail\n"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_25c,
                                                                       "bool CDataManager::init()",
                                                                       0x2165,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_25c,
                                                               "\t- Import Creature Script Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_26c,
                                                                       "bool CDataManager::init()",
                                                                       0x215f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_26c,
                                                                                                                              
                                                  "\t- Import Creature Creature.lst fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_29c,
                                                                       "bool CDataManager::init()",
                                                                       0x2129,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_29c,
                                                                                                                              
                                                  "\t- Import Equipment Grade Sample Info Fail\n");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_2cc,
                                                                       "bool CDataManager::init()",
                                                                       0x2121,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_2cc,
                                                                                                                              
                                                  "\t- Import Emotion Type Tags Info Fail\n");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_2fc,
                                                                       "bool CDataManager::init()",
                                                                       0x2118,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_2fc,
                                                                                                                              
                                                  "\t- Import NPC Relation Event Info Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_32c,
                                                                       "bool CDataManager::init()",
                                                                       0x2109,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_32c,
                                                                                                                              
                                                  "\t- Import Condition Event Script Dungeon Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_35c,
                                                                       "bool CDataManager::init()",
                                                                       0x20e2,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_35c,
                                                                                                                              
                                                  "\t- Import Condition Event Info Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_38c,
                                                                       "bool CDataManager::init()",
                                                                       0x20be,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_38c,
                                                               "\t- Import DB Log Item  Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_3bc,
                                                                       "bool CDataManager::init()",
                                                                       0x20a5,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_3bc,
                                                               "\t- importLimitItemUsageInfo Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_3dc,
                                                                       "bool CDataManager::init()",
                                                                       0x2095,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_3dc,
                                                                                                                              
                                                  "\t- Init Unlimit Challenge Info Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_40c,
                                                                       "bool CDataManager::init()",
                                                                       0x208c,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_40c,
                                                               "\t- Init Reseal table Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_42c,
                                                                       "bool CDataManager::init()",
                                                                       0x2072,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_42c,
                                                                                                                              
                                                  "\t- Loading 3rd Chronice Upgrade Script Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_43c,
                                                                       "bool CDataManager::init()",
                                                                       0x206a,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_43c,
                                                               "\t- Item Upgrade Separate Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_45c,
                                                                       "bool CDataManager::init()",
                                                                       0x2061,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_45c,
                                                               "\t- Init Item Upgrade Info Fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_48c,
                                                                       "bool CDataManager::init()",
                                                                       0x2058,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_48c,
                                                               "\t- Init Channel Script Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_4bc,
                                                                       "bool CDataManager::init()",
                                                                       0x2047,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_4bc,
                                                                                                                              
                                                  "\t- Init Get Channel Data(channel_info.etc) Fail"
                                                  );
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_4ec,
                                                                       "bool CDataManager::init()",
                                                                       0x203d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_4ec,"\t- Init Reward SP Fail\n"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_51c,
                                                                       "bool CDataManager::init()",
                                                                       0x2035,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_51c,"\t- Init PVP Grade Fail\n"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_59c,
                                                                       "bool CDataManager::init()",
                                                                       0x201a,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_59c,
                                                                                                                              
                                                  "\t- LoadScript() error Etc/ItemDropInfo_Control.etc line(%d)"
                                                  ,local_34);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_5ac,
                                                                       "bool CDataManager::init()",
                                                                       0x2012,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_5ac,
                                                                                                                              
                                                  "\t- Loading Item Generator Manager Fail\n");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_5cc,
                                                                       "bool CDataManager::init()",
                                                                       0x2004,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_5cc,
                                                               "\t- Loading Advance Altar Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_5fc,
                                                                       "bool CDataManager::init()",
                                                                       0x1ffb,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_5fc,
                                                               "\t- Loading Disjoints Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_62c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ff2,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_62c,
                                                               "\t- Loading Characters Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_65c,
                                                                       "bool CDataManager::init()",
                                                                       0x1fe9,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_65c,"\t- Loading Quests Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_67c,
                                                                       "bool CDataManager::init()",
                                                                       0x1fe1,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_67c,
                                                               "\t- Loading World Map List Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_68c,
                                                                       "bool CDataManager::init()",
                                                                       0x1fcf,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_68c,
                                                               "\t- Fail truncate_random_option_ref"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_69c,
                                                                       "bool CDataManager::init()",
                                                                       0x1fc9,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_69c,
                                                               "\t- Fail truncate_random_option_ref"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_6ac,
                                                                       "bool CDataManager::init()",
                                                                       0x1fc3,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_6ac,
                                                               "Fail load initRandomOptionItem");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    LogManager::logFormat
                                                              (1,"data_manager.cpp",
                                                               "bool CDataManager::init()",0x1fa1,
                                                                                                                              
                                                  "[AVATAR ROULETTE] initalizing(InitAddCharacSkill) failed."
                                                  );
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_6fc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f9a,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_6fc,
                                                                                                                              
                                                  "\t- Initalizing Avatar Roulette Fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_70c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f90,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_70c,
                                                               "\t- Loading Avatar Roulette Fail");
                                                    uVar15 = 0;
                                                  }
LAB_0835f13c:
                    /* try { // try from 0835f145 to 0835f149 has its CatchHandler @ 0835f14c */
                                                  AvatarRoulette::~AvatarRoulette(local_1080);
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_73c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f6f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_73c,"\t- Loading items Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_76c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f5f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_76c,
                                                                                                                              
                                                  "\t- Loading ActiveStatus Damage Fail");
                                                  uVar15 = 0;
                                                  }
                                                  SDCActiveStatusSyncServer::
                                                  ~SDCActiveStatusSyncServer(&local_f39);
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_79c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f55,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_79c,
                                                               "\t- Loading Creatrue Damage Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_7cc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f4d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_7cc,"\t- Loading Skills Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_7fc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f3e,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_7fc,"\t- Loading Monsters Fail"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_82c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f33,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_82c,"\t- Loading Maps Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_84c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f29,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_84c,
                                                               "Load Etc/pvpmapbasicdata.etc fail");
                                                    uVar15 = 0;
                                                  }
                    /* try { // try from 0835f195 to 0835f199 has its CatchHandler @ 0835f19c */
                                                  std::
                                                  vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>::
                                                  ~vector(local_f38);
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_86c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f20,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_86c,
                                                               "\t- Emoticon Script file fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_87c,
                                                                       "bool CDataManager::init()",
                                                                       0x1f1b,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_87c,
                                                               "\t- Emoticon List file error");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_8ac,
                                                                       "bool CDataManager::init()",
                                                                       0x1f0f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_8ac,
                                                                                                                              
                                                  "\t- Fail load TowerOfDespair System Script");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_8dc,
                                                                       "bool CDataManager::init()",
                                                                       0x1f05,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_8dc,"\t- Loading Dungeons Fail"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    puts("Load WorldMap.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_90c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ee2,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_90c,
                                                               "\t- Loading Compound Avatar Fail\n")
                                                    ;
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_96c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ebf,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_96c,
                                                                                                                              
                                                  "\t- Fail load Compound Item Bind Cube Script File"
                                                  );
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_9bc,
                                                                       "bool CDataManager::init()",
                                                                       0x1e7e,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_9bc,
                                                                                                                              
                                                  "\t- Mission Parameter Script file fail\n");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_9cc,
                                                                       "bool CDataManager::init()",
                                                                       0x1e79,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_9cc,
                                                               "\t- Mission Script file fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_9dc,
                                                                       "bool CDataManager::init()",
                                                                       0x1e6d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_9dc,
                                                               "\t- Load ItemShop file fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_9ec,
                                                                       "bool CDataManager::init()",
                                                                       0x1e68,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_9ec,
                                                               "\t- Load ItemShop.lst fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_9fc,
                                                                       "bool CDataManager::init()",
                                                                       0x1e61,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_9fc,
                                                               "\t- Load SkillList.lst fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a0c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e5c,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a0c,"\t- Load Quest.lst fail\n"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a1c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e4d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a1c,
                                                               "\t- Load Dungeon.lst fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a2c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e48,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a2c,"\t- Load Map.lst fail\n");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    puts("Load stackable.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a3c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e33,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a3c,
                                                               "\t- Load equipment.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a4c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e2d,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a4c,
                                                               "\t- Load PassiveObject.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a5c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e28,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a5c,"\t- Load Monster.lst fail"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a6c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e23,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a6c,
                                                               "\t- Load Character.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a7c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e18,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a7c,
                                                               "\t- WarArea.etc file load failed");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_a8c,
                                                                       "bool CDataManager::init()",
                                                                       0x1e0f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_a8c,
                                                               "\t- LoadPremiumInfo Fail(Line: %d)",
                                                               local_38);
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_aac,
                                                                       "bool CDataManager::init()",
                                                                       0x1dbf,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_aac,
                                                               "\t- Load AI Character fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_abc,
                                                                       "bool CDataManager::init()",
                                                                       0x1db9,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_abc,
                                                               "\t- Load AICharacter.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_acc,
                                                                       "bool CDataManager::init()",
                                                                       0x1dac,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_acc,
                                                                                                                              
                                                  "\t- BoosterGage.etc file load failed");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_adc,
                                                                       "bool CDataManager::init()",
                                                                       0x1da1,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_adc,
                                                                                                                              
                                                  "\t- GrowthPowerRewardBuff.etc file load failed");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_aec,
                                                                       "bool CDataManager::init()",
                                                                       0x1d99,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_aec,
                                                                                                                              
                                                  "\t- FairPVPEquipment.etc file load failed");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_afc,
                                                                       "bool CDataManager::init()",
                                                                       0x1d90,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_afc,
                                                                                                                              
                                                  "\t- invalidName.etc file load failed");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b0c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d8b,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b0c,
                                                               "\t- slangname.etc file load failed")
                                                    ;
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b2c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d61,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b2c,
                                                               "\t- importTrainingQuestScript Fail")
                                                    ;
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b3c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d57,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b3c,
                                                               "\t- importQuestParameterScript Fail"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b4c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d3e,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b4c,
                                                               "\t- Load EventCharacter.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b5c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d38,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b5c,
                                                               "\t- Load EventCharacter.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b6c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d1e,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b6c,
                                                               "\t- importTitleBookEtcScript Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b7c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d16,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b7c,
                                                               "\t- importAccountCargoScript Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b8c,
                                                                       "bool CDataManager::init()",
                                                                       0x1d0f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b8c,
                                                               "\t- importSecretShopScript Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_b9c,
                                                                       "bool CDataManager::init()",
                                                                       0x1ce9,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_b9c,
                                                               "\t- importPowerParameterScript Fail"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_bac,
                                                                       "bool CDataManager::init()",
                                                                       0x1ce2,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_bac,
                                                               "\t- importGuildParameterScript Fail"
                                                              );
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_bbc,
                                                                       "bool CDataManager::init()",
                                                                       0x1cd5,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_bbc,
                                                               "\t- importPVPChannelList Fail()");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    printf("importConfigParameter Fail(%d)\n",
                                                           local_3c);
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    printf(
                                                  "importAchievementRewardParameter Fail(%d)\n",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    printf(
                                                  "importAdvanceAltarShopParameter Fail(%d)\n",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    printf(
                                                  "loadAdvanceAltarTimeLineParameter Fail(%d)\n",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    printf("importDDayEventEtcScript Fail(%d)\n",
                                                           local_3c);
                                                    uVar15 = 0;
                                                  }
                                                  std::
                                                  vector<_DailySchedule,std::allocator<_DailySchedule>>
                                                  ::~vector(local_f2c);
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_bcc,
                                                                       "bool CDataManager::init()",
                                                                       0x1c41,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_bcc,
                                                                                                                              
                                                  "\t- importActionPointSystemEtcScript Chn_ActionPointSystemGM.etc Fail(%d)"
                                                  ,local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_bdc,
                                                                       "bool CDataManager::init()",
                                                                       0x1c3a,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_bdc,
                                                                                                                              
                                                  "\t- importActionPointSystemEtcScript Chn_ActionPointSystem.etc Fail(%d)"
                                                  ,local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_bec,
                                                                       "bool CDataManager::init()",
                                                                       0x1c20,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_bec,
                                                                                                                              
                                                  "\t- importVillageAttackedScript Fail(%d)",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_bfc,
                                                                       "bool CDataManager::init()",
                                                                       0x1c18,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_bfc,
                                                                                                                              
                                                  "\t- Fail insert_mapping_equip_info_table");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c0c,
                                                                       "bool CDataManager::init()",
                                                                       0x1c12,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c0c,
                                                                                                                              
                                                  "\t- Equipment Script mapping table load fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c1c,
                                                                       "bool CDataManager::init()",
                                                                       0x1c0c,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c1c,
                                                                                                                              
                                                  "\t- Equipment Script mapping table load fail");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c2c,
                                                                       "bool CDataManager::init()",
                                                                       0x1c06,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c2c,
                                                                                                                              
                                                  "\t- Fail truncate_mapping_equip_info_table");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c4c,
                                                                       "bool CDataManager::init()",
                                                                       0x1be8,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c4c,
                                                                                                                              
                                                  "\t- import UltimateDungeonList Script Fail(%d)");
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c5c,
                                                                       "bool CDataManager::init()",
                                                                       0x1be0,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c5c,
                                                                                                                              
                                                  "\t- importItemMakingSkillScript Fail(%d)",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c6c,
                                                                       "bool CDataManager::init()",
                                                                       0x1bd7,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c6c,
                                                               "\t- ImportSecurityReward Fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c7c,
                                                                       "bool CDataManager::init()",
                                                                       0x1bcf,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c7c,
                                                                                                                              
                                                  "\t- ImportBroadCastItemScript Fail(%d)",local_3c)
                                                  ;
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c8c,
                                                                       "bool CDataManager::init()",
                                                                       0x1bbb,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c8c,
                                                               "\t- ImportBingoScript Fail(%d)",
                                                               local_3c);
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_c9c,
                                                                       "bool CDataManager::init()",
                                                                       0x1bb0,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_c9c,
                                                               "\t- ReturnUserReward Fail(%d)",
                                                               local_3c);
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_cac,
                                                                       "bool CDataManager::init()",
                                                                       0x1ba7,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_cac,
                                                                                                                              
                                                  "\t- NewAccountLevelUpToJob StackableReward Fail(%d)"
                                                  ,local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    printf("ImportGrowthCapsuleScript Fail(%d)\n",
                                                           local_3c);
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_cbc,
                                                                       "bool CDataManager::init()",
                                                                       0x1b8a,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_cbc,
                                                                                                                              
                                                  "\t- ImportLevelUpRewardItemScript Fail(%d)",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_ccc,
                                                                       "bool CDataManager::init()",
                                                                       0x1b83,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_ccc,
                                                                                                                              
                                                  "\t- ImportSeriaBlessingScript Fail(%d)",local_3c)
                                                  ;
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_cdc,
                                                                       "bool CDataManager::init()",
                                                                       0x1b63,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_cdc,
                                                                                                                              
                                                  "\t- importIndependent_DropScript Fail(%d)",
                                                  local_3c);
                                                  uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_cec,
                                                                       "bool CDataManager::init()",
                                                                       0x1b5c,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_cec,
                                                               "\t- Load IndependentDrop.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_cfc,
                                                                       "bool CDataManager::init()",
                                                                       0x1b56,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_cfc,
                                                               "\t- Load IndependentDrop.lst fail");
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_d0c,
                                                                       "bool CDataManager::init()",
                                                                       0x1b4f,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_d0c,
                                                               "\t- importQuestShopScript Fail(%d)",
                                                               local_3c);
                                                    uVar15 = 0;
                                                  }
                                                  }
                                                  else {
                                                    cMyTrace::cMyTrace(local_d1c,
                                                                       "bool CDataManager::init()",
                                                                       0x1b20,9,true,true);
                                                    cMyTrace::operator()
                                                              (local_d1c,
                                                                                                                              
                                                  "\t- BlueMarble initBlueMarbleInfo Fail\n");
                                                  uVar15 = 0;
                                                  }
                                                }
                                                else {
                                                  cMyTrace::cMyTrace(local_d2c,
                                                                     "bool CDataManager::init()",
                                                                     0x1b1a,9,true,true);
                                                  cMyTrace::operator()
                                                            (local_d2c,
                                                             "\t- BlueMarble initMapList Fail\n");
                                                  uVar15 = 0;
                                                }
                                              }
                                              else {
                                                cMyTrace::cMyTrace(local_d3c,
                                                                   "bool CDataManager::init()",
                                                                   0x1b14,9,true,true);
                                                cMyTrace::operator()
                                                          (local_d3c,
                                                           "\t- BlueMarble initTileList Fail\n");
                                                uVar15 = 0;
                                              }
                                            }
                                            else {
                                              cMyTrace::cMyTrace(local_d4c,
                                                                 "bool CDataManager::init()",0x1b02,
                                                                 9,true,true);
                                              cMyTrace::operator()
                                                        (local_d4c,
                                                         "\t- importCharacterManageScript Fail");
                                              uVar15 = 0;
                                            }
                                          }
                                          else {
                                            cMyTrace::cMyTrace(local_d5c,"bool CDataManager::init()"
                                                               ,0x1afb,9,true,true);
                                            cMyTrace::operator()
                                                      (local_d5c,"\t- importStrikerScript Fail");
                                            uVar15 = 0;
                                          }
                                        }
                                        else {
                                          cMyTrace::cMyTrace(local_d6c,"bool CDataManager::init()",
                                                             0x1af3,9,true,true);
                                          cMyTrace::operator()
                                                    (local_d6c,
                                                     "\t- importCharacLinkSystemScript Fail(%d)",
                                                     local_3c);
                                          uVar15 = 0;
                                        }
                                      }
                                      else {
                                        cMyTrace::cMyTrace(local_d7c,"bool CDataManager::init()",
                                                           0x1ae8,9,true,true);
                                        cMyTrace::operator()
                                                  (local_d7c,"\t- importHellPartyScript Fail(%d)",
                                                   local_3c);
                                        uVar15 = 0;
                                      }
                                    }
                                    else {
                                      cMyTrace::cMyTrace(local_d8c,"bool CDataManager::init()",
                                                         0x1ae1,9,true,true);
                                      cMyTrace::operator()
                                                (local_d8c,"\t- importBloodDungeonScript Fail(%d)",
                                                 local_3c);
                                      uVar15 = 0;
                                    }
                                  }
                                  else {
                                    cMyTrace::cMyTrace(local_d9c,"bool CDataManager::init()",0x1ada,
                                                       9,true,true);
                                    cMyTrace::operator()
                                              (local_d9c,"\t- importRankSystemScript Fail");
                                    uVar15 = 0;
                                  }
                                }
                                else {
                                  cMyTrace::cMyTrace(local_dac,"bool CDataManager::init()",0x1ad4,9,
                                                     true,true);
                                  cMyTrace::operator()
                                            (local_dac,"\t- importDeathTowerScript Fail(%d)",
                                             local_40);
                                  uVar15 = 0;
                                }
                              }
                              else {
                                puts("importTowerInfo Faile");
                                uVar15 = 0;
                              }
                            }
                            else {
                              cMyTrace::cMyTrace(local_dbc,"bool CDataManager::init()",0x1ac5,9,true
                                                 ,true);
                              cMyTrace::operator()(local_dbc,"\t- Load expertjob fail");
                              uVar15 = 0;
                            }
                          }
                          else {
                            cMyTrace::cMyTrace(local_dcc,"bool CDataManager::init()",0x1abf,9,true,
                                               true);
                            cMyTrace::operator()(local_dcc,"\t- Load expertjob.lst fail");
                            uVar15 = 0;
                          }
                        }
                        else {
                          cMyTrace::cMyTrace(local_ddc,"bool CDataManager::init()",0x1ab7,9,true,
                                             true);
                          cMyTrace::operator()(local_ddc,"\t- [training first give] error");
                          uVar15 = 0;
                        }
                      }
                      else {
                        cMyTrace::cMyTrace(local_dec,"bool CDataManager::init()",0x1aad,9,true,true)
                        ;
                        cMyTrace::operator()(local_dec,"\t- Import ImageCommunicationInfo Failed\n")
                        ;
                        uVar15 = 0;
                      }
                    }
                    else {
                      cMyTrace::cMyTrace(local_e0c,"bool CDataManager::init()",0x1a83,9,true,true);
                      cMyTrace::operator()(local_e0c,"\t- JumpingCharacterEventScript Fail!");
                      uVar15 = 0;
                    }
                  }
                  else {
                    cMyTrace::cMyTrace(local_e1c,"bool CDataManager::init()",0x1a7b,9,true,true);
                    cMyTrace::operator()(local_e1c,"\t- SeriaRoomAnimationDecoEventScript Fail!");
                    uVar15 = 0;
                  }
                }
                else {
                  cMyTrace::cMyTrace(local_e2c,"bool CDataManager::init()",0x1a73,9,true,true);
                  cMyTrace::operator()(local_e2c,"\t- CharacterCreateCreatureGiftScript Fail!");
                  uVar15 = 0;
                }
              }
              else {
                cMyTrace::cMyTrace(local_e3c,"bool CDataManager::init()",0x1a6b,9,true,true);
                cMyTrace::operator()(local_e3c,"\t- UseJobFatigueGiftScript Fail!");
                uVar15 = 0;
              }
            }
            else {
              cMyTrace::cMyTrace(local_e4c,"bool CDataManager::init()",0x1a63,9,true,true);
              cMyTrace::operator()(local_e4c,"\t- CharacterCreateGiftScript Fail!");
              uVar15 = 0;
            }
          }
          else {
            cMyTrace::cMyTrace(local_e5c,"bool CDataManager::init()",0x1a5b,9,true,true);
            cMyTrace::operator()(local_e5c,"\t- GrownEquipmentScript Fail!");
            uVar15 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_e6c,"bool CDataManager::init()",0x1a53,9,true,true);
          cMyTrace::operator()(local_e6c,"\t- SeriaRoomDecoEventScript Fail!");
          uVar15 = 0;
        }
      }
      else {
        cMyTrace::cMyTrace(local_e7c,"bool CDataManager::init()",0x1a4a,9,true,true);
        cMyTrace::operator()(local_e7c,"\t- importInGameAdvertisementEtcScript Fail");
        uVar15 = 0;
      }
    }
    else {
      cMyTrace::cMyTrace(local_e8c,"bool CDataManager::init()",0x1a35,9,true,true);
      cMyTrace::operator()(local_e8c,"\t- importServerParameterScript Fail");
      uVar15 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_f0c,"bool CDataManager::init()",0x1972,9,true,true);
    cMyTrace::operator()(local_f0c,"\t- InitRDARScriptStringManager Fail");
    uVar15 = 0;
  }
  return uVar15;
}
```
