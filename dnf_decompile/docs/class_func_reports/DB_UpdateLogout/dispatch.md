# dispatch

`_ZN15DB_UpdateLogout8dispatchEiiP6Stream`

`DB_UpdateLogout::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLogout` | `0x08418612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418612  _ZN15DB_UpdateLogout8dispatchEiiP6Stream
#           DB_UpdateLogout::dispatch(int, int, Stream*)
# range [0x08418612, 0x08418a95]
08418612 +0x000:  push   %ebp
08418613 +0x001:  mov    %esp,%ebp
08418615 +0x003:  push   %edi
08418616 +0x004:  push   %esi
08418617 +0x005:  push   %ebx
08418618 +0x006:  sub    $0xac,%esp
0841861e +0x00c:  mov    0x14(%ebp),%eax
08418621 +0x00f:  mov    %eax,(%esp)
08418624 +0x012:  call   08450e78 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3a8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3a8e
08418629 +0x017:  mov    %eax,-0x20(%ebp)
0841862c +0x01a:  cmpl   $0x0,-0x20(%ebp)
08418630 +0x01e:  jne    0841863c <+0x2a>
08418632 +0x020:  mov    $0x0,%eax
08418637 +0x025:  jmp    08418a8b <+0x479>
0841863c +0x02a:  mov    -0x20(%ebp),%eax
0841863f +0x02d:  movl   $0x0,0xe(%eax)
08418646 +0x034:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841864b +0x039:  mov    %eax,(%esp)
0841864e +0x03c:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08418653 +0x041:  test   %al,%al
08418655 +0x043:  je     08418673 <+0x61>
08418657 +0x045:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841865c +0x04a:  mov    0x10(%ebp),%edx
0841865f +0x04d:  mov    %edx,0x4(%esp)
08418663 +0x051:  mov    %eax,(%esp)
08418666 +0x054:  call   083f4f10 <_ZN5DBMgr13GetServerTypeEi>  ; DBMgr::GetServerType(int)
0841866b +0x059:  mov    -0x20(%ebp),%edx
0841866e +0x05c:  mov    %eax,0xe(%edx)
08418671 +0x05f:  jmp    08418684 <+0x72>
08418673 +0x061:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08418678 +0x066:  mov    0x378(%eax),%edx
0841867e +0x06c:  mov    -0x20(%ebp),%eax
08418681 +0x06f:  mov    %edx,0xe(%eax)
08418684 +0x072:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08418689 +0x077:  mov    0x10(%ebp),%edx
0841868c +0x07a:  mov    %edx,0x4(%esp)
08418690 +0x07e:  mov    %eax,(%esp)
08418693 +0x081:  call   083f5038 <_ZN5DBMgr16removeUserDBInfoEi>  ; DBMgr::removeUserDBInfo(int)
08418698 +0x086:  mov    -0x20(%ebp),%eax
0841869b +0x089:  mov    %eax,0x4(%esp)
0841869f +0x08d:  mov    0x8(%ebp),%eax
084186a2 +0x090:  mov    %eax,(%esp)
084186a5 +0x093:  call   08418a96 <_ZN15DB_UpdateLogout12UpdateLogoutEP17SIG_UPDATE_LOGOUT>  ; DB_UpdateLogout::UpdateLogout(SIG_UPDATE_LOGOUT*)
084186aa +0x098:  mov    %al,-0x21(%ebp)
084186ad +0x09b:  movzbl -0x21(%ebp),%eax
084186b1 +0x09f:  xor    $0x1,%eax
084186b4 +0x0a2:  test   %al,%al
084186b6 +0x0a4:  je     08418707 <+0xf5>
084186b8 +0x0a6:  mov    -0x20(%ebp),%eax
084186bb +0x0a9:  mov    (%eax),%eax
084186bd +0x0ab:  movl   $0x0,0x4(%esp)
084186c5 +0x0b3:  mov    %eax,(%esp)
084186c8 +0x0b6:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084186cd +0x0bb:  mov    %eax,0x14(%esp)
084186d1 +0x0bf:  movl   $"UpdateLogout() fail - m_id[%s]\n",0x10(%esp)
084186d9 +0x0c7:  movl   $0x4939,0xc(%esp)
084186e1 +0x0cf:  movl   $&_ZZN15DB_UpdateLogout8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
084186e9 +0x0d7:  movl   $"DBThread.cpp",0x4(%esp)
084186f1 +0x0df:  movl   $0x1,(%esp)
084186f8 +0x0e6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084186fd +0x0eb:  mov    $0x0,%eax
08418702 +0x0f0:  jmp    08418a8b <+0x479>
08418707 +0x0f5:  mov    -0x20(%ebp),%eax
0841870a +0x0f8:  movzbl 0x12(%eax),%eax
0841870e +0x0fc:  test   %al,%al
08418710 +0x0fe:  je     08418a38 <+0x426>
08418716 +0x104:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841871b +0x109:  movl   $0x0,0x8(%esp)
08418723 +0x111:  movl   $0x6,0x4(%esp)
0841872b +0x119:  mov    %eax,(%esp)
0841872e +0x11c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08418733 +0x121:  mov    %eax,-0x1c(%ebp)
08418736 +0x124:  mov    -0x20(%ebp),%eax
08418739 +0x127:  movzbl 0x22(%eax),%eax
0841873d +0x12b:  test   %al,%al
0841873f +0x12d:  je     08418823 <+0x211>
08418745 +0x133:  mov    -0x20(%ebp),%eax
08418748 +0x136:  mov    (%eax),%eax
0841874a +0x138:  movl   $0x0,0x4(%esp)
08418752 +0x140:  mov    %eax,(%esp)
08418755 +0x143:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841875a +0x148:  mov    %eax,%edi
0841875c +0x14a:  mov    -0x20(%ebp),%eax
0841875f +0x14d:  mov    0xe(%eax),%eax
08418762 +0x150:  mov    %eax,-0x74(%ebp)
08418765 +0x153:  mov    -0x20(%ebp),%eax
08418768 +0x156:  add    $0x47,%eax
0841876b +0x159:  mov    %eax,-0x70(%ebp)
0841876e +0x15c:  mov    -0x20(%ebp),%eax
08418771 +0x15f:  add    $0x43,%eax
08418774 +0x162:  mov    %eax,-0x6c(%ebp)
08418777 +0x165:  mov    -0x20(%ebp),%eax
0841877a +0x168:  movzbl 0x22(%eax),%eax
0841877e +0x16c:  movzbl %al,%eax
08418781 +0x16f:  mov    %eax,-0x68(%ebp)
08418784 +0x172:  mov    -0x20(%ebp),%eax
08418787 +0x175:  mov    0x23(%eax),%eax
0841878a +0x178:  mov    %eax,-0x64(%ebp)
0841878d +0x17b:  mov    -0x20(%ebp),%eax
08418790 +0x17e:  add    $0x37,%eax
08418793 +0x181:  mov    %eax,-0x60(%ebp)
08418796 +0x184:  mov    -0x20(%ebp),%eax
08418799 +0x187:  movzbl 0x21(%eax),%eax
0841879d +0x18b:  test   %al,%al
0841879f +0x18d:  je     084187a8 <+0x196>
084187a1 +0x18f:  mov    $0x0,%ebx
084187a6 +0x194:  jmp    084187ad <+0x19b>
084187a8 +0x196:  mov    $0x1,%ebx
084187ad +0x19b:  mov    -0x20(%ebp),%eax
084187b0 +0x19e:  movzwl 0x1f(%eax),%eax
084187b4 +0x1a2:  movzwl %ax,%esi
084187b7 +0x1a5:  mov    -0x20(%ebp),%eax
084187ba +0x1a8:  mov    0x1b(%eax),%ecx
084187bd +0x1ab:  mov    -0x20(%ebp),%eax
084187c0 +0x1ae:  mov    0x17(%eax),%edx
084187c3 +0x1b1:  mov    -0x20(%ebp),%eax
084187c6 +0x1b4:  mov    0x13(%eax),%eax
084187c9 +0x1b7:  mov    %edi,0x34(%esp)
084187cd +0x1bb:  mov    -0x74(%ebp),%edi
084187d0 +0x1be:  mov    %edi,0x30(%esp)
084187d4 +0x1c2:  mov    -0x70(%ebp),%edi
084187d7 +0x1c5:  mov    %edi,0x2c(%esp)
084187db +0x1c9:  mov    -0x6c(%ebp),%edi
084187de +0x1cc:  mov    %edi,0x28(%esp)
084187e2 +0x1d0:  mov    -0x68(%ebp),%edi
084187e5 +0x1d3:  mov    %edi,0x24(%esp)
084187e9 +0x1d7:  mov    -0x64(%ebp),%edi
084187ec +0x1da:  mov    %edi,0x20(%esp)
084187f0 +0x1de:  mov    -0x60(%ebp),%edi
084187f3 +0x1e1:  mov    %edi,0x1c(%esp)
084187f7 +0x1e5:  mov    %ebx,0x18(%esp)
084187fb +0x1e9:  mov    %esi,0x14(%esp)
084187ff +0x1ed:  mov    %ecx,0x10(%esp)
08418803 +0x1f1:  mov    %edx,0xc(%esp)
08418807 +0x1f5:  mov    %eax,0x8(%esp)
0841880b +0x1f9:  movl   $"upDate member_play_info set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d, ip='%s', last_play_time=%u, pcbang_flag=%d, end_ip='%s', mac_addr='%s', server_id = %d where occ_date=cast(now() as date) and m_id=%s",0x4(%esp)
08418813 +0x201:  mov    -0x1c(%ebp),%eax
08418816 +0x204:  mov    %eax,(%esp)
08418819 +0x207:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841881e +0x20c:  jmp    084188e8 <+0x2d6>
08418823 +0x211:  mov    -0x20(%ebp),%eax
08418826 +0x214:  mov    (%eax),%eax
08418828 +0x216:  movl   $0x0,0x4(%esp)
08418830 +0x21e:  mov    %eax,(%esp)
08418833 +0x221:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08418838 +0x226:  mov    %eax,%edi
0841883a +0x228:  mov    -0x20(%ebp),%eax
0841883d +0x22b:  mov    0xe(%eax),%eax
08418840 +0x22e:  mov    %eax,-0x5c(%ebp)
08418843 +0x231:  mov    -0x20(%ebp),%eax
08418846 +0x234:  add    $0x47,%eax
08418849 +0x237:  mov    %eax,-0x58(%ebp)
0841884c +0x23a:  mov    -0x20(%ebp),%eax
0841884f +0x23d:  add    $0x43,%eax
08418852 +0x240:  mov    %eax,-0x54(%ebp)
08418855 +0x243:  mov    -0x20(%ebp),%eax
08418858 +0x246:  mov    0x23(%eax),%eax
0841885b +0x249:  mov    %eax,-0x50(%ebp)
0841885e +0x24c:  mov    -0x20(%ebp),%eax
08418861 +0x24f:  add    $0x37,%eax
08418864 +0x252:  mov    %eax,-0x4c(%ebp)
08418867 +0x255:  mov    -0x20(%ebp),%eax
0841886a +0x258:  movzbl 0x21(%eax),%eax
0841886e +0x25c:  test   %al,%al
08418870 +0x25e:  je     08418879 <+0x267>
08418872 +0x260:  mov    $0x0,%ebx
08418877 +0x265:  jmp    0841887e <+0x26c>
08418879 +0x267:  mov    $0x1,%ebx
0841887e +0x26c:  mov    -0x20(%ebp),%eax
08418881 +0x26f:  movzwl 0x1f(%eax),%eax
08418885 +0x273:  movzwl %ax,%esi
08418888 +0x276:  mov    -0x20(%ebp),%eax
0841888b +0x279:  mov    0x1b(%eax),%ecx
0841888e +0x27c:  mov    -0x20(%ebp),%eax
08418891 +0x27f:  mov    0x17(%eax),%edx
08418894 +0x282:  mov    -0x20(%ebp),%eax
08418897 +0x285:  mov    0x13(%eax),%eax
0841889a +0x288:  mov    %edi,0x30(%esp)
0841889e +0x28c:  mov    -0x5c(%ebp),%edi
084188a1 +0x28f:  mov    %edi,0x2c(%esp)
084188a5 +0x293:  mov    -0x58(%ebp),%edi
084188a8 +0x296:  mov    %edi,0x28(%esp)
084188ac +0x29a:  mov    -0x54(%ebp),%edi
084188af +0x29d:  mov    %edi,0x24(%esp)
084188b3 +0x2a1:  mov    -0x50(%ebp),%edi
084188b6 +0x2a4:  mov    %edi,0x20(%esp)
084188ba +0x2a8:  mov    -0x4c(%ebp),%edi
084188bd +0x2ab:  mov    %edi,0x1c(%esp)
084188c1 +0x2af:  mov    %ebx,0x18(%esp)
084188c5 +0x2b3:  mov    %esi,0x14(%esp)
084188c9 +0x2b7:  mov    %ecx,0x10(%esp)
084188cd +0x2bb:  mov    %edx,0xc(%esp)
084188d1 +0x2bf:  mov    %eax,0x8(%esp)
084188d5 +0x2c3:  movl   $"upDate member_play_info set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d, ip='%s', last_play_time=%u, end_ip='%s', mac_addr='%s', server_id = %d where occ_date=cast(now() as date) and m_id=%s",0x4(%esp)
084188dd +0x2cb:  mov    -0x1c(%ebp),%eax
084188e0 +0x2ce:  mov    %eax,(%esp)
084188e3 +0x2d1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084188e8 +0x2d6:  mov    -0x20(%ebp),%eax
084188eb +0x2d9:  mov    (%eax),%eax
084188ed +0x2db:  test   %eax,%eax
084188ef +0x2dd:  je     08418a38 <+0x426>
084188f5 +0x2e3:  movl   $0x1,0x4(%esp)
084188fd +0x2eb:  mov    -0x1c(%ebp),%eax
08418900 +0x2ee:  mov    %eax,(%esp)
08418903 +0x2f1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08418908 +0x2f6:  xor    $0x1,%eax
0841890b +0x2f9:  test   %al,%al
0841890d +0x2fb:  jne    08418920 <+0x30e>
0841890f +0x2fd:  mov    -0x1c(%ebp),%eax
08418912 +0x300:  mov    %eax,(%esp)
08418915 +0x303:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0841891a +0x308:  or     %edx,%eax
0841891c +0x30a:  test   %eax,%eax
0841891e +0x30c:  jne    08418927 <+0x315>
08418920 +0x30e:  mov    $0x1,%eax
08418925 +0x313:  jmp    0841892c <+0x31a>
08418927 +0x315:  mov    $0x0,%eax
0841892c +0x31a:  test   %al,%al
0841892e +0x31c:  je     08418a38 <+0x426>
08418934 +0x322:  mov    -0x20(%ebp),%eax
08418937 +0x325:  mov    0xe(%eax),%eax
0841893a +0x328:  mov    %eax,-0x48(%ebp)
0841893d +0x32b:  mov    -0x20(%ebp),%eax
08418940 +0x32e:  add    $0x47,%eax
08418943 +0x331:  mov    %eax,-0x44(%ebp)
08418946 +0x334:  mov    -0x20(%ebp),%eax
08418949 +0x337:  add    $0x43,%eax
0841894c +0x33a:  mov    %eax,-0x40(%ebp)
0841894f +0x33d:  mov    -0x20(%ebp),%eax
08418952 +0x340:  movzbl 0x22(%eax),%eax
08418956 +0x344:  movzbl %al,%eax
08418959 +0x347:  mov    %eax,-0x3c(%ebp)
0841895c +0x34a:  mov    -0x20(%ebp),%eax
0841895f +0x34d:  mov    0x23(%eax),%eax
08418962 +0x350:  mov    %eax,-0x38(%ebp)
08418965 +0x353:  mov    -0x20(%ebp),%eax
08418968 +0x356:  add    $0x37,%eax
0841896b +0x359:  mov    %eax,-0x34(%ebp)
0841896e +0x35c:  mov    -0x20(%ebp),%eax
08418971 +0x35f:  movzbl 0x21(%eax),%eax
08418975 +0x363:  test   %al,%al
08418977 +0x365:  je     08418980 <+0x36e>
08418979 +0x367:  mov    $0x0,%edi
0841897e +0x36c:  jmp    08418985 <+0x373>
08418980 +0x36e:  mov    $0x1,%edi
08418985 +0x373:  mov    -0x20(%ebp),%eax
08418988 +0x376:  movzwl 0x1f(%eax),%eax
0841898c +0x37a:  movzwl %ax,%eax
0841898f +0x37d:  mov    %eax,-0x30(%ebp)
08418992 +0x380:  mov    -0x20(%ebp),%eax
08418995 +0x383:  mov    0x1b(%eax),%eax
08418998 +0x386:  mov    %eax,-0x2c(%ebp)
0841899b +0x389:  mov    -0x20(%ebp),%eax
0841899e +0x38c:  mov    0x17(%eax),%esi
084189a1 +0x38f:  mov    -0x20(%ebp),%eax
084189a4 +0x392:  mov    0x13(%eax),%ebx
084189a7 +0x395:  mov    -0x20(%ebp),%eax
084189aa +0x398:  mov    (%eax),%eax
084189ac +0x39a:  movl   $0x0,0x4(%esp)
084189b4 +0x3a2:  mov    %eax,(%esp)
084189b7 +0x3a5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084189bc +0x3aa:  mov    -0x48(%ebp),%edx
084189bf +0x3ad:  mov    %edx,0x34(%esp)
084189c3 +0x3b1:  mov    -0x44(%ebp),%edx
084189c6 +0x3b4:  mov    %edx,0x30(%esp)
084189ca +0x3b8:  mov    -0x40(%ebp),%edx
084189cd +0x3bb:  mov    %edx,0x2c(%esp)
084189d1 +0x3bf:  mov    -0x3c(%ebp),%edx
084189d4 +0x3c2:  mov    %edx,0x28(%esp)
084189d8 +0x3c6:  mov    -0x38(%ebp),%edx
084189db +0x3c9:  mov    %edx,0x24(%esp)
084189df +0x3cd:  mov    -0x34(%ebp),%edx
084189e2 +0x3d0:  mov    %edx,0x20(%esp)
084189e6 +0x3d4:  mov    %edi,0x1c(%esp)
084189ea +0x3d8:  mov    -0x30(%ebp),%edi
084189ed +0x3db:  mov    %edi,0x18(%esp)
084189f1 +0x3df:  mov    -0x2c(%ebp),%edx
084189f4 +0x3e2:  mov    %edx,0x14(%esp)
084189f8 +0x3e6:  mov    %esi,0x10(%esp)
084189fc +0x3ea:  mov    %ebx,0xc(%esp)
08418a00 +0x3ee:  mov    %eax,0x8(%esp)
08418a04 +0x3f2:  movl   $"inSert into member_play_info(occ_date,m_id,play_time,play_count,trade_cnt,exp,used_fatigue,ting_count, ip, last_play_time, pcbang_flag, end_ip, mac_addr, server_id) values(cast(now() as date),%s,%d,1,%d,%u,%u,%d,'%s', %u, %d, '%s', '%s',%d)",0x4(%esp)
08418a0c +0x3fa:  mov    -0x1c(%ebp),%eax
08418a0f +0x3fd:  mov    %eax,(%esp)
08418a12 +0x400:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08418a17 +0x405:  movl   $0x1,0x4(%esp)
08418a1f +0x40d:  mov    -0x1c(%ebp),%eax
08418a22 +0x410:  mov    %eax,(%esp)
08418a25 +0x413:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08418a2a +0x418:  xor    $0x1,%eax
08418a2d +0x41b:  test   %al,%al
08418a2f +0x41d:  je     08418a38 <+0x426>
08418a31 +0x41f:  mov    $0x0,%eax
08418a36 +0x424:  jmp    08418a8b <+0x479>
08418a38 +0x426:  mov    -0x20(%ebp),%eax
08418a3b +0x429:  movzbl 0x88(%eax),%eax
08418a42 +0x430:  test   %al,%al
08418a44 +0x432:  je     08418a6b <+0x459>
08418a46 +0x434:  mov    -0x20(%ebp),%eax
08418a49 +0x437:  movzwl 0x89(%eax),%eax
08418a50 +0x43e:  movswl %ax,%edx
08418a53 +0x441:  mov    -0x20(%ebp),%eax
08418a56 +0x444:  mov    (%eax),%eax
08418a58 +0x446:  mov    %edx,0x8(%esp)
08418a5c +0x44a:  mov    %eax,0x4(%esp)
08418a60 +0x44e:  mov    0x8(%ebp),%eax
08418a63 +0x451:  mov    %eax,(%esp)
08418a66 +0x454:  call   08418442 <_ZN15DB_UpdateLogout31UpdateAccountMemberBonusFatigueEjs>  ; DB_UpdateLogout::UpdateAccountMemberBonusFatigue(unsigned int, short)
08418a6b +0x459:  mov    -0x20(%ebp),%eax
08418a6e +0x45c:  mov    %eax,0xc(%esp)
08418a72 +0x460:  mov    0x10(%ebp),%eax
08418a75 +0x463:  mov    %eax,0x8(%esp)
08418a79 +0x467:  mov    0xc(%ebp),%eax
08418a7c +0x46a:  mov    %eax,0x4(%esp)
08418a80 +0x46e:  mov    0x8(%ebp),%eax
08418a83 +0x471:  mov    %eax,(%esp)
08418a86 +0x474:  call   0841852e <_ZN15DB_UpdateLogout10SendResultEiiP17SIG_UPDATE_LOGOUT>  ; DB_UpdateLogout::SendResult(int, int, SIG_UPDATE_LOGOUT*)
08418a8b +0x479:  add    $0xac,%esp
08418a91 +0x47f:  pop    %ebx
08418a92 +0x480:  pop    %esi
08418a93 +0x481:  pop    %edi
08418a94 +0x482:  pop    %ebp
08418a95 +0x483:  ret
```

