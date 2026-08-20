# update

`_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE`

`advancealtar::DB_Update::update(advancealtar::_CharacAdvanceAltarDbData const&)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813ec5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813ec5e  _ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE
#           advancealtar::DB_Update::update(advancealtar::_CharacAdvanceAltarDbData const&)
# range [0x0813ec5e, 0x0813f37f]
0813ec5e +0x000:  push   %ebp
0813ec5f +0x001:  mov    %esp,%ebp
0813ec61 +0x003:  push   %edi
0813ec62 +0x004:  push   %esi
0813ec63 +0x005:  push   %ebx
0813ec64 +0x006:  sub    $0xdc,%esp
0813ec6a +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0813ec6f +0x011:  movl   $0x0,0x8(%esp)
0813ec77 +0x019:  movl   $0x3,0x4(%esp)
0813ec7f +0x021:  mov    %eax,(%esp)
0813ec82 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0813ec87 +0x029:  mov    %eax,-0x28(%ebp)
0813ec8a +0x02c:  movb   $0x1,-0x21(%ebp)
0813ec8e +0x030:  movl   $0x0,-0x20(%ebp)
0813ec95 +0x037:  jmp    0813f360 <+0x702>
0813ec9a +0x03c:  mov    -0x20(%ebp),%eax
0813ec9d +0x03f:  imul   $0x518,%eax,%eax
0813eca3 +0x045:  add    0xc(%ebp),%eax
0813eca6 +0x048:  add    $0x4,%eax
0813eca9 +0x04b:  mov    %eax,-0x1c(%ebp)
0813ecac +0x04e:  mov    -0x1c(%ebp),%eax
0813ecaf +0x051:  movzbl 0x517(%eax),%eax
0813ecb6 +0x058:  xor    $0x1,%eax
0813ecb9 +0x05b:  test   %al,%al
0813ecbb +0x05d:  jne    0813f358 <+0x6fa>
0813ecc1 +0x063:  mov    -0x1c(%ebp),%eax
0813ecc4 +0x066:  mov    (%eax),%eax
0813ecc6 +0x068:  mov    %eax,(%esp)
0813ecc9 +0x06b:  call   08898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>  ; advancealtar::isValidRidableId(advancealtar::RidableId::T)
0813ecce +0x070:  xor    $0x1,%eax
0813ecd1 +0x073:  test   %al,%al
0813ecd3 +0x075:  jne    0813f35b <+0x6fd>
0813ecd9 +0x07b:  lea    -0x2c(%ebp),%eax
0813ecdc +0x07e:  mov    %eax,(%esp)
0813ecdf +0x081:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0813ece4 +0x086:  lea    -0x30(%ebp),%eax
0813ece7 +0x089:  mov    %eax,(%esp)
0813ecea +0x08c:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0813ecef +0x091:  lea    -0x34(%ebp),%eax
0813ecf2 +0x094:  mov    %eax,(%esp)
0813ecf5 +0x097:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0813ecfa +0x09c:  lea    -0x38(%ebp),%eax
0813ecfd +0x09f:  mov    %eax,(%esp)
0813ed00 +0x0a2:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0813ed05 +0x0a7:  mov    -0x1c(%ebp),%eax
0813ed08 +0x0aa:  add    $0x21,%eax
0813ed0b +0x0ad:  movl   $0x32,0xc(%esp)
0813ed13 +0x0b5:  mov    %eax,0x8(%esp)
0813ed17 +0x0b9:  lea    -0x2c(%ebp),%eax
0813ed1a +0x0bc:  mov    %eax,0x4(%esp)
0813ed1e +0x0c0:  mov    0x8(%ebp),%eax
0813ed21 +0x0c3:  mov    %eax,(%esp)
0813ed24 +0x0c6:  call   0813f380 <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi>  ; advancealtar::DB_Update::makeStageString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Stage const*, int)
0813ed29 +0x0cb:  mov    -0x1c(%ebp),%eax
0813ed2c +0x0ce:  add    $0x1b1,%eax
0813ed31 +0x0d3:  movl   $0xc,0xc(%esp)
0813ed39 +0x0db:  mov    %eax,0x8(%esp)
0813ed3d +0x0df:  lea    -0x30(%ebp),%eax
0813ed40 +0x0e2:  mov    %eax,0x4(%esp)
0813ed44 +0x0e6:  mov    0x8(%ebp),%eax
0813ed47 +0x0e9:  mov    %eax,(%esp)
0813ed4a +0x0ec:  call   0813f442 <_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi>  ; advancealtar::DB_Update::makeSlotString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Slot const*, int)
0813ed4f +0x0f1:  mov    -0x1c(%ebp),%eax
0813ed52 +0x0f4:  add    $0x229,%eax
0813ed57 +0x0f9:  movl   $0x32,0xc(%esp)
0813ed5f +0x101:  mov    %eax,0x8(%esp)
0813ed63 +0x105:  lea    -0x34(%ebp),%eax
0813ed66 +0x108:  mov    %eax,0x4(%esp)
0813ed6a +0x10c:  mov    0x8(%ebp),%eax
0813ed6d +0x10f:  mov    %eax,(%esp)
0813ed70 +0x112:  call   0813f53c <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi>  ; advancealtar::DB_Update::makeBuyItemString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_BuyItem const*, int)
0813ed75 +0x117:  mov    -0x1c(%ebp),%eax
0813ed78 +0x11a:  add    $0x481,%eax
0813ed7d +0x11f:  movl   $0x1e,0xc(%esp)
0813ed85 +0x127:  mov    %eax,0x8(%esp)
0813ed89 +0x12b:  lea    -0x38(%ebp),%eax
0813ed8c +0x12e:  mov    %eax,0x4(%esp)
0813ed90 +0x132:  mov    0x8(%ebp),%eax
0813ed93 +0x135:  mov    %eax,(%esp)
0813ed96 +0x138:  call   0813f66a <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi>  ; advancealtar::DB_Update::makeRewardString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, advancealtar::_Reward const*, int)
0813ed9b +0x13d:  movl   $0x0,-0x3c(%ebp)
0813eda2 +0x144:  movl   $0x0,-0x40(%ebp)
0813eda9 +0x14b:  movl   $0x0,-0x44(%ebp)
0813edb0 +0x152:  movl   $0x0,-0x48(%ebp)
0813edb7 +0x159:  movl   $0x800,0x8(%esp)
0813edbf +0x161:  movl   $0x0,0x4(%esp)
0813edc7 +0x169:  movl   $&_ZN12advancealtar16g_ZipStageBufferE,(%esp)
0813edce +0x170:  call   0807dcc0 <_init+0x5b8>
0813edd3 +0x175:  movl   $0x800,0x8(%esp)
0813eddb +0x17d:  movl   $0x0,0x4(%esp)
0813ede3 +0x185:  movl   $&_ZN12advancealtar15g_ZipSlotBufferE,(%esp)
0813edea +0x18c:  call   0807dcc0 <_init+0x5b8>
0813edef +0x191:  movl   $0x800,0x8(%esp)
0813edf7 +0x199:  movl   $0x0,0x4(%esp)
0813edff +0x1a1:  movl   $&_ZN12advancealtar18g_ZipBuyItemBufferE,(%esp)
0813ee06 +0x1a8:  call   0807dcc0 <_init+0x5b8>
0813ee0b +0x1ad:  movl   $0x800,0x8(%esp)
0813ee13 +0x1b5:  movl   $0x0,0x4(%esp)
0813ee1b +0x1bd:  movl   $&_ZN12advancealtar17g_ZipRewardBufferE,(%esp)
0813ee22 +0x1c4:  call   0807dcc0 <_init+0x5b8>
0813ee27 +0x1c9:  lea    -0x2c(%ebp),%eax
0813ee2a +0x1cc:  mov    %eax,(%esp)
0813ee2d +0x1cf:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0813ee32 +0x1d4:  mov    %eax,%ebx
0813ee34 +0x1d6:  lea    -0x2c(%ebp),%eax
0813ee37 +0x1d9:  mov    %eax,(%esp)
0813ee3a +0x1dc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813ee3f +0x1e1:  lea    -0x3c(%ebp),%edx
0813ee42 +0x1e4:  mov    %edx,0x10(%esp)
0813ee46 +0x1e8:  mov    %ebx,0xc(%esp)
0813ee4a +0x1ec:  mov    %eax,0x8(%esp)
0813ee4e +0x1f0:  movl   $0x800,0x4(%esp)
0813ee56 +0x1f8:  movl   $&_ZN12advancealtar16g_ZipStageBufferE,(%esp)
0813ee5d +0x1ff:  call   0813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>  ; advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
0813ee62 +0x204:  xor    $0x1,%eax
0813ee65 +0x207:  test   %al,%al
0813ee67 +0x209:  je     0813ee78 <+0x21a>
0813ee69 +0x20b:  mov    $0x0,%esi
0813ee6e +0x210:  mov    $0x0,%ebx
0813ee73 +0x215:  jmp    0813f2ab <+0x64d>
0813ee78 +0x21a:  lea    -0x30(%ebp),%eax
0813ee7b +0x21d:  mov    %eax,(%esp)
0813ee7e +0x220:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0813ee83 +0x225:  mov    %eax,%ebx
0813ee85 +0x227:  lea    -0x30(%ebp),%eax
0813ee88 +0x22a:  mov    %eax,(%esp)
0813ee8b +0x22d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813ee90 +0x232:  lea    -0x40(%ebp),%edx
0813ee93 +0x235:  mov    %edx,0x10(%esp)
0813ee97 +0x239:  mov    %ebx,0xc(%esp)
0813ee9b +0x23d:  mov    %eax,0x8(%esp)
0813ee9f +0x241:  movl   $0x800,0x4(%esp)
0813eea7 +0x249:  movl   $&_ZN12advancealtar15g_ZipSlotBufferE,(%esp)
0813eeae +0x250:  call   0813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>  ; advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
0813eeb3 +0x255:  xor    $0x1,%eax
0813eeb6 +0x258:  test   %al,%al
0813eeb8 +0x25a:  je     0813eec9 <+0x26b>
0813eeba +0x25c:  mov    $0x0,%esi
0813eebf +0x261:  mov    $0x0,%ebx
0813eec4 +0x266:  jmp    0813f2ab <+0x64d>
0813eec9 +0x26b:  lea    -0x34(%ebp),%eax
0813eecc +0x26e:  mov    %eax,(%esp)
0813eecf +0x271:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0813eed4 +0x276:  mov    %eax,%ebx
0813eed6 +0x278:  lea    -0x34(%ebp),%eax
0813eed9 +0x27b:  mov    %eax,(%esp)
0813eedc +0x27e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813eee1 +0x283:  lea    -0x44(%ebp),%edx
0813eee4 +0x286:  mov    %edx,0x10(%esp)
0813eee8 +0x28a:  mov    %ebx,0xc(%esp)
0813eeec +0x28e:  mov    %eax,0x8(%esp)
0813eef0 +0x292:  movl   $0x800,0x4(%esp)
0813eef8 +0x29a:  movl   $&_ZN12advancealtar18g_ZipBuyItemBufferE,(%esp)
0813eeff +0x2a1:  call   0813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>  ; advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
0813ef04 +0x2a6:  xor    $0x1,%eax
0813ef07 +0x2a9:  test   %al,%al
0813ef09 +0x2ab:  je     0813ef1a <+0x2bc>
0813ef0b +0x2ad:  mov    $0x0,%esi
0813ef10 +0x2b2:  mov    $0x0,%ebx
0813ef15 +0x2b7:  jmp    0813f2ab <+0x64d>
0813ef1a +0x2bc:  lea    -0x38(%ebp),%eax
0813ef1d +0x2bf:  mov    %eax,(%esp)
0813ef20 +0x2c2:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0813ef25 +0x2c7:  mov    %eax,%ebx
0813ef27 +0x2c9:  lea    -0x38(%ebp),%eax
0813ef2a +0x2cc:  mov    %eax,(%esp)
0813ef2d +0x2cf:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0813ef32 +0x2d4:  lea    -0x48(%ebp),%edx
0813ef35 +0x2d7:  mov    %edx,0x10(%esp)
0813ef39 +0x2db:  mov    %ebx,0xc(%esp)
0813ef3d +0x2df:  mov    %eax,0x8(%esp)
0813ef41 +0x2e3:  movl   $0x800,0x4(%esp)
0813ef49 +0x2eb:  movl   $&_ZN12advancealtar17g_ZipRewardBufferE,(%esp)
0813ef50 +0x2f2:  call   0813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>  ; advancealtar::convertStringToZip(char*, unsigned int, char const*, unsigned int, unsigned int&)
0813ef55 +0x2f7:  xor    $0x1,%eax
0813ef58 +0x2fa:  test   %al,%al
0813ef5a +0x2fc:  je     0813ef6b <+0x30d>
0813ef5c +0x2fe:  mov    $0x0,%esi
0813ef61 +0x303:  mov    $0x0,%ebx
0813ef66 +0x308:  jmp    0813f2ab <+0x64d>
0813ef6b +0x30d:  mov    -0x1c(%ebp),%eax
0813ef6e +0x310:  mov    (%eax),%eax
0813ef70 +0x312:  mov    %eax,-0x90(%ebp)
0813ef76 +0x318:  mov    0xc(%ebp),%eax
0813ef79 +0x31b:  mov    (%eax),%eax
0813ef7b +0x31d:  mov    %eax,-0x8c(%ebp)
0813ef81 +0x323:  mov    -0x48(%ebp),%eax
0813ef84 +0x326:  mov    %eax,0xc(%esp)
0813ef88 +0x32a:  movl   $&_ZN12advancealtar17g_ZipRewardBufferE,0x8(%esp)
0813ef90 +0x332:  movl   $0x3,0x4(%esp)
0813ef98 +0x33a:  mov    -0x28(%ebp),%eax
0813ef9b +0x33d:  mov    %eax,(%esp)
0813ef9e +0x340:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813efa3 +0x345:  mov    %eax,-0x88(%ebp)
0813efa9 +0x34b:  mov    -0x44(%ebp),%eax
0813efac +0x34e:  mov    %eax,0xc(%esp)
0813efb0 +0x352:  movl   $&_ZN12advancealtar18g_ZipBuyItemBufferE,0x8(%esp)
0813efb8 +0x35a:  movl   $0x2,0x4(%esp)
0813efc0 +0x362:  mov    -0x28(%ebp),%eax
0813efc3 +0x365:  mov    %eax,(%esp)
0813efc6 +0x368:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813efcb +0x36d:  mov    %eax,-0x84(%ebp)
0813efd1 +0x373:  mov    -0x40(%ebp),%eax
0813efd4 +0x376:  mov    %eax,0xc(%esp)
0813efd8 +0x37a:  movl   $&_ZN12advancealtar15g_ZipSlotBufferE,0x8(%esp)
0813efe0 +0x382:  movl   $0x1,0x4(%esp)
0813efe8 +0x38a:  mov    -0x28(%ebp),%eax
0813efeb +0x38d:  mov    %eax,(%esp)
0813efee +0x390:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813eff3 +0x395:  mov    %eax,-0x80(%ebp)
0813eff6 +0x398:  mov    -0x3c(%ebp),%eax
0813eff9 +0x39b:  mov    %eax,0xc(%esp)
0813effd +0x39f:  movl   $&_ZN12advancealtar16g_ZipStageBufferE,0x8(%esp)
0813f005 +0x3a7:  movl   $0x0,0x4(%esp)
0813f00d +0x3af:  mov    -0x28(%ebp),%eax
0813f010 +0x3b2:  mov    %eax,(%esp)
0813f013 +0x3b5:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813f018 +0x3ba:  mov    %eax,-0x7c(%ebp)
0813f01b +0x3bd:  mov    -0x1c(%ebp),%eax
0813f01e +0x3c0:  movzbl 0x20(%eax),%eax
0813f022 +0x3c4:  movzbl %al,%eax
0813f025 +0x3c7:  mov    %eax,-0x78(%ebp)
0813f028 +0x3ca:  mov    -0x1c(%ebp),%eax
0813f02b +0x3cd:  movzwl 0x1a(%eax),%eax
0813f02f +0x3d1:  cwtl
0813f030 +0x3d2:  mov    %eax,-0x74(%ebp)
0813f033 +0x3d5:  mov    -0x1c(%ebp),%eax
0813f036 +0x3d8:  movzwl 0x18(%eax),%eax
0813f03a +0x3dc:  cwtl
0813f03b +0x3dd:  mov    %eax,-0x70(%ebp)
0813f03e +0x3e0:  mov    -0x1c(%ebp),%eax
0813f041 +0x3e3:  mov    0x14(%eax),%edi
0813f044 +0x3e6:  mov    -0x1c(%ebp),%eax
0813f047 +0x3e9:  mov    0x10(%eax),%ebx
0813f04a +0x3ec:  mov    -0x1c(%ebp),%eax
0813f04d +0x3ef:  mov    0xc(%eax),%ecx
0813f050 +0x3f2:  mov    -0x1c(%ebp),%eax
0813f053 +0x3f5:  mov    0x8(%eax),%edx
0813f056 +0x3f8:  mov    -0x1c(%ebp),%eax
0813f059 +0x3fb:  mov    0x4(%eax),%eax
0813f05c +0x3fe:  mov    %eax,-0x9c(%ebp)
0813f062 +0x404:  mov    -0x90(%ebp),%eax
0813f068 +0x40a:  mov    %eax,0x3c(%esp)
0813f06c +0x40e:  mov    -0x8c(%ebp),%eax
0813f072 +0x414:  mov    %eax,0x38(%esp)
0813f076 +0x418:  mov    -0x88(%ebp),%eax
0813f07c +0x41e:  mov    %eax,0x34(%esp)
0813f080 +0x422:  mov    -0x84(%ebp),%eax
0813f086 +0x428:  mov    %eax,0x30(%esp)
0813f08a +0x42c:  mov    -0x80(%ebp),%eax
0813f08d +0x42f:  mov    %eax,0x2c(%esp)
0813f091 +0x433:  mov    -0x7c(%ebp),%eax
0813f094 +0x436:  mov    %eax,0x28(%esp)
0813f098 +0x43a:  mov    -0x78(%ebp),%eax
0813f09b +0x43d:  mov    %eax,0x24(%esp)
0813f09f +0x441:  mov    -0x74(%ebp),%eax
0813f0a2 +0x444:  mov    %eax,0x20(%esp)
0813f0a6 +0x448:  mov    -0x70(%ebp),%eax
0813f0a9 +0x44b:  mov    %eax,0x1c(%esp)
0813f0ad +0x44f:  mov    %edi,0x18(%esp)
0813f0b1 +0x453:  mov    %ebx,0x14(%esp)
0813f0b5 +0x457:  mov    %ecx,0x10(%esp)
0813f0b9 +0x45b:  mov    %edx,0xc(%esp)
0813f0bd +0x45f:  mov    -0x9c(%ebp),%eax
0813f0c3 +0x465:  mov    %eax,0x8(%esp)
0813f0c7 +0x469:  movl   $"update charac_advance_altar \t\t\t\t  set ticket_free = %d, ticket_cera = %d, \t\t\t\t  star_game = %d, star_cera = %d, star_usable = %d, \t\t\t\t  survival_best = %d, star_reset_count = %d, is_unlock_stage_effect = %d, \t\t\t\t  stage_list = '%s', \t\t\t\t  slot_list = '%s', \t\t\t\t  buy_item_list = '%s', \t\t\t\t  reward_list = '%s' \t\t\t\t  where charac_no = %u and ridable_id = %d",0x4(%esp)
0813f0cf +0x471:  mov    -0x28(%ebp),%eax
0813f0d2 +0x474:  mov    %eax,(%esp)
0813f0d5 +0x477:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0813f0da +0x47c:  movl   $0x1,0x4(%esp)
0813f0e2 +0x484:  mov    -0x28(%ebp),%eax
0813f0e5 +0x487:  mov    %eax,(%esp)
0813f0e8 +0x48a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0813f0ed +0x48f:  mov    %al,-0x21(%ebp)
0813f0f0 +0x492:  movzbl -0x21(%ebp),%eax
0813f0f4 +0x496:  xor    $0x1,%eax
0813f0f7 +0x499:  test   %al,%al
0813f0f9 +0x49b:  jne    0813f10c <+0x4ae>
0813f0fb +0x49d:  mov    -0x28(%ebp),%eax
0813f0fe +0x4a0:  mov    %eax,(%esp)
0813f101 +0x4a3:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0813f106 +0x4a8:  or     %edx,%eax
0813f108 +0x4aa:  test   %eax,%eax
0813f10a +0x4ac:  jne    0813f113 <+0x4b5>
0813f10c +0x4ae:  mov    $0x1,%eax
0813f111 +0x4b3:  jmp    0813f118 <+0x4ba>
0813f113 +0x4b5:  mov    $0x0,%eax
0813f118 +0x4ba:  test   %al,%al
0813f11a +0x4bc:  je     0813f28f <+0x631>
0813f120 +0x4c2:  mov    -0x48(%ebp),%eax
0813f123 +0x4c5:  mov    %eax,0xc(%esp)
0813f127 +0x4c9:  movl   $&_ZN12advancealtar17g_ZipRewardBufferE,0x8(%esp)
0813f12f +0x4d1:  movl   $0x3,0x4(%esp)
0813f137 +0x4d9:  mov    -0x28(%ebp),%eax
0813f13a +0x4dc:  mov    %eax,(%esp)
0813f13d +0x4df:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813f142 +0x4e4:  mov    %eax,-0x6c(%ebp)
0813f145 +0x4e7:  mov    -0x44(%ebp),%eax
0813f148 +0x4ea:  mov    %eax,0xc(%esp)
0813f14c +0x4ee:  movl   $&_ZN12advancealtar18g_ZipBuyItemBufferE,0x8(%esp)
0813f154 +0x4f6:  movl   $0x2,0x4(%esp)
0813f15c +0x4fe:  mov    -0x28(%ebp),%eax
0813f15f +0x501:  mov    %eax,(%esp)
0813f162 +0x504:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813f167 +0x509:  mov    %eax,-0x68(%ebp)
0813f16a +0x50c:  mov    -0x40(%ebp),%eax
0813f16d +0x50f:  mov    %eax,0xc(%esp)
0813f171 +0x513:  movl   $&_ZN12advancealtar15g_ZipSlotBufferE,0x8(%esp)
0813f179 +0x51b:  movl   $0x1,0x4(%esp)
0813f181 +0x523:  mov    -0x28(%ebp),%eax
0813f184 +0x526:  mov    %eax,(%esp)
0813f187 +0x529:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813f18c +0x52e:  mov    %eax,-0x64(%ebp)
0813f18f +0x531:  mov    -0x3c(%ebp),%eax
0813f192 +0x534:  mov    %eax,0xc(%esp)
0813f196 +0x538:  movl   $&_ZN12advancealtar16g_ZipStageBufferE,0x8(%esp)
0813f19e +0x540:  movl   $0x0,0x4(%esp)
0813f1a6 +0x548:  mov    -0x28(%ebp),%eax
0813f1a9 +0x54b:  mov    %eax,(%esp)
0813f1ac +0x54e:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0813f1b1 +0x553:  mov    %eax,-0x60(%ebp)
0813f1b4 +0x556:  mov    -0x1c(%ebp),%eax
0813f1b7 +0x559:  movzbl 0x20(%eax),%eax
0813f1bb +0x55d:  movzbl %al,%eax
0813f1be +0x560:  mov    %eax,-0x5c(%ebp)
0813f1c1 +0x563:  mov    -0x1c(%ebp),%eax
0813f1c4 +0x566:  movzwl 0x1a(%eax),%eax
0813f1c8 +0x56a:  cwtl
0813f1c9 +0x56b:  mov    %eax,-0x58(%ebp)
0813f1cc +0x56e:  mov    -0x1c(%ebp),%eax
0813f1cf +0x571:  movzwl 0x18(%eax),%eax
0813f1d3 +0x575:  cwtl
0813f1d4 +0x576:  mov    %eax,-0x54(%ebp)
0813f1d7 +0x579:  mov    -0x1c(%ebp),%eax
0813f1da +0x57c:  mov    0x14(%eax),%eax
0813f1dd +0x57f:  mov    %eax,-0x50(%ebp)
0813f1e0 +0x582:  mov    -0x1c(%ebp),%eax
0813f1e3 +0x585:  mov    0x10(%eax),%eax
0813f1e6 +0x588:  mov    %eax,-0x4c(%ebp)
0813f1e9 +0x58b:  mov    -0x1c(%ebp),%eax
0813f1ec +0x58e:  mov    0xc(%eax),%edi
0813f1ef +0x591:  mov    -0x1c(%ebp),%eax
0813f1f2 +0x594:  mov    0x8(%eax),%ebx
0813f1f5 +0x597:  mov    -0x1c(%ebp),%eax
0813f1f8 +0x59a:  mov    0x4(%eax),%ecx
0813f1fb +0x59d:  mov    -0x1c(%ebp),%eax
0813f1fe +0x5a0:  mov    (%eax),%eax
0813f200 +0x5a2:  mov    %eax,%edx
0813f202 +0x5a4:  mov    0xc(%ebp),%eax
0813f205 +0x5a7:  mov    (%eax),%eax
0813f207 +0x5a9:  mov    %eax,-0x9c(%ebp)
0813f20d +0x5af:  mov    -0x6c(%ebp),%eax
0813f210 +0x5b2:  mov    %eax,0x3c(%esp)
0813f214 +0x5b6:  mov    -0x68(%ebp),%eax
0813f217 +0x5b9:  mov    %eax,0x38(%esp)
0813f21b +0x5bd:  mov    -0x64(%ebp),%eax
0813f21e +0x5c0:  mov    %eax,0x34(%esp)
0813f222 +0x5c4:  mov    -0x60(%ebp),%eax
0813f225 +0x5c7:  mov    %eax,0x30(%esp)
0813f229 +0x5cb:  mov    -0x5c(%ebp),%eax
0813f22c +0x5ce:  mov    %eax,0x2c(%esp)
0813f230 +0x5d2:  mov    -0x58(%ebp),%eax
0813f233 +0x5d5:  mov    %eax,0x28(%esp)
0813f237 +0x5d9:  mov    -0x54(%ebp),%eax
0813f23a +0x5dc:  mov    %eax,0x24(%esp)
0813f23e +0x5e0:  mov    -0x50(%ebp),%eax
0813f241 +0x5e3:  mov    %eax,0x20(%esp)
0813f245 +0x5e7:  mov    -0x4c(%ebp),%eax
0813f248 +0x5ea:  mov    %eax,0x1c(%esp)
0813f24c +0x5ee:  mov    %edi,0x18(%esp)
0813f250 +0x5f2:  mov    %ebx,0x14(%esp)
0813f254 +0x5f6:  mov    %ecx,0x10(%esp)
0813f258 +0x5fa:  mov    %edx,0xc(%esp)
0813f25c +0x5fe:  mov    -0x9c(%ebp),%eax
0813f262 +0x604:  mov    %eax,0x8(%esp)
0813f266 +0x608:  movl   $"insert into charac_advance_altar \t\t\t\t\t\t  (charac_no, ridable_id, \t\t\t\t\t\t  ticket_free, ticket_cera, \t\t\t\t\t\t  star_game, star_cera, star_usable, \t\t\t\t\t\t  survival_best, star_reset_count, is_unlock_stage_effect, \t\t\t\t\t\t  stage_list, \t\t\t\t\t\t  slot_list, \t\t\t\t\t\t  buy_item_list, \t\t\t\t\t\t  reward_list) \t\t\t\t\t\t  values \t\t\t\t\t\t  (%u, %d, \t\t\t\t\t\t  %d, %d, \t\t\t\t\t\t  %d, %d, %d,\t\t\t\t\t\t  %d, %d, %d, \t\t\t\t\t\t  '%s', \t\t\t\t\t\t  '%s', \t\t\t\t\t\t  '%s', \t\t\t\t\t\t  '%s')",0x4(%esp)
0813f26e +0x610:  mov    -0x28(%ebp),%eax
0813f271 +0x613:  mov    %eax,(%esp)
0813f274 +0x616:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0813f279 +0x61b:  movl   $0x1,0x4(%esp)
0813f281 +0x623:  mov    -0x28(%ebp),%eax
0813f284 +0x626:  mov    %eax,(%esp)
0813f287 +0x629:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0813f28c +0x62e:  mov    %al,-0x21(%ebp)
0813f28f +0x631:  mov    $0x1,%ebx
0813f294 +0x636:  jmp    0813f2ab <+0x64d>
0813f296 +0x638:  mov    %edx,%ebx
0813f298 +0x63a:  mov    %eax,%esi
0813f29a +0x63c:  lea    -0x38(%ebp),%eax
0813f29d +0x63f:  mov    %eax,(%esp)
0813f2a0 +0x642:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f2a5 +0x647:  mov    %esi,%eax
0813f2a7 +0x649:  mov    %ebx,%edx
0813f2a9 +0x64b:  jmp    0813f2c8 <+0x66a>
0813f2ab +0x64d:  lea    -0x38(%ebp),%eax
0813f2ae +0x650:  mov    %eax,(%esp)
0813f2b1 +0x653:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f2b6 +0x658:  test   %ebx,%ebx
0813f2b8 +0x65a:  jne    0813f2c1 <+0x663>
0813f2ba +0x65c:  mov    $0x0,%ebx
0813f2bf +0x661:  jmp    0813f2dd <+0x67f>
0813f2c1 +0x663:  mov    $0x1,%ebx
0813f2c6 +0x668:  jmp    0813f2dd <+0x67f>
0813f2c8 +0x66a:  mov    %edx,%ebx
0813f2ca +0x66c:  mov    %eax,%esi
0813f2cc +0x66e:  lea    -0x34(%ebp),%eax
0813f2cf +0x671:  mov    %eax,(%esp)
0813f2d2 +0x674:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f2d7 +0x679:  mov    %esi,%eax
0813f2d9 +0x67b:  mov    %ebx,%edx
0813f2db +0x67d:  jmp    0813f2fa <+0x69c>
0813f2dd +0x67f:  lea    -0x34(%ebp),%eax
0813f2e0 +0x682:  mov    %eax,(%esp)
0813f2e3 +0x685:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f2e8 +0x68a:  test   %ebx,%ebx
0813f2ea +0x68c:  jne    0813f2f3 <+0x695>
0813f2ec +0x68e:  mov    $0x0,%ebx
0813f2f1 +0x693:  jmp    0813f30f <+0x6b1>
0813f2f3 +0x695:  mov    $0x1,%ebx
0813f2f8 +0x69a:  jmp    0813f30f <+0x6b1>
0813f2fa +0x69c:  mov    %edx,%ebx
0813f2fc +0x69e:  mov    %eax,%esi
0813f2fe +0x6a0:  lea    -0x30(%ebp),%eax
0813f301 +0x6a3:  mov    %eax,(%esp)
0813f304 +0x6a6:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f309 +0x6ab:  mov    %esi,%eax
0813f30b +0x6ad:  mov    %ebx,%edx
0813f30d +0x6af:  jmp    0813f32c <+0x6ce>
0813f30f +0x6b1:  lea    -0x30(%ebp),%eax
0813f312 +0x6b4:  mov    %eax,(%esp)
0813f315 +0x6b7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f31a +0x6bc:  test   %ebx,%ebx
0813f31c +0x6be:  jne    0813f325 <+0x6c7>
0813f31e +0x6c0:  mov    $0x0,%ebx
0813f323 +0x6c5:  jmp    0813f347 <+0x6e9>
0813f325 +0x6c7:  mov    $0x1,%ebx
0813f32a +0x6cc:  jmp    0813f347 <+0x6e9>
0813f32c +0x6ce:  mov    %edx,%ebx
0813f32e +0x6d0:  mov    %eax,%esi
0813f330 +0x6d2:  lea    -0x2c(%ebp),%eax
0813f333 +0x6d5:  mov    %eax,(%esp)
0813f336 +0x6d8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f33b +0x6dd:  mov    %esi,%eax
0813f33d +0x6df:  mov    %ebx,%edx
0813f33f +0x6e1:  mov    %eax,(%esp)
0813f342 +0x6e4:  call   08ae3750 <_Unwind_Resume>
0813f347 +0x6e9:  lea    -0x2c(%ebp),%eax
0813f34a +0x6ec:  mov    %eax,(%esp)
0813f34d +0x6ef:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0813f352 +0x6f4:  test   %ebx,%ebx
0813f354 +0x6f6:  je     0813f373 <+0x715>
0813f356 +0x6f8:  jmp    0813f35c <+0x6fe>
0813f358 +0x6fa:  nop
0813f359 +0x6fb:  jmp    0813f35c <+0x6fe>
0813f35b +0x6fd:  nop
0813f35c +0x6fe:  addl   $0x1,-0x20(%ebp)
0813f360 +0x702:  cmpl   $0x0,-0x20(%ebp)
0813f364 +0x706:  setle  %al
0813f367 +0x709:  test   %al,%al
0813f369 +0x70b:  jne    0813ec9a <+0x3c>
0813f36f +0x711:  movzbl -0x21(%ebp),%esi
0813f373 +0x715:  mov    %esi,%eax
0813f375 +0x717:  add    $0xdc,%esp
0813f37b +0x71d:  pop    %ebx
0813f37c +0x71e:  pop    %esi
0813f37d +0x71f:  pop    %edi
0813f37e +0x720:  pop    %ebp
0813f37f +0x721:  ret
```

