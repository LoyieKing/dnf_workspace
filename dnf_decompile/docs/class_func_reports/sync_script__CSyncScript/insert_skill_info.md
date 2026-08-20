# insert_skill_info

`_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii`

`sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622e08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622e08  _ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii
#           sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)
# range [0x08622e08, 0x0862438f]
08622e08 +0x0000:  push   %ebp
08622e09 +0x0001:  mov    %esp,%ebp
08622e0b +0x0003:  push   %edi
08622e0c +0x0004:  push   %esi
08622e0d +0x0005:  push   %ebx
08622e0e +0x0006:  sub    $&_ZL14gUnicodeBuffer+0xb400,%esp
08622e14 +0x000c:  mov    0x8(%ebp),%eax
08622e17 +0x000f:  movzbl (%eax),%eax
08622e1a +0x0012:  xor    $0x1,%eax
08622e1d +0x0015:  test   %al,%al
08622e1f +0x0017:  je     08622e2b <+0x23>
08622e21 +0x0019:  mov    $0x1,%ebx
08622e26 +0x001e:  jmp    08624383 <+0x157b>
08622e2b +0x0023:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622e30 +0x0028:  movl   $0x0,0x8(%esp)
08622e38 +0x0030:  movl   $0x5,0x4(%esp)
08622e40 +0x0038:  mov    %eax,(%esp)
08622e43 +0x003b:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622e48 +0x0040:  mov    %eax,-0x24(%ebp)
08622e4b +0x0043:  lea    -0x108(%ebp),%eax
08622e51 +0x0049:  mov    %eax,(%esp)
08622e54 +0x004c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08622e59 +0x0051:  movl   $0x0,-0x1c(%ebp)
08622e60 +0x0058:  jmp    08622eb4 <+0xac>
08622e62 +0x005a:  mov    0xc(%ebp),%eax
08622e65 +0x005d:  lea    0x44(%eax),%edx
08622e68 +0x0060:  mov    -0x1c(%ebp),%eax
08622e6b +0x0063:  mov    %eax,0x4(%esp)
08622e6f +0x0067:  mov    %edx,(%esp)
08622e72 +0x006a:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08622e77 +0x006f:  mov    %eax,0x4(%esp)
08622e7b +0x0073:  lea    -0x108(%ebp),%eax
08622e81 +0x0079:  mov    %eax,(%esp)
08622e84 +0x007c:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08622e89 +0x0081:  mov    0xc(%ebp),%eax
08622e8c +0x0084:  lea    0x50(%eax),%edx
08622e8f +0x0087:  mov    -0x1c(%ebp),%eax
08622e92 +0x008a:  mov    %eax,0x4(%esp)
08622e96 +0x008e:  mov    %edx,(%esp)
08622e99 +0x0091:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08622e9e +0x0096:  mov    %eax,0x4(%esp)
08622ea2 +0x009a:  lea    -0x108(%ebp),%eax
08622ea8 +0x00a0:  mov    %eax,(%esp)
08622eab +0x00a3:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08622eb0 +0x00a8:  addl   $0x1,-0x1c(%ebp)
08622eb4 +0x00ac:  mov    0xc(%ebp),%eax
08622eb7 +0x00af:  add    $0x44,%eax
08622eba +0x00b2:  mov    %eax,(%esp)
08622ebd +0x00b5:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08622ec2 +0x00ba:  cmp    -0x1c(%ebp),%eax
08622ec5 +0x00bd:  seta   %al
08622ec8 +0x00c0:  test   %al,%al
08622eca +0x00c2:  jne    08622e62 <+0x5a>
08622ecc +0x00c4:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
08622ed2 +0x00ca:  mov    $0xb000,%edx
08622ed7 +0x00cf:  mov    %edx,0x8(%esp)
08622edb +0x00d3:  movl   $0x0,0x4(%esp)
08622ee3 +0x00db:  mov    %eax,(%esp)
08622ee6 +0x00de:  call   0807dcc0 <_init+0x5b8>
08622eeb +0x00e3:  movl   $0x0,-0x20(%ebp)
08622ef2 +0x00ea:  lea    -0x508(%ebp),%ebx
08622ef8 +0x00f0:  mov    $0x0,%eax
08622efd +0x00f5:  mov    $0x100,%edx
08622f02 +0x00fa:  mov    %ebx,%edi
08622f04 +0x00fc:  mov    %edx,%ecx
08622f06 +0x00fe:  rep stos %eax,%es:(%edi)
08622f08 +0x0100:  mov    0xc(%ebp),%eax
08622f0b +0x0103:  add    $0x4,%eax
08622f0e +0x0106:  mov    %eax,(%esp)
08622f11 +0x0109:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08622f16 +0x010e:  lea    -0x508(%ebp),%edx
08622f1c +0x0114:  mov    %edx,0x4(%esp)
08622f20 +0x0118:  mov    %eax,(%esp)
08622f23 +0x011b:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08622f28 +0x0120:  xor    $0x1,%eax
08622f2b +0x0123:  test   %al,%al
08622f2d +0x0125:  je     08622fa5 <+0x19d>
08622f2f +0x0127:  mov    0xc(%ebp),%eax
08622f32 +0x012a:  add    $0x4,%eax
08622f35 +0x012d:  mov    %eax,(%esp)
08622f38 +0x0130:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08622f3d +0x0135:  mov    %eax,%edi
08622f3f +0x0137:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08622f44 +0x013c:  mov    %eax,%esi
08622f46 +0x013e:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08622f4b +0x0143:  mov    %eax,%ebx
08622f4d +0x0145:  movl   $0x5,0xc(%esp)
08622f55 +0x014d:  movl   $0x7ff,0x8(%esp)
08622f5d +0x0155:  movl   $&_ZZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptiiE19__PRETTY_FUNCTION__,0x4(%esp)
08622f65 +0x015d:  lea    -0xfc(%ebp),%eax
08622f6b +0x0163:  mov    %eax,(%esp)
08622f6e +0x0166:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08622f73 +0x016b:  movl   $0x7ff,0x18(%esp)
08622f7b +0x0173:  movl   $&_ZZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptiiE19__PRETTY_FUNCTION__,0x14(%esp)
08622f83 +0x017b:  mov    %edi,0x10(%esp)
08622f87 +0x017f:  mov    %esi,0xc(%esp)
08622f8b +0x0183:  mov    %ebx,0x8(%esp)
08622f8f +0x0187:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08622f97 +0x018f:  lea    -0xfc(%ebp),%eax
08622f9d +0x0195:  mov    %eax,(%esp)
08622fa0 +0x0198:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08622fa5 +0x019d:  lea    -0x908(%ebp),%ebx
08622fab +0x01a3:  mov    $0x0,%eax
08622fb0 +0x01a8:  mov    $0x100,%edx
08622fb5 +0x01ad:  mov    %ebx,%edi
08622fb7 +0x01af:  mov    %edx,%ecx
08622fb9 +0x01b1:  rep stos %eax,%es:(%edi)
08622fbb +0x01b3:  mov    0xc(%ebp),%eax
08622fbe +0x01b6:  add    $0x8,%eax
08622fc1 +0x01b9:  mov    %eax,(%esp)
08622fc4 +0x01bc:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08622fc9 +0x01c1:  lea    -0x908(%ebp),%edx
08622fcf +0x01c7:  mov    %edx,0x4(%esp)
08622fd3 +0x01cb:  mov    %eax,(%esp)
08622fd6 +0x01ce:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
08622fdb +0x01d3:  xor    $0x1,%eax
08622fde +0x01d6:  test   %al,%al
08622fe0 +0x01d8:  je     08623058 <+0x250>
08622fe2 +0x01da:  mov    0xc(%ebp),%eax
08622fe5 +0x01dd:  add    $0x8,%eax
08622fe8 +0x01e0:  mov    %eax,(%esp)
08622feb +0x01e3:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08622ff0 +0x01e8:  mov    %eax,%edi
08622ff2 +0x01ea:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
08622ff7 +0x01ef:  mov    %eax,%esi
08622ff9 +0x01f1:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
08622ffe +0x01f6:  mov    %eax,%ebx
08623000 +0x01f8:  movl   $0x5,0xc(%esp)
08623008 +0x0200:  movl   $0x807,0x8(%esp)
08623010 +0x0208:  movl   $&_ZZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptiiE19__PRETTY_FUNCTION__,0x4(%esp)
08623018 +0x0210:  lea    -0xec(%ebp),%eax
0862301e +0x0216:  mov    %eax,(%esp)
08623021 +0x0219:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08623026 +0x021e:  movl   $0x807,0x18(%esp)
0862302e +0x0226:  movl   $&_ZZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptiiE19__PRETTY_FUNCTION__,0x14(%esp)
08623036 +0x022e:  mov    %edi,0x10(%esp)
0862303a +0x0232:  mov    %esi,0xc(%esp)
0862303e +0x0236:  mov    %ebx,0x8(%esp)
08623042 +0x023a:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
0862304a +0x0242:  lea    -0xec(%ebp),%eax
08623050 +0x0248:  mov    %eax,(%esp)
08623053 +0x024b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08623058 +0x0250:  lea    -0xa908(%ebp),%eax
0862305e +0x0256:  mov    %eax,(%esp)
08623061 +0x0259:  call   086269be <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1c
08623066 +0x025e:  mov    0x10(%ebp),%eax
08623069 +0x0261:  mov    %eax,0x4(%esp)
0862306d +0x0265:  lea    -0xa908(%ebp),%eax
08623073 +0x026b:  mov    %eax,(%esp)
08623076 +0x026e:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
0862307b +0x0273:  mov    0xc(%ebp),%eax
0862307e +0x0276:  mov    (%eax),%ebx
08623080 +0x0278:  movl   $", ",0x4(%esp)
08623088 +0x0280:  lea    -0xa908(%ebp),%eax
0862308e +0x0286:  mov    %eax,(%esp)
08623091 +0x0289:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623096 +0x028e:  mov    %ebx,0x4(%esp)
0862309a +0x0292:  mov    %eax,(%esp)
0862309d +0x0295:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086230a2 +0x029a:  movl   $", ",0x4(%esp)
086230aa +0x02a2:  lea    -0xa908(%ebp),%eax
086230b0 +0x02a8:  mov    %eax,(%esp)
086230b3 +0x02ab:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086230b8 +0x02b0:  mov    0x14(%ebp),%edx
086230bb +0x02b3:  mov    %edx,0x4(%esp)
086230bf +0x02b7:  mov    %eax,(%esp)
086230c2 +0x02ba:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086230c7 +0x02bf:  mov    -0x20(%ebp),%edx
086230ca +0x02c2:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
086230d0 +0x02c8:  shl    $0xc,%edx
086230d3 +0x02cb:  add    %edx,%eax
086230d5 +0x02cd:  addl   $0x1,-0x20(%ebp)
086230d9 +0x02d1:  mov    %eax,0x8(%esp)
086230dd +0x02d5:  lea    -0x508(%ebp),%eax
086230e3 +0x02db:  mov    %eax,0x4(%esp)
086230e7 +0x02df:  mov    -0x24(%ebp),%eax
086230ea +0x02e2:  mov    %eax,(%esp)
086230ed +0x02e5:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
086230f2 +0x02ea:  mov    %eax,%ebx
086230f4 +0x02ec:  movl   $", '",0x4(%esp)
086230fc +0x02f4:  lea    -0xa908(%ebp),%eax
08623102 +0x02fa:  mov    %eax,(%esp)
08623105 +0x02fd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862310a +0x0302:  mov    %ebx,0x4(%esp)
0862310e +0x0306:  mov    %eax,(%esp)
08623111 +0x0309:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623116 +0x030e:  movl   $"'",0x4(%esp)
0862311e +0x0316:  mov    %eax,(%esp)
08623121 +0x0319:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623126 +0x031e:  mov    -0x20(%ebp),%edx
08623129 +0x0321:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
0862312f +0x0327:  shl    $0xc,%edx
08623132 +0x032a:  add    %edx,%eax
08623134 +0x032c:  addl   $0x1,-0x20(%ebp)
08623138 +0x0330:  mov    %eax,0x8(%esp)
0862313c +0x0334:  lea    -0x908(%ebp),%eax
08623142 +0x033a:  mov    %eax,0x4(%esp)
08623146 +0x033e:  mov    -0x24(%ebp),%eax
08623149 +0x0341:  mov    %eax,(%esp)
0862314c +0x0344:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08623151 +0x0349:  mov    %eax,%ebx
08623153 +0x034b:  movl   $", '",0x4(%esp)
0862315b +0x0353:  lea    -0xa908(%ebp),%eax
08623161 +0x0359:  mov    %eax,(%esp)
08623164 +0x035c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623169 +0x0361:  mov    %ebx,0x4(%esp)
0862316d +0x0365:  mov    %eax,(%esp)
08623170 +0x0368:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623175 +0x036d:  movl   $"'",0x4(%esp)
0862317d +0x0375:  mov    %eax,(%esp)
08623180 +0x0378:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623185 +0x037d:  mov    -0x20(%ebp),%edx
08623188 +0x0380:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
0862318e +0x0386:  shl    $0xc,%edx
08623191 +0x0389:  add    %edx,%eax
08623193 +0x038b:  mov    %eax,%ebx
08623195 +0x038d:  addl   $0x1,-0x20(%ebp)
08623199 +0x0391:  mov    0xc(%ebp),%eax
0862319c +0x0394:  add    $0x10,%eax
0862319f +0x0397:  mov    %eax,(%esp)
086231a2 +0x039a:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086231a7 +0x039f:  mov    %ebx,0x8(%esp)
086231ab +0x03a3:  mov    %eax,0x4(%esp)
086231af +0x03a7:  mov    -0x24(%ebp),%eax
086231b2 +0x03aa:  mov    %eax,(%esp)
086231b5 +0x03ad:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
086231ba +0x03b2:  mov    %eax,%ebx
086231bc +0x03b4:  movl   $", '",0x4(%esp)
086231c4 +0x03bc:  lea    -0xa908(%ebp),%eax
086231ca +0x03c2:  mov    %eax,(%esp)
086231cd +0x03c5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086231d2 +0x03ca:  mov    %ebx,0x4(%esp)
086231d6 +0x03ce:  mov    %eax,(%esp)
086231d9 +0x03d1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086231de +0x03d6:  movl   $"'",0x4(%esp)
086231e6 +0x03de:  mov    %eax,(%esp)
086231e9 +0x03e1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086231ee +0x03e6:  mov    -0x20(%ebp),%edx
086231f1 +0x03e9:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
086231f7 +0x03ef:  shl    $0xc,%edx
086231fa +0x03f2:  add    %edx,%eax
086231fc +0x03f4:  mov    %eax,%ebx
086231fe +0x03f6:  addl   $0x1,-0x20(%ebp)
08623202 +0x03fa:  mov    0xc(%ebp),%eax
08623205 +0x03fd:  add    $0xc,%eax
08623208 +0x0400:  mov    %eax,(%esp)
0862320b +0x0403:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08623210 +0x0408:  mov    %ebx,0x8(%esp)
08623214 +0x040c:  mov    %eax,0x4(%esp)
08623218 +0x0410:  mov    -0x24(%ebp),%eax
0862321b +0x0413:  mov    %eax,(%esp)
0862321e +0x0416:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08623223 +0x041b:  mov    %eax,%ebx
08623225 +0x041d:  movl   $", '",0x4(%esp)
0862322d +0x0425:  lea    -0xa908(%ebp),%eax
08623233 +0x042b:  mov    %eax,(%esp)
08623236 +0x042e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862323b +0x0433:  mov    %ebx,0x4(%esp)
0862323f +0x0437:  mov    %eax,(%esp)
08623242 +0x043a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623247 +0x043f:  movl   $"'",0x4(%esp)
0862324f +0x0447:  mov    %eax,(%esp)
08623252 +0x044a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623257 +0x044f:  lea    -0xd8(%ebp),%eax
0862325d +0x0455:  mov    %eax,(%esp)
08623260 +0x0458:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623265 +0x045d:  mov    0xc(%ebp),%eax
08623268 +0x0460:  lea    0x18(%eax),%edx
0862326b +0x0463:  lea    -0xd4(%ebp),%eax
08623271 +0x0469:  mov    %edx,0x4(%esp)
08623275 +0x046d:  mov    %eax,(%esp)
08623278 +0x0470:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0862327d +0x0475:  sub    $0x4,%esp
08623280 +0x0478:  mov    0xc(%ebp),%eax
08623283 +0x047b:  lea    0x18(%eax),%edx
08623286 +0x047e:  lea    -0xd0(%ebp),%eax
0862328c +0x0484:  mov    %edx,0x4(%esp)
08623290 +0x0488:  mov    %eax,(%esp)
08623293 +0x048b:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08623298 +0x0490:  sub    $0x4,%esp
0862329b +0x0493:  lea    -0xdc(%ebp),%eax
086232a1 +0x0499:  lea    -0xd8(%ebp),%edx
086232a7 +0x049f:  mov    %edx,0xc(%esp)
086232ab +0x04a3:  mov    -0xd4(%ebp),%edx
086232b1 +0x04a9:  mov    %edx,0x8(%esp)
086232b5 +0x04ad:  mov    -0xd0(%ebp),%edx
086232bb +0x04b3:  mov    %edx,0x4(%esp)
086232bf +0x04b7:  mov    %eax,(%esp)
086232c2 +0x04ba:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
086232c7 +0x04bf:  sub    $0x4,%esp
086232ca +0x04c2:  lea    -0xdc(%ebp),%eax
086232d0 +0x04c8:  mov    %eax,(%esp)
086232d3 +0x04cb:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
086232d8 +0x04d0:  mov    %eax,%ebx
086232da +0x04d2:  movl   $", '",0x4(%esp)
086232e2 +0x04da:  lea    -0xa908(%ebp),%eax
086232e8 +0x04e0:  mov    %eax,(%esp)
086232eb +0x04e3:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086232f0 +0x04e8:  mov    %ebx,0x4(%esp)
086232f4 +0x04ec:  mov    %eax,(%esp)
086232f7 +0x04ef:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086232fc +0x04f4:  movl   $"'",0x4(%esp)
08623304 +0x04fc:  mov    %eax,(%esp)
08623307 +0x04ff:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862330c +0x0504:  jmp    08623326 <+0x51e>
0862330e +0x0506:  mov    %edx,%ebx
08623310 +0x0508:  mov    %eax,%esi
08623312 +0x050a:  lea    -0xdc(%ebp),%eax
08623318 +0x0510:  mov    %eax,(%esp)
0862331b +0x0513:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623320 +0x0518:  mov    %esi,%eax
08623322 +0x051a:  mov    %ebx,%edx
08623324 +0x051c:  jmp    08623336 <+0x52e>
08623326 +0x051e:  lea    -0xdc(%ebp),%eax
0862332c +0x0524:  mov    %eax,(%esp)
0862332f +0x0527:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623334 +0x052c:  jmp    08623351 <+0x549>
08623336 +0x052e:  mov    %edx,%ebx
08623338 +0x0530:  mov    %eax,%esi
0862333a +0x0532:  lea    -0xd8(%ebp),%eax
08623340 +0x0538:  mov    %eax,(%esp)
08623343 +0x053b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623348 +0x0540:  mov    %esi,%eax
0862334a +0x0542:  mov    %ebx,%edx
0862334c +0x0544:  jmp    08624357 <+0x154f>
08623351 +0x0549:  lea    -0xd8(%ebp),%eax
08623357 +0x054f:  mov    %eax,(%esp)
0862335a +0x0552:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862335f +0x0557:  mov    0xc(%ebp),%eax
08623362 +0x055a:  mov    0x5c(%eax),%ebx
08623365 +0x055d:  movl   $", ",0x4(%esp)
0862336d +0x0565:  lea    -0xa908(%ebp),%eax
08623373 +0x056b:  mov    %eax,(%esp)
08623376 +0x056e:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862337b +0x0573:  mov    %ebx,0x4(%esp)
0862337f +0x0577:  mov    %eax,(%esp)
08623382 +0x057a:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08623387 +0x057f:  mov    0xc(%ebp),%eax
0862338a +0x0582:  mov    0x60(%eax),%ebx
0862338d +0x0585:  movl   $", ",0x4(%esp)
08623395 +0x058d:  lea    -0xa908(%ebp),%eax
0862339b +0x0593:  mov    %eax,(%esp)
0862339e +0x0596:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086233a3 +0x059b:  mov    %ebx,0x4(%esp)
086233a7 +0x059f:  mov    %eax,(%esp)
086233aa +0x05a2:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086233af +0x05a7:  lea    -0xc8(%ebp),%eax
086233b5 +0x05ad:  mov    %eax,(%esp)
086233b8 +0x05b0:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
086233bd +0x05b5:  mov    0xc(%ebp),%eax
086233c0 +0x05b8:  add    $0x7c,%eax
086233c3 +0x05bb:  lea    0x18(%eax),%ebx
086233c6 +0x05be:  mov    0xc(%ebp),%eax
086233c9 +0x05c1:  lea    0x7c(%eax),%ecx
086233cc +0x05c4:  lea    -0xcc(%ebp),%eax
086233d2 +0x05ca:  lea    -0xc8(%ebp),%edx
086233d8 +0x05d0:  mov    %edx,0xc(%esp)
086233dc +0x05d4:  mov    %ebx,0x8(%esp)
086233e0 +0x05d8:  mov    %ecx,0x4(%esp)
086233e4 +0x05dc:  mov    %eax,(%esp)
086233e7 +0x05df:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
086233ec +0x05e4:  sub    $0x4,%esp
086233ef +0x05e7:  lea    -0xcc(%ebp),%eax
086233f5 +0x05ed:  mov    %eax,(%esp)
086233f8 +0x05f0:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
086233fd +0x05f5:  mov    %eax,%ebx
086233ff +0x05f7:  movl   $", '",0x4(%esp)
08623407 +0x05ff:  lea    -0xa908(%ebp),%eax
0862340d +0x0605:  mov    %eax,(%esp)
08623410 +0x0608:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623415 +0x060d:  mov    %ebx,0x4(%esp)
08623419 +0x0611:  mov    %eax,(%esp)
0862341c +0x0614:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623421 +0x0619:  movl   $"'",0x4(%esp)
08623429 +0x0621:  mov    %eax,(%esp)
0862342c +0x0624:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623431 +0x0629:  jmp    0862344b <+0x643>
08623433 +0x062b:  mov    %edx,%ebx
08623435 +0x062d:  mov    %eax,%esi
08623437 +0x062f:  lea    -0xcc(%ebp),%eax
0862343d +0x0635:  mov    %eax,(%esp)
08623440 +0x0638:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623445 +0x063d:  mov    %esi,%eax
08623447 +0x063f:  mov    %ebx,%edx
08623449 +0x0641:  jmp    0862345b <+0x653>
0862344b +0x0643:  lea    -0xcc(%ebp),%eax
08623451 +0x0649:  mov    %eax,(%esp)
08623454 +0x064c:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623459 +0x0651:  jmp    08623476 <+0x66e>
0862345b +0x0653:  mov    %edx,%ebx
0862345d +0x0655:  mov    %eax,%esi
0862345f +0x0657:  lea    -0xc8(%ebp),%eax
08623465 +0x065d:  mov    %eax,(%esp)
08623468 +0x0660:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862346d +0x0665:  mov    %esi,%eax
0862346f +0x0667:  mov    %ebx,%edx
08623471 +0x0669:  jmp    08624357 <+0x154f>
08623476 +0x066e:  lea    -0xc8(%ebp),%eax
0862347c +0x0674:  mov    %eax,(%esp)
0862347f +0x0677:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623484 +0x067c:  lea    -0xc0(%ebp),%eax
0862348a +0x0682:  mov    %eax,(%esp)
0862348d +0x0685:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623492 +0x068a:  mov    0xc(%ebp),%eax
08623495 +0x068d:  add    $0xdc,%eax
0862349a +0x0692:  lea    0x8(%eax),%ebx
0862349d +0x0695:  mov    0xc(%ebp),%eax
086234a0 +0x0698:  add    $0xdc,%eax
086234a5 +0x069d:  mov    %eax,%edx
086234a7 +0x069f:  lea    -0xc4(%ebp),%eax
086234ad +0x06a5:  lea    -0xc0(%ebp),%ecx
086234b3 +0x06ab:  mov    %ecx,0xc(%esp)
086234b7 +0x06af:  mov    %ebx,0x8(%esp)
086234bb +0x06b3:  mov    %edx,0x4(%esp)
086234bf +0x06b7:  mov    %eax,(%esp)
086234c2 +0x06ba:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
086234c7 +0x06bf:  sub    $0x4,%esp
086234ca +0x06c2:  lea    -0xc4(%ebp),%eax
086234d0 +0x06c8:  mov    %eax,(%esp)
086234d3 +0x06cb:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
086234d8 +0x06d0:  mov    %eax,%edi
086234da +0x06d2:  lea    -0xb8(%ebp),%eax
086234e0 +0x06d8:  mov    %eax,(%esp)
086234e3 +0x06db:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
086234e8 +0x06e0:  mov    0xc(%ebp),%eax
086234eb +0x06e3:  add    $0xcc,%eax
086234f0 +0x06e8:  lea    0x8(%eax),%ebx
086234f3 +0x06eb:  mov    0xc(%ebp),%eax
086234f6 +0x06ee:  add    $0xcc,%eax
086234fb +0x06f3:  mov    %eax,%edx
086234fd +0x06f5:  lea    -0xbc(%ebp),%eax
08623503 +0x06fb:  lea    -0xb8(%ebp),%ecx
08623509 +0x0701:  mov    %ecx,0xc(%esp)
0862350d +0x0705:  mov    %ebx,0x8(%esp)
08623511 +0x0709:  mov    %edx,0x4(%esp)
08623515 +0x070d:  mov    %eax,(%esp)
08623518 +0x0710:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
0862351d +0x0715:  sub    $0x4,%esp
08623520 +0x0718:  lea    -0xbc(%ebp),%eax
08623526 +0x071e:  mov    %eax,(%esp)
08623529 +0x0721:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
0862352e +0x0726:  mov    %eax,-&_ZL14gUnicodeBuffer+0xb3e8(%ebp)
08623534 +0x072c:  lea    -0xb0(%ebp),%eax
0862353a +0x0732:  mov    %eax,(%esp)
0862353d +0x0735:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623542 +0x073a:  mov    0xc(%ebp),%eax
08623545 +0x073d:  add    $0xbc,%eax
0862354a +0x0742:  lea    0x8(%eax),%ebx
0862354d +0x0745:  mov    0xc(%ebp),%eax
08623550 +0x0748:  add    $0xbc,%eax
08623555 +0x074d:  mov    %eax,%edx
08623557 +0x074f:  lea    -0xb4(%ebp),%eax
0862355d +0x0755:  lea    -0xb0(%ebp),%ecx
08623563 +0x075b:  mov    %ecx,0xc(%esp)
08623567 +0x075f:  mov    %ebx,0x8(%esp)
0862356b +0x0763:  mov    %edx,0x4(%esp)
0862356f +0x0767:  mov    %eax,(%esp)
08623572 +0x076a:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
08623577 +0x076f:  sub    $0x4,%esp
0862357a +0x0772:  lea    -0xb4(%ebp),%eax
08623580 +0x0778:  mov    %eax,(%esp)
08623583 +0x077b:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623588 +0x0780:  mov    %eax,-&_ZL14gUnicodeBuffer+0xb3e4(%ebp)
0862358e +0x0786:  lea    -0xa8(%ebp),%eax
08623594 +0x078c:  mov    %eax,(%esp)
08623597 +0x078f:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
0862359c +0x0794:  mov    0xc(%ebp),%eax
0862359f +0x0797:  add    $0xac,%eax
086235a4 +0x079c:  lea    0x8(%eax),%ebx
086235a7 +0x079f:  mov    0xc(%ebp),%eax
086235aa +0x07a2:  add    $0xac,%eax
086235af +0x07a7:  mov    %eax,%edx
086235b1 +0x07a9:  lea    -0xac(%ebp),%eax
086235b7 +0x07af:  lea    -0xa8(%ebp),%ecx
086235bd +0x07b5:  mov    %ecx,0xc(%esp)
086235c1 +0x07b9:  mov    %ebx,0x8(%esp)
086235c5 +0x07bd:  mov    %edx,0x4(%esp)
086235c9 +0x07c1:  mov    %eax,(%esp)
086235cc +0x07c4:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
086235d1 +0x07c9:  sub    $0x4,%esp
086235d4 +0x07cc:  lea    -0xac(%ebp),%eax
086235da +0x07d2:  mov    %eax,(%esp)
086235dd +0x07d5:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
086235e2 +0x07da:  mov    %eax,%esi
086235e4 +0x07dc:  lea    -0xa0(%ebp),%eax
086235ea +0x07e2:  mov    %eax,(%esp)
086235ed +0x07e5:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
086235f2 +0x07ea:  mov    0xc(%ebp),%eax
086235f5 +0x07ed:  add    $0x9c,%eax
086235fa +0x07f2:  lea    0x8(%eax),%ebx
086235fd +0x07f5:  mov    0xc(%ebp),%eax
08623600 +0x07f8:  add    $0x9c,%eax
08623605 +0x07fd:  mov    %eax,%ecx
08623607 +0x07ff:  lea    -0xa4(%ebp),%edx
0862360d +0x0805:  lea    -0xa0(%ebp),%eax
08623613 +0x080b:  mov    %eax,0xc(%esp)
08623617 +0x080f:  mov    %ebx,0x8(%esp)
0862361b +0x0813:  mov    %ecx,0x4(%esp)
0862361f +0x0817:  mov    %edx,(%esp)
08623622 +0x081a:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
08623627 +0x081f:  sub    $0x4,%esp
0862362a +0x0822:  lea    -0xa4(%ebp),%eax
08623630 +0x0828:  mov    %eax,(%esp)
08623633 +0x082b:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623638 +0x0830:  mov    %eax,%ebx
0862363a +0x0832:  movl   $", '",0x4(%esp)
08623642 +0x083a:  lea    -0xa908(%ebp),%eax
08623648 +0x0840:  mov    %eax,(%esp)
0862364b +0x0843:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623650 +0x0848:  mov    %ebx,0x4(%esp)
08623654 +0x084c:  mov    %eax,(%esp)
08623657 +0x084f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862365c +0x0854:  movl   $";",0x4(%esp)
08623664 +0x085c:  mov    %eax,(%esp)
08623667 +0x085f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862366c +0x0864:  mov    %esi,0x4(%esp)
08623670 +0x0868:  mov    %eax,(%esp)
08623673 +0x086b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623678 +0x0870:  movl   $";",0x4(%esp)
08623680 +0x0878:  mov    %eax,(%esp)
08623683 +0x087b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623688 +0x0880:  mov    -&_ZL14gUnicodeBuffer+0xb3e4(%ebp),%edx
0862368e +0x0886:  mov    %edx,0x4(%esp)
08623692 +0x088a:  mov    %eax,(%esp)
08623695 +0x088d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862369a +0x0892:  movl   $";",0x4(%esp)
086236a2 +0x089a:  mov    %eax,(%esp)
086236a5 +0x089d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086236aa +0x08a2:  mov    -&_ZL14gUnicodeBuffer+0xb3e8(%ebp),%ecx
086236b0 +0x08a8:  mov    %ecx,0x4(%esp)
086236b4 +0x08ac:  mov    %eax,(%esp)
086236b7 +0x08af:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086236bc +0x08b4:  movl   $";",0x4(%esp)
086236c4 +0x08bc:  mov    %eax,(%esp)
086236c7 +0x08bf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086236cc +0x08c4:  mov    %edi,0x4(%esp)
086236d0 +0x08c8:  mov    %eax,(%esp)
086236d3 +0x08cb:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086236d8 +0x08d0:  movl   $"'",0x4(%esp)
086236e0 +0x08d8:  mov    %eax,(%esp)
086236e3 +0x08db:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086236e8 +0x08e0:  jmp    08623702 <+0x8fa>
086236ea +0x08e2:  mov    %edx,%ebx
086236ec +0x08e4:  mov    %eax,%esi
086236ee +0x08e6:  lea    -0xa4(%ebp),%eax
086236f4 +0x08ec:  mov    %eax,(%esp)
086236f7 +0x08ef:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086236fc +0x08f4:  mov    %esi,%eax
086236fe +0x08f6:  mov    %ebx,%edx
08623700 +0x08f8:  jmp    08623712 <+0x90a>
08623702 +0x08fa:  lea    -0xa4(%ebp),%eax
08623708 +0x0900:  mov    %eax,(%esp)
0862370b +0x0903:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623710 +0x0908:  jmp    0862372a <+0x922>
08623712 +0x090a:  mov    %edx,%ebx
08623714 +0x090c:  mov    %eax,%esi
08623716 +0x090e:  lea    -0xa0(%ebp),%eax
0862371c +0x0914:  mov    %eax,(%esp)
0862371f +0x0917:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623724 +0x091c:  mov    %esi,%eax
08623726 +0x091e:  mov    %ebx,%edx
08623728 +0x0920:  jmp    0862373a <+0x932>
0862372a +0x0922:  lea    -0xa0(%ebp),%eax
08623730 +0x0928:  mov    %eax,(%esp)
08623733 +0x092b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623738 +0x0930:  jmp    08623752 <+0x94a>
0862373a +0x0932:  mov    %edx,%ebx
0862373c +0x0934:  mov    %eax,%esi
0862373e +0x0936:  lea    -0xac(%ebp),%eax
08623744 +0x093c:  mov    %eax,(%esp)
08623747 +0x093f:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862374c +0x0944:  mov    %esi,%eax
0862374e +0x0946:  mov    %ebx,%edx
08623750 +0x0948:  jmp    08623762 <+0x95a>
08623752 +0x094a:  lea    -0xac(%ebp),%eax
08623758 +0x0950:  mov    %eax,(%esp)
0862375b +0x0953:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623760 +0x0958:  jmp    0862377a <+0x972>
08623762 +0x095a:  mov    %edx,%ebx
08623764 +0x095c:  mov    %eax,%esi
08623766 +0x095e:  lea    -0xa8(%ebp),%eax
0862376c +0x0964:  mov    %eax,(%esp)
0862376f +0x0967:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623774 +0x096c:  mov    %esi,%eax
08623776 +0x096e:  mov    %ebx,%edx
08623778 +0x0970:  jmp    0862378a <+0x982>
0862377a +0x0972:  lea    -0xa8(%ebp),%eax
08623780 +0x0978:  mov    %eax,(%esp)
08623783 +0x097b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623788 +0x0980:  jmp    086237a2 <+0x99a>
0862378a +0x0982:  mov    %edx,%ebx
0862378c +0x0984:  mov    %eax,%esi
0862378e +0x0986:  lea    -0xb4(%ebp),%eax
08623794 +0x098c:  mov    %eax,(%esp)
08623797 +0x098f:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862379c +0x0994:  mov    %esi,%eax
0862379e +0x0996:  mov    %ebx,%edx
086237a0 +0x0998:  jmp    086237b2 <+0x9aa>
086237a2 +0x099a:  lea    -0xb4(%ebp),%eax
086237a8 +0x09a0:  mov    %eax,(%esp)
086237ab +0x09a3:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086237b0 +0x09a8:  jmp    086237ca <+0x9c2>
086237b2 +0x09aa:  mov    %edx,%ebx
086237b4 +0x09ac:  mov    %eax,%esi
086237b6 +0x09ae:  lea    -0xb0(%ebp),%eax
086237bc +0x09b4:  mov    %eax,(%esp)
086237bf +0x09b7:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086237c4 +0x09bc:  mov    %esi,%eax
086237c6 +0x09be:  mov    %ebx,%edx
086237c8 +0x09c0:  jmp    086237da <+0x9d2>
086237ca +0x09c2:  lea    -0xb0(%ebp),%eax
086237d0 +0x09c8:  mov    %eax,(%esp)
086237d3 +0x09cb:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086237d8 +0x09d0:  jmp    086237f2 <+0x9ea>
086237da +0x09d2:  mov    %edx,%ebx
086237dc +0x09d4:  mov    %eax,%esi
086237de +0x09d6:  lea    -0xbc(%ebp),%eax
086237e4 +0x09dc:  mov    %eax,(%esp)
086237e7 +0x09df:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086237ec +0x09e4:  mov    %esi,%eax
086237ee +0x09e6:  mov    %ebx,%edx
086237f0 +0x09e8:  jmp    08623802 <+0x9fa>
086237f2 +0x09ea:  lea    -0xbc(%ebp),%eax
086237f8 +0x09f0:  mov    %eax,(%esp)
086237fb +0x09f3:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623800 +0x09f8:  jmp    0862381a <+0xa12>
08623802 +0x09fa:  mov    %edx,%ebx
08623804 +0x09fc:  mov    %eax,%esi
08623806 +0x09fe:  lea    -0xb8(%ebp),%eax
0862380c +0x0a04:  mov    %eax,(%esp)
0862380f +0x0a07:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623814 +0x0a0c:  mov    %esi,%eax
08623816 +0x0a0e:  mov    %ebx,%edx
08623818 +0x0a10:  jmp    0862382a <+0xa22>
0862381a +0x0a12:  lea    -0xb8(%ebp),%eax
08623820 +0x0a18:  mov    %eax,(%esp)
08623823 +0x0a1b:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623828 +0x0a20:  jmp    08623842 <+0xa3a>
0862382a +0x0a22:  mov    %edx,%ebx
0862382c +0x0a24:  mov    %eax,%esi
0862382e +0x0a26:  lea    -0xc4(%ebp),%eax
08623834 +0x0a2c:  mov    %eax,(%esp)
08623837 +0x0a2f:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862383c +0x0a34:  mov    %esi,%eax
0862383e +0x0a36:  mov    %ebx,%edx
08623840 +0x0a38:  jmp    08623852 <+0xa4a>
08623842 +0x0a3a:  lea    -0xc4(%ebp),%eax
08623848 +0x0a40:  mov    %eax,(%esp)
0862384b +0x0a43:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623850 +0x0a48:  jmp    0862386d <+0xa65>
08623852 +0x0a4a:  mov    %edx,%ebx
08623854 +0x0a4c:  mov    %eax,%esi
08623856 +0x0a4e:  lea    -0xc0(%ebp),%eax
0862385c +0x0a54:  mov    %eax,(%esp)
0862385f +0x0a57:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623864 +0x0a5c:  mov    %esi,%eax
08623866 +0x0a5e:  mov    %ebx,%edx
08623868 +0x0a60:  jmp    08624357 <+0x154f>
0862386d +0x0a65:  lea    -0xc0(%ebp),%eax
08623873 +0x0a6b:  mov    %eax,(%esp)
08623876 +0x0a6e:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862387b +0x0a73:  lea    -0x98(%ebp),%eax
08623881 +0x0a79:  mov    %eax,(%esp)
08623884 +0x0a7c:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623889 +0x0a81:  mov    0xc(%ebp),%eax
0862388c +0x0a84:  lea    0x1dc(%eax),%edx
08623892 +0x0a8a:  lea    -0x94(%ebp),%eax
08623898 +0x0a90:  mov    %edx,0x4(%esp)
0862389c +0x0a94:  mov    %eax,(%esp)
0862389f +0x0a97:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
086238a4 +0x0a9c:  sub    $0x4,%esp
086238a7 +0x0a9f:  mov    0xc(%ebp),%eax
086238aa +0x0aa2:  lea    0x1dc(%eax),%edx
086238b0 +0x0aa8:  lea    -0x90(%ebp),%eax
086238b6 +0x0aae:  mov    %edx,0x4(%esp)
086238ba +0x0ab2:  mov    %eax,(%esp)
086238bd +0x0ab5:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
086238c2 +0x0aba:  sub    $0x4,%esp
086238c5 +0x0abd:  lea    -0x9c(%ebp),%eax
086238cb +0x0ac3:  lea    -0x98(%ebp),%edx
086238d1 +0x0ac9:  mov    %edx,0xc(%esp)
086238d5 +0x0acd:  mov    -0x94(%ebp),%edx
086238db +0x0ad3:  mov    %edx,0x8(%esp)
086238df +0x0ad7:  mov    -0x90(%ebp),%edx
086238e5 +0x0add:  mov    %edx,0x4(%esp)
086238e9 +0x0ae1:  mov    %eax,(%esp)
086238ec +0x0ae4:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
086238f1 +0x0ae9:  sub    $0x4,%esp
086238f4 +0x0aec:  lea    -0x9c(%ebp),%eax
086238fa +0x0af2:  mov    %eax,(%esp)
086238fd +0x0af5:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623902 +0x0afa:  mov    %eax,%ebx
08623904 +0x0afc:  movl   $", '",0x4(%esp)
0862390c +0x0b04:  lea    -0xa908(%ebp),%eax
08623912 +0x0b0a:  mov    %eax,(%esp)
08623915 +0x0b0d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862391a +0x0b12:  mov    %ebx,0x4(%esp)
0862391e +0x0b16:  mov    %eax,(%esp)
08623921 +0x0b19:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623926 +0x0b1e:  movl   $"'",0x4(%esp)
0862392e +0x0b26:  mov    %eax,(%esp)
08623931 +0x0b29:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623936 +0x0b2e:  jmp    08623950 <+0xb48>
08623938 +0x0b30:  mov    %edx,%ebx
0862393a +0x0b32:  mov    %eax,%esi
0862393c +0x0b34:  lea    -0x9c(%ebp),%eax
08623942 +0x0b3a:  mov    %eax,(%esp)
08623945 +0x0b3d:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862394a +0x0b42:  mov    %esi,%eax
0862394c +0x0b44:  mov    %ebx,%edx
0862394e +0x0b46:  jmp    08623960 <+0xb58>
08623950 +0x0b48:  lea    -0x9c(%ebp),%eax
08623956 +0x0b4e:  mov    %eax,(%esp)
08623959 +0x0b51:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862395e +0x0b56:  jmp    0862397b <+0xb73>
08623960 +0x0b58:  mov    %edx,%ebx
08623962 +0x0b5a:  mov    %eax,%esi
08623964 +0x0b5c:  lea    -0x98(%ebp),%eax
0862396a +0x0b62:  mov    %eax,(%esp)
0862396d +0x0b65:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623972 +0x0b6a:  mov    %esi,%eax
08623974 +0x0b6c:  mov    %ebx,%edx
08623976 +0x0b6e:  jmp    08624357 <+0x154f>
0862397b +0x0b73:  lea    -0x98(%ebp),%eax
08623981 +0x0b79:  mov    %eax,(%esp)
08623984 +0x0b7c:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623989 +0x0b81:  lea    -0x88(%ebp),%eax
0862398f +0x0b87:  mov    %eax,(%esp)
08623992 +0x0b8a:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623997 +0x0b8f:  mov    0xc(%ebp),%eax
0862399a +0x0b92:  lea    0xf4(%eax),%edx
086239a0 +0x0b98:  lea    -0x84(%ebp),%eax
086239a6 +0x0b9e:  mov    %edx,0x4(%esp)
086239aa +0x0ba2:  mov    %eax,(%esp)
086239ad +0x0ba5:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
086239b2 +0x0baa:  sub    $0x4,%esp
086239b5 +0x0bad:  mov    0xc(%ebp),%eax
086239b8 +0x0bb0:  lea    0xf4(%eax),%edx
086239be +0x0bb6:  lea    -0x80(%ebp),%eax
086239c1 +0x0bb9:  mov    %edx,0x4(%esp)
086239c5 +0x0bbd:  mov    %eax,(%esp)
086239c8 +0x0bc0:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
086239cd +0x0bc5:  sub    $0x4,%esp
086239d0 +0x0bc8:  lea    -0x8c(%ebp),%eax
086239d6 +0x0bce:  lea    -0x88(%ebp),%edx
086239dc +0x0bd4:  mov    %edx,0xc(%esp)
086239e0 +0x0bd8:  mov    -0x84(%ebp),%edx
086239e6 +0x0bde:  mov    %edx,0x8(%esp)
086239ea +0x0be2:  mov    -0x80(%ebp),%edx
086239ed +0x0be5:  mov    %edx,0x4(%esp)
086239f1 +0x0be9:  mov    %eax,(%esp)
086239f4 +0x0bec:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
086239f9 +0x0bf1:  sub    $0x4,%esp
086239fc +0x0bf4:  lea    -0x8c(%ebp),%eax
08623a02 +0x0bfa:  mov    %eax,(%esp)
08623a05 +0x0bfd:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623a0a +0x0c02:  mov    %eax,%ebx
08623a0c +0x0c04:  movl   $", '",0x4(%esp)
08623a14 +0x0c0c:  lea    -0xa908(%ebp),%eax
08623a1a +0x0c12:  mov    %eax,(%esp)
08623a1d +0x0c15:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623a22 +0x0c1a:  mov    %ebx,0x4(%esp)
08623a26 +0x0c1e:  mov    %eax,(%esp)
08623a29 +0x0c21:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623a2e +0x0c26:  movl   $"'",0x4(%esp)
08623a36 +0x0c2e:  mov    %eax,(%esp)
08623a39 +0x0c31:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623a3e +0x0c36:  jmp    08623a58 <+0xc50>
08623a40 +0x0c38:  mov    %edx,%ebx
08623a42 +0x0c3a:  mov    %eax,%esi
08623a44 +0x0c3c:  lea    -0x8c(%ebp),%eax
08623a4a +0x0c42:  mov    %eax,(%esp)
08623a4d +0x0c45:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623a52 +0x0c4a:  mov    %esi,%eax
08623a54 +0x0c4c:  mov    %ebx,%edx
08623a56 +0x0c4e:  jmp    08623a68 <+0xc60>
08623a58 +0x0c50:  lea    -0x8c(%ebp),%eax
08623a5e +0x0c56:  mov    %eax,(%esp)
08623a61 +0x0c59:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623a66 +0x0c5e:  jmp    08623a83 <+0xc7b>
08623a68 +0x0c60:  mov    %edx,%ebx
08623a6a +0x0c62:  mov    %eax,%esi
08623a6c +0x0c64:  lea    -0x88(%ebp),%eax
08623a72 +0x0c6a:  mov    %eax,(%esp)
08623a75 +0x0c6d:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623a7a +0x0c72:  mov    %esi,%eax
08623a7c +0x0c74:  mov    %ebx,%edx
08623a7e +0x0c76:  jmp    08624357 <+0x154f>
08623a83 +0x0c7b:  lea    -0x88(%ebp),%eax
08623a89 +0x0c81:  mov    %eax,(%esp)
08623a8c +0x0c84:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623a91 +0x0c89:  lea    -0x78(%ebp),%eax
08623a94 +0x0c8c:  mov    %eax,(%esp)
08623a97 +0x0c8f:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623a9c +0x0c94:  mov    0xc(%ebp),%eax
08623a9f +0x0c97:  lea    0x11c(%eax),%edx
08623aa5 +0x0c9d:  lea    -0x74(%ebp),%eax
08623aa8 +0x0ca0:  mov    %edx,0x4(%esp)
08623aac +0x0ca4:  mov    %eax,(%esp)
08623aaf +0x0ca7:  call   08628d2e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x238c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x238c
08623ab4 +0x0cac:  sub    $0x4,%esp
08623ab7 +0x0caf:  mov    0xc(%ebp),%eax
08623aba +0x0cb2:  lea    0x11c(%eax),%edx
08623ac0 +0x0cb8:  lea    -0x70(%ebp),%eax
08623ac3 +0x0cbb:  mov    %edx,0x4(%esp)
08623ac7 +0x0cbf:  mov    %eax,(%esp)
08623aca +0x0cc2:  call   08628d0a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2368>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2368
08623acf +0x0cc7:  sub    $0x4,%esp
08623ad2 +0x0cca:  lea    -0x7c(%ebp),%eax
08623ad5 +0x0ccd:  lea    -0x78(%ebp),%edx
08623ad8 +0x0cd0:  mov    %edx,0xc(%esp)
08623adc +0x0cd4:  mov    -0x74(%ebp),%edx
08623adf +0x0cd7:  mov    %edx,0x8(%esp)
08623ae3 +0x0cdb:  mov    -0x70(%ebp),%edx
08623ae6 +0x0cde:  mov    %edx,0x4(%esp)
08623aea +0x0ce2:  mov    %eax,(%esp)
08623aed +0x0ce5:  call   08628d54 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x23b2>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x23b2
08623af2 +0x0cea:  sub    $0x4,%esp
08623af5 +0x0ced:  lea    -0x7c(%ebp),%eax
08623af8 +0x0cf0:  mov    %eax,(%esp)
08623afb +0x0cf3:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623b00 +0x0cf8:  mov    %eax,%ebx
08623b02 +0x0cfa:  movl   $", '",0x4(%esp)
08623b0a +0x0d02:  lea    -0xa908(%ebp),%eax
08623b10 +0x0d08:  mov    %eax,(%esp)
08623b13 +0x0d0b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623b18 +0x0d10:  mov    %ebx,0x4(%esp)
08623b1c +0x0d14:  mov    %eax,(%esp)
08623b1f +0x0d17:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623b24 +0x0d1c:  movl   $"'",0x4(%esp)
08623b2c +0x0d24:  mov    %eax,(%esp)
08623b2f +0x0d27:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623b34 +0x0d2c:  jmp    08623b4b <+0xd43>
08623b36 +0x0d2e:  mov    %edx,%ebx
08623b38 +0x0d30:  mov    %eax,%esi
08623b3a +0x0d32:  lea    -0x7c(%ebp),%eax
08623b3d +0x0d35:  mov    %eax,(%esp)
08623b40 +0x0d38:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623b45 +0x0d3d:  mov    %esi,%eax
08623b47 +0x0d3f:  mov    %ebx,%edx
08623b49 +0x0d41:  jmp    08623b58 <+0xd50>
08623b4b +0x0d43:  lea    -0x7c(%ebp),%eax
08623b4e +0x0d46:  mov    %eax,(%esp)
08623b51 +0x0d49:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623b56 +0x0d4e:  jmp    08623b70 <+0xd68>
08623b58 +0x0d50:  mov    %edx,%ebx
08623b5a +0x0d52:  mov    %eax,%esi
08623b5c +0x0d54:  lea    -0x78(%ebp),%eax
08623b5f +0x0d57:  mov    %eax,(%esp)
08623b62 +0x0d5a:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623b67 +0x0d5f:  mov    %esi,%eax
08623b69 +0x0d61:  mov    %ebx,%edx
08623b6b +0x0d63:  jmp    08624357 <+0x154f>
08623b70 +0x0d68:  lea    -0x78(%ebp),%eax
08623b73 +0x0d6b:  mov    %eax,(%esp)
08623b76 +0x0d6e:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623b7b +0x0d73:  mov    0xc(%ebp),%eax
08623b7e +0x0d76:  mov    0x30(%eax),%ebx
08623b81 +0x0d79:  movl   $", ",0x4(%esp)
08623b89 +0x0d81:  lea    -0xa908(%ebp),%eax
08623b8f +0x0d87:  mov    %eax,(%esp)
08623b92 +0x0d8a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623b97 +0x0d8f:  mov    %ebx,0x4(%esp)
08623b9b +0x0d93:  mov    %eax,(%esp)
08623b9e +0x0d96:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08623ba3 +0x0d9b:  mov    0xc(%ebp),%eax
08623ba6 +0x0d9e:  mov    0x34(%eax),%ebx
08623ba9 +0x0da1:  movl   $", ",0x4(%esp)
08623bb1 +0x0da9:  lea    -0xa908(%ebp),%eax
08623bb7 +0x0daf:  mov    %eax,(%esp)
08623bba +0x0db2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623bbf +0x0db7:  mov    %ebx,0x4(%esp)
08623bc3 +0x0dbb:  mov    %eax,(%esp)
08623bc6 +0x0dbe:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08623bcb +0x0dc3:  lea    -0x68(%ebp),%eax
08623bce +0x0dc6:  mov    %eax,(%esp)
08623bd1 +0x0dc9:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623bd6 +0x0dce:  lea    -0x64(%ebp),%eax
08623bd9 +0x0dd1:  lea    -0x108(%ebp),%edx
08623bdf +0x0dd7:  mov    %edx,0x4(%esp)
08623be3 +0x0ddb:  mov    %eax,(%esp)
08623be6 +0x0dde:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08623beb +0x0de3:  sub    $0x4,%esp
08623bee +0x0de6:  lea    -0x60(%ebp),%eax
08623bf1 +0x0de9:  lea    -0x108(%ebp),%edx
08623bf7 +0x0def:  mov    %edx,0x4(%esp)
08623bfb +0x0df3:  mov    %eax,(%esp)
08623bfe +0x0df6:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08623c03 +0x0dfb:  sub    $0x4,%esp
08623c06 +0x0dfe:  lea    -0x6c(%ebp),%eax
08623c09 +0x0e01:  lea    -0x68(%ebp),%edx
08623c0c +0x0e04:  mov    %edx,0xc(%esp)
08623c10 +0x0e08:  mov    -0x64(%ebp),%edx
08623c13 +0x0e0b:  mov    %edx,0x8(%esp)
08623c17 +0x0e0f:  mov    -0x60(%ebp),%edx
08623c1a +0x0e12:  mov    %edx,0x4(%esp)
08623c1e +0x0e16:  mov    %eax,(%esp)
08623c21 +0x0e19:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
08623c26 +0x0e1e:  sub    $0x4,%esp
08623c29 +0x0e21:  lea    -0x6c(%ebp),%eax
08623c2c +0x0e24:  mov    %eax,(%esp)
08623c2f +0x0e27:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623c34 +0x0e2c:  mov    %eax,%ebx
08623c36 +0x0e2e:  movl   $", '",0x4(%esp)
08623c3e +0x0e36:  lea    -0xa908(%ebp),%eax
08623c44 +0x0e3c:  mov    %eax,(%esp)
08623c47 +0x0e3f:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623c4c +0x0e44:  mov    %ebx,0x4(%esp)
08623c50 +0x0e48:  mov    %eax,(%esp)
08623c53 +0x0e4b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623c58 +0x0e50:  movl   $"'",0x4(%esp)
08623c60 +0x0e58:  mov    %eax,(%esp)
08623c63 +0x0e5b:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623c68 +0x0e60:  jmp    08623c7f <+0xe77>
08623c6a +0x0e62:  mov    %edx,%ebx
08623c6c +0x0e64:  mov    %eax,%esi
08623c6e +0x0e66:  lea    -0x6c(%ebp),%eax
08623c71 +0x0e69:  mov    %eax,(%esp)
08623c74 +0x0e6c:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623c79 +0x0e71:  mov    %esi,%eax
08623c7b +0x0e73:  mov    %ebx,%edx
08623c7d +0x0e75:  jmp    08623c8c <+0xe84>
08623c7f +0x0e77:  lea    -0x6c(%ebp),%eax
08623c82 +0x0e7a:  mov    %eax,(%esp)
08623c85 +0x0e7d:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623c8a +0x0e82:  jmp    08623ca4 <+0xe9c>
08623c8c +0x0e84:  mov    %edx,%ebx
08623c8e +0x0e86:  mov    %eax,%esi
08623c90 +0x0e88:  lea    -0x68(%ebp),%eax
08623c93 +0x0e8b:  mov    %eax,(%esp)
08623c96 +0x0e8e:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623c9b +0x0e93:  mov    %esi,%eax
08623c9d +0x0e95:  mov    %ebx,%edx
08623c9f +0x0e97:  jmp    08624357 <+0x154f>
08623ca4 +0x0e9c:  lea    -0x68(%ebp),%eax
08623ca7 +0x0e9f:  mov    %eax,(%esp)
08623caa +0x0ea2:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623caf +0x0ea7:  lea    -0x58(%ebp),%eax
08623cb2 +0x0eaa:  mov    %eax,(%esp)
08623cb5 +0x0ead:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623cba +0x0eb2:  mov    0xc(%ebp),%eax
08623cbd +0x0eb5:  add    $0x100,%eax
08623cc2 +0x0eba:  lea    0x8(%eax),%ebx
08623cc5 +0x0ebd:  mov    0xc(%ebp),%eax
08623cc8 +0x0ec0:  lea    0x100(%eax),%ecx
08623cce +0x0ec6:  lea    -0x5c(%ebp),%eax
08623cd1 +0x0ec9:  lea    -0x58(%ebp),%edx
08623cd4 +0x0ecc:  mov    %edx,0xc(%esp)
08623cd8 +0x0ed0:  mov    %ebx,0x8(%esp)
08623cdc +0x0ed4:  mov    %ecx,0x4(%esp)
08623ce0 +0x0ed8:  mov    %eax,(%esp)
08623ce3 +0x0edb:  call   08628dc8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2426>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2426
08623ce8 +0x0ee0:  sub    $0x4,%esp
08623ceb +0x0ee3:  lea    -0x5c(%ebp),%eax
08623cee +0x0ee6:  mov    %eax,(%esp)
08623cf1 +0x0ee9:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623cf6 +0x0eee:  mov    %eax,%ebx
08623cf8 +0x0ef0:  movl   $", '",0x4(%esp)
08623d00 +0x0ef8:  lea    -0xa908(%ebp),%eax
08623d06 +0x0efe:  mov    %eax,(%esp)
08623d09 +0x0f01:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623d0e +0x0f06:  mov    %ebx,0x4(%esp)
08623d12 +0x0f0a:  mov    %eax,(%esp)
08623d15 +0x0f0d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623d1a +0x0f12:  movl   $"'",0x4(%esp)
08623d22 +0x0f1a:  mov    %eax,(%esp)
08623d25 +0x0f1d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623d2a +0x0f22:  jmp    08623d41 <+0xf39>
08623d2c +0x0f24:  mov    %edx,%ebx
08623d2e +0x0f26:  mov    %eax,%esi
08623d30 +0x0f28:  lea    -0x5c(%ebp),%eax
08623d33 +0x0f2b:  mov    %eax,(%esp)
08623d36 +0x0f2e:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623d3b +0x0f33:  mov    %esi,%eax
08623d3d +0x0f35:  mov    %ebx,%edx
08623d3f +0x0f37:  jmp    08623d4e <+0xf46>
08623d41 +0x0f39:  lea    -0x5c(%ebp),%eax
08623d44 +0x0f3c:  mov    %eax,(%esp)
08623d47 +0x0f3f:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623d4c +0x0f44:  jmp    08623d66 <+0xf5e>
08623d4e +0x0f46:  mov    %edx,%ebx
08623d50 +0x0f48:  mov    %eax,%esi
08623d52 +0x0f4a:  lea    -0x58(%ebp),%eax
08623d55 +0x0f4d:  mov    %eax,(%esp)
08623d58 +0x0f50:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623d5d +0x0f55:  mov    %esi,%eax
08623d5f +0x0f57:  mov    %ebx,%edx
08623d61 +0x0f59:  jmp    08624357 <+0x154f>
08623d66 +0x0f5e:  lea    -0x58(%ebp),%eax
08623d69 +0x0f61:  mov    %eax,(%esp)
08623d6c +0x0f64:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623d71 +0x0f69:  lea    -0x50(%ebp),%eax
08623d74 +0x0f6c:  mov    %eax,(%esp)
08623d77 +0x0f6f:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623d7c +0x0f74:  mov    0xc(%ebp),%eax
08623d7f +0x0f77:  add    $0x138,%eax
08623d84 +0x0f7c:  lea    0x8(%eax),%ebx
08623d87 +0x0f7f:  mov    0xc(%ebp),%eax
08623d8a +0x0f82:  lea    0x138(%eax),%ecx
08623d90 +0x0f88:  lea    -0x54(%ebp),%eax
08623d93 +0x0f8b:  lea    -0x50(%ebp),%edx
08623d96 +0x0f8e:  mov    %edx,0xc(%esp)
08623d9a +0x0f92:  mov    %ebx,0x8(%esp)
08623d9e +0x0f96:  mov    %ecx,0x4(%esp)
08623da2 +0x0f9a:  mov    %eax,(%esp)
08623da5 +0x0f9d:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
08623daa +0x0fa2:  sub    $0x4,%esp
08623dad +0x0fa5:  lea    -0x54(%ebp),%eax
08623db0 +0x0fa8:  mov    %eax,(%esp)
08623db3 +0x0fab:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623db8 +0x0fb0:  mov    %eax,%ebx
08623dba +0x0fb2:  movl   $", '",0x4(%esp)
08623dc2 +0x0fba:  lea    -0xa908(%ebp),%eax
08623dc8 +0x0fc0:  mov    %eax,(%esp)
08623dcb +0x0fc3:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623dd0 +0x0fc8:  mov    %ebx,0x4(%esp)
08623dd4 +0x0fcc:  mov    %eax,(%esp)
08623dd7 +0x0fcf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623ddc +0x0fd4:  movl   $"'",0x4(%esp)
08623de4 +0x0fdc:  mov    %eax,(%esp)
08623de7 +0x0fdf:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623dec +0x0fe4:  jmp    08623e03 <+0xffb>
08623dee +0x0fe6:  mov    %edx,%ebx
08623df0 +0x0fe8:  mov    %eax,%esi
08623df2 +0x0fea:  lea    -0x54(%ebp),%eax
08623df5 +0x0fed:  mov    %eax,(%esp)
08623df8 +0x0ff0:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623dfd +0x0ff5:  mov    %esi,%eax
08623dff +0x0ff7:  mov    %ebx,%edx
08623e01 +0x0ff9:  jmp    08623e10 <+0x1008>
08623e03 +0x0ffb:  lea    -0x54(%ebp),%eax
08623e06 +0x0ffe:  mov    %eax,(%esp)
08623e09 +0x1001:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623e0e +0x1006:  jmp    08623e28 <+0x1020>
08623e10 +0x1008:  mov    %edx,%ebx
08623e12 +0x100a:  mov    %eax,%esi
08623e14 +0x100c:  lea    -0x50(%ebp),%eax
08623e17 +0x100f:  mov    %eax,(%esp)
08623e1a +0x1012:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623e1f +0x1017:  mov    %esi,%eax
08623e21 +0x1019:  mov    %ebx,%edx
08623e23 +0x101b:  jmp    08624357 <+0x154f>
08623e28 +0x1020:  lea    -0x50(%ebp),%eax
08623e2b +0x1023:  mov    %eax,(%esp)
08623e2e +0x1026:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623e33 +0x102b:  lea    -0x48(%ebp),%eax
08623e36 +0x102e:  mov    %eax,(%esp)
08623e39 +0x1031:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
08623e3e +0x1036:  mov    0xc(%ebp),%eax
08623e41 +0x1039:  add    $0x110,%eax
08623e46 +0x103e:  lea    0x8(%eax),%ebx
08623e49 +0x1041:  mov    0xc(%ebp),%eax
08623e4c +0x1044:  lea    0x110(%eax),%ecx
08623e52 +0x104a:  lea    -0x4c(%ebp),%eax
08623e55 +0x104d:  lea    -0x48(%ebp),%edx
08623e58 +0x1050:  mov    %edx,0xc(%esp)
08623e5c +0x1054:  mov    %ebx,0x8(%esp)
08623e60 +0x1058:  mov    %ecx,0x4(%esp)
08623e64 +0x105c:  mov    %eax,(%esp)
08623e67 +0x105f:  call   08628cbc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x231a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x231a
08623e6c +0x1064:  sub    $0x4,%esp
08623e6f +0x1067:  lea    -0x4c(%ebp),%eax
08623e72 +0x106a:  mov    %eax,(%esp)
08623e75 +0x106d:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08623e7a +0x1072:  mov    %eax,%ebx
08623e7c +0x1074:  movl   $", '",0x4(%esp)
08623e84 +0x107c:  lea    -0xa908(%ebp),%eax
08623e8a +0x1082:  mov    %eax,(%esp)
08623e8d +0x1085:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623e92 +0x108a:  mov    %ebx,0x4(%esp)
08623e96 +0x108e:  mov    %eax,(%esp)
08623e99 +0x1091:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623e9e +0x1096:  movl   $"'",0x4(%esp)
08623ea6 +0x109e:  mov    %eax,(%esp)
08623ea9 +0x10a1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623eae +0x10a6:  jmp    08623ec5 <+0x10bd>
08623eb0 +0x10a8:  mov    %edx,%ebx
08623eb2 +0x10aa:  mov    %eax,%esi
08623eb4 +0x10ac:  lea    -0x4c(%ebp),%eax
08623eb7 +0x10af:  mov    %eax,(%esp)
08623eba +0x10b2:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623ebf +0x10b7:  mov    %esi,%eax
08623ec1 +0x10b9:  mov    %ebx,%edx
08623ec3 +0x10bb:  jmp    08623ed2 <+0x10ca>
08623ec5 +0x10bd:  lea    -0x4c(%ebp),%eax
08623ec8 +0x10c0:  mov    %eax,(%esp)
08623ecb +0x10c3:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623ed0 +0x10c8:  jmp    08623eea <+0x10e2>
08623ed2 +0x10ca:  mov    %edx,%ebx
08623ed4 +0x10cc:  mov    %eax,%esi
08623ed6 +0x10ce:  lea    -0x48(%ebp),%eax
08623ed9 +0x10d1:  mov    %eax,(%esp)
08623edc +0x10d4:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623ee1 +0x10d9:  mov    %esi,%eax
08623ee3 +0x10db:  mov    %ebx,%edx
08623ee5 +0x10dd:  jmp    08624357 <+0x154f>
08623eea +0x10e2:  lea    -0x48(%ebp),%eax
08623eed +0x10e5:  mov    %eax,(%esp)
08623ef0 +0x10e8:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08623ef5 +0x10ed:  mov    0xc(%ebp),%eax
08623ef8 +0x10f0:  mov    0x16c(%eax),%edi
08623efe +0x10f6:  mov    -0x20(%ebp),%edx
08623f01 +0x10f9:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
08623f07 +0x10ff:  shl    $0xc,%edx
08623f0a +0x1102:  add    %edx,%eax
08623f0c +0x1104:  mov    %eax,%ebx
08623f0e +0x1106:  addl   $0x1,-0x20(%ebp)
08623f12 +0x110a:  mov    0xc(%ebp),%eax
08623f15 +0x110d:  add    $0x164,%eax
08623f1a +0x1112:  mov    %eax,(%esp)
08623f1d +0x1115:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08623f22 +0x111a:  mov    %ebx,0x8(%esp)
08623f26 +0x111e:  mov    %eax,0x4(%esp)
08623f2a +0x1122:  mov    -0x24(%ebp),%eax
08623f2d +0x1125:  mov    %eax,(%esp)
08623f30 +0x1128:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08623f35 +0x112d:  mov    %eax,%ebx
08623f37 +0x112f:  mov    0xc(%ebp),%eax
08623f3a +0x1132:  mov    0x168(%eax),%eax
08623f40 +0x1138:  mov    %eax,-&_ZL14gUnicodeBuffer+0xb3e0(%ebp)
08623f46 +0x113e:  mov    -0x20(%ebp),%edx
08623f49 +0x1141:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
08623f4f +0x1147:  shl    $0xc,%edx
08623f52 +0x114a:  add    %edx,%eax
08623f54 +0x114c:  mov    %eax,%esi
08623f56 +0x114e:  addl   $0x1,-0x20(%ebp)
08623f5a +0x1152:  mov    0xc(%ebp),%eax
08623f5d +0x1155:  add    $0x160,%eax
08623f62 +0x115a:  mov    %eax,(%esp)
08623f65 +0x115d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08623f6a +0x1162:  mov    %esi,0x8(%esp)
08623f6e +0x1166:  mov    %eax,0x4(%esp)
08623f72 +0x116a:  mov    -0x24(%ebp),%eax
08623f75 +0x116d:  mov    %eax,(%esp)
08623f78 +0x1170:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08623f7d +0x1175:  mov    %eax,%esi
08623f7f +0x1177:  movl   $", '",0x4(%esp)
08623f87 +0x117f:  lea    -0xa908(%ebp),%eax
08623f8d +0x1185:  mov    %eax,(%esp)
08623f90 +0x1188:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623f95 +0x118d:  mov    %esi,0x4(%esp)
08623f99 +0x1191:  mov    %eax,(%esp)
08623f9c +0x1194:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623fa1 +0x1199:  movl   $",",0x4(%esp)
08623fa9 +0x11a1:  mov    %eax,(%esp)
08623fac +0x11a4:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623fb1 +0x11a9:  mov    -&_ZL14gUnicodeBuffer+0xb3e0(%ebp),%edx
08623fb7 +0x11af:  mov    %edx,0x4(%esp)
08623fbb +0x11b3:  mov    %eax,(%esp)
08623fbe +0x11b6:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08623fc3 +0x11bb:  movl   $",",0x4(%esp)
08623fcb +0x11c3:  mov    %eax,(%esp)
08623fce +0x11c6:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623fd3 +0x11cb:  mov    %ebx,0x4(%esp)
08623fd7 +0x11cf:  mov    %eax,(%esp)
08623fda +0x11d2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623fdf +0x11d7:  movl   $",",0x4(%esp)
08623fe7 +0x11df:  mov    %eax,(%esp)
08623fea +0x11e2:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08623fef +0x11e7:  mov    %edi,0x4(%esp)
08623ff3 +0x11eb:  mov    %eax,(%esp)
08623ff6 +0x11ee:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
08623ffb +0x11f3:  movl   $"'",0x4(%esp)
08624003 +0x11fb:  mov    %eax,(%esp)
08624006 +0x11fe:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862400b +0x1203:  mov    -0x20(%ebp),%edx
0862400e +0x1206:  lea    -&_ZL14gUnicodeBuffer+0xb3dc(%ebp),%eax
08624014 +0x120c:  shl    $0xc,%edx
08624017 +0x120f:  add    %edx,%eax
08624019 +0x1211:  mov    %eax,%ebx
0862401b +0x1213:  addl   $0x1,-0x20(%ebp)
0862401f +0x1217:  mov    0xc(%ebp),%eax
08624022 +0x121a:  add    $0x194,%eax
08624027 +0x121f:  mov    %eax,(%esp)
0862402a +0x1222:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0862402f +0x1227:  mov    %ebx,0x8(%esp)
08624033 +0x122b:  mov    %eax,0x4(%esp)
08624037 +0x122f:  mov    -0x24(%ebp),%eax
0862403a +0x1232:  mov    %eax,(%esp)
0862403d +0x1235:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08624042 +0x123a:  mov    %eax,%ebx
08624044 +0x123c:  movl   $", '",0x4(%esp)
0862404c +0x1244:  lea    -0xa908(%ebp),%eax
08624052 +0x124a:  mov    %eax,(%esp)
08624055 +0x124d:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862405a +0x1252:  mov    %ebx,0x4(%esp)
0862405e +0x1256:  mov    %eax,(%esp)
08624061 +0x1259:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624066 +0x125e:  movl   $"'",0x4(%esp)
0862406e +0x1266:  mov    %eax,(%esp)
08624071 +0x1269:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624076 +0x126e:  mov    0xc(%ebp),%eax
08624079 +0x1271:  mov    0x244(%eax),%ebx
0862407f +0x1277:  mov    0xc(%ebp),%eax
08624082 +0x127a:  mov    0x240(%eax),%esi
08624088 +0x1280:  movl   $", '",0x4(%esp)
08624090 +0x1288:  lea    -0xa908(%ebp),%eax
08624096 +0x128e:  mov    %eax,(%esp)
08624099 +0x1291:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862409e +0x1296:  mov    %esi,0x4(%esp)
086240a2 +0x129a:  mov    %eax,(%esp)
086240a5 +0x129d:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086240aa +0x12a2:  movl   $",",0x4(%esp)
086240b2 +0x12aa:  mov    %eax,(%esp)
086240b5 +0x12ad:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086240ba +0x12b2:  mov    %ebx,0x4(%esp)
086240be +0x12b6:  mov    %eax,(%esp)
086240c1 +0x12b9:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086240c6 +0x12be:  movl   $"'",0x4(%esp)
086240ce +0x12c6:  mov    %eax,(%esp)
086240d1 +0x12c9:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086240d6 +0x12ce:  lea    -0x40(%ebp),%eax
086240d9 +0x12d1:  mov    %eax,(%esp)
086240dc +0x12d4:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
086240e1 +0x12d9:  mov    0xc(%ebp),%eax
086240e4 +0x12dc:  lea    0x198(%eax),%edx
086240ea +0x12e2:  lea    -0x3c(%ebp),%eax
086240ed +0x12e5:  mov    %edx,0x4(%esp)
086240f1 +0x12e9:  mov    %eax,(%esp)
086240f4 +0x12ec:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
086240f9 +0x12f1:  sub    $0x4,%esp
086240fc +0x12f4:  mov    0xc(%ebp),%eax
086240ff +0x12f7:  lea    0x198(%eax),%edx
08624105 +0x12fd:  lea    -0x38(%ebp),%eax
08624108 +0x1300:  mov    %edx,0x4(%esp)
0862410c +0x1304:  mov    %eax,(%esp)
0862410f +0x1307:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
08624114 +0x130c:  sub    $0x4,%esp
08624117 +0x130f:  lea    -0x44(%ebp),%eax
0862411a +0x1312:  lea    -0x40(%ebp),%edx
0862411d +0x1315:  mov    %edx,0xc(%esp)
08624121 +0x1319:  mov    -0x3c(%ebp),%edx
08624124 +0x131c:  mov    %edx,0x8(%esp)
08624128 +0x1320:  mov    -0x38(%ebp),%edx
0862412b +0x1323:  mov    %edx,0x4(%esp)
0862412f +0x1327:  mov    %eax,(%esp)
08624132 +0x132a:  call   0839519f <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24c3f>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24c3f
08624137 +0x132f:  sub    $0x4,%esp
0862413a +0x1332:  lea    -0x44(%ebp),%eax
0862413d +0x1335:  mov    %eax,(%esp)
08624140 +0x1338:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
08624145 +0x133d:  mov    %eax,%ebx
08624147 +0x133f:  movl   $", '",0x4(%esp)
0862414f +0x1347:  lea    -0xa908(%ebp),%eax
08624155 +0x134d:  mov    %eax,(%esp)
08624158 +0x1350:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862415d +0x1355:  mov    %ebx,0x4(%esp)
08624161 +0x1359:  mov    %eax,(%esp)
08624164 +0x135c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624169 +0x1361:  movl   $"'",0x4(%esp)
08624171 +0x1369:  mov    %eax,(%esp)
08624174 +0x136c:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624179 +0x1371:  jmp    08624190 <+0x1388>
0862417b +0x1373:  mov    %edx,%ebx
0862417d +0x1375:  mov    %eax,%esi
0862417f +0x1377:  lea    -0x44(%ebp),%eax
08624182 +0x137a:  mov    %eax,(%esp)
08624185 +0x137d:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862418a +0x1382:  mov    %esi,%eax
0862418c +0x1384:  mov    %ebx,%edx
0862418e +0x1386:  jmp    0862419d <+0x1395>
08624190 +0x1388:  lea    -0x44(%ebp),%eax
08624193 +0x138b:  mov    %eax,(%esp)
08624196 +0x138e:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
0862419b +0x1393:  jmp    086241b5 <+0x13ad>
0862419d +0x1395:  mov    %edx,%ebx
0862419f +0x1397:  mov    %eax,%esi
086241a1 +0x1399:  lea    -0x40(%ebp),%eax
086241a4 +0x139c:  mov    %eax,(%esp)
086241a7 +0x139f:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086241ac +0x13a4:  mov    %esi,%eax
086241ae +0x13a6:  mov    %ebx,%edx
086241b0 +0x13a8:  jmp    08624357 <+0x154f>
086241b5 +0x13ad:  lea    -0x40(%ebp),%eax
086241b8 +0x13b0:  mov    %eax,(%esp)
086241bb +0x13b3:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086241c0 +0x13b8:  lea    -0x30(%ebp),%eax
086241c3 +0x13bb:  mov    %eax,(%esp)
086241c6 +0x13be:  call   08375f58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xff24>  ; global constructors keyed to CServerEvent::m_nExpRate+0xff24
086241cb +0x13c3:  mov    0xc(%ebp),%eax
086241ce +0x13c6:  lea    0x1a8(%eax),%edx
086241d4 +0x13cc:  lea    -0x2c(%ebp),%eax
086241d7 +0x13cf:  mov    %edx,0x4(%esp)
086241db +0x13d3:  mov    %eax,(%esp)
086241de +0x13d6:  call   08396e02 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x268a2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x268a2
086241e3 +0x13db:  sub    $0x4,%esp
086241e6 +0x13de:  mov    0xc(%ebp),%eax
086241e9 +0x13e1:  lea    0x1a8(%eax),%edx
086241ef +0x13e7:  lea    -0x28(%ebp),%eax
086241f2 +0x13ea:  mov    %edx,0x4(%esp)
086241f6 +0x13ee:  mov    %eax,(%esp)
086241f9 +0x13f1:  call   08396d82 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x26822>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x26822
086241fe +0x13f6:  sub    $0x4,%esp
08624201 +0x13f9:  lea    -0x34(%ebp),%eax
08624204 +0x13fc:  lea    -0x30(%ebp),%edx
08624207 +0x13ff:  mov    %edx,0xc(%esp)
0862420b +0x1403:  mov    -0x2c(%ebp),%edx
0862420e +0x1406:  mov    %edx,0x8(%esp)
08624212 +0x140a:  mov    -0x28(%ebp),%edx
08624215 +0x140d:  mov    %edx,0x4(%esp)
08624219 +0x1411:  mov    %eax,(%esp)
0862421c +0x1414:  call   08628e16 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x2474>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x2474
08624221 +0x1419:  sub    $0x4,%esp
08624224 +0x141c:  lea    -0x34(%ebp),%eax
08624227 +0x141f:  mov    %eax,(%esp)
0862422a +0x1422:  call   08376034 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x5ad4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x5ad4
0862422f +0x1427:  mov    %eax,%ebx
08624231 +0x1429:  movl   $", '",0x4(%esp)
08624239 +0x1431:  lea    -0xa908(%ebp),%eax
0862423f +0x1437:  mov    %eax,(%esp)
08624242 +0x143a:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624247 +0x143f:  mov    %ebx,0x4(%esp)
0862424b +0x1443:  mov    %eax,(%esp)
0862424e +0x1446:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624253 +0x144b:  movl   $"'",0x4(%esp)
0862425b +0x1453:  mov    %eax,(%esp)
0862425e +0x1456:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
08624263 +0x145b:  jmp    0862427a <+0x1472>
08624265 +0x145d:  mov    %edx,%ebx
08624267 +0x145f:  mov    %eax,%esi
08624269 +0x1461:  lea    -0x34(%ebp),%eax
0862426c +0x1464:  mov    %eax,(%esp)
0862426f +0x1467:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624274 +0x146c:  mov    %esi,%eax
08624276 +0x146e:  mov    %ebx,%edx
08624278 +0x1470:  jmp    08624287 <+0x147f>
0862427a +0x1472:  lea    -0x34(%ebp),%eax
0862427d +0x1475:  mov    %eax,(%esp)
08624280 +0x1478:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624285 +0x147d:  jmp    0862429f <+0x1497>
08624287 +0x147f:  mov    %edx,%ebx
08624289 +0x1481:  mov    %eax,%esi
0862428b +0x1483:  lea    -0x30(%ebp),%eax
0862428e +0x1486:  mov    %eax,(%esp)
08624291 +0x1489:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
08624296 +0x148e:  mov    %esi,%eax
08624298 +0x1490:  mov    %ebx,%edx
0862429a +0x1492:  jmp    08624357 <+0x154f>
0862429f +0x1497:  lea    -0x30(%ebp),%eax
086242a2 +0x149a:  mov    %eax,(%esp)
086242a5 +0x149d:  call   0837f580 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xf020>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xf020
086242aa +0x14a2:  mov    0xc(%ebp),%eax
086242ad +0x14a5:  mov    0x220(%eax),%ebx
086242b3 +0x14ab:  mov    0xc(%ebp),%eax
086242b6 +0x14ae:  mov    0x21c(%eax),%esi
086242bc +0x14b4:  movl   $", '",0x4(%esp)
086242c4 +0x14bc:  lea    -0xa908(%ebp),%eax
086242ca +0x14c2:  mov    %eax,(%esp)
086242cd +0x14c5:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086242d2 +0x14ca:  mov    %esi,0x4(%esp)
086242d6 +0x14ce:  mov    %eax,(%esp)
086242d9 +0x14d1:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086242de +0x14d6:  movl   $",",0x4(%esp)
086242e6 +0x14de:  mov    %eax,(%esp)
086242e9 +0x14e1:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
086242ee +0x14e6:  mov    %ebx,0x4(%esp)
086242f2 +0x14ea:  mov    %eax,(%esp)
086242f5 +0x14ed:  call   08626a70 <_GLOBAL__I__Z22GetSocketTypeCharactert+0xce>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xce
086242fa +0x14f2:  movl   $"'",0x4(%esp)
08624302 +0x14fa:  mov    %eax,(%esp)
08624305 +0x14fd:  call   08626a4a <_GLOBAL__I__Z22GetSocketTypeCharactert+0xa8>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0xa8
0862430a +0x1502:  lea    -0xa908(%ebp),%eax
08624310 +0x1508:  mov    %eax,(%esp)
08624313 +0x150b:  call   086269e2 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x40>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x40
08624318 +0x1510:  mov    %eax,0x8(%esp)
0862431c +0x1514:  movl   $"inSert into skill_info(job_index, skill_index, module_type, name, name2, basic_explain, skill_explain, purchase_cost, type, skill_class, growtype_maximum_level, second_growtype_maximum_level, skill_fitness_growtype, skill_fitness_second_growtype, consume_item, required_level, required_level_range, pre_required_skill, consume_mp, cool_time, casting_time, icon, command_key_explain, skill_command_advantage, static_data, level_info, start_cool_time) values(%s)",0x4(%esp)
08624324 +0x151c:  mov    -0x24(%ebp),%eax
08624327 +0x151f:  mov    %eax,(%esp)
0862432a +0x1522:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862432f +0x1527:  movl   $0x1,0x4(%esp)
08624337 +0x152f:  mov    -0x24(%ebp),%eax
0862433a +0x1532:  mov    %eax,(%esp)
0862433d +0x1535:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08624342 +0x153a:  xor    $0x1,%eax
08624345 +0x153d:  test   %al,%al
08624347 +0x153f:  je     08624350 <+0x1548>
08624349 +0x1541:  mov    $0x0,%ebx
0862434e +0x1546:  jmp    08624375 <+0x156d>
08624350 +0x1548:  mov    $0x1,%ebx
08624355 +0x154d:  jmp    08624375 <+0x156d>
08624357 +0x154f:  mov    %edx,%ebx
08624359 +0x1551:  mov    %eax,%esi
0862435b +0x1553:  lea    -0x108(%ebp),%eax
08624361 +0x1559:  mov    %eax,(%esp)
08624364 +0x155c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08624369 +0x1561:  mov    %esi,%eax
0862436b +0x1563:  mov    %ebx,%edx
0862436d +0x1565:  mov    %eax,(%esp)
08624370 +0x1568:  call   08ae3750 <_Unwind_Resume>
08624375 +0x156d:  lea    -0x108(%ebp),%eax
0862437b +0x1573:  mov    %eax,(%esp)
0862437e +0x1576:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08624383 +0x157b:  mov    %ebx,%eax
08624385 +0x157d:  lea    -0xc(%ebp),%esp
08624388 +0x1580:  add    $0x0,%esp
0862438b +0x1583:  pop    %ebx
0862438c +0x1584:  pop    %esi
0862438d +0x1585:  pop    %edi
0862438e +0x1586:  pop    %ebp
0862438f +0x1587:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_skill_info @ 0x8622e08

/* sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int) */

bool __thiscall
sync_script::CSyncScript::insert_skill_info
          (CSyncScript *this,STSkillScript *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CStreamBuffer *pCVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  byte bVar17;
  char acStack_1590c [45056];
  CStreamBuffer local_a90c [40960];
  char local_90c [1024];
  char local_50c [1024];
  vector<int,std::allocator<int>> local_10c [12];
  cMyTrace local_100 [16];
  cMyTrace local_f0 [16];
  CStringMaker local_e0 [4];
  CStringMaker local_dc [4];
  undefined4 local_d8;
  undefined4 local_d4;
  CStringMaker local_d0 [4];
  CStringMaker local_cc [4];
  CStringMaker local_c8 [4];
  CStringMaker local_c4 [4];
  CStringMaker local_c0 [4];
  CStringMaker local_bc [4];
  CStringMaker local_b8 [4];
  CStringMaker local_b4 [4];
  CStringMaker local_b0 [4];
  CStringMaker local_ac [4];
  CStringMaker local_a8 [4];
  CStringMaker local_a4 [4];
  CStringMaker local_a0 [4];
  CStringMaker local_9c [4];
  undefined4 local_98;
  undefined4 local_94;
  CStringMaker local_90 [4];
  CStringMaker local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  CStringMaker local_80 [4];
  CStringMaker local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  CStringMaker local_70 [4];
  CStringMaker local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  CStringMaker local_60 [4];
  CStringMaker local_5c [4];
  CStringMaker local_58 [4];
  CStringMaker local_54 [4];
  CStringMaker local_50 [4];
  CStringMaker local_4c [4];
  CStringMaker local_48 [4];
  CStringMaker local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  CStringMaker local_38 [4];
  CStringMaker local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  MySQL *local_28;
  int local_24;
  uint local_20;
  
  bVar17 = 0;
  if (*this == (CSyncScript)0x1) {
    local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::vector<int,std::allocator<int>>::vector(local_10c);
    local_20 = 0;
    while (uVar3 = std::vector<int,std::allocator<int>>::size
                             ((vector<int,std::allocator<int>> *)(param_1 + 0x44)), local_20 < uVar3
          ) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(param_1 + 0x44),local_20);
                    /* try { // try from 08622e84 to 08623264 has its CatchHandler @ 08624357 */
      std::vector<int,std::allocator<int>>::push_back(local_10c,piVar2);
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(param_1 + 0x50),local_20);
      std::vector<int,std::allocator<int>>::push_back(local_10c,piVar2);
      local_20 = local_20 + 1;
    }
    memset(acStack_1590c,0,0xb000);
    local_24 = 0;
    pcVar4 = local_50c;
    for (iVar13 = 0x100; iVar13 != 0; iVar13 = iVar13 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar17 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar1 = CodePage::script2Database(pcVar4,local_50c);
    if (cVar1 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_100,
                         "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)"
                         ,0x7ff,5);
      cMyTrace::operator()
                (local_100,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)",0x7ff)
      ;
    }
    pcVar4 = local_90c;
    for (iVar13 = 0x100; iVar13 != 0; iVar13 = iVar13 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar17 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 8));
    cVar1 = CodePage::script2Database(pcVar4,local_90c);
    if (cVar1 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 8));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_f0,
                         "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)"
                         ,0x807,5);
      cMyTrace::operator()
                (local_f0,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)",0x807)
      ;
    }
    CStreamBuffer::CStreamBuffer(local_a90c);
    CStreamBuffer::operator<<(local_a90c,param_2);
    iVar13 = *(int *)param_1;
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,param_3);
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)GetEscapeString(local_28,local_50c,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)GetEscapeString(local_28,local_90c,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0x10));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xc));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    CStringMaker::CStringMaker(local_dc);
                    /* try { // try from 08623278 to 086232c6 has its CatchHandler @ 08623336 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_e0,local_d4,local_d8,local_dc);
                    /* try { // try from 086232d3 to 0862330b has its CatchHandler @ 0862330e */
    pcVar4 = (char *)CStringMaker::c_str(local_e0);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 0862332f to 08623333 has its CatchHandler @ 08623336 */
    CStringMaker::~CStringMaker(local_e0);
                    /* try { // try from 0862335a to 086233bc has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_dc);
    iVar13 = *(int *)(param_1 + 0x5c);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    iVar13 = *(int *)(param_1 + 0x60);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    CStringMaker::CStringMaker(local_cc);
                    /* try { // try from 086233e7 to 086233eb has its CatchHandler @ 0862345b */
    std::for_each<int*,sync_script::CStringMaker>(local_d0,param_1 + 0x7c,param_1 + 0x94,local_cc);
                    /* try { // try from 086233f8 to 08623430 has its CatchHandler @ 08623433 */
    pcVar4 = (char *)CStringMaker::c_str(local_d0);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623454 to 08623458 has its CatchHandler @ 0862345b */
    CStringMaker::~CStringMaker(local_d0);
                    /* try { // try from 0862347f to 08623491 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_cc);
    CStringMaker::CStringMaker(local_c4);
                    /* try { // try from 086234c2 to 086234c6 has its CatchHandler @ 08623852 */
    std::for_each<int*,sync_script::CStringMaker>(local_c8,param_1 + 0xdc,param_1 + 0xe4,local_c4);
                    /* try { // try from 086234d3 to 086234e7 has its CatchHandler @ 0862382a */
    pcVar4 = (char *)CStringMaker::c_str(local_c8);
    CStringMaker::CStringMaker(local_bc);
                    /* try { // try from 08623518 to 0862351c has its CatchHandler @ 08623802 */
    std::for_each<int*,sync_script::CStringMaker>(local_c0,param_1 + 0xcc,param_1 + 0xd4,local_bc);
                    /* try { // try from 08623529 to 08623541 has its CatchHandler @ 086237da */
    pcVar9 = (char *)CStringMaker::c_str(local_c0);
    CStringMaker::CStringMaker(local_b4);
                    /* try { // try from 08623572 to 08623576 has its CatchHandler @ 086237b2 */
    std::for_each<int*,sync_script::CStringMaker>(local_b8,param_1 + 0xbc,param_1 + 0xc4,local_b4);
                    /* try { // try from 08623583 to 0862359b has its CatchHandler @ 0862378a */
    pcVar10 = (char *)CStringMaker::c_str(local_b8);
    CStringMaker::CStringMaker(local_ac);
                    /* try { // try from 086235cc to 086235d0 has its CatchHandler @ 08623762 */
    std::for_each<int*,sync_script::CStringMaker>(local_b0,param_1 + 0xac,param_1 + 0xb4,local_ac);
                    /* try { // try from 086235dd to 086235f1 has its CatchHandler @ 0862373a */
    pcVar11 = (char *)CStringMaker::c_str(local_b0);
    CStringMaker::CStringMaker(local_a4);
                    /* try { // try from 08623622 to 08623626 has its CatchHandler @ 08623712 */
    std::for_each<int*,sync_script::CStringMaker>(local_a8,param_1 + 0x9c,param_1 + 0xa4,local_a4);
                    /* try { // try from 08623633 to 086236e7 has its CatchHandler @ 086236ea */
    pcVar12 = (char *)CStringMaker::c_str(local_a8);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar12);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar11);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar10);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar9);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 0862370b to 0862370f has its CatchHandler @ 08623712 */
    CStringMaker::~CStringMaker(local_a8);
                    /* try { // try from 08623733 to 08623737 has its CatchHandler @ 0862373a */
    CStringMaker::~CStringMaker(local_a4);
                    /* try { // try from 0862375b to 0862375f has its CatchHandler @ 08623762 */
    CStringMaker::~CStringMaker(local_b0);
                    /* try { // try from 08623783 to 08623787 has its CatchHandler @ 0862378a */
    CStringMaker::~CStringMaker(local_ac);
                    /* try { // try from 086237ab to 086237af has its CatchHandler @ 086237b2 */
    CStringMaker::~CStringMaker(local_b8);
                    /* try { // try from 086237d3 to 086237d7 has its CatchHandler @ 086237da */
    CStringMaker::~CStringMaker(local_b4);
                    /* try { // try from 086237fb to 086237ff has its CatchHandler @ 08623802 */
    CStringMaker::~CStringMaker(local_c0);
                    /* try { // try from 08623823 to 08623827 has its CatchHandler @ 0862382a */
    CStringMaker::~CStringMaker(local_bc);
                    /* try { // try from 0862384b to 0862384f has its CatchHandler @ 08623852 */
    CStringMaker::~CStringMaker(local_c8);
                    /* try { // try from 08623876 to 08623888 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_c4);
    CStringMaker::CStringMaker(local_9c);
                    /* try { // try from 0862389f to 086238f0 has its CatchHandler @ 08623960 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_a0,local_94,local_98,local_9c);
                    /* try { // try from 086238fd to 08623935 has its CatchHandler @ 08623938 */
    pcVar4 = (char *)CStringMaker::c_str(local_a0);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623959 to 0862395d has its CatchHandler @ 08623960 */
    CStringMaker::~CStringMaker(local_a0);
                    /* try { // try from 08623984 to 08623996 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_9c);
    CStringMaker::CStringMaker(local_8c);
                    /* try { // try from 086239ad to 086239f8 has its CatchHandler @ 08623a68 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_90,local_84,local_88,local_8c);
                    /* try { // try from 08623a05 to 08623a3d has its CatchHandler @ 08623a40 */
    pcVar4 = (char *)CStringMaker::c_str(local_90);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623a61 to 08623a65 has its CatchHandler @ 08623a68 */
    CStringMaker::~CStringMaker(local_90);
                    /* try { // try from 08623a8c to 08623a9b has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_8c);
    CStringMaker::CStringMaker(local_7c);
                    /* try { // try from 08623aaf to 08623af1 has its CatchHandler @ 08623b58 */
    std::vector<SkillUseItem,std::allocator<SkillUseItem>>::end();
    std::vector<SkillUseItem,std::allocator<SkillUseItem>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<SkillUseItem*,std::vector<SkillUseItem,std::allocator<SkillUseItem>>>,sync_script::CStringMaker>
              (local_80,local_74,local_78,local_7c);
                    /* try { // try from 08623afb to 08623b33 has its CatchHandler @ 08623b36 */
    pcVar4 = (char *)CStringMaker::c_str(local_80);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623b51 to 08623b55 has its CatchHandler @ 08623b58 */
    CStringMaker::~CStringMaker(local_80);
                    /* try { // try from 08623b76 to 08623bd5 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_7c);
    iVar13 = *(int *)(param_1 + 0x30);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    iVar13 = *(int *)(param_1 + 0x34);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    CStringMaker::CStringMaker(local_6c);
                    /* try { // try from 08623be6 to 08623c25 has its CatchHandler @ 08623c8c */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_70,local_64,local_68,local_6c);
                    /* try { // try from 08623c2f to 08623c67 has its CatchHandler @ 08623c6a */
    pcVar4 = (char *)CStringMaker::c_str(local_70);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623c85 to 08623c89 has its CatchHandler @ 08623c8c */
    CStringMaker::~CStringMaker(local_70);
                    /* try { // try from 08623caa to 08623cb9 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_6c);
    CStringMaker::CStringMaker(local_5c);
                    /* try { // try from 08623ce3 to 08623ce7 has its CatchHandler @ 08623d4e */
    std::for_each<float*,sync_script::CStringMaker>
              (local_60,param_1 + 0x100,param_1 + 0x108,local_5c);
                    /* try { // try from 08623cf1 to 08623d29 has its CatchHandler @ 08623d2c */
    pcVar4 = (char *)CStringMaker::c_str(local_60);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623d47 to 08623d4b has its CatchHandler @ 08623d4e */
    CStringMaker::~CStringMaker(local_60);
                    /* try { // try from 08623d6c to 08623d7b has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_5c);
    CStringMaker::CStringMaker(local_54);
                    /* try { // try from 08623da5 to 08623da9 has its CatchHandler @ 08623e10 */
    std::for_each<int*,sync_script::CStringMaker>(local_58,param_1 + 0x138,param_1 + 0x140,local_54)
    ;
                    /* try { // try from 08623db3 to 08623deb has its CatchHandler @ 08623dee */
    pcVar4 = (char *)CStringMaker::c_str(local_58);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623e09 to 08623e0d has its CatchHandler @ 08623e10 */
    CStringMaker::~CStringMaker(local_58);
                    /* try { // try from 08623e2e to 08623e3d has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_54);
    CStringMaker::CStringMaker(local_4c);
                    /* try { // try from 08623e67 to 08623e6b has its CatchHandler @ 08623ed2 */
    std::for_each<int*,sync_script::CStringMaker>(local_50,param_1 + 0x110,param_1 + 0x118,local_4c)
    ;
                    /* try { // try from 08623e75 to 08623ead has its CatchHandler @ 08623eb0 */
    pcVar4 = (char *)CStringMaker::c_str(local_50);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623ecb to 08623ecf has its CatchHandler @ 08623ed2 */
    CStringMaker::~CStringMaker(local_50);
                    /* try { // try from 08623ef0 to 086240e0 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_4c);
    iVar13 = *(int *)(param_1 + 0x16c);
    iVar14 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0x164));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar14);
    iVar14 = *(int *)(param_1 + 0x168);
    iVar15 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar9 = (char *)std::string::c_str((string *)(param_1 + 0x160));
    pcVar9 = (char *)GetEscapeString(local_28,pcVar9,acStack_1590c + iVar15);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar9);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar14);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar13);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0x194));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = *(int *)(param_1 + 0x244);
    iVar14 = *(int *)(param_1 + 0x240);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar14);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar13);
    CStreamBuffer::operator<<(pCVar8,"\'");
    CStringMaker::CStringMaker(local_44);
                    /* try { // try from 086240f4 to 08624136 has its CatchHandler @ 0862419d */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_48,local_3c,local_40,local_44);
                    /* try { // try from 08624140 to 08624178 has its CatchHandler @ 0862417b */
    pcVar4 = (char *)CStringMaker::c_str(local_48);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08624196 to 0862419a has its CatchHandler @ 0862419d */
    CStringMaker::~CStringMaker(local_48);
                    /* try { // try from 086241bb to 086241ca has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_44);
    CStringMaker::CStringMaker(local_34);
                    /* try { // try from 086241de to 08624220 has its CatchHandler @ 08624287 */
    std::
    vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
    ::end();
    std::
    vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
    ::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<std::vector<float,std::allocator<float>>*,std::vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>>,sync_script::CStringMaker>
              (local_38,local_2c,local_30,local_34);
                    /* try { // try from 0862422a to 08624262 has its CatchHandler @ 08624265 */
    pcVar4 = (char *)CStringMaker::c_str(local_38);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08624280 to 08624284 has its CatchHandler @ 08624287 */
    CStringMaker::~CStringMaker(local_38);
                    /* try { // try from 086242a5 to 08624341 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_34);
    iVar13 = *(int *)(param_1 + 0x220);
    iVar14 = *(int *)(param_1 + 0x21c);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar14);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar13);
    CStreamBuffer::operator<<(pCVar8,"\'");
    uVar5 = CStreamBuffer::c_str(local_a90c);
    MySQL::set_query(local_28,
                     "inSert into skill_info(job_index, skill_index, module_type, name, name2, basic_explain, skill_explain, purchase_cost, type, skill_class, growtype_maximum_level, second_growtype_maximum_level, skill_fitness_growtype, skill_fitness_second_growtype, consume_item, required_level, required_level_range, pre_required_skill, consume_mp, cool_time, casting_time, icon, command_key_explain, skill_command_advantage, static_data, level_info, start_cool_time) values(%s)"
                     ,uVar5);
    cVar1 = MySQL::exec(local_28,true);
    bVar16 = cVar1 == '\x01';
    std::vector<int,std::allocator<int>>::~vector(local_10c);
  }
  else {
    bVar16 = true;
  }
  return bVar16;
}
```