## 反编译 C

```c
// DB_UpdateLogout::dispatch @ 0x8418612

/* DB_UpdateLogout::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateLogout::dispatch(DB_UpdateLogout *this,int param_1,int param_2,Stream *param_3)

{
  SIG_UPDATE_LOGOUT SVar1;
  SIG_UPDATE_LOGOUT SVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  SIG_UPDATE_LOGOUT *pSVar10;
  undefined4 uVar11;
  GameWorld *this_00;
  int iVar12;
  MySQL *this_01;
  undefined4 uVar13;
  longlong lVar14;
  
  pSVar10 = Stream::GetOutBuffer<SIG_UPDATE_LOGOUT>(param_3);
  if (pSVar10 == (SIG_UPDATE_LOGOUT *)0x0) {
    uVar11 = 0;
  }
  else {
    *(undefined4 *)(pSVar10 + 0xe) = 0;
    this_00 = (GameWorld *)G_GameWorld();
    cVar9 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar9 == '\0') {
      iVar12 = G_CEnvironment();
      *(undefined4 *)(pSVar10 + 0xe) = *(undefined4 *)(iVar12 + 0x378);
    }
    else {
      uVar11 = DBMgr::GetServerType((int)GlobalData::s_db_mgr);
      *(undefined4 *)(pSVar10 + 0xe) = uVar11;
    }
    DBMgr::removeUserDBInfo((int)GlobalData::s_db_mgr);
    cVar9 = UpdateLogout(this,pSVar10);
    if (cVar9 == '\x01') {
      if (pSVar10[0x12] != (SIG_UPDATE_LOGOUT)0x0) {
        this_01 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
        if (pSVar10[0x22] == (SIG_UPDATE_LOGOUT)0x0) {
          uVar11 = NumberToString(*(uint *)pSVar10,0);
          MySQL::set_query(this_01,
                           "upDate member_play_info set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d, ip=\'%s\', last_play_time=%u, end_ip=\'%s\', mac_addr=\'%s\', server_id = %d where occ_date=cast(now() as date) and m_id=%s"
                           ,*(undefined4 *)(pSVar10 + 0x13),*(undefined4 *)(pSVar10 + 0x17),
                           *(undefined4 *)(pSVar10 + 0x1b),(uint)*(ushort *)(pSVar10 + 0x1f),
                           (uint)(pSVar10[0x21] == (SIG_UPDATE_LOGOUT)0x0),pSVar10 + 0x37,
                           *(undefined4 *)(pSVar10 + 0x23),pSVar10 + 0x43,pSVar10 + 0x47,
                           *(undefined4 *)(pSVar10 + 0xe),uVar11);
        }
        else {
          uVar11 = NumberToString(*(uint *)pSVar10,0);
          MySQL::set_query(this_01,
                           "upDate member_play_info set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d, ip=\'%s\', last_play_time=%u, pcbang_flag=%d, end_ip=\'%s\', mac_addr=\'%s\', server_id = %d where occ_date=cast(now() as date) and m_id=%s"
                           ,*(undefined4 *)(pSVar10 + 0x13),*(undefined4 *)(pSVar10 + 0x17),
                           *(undefined4 *)(pSVar10 + 0x1b),(uint)*(ushort *)(pSVar10 + 0x1f),
                           (uint)(pSVar10[0x21] == (SIG_UPDATE_LOGOUT)0x0),pSVar10 + 0x37,
                           *(undefined4 *)(pSVar10 + 0x23),(uint)(byte)pSVar10[0x22],pSVar10 + 0x43,
                           pSVar10 + 0x47,*(undefined4 *)(pSVar10 + 0xe),uVar11);
        }
        if (*(int *)pSVar10 != 0) {
          cVar9 = MySQL::exec(this_01,true);
          if ((cVar9 == '\x01') && (lVar14 = MySQL::getAffectedRowCount(this_01), lVar14 != 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            uVar11 = *(undefined4 *)(pSVar10 + 0xe);
            SVar1 = pSVar10[0x22];
            uVar4 = *(undefined4 *)(pSVar10 + 0x23);
            SVar2 = pSVar10[0x21];
            uVar3 = *(ushort *)(pSVar10 + 0x1f);
            uVar5 = *(undefined4 *)(pSVar10 + 0x1b);
            uVar6 = *(undefined4 *)(pSVar10 + 0x17);
            uVar7 = *(undefined4 *)(pSVar10 + 0x13);
            uVar13 = NumberToString(*(uint *)pSVar10,0);
            MySQL::set_query(this_01,
                             "inSert into member_play_info(occ_date,m_id,play_time,play_count,trade_cnt,exp,used_fatigue,ting_count, ip, last_play_time, pcbang_flag, end_ip, mac_addr, server_id) values(cast(now() as date),%s,%d,1,%d,%u,%u,%d,\'%s\', %u, %d, \'%s\', \'%s\',%d)"
                             ,uVar13,uVar7,uVar6,uVar5,(uint)uVar3,
                             (uint)(SVar2 == (SIG_UPDATE_LOGOUT)0x0),pSVar10 + 0x37,uVar4,
                             (uint)(byte)SVar1,pSVar10 + 0x43,pSVar10 + 0x47,uVar11);
            cVar9 = MySQL::exec(this_01,true);
            if (cVar9 != '\x01') {
              return 0;
            }
          }
        }
      }
      if (pSVar10[0x88] != (SIG_UPDATE_LOGOUT)0x0) {
        UpdateAccountMemberBonusFatigue(this,*(uint *)pSVar10,*(short *)(pSVar10 + 0x89));
      }
      uVar11 = SendResult(this,param_1,param_2,pSVar10);
    }
    else {
      uVar11 = NumberToString(*(uint *)pSVar10,0);
      LogManager::logFormat
                (1,"DBThread.cpp","virtual bool DB_UpdateLogout::dispatch(int, int, Stream*)",0x4939
                 ,"UpdateLogout() fail - m_id[%s]\n",uVar11);
      uVar11 = 0;
    }
  }
  return uVar11;
}
```