## 反编译 C

```c
// advancealtar::DB_Update::update @ 0x813ec5e

/* advancealtar::DB_Update::update(advancealtar::_CharacAdvanceAltarDbData const&) */

uint __thiscall advancealtar::DB_Update::update(DB_Update *this,_CharacAdvanceAltarDbData *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint unaff_ESI;
  longlong lVar11;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  string local_3c;
  string local_38;
  string local_34;
  string local_30;
  MySQL *local_2c;
  byte local_25;
  int local_24;
  _CharacAdvanceAltarDbData *local_20;
  
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_25 = 1;
  local_24 = 0;
  do {
    if (0 < local_24) {
      return (uint)local_25;
    }
    local_20 = param_1 + local_24 * 0x518 + 4;
    if ((param_1[local_24 * 0x518 + 0x51b] == (_CharacAdvanceAltarDbData)0x1) &&
       (cVar2 = isValidRidableId(*(undefined4 *)local_20), cVar2 == '\x01')) {
      std::string::string((string *)&local_30);
                    /* try { // try from 0813ecea to 0813ecee has its CatchHandler @ 0813f32c */
      std::string::string((string *)&local_34);
                    /* try { // try from 0813ecf5 to 0813ecf9 has its CatchHandler @ 0813f2fa */
      std::string::string((string *)&local_38);
                    /* try { // try from 0813ed00 to 0813ed04 has its CatchHandler @ 0813f2c8 */
      std::string::string((string *)&local_3c);
                    /* try { // try from 0813ed24 to 0813f28b has its CatchHandler @ 0813f296 */
      makeStageString(this,&local_30,(_Stage *)(local_20 + 0x21),0x32);
      makeSlotString(this,&local_34,(_Slot *)(local_20 + 0x1b1),0xc);
      makeBuyItemString(this,&local_38,(_BuyItem *)(local_20 + 0x229),0x32);
      makeRewardString(this,&local_3c,(_Reward *)(local_20 + 0x481),0x1e);
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      memset(g_ZipStageBuffer,0,0x800);
      memset(g_ZipSlotBuffer,0,0x800);
      memset(g_ZipBuyItemBuffer,0,0x800);
      memset(g_ZipRewardBuffer,0,0x800);
      uVar3 = std::string::size((string *)&local_30);
      pcVar4 = (char *)std::string::c_str((string *)&local_30);
      cVar2 = convertStringToZip(g_ZipStageBuffer,0x800,pcVar4,uVar3,&local_40);
      if (cVar2 == '\x01') {
        uVar3 = std::string::size((string *)&local_34);
        pcVar4 = (char *)std::string::c_str((string *)&local_34);
        cVar2 = convertStringToZip(g_ZipSlotBuffer,0x800,pcVar4,uVar3,&local_44);
        if (cVar2 == '\x01') {
          uVar3 = std::string::size((string *)&local_38);
          pcVar4 = (char *)std::string::c_str((string *)&local_38);
          cVar2 = convertStringToZip(g_ZipBuyItemBuffer,0x800,pcVar4,uVar3,&local_48);
          if (cVar2 == '\x01') {
            uVar3 = std::string::size((string *)&local_3c);
            pcVar4 = (char *)std::string::c_str((string *)&local_3c);
            cVar2 = convertStringToZip(g_ZipRewardBuffer,0x800,pcVar4,uVar3,&local_4c);
            if (cVar2 == '\x01') {
              uVar9 = *(undefined4 *)local_20;
              uVar10 = *(undefined4 *)param_1;
              uVar5 = MySQL::blob_to_str(local_2c,3,g_ZipRewardBuffer,local_4c);
              uVar6 = MySQL::blob_to_str(local_2c,2,g_ZipBuyItemBuffer,local_48);
              uVar7 = MySQL::blob_to_str(local_2c,1,g_ZipSlotBuffer,local_44);
              uVar8 = MySQL::blob_to_str(local_2c,0,g_ZipStageBuffer,local_40);
              MySQL::set_query(local_2c,
                               "update charac_advance_altar \t\t\t\t  set ticket_free = %d, ticket_cera = %d, \t\t\t\t  star_game = %d, star_cera = %d, star_usable = %d, \t\t\t\t  survival_best = %d, star_reset_count = %d, is_unlock_stage_effect = %d, \t\t\t\t  stage_list = \'%s\', \t\t\t\t  slot_list = \'%s\', \t\t\t\t  buy_item_list = \'%s\', \t\t\t\t  reward_list = \'%s\' \t\t\t\t  where charac_no = %u and ridable_id = %d"
                               ,*(undefined4 *)(local_20 + 4),*(undefined4 *)(local_20 + 8),
                               *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 0x10),
                               *(undefined4 *)(local_20 + 0x14),(int)*(short *)(local_20 + 0x18),
                               (int)*(short *)(local_20 + 0x1a),(uint)(byte)local_20[0x20],uVar8,
                               uVar7,uVar6,uVar5,uVar10,uVar9);
              local_25 = MySQL::exec(local_2c,true);
              if ((local_25 == 1) && (lVar11 = MySQL::getAffectedRowCount(local_2c), lVar11 != 0)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                uVar9 = MySQL::blob_to_str(local_2c,3,g_ZipRewardBuffer,local_4c);
                uVar10 = MySQL::blob_to_str(local_2c,2,g_ZipBuyItemBuffer,local_48);
                uVar5 = MySQL::blob_to_str(local_2c,1,g_ZipSlotBuffer,local_44);
                uVar6 = MySQL::blob_to_str(local_2c,0,g_ZipStageBuffer,local_40);
                MySQL::set_query(local_2c,
                                 "insert into charac_advance_altar \t\t\t\t\t\t  (charac_no, ridable_id, \t\t\t\t\t\t  ticket_free, ticket_cera, \t\t\t\t\t\t  star_game, star_cera, star_usable, \t\t\t\t\t\t  survival_best, star_reset_count, is_unlock_stage_effect, \t\t\t\t\t\t  stage_list, \t\t\t\t\t\t  slot_list, \t\t\t\t\t\t  buy_item_list, \t\t\t\t\t\t  reward_list) \t\t\t\t\t\t  values \t\t\t\t\t\t  (%u, %d, \t\t\t\t\t\t  %d, %d, \t\t\t\t\t\t  %d, %d, %d,\t\t\t\t\t\t  %d, %d, %d, \t\t\t\t\t\t  \'%s\', \t\t\t\t\t\t  \'%s\', \t\t\t\t\t\t  \'%s\', \t\t\t\t\t\t  \'%s\')"
                                 ,*(undefined4 *)param_1,*(undefined4 *)local_20,
                                 *(undefined4 *)(local_20 + 4),*(undefined4 *)(local_20 + 8),
                                 *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 0x10),
                                 *(undefined4 *)(local_20 + 0x14),(int)*(short *)(local_20 + 0x18),
                                 (int)*(short *)(local_20 + 0x1a),(uint)(byte)local_20[0x20],uVar6,
                                 uVar5,uVar10,uVar9);
                local_25 = MySQL::exec(local_2c,true);
              }
              bVar1 = true;
            }
            else {
              unaff_ESI = 0;
              bVar1 = false;
            }
          }
          else {
            unaff_ESI = 0;
            bVar1 = false;
          }
        }
        else {
          unaff_ESI = 0;
          bVar1 = false;
        }
      }
      else {
        unaff_ESI = 0;
        bVar1 = false;
      }
                    /* try { // try from 0813f2b1 to 0813f2b5 has its CatchHandler @ 0813f2c8 */
      std::string::~string((string *)&local_3c);
                    /* try { // try from 0813f2e3 to 0813f2e7 has its CatchHandler @ 0813f2fa */
      std::string::~string((string *)&local_38);
                    /* try { // try from 0813f315 to 0813f319 has its CatchHandler @ 0813f32c */
      std::string::~string((string *)&local_34);
      std::string::~string((string *)&local_30);
      if (!bVar1) {
        return unaff_ESI;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}
```
