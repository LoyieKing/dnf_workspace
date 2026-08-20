# LoadItemInfoMasterScript

`_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc`

`sync_script::CSyncScript::LoadItemInfoMasterScript(char const*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625064` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625064  _ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc
#           sync_script::CSyncScript::LoadItemInfoMasterScript(char const*)
# range [0x08625064, 0x08625695]
08625064 +0x000:  push   %ebp
08625065 +0x001:  mov    %esp,%ebp
08625067 +0x003:  push   %esi
08625068 +0x004:  push   %ebx
08625069 +0x005:  sub    $0x90,%esp
0862506f +0x00b:  mov    0xc(%ebp),%eax
08625072 +0x00e:  mov    %eax,0x4(%esp)
08625076 +0x012:  movl   $"",(%esp)
0862507d +0x019:  call   088bbd29 <_Z18loadRDARScriptFilePKcS0_>  ; loadRDARScriptFile(char const*, char const*)
08625082 +0x01e:  xor    $0x1,%eax
08625085 +0x021:  test   %al,%al
08625087 +0x023:  je     08625093 <+0x2f>
08625089 +0x025:  mov    $0x0,%ebx
0862508e +0x02a:  jmp    08625689 <+0x625>
08625093 +0x02f:  lea    -0x68(%ebp),%eax
08625096 +0x032:  mov    %eax,(%esp)
08625099 +0x035:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0862509e +0x03a:  lea    -0x6c(%ebp),%eax
086250a1 +0x03d:  mov    %eax,(%esp)
086250a4 +0x040:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
086250a9 +0x045:  lea    -0x70(%ebp),%eax
086250ac +0x048:  mov    %eax,(%esp)
086250af +0x04b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
086250b4 +0x050:  jmp    086250b7 <+0x53>
086250b6 +0x052:  nop
086250b7 +0x053:  movl   $0x1,0x4(%esp)
086250bf +0x05b:  lea    -0x68(%ebp),%eax
086250c2 +0x05e:  mov    %eax,(%esp)
086250c5 +0x061:  call   088bc85f <_Z8ScanTypeRSsb>  ; ScanType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, bool)
086250ca +0x066:  xor    $0x1,%eax
086250cd +0x069:  test   %al,%al
086250cf +0x06b:  jne    08625619 <+0x5b5>
086250d5 +0x071:  movl   $"[master type]",0x4(%esp)
086250dd +0x079:  lea    -0x68(%ebp),%eax
086250e0 +0x07c:  mov    %eax,(%esp)
086250e3 +0x07f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
086250e8 +0x084:  test   %al,%al
086250ea +0x086:  je     08625132 <+0xce>
086250ec +0x088:  movl   $0x0,(%esp)
086250f3 +0x08f:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
086250f8 +0x094:  mov    %eax,-0x1c(%ebp)
086250fb +0x097:  lea    -0x6c(%ebp),%eax
086250fe +0x09a:  mov    %eax,(%esp)
08625101 +0x09d:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08625106 +0x0a2:  mov    -0x1c(%ebp),%eax
08625109 +0x0a5:  mov    %al,-0x64(%ebp)
0862510c +0x0a8:  mov    0x8(%ebp),%eax
0862510f +0x0ab:  lea    0x64(%eax),%edx
08625112 +0x0ae:  lea    -0x64(%ebp),%eax
08625115 +0x0b1:  mov    %eax,0x4(%esp)
08625119 +0x0b5:  mov    %edx,(%esp)
0862511c +0x0b8:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
08625121 +0x0bd:  lea    -0x6c(%ebp),%edx
08625124 +0x0c0:  mov    %edx,0x4(%esp)
08625128 +0x0c4:  mov    %eax,(%esp)
0862512b +0x0c7:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08625130 +0x0cc:  jmp    086250b7 <+0x53>
08625132 +0x0ce:  movl   $"[type addition]",0x4(%esp)
0862513a +0x0d6:  lea    -0x68(%ebp),%eax
0862513d +0x0d9:  mov    %eax,(%esp)
08625140 +0x0dc:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08625145 +0x0e1:  test   %al,%al
08625147 +0x0e3:  je     08625178 <+0x114>
08625149 +0x0e5:  movl   $0x0,(%esp)
08625150 +0x0ec:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08625155 +0x0f1:  mov    %eax,-0x1c(%ebp)
08625158 +0x0f4:  mov    -0x1c(%ebp),%eax
0862515b +0x0f7:  mov    %al,-0x63(%ebp)
0862515e +0x0fa:  mov    0x8(%ebp),%eax
08625161 +0x0fd:  lea    0x4(%eax),%edx
08625164 +0x100:  lea    -0x63(%ebp),%eax
08625167 +0x103:  mov    %eax,0x4(%esp)
0862516b +0x107:  mov    %edx,(%esp)
0862516e +0x10a:  call   080e4d84 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xaa>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xaa
08625173 +0x10f:  jmp    086250b7 <+0x53>
08625178 +0x114:  movl   $"[reverse desc]",0x4(%esp)
08625180 +0x11c:  lea    -0x68(%ebp),%eax
08625183 +0x11f:  mov    %eax,(%esp)
08625186 +0x122:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
0862518b +0x127:  test   %al,%al
0862518d +0x129:  je     086251be <+0x15a>
0862518f +0x12b:  movl   $0x0,(%esp)
08625196 +0x132:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0862519b +0x137:  mov    %eax,-0x1c(%ebp)
0862519e +0x13a:  mov    -0x1c(%ebp),%eax
086251a1 +0x13d:  mov    %al,-0x62(%ebp)
086251a4 +0x140:  mov    0x8(%ebp),%eax
086251a7 +0x143:  lea    0x10(%eax),%edx
086251aa +0x146:  lea    -0x62(%ebp),%eax
086251ad +0x149:  mov    %eax,0x4(%esp)
086251b1 +0x14d:  mov    %edx,(%esp)
086251b4 +0x150:  call   080e4d84 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0xaa>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0xaa
086251b9 +0x155:  jmp    086250b7 <+0x53>
086251be +0x15a:  movl   $"[material type]",0x4(%esp)
086251c6 +0x162:  lea    -0x68(%ebp),%eax
086251c9 +0x165:  mov    %eax,(%esp)
086251cc +0x168:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
086251d1 +0x16d:  test   %al,%al
086251d3 +0x16f:  je     0862521e <+0x1ba>
086251d5 +0x171:  movl   $0x0,(%esp)
086251dc +0x178:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
086251e1 +0x17d:  mov    %eax,-0x1c(%ebp)
086251e4 +0x180:  lea    -0x6c(%ebp),%eax
086251e7 +0x183:  mov    %eax,(%esp)
086251ea +0x186:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
086251ef +0x18b:  mov    -0x1c(%ebp),%eax
086251f2 +0x18e:  mov    %al,-0x61(%ebp)
086251f5 +0x191:  mov    0x8(%ebp),%eax
086251f8 +0x194:  lea    0x7c(%eax),%edx
086251fb +0x197:  lea    -0x61(%ebp),%eax
086251fe +0x19a:  mov    %eax,0x4(%esp)
08625202 +0x19e:  mov    %edx,(%esp)
08625205 +0x1a1:  call   08628fae <_GLOBAL__I__Z22GetSocketTypeCharactert+0x260c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x260c
0862520a +0x1a6:  lea    -0x6c(%ebp),%edx
0862520d +0x1a9:  mov    %edx,0x4(%esp)
08625211 +0x1ad:  mov    %eax,(%esp)
08625214 +0x1b0:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08625219 +0x1b5:  jmp    086250b7 <+0x53>
0862521e +0x1ba:  movl   $"[weapon type]",0x4(%esp)
08625226 +0x1c2:  lea    -0x68(%ebp),%eax
08625229 +0x1c5:  mov    %eax,(%esp)
0862522c +0x1c8:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08625231 +0x1cd:  test   %al,%al
08625233 +0x1cf:  je     08625365 <+0x301>
08625239 +0x1d5:  lea    -0x6c(%ebp),%eax
0862523c +0x1d8:  mov    %eax,(%esp)
0862523f +0x1db:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08625244 +0x1e0:  movl   $0x0,(%esp)
0862524b +0x1e7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08625250 +0x1ec:  mov    %eax,-0x1c(%ebp)
08625253 +0x1ef:  movl   $0x0,(%esp)
0862525a +0x1f6:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0862525f +0x1fb:  mov    %eax,-0x18(%ebp)
08625262 +0x1fe:  movl   $0x0,(%esp)
08625269 +0x205:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0862526e +0x20a:  mov    %eax,-0x14(%ebp)
08625271 +0x20d:  lea    -0x70(%ebp),%eax
08625274 +0x210:  mov    %eax,(%esp)
08625277 +0x213:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0862527c +0x218:  lea    -0x6c(%ebp),%eax
0862527f +0x21b:  mov    %eax,(%esp)
08625282 +0x21e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08625287 +0x223:  mov    %eax,(%esp)
0862528a +0x226:  call   088be57e <_Z15getCharacterJobPKc>  ; getCharacterJob(char const*)
0862528f +0x22b:  mov    %eax,-0xc(%ebp)
08625292 +0x22e:  lea    -0x70(%ebp),%eax
08625295 +0x231:  mov    %eax,0x4(%esp)
08625299 +0x235:  lea    -0x54(%ebp),%eax
0862529c +0x238:  mov    %eax,(%esp)
0862529f +0x23b:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
086252a4 +0x240:  mov    -0x14(%ebp),%eax
086252a7 +0x243:  movzwl %ax,%ecx
086252aa +0x246:  mov    -0x18(%ebp),%eax
086252ad +0x249:  movzbl %al,%edx
086252b0 +0x24c:  mov    -0x1c(%ebp),%eax
086252b3 +0x24f:  movzbl %al,%eax
086252b6 +0x252:  lea    -0x54(%ebp),%ebx
086252b9 +0x255:  mov    %ebx,0x14(%esp)
086252bd +0x259:  mov    %ecx,0x10(%esp)
086252c1 +0x25d:  mov    %edx,0xc(%esp)
086252c5 +0x261:  mov    %eax,0x8(%esp)
086252c9 +0x265:  movl   $0x0,0x4(%esp)
086252d1 +0x26d:  lea    -0x60(%ebp),%eax
086252d4 +0x270:  mov    %eax,(%esp)
086252d7 +0x273:  call   08626c3c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x29a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x29a
086252dc +0x278:  mov    -0x18(%ebp),%eax
086252df +0x27b:  mov    %eax,0x8(%esp)
086252e3 +0x27f:  mov    -0xc(%ebp),%eax
086252e6 +0x282:  mov    %eax,0x4(%esp)
086252ea +0x286:  lea    -0x50(%ebp),%eax
086252ed +0x289:  mov    %eax,(%esp)
086252f0 +0x28c:  call   08626ae2 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x140>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x140
086252f5 +0x291:  mov    0x8(%ebp),%eax
086252f8 +0x294:  lea    0x34(%eax),%edx
086252fb +0x297:  lea    -0x50(%ebp),%eax
086252fe +0x29a:  mov    %eax,0x4(%esp)
08625302 +0x29e:  mov    %edx,(%esp)
08625305 +0x2a1:  call   0862840a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1a68>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1a68
0862530a +0x2a6:  lea    -0x60(%ebp),%edx
0862530d +0x2a9:  mov    %edx,0x4(%esp)
08625311 +0x2ad:  mov    %eax,(%esp)
08625314 +0x2b0:  call   08627c28 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1286>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1286
08625319 +0x2b5:  jmp    08625330 <+0x2cc>
0862531b +0x2b7:  mov    %edx,%ebx
0862531d +0x2b9:  mov    %eax,%esi
0862531f +0x2bb:  lea    -0x60(%ebp),%eax
08625322 +0x2be:  mov    %eax,(%esp)
08625325 +0x2c1:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
0862532a +0x2c6:  mov    %esi,%eax
0862532c +0x2c8:  mov    %ebx,%edx
0862532e +0x2ca:  jmp    0862533d <+0x2d9>
08625330 +0x2cc:  lea    -0x60(%ebp),%eax
08625333 +0x2cf:  mov    %eax,(%esp)
08625336 +0x2d2:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
0862533b +0x2d7:  jmp    08625355 <+0x2f1>
0862533d +0x2d9:  mov    %edx,%ebx
0862533f +0x2db:  mov    %eax,%esi
08625341 +0x2dd:  lea    -0x54(%ebp),%eax
08625344 +0x2e0:  mov    %eax,(%esp)
08625347 +0x2e3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862534c +0x2e8:  mov    %esi,%eax
0862534e +0x2ea:  mov    %ebx,%edx
08625350 +0x2ec:  jmp    0862562c <+0x5c8>
08625355 +0x2f1:  lea    -0x54(%ebp),%eax
08625358 +0x2f4:  mov    %eax,(%esp)
0862535b +0x2f7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625360 +0x2fc:  jmp    086250b7 <+0x53>
08625365 +0x301:  movl   $"[armor type]",0x4(%esp)
0862536d +0x309:  lea    -0x68(%ebp),%eax
08625370 +0x30c:  mov    %eax,(%esp)
08625373 +0x30f:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08625378 +0x314:  test   %al,%al
0862537a +0x316:  je     086254ef <+0x48b>
08625380 +0x31c:  lea    -0x6c(%ebp),%eax
08625383 +0x31f:  mov    %eax,(%esp)
08625386 +0x322:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0862538b +0x327:  movl   $0x0,(%esp)
08625392 +0x32e:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08625397 +0x333:  mov    %eax,-0x1c(%ebp)
0862539a +0x336:  movl   $0x0,(%esp)
086253a1 +0x33d:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
086253a6 +0x342:  mov    %eax,-0x18(%ebp)
086253a9 +0x345:  movl   $0x0,(%esp)
086253b0 +0x34c:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
086253b5 +0x351:  mov    %eax,-0x14(%ebp)
086253b8 +0x354:  lea    -0x70(%ebp),%eax
086253bb +0x357:  mov    %eax,(%esp)
086253be +0x35a:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
086253c3 +0x35f:  lea    -0x70(%ebp),%eax
086253c6 +0x362:  mov    %eax,0x4(%esp)
086253ca +0x366:  lea    -0x3c(%ebp),%eax
086253cd +0x369:  mov    %eax,(%esp)
086253d0 +0x36c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
086253d5 +0x371:  mov    -0x14(%ebp),%eax
086253d8 +0x374:  movzwl %ax,%ecx
086253db +0x377:  mov    -0x18(%ebp),%eax
086253de +0x37a:  movzbl %al,%edx
086253e1 +0x37d:  mov    -0x1c(%ebp),%eax
086253e4 +0x380:  movzbl %al,%eax
086253e7 +0x383:  lea    -0x3c(%ebp),%ebx
086253ea +0x386:  mov    %ebx,0x14(%esp)
086253ee +0x38a:  mov    %ecx,0x10(%esp)
086253f2 +0x38e:  mov    %edx,0xc(%esp)
086253f6 +0x392:  mov    %eax,0x8(%esp)
086253fa +0x396:  movl   $0x0,0x4(%esp)
08625402 +0x39e:  lea    -0x48(%ebp),%eax
08625405 +0x3a1:  mov    %eax,(%esp)
08625408 +0x3a4:  call   08626c3c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x29a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x29a
0862540d +0x3a9:  lea    -0x6c(%ebp),%eax
08625410 +0x3ac:  mov    %eax,0x4(%esp)
08625414 +0x3b0:  lea    -0x30(%ebp),%eax
08625417 +0x3b3:  mov    %eax,(%esp)
0862541a +0x3b6:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0862541f +0x3bb:  mov    -0x18(%ebp),%eax
08625422 +0x3be:  movzbl %al,%eax
08625425 +0x3c1:  lea    -0x30(%ebp),%edx
08625428 +0x3c4:  mov    %edx,0x8(%esp)
0862542c +0x3c8:  mov    %eax,0x4(%esp)
08625430 +0x3cc:  lea    -0x38(%ebp),%eax
08625433 +0x3cf:  mov    %eax,(%esp)
08625436 +0x3d2:  call   08626b3e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x19c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x19c
0862543b +0x3d7:  mov    0x8(%ebp),%eax
0862543e +0x3da:  lea    0x4c(%eax),%edx
08625441 +0x3dd:  lea    -0x38(%ebp),%eax
08625444 +0x3e0:  mov    %eax,0x4(%esp)
08625448 +0x3e4:  mov    %edx,(%esp)
0862544b +0x3e7:  call   0862859c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1bfa>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1bfa
08625450 +0x3ec:  lea    -0x48(%ebp),%edx
08625453 +0x3ef:  mov    %edx,0x4(%esp)
08625457 +0x3f3:  mov    %eax,(%esp)
0862545a +0x3f6:  call   08627c28 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1286>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1286
0862545f +0x3fb:  jmp    08625476 <+0x412>
08625461 +0x3fd:  mov    %edx,%ebx
08625463 +0x3ff:  mov    %eax,%esi
08625465 +0x401:  lea    -0x38(%ebp),%eax
08625468 +0x404:  mov    %eax,(%esp)
0862546b +0x407:  call   08627c7e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x12dc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x12dc
08625470 +0x40c:  mov    %esi,%eax
08625472 +0x40e:  mov    %ebx,%edx
08625474 +0x410:  jmp    08625483 <+0x41f>
08625476 +0x412:  lea    -0x38(%ebp),%eax
08625479 +0x415:  mov    %eax,(%esp)
0862547c +0x418:  call   08627c7e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x12dc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x12dc
08625481 +0x41d:  jmp    08625498 <+0x434>
08625483 +0x41f:  mov    %edx,%ebx
08625485 +0x421:  mov    %eax,%esi
08625487 +0x423:  lea    -0x30(%ebp),%eax
0862548a +0x426:  mov    %eax,(%esp)
0862548d +0x429:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625492 +0x42e:  mov    %esi,%eax
08625494 +0x430:  mov    %ebx,%edx
08625496 +0x432:  jmp    086254a5 <+0x441>
08625498 +0x434:  lea    -0x30(%ebp),%eax
0862549b +0x437:  mov    %eax,(%esp)
0862549e +0x43a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086254a3 +0x43f:  jmp    086254ba <+0x456>
086254a5 +0x441:  mov    %edx,%ebx
086254a7 +0x443:  mov    %eax,%esi
086254a9 +0x445:  lea    -0x48(%ebp),%eax
086254ac +0x448:  mov    %eax,(%esp)
086254af +0x44b:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
086254b4 +0x450:  mov    %esi,%eax
086254b6 +0x452:  mov    %ebx,%edx
086254b8 +0x454:  jmp    086254c7 <+0x463>
086254ba +0x456:  lea    -0x48(%ebp),%eax
086254bd +0x459:  mov    %eax,(%esp)
086254c0 +0x45c:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
086254c5 +0x461:  jmp    086254df <+0x47b>
086254c7 +0x463:  mov    %edx,%ebx
086254c9 +0x465:  mov    %eax,%esi
086254cb +0x467:  lea    -0x3c(%ebp),%eax
086254ce +0x46a:  mov    %eax,(%esp)
086254d1 +0x46d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086254d6 +0x472:  mov    %esi,%eax
086254d8 +0x474:  mov    %ebx,%edx
086254da +0x476:  jmp    0862562c <+0x5c8>
086254df +0x47b:  lea    -0x3c(%ebp),%eax
086254e2 +0x47e:  mov    %eax,(%esp)
086254e5 +0x481:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
086254ea +0x486:  jmp    086250b7 <+0x53>
086254ef +0x48b:  movl   $"[item type]",0x4(%esp)
086254f7 +0x493:  lea    -0x68(%ebp),%eax
086254fa +0x496:  mov    %eax,(%esp)
086254fd +0x499:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08625502 +0x49e:  test   %al,%al
08625504 +0x4a0:  je     086250b6 <+0x52>
0862550a +0x4a6:  lea    -0x6c(%ebp),%eax
0862550d +0x4a9:  mov    %eax,(%esp)
08625510 +0x4ac:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
08625515 +0x4b1:  movl   $0x0,(%esp)
0862551c +0x4b8:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08625521 +0x4bd:  mov    %eax,-0x1c(%ebp)
08625524 +0x4c0:  movl   $0x0,(%esp)
0862552b +0x4c7:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
08625530 +0x4cc:  mov    %eax,-0x18(%ebp)
08625533 +0x4cf:  movl   $0x0,(%esp)
0862553a +0x4d6:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0862553f +0x4db:  mov    %eax,-0x14(%ebp)
08625542 +0x4de:  movl   $0x0,(%esp)
08625549 +0x4e5:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
0862554e +0x4ea:  mov    %eax,-0x10(%ebp)
08625551 +0x4ed:  lea    -0x70(%ebp),%eax
08625554 +0x4f0:  mov    %eax,(%esp)
08625557 +0x4f3:  call   088bc7a2 <_Z7ScanStrPSs>  ; ScanStr(std::basic_string<char, std::char_traits<char>, std::allocator<char> >*)
0862555c +0x4f8:  lea    -0x70(%ebp),%eax
0862555f +0x4fb:  mov    %eax,0x4(%esp)
08625563 +0x4ff:  lea    -0x20(%ebp),%eax
08625566 +0x502:  mov    %eax,(%esp)
08625569 +0x505:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0862556e +0x50a:  mov    -0x10(%ebp),%eax
08625571 +0x50d:  movzwl %ax,%ebx
08625574 +0x510:  mov    -0x14(%ebp),%eax
08625577 +0x513:  movzbl %al,%ecx
0862557a +0x516:  mov    -0x18(%ebp),%eax
0862557d +0x519:  movzbl %al,%edx
08625580 +0x51c:  cmpl   $0x0,-0x1c(%ebp)
08625584 +0x520:  setne  %al
08625587 +0x523:  movzbl %al,%eax
0862558a +0x526:  lea    -0x20(%ebp),%esi
0862558d +0x529:  mov    %esi,0x14(%esp)
08625591 +0x52d:  mov    %ebx,0x10(%esp)
08625595 +0x531:  mov    %ecx,0xc(%esp)
08625599 +0x535:  mov    %edx,0x8(%esp)
0862559d +0x539:  mov    %eax,0x4(%esp)
086255a1 +0x53d:  lea    -0x2c(%ebp),%eax
086255a4 +0x540:  mov    %eax,(%esp)
086255a7 +0x543:  call   08626c3c <_GLOBAL__I__Z22GetSocketTypeCharactert+0x29a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x29a
086255ac +0x548:  mov    0x8(%ebp),%eax
086255af +0x54b:  lea    0x1c(%eax),%edx
086255b2 +0x54e:  lea    -0x6c(%ebp),%eax
086255b5 +0x551:  mov    %eax,0x4(%esp)
086255b9 +0x555:  mov    %edx,(%esp)
086255bc +0x558:  call   086282a8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1906>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1906
086255c1 +0x55d:  lea    -0x2c(%ebp),%edx
086255c4 +0x560:  mov    %edx,0x4(%esp)
086255c8 +0x564:  mov    %eax,(%esp)
086255cb +0x567:  call   08627c28 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1286>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1286
086255d0 +0x56c:  jmp    086255e7 <+0x583>
086255d2 +0x56e:  mov    %edx,%ebx
086255d4 +0x570:  mov    %eax,%esi
086255d6 +0x572:  lea    -0x2c(%ebp),%eax
086255d9 +0x575:  mov    %eax,(%esp)
086255dc +0x578:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
086255e1 +0x57d:  mov    %esi,%eax
086255e3 +0x57f:  mov    %ebx,%edx
086255e5 +0x581:  jmp    086255f4 <+0x590>
086255e7 +0x583:  lea    -0x2c(%ebp),%eax
086255ea +0x586:  mov    %eax,(%esp)
086255ed +0x589:  call   08627c12 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1270>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1270
086255f2 +0x58e:  jmp    08625609 <+0x5a5>
086255f4 +0x590:  mov    %edx,%ebx
086255f6 +0x592:  mov    %eax,%esi
086255f8 +0x594:  lea    -0x20(%ebp),%eax
086255fb +0x597:  mov    %eax,(%esp)
086255fe +0x59a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625603 +0x59f:  mov    %esi,%eax
08625605 +0x5a1:  mov    %ebx,%edx
08625607 +0x5a3:  jmp    0862562c <+0x5c8>
08625609 +0x5a5:  lea    -0x20(%ebp),%eax
0862560c +0x5a8:  mov    %eax,(%esp)
0862560f +0x5ab:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625614 +0x5b0:  jmp    086250b7 <+0x53>
08625619 +0x5b5:  nop
0862561a +0x5b6:  mov    $0x1,%ebx
0862561f +0x5bb:  lea    -0x70(%ebp),%eax
08625622 +0x5be:  mov    %eax,(%esp)
08625625 +0x5c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862562a +0x5c6:  jmp    08625656 <+0x5f2>
0862562c +0x5c8:  mov    %edx,%ebx
0862562e +0x5ca:  mov    %eax,%esi
08625630 +0x5cc:  lea    -0x70(%ebp),%eax
08625633 +0x5cf:  mov    %eax,(%esp)
08625636 +0x5d2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0862563b +0x5d7:  mov    %esi,%eax
0862563d +0x5d9:  mov    %ebx,%edx
0862563f +0x5db:  jmp    08625641 <+0x5dd>
08625641 +0x5dd:  mov    %edx,%ebx
08625643 +0x5df:  mov    %eax,%esi
08625645 +0x5e1:  lea    -0x6c(%ebp),%eax
08625648 +0x5e4:  mov    %eax,(%esp)
0862564b +0x5e7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625650 +0x5ec:  mov    %esi,%eax
08625652 +0x5ee:  mov    %ebx,%edx
08625654 +0x5f0:  jmp    08625663 <+0x5ff>
08625656 +0x5f2:  lea    -0x6c(%ebp),%eax
08625659 +0x5f5:  mov    %eax,(%esp)
0862565c +0x5f8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625661 +0x5fd:  jmp    0862567e <+0x61a>
08625663 +0x5ff:  mov    %edx,%ebx
08625665 +0x601:  mov    %eax,%esi
08625667 +0x603:  lea    -0x68(%ebp),%eax
0862566a +0x606:  mov    %eax,(%esp)
0862566d +0x609:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625672 +0x60e:  mov    %esi,%eax
08625674 +0x610:  mov    %ebx,%edx
08625676 +0x612:  mov    %eax,(%esp)
08625679 +0x615:  call   08ae3750 <_Unwind_Resume>
0862567e +0x61a:  lea    -0x68(%ebp),%eax
08625681 +0x61d:  mov    %eax,(%esp)
08625684 +0x620:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08625689 +0x625:  mov    %ebx,%eax
0862568b +0x627:  add    $0x90,%esp
08625691 +0x62d:  pop    %ebx
08625692 +0x62e:  pop    %esi
08625693 +0x62f:  pop    %ebp
08625694 +0x630:  ret
08625695 +0x631:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::LoadItemInfoMasterScript @ 0x8625064

