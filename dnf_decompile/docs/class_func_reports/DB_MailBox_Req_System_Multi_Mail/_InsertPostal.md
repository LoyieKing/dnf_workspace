# _InsertPostal

`_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL`

`DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_System_Multi_Mail` | `0x0844372e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844372e  _ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL
#           DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)
# range [0x0844372e, 0x08443b6d]
0844372e +0x000:  push   %ebp
0844372f +0x001:  mov    %esp,%ebp
08443731 +0x003:  push   %edi
08443732 +0x004:  push   %esi
08443733 +0x005:  push   %ebx
08443734 +0x006:  sub    $0x4dc,%esp
0844373a +0x00c:  lea    -0x30(%ebp),%eax
0844373d +0x00f:  mov    %eax,(%esp)
08443740 +0x012:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08443745 +0x017:  lea    -0x30(%ebp),%eax
08443748 +0x01a:  mov    %eax,(%esp)
0844374b +0x01d:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08443750 +0x022:  movl   $0x0,-0x1c(%ebp)
08443757 +0x029:  jmp    08443a93 <+0x365>
0844375c +0x02e:  cmpl   $0x0,-0x1c(%ebp)
08443760 +0x032:  je     0844376f <+0x41>
08443762 +0x034:  mov    0x10(%ebp),%eax
08443765 +0x037:  movl   $0x0,0x38c(%eax)
0844376f +0x041:  movb   $0x0,-0x31(%ebp)
08443773 +0x045:  movw   $0x0,-0x34(%ebp)
08443779 +0x04b:  mov    -0x1c(%ebp),%eax
0844377c +0x04e:  imul   $0x3d,%eax,%eax
0844377f +0x051:  add    $0x130,%eax
08443784 +0x056:  add    0x10(%ebp),%eax
08443787 +0x059:  lea    0x7(%eax),%edx
0844378a +0x05c:  lea    -0x34(%ebp),%eax
0844378d +0x05f:  mov    %eax,0x8(%esp)
08443791 +0x063:  lea    -0x31(%ebp),%eax
08443794 +0x066:  mov    %eax,0x4(%esp)
08443798 +0x06a:  mov    %edx,(%esp)
0844379b +0x06d:  call   0844d490 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0xa6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0xa6
084437a0 +0x072:  lea    -0x434(%ebp),%ebx
084437a6 +0x078:  mov    $0x0,%eax
084437ab +0x07d:  mov    $0x100,%edx
084437b0 +0x082:  mov    %ebx,%edi
084437b2 +0x084:  mov    %edx,%ecx
084437b4 +0x086:  rep stos %eax,%es:(%edi)
084437b6 +0x088:  mov    0x10(%ebp),%eax
084437b9 +0x08b:  movzbl 0x394(%eax),%eax
084437c0 +0x092:  movzbl %al,%eax
084437c3 +0x095:  mov    %eax,-0x470(%ebp)
084437c9 +0x09b:  mov    -0x1c(%ebp),%eax
084437cc +0x09e:  imul   $0x3d,%eax,%eax
084437cf +0x0a1:  add    $0x150,%eax
084437d4 +0x0a6:  add    0x10(%ebp),%eax
084437d7 +0x0a9:  add    $0x9,%eax
084437da +0x0ac:  mov    %eax,(%esp)
084437dd +0x0af:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
084437e2 +0x0b4:  movzbl %al,%eax
084437e5 +0x0b7:  mov    %eax,-0x46c(%ebp)
084437eb +0x0bd:  mov    -0x1c(%ebp),%eax
084437ee +0x0c0:  imul   $0x3d,%eax,%eax
084437f1 +0x0c3:  add    $0x130,%eax
084437f6 +0x0c8:  add    0x10(%ebp),%eax
084437f9 +0x0cb:  add    $0x1b,%eax
084437fc +0x0ce:  movl   $0xe,0xc(%esp)
08443804 +0x0d6:  mov    %eax,0x8(%esp)
08443808 +0x0da:  movl   $0x1,0x4(%esp)
08443810 +0x0e2:  mov    0xc(%ebp),%eax
08443813 +0x0e5:  mov    %eax,(%esp)
08443816 +0x0e8:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
0844381b +0x0ed:  mov    %eax,-0x468(%ebp)
08443821 +0x0f3:  mov    -0x1c(%ebp),%eax
08443824 +0x0f6:  imul   $0x3d,%eax,%eax
08443827 +0x0f9:  add    $0x130,%eax
0844382c +0x0fe:  add    0x10(%ebp),%eax
0844382f +0x101:  add    $0xb,%eax
08443832 +0x104:  movl   $0xa,0xc(%esp)
0844383a +0x10c:  mov    %eax,0x8(%esp)
0844383e +0x110:  movl   $0x0,0x4(%esp)
08443846 +0x118:  mov    0xc(%ebp),%eax
08443849 +0x11b:  mov    %eax,(%esp)
0844384c +0x11e:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08443851 +0x123:  mov    %eax,-0x464(%ebp)
08443857 +0x129:  mov    -0x1c(%ebp),%eax
0844385a +0x12c:  mov    0x10(%ebp),%edx
0844385d +0x12f:  imul   $0x3d,%eax,%eax
08443860 +0x132:  lea    (%edx,%eax,1),%eax
08443863 +0x135:  add    $0x120,%eax
08443868 +0x13a:  mov    0x13(%eax),%eax
0844386b +0x13d:  mov    %eax,-0x460(%ebp)
08443871 +0x143:  mov    0x10(%ebp),%eax
08443874 +0x146:  mov    0x39d(%eax),%eax
0844387a +0x14c:  mov    %eax,-0x45c(%ebp)
08443880 +0x152:  mov    -0x1c(%ebp),%eax
08443883 +0x155:  imul   $0x3d,%eax,%eax
08443886 +0x158:  add    $0x120,%eax
0844388b +0x15d:  add    0x10(%ebp),%eax
0844388e +0x160:  add    $0x6,%eax
08443891 +0x163:  mov    %eax,(%esp)
08443894 +0x166:  call   08150800 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x135>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x135
08443899 +0x16b:  movzbl %al,%eax
0844389c +0x16e:  mov    %eax,-0x458(%ebp)
084438a2 +0x174:  mov    -0x1c(%ebp),%eax
084438a5 +0x177:  imul   $0x3d,%eax,%eax
084438a8 +0x17a:  add    $0x120,%eax
084438ad +0x17f:  add    0x10(%ebp),%eax
084438b0 +0x182:  add    $0x6,%eax
084438b3 +0x185:  mov    %eax,(%esp)
084438b6 +0x188:  call   08335b76 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x1c>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x1c
084438bb +0x18d:  movzbl %al,%eax
084438be +0x190:  mov    %eax,-0x454(%ebp)
084438c4 +0x196:  mov    0x10(%ebp),%eax
084438c7 +0x199:  mov    %eax,-0x450(%ebp)
084438cd +0x19f:  mov    0x10(%ebp),%eax
084438d0 +0x1a2:  mov    0x38c(%eax),%eax
084438d6 +0x1a8:  mov    %eax,-0x44c(%ebp)
084438dc +0x1ae:  movzwl -0x34(%ebp),%eax
084438e0 +0x1b2:  movzwl %ax,%eax
084438e3 +0x1b5:  mov    %eax,-0x448(%ebp)
084438e9 +0x1bb:  movzbl -0x31(%ebp),%eax
084438ed +0x1bf:  movzbl %al,%eax
084438f0 +0x1c2:  mov    %eax,-0x444(%ebp)
084438f6 +0x1c8:  mov    -0x1c(%ebp),%eax
084438f9 +0x1cb:  imul   $0x3d,%eax,%eax
084438fc +0x1ce:  add    $0x120,%eax
08443901 +0x1d3:  add    0x10(%ebp),%eax
08443904 +0x1d6:  add    $0x6,%eax
08443907 +0x1d9:  mov    %eax,(%esp)
0844390a +0x1dc:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0844390f +0x1e1:  movzbl %al,%eax
08443912 +0x1e4:  mov    %eax,-0x440(%ebp)
08443918 +0x1ea:  mov    -0x1c(%ebp),%eax
0844391b +0x1ed:  mov    0x10(%ebp),%edx
0844391e +0x1f0:  imul   $0x3d,%eax,%eax
08443921 +0x1f3:  lea    (%edx,%eax,1),%eax
08443924 +0x1f6:  add    $0x120,%eax
08443929 +0x1fb:  movzwl 0x11(%eax),%eax
0844392d +0x1ff:  movzwl %ax,%eax
08443930 +0x202:  mov    %eax,-0x43c(%ebp)
08443936 +0x208:  mov    -0x1c(%ebp),%eax
08443939 +0x20b:  mov    0x10(%ebp),%edx
0844393c +0x20e:  imul   $0x3d,%eax,%eax
0844393f +0x211:  lea    (%edx,%eax,1),%eax
08443942 +0x214:  add    $0x120,%eax
08443947 +0x219:  mov    0xd(%eax),%edi
0844394a +0x21c:  mov    -0x1c(%ebp),%eax
0844394d +0x21f:  mov    0x10(%ebp),%edx
08443950 +0x222:  imul   $0x3d,%eax,%eax
08443953 +0x225:  lea    (%edx,%eax,1),%eax
08443956 +0x228:  add    $0x120,%eax
0844395b +0x22d:  mov    0x8(%eax),%esi
0844395e +0x230:  mov    -0x1c(%ebp),%eax
08443961 +0x233:  mov    0x10(%ebp),%edx
08443964 +0x236:  imul   $0x3d,%eax,%eax
08443967 +0x239:  lea    (%edx,%eax,1),%eax
0844396a +0x23c:  add    $0x126,%eax
0844396f +0x241:  movzbl (%eax),%eax
08443972 +0x244:  movzbl %al,%ebx
08443975 +0x247:  mov    0x10(%ebp),%eax
08443978 +0x24a:  mov    0x11e(%eax),%ecx
0844397e +0x250:  mov    0x10(%ebp),%eax
08443981 +0x253:  mov    0x122(%eax),%edx
08443987 +0x259:  mov    0x10(%ebp),%eax
0844398a +0x25c:  mov    0x3a1(%eax),%eax
08443990 +0x262:  mov    %eax,-0x47c(%ebp)
08443996 +0x268:  mov    -0x470(%ebp),%eax
0844399c +0x26e:  mov    %eax,0x54(%esp)
084439a0 +0x272:  mov    -0x46c(%ebp),%eax
084439a6 +0x278:  mov    %eax,0x50(%esp)
084439aa +0x27c:  mov    -0x468(%ebp),%eax
084439b0 +0x282:  mov    %eax,0x4c(%esp)
084439b4 +0x286:  mov    -0x464(%ebp),%eax
084439ba +0x28c:  mov    %eax,0x48(%esp)
084439be +0x290:  mov    -0x460(%ebp),%eax
084439c4 +0x296:  mov    %eax,0x44(%esp)
084439c8 +0x29a:  mov    -0x45c(%ebp),%eax
084439ce +0x2a0:  mov    %eax,0x40(%esp)
084439d2 +0x2a4:  mov    -0x458(%ebp),%eax
084439d8 +0x2aa:  mov    %eax,0x3c(%esp)
084439dc +0x2ae:  mov    -0x454(%ebp),%eax
084439e2 +0x2b4:  mov    %eax,0x38(%esp)
084439e6 +0x2b8:  mov    -0x450(%ebp),%eax
084439ec +0x2be:  mov    %eax,0x34(%esp)
084439f0 +0x2c2:  mov    -0x44c(%ebp),%eax
084439f6 +0x2c8:  mov    %eax,0x30(%esp)
084439fa +0x2cc:  mov    -0x448(%ebp),%eax
08443a00 +0x2d2:  mov    %eax,0x2c(%esp)
08443a04 +0x2d6:  mov    -0x444(%ebp),%eax
08443a0a +0x2dc:  mov    %eax,0x28(%esp)
08443a0e +0x2e0:  mov    -0x440(%ebp),%eax
08443a14 +0x2e6:  mov    %eax,0x24(%esp)
08443a18 +0x2ea:  mov    -0x43c(%ebp),%eax
08443a1e +0x2f0:  mov    %eax,0x20(%esp)
08443a22 +0x2f4:  mov    %edi,0x1c(%esp)
08443a26 +0x2f8:  mov    %esi,0x18(%esp)
08443a2a +0x2fc:  mov    %ebx,0x14(%esp)
08443a2e +0x300:  mov    %ecx,0x10(%esp)
08443a32 +0x304:  mov    %edx,0xc(%esp)
08443a36 +0x308:  mov    -0x47c(%ebp),%ecx
08443a3c +0x30e:  mov    %ecx,0x8(%esp)
08443a40 +0x312:  movl   $"(from_unixtime(%d),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,'%s',%d,%d,%d,%d,'%s','%s',%d,%d)",0x4(%esp)
08443a48 +0x31a:  lea    -0x434(%ebp),%eax
08443a4e +0x320:  mov    %eax,(%esp)
08443a51 +0x323:  call   0807e440 <_init+0xd38>
08443a56 +0x328:  lea    -0x434(%ebp),%eax
08443a5c +0x32e:  mov    %eax,0x4(%esp)
08443a60 +0x332:  lea    -0x30(%ebp),%eax
08443a63 +0x335:  mov    %eax,(%esp)
08443a66 +0x338:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
08443a6b +0x33d:  mov    0x10(%ebp),%eax
08443a6e +0x340:  mov    0x388(%eax),%eax
08443a74 +0x346:  sub    $0x1,%eax
08443a77 +0x349:  cmp    -0x1c(%ebp),%eax
08443a7a +0x34c:  jbe    08443a8f <+0x361>
08443a7c +0x34e:  movl   $",",0x4(%esp)
08443a84 +0x356:  lea    -0x30(%ebp),%eax
08443a87 +0x359:  mov    %eax,(%esp)
08443a8a +0x35c:  call   08708000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c10
08443a8f +0x361:  addl   $0x1,-0x1c(%ebp)
08443a93 +0x365:  mov    0x10(%ebp),%eax
08443a96 +0x368:  mov    0x388(%eax),%eax
08443a9c +0x36e:  cmp    -0x1c(%ebp),%eax
08443a9f +0x371:  seta   %al
08443aa2 +0x374:  test   %al,%al
08443aa4 +0x376:  jne    0844375c <+0x2e>
08443aaa +0x37c:  lea    -0x30(%ebp),%eax
08443aad +0x37f:  mov    %eax,(%esp)
08443ab0 +0x382:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08443ab5 +0x387:  mov    %eax,0x8(%esp)
08443ab9 +0x38b:  movl   $"inSert into postal(occ_time,send_charac_no,receive_charac_no,seal_flag,item_id,add_info,endurance,upgrade ,amplify_option,amplify_value,gold,send_charac_name,creature_flag,avata_flag,letter_id,extend_info,item_guid,random_option,seperate_upgrade,unlimit_flag) values %s",0x4(%esp)
08443ac1 +0x393:  mov    0xc(%ebp),%eax
08443ac4 +0x396:  mov    %eax,(%esp)
08443ac7 +0x399:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08443acc +0x39e:  movl   $0x1,0x4(%esp)
08443ad4 +0x3a6:  mov    0xc(%ebp),%eax
08443ad7 +0x3a9:  mov    %eax,(%esp)
08443ada +0x3ac:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08443adf +0x3b1:  xor    $0x1,%eax
08443ae2 +0x3b4:  test   %al,%al
08443ae4 +0x3b6:  je     08443b34 <+0x406>
08443ae6 +0x3b8:  lea    -0x30(%ebp),%eax
08443ae9 +0x3bb:  mov    %eax,(%esp)
08443aec +0x3be:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08443af1 +0x3c3:  mov    %eax,%ebx
08443af3 +0x3c5:  movl   $0x5,0xc(%esp)
08443afb +0x3cd:  movl   $0xa5b5,0x8(%esp)
08443b03 +0x3d5:  movl   $&_ZZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAILE19__PRETTY_FUNCTION__,0x4(%esp)
08443b0b +0x3dd:  lea    -0x2c(%ebp),%eax
08443b0e +0x3e0:  mov    %eax,(%esp)
08443b11 +0x3e3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08443b16 +0x3e8:  mov    %ebx,0x8(%esp)
08443b1a +0x3ec:  movl   $"Insert Postal Fail - inQuery(%s)",0x4(%esp)
08443b22 +0x3f4:  lea    -0x2c(%ebp),%eax
08443b25 +0x3f7:  mov    %eax,(%esp)
08443b28 +0x3fa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08443b2d +0x3ff:  mov    $0x0,%ebx
08443b32 +0x404:  jmp    08443b56 <+0x428>
08443b34 +0x406:  mov    $0x1,%ebx
08443b39 +0x40b:  jmp    08443b56 <+0x428>
08443b3b +0x40d:  mov    %edx,%ebx
08443b3d +0x40f:  mov    %eax,%esi
08443b3f +0x411:  lea    -0x30(%ebp),%eax
08443b42 +0x414:  mov    %eax,(%esp)
08443b45 +0x417:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08443b4a +0x41c:  mov    %esi,%eax
08443b4c +0x41e:  mov    %ebx,%edx
08443b4e +0x420:  mov    %eax,(%esp)
08443b51 +0x423:  call   08ae3750 <_Unwind_Resume>
08443b56 +0x428:  lea    -0x30(%ebp),%eax
08443b59 +0x42b:  mov    %eax,(%esp)
08443b5c +0x42e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08443b61 +0x433:  mov    %ebx,%eax
08443b63 +0x435:  add    $0x4dc,%esp
08443b69 +0x43b:  pop    %ebx
08443b6a +0x43c:  pop    %esi
08443b6b +0x43d:  pop    %edi
08443b6c +0x43e:  pop    %ebp
08443b6d +0x43f:  ret
```

