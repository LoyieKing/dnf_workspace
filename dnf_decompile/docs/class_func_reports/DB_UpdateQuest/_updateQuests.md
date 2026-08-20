# _updateQuests

`_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST`

`DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateQuest` | `0x08418c1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418c1c  _ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST
#           DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*)
# range [0x08418c1c, 0x08419571]
08418c1c +0x000:  push   %ebp
08418c1d +0x001:  mov    %esp,%ebp
08418c1f +0x003:  push   %edi
08418c20 +0x004:  push   %esi
08418c21 +0x005:  push   %ebx
08418c22 +0x006:  sub    $0x8edc,%esp
08418c28 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08418c2d +0x011:  movl   $0x0,0x8(%esp)
08418c35 +0x019:  movl   $0x2,0x4(%esp)
08418c3d +0x021:  mov    %eax,(%esp)
08418c40 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08418c45 +0x029:  mov    %eax,-0x24(%ebp)
08418c48 +0x02c:  movl   $0x7530,-0x20(%ebp)
08418c4f +0x033:  lea    -0x8cd4(%ebp),%eax
08418c55 +0x039:  mov    $0x8cac,%edx
08418c5a +0x03e:  mov    %edx,0x8(%esp)
08418c5e +0x042:  movl   $0x0,0x4(%esp)
08418c66 +0x04a:  mov    %eax,(%esp)
08418c69 +0x04d:  call   0807dcc0 <_init+0x5b8>
08418c6e +0x052:  movl   $0x8cac,-0x28(%ebp)
08418c75 +0x059:  mov    -0x28(%ebp),%eax
08418c78 +0x05c:  mov    %eax,-0x1c(%ebp)
08418c7b +0x05f:  mov    0xc(%ebp),%eax
08418c7e +0x062:  add    $0xa4,%eax
08418c83 +0x067:  movl   $0x7530,0xc(%esp)
08418c8b +0x06f:  mov    %eax,0x8(%esp)
08418c8f +0x073:  lea    -0x28(%ebp),%eax
08418c92 +0x076:  mov    %eax,0x4(%esp)
08418c96 +0x07a:  lea    -0x8cd4(%ebp),%eax
08418c9c +0x080:  mov    %eax,(%esp)
08418c9f +0x083:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08418ca4 +0x088:  xor    $0x1,%eax
08418ca7 +0x08b:  test   %al,%al
08418ca9 +0x08d:  je     08418cea <+0xce>
08418cab +0x08f:  mov    0xc(%ebp),%eax
08418cae +0x092:  mov    (%eax),%eax
08418cb0 +0x094:  mov    %eax,0x14(%esp)
08418cb4 +0x098:  movl   $"3RD_EXPEND : DB_UpdateQuest::DB ERROR!! charac_no(%u)",0x10(%esp)
08418cbc +0x0a0:  movl   $0x4a5e,0xc(%esp)
08418cc4 +0x0a8:  movl   $&_ZZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUESTE19__PRETTY_FUNCTION__,0x8(%esp)
08418ccc +0x0b0:  movl   $"DBThread.cpp",0x4(%esp)
08418cd4 +0x0b8:  movl   $0x1,(%esp)
08418cdb +0x0bf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08418ce0 +0x0c4:  mov    $0x0,%eax
08418ce5 +0x0c9:  jmp    08419567 <+0x94b>
08418cea +0x0ce:  mov    0xc(%ebp),%eax
08418ced +0x0d1:  movzbl 0x75d4(%eax),%eax
08418cf4 +0x0d8:  test   %al,%al
08418cf6 +0x0da:  je     08419132 <+0x516>
08418cfc +0x0e0:  mov    0xc(%ebp),%eax
08418cff +0x0e3:  mov    (%eax),%eax
08418d01 +0x0e5:  mov    %eax,-0x8e0c(%ebp)
08418d07 +0x0eb:  mov    0xc(%ebp),%eax
08418d0a +0x0ee:  add    $0x75d9,%eax
08418d0f +0x0f3:  movl   $0x28,0xc(%esp)
08418d17 +0x0fb:  mov    %eax,0x8(%esp)
08418d1b +0x0ff:  movl   $0x1,0x4(%esp)
08418d23 +0x107:  mov    -0x24(%ebp),%eax
08418d26 +0x10a:  mov    %eax,(%esp)
08418d29 +0x10d:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08418d2e +0x112:  mov    %eax,-0x8e08(%ebp)
08418d34 +0x118:  mov    0xc(%ebp),%eax
08418d37 +0x11b:  mov    0x75d5(%eax),%eax
08418d3d +0x121:  mov    %eax,-0x8e04(%ebp)
08418d43 +0x127:  mov    0xc(%ebp),%eax
08418d46 +0x12a:  mov    0xa0(%eax),%eax
08418d4c +0x130:  mov    %eax,-0x8e00(%ebp)
08418d52 +0x136:  mov    0xc(%ebp),%eax
08418d55 +0x139:  mov    0x50(%eax),%eax
08418d58 +0x13c:  mov    %eax,-0x8dfc(%ebp)
08418d5e +0x142:  mov    0xc(%ebp),%eax
08418d61 +0x145:  mov    0x9c(%eax),%eax
08418d67 +0x14b:  mov    %eax,-0x8df8(%ebp)
08418d6d +0x151:  mov    0xc(%ebp),%eax
08418d70 +0x154:  mov    0x4c(%eax),%eax
08418d73 +0x157:  mov    %eax,-0x8df4(%ebp)
08418d79 +0x15d:  mov    0xc(%ebp),%eax
08418d7c +0x160:  mov    0x98(%eax),%eax
08418d82 +0x166:  mov    %eax,-0x8df0(%ebp)
08418d88 +0x16c:  mov    0xc(%ebp),%eax
08418d8b +0x16f:  mov    0x48(%eax),%eax
08418d8e +0x172:  mov    %eax,-0x8dec(%ebp)
08418d94 +0x178:  mov    0xc(%ebp),%eax
08418d97 +0x17b:  mov    0x94(%eax),%eax
08418d9d +0x181:  mov    %eax,-0x8de8(%ebp)
08418da3 +0x187:  mov    0xc(%ebp),%eax
08418da6 +0x18a:  mov    0x44(%eax),%eax
08418da9 +0x18d:  mov    %eax,-0x8de4(%ebp)
08418daf +0x193:  mov    0xc(%ebp),%eax
08418db2 +0x196:  mov    0x90(%eax),%eax
08418db8 +0x19c:  mov    %eax,-0x8de0(%ebp)
08418dbe +0x1a2:  mov    0xc(%ebp),%eax
08418dc1 +0x1a5:  mov    0x40(%eax),%eax
08418dc4 +0x1a8:  mov    %eax,-0x8ddc(%ebp)
08418dca +0x1ae:  mov    0xc(%ebp),%eax
08418dcd +0x1b1:  mov    0x8c(%eax),%eax
08418dd3 +0x1b7:  mov    %eax,-0x8dd8(%ebp)
08418dd9 +0x1bd:  mov    0xc(%ebp),%eax
08418ddc +0x1c0:  mov    0x3c(%eax),%eax
08418ddf +0x1c3:  mov    %eax,-0x8dd4(%ebp)
08418de5 +0x1c9:  mov    0xc(%ebp),%eax
08418de8 +0x1cc:  mov    0x88(%eax),%eax
08418dee +0x1d2:  mov    %eax,-0x8dd0(%ebp)
08418df4 +0x1d8:  mov    0xc(%ebp),%eax
08418df7 +0x1db:  mov    0x38(%eax),%eax
08418dfa +0x1de:  mov    %eax,-0x8dcc(%ebp)
08418e00 +0x1e4:  mov    0xc(%ebp),%eax
08418e03 +0x1e7:  mov    0x84(%eax),%eax
08418e09 +0x1ed:  mov    %eax,-0x8dc8(%ebp)
08418e0f +0x1f3:  mov    0xc(%ebp),%eax
08418e12 +0x1f6:  mov    0x34(%eax),%eax
08418e15 +0x1f9:  mov    %eax,-0x8dc4(%ebp)
08418e1b +0x1ff:  mov    0xc(%ebp),%eax
08418e1e +0x202:  mov    0x80(%eax),%eax
08418e24 +0x208:  mov    %eax,-0x8dc0(%ebp)
08418e2a +0x20e:  mov    0xc(%ebp),%eax
08418e2d +0x211:  mov    0x30(%eax),%eax
08418e30 +0x214:  mov    %eax,-0x8dbc(%ebp)
08418e36 +0x21a:  mov    0xc(%ebp),%eax
08418e39 +0x21d:  mov    0x7c(%eax),%eax
08418e3c +0x220:  mov    %eax,-0x8db8(%ebp)
08418e42 +0x226:  mov    0xc(%ebp),%eax
08418e45 +0x229:  mov    0x2c(%eax),%eax
08418e48 +0x22c:  mov    %eax,-0x8db4(%ebp)
08418e4e +0x232:  mov    0xc(%ebp),%eax
08418e51 +0x235:  mov    0x78(%eax),%eax
08418e54 +0x238:  mov    %eax,-0x8db0(%ebp)
08418e5a +0x23e:  mov    0xc(%ebp),%eax
08418e5d +0x241:  mov    0x28(%eax),%eax
08418e60 +0x244:  mov    %eax,-0x8dac(%ebp)
08418e66 +0x24a:  mov    0xc(%ebp),%eax
08418e69 +0x24d:  mov    0x74(%eax),%eax
08418e6c +0x250:  mov    %eax,-0x8da8(%ebp)
08418e72 +0x256:  mov    0xc(%ebp),%eax
08418e75 +0x259:  mov    0x24(%eax),%eax
08418e78 +0x25c:  mov    %eax,-0x8da4(%ebp)
08418e7e +0x262:  mov    0xc(%ebp),%eax
08418e81 +0x265:  mov    0x70(%eax),%eax
08418e84 +0x268:  mov    %eax,-0x8da0(%ebp)
08418e8a +0x26e:  mov    0xc(%ebp),%eax
08418e8d +0x271:  mov    0x20(%eax),%eax
08418e90 +0x274:  mov    %eax,-0x8d9c(%ebp)
08418e96 +0x27a:  mov    0xc(%ebp),%eax
08418e99 +0x27d:  mov    0x6c(%eax),%eax
08418e9c +0x280:  mov    %eax,-0x8d98(%ebp)
08418ea2 +0x286:  mov    0xc(%ebp),%eax
08418ea5 +0x289:  mov    0x1c(%eax),%eax
08418ea8 +0x28c:  mov    %eax,-0x8d94(%ebp)
08418eae +0x292:  mov    0xc(%ebp),%eax
08418eb1 +0x295:  mov    0x68(%eax),%eax
08418eb4 +0x298:  mov    %eax,-0x8d90(%ebp)
08418eba +0x29e:  mov    0xc(%ebp),%eax
08418ebd +0x2a1:  mov    0x18(%eax),%eax
08418ec0 +0x2a4:  mov    %eax,-0x8d8c(%ebp)
08418ec6 +0x2aa:  mov    0xc(%ebp),%eax
08418ec9 +0x2ad:  mov    0x64(%eax),%eax
08418ecc +0x2b0:  mov    %eax,-0x8d88(%ebp)
08418ed2 +0x2b6:  mov    0xc(%ebp),%eax
08418ed5 +0x2b9:  mov    0x14(%eax),%eax
08418ed8 +0x2bc:  mov    %eax,-0x8d84(%ebp)
08418ede +0x2c2:  mov    0xc(%ebp),%eax
08418ee1 +0x2c5:  mov    0x60(%eax),%eax
08418ee4 +0x2c8:  mov    %eax,-0x8d80(%ebp)
08418eea +0x2ce:  mov    0xc(%ebp),%eax
08418eed +0x2d1:  mov    0x10(%eax),%eax
08418ef0 +0x2d4:  mov    %eax,-0x8d7c(%ebp)
08418ef6 +0x2da:  mov    0xc(%ebp),%eax
08418ef9 +0x2dd:  mov    0x5c(%eax),%eax
08418efc +0x2e0:  mov    %eax,-0x8d78(%ebp)
08418f02 +0x2e6:  mov    0xc(%ebp),%eax
08418f05 +0x2e9:  mov    0xc(%eax),%eax
08418f08 +0x2ec:  mov    %eax,-0x8d74(%ebp)
08418f0e +0x2f2:  mov    0xc(%ebp),%eax
08418f11 +0x2f5:  mov    0x58(%eax),%eax
08418f14 +0x2f8:  mov    %eax,-0x8d70(%ebp)
08418f1a +0x2fe:  mov    0xc(%ebp),%eax
08418f1d +0x301:  mov    0x8(%eax),%edi
08418f20 +0x304:  mov    0xc(%ebp),%eax
08418f23 +0x307:  mov    0x54(%eax),%esi
08418f26 +0x30a:  mov    0xc(%ebp),%eax
08418f29 +0x30d:  mov    0x4(%eax),%ebx
08418f2c +0x310:  mov    -0x28(%ebp),%eax
08418f2f +0x313:  mov    %eax,0xc(%esp)
08418f33 +0x317:  lea    -0x8cd4(%ebp),%eax
08418f39 +0x31d:  mov    %eax,0x8(%esp)
08418f3d +0x321:  movl   $0x0,0x4(%esp)
08418f45 +0x329:  mov    -0x24(%ebp),%eax
08418f48 +0x32c:  mov    %eax,(%esp)
08418f4b +0x32f:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08418f50 +0x334:  mov    -0x8e0c(%ebp),%edx
08418f56 +0x33a:  mov    %edx,0xb4(%esp)
08418f5d +0x341:  mov    -0x8e08(%ebp),%edx
08418f63 +0x347:  mov    %edx,0xb0(%esp)
08418f6a +0x34e:  mov    -0x8e04(%ebp),%edx
08418f70 +0x354:  mov    %edx,0xac(%esp)
08418f77 +0x35b:  mov    -0x8e00(%ebp),%edx
08418f7d +0x361:  mov    %edx,0xa8(%esp)
08418f84 +0x368:  mov    -0x8dfc(%ebp),%edx
08418f8a +0x36e:  mov    %edx,0xa4(%esp)
08418f91 +0x375:  mov    -0x8df8(%ebp),%edx
08418f97 +0x37b:  mov    %edx,0xa0(%esp)
08418f9e +0x382:  mov    -0x8df4(%ebp),%edx
08418fa4 +0x388:  mov    %edx,0x9c(%esp)
08418fab +0x38f:  mov    -0x8df0(%ebp),%edx
08418fb1 +0x395:  mov    %edx,0x98(%esp)
08418fb8 +0x39c:  mov    -0x8dec(%ebp),%edx
08418fbe +0x3a2:  mov    %edx,0x94(%esp)
08418fc5 +0x3a9:  mov    -0x8de8(%ebp),%edx
08418fcb +0x3af:  mov    %edx,0x90(%esp)
08418fd2 +0x3b6:  mov    -0x8de4(%ebp),%edx
08418fd8 +0x3bc:  mov    %edx,0x8c(%esp)
08418fdf +0x3c3:  mov    -0x8de0(%ebp),%edx
08418fe5 +0x3c9:  mov    %edx,0x88(%esp)
08418fec +0x3d0:  mov    -0x8ddc(%ebp),%edx
08418ff2 +0x3d6:  mov    %edx,0x84(%esp)
08418ff9 +0x3dd:  mov    -0x8dd8(%ebp),%edx
08418fff +0x3e3:  mov    %edx,0x80(%esp)
08419006 +0x3ea:  mov    -0x8dd4(%ebp),%edx
0841900c +0x3f0:  mov    %edx,0x7c(%esp)
08419010 +0x3f4:  mov    -0x8dd0(%ebp),%edx
08419016 +0x3fa:  mov    %edx,0x78(%esp)
0841901a +0x3fe:  mov    -0x8dcc(%ebp),%edx
08419020 +0x404:  mov    %edx,0x74(%esp)
08419024 +0x408:  mov    -0x8dc8(%ebp),%edx
0841902a +0x40e:  mov    %edx,0x70(%esp)
0841902e +0x412:  mov    -0x8dc4(%ebp),%edx
08419034 +0x418:  mov    %edx,0x6c(%esp)
08419038 +0x41c:  mov    -0x8dc0(%ebp),%edx
0841903e +0x422:  mov    %edx,0x68(%esp)
08419042 +0x426:  mov    -0x8dbc(%ebp),%edx
08419048 +0x42c:  mov    %edx,0x64(%esp)
0841904c +0x430:  mov    -0x8db8(%ebp),%edx
08419052 +0x436:  mov    %edx,0x60(%esp)
08419056 +0x43a:  mov    -0x8db4(%ebp),%edx
0841905c +0x440:  mov    %edx,0x5c(%esp)
08419060 +0x444:  mov    -0x8db0(%ebp),%edx
08419066 +0x44a:  mov    %edx,0x58(%esp)
0841906a +0x44e:  mov    -0x8dac(%ebp),%edx
08419070 +0x454:  mov    %edx,0x54(%esp)
08419074 +0x458:  mov    -0x8da8(%ebp),%edx
0841907a +0x45e:  mov    %edx,0x50(%esp)
0841907e +0x462:  mov    -0x8da4(%ebp),%edx
08419084 +0x468:  mov    %edx,0x4c(%esp)
08419088 +0x46c:  mov    -0x8da0(%ebp),%edx
0841908e +0x472:  mov    %edx,0x48(%esp)
08419092 +0x476:  mov    -0x8d9c(%ebp),%edx
08419098 +0x47c:  mov    %edx,0x44(%esp)
0841909c +0x480:  mov    -0x8d98(%ebp),%edx
084190a2 +0x486:  mov    %edx,0x40(%esp)
084190a6 +0x48a:  mov    -0x8d94(%ebp),%edx
084190ac +0x490:  mov    %edx,0x3c(%esp)
084190b0 +0x494:  mov    -0x8d90(%ebp),%edx
084190b6 +0x49a:  mov    %edx,0x38(%esp)
084190ba +0x49e:  mov    -0x8d8c(%ebp),%edx
084190c0 +0x4a4:  mov    %edx,0x34(%esp)
084190c4 +0x4a8:  mov    -0x8d88(%ebp),%edx
084190ca +0x4ae:  mov    %edx,0x30(%esp)
084190ce +0x4b2:  mov    -0x8d84(%ebp),%edx
084190d4 +0x4b8:  mov    %edx,0x2c(%esp)
084190d8 +0x4bc:  mov    -0x8d80(%ebp),%edx
084190de +0x4c2:  mov    %edx,0x28(%esp)
084190e2 +0x4c6:  mov    -0x8d7c(%ebp),%edx
084190e8 +0x4cc:  mov    %edx,0x24(%esp)
084190ec +0x4d0:  mov    -0x8d78(%ebp),%edx
084190f2 +0x4d6:  mov    %edx,0x20(%esp)
084190f6 +0x4da:  mov    -0x8d74(%ebp),%edx
084190fc +0x4e0:  mov    %edx,0x1c(%esp)
08419100 +0x4e4:  mov    -0x8d70(%ebp),%edx
08419106 +0x4ea:  mov    %edx,0x18(%esp)
0841910a +0x4ee:  mov    %edi,0x14(%esp)
0841910e +0x4f2:  mov    %esi,0x10(%esp)
08419112 +0x4f6:  mov    %ebx,0xc(%esp)
08419116 +0x4fa:  mov    %eax,0x8(%esp)
0841911a +0x4fe:  movl   $"upDate new_charac_quest set clear_quest='%s', play_1=%d, play_1_trigger=%d, play_2=%d, play_2_trigger=%d, play_3=%d, play_3_trigger=%d, play_4=%d, play_4_trigger=%d, play_5=%d, play_5_trigger=%d,play_6=%d, play_6_trigger=%d, play_7=%d, play_7_trigger=%d, play_8=%d, play_8_trigger=%d, play_9=%d, play_9_trigger=%d, play_10=%d, play_10_trigger=%d, play_11=%d, play_11_trigger=%d, play_12=%d, play_12_trigger=%d, play_13=%d, play_13_trigger=%d, play_14=%d, play_14_trigger=%d, play_15=%d, play_15_trigger=%d,play_16=%d, play_16_trigger=%d, play_17=%d, play_17_trigger=%d, play_18=%d, play_18_trigger=%d, play_19=%d, play_19_trigger=%d, play_20=%d, play_20_trigger=%d,urgentQuestIndex=%d,quest_notify='%s' where charac_no=%u",0x4(%esp)
08419122 +0x506:  mov    -0x24(%ebp),%eax
08419125 +0x509:  mov    %eax,(%esp)
08419128 +0x50c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841912d +0x511:  jmp    08419520 <+0x904>
08419132 +0x516:  mov    0xc(%ebp),%eax
08419135 +0x519:  mov    (%eax),%eax
08419137 +0x51b:  mov    %eax,-0x8d6c(%ebp)
0841913d +0x521:  mov    0xc(%ebp),%eax
08419140 +0x524:  add    $0x75d9,%eax
08419145 +0x529:  movl   $0x28,0xc(%esp)
0841914d +0x531:  mov    %eax,0x8(%esp)
08419151 +0x535:  movl   $0x1,0x4(%esp)
08419159 +0x53d:  mov    -0x24(%ebp),%eax
0841915c +0x540:  mov    %eax,(%esp)
0841915f +0x543:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08419164 +0x548:  mov    %eax,-0x8d68(%ebp)
0841916a +0x54e:  mov    0xc(%ebp),%eax
0841916d +0x551:  mov    0x75d5(%eax),%eax
08419173 +0x557:  mov    %eax,-0x8d64(%ebp)
08419179 +0x55d:  mov    0xc(%ebp),%eax
0841917c +0x560:  mov    0xa0(%eax),%eax
08419182 +0x566:  mov    %eax,-0x8d60(%ebp)
08419188 +0x56c:  mov    0xc(%ebp),%eax
0841918b +0x56f:  mov    0x50(%eax),%eax
0841918e +0x572:  mov    %eax,-0x8d5c(%ebp)
08419194 +0x578:  mov    0xc(%ebp),%eax
08419197 +0x57b:  mov    0x9c(%eax),%eax
0841919d +0x581:  mov    %eax,-0x8d58(%ebp)
084191a3 +0x587:  mov    0xc(%ebp),%eax
084191a6 +0x58a:  mov    0x4c(%eax),%eax
084191a9 +0x58d:  mov    %eax,-0x8d54(%ebp)
084191af +0x593:  mov    0xc(%ebp),%eax
084191b2 +0x596:  mov    0x98(%eax),%eax
084191b8 +0x59c:  mov    %eax,-0x8d50(%ebp)
084191be +0x5a2:  mov    0xc(%ebp),%eax
084191c1 +0x5a5:  mov    0x48(%eax),%eax
084191c4 +0x5a8:  mov    %eax,-0x8d4c(%ebp)
084191ca +0x5ae:  mov    0xc(%ebp),%eax
084191cd +0x5b1:  mov    0x94(%eax),%eax
084191d3 +0x5b7:  mov    %eax,-0x8d48(%ebp)
084191d9 +0x5bd:  mov    0xc(%ebp),%eax
084191dc +0x5c0:  mov    0x44(%eax),%eax
084191df +0x5c3:  mov    %eax,-0x8d44(%ebp)
084191e5 +0x5c9:  mov    0xc(%ebp),%eax
084191e8 +0x5cc:  mov    0x90(%eax),%eax
084191ee +0x5d2:  mov    %eax,-0x8d40(%ebp)
084191f4 +0x5d8:  mov    0xc(%ebp),%eax
084191f7 +0x5db:  mov    0x40(%eax),%eax
084191fa +0x5de:  mov    %eax,-0x8d3c(%ebp)
08419200 +0x5e4:  mov    0xc(%ebp),%eax
08419203 +0x5e7:  mov    0x8c(%eax),%eax
08419209 +0x5ed:  mov    %eax,-0x8d38(%ebp)
0841920f +0x5f3:  mov    0xc(%ebp),%eax
08419212 +0x5f6:  mov    0x3c(%eax),%eax
08419215 +0x5f9:  mov    %eax,-0x8d34(%ebp)
0841921b +0x5ff:  mov    0xc(%ebp),%eax
0841921e +0x602:  mov    0x88(%eax),%eax
08419224 +0x608:  mov    %eax,-0x8d30(%ebp)
0841922a +0x60e:  mov    0xc(%ebp),%eax
0841922d +0x611:  mov    0x38(%eax),%eax
08419230 +0x614:  mov    %eax,-0x8d2c(%ebp)
08419236 +0x61a:  mov    0xc(%ebp),%eax
08419239 +0x61d:  mov    0x84(%eax),%eax
0841923f +0x623:  mov    %eax,-0x8d28(%ebp)
08419245 +0x629:  mov    0xc(%ebp),%eax
08419248 +0x62c:  mov    0x34(%eax),%eax
0841924b +0x62f:  mov    %eax,-0x8d24(%ebp)
08419251 +0x635:  mov    0xc(%ebp),%eax
08419254 +0x638:  mov    0x80(%eax),%eax
0841925a +0x63e:  mov    %eax,-0x8d20(%ebp)
08419260 +0x644:  mov    0xc(%ebp),%eax
08419263 +0x647:  mov    0x30(%eax),%eax
08419266 +0x64a:  mov    %eax,-0x8d1c(%ebp)
0841926c +0x650:  mov    0xc(%ebp),%eax
0841926f +0x653:  mov    0x7c(%eax),%eax
08419272 +0x656:  mov    %eax,-0x8d18(%ebp)
08419278 +0x65c:  mov    0xc(%ebp),%eax
0841927b +0x65f:  mov    0x2c(%eax),%eax
0841927e +0x662:  mov    %eax,-0x8d14(%ebp)
08419284 +0x668:  mov    0xc(%ebp),%eax
08419287 +0x66b:  mov    0x78(%eax),%eax
0841928a +0x66e:  mov    %eax,-0x8d10(%ebp)
08419290 +0x674:  mov    0xc(%ebp),%eax
08419293 +0x677:  mov    0x28(%eax),%eax
08419296 +0x67a:  mov    %eax,-0x8d0c(%ebp)
0841929c +0x680:  mov    0xc(%ebp),%eax
0841929f +0x683:  mov    0x74(%eax),%eax
084192a2 +0x686:  mov    %eax,-0x8d08(%ebp)
084192a8 +0x68c:  mov    0xc(%ebp),%eax
084192ab +0x68f:  mov    0x24(%eax),%eax
084192ae +0x692:  mov    %eax,-0x8d04(%ebp)
084192b4 +0x698:  mov    0xc(%ebp),%eax
084192b7 +0x69b:  mov    0x70(%eax),%eax
084192ba +0x69e:  mov    %eax,-0x8d00(%ebp)
084192c0 +0x6a4:  mov    0xc(%ebp),%eax
084192c3 +0x6a7:  mov    0x20(%eax),%eax
084192c6 +0x6aa:  mov    %eax,-0x8cfc(%ebp)
084192cc +0x6b0:  mov    0xc(%ebp),%eax
084192cf +0x6b3:  mov    0x6c(%eax),%eax
084192d2 +0x6b6:  mov    %eax,-0x8cf8(%ebp)
084192d8 +0x6bc:  mov    0xc(%ebp),%eax
084192db +0x6bf:  mov    0x1c(%eax),%eax
084192de +0x6c2:  mov    %eax,-0x8cf4(%ebp)
084192e4 +0x6c8:  mov    0xc(%ebp),%eax
084192e7 +0x6cb:  mov    0x68(%eax),%eax
084192ea +0x6ce:  mov    %eax,-0x8cf0(%ebp)
084192f0 +0x6d4:  mov    0xc(%ebp),%eax
084192f3 +0x6d7:  mov    0x18(%eax),%eax
084192f6 +0x6da:  mov    %eax,-0x8cec(%ebp)
084192fc +0x6e0:  mov    0xc(%ebp),%eax
084192ff +0x6e3:  mov    0x64(%eax),%eax
08419302 +0x6e6:  mov    %eax,-0x8ce8(%ebp)
08419308 +0x6ec:  mov    0xc(%ebp),%eax
0841930b +0x6ef:  mov    0x14(%eax),%eax
0841930e +0x6f2:  mov    %eax,-0x8ce4(%ebp)
08419314 +0x6f8:  mov    0xc(%ebp),%eax
08419317 +0x6fb:  mov    0x60(%eax),%eax
0841931a +0x6fe:  mov    %eax,-0x8ce0(%ebp)
08419320 +0x704:  mov    0xc(%ebp),%eax
08419323 +0x707:  mov    0x10(%eax),%eax
08419326 +0x70a:  mov    %eax,-0x8cdc(%ebp)
0841932c +0x710:  mov    0xc(%ebp),%eax
0841932f +0x713:  mov    0x5c(%eax),%edi
08419332 +0x716:  mov    0xc(%ebp),%eax
08419335 +0x719:  mov    0xc(%eax),%esi
08419338 +0x71c:  mov    0xc(%ebp),%eax
0841933b +0x71f:  mov    0x58(%eax),%ebx
0841933e +0x722:  mov    0xc(%ebp),%eax
08419341 +0x725:  mov    0x8(%eax),%ecx
08419344 +0x728:  mov    0xc(%ebp),%eax
08419347 +0x72b:  mov    0x54(%eax),%edx
0841934a +0x72e:  mov    0xc(%ebp),%eax
0841934d +0x731:  mov    0x4(%eax),%eax
08419350 +0x734:  mov    %eax,-0x8e1c(%ebp)
08419356 +0x73a:  mov    -0x8d6c(%ebp),%eax
0841935c +0x740:  mov    %eax,0xb0(%esp)
08419363 +0x747:  mov    -0x8d68(%ebp),%eax
08419369 +0x74d:  mov    %eax,0xac(%esp)
08419370 +0x754:  mov    -0x8d64(%ebp),%eax
08419376 +0x75a:  mov    %eax,0xa8(%esp)
0841937d +0x761:  mov    -0x8d60(%ebp),%eax
08419383 +0x767:  mov    %eax,0xa4(%esp)
0841938a +0x76e:  mov    -0x8d5c(%ebp),%eax
08419390 +0x774:  mov    %eax,0xa0(%esp)
08419397 +0x77b:  mov    -0x8d58(%ebp),%eax
0841939d +0x781:  mov    %eax,0x9c(%esp)
084193a4 +0x788:  mov    -0x8d54(%ebp),%eax
084193aa +0x78e:  mov    %eax,0x98(%esp)
084193b1 +0x795:  mov    -0x8d50(%ebp),%eax
084193b7 +0x79b:  mov    %eax,0x94(%esp)
084193be +0x7a2:  mov    -0x8d4c(%ebp),%eax
084193c4 +0x7a8:  mov    %eax,0x90(%esp)
084193cb +0x7af:  mov    -0x8d48(%ebp),%eax
084193d1 +0x7b5:  mov    %eax,0x8c(%esp)
084193d8 +0x7bc:  mov    -0x8d44(%ebp),%eax
084193de +0x7c2:  mov    %eax,0x88(%esp)
084193e5 +0x7c9:  mov    -0x8d40(%ebp),%eax
084193eb +0x7cf:  mov    %eax,0x84(%esp)
084193f2 +0x7d6:  mov    -0x8d3c(%ebp),%eax
084193f8 +0x7dc:  mov    %eax,0x80(%esp)
084193ff +0x7e3:  mov    -0x8d38(%ebp),%eax
08419405 +0x7e9:  mov    %eax,0x7c(%esp)
08419409 +0x7ed:  mov    -0x8d34(%ebp),%eax
0841940f +0x7f3:  mov    %eax,0x78(%esp)
08419413 +0x7f7:  mov    -0x8d30(%ebp),%eax
08419419 +0x7fd:  mov    %eax,0x74(%esp)
0841941d +0x801:  mov    -0x8d2c(%ebp),%eax
08419423 +0x807:  mov    %eax,0x70(%esp)
08419427 +0x80b:  mov    -0x8d28(%ebp),%eax
0841942d +0x811:  mov    %eax,0x6c(%esp)
08419431 +0x815:  mov    -0x8d24(%ebp),%eax
08419437 +0x81b:  mov    %eax,0x68(%esp)
0841943b +0x81f:  mov    -0x8d20(%ebp),%eax
08419441 +0x825:  mov    %eax,0x64(%esp)
08419445 +0x829:  mov    -0x8d1c(%ebp),%eax
0841944b +0x82f:  mov    %eax,0x60(%esp)
0841944f +0x833:  mov    -0x8d18(%ebp),%eax
08419455 +0x839:  mov    %eax,0x5c(%esp)
08419459 +0x83d:  mov    -0x8d14(%ebp),%eax
0841945f +0x843:  mov    %eax,0x58(%esp)
08419463 +0x847:  mov    -0x8d10(%ebp),%eax
08419469 +0x84d:  mov    %eax,0x54(%esp)
0841946d +0x851:  mov    -0x8d0c(%ebp),%eax
08419473 +0x857:  mov    %eax,0x50(%esp)
08419477 +0x85b:  mov    -0x8d08(%ebp),%eax
0841947d +0x861:  mov    %eax,0x4c(%esp)
08419481 +0x865:  mov    -0x8d04(%ebp),%eax
08419487 +0x86b:  mov    %eax,0x48(%esp)
0841948b +0x86f:  mov    -0x8d00(%ebp),%eax
08419491 +0x875:  mov    %eax,0x44(%esp)
08419495 +0x879:  mov    -0x8cfc(%ebp),%eax
0841949b +0x87f:  mov    %eax,0x40(%esp)
0841949f +0x883:  mov    -0x8cf8(%ebp),%eax
084194a5 +0x889:  mov    %eax,0x3c(%esp)
084194a9 +0x88d:  mov    -0x8cf4(%ebp),%eax
084194af +0x893:  mov    %eax,0x38(%esp)
084194b3 +0x897:  mov    -0x8cf0(%ebp),%eax
084194b9 +0x89d:  mov    %eax,0x34(%esp)
084194bd +0x8a1:  mov    -0x8cec(%ebp),%eax
084194c3 +0x8a7:  mov    %eax,0x30(%esp)
084194c7 +0x8ab:  mov    -0x8ce8(%ebp),%eax
084194cd +0x8b1:  mov    %eax,0x2c(%esp)
084194d1 +0x8b5:  mov    -0x8ce4(%ebp),%eax
084194d7 +0x8bb:  mov    %eax,0x28(%esp)
084194db +0x8bf:  mov    -0x8ce0(%ebp),%eax
084194e1 +0x8c5:  mov    %eax,0x24(%esp)
084194e5 +0x8c9:  mov    -0x8cdc(%ebp),%eax
084194eb +0x8cf:  mov    %eax,0x20(%esp)
084194ef +0x8d3:  mov    %edi,0x1c(%esp)
084194f3 +0x8d7:  mov    %esi,0x18(%esp)
084194f7 +0x8db:  mov    %ebx,0x14(%esp)
084194fb +0x8df:  mov    %ecx,0x10(%esp)
084194ff +0x8e3:  mov    %edx,0xc(%esp)
08419503 +0x8e7:  mov    -0x8e1c(%ebp),%edx
08419509 +0x8ed:  mov    %edx,0x8(%esp)
0841950d +0x8f1:  movl   $"upDate new_charac_quest set play_1=%d, play_1_trigger=%d, play_2=%d, play_2_trigger=%d, play_3=%d, play_3_trigger=%d, play_4=%d, play_4_trigger=%d, play_5=%d, play_5_trigger=%d,play_6=%d, play_6_trigger=%d, play_7=%d, play_7_trigger=%d, play_8=%d, play_8_trigger=%d, play_9=%d, play_9_trigger=%d, play_10=%d, play_10_trigger=%d, play_11=%d, play_11_trigger=%d, play_12=%d, play_12_trigger=%d, play_13=%d, play_13_trigger=%d, play_14=%d, play_14_trigger=%d, play_15=%d, play_15_trigger=%d,play_16=%d, play_16_trigger=%d, play_17=%d, play_17_trigger=%d, play_18=%d, play_18_trigger=%d, play_19=%d, play_19_trigger=%d, play_20=%d, play_20_trigger=%d,urgentQuestIndex=%d,quest_notify='%s' where charac_no=%u",0x4(%esp)
08419515 +0x8f9:  mov    -0x24(%ebp),%eax
08419518 +0x8fc:  mov    %eax,(%esp)
0841951b +0x8ff:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08419520 +0x904:  movl   $0x1,0x4(%esp)
08419528 +0x90c:  mov    -0x24(%ebp),%eax
0841952b +0x90f:  mov    %eax,(%esp)
0841952e +0x912:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08419533 +0x917:  xor    $0x1,%eax
08419536 +0x91a:  test   %al,%al
08419538 +0x91c:  jne    0841954b <+0x92f>
0841953a +0x91e:  mov    -0x24(%ebp),%eax
0841953d +0x921:  mov    %eax,(%esp)
08419540 +0x924:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08419545 +0x929:  or     %edx,%eax
08419547 +0x92b:  test   %eax,%eax
08419549 +0x92d:  jne    08419552 <+0x936>
0841954b +0x92f:  mov    $0x1,%eax
08419550 +0x934:  jmp    08419557 <+0x93b>
08419552 +0x936:  mov    $0x0,%eax
08419557 +0x93b:  test   %al,%al
08419559 +0x93d:  je     08419562 <+0x946>
0841955b +0x93f:  mov    $0x0,%eax
08419560 +0x944:  jmp    08419567 <+0x94b>
08419562 +0x946:  mov    $0x1,%eax
08419567 +0x94b:  add    $0x8edc,%esp
0841956d +0x951:  pop    %ebx
0841956e +0x952:  pop    %esi
0841956f +0x953:  pop    %edi
08419570 +0x954:  pop    %ebp
08419571 +0x955:  ret
```