/* sync_script::CSyncScript::LoadItemInfoMasterScript(char const*) */

undefined4 __thiscall
sync_script::CSyncScript::LoadItemInfoMasterScript(CSyncScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  char *pcVar4;
  SITEMTYPE *pSVar5;
  undefined4 uVar6;
  string local_74 [4];
  string local_70;
  string local_6c;
  uchar local_68;
  uchar local_67;
  uchar local_66;
  uchar local_65;
  SITEMTYPE local_64 [12];
  string local_58 [4];
  SWEAPONTYPE local_54 [8];
  SITEMTYPE local_4c [12];
  string local_40 [4];
  SARMORTYPE local_3c [8];
  string local_34 [4];
  SITEMTYPE local_30 [12];
  string local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_6c);
                    /* try { // try from 086250a4 to 086250a8 has its CatchHandler @ 08625663 */
    std::string::string((string *)&local_70);
                    /* try { // try from 086250af to 086250b3 has its CatchHandler @ 08625641 */
    std::string::string(local_74);
    while( true ) {
                    /* try { // try from 086250c5 to 086252a3 has its CatchHandler @ 0862562c */
      cVar1 = ScanType((string *)&local_6c,true);
      if (cVar1 != '\x01') break;
      bVar2 = std::operator==(&local_6c,"[master type]");
      if (bVar2) {
        local_20 = ScanInt((bool *)0x0);
        ScanStr((string *)&local_70);
        local_68 = (uchar)local_20;
        psVar3 = (string *)
                 std::
                 map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                 ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                               *)(this + 100),&local_68);
        std::string::operator=(psVar3,(string *)&local_70);
      }
      else {
        bVar2 = std::operator==(&local_6c,"[type addition]");
        if (bVar2) {
          local_20 = ScanInt((bool *)0x0);
          local_67 = (uchar)local_20;
          std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                    ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4),&local_67);
        }
        else {
          bVar2 = std::operator==(&local_6c,"[reverse desc]");
          if (bVar2) {
            local_20 = ScanInt((bool *)0x0);
            local_66 = (uchar)local_20;
            std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                      ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
                       &local_66);
          }
          else {
            bVar2 = std::operator==(&local_6c,"[material type]");
            if (bVar2) {
              local_20 = ScanInt((bool *)0x0);
              ScanStr((string *)&local_70);
              local_65 = (uchar)local_20;
              psVar3 = (string *)
                       std::
                       map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                       ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                                     *)(this + 0x7c),&local_65);
              std::string::operator=(psVar3,(string *)&local_70);
            }
            else {
              bVar2 = std::operator==(&local_6c,"[weapon type]");
              if (bVar2) {
                ScanStr((string *)&local_70);
                local_20 = ScanInt((bool *)0x0);
                local_1c = ScanInt((bool *)0x0);
                local_18 = ScanInt((bool *)0x0);
                ScanStr(local_74);
                pcVar4 = (char *)std::string::c_str((string *)&local_70);
                local_10 = getCharacterJob(pcVar4);
                std::string::string(local_58,local_74);
                    /* try { // try from 086252d7 to 086252db has its CatchHandler @ 0862533d */
                SITEMTYPE::SITEMTYPE
                          (local_64,false,(uchar)local_20,(uchar)local_1c,(ushort)local_18,
                           (string)local_58);
                SWEAPONTYPE::SWEAPONTYPE(local_54,local_10,local_1c);
                    /* try { // try from 08625305 to 08625318 has its CatchHandler @ 0862531b */
                pSVar5 = (SITEMTYPE *)
                         std::
                         map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                         ::operator[]((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                                       *)(this + 0x34),local_54);
                SITEMTYPE::operator=(pSVar5,local_64);
                    /* try { // try from 08625336 to 0862533a has its CatchHandler @ 0862533d */
                SITEMTYPE::~SITEMTYPE(local_64);
                    /* try { // try from 0862535b to 086253d4 has its CatchHandler @ 0862562c */
                std::string::~string(local_58);
              }
              else {
                bVar2 = std::operator==(&local_6c,"[armor type]");
                if (bVar2) {
                  ScanStr((string *)&local_70);
                  local_20 = ScanInt((bool *)0x0);
                  local_1c = ScanInt((bool *)0x0);
                  local_18 = ScanInt((bool *)0x0);
                  ScanStr(local_74);
                  std::string::string(local_40,local_74);
                    /* try { // try from 08625408 to 0862540c has its CatchHandler @ 086254c7 */
                  SITEMTYPE::SITEMTYPE
                            (local_4c,false,(uchar)local_20,(uchar)local_1c,(ushort)local_18,
                             (string)local_40);
                    /* try { // try from 0862541a to 0862541e has its CatchHandler @ 086254a5 */
                  std::string::string(local_34,(string *)&local_70);
                    /* try { // try from 08625436 to 0862543a has its CatchHandler @ 08625483 */
                  SARMORTYPE::SARMORTYPE(local_3c,(uchar)local_1c,(string)local_34);
                    /* try { // try from 0862544b to 0862545e has its CatchHandler @ 08625461 */
                  pSVar5 = (SITEMTYPE *)
                           std::
                           map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                           ::operator[]((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                                         *)(this + 0x4c),local_3c);
                  SITEMTYPE::operator=(pSVar5,local_4c);
                    /* try { // try from 0862547c to 08625480 has its CatchHandler @ 08625483 */
                  SARMORTYPE::~SARMORTYPE(local_3c);
                    /* try { // try from 0862549e to 086254a2 has its CatchHandler @ 086254a5 */
                  std::string::~string(local_34);
                    /* try { // try from 086254c0 to 086254c4 has its CatchHandler @ 086254c7 */
                  SITEMTYPE::~SITEMTYPE(local_4c);
                    /* try { // try from 086254e5 to 0862556d has its CatchHandler @ 0862562c */
                  std::string::~string(local_40);
                }
                else {
                  bVar2 = std::operator==(&local_6c,"[item type]");
                  if (bVar2) {
                    ScanStr((string *)&local_70);
                    local_20 = ScanInt((bool *)0x0);
                    local_1c = ScanInt((bool *)0x0);
                    local_18 = ScanInt((bool *)0x0);
                    local_14 = ScanInt((bool *)0x0);
                    ScanStr(local_74);
                    std::string::string(local_24,local_74);
                    /* try { // try from 086255a7 to 086255ab has its CatchHandler @ 086255f4 */
                    SITEMTYPE::SITEMTYPE
                              (local_30,local_20 != 0,(uchar)local_1c,(uchar)local_18,
                               (ushort)local_14,(string)local_24);
                    /* try { // try from 086255bc to 086255cf has its CatchHandler @ 086255d2 */
                    pSVar5 = (SITEMTYPE *)
                             std::
                             map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                             ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                                           *)(this + 0x1c),&local_70);
                    SITEMTYPE::operator=(pSVar5,local_30);
                    /* try { // try from 086255ed to 086255f1 has its CatchHandler @ 086255f4 */
                    SITEMTYPE::~SITEMTYPE(local_30);
                    /* try { // try from 0862560f to 08625613 has its CatchHandler @ 0862562c */
                    std::string::~string(local_24);
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar6 = 1;
                    /* try { // try from 08625625 to 08625629 has its CatchHandler @ 08625641 */
    std::string::~string(local_74);
                    /* try { // try from 0862565c to 08625660 has its CatchHandler @ 08625663 */
    std::string::~string((string *)&local_70);
    std::string::~string((string *)&local_6c);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
