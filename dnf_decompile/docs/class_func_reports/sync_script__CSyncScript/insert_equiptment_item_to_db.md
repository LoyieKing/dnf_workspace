# insert_equiptment_item_to_db

`_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii`

`sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d87e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d87e  _ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii
#           sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)
# range [0x0861d87e, 0x08620967]
0861d87e +0x0000:  push   %ebp
0861d87f +0x0001:  mov    %esp,%ebp
0861d881 +0x0003:  push   %edi
0861d882 +0x0004:  push   %esi
0861d883 +0x0005:  push   %ebx
0861d884 +0x0006:  sub    $0xdedc,%esp
0861d88a +0x000c:  mov    0x8(%ebp),%eax
0861d88d +0x000f:  movzbl (%eax),%eax
0861d890 +0x0012:  xor    $0x1,%eax
0861d893 +0x0015:  test   %al,%al
0861d895 +0x0017:  je     0861d8a1 <+0x23>
0861d897 +0x0019:  mov    $0x1,%ebx
0861d89c +0x001e:  jmp    0862095a <+0x30dc>
0861d8a1 +0x0023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0861d8a6 +0x0028:  movl   $0x0,0x8(%esp)
0861d8ae +0x0030:  movl   $0x5,0x4(%esp)
0861d8b6 +0x0038:  mov    %eax,(%esp)
0861d8b9 +0x003b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0861d8be +0x0040:  mov    %eax,-0x78(%ebp)
0861d8c1 +0x0043:  movl   $0x0,-0x150(%ebp)
0861d8cb +0x004d:  movl   $0x0,-0x154(%ebp)
0861d8d5 +0x0057:  movl   $0x0,-0x60(%ebp)
0861d8dc +0x005e:  jmp    0861d8f9 <+0x7b>
0861d8de +0x0060:  mov    -0x60(%ebp),%eax
0861d8e1 +0x0063:  mov    0xc(%ebp),%edx
0861d8e4 +0x0066:  movzbl 0x38(%edx,%eax,1),%eax
0861d8e9 +0x006b:  test   %al,%al
0861d8eb +0x006d:  je     0861d8f5 <+0x77>
0861d8ed +0x006f:  mov    -0x60(%ebp),%eax
0861d8f0 +0x0072:  mov    %eax,-0x74(%ebp)
0861d8f3 +0x0075:  jmp    0861d904 <+0x86>
0861d8f5 +0x0077:  addl   $0x1,-0x60(%ebp)
0861d8f9 +0x007b:  cmpl   $0xa,-0x60(%ebp)
0861d8fd +0x007f:  setle  %al
0861d900 +0x0082:  test   %al,%al
0861d902 +0x0084:  jne    0861d8de <+0x60>
0861d904 +0x0086:  movl   $0x0,-0x70(%ebp)
0861d90b +0x008d:  mov    0x14(%ebp),%eax
0861d90e +0x0090:  cmp    $0x1,%eax
0861d911 +0x0093:  je     0861daeb <+0x26d>
0861d917 +0x0099:  cmp    $0x2,%eax
0861d91a +0x009c:  je     0861dafa <+0x27c>
0861d920 +0x00a2:  test   %eax,%eax
0861d922 +0x00a4:  jne    0861db07 <+0x289>
0861d928 +0x00aa:  mov    0xc(%ebp),%eax
0861d92b +0x00ad:  mov    0x1b8(%eax),%ebx
0861d931 +0x00b3:  mov    0xc(%ebp),%eax
0861d934 +0x00b6:  add    $0xbc,%eax
0861d939 +0x00bb:  mov    %eax,0x4(%esp)
0861d93d +0x00bf:  lea    -0x14c(%ebp),%eax
0861d943 +0x00c5:  mov    %eax,(%esp)
0861d946 +0x00c8:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0861d94b +0x00cd:  movl   $0x1,0x18(%esp)
0861d953 +0x00d5:  lea    -0x150(%ebp),%eax
0861d959 +0x00db:  mov    %eax,0x14(%esp)
0861d95d +0x00df:  lea    -0x154(%ebp),%eax
0861d963 +0x00e5:  mov    %eax,0x10(%esp)
0861d967 +0x00e9:  mov    %ebx,0xc(%esp)
0861d96b +0x00ed:  mov    -0x74(%ebp),%eax
0861d96e +0x00f0:  mov    %eax,0x8(%esp)
0861d972 +0x00f4:  lea    -0x14c(%ebp),%eax
0861d978 +0x00fa:  mov    %eax,0x4(%esp)
0861d97c +0x00fe:  mov    0x8(%ebp),%eax
0861d97f +0x0101:  mov    %eax,(%esp)
0861d982 +0x0104:  call   0861cf0a <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b>  ; sync_script::CSyncScript::GetType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ENUM_CHARACTERJOB, int, int&, int&, bool)
0861d987 +0x0109:  mov    %eax,%ebx
0861d989 +0x010b:  xor    $0x1,%ebx
0861d98c +0x010e:  lea    -0x14c(%ebp),%eax
0861d992 +0x0114:  mov    %eax,(%esp)
0861d995 +0x0117:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d99a +0x011c:  test   %bl,%bl
0861d99c +0x011e:  jne    0861d9c2 <+0x144>
0861d99e +0x0120:  jmp    0861d9cc <+0x14e>
0861d9a0 +0x0122:  mov    %eax,%ecx
0861d9a2 +0x0124:  mov    %edx,%eax
0861d9a4 +0x0126:  mov    %eax,%ebx
0861d9a6 +0x0128:  mov    %ecx,%esi
0861d9a8 +0x012a:  lea    -0x14c(%ebp),%eax
0861d9ae +0x0130:  mov    %eax,(%esp)
0861d9b1 +0x0133:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0861d9b6 +0x0138:  mov    %esi,%ecx
0861d9b8 +0x013a:  mov    %ebx,%eax
0861d9ba +0x013c:  mov    %ecx,(%esp)
0861d9bd +0x013f:  call   08ae3750 <_Unwind_Resume>
0861d9c2 +0x0144:  mov    $0x0,%ebx
0861d9c7 +0x0149:  jmp    0862095a <+0x30dc>
0861d9cc +0x014e:  mov    0xc(%ebp),%eax
0861d9cf +0x0151:  mov    (%eax),%eax
0861d9d1 +0x0153:  mov    %eax,0x10(%ebp)
0861d9d4 +0x0156:  mov    0xc(%ebp),%eax
0861d9d7 +0x0159:  lea    0x678(%eax),%edx
0861d9dd +0x015f:  lea    -0x168(%ebp),%eax
0861d9e3 +0x0165:  mov    %edx,0x4(%esp)
0861d9e7 +0x0169:  mov    %eax,(%esp)
0861d9ea +0x016c:  call   08393032 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22ad2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22ad2
0861d9ef +0x0171:  sub    $0x4,%esp
0861d9f2 +0x0174:  jmp    0861daab <+0x22d>
0861d9f7 +0x0179:  lea    -0x168(%ebp),%eax
0861d9fd +0x017f:  mov    %eax,(%esp)
0861da00 +0x0182:  call   083930b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b50
0861da05 +0x0187:  add    $0x4,%eax
0861da08 +0x018a:  mov    %eax,-0x5c(%ebp)
0861da0b +0x018d:  lea    -0x128c(%ebp),%eax
0861da11 +0x0193:  mov    %eax,(%esp)
0861da14 +0x0196:  call   0898db82 <_ZN17STEquipmentScriptC1Ev>  ; STEquipmentScript::STEquipmentScript()
0861da19 +0x019b:  mov    -0x5c(%ebp),%eax
0861da1c +0x019e:  mov    %eax,0x4(%esp)
0861da20 +0x01a2:  lea    -0x128c(%ebp),%eax
0861da26 +0x01a8:  add    $0x1c0,%eax
0861da2b +0x01ad:  mov    %eax,(%esp)
0861da2e +0x01b0:  call   083662ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x296>  ; global constructors keyed to CServerEvent::m_nExpRate+0x296
0861da33 +0x01b5:  lea    -0x168(%ebp),%eax
0861da39 +0x01bb:  mov    %eax,(%esp)
0861da3c +0x01be:  call   083930b0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b50
0861da41 +0x01c3:  mov    (%eax),%eax
0861da43 +0x01c5:  mov    %eax,0x10(%esp)
0861da47 +0x01c9:  movl   $0x1,0xc(%esp)
0861da4f +0x01d1:  mov    0x10(%ebp),%eax
0861da52 +0x01d4:  mov    %eax,0x8(%esp)
0861da56 +0x01d8:  lea    -0x128c(%ebp),%eax
0861da5c +0x01de:  mov    %eax,0x4(%esp)
0861da60 +0x01e2:  mov    0x8(%ebp),%eax
0861da63 +0x01e5:  mov    %eax,(%esp)
0861da66 +0x01e8:  call   0861d87e <+0x0>
0861da6b +0x01ed:  jmp    0861da8f <+0x211>
0861da6d +0x01ef:  mov    %eax,%ecx
0861da6f +0x01f1:  mov    %edx,%eax
0861da71 +0x01f3:  mov    %eax,%ebx
0861da73 +0x01f5:  mov    %ecx,%esi
0861da75 +0x01f7:  lea    -0x128c(%ebp),%eax
0861da7b +0x01fd:  mov    %eax,(%esp)
0861da7e +0x0200:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0861da83 +0x0205:  mov    %esi,%ecx
0861da85 +0x0207:  mov    %ebx,%eax
0861da87 +0x0209:  mov    %ecx,(%esp)
0861da8a +0x020c:  call   08ae3750 <_Unwind_Resume>
0861da8f +0x0211:  lea    -0x128c(%ebp),%eax
0861da95 +0x0217:  mov    %eax,(%esp)
0861da98 +0x021a:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0861da9d +0x021f:  lea    -0x168(%ebp),%eax
0861daa3 +0x0225:  mov    %eax,(%esp)
0861daa6 +0x0228:  call   08393092 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b32
0861daab +0x022d:  mov    0xc(%ebp),%eax
0861daae +0x0230:  lea    0x678(%eax),%edx
0861dab4 +0x0236:  lea    -0x148(%ebp),%eax
0861daba +0x023c:  mov    %edx,0x4(%esp)
0861dabe +0x0240:  mov    %eax,(%esp)
0861dac1 +0x0243:  call   08393058 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22af8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22af8
0861dac6 +0x0248:  sub    $0x4,%esp
0861dac9 +0x024b:  lea    -0x148(%ebp),%eax
0861dacf +0x0251:  mov    %eax,0x4(%esp)
0861dad3 +0x0255:  lea    -0x168(%ebp),%eax
0861dad9 +0x025b:  mov    %eax,(%esp)
0861dadc +0x025e:  call   0839307e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22b1e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22b1e
0861dae1 +0x0263:  test   %al,%al
0861dae3 +0x0265:  jne    0861d9f7 <+0x179>
0861dae9 +0x026b:  jmp    0861db07 <+0x289>
0861daeb +0x026d:  mov    0x10(%ebp),%eax
0861daee +0x0270:  mov    %eax,-0x70(%ebp)
0861daf1 +0x0273:  movl   $0xffffffff,0x10(%ebp)
0861daf8 +0x027a:  jmp    0861db07 <+0x289>
0861dafa +0x027c:  mov    0x10(%ebp),%eax
0861dafd +0x027f:  mov    %eax,-0x70(%ebp)
0861db00 +0x0282:  movl   $0xfffffffe,0x10(%ebp)
0861db07 +0x0289:  movl   $0x0,-0x159(%ebp)
0861db11 +0x0293:  movb   $0x0,-0x155(%ebp)
0861db18 +0x029a:  movl   $0x0,-0x6c(%ebp)
0861db1f +0x02a1:  mov    0xc(%ebp),%eax
0861db22 +0x02a4:  add    $0x6cc,%eax
0861db27 +0x02a9:  mov    %eax,(%esp)
0861db2a +0x02ac:  call   081684dc <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x33d>  ; global constructors keyed to HeroMissionValue::clear()+0x33d
0861db2f +0x02b1:  test   %eax,%eax
0861db31 +0x02b3:  setne  %al
0861db34 +0x02b6:  test   %al,%al
0861db36 +0x02b8:  je     0861dbf9 <+0x37b>
0861db3c +0x02be:  mov    0xc(%ebp),%eax
0861db3f +0x02c1:  lea    0x6cc(%eax),%edx
0861db45 +0x02c7:  lea    -0x16c(%ebp),%eax
0861db4b +0x02cd:  mov    %edx,0x4(%esp)
0861db4f +0x02d1:  mov    %eax,(%esp)
0861db52 +0x02d4:  call   08394c4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x246ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x246ec
0861db57 +0x02d9:  sub    $0x4,%esp
0861db5a +0x02dc:  jmp    0861dbb8 <+0x33a>
0861db5c +0x02de:  cmpl   $0x4,-0x6c(%ebp)
0861db60 +0x02e2:  jg     0861dbf8 <+0x37a>
0861db66 +0x02e8:  lea    -0x16c(%ebp),%eax
0861db6c +0x02ee:  mov    %eax,(%esp)
0861db6f +0x02f1:  call   083c8c94 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x62c60>  ; global constructors keyed to CServerEvent::m_nExpRate+0x62c60
0861db74 +0x02f6:  movzwl (%eax),%eax
0861db77 +0x02f9:  mov    %ax,-0x56(%ebp)
0861db7b +0x02fd:  mov    -0x6c(%ebp),%ebx
0861db7e +0x0300:  movzwl -0x56(%ebp),%eax
0861db82 +0x0304:  mov    %eax,(%esp)
0861db85 +0x0307:  call   0861ca1b <_Z22GetSocketTypeCharactert>  ; GetSocketTypeCharacter(unsigned short)
0861db8a +0x030c:  mov    %al,-0x159(%ebp,%ebx,1)
0861db91 +0x0313:  addl   $0x1,-0x6c(%ebp)
0861db95 +0x0317:  lea    -0x140(%ebp),%eax
0861db9b +0x031d:  movl   $0x0,0x8(%esp)
0861dba3 +0x0325:  lea    -0x16c(%ebp),%edx
0861dba9 +0x032b:  mov    %edx,0x4(%esp)
0861dbad +0x032f:  mov    %eax,(%esp)
0861dbb0 +0x0332:  call   08628740 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1d9e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1d9e
0861dbb5 +0x0337:  sub    $0x4,%esp
0861dbb8 +0x033a:  mov    0xc(%ebp),%eax
0861dbbb +0x033d:  lea    0x6cc(%eax),%edx
0861dbc1 +0x0343:  lea    -0x144(%ebp),%eax
0861dbc7 +0x0349:  mov    %edx,0x4(%esp)
0861dbcb +0x034d:  mov    %eax,(%esp)
0861dbce +0x0350:  call   08394c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24710
0861dbd3 +0x0355:  sub    $0x4,%esp
0861dbd6 +0x0358:  lea    -0x144(%ebp),%eax
0861dbdc +0x035e:  mov    %eax,0x4(%esp)
0861dbe0 +0x0362:  lea    -0x16c(%ebp),%eax
0861dbe6 +0x0368:  mov    %eax,(%esp)
0861dbe9 +0x036b:  call   08628714 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1d72>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1d72
0861dbee +0x0370:  test   %al,%al
0861dbf0 +0x0372:  jne    0861db5c <+0x2de>
0861dbf6 +0x0378:  jmp    0861dbf9 <+0x37b>
0861dbf8 +0x037a:  nop
0861dbf9 +0x037b:  mov    0xc(%ebp),%eax
0861dbfc +0x037e:  add    $0x6c0,%eax
0861dc01 +0x0383:  mov    %eax,(%esp)
0861dc04 +0x0386:  call   0815219a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1acf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1acf
0861dc09 +0x038b:  test   %eax,%eax
0861dc0b +0x038d:  setne  %al
0861dc0e +0x0390:  test   %al,%al
0861dc10 +0x0392:  je     0861dd46 <+0x4c8>
0861dc16 +0x0398:  mov    0xc(%ebp),%eax
0861dc19 +0x039b:  lea    0x6c0(%eax),%edx
0861dc1f +0x03a1:  lea    -0x170(%ebp),%eax
0861dc25 +0x03a7:  mov    %edx,0x4(%esp)
0861dc29 +0x03ab:  mov    %eax,(%esp)
0861dc2c +0x03ae:  call   0851ba6a <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x809f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x809f
0861dc31 +0x03b3:  sub    $0x4,%esp
0861dc34 +0x03b6:  jmp    0861dd08 <+0x48a>
0861dc39 +0x03bb:  lea    -0x170(%ebp),%eax
0861dc3f +0x03c1:  mov    %eax,(%esp)
0861dc42 +0x03c4:  call   086287a0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1dfe>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1dfe
0861dc47 +0x03c9:  mov    (%eax),%edx
0861dc49 +0x03cb:  mov    %edx,-0x9f8(%ebp)
0861dc4f +0x03d1:  mov    0x4(%eax),%edx
0861dc52 +0x03d4:  mov    %edx,-0x9f4(%ebp)
0861dc58 +0x03da:  mov    0x8(%eax),%edx
0861dc5b +0x03dd:  mov    %edx,-0x9f0(%ebp)
0861dc61 +0x03e3:  mov    0xc(%eax),%edx
0861dc64 +0x03e6:  mov    %edx,-0x9ec(%ebp)
0861dc6a +0x03ec:  mov    0x10(%eax),%edx
0861dc6d +0x03ef:  mov    %edx,-0x9e8(%ebp)
0861dc73 +0x03f5:  mov    0x14(%eax),%edx
0861dc76 +0x03f8:  mov    %edx,-0x9e4(%ebp)
0861dc7c +0x03fe:  mov    0x18(%eax),%edx
0861dc7f +0x0401:  mov    %edx,-0x9e0(%ebp)
0861dc85 +0x0407:  mov    0x1c(%eax),%eax
0861dc88 +0x040a:  mov    %eax,-0x9dc(%ebp)
0861dc8e +0x0410:  mov    -0x9e8(%ebp),%eax
0861dc94 +0x0416:  test   %eax,%eax
0861dc96 +0x0418:  jle    0861dce5 <+0x467>
0861dc98 +0x041a:  movl   $0x0,-0x54(%ebp)
0861dc9f +0x0421:  jmp    0861dcd2 <+0x454>
0861dca1 +0x0423:  cmpl   $0x4,-0x6c(%ebp)
0861dca5 +0x0427:  jg     0861dce4 <+0x466>
0861dca7 +0x0429:  mov    -0x6c(%ebp),%ebx
0861dcaa +0x042c:  mov    -0x54(%ebp),%eax
0861dcad +0x042f:  add    $0x8,%eax
0861dcb0 +0x0432:  movzwl -0x9f4(%ebp,%eax,2),%eax
0861dcb8 +0x043a:  movzwl %ax,%eax
0861dcbb +0x043d:  mov    %eax,(%esp)
0861dcbe +0x0440:  call   0861ca1b <_Z22GetSocketTypeCharactert>  ; GetSocketTypeCharacter(unsigned short)
0861dcc3 +0x0445:  mov    %al,-0x159(%ebp,%ebx,1)
0861dcca +0x044c:  addl   $0x1,-0x6c(%ebp)
0861dcce +0x0450:  addl   $0x1,-0x54(%ebp)
0861dcd2 +0x0454:  mov    -0x9e8(%ebp),%eax
0861dcd8 +0x045a:  cmp    -0x54(%ebp),%eax
0861dcdb +0x045d:  setg   %al
0861dcde +0x0460:  test   %al,%al
0861dce0 +0x0462:  jne    0861dca1 <+0x423>
0861dce2 +0x0464:  jmp    0861dce5 <+0x467>
0861dce4 +0x0466:  nop
0861dce5 +0x0467:  lea    -0x138(%ebp),%eax
0861dceb +0x046d:  movl   $0x0,0x8(%esp)
0861dcf3 +0x0475:  lea    -0x170(%ebp),%edx
0861dcf9 +0x047b:  mov    %edx,0x4(%esp)
0861dcfd +0x047f:  mov    %eax,(%esp)
0861dd00 +0x0482:  call   086287aa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1e08>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1e08
0861dd05 +0x0487:  sub    $0x4,%esp
0861dd08 +0x048a:  mov    0xc(%ebp),%eax
0861dd0b +0x048d:  lea    0x6c0(%eax),%edx
0861dd11 +0x0493:  lea    -0x13c(%ebp),%eax
0861dd17 +0x0499:  mov    %edx,0x4(%esp)
0861dd1b +0x049d:  mov    %eax,(%esp)
0861dd1e +0x04a0:  call   0851baea <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x811f>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x811f
0861dd23 +0x04a5:  sub    $0x4,%esp
0861dd26 +0x04a8:  lea    -0x13c(%ebp),%eax
0861dd2c +0x04ae:  mov    %eax,0x4(%esp)
0861dd30 +0x04b2:  lea    -0x170(%ebp),%eax
0861dd36 +0x04b8:  mov    %eax,(%esp)
0861dd39 +0x04bb:  call   08628773 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1dd1>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1dd1
0861dd3e +0x04c0:  test   %al,%al
0861dd40 +0x04c2:  jne    0861dc39 <+0x3bb>
0861dd46 +0x04c8:  lea    -0x1f8(%ebp),%ebx
0861dd4c +0x04ce:  mov    $0x0,%eax
0861dd51 +0x04d3:  mov    $0x10,%edx
0861dd56 +0x04d8:  mov    %ebx,%edi
0861dd58 +0x04da:  mov    %edx,%ecx
0861dd5a +0x04dc:  rep stos %eax,%es:(%edi)
0861dd5c +0x04de:  mov    0xc(%ebp),%eax
0861dd5f +0x04e1:  add    $0x768,%eax
0861dd64 +0x04e6:  mov    %eax,(%esp)
0861dd67 +0x04e9:  call   086287de <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1e3c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1e3c
0861dd6c +0x04ee:  test   %eax,%eax
0861dd6e +0x04f0:  setne  %al
0861dd71 +0x04f3:  test   %al,%al
0861dd73 +0x04f5:  je     0861dea1 <+0x623>
0861dd79 +0x04fb:  movl   $0x0,-0x50(%ebp)
0861dd80 +0x0502:  mov    0xc(%ebp),%eax
0861dd83 +0x0505:  lea    0x768(%eax),%edx
0861dd89 +0x050b:  lea    -0x134(%ebp),%eax
0861dd8f +0x0511:  mov    %edx,0x4(%esp)
0861dd93 +0x0515:  mov    %eax,(%esp)
0861dd96 +0x0518:  call   086287fa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1e58>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1e58
0861dd9b +0x051d:  sub    $0x4,%esp
0861dd9e +0x0520:  lea    -0x134(%ebp),%eax
0861dda4 +0x0526:  mov    %eax,0x4(%esp)
0861dda8 +0x052a:  lea    -0x174(%ebp),%eax
0861ddae +0x0530:  mov    %eax,(%esp)
0861ddb1 +0x0533:  call   0862881e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1e7c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1e7c
0861ddb6 +0x0538:  jmp    0861de63 <+0x5e5>
0861ddbb +0x053d:  lea    -0x174(%ebp),%eax
0861ddc1 +0x0543:  mov    %eax,(%esp)
0861ddc4 +0x0546:  call   0862888a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1ee8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1ee8
0861ddc9 +0x054b:  mov    (%eax),%eax
0861ddcb +0x054d:  mov    %eax,-0x4c(%ebp)
0861ddce +0x0550:  movl   $0x0,-0x17c(%ebp)
0861ddd8 +0x055a:  movl   $0x0,-0x178(%ebp)
0861dde2 +0x0564:  cmpl   $0x0,-0x50(%ebp)
0861dde6 +0x0568:  jne    0861de07 <+0x589>
0861dde8 +0x056a:  mov    -0x4c(%ebp),%eax
0861ddeb +0x056d:  mov    %eax,0x8(%esp)
0861ddef +0x0571:  movl   $"%d",0x4(%esp)
0861ddf7 +0x0579:  lea    -0x17c(%ebp),%eax
0861ddfd +0x057f:  mov    %eax,(%esp)
0861de00 +0x0582:  call   0807e440 <_init+0xd38>
0861de05 +0x0587:  jmp    0861de24 <+0x5a6>
0861de07 +0x0589:  mov    -0x4c(%ebp),%eax
0861de0a +0x058c:  mov    %eax,0x8(%esp)
0861de0e +0x0590:  movl   $"*%d",0x4(%esp)
0861de16 +0x0598:  lea    -0x17c(%ebp),%eax
0861de1c +0x059e:  mov    %eax,(%esp)
0861de1f +0x05a1:  call   0807e440 <_init+0xd38>
0861de24 +0x05a6:  lea    -0x17c(%ebp),%eax
0861de2a +0x05ac:  mov    %eax,0x4(%esp)
0861de2e +0x05b0:  lea    -0x1f8(%ebp),%eax
0861de34 +0x05b6:  mov    %eax,(%esp)
0861de37 +0x05b9:  call   0807dd60 <_init+0x658>
0861de3c +0x05be:  lea    -0x12c(%ebp),%eax
0861de42 +0x05c4:  movl   $0x0,0x8(%esp)
0861de4a +0x05cc:  lea    -0x174(%ebp),%edx
0861de50 +0x05d2:  mov    %edx,0x4(%esp)
0861de54 +0x05d6:  mov    %eax,(%esp)
0861de57 +0x05d9:  call   08628894 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1ef2>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1ef2
0861de5c +0x05de:  sub    $0x4,%esp
0861de5f +0x05e1:  addl   $0x1,-0x50(%ebp)
0861de63 +0x05e5:  mov    0xc(%ebp),%eax
0861de66 +0x05e8:  lea    0x768(%eax),%edx
0861de6c +0x05ee:  lea    -0x130(%ebp),%eax
0861de72 +0x05f4:  mov    %edx,0x4(%esp)
0861de76 +0x05f8:  mov    %eax,(%esp)
0861de79 +0x05fb:  call   08628838 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1e96>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1e96
0861de7e +0x0600:  sub    $0x4,%esp
0861de81 +0x0603:  lea    -0x130(%ebp),%eax
0861de87 +0x0609:  mov    %eax,0x4(%esp)
0861de8b +0x060d:  lea    -0x174(%ebp),%eax
0861de91 +0x0613:  mov    %eax,(%esp)
0861de94 +0x0616:  call   0862885e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1ebc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1ebc
0861de99 +0x061b:  test   %al,%al
0861de9b +0x061d:  jne    0861ddbb <+0x53d>
0861dea1 +0x0623:  lea    -0x2f8(%ebp),%ebx
0861dea7 +0x0629:  mov    $0x0,%eax
0861deac +0x062e:  mov    $0x40,%edx
0861deb1 +0x0633:  mov    %ebx,%edi
0861deb3 +0x0635:  mov    %edx,%ecx
0861deb5 +0x0637:  rep stos %eax,%es:(%edi)
0861deb7 +0x0639:  lea    -0x3f8(%ebp),%ebx
0861debd +0x063f:  mov    $0x0,%eax
0861dec2 +0x0644:  mov    $0x40,%edx
0861dec7 +0x0649:  mov    %ebx,%edi
0861dec9 +0x064b:  mov    %edx,%ecx
0861decb +0x064d:  rep stos %eax,%es:(%edi)
0861decd +0x064f:  lea    -0x4f8(%ebp),%ebx
0861ded3 +0x0655:  mov    $0x0,%eax
0861ded8 +0x065a:  mov    $0x40,%edx
0861dedd +0x065f:  mov    %ebx,%edi
0861dedf +0x0661:  mov    %edx,%ecx
0861dee1 +0x0663:  rep stos %eax,%es:(%edi)
0861dee3 +0x0665:  lea    -0x5f8(%ebp),%ebx
0861dee9 +0x066b:  mov    $0x0,%eax
0861deee +0x0670:  mov    $0x40,%edx
0861def3 +0x0675:  mov    %ebx,%edi
0861def5 +0x0677:  mov    %edx,%ecx
0861def7 +0x0679:  rep stos %eax,%es:(%edi)
0861def9 +0x067b:  movb   $0x0,-0x65(%ebp)
0861defd +0x067f:  movl   $0x0,-0x48(%ebp)
0861df04 +0x0686:  jmp    0861e4ec <+0xc6e>
0861df09 +0x068b:  mov    -0x48(%ebp),%eax
0861df0c +0x068e:  mov    0xc(%ebp),%edx
0861df0f +0x0691:  movzbl 0x38(%edx,%eax,1),%eax
0861df14 +0x0696:  test   %al,%al
0861df16 +0x0698:  je     0861e4e8 <+0xc6a>
0861df1c +0x069e:  mov    -0x48(%ebp),%eax
0861df1f +0x06a1:  mov    %eax,0x4(%esp)
0861df23 +0x06a5:  mov    0xc(%ebp),%eax
0861df26 +0x06a8:  mov    %eax,(%esp)
0861df29 +0x06ab:  call   0898ef1a <_ZN17STEquipmentScript10getAniInfoE17ENUM_CHARACTERJOB>  ; STEquipmentScript::getAniInfo(ENUM_CHARACTERJOB)
0861df2e +0x06b0:  mov    %eax,-0x44(%ebp)
0861df31 +0x06b3:  cmpl   $0x0,-0x44(%ebp)
0861df35 +0x06b7:  je     0861e4fd <+0xc7f>
0861df3b +0x06bd:  mov    -0x44(%ebp),%eax
0861df3e +0x06c0:  mov    0x30(%eax),%eax
0861df41 +0x06c3:  cmp    $0xffffffff,%eax
0861df44 +0x06c6:  jne    0861df6b <+0x6ed>
0861df46 +0x06c8:  mov    -0x44(%ebp),%eax
0861df49 +0x06cb:  mov    0x34(%eax),%eax
0861df4c +0x06ce:  cmp    $0xffffffff,%eax
0861df4f +0x06d1:  jne    0861df6b <+0x6ed>
0861df51 +0x06d3:  mov    -0x44(%ebp),%eax
0861df54 +0x06d6:  mov    0xc(%eax),%eax
0861df57 +0x06d9:  cmp    $0xffffffff,%eax
0861df5a +0x06dc:  jne    0861df6b <+0x6ed>
0861df5c +0x06de:  mov    -0x44(%ebp),%eax
0861df5f +0x06e1:  mov    0x10(%eax),%eax
0861df62 +0x06e4:  cmp    $0xffffffff,%eax
0861df65 +0x06e7:  je     0861e4e1 <+0xc63>
0861df6b +0x06ed:  mov    -0x44(%ebp),%eax
0861df6e +0x06f0:  movzbl 0x14(%eax),%eax
0861df72 +0x06f4:  test   %al,%al
0861df74 +0x06f6:  je     0861e235 <+0x9b7>
0861df7a +0x06fc:  mov    -0x44(%ebp),%eax
0861df7d +0x06ff:  mov    0x30(%eax),%eax
0861df80 +0x0702:  cmp    $0xffffffff,%eax
0861df83 +0x0705:  jne    0861df94 <+0x716>
0861df85 +0x0707:  mov    -0x44(%ebp),%eax
0861df88 +0x070a:  mov    0x34(%eax),%eax
0861df8b +0x070d:  cmp    $0xffffffff,%eax
0861df8e +0x0710:  je     0861e4e4 <+0xc66>
0861df94 +0x0716:  lea    -0x9f8(%ebp),%ebx
0861df9a +0x071c:  mov    $0x0,%eax
0861df9f +0x0721:  mov    $0x40,%edx
0861dfa4 +0x0726:  mov    %ebx,%edi
0861dfa6 +0x0728:  mov    %edx,%ecx
0861dfa8 +0x072a:  rep stos %eax,%es:(%edi)
0861dfaa +0x072c:  mov    -0x44(%ebp),%eax
0861dfad +0x072f:  mov    0x34(%eax),%edx
0861dfb0 +0x0732:  mov    -0x44(%ebp),%eax
0861dfb3 +0x0735:  mov    0x30(%eax),%eax
0861dfb6 +0x0738:  mov    %edx,0xc(%esp)
0861dfba +0x073c:  mov    %eax,0x8(%esp)
0861dfbe +0x0740:  movl   $"%02d%02d",0x4(%esp)
0861dfc6 +0x0748:  lea    -0x9f8(%ebp),%eax
0861dfcc +0x074e:  mov    %eax,(%esp)
0861dfcf +0x0751:  call   0807e440 <_init+0xd38>
0861dfd4 +0x0756:  cmpb   $0x0,-0x65(%ebp)
0861dfd8 +0x075a:  je     0861e023 <+0x7a5>
0861dfda +0x075c:  movl   $0x0,-0x190(%ebp)
0861dfe4 +0x0766:  movl   $0x0,-0x18c(%ebp)
0861dfee +0x0770:  mov    -0x48(%ebp),%eax
0861dff1 +0x0773:  mov    %eax,0x8(%esp)
0861dff5 +0x0777:  movl   $"*%d",0x4(%esp)
0861dffd +0x077f:  lea    -0x190(%ebp),%eax
0861e003 +0x0785:  mov    %eax,(%esp)
0861e006 +0x0788:  call   0807e440 <_init+0xd38>
0861e00b +0x078d:  lea    -0x190(%ebp),%eax
0861e011 +0x0793:  mov    %eax,0x4(%esp)
0861e015 +0x0797:  lea    -0x9f8(%ebp),%eax
0861e01b +0x079d:  mov    %eax,(%esp)
0861e01e +0x07a0:  call   0807dd60 <_init+0x658>
0861e023 +0x07a5:  movl   $0x0,-0x184(%ebp)
0861e02d +0x07af:  movl   $0x0,-0x180(%ebp)
0861e037 +0x07b9:  mov    -0x44(%ebp),%eax
0861e03a +0x07bc:  add    $0x18,%eax
0861e03d +0x07bf:  mov    %eax,(%esp)
0861e040 +0x07c2:  call   086288c8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f26>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f26
0861e045 +0x07c7:  mov    %eax,0x8(%esp)
0861e049 +0x07cb:  movl   $"*%d",0x4(%esp)
0861e051 +0x07d3:  lea    -0x184(%ebp),%eax
0861e057 +0x07d9:  mov    %eax,(%esp)
0861e05a +0x07dc:  call   0807e440 <_init+0xd38>
0861e05f +0x07e1:  lea    -0x184(%ebp),%eax
0861e065 +0x07e7:  mov    %eax,0x4(%esp)
0861e069 +0x07eb:  lea    -0x9f8(%ebp),%eax
0861e06f +0x07f1:  mov    %eax,(%esp)
0861e072 +0x07f4:  call   0807dd60 <_init+0x658>
0861e077 +0x07f9:  mov    -0x44(%ebp),%eax
0861e07a +0x07fc:  lea    0x18(%eax),%edx
0861e07d +0x07ff:  lea    -0x128(%ebp),%eax
0861e083 +0x0805:  mov    %edx,0x4(%esp)
0861e087 +0x0809:  mov    %eax,(%esp)
0861e08a +0x080c:  call   086288ea <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f48>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f48
0861e08f +0x0811:  sub    $0x4,%esp
0861e092 +0x0814:  lea    -0x128(%ebp),%eax
0861e098 +0x081a:  mov    %eax,0x4(%esp)
0861e09c +0x081e:  lea    -0x188(%ebp),%eax
0861e0a2 +0x0824:  mov    %eax,(%esp)
0861e0a5 +0x0827:  call   0862890e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f6c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f6c
0861e0aa +0x082c:  jmp    0861e1b1 <+0x933>
0861e0af +0x0831:  lea    -0x128c(%ebp),%ebx
0861e0b5 +0x0837:  mov    $0x0,%eax
0861e0ba +0x083c:  mov    $0x40,%edx
0861e0bf +0x0841:  mov    %ebx,%edi
0861e0c1 +0x0843:  mov    %edx,%ecx
0861e0c3 +0x0845:  rep stos %eax,%es:(%edi)
0861e0c5 +0x0847:  lea    -0xde8c(%ebp),%ebx
0861e0cb +0x084d:  mov    $0x0,%eax
0861e0d0 +0x0852:  mov    $0x40,%edx
0861e0d5 +0x0857:  mov    %ebx,%edi
0861e0d7 +0x0859:  mov    %edx,%ecx
0861e0d9 +0x085b:  rep stos %eax,%es:(%edi)
0861e0db +0x085d:  lea    -0x188(%ebp),%eax
0861e0e1 +0x0863:  mov    %eax,(%esp)
0861e0e4 +0x0866:  call   0862897a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1fd8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1fd8
0861e0e9 +0x086b:  mov    %eax,-0x40(%ebp)
0861e0ec +0x086e:  movl   $"*",0x4(%esp)
0861e0f4 +0x0876:  lea    -0x9f8(%ebp),%eax
0861e0fa +0x087c:  mov    %eax,(%esp)
0861e0fd +0x087f:  call   0807dd60 <_init+0x658>
0861e102 +0x0884:  mov    -0x40(%ebp),%eax
0861e105 +0x0887:  add    $0x60,%eax
0861e108 +0x088a:  mov    %eax,(%esp)
0861e10b +0x088d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e110 +0x0892:  mov    %eax,0x4(%esp)
0861e114 +0x0896:  lea    -0x128c(%ebp),%eax
0861e11a +0x089c:  mov    %eax,(%esp)
0861e11d +0x089f:  call   0807def0 <_init+0x7e8>
0861e122 +0x08a4:  movl   $0x0,-0x3c(%ebp)
0861e129 +0x08ab:  movl   $0x0,-0x38(%ebp)
0861e130 +0x08b2:  jmp    0861e15e <+0x8e0>
0861e132 +0x08b4:  mov    -0x38(%ebp),%eax
0861e135 +0x08b7:  movzbl -0x128c(%ebp,%eax,1),%eax
0861e13d +0x08bf:  cmp    $0x5f,%al
0861e13f +0x08c1:  je     0861e15a <+0x8dc>
0861e141 +0x08c3:  mov    -0x3c(%ebp),%eax
0861e144 +0x08c6:  mov    -0x38(%ebp),%edx
0861e147 +0x08c9:  movzbl -0x128c(%ebp,%edx,1),%edx
0861e14f +0x08d1:  mov    %dl,-0xde8c(%ebp,%eax,1)
0861e156 +0x08d8:  addl   $0x1,-0x3c(%ebp)
0861e15a +0x08dc:  addl   $0x1,-0x38(%ebp)
0861e15e +0x08e0:  lea    -0x128c(%ebp),%eax
0861e164 +0x08e6:  mov    %eax,(%esp)
0861e167 +0x08e9:  call   0807e3b0 <_init+0xca8>
0861e16c +0x08ee:  cmp    -0x38(%ebp),%eax
0861e16f +0x08f1:  seta   %al
0861e172 +0x08f4:  test   %al,%al
0861e174 +0x08f6:  jne    0861e132 <+0x8b4>
0861e176 +0x08f8:  lea    -0xde8c(%ebp),%eax
0861e17c +0x08fe:  mov    %eax,0x4(%esp)
0861e180 +0x0902:  lea    -0x9f8(%ebp),%eax
0861e186 +0x0908:  mov    %eax,(%esp)
0861e189 +0x090b:  call   0807dd60 <_init+0x658>
0861e18e +0x0910:  lea    -0x120(%ebp),%eax
0861e194 +0x0916:  movl   $0x0,0x8(%esp)
0861e19c +0x091e:  lea    -0x188(%ebp),%edx
0861e1a2 +0x0924:  mov    %edx,0x4(%esp)
0861e1a6 +0x0928:  mov    %eax,(%esp)
0861e1a9 +0x092b:  call   08628984 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1fe2>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1fe2
0861e1ae +0x0930:  sub    $0x4,%esp
0861e1b1 +0x0933:  mov    -0x44(%ebp),%eax
0861e1b4 +0x0936:  lea    0x18(%eax),%edx
0861e1b7 +0x0939:  lea    -0x124(%ebp),%eax
0861e1bd +0x093f:  mov    %edx,0x4(%esp)
0861e1c1 +0x0943:  mov    %eax,(%esp)
0861e1c4 +0x0946:  call   08628928 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f86>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f86
0861e1c9 +0x094b:  sub    $0x4,%esp
0861e1cc +0x094e:  lea    -0x124(%ebp),%eax
0861e1d2 +0x0954:  mov    %eax,0x4(%esp)
0861e1d6 +0x0958:  lea    -0x188(%ebp),%eax
0861e1dc +0x095e:  mov    %eax,(%esp)
0861e1df +0x0961:  call   0862894e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1fac>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1fac
0861e1e4 +0x0966:  test   %al,%al
0861e1e6 +0x0968:  jne    0861e0af <+0x831>
0861e1ec +0x096e:  movzbl -0x65(%ebp),%eax
0861e1f0 +0x0972:  xor    $0x1,%eax
0861e1f3 +0x0975:  test   %al,%al
0861e1f5 +0x0977:  je     0861e218 <+0x99a>
0861e1f7 +0x0979:  lea    -0x9f8(%ebp),%eax
0861e1fd +0x097f:  mov    %eax,0x4(%esp)
0861e201 +0x0983:  lea    -0x3f8(%ebp),%eax
0861e207 +0x0989:  mov    %eax,(%esp)
0861e20a +0x098c:  call   0807def0 <_init+0x7e8>
0861e20f +0x0991:  movb   $0x1,-0x65(%ebp)
0861e213 +0x0995:  jmp    0861e4e8 <+0xc6a>
0861e218 +0x099a:  lea    -0x9f8(%ebp),%eax
0861e21e +0x09a0:  mov    %eax,0x4(%esp)
0861e222 +0x09a4:  lea    -0x5f8(%ebp),%eax
0861e228 +0x09aa:  mov    %eax,(%esp)
0861e22b +0x09ad:  call   0807def0 <_init+0x7e8>
0861e230 +0x09b2:  jmp    0861e4e8 <+0xc6a>
0861e235 +0x09b7:  mov    -0x44(%ebp),%eax
0861e238 +0x09ba:  mov    0xc(%eax),%eax
0861e23b +0x09bd:  cmp    $0xffffffff,%eax
0861e23e +0x09c0:  jne    0861e24f <+0x9d1>
0861e240 +0x09c2:  mov    -0x44(%ebp),%eax
0861e243 +0x09c5:  mov    0x10(%eax),%eax
0861e246 +0x09c8:  cmp    $0xffffffff,%eax
0861e249 +0x09cb:  je     0861e4e7 <+0xc69>
0861e24f +0x09d1:  lea    -0xde8c(%ebp),%ebx
0861e255 +0x09d7:  mov    $0x0,%eax
0861e25a +0x09dc:  mov    $0x40,%edx
0861e25f +0x09e1:  mov    %ebx,%edi
0861e261 +0x09e3:  mov    %edx,%ecx
0861e263 +0x09e5:  rep stos %eax,%es:(%edi)
0861e265 +0x09e7:  mov    -0x44(%ebp),%eax
0861e268 +0x09ea:  mov    0x10(%eax),%edx
0861e26b +0x09ed:  mov    -0x44(%ebp),%eax
0861e26e +0x09f0:  mov    0xc(%eax),%eax
0861e271 +0x09f3:  mov    %edx,0xc(%esp)
0861e275 +0x09f7:  mov    %eax,0x8(%esp)
0861e279 +0x09fb:  movl   $"%02d%02d",0x4(%esp)
0861e281 +0x0a03:  lea    -0xde8c(%ebp),%eax
0861e287 +0x0a09:  mov    %eax,(%esp)
0861e28a +0x0a0c:  call   0807e440 <_init+0xd38>
0861e28f +0x0a11:  cmpb   $0x0,-0x65(%ebp)
0861e293 +0x0a15:  je     0861e2de <+0xa60>
0861e295 +0x0a17:  movl   $0x0,-0x1a4(%ebp)
0861e29f +0x0a21:  movl   $0x0,-0x1a0(%ebp)
0861e2a9 +0x0a2b:  mov    -0x48(%ebp),%eax
0861e2ac +0x0a2e:  mov    %eax,0x8(%esp)
0861e2b0 +0x0a32:  movl   $"*%d",0x4(%esp)
0861e2b8 +0x0a3a:  lea    -0x1a4(%ebp),%eax
0861e2be +0x0a40:  mov    %eax,(%esp)
0861e2c1 +0x0a43:  call   0807e440 <_init+0xd38>
0861e2c6 +0x0a48:  lea    -0x1a4(%ebp),%eax
0861e2cc +0x0a4e:  mov    %eax,0x4(%esp)
0861e2d0 +0x0a52:  lea    -0xde8c(%ebp),%eax
0861e2d6 +0x0a58:  mov    %eax,(%esp)
0861e2d9 +0x0a5b:  call   0807dd60 <_init+0x658>
0861e2de +0x0a60:  movl   $0x0,-0x198(%ebp)
0861e2e8 +0x0a6a:  movl   $0x0,-0x194(%ebp)
0861e2f2 +0x0a74:  mov    -0x44(%ebp),%eax
0861e2f5 +0x0a77:  mov    %eax,(%esp)
0861e2f8 +0x0a7a:  call   086288c8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f26>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f26
0861e2fd +0x0a7f:  mov    %eax,0x8(%esp)
0861e301 +0x0a83:  movl   $"*%d",0x4(%esp)
0861e309 +0x0a8b:  lea    -0x198(%ebp),%eax
0861e30f +0x0a91:  mov    %eax,(%esp)
0861e312 +0x0a94:  call   0807e440 <_init+0xd38>
0861e317 +0x0a99:  lea    -0x198(%ebp),%eax
0861e31d +0x0a9f:  mov    %eax,0x4(%esp)
0861e321 +0x0aa3:  lea    -0xde8c(%ebp),%eax
0861e327 +0x0aa9:  mov    %eax,(%esp)
0861e32a +0x0aac:  call   0807dd60 <_init+0x658>
0861e32f +0x0ab1:  mov    -0x44(%ebp),%edx
0861e332 +0x0ab4:  lea    -0x11c(%ebp),%eax
0861e338 +0x0aba:  mov    %edx,0x4(%esp)
0861e33c +0x0abe:  mov    %eax,(%esp)
0861e33f +0x0ac1:  call   086288ea <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f48>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f48
0861e344 +0x0ac6:  sub    $0x4,%esp
0861e347 +0x0ac9:  lea    -0x11c(%ebp),%eax
0861e34d +0x0acf:  mov    %eax,0x4(%esp)
0861e351 +0x0ad3:  lea    -0x19c(%ebp),%eax
0861e357 +0x0ad9:  mov    %eax,(%esp)
0861e35a +0x0adc:  call   0862890e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f6c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f6c
0861e35f +0x0ae1:  jmp    0861e466 <+0xbe8>
0861e364 +0x0ae6:  lea    -0x128c(%ebp),%ebx
0861e36a +0x0aec:  mov    $0x0,%eax
0861e36f +0x0af1:  mov    $0x40,%edx
0861e374 +0x0af6:  mov    %ebx,%edi
0861e376 +0x0af8:  mov    %edx,%ecx
0861e378 +0x0afa:  rep stos %eax,%es:(%edi)
0861e37a +0x0afc:  lea    -0x9f8(%ebp),%ebx
0861e380 +0x0b02:  mov    $0x0,%eax
0861e385 +0x0b07:  mov    $0x40,%edx
0861e38a +0x0b0c:  mov    %ebx,%edi
0861e38c +0x0b0e:  mov    %edx,%ecx
0861e38e +0x0b10:  rep stos %eax,%es:(%edi)
0861e390 +0x0b12:  lea    -0x19c(%ebp),%eax
0861e396 +0x0b18:  mov    %eax,(%esp)
0861e399 +0x0b1b:  call   0862897a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1fd8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1fd8
0861e39e +0x0b20:  mov    %eax,-0x34(%ebp)
0861e3a1 +0x0b23:  movl   $"*",0x4(%esp)
0861e3a9 +0x0b2b:  lea    -0xde8c(%ebp),%eax
0861e3af +0x0b31:  mov    %eax,(%esp)
0861e3b2 +0x0b34:  call   0807dd60 <_init+0x658>
0861e3b7 +0x0b39:  mov    -0x34(%ebp),%eax
0861e3ba +0x0b3c:  add    $0x60,%eax
0861e3bd +0x0b3f:  mov    %eax,(%esp)
0861e3c0 +0x0b42:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e3c5 +0x0b47:  mov    %eax,0x4(%esp)
0861e3c9 +0x0b4b:  lea    -0x128c(%ebp),%eax
0861e3cf +0x0b51:  mov    %eax,(%esp)
0861e3d2 +0x0b54:  call   0807def0 <_init+0x7e8>
0861e3d7 +0x0b59:  movl   $0x0,-0x30(%ebp)
0861e3de +0x0b60:  movl   $0x0,-0x2c(%ebp)
0861e3e5 +0x0b67:  jmp    0861e413 <+0xb95>
0861e3e7 +0x0b69:  mov    -0x2c(%ebp),%eax
0861e3ea +0x0b6c:  movzbl -0x128c(%ebp,%eax,1),%eax
0861e3f2 +0x0b74:  cmp    $0x5f,%al
0861e3f4 +0x0b76:  je     0861e40f <+0xb91>
0861e3f6 +0x0b78:  mov    -0x30(%ebp),%eax
0861e3f9 +0x0b7b:  mov    -0x2c(%ebp),%edx
0861e3fc +0x0b7e:  movzbl -0x128c(%ebp,%edx,1),%edx
0861e404 +0x0b86:  mov    %dl,-0x9f8(%ebp,%eax,1)
0861e40b +0x0b8d:  addl   $0x1,-0x30(%ebp)
0861e40f +0x0b91:  addl   $0x1,-0x2c(%ebp)
0861e413 +0x0b95:  lea    -0x128c(%ebp),%eax
0861e419 +0x0b9b:  mov    %eax,(%esp)
0861e41c +0x0b9e:  call   0807e3b0 <_init+0xca8>
0861e421 +0x0ba3:  cmp    -0x2c(%ebp),%eax
0861e424 +0x0ba6:  seta   %al
0861e427 +0x0ba9:  test   %al,%al
0861e429 +0x0bab:  jne    0861e3e7 <+0xb69>
0861e42b +0x0bad:  lea    -0x9f8(%ebp),%eax
0861e431 +0x0bb3:  mov    %eax,0x4(%esp)
0861e435 +0x0bb7:  lea    -0xde8c(%ebp),%eax
0861e43b +0x0bbd:  mov    %eax,(%esp)
0861e43e +0x0bc0:  call   0807dd60 <_init+0x658>
0861e443 +0x0bc5:  lea    -0x114(%ebp),%eax
0861e449 +0x0bcb:  movl   $0x0,0x8(%esp)
0861e451 +0x0bd3:  lea    -0x19c(%ebp),%edx
0861e457 +0x0bd9:  mov    %edx,0x4(%esp)
0861e45b +0x0bdd:  mov    %eax,(%esp)
0861e45e +0x0be0:  call   08628984 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1fe2>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1fe2
0861e463 +0x0be5:  sub    $0x4,%esp
0861e466 +0x0be8:  mov    -0x44(%ebp),%edx
0861e469 +0x0beb:  lea    -0x118(%ebp),%eax
0861e46f +0x0bf1:  mov    %edx,0x4(%esp)
0861e473 +0x0bf5:  mov    %eax,(%esp)
0861e476 +0x0bf8:  call   08628928 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1f86>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1f86
0861e47b +0x0bfd:  sub    $0x4,%esp
0861e47e +0x0c00:  lea    -0x118(%ebp),%eax
0861e484 +0x0c06:  mov    %eax,0x4(%esp)
0861e488 +0x0c0a:  lea    -0x19c(%ebp),%eax
0861e48e +0x0c10:  mov    %eax,(%esp)
0861e491 +0x0c13:  call   0862894e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1fac>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1fac
0861e496 +0x0c18:  test   %al,%al
0861e498 +0x0c1a:  jne    0861e364 <+0xae6>
0861e49e +0x0c20:  movzbl -0x65(%ebp),%eax
0861e4a2 +0x0c24:  xor    $0x1,%eax
0861e4a5 +0x0c27:  test   %al,%al
0861e4a7 +0x0c29:  je     0861e4c7 <+0xc49>
0861e4a9 +0x0c2b:  lea    -0xde8c(%ebp),%eax
0861e4af +0x0c31:  mov    %eax,0x4(%esp)
0861e4b3 +0x0c35:  lea    -0x2f8(%ebp),%eax
0861e4b9 +0x0c3b:  mov    %eax,(%esp)
0861e4bc +0x0c3e:  call   0807def0 <_init+0x7e8>
0861e4c1 +0x0c43:  movb   $0x1,-0x65(%ebp)
0861e4c5 +0x0c47:  jmp    0861e4e8 <+0xc6a>
0861e4c7 +0x0c49:  lea    -0xde8c(%ebp),%eax
0861e4cd +0x0c4f:  mov    %eax,0x4(%esp)
0861e4d1 +0x0c53:  lea    -0x4f8(%ebp),%eax
0861e4d7 +0x0c59:  mov    %eax,(%esp)
0861e4da +0x0c5c:  call   0807def0 <_init+0x7e8>
0861e4df +0x0c61:  jmp    0861e4e8 <+0xc6a>
0861e4e1 +0x0c63:  nop
0861e4e2 +0x0c64:  jmp    0861e4e8 <+0xc6a>
0861e4e4 +0x0c66:  nop
0861e4e5 +0x0c67:  jmp    0861e4e8 <+0xc6a>
0861e4e7 +0x0c69:  nop
0861e4e8 +0x0c6a:  addl   $0x1,-0x48(%ebp)
0861e4ec +0x0c6e:  cmpl   $0xa,-0x48(%ebp)
0861e4f0 +0x0c72:  setle  %al
0861e4f3 +0x0c75:  test   %al,%al
0861e4f5 +0x0c77:  jne    0861df09 <+0x68b>
0861e4fb +0x0c7d:  jmp    0861e4fe <+0xc80>
0861e4fd +0x0c7f:  nop
0861e4fe +0x0c80:  movl   $0x0,-0x15e(%ebp)
0861e508 +0x0c8a:  movb   $0x0,-0x15a(%ebp)
0861e50f +0x0c91:  mov    0xc(%ebp),%eax
0861e512 +0x0c94:  add    $0x780,%eax
0861e517 +0x0c99:  mov    %eax,(%esp)
0861e51a +0x0c9c:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0861e51f +0x0ca1:  xor    $0x1,%eax
0861e522 +0x0ca4:  test   %al,%al
0861e524 +0x0ca6:  je     0861e5fe <+0xd80>
0861e52a +0x0cac:  movl   $0x0,-0x28(%ebp)
0861e531 +0x0cb3:  mov    0xc(%ebp),%eax
0861e534 +0x0cb6:  lea    0x780(%eax),%edx
0861e53a +0x0cbc:  lea    -0x110(%ebp),%eax
0861e540 +0x0cc2:  mov    %edx,0x4(%esp)
0861e544 +0x0cc6:  mov    %eax,(%esp)
0861e547 +0x0cc9:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0861e54c +0x0cce:  sub    $0x4,%esp
0861e54f +0x0cd1:  lea    -0x110(%ebp),%eax
0861e555 +0x0cd7:  mov    %eax,0x4(%esp)
0861e559 +0x0cdb:  lea    -0x1a8(%ebp),%eax
0861e55f +0x0ce1:  mov    %eax,(%esp)
0861e562 +0x0ce4:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
0861e567 +0x0ce9:  jmp    0861e5bd <+0xd3f>
0861e569 +0x0ceb:  cmpl   $0x4,-0x28(%ebp)
0861e56d +0x0cef:  jg     0861e5fd <+0xd7f>
0861e573 +0x0cf5:  lea    -0x1a8(%ebp),%eax
0861e579 +0x0cfb:  mov    %eax,(%esp)
0861e57c +0x0cfe:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0861e581 +0x0d03:  mov    (%eax),%eax
0861e583 +0x0d05:  mov    %eax,-0x24(%ebp)
0861e586 +0x0d08:  mov    -0x28(%ebp),%eax
0861e589 +0x0d0b:  mov    -0x24(%ebp),%edx
0861e58c +0x0d0e:  add    $0x30,%edx
0861e58f +0x0d11:  mov    %dl,-0x15e(%ebp,%eax,1)
0861e596 +0x0d18:  addl   $0x1,-0x28(%ebp)
0861e59a +0x0d1c:  lea    -0x108(%ebp),%eax
0861e5a0 +0x0d22:  movl   $0x0,0x8(%esp)
0861e5a8 +0x0d2a:  lea    -0x1a8(%ebp),%edx
0861e5ae +0x0d30:  mov    %edx,0x4(%esp)
0861e5b2 +0x0d34:  mov    %eax,(%esp)
0861e5b5 +0x0d37:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0861e5ba +0x0d3c:  sub    $0x4,%esp
0861e5bd +0x0d3f:  mov    0xc(%ebp),%eax
0861e5c0 +0x0d42:  lea    0x780(%eax),%edx
0861e5c6 +0x0d48:  lea    -0x10c(%ebp),%eax
0861e5cc +0x0d4e:  mov    %edx,0x4(%esp)
0861e5d0 +0x0d52:  mov    %eax,(%esp)
0861e5d3 +0x0d55:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0861e5d8 +0x0d5a:  sub    $0x4,%esp
0861e5db +0x0d5d:  lea    -0x10c(%ebp),%eax
0861e5e1 +0x0d63:  mov    %eax,0x4(%esp)
0861e5e5 +0x0d67:  lea    -0x1a8(%ebp),%eax
0861e5eb +0x0d6d:  mov    %eax,(%esp)
0861e5ee +0x0d70:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
0861e5f3 +0x0d75:  test   %al,%al
0861e5f5 +0x0d77:  jne    0861e569 <+0xceb>
0861e5fb +0x0d7d:  jmp    0861e5fe <+0xd80>
0861e5fd +0x0d7f:  nop
0861e5fe +0x0d80:  lea    -0x3e8c(%ebp),%eax
0861e604 +0x0d86:  mov    $0x2c00,%edx
0861e609 +0x0d8b:  mov    %edx,0x8(%esp)
0861e60d +0x0d8f:  movl   $0x0,0x4(%esp)
0861e615 +0x0d97:  mov    %eax,(%esp)
0861e618 +0x0d9a:  call   0807dcc0 <_init+0x5b8>
0861e61d +0x0d9f:  movl   $0x4,-0x64(%ebp)
0861e624 +0x0da6:  lea    -0x164(%ebp),%eax
0861e62a +0x0dac:  mov    %eax,(%esp)
0861e62d +0x0daf:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0861e632 +0x0db4:  mov    0xc(%ebp),%eax
0861e635 +0x0db7:  add    $0xb4,%eax
0861e63a +0x0dbc:  mov    %eax,(%esp)
0861e63d +0x0dbf:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
0861e642 +0x0dc4:  test   %eax,%eax
0861e644 +0x0dc6:  setne  %al
0861e647 +0x0dc9:  test   %al,%al
0861e649 +0x0dcb:  je     0861e667 <+0xde9>
0861e64b +0x0dcd:  mov    0xc(%ebp),%eax
0861e64e +0x0dd0:  add    $0xb4,%eax
0861e653 +0x0dd5:  mov    %eax,0x4(%esp)
0861e657 +0x0dd9:  lea    -0x164(%ebp),%eax
0861e65d +0x0ddf:  mov    %eax,(%esp)
0861e660 +0x0de2:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0861e665 +0x0de7:  jmp    0861e681 <+0xe03>
0861e667 +0x0de9:  mov    0xc(%ebp),%eax
0861e66a +0x0dec:  add    $0x6a4,%eax
0861e66f +0x0df1:  mov    %eax,0x4(%esp)
0861e673 +0x0df5:  lea    -0x164(%ebp),%eax
0861e679 +0x0dfb:  mov    %eax,(%esp)
0861e67c +0x0dfe:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
0861e681 +0x0e03:  lea    -0x9f8(%ebp),%ebx
0861e687 +0x0e09:  mov    $0x0,%eax
0861e68c +0x0e0e:  mov    $0x100,%edx
0861e691 +0x0e13:  mov    %ebx,%edi
0861e693 +0x0e15:  mov    %edx,%ecx
0861e695 +0x0e17:  rep stos %eax,%es:(%edi)
0861e697 +0x0e19:  mov    0xc(%ebp),%eax
0861e69a +0x0e1c:  add    $0xac,%eax
0861e69f +0x0e21:  mov    %eax,(%esp)
0861e6a2 +0x0e24:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e6a7 +0x0e29:  lea    -0x9f8(%ebp),%edx
0861e6ad +0x0e2f:  mov    %edx,0x4(%esp)
0861e6b1 +0x0e33:  mov    %eax,(%esp)
0861e6b4 +0x0e36:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
0861e6b9 +0x0e3b:  xor    $0x1,%eax
0861e6bc +0x0e3e:  test   %al,%al
0861e6be +0x0e40:  je     0861e746 <+0xec8>
0861e6c4 +0x0e46:  mov    0xc(%ebp),%eax
0861e6c7 +0x0e49:  add    $0xac,%eax
0861e6cc +0x0e4e:  mov    %eax,(%esp)
0861e6cf +0x0e51:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e6d4 +0x0e56:  mov    %eax,%edi
0861e6d6 +0x0e58:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0861e6db +0x0e5d:  mov    %eax,%esi
0861e6dd +0x0e5f:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
0861e6e2 +0x0e64:  mov    %eax,%ebx
0861e6e4 +0x0e66:  movl   $0x5,0xc(%esp)
0861e6ec +0x0e6e:  movl   $0x398,0x8(%esp)
0861e6f4 +0x0e76:  movl   $&_ZZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjiiE19__PRETTY_FUNCTION__,0x4(%esp)
0861e6fc +0x0e7e:  lea    -0x104(%ebp),%eax
0861e702 +0x0e84:  mov    %eax,(%esp)
0861e705 +0x0e87:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0861e70a +0x0e8c:  movl   $0x398,0x18(%esp)
0861e712 +0x0e94:  movl   $&_ZZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjiiE19__PRETTY_FUNCTION__,0x14(%esp)
0861e71a +0x0e9c:  mov    %edi,0x10(%esp)
0861e71e +0x0ea0:  mov    %esi,0xc(%esp)
0861e722 +0x0ea4:  mov    %ebx,0x8(%esp)
0861e726 +0x0ea8:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0861e72e +0x0eb0:  lea    -0x104(%ebp),%eax
0861e734 +0x0eb6:  mov    %eax,(%esp)
0861e737 +0x0eb9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0861e73c +0x0ebe:  mov    $0x0,%ebx
0861e741 +0x0ec3:  jmp    0862094c <+0x30ce>
0861e746 +0x0ec8:  lea    -0x128c(%ebp),%ebx
0861e74c +0x0ece:  mov    $0x0,%eax
0861e751 +0x0ed3:  mov    $0x100,%edx
0861e756 +0x0ed8:  mov    %ebx,%edi
0861e758 +0x0eda:  mov    %edx,%ecx
0861e75a +0x0edc:  rep stos %eax,%es:(%edi)
0861e75c +0x0ede:  lea    -0x164(%ebp),%eax
0861e762 +0x0ee4:  mov    %eax,(%esp)
0861e765 +0x0ee7:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e76a +0x0eec:  lea    -0x128c(%ebp),%edx
0861e770 +0x0ef2:  mov    %edx,0x4(%esp)
0861e774 +0x0ef6:  mov    %eax,(%esp)
0861e777 +0x0ef9:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
0861e77c +0x0efe:  xor    $0x1,%eax
0861e77f +0x0f01:  test   %al,%al
0861e781 +0x0f03:  je     0861e809 <+0xf8b>
0861e787 +0x0f09:  mov    0xc(%ebp),%eax
0861e78a +0x0f0c:  add    $0xb4,%eax
0861e78f +0x0f11:  mov    %eax,(%esp)
0861e792 +0x0f14:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e797 +0x0f19:  mov    %eax,%edi
0861e799 +0x0f1b:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
0861e79e +0x0f20:  mov    %eax,%esi
0861e7a0 +0x0f22:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
0861e7a5 +0x0f27:  mov    %eax,%ebx
0861e7a7 +0x0f29:  movl   $0x5,0xc(%esp)
0861e7af +0x0f31:  movl   $0x39f,0x8(%esp)
0861e7b7 +0x0f39:  movl   $&_ZZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjiiE19__PRETTY_FUNCTION__,0x4(%esp)
0861e7bf +0x0f41:  lea    -0xf4(%ebp),%eax
0861e7c5 +0x0f47:  mov    %eax,(%esp)
0861e7c8 +0x0f4a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0861e7cd +0x0f4f:  movl   $0x39f,0x18(%esp)
0861e7d5 +0x0f57:  movl   $&_ZZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjiiE19__PRETTY_FUNCTION__,0x14(%esp)
0861e7dd +0x0f5f:  mov    %edi,0x10(%esp)
0861e7e1 +0x0f63:  mov    %esi,0xc(%esp)
0861e7e5 +0x0f67:  mov    %ebx,0x8(%esp)
0861e7e9 +0x0f6b:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0861e7f1 +0x0f73:  lea    -0xf4(%ebp),%eax
0861e7f7 +0x0f79:  mov    %eax,(%esp)
0861e7fa +0x0f7c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0861e7ff +0x0f81:  mov    $0x0,%ebx
0861e804 +0x0f86:  jmp    0862094c <+0x30ce>
0861e809 +0x0f8b:  lea    -0xde8c(%ebp),%eax
0861e80f +0x0f91:  mov    %eax,(%esp)
0861e812 +0x0f94:  call   086269be <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1c
0861e817 +0x0f99:  mov    0x10(%ebp),%eax
0861e81a +0x0f9c:  mov    %eax,0x4(%esp)
0861e81e +0x0fa0:  lea    -0xde8c(%ebp),%eax
0861e824 +0x0fa6:  mov    %eax,(%esp)
0861e827 +0x0fa9:  call   08626a96 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xf4>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xf4
0861e82c +0x0fae:  lea    -0x3e8c(%ebp),%eax
0861e832 +0x0fb4:  mov    %eax,0x8(%esp)
0861e836 +0x0fb8:  lea    -0x9f8(%ebp),%eax
0861e83c +0x0fbe:  mov    %eax,0x4(%esp)
0861e840 +0x0fc2:  mov    -0x78(%ebp),%eax
0861e843 +0x0fc5:  mov    %eax,(%esp)
0861e846 +0x0fc8:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861e84b +0x0fcd:  mov    %eax,%ebx
0861e84d +0x0fcf:  movl   $", '",0x4(%esp)
0861e855 +0x0fd7:  lea    -0xde8c(%ebp),%eax
0861e85b +0x0fdd:  mov    %eax,(%esp)
0861e85e +0x0fe0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e863 +0x0fe5:  mov    %ebx,0x4(%esp)
0861e867 +0x0fe9:  mov    %eax,(%esp)
0861e86a +0x0fec:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e86f +0x0ff1:  movl   $"'",0x4(%esp)
0861e877 +0x0ff9:  mov    %eax,(%esp)
0861e87a +0x0ffc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e87f +0x1001:  lea    -0x3e8c(%ebp),%eax
0861e885 +0x1007:  lea    0x400(%eax),%ebx
0861e88b +0x100d:  mov    0xc(%ebp),%eax
0861e88e +0x1010:  add    $0xb0,%eax
0861e893 +0x1015:  mov    %eax,(%esp)
0861e896 +0x1018:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861e89b +0x101d:  mov    %ebx,0x8(%esp)
0861e89f +0x1021:  mov    %eax,0x4(%esp)
0861e8a3 +0x1025:  mov    -0x78(%ebp),%eax
0861e8a6 +0x1028:  mov    %eax,(%esp)
0861e8a9 +0x102b:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861e8ae +0x1030:  mov    %eax,%ebx
0861e8b0 +0x1032:  movl   $", '",0x4(%esp)
0861e8b8 +0x103a:  lea    -0xde8c(%ebp),%eax
0861e8be +0x1040:  mov    %eax,(%esp)
0861e8c1 +0x1043:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e8c6 +0x1048:  mov    %ebx,0x4(%esp)
0861e8ca +0x104c:  mov    %eax,(%esp)
0861e8cd +0x104f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e8d2 +0x1054:  movl   $"'",0x4(%esp)
0861e8da +0x105c:  mov    %eax,(%esp)
0861e8dd +0x105f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e8e2 +0x1064:  lea    -0x3e8c(%ebp),%eax
0861e8e8 +0x106a:  add    $0x800,%eax
0861e8ed +0x106f:  mov    %eax,0x8(%esp)
0861e8f1 +0x1073:  lea    -0x128c(%ebp),%eax
0861e8f7 +0x1079:  mov    %eax,0x4(%esp)
0861e8fb +0x107d:  mov    -0x78(%ebp),%eax
0861e8fe +0x1080:  mov    %eax,(%esp)
0861e901 +0x1083:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861e906 +0x1088:  mov    %eax,%ebx
0861e908 +0x108a:  movl   $", '",0x4(%esp)
0861e910 +0x1092:  lea    -0xde8c(%ebp),%eax
0861e916 +0x1098:  mov    %eax,(%esp)
0861e919 +0x109b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e91e +0x10a0:  mov    %ebx,0x4(%esp)
0861e922 +0x10a4:  mov    %eax,(%esp)
0861e925 +0x10a7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e92a +0x10ac:  movl   $"'",0x4(%esp)
0861e932 +0x10b4:  mov    %eax,(%esp)
0861e935 +0x10b7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e93a +0x10bc:  mov    -0x154(%ebp),%ebx
0861e940 +0x10c2:  movl   $", ",0x4(%esp)
0861e948 +0x10ca:  lea    -0xde8c(%ebp),%eax
0861e94e +0x10d0:  mov    %eax,(%esp)
0861e951 +0x10d3:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e956 +0x10d8:  mov    %ebx,0x4(%esp)
0861e95a +0x10dc:  mov    %eax,(%esp)
0861e95d +0x10df:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861e962 +0x10e4:  mov    -0x150(%ebp),%ebx
0861e968 +0x10ea:  movl   $", ",0x4(%esp)
0861e970 +0x10f2:  lea    -0xde8c(%ebp),%eax
0861e976 +0x10f8:  mov    %eax,(%esp)
0861e979 +0x10fb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e97e +0x1100:  mov    %ebx,0x4(%esp)
0861e982 +0x1104:  mov    %eax,(%esp)
0861e985 +0x1107:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861e98a +0x110c:  mov    0xc(%ebp),%eax
0861e98d +0x110f:  mov    %eax,0x4(%esp)
0861e991 +0x1113:  mov    0x8(%ebp),%eax
0861e994 +0x1116:  mov    %eax,(%esp)
0861e997 +0x1119:  call   0861d330 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript>  ; sync_script::CSyncScript::GetUsableCharacter(STEquipmentScript*)
0861e99c +0x111e:  mov    %eax,%ebx
0861e99e +0x1120:  movl   $", '",0x4(%esp)
0861e9a6 +0x1128:  lea    -0xde8c(%ebp),%eax
0861e9ac +0x112e:  mov    %eax,(%esp)
0861e9af +0x1131:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e9b4 +0x1136:  mov    %ebx,0x4(%esp)
0861e9b8 +0x113a:  mov    %eax,(%esp)
0861e9bb +0x113d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e9c0 +0x1142:  movl   $"'",0x4(%esp)
0861e9c8 +0x114a:  mov    %eax,(%esp)
0861e9cb +0x114d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e9d0 +0x1152:  mov    0xc(%ebp),%eax
0861e9d3 +0x1155:  mov    0x4(%eax),%ebx
0861e9d6 +0x1158:  movl   $", ",0x4(%esp)
0861e9de +0x1160:  lea    -0xde8c(%ebp),%eax
0861e9e4 +0x1166:  mov    %eax,(%esp)
0861e9e7 +0x1169:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861e9ec +0x116e:  mov    %ebx,0x4(%esp)
0861e9f0 +0x1172:  mov    %eax,(%esp)
0861e9f3 +0x1175:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861e9f8 +0x117a:  mov    0xc(%ebp),%eax
0861e9fb +0x117d:  mov    0x8(%eax),%eax
0861e9fe +0x1180:  mov    %eax,0x4(%esp)
0861ea02 +0x1184:  mov    0x8(%ebp),%eax
0861ea05 +0x1187:  mov    %eax,(%esp)
0861ea08 +0x118a:  call   0861d3ec <_ZN11sync_script11CSyncScript13GetAttachTypeEi>  ; sync_script::CSyncScript::GetAttachType(int)
0861ea0d +0x118f:  mov    %eax,%ebx
0861ea0f +0x1191:  movl   $", '",0x4(%esp)
0861ea17 +0x1199:  lea    -0xde8c(%ebp),%eax
0861ea1d +0x119f:  mov    %eax,(%esp)
0861ea20 +0x11a2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ea25 +0x11a7:  mov    %ebx,0x4(%esp)
0861ea29 +0x11ab:  mov    %eax,(%esp)
0861ea2c +0x11ae:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ea31 +0x11b3:  movl   $"'",0x4(%esp)
0861ea39 +0x11bb:  mov    %eax,(%esp)
0861ea3c +0x11be:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ea41 +0x11c3:  mov    0xc(%ebp),%eax
0861ea44 +0x11c6:  mov    0x5c(%eax),%ebx
0861ea47 +0x11c9:  movl   $", ",0x4(%esp)
0861ea4f +0x11d1:  lea    -0xde8c(%ebp),%eax
0861ea55 +0x11d7:  mov    %eax,(%esp)
0861ea58 +0x11da:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ea5d +0x11df:  mov    %ebx,0x4(%esp)
0861ea61 +0x11e3:  mov    %eax,(%esp)
0861ea64 +0x11e6:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ea69 +0x11eb:  mov    0xc(%ebp),%eax
0861ea6c +0x11ee:  mov    0x184(%eax),%ebx
0861ea72 +0x11f4:  movl   $", ",0x4(%esp)
0861ea7a +0x11fc:  lea    -0xde8c(%ebp),%eax
0861ea80 +0x1202:  mov    %eax,(%esp)
0861ea83 +0x1205:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ea88 +0x120a:  mov    %ebx,0x4(%esp)
0861ea8c +0x120e:  mov    %eax,(%esp)
0861ea8f +0x1211:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ea94 +0x1216:  mov    0xc(%ebp),%eax
0861ea97 +0x1219:  mov    0xc(%eax),%ebx
0861ea9a +0x121c:  movl   $", ",0x4(%esp)
0861eaa2 +0x1224:  lea    -0xde8c(%ebp),%eax
0861eaa8 +0x122a:  mov    %eax,(%esp)
0861eaab +0x122d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eab0 +0x1232:  mov    %ebx,0x4(%esp)
0861eab4 +0x1236:  mov    %eax,(%esp)
0861eab7 +0x1239:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eabc +0x123e:  mov    0xc(%ebp),%eax
0861eabf +0x1241:  mov    0x10(%eax),%eax
0861eac2 +0x1244:  mov    %eax,%ebx
0861eac4 +0x1246:  movl   $", ",0x4(%esp)
0861eacc +0x124e:  lea    -0xde8c(%ebp),%eax
0861ead2 +0x1254:  mov    %eax,(%esp)
0861ead5 +0x1257:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eada +0x125c:  mov    %ebx,0x4(%esp)
0861eade +0x1260:  mov    %eax,(%esp)
0861eae1 +0x1263:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eae6 +0x1268:  mov    0xc(%ebp),%eax
0861eae9 +0x126b:  mov    0x34(%eax),%ebx
0861eaec +0x126e:  movl   $", ",0x4(%esp)
0861eaf4 +0x1276:  lea    -0xde8c(%ebp),%eax
0861eafa +0x127c:  mov    %eax,(%esp)
0861eafd +0x127f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eb02 +0x1284:  mov    %ebx,0x4(%esp)
0861eb06 +0x1288:  mov    %eax,(%esp)
0861eb09 +0x128b:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eb0e +0x1290:  mov    0xc(%ebp),%eax
0861eb11 +0x1293:  mov    0x14(%eax),%ebx
0861eb14 +0x1296:  movl   $", ",0x4(%esp)
0861eb1c +0x129e:  lea    -0xde8c(%ebp),%eax
0861eb22 +0x12a4:  mov    %eax,(%esp)
0861eb25 +0x12a7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eb2a +0x12ac:  mov    %ebx,0x4(%esp)
0861eb2e +0x12b0:  mov    %eax,(%esp)
0861eb31 +0x12b3:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eb36 +0x12b8:  mov    0xc(%ebp),%eax
0861eb39 +0x12bb:  mov    0x18(%eax),%ebx
0861eb3c +0x12be:  movl   $", ",0x4(%esp)
0861eb44 +0x12c6:  lea    -0xde8c(%ebp),%eax
0861eb4a +0x12cc:  mov    %eax,(%esp)
0861eb4d +0x12cf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eb52 +0x12d4:  mov    %ebx,0x4(%esp)
0861eb56 +0x12d8:  mov    %eax,(%esp)
0861eb59 +0x12db:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eb5e +0x12e0:  mov    0xc(%ebp),%eax
0861eb61 +0x12e3:  mov    0x1c(%eax),%ebx
0861eb64 +0x12e6:  movl   $", ",0x4(%esp)
0861eb6c +0x12ee:  lea    -0xde8c(%ebp),%eax
0861eb72 +0x12f4:  mov    %eax,(%esp)
0861eb75 +0x12f7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eb7a +0x12fc:  mov    %ebx,0x4(%esp)
0861eb7e +0x1300:  mov    %eax,(%esp)
0861eb81 +0x1303:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eb86 +0x1308:  mov    0xc(%ebp),%eax
0861eb89 +0x130b:  mov    0x1bc(%eax),%ebx
0861eb8f +0x1311:  movl   $", ",0x4(%esp)
0861eb97 +0x1319:  lea    -0xde8c(%ebp),%eax
0861eb9d +0x131f:  mov    %eax,(%esp)
0861eba0 +0x1322:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eba5 +0x1327:  mov    %ebx,0x4(%esp)
0861eba9 +0x132b:  mov    %eax,(%esp)
0861ebac +0x132e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ebb1 +0x1333:  mov    0xc(%ebp),%eax
0861ebb4 +0x1336:  mov    0x68(%eax),%ebx
0861ebb7 +0x1339:  movl   $", ",0x4(%esp)
0861ebbf +0x1341:  lea    -0xde8c(%ebp),%eax
0861ebc5 +0x1347:  mov    %eax,(%esp)
0861ebc8 +0x134a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ebcd +0x134f:  mov    %ebx,0x4(%esp)
0861ebd1 +0x1353:  mov    %eax,(%esp)
0861ebd4 +0x1356:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ebd9 +0x135b:  mov    0xc(%ebp),%eax
0861ebdc +0x135e:  mov    0x1c4(%eax),%ebx
0861ebe2 +0x1364:  movl   $", ",0x4(%esp)
0861ebea +0x136c:  lea    -0xde8c(%ebp),%eax
0861ebf0 +0x1372:  mov    %eax,(%esp)
0861ebf3 +0x1375:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ebf8 +0x137a:  mov    %ebx,0x4(%esp)
0861ebfc +0x137e:  mov    %eax,(%esp)
0861ebff +0x1381:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ec04 +0x1386:  mov    0xc(%ebp),%eax
0861ec07 +0x1389:  mov    0x1cc(%eax),%ebx
0861ec0d +0x138f:  movl   $", ",0x4(%esp)
0861ec15 +0x1397:  lea    -0xde8c(%ebp),%eax
0861ec1b +0x139d:  mov    %eax,(%esp)
0861ec1e +0x13a0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ec23 +0x13a5:  mov    %ebx,0x4(%esp)
0861ec27 +0x13a9:  mov    %eax,(%esp)
0861ec2a +0x13ac:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ec2f +0x13b1:  mov    0xc(%ebp),%eax
0861ec32 +0x13b4:  mov    0x1d4(%eax),%ebx
0861ec38 +0x13ba:  movl   $", ",0x4(%esp)
0861ec40 +0x13c2:  lea    -0xde8c(%ebp),%eax
0861ec46 +0x13c8:  mov    %eax,(%esp)
0861ec49 +0x13cb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ec4e +0x13d0:  mov    %ebx,0x4(%esp)
0861ec52 +0x13d4:  mov    %eax,(%esp)
0861ec55 +0x13d7:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ec5a +0x13dc:  mov    0xc(%ebp),%eax
0861ec5d +0x13df:  mov    0x1d8(%eax),%ebx
0861ec63 +0x13e5:  movl   $", ",0x4(%esp)
0861ec6b +0x13ed:  lea    -0xde8c(%ebp),%eax
0861ec71 +0x13f3:  mov    %eax,(%esp)
0861ec74 +0x13f6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ec79 +0x13fb:  mov    %ebx,0x4(%esp)
0861ec7d +0x13ff:  mov    %eax,(%esp)
0861ec80 +0x1402:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ec85 +0x1407:  mov    0xc(%ebp),%eax
0861ec88 +0x140a:  mov    0x1dc(%eax),%ebx
0861ec8e +0x1410:  movl   $", ",0x4(%esp)
0861ec96 +0x1418:  lea    -0xde8c(%ebp),%eax
0861ec9c +0x141e:  mov    %eax,(%esp)
0861ec9f +0x1421:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eca4 +0x1426:  mov    %ebx,0x4(%esp)
0861eca8 +0x142a:  mov    %eax,(%esp)
0861ecab +0x142d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ecb0 +0x1432:  mov    0xc(%ebp),%eax
0861ecb3 +0x1435:  mov    0x1e4(%eax),%ebx
0861ecb9 +0x143b:  movl   $", ",0x4(%esp)
0861ecc1 +0x1443:  lea    -0xde8c(%ebp),%eax
0861ecc7 +0x1449:  mov    %eax,(%esp)
0861ecca +0x144c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eccf +0x1451:  mov    %ebx,0x4(%esp)
0861ecd3 +0x1455:  mov    %eax,(%esp)
0861ecd6 +0x1458:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ecdb +0x145d:  mov    0xc(%ebp),%eax
0861ecde +0x1460:  mov    0x214(%eax),%ebx
0861ece4 +0x1466:  movl   $", ",0x4(%esp)
0861ecec +0x146e:  lea    -0xde8c(%ebp),%eax
0861ecf2 +0x1474:  mov    %eax,(%esp)
0861ecf5 +0x1477:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ecfa +0x147c:  mov    %ebx,0x4(%esp)
0861ecfe +0x1480:  mov    %eax,(%esp)
0861ed01 +0x1483:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ed06 +0x1488:  mov    0xc(%ebp),%eax
0861ed09 +0x148b:  mov    0x21c(%eax),%ebx
0861ed0f +0x1491:  movl   $", ",0x4(%esp)
0861ed17 +0x1499:  lea    -0xde8c(%ebp),%eax
0861ed1d +0x149f:  mov    %eax,(%esp)
0861ed20 +0x14a2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ed25 +0x14a7:  mov    %ebx,0x4(%esp)
0861ed29 +0x14ab:  mov    %eax,(%esp)
0861ed2c +0x14ae:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ed31 +0x14b3:  mov    0xc(%ebp),%eax
0861ed34 +0x14b6:  mov    0x224(%eax),%ebx
0861ed3a +0x14bc:  movl   $", ",0x4(%esp)
0861ed42 +0x14c4:  lea    -0xde8c(%ebp),%eax
0861ed48 +0x14ca:  mov    %eax,(%esp)
0861ed4b +0x14cd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ed50 +0x14d2:  mov    %ebx,0x4(%esp)
0861ed54 +0x14d6:  mov    %eax,(%esp)
0861ed57 +0x14d9:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ed5c +0x14de:  mov    0xc(%ebp),%eax
0861ed5f +0x14e1:  mov    0x22c(%eax),%ebx
0861ed65 +0x14e7:  movl   $", ",0x4(%esp)
0861ed6d +0x14ef:  lea    -0xde8c(%ebp),%eax
0861ed73 +0x14f5:  mov    %eax,(%esp)
0861ed76 +0x14f8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ed7b +0x14fd:  mov    %ebx,0x4(%esp)
0861ed7f +0x1501:  mov    %eax,(%esp)
0861ed82 +0x1504:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ed87 +0x1509:  mov    0xc(%ebp),%eax
0861ed8a +0x150c:  mov    0x270(%eax),%ebx
0861ed90 +0x1512:  movl   $", ",0x4(%esp)
0861ed98 +0x151a:  lea    -0xde8c(%ebp),%eax
0861ed9e +0x1520:  mov    %eax,(%esp)
0861eda1 +0x1523:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eda6 +0x1528:  mov    %ebx,0x4(%esp)
0861edaa +0x152c:  mov    %eax,(%esp)
0861edad +0x152f:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861edb2 +0x1534:  mov    0xc(%ebp),%eax
0861edb5 +0x1537:  mov    0x274(%eax),%ebx
0861edbb +0x153d:  movl   $", ",0x4(%esp)
0861edc3 +0x1545:  lea    -0xde8c(%ebp),%eax
0861edc9 +0x154b:  mov    %eax,(%esp)
0861edcc +0x154e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861edd1 +0x1553:  mov    %ebx,0x4(%esp)
0861edd5 +0x1557:  mov    %eax,(%esp)
0861edd8 +0x155a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eddd +0x155f:  mov    0xc(%ebp),%eax
0861ede0 +0x1562:  mov    0x278(%eax),%ebx
0861ede6 +0x1568:  movl   $", ",0x4(%esp)
0861edee +0x1570:  lea    -0xde8c(%ebp),%eax
0861edf4 +0x1576:  mov    %eax,(%esp)
0861edf7 +0x1579:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861edfc +0x157e:  mov    %ebx,0x4(%esp)
0861ee00 +0x1582:  mov    %eax,(%esp)
0861ee03 +0x1585:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ee08 +0x158a:  mov    0xc(%ebp),%eax
0861ee0b +0x158d:  mov    0x27c(%eax),%ebx
0861ee11 +0x1593:  movl   $", ",0x4(%esp)
0861ee19 +0x159b:  lea    -0xde8c(%ebp),%eax
0861ee1f +0x15a1:  mov    %eax,(%esp)
0861ee22 +0x15a4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ee27 +0x15a9:  mov    %ebx,0x4(%esp)
0861ee2b +0x15ad:  mov    %eax,(%esp)
0861ee2e +0x15b0:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ee33 +0x15b5:  mov    0xc(%ebp),%eax
0861ee36 +0x15b8:  mov    0x280(%eax),%ebx
0861ee3c +0x15be:  movl   $", ",0x4(%esp)
0861ee44 +0x15c6:  lea    -0xde8c(%ebp),%eax
0861ee4a +0x15cc:  mov    %eax,(%esp)
0861ee4d +0x15cf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ee52 +0x15d4:  mov    %ebx,0x4(%esp)
0861ee56 +0x15d8:  mov    %eax,(%esp)
0861ee59 +0x15db:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ee5e +0x15e0:  mov    0xc(%ebp),%eax
0861ee61 +0x15e3:  mov    0x284(%eax),%ebx
0861ee67 +0x15e9:  movl   $", ",0x4(%esp)
0861ee6f +0x15f1:  lea    -0xde8c(%ebp),%eax
0861ee75 +0x15f7:  mov    %eax,(%esp)
0861ee78 +0x15fa:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ee7d +0x15ff:  mov    %ebx,0x4(%esp)
0861ee81 +0x1603:  mov    %eax,(%esp)
0861ee84 +0x1606:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ee89 +0x160b:  mov    0xc(%ebp),%eax
0861ee8c +0x160e:  mov    0x288(%eax),%ebx
0861ee92 +0x1614:  movl   $", ",0x4(%esp)
0861ee9a +0x161c:  lea    -0xde8c(%ebp),%eax
0861eea0 +0x1622:  mov    %eax,(%esp)
0861eea3 +0x1625:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eea8 +0x162a:  mov    %ebx,0x4(%esp)
0861eeac +0x162e:  mov    %eax,(%esp)
0861eeaf +0x1631:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eeb4 +0x1636:  mov    0xc(%ebp),%eax
0861eeb7 +0x1639:  mov    0x28c(%eax),%ebx
0861eebd +0x163f:  movl   $", ",0x4(%esp)
0861eec5 +0x1647:  lea    -0xde8c(%ebp),%eax
0861eecb +0x164d:  mov    %eax,(%esp)
0861eece +0x1650:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eed3 +0x1655:  mov    %ebx,0x4(%esp)
0861eed7 +0x1659:  mov    %eax,(%esp)
0861eeda +0x165c:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861eedf +0x1661:  mov    0xc(%ebp),%eax
0861eee2 +0x1664:  mov    0x290(%eax),%ebx
0861eee8 +0x166a:  movl   $", ",0x4(%esp)
0861eef0 +0x1672:  lea    -0xde8c(%ebp),%eax
0861eef6 +0x1678:  mov    %eax,(%esp)
0861eef9 +0x167b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861eefe +0x1680:  mov    %ebx,0x4(%esp)
0861ef02 +0x1684:  mov    %eax,(%esp)
0861ef05 +0x1687:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ef0a +0x168c:  mov    0xc(%ebp),%eax
0861ef0d +0x168f:  mov    0x294(%eax),%ebx
0861ef13 +0x1695:  movl   $", ",0x4(%esp)
0861ef1b +0x169d:  lea    -0xde8c(%ebp),%eax
0861ef21 +0x16a3:  mov    %eax,(%esp)
0861ef24 +0x16a6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ef29 +0x16ab:  mov    %ebx,0x4(%esp)
0861ef2d +0x16af:  mov    %eax,(%esp)
0861ef30 +0x16b2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ef35 +0x16b7:  mov    0xc(%ebp),%eax
0861ef38 +0x16ba:  mov    0x298(%eax),%ebx
0861ef3e +0x16c0:  movl   $", ",0x4(%esp)
0861ef46 +0x16c8:  lea    -0xde8c(%ebp),%eax
0861ef4c +0x16ce:  mov    %eax,(%esp)
0861ef4f +0x16d1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ef54 +0x16d6:  mov    %ebx,0x4(%esp)
0861ef58 +0x16da:  mov    %eax,(%esp)
0861ef5b +0x16dd:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ef60 +0x16e2:  mov    0xc(%ebp),%eax
0861ef63 +0x16e5:  mov    0x29c(%eax),%ebx
0861ef69 +0x16eb:  movl   $", ",0x4(%esp)
0861ef71 +0x16f3:  lea    -0xde8c(%ebp),%eax
0861ef77 +0x16f9:  mov    %eax,(%esp)
0861ef7a +0x16fc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ef7f +0x1701:  mov    %ebx,0x4(%esp)
0861ef83 +0x1705:  mov    %eax,(%esp)
0861ef86 +0x1708:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ef8b +0x170d:  mov    0xc(%ebp),%eax
0861ef8e +0x1710:  mov    0x2a0(%eax),%ebx
0861ef94 +0x1716:  movl   $", ",0x4(%esp)
0861ef9c +0x171e:  lea    -0xde8c(%ebp),%eax
0861efa2 +0x1724:  mov    %eax,(%esp)
0861efa5 +0x1727:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861efaa +0x172c:  mov    %ebx,0x4(%esp)
0861efae +0x1730:  mov    %eax,(%esp)
0861efb1 +0x1733:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861efb6 +0x1738:  mov    0xc(%ebp),%eax
0861efb9 +0x173b:  mov    0x2a4(%eax),%ebx
0861efbf +0x1741:  movl   $", ",0x4(%esp)
0861efc7 +0x1749:  lea    -0xde8c(%ebp),%eax
0861efcd +0x174f:  mov    %eax,(%esp)
0861efd0 +0x1752:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861efd5 +0x1757:  mov    %ebx,0x4(%esp)
0861efd9 +0x175b:  mov    %eax,(%esp)
0861efdc +0x175e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861efe1 +0x1763:  mov    0xc(%ebp),%eax
0861efe4 +0x1766:  mov    0x2a8(%eax),%ebx
0861efea +0x176c:  movl   $", ",0x4(%esp)
0861eff2 +0x1774:  lea    -0xde8c(%ebp),%eax
0861eff8 +0x177a:  mov    %eax,(%esp)
0861effb +0x177d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f000 +0x1782:  mov    %ebx,0x4(%esp)
0861f004 +0x1786:  mov    %eax,(%esp)
0861f007 +0x1789:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f00c +0x178e:  mov    0xc(%ebp),%eax
0861f00f +0x1791:  mov    0x2ac(%eax),%ebx
0861f015 +0x1797:  movl   $", ",0x4(%esp)
0861f01d +0x179f:  lea    -0xde8c(%ebp),%eax
0861f023 +0x17a5:  mov    %eax,(%esp)
0861f026 +0x17a8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f02b +0x17ad:  mov    %ebx,0x4(%esp)
0861f02f +0x17b1:  mov    %eax,(%esp)
0861f032 +0x17b4:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f037 +0x17b9:  mov    0xc(%ebp),%eax
0861f03a +0x17bc:  mov    0x2b0(%eax),%ebx
0861f040 +0x17c2:  movl   $", ",0x4(%esp)
0861f048 +0x17ca:  lea    -0xde8c(%ebp),%eax
0861f04e +0x17d0:  mov    %eax,(%esp)
0861f051 +0x17d3:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f056 +0x17d8:  mov    %ebx,0x4(%esp)
0861f05a +0x17dc:  mov    %eax,(%esp)
0861f05d +0x17df:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f062 +0x17e4:  mov    0xc(%ebp),%eax
0861f065 +0x17e7:  mov    0x2bc(%eax),%ebx
0861f06b +0x17ed:  movl   $", ",0x4(%esp)
0861f073 +0x17f5:  lea    -0xde8c(%ebp),%eax
0861f079 +0x17fb:  mov    %eax,(%esp)
0861f07c +0x17fe:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f081 +0x1803:  mov    %ebx,0x4(%esp)
0861f085 +0x1807:  mov    %eax,(%esp)
0861f088 +0x180a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f08d +0x180f:  mov    0xc(%ebp),%eax
0861f090 +0x1812:  mov    0x2c0(%eax),%ebx
0861f096 +0x1818:  movl   $", ",0x4(%esp)
0861f09e +0x1820:  lea    -0xde8c(%ebp),%eax
0861f0a4 +0x1826:  mov    %eax,(%esp)
0861f0a7 +0x1829:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f0ac +0x182e:  mov    %ebx,0x4(%esp)
0861f0b0 +0x1832:  mov    %eax,(%esp)
0861f0b3 +0x1835:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f0b8 +0x183a:  mov    0xc(%ebp),%eax
0861f0bb +0x183d:  mov    0x2c8(%eax),%ebx
0861f0c1 +0x1843:  movl   $", ",0x4(%esp)
0861f0c9 +0x184b:  lea    -0xde8c(%ebp),%eax
0861f0cf +0x1851:  mov    %eax,(%esp)
0861f0d2 +0x1854:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f0d7 +0x1859:  mov    %ebx,0x4(%esp)
0861f0db +0x185d:  mov    %eax,(%esp)
0861f0de +0x1860:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f0e3 +0x1865:  mov    0xc(%ebp),%eax
0861f0e6 +0x1868:  mov    0x2b4(%eax),%ebx
0861f0ec +0x186e:  movl   $", ",0x4(%esp)
0861f0f4 +0x1876:  lea    -0xde8c(%ebp),%eax
0861f0fa +0x187c:  mov    %eax,(%esp)
0861f0fd +0x187f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f102 +0x1884:  mov    %ebx,0x4(%esp)
0861f106 +0x1888:  mov    %eax,(%esp)
0861f109 +0x188b:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f10e +0x1890:  mov    0xc(%ebp),%eax
0861f111 +0x1893:  mov    0x2b8(%eax),%ebx
0861f117 +0x1899:  movl   $", ",0x4(%esp)
0861f11f +0x18a1:  lea    -0xde8c(%ebp),%eax
0861f125 +0x18a7:  mov    %eax,(%esp)
0861f128 +0x18aa:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f12d +0x18af:  mov    %ebx,0x4(%esp)
0861f131 +0x18b3:  mov    %eax,(%esp)
0861f134 +0x18b6:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f139 +0x18bb:  mov    0xc(%ebp),%eax
0861f13c +0x18be:  mov    0x2cc(%eax),%ebx
0861f142 +0x18c4:  movl   $", ",0x4(%esp)
0861f14a +0x18cc:  lea    -0xde8c(%ebp),%eax
0861f150 +0x18d2:  mov    %eax,(%esp)
0861f153 +0x18d5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f158 +0x18da:  mov    %ebx,0x4(%esp)
0861f15c +0x18de:  mov    %eax,(%esp)
0861f15f +0x18e1:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f164 +0x18e6:  mov    0xc(%ebp),%eax
0861f167 +0x18e9:  mov    0x2d0(%eax),%ebx
0861f16d +0x18ef:  movl   $", ",0x4(%esp)
0861f175 +0x18f7:  lea    -0xde8c(%ebp),%eax
0861f17b +0x18fd:  mov    %eax,(%esp)
0861f17e +0x1900:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f183 +0x1905:  mov    %ebx,0x4(%esp)
0861f187 +0x1909:  mov    %eax,(%esp)
0861f18a +0x190c:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f18f +0x1911:  mov    0xc(%ebp),%eax
0861f192 +0x1914:  mov    0x2d4(%eax),%ebx
0861f198 +0x191a:  movl   $", ",0x4(%esp)
0861f1a0 +0x1922:  lea    -0xde8c(%ebp),%eax
0861f1a6 +0x1928:  mov    %eax,(%esp)
0861f1a9 +0x192b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f1ae +0x1930:  mov    %ebx,0x4(%esp)
0861f1b2 +0x1934:  mov    %eax,(%esp)
0861f1b5 +0x1937:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f1ba +0x193c:  mov    0xc(%ebp),%eax
0861f1bd +0x193f:  mov    0x2dc(%eax),%ebx
0861f1c3 +0x1945:  movl   $", ",0x4(%esp)
0861f1cb +0x194d:  lea    -0xde8c(%ebp),%eax
0861f1d1 +0x1953:  mov    %eax,(%esp)
0861f1d4 +0x1956:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f1d9 +0x195b:  mov    %ebx,0x4(%esp)
0861f1dd +0x195f:  mov    %eax,(%esp)
0861f1e0 +0x1962:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f1e5 +0x1967:  mov    0xc(%ebp),%eax
0861f1e8 +0x196a:  mov    0x2e8(%eax),%ebx
0861f1ee +0x1970:  movl   $", ",0x4(%esp)
0861f1f6 +0x1978:  lea    -0xde8c(%ebp),%eax
0861f1fc +0x197e:  mov    %eax,(%esp)
0861f1ff +0x1981:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f204 +0x1986:  mov    %ebx,0x4(%esp)
0861f208 +0x198a:  mov    %eax,(%esp)
0861f20b +0x198d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f210 +0x1992:  mov    0xc(%ebp),%eax
0861f213 +0x1995:  mov    0x2ec(%eax),%ebx
0861f219 +0x199b:  movl   $", ",0x4(%esp)
0861f221 +0x19a3:  lea    -0xde8c(%ebp),%eax
0861f227 +0x19a9:  mov    %eax,(%esp)
0861f22a +0x19ac:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f22f +0x19b1:  mov    %ebx,0x4(%esp)
0861f233 +0x19b5:  mov    %eax,(%esp)
0861f236 +0x19b8:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f23b +0x19bd:  mov    0xc(%ebp),%eax
0861f23e +0x19c0:  mov    0x2f0(%eax),%ebx
0861f244 +0x19c6:  movl   $", ",0x4(%esp)
0861f24c +0x19ce:  lea    -0xde8c(%ebp),%eax
0861f252 +0x19d4:  mov    %eax,(%esp)
0861f255 +0x19d7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f25a +0x19dc:  mov    %ebx,0x4(%esp)
0861f25e +0x19e0:  mov    %eax,(%esp)
0861f261 +0x19e3:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f266 +0x19e8:  mov    0xc(%ebp),%eax
0861f269 +0x19eb:  mov    0x2f4(%eax),%ebx
0861f26f +0x19f1:  movl   $", ",0x4(%esp)
0861f277 +0x19f9:  lea    -0xde8c(%ebp),%eax
0861f27d +0x19ff:  mov    %eax,(%esp)
0861f280 +0x1a02:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f285 +0x1a07:  mov    %ebx,0x4(%esp)
0861f289 +0x1a0b:  mov    %eax,(%esp)
0861f28c +0x1a0e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f291 +0x1a13:  mov    0xc(%ebp),%eax
0861f294 +0x1a16:  add    $0x1c0,%eax
0861f299 +0x1a1b:  mov    %eax,0x4(%esp)
0861f29d +0x1a1f:  mov    0x8(%ebp),%eax
0861f2a0 +0x1a22:  mov    %eax,(%esp)
0861f2a3 +0x1a25:  call   0861d42e <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo>  ; sync_script::CSyncScript::GetAttackElement(EquipmentParameterInfo*)
0861f2a8 +0x1a2a:  mov    %eax,%ebx
0861f2aa +0x1a2c:  movl   $", '",0x4(%esp)
0861f2b2 +0x1a34:  lea    -0xde8c(%ebp),%eax
0861f2b8 +0x1a3a:  mov    %eax,(%esp)
0861f2bb +0x1a3d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f2c0 +0x1a42:  mov    %ebx,0x4(%esp)
0861f2c4 +0x1a46:  mov    %eax,(%esp)
0861f2c7 +0x1a49:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f2cc +0x1a4e:  movl   $"'",0x4(%esp)
0861f2d4 +0x1a56:  mov    %eax,(%esp)
0861f2d7 +0x1a59:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f2dc +0x1a5e:  mov    0xc(%ebp),%eax
0861f2df +0x1a61:  mov    0x304(%eax),%eax
0861f2e5 +0x1a67:  mov    %eax,%ebx
0861f2e7 +0x1a69:  movl   $", ",0x4(%esp)
0861f2ef +0x1a71:  lea    -0xde8c(%ebp),%eax
0861f2f5 +0x1a77:  mov    %eax,(%esp)
0861f2f8 +0x1a7a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f2fd +0x1a7f:  mov    %ebx,0x4(%esp)
0861f301 +0x1a83:  mov    %eax,(%esp)
0861f304 +0x1a86:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f309 +0x1a8b:  mov    0xc(%ebp),%eax
0861f30c +0x1a8e:  mov    0x308(%eax),%ebx
0861f312 +0x1a94:  movl   $", ",0x4(%esp)
0861f31a +0x1a9c:  lea    -0xde8c(%ebp),%eax
0861f320 +0x1aa2:  mov    %eax,(%esp)
0861f323 +0x1aa5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f328 +0x1aaa:  mov    %ebx,0x4(%esp)
0861f32c +0x1aae:  mov    %eax,(%esp)
0861f32f +0x1ab1:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0861f334 +0x1ab6:  mov    0xc(%ebp),%eax
0861f337 +0x1ab9:  mov    0x30c(%eax),%ebx
0861f33d +0x1abf:  movl   $", ",0x4(%esp)
0861f345 +0x1ac7:  lea    -0xde8c(%ebp),%eax
0861f34b +0x1acd:  mov    %eax,(%esp)
0861f34e +0x1ad0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f353 +0x1ad5:  mov    %ebx,0x4(%esp)
0861f357 +0x1ad9:  mov    %eax,(%esp)
0861f35a +0x1adc:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f35f +0x1ae1:  mov    0xc(%ebp),%eax
0861f362 +0x1ae4:  mov    0x3e0(%eax),%ebx
0861f368 +0x1aea:  movl   $", ",0x4(%esp)
0861f370 +0x1af2:  lea    -0xde8c(%ebp),%eax
0861f376 +0x1af8:  mov    %eax,(%esp)
0861f379 +0x1afb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f37e +0x1b00:  mov    %ebx,0x4(%esp)
0861f382 +0x1b04:  mov    %eax,(%esp)
0861f385 +0x1b07:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f38a +0x1b0c:  mov    0xc(%ebp),%eax
0861f38d +0x1b0f:  mov    0x3e4(%eax),%ebx
0861f393 +0x1b15:  movl   $", ",0x4(%esp)
0861f39b +0x1b1d:  lea    -0xde8c(%ebp),%eax
0861f3a1 +0x1b23:  mov    %eax,(%esp)
0861f3a4 +0x1b26:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f3a9 +0x1b2b:  mov    %ebx,0x4(%esp)
0861f3ad +0x1b2f:  mov    %eax,(%esp)
0861f3b0 +0x1b32:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f3b5 +0x1b37:  mov    0xc(%ebp),%eax
0861f3b8 +0x1b3a:  movzbl 0x3fc(%eax),%eax
0861f3bf +0x1b41:  movzbl %al,%ebx
0861f3c2 +0x1b44:  movl   $", ",0x4(%esp)
0861f3ca +0x1b4c:  lea    -0xde8c(%ebp),%eax
0861f3d0 +0x1b52:  mov    %eax,(%esp)
0861f3d3 +0x1b55:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f3d8 +0x1b5a:  mov    %ebx,0x4(%esp)
0861f3dc +0x1b5e:  mov    %eax,(%esp)
0861f3df +0x1b61:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f3e4 +0x1b66:  mov    0xc(%ebp),%eax
0861f3e7 +0x1b69:  movzbl 0x3fd(%eax),%eax
0861f3ee +0x1b70:  movzbl %al,%ebx
0861f3f1 +0x1b73:  movl   $", ",0x4(%esp)
0861f3f9 +0x1b7b:  lea    -0xde8c(%ebp),%eax
0861f3ff +0x1b81:  mov    %eax,(%esp)
0861f402 +0x1b84:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f407 +0x1b89:  mov    %ebx,0x4(%esp)
0861f40b +0x1b8d:  mov    %eax,(%esp)
0861f40e +0x1b90:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f413 +0x1b95:  mov    0xc(%ebp),%eax
0861f416 +0x1b98:  mov    0x2f8(%eax),%ebx
0861f41c +0x1b9e:  movl   $", ",0x4(%esp)
0861f424 +0x1ba6:  lea    -0xde8c(%ebp),%eax
0861f42a +0x1bac:  mov    %eax,(%esp)
0861f42d +0x1baf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f432 +0x1bb4:  mov    %ebx,0x4(%esp)
0861f436 +0x1bb8:  mov    %eax,(%esp)
0861f439 +0x1bbb:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0861f43e +0x1bc0:  mov    0xc(%ebp),%eax
0861f441 +0x1bc3:  mov    0x3e8(%eax),%ebx
0861f447 +0x1bc9:  movl   $", ",0x4(%esp)
0861f44f +0x1bd1:  lea    -0xde8c(%ebp),%eax
0861f455 +0x1bd7:  mov    %eax,(%esp)
0861f458 +0x1bda:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f45d +0x1bdf:  mov    %ebx,0x4(%esp)
0861f461 +0x1be3:  mov    %eax,(%esp)
0861f464 +0x1be6:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0861f469 +0x1beb:  mov    0xc(%ebp),%eax
0861f46c +0x1bee:  movzbl 0x3ec(%eax),%eax
0861f473 +0x1bf5:  movzbl %al,%ebx
0861f476 +0x1bf8:  movl   $", ",0x4(%esp)
0861f47e +0x1c00:  lea    -0xde8c(%ebp),%eax
0861f484 +0x1c06:  mov    %eax,(%esp)
0861f487 +0x1c09:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f48c +0x1c0e:  mov    %ebx,0x4(%esp)
0861f490 +0x1c12:  mov    %eax,(%esp)
0861f493 +0x1c15:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f498 +0x1c1a:  lea    -0xe0(%ebp),%eax
0861f49e +0x1c20:  mov    %eax,(%esp)
0861f4a1 +0x1c23:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0861f4a6 +0x1c28:  mov    0xc(%ebp),%eax
0861f4a9 +0x1c2b:  lea    0x40c(%eax),%edx
0861f4af +0x1c31:  lea    -0xdc(%ebp),%eax
0861f4b5 +0x1c37:  mov    %edx,0x4(%esp)
0861f4b9 +0x1c3b:  mov    %eax,(%esp)
0861f4bc +0x1c3e:  call   08181026 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xcbd>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xcbd
0861f4c1 +0x1c43:  sub    $0x4,%esp
0861f4c4 +0x1c46:  mov    0xc(%ebp),%eax
0861f4c7 +0x1c49:  lea    0x40c(%eax),%edx
0861f4cd +0x1c4f:  lea    -0xd8(%ebp),%eax
0861f4d3 +0x1c55:  mov    %edx,0x4(%esp)
0861f4d7 +0x1c59:  mov    %eax,(%esp)
0861f4da +0x1c5c:  call   08180fa6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xc3d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xc3d
0861f4df +0x1c61:  sub    $0x4,%esp
0861f4e2 +0x1c64:  lea    -0xe4(%ebp),%eax
0861f4e8 +0x1c6a:  lea    -0xe0(%ebp),%edx
0861f4ee +0x1c70:  mov    %edx,0xc(%esp)
0861f4f2 +0x1c74:  mov    -0xdc(%ebp),%edx
0861f4f8 +0x1c7a:  mov    %edx,0x8(%esp)
0861f4fc +0x1c7e:  mov    -0xd8(%ebp),%edx
0861f502 +0x1c84:  mov    %edx,0x4(%esp)
0861f506 +0x1c88:  mov    %eax,(%esp)
0861f509 +0x1c8b:  call   086289b7 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2015>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2015
0861f50e +0x1c90:  sub    $0x4,%esp
0861f511 +0x1c93:  lea    -0xe4(%ebp),%eax
0861f517 +0x1c99:  mov    %eax,(%esp)
0861f51a +0x1c9c:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
0861f51f +0x1ca1:  mov    %eax,%ebx
0861f521 +0x1ca3:  movl   $", '",0x4(%esp)
0861f529 +0x1cab:  lea    -0xde8c(%ebp),%eax
0861f52f +0x1cb1:  mov    %eax,(%esp)
0861f532 +0x1cb4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f537 +0x1cb9:  mov    %ebx,0x4(%esp)
0861f53b +0x1cbd:  mov    %eax,(%esp)
0861f53e +0x1cc0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f543 +0x1cc5:  movl   $"'",0x4(%esp)
0861f54b +0x1ccd:  mov    %eax,(%esp)
0861f54e +0x1cd0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f553 +0x1cd5:  jmp    0861f571 <+0x1cf3>
0861f555 +0x1cd7:  mov    %eax,%ecx
0861f557 +0x1cd9:  mov    %edx,%eax
0861f559 +0x1cdb:  mov    %eax,%ebx
0861f55b +0x1cdd:  mov    %ecx,%esi
0861f55d +0x1cdf:  lea    -0xe4(%ebp),%eax
0861f563 +0x1ce5:  mov    %eax,(%esp)
0861f566 +0x1ce8:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861f56b +0x1ced:  mov    %esi,%ecx
0861f56d +0x1cef:  mov    %ebx,%eax
0861f56f +0x1cf1:  jmp    0861f585 <+0x1d07>
0861f571 +0x1cf3:  lea    -0xe4(%ebp),%eax
0861f577 +0x1cf9:  mov    %eax,(%esp)
0861f57a +0x1cfc:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861f57f +0x1d01:  jmp    0861f5a0 <+0x1d22>
0861f581 +0x1d03:  mov    %eax,%ecx
0861f583 +0x1d05:  mov    %edx,%eax
0861f585 +0x1d07:  mov    %eax,%ebx
0861f587 +0x1d09:  mov    %ecx,%esi
0861f589 +0x1d0b:  lea    -0xe0(%ebp),%eax
0861f58f +0x1d11:  mov    %eax,(%esp)
0861f592 +0x1d14:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861f597 +0x1d19:  mov    %esi,%ecx
0861f599 +0x1d1b:  mov    %ebx,%eax
0861f59b +0x1d1d:  jmp    0862092e <+0x30b0>
0861f5a0 +0x1d22:  lea    -0xe0(%ebp),%eax
0861f5a6 +0x1d28:  mov    %eax,(%esp)
0861f5a9 +0x1d2b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861f5ae +0x1d30:  mov    0xc(%ebp),%eax
0861f5b1 +0x1d33:  add    $0x668,%eax
0861f5b6 +0x1d38:  movl   $"",0x4(%esp)
0861f5be +0x1d40:  mov    %eax,(%esp)
0861f5c1 +0x1d43:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
0861f5c6 +0x1d48:  test   %eax,%eax
0861f5c8 +0x1d4a:  jne    0861f601 <+0x1d83>
0861f5ca +0x1d4c:  mov    0xc(%ebp),%eax
0861f5cd +0x1d4f:  add    $0x66c,%eax
0861f5d2 +0x1d54:  mov    %eax,(%esp)
0861f5d5 +0x1d57:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0861f5da +0x1d5c:  test   %eax,%eax
0861f5dc +0x1d5e:  jne    0861f601 <+0x1d83>
0861f5de +0x1d60:  mov    0xc(%ebp),%eax
0861f5e1 +0x1d63:  mov    0x6a0(%eax),%eax
0861f5e7 +0x1d69:  cmp    $0xffffffff,%eax
0861f5ea +0x1d6c:  jne    0861f601 <+0x1d83>
0861f5ec +0x1d6e:  mov    0xc(%ebp),%eax
0861f5ef +0x1d71:  mov    0x798(%eax),%eax
0861f5f5 +0x1d77:  cmp    $0xffffffff,%eax
0861f5f8 +0x1d7a:  jne    0861f601 <+0x1d83>
0861f5fa +0x1d7c:  mov    $"n",%eax
0861f5ff +0x1d81:  jmp    0861f606 <+0x1d88>
0861f601 +0x1d83:  mov    $"y",%eax
0861f606 +0x1d88:  mov    %eax,%ebx
0861f608 +0x1d8a:  movl   $", '",0x4(%esp)
0861f610 +0x1d92:  lea    -0xde8c(%ebp),%eax
0861f616 +0x1d98:  mov    %eax,(%esp)
0861f619 +0x1d9b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f61e +0x1da0:  mov    %ebx,0x4(%esp)
0861f622 +0x1da4:  mov    %eax,(%esp)
0861f625 +0x1da7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f62a +0x1dac:  movl   $"'",0x4(%esp)
0861f632 +0x1db4:  mov    %eax,(%esp)
0861f635 +0x1db7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f63a +0x1dbc:  movl   $", '",0x4(%esp)
0861f642 +0x1dc4:  lea    -0xde8c(%ebp),%eax
0861f648 +0x1dca:  mov    %eax,(%esp)
0861f64b +0x1dcd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f650 +0x1dd2:  lea    -0x159(%ebp),%edx
0861f656 +0x1dd8:  mov    %edx,0x4(%esp)
0861f65a +0x1ddc:  mov    %eax,(%esp)
0861f65d +0x1ddf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f662 +0x1de4:  movl   $"'",0x4(%esp)
0861f66a +0x1dec:  mov    %eax,(%esp)
0861f66d +0x1def:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f672 +0x1df4:  mov    -0x64(%ebp),%edx
0861f675 +0x1df7:  lea    -0x3e8c(%ebp),%eax
0861f67b +0x1dfd:  shl    $0xa,%edx
0861f67e +0x1e00:  add    %edx,%eax
0861f680 +0x1e02:  mov    %eax,%ebx
0861f682 +0x1e04:  addl   $0x1,-0x64(%ebp)
0861f686 +0x1e08:  mov    0xc(%ebp),%eax
0861f689 +0x1e0b:  add    $0x43c,%eax
0861f68e +0x1e10:  mov    %eax,(%esp)
0861f691 +0x1e13:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861f696 +0x1e18:  mov    %ebx,0x8(%esp)
0861f69a +0x1e1c:  mov    %eax,0x4(%esp)
0861f69e +0x1e20:  mov    -0x78(%ebp),%eax
0861f6a1 +0x1e23:  mov    %eax,(%esp)
0861f6a4 +0x1e26:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861f6a9 +0x1e2b:  mov    %eax,%ebx
0861f6ab +0x1e2d:  movl   $", '",0x4(%esp)
0861f6b3 +0x1e35:  lea    -0xde8c(%ebp),%eax
0861f6b9 +0x1e3b:  mov    %eax,(%esp)
0861f6bc +0x1e3e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f6c1 +0x1e43:  mov    %ebx,0x4(%esp)
0861f6c5 +0x1e47:  mov    %eax,(%esp)
0861f6c8 +0x1e4a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f6cd +0x1e4f:  movl   $"'",0x4(%esp)
0861f6d5 +0x1e57:  mov    %eax,(%esp)
0861f6d8 +0x1e5a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f6dd +0x1e5f:  mov    -0x64(%ebp),%edx
0861f6e0 +0x1e62:  lea    -0x3e8c(%ebp),%eax
0861f6e6 +0x1e68:  shl    $0xa,%edx
0861f6e9 +0x1e6b:  add    %edx,%eax
0861f6eb +0x1e6d:  mov    %eax,%ebx
0861f6ed +0x1e6f:  addl   $0x1,-0x64(%ebp)
0861f6f1 +0x1e73:  mov    0xc(%ebp),%eax
0861f6f4 +0x1e76:  add    $0xb8,%eax
0861f6f9 +0x1e7b:  mov    %eax,(%esp)
0861f6fc +0x1e7e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861f701 +0x1e83:  mov    %ebx,0x8(%esp)
0861f705 +0x1e87:  mov    %eax,0x4(%esp)
0861f709 +0x1e8b:  mov    -0x78(%ebp),%eax
0861f70c +0x1e8e:  mov    %eax,(%esp)
0861f70f +0x1e91:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861f714 +0x1e96:  mov    %eax,%ebx
0861f716 +0x1e98:  movl   $", '",0x4(%esp)
0861f71e +0x1ea0:  lea    -0xde8c(%ebp),%eax
0861f724 +0x1ea6:  mov    %eax,(%esp)
0861f727 +0x1ea9:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f72c +0x1eae:  mov    %ebx,0x4(%esp)
0861f730 +0x1eb2:  mov    %eax,(%esp)
0861f733 +0x1eb5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f738 +0x1eba:  movl   $"'",0x4(%esp)
0861f740 +0x1ec2:  mov    %eax,(%esp)
0861f743 +0x1ec5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f748 +0x1eca:  mov    0xc(%ebp),%eax
0861f74b +0x1ecd:  mov    0x440(%eax),%ebx
0861f751 +0x1ed3:  movl   $", ",0x4(%esp)
0861f759 +0x1edb:  lea    -0xde8c(%ebp),%eax
0861f75f +0x1ee1:  mov    %eax,(%esp)
0861f762 +0x1ee4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f767 +0x1ee9:  mov    %ebx,0x4(%esp)
0861f76b +0x1eed:  mov    %eax,(%esp)
0861f76e +0x1ef0:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f773 +0x1ef5:  mov    0xc(%ebp),%eax
0861f776 +0x1ef8:  mov    0x24(%eax),%ebx
0861f779 +0x1efb:  movl   $", ",0x4(%esp)
0861f781 +0x1f03:  lea    -0xde8c(%ebp),%eax
0861f787 +0x1f09:  mov    %eax,(%esp)
0861f78a +0x1f0c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f78f +0x1f11:  mov    %ebx,0x4(%esp)
0861f793 +0x1f15:  mov    %eax,(%esp)
0861f796 +0x1f18:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f79b +0x1f1d:  mov    0xc(%ebp),%eax
0861f79e +0x1f20:  mov    0x184(%eax),%ebx
0861f7a4 +0x1f26:  movl   $", ",0x4(%esp)
0861f7ac +0x1f2e:  lea    -0xde8c(%ebp),%eax
0861f7b2 +0x1f34:  mov    %eax,(%esp)
0861f7b5 +0x1f37:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f7ba +0x1f3c:  mov    %ebx,0x4(%esp)
0861f7be +0x1f40:  mov    %eax,(%esp)
0861f7c1 +0x1f43:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f7c6 +0x1f48:  mov    0xc(%ebp),%eax
0861f7c9 +0x1f4b:  mov    0x2c(%eax),%ebx
0861f7cc +0x1f4e:  mov    0xc(%ebp),%eax
0861f7cf +0x1f51:  mov    0x28(%eax),%esi
0861f7d2 +0x1f54:  movl   $", '",0x4(%esp)
0861f7da +0x1f5c:  lea    -0xde8c(%ebp),%eax
0861f7e0 +0x1f62:  mov    %eax,(%esp)
0861f7e3 +0x1f65:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f7e8 +0x1f6a:  mov    %esi,0x4(%esp)
0861f7ec +0x1f6e:  mov    %eax,(%esp)
0861f7ef +0x1f71:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f7f4 +0x1f76:  movl   $",",0x4(%esp)
0861f7fc +0x1f7e:  mov    %eax,(%esp)
0861f7ff +0x1f81:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f804 +0x1f86:  mov    %ebx,0x4(%esp)
0861f808 +0x1f8a:  mov    %eax,(%esp)
0861f80b +0x1f8d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f810 +0x1f92:  movl   $"'",0x4(%esp)
0861f818 +0x1f9a:  mov    %eax,(%esp)
0861f81b +0x1f9d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f820 +0x1fa2:  mov    0xc(%ebp),%eax
0861f823 +0x1fa5:  mov    0x234(%eax),%ebx
0861f829 +0x1fab:  movl   $", ",0x4(%esp)
0861f831 +0x1fb3:  lea    -0xde8c(%ebp),%eax
0861f837 +0x1fb9:  mov    %eax,(%esp)
0861f83a +0x1fbc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f83f +0x1fc1:  mov    %ebx,0x4(%esp)
0861f843 +0x1fc5:  mov    %eax,(%esp)
0861f846 +0x1fc8:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f84b +0x1fcd:  mov    0xc(%ebp),%eax
0861f84e +0x1fd0:  mov    0x238(%eax),%ebx
0861f854 +0x1fd6:  movl   $", ",0x4(%esp)
0861f85c +0x1fde:  lea    -0xde8c(%ebp),%eax
0861f862 +0x1fe4:  mov    %eax,(%esp)
0861f865 +0x1fe7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f86a +0x1fec:  mov    %ebx,0x4(%esp)
0861f86e +0x1ff0:  mov    %eax,(%esp)
0861f871 +0x1ff3:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f876 +0x1ff8:  mov    0xc(%ebp),%eax
0861f879 +0x1ffb:  mov    0x23c(%eax),%ebx
0861f87f +0x2001:  movl   $", ",0x4(%esp)
0861f887 +0x2009:  lea    -0xde8c(%ebp),%eax
0861f88d +0x200f:  mov    %eax,(%esp)
0861f890 +0x2012:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f895 +0x2017:  mov    %ebx,0x4(%esp)
0861f899 +0x201b:  mov    %eax,(%esp)
0861f89c +0x201e:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0861f8a1 +0x2023:  mov    0xc(%ebp),%eax
0861f8a4 +0x2026:  mov    0x240(%eax),%ebx
0861f8aa +0x202c:  movl   $", ",0x4(%esp)
0861f8b2 +0x2034:  lea    -0xde8c(%ebp),%eax
0861f8b8 +0x203a:  mov    %eax,(%esp)
0861f8bb +0x203d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f8c0 +0x2042:  mov    %ebx,0x4(%esp)
0861f8c4 +0x2046:  mov    %eax,(%esp)
0861f8c7 +0x2049:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f8cc +0x204e:  mov    0xc(%ebp),%eax
0861f8cf +0x2051:  mov    0x244(%eax),%ebx
0861f8d5 +0x2057:  movl   $", ",0x4(%esp)
0861f8dd +0x205f:  lea    -0xde8c(%ebp),%eax
0861f8e3 +0x2065:  mov    %eax,(%esp)
0861f8e6 +0x2068:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f8eb +0x206d:  mov    %ebx,0x4(%esp)
0861f8ef +0x2071:  mov    %eax,(%esp)
0861f8f2 +0x2074:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f8f7 +0x2079:  mov    0xc(%ebp),%eax
0861f8fa +0x207c:  mov    0x248(%eax),%ebx
0861f900 +0x2082:  movl   $", ",0x4(%esp)
0861f908 +0x208a:  lea    -0xde8c(%ebp),%eax
0861f90e +0x2090:  mov    %eax,(%esp)
0861f911 +0x2093:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f916 +0x2098:  mov    %ebx,0x4(%esp)
0861f91a +0x209c:  mov    %eax,(%esp)
0861f91d +0x209f:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0861f922 +0x20a4:  mov    0xc(%ebp),%eax
0861f925 +0x20a7:  mov    0x448(%eax),%ebx
0861f92b +0x20ad:  movl   $", ",0x4(%esp)
0861f933 +0x20b5:  lea    -0xde8c(%ebp),%eax
0861f939 +0x20bb:  mov    %eax,(%esp)
0861f93c +0x20be:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f941 +0x20c3:  mov    %ebx,0x4(%esp)
0861f945 +0x20c7:  mov    %eax,(%esp)
0861f948 +0x20ca:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f94d +0x20cf:  mov    0xc(%ebp),%eax
0861f950 +0x20d2:  mov    0x44c(%eax),%ebx
0861f956 +0x20d8:  movl   $", ",0x4(%esp)
0861f95e +0x20e0:  lea    -0xde8c(%ebp),%eax
0861f964 +0x20e6:  mov    %eax,(%esp)
0861f967 +0x20e9:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f96c +0x20ee:  mov    %ebx,0x4(%esp)
0861f970 +0x20f2:  mov    %eax,(%esp)
0861f973 +0x20f5:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f978 +0x20fa:  mov    0xc(%ebp),%eax
0861f97b +0x20fd:  mov    0x450(%eax),%ebx
0861f981 +0x2103:  movl   $", ",0x4(%esp)
0861f989 +0x210b:  lea    -0xde8c(%ebp),%eax
0861f98f +0x2111:  mov    %eax,(%esp)
0861f992 +0x2114:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f997 +0x2119:  mov    %ebx,0x4(%esp)
0861f99b +0x211d:  mov    %eax,(%esp)
0861f99e +0x2120:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f9a3 +0x2125:  mov    0xc(%ebp),%eax
0861f9a6 +0x2128:  mov    0x454(%eax),%ebx
0861f9ac +0x212e:  movl   $", ",0x4(%esp)
0861f9b4 +0x2136:  lea    -0xde8c(%ebp),%eax
0861f9ba +0x213c:  mov    %eax,(%esp)
0861f9bd +0x213f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f9c2 +0x2144:  mov    %ebx,0x4(%esp)
0861f9c6 +0x2148:  mov    %eax,(%esp)
0861f9c9 +0x214b:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f9ce +0x2150:  mov    0xc(%ebp),%eax
0861f9d1 +0x2153:  mov    0x458(%eax),%ebx
0861f9d7 +0x2159:  movl   $", ",0x4(%esp)
0861f9df +0x2161:  lea    -0xde8c(%ebp),%eax
0861f9e5 +0x2167:  mov    %eax,(%esp)
0861f9e8 +0x216a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861f9ed +0x216f:  mov    %ebx,0x4(%esp)
0861f9f1 +0x2173:  mov    %eax,(%esp)
0861f9f4 +0x2176:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861f9f9 +0x217b:  mov    0xc(%ebp),%eax
0861f9fc +0x217e:  mov    0x2ac(%eax),%ebx
0861fa02 +0x2184:  movl   $", ",0x4(%esp)
0861fa0a +0x218c:  lea    -0xde8c(%ebp),%eax
0861fa10 +0x2192:  mov    %eax,(%esp)
0861fa13 +0x2195:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fa18 +0x219a:  mov    %ebx,0x4(%esp)
0861fa1c +0x219e:  mov    %eax,(%esp)
0861fa1f +0x21a1:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861fa24 +0x21a6:  mov    0xc(%ebp),%eax
0861fa27 +0x21a9:  mov    0x2c4(%eax),%ebx
0861fa2d +0x21af:  movl   $", ",0x4(%esp)
0861fa35 +0x21b7:  lea    -0xde8c(%ebp),%eax
0861fa3b +0x21bd:  mov    %eax,(%esp)
0861fa3e +0x21c0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fa43 +0x21c5:  mov    %ebx,0x4(%esp)
0861fa47 +0x21c9:  mov    %eax,(%esp)
0861fa4a +0x21cc:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861fa4f +0x21d1:  mov    0xc(%ebp),%eax
0861fa52 +0x21d4:  mov    0x2c8(%eax),%ebx
0861fa58 +0x21da:  movl   $", ",0x4(%esp)
0861fa60 +0x21e2:  lea    -0xde8c(%ebp),%eax
0861fa66 +0x21e8:  mov    %eax,(%esp)
0861fa69 +0x21eb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fa6e +0x21f0:  mov    %ebx,0x4(%esp)
0861fa72 +0x21f4:  mov    %eax,(%esp)
0861fa75 +0x21f7:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861fa7a +0x21fc:  mov    0xc(%ebp),%eax
0861fa7d +0x21ff:  mov    0x444(%eax),%ebx
0861fa83 +0x2205:  movl   $", ",0x4(%esp)
0861fa8b +0x220d:  lea    -0xde8c(%ebp),%eax
0861fa91 +0x2213:  mov    %eax,(%esp)
0861fa94 +0x2216:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fa99 +0x221b:  mov    %ebx,0x4(%esp)
0861fa9d +0x221f:  mov    %eax,(%esp)
0861faa0 +0x2222:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861faa5 +0x2227:  lea    -0xd0(%ebp),%eax
0861faab +0x222d:  mov    %eax,(%esp)
0861faae +0x2230:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0861fab3 +0x2235:  mov    0xc(%ebp),%eax
0861fab6 +0x2238:  lea    0x348(%eax),%edx
0861fabc +0x223e:  lea    -0xcc(%ebp),%eax
0861fac2 +0x2244:  mov    %edx,0x4(%esp)
0861fac6 +0x2248:  mov    %eax,(%esp)
0861fac9 +0x224b:  call   083963b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25e54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25e54
0861face +0x2250:  sub    $0x4,%esp
0861fad1 +0x2253:  mov    0xc(%ebp),%eax
0861fad4 +0x2256:  lea    0x348(%eax),%edx
0861fada +0x225c:  lea    -0xc8(%ebp),%eax
0861fae0 +0x2262:  mov    %edx,0x4(%esp)
0861fae4 +0x2266:  mov    %eax,(%esp)
0861fae7 +0x2269:  call   08396334 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x25dd4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x25dd4
0861faec +0x226e:  sub    $0x4,%esp
0861faef +0x2271:  lea    -0xd4(%ebp),%eax
0861faf5 +0x2277:  lea    -0xd0(%ebp),%edx
0861fafb +0x227d:  mov    %edx,0xc(%esp)
0861faff +0x2281:  mov    -0xcc(%ebp),%edx
0861fb05 +0x2287:  mov    %edx,0x8(%esp)
0861fb09 +0x228b:  mov    -0xc8(%ebp),%edx
0861fb0f +0x2291:  mov    %edx,0x4(%esp)
0861fb13 +0x2295:  mov    %eax,(%esp)
0861fb16 +0x2298:  call   08628a2b <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2089>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2089
0861fb1b +0x229d:  sub    $0x4,%esp
0861fb1e +0x22a0:  lea    -0xd4(%ebp),%eax
0861fb24 +0x22a6:  mov    %eax,(%esp)
0861fb27 +0x22a9:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
0861fb2c +0x22ae:  mov    %eax,%ebx
0861fb2e +0x22b0:  movl   $", '",0x4(%esp)
0861fb36 +0x22b8:  lea    -0xde8c(%ebp),%eax
0861fb3c +0x22be:  mov    %eax,(%esp)
0861fb3f +0x22c1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fb44 +0x22c6:  mov    %ebx,0x4(%esp)
0861fb48 +0x22ca:  mov    %eax,(%esp)
0861fb4b +0x22cd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fb50 +0x22d2:  movl   $"'",0x4(%esp)
0861fb58 +0x22da:  mov    %eax,(%esp)
0861fb5b +0x22dd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fb60 +0x22e2:  jmp    0861fb7e <+0x2300>
0861fb62 +0x22e4:  mov    %eax,%ecx
0861fb64 +0x22e6:  mov    %edx,%eax
0861fb66 +0x22e8:  mov    %eax,%ebx
0861fb68 +0x22ea:  mov    %ecx,%esi
0861fb6a +0x22ec:  lea    -0xd4(%ebp),%eax
0861fb70 +0x22f2:  mov    %eax,(%esp)
0861fb73 +0x22f5:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fb78 +0x22fa:  mov    %esi,%ecx
0861fb7a +0x22fc:  mov    %ebx,%eax
0861fb7c +0x22fe:  jmp    0861fb92 <+0x2314>
0861fb7e +0x2300:  lea    -0xd4(%ebp),%eax
0861fb84 +0x2306:  mov    %eax,(%esp)
0861fb87 +0x2309:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fb8c +0x230e:  jmp    0861fbad <+0x232f>
0861fb8e +0x2310:  mov    %eax,%ecx
0861fb90 +0x2312:  mov    %edx,%eax
0861fb92 +0x2314:  mov    %eax,%ebx
0861fb94 +0x2316:  mov    %ecx,%esi
0861fb96 +0x2318:  lea    -0xd0(%ebp),%eax
0861fb9c +0x231e:  mov    %eax,(%esp)
0861fb9f +0x2321:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fba4 +0x2326:  mov    %esi,%ecx
0861fba6 +0x2328:  mov    %ebx,%eax
0861fba8 +0x232a:  jmp    0862092e <+0x30b0>
0861fbad +0x232f:  lea    -0xd0(%ebp),%eax
0861fbb3 +0x2335:  mov    %eax,(%esp)
0861fbb6 +0x2338:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fbbb +0x233d:  mov    0xc(%ebp),%eax
0861fbbe +0x2340:  mov    0x2fc(%eax),%ebx
0861fbc4 +0x2346:  movl   $", ",0x4(%esp)
0861fbcc +0x234e:  lea    -0xde8c(%ebp),%eax
0861fbd2 +0x2354:  mov    %eax,(%esp)
0861fbd5 +0x2357:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fbda +0x235c:  mov    %ebx,0x4(%esp)
0861fbde +0x2360:  mov    %eax,(%esp)
0861fbe1 +0x2363:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0861fbe6 +0x2368:  mov    -0x64(%ebp),%edx
0861fbe9 +0x236b:  lea    -0x3e8c(%ebp),%eax
0861fbef +0x2371:  shl    $0xa,%edx
0861fbf2 +0x2374:  add    %edx,%eax
0861fbf4 +0x2376:  mov    %eax,%ebx
0861fbf6 +0x2378:  addl   $0x1,-0x64(%ebp)
0861fbfa +0x237c:  mov    0xc(%ebp),%eax
0861fbfd +0x237f:  add    $0x668,%eax
0861fc02 +0x2384:  mov    %eax,(%esp)
0861fc05 +0x2387:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861fc0a +0x238c:  mov    %ebx,0x8(%esp)
0861fc0e +0x2390:  mov    %eax,0x4(%esp)
0861fc12 +0x2394:  mov    -0x78(%ebp),%eax
0861fc15 +0x2397:  mov    %eax,(%esp)
0861fc18 +0x239a:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861fc1d +0x239f:  mov    %eax,%ebx
0861fc1f +0x23a1:  movl   $", '",0x4(%esp)
0861fc27 +0x23a9:  lea    -0xde8c(%ebp),%eax
0861fc2d +0x23af:  mov    %eax,(%esp)
0861fc30 +0x23b2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fc35 +0x23b7:  mov    %ebx,0x4(%esp)
0861fc39 +0x23bb:  mov    %eax,(%esp)
0861fc3c +0x23be:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fc41 +0x23c3:  movl   $"'",0x4(%esp)
0861fc49 +0x23cb:  mov    %eax,(%esp)
0861fc4c +0x23ce:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fc51 +0x23d3:  lea    -0xc0(%ebp),%eax
0861fc57 +0x23d9:  mov    %eax,(%esp)
0861fc5a +0x23dc:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0861fc5f +0x23e1:  mov    0xc(%ebp),%eax
0861fc62 +0x23e4:  lea    0x66c(%eax),%edx
0861fc68 +0x23ea:  lea    -0xbc(%ebp),%eax
0861fc6e +0x23f0:  mov    %edx,0x4(%esp)
0861fc72 +0x23f4:  mov    %eax,(%esp)
0861fc75 +0x23f7:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0861fc7a +0x23fc:  sub    $0x4,%esp
0861fc7d +0x23ff:  mov    0xc(%ebp),%eax
0861fc80 +0x2402:  lea    0x66c(%eax),%edx
0861fc86 +0x2408:  lea    -0xb8(%ebp),%eax
0861fc8c +0x240e:  mov    %edx,0x4(%esp)
0861fc90 +0x2412:  mov    %eax,(%esp)
0861fc93 +0x2415:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0861fc98 +0x241a:  sub    $0x4,%esp
0861fc9b +0x241d:  lea    -0xc4(%ebp),%eax
0861fca1 +0x2423:  lea    -0xc0(%ebp),%edx
0861fca7 +0x2429:  mov    %edx,0xc(%esp)
0861fcab +0x242d:  mov    -0xbc(%ebp),%edx
0861fcb1 +0x2433:  mov    %edx,0x8(%esp)
0861fcb5 +0x2437:  mov    -0xb8(%ebp),%edx
0861fcbb +0x243d:  mov    %edx,0x4(%esp)
0861fcbf +0x2441:  mov    %eax,(%esp)
0861fcc2 +0x2444:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
0861fcc7 +0x2449:  sub    $0x4,%esp
0861fcca +0x244c:  lea    -0xc4(%ebp),%eax
0861fcd0 +0x2452:  mov    %eax,(%esp)
0861fcd3 +0x2455:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
0861fcd8 +0x245a:  mov    %eax,%ebx
0861fcda +0x245c:  movl   $", '",0x4(%esp)
0861fce2 +0x2464:  lea    -0xde8c(%ebp),%eax
0861fce8 +0x246a:  mov    %eax,(%esp)
0861fceb +0x246d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fcf0 +0x2472:  mov    %ebx,0x4(%esp)
0861fcf4 +0x2476:  mov    %eax,(%esp)
0861fcf7 +0x2479:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fcfc +0x247e:  movl   $"'",0x4(%esp)
0861fd04 +0x2486:  mov    %eax,(%esp)
0861fd07 +0x2489:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fd0c +0x248e:  jmp    0861fd2a <+0x24ac>
0861fd0e +0x2490:  mov    %eax,%ecx
0861fd10 +0x2492:  mov    %edx,%eax
0861fd12 +0x2494:  mov    %eax,%ebx
0861fd14 +0x2496:  mov    %ecx,%esi
0861fd16 +0x2498:  lea    -0xc4(%ebp),%eax
0861fd1c +0x249e:  mov    %eax,(%esp)
0861fd1f +0x24a1:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fd24 +0x24a6:  mov    %esi,%ecx
0861fd26 +0x24a8:  mov    %ebx,%eax
0861fd28 +0x24aa:  jmp    0861fd3e <+0x24c0>
0861fd2a +0x24ac:  lea    -0xc4(%ebp),%eax
0861fd30 +0x24b2:  mov    %eax,(%esp)
0861fd33 +0x24b5:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fd38 +0x24ba:  jmp    0861fd59 <+0x24db>
0861fd3a +0x24bc:  mov    %eax,%ecx
0861fd3c +0x24be:  mov    %edx,%eax
0861fd3e +0x24c0:  mov    %eax,%ebx
0861fd40 +0x24c2:  mov    %ecx,%esi
0861fd42 +0x24c4:  lea    -0xc0(%ebp),%eax
0861fd48 +0x24ca:  mov    %eax,(%esp)
0861fd4b +0x24cd:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fd50 +0x24d2:  mov    %esi,%ecx
0861fd52 +0x24d4:  mov    %ebx,%eax
0861fd54 +0x24d6:  jmp    0862092e <+0x30b0>
0861fd59 +0x24db:  lea    -0xc0(%ebp),%eax
0861fd5f +0x24e1:  mov    %eax,(%esp)
0861fd62 +0x24e4:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0861fd67 +0x24e9:  mov    -0x64(%ebp),%edx
0861fd6a +0x24ec:  lea    -0x3e8c(%ebp),%eax
0861fd70 +0x24f2:  shl    $0xa,%edx
0861fd73 +0x24f5:  add    %edx,%eax
0861fd75 +0x24f7:  mov    %eax,%ebx
0861fd77 +0x24f9:  addl   $0x1,-0x64(%ebp)
0861fd7b +0x24fd:  mov    0xc(%ebp),%eax
0861fd7e +0x2500:  add    $0x6b0,%eax
0861fd83 +0x2505:  mov    %eax,(%esp)
0861fd86 +0x2508:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861fd8b +0x250d:  mov    %ebx,0x8(%esp)
0861fd8f +0x2511:  mov    %eax,0x4(%esp)
0861fd93 +0x2515:  mov    -0x78(%ebp),%eax
0861fd96 +0x2518:  mov    %eax,(%esp)
0861fd99 +0x251b:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861fd9e +0x2520:  mov    %eax,%ebx
0861fda0 +0x2522:  movl   $", '",0x4(%esp)
0861fda8 +0x252a:  lea    -0xde8c(%ebp),%eax
0861fdae +0x2530:  mov    %eax,(%esp)
0861fdb1 +0x2533:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fdb6 +0x2538:  mov    %ebx,0x4(%esp)
0861fdba +0x253c:  mov    %eax,(%esp)
0861fdbd +0x253f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fdc2 +0x2544:  movl   $"'",0x4(%esp)
0861fdca +0x254c:  mov    %eax,(%esp)
0861fdcd +0x254f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fdd2 +0x2554:  mov    -0x64(%ebp),%edx
0861fdd5 +0x2557:  lea    -0x3e8c(%ebp),%eax
0861fddb +0x255d:  shl    $0xa,%edx
0861fdde +0x2560:  add    %edx,%eax
0861fde0 +0x2562:  mov    %eax,%ebx
0861fde2 +0x2564:  addl   $0x1,-0x64(%ebp)
0861fde6 +0x2568:  mov    0xc(%ebp),%eax
0861fde9 +0x256b:  add    $0x6b4,%eax
0861fdee +0x2570:  mov    %eax,(%esp)
0861fdf1 +0x2573:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861fdf6 +0x2578:  mov    %ebx,0x8(%esp)
0861fdfa +0x257c:  mov    %eax,0x4(%esp)
0861fdfe +0x2580:  mov    -0x78(%ebp),%eax
0861fe01 +0x2583:  mov    %eax,(%esp)
0861fe04 +0x2586:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861fe09 +0x258b:  mov    %eax,%ebx
0861fe0b +0x258d:  movl   $", '",0x4(%esp)
0861fe13 +0x2595:  lea    -0xde8c(%ebp),%eax
0861fe19 +0x259b:  mov    %eax,(%esp)
0861fe1c +0x259e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fe21 +0x25a3:  mov    %ebx,0x4(%esp)
0861fe25 +0x25a7:  mov    %eax,(%esp)
0861fe28 +0x25aa:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fe2d +0x25af:  movl   $"'",0x4(%esp)
0861fe35 +0x25b7:  mov    %eax,(%esp)
0861fe38 +0x25ba:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fe3d +0x25bf:  mov    -0x64(%ebp),%edx
0861fe40 +0x25c2:  lea    -0x3e8c(%ebp),%eax
0861fe46 +0x25c8:  shl    $0xa,%edx
0861fe49 +0x25cb:  add    %edx,%eax
0861fe4b +0x25cd:  mov    %eax,%ebx
0861fe4d +0x25cf:  addl   $0x1,-0x64(%ebp)
0861fe51 +0x25d3:  mov    0xc(%ebp),%eax
0861fe54 +0x25d6:  add    $0x438,%eax
0861fe59 +0x25db:  mov    %eax,(%esp)
0861fe5c +0x25de:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861fe61 +0x25e3:  mov    %ebx,0x8(%esp)
0861fe65 +0x25e7:  mov    %eax,0x4(%esp)
0861fe69 +0x25eb:  mov    -0x78(%ebp),%eax
0861fe6c +0x25ee:  mov    %eax,(%esp)
0861fe6f +0x25f1:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861fe74 +0x25f6:  mov    %eax,%ebx
0861fe76 +0x25f8:  movl   $", '",0x4(%esp)
0861fe7e +0x2600:  lea    -0xde8c(%ebp),%eax
0861fe84 +0x2606:  mov    %eax,(%esp)
0861fe87 +0x2609:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fe8c +0x260e:  mov    %ebx,0x4(%esp)
0861fe90 +0x2612:  mov    %eax,(%esp)
0861fe93 +0x2615:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fe98 +0x261a:  movl   $"'",0x4(%esp)
0861fea0 +0x2622:  mov    %eax,(%esp)
0861fea3 +0x2625:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fea8 +0x262a:  mov    -0x64(%ebp),%edx
0861feab +0x262d:  lea    -0x3e8c(%ebp),%eax
0861feb1 +0x2633:  shl    $0xa,%edx
0861feb4 +0x2636:  add    %edx,%eax
0861feb6 +0x2638:  mov    %eax,%ebx
0861feb8 +0x263a:  addl   $0x1,-0x64(%ebp)
0861febc +0x263e:  mov    0xc(%ebp),%eax
0861febf +0x2641:  add    $0x43c,%eax
0861fec4 +0x2646:  mov    %eax,(%esp)
0861fec7 +0x2649:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0861fecc +0x264e:  mov    %ebx,0x8(%esp)
0861fed0 +0x2652:  mov    %eax,0x4(%esp)
0861fed4 +0x2656:  mov    -0x78(%ebp),%eax
0861fed7 +0x2659:  mov    %eax,(%esp)
0861feda +0x265c:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0861fedf +0x2661:  mov    %eax,%ebx
0861fee1 +0x2663:  movl   $", '",0x4(%esp)
0861fee9 +0x266b:  lea    -0xde8c(%ebp),%eax
0861feef +0x2671:  mov    %eax,(%esp)
0861fef2 +0x2674:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861fef7 +0x2679:  mov    %ebx,0x4(%esp)
0861fefb +0x267d:  mov    %eax,(%esp)
0861fefe +0x2680:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ff03 +0x2685:  movl   $"'",0x4(%esp)
0861ff0b +0x268d:  mov    %eax,(%esp)
0861ff0e +0x2690:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ff13 +0x2695:  mov    0xc(%ebp),%eax
0861ff16 +0x2698:  mov    0x798(%eax),%ebx
0861ff1c +0x269e:  movl   $", ",0x4(%esp)
0861ff24 +0x26a6:  lea    -0xde8c(%ebp),%eax
0861ff2a +0x26ac:  mov    %eax,(%esp)
0861ff2d +0x26af:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ff32 +0x26b4:  mov    %ebx,0x4(%esp)
0861ff36 +0x26b8:  mov    %eax,(%esp)
0861ff39 +0x26bb:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0861ff3e +0x26c0:  movl   $", '",0x4(%esp)
0861ff46 +0x26c8:  lea    -0xde8c(%ebp),%eax
0861ff4c +0x26ce:  mov    %eax,(%esp)
0861ff4f +0x26d1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ff54 +0x26d6:  lea    -0x1f8(%ebp),%edx
0861ff5a +0x26dc:  mov    %edx,0x4(%esp)
0861ff5e +0x26e0:  mov    %eax,(%esp)
0861ff61 +0x26e3:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ff66 +0x26e8:  movl   $"'",0x4(%esp)
0861ff6e +0x26f0:  mov    %eax,(%esp)
0861ff71 +0x26f3:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0861ff76 +0x26f8:  lea    -0xb0(%ebp),%eax
0861ff7c +0x26fe:  mov    %eax,(%esp)
0861ff7f +0x2701:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0861ff84 +0x2706:  mov    0xc(%ebp),%eax
0861ff87 +0x2709:  lea    0x378(%eax),%edx
0861ff8d +0x270f:  lea    -0xac(%ebp),%eax
0861ff93 +0x2715:  mov    %edx,0x4(%esp)
0861ff97 +0x2719:  mov    %eax,(%esp)
0861ff9a +0x271c:  call   0839661c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x260bc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x260bc
0861ff9f +0x2721:  sub    $0x4,%esp
0861ffa2 +0x2724:  mov    0xc(%ebp),%eax
0861ffa5 +0x2727:  lea    0x378(%eax),%edx
0861ffab +0x272d:  lea    -0xa8(%ebp),%eax
0861ffb1 +0x2733:  mov    %edx,0x4(%esp)
0861ffb5 +0x2737:  mov    %eax,(%esp)
0861ffb8 +0x273a:  call   0839659c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2603c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2603c
0861ffbd +0x273f:  sub    $0x4,%esp
0861ffc0 +0x2742:  lea    -0xb4(%ebp),%eax
0861ffc6 +0x2748:  lea    -0xb0(%ebp),%edx
0861ffcc +0x274e:  mov    %edx,0xc(%esp)
0861ffd0 +0x2752:  mov    -0xac(%ebp),%edx
0861ffd6 +0x2758:  mov    %edx,0x8(%esp)
0861ffda +0x275c:  mov    -0xa8(%ebp),%edx
0861ffe0 +0x2762:  mov    %edx,0x4(%esp)
0861ffe4 +0x2766:  mov    %eax,(%esp)
0861ffe7 +0x2769:  call   08628aa6 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2104>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2104
0861ffec +0x276e:  sub    $0x4,%esp
0861ffef +0x2771:  lea    -0xb4(%ebp),%eax
0861fff5 +0x2777:  mov    %eax,(%esp)
0861fff8 +0x277a:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
0861fffd +0x277f:  mov    %eax,%ebx
0861ffff +0x2781:  movl   $", '",0x4(%esp)
08620007 +0x2789:  lea    -0xde8c(%ebp),%eax
0862000d +0x278f:  mov    %eax,(%esp)
08620010 +0x2792:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620015 +0x2797:  mov    %ebx,0x4(%esp)
08620019 +0x279b:  mov    %eax,(%esp)
0862001c +0x279e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620021 +0x27a3:  movl   $"'",0x4(%esp)
08620029 +0x27ab:  mov    %eax,(%esp)
0862002c +0x27ae:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620031 +0x27b3:  jmp    0862004f <+0x27d1>
08620033 +0x27b5:  mov    %eax,%ecx
08620035 +0x27b7:  mov    %edx,%eax
08620037 +0x27b9:  mov    %eax,%ebx
08620039 +0x27bb:  mov    %ecx,%esi
0862003b +0x27bd:  lea    -0xb4(%ebp),%eax
08620041 +0x27c3:  mov    %eax,(%esp)
08620044 +0x27c6:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08620049 +0x27cb:  mov    %esi,%ecx
0862004b +0x27cd:  mov    %ebx,%eax
0862004d +0x27cf:  jmp    08620063 <+0x27e5>
0862004f +0x27d1:  lea    -0xb4(%ebp),%eax
08620055 +0x27d7:  mov    %eax,(%esp)
08620058 +0x27da:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862005d +0x27df:  jmp    0862007e <+0x2800>
0862005f +0x27e1:  mov    %eax,%ecx
08620061 +0x27e3:  mov    %edx,%eax
08620063 +0x27e5:  mov    %eax,%ebx
08620065 +0x27e7:  mov    %ecx,%esi
08620067 +0x27e9:  lea    -0xb0(%ebp),%eax
0862006d +0x27ef:  mov    %eax,(%esp)
08620070 +0x27f2:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08620075 +0x27f7:  mov    %esi,%ecx
08620077 +0x27f9:  mov    %ebx,%eax
08620079 +0x27fb:  jmp    0862092e <+0x30b0>
0862007e +0x2800:  lea    -0xb0(%ebp),%eax
08620084 +0x2806:  mov    %eax,(%esp)
08620087 +0x2809:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862008c +0x280e:  movl   $", ",0x4(%esp)
08620094 +0x2816:  lea    -0xde8c(%ebp),%eax
0862009a +0x281c:  mov    %eax,(%esp)
0862009d +0x281f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086200a2 +0x2824:  mov    -0x70(%ebp),%edx
086200a5 +0x2827:  mov    %edx,0x4(%esp)
086200a9 +0x282b:  mov    %eax,(%esp)
086200ac +0x282e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086200b1 +0x2833:  movl   $", ",0x4(%esp)
086200b9 +0x283b:  lea    -0xde8c(%ebp),%eax
086200bf +0x2841:  mov    %eax,(%esp)
086200c2 +0x2844:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086200c7 +0x2849:  mov    0x18(%ebp),%edx
086200ca +0x284c:  mov    %edx,0x4(%esp)
086200ce +0x2850:  mov    %eax,(%esp)
086200d1 +0x2853:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086200d6 +0x2858:  mov    0xc(%ebp),%eax
086200d9 +0x285b:  mov    0x6a0(%eax),%ebx
086200df +0x2861:  movl   $", ",0x4(%esp)
086200e7 +0x2869:  lea    -0xde8c(%ebp),%eax
086200ed +0x286f:  mov    %eax,(%esp)
086200f0 +0x2872:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086200f5 +0x2877:  mov    %ebx,0x4(%esp)
086200f9 +0x287b:  mov    %eax,(%esp)
086200fc +0x287e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620101 +0x2883:  movl   $", '",0x4(%esp)
08620109 +0x288b:  lea    -0xde8c(%ebp),%eax
0862010f +0x2891:  mov    %eax,(%esp)
08620112 +0x2894:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620117 +0x2899:  lea    -0x2f8(%ebp),%edx
0862011d +0x289f:  mov    %edx,0x4(%esp)
08620121 +0x28a3:  mov    %eax,(%esp)
08620124 +0x28a6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620129 +0x28ab:  movl   $"'",0x4(%esp)
08620131 +0x28b3:  mov    %eax,(%esp)
08620134 +0x28b6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620139 +0x28bb:  movl   $", '",0x4(%esp)
08620141 +0x28c3:  lea    -0xde8c(%ebp),%eax
08620147 +0x28c9:  mov    %eax,(%esp)
0862014a +0x28cc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862014f +0x28d1:  lea    -0x3f8(%ebp),%edx
08620155 +0x28d7:  mov    %edx,0x4(%esp)
08620159 +0x28db:  mov    %eax,(%esp)
0862015c +0x28de:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620161 +0x28e3:  movl   $"'",0x4(%esp)
08620169 +0x28eb:  mov    %eax,(%esp)
0862016c +0x28ee:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620171 +0x28f3:  movl   $", '",0x4(%esp)
08620179 +0x28fb:  lea    -0xde8c(%ebp),%eax
0862017f +0x2901:  mov    %eax,(%esp)
08620182 +0x2904:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620187 +0x2909:  lea    -0x4f8(%ebp),%edx
0862018d +0x290f:  mov    %edx,0x4(%esp)
08620191 +0x2913:  mov    %eax,(%esp)
08620194 +0x2916:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620199 +0x291b:  movl   $"'",0x4(%esp)
086201a1 +0x2923:  mov    %eax,(%esp)
086201a4 +0x2926:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086201a9 +0x292b:  movl   $", '",0x4(%esp)
086201b1 +0x2933:  lea    -0xde8c(%ebp),%eax
086201b7 +0x2939:  mov    %eax,(%esp)
086201ba +0x293c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086201bf +0x2941:  lea    -0x5f8(%ebp),%edx
086201c5 +0x2947:  mov    %edx,0x4(%esp)
086201c9 +0x294b:  mov    %eax,(%esp)
086201cc +0x294e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086201d1 +0x2953:  movl   $"'",0x4(%esp)
086201d9 +0x295b:  mov    %eax,(%esp)
086201dc +0x295e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086201e1 +0x2963:  movl   $", '",0x4(%esp)
086201e9 +0x296b:  lea    -0xde8c(%ebp),%eax
086201ef +0x2971:  mov    %eax,(%esp)
086201f2 +0x2974:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086201f7 +0x2979:  lea    -0x15e(%ebp),%edx
086201fd +0x297f:  mov    %edx,0x4(%esp)
08620201 +0x2983:  mov    %eax,(%esp)
08620204 +0x2986:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620209 +0x298b:  movl   $"'",0x4(%esp)
08620211 +0x2993:  mov    %eax,(%esp)
08620214 +0x2996:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620219 +0x299b:  mov    0xc(%ebp),%eax
0862021c +0x299e:  mov    0x434(%eax),%ebx
08620222 +0x29a4:  movl   $", ",0x4(%esp)
0862022a +0x29ac:  lea    -0xde8c(%ebp),%eax
08620230 +0x29b2:  mov    %eax,(%esp)
08620233 +0x29b5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620238 +0x29ba:  mov    %ebx,0x4(%esp)
0862023c +0x29be:  mov    %eax,(%esp)
0862023f +0x29c1:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
08620244 +0x29c6:  lea    -0x3e8c(%ebp),%eax
0862024a +0x29cc:  lea    0xc00(%eax),%edi
08620250 +0x29d2:  mov    0xc(%ebp),%eax
08620253 +0x29d5:  mov    0x70(%eax),%esi
08620256 +0x29d8:  mov    0xc(%ebp),%eax
08620259 +0x29db:  add    $0x6c,%eax
0862025c +0x29de:  mov    %eax,(%esp)
0862025f +0x29e1:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08620264 +0x29e6:  mov    %eax,%ebx
08620266 +0x29e8:  mov    0xc(%ebp),%eax
08620269 +0x29eb:  add    $0x6c,%eax
0862026c +0x29ee:  mov    %eax,(%esp)
0862026f +0x29f1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08620274 +0x29f6:  mov    %esi,0xc(%esp)
08620278 +0x29fa:  mov    %ebx,0x8(%esp)
0862027c +0x29fe:  mov    %eax,0x4(%esp)
08620280 +0x2a02:  mov    0x8(%ebp),%eax
08620283 +0x2a05:  mov    %eax,(%esp)
08620286 +0x2a08:  call   0861d706 <_ZN11sync_script11CSyncScript6GetURLEPKcii>  ; sync_script::CSyncScript::GetURL(char const*, int, int)
0862028b +0x2a0d:  mov    %edi,0x8(%esp)
0862028f +0x2a11:  mov    %eax,0x4(%esp)
08620293 +0x2a15:  mov    -0x78(%ebp),%eax
08620296 +0x2a18:  mov    %eax,(%esp)
08620299 +0x2a1b:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0862029e +0x2a20:  mov    %eax,%ebx
086202a0 +0x2a22:  movl   $", '",0x4(%esp)
086202a8 +0x2a2a:  lea    -0xde8c(%ebp),%eax
086202ae +0x2a30:  mov    %eax,(%esp)
086202b1 +0x2a33:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086202b6 +0x2a38:  mov    %ebx,0x4(%esp)
086202ba +0x2a3c:  mov    %eax,(%esp)
086202bd +0x2a3f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086202c2 +0x2a44:  movl   $"'",0x4(%esp)
086202ca +0x2a4c:  mov    %eax,(%esp)
086202cd +0x2a4f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086202d2 +0x2a54:  mov    0xc(%ebp),%eax
086202d5 +0x2a57:  mov    0xc4(%eax),%ebx
086202db +0x2a5d:  movl   $", ",0x4(%esp)
086202e3 +0x2a65:  lea    -0xde8c(%ebp),%eax
086202e9 +0x2a6b:  mov    %eax,(%esp)
086202ec +0x2a6e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086202f1 +0x2a73:  mov    %ebx,0x4(%esp)
086202f5 +0x2a77:  mov    %eax,(%esp)
086202f8 +0x2a7a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086202fd +0x2a7f:  lea    -0xa0(%ebp),%eax
08620303 +0x2a85:  mov    %eax,(%esp)
08620306 +0x2a88:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0862030b +0x2a8d:  mov    0xc(%ebp),%eax
0862030e +0x2a90:  lea    0x198(%eax),%edx
08620314 +0x2a96:  lea    -0x9c(%ebp),%eax
0862031a +0x2a9c:  mov    %edx,0x4(%esp)
0862031e +0x2aa0:  mov    %eax,(%esp)
08620321 +0x2aa3:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08620326 +0x2aa8:  sub    $0x4,%esp
08620329 +0x2aab:  mov    0xc(%ebp),%eax
0862032c +0x2aae:  lea    0x198(%eax),%edx
08620332 +0x2ab4:  lea    -0x98(%ebp),%eax
08620338 +0x2aba:  mov    %edx,0x4(%esp)
0862033c +0x2abe:  mov    %eax,(%esp)
0862033f +0x2ac1:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08620344 +0x2ac6:  sub    $0x4,%esp
08620347 +0x2ac9:  lea    -0xa4(%ebp),%eax
0862034d +0x2acf:  lea    -0xa0(%ebp),%edx
08620353 +0x2ad5:  mov    %edx,0xc(%esp)
08620357 +0x2ad9:  mov    -0x9c(%ebp),%edx
0862035d +0x2adf:  mov    %edx,0x8(%esp)
08620361 +0x2ae3:  mov    -0x98(%ebp),%edx
08620367 +0x2ae9:  mov    %edx,0x4(%esp)
0862036b +0x2aed:  mov    %eax,(%esp)
0862036e +0x2af0:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
08620373 +0x2af5:  sub    $0x4,%esp
08620376 +0x2af8:  lea    -0xa4(%ebp),%eax
0862037c +0x2afe:  mov    %eax,(%esp)
0862037f +0x2b01:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08620384 +0x2b06:  mov    %eax,%ebx
08620386 +0x2b08:  movl   $", '",0x4(%esp)
0862038e +0x2b10:  lea    -0xde8c(%ebp),%eax
08620394 +0x2b16:  mov    %eax,(%esp)
08620397 +0x2b19:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862039c +0x2b1e:  mov    %ebx,0x4(%esp)
086203a0 +0x2b22:  mov    %eax,(%esp)
086203a3 +0x2b25:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086203a8 +0x2b2a:  movl   $"'",0x4(%esp)
086203b0 +0x2b32:  mov    %eax,(%esp)
086203b3 +0x2b35:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086203b8 +0x2b3a:  jmp    086203d6 <+0x2b58>
086203ba +0x2b3c:  mov    %eax,%ecx
086203bc +0x2b3e:  mov    %edx,%eax
086203be +0x2b40:  mov    %eax,%ebx
086203c0 +0x2b42:  mov    %ecx,%esi
086203c2 +0x2b44:  lea    -0xa4(%ebp),%eax
086203c8 +0x2b4a:  mov    %eax,(%esp)
086203cb +0x2b4d:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086203d0 +0x2b52:  mov    %esi,%ecx
086203d2 +0x2b54:  mov    %ebx,%eax
086203d4 +0x2b56:  jmp    086203ea <+0x2b6c>
086203d6 +0x2b58:  lea    -0xa4(%ebp),%eax
086203dc +0x2b5e:  mov    %eax,(%esp)
086203df +0x2b61:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086203e4 +0x2b66:  jmp    08620405 <+0x2b87>
086203e6 +0x2b68:  mov    %eax,%ecx
086203e8 +0x2b6a:  mov    %edx,%eax
086203ea +0x2b6c:  mov    %eax,%ebx
086203ec +0x2b6e:  mov    %ecx,%esi
086203ee +0x2b70:  lea    -0xa0(%ebp),%eax
086203f4 +0x2b76:  mov    %eax,(%esp)
086203f7 +0x2b79:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086203fc +0x2b7e:  mov    %esi,%ecx
086203fe +0x2b80:  mov    %ebx,%eax
08620400 +0x2b82:  jmp    0862092e <+0x30b0>
08620405 +0x2b87:  lea    -0xa0(%ebp),%eax
0862040b +0x2b8d:  mov    %eax,(%esp)
0862040e +0x2b90:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08620413 +0x2b95:  mov    0xc(%ebp),%eax
08620416 +0x2b98:  mov    0x1c8(%eax),%ebx
0862041c +0x2b9e:  movl   $", ",0x4(%esp)
08620424 +0x2ba6:  lea    -0xde8c(%ebp),%eax
0862042a +0x2bac:  mov    %eax,(%esp)
0862042d +0x2baf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620432 +0x2bb4:  mov    %ebx,0x4(%esp)
08620436 +0x2bb8:  mov    %eax,(%esp)
08620439 +0x2bbb:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0862043e +0x2bc0:  mov    0xc(%ebp),%eax
08620441 +0x2bc3:  mov    0x1d0(%eax),%ebx
08620447 +0x2bc9:  movl   $", ",0x4(%esp)
0862044f +0x2bd1:  lea    -0xde8c(%ebp),%eax
08620455 +0x2bd7:  mov    %eax,(%esp)
08620458 +0x2bda:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862045d +0x2bdf:  mov    %ebx,0x4(%esp)
08620461 +0x2be3:  mov    %eax,(%esp)
08620464 +0x2be6:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
08620469 +0x2beb:  lea    -0xde8c(%ebp),%eax
0862046f +0x2bf1:  mov    %eax,(%esp)
08620472 +0x2bf4:  call   086269e2 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x40>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x40
08620477 +0x2bf9:  mov    %eax,0x8(%esp)
0862047b +0x2bfd:  movl   $"inSert into dnf_item_info(it_no, it_name, it_eng_name, it_explain, master_type, sub_type, job, class, revert, level, skill, create_ratio, rarity, weight, price, cash, medal, durability, cooltime, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all, ref_slow, ref_freeze, ref_poison, ref_stun, ref_cus, ref_blind, ref_lite, ref_ston, ref_sleep, ref_deekement, ref_deadlystrike, ref_bleeding, ref_confuse, ref_hold, ref_all_stat, ref_pierce, ref_stuck, inven_max, hp_regenrate, mp_regenrate, mov_speed, att_speed, quest, hit_recovery, jump, att_element, att_active_status, att_active_status_ratio, att_active_status_pow, att_backforce, att_upforce, att_hp_drain, att_mp_drain, criticalhit_rate, stuck_rate, att_defenseIgnore, skill_levelup, set_type, jewel_type, detail_explain, flavor_text, anti_evil, value, required_skill, need_material, physical_absolute_damage, physical_damage_reduce, physical_absolute_defense, magical_absolute_damage, magical_damage_reduce, magical_absolute_defense, fire_attack, water_attack, dark_attack, light_attack, all_attack, weapon_break_resistance, armor_break_resistance, all_activestatus_resistance, rigidity, item_aura, magical_critical_hit, set_name, set_item, fullset_basic_explain, fullset_detail_explain, parameter_basic_explain, parameter_detail_explain, part_set_index, hide_equipment, skill_data_up, it_set_no, db_piece_count, set_item_master, ani_variation, ani_variation_expand, ani_variation2, ani_variation_expand2, hide_growtype_avatar, room_list_move_speed_rate, url, icon_mark_number, extra_icon_idx_list, hp_max_rate, mp_max_rate) values(%s)",0x4(%esp)
08620483 +0x2c05:  mov    -0x78(%ebp),%eax
08620486 +0x2c08:  mov    %eax,(%esp)
08620489 +0x2c0b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862048e +0x2c10:  lea    -0x1b4(%ebp),%eax
08620494 +0x2c16:  mov    %eax,(%esp)
08620497 +0x2c19:  call   08627c94 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x12f2>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x12f2
0862049c +0x2c1e:  mov    -0x78(%ebp),%eax
0862049f +0x2c21:  mov    %eax,(%esp)
086204a2 +0x2c24:  call   0844d65e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x274>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x274
086204a7 +0x2c29:  mov    %eax,0x4(%esp)
086204ab +0x2c2d:  lea    -0x1b4(%ebp),%eax
086204b1 +0x2c33:  mov    %eax,(%esp)
086204b4 +0x2c36:  call   086272e8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x946>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x946
086204b9 +0x2c3b:  movl   $0x1,0x4(%esp)
086204c1 +0x2c43:  mov    -0x78(%ebp),%eax
086204c4 +0x2c46:  mov    %eax,(%esp)
086204c7 +0x2c49:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086204cc +0x2c4e:  xor    $0x1,%eax
086204cf +0x2c51:  test   %al,%al
086204d1 +0x2c53:  je     086204dd <+0x2c5f>
086204d3 +0x2c55:  mov    $0x0,%ebx
086204d8 +0x2c5a:  jmp    0862091a <+0x309c>
086204dd +0x2c5f:  mov    0xc(%ebp),%eax
086204e0 +0x2c62:  add    $0x424,%eax
086204e5 +0x2c67:  mov    %eax,(%esp)
086204e8 +0x2c6a:  call   08628b36 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2194>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2194
086204ed +0x2c6f:  xor    $0x1,%eax
086204f0 +0x2c72:  test   %al,%al
086204f2 +0x2c74:  je     08620633 <+0x2db5>
086204f8 +0x2c7a:  movl   $0x0,-0x20(%ebp)
086204ff +0x2c81:  mov    0xc(%ebp),%eax
08620502 +0x2c84:  lea    0x424(%eax),%edx
08620508 +0x2c8a:  lea    -0x1b8(%ebp),%eax
0862050e +0x2c90:  mov    %edx,0x4(%esp)
08620512 +0x2c94:  mov    %eax,(%esp)
08620515 +0x2c97:  call   08396fc8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x26a68>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x26a68
0862051a +0x2c9c:  sub    $0x4,%esp
0862051d +0x2c9f:  jmp    086205f5 <+0x2d77>
08620522 +0x2ca4:  lea    -0x1b8(%ebp),%eax
08620528 +0x2caa:  mov    %eax,(%esp)
0862052b +0x2cad:  call   08628bbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x221a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x221a
08620530 +0x2cb2:  mov    %eax,-0x1c(%ebp)
08620533 +0x2cb5:  mov    -0x1c(%ebp),%eax
08620536 +0x2cb8:  mov    0x14(%eax),%eax
08620539 +0x2cbb:  mov    %eax,-0xdea4(%ebp)
0862053f +0x2cc1:  mov    -0x1c(%ebp),%eax
08620542 +0x2cc4:  mov    0x10(%eax),%edi
08620545 +0x2cc7:  mov    -0x1c(%ebp),%eax
08620548 +0x2cca:  mov    0xc(%eax),%eax
0862054b +0x2ccd:  cmp    $0xb,%eax
0862054e +0x2cd0:  je     0862055a <+0x2cdc>
08620550 +0x2cd2:  mov    -0x1c(%ebp),%eax
08620553 +0x2cd5:  mov    0xc(%eax),%eax
08620556 +0x2cd8:  mov    %eax,%edx
08620558 +0x2cda:  jmp    0862055f <+0x2ce1>
0862055a +0x2cdc:  mov    $0x63,%edx
0862055f +0x2ce1:  mov    -0x1c(%ebp),%eax
08620562 +0x2ce4:  flds   0x8(%eax)
08620565 +0x2ce7:  mov    -0x1c(%ebp),%eax
08620568 +0x2cea:  mov    0x4(%eax),%esi
0862056b +0x2ced:  mov    -0x1c(%ebp),%eax
0862056e +0x2cf0:  mov    (%eax),%eax
08620570 +0x2cf2:  mov    %eax,%ebx
08620572 +0x2cf4:  mov    -0x20(%ebp),%ecx
08620575 +0x2cf7:  addl   $0x1,-0x20(%ebp)
08620579 +0x2cfb:  mov    0xc(%ebp),%eax
0862057c +0x2cfe:  mov    (%eax),%eax
0862057e +0x2d00:  mov    %eax,-0xdeac(%ebp)
08620584 +0x2d06:  mov    -0xdea4(%ebp),%eax
0862058a +0x2d0c:  mov    %eax,0x28(%esp)
0862058e +0x2d10:  mov    %edi,0x24(%esp)
08620592 +0x2d14:  mov    %edx,0x20(%esp)
08620596 +0x2d18:  fstpl  0x18(%esp)
0862059a +0x2d1c:  mov    %esi,0x14(%esp)
0862059e +0x2d20:  mov    %ebx,0x10(%esp)
086205a2 +0x2d24:  mov    %ecx,0xc(%esp)
086205a6 +0x2d28:  mov    -0xdeac(%ebp),%ecx
086205ac +0x2d2e:  mov    %ecx,0x8(%esp)
086205b0 +0x2d32:  movl   $"inSert into avatar_select_ability(it_no, ability_no, ability_type, rate_change, value, job, skill_index, skill_level) values(%d,%d,%d,%d,%f,%d,%d,%d)",0x4(%esp)
086205b8 +0x2d3a:  mov    -0x78(%ebp),%eax
086205bb +0x2d3d:  mov    %eax,(%esp)
086205be +0x2d40:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086205c3 +0x2d45:  movl   $0x1,0x4(%esp)
086205cb +0x2d4d:  mov    -0x78(%ebp),%eax
086205ce +0x2d50:  mov    %eax,(%esp)
086205d1 +0x2d53:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086205d6 +0x2d58:  xor    $0x1,%eax
086205d9 +0x2d5b:  test   %al,%al
086205db +0x2d5d:  je     086205e7 <+0x2d69>
086205dd +0x2d5f:  mov    $0x0,%ebx
086205e2 +0x2d64:  jmp    0862091a <+0x309c>
086205e7 +0x2d69:  lea    -0x1b8(%ebp),%eax
086205ed +0x2d6f:  mov    %eax,(%esp)
086205f0 +0x2d72:  call   08628ba6 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2204>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2204
086205f5 +0x2d77:  mov    0xc(%ebp),%eax
086205f8 +0x2d7a:  lea    0x424(%eax),%edx
086205fe +0x2d80:  lea    -0x94(%ebp),%eax
08620604 +0x2d86:  mov    %edx,0x4(%esp)
08620608 +0x2d8a:  mov    %eax,(%esp)
0862060b +0x2d8d:  call   08397048 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x26ae8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x26ae8
08620610 +0x2d92:  sub    $0x4,%esp
08620613 +0x2d95:  lea    -0x94(%ebp),%eax
08620619 +0x2d9b:  mov    %eax,0x4(%esp)
0862061d +0x2d9f:  lea    -0x1b8(%ebp),%eax
08620623 +0x2da5:  mov    %eax,(%esp)
08620626 +0x2da8:  call   08628b7a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x21d8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x21d8
0862062b +0x2dad:  test   %al,%al
0862062d +0x2daf:  jne    08620522 <+0x2ca4>
08620633 +0x2db5:  movb   $0x0,-0xde9d(%ebp)
0862063a +0x2dbc:  movb   $0x0,-0xde9c(%ebp)
08620641 +0x2dc3:  movb   $0x0,-0xde9b(%ebp)
08620648 +0x2dca:  movb   $0x0,-0xde9a(%ebp)
0862064f +0x2dd1:  mov    $0x0,%edi
08620654 +0x2dd6:  lea    -0x89(%ebp),%eax
0862065a +0x2ddc:  mov    %eax,(%esp)
0862065d +0x2ddf:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08620662 +0x2de4:  movb   $0x1,-0xde99(%ebp)
08620669 +0x2deb:  lea    -0x89(%ebp),%eax
0862066f +0x2df1:  mov    %eax,0x8(%esp)
08620673 +0x2df5:  movl   $"artifact red",0x4(%esp)
0862067b +0x2dfd:  lea    -0x90(%ebp),%eax
08620681 +0x2e03:  mov    %eax,(%esp)
08620684 +0x2e06:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08620689 +0x2e0b:  movb   $0x1,-0xde9d(%ebp)
08620690 +0x2e12:  mov    0x8(%ebp),%eax
08620693 +0x2e15:  lea    0x1c(%eax),%edx
08620696 +0x2e18:  lea    -0x90(%ebp),%eax
0862069c +0x2e1e:  mov    %eax,0x4(%esp)
086206a0 +0x2e22:  mov    %edx,(%esp)
086206a3 +0x2e25:  call   086282a8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1906>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1906
086206a8 +0x2e2a:  movzwl 0x4(%eax),%eax
086206ac +0x2e2e:  movzwl %ax,%edx
086206af +0x2e31:  mov    -0x150(%ebp),%eax
086206b5 +0x2e37:  cmp    %eax,%edx
086206b7 +0x2e39:  je     08620779 <+0x2efb>
086206bd +0x2e3f:  lea    -0x81(%ebp),%eax
086206c3 +0x2e45:  mov    %eax,(%esp)
086206c6 +0x2e48:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
086206cb +0x2e4d:  movb   $0x1,-0xde9c(%ebp)
086206d2 +0x2e54:  lea    -0x81(%ebp),%eax
086206d8 +0x2e5a:  mov    %eax,0x8(%esp)
086206dc +0x2e5e:  movl   $"artifact blue",0x4(%esp)
086206e4 +0x2e66:  lea    -0x88(%ebp),%eax
086206ea +0x2e6c:  mov    %eax,(%esp)
086206ed +0x2e6f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
086206f2 +0x2e74:  movb   $0x1,-0xde9b(%ebp)
086206f9 +0x2e7b:  mov    0x8(%ebp),%eax
086206fc +0x2e7e:  lea    0x1c(%eax),%edx
086206ff +0x2e81:  lea    -0x88(%ebp),%eax
08620705 +0x2e87:  mov    %eax,0x4(%esp)
08620709 +0x2e8b:  mov    %edx,(%esp)
0862070c +0x2e8e:  call   086282a8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1906>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1906
08620711 +0x2e93:  movzwl 0x4(%eax),%eax
08620715 +0x2e97:  movzwl %ax,%edx
08620718 +0x2e9a:  mov    -0x150(%ebp),%eax
0862071e +0x2ea0:  cmp    %eax,%edx
08620720 +0x2ea2:  je     08620779 <+0x2efb>
08620722 +0x2ea4:  lea    -0x79(%ebp),%eax
08620725 +0x2ea7:  mov    %eax,(%esp)
08620728 +0x2eaa:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0862072d +0x2eaf:  movb   $0x1,-0xde9a(%ebp)
08620734 +0x2eb6:  lea    -0x79(%ebp),%eax
08620737 +0x2eb9:  mov    %eax,0x8(%esp)
0862073b +0x2ebd:  movl   $"artifact green",0x4(%esp)
08620743 +0x2ec5:  lea    -0x80(%ebp),%eax
08620746 +0x2ec8:  mov    %eax,(%esp)
08620749 +0x2ecb:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0862074e +0x2ed0:  mov    $0x1,%edi
08620753 +0x2ed5:  mov    0x8(%ebp),%eax
08620756 +0x2ed8:  lea    0x1c(%eax),%edx
08620759 +0x2edb:  lea    -0x80(%ebp),%eax
0862075c +0x2ede:  mov    %eax,0x4(%esp)
08620760 +0x2ee2:  mov    %edx,(%esp)
08620763 +0x2ee5:  call   086282a8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1906>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1906
08620768 +0x2eea:  movzwl 0x4(%eax),%eax
0862076c +0x2eee:  movzwl %ax,%edx
0862076f +0x2ef1:  mov    -0x150(%ebp),%eax
08620775 +0x2ef7:  cmp    %eax,%edx
08620777 +0x2ef9:  jne    08620780 <+0x2f02>
08620779 +0x2efb:  mov    $0x1,%eax
0862077e +0x2f00:  jmp    08620785 <+0x2f07>
08620780 +0x2f02:  mov    $0x0,%eax
08620785 +0x2f07:  mov    %eax,%ebx
08620787 +0x2f09:  mov    %edi,%eax
08620789 +0x2f0b:  test   %al,%al
0862078b +0x2f0d:  jne    086207ae <+0x2f30>
0862078d +0x2f0f:  jmp    086207ea <+0x2f6c>
0862078f +0x2f11:  mov    %eax,%ecx
08620791 +0x2f13:  mov    %edx,%eax
08620793 +0x2f15:  mov    %eax,%esi
08620795 +0x2f17:  mov    %ecx,%ebx
08620797 +0x2f19:  mov    %edi,%ecx
08620799 +0x2f1b:  test   %cl,%cl
0862079b +0x2f1d:  je     086207a8 <+0x2f2a>
0862079d +0x2f1f:  lea    -0x80(%ebp),%eax
086207a0 +0x2f22:  mov    %eax,(%esp)
086207a3 +0x2f25:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086207a8 +0x2f2a:  mov    %ebx,%ecx
086207aa +0x2f2c:  mov    %esi,%eax
086207ac +0x2f2e:  jmp    086207bf <+0x2f41>
086207ae +0x2f30:  lea    -0x80(%ebp),%eax
086207b1 +0x2f33:  mov    %eax,(%esp)
086207b4 +0x2f36:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086207b9 +0x2f3b:  jmp    086207ea <+0x2f6c>
086207bb +0x2f3d:  mov    %eax,%ecx
086207bd +0x2f3f:  mov    %edx,%eax
086207bf +0x2f41:  mov    %eax,%esi
086207c1 +0x2f43:  mov    %ecx,%ebx
086207c3 +0x2f45:  cmpb   $0x0,-0xde9a(%ebp)
086207ca +0x2f4c:  je     086207d7 <+0x2f59>
086207cc +0x2f4e:  lea    -0x79(%ebp),%eax
086207cf +0x2f51:  mov    %eax,(%esp)
086207d2 +0x2f54:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086207d7 +0x2f59:  mov    %ebx,%ecx
086207d9 +0x2f5b:  mov    %esi,%eax
086207db +0x2f5d:  mov    %eax,%ebx
086207dd +0x2f5f:  mov    %ecx,%esi
086207df +0x2f61:  cmpb   $0x0,-0xde9b(%ebp)
086207e6 +0x2f68:  je     0862080e <+0x2f90>
086207e8 +0x2f6a:  jmp    08620800 <+0x2f82>
086207ea +0x2f6c:  cmpb   $0x0,-0xde9a(%ebp)
086207f1 +0x2f73:  je     08620814 <+0x2f96>
086207f3 +0x2f75:  lea    -0x79(%ebp),%eax
086207f6 +0x2f78:  mov    %eax,(%esp)
086207f9 +0x2f7b:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086207fe +0x2f80:  jmp    08620814 <+0x2f96>
08620800 +0x2f82:  lea    -0x88(%ebp),%eax
08620806 +0x2f88:  mov    %eax,(%esp)
08620809 +0x2f8b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862080e +0x2f90:  mov    %esi,%ecx
08620810 +0x2f92:  mov    %ebx,%eax
08620812 +0x2f94:  jmp    08620831 <+0x2fb3>
08620814 +0x2f96:  cmpb   $0x0,-0xde9b(%ebp)
0862081b +0x2f9d:  je     0862085f <+0x2fe1>
0862081d +0x2f9f:  lea    -0x88(%ebp),%eax
08620823 +0x2fa5:  mov    %eax,(%esp)
08620826 +0x2fa8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862082b +0x2fad:  jmp    0862085f <+0x2fe1>
0862082d +0x2faf:  mov    %eax,%ecx
0862082f +0x2fb1:  mov    %edx,%eax
08620831 +0x2fb3:  mov    %eax,%ebx
08620833 +0x2fb5:  mov    %ecx,%esi
08620835 +0x2fb7:  cmpb   $0x0,-0xde9c(%ebp)
0862083c +0x2fbe:  je     0862084c <+0x2fce>
0862083e +0x2fc0:  lea    -0x81(%ebp),%eax
08620844 +0x2fc6:  mov    %eax,(%esp)
08620847 +0x2fc9:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0862084c +0x2fce:  mov    %esi,%ecx
0862084e +0x2fd0:  mov    %ebx,%eax
08620850 +0x2fd2:  mov    %eax,%ebx
08620852 +0x2fd4:  mov    %ecx,%esi
08620854 +0x2fd6:  cmpb   $0x0,-0xde9d(%ebp)
0862085b +0x2fdd:  je     08620886 <+0x3008>
0862085d +0x2fdf:  jmp    08620878 <+0x2ffa>
0862085f +0x2fe1:  cmpb   $0x0,-0xde9c(%ebp)
08620866 +0x2fe8:  je     0862088c <+0x300e>
08620868 +0x2fea:  lea    -0x81(%ebp),%eax
0862086e +0x2ff0:  mov    %eax,(%esp)
08620871 +0x2ff3:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08620876 +0x2ff8:  jmp    0862088c <+0x300e>
08620878 +0x2ffa:  lea    -0x90(%ebp),%eax
0862087e +0x3000:  mov    %eax,(%esp)
08620881 +0x3003:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08620886 +0x3008:  mov    %esi,%ecx
08620888 +0x300a:  mov    %ebx,%eax
0862088a +0x300c:  jmp    086208a9 <+0x302b>
0862088c +0x300e:  cmpb   $0x0,-0xde9d(%ebp)
08620893 +0x3015:  je     086208ca <+0x304c>
08620895 +0x3017:  lea    -0x90(%ebp),%eax
0862089b +0x301d:  mov    %eax,(%esp)
0862089e +0x3020:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086208a3 +0x3025:  jmp    086208ca <+0x304c>
086208a5 +0x3027:  mov    %eax,%ecx
086208a7 +0x3029:  mov    %edx,%eax
086208a9 +0x302b:  mov    %eax,%ebx
086208ab +0x302d:  mov    %ecx,%esi
086208ad +0x302f:  cmpb   $0x0,-0xde99(%ebp)
086208b4 +0x3036:  je     086208c4 <+0x3046>
086208b6 +0x3038:  lea    -0x89(%ebp),%eax
086208bc +0x303e:  mov    %eax,(%esp)
086208bf +0x3041:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086208c4 +0x3046:  mov    %esi,%ecx
086208c6 +0x3048:  mov    %ebx,%eax
086208c8 +0x304a:  jmp    08620902 <+0x3084>
086208ca +0x304c:  cmpb   $0x0,-0xde99(%ebp)
086208d1 +0x3053:  je     086208e1 <+0x3063>
086208d3 +0x3055:  lea    -0x89(%ebp),%eax
086208d9 +0x305b:  mov    %eax,(%esp)
086208dc +0x305e:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
086208e1 +0x3063:  test   %bl,%bl
086208e3 +0x3065:  je     086208f7 <+0x3079>
086208e5 +0x3067:  mov    0xc(%ebp),%eax
086208e8 +0x306a:  mov    %eax,0x4(%esp)
086208ec +0x306e:  mov    0x8(%ebp),%eax
086208ef +0x3071:  mov    %eax,(%esp)
086208f2 +0x3074:  call   08624b8e <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript>  ; sync_script::CSyncScript::insert_artifact_info_to_db(STEquipmentScript*)
086208f7 +0x3079:  mov    $0x1,%ebx
086208fc +0x307e:  jmp    0862091a <+0x309c>
086208fe +0x3080:  mov    %eax,%ecx
08620900 +0x3082:  mov    %edx,%eax
08620902 +0x3084:  mov    %eax,%ebx
08620904 +0x3086:  mov    %ecx,%esi
08620906 +0x3088:  lea    -0x1b4(%ebp),%eax
0862090c +0x308e:  mov    %eax,(%esp)
0862090f +0x3091:  call   08627ca8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1306>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1306
08620914 +0x3096:  mov    %esi,%ecx
08620916 +0x3098:  mov    %ebx,%eax
08620918 +0x309a:  jmp    0862092e <+0x30b0>
0862091a +0x309c:  lea    -0x1b4(%ebp),%eax
08620920 +0x30a2:  mov    %eax,(%esp)
08620923 +0x30a5:  call   08627ca8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1306>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1306
08620928 +0x30aa:  jmp    0862094c <+0x30ce>
0862092a +0x30ac:  mov    %eax,%ecx
0862092c +0x30ae:  mov    %edx,%eax
0862092e +0x30b0:  mov    %eax,%ebx
08620930 +0x30b2:  mov    %ecx,%esi
08620932 +0x30b4:  lea    -0x164(%ebp),%eax
08620938 +0x30ba:  mov    %eax,(%esp)
0862093b +0x30bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08620940 +0x30c2:  mov    %esi,%ecx
08620942 +0x30c4:  mov    %ebx,%eax
08620944 +0x30c6:  mov    %ecx,(%esp)
08620947 +0x30c9:  call   08ae3750 <_Unwind_Resume>
0862094c +0x30ce:  lea    -0x164(%ebp),%eax
08620952 +0x30d4:  mov    %eax,(%esp)
08620955 +0x30d7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862095a +0x30dc:  mov    %ebx,%eax
0862095c +0x30de:  lea    -0xc(%ebp),%esp
0862095f +0x30e1:  add    $0x0,%esp
08620962 +0x30e4:  pop    %ebx
08620963 +0x30e5:  pop    %esi
08620964 +0x30e6:  pop    %edi
08620965 +0x30e7:  pop    %ebp
08620966 +0x30e8:  ret
08620967 +0x30e9:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_equiptment_item_to_db @ 0x861d87e

/* sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int,
   int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_equiptment_item_to_db
          (CSyncScript *this,STEquipmentScript *param_1,uint param_2,int param_3,int param_4)

{
  STEquipmentScript SVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  ushort *puVar12;
  size_t sVar13;
  undefined4 *puVar14;
  char *pcVar15;
  CStreamBuffer *pCVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  STEquipmentScript *pSVar20;
  byte bVar21;
  CStreamBuffer local_de90 [40960];
  char local_3e90 [1024];
  char local_3a90 [1024];
  char acStack_3690 [1024];
  char local_3290 [8192];
  STEquipmentScript local_1290 [448];
  EquipmentParameterInfo aEStack_10d0 [1748];
  undefined4 local_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  int local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9e0;
  char local_5fc [256];
  char local_4fc [256];
  char local_3fc [256];
  char local_2fc [256];
  char local_1fc [64];
  __normal_iterator<STAvatarAbilityVariation*,std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>>
  local_1bc [4];
  CFieldLengthChecker local_1b8 [12];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1ac [4];
  char local_1a8 [8];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_1a0 [4];
  char local_19c [16];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_18c [4];
  char local_188 [16];
  __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
  local_178 [4];
  __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
  local_174 [4];
  __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
  local_170 [4];
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  local_16c [4];
  string local_168 [6];
  char local_162 [10];
  int local_158;
  uint local_154;
  string local_150 [4];
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  local_14c [4];
  __normal_iterator local_148 [4];
  __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
  local_144 [4];
  __normal_iterator local_140 [4];
  __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
  local_13c [4];
  __normal_iterator local_138 [4];
  __normal_iterator local_134 [4];
  __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
  local_130 [4];
  __normal_iterator local_12c [4];
  __normal_iterator local_128 [4];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_124 [4];
  __normal_iterator local_120 [4];
  __normal_iterator local_11c [4];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_118 [4];
  __normal_iterator local_114 [4];
  __normal_iterator local_110 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_10c [4];
  cMyTrace local_108 [16];
  cMyTrace local_f8 [16];
  CStringMaker local_e8 [4];
  CStringMaker local_e4 [12];
  CStringMaker local_d8 [4];
  CStringMaker local_d4 [12];
  CStringMaker local_c8 [4];
  CStringMaker local_c4 [12];
  CStringMaker local_b8 [4];
  CStringMaker local_b4 [12];
  CStringMaker local_a8 [4];
  CStringMaker local_a4 [12];
  __normal_iterator local_98 [4];
  string local_94;
  allocator<char> local_8d;
  string local_8c;
  allocator<char> local_85;
  string local_84;
  allocator<char> local_7d;
  MySQL *local_7c;
  int local_78;
  uint local_74;
  int local_70;
  char local_69;
  int local_68;
  int local_64;
  EquipmentParameterInfo *local_60;
  ushort local_5a;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  bVar21 = 0;
  piVar19 = (int *)&stack0xffff2114;
  if (*this != (CSyncScript)0x1) {
    return 1;
  }
  local_7c = (MySQL *)DBMgr::GetDBHandle();
  local_154 = 0;
  local_158 = 0;
  for (local_64 = 0; local_64 < 0xb; local_64 = local_64 + 1) {
    if (param_1[local_64 + 0x38] != (STEquipmentScript)0x0) {
      local_78 = local_64;
      break;
    }
  }
  local_74 = 0;
  if (param_3 == 1) {
    local_74 = param_2;
    param_2 = 0xffffffff;
  }
  else if (param_3 == 2) {
    local_74 = param_2;
    param_2 = 0xfffffffe;
  }
  else if (param_3 == 0) {
    std::string::string(local_150,(string *)(param_1 + 0xbc));
                    /* try { // try from 0861d982 to 0861d986 has its CatchHandler @ 0861d9a0 */
    cVar8 = GetType();
    std::string::~string(local_150);
    if (cVar8 != '\x01') {
      return 0;
    }
    param_2 = *(uint *)param_1;
    std::
    map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
    ::begin(local_16c);
    while( true ) {
      std::
      map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
      ::end(local_14c);
      cVar8 = std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)local_16c
                         ,(_Rb_tree_iterator *)local_14c);
      if (cVar8 == '\0') break;
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)
                          local_16c);
      local_60 = (EquipmentParameterInfo *)(iVar11 + 4);
      STEquipmentScript::STEquipmentScript(local_1290);
                    /* try { // try from 0861da2e to 0861da6a has its CatchHandler @ 0861da6d */
      EquipmentParameterInfo::operator=(aEStack_10d0,local_60);
      piVar10 = (int *)std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::
                       operator->((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)
                                  local_16c);
      insert_equiptment_item_to_db(this,local_1290,param_2,1,*piVar10);
      STEquipmentScript::~STEquipmentScript(local_1290);
      std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)local_16c);
    }
  }
  local_162[5] = '\0';
  local_162[6] = '\0';
  local_162[7] = '\0';
  local_162[8] = '\0';
  local_162[9] = 0;
  local_70 = 0;
  iVar11 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x6cc));
  if (iVar11 != 0) {
    std::vector<unsigned_short,std::allocator<unsigned_short>>::begin();
    while( true ) {
      std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
      bVar9 = __gnu_cxx::operator!=(local_170,local_148);
      if ((!bVar9) || (4 < local_70)) break;
      puVar12 = (ushort *)
                __gnu_cxx::
                __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
                ::operator*(local_170);
      iVar11 = local_70;
      local_5a = *puVar12;
      cVar8 = GetSocketTypeCharacter(local_5a);
      local_162[iVar11 + 5] = cVar8;
      local_70 = local_70 + 1;
      __gnu_cxx::
      __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
      ::operator++(local_144,(int)local_170);
    }
  }
  iVar11 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size
                     ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                      (param_1 + 0x6c0));
  if (iVar11 != 0) {
    std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::begin();
    while( true ) {
      std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::end();
      bVar9 = __gnu_cxx::operator!=(local_174,local_140);
      if (!bVar9) break;
      puVar14 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
                ::operator*(local_174);
      local_9fc = *puVar14;
      local_9f8 = puVar14[1];
      local_9f4 = puVar14[2];
      local_9f0 = puVar14[3];
      local_9ec = puVar14[4];
      local_9e8 = puVar14[5];
      local_9e4 = puVar14[6];
      local_9e0 = puVar14[7];
      if (0 < (int)puVar14[4]) {
        local_58 = 0;
        for (; (iVar11 = local_70, local_58 < local_9ec && (local_70 < 5)); local_70 = local_70 + 1)
        {
          cVar8 = GetSocketTypeCharacter(*(ushort *)((int)&local_9f8 + (local_58 + 8) * 2));
          local_162[iVar11 + 5] = cVar8;
          local_58 = local_58 + 1;
        }
      }
      __gnu_cxx::
      __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
      ::operator++(local_13c,(int)local_174);
    }
  }
  pcVar15 = local_1fc;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  iVar11 = std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::size
                     ((vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>> *)
                      (param_1 + 0x768));
  if (iVar11 != 0) {
    local_54 = 0;
    std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::begin();
    __gnu_cxx::
    __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
    ::__normal_iterator<ENUM_EQUIPMENTTYPE*>(local_178,local_138);
    while( true ) {
      std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::end();
      bVar9 = __gnu_cxx::operator!=(local_178,local_134);
      if (!bVar9) break;
      puVar14 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
                ::operator*(local_178);
      local_50 = *puVar14;
      local_188[8] = '\0';
      local_188[9] = '\0';
      local_188[10] = '\0';
      local_188[0xb] = '\0';
      local_188[0xc] = '\0';
      local_188[0xd] = '\0';
      local_188[0xe] = '\0';
      local_188[0xf] = '\0';
      if (local_54 == 0) {
        sprintf(local_188 + 8,"%d");
      }
      else {
        sprintf(local_188 + 8,"*%d");
      }
      strcat(local_1fc,local_188 + 8);
      __gnu_cxx::
      __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
      ::operator++(local_130,(int)local_178);
      local_54 = local_54 + 1;
    }
  }
  pcVar15 = local_2fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = local_3fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = local_4fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = local_5fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  local_69 = '\0';
  for (local_4c = 0; local_4c < 0xb; local_4c = local_4c + 1) {
    if (param_1[local_4c + 0x38] != (STEquipmentScript)0x0) {
      local_48 = (vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)
                 STEquipmentScript::getAniInfo();
      if (local_48 == (vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)0x0)
      break;
      if ((((*(int *)(local_48 + 0x30) != -1) || (*(int *)(local_48 + 0x34) != -1)) ||
          (*(int *)(local_48 + 0xc) != -1)) || (*(int *)(local_48 + 0x10) != -1)) {
        if (local_48[0x14] == (vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>)0x0
           ) {
          if ((*(int *)(local_48 + 0xc) != -1) || (*(int *)(local_48 + 0x10) != -1)) {
            pCVar16 = local_de90;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)pCVar16 = 0;
              pCVar16 = pCVar16 + ((uint)bVar21 * -2 + 1) * 4;
            }
            sprintf((char *)local_de90,"%02d%02d");
            if (local_69 != '\0') {
              local_1a8[0] = '\0';
              local_1a8[1] = '\0';
              local_1a8[2] = '\0';
              local_1a8[3] = '\0';
              local_1a8[4] = '\0';
              local_1a8[5] = '\0';
              local_1a8[6] = '\0';
              local_1a8[7] = '\0';
              sprintf(local_1a8,"*%d");
              strcat((char *)local_de90,local_1a8);
            }
            local_19c[0] = '\0';
            local_19c[1] = '\0';
            local_19c[2] = '\0';
            local_19c[3] = '\0';
            local_19c[4] = '\0';
            local_19c[5] = '\0';
            local_19c[6] = '\0';
            local_19c[7] = '\0';
            std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::size(local_48);
            sprintf(local_19c,"*%d");
            strcat((char *)local_de90,local_19c);
            std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::begin();
            __gnu_cxx::
            __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
            ::__normal_iterator<STEquipmentAniScript*>(local_1a0,local_120);
            while( true ) {
              std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::end();
              bVar9 = __gnu_cxx::operator!=(local_1a0,local_11c);
              if (!bVar9) break;
              pSVar20 = local_1290;
              for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
                *(undefined4 *)pSVar20 = 0;
                pSVar20 = pSVar20 + ((uint)bVar21 * -2 + 1) * 4;
              }
              puVar14 = &local_9fc;
              for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar14 = 0;
                puVar14 = puVar14 + (uint)bVar21 * -2 + 1;
              }
              local_38 = __gnu_cxx::
                         __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
                         ::operator*(local_1a0);
              strcat((char *)local_de90,"*");
              pcVar15 = (char *)std::string::c_str((string *)(local_38 + 0x60));
              strcpy((char *)local_1290,pcVar15);
              local_34 = 0;
              local_30 = 0;
              while (sVar13 = strlen((char *)local_1290), local_30 < sVar13) {
                if (local_1290[local_30] != (STEquipmentScript)0x5f) {
                  *(STEquipmentScript *)((int)&local_9fc + local_34) = local_1290[local_30];
                  local_34 = local_34 + 1;
                }
                local_30 = local_30 + 1;
              }
              strcat((char *)local_de90,(char *)&local_9fc);
              __gnu_cxx::
              __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
              ::operator++(local_118,(int)local_1a0);
            }
            if (local_69 == '\x01') {
              strcpy(local_4fc,(char *)local_de90);
            }
            else {
              strcpy(local_2fc,(char *)local_de90);
              local_69 = '\x01';
            }
          }
        }
        else if ((*(int *)(local_48 + 0x30) != -1) || (*(int *)(local_48 + 0x34) != -1)) {
          puVar14 = &local_9fc;
          for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + (uint)bVar21 * -2 + 1;
          }
          sprintf((char *)&local_9fc,"%02d%02d");
          if (local_69 != '\0') {
            local_19c[8] = '\0';
            local_19c[9] = '\0';
            local_19c[10] = '\0';
            local_19c[0xb] = '\0';
            local_19c[0xc] = '\0';
            local_19c[0xd] = '\0';
            local_19c[0xe] = '\0';
            local_19c[0xf] = '\0';
            sprintf(local_19c + 8,"*%d");
            strcat((char *)&local_9fc,local_19c + 8);
          }
          local_188[0] = '\0';
          local_188[1] = '\0';
          local_188[2] = '\0';
          local_188[3] = '\0';
          local_188[4] = '\0';
          local_188[5] = '\0';
          local_188[6] = '\0';
          local_188[7] = '\0';
          std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::size
                    (local_48 + 0x18);
          sprintf(local_188,"*%d");
          strcat((char *)&local_9fc,local_188);
          std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::begin();
          __gnu_cxx::
          __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
          ::__normal_iterator<STEquipmentAniScript*>(local_18c,local_12c);
          while( true ) {
            std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::end();
            bVar9 = __gnu_cxx::operator!=(local_18c,local_128);
            if (!bVar9) break;
            pSVar20 = local_1290;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)pSVar20 = 0;
              pSVar20 = pSVar20 + ((uint)bVar21 * -2 + 1) * 4;
            }
            pCVar16 = local_de90;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)pCVar16 = 0;
              pCVar16 = pCVar16 + ((uint)bVar21 * -2 + 1) * 4;
            }
            local_44 = __gnu_cxx::
                       __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
                       ::operator*(local_18c);
            strcat((char *)&local_9fc,"*");
            pcVar15 = (char *)std::string::c_str((string *)(local_44 + 0x60));
            strcpy((char *)local_1290,pcVar15);
            local_40 = 0;
            local_3c = 0;
            while (sVar13 = strlen((char *)local_1290), local_3c < sVar13) {
              if (local_1290[local_3c] != (STEquipmentScript)0x5f) {
                *(STEquipmentScript *)(local_de90 + local_40) = local_1290[local_3c];
                local_40 = local_40 + 1;
              }
              local_3c = local_3c + 1;
            }
            strcat((char *)&local_9fc,(char *)local_de90);
            __gnu_cxx::
            __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
            ::operator++(local_124,(int)local_18c);
          }
          if (local_69 == '\x01') {
            strcpy(local_5fc,(char *)&local_9fc);
          }
          else {
            strcpy(local_3fc,(char *)&local_9fc);
            local_69 = '\x01';
          }
        }
      }
    }
  }
  local_162[0] = '\0';
  local_162[1] = '\0';
  local_162[2] = '\0';
  local_162[3] = '\0';
  local_162[4] = 0;
  cVar8 = std::vector<int,std::allocator<int>>::empty();
  if (cVar8 != '\x01') {
    local_2c = 0;
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_1ac,local_114);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar9 = __gnu_cxx::operator!=(local_1ac,local_110);
      if ((!bVar9) || (4 < local_2c)) break;
      puVar14 = (undefined4 *)
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator*(local_1ac);
      local_28 = *puVar14;
      local_162[local_2c] = (char)local_28 + '0';
      local_2c = local_2c + 1;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_10c,(int)local_1ac);
    }
  }
  memset(local_3e90,0,0x2c00);
  local_68 = 4;
  std::string::string(local_168);
                    /* try { // try from 0861e63d to 0861f4a5 has its CatchHandler @ 0862092a */
  iVar11 = std::string::length((string *)(param_1 + 0xb4));
  if (iVar11 == 0) {
    std::string::operator=(local_168,(string *)(param_1 + 0x6a4));
  }
  else {
    std::string::operator=(local_168,(string *)(param_1 + 0xb4));
  }
  puVar14 = &local_9fc;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + (uint)bVar21 * -2 + 1;
  }
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  cVar8 = CodePage::script2Database(pcVar15,(char *)&local_9fc);
  if (cVar8 != '\x01') {
    std::string::c_str((string *)(param_1 + 0xac));
    CodePage::database();
    CodePage::script();
    cMyTrace::cMyTrace(local_108,
                       "bool sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)"
                       ,0x398,5);
    cMyTrace::operator()(local_108,"Error!!! %s->%s [%s][%s][%d]");
    uVar18 = 0;
    piVar19 = (int *)&stack0xffff2114;
    goto LAB_0862094c;
  }
  pSVar20 = local_1290;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pSVar20 = 0;
    pSVar20 = pSVar20 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = (char *)std::string::c_str(local_168);
  cVar8 = CodePage::script2Database(pcVar15,(char *)local_1290);
  if (cVar8 != '\x01') {
    std::string::c_str((string *)(param_1 + 0xb4));
    CodePage::database();
    CodePage::script();
    cMyTrace::cMyTrace(local_f8,
                       "bool sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)"
                       ,0x39f,5);
    cMyTrace::operator()(local_f8,"Error!!! %s->%s [%s][%s][%d]");
    uVar18 = 0;
    goto LAB_0862094c;
  }
  CStreamBuffer::CStreamBuffer(local_de90);
  CStreamBuffer::operator<<(local_de90,param_2);
  pcVar15 = (char *)GetEscapeString(local_7c,(char *)&local_9fc,local_3e90);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0xb0));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3a90);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pcVar15 = (char *)GetEscapeString(local_7c,(char *)local_1290,acStack_3690);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_158;
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  uVar7 = local_154;
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,uVar7);
  pcVar15 = (char *)GetUsableCharacter(this,param_1);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pcVar15 = (char *)GetAttachType(this,*(int *)(param_1 + 8));
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x5c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x184);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0xc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x10);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x34);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x14);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x18);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1bc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x68);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1c4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1cc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1d4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1d8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1dc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1e4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x214);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x21c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x224);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x22c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x270);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x274);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x278);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x27c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x280);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x284);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x288);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x28c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x290);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x294);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x298);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x29c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2a0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2a4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2a8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2ac);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2b0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 700);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2b4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2b8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2cc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2d0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2d4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2dc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2e8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2ec);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2f0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2f4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pcVar15 = (char *)GetAttackElement(this,(EquipmentParameterInfo *)(param_1 + 0x1c0));
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x304);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  fVar2 = *(float *)(param_1 + 0x308);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x30c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x3e0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x3e4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  SVar1 = param_1[0x3fc];
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,(uint)(byte)SVar1);
  SVar1 = param_1[0x3fd];
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,(uint)(byte)SVar1);
  fVar2 = *(float *)(param_1 + 0x2f8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  fVar2 = *(float *)(param_1 + 1000);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  SVar1 = param_1[0x3ec];
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,(uint)(byte)SVar1);
  CStringMaker::CStringMaker(local_e4);
                    /* try { // try from 0861f4bc to 0861f50d has its CatchHandler @ 0861f581 */
  std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::end();
  std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<LevelUpSkill*,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861f51a to 0861f552 has its CatchHandler @ 0861f555 */
  pcVar15 = (char *)CStringMaker::c_str(local_e8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 0861f57a to 0861f57e has its CatchHandler @ 0861f581 */
  CStringMaker::~CStringMaker(local_e8);
                    /* try { // try from 0861f5a9 to 0861fab2 has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_e4);
  iVar11 = std::string::compare((string *)(param_1 + 0x668),"");
  if ((((iVar11 == 0) &&
       (iVar11 = std::vector<int,std::allocator<int>>::size
                           ((vector<int,std::allocator<int>> *)(param_1 + 0x66c)), iVar11 == 0)) &&
      (*(int *)(param_1 + 0x6a0) == -1)) && (*(int *)(param_1 + 0x798) == -1)) {
    pcVar15 = "n";
  }
  else {
    pcVar15 = "y";
  }
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_162 + 5);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x43c));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0xb8));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x440);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x24);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x184);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x28);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,iVar17);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,",");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,iVar11);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x234);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x238);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  fVar2 = *(float *)(param_1 + 0x23c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x240);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x244);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  fVar2 = *(float *)(param_1 + 0x248);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x448);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x44c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x450);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x454);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x458);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2ac);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x444);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  CStringMaker::CStringMaker(local_d4);
                    /* try { // try from 0861fac9 to 0861fb1a has its CatchHandler @ 0861fb8e */
  std::vector<ItemAuraInfo,std::allocator<ItemAuraInfo>>::end();
  std::vector<ItemAuraInfo,std::allocator<ItemAuraInfo>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<ItemAuraInfo*,std::vector<ItemAuraInfo,std::allocator<ItemAuraInfo>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861fb27 to 0861fb5f has its CatchHandler @ 0861fb62 */
  pcVar15 = (char *)CStringMaker::c_str(local_d8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 0861fb87 to 0861fb8b has its CatchHandler @ 0861fb8e */
  CStringMaker::~CStringMaker(local_d8);
                    /* try { // try from 0861fbb6 to 0861fc5e has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_d4);
  fVar2 = *(float *)(param_1 + 0x2fc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x668));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  CStringMaker::CStringMaker(local_c4);
                    /* try { // try from 0861fc75 to 0861fcc6 has its CatchHandler @ 0861fd3a */
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861fcd3 to 0861fd0b has its CatchHandler @ 0861fd0e */
  pcVar15 = (char *)CStringMaker::c_str(local_c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 0861fd33 to 0861fd37 has its CatchHandler @ 0861fd3a */
  CStringMaker::~CStringMaker(local_c8);
                    /* try { // try from 0861fd62 to 0861ff83 has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_c4);
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x6b0));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x6b4));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x438));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x43c));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x798);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_1fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  CStringMaker::CStringMaker(local_b4);
                    /* try { // try from 0861ff9a to 0861ffeb has its CatchHandler @ 0862005f */
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::end();
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<EquipmentSkillDataUp*,std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861fff8 to 08620030 has its CatchHandler @ 08620033 */
  pcVar15 = (char *)CStringMaker::c_str(local_b8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 08620058 to 0862005c has its CatchHandler @ 0862005f */
  CStringMaker::~CStringMaker(local_b8);
                    /* try { // try from 08620087 to 0862030a has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_b4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,local_74);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,param_4);
  iVar11 = *(int *)(param_1 + 0x6a0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_2fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_3fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_4fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_5fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_162);
  CStreamBuffer::operator<<(pCVar16,"\'");
  fVar2 = *(float *)(param_1 + 0x434);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x70);
  iVar17 = std::string::length((string *)(param_1 + 0x6c));
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x6c));
  pcVar15 = (char *)GetURL(this,pcVar15,iVar17,iVar11);
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3290);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0xc4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  CStringMaker::CStringMaker(local_a4);
                    /* try { // try from 08620321 to 08620372 has its CatchHandler @ 086203e6 */
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
            ();
  piVar19 = (int *)&stack0xffff2100;
                    /* try { // try from 0862037f to 086203b7 has its CatchHandler @ 086203ba */
  pcVar15 = (char *)CStringMaker::c_str(local_a8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 086203df to 086203e3 has its CatchHandler @ 086203e6 */
  CStringMaker::~CStringMaker(local_a8);
                    /* try { // try from 0862040e to 0862049b has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_a4);
  fVar2 = *(float *)(param_1 + 0x1c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  fVar2 = *(float *)(param_1 + 0x1d0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  CStreamBuffer::c_str(local_de90);
  MySQL::set_query(local_7c,
                   "inSert into dnf_item_info(it_no, it_name, it_eng_name, it_explain, master_type, sub_type, job, class, revert, level, skill, create_ratio, rarity, weight, price, cash, medal, durability, cooltime, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all, ref_slow, ref_freeze, ref_poison, ref_stun, ref_cus, ref_blind, ref_lite, ref_ston, ref_sleep, ref_deekement, ref_deadlystrike, ref_bleeding, ref_confuse, ref_hold, ref_all_stat, ref_pierce, ref_stuck, inven_max, hp_regenrate, mp_regenrate, mov_speed, att_speed, quest, hit_recovery, jump, att_element, att_active_status, att_active_status_ratio, att_active_status_pow, att_backforce, att_upforce, att_hp_drain, att_mp_drain, criticalhit_rate, stuck_rate, att_defenseIgnore, skill_levelup, set_type, jewel_type, detail_explain, flavor_text, anti_evil, value, required_skill, need_material, physical_absolute_damage, physical_damage_reduce, physical_absolute_defense, magical_absolute_damage, magical_damage_reduce, magical_absolute_defense, fire_attack, water_attack, dark_attack, light_attack, all_attack, weapon_break_resistance, armor_break_resistance, all_activestatus_resistance, rigidity, item_aura, magical_critical_hit, set_name, set_item, fullset_basic_explain, fullset_detail_explain, parameter_basic_explain, parameter_detail_explain, part_set_index, hide_equipment, skill_data_up, it_set_no, db_piece_count, set_item_master, ani_variation, ani_variation_expand, ani_variation2, ani_variation_expand2, hide_growtype_avatar, room_list_move_speed_rate, url, icon_mark_number, extra_icon_idx_list, hp_max_rate, mp_max_rate) values(%s)"
                  );
  CFieldLengthChecker::CFieldLengthChecker(local_1b8);
  pcVar15 = (char *)MySQL::GetQueryString(local_7c);
                    /* try { // try from 086204b4 to 0862062a has its CatchHandler @ 086208fe */
  CFieldLengthChecker::AddField(local_1b8,pcVar15);
  cVar8 = MySQL::exec(local_7c,true);
  if (cVar8 == '\x01') {
    cVar8 = std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::empty();
    if (cVar8 != '\x01') {
      local_24 = 0;
      std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::begin();
      while( true ) {
        std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::end();
        bVar9 = __gnu_cxx::operator!=(local_1bc,local_98);
        if (!bVar9) break;
        local_20 = __gnu_cxx::
                   __normal_iterator<STAvatarAbilityVariation*,std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>>
                   ::operator*(local_1bc);
        local_24 = local_24 + 1;
        MySQL::set_query(local_7c,
                         "inSert into avatar_select_ability(it_no, ability_no, ability_type, rate_change, value, job, skill_index, skill_level) values(%d,%d,%d,%d,%f,%d,%d,%d)"
                        );
        cVar8 = MySQL::exec(local_7c,true);
        if (cVar8 != '\x01') {
          uVar18 = 0;
          goto LAB_0862091a;
        }
        __gnu_cxx::
        __normal_iterator<STAvatarAbilityVariation*,std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>>
        ::operator++(local_1bc);
      }
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar9 = false;
    std::allocator<char>::allocator();
                    /* try { // try from 08620684 to 08620767 has its CatchHandler @ 0862078f */
    std::string::string((string *)&local_94,"artifact red",(allocator *)&local_8d);
    iVar11 = std::
             map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
             ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                           *)(this + 0x1c),&local_94);
    if (*(ushort *)(iVar11 + 4) == local_154) {
LAB_08620779:
      bVar3 = true;
    }
    else {
      std::allocator<char>::allocator();
      bVar6 = true;
      std::string::string((string *)&local_8c,"artifact blue",(allocator *)&local_85);
      bVar5 = true;
      iVar11 = std::
               map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
               ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                             *)(this + 0x1c),&local_8c);
      if (*(ushort *)(iVar11 + 4) == local_154) goto LAB_08620779;
      std::allocator<char>::allocator();
      bVar4 = true;
      std::string::string((string *)&local_84,"artifact green",(allocator *)&local_7d);
      bVar9 = true;
      iVar11 = std::
               map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
               ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                             *)(this + 0x1c),&local_84);
      if (*(ushort *)(iVar11 + 4) == local_154) goto LAB_08620779;
      bVar3 = false;
    }
    if (bVar9) {
                    /* try { // try from 086207b4 to 086207b8 has its CatchHandler @ 086207bb */
      std::string::~string((string *)&local_84);
    }
    if (bVar4) {
      std::allocator<char>::~allocator(&local_7d);
    }
    if (bVar5) {
                    /* try { // try from 08620826 to 0862082a has its CatchHandler @ 0862082d */
      std::string::~string((string *)&local_8c);
    }
    if (bVar6) {
      std::allocator<char>::~allocator(&local_85);
    }
                    /* try { // try from 0862089e to 086208a2 has its CatchHandler @ 086208a5 */
    std::string::~string((string *)&local_94);
    std::allocator<char>::~allocator(&local_8d);
    if (bVar3) {
                    /* try { // try from 086208f2 to 086208f6 has its CatchHandler @ 086208fe */
      insert_artifact_info_to_db(this,param_1);
    }
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
LAB_0862091a:
                    /* try { // try from 08620923 to 08620927 has its CatchHandler @ 0862092a */
  CFieldLengthChecker::~CFieldLengthChecker(local_1b8);
LAB_0862094c:
  *piVar19 = (int)local_168;
  piVar19[-1] = 0x862095a;
  std::string::~string((string *)*piVar19);
  return uVar18;
}
```
