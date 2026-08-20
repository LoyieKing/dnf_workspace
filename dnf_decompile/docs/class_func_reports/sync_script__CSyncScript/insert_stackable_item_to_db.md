# insert_stackable_item_to_db

`_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript`

`sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08620968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08620968  _ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript
#           sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)
# range [0x08620968, 0x08622373]
08620968 +0x0000:  push   %ebp
08620969 +0x0001:  mov    %esp,%ebp
0862096b +0x0003:  push   %edi
0862096c +0x0004:  push   %esi
0862096d +0x0005:  push   %ebx
0862096e +0x0006:  sub    $0xb88c,%esp
08620974 +0x000c:  mov    0x8(%ebp),%eax
08620977 +0x000f:  movzbl (%eax),%eax
0862097a +0x0012:  xor    $0x1,%eax
0862097d +0x0015:  test   %al,%al
0862097f +0x0017:  je     0862098b <+0x23>
08620981 +0x0019:  mov    $0x1,%ebx
08620986 +0x001e:  jmp    08622366 <+0x19fe>
0862098b +0x0023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08620990 +0x0028:  movl   $0x0,0x8(%esp)
08620998 +0x0030:  movl   $0x5,0x4(%esp)
086209a0 +0x0038:  mov    %eax,(%esp)
086209a3 +0x003b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086209a8 +0x0040:  mov    %eax,-0x24(%ebp)
086209ab +0x0043:  mov    0xc(%ebp),%eax
086209ae +0x0046:  add    $0xbc,%eax
086209b3 +0x004b:  mov    %eax,0x4(%esp)
086209b7 +0x004f:  lea    -0x5c(%ebp),%eax
086209ba +0x0052:  mov    %eax,(%esp)
086209bd +0x0055:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
086209c2 +0x005a:  movl   $0x0,0x18(%esp)
086209ca +0x0062:  lea    -0x60(%ebp),%eax
086209cd +0x0065:  mov    %eax,0x14(%esp)
086209d1 +0x0069:  lea    -0x64(%ebp),%eax
086209d4 +0x006c:  mov    %eax,0x10(%esp)
086209d8 +0x0070:  movl   $0x0,0xc(%esp)
086209e0 +0x0078:  movl   $0x0,0x8(%esp)
086209e8 +0x0080:  lea    -0x5c(%ebp),%eax
086209eb +0x0083:  mov    %eax,0x4(%esp)
086209ef +0x0087:  mov    0x8(%ebp),%eax
086209f2 +0x008a:  mov    %eax,(%esp)
086209f5 +0x008d:  call   0861cf0a <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b>  ; sync_script::CSyncScript::GetType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, ENUM_CHARACTERJOB, int, int&, int&, bool)
086209fa +0x0092:  mov    %eax,%ebx
086209fc +0x0094:  xor    $0x1,%ebx
086209ff +0x0097:  lea    -0x5c(%ebp),%eax
08620a02 +0x009a:  mov    %eax,(%esp)
08620a05 +0x009d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08620a0a +0x00a2:  test   %bl,%bl
08620a0c +0x00a4:  jne    08620a2b <+0xc3>
08620a0e +0x00a6:  jmp    08620a35 <+0xcd>
08620a10 +0x00a8:  mov    %edx,%ebx
08620a12 +0x00aa:  mov    %eax,%esi
08620a14 +0x00ac:  lea    -0x5c(%ebp),%eax
08620a17 +0x00af:  mov    %eax,(%esp)
08620a1a +0x00b2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08620a1f +0x00b7:  mov    %esi,%eax
08620a21 +0x00b9:  mov    %ebx,%edx
08620a23 +0x00bb:  mov    %eax,(%esp)
08620a26 +0x00be:  call   08ae3750 <_Unwind_Resume>
08620a2b +0x00c3:  mov    $0x0,%ebx
08620a30 +0x00c8:  jmp    08622366 <+0x19fe>
08620a35 +0x00cd:  lea    -0xb870(%ebp),%eax
08620a3b +0x00d3:  mov    %eax,(%esp)
08620a3e +0x00d6:  call   086269be <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1c
08620a43 +0x00db:  lea    -0x1870(%ebp),%ebx
08620a49 +0x00e1:  mov    $0x0,%eax
08620a4e +0x00e6:  mov    $0x400,%edx
08620a53 +0x00eb:  mov    %ebx,%edi
08620a55 +0x00ed:  mov    %edx,%ecx
08620a57 +0x00ef:  rep stos %eax,%es:(%edi)
08620a59 +0x00f1:  lea    -0x470(%ebp),%ebx
08620a5f +0x00f7:  mov    $0x0,%eax
08620a64 +0x00fc:  mov    $0x100,%edx
08620a69 +0x0101:  mov    %ebx,%edi
08620a6b +0x0103:  mov    %edx,%ecx
08620a6d +0x0105:  rep stos %eax,%es:(%edi)
08620a6f +0x0107:  mov    0xc(%ebp),%eax
08620a72 +0x010a:  add    $0xac,%eax
08620a77 +0x010f:  mov    %eax,(%esp)
08620a7a +0x0112:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08620a7f +0x0117:  lea    -0x470(%ebp),%edx
08620a85 +0x011d:  mov    %edx,0x4(%esp)
08620a89 +0x0121:  mov    %eax,(%esp)
08620a8c +0x0124:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08620a91 +0x0129:  xor    $0x1,%eax
08620a94 +0x012c:  test   %al,%al
08620a96 +0x012e:  je     08620b14 <+0x1ac>
08620a98 +0x0130:  mov    0xc(%ebp),%eax
08620a9b +0x0133:  add    $0xac,%eax
08620aa0 +0x0138:  mov    %eax,(%esp)
08620aa3 +0x013b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08620aa8 +0x0140:  mov    %eax,%edi
08620aaa +0x0142:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08620aaf +0x0147:  mov    %eax,%esi
08620ab1 +0x0149:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08620ab6 +0x014e:  mov    %eax,%ebx
08620ab8 +0x0150:  movl   $0x5,0xc(%esp)
08620ac0 +0x0158:  movl   $0x523,0x8(%esp)
08620ac8 +0x0160:  movl   $&_ZZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScriptE19__PRETTY_FUNCTION__,0x4(%esp)
08620ad0 +0x0168:  lea    -0x58(%ebp),%eax
08620ad3 +0x016b:  mov    %eax,(%esp)
08620ad6 +0x016e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08620adb +0x0173:  movl   $0x523,0x18(%esp)
08620ae3 +0x017b:  movl   $&_ZZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScriptE19__PRETTY_FUNCTION__,0x14(%esp)
08620aeb +0x0183:  mov    %edi,0x10(%esp)
08620aef +0x0187:  mov    %esi,0xc(%esp)
08620af3 +0x018b:  mov    %ebx,0x8(%esp)
08620af7 +0x018f:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08620aff +0x0197:  lea    -0x58(%ebp),%eax
08620b02 +0x019a:  mov    %eax,(%esp)
08620b05 +0x019d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08620b0a +0x01a2:  mov    $0x0,%ebx
08620b0f +0x01a7:  jmp    08622366 <+0x19fe>
08620b14 +0x01ac:  lea    -0x870(%ebp),%ebx
08620b1a +0x01b2:  mov    $0x0,%eax
08620b1f +0x01b7:  mov    $0x100,%edx
08620b24 +0x01bc:  mov    %ebx,%edi
08620b26 +0x01be:  mov    %edx,%ecx
08620b28 +0x01c0:  rep stos %eax,%es:(%edi)
08620b2a +0x01c2:  mov    0xc(%ebp),%eax
08620b2d +0x01c5:  add    $0xb4,%eax
08620b32 +0x01ca:  mov    %eax,(%esp)
08620b35 +0x01cd:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08620b3a +0x01d2:  lea    -0x870(%ebp),%edx
08620b40 +0x01d8:  mov    %edx,0x4(%esp)
08620b44 +0x01dc:  mov    %eax,(%esp)
08620b47 +0x01df:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08620b4c +0x01e4:  xor    $0x1,%eax
08620b4f +0x01e7:  test   %al,%al
08620b51 +0x01e9:  je     08620bcf <+0x267>
08620b53 +0x01eb:  mov    0xc(%ebp),%eax
08620b56 +0x01ee:  add    $0xb4,%eax
08620b5b +0x01f3:  mov    %eax,(%esp)
08620b5e +0x01f6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08620b63 +0x01fb:  mov    %eax,%edi
08620b65 +0x01fd:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08620b6a +0x0202:  mov    %eax,%esi
08620b6c +0x0204:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08620b71 +0x0209:  mov    %eax,%ebx
08620b73 +0x020b:  movl   $0x5,0xc(%esp)
08620b7b +0x0213:  movl   $0x52a,0x8(%esp)
08620b83 +0x021b:  movl   $&_ZZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScriptE19__PRETTY_FUNCTION__,0x4(%esp)
08620b8b +0x0223:  lea    -0x48(%ebp),%eax
08620b8e +0x0226:  mov    %eax,(%esp)
08620b91 +0x0229:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08620b96 +0x022e:  movl   $0x52a,0x18(%esp)
08620b9e +0x0236:  movl   $&_ZZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScriptE19__PRETTY_FUNCTION__,0x14(%esp)
08620ba6 +0x023e:  mov    %edi,0x10(%esp)
08620baa +0x0242:  mov    %esi,0xc(%esp)
08620bae +0x0246:  mov    %ebx,0x8(%esp)
08620bb2 +0x024a:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08620bba +0x0252:  lea    -0x48(%ebp),%eax
08620bbd +0x0255:  mov    %eax,(%esp)
08620bc0 +0x0258:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08620bc5 +0x025d:  mov    $0x0,%ebx
08620bca +0x0262:  jmp    08622366 <+0x19fe>
08620bcf +0x0267:  mov    0xc(%ebp),%eax
08620bd2 +0x026a:  mov    (%eax),%eax
08620bd4 +0x026c:  mov    %eax,0x4(%esp)
08620bd8 +0x0270:  lea    -0xb870(%ebp),%eax
08620bde +0x0276:  mov    %eax,(%esp)
08620be1 +0x0279:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620be6 +0x027e:  lea    -0x1870(%ebp),%eax
08620bec +0x0284:  mov    %eax,0x8(%esp)
08620bf0 +0x0288:  lea    -0x470(%ebp),%eax
08620bf6 +0x028e:  mov    %eax,0x4(%esp)
08620bfa +0x0292:  mov    -0x24(%ebp),%eax
08620bfd +0x0295:  mov    %eax,(%esp)
08620c00 +0x0298:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08620c05 +0x029d:  mov    %eax,%ebx
08620c07 +0x029f:  movl   $", '",0x4(%esp)
08620c0f +0x02a7:  lea    -0xb870(%ebp),%eax
08620c15 +0x02ad:  mov    %eax,(%esp)
08620c18 +0x02b0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620c1d +0x02b5:  mov    %ebx,0x4(%esp)
08620c21 +0x02b9:  mov    %eax,(%esp)
08620c24 +0x02bc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620c29 +0x02c1:  movl   $"'",0x4(%esp)
08620c31 +0x02c9:  mov    %eax,(%esp)
08620c34 +0x02cc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620c39 +0x02d1:  lea    -0x1870(%ebp),%eax
08620c3f +0x02d7:  lea    0x400(%eax),%ebx
08620c45 +0x02dd:  mov    0xc(%ebp),%eax
08620c48 +0x02e0:  add    $0xb0,%eax
08620c4d +0x02e5:  mov    %eax,(%esp)
08620c50 +0x02e8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08620c55 +0x02ed:  mov    %ebx,0x8(%esp)
08620c59 +0x02f1:  mov    %eax,0x4(%esp)
08620c5d +0x02f5:  mov    -0x24(%ebp),%eax
08620c60 +0x02f8:  mov    %eax,(%esp)
08620c63 +0x02fb:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08620c68 +0x0300:  mov    %eax,%ebx
08620c6a +0x0302:  movl   $", '",0x4(%esp)
08620c72 +0x030a:  lea    -0xb870(%ebp),%eax
08620c78 +0x0310:  mov    %eax,(%esp)
08620c7b +0x0313:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620c80 +0x0318:  mov    %ebx,0x4(%esp)
08620c84 +0x031c:  mov    %eax,(%esp)
08620c87 +0x031f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620c8c +0x0324:  movl   $"'",0x4(%esp)
08620c94 +0x032c:  mov    %eax,(%esp)
08620c97 +0x032f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620c9c +0x0334:  lea    -0x1870(%ebp),%eax
08620ca2 +0x033a:  add    $0x800,%eax
08620ca7 +0x033f:  mov    %eax,0x8(%esp)
08620cab +0x0343:  lea    -0x870(%ebp),%eax
08620cb1 +0x0349:  mov    %eax,0x4(%esp)
08620cb5 +0x034d:  mov    -0x24(%ebp),%eax
08620cb8 +0x0350:  mov    %eax,(%esp)
08620cbb +0x0353:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08620cc0 +0x0358:  mov    %eax,%ebx
08620cc2 +0x035a:  movl   $", '",0x4(%esp)
08620cca +0x0362:  lea    -0xb870(%ebp),%eax
08620cd0 +0x0368:  mov    %eax,(%esp)
08620cd3 +0x036b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620cd8 +0x0370:  mov    %ebx,0x4(%esp)
08620cdc +0x0374:  mov    %eax,(%esp)
08620cdf +0x0377:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620ce4 +0x037c:  movl   $"'",0x4(%esp)
08620cec +0x0384:  mov    %eax,(%esp)
08620cef +0x0387:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620cf4 +0x038c:  mov    -0x64(%ebp),%ebx
08620cf7 +0x038f:  movl   $", ",0x4(%esp)
08620cff +0x0397:  lea    -0xb870(%ebp),%eax
08620d05 +0x039d:  mov    %eax,(%esp)
08620d08 +0x03a0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620d0d +0x03a5:  mov    %ebx,0x4(%esp)
08620d11 +0x03a9:  mov    %eax,(%esp)
08620d14 +0x03ac:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620d19 +0x03b1:  mov    -0x60(%ebp),%ebx
08620d1c +0x03b4:  movl   $", ",0x4(%esp)
08620d24 +0x03bc:  lea    -0xb870(%ebp),%eax
08620d2a +0x03c2:  mov    %eax,(%esp)
08620d2d +0x03c5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620d32 +0x03ca:  mov    %ebx,0x4(%esp)
08620d36 +0x03ce:  mov    %eax,(%esp)
08620d39 +0x03d1:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620d3e +0x03d6:  mov    0xc(%ebp),%eax
08620d41 +0x03d9:  mov    %eax,0x4(%esp)
08620d45 +0x03dd:  mov    0x8(%ebp),%eax
08620d48 +0x03e0:  mov    %eax,(%esp)
08620d4b +0x03e3:  call   0861d38e <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript>  ; sync_script::CSyncScript::GetUsableCharacter(STStackableScript*)
08620d50 +0x03e8:  mov    %eax,%ebx
08620d52 +0x03ea:  movl   $", '",0x4(%esp)
08620d5a +0x03f2:  lea    -0xb870(%ebp),%eax
08620d60 +0x03f8:  mov    %eax,(%esp)
08620d63 +0x03fb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620d68 +0x0400:  mov    %ebx,0x4(%esp)
08620d6c +0x0404:  mov    %eax,(%esp)
08620d6f +0x0407:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620d74 +0x040c:  movl   $"'",0x4(%esp)
08620d7c +0x0414:  mov    %eax,(%esp)
08620d7f +0x0417:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620d84 +0x041c:  mov    0xc(%ebp),%eax
08620d87 +0x041f:  mov    0x4(%eax),%ebx
08620d8a +0x0422:  movl   $", ",0x4(%esp)
08620d92 +0x042a:  lea    -0xb870(%ebp),%eax
08620d98 +0x0430:  mov    %eax,(%esp)
08620d9b +0x0433:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620da0 +0x0438:  mov    %ebx,0x4(%esp)
08620da4 +0x043c:  mov    %eax,(%esp)
08620da7 +0x043f:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620dac +0x0444:  mov    0xc(%ebp),%eax
08620daf +0x0447:  mov    0x8(%eax),%eax
08620db2 +0x044a:  mov    %eax,0x4(%esp)
08620db6 +0x044e:  mov    0x8(%ebp),%eax
08620db9 +0x0451:  mov    %eax,(%esp)
08620dbc +0x0454:  call   0861d3ec <_ZN11sync_script11CSyncScript13GetAttachTypeEi>  ; sync_script::CSyncScript::GetAttachType(int)
08620dc1 +0x0459:  mov    %eax,%ebx
08620dc3 +0x045b:  movl   $", '",0x4(%esp)
08620dcb +0x0463:  lea    -0xb870(%ebp),%eax
08620dd1 +0x0469:  mov    %eax,(%esp)
08620dd4 +0x046c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620dd9 +0x0471:  mov    %ebx,0x4(%esp)
08620ddd +0x0475:  mov    %eax,(%esp)
08620de0 +0x0478:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620de5 +0x047d:  movl   $"'",0x4(%esp)
08620ded +0x0485:  mov    %eax,(%esp)
08620df0 +0x0488:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620df5 +0x048d:  mov    0xc(%ebp),%eax
08620df8 +0x0490:  mov    0x5c(%eax),%ebx
08620dfb +0x0493:  movl   $", ",0x4(%esp)
08620e03 +0x049b:  lea    -0xb870(%ebp),%eax
08620e09 +0x04a1:  mov    %eax,(%esp)
08620e0c +0x04a4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620e11 +0x04a9:  mov    %ebx,0x4(%esp)
08620e15 +0x04ad:  mov    %eax,(%esp)
08620e18 +0x04b0:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620e1d +0x04b5:  movl   $", ",0x4(%esp)
08620e25 +0x04bd:  lea    -0xb870(%ebp),%eax
08620e2b +0x04c3:  mov    %eax,(%esp)
08620e2e +0x04c6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620e33 +0x04cb:  movl   $0x0,0x4(%esp)
08620e3b +0x04d3:  mov    %eax,(%esp)
08620e3e +0x04d6:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620e43 +0x04db:  mov    0xc(%ebp),%eax
08620e46 +0x04de:  mov    0xc(%eax),%ebx
08620e49 +0x04e1:  movl   $", ",0x4(%esp)
08620e51 +0x04e9:  lea    -0xb870(%ebp),%eax
08620e57 +0x04ef:  mov    %eax,(%esp)
08620e5a +0x04f2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620e5f +0x04f7:  mov    %ebx,0x4(%esp)
08620e63 +0x04fb:  mov    %eax,(%esp)
08620e66 +0x04fe:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620e6b +0x0503:  mov    0xc(%ebp),%eax
08620e6e +0x0506:  mov    0x10(%eax),%eax
08620e71 +0x0509:  mov    %eax,%ebx
08620e73 +0x050b:  movl   $", ",0x4(%esp)
08620e7b +0x0513:  lea    -0xb870(%ebp),%eax
08620e81 +0x0519:  mov    %eax,(%esp)
08620e84 +0x051c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620e89 +0x0521:  mov    %ebx,0x4(%esp)
08620e8d +0x0525:  mov    %eax,(%esp)
08620e90 +0x0528:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620e95 +0x052d:  mov    0xc(%ebp),%eax
08620e98 +0x0530:  mov    0x34(%eax),%ebx
08620e9b +0x0533:  movl   $", ",0x4(%esp)
08620ea3 +0x053b:  lea    -0xb870(%ebp),%eax
08620ea9 +0x0541:  mov    %eax,(%esp)
08620eac +0x0544:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620eb1 +0x0549:  mov    %ebx,0x4(%esp)
08620eb5 +0x054d:  mov    %eax,(%esp)
08620eb8 +0x0550:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620ebd +0x0555:  mov    0xc(%ebp),%eax
08620ec0 +0x0558:  mov    0x14(%eax),%ebx
08620ec3 +0x055b:  movl   $", ",0x4(%esp)
08620ecb +0x0563:  lea    -0xb870(%ebp),%eax
08620ed1 +0x0569:  mov    %eax,(%esp)
08620ed4 +0x056c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620ed9 +0x0571:  mov    %ebx,0x4(%esp)
08620edd +0x0575:  mov    %eax,(%esp)
08620ee0 +0x0578:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620ee5 +0x057d:  mov    0xc(%ebp),%eax
08620ee8 +0x0580:  mov    0x18(%eax),%ebx
08620eeb +0x0583:  movl   $", ",0x4(%esp)
08620ef3 +0x058b:  lea    -0xb870(%ebp),%eax
08620ef9 +0x0591:  mov    %eax,(%esp)
08620efc +0x0594:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620f01 +0x0599:  mov    %ebx,0x4(%esp)
08620f05 +0x059d:  mov    %eax,(%esp)
08620f08 +0x05a0:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620f0d +0x05a5:  mov    0xc(%ebp),%eax
08620f10 +0x05a8:  mov    0x1c(%eax),%ebx
08620f13 +0x05ab:  movl   $", ",0x4(%esp)
08620f1b +0x05b3:  lea    -0xb870(%ebp),%eax
08620f21 +0x05b9:  mov    %eax,(%esp)
08620f24 +0x05bc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620f29 +0x05c1:  mov    %ebx,0x4(%esp)
08620f2d +0x05c5:  mov    %eax,(%esp)
08620f30 +0x05c8:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620f35 +0x05cd:  movl   $", ",0x4(%esp)
08620f3d +0x05d5:  lea    -0xb870(%ebp),%eax
08620f43 +0x05db:  mov    %eax,(%esp)
08620f46 +0x05de:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620f4b +0x05e3:  movl   $0x0,0x4(%esp)
08620f53 +0x05eb:  mov    %eax,(%esp)
08620f56 +0x05ee:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620f5b +0x05f3:  mov    0xc(%ebp),%eax
08620f5e +0x05f6:  mov    0x68(%eax),%ebx
08620f61 +0x05f9:  movl   $", ",0x4(%esp)
08620f69 +0x0601:  lea    -0xb870(%ebp),%eax
08620f6f +0x0607:  mov    %eax,(%esp)
08620f72 +0x060a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620f77 +0x060f:  mov    %ebx,0x4(%esp)
08620f7b +0x0613:  mov    %eax,(%esp)
08620f7e +0x0616:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620f83 +0x061b:  movl   $0x13,-0x38(%ebp)
08620f8a +0x0622:  mov    0xc(%ebp),%eax
08620f8d +0x0625:  lea    0x4bc(%eax),%edx
08620f93 +0x062b:  lea    -0x38(%ebp),%eax
08620f96 +0x062e:  mov    %eax,0x4(%esp)
08620f9a +0x0632:  mov    %edx,(%esp)
08620f9d +0x0635:  call   08628bc6 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2224>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2224
08620fa2 +0x063a:  mov    (%eax),%eax
08620fa4 +0x063c:  mov    %eax,-0x20(%ebp)
08620fa7 +0x063f:  cmpl   $0x0,-0x20(%ebp)
08620fab +0x0643:  je     08621c11 <+0x12a9>
08620fb1 +0x0649:  mov    -0x20(%ebp),%eax
08620fb4 +0x064c:  mov    %eax,-0x1c(%ebp)
08620fb7 +0x064f:  mov    -0x1c(%ebp),%eax
08620fba +0x0652:  mov    0x4(%eax),%ebx
08620fbd +0x0655:  movl   $", ",0x4(%esp)
08620fc5 +0x065d:  lea    -0xb870(%ebp),%eax
08620fcb +0x0663:  mov    %eax,(%esp)
08620fce +0x0666:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620fd3 +0x066b:  mov    %ebx,0x4(%esp)
08620fd7 +0x066f:  mov    %eax,(%esp)
08620fda +0x0672:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08620fdf +0x0677:  mov    -0x1c(%ebp),%eax
08620fe2 +0x067a:  mov    0xc(%eax),%ebx
08620fe5 +0x067d:  movl   $", ",0x4(%esp)
08620fed +0x0685:  lea    -0xb870(%ebp),%eax
08620ff3 +0x068b:  mov    %eax,(%esp)
08620ff6 +0x068e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08620ffb +0x0693:  mov    %ebx,0x4(%esp)
08620fff +0x0697:  mov    %eax,(%esp)
08621002 +0x069a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621007 +0x069f:  mov    -0x1c(%ebp),%eax
0862100a +0x06a2:  mov    0x14(%eax),%ebx
0862100d +0x06a5:  movl   $", ",0x4(%esp)
08621015 +0x06ad:  lea    -0xb870(%ebp),%eax
0862101b +0x06b3:  mov    %eax,(%esp)
0862101e +0x06b6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621023 +0x06bb:  mov    %ebx,0x4(%esp)
08621027 +0x06bf:  mov    %eax,(%esp)
0862102a +0x06c2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862102f +0x06c7:  mov    -0x1c(%ebp),%eax
08621032 +0x06ca:  mov    0x18(%eax),%ebx
08621035 +0x06cd:  movl   $", ",0x4(%esp)
0862103d +0x06d5:  lea    -0xb870(%ebp),%eax
08621043 +0x06db:  mov    %eax,(%esp)
08621046 +0x06de:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862104b +0x06e3:  mov    %ebx,0x4(%esp)
0862104f +0x06e7:  mov    %eax,(%esp)
08621052 +0x06ea:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621057 +0x06ef:  mov    -0x1c(%ebp),%eax
0862105a +0x06f2:  mov    0x1c(%eax),%ebx
0862105d +0x06f5:  movl   $", ",0x4(%esp)
08621065 +0x06fd:  lea    -0xb870(%ebp),%eax
0862106b +0x0703:  mov    %eax,(%esp)
0862106e +0x0706:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621073 +0x070b:  mov    %ebx,0x4(%esp)
08621077 +0x070f:  mov    %eax,(%esp)
0862107a +0x0712:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862107f +0x0717:  mov    -0x1c(%ebp),%eax
08621082 +0x071a:  mov    0x24(%eax),%ebx
08621085 +0x071d:  movl   $", ",0x4(%esp)
0862108d +0x0725:  lea    -0xb870(%ebp),%eax
08621093 +0x072b:  mov    %eax,(%esp)
08621096 +0x072e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862109b +0x0733:  mov    %ebx,0x4(%esp)
0862109f +0x0737:  mov    %eax,(%esp)
086210a2 +0x073a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086210a7 +0x073f:  mov    -0x1c(%ebp),%eax
086210aa +0x0742:  mov    0x54(%eax),%ebx
086210ad +0x0745:  movl   $", ",0x4(%esp)
086210b5 +0x074d:  lea    -0xb870(%ebp),%eax
086210bb +0x0753:  mov    %eax,(%esp)
086210be +0x0756:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086210c3 +0x075b:  mov    %ebx,0x4(%esp)
086210c7 +0x075f:  mov    %eax,(%esp)
086210ca +0x0762:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086210cf +0x0767:  mov    -0x1c(%ebp),%eax
086210d2 +0x076a:  mov    0x5c(%eax),%ebx
086210d5 +0x076d:  movl   $", ",0x4(%esp)
086210dd +0x0775:  lea    -0xb870(%ebp),%eax
086210e3 +0x077b:  mov    %eax,(%esp)
086210e6 +0x077e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086210eb +0x0783:  mov    %ebx,0x4(%esp)
086210ef +0x0787:  mov    %eax,(%esp)
086210f2 +0x078a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086210f7 +0x078f:  mov    -0x1c(%ebp),%eax
086210fa +0x0792:  mov    0x64(%eax),%ebx
086210fd +0x0795:  movl   $", ",0x4(%esp)
08621105 +0x079d:  lea    -0xb870(%ebp),%eax
0862110b +0x07a3:  mov    %eax,(%esp)
0862110e +0x07a6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621113 +0x07ab:  mov    %ebx,0x4(%esp)
08621117 +0x07af:  mov    %eax,(%esp)
0862111a +0x07b2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862111f +0x07b7:  mov    -0x1c(%ebp),%eax
08621122 +0x07ba:  mov    0x6c(%eax),%ebx
08621125 +0x07bd:  movl   $", ",0x4(%esp)
0862112d +0x07c5:  lea    -0xb870(%ebp),%eax
08621133 +0x07cb:  mov    %eax,(%esp)
08621136 +0x07ce:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862113b +0x07d3:  mov    %ebx,0x4(%esp)
0862113f +0x07d7:  mov    %eax,(%esp)
08621142 +0x07da:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621147 +0x07df:  mov    -0x1c(%ebp),%eax
0862114a +0x07e2:  mov    0xb0(%eax),%ebx
08621150 +0x07e8:  movl   $", ",0x4(%esp)
08621158 +0x07f0:  lea    -0xb870(%ebp),%eax
0862115e +0x07f6:  mov    %eax,(%esp)
08621161 +0x07f9:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621166 +0x07fe:  mov    %ebx,0x4(%esp)
0862116a +0x0802:  mov    %eax,(%esp)
0862116d +0x0805:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621172 +0x080a:  mov    -0x1c(%ebp),%eax
08621175 +0x080d:  mov    0xb4(%eax),%ebx
0862117b +0x0813:  movl   $", ",0x4(%esp)
08621183 +0x081b:  lea    -0xb870(%ebp),%eax
08621189 +0x0821:  mov    %eax,(%esp)
0862118c +0x0824:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621191 +0x0829:  mov    %ebx,0x4(%esp)
08621195 +0x082d:  mov    %eax,(%esp)
08621198 +0x0830:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862119d +0x0835:  mov    -0x1c(%ebp),%eax
086211a0 +0x0838:  mov    0xb8(%eax),%ebx
086211a6 +0x083e:  movl   $", ",0x4(%esp)
086211ae +0x0846:  lea    -0xb870(%ebp),%eax
086211b4 +0x084c:  mov    %eax,(%esp)
086211b7 +0x084f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086211bc +0x0854:  mov    %ebx,0x4(%esp)
086211c0 +0x0858:  mov    %eax,(%esp)
086211c3 +0x085b:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086211c8 +0x0860:  mov    -0x1c(%ebp),%eax
086211cb +0x0863:  mov    0xbc(%eax),%ebx
086211d1 +0x0869:  movl   $", ",0x4(%esp)
086211d9 +0x0871:  lea    -0xb870(%ebp),%eax
086211df +0x0877:  mov    %eax,(%esp)
086211e2 +0x087a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086211e7 +0x087f:  mov    %ebx,0x4(%esp)
086211eb +0x0883:  mov    %eax,(%esp)
086211ee +0x0886:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086211f3 +0x088b:  mov    -0x1c(%ebp),%eax
086211f6 +0x088e:  mov    0xc0(%eax),%ebx
086211fc +0x0894:  movl   $", ",0x4(%esp)
08621204 +0x089c:  lea    -0xb870(%ebp),%eax
0862120a +0x08a2:  mov    %eax,(%esp)
0862120d +0x08a5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621212 +0x08aa:  mov    %ebx,0x4(%esp)
08621216 +0x08ae:  mov    %eax,(%esp)
08621219 +0x08b1:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862121e +0x08b6:  mov    -0x1c(%ebp),%eax
08621221 +0x08b9:  mov    0xc4(%eax),%ebx
08621227 +0x08bf:  movl   $", ",0x4(%esp)
0862122f +0x08c7:  lea    -0xb870(%ebp),%eax
08621235 +0x08cd:  mov    %eax,(%esp)
08621238 +0x08d0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862123d +0x08d5:  mov    %ebx,0x4(%esp)
08621241 +0x08d9:  mov    %eax,(%esp)
08621244 +0x08dc:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621249 +0x08e1:  mov    -0x1c(%ebp),%eax
0862124c +0x08e4:  mov    0xc8(%eax),%ebx
08621252 +0x08ea:  movl   $", ",0x4(%esp)
0862125a +0x08f2:  lea    -0xb870(%ebp),%eax
08621260 +0x08f8:  mov    %eax,(%esp)
08621263 +0x08fb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621268 +0x0900:  mov    %ebx,0x4(%esp)
0862126c +0x0904:  mov    %eax,(%esp)
0862126f +0x0907:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621274 +0x090c:  mov    -0x1c(%ebp),%eax
08621277 +0x090f:  mov    0xcc(%eax),%ebx
0862127d +0x0915:  movl   $", ",0x4(%esp)
08621285 +0x091d:  lea    -0xb870(%ebp),%eax
0862128b +0x0923:  mov    %eax,(%esp)
0862128e +0x0926:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621293 +0x092b:  mov    %ebx,0x4(%esp)
08621297 +0x092f:  mov    %eax,(%esp)
0862129a +0x0932:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862129f +0x0937:  mov    -0x1c(%ebp),%eax
086212a2 +0x093a:  mov    0xd0(%eax),%ebx
086212a8 +0x0940:  movl   $", ",0x4(%esp)
086212b0 +0x0948:  lea    -0xb870(%ebp),%eax
086212b6 +0x094e:  mov    %eax,(%esp)
086212b9 +0x0951:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086212be +0x0956:  mov    %ebx,0x4(%esp)
086212c2 +0x095a:  mov    %eax,(%esp)
086212c5 +0x095d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086212ca +0x0962:  mov    -0x1c(%ebp),%eax
086212cd +0x0965:  mov    0xd4(%eax),%ebx
086212d3 +0x096b:  movl   $", ",0x4(%esp)
086212db +0x0973:  lea    -0xb870(%ebp),%eax
086212e1 +0x0979:  mov    %eax,(%esp)
086212e4 +0x097c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086212e9 +0x0981:  mov    %ebx,0x4(%esp)
086212ed +0x0985:  mov    %eax,(%esp)
086212f0 +0x0988:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086212f5 +0x098d:  mov    -0x1c(%ebp),%eax
086212f8 +0x0990:  mov    0xd8(%eax),%ebx
086212fe +0x0996:  movl   $", ",0x4(%esp)
08621306 +0x099e:  lea    -0xb870(%ebp),%eax
0862130c +0x09a4:  mov    %eax,(%esp)
0862130f +0x09a7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621314 +0x09ac:  mov    %ebx,0x4(%esp)
08621318 +0x09b0:  mov    %eax,(%esp)
0862131b +0x09b3:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621320 +0x09b8:  mov    -0x1c(%ebp),%eax
08621323 +0x09bb:  mov    0xdc(%eax),%ebx
08621329 +0x09c1:  movl   $", ",0x4(%esp)
08621331 +0x09c9:  lea    -0xb870(%ebp),%eax
08621337 +0x09cf:  mov    %eax,(%esp)
0862133a +0x09d2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862133f +0x09d7:  mov    %ebx,0x4(%esp)
08621343 +0x09db:  mov    %eax,(%esp)
08621346 +0x09de:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862134b +0x09e3:  mov    -0x1c(%ebp),%eax
0862134e +0x09e6:  mov    0xe0(%eax),%ebx
08621354 +0x09ec:  movl   $", ",0x4(%esp)
0862135c +0x09f4:  lea    -0xb870(%ebp),%eax
08621362 +0x09fa:  mov    %eax,(%esp)
08621365 +0x09fd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862136a +0x0a02:  mov    %ebx,0x4(%esp)
0862136e +0x0a06:  mov    %eax,(%esp)
08621371 +0x0a09:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621376 +0x0a0e:  mov    -0x1c(%ebp),%eax
08621379 +0x0a11:  mov    0xe4(%eax),%ebx
0862137f +0x0a17:  movl   $", ",0x4(%esp)
08621387 +0x0a1f:  lea    -0xb870(%ebp),%eax
0862138d +0x0a25:  mov    %eax,(%esp)
08621390 +0x0a28:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621395 +0x0a2d:  mov    %ebx,0x4(%esp)
08621399 +0x0a31:  mov    %eax,(%esp)
0862139c +0x0a34:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086213a1 +0x0a39:  mov    -0x1c(%ebp),%eax
086213a4 +0x0a3c:  mov    0xe8(%eax),%ebx
086213aa +0x0a42:  movl   $", ",0x4(%esp)
086213b2 +0x0a4a:  lea    -0xb870(%ebp),%eax
086213b8 +0x0a50:  mov    %eax,(%esp)
086213bb +0x0a53:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086213c0 +0x0a58:  mov    %ebx,0x4(%esp)
086213c4 +0x0a5c:  mov    %eax,(%esp)
086213c7 +0x0a5f:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086213cc +0x0a64:  mov    -0x1c(%ebp),%eax
086213cf +0x0a67:  mov    0xec(%eax),%ebx
086213d5 +0x0a6d:  movl   $", ",0x4(%esp)
086213dd +0x0a75:  lea    -0xb870(%ebp),%eax
086213e3 +0x0a7b:  mov    %eax,(%esp)
086213e6 +0x0a7e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086213eb +0x0a83:  mov    %ebx,0x4(%esp)
086213ef +0x0a87:  mov    %eax,(%esp)
086213f2 +0x0a8a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086213f7 +0x0a8f:  mov    -0x1c(%ebp),%eax
086213fa +0x0a92:  mov    0xf0(%eax),%ebx
08621400 +0x0a98:  movl   $", ",0x4(%esp)
08621408 +0x0aa0:  lea    -0xb870(%ebp),%eax
0862140e +0x0aa6:  mov    %eax,(%esp)
08621411 +0x0aa9:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621416 +0x0aae:  mov    %ebx,0x4(%esp)
0862141a +0x0ab2:  mov    %eax,(%esp)
0862141d +0x0ab5:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621422 +0x0aba:  mov    -0x1c(%ebp),%eax
08621425 +0x0abd:  mov    0xfc(%eax),%ebx
0862142b +0x0ac3:  movl   $", ",0x4(%esp)
08621433 +0x0acb:  lea    -0xb870(%ebp),%eax
08621439 +0x0ad1:  mov    %eax,(%esp)
0862143c +0x0ad4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621441 +0x0ad9:  mov    %ebx,0x4(%esp)
08621445 +0x0add:  mov    %eax,(%esp)
08621448 +0x0ae0:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862144d +0x0ae5:  mov    -0x1c(%ebp),%eax
08621450 +0x0ae8:  mov    0x100(%eax),%ebx
08621456 +0x0aee:  movl   $", ",0x4(%esp)
0862145e +0x0af6:  lea    -0xb870(%ebp),%eax
08621464 +0x0afc:  mov    %eax,(%esp)
08621467 +0x0aff:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862146c +0x0b04:  mov    %ebx,0x4(%esp)
08621470 +0x0b08:  mov    %eax,(%esp)
08621473 +0x0b0b:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621478 +0x0b10:  mov    -0x1c(%ebp),%eax
0862147b +0x0b13:  mov    0x108(%eax),%ebx
08621481 +0x0b19:  movl   $", ",0x4(%esp)
08621489 +0x0b21:  lea    -0xb870(%ebp),%eax
0862148f +0x0b27:  mov    %eax,(%esp)
08621492 +0x0b2a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621497 +0x0b2f:  mov    %ebx,0x4(%esp)
0862149b +0x0b33:  mov    %eax,(%esp)
0862149e +0x0b36:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086214a3 +0x0b3b:  mov    -0x1c(%ebp),%eax
086214a6 +0x0b3e:  mov    0xf4(%eax),%ebx
086214ac +0x0b44:  movl   $", ",0x4(%esp)
086214b4 +0x0b4c:  lea    -0xb870(%ebp),%eax
086214ba +0x0b52:  mov    %eax,(%esp)
086214bd +0x0b55:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086214c2 +0x0b5a:  mov    %ebx,0x4(%esp)
086214c6 +0x0b5e:  mov    %eax,(%esp)
086214c9 +0x0b61:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086214ce +0x0b66:  mov    -0x1c(%ebp),%eax
086214d1 +0x0b69:  mov    0xf8(%eax),%ebx
086214d7 +0x0b6f:  movl   $", ",0x4(%esp)
086214df +0x0b77:  lea    -0xb870(%ebp),%eax
086214e5 +0x0b7d:  mov    %eax,(%esp)
086214e8 +0x0b80:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086214ed +0x0b85:  mov    %ebx,0x4(%esp)
086214f1 +0x0b89:  mov    %eax,(%esp)
086214f4 +0x0b8c:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086214f9 +0x0b91:  mov    -0x1c(%ebp),%eax
086214fc +0x0b94:  mov    0x10c(%eax),%ebx
08621502 +0x0b9a:  movl   $", ",0x4(%esp)
0862150a +0x0ba2:  lea    -0xb870(%ebp),%eax
08621510 +0x0ba8:  mov    %eax,(%esp)
08621513 +0x0bab:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621518 +0x0bb0:  mov    %ebx,0x4(%esp)
0862151c +0x0bb4:  mov    %eax,(%esp)
0862151f +0x0bb7:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621524 +0x0bbc:  mov    -0x1c(%ebp),%eax
08621527 +0x0bbf:  mov    0x110(%eax),%ebx
0862152d +0x0bc5:  movl   $", ",0x4(%esp)
08621535 +0x0bcd:  lea    -0xb870(%ebp),%eax
0862153b +0x0bd3:  mov    %eax,(%esp)
0862153e +0x0bd6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621543 +0x0bdb:  mov    %ebx,0x4(%esp)
08621547 +0x0bdf:  mov    %eax,(%esp)
0862154a +0x0be2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862154f +0x0be7:  mov    -0x1c(%ebp),%eax
08621552 +0x0bea:  mov    0x114(%eax),%ebx
08621558 +0x0bf0:  movl   $", ",0x4(%esp)
08621560 +0x0bf8:  lea    -0xb870(%ebp),%eax
08621566 +0x0bfe:  mov    %eax,(%esp)
08621569 +0x0c01:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862156e +0x0c06:  mov    %ebx,0x4(%esp)
08621572 +0x0c0a:  mov    %eax,(%esp)
08621575 +0x0c0d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862157a +0x0c12:  mov    -0x1c(%ebp),%eax
0862157d +0x0c15:  mov    0x11c(%eax),%ebx
08621583 +0x0c1b:  movl   $", ",0x4(%esp)
0862158b +0x0c23:  lea    -0xb870(%ebp),%eax
08621591 +0x0c29:  mov    %eax,(%esp)
08621594 +0x0c2c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621599 +0x0c31:  mov    %ebx,0x4(%esp)
0862159d +0x0c35:  mov    %eax,(%esp)
086215a0 +0x0c38:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086215a5 +0x0c3d:  mov    -0x1c(%ebp),%eax
086215a8 +0x0c40:  mov    0x128(%eax),%ebx
086215ae +0x0c46:  movl   $", ",0x4(%esp)
086215b6 +0x0c4e:  lea    -0xb870(%ebp),%eax
086215bc +0x0c54:  mov    %eax,(%esp)
086215bf +0x0c57:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086215c4 +0x0c5c:  mov    %ebx,0x4(%esp)
086215c8 +0x0c60:  mov    %eax,(%esp)
086215cb +0x0c63:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086215d0 +0x0c68:  mov    -0x1c(%ebp),%eax
086215d3 +0x0c6b:  mov    0x12c(%eax),%ebx
086215d9 +0x0c71:  movl   $", ",0x4(%esp)
086215e1 +0x0c79:  lea    -0xb870(%ebp),%eax
086215e7 +0x0c7f:  mov    %eax,(%esp)
086215ea +0x0c82:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086215ef +0x0c87:  mov    %ebx,0x4(%esp)
086215f3 +0x0c8b:  mov    %eax,(%esp)
086215f6 +0x0c8e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086215fb +0x0c93:  mov    -0x1c(%ebp),%eax
086215fe +0x0c96:  mov    0x130(%eax),%ebx
08621604 +0x0c9c:  movl   $", ",0x4(%esp)
0862160c +0x0ca4:  lea    -0xb870(%ebp),%eax
08621612 +0x0caa:  mov    %eax,(%esp)
08621615 +0x0cad:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862161a +0x0cb2:  mov    %ebx,0x4(%esp)
0862161e +0x0cb6:  mov    %eax,(%esp)
08621621 +0x0cb9:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621626 +0x0cbe:  mov    -0x1c(%ebp),%eax
08621629 +0x0cc1:  mov    0x134(%eax),%ebx
0862162f +0x0cc7:  movl   $", ",0x4(%esp)
08621637 +0x0ccf:  lea    -0xb870(%ebp),%eax
0862163d +0x0cd5:  mov    %eax,(%esp)
08621640 +0x0cd8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621645 +0x0cdd:  mov    %ebx,0x4(%esp)
08621649 +0x0ce1:  mov    %eax,(%esp)
0862164c +0x0ce4:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621651 +0x0ce9:  mov    -0x1c(%ebp),%eax
08621654 +0x0cec:  mov    %eax,0x4(%esp)
08621658 +0x0cf0:  mov    0x8(%ebp),%eax
0862165b +0x0cf3:  mov    %eax,(%esp)
0862165e +0x0cf6:  call   0861d42e <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo>  ; sync_script::CSyncScript::GetAttackElement(EquipmentParameterInfo*)
08621663 +0x0cfb:  mov    %eax,%ebx
08621665 +0x0cfd:  movl   $", '",0x4(%esp)
0862166d +0x0d05:  lea    -0xb870(%ebp),%eax
08621673 +0x0d0b:  mov    %eax,(%esp)
08621676 +0x0d0e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862167b +0x0d13:  mov    %ebx,0x4(%esp)
0862167f +0x0d17:  mov    %eax,(%esp)
08621682 +0x0d1a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621687 +0x0d1f:  movl   $"'",0x4(%esp)
0862168f +0x0d27:  mov    %eax,(%esp)
08621692 +0x0d2a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621697 +0x0d2f:  mov    -0x1c(%ebp),%eax
0862169a +0x0d32:  mov    0x144(%eax),%eax
086216a0 +0x0d38:  mov    %eax,%ebx
086216a2 +0x0d3a:  movl   $", ",0x4(%esp)
086216aa +0x0d42:  lea    -0xb870(%ebp),%eax
086216b0 +0x0d48:  mov    %eax,(%esp)
086216b3 +0x0d4b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086216b8 +0x0d50:  mov    %ebx,0x4(%esp)
086216bc +0x0d54:  mov    %eax,(%esp)
086216bf +0x0d57:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086216c4 +0x0d5c:  mov    -0x1c(%ebp),%eax
086216c7 +0x0d5f:  mov    0x148(%eax),%ebx
086216cd +0x0d65:  movl   $", ",0x4(%esp)
086216d5 +0x0d6d:  lea    -0xb870(%ebp),%eax
086216db +0x0d73:  mov    %eax,(%esp)
086216de +0x0d76:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086216e3 +0x0d7b:  mov    %ebx,0x4(%esp)
086216e7 +0x0d7f:  mov    %eax,(%esp)
086216ea +0x0d82:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
086216ef +0x0d87:  mov    -0x1c(%ebp),%eax
086216f2 +0x0d8a:  mov    0x14c(%eax),%ebx
086216f8 +0x0d90:  movl   $", ",0x4(%esp)
08621700 +0x0d98:  lea    -0xb870(%ebp),%eax
08621706 +0x0d9e:  mov    %eax,(%esp)
08621709 +0x0da1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862170e +0x0da6:  mov    %ebx,0x4(%esp)
08621712 +0x0daa:  mov    %eax,(%esp)
08621715 +0x0dad:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862171a +0x0db2:  mov    -0x1c(%ebp),%eax
0862171d +0x0db5:  mov    0x220(%eax),%ebx
08621723 +0x0dbb:  movl   $", ",0x4(%esp)
0862172b +0x0dc3:  lea    -0xb870(%ebp),%eax
08621731 +0x0dc9:  mov    %eax,(%esp)
08621734 +0x0dcc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621739 +0x0dd1:  mov    %ebx,0x4(%esp)
0862173d +0x0dd5:  mov    %eax,(%esp)
08621740 +0x0dd8:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621745 +0x0ddd:  mov    -0x1c(%ebp),%eax
08621748 +0x0de0:  mov    0x224(%eax),%ebx
0862174e +0x0de6:  movl   $", ",0x4(%esp)
08621756 +0x0dee:  lea    -0xb870(%ebp),%eax
0862175c +0x0df4:  mov    %eax,(%esp)
0862175f +0x0df7:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621764 +0x0dfc:  mov    %ebx,0x4(%esp)
08621768 +0x0e00:  mov    %eax,(%esp)
0862176b +0x0e03:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621770 +0x0e08:  mov    -0x1c(%ebp),%eax
08621773 +0x0e0b:  movzbl 0x23c(%eax),%eax
0862177a +0x0e12:  movzbl %al,%ebx
0862177d +0x0e15:  movl   $", ",0x4(%esp)
08621785 +0x0e1d:  lea    -0xb870(%ebp),%eax
0862178b +0x0e23:  mov    %eax,(%esp)
0862178e +0x0e26:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621793 +0x0e2b:  mov    %ebx,0x4(%esp)
08621797 +0x0e2f:  mov    %eax,(%esp)
0862179a +0x0e32:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862179f +0x0e37:  mov    -0x1c(%ebp),%eax
086217a2 +0x0e3a:  movzbl 0x23d(%eax),%eax
086217a9 +0x0e41:  movzbl %al,%ebx
086217ac +0x0e44:  movl   $", ",0x4(%esp)
086217b4 +0x0e4c:  lea    -0xb870(%ebp),%eax
086217ba +0x0e52:  mov    %eax,(%esp)
086217bd +0x0e55:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086217c2 +0x0e5a:  mov    %ebx,0x4(%esp)
086217c6 +0x0e5e:  mov    %eax,(%esp)
086217c9 +0x0e61:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086217ce +0x0e66:  mov    -0x1c(%ebp),%eax
086217d1 +0x0e69:  mov    0x138(%eax),%ebx
086217d7 +0x0e6f:  movl   $", ",0x4(%esp)
086217df +0x0e77:  lea    -0xb870(%ebp),%eax
086217e5 +0x0e7d:  mov    %eax,(%esp)
086217e8 +0x0e80:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086217ed +0x0e85:  mov    %ebx,0x4(%esp)
086217f1 +0x0e89:  mov    %eax,(%esp)
086217f4 +0x0e8c:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
086217f9 +0x0e91:  mov    -0x1c(%ebp),%eax
086217fc +0x0e94:  mov    0x228(%eax),%ebx
08621802 +0x0e9a:  movl   $", ",0x4(%esp)
0862180a +0x0ea2:  lea    -0xb870(%ebp),%eax
08621810 +0x0ea8:  mov    %eax,(%esp)
08621813 +0x0eab:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621818 +0x0eb0:  mov    %ebx,0x4(%esp)
0862181c +0x0eb4:  mov    %eax,(%esp)
0862181f +0x0eb7:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
08621824 +0x0ebc:  mov    -0x1c(%ebp),%eax
08621827 +0x0ebf:  movzbl 0x22c(%eax),%eax
0862182e +0x0ec6:  movzbl %al,%ebx
08621831 +0x0ec9:  movl   $", ",0x4(%esp)
08621839 +0x0ed1:  lea    -0xb870(%ebp),%eax
0862183f +0x0ed7:  mov    %eax,(%esp)
08621842 +0x0eda:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621847 +0x0edf:  mov    %ebx,0x4(%esp)
0862184b +0x0ee3:  mov    %eax,(%esp)
0862184e +0x0ee6:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621853 +0x0eeb:  mov    -0x1c(%ebp),%eax
08621856 +0x0eee:  mov    0x274(%eax),%ebx
0862185c +0x0ef4:  movl   $", ",0x4(%esp)
08621864 +0x0efc:  lea    -0xb870(%ebp),%eax
0862186a +0x0f02:  mov    %eax,(%esp)
0862186d +0x0f05:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621872 +0x0f0a:  mov    %ebx,0x4(%esp)
08621876 +0x0f0e:  mov    %eax,(%esp)
08621879 +0x0f11:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
0862187e +0x0f16:  mov    -0x1c(%ebp),%eax
08621881 +0x0f19:  mov    0x8(%eax),%ebx
08621884 +0x0f1c:  movl   $", ",0x4(%esp)
0862188c +0x0f24:  lea    -0xb870(%ebp),%eax
08621892 +0x0f2a:  mov    %eax,(%esp)
08621895 +0x0f2d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862189a +0x0f32:  mov    %ebx,0x4(%esp)
0862189e +0x0f36:  mov    %eax,(%esp)
086218a1 +0x0f39:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
086218a6 +0x0f3e:  mov    -0x1c(%ebp),%eax
086218a9 +0x0f41:  mov    0x10(%eax),%ebx
086218ac +0x0f44:  movl   $", ",0x4(%esp)
086218b4 +0x0f4c:  lea    -0xb870(%ebp),%eax
086218ba +0x0f52:  mov    %eax,(%esp)
086218bd +0x0f55:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086218c2 +0x0f5a:  mov    %ebx,0x4(%esp)
086218c6 +0x0f5e:  mov    %eax,(%esp)
086218c9 +0x0f61:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
086218ce +0x0f66:  mov    -0x1c(%ebp),%eax
086218d1 +0x0f69:  mov    0x288(%eax),%ebx
086218d7 +0x0f6f:  movl   $", ",0x4(%esp)
086218df +0x0f77:  lea    -0xb870(%ebp),%eax
086218e5 +0x0f7d:  mov    %eax,(%esp)
086218e8 +0x0f80:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086218ed +0x0f85:  mov    %ebx,0x4(%esp)
086218f1 +0x0f89:  mov    %eax,(%esp)
086218f4 +0x0f8c:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086218f9 +0x0f91:  mov    -0x1c(%ebp),%eax
086218fc +0x0f94:  mov    0x28c(%eax),%ebx
08621902 +0x0f9a:  movl   $", ",0x4(%esp)
0862190a +0x0fa2:  lea    -0xb870(%ebp),%eax
08621910 +0x0fa8:  mov    %eax,(%esp)
08621913 +0x0fab:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621918 +0x0fb0:  mov    %ebx,0x4(%esp)
0862191c +0x0fb4:  mov    %eax,(%esp)
0862191f +0x0fb7:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621924 +0x0fbc:  mov    -0x1c(%ebp),%eax
08621927 +0x0fbf:  mov    0x290(%eax),%ebx
0862192d +0x0fc5:  movl   $", ",0x4(%esp)
08621935 +0x0fcd:  lea    -0xb870(%ebp),%eax
0862193b +0x0fd3:  mov    %eax,(%esp)
0862193e +0x0fd6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621943 +0x0fdb:  mov    %ebx,0x4(%esp)
08621947 +0x0fdf:  mov    %eax,(%esp)
0862194a +0x0fe2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862194f +0x0fe7:  mov    -0x1c(%ebp),%eax
08621952 +0x0fea:  mov    0x294(%eax),%ebx
08621958 +0x0ff0:  movl   $", ",0x4(%esp)
08621960 +0x0ff8:  lea    -0xb870(%ebp),%eax
08621966 +0x0ffe:  mov    %eax,(%esp)
08621969 +0x1001:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862196e +0x1006:  mov    %ebx,0x4(%esp)
08621972 +0x100a:  mov    %eax,(%esp)
08621975 +0x100d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862197a +0x1012:  mov    -0x1c(%ebp),%eax
0862197d +0x1015:  mov    0x298(%eax),%ebx
08621983 +0x101b:  movl   $", ",0x4(%esp)
0862198b +0x1023:  lea    -0xb870(%ebp),%eax
08621991 +0x1029:  mov    %eax,(%esp)
08621994 +0x102c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621999 +0x1031:  mov    %ebx,0x4(%esp)
0862199d +0x1035:  mov    %eax,(%esp)
086219a0 +0x1038:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086219a5 +0x103d:  mov    -0x1c(%ebp),%eax
086219a8 +0x1040:  mov    0x284(%eax),%ebx
086219ae +0x1046:  movl   $", ",0x4(%esp)
086219b6 +0x104e:  lea    -0xb870(%ebp),%eax
086219bc +0x1054:  mov    %eax,(%esp)
086219bf +0x1057:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086219c4 +0x105c:  mov    %ebx,0x4(%esp)
086219c8 +0x1060:  mov    %eax,(%esp)
086219cb +0x1063:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086219d0 +0x1068:  mov    -0x1c(%ebp),%eax
086219d3 +0x106b:  mov    0x13c(%eax),%ebx
086219d9 +0x1071:  movl   $", ",0x4(%esp)
086219e1 +0x1079:  lea    -0xb870(%ebp),%eax
086219e7 +0x107f:  mov    %eax,(%esp)
086219ea +0x1082:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086219ef +0x1087:  mov    %ebx,0x4(%esp)
086219f3 +0x108b:  mov    %eax,(%esp)
086219f6 +0x108e:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
086219fb +0x1093:  mov    -0x1c(%ebp),%eax
086219fe +0x1096:  mov    0x74(%eax),%ebx
08621a01 +0x1099:  movl   $", ",0x4(%esp)
08621a09 +0x10a1:  lea    -0xb870(%ebp),%eax
08621a0f +0x10a7:  mov    %eax,(%esp)
08621a12 +0x10aa:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621a17 +0x10af:  mov    %ebx,0x4(%esp)
08621a1b +0x10b3:  mov    %eax,(%esp)
08621a1e +0x10b6:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621a23 +0x10bb:  mov    -0x1c(%ebp),%eax
08621a26 +0x10be:  mov    0x78(%eax),%ebx
08621a29 +0x10c1:  movl   $", ",0x4(%esp)
08621a31 +0x10c9:  lea    -0xb870(%ebp),%eax
08621a37 +0x10cf:  mov    %eax,(%esp)
08621a3a +0x10d2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621a3f +0x10d7:  mov    %ebx,0x4(%esp)
08621a43 +0x10db:  mov    %eax,(%esp)
08621a46 +0x10de:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621a4b +0x10e3:  mov    -0x1c(%ebp),%eax
08621a4e +0x10e6:  mov    0x7c(%eax),%ebx
08621a51 +0x10e9:  movl   $", ",0x4(%esp)
08621a59 +0x10f1:  lea    -0xb870(%ebp),%eax
08621a5f +0x10f7:  mov    %eax,(%esp)
08621a62 +0x10fa:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621a67 +0x10ff:  mov    %ebx,0x4(%esp)
08621a6b +0x1103:  mov    %eax,(%esp)
08621a6e +0x1106:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
08621a73 +0x110b:  mov    -0x1c(%ebp),%eax
08621a76 +0x110e:  mov    0x80(%eax),%ebx
08621a7c +0x1114:  movl   $", ",0x4(%esp)
08621a84 +0x111c:  lea    -0xb870(%ebp),%eax
08621a8a +0x1122:  mov    %eax,(%esp)
08621a8d +0x1125:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621a92 +0x112a:  mov    %ebx,0x4(%esp)
08621a96 +0x112e:  mov    %eax,(%esp)
08621a99 +0x1131:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621a9e +0x1136:  mov    -0x1c(%ebp),%eax
08621aa1 +0x1139:  mov    0x84(%eax),%ebx
08621aa7 +0x113f:  movl   $", ",0x4(%esp)
08621aaf +0x1147:  lea    -0xb870(%ebp),%eax
08621ab5 +0x114d:  mov    %eax,(%esp)
08621ab8 +0x1150:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621abd +0x1155:  mov    %ebx,0x4(%esp)
08621ac1 +0x1159:  mov    %eax,(%esp)
08621ac4 +0x115c:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621ac9 +0x1161:  mov    -0x1c(%ebp),%eax
08621acc +0x1164:  mov    0x88(%eax),%ebx
08621ad2 +0x116a:  movl   $", ",0x4(%esp)
08621ada +0x1172:  lea    -0xb870(%ebp),%eax
08621ae0 +0x1178:  mov    %eax,(%esp)
08621ae3 +0x117b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ae8 +0x1180:  mov    %ebx,0x4(%esp)
08621aec +0x1184:  mov    %eax,(%esp)
08621aef +0x1187:  call   08626abc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11a
08621af4 +0x118c:  mov    -0x1c(%ebp),%eax
08621af7 +0x118f:  mov    0x104(%eax),%ebx
08621afd +0x1195:  movl   $", ",0x4(%esp)
08621b05 +0x119d:  lea    -0xb870(%ebp),%eax
08621b0b +0x11a3:  mov    %eax,(%esp)
08621b0e +0x11a6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621b13 +0x11ab:  mov    %ebx,0x4(%esp)
08621b17 +0x11af:  mov    %eax,(%esp)
08621b1a +0x11b2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08621b1f +0x11b7:  lea    -0x30(%ebp),%eax
08621b22 +0x11ba:  mov    %eax,(%esp)
08621b25 +0x11bd:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08621b2a +0x11c2:  mov    -0x1c(%ebp),%eax
08621b2d +0x11c5:  lea    0x24c(%eax),%edx
08621b33 +0x11cb:  lea    -0x2c(%ebp),%eax
08621b36 +0x11ce:  mov    %edx,0x4(%esp)
08621b3a +0x11d2:  mov    %eax,(%esp)
08621b3d +0x11d5:  call   08181026 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xcbd>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xcbd
08621b42 +0x11da:  sub    $0x4,%esp
08621b45 +0x11dd:  mov    -0x1c(%ebp),%eax
08621b48 +0x11e0:  lea    0x24c(%eax),%edx
08621b4e +0x11e6:  lea    -0x28(%ebp),%eax
08621b51 +0x11e9:  mov    %edx,0x4(%esp)
08621b55 +0x11ed:  mov    %eax,(%esp)
08621b58 +0x11f0:  call   08180fa6 <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0xc3d>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0xc3d
08621b5d +0x11f5:  sub    $0x4,%esp
08621b60 +0x11f8:  lea    -0x34(%ebp),%eax
08621b63 +0x11fb:  lea    -0x30(%ebp),%edx
08621b66 +0x11fe:  mov    %edx,0xc(%esp)
08621b6a +0x1202:  mov    -0x2c(%ebp),%edx
08621b6d +0x1205:  mov    %edx,0x8(%esp)
08621b71 +0x1209:  mov    -0x28(%ebp),%edx
08621b74 +0x120c:  mov    %edx,0x4(%esp)
08621b78 +0x1210:  mov    %eax,(%esp)
08621b7b +0x1213:  call   086289b7 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2015>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2015
08621b80 +0x1218:  sub    $0x4,%esp
08621b83 +0x121b:  lea    -0x34(%ebp),%eax
08621b86 +0x121e:  mov    %eax,(%esp)
08621b89 +0x1221:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08621b8e +0x1226:  mov    %eax,%ebx
08621b90 +0x1228:  movl   $", '",0x4(%esp)
08621b98 +0x1230:  lea    -0xb870(%ebp),%eax
08621b9e +0x1236:  mov    %eax,(%esp)
08621ba1 +0x1239:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ba6 +0x123e:  mov    %ebx,0x4(%esp)
08621baa +0x1242:  mov    %eax,(%esp)
08621bad +0x1245:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621bb2 +0x124a:  movl   $"'",0x4(%esp)
08621bba +0x1252:  mov    %eax,(%esp)
08621bbd +0x1255:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621bc2 +0x125a:  jmp    08621bd9 <+0x1271>
08621bc4 +0x125c:  mov    %edx,%ebx
08621bc6 +0x125e:  mov    %eax,%esi
08621bc8 +0x1260:  lea    -0x34(%ebp),%eax
08621bcb +0x1263:  mov    %eax,(%esp)
08621bce +0x1266:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08621bd3 +0x126b:  mov    %esi,%eax
08621bd5 +0x126d:  mov    %ebx,%edx
08621bd7 +0x126f:  jmp    08621be6 <+0x127e>
08621bd9 +0x1271:  lea    -0x34(%ebp),%eax
08621bdc +0x1274:  mov    %eax,(%esp)
08621bdf +0x1277:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08621be4 +0x127c:  jmp    08621c01 <+0x1299>
08621be6 +0x127e:  mov    %edx,%ebx
08621be8 +0x1280:  mov    %eax,%esi
08621bea +0x1282:  lea    -0x30(%ebp),%eax
08621bed +0x1285:  mov    %eax,(%esp)
08621bf0 +0x1288:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08621bf5 +0x128d:  mov    %esi,%eax
08621bf7 +0x128f:  mov    %ebx,%edx
08621bf9 +0x1291:  mov    %eax,(%esp)
08621bfc +0x1294:  call   08ae3750 <_Unwind_Resume>
08621c01 +0x1299:  lea    -0x30(%ebp),%eax
08621c04 +0x129c:  mov    %eax,(%esp)
08621c07 +0x129f:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08621c0c +0x12a4:  jmp    086221ff <+0x1897>
08621c11 +0x12a9:  movl   $", 0",0x4(%esp)
08621c19 +0x12b1:  lea    -0xb870(%ebp),%eax
08621c1f +0x12b7:  mov    %eax,(%esp)
08621c22 +0x12ba:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621c27 +0x12bf:  movl   $", 0",0x4(%esp)
08621c2f +0x12c7:  lea    -0xb870(%ebp),%eax
08621c35 +0x12cd:  mov    %eax,(%esp)
08621c38 +0x12d0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621c3d +0x12d5:  movl   $", 0",0x4(%esp)
08621c45 +0x12dd:  lea    -0xb870(%ebp),%eax
08621c4b +0x12e3:  mov    %eax,(%esp)
08621c4e +0x12e6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621c53 +0x12eb:  movl   $", 0",0x4(%esp)
08621c5b +0x12f3:  lea    -0xb870(%ebp),%eax
08621c61 +0x12f9:  mov    %eax,(%esp)
08621c64 +0x12fc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621c69 +0x1301:  movl   $", 0",0x4(%esp)
08621c71 +0x1309:  lea    -0xb870(%ebp),%eax
08621c77 +0x130f:  mov    %eax,(%esp)
08621c7a +0x1312:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621c7f +0x1317:  movl   $", 0",0x4(%esp)
08621c87 +0x131f:  lea    -0xb870(%ebp),%eax
08621c8d +0x1325:  mov    %eax,(%esp)
08621c90 +0x1328:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621c95 +0x132d:  movl   $", 0",0x4(%esp)
08621c9d +0x1335:  lea    -0xb870(%ebp),%eax
08621ca3 +0x133b:  mov    %eax,(%esp)
08621ca6 +0x133e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621cab +0x1343:  movl   $", 0",0x4(%esp)
08621cb3 +0x134b:  lea    -0xb870(%ebp),%eax
08621cb9 +0x1351:  mov    %eax,(%esp)
08621cbc +0x1354:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621cc1 +0x1359:  movl   $", 0",0x4(%esp)
08621cc9 +0x1361:  lea    -0xb870(%ebp),%eax
08621ccf +0x1367:  mov    %eax,(%esp)
08621cd2 +0x136a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621cd7 +0x136f:  movl   $", 0",0x4(%esp)
08621cdf +0x1377:  lea    -0xb870(%ebp),%eax
08621ce5 +0x137d:  mov    %eax,(%esp)
08621ce8 +0x1380:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ced +0x1385:  movl   $", 0",0x4(%esp)
08621cf5 +0x138d:  lea    -0xb870(%ebp),%eax
08621cfb +0x1393:  mov    %eax,(%esp)
08621cfe +0x1396:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d03 +0x139b:  movl   $", 0",0x4(%esp)
08621d0b +0x13a3:  lea    -0xb870(%ebp),%eax
08621d11 +0x13a9:  mov    %eax,(%esp)
08621d14 +0x13ac:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d19 +0x13b1:  movl   $", 0",0x4(%esp)
08621d21 +0x13b9:  lea    -0xb870(%ebp),%eax
08621d27 +0x13bf:  mov    %eax,(%esp)
08621d2a +0x13c2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d2f +0x13c7:  movl   $", 0",0x4(%esp)
08621d37 +0x13cf:  lea    -0xb870(%ebp),%eax
08621d3d +0x13d5:  mov    %eax,(%esp)
08621d40 +0x13d8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d45 +0x13dd:  movl   $", 0",0x4(%esp)
08621d4d +0x13e5:  lea    -0xb870(%ebp),%eax
08621d53 +0x13eb:  mov    %eax,(%esp)
08621d56 +0x13ee:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d5b +0x13f3:  movl   $", 0",0x4(%esp)
08621d63 +0x13fb:  lea    -0xb870(%ebp),%eax
08621d69 +0x1401:  mov    %eax,(%esp)
08621d6c +0x1404:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d71 +0x1409:  movl   $", 0",0x4(%esp)
08621d79 +0x1411:  lea    -0xb870(%ebp),%eax
08621d7f +0x1417:  mov    %eax,(%esp)
08621d82 +0x141a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d87 +0x141f:  movl   $", 0",0x4(%esp)
08621d8f +0x1427:  lea    -0xb870(%ebp),%eax
08621d95 +0x142d:  mov    %eax,(%esp)
08621d98 +0x1430:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621d9d +0x1435:  movl   $", 0",0x4(%esp)
08621da5 +0x143d:  lea    -0xb870(%ebp),%eax
08621dab +0x1443:  mov    %eax,(%esp)
08621dae +0x1446:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621db3 +0x144b:  movl   $", 0",0x4(%esp)
08621dbb +0x1453:  lea    -0xb870(%ebp),%eax
08621dc1 +0x1459:  mov    %eax,(%esp)
08621dc4 +0x145c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621dc9 +0x1461:  movl   $", 0",0x4(%esp)
08621dd1 +0x1469:  lea    -0xb870(%ebp),%eax
08621dd7 +0x146f:  mov    %eax,(%esp)
08621dda +0x1472:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ddf +0x1477:  movl   $", 0",0x4(%esp)
08621de7 +0x147f:  lea    -0xb870(%ebp),%eax
08621ded +0x1485:  mov    %eax,(%esp)
08621df0 +0x1488:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621df5 +0x148d:  movl   $", 0",0x4(%esp)
08621dfd +0x1495:  lea    -0xb870(%ebp),%eax
08621e03 +0x149b:  mov    %eax,(%esp)
08621e06 +0x149e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e0b +0x14a3:  movl   $", 0",0x4(%esp)
08621e13 +0x14ab:  lea    -0xb870(%ebp),%eax
08621e19 +0x14b1:  mov    %eax,(%esp)
08621e1c +0x14b4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e21 +0x14b9:  movl   $", 0",0x4(%esp)
08621e29 +0x14c1:  lea    -0xb870(%ebp),%eax
08621e2f +0x14c7:  mov    %eax,(%esp)
08621e32 +0x14ca:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e37 +0x14cf:  movl   $", 0",0x4(%esp)
08621e3f +0x14d7:  lea    -0xb870(%ebp),%eax
08621e45 +0x14dd:  mov    %eax,(%esp)
08621e48 +0x14e0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e4d +0x14e5:  movl   $", 0",0x4(%esp)
08621e55 +0x14ed:  lea    -0xb870(%ebp),%eax
08621e5b +0x14f3:  mov    %eax,(%esp)
08621e5e +0x14f6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e63 +0x14fb:  movl   $", 0",0x4(%esp)
08621e6b +0x1503:  lea    -0xb870(%ebp),%eax
08621e71 +0x1509:  mov    %eax,(%esp)
08621e74 +0x150c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e79 +0x1511:  movl   $", 0",0x4(%esp)
08621e81 +0x1519:  lea    -0xb870(%ebp),%eax
08621e87 +0x151f:  mov    %eax,(%esp)
08621e8a +0x1522:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621e8f +0x1527:  movl   $", 0",0x4(%esp)
08621e97 +0x152f:  lea    -0xb870(%ebp),%eax
08621e9d +0x1535:  mov    %eax,(%esp)
08621ea0 +0x1538:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ea5 +0x153d:  movl   $", 0",0x4(%esp)
08621ead +0x1545:  lea    -0xb870(%ebp),%eax
08621eb3 +0x154b:  mov    %eax,(%esp)
08621eb6 +0x154e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ebb +0x1553:  movl   $", 0",0x4(%esp)
08621ec3 +0x155b:  lea    -0xb870(%ebp),%eax
08621ec9 +0x1561:  mov    %eax,(%esp)
08621ecc +0x1564:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ed1 +0x1569:  movl   $", 0",0x4(%esp)
08621ed9 +0x1571:  lea    -0xb870(%ebp),%eax
08621edf +0x1577:  mov    %eax,(%esp)
08621ee2 +0x157a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621ee7 +0x157f:  movl   $", 0",0x4(%esp)
08621eef +0x1587:  lea    -0xb870(%ebp),%eax
08621ef5 +0x158d:  mov    %eax,(%esp)
08621ef8 +0x1590:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621efd +0x1595:  movl   $", 0",0x4(%esp)
08621f05 +0x159d:  lea    -0xb870(%ebp),%eax
08621f0b +0x15a3:  mov    %eax,(%esp)
08621f0e +0x15a6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f13 +0x15ab:  movl   $", 0",0x4(%esp)
08621f1b +0x15b3:  lea    -0xb870(%ebp),%eax
08621f21 +0x15b9:  mov    %eax,(%esp)
08621f24 +0x15bc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f29 +0x15c1:  movl   $", 0",0x4(%esp)
08621f31 +0x15c9:  lea    -0xb870(%ebp),%eax
08621f37 +0x15cf:  mov    %eax,(%esp)
08621f3a +0x15d2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f3f +0x15d7:  movl   $", 0",0x4(%esp)
08621f47 +0x15df:  lea    -0xb870(%ebp),%eax
08621f4d +0x15e5:  mov    %eax,(%esp)
08621f50 +0x15e8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f55 +0x15ed:  movl   $", 0",0x4(%esp)
08621f5d +0x15f5:  lea    -0xb870(%ebp),%eax
08621f63 +0x15fb:  mov    %eax,(%esp)
08621f66 +0x15fe:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f6b +0x1603:  movl   $", 0",0x4(%esp)
08621f73 +0x160b:  lea    -0xb870(%ebp),%eax
08621f79 +0x1611:  mov    %eax,(%esp)
08621f7c +0x1614:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f81 +0x1619:  movl   $", ''",0x4(%esp)
08621f89 +0x1621:  lea    -0xb870(%ebp),%eax
08621f8f +0x1627:  mov    %eax,(%esp)
08621f92 +0x162a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621f97 +0x162f:  movl   $", 0",0x4(%esp)
08621f9f +0x1637:  lea    -0xb870(%ebp),%eax
08621fa5 +0x163d:  mov    %eax,(%esp)
08621fa8 +0x1640:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621fad +0x1645:  movl   $", 0",0x4(%esp)
08621fb5 +0x164d:  lea    -0xb870(%ebp),%eax
08621fbb +0x1653:  mov    %eax,(%esp)
08621fbe +0x1656:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621fc3 +0x165b:  movl   $", 0",0x4(%esp)
08621fcb +0x1663:  lea    -0xb870(%ebp),%eax
08621fd1 +0x1669:  mov    %eax,(%esp)
08621fd4 +0x166c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621fd9 +0x1671:  movl   $", 0",0x4(%esp)
08621fe1 +0x1679:  lea    -0xb870(%ebp),%eax
08621fe7 +0x167f:  mov    %eax,(%esp)
08621fea +0x1682:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08621fef +0x1687:  movl   $", 0",0x4(%esp)
08621ff7 +0x168f:  lea    -0xb870(%ebp),%eax
08621ffd +0x1695:  mov    %eax,(%esp)
08622000 +0x1698:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622005 +0x169d:  movl   $", 0",0x4(%esp)
0862200d +0x16a5:  lea    -0xb870(%ebp),%eax
08622013 +0x16ab:  mov    %eax,(%esp)
08622016 +0x16ae:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862201b +0x16b3:  movl   $", 0",0x4(%esp)
08622023 +0x16bb:  lea    -0xb870(%ebp),%eax
08622029 +0x16c1:  mov    %eax,(%esp)
0862202c +0x16c4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622031 +0x16c9:  movl   $", 0",0x4(%esp)
08622039 +0x16d1:  lea    -0xb870(%ebp),%eax
0862203f +0x16d7:  mov    %eax,(%esp)
08622042 +0x16da:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622047 +0x16df:  movl   $", 0",0x4(%esp)
0862204f +0x16e7:  lea    -0xb870(%ebp),%eax
08622055 +0x16ed:  mov    %eax,(%esp)
08622058 +0x16f0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862205d +0x16f5:  movl   $", 0",0x4(%esp)
08622065 +0x16fd:  lea    -0xb870(%ebp),%eax
0862206b +0x1703:  mov    %eax,(%esp)
0862206e +0x1706:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622073 +0x170b:  movl   $", 0.0",0x4(%esp)
0862207b +0x1713:  lea    -0xb870(%ebp),%eax
08622081 +0x1719:  mov    %eax,(%esp)
08622084 +0x171c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622089 +0x1721:  movl   $", 0.0",0x4(%esp)
08622091 +0x1729:  lea    -0xb870(%ebp),%eax
08622097 +0x172f:  mov    %eax,(%esp)
0862209a +0x1732:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862209f +0x1737:  movl   $", 0.0",0x4(%esp)
086220a7 +0x173f:  lea    -0xb870(%ebp),%eax
086220ad +0x1745:  mov    %eax,(%esp)
086220b0 +0x1748:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086220b5 +0x174d:  movl   $", 0",0x4(%esp)
086220bd +0x1755:  lea    -0xb870(%ebp),%eax
086220c3 +0x175b:  mov    %eax,(%esp)
086220c6 +0x175e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086220cb +0x1763:  movl   $", 0",0x4(%esp)
086220d3 +0x176b:  lea    -0xb870(%ebp),%eax
086220d9 +0x1771:  mov    %eax,(%esp)
086220dc +0x1774:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086220e1 +0x1779:  movl   $", 0",0x4(%esp)
086220e9 +0x1781:  lea    -0xb870(%ebp),%eax
086220ef +0x1787:  mov    %eax,(%esp)
086220f2 +0x178a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086220f7 +0x178f:  movl   $", 0",0x4(%esp)
086220ff +0x1797:  lea    -0xb870(%ebp),%eax
08622105 +0x179d:  mov    %eax,(%esp)
08622108 +0x17a0:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862210d +0x17a5:  movl   $", 0",0x4(%esp)
08622115 +0x17ad:  lea    -0xb870(%ebp),%eax
0862211b +0x17b3:  mov    %eax,(%esp)
0862211e +0x17b6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622123 +0x17bb:  movl   $", 0",0x4(%esp)
0862212b +0x17c3:  lea    -0xb870(%ebp),%eax
08622131 +0x17c9:  mov    %eax,(%esp)
08622134 +0x17cc:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622139 +0x17d1:  movl   $", 0",0x4(%esp)
08622141 +0x17d9:  lea    -0xb870(%ebp),%eax
08622147 +0x17df:  mov    %eax,(%esp)
0862214a +0x17e2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862214f +0x17e7:  movl   $", 0",0x4(%esp)
08622157 +0x17ef:  lea    -0xb870(%ebp),%eax
0862215d +0x17f5:  mov    %eax,(%esp)
08622160 +0x17f8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622165 +0x17fd:  movl   $", 0",0x4(%esp)
0862216d +0x1805:  lea    -0xb870(%ebp),%eax
08622173 +0x180b:  mov    %eax,(%esp)
08622176 +0x180e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862217b +0x1813:  movl   $", 0",0x4(%esp)
08622183 +0x181b:  lea    -0xb870(%ebp),%eax
08622189 +0x1821:  mov    %eax,(%esp)
0862218c +0x1824:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622191 +0x1829:  movl   $", 0",0x4(%esp)
08622199 +0x1831:  lea    -0xb870(%ebp),%eax
0862219f +0x1837:  mov    %eax,(%esp)
086221a2 +0x183a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086221a7 +0x183f:  movl   $", 0",0x4(%esp)
086221af +0x1847:  lea    -0xb870(%ebp),%eax
086221b5 +0x184d:  mov    %eax,(%esp)
086221b8 +0x1850:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086221bd +0x1855:  movl   $", 0",0x4(%esp)
086221c5 +0x185d:  lea    -0xb870(%ebp),%eax
086221cb +0x1863:  mov    %eax,(%esp)
086221ce +0x1866:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086221d3 +0x186b:  movl   $", 0",0x4(%esp)
086221db +0x1873:  lea    -0xb870(%ebp),%eax
086221e1 +0x1879:  mov    %eax,(%esp)
086221e4 +0x187c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086221e9 +0x1881:  movl   $", ''",0x4(%esp)
086221f1 +0x1889:  lea    -0xb870(%ebp),%eax
086221f7 +0x188f:  mov    %eax,(%esp)
086221fa +0x1892:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086221ff +0x1897:  movl   $", ''",0x4(%esp)
08622207 +0x189f:  lea    -0xb870(%ebp),%eax
0862220d +0x18a5:  mov    %eax,(%esp)
08622210 +0x18a8:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622215 +0x18ad:  lea    -0x1870(%ebp),%eax
0862221b +0x18b3:  lea    0xc00(%eax),%edi
08622221 +0x18b9:  mov    0xc(%ebp),%eax
08622224 +0x18bc:  mov    0x70(%eax),%esi
08622227 +0x18bf:  mov    0xc(%ebp),%eax
0862222a +0x18c2:  add    $0x6c,%eax
0862222d +0x18c5:  mov    %eax,(%esp)
08622230 +0x18c8:  call   08706670 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x280>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x280
08622235 +0x18cd:  mov    %eax,%ebx
08622237 +0x18cf:  mov    0xc(%ebp),%eax
0862223a +0x18d2:  add    $0x6c,%eax
0862223d +0x18d5:  mov    %eax,(%esp)
08622240 +0x18d8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08622245 +0x18dd:  mov    %esi,0xc(%esp)
08622249 +0x18e1:  mov    %ebx,0x8(%esp)
0862224d +0x18e5:  mov    %eax,0x4(%esp)
08622251 +0x18e9:  mov    0x8(%ebp),%eax
08622254 +0x18ec:  mov    %eax,(%esp)
08622257 +0x18ef:  call   0861d706 <_ZN11sync_script11CSyncScript6GetURLEPKcii>  ; sync_script::CSyncScript::GetURL(char const*, int, int)
0862225c +0x18f4:  mov    %edi,0x8(%esp)
08622260 +0x18f8:  mov    %eax,0x4(%esp)
08622264 +0x18fc:  mov    -0x24(%ebp),%eax
08622267 +0x18ff:  mov    %eax,(%esp)
0862226a +0x1902:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
0862226f +0x1907:  mov    %eax,%ebx
08622271 +0x1909:  movl   $", '",0x4(%esp)
08622279 +0x1911:  lea    -0xb870(%ebp),%eax
0862227f +0x1917:  mov    %eax,(%esp)
08622282 +0x191a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622287 +0x191f:  mov    %ebx,0x4(%esp)
0862228b +0x1923:  mov    %eax,(%esp)
0862228e +0x1926:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08622293 +0x192b:  movl   $"'",0x4(%esp)
0862229b +0x1933:  mov    %eax,(%esp)
0862229e +0x1936:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086222a3 +0x193b:  mov    0xc(%ebp),%eax
086222a6 +0x193e:  mov    0xc4(%eax),%ebx
086222ac +0x1944:  movl   $", ",0x4(%esp)
086222b4 +0x194c:  lea    -0xb870(%ebp),%eax
086222ba +0x1952:  mov    %eax,(%esp)
086222bd +0x1955:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086222c2 +0x195a:  mov    %ebx,0x4(%esp)
086222c6 +0x195e:  mov    %eax,(%esp)
086222c9 +0x1961:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086222ce +0x1966:  lea    -0xb870(%ebp),%eax
086222d4 +0x196c:  mov    %eax,(%esp)
086222d7 +0x196f:  call   086269e2 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x40>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x40
086222dc +0x1974:  mov    %eax,0x8(%esp)
086222e0 +0x1978:  movl   $"inSert into dnf_item_info(it_no, it_name, it_eng_name, it_explain, master_type, sub_type, job, class, revert, level, skill, create_ratio, rarity, weight, price, cash, medal, durability, cooltime, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all, ref_slow, ref_freeze, ref_poison, ref_stun, ref_cus, ref_blind, ref_lite, ref_ston, ref_sleep, ref_deekement, ref_deadlystrike, ref_bleeding, ref_confuse, ref_hold, ref_all_stat, ref_pierce, ref_stuck, inven_max, hp_regenrate, mp_regenrate, mov_speed, att_speed, quest, hit_recovery, jump, att_element, att_active_status, att_active_status_ratio, att_active_status_pow, att_backforce, att_upforce, att_hp_drain, att_mp_drain, criticalhit_rate, stuck_rate, att_defenseIgnore, room_list_move_speed_rate, hp_max_rate, mp_max_rate, fire_attack, water_attack, dark_attack, light_attack, all_attack, rigidity, magical_critical_hit, physical_absolute_damage, physical_damage_reduce, physical_absolute_defense, magical_absolute_damage, magical_damage_reduce, magical_absolute_defense, armor_break_resistance, skill_levelup, set_type, url, icon_mark_number) values(%s)",0x4(%esp)
086222e8 +0x1980:  mov    -0x24(%ebp),%eax
086222eb +0x1983:  mov    %eax,(%esp)
086222ee +0x1986:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086222f3 +0x198b:  lea    -0x70(%ebp),%eax
086222f6 +0x198e:  mov    %eax,(%esp)
086222f9 +0x1991:  call   08627c94 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x12f2>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x12f2
086222fe +0x1996:  mov    -0x24(%ebp),%eax
08622301 +0x1999:  mov    %eax,(%esp)
08622304 +0x199c:  call   0844d65e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x274>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x274
08622309 +0x19a1:  mov    %eax,0x4(%esp)
0862230d +0x19a5:  lea    -0x70(%ebp),%eax
08622310 +0x19a8:  mov    %eax,(%esp)
08622313 +0x19ab:  call   086272e8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x946>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x946
08622318 +0x19b0:  movl   $0x1,0x4(%esp)
08622320 +0x19b8:  mov    -0x24(%ebp),%eax
08622323 +0x19bb:  mov    %eax,(%esp)
08622326 +0x19be:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862232b +0x19c3:  xor    $0x1,%eax
0862232e +0x19c6:  test   %al,%al
08622330 +0x19c8:  je     08622339 <+0x19d1>
08622332 +0x19ca:  mov    $0x0,%ebx
08622337 +0x19cf:  jmp    0862235b <+0x19f3>
08622339 +0x19d1:  mov    $0x1,%ebx
0862233e +0x19d6:  jmp    0862235b <+0x19f3>
08622340 +0x19d8:  mov    %edx,%ebx
08622342 +0x19da:  mov    %eax,%esi
08622344 +0x19dc:  lea    -0x70(%ebp),%eax
08622347 +0x19df:  mov    %eax,(%esp)
0862234a +0x19e2:  call   08627ca8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1306>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1306
0862234f +0x19e7:  mov    %esi,%eax
08622351 +0x19e9:  mov    %ebx,%edx
08622353 +0x19eb:  mov    %eax,(%esp)
08622356 +0x19ee:  call   08ae3750 <_Unwind_Resume>
0862235b +0x19f3:  lea    -0x70(%ebp),%eax
0862235e +0x19f6:  mov    %eax,(%esp)
08622361 +0x19f9:  call   08627ca8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1306>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1306
08622366 +0x19fe:  mov    %ebx,%eax
08622368 +0x1a00:  lea    -0xc(%ebp),%esp
0862236b +0x1a03:  add    $0x0,%esp
0862236e +0x1a06:  pop    %ebx
0862236f +0x1a07:  pop    %esi
08622370 +0x1a08:  pop    %edi
08622371 +0x1a09:  pop    %ebp
08622372 +0x1a0a:  ret
08622373 +0x1a0b:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_stackable_item_to_db @ 0x8620968

/* sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*) */

bool __thiscall
sync_script::CSyncScript::insert_stackable_item_to_db(CSyncScript *this,STStackableScript *param_1)

{
  EquipmentParameterInfo EVar1;
  float fVar2;
  char cVar3;
  char *pcVar4;
  CStreamBuffer *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  CStreamBuffer local_b874 [40960];
  char local_1874 [1024];
  char local_1474 [1024];
  char acStack_1074 [1024];
  undefined1 local_c74 [1024];
  char local_874 [1024];
  char local_474 [1024];
  undefined1 local_74 [12];
  int local_68;
  int local_64;
  string local_60 [4];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  undefined4 local_3c;
  CStringMaker local_38 [4];
  CStringMaker local_34 [12];
  MySQL *local_28;
  EquipmentParameterInfo *local_24;
  EquipmentParameterInfo *local_20;
  
  bVar13 = 0;
  piVar11 = (int *)&stack0xffff4764;
  if (*this == (CSyncScript)0x1) {
    local_28 = (MySQL *)DBMgr::GetDBHandle();
    std::string::string(local_60,(string *)(param_1 + 0xbc));
                    /* try { // try from 086209f5 to 086209f9 has its CatchHandler @ 08620a10 */
    cVar3 = GetType();
    std::string::~string(local_60);
    if (cVar3 == '\x01') {
      CStreamBuffer::CStreamBuffer(local_b874);
      pcVar4 = local_1874;
      for (iVar10 = 0x400; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar13 * -2 + 1) * 4;
      }
      pcVar4 = local_474;
      for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar13 * -2 + 1) * 4;
      }
      pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xac));
      cVar3 = CodePage::script2Database(pcVar4,local_474);
      if (cVar3 == '\x01') {
        pcVar4 = local_874;
        for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar13 * -2 + 1) * 4;
        }
        pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xb4));
        cVar3 = CodePage::script2Database(pcVar4,local_874);
        if (cVar3 == '\x01') {
          CStreamBuffer::operator<<(local_b874,*(int *)param_1);
          pcVar4 = (char *)GetEscapeString(local_28,local_474,local_1874);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xb0));
          pcVar4 = (char *)GetEscapeString(local_28,pcVar4,local_1474);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          pcVar4 = (char *)GetEscapeString(local_28,local_874,acStack_1074);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,local_68);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,local_64);
          pcVar4 = (char *)GetUsableCharacter(this,param_1);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          iVar10 = *(int *)(param_1 + 4);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          pcVar4 = (char *)GetAttachType(this,*(int *)(param_1 + 8));
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          iVar10 = *(int *)(param_1 + 0x5c);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,0);
          iVar10 = *(int *)(param_1 + 0xc);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x10);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x34);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x14);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x18);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x1c);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,0);
          iVar10 = *(int *)(param_1 + 0x68);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          local_3c = 0x13;
          piVar6 = (int *)std::
                          map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                          ::operator[]((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                                        *)(param_1 + 0x4bc),(ENUM_MODULE_TYPE *)&local_3c);
          local_24 = (EquipmentParameterInfo *)*piVar6;
          if (local_24 == (EquipmentParameterInfo *)0x0) {
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", \'\'");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0.0");
            CStreamBuffer::operator<<(local_b874,", 0.0");
            CStreamBuffer::operator<<(local_b874,", 0.0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", \'\'");
          }
          else {
            iVar10 = *(int *)(local_24 + 4);
            local_20 = local_24;
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x14);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x18);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x1c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x24);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x54);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x5c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 100);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x6c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xb0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xb4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xb8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xbc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xc0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xc4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 200);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xcc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xd0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xd4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xd8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xdc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xe0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xe4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xe8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xec);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xf0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xfc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x100);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x108);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xf4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xf8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x10c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x110);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x114);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x11c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x128);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 300);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x130);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x134);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            pcVar4 = (char *)GetAttackElement(this,local_20);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
            CStreamBuffer::operator<<(pCVar5,"\'");
            iVar10 = *(int *)(local_20 + 0x144);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x148);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x14c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x220);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x224);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            EVar1 = local_20[0x23c];
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,(uint)(byte)EVar1);
            EVar1 = local_20[0x23d];
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,(uint)(byte)EVar1);
            fVar2 = *(float *)(local_20 + 0x138);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            fVar2 = *(float *)(local_20 + 0x228);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            EVar1 = local_20[0x22c];
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,(uint)(byte)EVar1);
            fVar2 = *(float *)(local_20 + 0x274);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            fVar2 = *(float *)(local_20 + 8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            fVar2 = *(float *)(local_20 + 0x10);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x288);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x28c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x290);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x294);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x298);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x284);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x13c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x74);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x78);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x7c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x80);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x84);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x88);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x104);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            CStringMaker::CStringMaker(local_34);
                    /* try { // try from 08621b3d to 08621b7f has its CatchHandler @ 08621be6 */
            std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::end();
            std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::begin();
            std::
            for_each<__gnu_cxx::__normal_iterator<LevelUpSkill*,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>,sync_script::CStringMaker>
                      ();
            piVar11 = (int *)&stack0xffff4760;
                    /* try { // try from 08621b89 to 08621bc1 has its CatchHandler @ 08621bc4 */
            pcVar4 = (char *)CStringMaker::c_str(local_38);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
            CStreamBuffer::operator<<(pCVar5,"\'");
                    /* try { // try from 08621bdf to 08621be3 has its CatchHandler @ 08621be6 */
            CStringMaker::~CStringMaker(local_38);
            CStringMaker::~CStringMaker(local_34);
          }
          piVar11[1] = (int)&DAT_08ce36e4;
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x8622215;
          CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          iVar10 = *(int *)(param_1 + 0x70);
          *piVar11 = (int)(param_1 + 0x6c);
          piVar11[-1] = 0x8622235;
          iVar7 = std::string::length((string *)*piVar11);
          *piVar11 = (int)(param_1 + 0x6c);
          piVar11[-1] = 0x8622245;
          iVar8 = std::string::c_str((string *)*piVar11);
          piVar11[3] = iVar10;
          piVar11[2] = iVar7;
          piVar11[1] = iVar8;
          *piVar11 = (int)this;
          piVar11[-1] = 0x862225c;
          iVar10 = GetURL((CSyncScript *)*piVar11,(char *)piVar11[1],piVar11[2],piVar11[3]);
          piVar11[2] = (int)local_c74;
          piVar11[1] = iVar10;
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x862226f;
          iVar10 = GetEscapeString((MySQL *)*piVar11,(char *)piVar11[1],(char *)piVar11[2]);
          piVar11[1] = (int)&DAT_08ce2f6a;
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x8622287;
          uVar9 = CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = iVar10;
          *piVar11 = uVar9;
          piVar11[-1] = 0x8622293;
          uVar9 = CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = (int)&DAT_08ce2e26;
          *piVar11 = uVar9;
          piVar11[-1] = 0x86222a3;
          CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          iVar10 = *(int *)(param_1 + 0xc4);
          piVar11[1] = (int)&DAT_08ce2f6e;
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x86222c2;
          uVar9 = CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = iVar10;
          *piVar11 = uVar9;
          piVar11[-1] = 0x86222ce;
          CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,piVar11[1]);
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x86222dc;
          iVar10 = CStreamBuffer::c_str((CStreamBuffer *)*piVar11);
          piVar11[2] = iVar10;
          piVar11[1] = (int)
                       "inSert into dnf_item_info(it_no, it_name, it_eng_name, it_explain, master_type, sub_type, job, class, revert, level, skill, create_ratio, rarity, weight, price, cash, medal, durability, cooltime, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all, ref_slow, ref_freeze, ref_poison, ref_stun, ref_cus, ref_blind, ref_lite, ref_ston, ref_sleep, ref_deekement, ref_deadlystrike, ref_bleeding, ref_confuse, ref_hold, ref_all_stat, ref_pierce, ref_stuck, inven_max, hp_regenrate, mp_regenrate, mov_speed, att_speed, quest, hit_recovery, jump, att_element, att_active_status, att_active_status_ratio, att_active_status_pow, att_backforce, att_upforce, att_hp_drain, att_mp_drain, criticalhit_rate, stuck_rate, att_defenseIgnore, room_list_move_speed_rate, hp_max_rate, mp_max_rate, fire_attack, water_attack, dark_attack, light_attack, all_attack, rigidity, magical_critical_hit, physical_absolute_damage, physical_damage_reduce, physical_absolute_defense, magical_absolute_damage, magical_damage_reduce, magical_absolute_defense, armor_break_resistance, skill_levelup, set_type, url, icon_mark_number) values(%s)"
          ;
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x86222f3;
          MySQL::set_query((MySQL *)*piVar11,(char *)piVar11[1]);
          *piVar11 = (int)local_74;
          piVar11[-1] = 0x86222fe;
          CFieldLengthChecker::CFieldLengthChecker((CFieldLengthChecker *)*piVar11);
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x8622309;
          iVar10 = MySQL::GetQueryString((MySQL *)*piVar11);
          piVar11[1] = iVar10;
          *piVar11 = (int)local_74;
                    /* try { // try from 08622313 to 0862232a has its CatchHandler @ 08622340 */
          piVar11[-1] = 0x8622318;
          CFieldLengthChecker::AddField((CFieldLengthChecker *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = 1;
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x862232b;
          cVar3 = MySQL::exec((MySQL *)*piVar11,SUB41(piVar11[1],0));
          bVar12 = cVar3 == '\x01';
          *piVar11 = (int)local_74;
          piVar11[-1] = 0x8622366;
          CFieldLengthChecker::~CFieldLengthChecker((CFieldLengthChecker *)*piVar11);
        }
        else {
          std::string::c_str((string *)(param_1 + 0xb4));
          CodePage::database();
          CodePage::script();
          cMyTrace::cMyTrace(local_4c,
                             "bool sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)"
                             ,0x52a,5);
          cMyTrace::operator()(local_4c,"Error!!! %s->%s [%s][%s][%d]");
          bVar12 = false;
        }
      }
      else {
        std::string::c_str((string *)(param_1 + 0xac));
        CodePage::database();
        CodePage::script();
        cMyTrace::cMyTrace(local_5c,
                           "bool sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)"
                           ,0x523,5);
        cMyTrace::operator()(local_5c,"Error!!! %s->%s [%s][%s][%d]");
        bVar12 = false;
      }
    }
    else {
      bVar12 = false;
    }
  }
  else {
    bVar12 = true;
  }
  return bVar12;
}
```