## 反编译 C

```c
// DB_UpdateQuest::_updateQuests @ 0x8418c1c

/* DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*) */

bool __thiscall DB_UpdateQuest::_updateQuests(DB_UpdateQuest *this,SIG_UPDATE_QUEST *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  bool bVar42;
  char cVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  longlong lVar47;
  char local_8cd8 [36012];
  uint local_2c;
  MySQL *local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_24 = 30000;
  memset(local_8cd8,0,0x8cac);
  local_2c = 0x8cac;
  local_20 = 0x8cac;
  cVar43 = compress_zip(local_8cd8,&local_2c,(char *)(param_1 + 0xa4),30000);
  if (cVar43 == '\x01') {
    if (param_1[0x75d4] == (SIG_UPDATE_QUEST)0x0) {
      uVar1 = *(undefined4 *)param_1;
      uVar46 = MySQL::blob_to_str(local_28,1,param_1 + 0x75d9,0x28);
      MySQL::set_query(local_28,
                       "upDate new_charac_quest set play_1=%d, play_1_trigger=%d, play_2=%d, play_2_trigger=%d, play_3=%d, play_3_trigger=%d, play_4=%d, play_4_trigger=%d, play_5=%d, play_5_trigger=%d,play_6=%d, play_6_trigger=%d, play_7=%d, play_7_trigger=%d, play_8=%d, play_8_trigger=%d, play_9=%d, play_9_trigger=%d, play_10=%d, play_10_trigger=%d, play_11=%d, play_11_trigger=%d, play_12=%d, play_12_trigger=%d, play_13=%d, play_13_trigger=%d, play_14=%d, play_14_trigger=%d, play_15=%d, play_15_trigger=%d,play_16=%d, play_16_trigger=%d, play_17=%d, play_17_trigger=%d, play_18=%d, play_18_trigger=%d, play_19=%d, play_19_trigger=%d, play_20=%d, play_20_trigger=%d,urgentQuestIndex=%d,quest_notify=\'%s\' where charac_no=%u"
                       ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x54),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x5c),
                       *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x60),
                       *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x6c),
                       *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x70),
                       *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x74),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x78),
                       *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x7c),
                       *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x80),
                       *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x84),
                       *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x88),
                       *(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x8c),
                       *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x90),
                       *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x94),
                       *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x98),
                       *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x9c),
                       *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0xa0),
                       *(undefined4 *)(param_1 + 0x75d5),uVar46,uVar1);
    }
    else {
      uVar1 = *(undefined4 *)param_1;
      uVar44 = MySQL::blob_to_str(local_28,1,param_1 + 0x75d9,0x28);
      uVar46 = *(undefined4 *)(param_1 + 0x75d5);
      uVar2 = *(undefined4 *)(param_1 + 0xa0);
      uVar3 = *(undefined4 *)(param_1 + 0x50);
      uVar4 = *(undefined4 *)(param_1 + 0x9c);
      uVar5 = *(undefined4 *)(param_1 + 0x4c);
      uVar6 = *(undefined4 *)(param_1 + 0x98);
      uVar7 = *(undefined4 *)(param_1 + 0x48);
      uVar8 = *(undefined4 *)(param_1 + 0x94);
      uVar9 = *(undefined4 *)(param_1 + 0x44);
      uVar10 = *(undefined4 *)(param_1 + 0x90);
      uVar11 = *(undefined4 *)(param_1 + 0x40);
      uVar12 = *(undefined4 *)(param_1 + 0x8c);
      uVar13 = *(undefined4 *)(param_1 + 0x3c);
      uVar14 = *(undefined4 *)(param_1 + 0x88);
      uVar15 = *(undefined4 *)(param_1 + 0x38);
      uVar16 = *(undefined4 *)(param_1 + 0x84);
      uVar17 = *(undefined4 *)(param_1 + 0x34);
      uVar18 = *(undefined4 *)(param_1 + 0x80);
      uVar19 = *(undefined4 *)(param_1 + 0x30);
      uVar20 = *(undefined4 *)(param_1 + 0x7c);
      uVar21 = *(undefined4 *)(param_1 + 0x2c);
      uVar22 = *(undefined4 *)(param_1 + 0x78);
      uVar23 = *(undefined4 *)(param_1 + 0x28);
      uVar24 = *(undefined4 *)(param_1 + 0x74);
      uVar25 = *(undefined4 *)(param_1 + 0x24);
      uVar26 = *(undefined4 *)(param_1 + 0x70);
      uVar27 = *(undefined4 *)(param_1 + 0x20);
      uVar28 = *(undefined4 *)(param_1 + 0x6c);
      uVar29 = *(undefined4 *)(param_1 + 0x1c);
      uVar30 = *(undefined4 *)(param_1 + 0x68);
      uVar31 = *(undefined4 *)(param_1 + 0x18);
      uVar32 = *(undefined4 *)(param_1 + 100);
      uVar33 = *(undefined4 *)(param_1 + 0x14);
      uVar34 = *(undefined4 *)(param_1 + 0x60);
      uVar35 = *(undefined4 *)(param_1 + 0x10);
      uVar36 = *(undefined4 *)(param_1 + 0x5c);
      uVar37 = *(undefined4 *)(param_1 + 0xc);
      uVar38 = *(undefined4 *)(param_1 + 0x58);
      uVar39 = *(undefined4 *)(param_1 + 8);
      uVar40 = *(undefined4 *)(param_1 + 0x54);
      uVar41 = *(undefined4 *)(param_1 + 4);
      uVar45 = MySQL::blob_to_str(local_28,0,local_8cd8,local_2c);
      MySQL::set_query(local_28,
                       "upDate new_charac_quest set clear_quest=\'%s\', play_1=%d, play_1_trigger=%d, play_2=%d, play_2_trigger=%d, play_3=%d, play_3_trigger=%d, play_4=%d, play_4_trigger=%d, play_5=%d, play_5_trigger=%d,play_6=%d, play_6_trigger=%d, play_7=%d, play_7_trigger=%d, play_8=%d, play_8_trigger=%d, play_9=%d, play_9_trigger=%d, play_10=%d, play_10_trigger=%d, play_11=%d, play_11_trigger=%d, play_12=%d, play_12_trigger=%d, play_13=%d, play_13_trigger=%d, play_14=%d, play_14_trigger=%d, play_15=%d, play_15_trigger=%d,play_16=%d, play_16_trigger=%d, play_17=%d, play_17_trigger=%d, play_18=%d, play_18_trigger=%d, play_19=%d, play_19_trigger=%d, play_20=%d, play_20_trigger=%d,urgentQuestIndex=%d,quest_notify=\'%s\' where charac_no=%u"
                       ,uVar45,uVar41,uVar40,uVar39,uVar38,uVar37,uVar36,uVar35,uVar34,uVar33,uVar32
                       ,uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,uVar25,uVar24,uVar23,uVar22,uVar21
                       ,uVar20,uVar19,uVar18,uVar17,uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10
                       ,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar46,uVar44,uVar1);
    }
    cVar43 = MySQL::exec(local_28,true);
    if ((cVar43 == '\x01') && (lVar47 = MySQL::getAffectedRowCount(local_28), lVar47 != 0)) {
      bVar42 = false;
    }
    else {
      bVar42 = true;
    }
    return !bVar42;
  }
  LogManager::logFormat
            (1,"DBThread.cpp","bool DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*)",0x4a5e,
             "3RD_EXPEND : DB_UpdateQuest::DB ERROR!! charac_no(%u)",*(undefined4 *)param_1);
  return false;
}
```