## 反编译 C

```c
// DB_MailBox_Req_System_Multi_Mail::_InsertPostal @ 0x844372e

/* DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*) */

bool __thiscall
DB_MailBox_Req_System_Multi_Mail::_InsertPostal
          (DB_MailBox_Req_System_Multi_Mail *this,MySQL *param_1,
          SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *param_2)

{
  SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL SVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  byte bVar16;
  char local_438 [1024];
  ushort local_38;
  byte local_35;
  string local_34 [4];
  cMyTrace local_30 [16];
  uint local_20;
  
  bVar16 = 0;
  std::string::string(local_34);
                    /* try { // try from 0844374b to 08443b2c has its CatchHandler @ 08443b3b */
  std::string::clear(local_34);
  for (local_20 = 0; local_20 < *(uint *)(param_2 + 0x388); local_20 = local_20 + 1) {
    if (local_20 != 0) {
      *(undefined4 *)(param_2 + 0x38c) = 0;
    }
    local_35 = 0;
    local_38 = 0;
    stAmplifyOption_t::getValues
              ((stAmplifyOption_t *)(param_2 + local_20 * 0x3d + 0x137),&local_35,&local_38);
    pcVar15 = local_438;
    for (iVar14 = 0x100; iVar14 != 0; iVar14 = iVar14 + -1) {
      pcVar15[0] = '\0';
      pcVar15[1] = '\0';
      pcVar15[2] = '\0';
      pcVar15[3] = '\0';
      pcVar15 = pcVar15 + ((uint)bVar16 * -2 + 1) * 4;
    }
    SVar1 = param_2[0x394];
    uVar5 = UpgradeSeparateInfo::GetUpgradeSeparate
                      ((UpgradeSeparateInfo *)(param_2 + local_20 * 0x3d + 0x159));
    uVar6 = MySQL::blob_to_str(param_1,1,param_2 + local_20 * 0x3d + 0x14b,0xe);
    uVar7 = MySQL::blob_to_str(param_1,0,param_2 + local_20 * 0x3d + 0x13b,10);
    uVar13 = *(undefined4 *)(param_2 + local_20 * 0x3d + 0x133);
    uVar2 = *(undefined4 *)(param_2 + 0x39d);
    uVar8 = Inven_Item::isAvatarItemType((Inven_Item *)(param_2 + local_20 * 0x3d + 0x126));
    uVar9 = Inven_Item::IsCreatureItemType((Inven_Item *)(param_2 + local_20 * 0x3d + 0x126));
    uVar3 = *(undefined4 *)(param_2 + 0x38c);
    uVar10 = (uint)local_38;
    uVar11 = (uint)local_35;
    uVar12 = Inven_Item::GetItemAttr((Inven_Item *)(param_2 + local_20 * 0x3d + 0x126));
    sprintf(local_438,
            "(from_unixtime(%d),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\'%s\',%d,%d,%d,%d,\'%s\',\'%s\',%d,%d)"
            ,*(undefined4 *)(param_2 + 0x3a1),*(undefined4 *)(param_2 + 0x122),
            *(undefined4 *)(param_2 + 0x11e),(uint)(byte)param_2[local_20 * 0x3d + 0x126],
            *(undefined4 *)(param_2 + local_20 * 0x3d + 0x128),
            *(undefined4 *)(param_2 + local_20 * 0x3d + 0x12d),
            (uint)*(ushort *)(param_2 + local_20 * 0x3d + 0x131),uVar12 & 0xff,uVar11,uVar10,uVar3,
            param_2,uVar9 & 0xff,uVar8 & 0xff,uVar2,uVar13,uVar7,uVar6,uVar5 & 0xff,
            (uint)(byte)SVar1);
    std::string::append(local_34,local_438);
    if (local_20 < *(int *)(param_2 + 0x388) - 1U) {
      std::string::append(local_34,",");
    }
  }
  uVar13 = std::string::c_str(local_34);
  MySQL::set_query(param_1,
                   "inSert into postal(occ_time,send_charac_no,receive_charac_no,seal_flag,item_id,add_info,endurance,upgrade ,amplify_option,amplify_value,gold,send_charac_name,creature_flag,avata_flag,letter_id,extend_info,item_guid,random_option,seperate_upgrade,unlimit_flag) values %s"
                   ,uVar13);
  cVar4 = MySQL::exec(param_1,true);
  if (cVar4 != '\x01') {
    uVar13 = std::string::c_str(local_34);
    cMyTrace::cMyTrace(local_30,
                       "bool DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)"
                       ,0xa5b5,5);
    cMyTrace::operator()(local_30,"Insert Postal Fail - inQuery(%s)",uVar13);
  }
  std::string::~string(local_34);
  return cVar4 == '\x01';
}
```
