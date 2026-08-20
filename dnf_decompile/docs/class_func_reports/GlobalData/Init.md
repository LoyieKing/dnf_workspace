# Init

`_ZN10GlobalData4InitEv`

`GlobalData::Init()`

| 类 | 地址 |
|---|---|
| `GlobalData` | `0x08299fa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299fa0  _ZN10GlobalData4InitEv
#           GlobalData::Init()
# range [0x08299fa0, 0x0829d437]
08299fa0 +0x0000:  push   %ebp
08299fa1 +0x0001:  mov    %esp,%ebp
08299fa3 +0x0003:  push   %edi
08299fa4 +0x0004:  push   %esi
08299fa5 +0x0005:  push   %ebx
08299fa6 +0x0006:  sub    $0x79c,%esp
08299fac +0x000c:  movb   $0x0,&_ZN10GlobalData13s_server_stopE
08299fb3 +0x0013:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08299fba +0x001a:  call   082a68c8 <_GLOBAL__I__ZN4CLog5this_E+0x2cef>  ; global constructors keyed to CLog::this_+0x2cef
08299fbf +0x001f:  movl   $0x5e4,(%esp)
08299fc6 +0x0026:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08299fcb +0x002b:  mov    %eax,%ebx
08299fcd +0x002d:  mov    %ebx,%eax
08299fcf +0x002f:  mov    %eax,(%esp)
08299fd2 +0x0032:  call   082aa65c <_GLOBAL__I__ZN4CLog5this_E+0x6a83>  ; global constructors keyed to CLog::this_+0x6a83
08299fd7 +0x0037:  jmp    08299ff1 <+0x51>
08299fd9 +0x0039:  mov    %edx,%esi
08299fdb +0x003b:  mov    %eax,%edi
08299fdd +0x003d:  mov    %ebx,(%esp)
08299fe0 +0x0040:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08299fe5 +0x0045:  mov    %edi,%eax
08299fe7 +0x0047:  mov    %esi,%edx
08299fe9 +0x0049:  mov    %eax,(%esp)
08299fec +0x004c:  call   08ae3750 <_Unwind_Resume>
08299ff1 +0x0051:  mov    %ebx,%eax
08299ff3 +0x0053:  mov    %eax,&_ZN10GlobalData16s_itemAmplifier_E
08299ff8 +0x0058:  movl   $0x18,(%esp)
08299fff +0x005f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a004 +0x0064:  mov    %eax,%ebx
0829a006 +0x0066:  mov    %ebx,%eax
0829a008 +0x0068:  mov    %eax,(%esp)
0829a00b +0x006b:  call   082a721a <_GLOBAL__I__ZN4CLog5this_E+0x3641>  ; global constructors keyed to CLog::this_+0x3641
0829a010 +0x0070:  jmp    0829a02a <+0x8a>
0829a012 +0x0072:  mov    %edx,%esi
0829a014 +0x0074:  mov    %eax,%edi
0829a016 +0x0076:  mov    %ebx,(%esp)
0829a019 +0x0079:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a01e +0x007e:  mov    %edi,%eax
0829a020 +0x0080:  mov    %esi,%edx
0829a022 +0x0082:  mov    %eax,(%esp)
0829a025 +0x0085:  call   08ae3750 <_Unwind_Resume>
0829a02a +0x008a:  mov    %ebx,%eax
0829a02c +0x008c:  mov    %eax,&_ZN10GlobalData22s_globalEffectManager_E
0829a031 +0x0091:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a039 +0x0099:  movl   $0x1c,(%esp)
0829a040 +0x00a0:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a045 +0x00a5:  mov    %eax,%ebx
0829a047 +0x00a7:  mov    %ebx,%eax
0829a049 +0x00a9:  test   %eax,%eax
0829a04b +0x00ab:  je     0829a07d <+0xdd>
0829a04d +0x00ad:  mov    %ebx,%eax
0829a04f +0x00af:  mov    %eax,(%esp)
0829a052 +0x00b2:  call   08284512 <_ZN9CTimeGateC1Ev>  ; CTimeGate::CTimeGate()
0829a057 +0x00b7:  jmp    0829a079 <+0xd9>
0829a059 +0x00b9:  mov    %edx,%esi
0829a05b +0x00bb:  mov    %eax,%edi
0829a05d +0x00bd:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a065 +0x00c5:  mov    %ebx,(%esp)
0829a068 +0x00c8:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a06d +0x00cd:  mov    %edi,%eax
0829a06f +0x00cf:  mov    %esi,%edx
0829a071 +0x00d1:  mov    %eax,(%esp)
0829a074 +0x00d4:  call   08ae3750 <_Unwind_Resume>
0829a079 +0x00d9:  mov    %ebx,%eax
0829a07b +0x00db:  jmp    0829a07f <+0xdf>
0829a07d +0x00dd:  mov    %ebx,%eax
0829a07f +0x00df:  mov    %eax,&_ZN10GlobalData11s_timeGate_E
0829a084 +0x00e4:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
0829a089 +0x00e9:  test   %eax,%eax
0829a08b +0x00eb:  jne    0829a0bb <+0x11b>
0829a08d +0x00ed:  movl   $"[GlobalData::Init] Can't allocate s_timeGate_ memory",0x4(%esp)
0829a095 +0x00f5:  movl   $&_ZSt4cerr,(%esp)
0829a09c +0x00fc:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a0a1 +0x0101:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a0a9 +0x0109:  mov    %eax,(%esp)
0829a0ac +0x010c:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a0b1 +0x0111:  mov    $0x0,%ebx
0829a0b6 +0x0116:  jmp    0829d42b <+0x348b>
0829a0bb +0x011b:  movl   $0x34,(%esp)
0829a0c2 +0x0122:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a0c7 +0x0127:  mov    %eax,%ebx
0829a0c9 +0x0129:  mov    %ebx,%eax
0829a0cb +0x012b:  mov    %eax,(%esp)
0829a0ce +0x012e:  call   081a922c <_ZN4ARAD23Arad_ServerStateManagerC1Ev>  ; ARAD::Arad_ServerStateManager::Arad_ServerStateManager()
0829a0d3 +0x0133:  jmp    0829a0ed <+0x14d>
0829a0d5 +0x0135:  mov    %edx,%esi
0829a0d7 +0x0137:  mov    %eax,%edi
0829a0d9 +0x0139:  mov    %ebx,(%esp)
0829a0dc +0x013c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a0e1 +0x0141:  mov    %edi,%eax
0829a0e3 +0x0143:  mov    %esi,%edx
0829a0e5 +0x0145:  mov    %eax,(%esp)
0829a0e8 +0x0148:  call   08ae3750 <_Unwind_Resume>
0829a0ed +0x014d:  mov    %ebx,%eax
0829a0ef +0x014f:  mov    %eax,&_ZN10GlobalData21s_serverStateManager_E
0829a0f4 +0x0154:  movl   $0x180,(%esp)
0829a0fb +0x015b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a100 +0x0160:  mov    %eax,%ebx
0829a102 +0x0162:  mov    %ebx,%eax
0829a104 +0x0164:  mov    %eax,(%esp)
0829a107 +0x0167:  call   08570e40 <_ZN11MsgQueueMgrC1Ev>  ; MsgQueueMgr::MsgQueueMgr()
0829a10c +0x016c:  jmp    0829a126 <+0x186>
0829a10e +0x016e:  mov    %edx,%esi
0829a110 +0x0170:  mov    %eax,%edi
0829a112 +0x0172:  mov    %ebx,(%esp)
0829a115 +0x0175:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a11a +0x017a:  mov    %edi,%eax
0829a11c +0x017c:  mov    %esi,%edx
0829a11e +0x017e:  mov    %eax,(%esp)
0829a121 +0x0181:  call   08ae3750 <_Unwind_Resume>
0829a126 +0x0186:  mov    %ebx,%eax
0829a128 +0x0188:  mov    %eax,&_ZN10GlobalData10s_msgq_mgrE
0829a12d +0x018d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0829a132 +0x0192:  test   %eax,%eax
0829a134 +0x0194:  jne    0829a164 <+0x1c4>
0829a136 +0x0196:  movl   $"[GlobalData::Init] can't allocate msg queue memory",0x4(%esp)
0829a13e +0x019e:  movl   $&_ZSt4cerr,(%esp)
0829a145 +0x01a5:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a14a +0x01aa:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a152 +0x01b2:  mov    %eax,(%esp)
0829a155 +0x01b5:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a15a +0x01ba:  mov    $0x0,%ebx
0829a15f +0x01bf:  jmp    0829d42b <+0x348b>
0829a164 +0x01c4:  movl   $0x1c,(%esp)
0829a16b +0x01cb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a170 +0x01d0:  mov    %eax,%ebx
0829a172 +0x01d2:  mov    %ebx,%eax
0829a174 +0x01d4:  mov    %eax,(%esp)
0829a177 +0x01d7:  call   0828f974 <_ZN10StreamPoolC1Ev>  ; StreamPool::StreamPool()
0829a17c +0x01dc:  jmp    0829a196 <+0x1f6>
0829a17e +0x01de:  mov    %edx,%esi
0829a180 +0x01e0:  mov    %eax,%edi
0829a182 +0x01e2:  mov    %ebx,(%esp)
0829a185 +0x01e5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a18a +0x01ea:  mov    %edi,%eax
0829a18c +0x01ec:  mov    %esi,%edx
0829a18e +0x01ee:  mov    %eax,(%esp)
0829a191 +0x01f1:  call   08ae3750 <_Unwind_Resume>
0829a196 +0x01f6:  mov    %ebx,%eax
0829a198 +0x01f8:  mov    %eax,&_ZN10GlobalData13s_stream_poolE
0829a19d +0x01fd:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0829a1a2 +0x0202:  test   %eax,%eax
0829a1a4 +0x0204:  jne    0829a1d4 <+0x234>
0829a1a6 +0x0206:  movl   $"[GlobalData::Init] can't allocate stream pool memory",0x4(%esp)
0829a1ae +0x020e:  movl   $&_ZSt4cerr,(%esp)
0829a1b5 +0x0215:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a1ba +0x021a:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a1c2 +0x0222:  mov    %eax,(%esp)
0829a1c5 +0x0225:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a1ca +0x022a:  mov    $0x0,%ebx
0829a1cf +0x022f:  jmp    0829d42b <+0x348b>
0829a1d4 +0x0234:  movl   $0x0,-0x24(%ebp)
0829a1db +0x023b:  jmp    0829a25b <+0x2bb>
0829a1dd +0x023d:  movl   $0x8,(%esp)
0829a1e4 +0x0244:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a1e9 +0x0249:  mov    %eax,%ebx
0829a1eb +0x024b:  mov    %ebx,%eax
0829a1ed +0x024d:  mov    %eax,(%esp)
0829a1f0 +0x0250:  call   0828fc76 <_ZN10PacketPoolC1Ev>  ; PacketPool::PacketPool()
0829a1f5 +0x0255:  jmp    0829a20f <+0x26f>
0829a1f7 +0x0257:  mov    %edx,%esi
0829a1f9 +0x0259:  mov    %eax,%edi
0829a1fb +0x025b:  mov    %ebx,(%esp)
0829a1fe +0x025e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a203 +0x0263:  mov    %edi,%eax
0829a205 +0x0265:  mov    %esi,%edx
0829a207 +0x0267:  mov    %eax,(%esp)
0829a20a +0x026a:  call   08ae3750 <_Unwind_Resume>
0829a20f +0x026f:  mov    -0x24(%ebp),%eax
0829a212 +0x0272:  mov    %ebx,%edx
0829a214 +0x0274:  mov    %edx,&_ZN10GlobalData18s_packet_pool_listE(,%eax,4)
0829a21b +0x027b:  mov    -0x24(%ebp),%eax
0829a21e +0x027e:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%eax
0829a225 +0x0285:  test   %eax,%eax
0829a227 +0x0287:  jne    0829a257 <+0x2b7>
0829a229 +0x0289:  movl   $"[GlobalData::Init] can't allocate packet pool memory",0x4(%esp)
0829a231 +0x0291:  movl   $&_ZSt4cerr,(%esp)
0829a238 +0x0298:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a23d +0x029d:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a245 +0x02a5:  mov    %eax,(%esp)
0829a248 +0x02a8:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a24d +0x02ad:  mov    $0x0,%ebx
0829a252 +0x02b2:  jmp    0829d42b <+0x348b>
0829a257 +0x02b7:  addl   $0x1,-0x24(%ebp)
0829a25b +0x02bb:  cmpl   $0x8,-0x24(%ebp)
0829a25f +0x02bf:  setle  %al
0829a262 +0x02c2:  test   %al,%al
0829a264 +0x02c4:  jne    0829a1dd <+0x23d>
0829a26a +0x02ca:  call   0807e740 <_init+0x1038>
0829a26f +0x02cf:  mov    %eax,0x4(%esp)
0829a273 +0x02d3:  movl   $0x4,(%esp)
0829a27a +0x02da:  call   0829e4c4 <_ZN10GlobalData20setCurrentPacketPoolE11THREAD_TYPEm>  ; GlobalData::setCurrentPacketPool(THREAD_TYPE, unsigned long)
0829a27f +0x02df:  movl   $0x1c,(%esp)
0829a286 +0x02e6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a28b +0x02eb:  mov    %eax,%ebx
0829a28d +0x02ed:  mov    %ebx,%eax
0829a28f +0x02ef:  mov    %eax,(%esp)
0829a292 +0x02f2:  call   0828fe62 <_ZN15SmallStreamPoolC1Ev>  ; SmallStreamPool::SmallStreamPool()
0829a297 +0x02f7:  jmp    0829a2b1 <+0x311>
0829a299 +0x02f9:  mov    %edx,%esi
0829a29b +0x02fb:  mov    %eax,%edi
0829a29d +0x02fd:  mov    %ebx,(%esp)
0829a2a0 +0x0300:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a2a5 +0x0305:  mov    %edi,%eax
0829a2a7 +0x0307:  mov    %esi,%edx
0829a2a9 +0x0309:  mov    %eax,(%esp)
0829a2ac +0x030c:  call   08ae3750 <_Unwind_Resume>
0829a2b1 +0x0311:  mov    %ebx,%eax
0829a2b3 +0x0313:  mov    %eax,&_ZN10GlobalData19s_small_stream_poolE
0829a2b8 +0x0318:  mov    &_ZN10GlobalData19s_small_stream_poolE,%eax
0829a2bd +0x031d:  test   %eax,%eax
0829a2bf +0x031f:  jne    0829a2ef <+0x34f>
0829a2c1 +0x0321:  movl   $"[GlobalData::Init] can't allocate small stream pool memory",0x4(%esp)
0829a2c9 +0x0329:  movl   $&_ZSt4cerr,(%esp)
0829a2d0 +0x0330:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a2d5 +0x0335:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a2dd +0x033d:  mov    %eax,(%esp)
0829a2e0 +0x0340:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a2e5 +0x0345:  mov    $0x0,%ebx
0829a2ea +0x034a:  jmp    0829d42b <+0x348b>
0829a2ef +0x034f:  movl   $0x1c,(%esp)
0829a2f6 +0x0356:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a2fb +0x035b:  mov    %eax,%ebx
0829a2fd +0x035d:  mov    %ebx,%eax
0829a2ff +0x035f:  mov    %eax,(%esp)
0829a302 +0x0362:  call   08290150 <_ZN13BigStreamPoolC1Ev>  ; BigStreamPool::BigStreamPool()
0829a307 +0x0367:  jmp    0829a321 <+0x381>
0829a309 +0x0369:  mov    %edx,%esi
0829a30b +0x036b:  mov    %eax,%edi
0829a30d +0x036d:  mov    %ebx,(%esp)
0829a310 +0x0370:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a315 +0x0375:  mov    %edi,%eax
0829a317 +0x0377:  mov    %esi,%edx
0829a319 +0x0379:  mov    %eax,(%esp)
0829a31c +0x037c:  call   08ae3750 <_Unwind_Resume>
0829a321 +0x0381:  mov    %ebx,%eax
0829a323 +0x0383:  mov    %eax,&_ZN10GlobalData17s_big_stream_poolE
0829a328 +0x0388:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0829a32d +0x038d:  test   %eax,%eax
0829a32f +0x038f:  jne    0829a35f <+0x3bf>
0829a331 +0x0391:  movl   $"[GlobalData::Init] can't allocate big stream pool memory",0x4(%esp)
0829a339 +0x0399:  movl   $&_ZSt4cerr,(%esp)
0829a340 +0x03a0:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a345 +0x03a5:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a34d +0x03ad:  mov    %eax,(%esp)
0829a350 +0x03b0:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a355 +0x03b5:  mov    $0x0,%ebx
0829a35a +0x03ba:  jmp    0829d42b <+0x348b>
0829a35f +0x03bf:  movl   $0x38,(%esp)
0829a366 +0x03c6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a36b +0x03cb:  mov    %eax,%ebx
0829a36d +0x03cd:  mov    %ebx,%eax
0829a36f +0x03cf:  mov    %eax,(%esp)
0829a372 +0x03d2:  call   083f48de <_ZN5DBMgrC1Ev>  ; DBMgr::DBMgr()
0829a377 +0x03d7:  jmp    0829a391 <+0x3f1>
0829a379 +0x03d9:  mov    %edx,%esi
0829a37b +0x03db:  mov    %eax,%edi
0829a37d +0x03dd:  mov    %ebx,(%esp)
0829a380 +0x03e0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a385 +0x03e5:  mov    %edi,%eax
0829a387 +0x03e7:  mov    %esi,%edx
0829a389 +0x03e9:  mov    %eax,(%esp)
0829a38c +0x03ec:  call   08ae3750 <_Unwind_Resume>
0829a391 +0x03f1:  mov    %ebx,%eax
0829a393 +0x03f3:  mov    %eax,&_ZN10GlobalData8s_db_mgrE
0829a398 +0x03f8:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829a39d +0x03fd:  test   %eax,%eax
0829a39f +0x03ff:  jne    0829a3cf <+0x42f>
0829a3a1 +0x0401:  movl   $"[GlobalData::Init] can't allocate db manager memory",0x4(%esp)
0829a3a9 +0x0409:  movl   $&_ZSt4cerr,(%esp)
0829a3b0 +0x0410:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a3b5 +0x0415:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a3bd +0x041d:  mov    %eax,(%esp)
0829a3c0 +0x0420:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a3c5 +0x0425:  mov    $0x0,%ebx
0829a3ca +0x042a:  jmp    0829d42b <+0x348b>
0829a3cf +0x042f:  movl   $0x4c,(%esp)
0829a3d6 +0x0436:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a3db +0x043b:  mov    %eax,%ebx
0829a3dd +0x043d:  mov    %ebx,%eax
0829a3df +0x043f:  mov    %eax,(%esp)
0829a3e2 +0x0442:  call   083ff5f2 <_ZN8DBThreadC1Ev>  ; DBThread::DBThread()
0829a3e7 +0x0447:  jmp    0829a401 <+0x461>
0829a3e9 +0x0449:  mov    %edx,%esi
0829a3eb +0x044b:  mov    %eax,%edi
0829a3ed +0x044d:  mov    %ebx,(%esp)
0829a3f0 +0x0450:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a3f5 +0x0455:  mov    %edi,%eax
0829a3f7 +0x0457:  mov    %esi,%edx
0829a3f9 +0x0459:  mov    %eax,(%esp)
0829a3fc +0x045c:  call   08ae3750 <_Unwind_Resume>
0829a401 +0x0461:  mov    %ebx,%eax
0829a403 +0x0463:  mov    %eax,&_ZN10GlobalData8s_db_thrE
0829a408 +0x0468:  mov    &_ZN10GlobalData8s_db_thrE,%eax
0829a40d +0x046d:  test   %eax,%eax
0829a40f +0x046f:  jne    0829a43f <+0x49f>
0829a411 +0x0471:  movl   $"[GlobalData::Init] Can't allocate db thread memory",0x4(%esp)
0829a419 +0x0479:  movl   $&_ZSt4cerr,(%esp)
0829a420 +0x0480:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a425 +0x0485:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a42d +0x048d:  mov    %eax,(%esp)
0829a430 +0x0490:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a435 +0x0495:  mov    $0x0,%ebx
0829a43a +0x049a:  jmp    0829d42b <+0x348b>
0829a43f +0x049f:  mov    &_ZN10GlobalData8s_db_thrE,%eax
0829a444 +0x04a4:  movl   $0x0,0x4(%esp)
0829a44c +0x04ac:  mov    %eax,(%esp)
0829a44f +0x04af:  call   083ff6c8 <_ZN8DBThread8setLogDBEb>  ; DBThread::setLogDB(bool)
0829a454 +0x04b4:  movl   $0x4c,(%esp)
0829a45b +0x04bb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a460 +0x04c0:  mov    %eax,%ebx
0829a462 +0x04c2:  mov    %ebx,%eax
0829a464 +0x04c4:  mov    %eax,(%esp)
0829a467 +0x04c7:  call   083ff5f2 <_ZN8DBThreadC1Ev>  ; DBThread::DBThread()
0829a46c +0x04cc:  jmp    0829a486 <+0x4e6>
0829a46e +0x04ce:  mov    %edx,%esi
0829a470 +0x04d0:  mov    %eax,%edi
0829a472 +0x04d2:  mov    %ebx,(%esp)
0829a475 +0x04d5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a47a +0x04da:  mov    %edi,%eax
0829a47c +0x04dc:  mov    %esi,%edx
0829a47e +0x04de:  mov    %eax,(%esp)
0829a481 +0x04e1:  call   08ae3750 <_Unwind_Resume>
0829a486 +0x04e6:  mov    %ebx,%eax
0829a488 +0x04e8:  mov    %eax,&_ZN10GlobalData18s_db_thr_for_logDBE
0829a48d +0x04ed:  mov    &_ZN10GlobalData18s_db_thr_for_logDBE,%eax
0829a492 +0x04f2:  test   %eax,%eax
0829a494 +0x04f4:  jne    0829a4c4 <+0x524>
0829a496 +0x04f6:  movl   $"[GlobalData::Init] Can't allocate db thread memory, s_db_thr_for_logDB",0x4(%esp)
0829a49e +0x04fe:  movl   $&_ZSt4cerr,(%esp)
0829a4a5 +0x0505:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a4aa +0x050a:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a4b2 +0x0512:  mov    %eax,(%esp)
0829a4b5 +0x0515:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a4ba +0x051a:  mov    $0x0,%ebx
0829a4bf +0x051f:  jmp    0829d42b <+0x348b>
0829a4c4 +0x0524:  mov    &_ZN10GlobalData18s_db_thr_for_logDBE,%eax
0829a4c9 +0x0529:  movl   $0x1,0x4(%esp)
0829a4d1 +0x0531:  mov    %eax,(%esp)
0829a4d4 +0x0534:  call   083ff6c8 <_ZN8DBThread8setLogDBEb>  ; DBThread::setLogDB(bool)
0829a4d9 +0x0539:  movl   $0xc,(%esp)
0829a4e0 +0x0540:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a4e5 +0x0545:  mov    %eax,%ebx
0829a4e7 +0x0547:  mov    %ebx,%eax
0829a4e9 +0x0549:  mov    %eax,(%esp)
0829a4ec +0x054c:  call   0847e268 <_ZN14DispatchThreadC1Ev>  ; DispatchThread::DispatchThread()
0829a4f1 +0x0551:  jmp    0829a50b <+0x56b>
0829a4f3 +0x0553:  mov    %edx,%esi
0829a4f5 +0x0555:  mov    %eax,%edi
0829a4f7 +0x0557:  mov    %ebx,(%esp)
0829a4fa +0x055a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a4ff +0x055f:  mov    %edi,%eax
0829a501 +0x0561:  mov    %esi,%edx
0829a503 +0x0563:  mov    %eax,(%esp)
0829a506 +0x0566:  call   08ae3750 <_Unwind_Resume>
0829a50b +0x056b:  mov    %ebx,%eax
0829a50d +0x056d:  mov    %eax,&_ZN10GlobalData14s_dispatch_thrE
0829a512 +0x0572:  mov    &_ZN10GlobalData14s_dispatch_thrE,%eax
0829a517 +0x0577:  test   %eax,%eax
0829a519 +0x0579:  jne    0829a549 <+0x5a9>
0829a51b +0x057b:  movl   $"[GlobalData::Init] Can't allocate dispath thread memory",0x4(%esp)
0829a523 +0x0583:  movl   $&_ZSt4cerr,(%esp)
0829a52a +0x058a:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a52f +0x058f:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a537 +0x0597:  mov    %eax,(%esp)
0829a53a +0x059a:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a53f +0x059f:  mov    $0x0,%ebx
0829a544 +0x05a4:  jmp    0829d42b <+0x348b>
0829a549 +0x05a9:  movl   $0xc,(%esp)
0829a550 +0x05b0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a555 +0x05b5:  mov    %eax,%ebx
0829a557 +0x05b7:  mov    %ebx,%eax
0829a559 +0x05b9:  mov    %eax,(%esp)
0829a55c +0x05bc:  call   0857d554 <_ZN13NetworkThreadC1Ev>  ; NetworkThread::NetworkThread()
0829a561 +0x05c1:  jmp    0829a57b <+0x5db>
0829a563 +0x05c3:  mov    %edx,%esi
0829a565 +0x05c5:  mov    %eax,%edi
0829a567 +0x05c7:  mov    %ebx,(%esp)
0829a56a +0x05ca:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a56f +0x05cf:  mov    %edi,%eax
0829a571 +0x05d1:  mov    %esi,%edx
0829a573 +0x05d3:  mov    %eax,(%esp)
0829a576 +0x05d6:  call   08ae3750 <_Unwind_Resume>
0829a57b +0x05db:  mov    %ebx,%eax
0829a57d +0x05dd:  mov    %eax,&_ZN10GlobalData9s_net_thrE
0829a582 +0x05e2:  mov    &_ZN10GlobalData9s_net_thrE,%eax
0829a587 +0x05e7:  test   %eax,%eax
0829a589 +0x05e9:  jne    0829a5b9 <+0x619>
0829a58b +0x05eb:  movl   $"[GlobalData::Init] Can't allocate network thread memory",0x4(%esp)
0829a593 +0x05f3:  movl   $&_ZSt4cerr,(%esp)
0829a59a +0x05fa:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a59f +0x05ff:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a5a7 +0x0607:  mov    %eax,(%esp)
0829a5aa +0x060a:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a5af +0x060f:  mov    $0x0,%ebx
0829a5b4 +0x0614:  jmp    0829d42b <+0x348b>
0829a5b9 +0x0619:  movl   $0xc,(%esp)
0829a5c0 +0x0620:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829a5c5 +0x0625:  mov    %eax,%ebx
0829a5c7 +0x0627:  mov    %ebx,%eax
0829a5c9 +0x0629:  mov    %eax,(%esp)
0829a5cc +0x062c:  call   0857c354 <_ZN9UdpThreadC1Ev>  ; UdpThread::UdpThread()
0829a5d1 +0x0631:  jmp    0829a5eb <+0x64b>
0829a5d3 +0x0633:  mov    %edx,%esi
0829a5d5 +0x0635:  mov    %eax,%edi
0829a5d7 +0x0637:  mov    %ebx,(%esp)
0829a5da +0x063a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829a5df +0x063f:  mov    %edi,%eax
0829a5e1 +0x0641:  mov    %esi,%edx
0829a5e3 +0x0643:  mov    %eax,(%esp)
0829a5e6 +0x0646:  call   08ae3750 <_Unwind_Resume>
0829a5eb +0x064b:  mov    %ebx,%eax
0829a5ed +0x064d:  mov    %eax,&_ZN10GlobalData9s_udp_thrE
0829a5f2 +0x0652:  mov    &_ZN10GlobalData9s_udp_thrE,%eax
0829a5f7 +0x0657:  test   %eax,%eax
0829a5f9 +0x0659:  jne    0829a629 <+0x689>
0829a5fb +0x065b:  movl   $"[GlobalData::Init] Can't allocate udp thread memory",0x4(%esp)
0829a603 +0x0663:  movl   $&_ZSt4cerr,(%esp)
0829a60a +0x066a:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a60f +0x066f:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a617 +0x0677:  mov    %eax,(%esp)
0829a61a +0x067a:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a61f +0x067f:  mov    $0x0,%ebx
0829a624 +0x0684:  jmp    0829d42b <+0x348b>
0829a629 +0x0689:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a631 +0x0691:  movl   $0xc,(%esp)
0829a638 +0x0698:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a63d +0x069d:  mov    %eax,%ebx
0829a63f +0x069f:  mov    %ebx,%eax
0829a641 +0x06a1:  test   %eax,%eax
0829a643 +0x06a3:  je     0829a675 <+0x6d5>
0829a645 +0x06a5:  mov    %ebx,%eax
0829a647 +0x06a7:  mov    %eax,(%esp)
0829a64a +0x06aa:  call   0857d8f0 <_ZN16MonitorTcpThreadC1Ev>  ; MonitorTcpThread::MonitorTcpThread()
0829a64f +0x06af:  jmp    0829a671 <+0x6d1>
0829a651 +0x06b1:  mov    %edx,%esi
0829a653 +0x06b3:  mov    %eax,%edi
0829a655 +0x06b5:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a65d +0x06bd:  mov    %ebx,(%esp)
0829a660 +0x06c0:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a665 +0x06c5:  mov    %edi,%eax
0829a667 +0x06c7:  mov    %esi,%edx
0829a669 +0x06c9:  mov    %eax,(%esp)
0829a66c +0x06cc:  call   08ae3750 <_Unwind_Resume>
0829a671 +0x06d1:  mov    %ebx,%eax
0829a673 +0x06d3:  jmp    0829a677 <+0x6d7>
0829a675 +0x06d5:  mov    %ebx,%eax
0829a677 +0x06d7:  mov    %eax,&_ZN10GlobalData17s_monitor_tcp_thrE
0829a67c +0x06dc:  mov    &_ZN10GlobalData17s_monitor_tcp_thrE,%eax
0829a681 +0x06e1:  test   %eax,%eax
0829a683 +0x06e3:  jne    0829a6b3 <+0x713>
0829a685 +0x06e5:  movl   $"[GlobalData::Init] Can't allocate monitor tcp thread memory",0x4(%esp)
0829a68d +0x06ed:  movl   $&_ZSt4cerr,(%esp)
0829a694 +0x06f4:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a699 +0x06f9:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a6a1 +0x0701:  mov    %eax,(%esp)
0829a6a4 +0x0704:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a6a9 +0x0709:  mov    $0x0,%ebx
0829a6ae +0x070e:  jmp    0829d42b <+0x348b>
0829a6b3 +0x0713:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a6bb +0x071b:  movl   $&_ZL14gUnicodeBuffer+0x268f0,(%esp)
0829a6c2 +0x0722:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a6c7 +0x0727:  mov    %eax,%ebx
0829a6c9 +0x0729:  mov    %ebx,%eax
0829a6cb +0x072b:  test   %eax,%eax
0829a6cd +0x072d:  je     0829a6ff <+0x75f>
0829a6cf +0x072f:  mov    %ebx,%eax
0829a6d1 +0x0731:  mov    %eax,(%esp)
0829a6d4 +0x0734:  call   082b314e <_GLOBAL__I__ZN4CLog5this_E+0xf575>  ; global constructors keyed to CLog::this_+0xf575
0829a6d9 +0x0739:  jmp    0829a6fb <+0x75b>
0829a6db +0x073b:  mov    %edx,%esi
0829a6dd +0x073d:  mov    %eax,%edi
0829a6df +0x073f:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a6e7 +0x0747:  mov    %ebx,(%esp)
0829a6ea +0x074a:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a6ef +0x074f:  mov    %edi,%eax
0829a6f1 +0x0751:  mov    %esi,%edx
0829a6f3 +0x0753:  mov    %eax,(%esp)
0829a6f6 +0x0756:  call   08ae3750 <_Unwind_Resume>
0829a6fb +0x075b:  mov    %ebx,%eax
0829a6fd +0x075d:  jmp    0829a701 <+0x761>
0829a6ff +0x075f:  mov    %ebx,%eax
0829a701 +0x0761:  mov    %eax,&_ZN10GlobalData19s_monitor_proxy_mgrE
0829a706 +0x0766:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0829a70b +0x076b:  test   %eax,%eax
0829a70d +0x076d:  jne    0829a73d <+0x79d>
0829a70f +0x076f:  movl   $"[GlobalData::Init] Can't allocate monitor server proxy memory",0x4(%esp)
0829a717 +0x0777:  movl   $&_ZSt4cerr,(%esp)
0829a71e +0x077e:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a723 +0x0783:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a72b +0x078b:  mov    %eax,(%esp)
0829a72e +0x078e:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a733 +0x0793:  mov    $0x0,%ebx
0829a738 +0x0798:  jmp    0829d42b <+0x348b>
0829a73d +0x079d:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a745 +0x07a5:  movl   $&_ZL14gUnicodeBuffer+0x26908,(%esp)
0829a74c +0x07ac:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a751 +0x07b1:  mov    %eax,%ebx
0829a753 +0x07b3:  mov    %ebx,%eax
0829a755 +0x07b5:  test   %eax,%eax
0829a757 +0x07b7:  je     0829a789 <+0x7e9>
0829a759 +0x07b9:  mov    %ebx,%eax
0829a75b +0x07bb:  mov    %eax,(%esp)
0829a75e +0x07be:  call   082b3212 <_GLOBAL__I__ZN4CLog5this_E+0xf639>  ; global constructors keyed to CLog::this_+0xf639
0829a763 +0x07c3:  jmp    0829a785 <+0x7e5>
0829a765 +0x07c5:  mov    %edx,%esi
0829a767 +0x07c7:  mov    %eax,%edi
0829a769 +0x07c9:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a771 +0x07d1:  mov    %ebx,(%esp)
0829a774 +0x07d4:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a779 +0x07d9:  mov    %edi,%eax
0829a77b +0x07db:  mov    %esi,%edx
0829a77d +0x07dd:  mov    %eax,(%esp)
0829a780 +0x07e0:  call   08ae3750 <_Unwind_Resume>
0829a785 +0x07e5:  mov    %ebx,%eax
0829a787 +0x07e7:  jmp    0829a78b <+0x7eb>
0829a789 +0x07e9:  mov    %ebx,%eax
0829a78b +0x07eb:  mov    %eax,&_ZN10GlobalData17s_guild_proxy_mgrE
0829a790 +0x07f0:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0829a795 +0x07f5:  test   %eax,%eax
0829a797 +0x07f7:  jne    0829a7c7 <+0x827>
0829a799 +0x07f9:  movl   $"[GlobalData::Init] Can't allocate guild server proxy memory",0x4(%esp)
0829a7a1 +0x0801:  movl   $&_ZSt4cerr,(%esp)
0829a7a8 +0x0808:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a7ad +0x080d:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a7b5 +0x0815:  mov    %eax,(%esp)
0829a7b8 +0x0818:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a7bd +0x081d:  mov    $0x0,%ebx
0829a7c2 +0x0822:  jmp    0829d42b <+0x348b>
0829a7c7 +0x0827:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a7cf +0x082f:  movl   $0x20,(%esp)
0829a7d6 +0x0836:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a7db +0x083b:  mov    %eax,%ebx
0829a7dd +0x083d:  mov    %ebx,%eax
0829a7df +0x083f:  test   %eax,%eax
0829a7e1 +0x0841:  je     0829a813 <+0x873>
0829a7e3 +0x0843:  mov    %ebx,%eax
0829a7e5 +0x0845:  mov    %eax,(%esp)
0829a7e8 +0x0848:  call   082b3296 <_GLOBAL__I__ZN4CLog5this_E+0xf6bd>  ; global constructors keyed to CLog::this_+0xf6bd
0829a7ed +0x084d:  jmp    0829a80f <+0x86f>
0829a7ef +0x084f:  mov    %edx,%esi
0829a7f1 +0x0851:  mov    %eax,%edi
0829a7f3 +0x0853:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a7fb +0x085b:  mov    %ebx,(%esp)
0829a7fe +0x085e:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a803 +0x0863:  mov    %edi,%eax
0829a805 +0x0865:  mov    %esi,%edx
0829a807 +0x0867:  mov    %eax,(%esp)
0829a80a +0x086a:  call   08ae3750 <_Unwind_Resume>
0829a80f +0x086f:  mov    %ebx,%eax
0829a811 +0x0871:  jmp    0829a815 <+0x875>
0829a813 +0x0873:  mov    %ebx,%eax
0829a815 +0x0875:  mov    %eax,&_ZN10GlobalData21s_statistic_proxy_mgrE
0829a81a +0x087a:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0829a81f +0x087f:  test   %eax,%eax
0829a821 +0x0881:  jne    0829a851 <+0x8b1>
0829a823 +0x0883:  movl   $"[GlobalData::Init] Can't allocate statistic server proxy memory",0x4(%esp)
0829a82b +0x088b:  movl   $&_ZSt4cerr,(%esp)
0829a832 +0x0892:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a837 +0x0897:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a83f +0x089f:  mov    %eax,(%esp)
0829a842 +0x08a2:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a847 +0x08a7:  mov    $0x0,%ebx
0829a84c +0x08ac:  jmp    0829d42b <+0x348b>
0829a851 +0x08b1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829a856 +0x08b6:  mov    %eax,(%esp)
0829a859 +0x08b9:  call   082a6e04 <_GLOBAL__I__ZN4CLog5this_E+0x322b>  ; global constructors keyed to CLog::this_+0x322b
0829a85e +0x08be:  mov    %eax,%esi
0829a860 +0x08c0:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829a865 +0x08c5:  mov    %eax,(%esp)
0829a868 +0x08c8:  call   082a6e20 <_GLOBAL__I__ZN4CLog5this_E+0x3247>  ; global constructors keyed to CLog::this_+0x3247
0829a86d +0x08cd:  mov    %eax,%edi
0829a86f +0x08cf:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829a874 +0x08d4:  mov    %eax,(%esp)
0829a877 +0x08d7:  call   082a6e12 <_GLOBAL__I__ZN4CLog5this_E+0x3239>  ; global constructors keyed to CLog::this_+0x3239
0829a87c +0x08dc:  mov    %eax,-0x77c(%ebp)
0829a882 +0x08e2:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a88a +0x08ea:  movl   $&_ZL14gUnicodeBuffer+0x268f0,(%esp)
0829a891 +0x08f1:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a896 +0x08f6:  mov    %eax,%ebx
0829a898 +0x08f8:  mov    %ebx,%eax
0829a89a +0x08fa:  test   %eax,%eax
0829a89c +0x08fc:  je     0829a8e0 <+0x940>
0829a89e +0x08fe:  mov    %ebx,%eax
0829a8a0 +0x0900:  mov    -0x77c(%ebp),%edx
0829a8a6 +0x0906:  mov    %edx,0xc(%esp)
0829a8aa +0x090a:  mov    %edi,0x8(%esp)
0829a8ae +0x090e:  mov    %esi,0x4(%esp)
0829a8b2 +0x0912:  mov    %eax,(%esp)
0829a8b5 +0x0915:  call   08470510 <_ZN17CHadesServerProxyC1EPcii>  ; CHadesServerProxy::CHadesServerProxy(char*, int, int)
0829a8ba +0x091a:  jmp    0829a8dc <+0x93c>
0829a8bc +0x091c:  mov    %edx,%esi
0829a8be +0x091e:  mov    %eax,%edi
0829a8c0 +0x0920:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a8c8 +0x0928:  mov    %ebx,(%esp)
0829a8cb +0x092b:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a8d0 +0x0930:  mov    %edi,%eax
0829a8d2 +0x0932:  mov    %esi,%edx
0829a8d4 +0x0934:  mov    %eax,(%esp)
0829a8d7 +0x0937:  call   08ae3750 <_Unwind_Resume>
0829a8dc +0x093c:  mov    %ebx,%eax
0829a8de +0x093e:  jmp    0829a8e2 <+0x942>
0829a8e0 +0x0940:  mov    %ebx,%eax
0829a8e2 +0x0942:  mov    %eax,&_ZN10GlobalData13s_hades_proxyE
0829a8e7 +0x0947:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0829a8ec +0x094c:  test   %eax,%eax
0829a8ee +0x094e:  jne    0829a91e <+0x97e>
0829a8f0 +0x0950:  movl   $"[GlobalData::Init] Can't allocate Hades server proxy memory",0x4(%esp)
0829a8f8 +0x0958:  movl   $&_ZSt4cerr,(%esp)
0829a8ff +0x095f:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a904 +0x0964:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a90c +0x096c:  mov    %eax,(%esp)
0829a90f +0x096f:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a914 +0x0974:  mov    $0x0,%ebx
0829a919 +0x0979:  jmp    0829d42b <+0x348b>
0829a91e +0x097e:  mov    &_ZN10GlobalData13s_hades_proxyE,%eax
0829a923 +0x0983:  mov    %eax,(%esp)
0829a926 +0x0986:  call   082fd460 <_ZN15BaseServerProxy4InitEv>  ; BaseServerProxy::Init()
0829a92b +0x098b:  xor    $0x1,%eax
0829a92e +0x098e:  test   %al,%al
0829a930 +0x0990:  je     0829a960 <+0x9c0>
0829a932 +0x0992:  movl   $"[GlobalData::Init] Fail Init (Hades server proxy)",0x4(%esp)
0829a93a +0x099a:  movl   $&_ZSt4cerr,(%esp)
0829a941 +0x09a1:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829a946 +0x09a6:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829a94e +0x09ae:  mov    %eax,(%esp)
0829a951 +0x09b1:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829a956 +0x09b6:  mov    $0x0,%ebx
0829a95b +0x09bb:  jmp    0829d42b <+0x348b>
0829a960 +0x09c0:  lea    -0x335(%ebp),%eax
0829a966 +0x09c6:  mov    %eax,(%esp)
0829a969 +0x09c9:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0829a96e +0x09ce:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829a973 +0x09d3:  mov    %eax,(%esp)
0829a976 +0x09d6:  call   082a6df6 <_GLOBAL__I__ZN4CLog5this_E+0x321d>  ; global constructors keyed to CLog::this_+0x321d
0829a97b +0x09db:  lea    -0x335(%ebp),%edx
0829a981 +0x09e1:  mov    %edx,0x8(%esp)
0829a985 +0x09e5:  mov    %eax,0x4(%esp)
0829a989 +0x09e9:  lea    -0x33c(%ebp),%eax
0829a98f +0x09ef:  mov    %eax,(%esp)
0829a992 +0x09f2:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829a997 +0x09f7:  lea    -0x33c(%ebp),%esi
0829a99d +0x09fd:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829a9a2 +0x0a02:  mov    %eax,(%esp)
0829a9a5 +0x0a05:  call   082a6de8 <_GLOBAL__I__ZN4CLog5this_E+0x320f>  ; global constructors keyed to CLog::this_+0x320f
0829a9aa +0x0a0a:  mov    %eax,%edi
0829a9ac +0x0a0c:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a9b4 +0x0a14:  movl   $0x10,(%esp)
0829a9bb +0x0a1b:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829a9c0 +0x0a20:  mov    %eax,%ebx
0829a9c2 +0x0a22:  mov    %ebx,%eax
0829a9c4 +0x0a24:  test   %eax,%eax
0829a9c6 +0x0a26:  je     0829a9fa <+0xa5a>
0829a9c8 +0x0a28:  mov    %ebx,%eax
0829a9ca +0x0a2a:  mov    %edi,0x8(%esp)
0829a9ce +0x0a2e:  mov    %esi,0x4(%esp)
0829a9d2 +0x0a32:  mov    %eax,(%esp)
0829a9d5 +0x0a35:  call   0846d300 <_ZN27CDoubleConnCheckServerProxyC1ESsi>  ; CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
0829a9da +0x0a3a:  jmp    0829a9f6 <+0xa56>
0829a9dc +0x0a3c:  mov    %edx,%esi
0829a9de +0x0a3e:  mov    %eax,%edi
0829a9e0 +0x0a40:  movl   $&_ZSt7nothrow,0x4(%esp)
0829a9e8 +0x0a48:  mov    %ebx,(%esp)
0829a9eb +0x0a4b:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829a9f0 +0x0a50:  mov    %edi,%eax
0829a9f2 +0x0a52:  mov    %esi,%edx
0829a9f4 +0x0a54:  jmp    0829aa11 <+0xa71>
0829a9f6 +0x0a56:  mov    %ebx,%eax
0829a9f8 +0x0a58:  jmp    0829a9fc <+0xa5c>
0829a9fa +0x0a5a:  mov    %ebx,%eax
0829a9fc +0x0a5c:  mov    %eax,&_ZN10GlobalData20s_double_check_proxyE
0829aa01 +0x0a61:  lea    -0x33c(%ebp),%eax
0829aa07 +0x0a67:  mov    %eax,(%esp)
0829aa0a +0x0a6a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829aa0f +0x0a6f:  jmp    0829aa47 <+0xaa7>
0829aa11 +0x0a71:  mov    %edx,%ebx
0829aa13 +0x0a73:  mov    %eax,%esi
0829aa15 +0x0a75:  lea    -0x33c(%ebp),%eax
0829aa1b +0x0a7b:  mov    %eax,(%esp)
0829aa1e +0x0a7e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829aa23 +0x0a83:  mov    %esi,%eax
0829aa25 +0x0a85:  mov    %ebx,%edx
0829aa27 +0x0a87:  jmp    0829aa29 <+0xa89>
0829aa29 +0x0a89:  mov    %edx,%ebx
0829aa2b +0x0a8b:  mov    %eax,%esi
0829aa2d +0x0a8d:  lea    -0x335(%ebp),%eax
0829aa33 +0x0a93:  mov    %eax,(%esp)
0829aa36 +0x0a96:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829aa3b +0x0a9b:  mov    %esi,%eax
0829aa3d +0x0a9d:  mov    %ebx,%edx
0829aa3f +0x0a9f:  mov    %eax,(%esp)
0829aa42 +0x0aa2:  call   08ae3750 <_Unwind_Resume>
0829aa47 +0x0aa7:  lea    -0x335(%ebp),%eax
0829aa4d +0x0aad:  mov    %eax,(%esp)
0829aa50 +0x0ab0:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829aa55 +0x0ab5:  mov    &_ZN10GlobalData20s_double_check_proxyE,%eax
0829aa5a +0x0aba:  test   %eax,%eax
0829aa5c +0x0abc:  jne    0829aa8c <+0xaec>
0829aa5e +0x0abe:  movl   $"[GlobalData::Init] Can't allocate double conn check server proxy memory",0x4(%esp)
0829aa66 +0x0ac6:  movl   $&_ZSt4cerr,(%esp)
0829aa6d +0x0acd:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829aa72 +0x0ad2:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829aa7a +0x0ada:  mov    %eax,(%esp)
0829aa7d +0x0add:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829aa82 +0x0ae2:  mov    $0x0,%ebx
0829aa87 +0x0ae7:  jmp    0829d42b <+0x348b>
0829aa8c +0x0aec:  mov    &_ZN10GlobalData20s_double_check_proxyE,%eax
0829aa91 +0x0af1:  mov    %eax,(%esp)
0829aa94 +0x0af4:  call   0846d356 <_ZN27CDoubleConnCheckServerProxy4InitEv>  ; CDoubleConnCheckServerProxy::Init()
0829aa99 +0x0af9:  xor    $0x1,%eax
0829aa9c +0x0afc:  test   %al,%al
0829aa9e +0x0afe:  je     0829aace <+0xb2e>
0829aaa0 +0x0b00:  movl   $"[GlobalData::Init] Fail Init (double conn check server proxy)",0x4(%esp)
0829aaa8 +0x0b08:  movl   $&_ZSt4cerr,(%esp)
0829aaaf +0x0b0f:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829aab4 +0x0b14:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829aabc +0x0b1c:  mov    %eax,(%esp)
0829aabf +0x0b1f:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829aac4 +0x0b24:  mov    $0x0,%ebx
0829aac9 +0x0b29:  jmp    0829d42b <+0x348b>
0829aace +0x0b2e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829aad3 +0x0b33:  mov    %eax,(%esp)
0829aad6 +0x0b36:  call   082a6e2e <_GLOBAL__I__ZN4CLog5this_E+0x3255>  ; global constructors keyed to CLog::this_+0x3255
0829aadb +0x0b3b:  movzbl (%eax),%eax
0829aade +0x0b3e:  test   %al,%al
0829aae0 +0x0b40:  je     0829aafa <+0xb5a>
0829aae2 +0x0b42:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829aae7 +0x0b47:  mov    %eax,(%esp)
0829aaea +0x0b4a:  call   082a6e3c <_GLOBAL__I__ZN4CLog5this_E+0x3263>  ; global constructors keyed to CLog::this_+0x3263
0829aaef +0x0b4f:  test   %eax,%eax
0829aaf1 +0x0b51:  jle    0829aafa <+0xb5a>
0829aaf3 +0x0b53:  mov    $0x1,%eax
0829aaf8 +0x0b58:  jmp    0829aaff <+0xb5f>
0829aafa +0x0b5a:  mov    $0x0,%eax
0829aaff +0x0b5f:  test   %al,%al
0829ab01 +0x0b61:  je     0829ac75 <+0xcd5>
0829ab07 +0x0b67:  lea    -0x32d(%ebp),%eax
0829ab0d +0x0b6d:  mov    %eax,(%esp)
0829ab10 +0x0b70:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0829ab15 +0x0b75:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ab1a +0x0b7a:  mov    %eax,(%esp)
0829ab1d +0x0b7d:  call   082a6e2e <_GLOBAL__I__ZN4CLog5this_E+0x3255>  ; global constructors keyed to CLog::this_+0x3255
0829ab22 +0x0b82:  lea    -0x32d(%ebp),%edx
0829ab28 +0x0b88:  mov    %edx,0x8(%esp)
0829ab2c +0x0b8c:  mov    %eax,0x4(%esp)
0829ab30 +0x0b90:  lea    -0x334(%ebp),%eax
0829ab36 +0x0b96:  mov    %eax,(%esp)
0829ab39 +0x0b99:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829ab3e +0x0b9e:  lea    -0x334(%ebp),%esi
0829ab44 +0x0ba4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ab49 +0x0ba9:  mov    %eax,(%esp)
0829ab4c +0x0bac:  call   082a6e3c <_GLOBAL__I__ZN4CLog5this_E+0x3263>  ; global constructors keyed to CLog::this_+0x3263
0829ab51 +0x0bb1:  mov    %eax,%edi
0829ab53 +0x0bb3:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ab5b +0x0bbb:  movl   $0x10,(%esp)
0829ab62 +0x0bc2:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829ab67 +0x0bc7:  mov    %eax,%ebx
0829ab69 +0x0bc9:  mov    %ebx,%eax
0829ab6b +0x0bcb:  test   %eax,%eax
0829ab6d +0x0bcd:  je     0829aba1 <+0xc01>
0829ab6f +0x0bcf:  mov    %ebx,%eax
0829ab71 +0x0bd1:  mov    %edi,0x8(%esp)
0829ab75 +0x0bd5:  mov    %esi,0x4(%esp)
0829ab79 +0x0bd9:  mov    %eax,(%esp)
0829ab7c +0x0bdc:  call   08471e24 <_ZN18CSchoolServerProxyC1ESsi>  ; CSchoolServerProxy::CSchoolServerProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
0829ab81 +0x0be1:  jmp    0829ab9d <+0xbfd>
0829ab83 +0x0be3:  mov    %edx,%esi
0829ab85 +0x0be5:  mov    %eax,%edi
0829ab87 +0x0be7:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ab8f +0x0bef:  mov    %ebx,(%esp)
0829ab92 +0x0bf2:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829ab97 +0x0bf7:  mov    %edi,%eax
0829ab99 +0x0bf9:  mov    %esi,%edx
0829ab9b +0x0bfb:  jmp    0829abb8 <+0xc18>
0829ab9d +0x0bfd:  mov    %ebx,%eax
0829ab9f +0x0bff:  jmp    0829aba3 <+0xc03>
0829aba1 +0x0c01:  mov    %ebx,%eax
0829aba3 +0x0c03:  mov    %eax,&_ZN10GlobalData14s_school_proxyE
0829aba8 +0x0c08:  lea    -0x334(%ebp),%eax
0829abae +0x0c0e:  mov    %eax,(%esp)
0829abb1 +0x0c11:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829abb6 +0x0c16:  jmp    0829abee <+0xc4e>
0829abb8 +0x0c18:  mov    %edx,%ebx
0829abba +0x0c1a:  mov    %eax,%esi
0829abbc +0x0c1c:  lea    -0x334(%ebp),%eax
0829abc2 +0x0c22:  mov    %eax,(%esp)
0829abc5 +0x0c25:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829abca +0x0c2a:  mov    %esi,%eax
0829abcc +0x0c2c:  mov    %ebx,%edx
0829abce +0x0c2e:  jmp    0829abd0 <+0xc30>
0829abd0 +0x0c30:  mov    %edx,%ebx
0829abd2 +0x0c32:  mov    %eax,%esi
0829abd4 +0x0c34:  lea    -0x32d(%ebp),%eax
0829abda +0x0c3a:  mov    %eax,(%esp)
0829abdd +0x0c3d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829abe2 +0x0c42:  mov    %esi,%eax
0829abe4 +0x0c44:  mov    %ebx,%edx
0829abe6 +0x0c46:  mov    %eax,(%esp)
0829abe9 +0x0c49:  call   08ae3750 <_Unwind_Resume>
0829abee +0x0c4e:  lea    -0x32d(%ebp),%eax
0829abf4 +0x0c54:  mov    %eax,(%esp)
0829abf7 +0x0c57:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829abfc +0x0c5c:  mov    &_ZN10GlobalData14s_school_proxyE,%eax
0829ac01 +0x0c61:  test   %eax,%eax
0829ac03 +0x0c63:  jne    0829ac33 <+0xc93>
0829ac05 +0x0c65:  movl   $"[GlobalData::Init] Can't allocate school server proxy memory",0x4(%esp)
0829ac0d +0x0c6d:  movl   $&_ZSt4cerr,(%esp)
0829ac14 +0x0c74:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829ac19 +0x0c79:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829ac21 +0x0c81:  mov    %eax,(%esp)
0829ac24 +0x0c84:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829ac29 +0x0c89:  mov    $0x0,%ebx
0829ac2e +0x0c8e:  jmp    0829d42b <+0x348b>
0829ac33 +0x0c93:  mov    &_ZN10GlobalData14s_school_proxyE,%eax
0829ac38 +0x0c98:  mov    %eax,(%esp)
0829ac3b +0x0c9b:  call   08471e7a <_ZN18CSchoolServerProxy4InitEv>  ; CSchoolServerProxy::Init()
0829ac40 +0x0ca0:  xor    $0x1,%eax
0829ac43 +0x0ca3:  test   %al,%al
0829ac45 +0x0ca5:  je     0829ac75 <+0xcd5>
0829ac47 +0x0ca7:  movl   $"[GlobalData::Init] Fail Init (school server proxy)",0x4(%esp)
0829ac4f +0x0caf:  movl   $&_ZSt4cerr,(%esp)
0829ac56 +0x0cb6:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829ac5b +0x0cbb:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829ac63 +0x0cc3:  mov    %eax,(%esp)
0829ac66 +0x0cc6:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829ac6b +0x0ccb:  mov    $0x0,%ebx
0829ac70 +0x0cd0:  jmp    0829d42b <+0x348b>
0829ac75 +0x0cd5:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ac7a +0x0cda:  mov    %eax,(%esp)
0829ac7d +0x0cdd:  call   082a6e90 <_GLOBAL__I__ZN4CLog5this_E+0x32b7>  ; global constructors keyed to CLog::this_+0x32b7
0829ac82 +0x0ce2:  mov    %eax,%esi
0829ac84 +0x0ce4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ac89 +0x0ce9:  mov    %eax,(%esp)
0829ac8c +0x0cec:  call   082a6e82 <_GLOBAL__I__ZN4CLog5this_E+0x32a9>  ; global constructors keyed to CLog::this_+0x32a9
0829ac91 +0x0cf1:  mov    %eax,%edi
0829ac93 +0x0cf3:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ac9b +0x0cfb:  movl   $&_ZL14gUnicodeBuffer+0x268d8,(%esp)
0829aca2 +0x0d02:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829aca7 +0x0d07:  mov    %eax,%ebx
0829aca9 +0x0d09:  mov    %ebx,%eax
0829acab +0x0d0b:  test   %eax,%eax
0829acad +0x0d0d:  je     0829ace7 <+0xd47>
0829acaf +0x0d0f:  mov    %ebx,%eax
0829acb1 +0x0d11:  mov    %edi,0x8(%esp)
0829acb5 +0x0d15:  mov    %esi,0x4(%esp)
0829acb9 +0x0d19:  mov    %eax,(%esp)
0829acbc +0x0d1c:  call   084717dc <_ZN18CPCRoomServerProxyC1EPci>  ; CPCRoomServerProxy::CPCRoomServerProxy(char*, int)
0829acc1 +0x0d21:  jmp    0829ace3 <+0xd43>
0829acc3 +0x0d23:  mov    %edx,%esi
0829acc5 +0x0d25:  mov    %eax,%edi
0829acc7 +0x0d27:  movl   $&_ZSt7nothrow,0x4(%esp)
0829accf +0x0d2f:  mov    %ebx,(%esp)
0829acd2 +0x0d32:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829acd7 +0x0d37:  mov    %edi,%eax
0829acd9 +0x0d39:  mov    %esi,%edx
0829acdb +0x0d3b:  mov    %eax,(%esp)
0829acde +0x0d3e:  call   08ae3750 <_Unwind_Resume>
0829ace3 +0x0d43:  mov    %ebx,%eax
0829ace5 +0x0d45:  jmp    0829ace9 <+0xd49>
0829ace7 +0x0d47:  mov    %ebx,%eax
0829ace9 +0x0d49:  mov    %eax,&_ZN10GlobalData14s_pcroom_proxyE
0829acee +0x0d4e:  mov    &_ZN10GlobalData14s_pcroom_proxyE,%eax
0829acf3 +0x0d53:  test   %eax,%eax
0829acf5 +0x0d55:  jne    0829ad25 <+0xd85>
0829acf7 +0x0d57:  movl   $"[GlobalData::Init] Can't allocate pcroom server proxy memory",0x4(%esp)
0829acff +0x0d5f:  movl   $&_ZSt4cerr,(%esp)
0829ad06 +0x0d66:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829ad0b +0x0d6b:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829ad13 +0x0d73:  mov    %eax,(%esp)
0829ad16 +0x0d76:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829ad1b +0x0d7b:  mov    $0x0,%ebx
0829ad20 +0x0d80:  jmp    0829d42b <+0x348b>
0829ad25 +0x0d85:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ad2a +0x0d8a:  mov    %eax,(%esp)
0829ad2d +0x0d8d:  call   082a6eac <_GLOBAL__I__ZN4CLog5this_E+0x32d3>  ; global constructors keyed to CLog::this_+0x32d3
0829ad32 +0x0d92:  mov    %eax,%esi
0829ad34 +0x0d94:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ad39 +0x0d99:  mov    %eax,(%esp)
0829ad3c +0x0d9c:  call   082a6e9e <_GLOBAL__I__ZN4CLog5this_E+0x32c5>  ; global constructors keyed to CLog::this_+0x32c5
0829ad41 +0x0da1:  mov    %eax,%edi
0829ad43 +0x0da3:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ad4b +0x0dab:  movl   $&_ZL14gUnicodeBuffer+0x268d8,(%esp)
0829ad52 +0x0db2:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829ad57 +0x0db7:  mov    %eax,%ebx
0829ad59 +0x0db9:  mov    %ebx,%eax
0829ad5b +0x0dbb:  test   %eax,%eax
0829ad5d +0x0dbd:  je     0829ad97 <+0xdf7>
0829ad5f +0x0dbf:  mov    %ebx,%eax
0829ad61 +0x0dc1:  mov    %edi,0x8(%esp)
0829ad65 +0x0dc5:  mov    %esi,0x4(%esp)
0829ad69 +0x0dc9:  mov    %eax,(%esp)
0829ad6c +0x0dcc:  call   0846c5c8 <_ZN21CCommunityServerProxyC1EPci>  ; CCommunityServerProxy::CCommunityServerProxy(char*, int)
0829ad71 +0x0dd1:  jmp    0829ad93 <+0xdf3>
0829ad73 +0x0dd3:  mov    %edx,%esi
0829ad75 +0x0dd5:  mov    %eax,%edi
0829ad77 +0x0dd7:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ad7f +0x0ddf:  mov    %ebx,(%esp)
0829ad82 +0x0de2:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829ad87 +0x0de7:  mov    %edi,%eax
0829ad89 +0x0de9:  mov    %esi,%edx
0829ad8b +0x0deb:  mov    %eax,(%esp)
0829ad8e +0x0dee:  call   08ae3750 <_Unwind_Resume>
0829ad93 +0x0df3:  mov    %ebx,%eax
0829ad95 +0x0df5:  jmp    0829ad99 <+0xdf9>
0829ad97 +0x0df7:  mov    %ebx,%eax
0829ad99 +0x0df9:  mov    %eax,&_ZN10GlobalData17s_community_proxyE
0829ad9e +0x0dfe:  mov    &_ZN10GlobalData17s_community_proxyE,%eax
0829ada3 +0x0e03:  test   %eax,%eax
0829ada5 +0x0e05:  jne    0829add5 <+0xe35>
0829ada7 +0x0e07:  movl   $"[GlobalData::Init] Can't allocate community server proxy memory",0x4(%esp)
0829adaf +0x0e0f:  movl   $&_ZSt4cerr,(%esp)
0829adb6 +0x0e16:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829adbb +0x0e1b:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829adc3 +0x0e23:  mov    %eax,(%esp)
0829adc6 +0x0e26:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829adcb +0x0e2b:  mov    $0x0,%ebx
0829add0 +0x0e30:  jmp    0829d42b <+0x348b>
0829add5 +0x0e35:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829adda +0x0e3a:  mov    %eax,(%esp)
0829addd +0x0e3d:  call   082a6ec8 <_GLOBAL__I__ZN4CLog5this_E+0x32ef>  ; global constructors keyed to CLog::this_+0x32ef
0829ade2 +0x0e42:  mov    %eax,%esi
0829ade4 +0x0e44:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ade9 +0x0e49:  mov    %eax,(%esp)
0829adec +0x0e4c:  call   082a6eba <_GLOBAL__I__ZN4CLog5this_E+0x32e1>  ; global constructors keyed to CLog::this_+0x32e1
0829adf1 +0x0e51:  mov    %eax,%edi
0829adf3 +0x0e53:  movl   $&_ZSt7nothrow,0x4(%esp)
0829adfb +0x0e5b:  movl   $&_ZL14gUnicodeBuffer+0x268e4,(%esp)
0829ae02 +0x0e62:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829ae07 +0x0e67:  mov    %eax,%ebx
0829ae09 +0x0e69:  mov    %ebx,%eax
0829ae0b +0x0e6b:  test   %eax,%eax
0829ae0d +0x0e6d:  je     0829ae4f <+0xeaf>
0829ae0f +0x0e6f:  mov    %ebx,%eax
0829ae11 +0x0e71:  movl   $"Auction Server",0xc(%esp)
0829ae19 +0x0e79:  mov    %edi,0x8(%esp)
0829ae1d +0x0e7d:  mov    %esi,0x4(%esp)
0829ae21 +0x0e81:  mov    %eax,(%esp)
0829ae24 +0x0e84:  call   082f7a90 <_ZN19CAuctionServerProxyC1EPciS0_>  ; CAuctionServerProxy::CAuctionServerProxy(char*, int, char*)
0829ae29 +0x0e89:  jmp    0829ae4b <+0xeab>
0829ae2b +0x0e8b:  mov    %edx,%esi
0829ae2d +0x0e8d:  mov    %eax,%edi
0829ae2f +0x0e8f:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ae37 +0x0e97:  mov    %ebx,(%esp)
0829ae3a +0x0e9a:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829ae3f +0x0e9f:  mov    %edi,%eax
0829ae41 +0x0ea1:  mov    %esi,%edx
0829ae43 +0x0ea3:  mov    %eax,(%esp)
0829ae46 +0x0ea6:  call   08ae3750 <_Unwind_Resume>
0829ae4b +0x0eab:  mov    %ebx,%eax
0829ae4d +0x0ead:  jmp    0829ae51 <+0xeb1>
0829ae4f +0x0eaf:  mov    %ebx,%eax
0829ae51 +0x0eb1:  mov    %eax,&_ZN10GlobalData15s_auction_proxyE
0829ae56 +0x0eb6:  mov    &_ZN10GlobalData15s_auction_proxyE,%eax
0829ae5b +0x0ebb:  test   %eax,%eax
0829ae5d +0x0ebd:  jne    0829ae8d <+0xeed>
0829ae5f +0x0ebf:  movl   $"[GlobalData::Init] Can't allocate auction server proxy memory",0x4(%esp)
0829ae67 +0x0ec7:  movl   $&_ZSt4cerr,(%esp)
0829ae6e +0x0ece:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829ae73 +0x0ed3:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829ae7b +0x0edb:  mov    %eax,(%esp)
0829ae7e +0x0ede:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829ae83 +0x0ee3:  mov    $0x0,%ebx
0829ae88 +0x0ee8:  jmp    0829d42b <+0x348b>
0829ae8d +0x0eed:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829ae92 +0x0ef2:  mov    %eax,(%esp)
0829ae95 +0x0ef5:  call   082a6ee4 <_GLOBAL__I__ZN4CLog5this_E+0x330b>  ; global constructors keyed to CLog::this_+0x330b
0829ae9a +0x0efa:  mov    %eax,%esi
0829ae9c +0x0efc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829aea1 +0x0f01:  mov    %eax,(%esp)
0829aea4 +0x0f04:  call   082a6ed6 <_GLOBAL__I__ZN4CLog5this_E+0x32fd>  ; global constructors keyed to CLog::this_+0x32fd
0829aea9 +0x0f09:  mov    %eax,%edi
0829aeab +0x0f0b:  movl   $&_ZSt7nothrow,0x4(%esp)
0829aeb3 +0x0f13:  movl   $&_ZL14gUnicodeBuffer+0x268e4,(%esp)
0829aeba +0x0f1a:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829aebf +0x0f1f:  mov    %eax,%ebx
0829aec1 +0x0f21:  mov    %ebx,%eax
0829aec3 +0x0f23:  test   %eax,%eax
0829aec5 +0x0f25:  je     0829af07 <+0xf67>
0829aec7 +0x0f27:  mov    %ebx,%eax
0829aec9 +0x0f29:  movl   $"Cera Auction Server",0xc(%esp)
0829aed1 +0x0f31:  mov    %edi,0x8(%esp)
0829aed5 +0x0f35:  mov    %esi,0x4(%esp)
0829aed9 +0x0f39:  mov    %eax,(%esp)
0829aedc +0x0f3c:  call   082f7ba0 <_ZN23CCeraAuctionServerProxyC1EPciS0_>  ; CCeraAuctionServerProxy::CCeraAuctionServerProxy(char*, int, char*)
0829aee1 +0x0f41:  jmp    0829af03 <+0xf63>
0829aee3 +0x0f43:  mov    %edx,%esi
0829aee5 +0x0f45:  mov    %eax,%edi
0829aee7 +0x0f47:  movl   $&_ZSt7nothrow,0x4(%esp)
0829aeef +0x0f4f:  mov    %ebx,(%esp)
0829aef2 +0x0f52:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829aef7 +0x0f57:  mov    %edi,%eax
0829aef9 +0x0f59:  mov    %esi,%edx
0829aefb +0x0f5b:  mov    %eax,(%esp)
0829aefe +0x0f5e:  call   08ae3750 <_Unwind_Resume>
0829af03 +0x0f63:  mov    %ebx,%eax
0829af05 +0x0f65:  jmp    0829af09 <+0xf69>
0829af07 +0x0f67:  mov    %ebx,%eax
0829af09 +0x0f69:  mov    %eax,&_ZN10GlobalData20s_cera_auction_proxyE
0829af0e +0x0f6e:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%eax
0829af13 +0x0f73:  test   %eax,%eax
0829af15 +0x0f75:  jne    0829af45 <+0xfa5>
0829af17 +0x0f77:  movl   $"[GlobalData::Init] Can't allocate cera auction server proxy memory",0x4(%esp)
0829af1f +0x0f7f:  movl   $&_ZSt4cerr,(%esp)
0829af26 +0x0f86:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829af2b +0x0f8b:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829af33 +0x0f93:  mov    %eax,(%esp)
0829af36 +0x0f96:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829af3b +0x0f9b:  mov    $0x0,%ebx
0829af40 +0x0fa0:  jmp    0829d42b <+0x348b>
0829af45 +0x0fa5:  movl   $&_ZSt7nothrow,0x4(%esp)
0829af4d +0x0fad:  movl   $0x208,(%esp)
0829af54 +0x0fb4:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829af59 +0x0fb9:  mov    %eax,%ebx
0829af5b +0x0fbb:  mov    %ebx,%eax
0829af5d +0x0fbd:  test   %eax,%eax
0829af5f +0x0fbf:  je     0829af91 <+0xff1>
0829af61 +0x0fc1:  mov    %ebx,%eax
0829af63 +0x0fc3:  mov    %eax,(%esp)
0829af66 +0x0fc6:  call   0847e998 <_ZN13CPowerManagerC1Ev>  ; CPowerManager::CPowerManager()
0829af6b +0x0fcb:  jmp    0829af8d <+0xfed>
0829af6d +0x0fcd:  mov    %edx,%esi
0829af6f +0x0fcf:  mov    %eax,%edi
0829af71 +0x0fd1:  movl   $&_ZSt7nothrow,0x4(%esp)
0829af79 +0x0fd9:  mov    %ebx,(%esp)
0829af7c +0x0fdc:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829af81 +0x0fe1:  mov    %edi,%eax
0829af83 +0x0fe3:  mov    %esi,%edx
0829af85 +0x0fe5:  mov    %eax,(%esp)
0829af88 +0x0fe8:  call   08ae3750 <_Unwind_Resume>
0829af8d +0x0fed:  mov    %ebx,%eax
0829af8f +0x0fef:  jmp    0829af93 <+0xff3>
0829af91 +0x0ff1:  mov    %ebx,%eax
0829af93 +0x0ff3:  mov    %eax,&_ZN10GlobalData15s_power_managerE
0829af98 +0x0ff8:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0829af9d +0x0ffd:  test   %eax,%eax
0829af9f +0x0fff:  jne    0829afcf <+0x102f>
0829afa1 +0x1001:  movl   $"[GlobalData::Init] Can't allocate power manager memory",0x4(%esp)
0829afa9 +0x1009:  movl   $&_ZSt4cerr,(%esp)
0829afb0 +0x1010:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829afb5 +0x1015:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829afbd +0x101d:  mov    %eax,(%esp)
0829afc0 +0x1020:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829afc5 +0x1025:  mov    $0x0,%ebx
0829afca +0x102a:  jmp    0829d42b <+0x348b>
0829afcf +0x102f:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0829afd4 +0x1034:  mov    %eax,(%esp)
0829afd7 +0x1037:  call   0847eabc <_ZN13CPowerManager4InitEv>  ; CPowerManager::Init()
0829afdc +0x103c:  xor    $0x1,%eax
0829afdf +0x103f:  test   %al,%al
0829afe1 +0x1041:  je     0829b011 <+0x1071>
0829afe3 +0x1043:  movl   $"[GlobalData::Init] Fail Init (power manager memory)",0x4(%esp)
0829afeb +0x104b:  movl   $&_ZSt4cerr,(%esp)
0829aff2 +0x1052:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829aff7 +0x1057:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829afff +0x105f:  mov    %eax,(%esp)
0829b002 +0x1062:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b007 +0x1067:  mov    $0x0,%ebx
0829b00c +0x106c:  jmp    0829d42b <+0x348b>
0829b011 +0x1071:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0829b016 +0x1076:  mov    %eax,(%esp)
0829b019 +0x1079:  call   08480d98 <_ZN13CPowerManager16LoadPowerWarInfoEv>  ; CPowerManager::LoadPowerWarInfo()
0829b01e +0x107e:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0829b023 +0x1083:  mov    %eax,(%esp)
0829b026 +0x1086:  call   0847f4fe <_ZN13CPowerManager14LoadRankerInfoEv>  ; CPowerManager::LoadRankerInfo()
0829b02b +0x108b:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b033 +0x1093:  movl   $0x1,(%esp)
0829b03a +0x109a:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b03f +0x109f:  mov    %eax,%ebx
0829b041 +0x10a1:  mov    %ebx,%eax
0829b043 +0x10a3:  test   %eax,%eax
0829b045 +0x10a5:  je     0829b077 <+0x10d7>
0829b047 +0x10a7:  mov    %ebx,%eax
0829b049 +0x10a9:  mov    %eax,(%esp)
0829b04c +0x10ac:  call   084a7ff8 <_ZN21CFatigueBatteryHandleC1Ev>  ; CFatigueBatteryHandle::CFatigueBatteryHandle()
0829b051 +0x10b1:  jmp    0829b073 <+0x10d3>
0829b053 +0x10b3:  mov    %edx,%esi
0829b055 +0x10b5:  mov    %eax,%edi
0829b057 +0x10b7:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b05f +0x10bf:  mov    %ebx,(%esp)
0829b062 +0x10c2:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829b067 +0x10c7:  mov    %edi,%eax
0829b069 +0x10c9:  mov    %esi,%edx
0829b06b +0x10cb:  mov    %eax,(%esp)
0829b06e +0x10ce:  call   08ae3750 <_Unwind_Resume>
0829b073 +0x10d3:  mov    %ebx,%eax
0829b075 +0x10d5:  jmp    0829b079 <+0x10d9>
0829b077 +0x10d7:  mov    %ebx,%eax
0829b079 +0x10d9:  mov    %eax,&_ZN10GlobalData23s_fatigueBatteryHandle_E
0829b07e +0x10de:  mov    &_ZN10GlobalData23s_fatigueBatteryHandle_E,%eax
0829b083 +0x10e3:  test   %eax,%eax
0829b085 +0x10e5:  jne    0829b0b5 <+0x1115>
0829b087 +0x10e7:  movl   $"[GlobalData::Init] Can't allocate Fatigue Battery Handle memory",0x4(%esp)
0829b08f +0x10ef:  movl   $&_ZSt4cerr,(%esp)
0829b096 +0x10f6:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829b09b +0x10fb:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829b0a3 +0x1103:  mov    %eax,(%esp)
0829b0a6 +0x1106:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b0ab +0x110b:  mov    $0x0,%ebx
0829b0b0 +0x1110:  jmp    0829d42b <+0x348b>
0829b0b5 +0x1115:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b0bd +0x111d:  movl   $0x64,(%esp)
0829b0c4 +0x1124:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b0c9 +0x1129:  mov    %eax,%ebx
0829b0cb +0x112b:  mov    %ebx,%eax
0829b0cd +0x112d:  test   %eax,%eax
0829b0cf +0x112f:  je     0829b101 <+0x1161>
0829b0d1 +0x1131:  mov    %ebx,%eax
0829b0d3 +0x1133:  mov    %eax,(%esp)
0829b0d6 +0x1136:  call   085fa930 <_ZN10secretshop11CSecretShopC1Ev>  ; secretshop::CSecretShop::CSecretShop()
0829b0db +0x113b:  jmp    0829b0fd <+0x115d>
0829b0dd +0x113d:  mov    %edx,%esi
0829b0df +0x113f:  mov    %eax,%edi
0829b0e1 +0x1141:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b0e9 +0x1149:  mov    %ebx,(%esp)
0829b0ec +0x114c:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829b0f1 +0x1151:  mov    %edi,%eax
0829b0f3 +0x1153:  mov    %esi,%edx
0829b0f5 +0x1155:  mov    %eax,(%esp)
0829b0f8 +0x1158:  call   08ae3750 <_Unwind_Resume>
0829b0fd +0x115d:  mov    %ebx,%eax
0829b0ff +0x115f:  jmp    0829b103 <+0x1163>
0829b101 +0x1161:  mov    %ebx,%eax
0829b103 +0x1163:  mov    %eax,&_ZN10GlobalData13s_secret_shopE
0829b108 +0x1168:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
0829b10d +0x116d:  test   %eax,%eax
0829b10f +0x116f:  jne    0829b13f <+0x119f>
0829b111 +0x1171:  movl   $"[GlobalData::Init] Can't allocate SecretShop Handle memory",0x4(%esp)
0829b119 +0x1179:  movl   $&_ZSt4cerr,(%esp)
0829b120 +0x1180:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829b125 +0x1185:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829b12d +0x118d:  mov    %eax,(%esp)
0829b130 +0x1190:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b135 +0x1195:  mov    $0x0,%ebx
0829b13a +0x119a:  jmp    0829d42b <+0x348b>
0829b13f +0x119f:  lea    -0x325(%ebp),%eax
0829b145 +0x11a5:  mov    %eax,(%esp)
0829b148 +0x11a8:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0829b14d +0x11ad:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829b152 +0x11b2:  mov    %eax,(%esp)
0829b155 +0x11b5:  call   082a6e58 <_GLOBAL__I__ZN4CLog5this_E+0x327f>  ; global constructors keyed to CLog::this_+0x327f
0829b15a +0x11ba:  lea    -0x325(%ebp),%edx
0829b160 +0x11c0:  mov    %edx,0x8(%esp)
0829b164 +0x11c4:  mov    %eax,0x4(%esp)
0829b168 +0x11c8:  lea    -0x32c(%ebp),%eax
0829b16e +0x11ce:  mov    %eax,(%esp)
0829b171 +0x11d1:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0829b176 +0x11d6:  lea    -0x32c(%ebp),%esi
0829b17c +0x11dc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829b181 +0x11e1:  mov    %eax,(%esp)
0829b184 +0x11e4:  call   082a6e4a <_GLOBAL__I__ZN4CLog5this_E+0x3271>  ; global constructors keyed to CLog::this_+0x3271
0829b189 +0x11e9:  mov    %eax,%edi
0829b18b +0x11eb:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b193 +0x11f3:  movl   $0x80020,(%esp)
0829b19a +0x11fa:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b19f +0x11ff:  mov    %eax,%ebx
0829b1a1 +0x1201:  mov    %ebx,%eax
0829b1a3 +0x1203:  test   %eax,%eax
0829b1a5 +0x1205:  je     0829b1d9 <+0x1239>
0829b1a7 +0x1207:  mov    %ebx,%eax
0829b1a9 +0x1209:  mov    %edi,0x8(%esp)
0829b1ad +0x120d:  mov    %esi,0x4(%esp)
0829b1b1 +0x1211:  mov    %eax,(%esp)
0829b1b4 +0x1214:  call   081060f4 <_ZN15CmmChannelProxyC1ESsi>  ; CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)
0829b1b9 +0x1219:  jmp    0829b1d5 <+0x1235>
0829b1bb +0x121b:  mov    %edx,%esi
0829b1bd +0x121d:  mov    %eax,%edi
0829b1bf +0x121f:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b1c7 +0x1227:  mov    %ebx,(%esp)
0829b1ca +0x122a:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829b1cf +0x122f:  mov    %edi,%eax
0829b1d1 +0x1231:  mov    %esi,%edx
0829b1d3 +0x1233:  jmp    0829b1f0 <+0x1250>
0829b1d5 +0x1235:  mov    %ebx,%eax
0829b1d7 +0x1237:  jmp    0829b1db <+0x123b>
0829b1d9 +0x1239:  mov    %ebx,%eax
0829b1db +0x123b:  mov    %eax,&_ZN10GlobalData15s_channel_proxyE
0829b1e0 +0x1240:  lea    -0x32c(%ebp),%eax
0829b1e6 +0x1246:  mov    %eax,(%esp)
0829b1e9 +0x1249:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829b1ee +0x124e:  jmp    0829b226 <+0x1286>
0829b1f0 +0x1250:  mov    %edx,%ebx
0829b1f2 +0x1252:  mov    %eax,%esi
0829b1f4 +0x1254:  lea    -0x32c(%ebp),%eax
0829b1fa +0x125a:  mov    %eax,(%esp)
0829b1fd +0x125d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0829b202 +0x1262:  mov    %esi,%eax
0829b204 +0x1264:  mov    %ebx,%edx
0829b206 +0x1266:  jmp    0829b208 <+0x1268>
0829b208 +0x1268:  mov    %edx,%ebx
0829b20a +0x126a:  mov    %eax,%esi
0829b20c +0x126c:  lea    -0x325(%ebp),%eax
0829b212 +0x1272:  mov    %eax,(%esp)
0829b215 +0x1275:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829b21a +0x127a:  mov    %esi,%eax
0829b21c +0x127c:  mov    %ebx,%edx
0829b21e +0x127e:  mov    %eax,(%esp)
0829b221 +0x1281:  call   08ae3750 <_Unwind_Resume>
0829b226 +0x1286:  lea    -0x325(%ebp),%eax
0829b22c +0x128c:  mov    %eax,(%esp)
0829b22f +0x128f:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0829b234 +0x1294:  mov    &_ZN10GlobalData15s_channel_proxyE,%eax
0829b239 +0x1299:  test   %eax,%eax
0829b23b +0x129b:  jne    0829b26b <+0x12cb>
0829b23d +0x129d:  movl   $"[GlobalData::Init] Can't allocate channel server proxy memory",0x4(%esp)
0829b245 +0x12a5:  movl   $&_ZSt4cerr,(%esp)
0829b24c +0x12ac:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829b251 +0x12b1:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829b259 +0x12b9:  mov    %eax,(%esp)
0829b25c +0x12bc:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b261 +0x12c1:  mov    $0x0,%ebx
0829b266 +0x12c6:  jmp    0829d42b <+0x348b>
0829b26b +0x12cb:  mov    &_ZN10GlobalData15s_channel_proxyE,%eax
0829b270 +0x12d0:  mov    %eax,(%esp)
0829b273 +0x12d3:  call   0810614a <_ZN15CmmChannelProxy4InitEv>  ; CmmChannelProxy::Init()
0829b278 +0x12d8:  xor    $0x1,%eax
0829b27b +0x12db:  test   %al,%al
0829b27d +0x12dd:  je     0829b2ad <+0x130d>
0829b27f +0x12df:  movl   $"[GlobalData::Init] Fail Init (channel server proxy)",0x4(%esp)
0829b287 +0x12e7:  movl   $&_ZSt4cerr,(%esp)
0829b28e +0x12ee:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829b293 +0x12f3:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829b29b +0x12fb:  mov    %eax,(%esp)
0829b29e +0x12fe:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b2a3 +0x1303:  mov    $0x0,%ebx
0829b2a8 +0x1308:  jmp    0829d42b <+0x348b>
0829b2ad +0x130d:  movl   $0x47c,(%esp)
0829b2b4 +0x1314:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b2b9 +0x1319:  mov    %eax,%ebx
0829b2bb +0x131b:  mov    %ebx,%eax
0829b2bd +0x131d:  mov    %eax,(%esp)
0829b2c0 +0x1320:  call   080b60ac <_ZN9CRijndaelC1Ev>  ; CRijndael::CRijndael()
0829b2c5 +0x1325:  jmp    0829b2df <+0x133f>
0829b2c7 +0x1327:  mov    %edx,%esi
0829b2c9 +0x1329:  mov    %eax,%edi
0829b2cb +0x132b:  mov    %ebx,(%esp)
0829b2ce +0x132e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b2d3 +0x1333:  mov    %edi,%eax
0829b2d5 +0x1335:  mov    %esi,%edx
0829b2d7 +0x1337:  mov    %eax,(%esp)
0829b2da +0x133a:  call   08ae3750 <_Unwind_Resume>
0829b2df +0x133f:  mov    %ebx,%eax
0829b2e1 +0x1341:  mov    %eax,&_ZN10GlobalData28s_pcryptRijndael_CharacView_E
0829b2e6 +0x1346:  mov    &_ZN10GlobalData28s_pcryptRijndael_CharacView_E,%eax
0829b2eb +0x134b:  movl   $0x0,0x1c(%esp)
0829b2f3 +0x1353:  movl   $0x0,0x18(%esp)
0829b2fb +0x135b:  movl   $0x10,0x14(%esp)
0829b303 +0x1363:  movl   $0x10,0x10(%esp)
0829b30b +0x136b:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0829b313 +0x1373:  movl   $0x20,0x8(%esp)
0829b31b +0x137b:  movl   $"wongyaofejsvk007",0x4(%esp)
0829b323 +0x1383:  mov    %eax,(%esp)
0829b326 +0x1386:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0829b32b +0x138b:  movl   $0x47c,(%esp)
0829b332 +0x1392:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b337 +0x1397:  mov    %eax,%ebx
0829b339 +0x1399:  mov    %ebx,%eax
0829b33b +0x139b:  mov    %eax,(%esp)
0829b33e +0x139e:  call   080b60ac <_ZN9CRijndaelC1Ev>  ; CRijndael::CRijndael()
0829b343 +0x13a3:  jmp    0829b35d <+0x13bd>
0829b345 +0x13a5:  mov    %edx,%esi
0829b347 +0x13a7:  mov    %eax,%edi
0829b349 +0x13a9:  mov    %ebx,(%esp)
0829b34c +0x13ac:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b351 +0x13b1:  mov    %edi,%eax
0829b353 +0x13b3:  mov    %esi,%edx
0829b355 +0x13b5:  mov    %eax,(%esp)
0829b358 +0x13b8:  call   08ae3750 <_Unwind_Resume>
0829b35d +0x13bd:  mov    %ebx,%eax
0829b35f +0x13bf:  mov    %eax,&_ZN10GlobalData26s_pcryptRijndael_Password_E
0829b364 +0x13c4:  mov    &_ZN10GlobalData26s_pcryptRijndael_Password_E,%eax
0829b369 +0x13c9:  movl   $0x0,0x1c(%esp)
0829b371 +0x13d1:  movl   $0x0,0x18(%esp)
0829b379 +0x13d9:  movl   $0x10,0x14(%esp)
0829b381 +0x13e1:  movl   $0x10,0x10(%esp)
0829b389 +0x13e9:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0829b391 +0x13f1:  movl   $0x20,0x8(%esp)
0829b399 +0x13f9:  movl   $"wongyaofneople00",0x4(%esp)
0829b3a1 +0x1401:  mov    %eax,(%esp)
0829b3a4 +0x1404:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0829b3a9 +0x1409:  movl   $0x47c,(%esp)
0829b3b0 +0x1410:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b3b5 +0x1415:  mov    %eax,%ebx
0829b3b7 +0x1417:  mov    %ebx,%eax
0829b3b9 +0x1419:  mov    %eax,(%esp)
0829b3bc +0x141c:  call   080b60ac <_ZN9CRijndaelC1Ev>  ; CRijndael::CRijndael()
0829b3c1 +0x1421:  jmp    0829b3db <+0x143b>
0829b3c3 +0x1423:  mov    %edx,%esi
0829b3c5 +0x1425:  mov    %eax,%edi
0829b3c7 +0x1427:  mov    %ebx,(%esp)
0829b3ca +0x142a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b3cf +0x142f:  mov    %edi,%eax
0829b3d1 +0x1431:  mov    %esi,%edx
0829b3d3 +0x1433:  mov    %eax,(%esp)
0829b3d6 +0x1436:  call   08ae3750 <_Unwind_Resume>
0829b3db +0x143b:  mov    %ebx,%eax
0829b3dd +0x143d:  mov    %eax,&_ZN10GlobalData31s_pcryptRijndael_MousePassword_E
0829b3e2 +0x1442:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
0829b3e7 +0x1447:  movl   $0x0,0x1c(%esp)
0829b3ef +0x144f:  movl   $0x0,0x18(%esp)
0829b3f7 +0x1457:  movl   $0x10,0x14(%esp)
0829b3ff +0x145f:  movl   $0x10,0x10(%esp)
0829b407 +0x1467:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0829b40f +0x146f:  movl   $0x20,0x8(%esp)
0829b417 +0x1477:  movl   $"ejsvk@@key4mouse",0x4(%esp)
0829b41f +0x147f:  mov    %eax,(%esp)
0829b422 +0x1482:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0829b427 +0x1487:  movl   $0x48,(%esp)
0829b42e +0x148e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b433 +0x1493:  mov    %eax,%ebx
0829b435 +0x1495:  mov    %ebx,%eax
0829b437 +0x1497:  mov    %eax,(%esp)
0829b43a +0x149a:  call   080c32f4 <_ZN4CTEAC1Ev>  ; CTEA::CTEA()
0829b43f +0x149f:  jmp    0829b459 <+0x14b9>
0829b441 +0x14a1:  mov    %edx,%esi
0829b443 +0x14a3:  mov    %eax,%edi
0829b445 +0x14a5:  mov    %ebx,(%esp)
0829b448 +0x14a8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b44d +0x14ad:  mov    %edi,%eax
0829b44f +0x14af:  mov    %esi,%edx
0829b451 +0x14b1:  mov    %eax,(%esp)
0829b454 +0x14b4:  call   08ae3750 <_Unwind_Resume>
0829b459 +0x14b9:  mov    %ebx,%eax
0829b45b +0x14bb:  mov    %eax,&_ZN10GlobalData26s_pcryptTEA_MousePassword_E
0829b460 +0x14c0:  mov    &_ZN10GlobalData26s_pcryptTEA_MousePassword_E,%eax
0829b465 +0x14c5:  movl   $0x0,0x14(%esp)
0829b46d +0x14cd:  movl   $0x0,0x10(%esp)
0829b475 +0x14d5:  movl   $&_ZN4CTEA9sm_chain0E,0xc(%esp)
0829b47d +0x14dd:  movl   $0x10,0x8(%esp)
0829b485 +0x14e5:  movl   $"tjsghTlWkdajtwla",0x4(%esp)
0829b48d +0x14ed:  mov    %eax,(%esp)
0829b490 +0x14f0:  call   080c339c <_ZN4CTEA10InitializeEPKciS1_ii>  ; CTEA::Initialize(char const*, int, char const*, int, int)
0829b495 +0x14f5:  movl   $0x48,(%esp)
0829b49c +0x14fc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b4a1 +0x1501:  mov    %eax,%ebx
0829b4a3 +0x1503:  mov    %ebx,%eax
0829b4a5 +0x1505:  mov    %eax,(%esp)
0829b4a8 +0x1508:  call   080c32f4 <_ZN4CTEAC1Ev>  ; CTEA::CTEA()
0829b4ad +0x150d:  jmp    0829b4c7 <+0x1527>
0829b4af +0x150f:  mov    %edx,%esi
0829b4b1 +0x1511:  mov    %eax,%edi
0829b4b3 +0x1513:  mov    %ebx,(%esp)
0829b4b6 +0x1516:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b4bb +0x151b:  mov    %edi,%eax
0829b4bd +0x151d:  mov    %esi,%edx
0829b4bf +0x151f:  mov    %eax,(%esp)
0829b4c2 +0x1522:  call   08ae3750 <_Unwind_Resume>
0829b4c7 +0x1527:  mov    %ebx,%eax
0829b4c9 +0x1529:  mov    %eax,&_ZN10GlobalData25s_pcryptTEA_SecurityCard_E
0829b4ce +0x152e:  mov    &_ZN10GlobalData25s_pcryptTEA_SecurityCard_E,%eax
0829b4d3 +0x1533:  movl   $0x0,0x14(%esp)
0829b4db +0x153b:  movl   $0x0,0x10(%esp)
0829b4e3 +0x1543:  movl   $&_ZN4CTEA9sm_chain0E,0xc(%esp)
0829b4eb +0x154b:  movl   $0x10,0x8(%esp)
0829b4f3 +0x1553:  movl   $"ejsvk@@@secucard",0x4(%esp)
0829b4fb +0x155b:  mov    %eax,(%esp)
0829b4fe +0x155e:  call   080c339c <_ZN4CTEA10InitializeEPKciS1_ii>  ; CTEA::Initialize(char const*, int, char const*, int, int)
0829b503 +0x1563:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b50b +0x156b:  movl   $0x10,(%esp)
0829b512 +0x1572:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b517 +0x1577:  mov    %eax,%ebx
0829b519 +0x1579:  mov    %ebx,%eax
0829b51b +0x157b:  test   %eax,%eax
0829b51d +0x157d:  je     0829b52d <+0x158d>
0829b51f +0x157f:  mov    %ebx,%eax
0829b521 +0x1581:  mov    %eax,(%esp)
0829b524 +0x1584:  call   082a71c4 <_GLOBAL__I__ZN4CLog5this_E+0x35eb>  ; global constructors keyed to CLog::this_+0x35eb
0829b529 +0x1589:  mov    %ebx,%eax
0829b52b +0x158b:  jmp    0829b52f <+0x158f>
0829b52d +0x158d:  mov    %ebx,%eax
0829b52f +0x158f:  mov    %eax,&_ZN10GlobalData17s_pLogGameChannelE
0829b534 +0x1594:  mov    &_ZN10GlobalData17s_pLogGameChannelE,%eax
0829b539 +0x1599:  mov    %eax,(%esp)
0829b53c +0x159c:  call   085503ea <_ZN8WongWork15CLogGameChannel13StartLogTimerEv>  ; WongWork::CLogGameChannel::StartLogTimer()
0829b541 +0x15a1:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b549 +0x15a9:  movl   $0x8,(%esp)
0829b550 +0x15b0:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b555 +0x15b5:  mov    %eax,%ebx
0829b557 +0x15b7:  mov    %ebx,%eax
0829b559 +0x15b9:  test   %eax,%eax
0829b55b +0x15bb:  je     0829b58d <+0x15ed>
0829b55d +0x15bd:  mov    %ebx,%eax
0829b55f +0x15bf:  mov    %eax,(%esp)
0829b562 +0x15c2:  call   083202b8 <_ZN8WongWork9CCeraShopC1Ev>  ; WongWork::CCeraShop::CCeraShop()
0829b567 +0x15c7:  jmp    0829b589 <+0x15e9>
0829b569 +0x15c9:  mov    %edx,%esi
0829b56b +0x15cb:  mov    %eax,%edi
0829b56d +0x15cd:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b575 +0x15d5:  mov    %ebx,(%esp)
0829b578 +0x15d8:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829b57d +0x15dd:  mov    %edi,%eax
0829b57f +0x15df:  mov    %esi,%edx
0829b581 +0x15e1:  mov    %eax,(%esp)
0829b584 +0x15e4:  call   08ae3750 <_Unwind_Resume>
0829b589 +0x15e9:  mov    %ebx,%eax
0829b58b +0x15eb:  jmp    0829b58f <+0x15ef>
0829b58d +0x15ed:  mov    %ebx,%eax
0829b58f +0x15ef:  mov    %eax,&_ZN10GlobalData11s_pCeraShopE
0829b594 +0x15f4:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b59c +0x15fc:  movl   $0x20,(%esp)
0829b5a3 +0x1603:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b5a8 +0x1608:  mov    %eax,%ebx
0829b5aa +0x160a:  mov    %ebx,%eax
0829b5ac +0x160c:  test   %eax,%eax
0829b5ae +0x160e:  je     0829b5e0 <+0x1640>
0829b5b0 +0x1610:  mov    %ebx,%eax
0829b5b2 +0x1612:  mov    %eax,(%esp)
0829b5b5 +0x1615:  call   0854c3e4 <_ZN18ItemVendingMachineC1Ev>  ; ItemVendingMachine::ItemVendingMachine()
0829b5ba +0x161a:  jmp    0829b5dc <+0x163c>
0829b5bc +0x161c:  mov    %edx,%esi
0829b5be +0x161e:  mov    %eax,%edi
0829b5c0 +0x1620:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b5c8 +0x1628:  mov    %ebx,(%esp)
0829b5cb +0x162b:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829b5d0 +0x1630:  mov    %edi,%eax
0829b5d2 +0x1632:  mov    %esi,%edx
0829b5d4 +0x1634:  mov    %eax,(%esp)
0829b5d7 +0x1637:  call   08ae3750 <_Unwind_Resume>
0829b5dc +0x163c:  mov    %ebx,%eax
0829b5de +0x163e:  jmp    0829b5e2 <+0x1642>
0829b5e0 +0x1640:  mov    %ebx,%eax
0829b5e2 +0x1642:  mov    %eax,&_ZN10GlobalData21s_pItemVendingMachineE
0829b5e7 +0x1647:  movl   $0x1,(%esp)
0829b5ee +0x164e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b5f3 +0x1653:  mov    %eax,%ebx
0829b5f5 +0x1655:  mov    %ebx,%eax
0829b5f7 +0x1657:  mov    %eax,(%esp)
0829b5fa +0x165a:  call   082aa6ba <_GLOBAL__I__ZN4CLog5this_E+0x6ae1>  ; global constructors keyed to CLog::this_+0x6ae1
0829b5ff +0x165f:  mov    %ebx,%eax
0829b601 +0x1661:  mov    %eax,&_ZN10GlobalData18s_pSecuDataControlE
0829b606 +0x1666:  movl   $0x18,(%esp)
0829b60d +0x166d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b612 +0x1672:  mov    %eax,%ebx
0829b614 +0x1674:  mov    %ebx,%eax
0829b616 +0x1676:  mov    %eax,(%esp)
0829b619 +0x1679:  call   082aa6d4 <_GLOBAL__I__ZN4CLog5this_E+0x6afb>  ; global constructors keyed to CLog::this_+0x6afb
0829b61e +0x167e:  jmp    0829b638 <+0x1698>
0829b620 +0x1680:  mov    %edx,%esi
0829b622 +0x1682:  mov    %eax,%edi
0829b624 +0x1684:  mov    %ebx,(%esp)
0829b627 +0x1687:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b62c +0x168c:  mov    %edi,%eax
0829b62e +0x168e:  mov    %esi,%edx
0829b630 +0x1690:  mov    %eax,(%esp)
0829b633 +0x1693:  call   08ae3750 <_Unwind_Resume>
0829b638 +0x1698:  mov    %ebx,%eax
0829b63a +0x169a:  mov    %eax,&_ZN10GlobalData22s_pSecuProtectionFieldE
0829b63f +0x169f:  movl   $0x18,(%esp)
0829b646 +0x16a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b64b +0x16ab:  mov    %eax,%ebx
0829b64d +0x16ad:  mov    %ebx,%eax
0829b64f +0x16af:  mov    %eax,(%esp)
0829b652 +0x16b2:  call   082a5a88 <_GLOBAL__I__ZN4CLog5this_E+0x1eaf>  ; global constructors keyed to CLog::this_+0x1eaf
0829b657 +0x16b7:  jmp    0829b671 <+0x16d1>
0829b659 +0x16b9:  mov    %edx,%esi
0829b65b +0x16bb:  mov    %eax,%edi
0829b65d +0x16bd:  mov    %ebx,(%esp)
0829b660 +0x16c0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b665 +0x16c5:  mov    %edi,%eax
0829b667 +0x16c7:  mov    %esi,%edx
0829b669 +0x16c9:  mov    %eax,(%esp)
0829b66c +0x16cc:  call   08ae3750 <_Unwind_Resume>
0829b671 +0x16d1:  mov    %ebx,%eax
0829b673 +0x16d3:  mov    %eax,&_ZN10GlobalData26g_autoPunishRuleBlackIPMgrE
0829b678 +0x16d8:  mov    &_ZN10GlobalData26g_autoPunishRuleBlackIPMgrE,%eax
0829b67d +0x16dd:  mov    %eax,(%esp)
0829b680 +0x16e0:  call   082a5a74 <_GLOBAL__I__ZN4CLog5this_E+0x1e9b>  ; global constructors keyed to CLog::this_+0x1e9b
0829b685 +0x16e5:  movl   $0x70,(%esp)
0829b68c +0x16ec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b691 +0x16f1:  mov    %eax,%ebx
0829b693 +0x16f3:  mov    %ebx,%eax
0829b695 +0x16f5:  mov    %eax,(%esp)
0829b698 +0x16f8:  call   082a5b1a <_GLOBAL__I__ZN4CLog5this_E+0x1f41>  ; global constructors keyed to CLog::this_+0x1f41
0829b69d +0x16fd:  jmp    0829b6b7 <+0x1717>
0829b69f +0x16ff:  mov    %edx,%esi
0829b6a1 +0x1701:  mov    %eax,%edi
0829b6a3 +0x1703:  mov    %ebx,(%esp)
0829b6a6 +0x1706:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b6ab +0x170b:  mov    %edi,%eax
0829b6ad +0x170d:  mov    %esi,%edx
0829b6af +0x170f:  mov    %eax,(%esp)
0829b6b2 +0x1712:  call   08ae3750 <_Unwind_Resume>
0829b6b7 +0x1717:  mov    %ebx,%eax
0829b6b9 +0x1719:  mov    %eax,&_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE
0829b6be +0x171e:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
0829b6c3 +0x1723:  mov    %eax,(%esp)
0829b6c6 +0x1726:  call   082a5a9c <_GLOBAL__I__ZN4CLog5this_E+0x1ec3>  ; global constructors keyed to CLog::this_+0x1ec3
0829b6cb +0x172b:  movl   $0x18,(%esp)
0829b6d2 +0x1732:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b6d7 +0x1737:  mov    %eax,%ebx
0829b6d9 +0x1739:  mov    %ebx,%eax
0829b6db +0x173b:  mov    %eax,(%esp)
0829b6de +0x173e:  call   082a6526 <_GLOBAL__I__ZN4CLog5this_E+0x294d>  ; global constructors keyed to CLog::this_+0x294d
0829b6e3 +0x1743:  jmp    0829b6fd <+0x175d>
0829b6e5 +0x1745:  mov    %edx,%esi
0829b6e7 +0x1747:  mov    %eax,%edi
0829b6e9 +0x1749:  mov    %ebx,(%esp)
0829b6ec +0x174c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b6f1 +0x1751:  mov    %edi,%eax
0829b6f3 +0x1753:  mov    %esi,%edx
0829b6f5 +0x1755:  mov    %eax,(%esp)
0829b6f8 +0x1758:  call   08ae3750 <_Unwind_Resume>
0829b6fd +0x175d:  mov    %ebx,%eax
0829b6ff +0x175f:  mov    %eax,&_ZN10GlobalData16g_blackIPMonitorE
0829b704 +0x1764:  mov    &_ZN10GlobalData16g_blackIPMonitorE,%eax
0829b709 +0x1769:  mov    %eax,(%esp)
0829b70c +0x176c:  call   082a6512 <_GLOBAL__I__ZN4CLog5this_E+0x2939>  ; global constructors keyed to CLog::this_+0x2939
0829b711 +0x1771:  movl   $0x10,(%esp)
0829b718 +0x1778:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b71d +0x177d:  mov    %eax,%ebx
0829b71f +0x177f:  mov    %ebx,%eax
0829b721 +0x1781:  mov    %eax,(%esp)
0829b724 +0x1784:  call   0857cbe8 <_ZN12AcceptThreadC1Ev>  ; AcceptThread::AcceptThread()
0829b729 +0x1789:  jmp    0829b743 <+0x17a3>
0829b72b +0x178b:  mov    %edx,%esi
0829b72d +0x178d:  mov    %eax,%edi
0829b72f +0x178f:  mov    %ebx,(%esp)
0829b732 +0x1792:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b737 +0x1797:  mov    %edi,%eax
0829b739 +0x1799:  mov    %esi,%edx
0829b73b +0x179b:  mov    %eax,(%esp)
0829b73e +0x179e:  call   08ae3750 <_Unwind_Resume>
0829b743 +0x17a3:  mov    %ebx,%eax
0829b745 +0x17a5:  mov    %eax,&_ZN10GlobalData12s_accept_thrE
0829b74a +0x17aa:  mov    &_ZN10GlobalData12s_accept_thrE,%eax
0829b74f +0x17af:  test   %eax,%eax
0829b751 +0x17b1:  jne    0829b781 <+0x17e1>
0829b753 +0x17b3:  movl   $"[GlobalData::Init] Can't allocate accept thread memory",0x4(%esp)
0829b75b +0x17bb:  movl   $&_ZSt4cerr,(%esp)
0829b762 +0x17c2:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829b767 +0x17c7:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829b76f +0x17cf:  mov    %eax,(%esp)
0829b772 +0x17d2:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b777 +0x17d7:  mov    $0x0,%ebx
0829b77c +0x17dc:  jmp    0829d42b <+0x348b>
0829b781 +0x17e1:  movl   $0x14c,(%esp)
0829b788 +0x17e8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829b78d +0x17ed:  mov    %eax,%ebx
0829b78f +0x17ef:  mov    %ebx,%eax
0829b791 +0x17f1:  mov    %eax,(%esp)
0829b794 +0x17f4:  call   085d46e6 <_ZN11RefPvpGradeC1Ev>  ; RefPvpGrade::RefPvpGrade()
0829b799 +0x17f9:  jmp    0829b7b3 <+0x1813>
0829b79b +0x17fb:  mov    %edx,%esi
0829b79d +0x17fd:  mov    %eax,%edi
0829b79f +0x17ff:  mov    %ebx,(%esp)
0829b7a2 +0x1802:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829b7a7 +0x1807:  mov    %edi,%eax
0829b7a9 +0x1809:  mov    %esi,%edx
0829b7ab +0x180b:  mov    %eax,(%esp)
0829b7ae +0x180e:  call   08ae3750 <_Unwind_Resume>
0829b7b3 +0x1813:  mov    %ebx,%eax
0829b7b5 +0x1815:  mov    %eax,&_ZN10GlobalData15s_ref_pvp_gradeE
0829b7ba +0x181a:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
0829b7bf +0x181f:  test   %eax,%eax
0829b7c1 +0x1821:  jne    0829b7f1 <+0x1851>
0829b7c3 +0x1823:  movl   $"[GlobalData::Init] Can't allocate pvp grade ref",0x4(%esp)
0829b7cb +0x182b:  movl   $&_ZSt4cerr,(%esp)
0829b7d2 +0x1832:  call   086fd300 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x8a94
0829b7d7 +0x1837:  movl   $&_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_,0x4(%esp)
0829b7df +0x183f:  mov    %eax,(%esp)
0829b7e2 +0x1842:  call   086fb860 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x6ff4
0829b7e7 +0x1847:  mov    $0x0,%ebx
0829b7ec +0x184c:  jmp    0829d42b <+0x348b>
0829b7f1 +0x1851:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b7f9 +0x1859:  movl   $0x16c,(%esp)
0829b800 +0x1860:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829b805 +0x1865:  mov    %eax,%ebx
0829b807 +0x1867:  mov    %ebx,%eax
0829b809 +0x1869:  test   %eax,%eax
0829b80b +0x186b:  je     0829b847 <+0x18a7>
0829b80d +0x186d:  mov    &_ZN10GlobalData8s_db_mgrE,%edx
0829b813 +0x1873:  mov    %ebx,%eax
0829b815 +0x1875:  mov    %edx,0x4(%esp)
0829b819 +0x1879:  mov    %eax,(%esp)
0829b81c +0x187c:  call   080ec5fc <_ZN12CDBConnectorC1EP5DBMgr>  ; CDBConnector::CDBConnector(DBMgr*)
0829b821 +0x1881:  jmp    0829b843 <+0x18a3>
0829b823 +0x1883:  mov    %edx,%esi
0829b825 +0x1885:  mov    %eax,%edi
0829b827 +0x1887:  movl   $&_ZSt7nothrow,0x4(%esp)
0829b82f +0x188f:  mov    %ebx,(%esp)
0829b832 +0x1892:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829b837 +0x1897:  mov    %edi,%eax
0829b839 +0x1899:  mov    %esi,%edx
0829b83b +0x189b:  mov    %eax,(%esp)
0829b83e +0x189e:  call   08ae3750 <_Unwind_Resume>
0829b843 +0x18a3:  mov    %ebx,%eax
0829b845 +0x18a5:  jmp    0829b849 <+0x18a9>
0829b847 +0x18a7:  mov    %ebx,%eax
0829b849 +0x18a9:  mov    %eax,&_ZN10GlobalData14s_db_connectorE
0829b84e +0x18ae:  mov    &_ZN10GlobalData14s_db_connectorE,%eax
0829b853 +0x18b3:  test   %eax,%eax
0829b855 +0x18b5:  jne    0829b861 <+0x18c1>
0829b857 +0x18b7:  mov    $0x0,%ebx
0829b85c +0x18bc:  jmp    0829d42b <+0x348b>
0829b861 +0x18c1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829b866 +0x18c6:  add    $0x68,%eax
0829b869 +0x18c9:  mov    %eax,-0x38(%ebp)
0829b86c +0x18cc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829b871 +0x18d1:  mov    0x378(%eax),%eax
0829b877 +0x18d7:  mov    %eax,-0x340(%ebp)
0829b87d +0x18dd:  lea    -0x358(%ebp),%eax
0829b883 +0x18e3:  mov    %eax,(%esp)
0829b886 +0x18e6:  call   082b3306 <_GLOBAL__I__ZN4CLog5this_E+0xf72d>  ; global constructors keyed to CLog::this_+0xf72d
0829b88b +0x18eb:  movl   $0x1,-0x20(%ebp)
0829b892 +0x18f2:  jmp    0829b903 <+0x1963>
0829b894 +0x18f4:  mov    -0x20(%ebp),%eax
0829b897 +0x18f7:  mov    %eax,-0x30c(%ebp)
0829b89d +0x18fd:  lea    -0x314(%ebp),%eax
0829b8a3 +0x1903:  lea    -0x340(%ebp),%edx
0829b8a9 +0x1909:  mov    %edx,0x8(%esp)
0829b8ad +0x190d:  lea    -0x30c(%ebp),%edx
0829b8b3 +0x1913:  mov    %edx,0x4(%esp)
0829b8b7 +0x1917:  mov    %eax,(%esp)
0829b8ba +0x191a:  call   082b337f <_GLOBAL__I__ZN4CLog5this_E+0xf7a6>  ; global constructors keyed to CLog::this_+0xf7a6
0829b8bf +0x191f:  sub    $0x4,%esp
0829b8c2 +0x1922:  lea    -0x314(%ebp),%eax
0829b8c8 +0x1928:  mov    %eax,0x4(%esp)
0829b8cc +0x192c:  lea    -0x31c(%ebp),%eax
0829b8d2 +0x1932:  mov    %eax,(%esp)
0829b8d5 +0x1935:  call   082b33c6 <_GLOBAL__I__ZN4CLog5this_E+0xf7ed>  ; global constructors keyed to CLog::this_+0xf7ed
0829b8da +0x193a:  lea    -0x324(%ebp),%eax
0829b8e0 +0x1940:  lea    -0x31c(%ebp),%edx
0829b8e6 +0x1946:  mov    %edx,0x8(%esp)
0829b8ea +0x194a:  lea    -0x358(%ebp),%edx
0829b8f0 +0x1950:  mov    %edx,0x4(%esp)
0829b8f4 +0x1954:  mov    %eax,(%esp)
0829b8f7 +0x1957:  call   082b33f6 <_GLOBAL__I__ZN4CLog5this_E+0xf81d>  ; global constructors keyed to CLog::this_+0xf81d
0829b8fc +0x195c:  sub    $0x4,%esp
0829b8ff +0x195f:  addl   $0x1,-0x20(%ebp)
0829b903 +0x1963:  cmpl   $0xe,-0x20(%ebp)
0829b907 +0x1967:  setle  %al
0829b90a +0x196a:  test   %al,%al
0829b90c +0x196c:  jne    0829b894 <+0x18f4>
0829b90e +0x196e:  movl   $0x0,-0x308(%ebp)
0829b918 +0x1978:  lea    -0x308(%ebp),%eax
0829b91e +0x197e:  mov    %eax,0x4(%esp)
0829b922 +0x1982:  mov    -0x38(%ebp),%eax
0829b925 +0x1985:  mov    %eax,(%esp)
0829b928 +0x1988:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829b92d +0x198d:  add    $0x42,%eax
0829b930 +0x1990:  mov    %eax,-0x778(%ebp)
0829b936 +0x1996:  movl   $0x0,-0x304(%ebp)
0829b940 +0x19a0:  lea    -0x304(%ebp),%eax
0829b946 +0x19a6:  mov    %eax,0x4(%esp)
0829b94a +0x19aa:  mov    -0x38(%ebp),%eax
0829b94d +0x19ad:  mov    %eax,(%esp)
0829b950 +0x19b0:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829b955 +0x19b5:  add    $0x18,%eax
0829b958 +0x19b8:  mov    %eax,%edi
0829b95a +0x19ba:  movl   $0x0,-0x300(%ebp)
0829b964 +0x19c4:  lea    -0x300(%ebp),%eax
0829b96a +0x19ca:  mov    %eax,0x4(%esp)
0829b96e +0x19ce:  mov    -0x38(%ebp),%eax
0829b971 +0x19d1:  mov    %eax,(%esp)
0829b974 +0x19d4:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829b979 +0x19d9:  mov    0x14(%eax),%esi
0829b97c +0x19dc:  movl   $0x0,-0x2fc(%ebp)
0829b986 +0x19e6:  lea    -0x2fc(%ebp),%eax
0829b98c +0x19ec:  mov    %eax,0x4(%esp)
0829b990 +0x19f0:  mov    -0x38(%ebp),%eax
0829b993 +0x19f3:  mov    %eax,(%esp)
0829b996 +0x19f6:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829b99b +0x19fb:  mov    %eax,%ebx
0829b99d +0x19fd:  movl   $0x0,0x14(%esp)
0829b9a5 +0x1a05:  movl   $0x1,0x10(%esp)
0829b9ad +0x1a0d:  movl   $0x9,0xc(%esp)
0829b9b5 +0x1a15:  movl   $0x1b0c,0x8(%esp)
0829b9bd +0x1a1d:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829b9c5 +0x1a25:  lea    -0x2f8(%ebp),%eax
0829b9cb +0x1a2b:  mov    %eax,(%esp)
0829b9ce +0x1a2e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829b9d3 +0x1a33:  mov    -0x778(%ebp),%ecx
0829b9d9 +0x1a39:  mov    %ecx,0x14(%esp)
0829b9dd +0x1a3d:  mov    %edi,0x10(%esp)
0829b9e1 +0x1a41:  mov    %esi,0xc(%esp)
0829b9e5 +0x1a45:  mov    %ebx,0x8(%esp)
0829b9e9 +0x1a49:  movl   $"\t- DBConnector Init(masterdb %s/%d/%s/%s) ",0x4(%esp)
0829b9f1 +0x1a51:  lea    -0x2f8(%ebp),%eax
0829b9f7 +0x1a57:  mov    %eax,(%esp)
0829b9fa +0x1a5a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829b9ff +0x1a5f:  movl   $0x0,-0x2e8(%ebp)
0829ba09 +0x1a69:  lea    -0x2e8(%ebp),%eax
0829ba0f +0x1a6f:  mov    %eax,0x4(%esp)
0829ba13 +0x1a73:  mov    -0x38(%ebp),%eax
0829ba16 +0x1a76:  mov    %eax,(%esp)
0829ba19 +0x1a79:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829ba1e +0x1a7e:  mov    &_ZN10GlobalData14s_db_connectorE,%edx
0829ba24 +0x1a84:  mov    %eax,0x4(%esp)
0829ba28 +0x1a88:  mov    %edx,(%esp)
0829ba2b +0x1a8b:  call   080ec620 <_ZN12CDBConnector4InitER12STDBConnInfo>  ; CDBConnector::Init(STDBConnInfo&)
0829ba30 +0x1a90:  xor    $0x1,%eax
0829ba33 +0x1a93:  test   %al,%al
0829ba35 +0x1a95:  je     0829ba8d <+0x1aed>
0829ba37 +0x1a97:  movl   $0x1,0x14(%esp)
0829ba3f +0x1a9f:  movl   $0x1,0x10(%esp)
0829ba47 +0x1aa7:  movl   $0x9,0xc(%esp)
0829ba4f +0x1aaf:  movl   $0x1b0f,0x8(%esp)
0829ba57 +0x1ab7:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829ba5f +0x1abf:  lea    -0x2e4(%ebp),%eax
0829ba65 +0x1ac5:  mov    %eax,(%esp)
0829ba68 +0x1ac8:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829ba6d +0x1acd:  movl   $"\t- DBConnector Init Fail",0x4(%esp)
0829ba75 +0x1ad5:  lea    -0x2e4(%ebp),%eax
0829ba7b +0x1adb:  mov    %eax,(%esp)
0829ba7e +0x1ade:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829ba83 +0x1ae3:  mov    $0x0,%ebx
0829ba88 +0x1ae8:  jmp    0829d41d <+0x347d>
0829ba8d +0x1aed:  movl   $0x1,0x14(%esp)
0829ba95 +0x1af5:  movl   $0x0,0x10(%esp)
0829ba9d +0x1afd:  movl   $0x9,0xc(%esp)
0829baa5 +0x1b05:  movl   $0x1b12,0x8(%esp)
0829baad +0x1b0d:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bab5 +0x1b15:  lea    -0x2d4(%ebp),%eax
0829babb +0x1b1b:  mov    %eax,(%esp)
0829babe +0x1b1e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bac3 +0x1b23:  movl   $"Success",0x4(%esp)
0829bacb +0x1b2b:  lea    -0x2d4(%ebp),%eax
0829bad1 +0x1b31:  mov    %eax,(%esp)
0829bad4 +0x1b34:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bad9 +0x1b39:  movl   $0x0,0x14(%esp)
0829bae1 +0x1b41:  movl   $0x1,0x10(%esp)
0829bae9 +0x1b49:  movl   $0x9,0xc(%esp)
0829baf1 +0x1b51:  movl   $0x1b14,0x8(%esp)
0829baf9 +0x1b59:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bb01 +0x1b61:  lea    -0x2c4(%ebp),%eax
0829bb07 +0x1b67:  mov    %eax,(%esp)
0829bb0a +0x1b6a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bb0f +0x1b6f:  movl   $"\t- DBConnector Get Connection Info ",0x4(%esp)
0829bb17 +0x1b77:  lea    -0x2c4(%ebp),%eax
0829bb1d +0x1b7d:  mov    %eax,(%esp)
0829bb20 +0x1b80:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bb25 +0x1b85:  mov    &_ZN10GlobalData14s_db_connectorE,%eax
0829bb2a +0x1b8a:  mov    -0x38(%ebp),%edx
0829bb2d +0x1b8d:  mov    %edx,0x8(%esp)
0829bb31 +0x1b91:  lea    -0x358(%ebp),%edx
0829bb37 +0x1b97:  mov    %edx,0x4(%esp)
0829bb3b +0x1b9b:  mov    %eax,(%esp)
0829bb3e +0x1b9e:  call   080ec9ca <_ZN12CDBConnector11GetConnInfoERSt3mapI18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUPSt4lessIS1_ESaISt4pairIKS1_S2_EEERS0_IS1_12STDBConnInfoS4_SaIS5_IS6_SB_EEE>  ; CDBConnector::GetConnInfo(std::map<ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, ENUM_SERVER_GROUP> > >&, std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >&)
0829bb43 +0x1ba3:  xor    $0x1,%eax
0829bb46 +0x1ba6:  test   %al,%al
0829bb48 +0x1ba8:  je     0829bba0 <+0x1c00>
0829bb4a +0x1baa:  movl   $0x1,0x14(%esp)
0829bb52 +0x1bb2:  movl   $0x1,0x10(%esp)
0829bb5a +0x1bba:  movl   $0x9,0xc(%esp)
0829bb62 +0x1bc2:  movl   $0x1b17,0x8(%esp)
0829bb6a +0x1bca:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bb72 +0x1bd2:  lea    -0x2b4(%ebp),%eax
0829bb78 +0x1bd8:  mov    %eax,(%esp)
0829bb7b +0x1bdb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bb80 +0x1be0:  movl   $"\t- DBConnector Get Connection Info Fail",0x4(%esp)
0829bb88 +0x1be8:  lea    -0x2b4(%ebp),%eax
0829bb8e +0x1bee:  mov    %eax,(%esp)
0829bb91 +0x1bf1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bb96 +0x1bf6:  mov    $0x0,%ebx
0829bb9b +0x1bfb:  jmp    0829d41d <+0x347d>
0829bba0 +0x1c00:  movl   $0x1,0x14(%esp)
0829bba8 +0x1c08:  movl   $0x0,0x10(%esp)
0829bbb0 +0x1c10:  movl   $0x9,0xc(%esp)
0829bbb8 +0x1c18:  movl   $0x1b1a,0x8(%esp)
0829bbc0 +0x1c20:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bbc8 +0x1c28:  lea    -0x2a4(%ebp),%eax
0829bbce +0x1c2e:  mov    %eax,(%esp)
0829bbd1 +0x1c31:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bbd6 +0x1c36:  movl   $"Success",0x4(%esp)
0829bbde +0x1c3e:  lea    -0x2a4(%ebp),%eax
0829bbe4 +0x1c44:  mov    %eax,(%esp)
0829bbe7 +0x1c47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bbec +0x1c4c:  movl   $0x1,0x14(%esp)
0829bbf4 +0x1c54:  movl   $0x1,0x10(%esp)
0829bbfc +0x1c5c:  movl   $0x9,0xc(%esp)
0829bc04 +0x1c64:  movl   $0x1b1c,0x8(%esp)
0829bc0c +0x1c6c:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bc14 +0x1c74:  lea    -0x294(%ebp),%eax
0829bc1a +0x1c7a:  mov    %eax,(%esp)
0829bc1d +0x1c7d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bc22 +0x1c82:  movl   $"\t- Open DB ... ",0x4(%esp)
0829bc2a +0x1c8a:  lea    -0x294(%ebp),%eax
0829bc30 +0x1c90:  mov    %eax,(%esp)
0829bc33 +0x1c93:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bc38 +0x1c98:  mov    -0x38(%ebp),%eax
0829bc3b +0x1c9b:  mov    %eax,0x4(%esp)
0829bc3f +0x1c9f:  lea    -0x284(%ebp),%eax
0829bc45 +0x1ca5:  mov    %eax,(%esp)
0829bc48 +0x1ca8:  call   082b3422 <_GLOBAL__I__ZN4CLog5this_E+0xf849>  ; global constructors keyed to CLog::this_+0xf849
0829bc4d +0x1cad:  mov    &_ZN10GlobalData14s_db_connectorE,%eax
0829bc52 +0x1cb2:  lea    -0x284(%ebp),%edx
0829bc58 +0x1cb8:  mov    %edx,0x4(%esp)
0829bc5c +0x1cbc:  mov    %eax,(%esp)
0829bc5f +0x1cbf:  call   080ec760 <_ZN12CDBConnector7ConnectESt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS1_ESaISt4pairIKS1_S2_EEE>  ; CDBConnector::Connect(std::map<ENUM_DB_HANDLE_IDX, STDBConnInfo, std::less<ENUM_DB_HANDLE_IDX>, std::allocator<std::pair<ENUM_DB_HANDLE_IDX const, STDBConnInfo> > >)
0829bc64 +0x1cc4:  mov    %eax,%ebx
0829bc66 +0x1cc6:  xor    $0x1,%ebx
0829bc69 +0x1cc9:  lea    -0x284(%ebp),%eax
0829bc6f +0x1ccf:  mov    %eax,(%esp)
0829bc72 +0x1cd2:  call   080cbf0e <_GLOBAL__I__ZN10BingoEventC2Ev+0xd5b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xd5b
0829bc77 +0x1cd7:  jmp    0829bc94 <+0x1cf4>
0829bc79 +0x1cd9:  mov    %edx,%ebx
0829bc7b +0x1cdb:  mov    %eax,%esi
0829bc7d +0x1cdd:  lea    -0x284(%ebp),%eax
0829bc83 +0x1ce3:  mov    %eax,(%esp)
0829bc86 +0x1ce6:  call   080cbf0e <_GLOBAL__I__ZN10BingoEventC2Ev+0xd5b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xd5b
0829bc8b +0x1ceb:  mov    %esi,%eax
0829bc8d +0x1ced:  mov    %ebx,%edx
0829bc8f +0x1cef:  jmp    0829d3ff <+0x345f>
0829bc94 +0x1cf4:  test   %bl,%bl
0829bc96 +0x1cf6:  je     0829bcee <+0x1d4e>
0829bc98 +0x1cf8:  movl   $0x1,0x14(%esp)
0829bca0 +0x1d00:  movl   $0x1,0x10(%esp)
0829bca8 +0x1d08:  movl   $0x9,0xc(%esp)
0829bcb0 +0x1d10:  movl   $0x1b1f,0x8(%esp)
0829bcb8 +0x1d18:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bcc0 +0x1d20:  lea    -0x26c(%ebp),%eax
0829bcc6 +0x1d26:  mov    %eax,(%esp)
0829bcc9 +0x1d29:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bcce +0x1d2e:  movl   $"\t- DBConnector Connect DB Fail",0x4(%esp)
0829bcd6 +0x1d36:  lea    -0x26c(%ebp),%eax
0829bcdc +0x1d3c:  mov    %eax,(%esp)
0829bcdf +0x1d3f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bce4 +0x1d44:  mov    $0x0,%ebx
0829bce9 +0x1d49:  jmp    0829d41d <+0x347d>
0829bcee +0x1d4e:  movl   $0x1,0x14(%esp)
0829bcf6 +0x1d56:  movl   $0x1,0x10(%esp)
0829bcfe +0x1d5e:  movl   $0x9,0xc(%esp)
0829bd06 +0x1d66:  movl   $0x1b22,0x8(%esp)
0829bd0e +0x1d6e:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bd16 +0x1d76:  lea    -0x25c(%ebp),%eax
0829bd1c +0x1d7c:  mov    %eax,(%esp)
0829bd1f +0x1d7f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bd24 +0x1d84:  movl   $"\t- All DB Open Success",0x4(%esp)
0829bd2c +0x1d8c:  lea    -0x25c(%ebp),%eax
0829bd32 +0x1d92:  mov    %eax,(%esp)
0829bd35 +0x1d95:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bd3a +0x1d9a:  movl   $0xd0864,(%esp)
0829bd41 +0x1da1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829bd46 +0x1da6:  mov    %eax,%ebx
0829bd48 +0x1da8:  mov    %ebx,%eax
0829bd4a +0x1daa:  mov    %eax,(%esp)
0829bd4d +0x1dad:  call   082a7260 <_GLOBAL__I__ZN4CLog5this_E+0x3687>  ; global constructors keyed to CLog::this_+0x3687
0829bd52 +0x1db2:  jmp    0829bd69 <+0x1dc9>
0829bd54 +0x1db4:  mov    %edx,%esi
0829bd56 +0x1db6:  mov    %eax,%edi
0829bd58 +0x1db8:  mov    %ebx,(%esp)
0829bd5b +0x1dbb:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829bd60 +0x1dc0:  mov    %edi,%eax
0829bd62 +0x1dc2:  mov    %esi,%edx
0829bd64 +0x1dc4:  jmp    0829d3ff <+0x345f>
0829bd69 +0x1dc9:  mov    %ebx,%eax
0829bd6b +0x1dcb:  mov    %eax,&_ZN10GlobalData12s_psimpleSSOE
0829bd70 +0x1dd0:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829bd75 +0x1dd5:  movl   $0x0,0x8(%esp)
0829bd7d +0x1ddd:  movl   $0x6,0x4(%esp)
0829bd85 +0x1de5:  mov    %eax,(%esp)
0829bd88 +0x1de8:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0829bd8d +0x1ded:  mov    &_ZN10GlobalData12s_psimpleSSOE,%edx
0829bd93 +0x1df3:  mov    %eax,0x4(%esp)
0829bd97 +0x1df7:  mov    %edx,(%esp)
0829bd9a +0x1dfa:  call   086027fc <_ZN8WongWork10CSimpleSSO4initEP5MySQL>  ; WongWork::CSimpleSSO::init(MySQL*)
0829bd9f +0x1dff:  movl   $0x488,(%esp)
0829bda6 +0x1e06:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829bdab +0x1e0b:  mov    %eax,%ebx
0829bdad +0x1e0d:  mov    %ebx,%eax
0829bdaf +0x1e0f:  mov    %eax,(%esp)
0829bdb2 +0x1e12:  call   082a6654 <_GLOBAL__I__ZN4CLog5this_E+0x2a7b>  ; global constructors keyed to CLog::this_+0x2a7b
0829bdb7 +0x1e17:  jmp    0829bdce <+0x1e2e>
0829bdb9 +0x1e19:  mov    %edx,%esi
0829bdbb +0x1e1b:  mov    %eax,%edi
0829bdbd +0x1e1d:  mov    %ebx,(%esp)
0829bdc0 +0x1e20:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829bdc5 +0x1e25:  mov    %edi,%eax
0829bdc7 +0x1e27:  mov    %esi,%edx
0829bdc9 +0x1e29:  jmp    0829d3ff <+0x345f>
0829bdce +0x1e2e:  mov    %ebx,%eax
0829bdd0 +0x1e30:  mov    %eax,&_ZN10GlobalData20s_securityCardCenterE
0829bdd5 +0x1e35:  mov    &_ZN10GlobalData20s_securityCardCenterE,%eax
0829bdda +0x1e3a:  mov    %eax,(%esp)
0829bddd +0x1e3d:  call   085fe05e <_ZN8WongWork19CSecurityCardCenter4initEv>  ; WongWork::CSecurityCardCenter::init()
0829bde2 +0x1e42:  movl   $&_ZSt7nothrow,0x4(%esp)
0829bdea +0x1e4a:  movl   $0x54,(%esp)
0829bdf1 +0x1e51:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829bdf6 +0x1e56:  mov    %eax,%ebx
0829bdf8 +0x1e58:  mov    %ebx,%eax
0829bdfa +0x1e5a:  test   %eax,%eax
0829bdfc +0x1e5c:  je     0829be0c <+0x1e6c>
0829bdfe +0x1e5e:  mov    %ebx,%eax
0829be00 +0x1e60:  mov    %eax,(%esp)
0829be03 +0x1e63:  call   082a7190 <_GLOBAL__I__ZN4CLog5this_E+0x35b7>  ; global constructors keyed to CLog::this_+0x35b7
0829be08 +0x1e68:  mov    %ebx,%eax
0829be0a +0x1e6a:  jmp    0829be0e <+0x1e6e>
0829be0c +0x1e6c:  mov    %ebx,%eax
0829be0e +0x1e6e:  mov    %eax,-0x34(%ebp)
0829be11 +0x1e71:  movl   $0x1388,0x8(%esp)
0829be19 +0x1e79:  movl   $0x1,0x4(%esp)
0829be21 +0x1e81:  mov    -0x34(%ebp),%eax
0829be24 +0x1e84:  mov    %eax,(%esp)
0829be27 +0x1e87:  call   08100b3e <_ZN8WongWork3IPG10CIPGHelper10InitializeEjj>  ; WongWork::IPG::CIPGHelper::Initialize(unsigned int, unsigned int)
0829be2c +0x1e8c:  shr    $0x1f,%eax
0829be2f +0x1e8f:  test   %al,%al
0829be31 +0x1e91:  je     0829be60 <+0x1ec0>
0829be33 +0x1e93:  movl   $"Fail to init IPG Module",(%esp)
0829be3a +0x1e9a:  call   0807e570 <_init+0xe68>
0829be3f +0x1e9f:  mov    -0x34(%ebp),%ebx
0829be42 +0x1ea2:  test   %ebx,%ebx
0829be44 +0x1ea4:  je     0829be56 <+0x1eb6>
0829be46 +0x1ea6:  mov    %ebx,(%esp)
0829be49 +0x1ea9:  call   082a71b6 <_GLOBAL__I__ZN4CLog5this_E+0x35dd>  ; global constructors keyed to CLog::this_+0x35dd
0829be4e +0x1eae:  mov    %ebx,(%esp)
0829be51 +0x1eb1:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829be56 +0x1eb6:  mov    $0x0,%ebx
0829be5b +0x1ebb:  jmp    0829d41d <+0x347d>
0829be60 +0x1ec0:  mov    -0x34(%ebp),%eax
0829be63 +0x1ec3:  mov    %eax,&_ZN10GlobalData12s_pIPGHelperE
0829be68 +0x1ec8:  call   082a73cb <_GLOBAL__I__ZN4CLog5this_E+0x37f2>  ; global constructors keyed to CLog::this_+0x37f2
0829be6d +0x1ecd:  movl   $0x8,(%esp)
0829be74 +0x1ed4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829be79 +0x1ed9:  mov    %eax,%ebx
0829be7b +0x1edb:  mov    %ebx,%eax
0829be7d +0x1edd:  mov    %eax,(%esp)
0829be80 +0x1ee0:  call   082a73a4 <_GLOBAL__I__ZN4CLog5this_E+0x37cb>  ; global constructors keyed to CLog::this_+0x37cb
0829be85 +0x1ee5:  jmp    0829be9c <+0x1efc>
0829be87 +0x1ee7:  mov    %edx,%esi
0829be89 +0x1ee9:  mov    %eax,%edi
0829be8b +0x1eeb:  mov    %ebx,(%esp)
0829be8e +0x1eee:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829be93 +0x1ef3:  mov    %edi,%eax
0829be95 +0x1ef5:  mov    %esi,%edx
0829be97 +0x1ef7:  jmp    0829d3ff <+0x345f>
0829be9c +0x1efc:  mov    %ebx,%eax
0829be9e +0x1efe:  mov    %eax,&_ZN10GlobalData14s_pGMAccounts_E
0829bea3 +0x1f03:  movl   $0x0,0x14(%esp)
0829beab +0x1f0b:  movl   $0x1,0x10(%esp)
0829beb3 +0x1f13:  movl   $0x9,0xc(%esp)
0829bebb +0x1f1b:  movl   $0x1d4d,0x8(%esp)
0829bec3 +0x1f23:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829becb +0x1f2b:  lea    -0x24c(%ebp),%eax
0829bed1 +0x1f31:  mov    %eax,(%esp)
0829bed4 +0x1f34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bed9 +0x1f39:  movl   $"\t- Init Query Table ",0x4(%esp)
0829bee1 +0x1f41:  lea    -0x24c(%ebp),%eax
0829bee7 +0x1f47:  mov    %eax,(%esp)
0829beea +0x1f4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829beef +0x1f4f:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829bef4 +0x1f54:  movl   $0x0,0x8(%esp)
0829befc +0x1f5c:  movl   $0x2,0x4(%esp)
0829bf04 +0x1f64:  mov    %eax,(%esp)
0829bf07 +0x1f67:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0829bf0c +0x1f6c:  mov    %eax,(%esp)
0829bf0f +0x1f6f:  call   082a4202 <_GLOBAL__I__ZN4CLog5this_E+0x629>  ; global constructors keyed to CLog::this_+0x629
0829bf14 +0x1f74:  mov    %eax,(%esp)
0829bf17 +0x1f77:  call   085ed18a <_ZN13CQueryCounter14LoadQueryTableEv>  ; CQueryCounter::LoadQueryTable()
0829bf1c +0x1f7c:  xor    $0x1,%eax
0829bf1f +0x1f7f:  test   %al,%al
0829bf21 +0x1f81:  je     0829bf79 <+0x1fd9>
0829bf23 +0x1f83:  movl   $0x1,0x14(%esp)
0829bf2b +0x1f8b:  movl   $0x1,0x10(%esp)
0829bf33 +0x1f93:  movl   $0x9,0xc(%esp)
0829bf3b +0x1f9b:  movl   $0x1d50,0x8(%esp)
0829bf43 +0x1fa3:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bf4b +0x1fab:  lea    -0x23c(%ebp),%eax
0829bf51 +0x1fb1:  mov    %eax,(%esp)
0829bf54 +0x1fb4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bf59 +0x1fb9:  movl   $"\t- Init Query Table Fail",0x4(%esp)
0829bf61 +0x1fc1:  lea    -0x23c(%ebp),%eax
0829bf67 +0x1fc7:  mov    %eax,(%esp)
0829bf6a +0x1fca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bf6f +0x1fcf:  mov    $0x0,%ebx
0829bf74 +0x1fd4:  jmp    0829d41d <+0x347d>
0829bf79 +0x1fd9:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829bf7e +0x1fde:  movl   $0x0,0x8(%esp)
0829bf86 +0x1fe6:  movl   $0x4,0x4(%esp)
0829bf8e +0x1fee:  mov    %eax,(%esp)
0829bf91 +0x1ff1:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0829bf96 +0x1ff6:  mov    %eax,(%esp)
0829bf99 +0x1ff9:  call   082a4202 <_GLOBAL__I__ZN4CLog5this_E+0x629>  ; global constructors keyed to CLog::this_+0x629
0829bf9e +0x1ffe:  mov    %eax,(%esp)
0829bfa1 +0x2001:  call   085ed18a <_ZN13CQueryCounter14LoadQueryTableEv>  ; CQueryCounter::LoadQueryTable()
0829bfa6 +0x2006:  xor    $0x1,%eax
0829bfa9 +0x2009:  test   %al,%al
0829bfab +0x200b:  je     0829c003 <+0x2063>
0829bfad +0x200d:  movl   $0x1,0x14(%esp)
0829bfb5 +0x2015:  movl   $0x1,0x10(%esp)
0829bfbd +0x201d:  movl   $0x9,0xc(%esp)
0829bfc5 +0x2025:  movl   $0x1d55,0x8(%esp)
0829bfcd +0x202d:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829bfd5 +0x2035:  lea    -0x22c(%ebp),%eax
0829bfdb +0x203b:  mov    %eax,(%esp)
0829bfde +0x203e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829bfe3 +0x2043:  movl   $"\t- Init Query Table Fail",0x4(%esp)
0829bfeb +0x204b:  lea    -0x22c(%ebp),%eax
0829bff1 +0x2051:  mov    %eax,(%esp)
0829bff4 +0x2054:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829bff9 +0x2059:  mov    $0x0,%ebx
0829bffe +0x205e:  jmp    0829d41d <+0x347d>
0829c003 +0x2063:  movl   $0x1,0x14(%esp)
0829c00b +0x206b:  movl   $0x0,0x10(%esp)
0829c013 +0x2073:  movl   $0x9,0xc(%esp)
0829c01b +0x207b:  movl   $0x1d58,0x8(%esp)
0829c023 +0x2083:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c02b +0x208b:  lea    -0x21c(%ebp),%eax
0829c031 +0x2091:  mov    %eax,(%esp)
0829c034 +0x2094:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c039 +0x2099:  movl   $"Success",0x4(%esp)
0829c041 +0x20a1:  lea    -0x21c(%ebp),%eax
0829c047 +0x20a7:  mov    %eax,(%esp)
0829c04a +0x20aa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c04f +0x20af:  movl   $0x1,-0x30(%ebp)
0829c056 +0x20b6:  movb   $0x0,-0x29(%ebp)
0829c05a +0x20ba:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829c05f +0x20bf:  mov    %eax,(%esp)
0829c062 +0x20c2:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0829c067 +0x20c7:  cmp    -0x30(%ebp),%eax
0829c06a +0x20ca:  sete   %al
0829c06d +0x20cd:  test   %al,%al
0829c06f +0x20cf:  je     0829c075 <+0x20d5>
0829c071 +0x20d1:  movb   $0x1,-0x29(%ebp)
0829c075 +0x20d5:  movzbl -0x29(%ebp),%ebx
0829c079 +0x20d9:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0829c07e +0x20de:  mov    %ebx,0x4(%esp)
0829c082 +0x20e2:  mov    %eax,(%esp)
0829c085 +0x20e5:  call   082a71f0 <_GLOBAL__I__ZN4CLog5this_E+0x3617>  ; global constructors keyed to CLog::this_+0x3617
0829c08a +0x20ea:  call   0861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>  ; sync_script::GetInstanceSyncScript()
0829c08f +0x20ef:  mov    %eax,(%esp)
0829c092 +0x20f2:  call   082a7208 <_GLOBAL__I__ZN4CLog5this_E+0x362f>  ; global constructors keyed to CLog::this_+0x362f
0829c097 +0x20f7:  test   %al,%al
0829c099 +0x20f9:  je     0829c24b <+0x22ab>
0829c09f +0x20ff:  movl   $0x5,-0x20c(%ebp)
0829c0a9 +0x2109:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829c0ae +0x210e:  lea    0x68(%eax),%edx
0829c0b1 +0x2111:  lea    -0x20c(%ebp),%eax
0829c0b7 +0x2117:  mov    %eax,0x4(%esp)
0829c0bb +0x211b:  mov    %edx,(%esp)
0829c0be +0x211e:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829c0c3 +0x2123:  add    $0x2d,%eax
0829c0c6 +0x2126:  mov    %eax,-0x774(%ebp)
0829c0cc +0x212c:  movl   $0x5,-0x208(%ebp)
0829c0d6 +0x2136:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829c0db +0x213b:  lea    0x68(%eax),%edx
0829c0de +0x213e:  lea    -0x208(%ebp),%eax
0829c0e4 +0x2144:  mov    %eax,0x4(%esp)
0829c0e8 +0x2148:  mov    %edx,(%esp)
0829c0eb +0x214b:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829c0f0 +0x2150:  add    $0x18,%eax
0829c0f3 +0x2153:  mov    %eax,%edi
0829c0f5 +0x2155:  movl   $0x5,-0x204(%ebp)
0829c0ff +0x215f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829c104 +0x2164:  lea    0x68(%eax),%edx
0829c107 +0x2167:  lea    -0x204(%ebp),%eax
0829c10d +0x216d:  mov    %eax,0x4(%esp)
0829c111 +0x2171:  mov    %edx,(%esp)
0829c114 +0x2174:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829c119 +0x2179:  add    $0x42,%eax
0829c11c +0x217c:  mov    %eax,%esi
0829c11e +0x217e:  movl   $0x5,-0x200(%ebp)
0829c128 +0x2188:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829c12d +0x218d:  lea    0x68(%eax),%edx
0829c130 +0x2190:  lea    -0x200(%ebp),%eax
0829c136 +0x2196:  mov    %eax,0x4(%esp)
0829c13a +0x219a:  mov    %edx,(%esp)
0829c13d +0x219d:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829c142 +0x21a2:  mov    0x14(%eax),%ebx
0829c145 +0x21a5:  movl   $0x5,-0x1fc(%ebp)
0829c14f +0x21af:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829c154 +0x21b4:  lea    0x68(%eax),%edx
0829c157 +0x21b7:  lea    -0x1fc(%ebp),%eax
0829c15d +0x21bd:  mov    %eax,0x4(%esp)
0829c161 +0x21c1:  mov    %edx,(%esp)
0829c164 +0x21c4:  call   080ecf82 <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0x267>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0x267
0829c169 +0x21c9:  mov    %eax,%edx
0829c16b +0x21cb:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0829c170 +0x21d0:  movl   $0x0,0x1c(%esp)
0829c178 +0x21d8:  mov    -0x774(%ebp),%ecx
0829c17e +0x21de:  mov    %ecx,0x18(%esp)
0829c182 +0x21e2:  mov    %edi,0x14(%esp)
0829c186 +0x21e6:  mov    %esi,0x10(%esp)
0829c18a +0x21ea:  mov    %ebx,0xc(%esp)
0829c18e +0x21ee:  mov    %edx,0x8(%esp)
0829c192 +0x21f2:  movl   $0x5,0x4(%esp)
0829c19a +0x21fa:  mov    %eax,(%esp)
0829c19d +0x21fd:  call   083f4d2e <_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP>  ; DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, unsigned int, char*, char*, char*, ENUM_SERVER_GROUP)
0829c1a2 +0x2202:  xor    $0x1,%eax
0829c1a5 +0x2205:  test   %al,%al
0829c1a7 +0x2207:  je     0829c1ff <+0x225f>
0829c1a9 +0x2209:  movl   $0x1,0x14(%esp)
0829c1b1 +0x2211:  movl   $0x1,0x10(%esp)
0829c1b9 +0x2219:  movl   $0x9,0xc(%esp)
0829c1c1 +0x2221:  movl   $0x1d8d,0x8(%esp)
0829c1c9 +0x2229:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c1d1 +0x2231:  lea    -0x1f8(%ebp),%eax
0829c1d7 +0x2237:  mov    %eax,(%esp)
0829c1da +0x223a:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c1df +0x223f:  movl   $"\t- Failed to open web DB",0x4(%esp)
0829c1e7 +0x2247:  lea    -0x1f8(%ebp),%eax
0829c1ed +0x224d:  mov    %eax,(%esp)
0829c1f0 +0x2250:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c1f5 +0x2255:  mov    $0x0,%ebx
0829c1fa +0x225a:  jmp    0829d41d <+0x347d>
0829c1ff +0x225f:  movl   $0x1,0x14(%esp)
0829c207 +0x2267:  movl   $0x1,0x10(%esp)
0829c20f +0x226f:  movl   $0x9,0xc(%esp)
0829c217 +0x2277:  movl   $0x1d90,0x8(%esp)
0829c21f +0x227f:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c227 +0x2287:  lea    -0x1e8(%ebp),%eax
0829c22d +0x228d:  mov    %eax,(%esp)
0829c230 +0x2290:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c235 +0x2295:  movl   $"\t- Success WEB DB OPEN",0x4(%esp)
0829c23d +0x229d:  lea    -0x1e8(%ebp),%eax
0829c243 +0x22a3:  mov    %eax,(%esp)
0829c246 +0x22a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c24b +0x22ab:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
0829c250 +0x22b0:  mov    %eax,(%esp)
0829c253 +0x22b3:  call   0862dec6 <_ZN16CSyncSlangFilter16AddSlangListNameEv>  ; CSyncSlangFilter::AddSlangListName()
0829c258 +0x22b8:  xor    $0x1,%eax
0829c25b +0x22bb:  test   %al,%al
0829c25d +0x22bd:  jne    0829c273 <+0x22d3>
0829c25f +0x22bf:  call   08235001 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa6ab>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa6ab
0829c264 +0x22c4:  mov    %eax,(%esp)
0829c267 +0x22c7:  call   0862dccc <_ZN16CSyncSlangFilter12AddSlangListEv>  ; CSyncSlangFilter::AddSlangList()
0829c26c +0x22cc:  xor    $0x1,%eax
0829c26f +0x22cf:  test   %al,%al
0829c271 +0x22d1:  je     0829c27a <+0x22da>
0829c273 +0x22d3:  mov    $0x1,%eax
0829c278 +0x22d8:  jmp    0829c27f <+0x22df>
0829c27a +0x22da:  mov    $0x0,%eax
0829c27f +0x22df:  test   %al,%al
0829c281 +0x22e1:  je     0829c2d9 <+0x2339>
0829c283 +0x22e3:  movl   $0x1,0x14(%esp)
0829c28b +0x22eb:  movl   $0x1,0x10(%esp)
0829c293 +0x22f3:  movl   $0x9,0xc(%esp)
0829c29b +0x22fb:  movl   $0x1d9f,0x8(%esp)
0829c2a3 +0x2303:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c2ab +0x230b:  lea    -0x1d8(%ebp),%eax
0829c2b1 +0x2311:  mov    %eax,(%esp)
0829c2b4 +0x2314:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c2b9 +0x2319:  movl   $"Failed to read slang list",0x4(%esp)
0829c2c1 +0x2321:  lea    -0x1d8(%ebp),%eax
0829c2c7 +0x2327:  mov    %eax,(%esp)
0829c2ca +0x232a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c2cf +0x232f:  mov    $0x0,%ebx
0829c2d4 +0x2334:  jmp    0829d41d <+0x347d>
0829c2d9 +0x2339:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c2e1 +0x2341:  movl   $0x29c,(%esp)
0829c2e8 +0x2348:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c2ed +0x234d:  mov    %eax,%ebx
0829c2ef +0x234f:  mov    %ebx,%eax
0829c2f1 +0x2351:  test   %eax,%eax
0829c2f3 +0x2353:  je     0829c322 <+0x2382>
0829c2f5 +0x2355:  mov    %ebx,%eax
0829c2f7 +0x2357:  mov    %eax,(%esp)
0829c2fa +0x235a:  call   08114ce4 <_ZN13CEventManagerC1Ev>  ; CEventManager::CEventManager()
0829c2ff +0x235f:  jmp    0829c31e <+0x237e>
0829c301 +0x2361:  mov    %edx,%esi
0829c303 +0x2363:  mov    %eax,%edi
0829c305 +0x2365:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c30d +0x236d:  mov    %ebx,(%esp)
0829c310 +0x2370:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c315 +0x2375:  mov    %edi,%eax
0829c317 +0x2377:  mov    %esi,%edx
0829c319 +0x2379:  jmp    0829d3ff <+0x345f>
0829c31e +0x237e:  mov    %ebx,%eax
0829c320 +0x2380:  jmp    0829c324 <+0x2384>
0829c322 +0x2382:  mov    %ebx,%eax
0829c324 +0x2384:  mov    %eax,&_ZN10GlobalData15s_event_managerE
0829c329 +0x2389:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0829c32e +0x238e:  test   %eax,%eax
0829c330 +0x2390:  jne    0829c388 <+0x23e8>
0829c332 +0x2392:  movl   $0x1,0x14(%esp)
0829c33a +0x239a:  movl   $0x1,0x10(%esp)
0829c342 +0x23a2:  movl   $0x9,0xc(%esp)
0829c34a +0x23aa:  movl   $0x1da8,0x8(%esp)
0829c352 +0x23b2:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c35a +0x23ba:  lea    -0x1c8(%ebp),%eax
0829c360 +0x23c0:  mov    %eax,(%esp)
0829c363 +0x23c3:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c368 +0x23c8:  movl   $"Can't allocate CEventManager memory",0x4(%esp)
0829c370 +0x23d0:  lea    -0x1c8(%ebp),%eax
0829c376 +0x23d6:  mov    %eax,(%esp)
0829c379 +0x23d9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c37e +0x23de:  mov    $0x0,%ebx
0829c383 +0x23e3:  jmp    0829d41d <+0x347d>
0829c388 +0x23e8:  movl   $0x1,0x14(%esp)
0829c390 +0x23f0:  movl   $0x1,0x10(%esp)
0829c398 +0x23f8:  movl   $0x9,0xc(%esp)
0829c3a0 +0x2400:  movl   $0x1dc6,0x8(%esp)
0829c3a8 +0x2408:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c3b0 +0x2410:  lea    -0x1b8(%ebp),%eax
0829c3b6 +0x2416:  mov    %eax,(%esp)
0829c3b9 +0x2419:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c3be +0x241e:  movl   $"\t- Load GM List From DB",0x4(%esp)
0829c3c6 +0x2426:  lea    -0x1b8(%ebp),%eax
0829c3cc +0x242c:  mov    %eax,(%esp)
0829c3cf +0x242f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c3d4 +0x2434:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c3dc +0x243c:  movl   $0x4,(%esp)
0829c3e3 +0x2443:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c3e8 +0x2448:  mov    %eax,%ebx
0829c3ea +0x244a:  mov    %ebx,%eax
0829c3ec +0x244c:  test   %eax,%eax
0829c3ee +0x244e:  je     0829c41d <+0x247d>
0829c3f0 +0x2450:  mov    %ebx,%eax
0829c3f2 +0x2452:  mov    %eax,(%esp)
0829c3f5 +0x2455:  call   08299912 <_ZN7Gm_ListC1Ev>  ; Gm_List::Gm_List()
0829c3fa +0x245a:  jmp    0829c419 <+0x2479>
0829c3fc +0x245c:  mov    %edx,%esi
0829c3fe +0x245e:  mov    %eax,%edi
0829c400 +0x2460:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c408 +0x2468:  mov    %ebx,(%esp)
0829c40b +0x246b:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c410 +0x2470:  mov    %edi,%eax
0829c412 +0x2472:  mov    %esi,%edx
0829c414 +0x2474:  jmp    0829d3ff <+0x345f>
0829c419 +0x2479:  mov    %ebx,%eax
0829c41b +0x247b:  jmp    0829c41f <+0x247f>
0829c41d +0x247d:  mov    %ebx,%eax
0829c41f +0x247f:  mov    %eax,&_ZN10GlobalData6gmListE
0829c424 +0x2484:  mov    &_ZN10GlobalData6gmListE,%eax
0829c429 +0x2489:  test   %eax,%eax
0829c42b +0x248b:  jne    0829c483 <+0x24e3>
0829c42d +0x248d:  movl   $0x1,0x14(%esp)
0829c435 +0x2495:  movl   $0x1,0x10(%esp)
0829c43d +0x249d:  movl   $0x9,0xc(%esp)
0829c445 +0x24a5:  movl   $0x1dcd,0x8(%esp)
0829c44d +0x24ad:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c455 +0x24b5:  lea    -0x1a8(%ebp),%eax
0829c45b +0x24bb:  mov    %eax,(%esp)
0829c45e +0x24be:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c463 +0x24c3:  movl   $"\t- Can't allocate memory for a Gm_List",0x4(%esp)
0829c46b +0x24cb:  lea    -0x1a8(%ebp),%eax
0829c471 +0x24d1:  mov    %eax,(%esp)
0829c474 +0x24d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c479 +0x24d9:  mov    $0x0,%ebx
0829c47e +0x24de:  jmp    0829d41d <+0x347d>
0829c483 +0x24e3:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c48b +0x24eb:  movl   $0x3c,(%esp)
0829c492 +0x24f2:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c497 +0x24f7:  mov    %eax,%ebx
0829c499 +0x24f9:  mov    %ebx,%eax
0829c49b +0x24fb:  test   %eax,%eax
0829c49d +0x24fd:  je     0829c4cc <+0x252c>
0829c49f +0x24ff:  mov    %ebx,%eax
0829c4a1 +0x2501:  mov    %eax,(%esp)
0829c4a4 +0x2504:  call   082990d0 <_ZN11CGM_ManagerC1Ev>  ; CGM_Manager::CGM_Manager()
0829c4a9 +0x2509:  jmp    0829c4c8 <+0x2528>
0829c4ab +0x250b:  mov    %edx,%esi
0829c4ad +0x250d:  mov    %eax,%edi
0829c4af +0x250f:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c4b7 +0x2517:  mov    %ebx,(%esp)
0829c4ba +0x251a:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c4bf +0x251f:  mov    %edi,%eax
0829c4c1 +0x2521:  mov    %esi,%edx
0829c4c3 +0x2523:  jmp    0829d3ff <+0x345f>
0829c4c8 +0x2528:  mov    %ebx,%eax
0829c4ca +0x252a:  jmp    0829c4ce <+0x252e>
0829c4cc +0x252c:  mov    %ebx,%eax
0829c4ce +0x252e:  mov    %eax,&_ZN10GlobalData12s_GM_ManagerE
0829c4d3 +0x2533:  mov    &_ZN10GlobalData12s_GM_ManagerE,%eax
0829c4d8 +0x2538:  test   %eax,%eax
0829c4da +0x253a:  jne    0829c532 <+0x2592>
0829c4dc +0x253c:  movl   $0x1,0x14(%esp)
0829c4e4 +0x2544:  movl   $0x1,0x10(%esp)
0829c4ec +0x254c:  movl   $0x9,0xc(%esp)
0829c4f4 +0x2554:  movl   $0x1dd6,0x8(%esp)
0829c4fc +0x255c:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c504 +0x2564:  lea    -0x198(%ebp),%eax
0829c50a +0x256a:  mov    %eax,(%esp)
0829c50d +0x256d:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c512 +0x2572:  movl   $"Can't allocate memory for a CGM_Manager",0x4(%esp)
0829c51a +0x257a:  lea    -0x198(%ebp),%eax
0829c520 +0x2580:  mov    %eax,(%esp)
0829c523 +0x2583:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c528 +0x2588:  mov    $0x0,%ebx
0829c52d +0x258d:  jmp    0829d41d <+0x347d>
0829c532 +0x2592:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
0829c537 +0x2597:  mov    %eax,(%esp)
0829c53a +0x259a:  call   080975d4 <_ZNK6Cipher17GetTotalKeyLengthEv>  ; Cipher::GetTotalKeyLength() const
0829c53f +0x259f:  mov    %eax,-0x28(%ebp)
0829c542 +0x25a2:  movl   $0x0,-0x1c(%ebp)
0829c549 +0x25a9:  jmp    0829c56f <+0x25cf>
0829c54b +0x25ab:  mov    -0x1c(%ebp),%ebx
0829c54e +0x25ae:  call   0807dca0 <_init+0x598>
0829c553 +0x25b3:  mov    %eax,%edx
0829c555 +0x25b5:  sar    $0x1f,%edx
0829c558 +0x25b8:  shr    $0x18,%edx
0829c55b +0x25bb:  add    %edx,%eax
0829c55d +0x25bd:  and    $0xff,%eax
0829c562 +0x25c2:  sub    %edx,%eax
0829c564 +0x25c4:  mov    %al,-0x764(%ebp,%ebx,1)
0829c56b +0x25cb:  addl   $0x1,-0x1c(%ebp)
0829c56f +0x25cf:  mov    -0x1c(%ebp),%eax
0829c572 +0x25d2:  cmp    -0x28(%ebp),%eax
0829c575 +0x25d5:  setl   %al
0829c578 +0x25d8:  test   %al,%al
0829c57a +0x25da:  jne    0829c54b <+0x25ab>
0829c57c +0x25dc:  call   082a713a <_GLOBAL__I__ZN4CLog5this_E+0x3561>  ; global constructors keyed to CLog::this_+0x3561
0829c581 +0x25e1:  mov    -0x28(%ebp),%edx
0829c584 +0x25e4:  mov    %edx,0x8(%esp)
0829c588 +0x25e8:  lea    -0x764(%ebp),%edx
0829c58e +0x25ee:  mov    %edx,0x4(%esp)
0829c592 +0x25f2:  mov    %eax,(%esp)
0829c595 +0x25f5:  call   08097306 <_ZN6Cipher10InitializeEPKhi>  ; Cipher::Initialize(unsigned char const*, int)
0829c59a +0x25fa:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c5a2 +0x2602:  movl   $0x30,(%esp)
0829c5a9 +0x2609:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c5ae +0x260e:  mov    %eax,%ebx
0829c5b0 +0x2610:  mov    %ebx,%eax
0829c5b2 +0x2612:  test   %eax,%eax
0829c5b4 +0x2614:  je     0829c603 <+0x2663>
0829c5b6 +0x2616:  mov    %ebx,-0x770(%ebp)
0829c5bc +0x261c:  mov    -0x770(%ebp),%esi
0829c5c2 +0x2622:  mov    $0x0,%eax
0829c5c7 +0x2627:  mov    $0xc,%edx
0829c5cc +0x262c:  mov    %esi,%edi
0829c5ce +0x262e:  mov    %edx,%ecx
0829c5d0 +0x2630:  rep stos %eax,%es:(%edi)
0829c5d2 +0x2632:  mov    -0x770(%ebp),%eax
0829c5d8 +0x2638:  mov    %eax,(%esp)
0829c5db +0x263b:  call   082aa89e <_GLOBAL__I__ZN4CLog5this_E+0x6cc5>  ; global constructors keyed to CLog::this_+0x6cc5
0829c5e0 +0x2640:  jmp    0829c5ff <+0x265f>
0829c5e2 +0x2642:  mov    %edx,%esi
0829c5e4 +0x2644:  mov    %eax,%edi
0829c5e6 +0x2646:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c5ee +0x264e:  mov    %ebx,(%esp)
0829c5f1 +0x2651:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c5f6 +0x2656:  mov    %edi,%eax
0829c5f8 +0x2658:  mov    %esi,%edx
0829c5fa +0x265a:  jmp    0829d3ff <+0x345f>
0829c5ff +0x265f:  mov    %ebx,%eax
0829c601 +0x2661:  jmp    0829c605 <+0x2665>
0829c603 +0x2663:  mov    %ebx,%eax
0829c605 +0x2665:  mov    %eax,&_ZN10GlobalData14s_statisticMgrE
0829c60a +0x266a:  mov    &_ZN10GlobalData14s_statisticMgrE,%eax
0829c60f +0x266f:  test   %eax,%eax
0829c611 +0x2671:  jne    0829c669 <+0x26c9>
0829c613 +0x2673:  movl   $0x1,0x14(%esp)
0829c61b +0x267b:  movl   $0x1,0x10(%esp)
0829c623 +0x2683:  movl   $0x9,0xc(%esp)
0829c62b +0x268b:  movl   $0x1df7,0x8(%esp)
0829c633 +0x2693:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c63b +0x269b:  lea    -0x188(%ebp),%eax
0829c641 +0x26a1:  mov    %eax,(%esp)
0829c644 +0x26a4:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c649 +0x26a9:  movl   $"Can't allocate memory for a CStatisticMgr",0x4(%esp)
0829c651 +0x26b1:  lea    -0x188(%ebp),%eax
0829c657 +0x26b7:  mov    %eax,(%esp)
0829c65a +0x26ba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c65f +0x26bf:  mov    $0x0,%ebx
0829c664 +0x26c4:  jmp    0829d41d <+0x347d>
0829c669 +0x26c9:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c671 +0x26d1:  movl   $0x32c,(%esp)
0829c678 +0x26d8:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c67d +0x26dd:  mov    %eax,%ebx
0829c67f +0x26df:  mov    %ebx,%eax
0829c681 +0x26e1:  test   %eax,%eax
0829c683 +0x26e3:  je     0829c6b2 <+0x2712>
0829c685 +0x26e5:  mov    %ebx,%eax
0829c687 +0x26e7:  mov    %eax,(%esp)
0829c68a +0x26ea:  call   0831c3e0 <_ZN18break_away_prevent23CBreakAwayPreventSystemC1Ev>  ; break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()
0829c68f +0x26ef:  jmp    0829c6ae <+0x270e>
0829c691 +0x26f1:  mov    %edx,%esi
0829c693 +0x26f3:  mov    %eax,%edi
0829c695 +0x26f5:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c69d +0x26fd:  mov    %ebx,(%esp)
0829c6a0 +0x2700:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c6a5 +0x2705:  mov    %edi,%eax
0829c6a7 +0x2707:  mov    %esi,%edx
0829c6a9 +0x2709:  jmp    0829d3ff <+0x345f>
0829c6ae +0x270e:  mov    %ebx,%eax
0829c6b0 +0x2710:  jmp    0829c6b4 <+0x2714>
0829c6b2 +0x2712:  mov    %ebx,%eax
0829c6b4 +0x2714:  mov    %eax,&_ZN10GlobalData14s_BreakAwaySysE
0829c6b9 +0x2719:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%eax
0829c6be +0x271e:  test   %eax,%eax
0829c6c0 +0x2720:  jne    0829c718 <+0x2778>
0829c6c2 +0x2722:  movl   $0x1,0x14(%esp)
0829c6ca +0x272a:  movl   $0x1,0x10(%esp)
0829c6d2 +0x2732:  movl   $0x9,0xc(%esp)
0829c6da +0x273a:  movl   $0x1dfe,0x8(%esp)
0829c6e2 +0x2742:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c6ea +0x274a:  lea    -0x178(%ebp),%eax
0829c6f0 +0x2750:  mov    %eax,(%esp)
0829c6f3 +0x2753:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c6f8 +0x2758:  movl   $"Can't allocate memory for a s_BreakAwaySys",0x4(%esp)
0829c700 +0x2760:  lea    -0x178(%ebp),%eax
0829c706 +0x2766:  mov    %eax,(%esp)
0829c709 +0x2769:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c70e +0x276e:  mov    $0x0,%ebx
0829c713 +0x2773:  jmp    0829d41d <+0x347d>
0829c718 +0x2778:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c720 +0x2780:  movl   $0x4,(%esp)
0829c727 +0x2787:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c72c +0x278c:  mov    %eax,%ebx
0829c72e +0x278e:  mov    %ebx,%eax
0829c730 +0x2790:  test   %eax,%eax
0829c732 +0x2792:  je     0829c761 <+0x27c1>
0829c734 +0x2794:  mov    %ebx,%eax
0829c736 +0x2796:  mov    %eax,(%esp)
0829c739 +0x2799:  call   0849e102 <_ZN10expert_job13CExpertJobMgrC1Ev>  ; expert_job::CExpertJobMgr::CExpertJobMgr()
0829c73e +0x279e:  jmp    0829c75d <+0x27bd>
0829c740 +0x27a0:  mov    %edx,%esi
0829c742 +0x27a2:  mov    %eax,%edi
0829c744 +0x27a4:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c74c +0x27ac:  mov    %ebx,(%esp)
0829c74f +0x27af:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c754 +0x27b4:  mov    %edi,%eax
0829c756 +0x27b6:  mov    %esi,%edx
0829c758 +0x27b8:  jmp    0829d3ff <+0x345f>
0829c75d +0x27bd:  mov    %ebx,%eax
0829c75f +0x27bf:  jmp    0829c763 <+0x27c3>
0829c761 +0x27c1:  mov    %ebx,%eax
0829c763 +0x27c3:  mov    %eax,&_ZN10GlobalData14s_ExpertJobMgrE
0829c768 +0x27c8:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
0829c76d +0x27cd:  test   %eax,%eax
0829c76f +0x27cf:  jne    0829c7c7 <+0x2827>
0829c771 +0x27d1:  movl   $0x1,0x14(%esp)
0829c779 +0x27d9:  movl   $0x1,0x10(%esp)
0829c781 +0x27e1:  movl   $0x9,0xc(%esp)
0829c789 +0x27e9:  movl   $0x1e05,0x8(%esp)
0829c791 +0x27f1:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c799 +0x27f9:  lea    -0x168(%ebp),%eax
0829c79f +0x27ff:  mov    %eax,(%esp)
0829c7a2 +0x2802:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c7a7 +0x2807:  movl   $"Can't allocate memory for a CExpertJobMgr",0x4(%esp)
0829c7af +0x280f:  lea    -0x168(%ebp),%eax
0829c7b5 +0x2815:  mov    %eax,(%esp)
0829c7b8 +0x2818:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c7bd +0x281d:  mov    $0x0,%ebx
0829c7c2 +0x2822:  jmp    0829d41d <+0x347d>
0829c7c7 +0x2827:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c7cf +0x282f:  movl   $0x18,(%esp)
0829c7d6 +0x2836:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c7db +0x283b:  mov    %eax,%ebx
0829c7dd +0x283d:  mov    %ebx,%eax
0829c7df +0x283f:  test   %eax,%eax
0829c7e1 +0x2841:  je     0829c810 <+0x2870>
0829c7e3 +0x2843:  mov    %ebx,%eax
0829c7e5 +0x2845:  mov    %eax,(%esp)
0829c7e8 +0x2848:  call   086b6f30 <_ZN14village_object17CVillageObjectMgrC1Ev>  ; village_object::CVillageObjectMgr::CVillageObjectMgr()
0829c7ed +0x284d:  jmp    0829c80c <+0x286c>
0829c7ef +0x284f:  mov    %edx,%esi
0829c7f1 +0x2851:  mov    %eax,%edi
0829c7f3 +0x2853:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c7fb +0x285b:  mov    %ebx,(%esp)
0829c7fe +0x285e:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c803 +0x2863:  mov    %edi,%eax
0829c805 +0x2865:  mov    %esi,%edx
0829c807 +0x2867:  jmp    0829d3ff <+0x345f>
0829c80c +0x286c:  mov    %ebx,%eax
0829c80e +0x286e:  jmp    0829c812 <+0x2872>
0829c810 +0x2870:  mov    %ebx,%eax
0829c812 +0x2872:  mov    %eax,&_ZN10GlobalData18s_villageObjectMgrE
0829c817 +0x2877:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%eax
0829c81c +0x287c:  test   %eax,%eax
0829c81e +0x287e:  jne    0829c876 <+0x28d6>
0829c820 +0x2880:  movl   $0x1,0x14(%esp)
0829c828 +0x2888:  movl   $0x1,0x10(%esp)
0829c830 +0x2890:  movl   $0x9,0xc(%esp)
0829c838 +0x2898:  movl   $0x1e0c,0x8(%esp)
0829c840 +0x28a0:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c848 +0x28a8:  lea    -0x158(%ebp),%eax
0829c84e +0x28ae:  mov    %eax,(%esp)
0829c851 +0x28b1:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c856 +0x28b6:  movl   $"Can't allocate memory for a CVillageObjectMgr",0x4(%esp)
0829c85e +0x28be:  lea    -0x158(%ebp),%eax
0829c864 +0x28c4:  mov    %eax,(%esp)
0829c867 +0x28c7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c86c +0x28cc:  mov    $0x0,%ebx
0829c871 +0x28d1:  jmp    0829d41d <+0x347d>
0829c876 +0x28d6:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c87e +0x28de:  movl   $0x24,(%esp)
0829c885 +0x28e5:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c88a +0x28ea:  mov    %eax,%ebx
0829c88c +0x28ec:  mov    %ebx,%eax
0829c88e +0x28ee:  test   %eax,%eax
0829c890 +0x28f0:  je     0829c8bf <+0x291f>
0829c892 +0x28f2:  mov    %ebx,%eax
0829c894 +0x28f4:  mov    %eax,(%esp)
0829c897 +0x28f7:  call   086b4a4c <_ZN16village_attacked18CVillageMonsterMgrC1Ev>  ; village_attacked::CVillageMonsterMgr::CVillageMonsterMgr()
0829c89c +0x28fc:  jmp    0829c8bb <+0x291b>
0829c89e +0x28fe:  mov    %edx,%esi
0829c8a0 +0x2900:  mov    %eax,%edi
0829c8a2 +0x2902:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c8aa +0x290a:  mov    %ebx,(%esp)
0829c8ad +0x290d:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c8b2 +0x2912:  mov    %edi,%eax
0829c8b4 +0x2914:  mov    %esi,%edx
0829c8b6 +0x2916:  jmp    0829d3ff <+0x345f>
0829c8bb +0x291b:  mov    %ebx,%eax
0829c8bd +0x291d:  jmp    0829c8c1 <+0x2921>
0829c8bf +0x291f:  mov    %ebx,%eax
0829c8c1 +0x2921:  mov    %eax,&_ZN10GlobalData19s_villageMonsterMgrE
0829c8c6 +0x2926:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0829c8cb +0x292b:  test   %eax,%eax
0829c8cd +0x292d:  jne    0829c925 <+0x2985>
0829c8cf +0x292f:  movl   $0x1,0x14(%esp)
0829c8d7 +0x2937:  movl   $0x1,0x10(%esp)
0829c8df +0x293f:  movl   $0x9,0xc(%esp)
0829c8e7 +0x2947:  movl   $0x1e13,0x8(%esp)
0829c8ef +0x294f:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c8f7 +0x2957:  lea    -0x148(%ebp),%eax
0829c8fd +0x295d:  mov    %eax,(%esp)
0829c900 +0x2960:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c905 +0x2965:  movl   $"Can't allocate memory for a CVillageMonsterMgr",0x4(%esp)
0829c90d +0x296d:  lea    -0x148(%ebp),%eax
0829c913 +0x2973:  mov    %eax,(%esp)
0829c916 +0x2976:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c91b +0x297b:  mov    $0x0,%ebx
0829c920 +0x2980:  jmp    0829d41d <+0x347d>
0829c925 +0x2985:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c92d +0x298d:  movl   $0x4,(%esp)
0829c934 +0x2994:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c939 +0x2999:  mov    %eax,%ebx
0829c93b +0x299b:  mov    %ebx,%eax
0829c93d +0x299d:  test   %eax,%eax
0829c93f +0x299f:  je     0829c96e <+0x29ce>
0829c941 +0x29a1:  mov    %ebx,%eax
0829c943 +0x29a3:  mov    %eax,(%esp)
0829c946 +0x29a6:  call   08270014 <_ZN20InstanceRentalSystemC1Ev>  ; InstanceRentalSystem::InstanceRentalSystem()
0829c94b +0x29ab:  jmp    0829c96a <+0x29ca>
0829c94d +0x29ad:  mov    %edx,%esi
0829c94f +0x29af:  mov    %eax,%edi
0829c951 +0x29b1:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c959 +0x29b9:  mov    %ebx,(%esp)
0829c95c +0x29bc:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829c961 +0x29c1:  mov    %edi,%eax
0829c963 +0x29c3:  mov    %esi,%edx
0829c965 +0x29c5:  jmp    0829d3ff <+0x345f>
0829c96a +0x29ca:  mov    %ebx,%eax
0829c96c +0x29cc:  jmp    0829c970 <+0x29d0>
0829c96e +0x29ce:  mov    %ebx,%eax
0829c970 +0x29d0:  mov    %eax,&_ZN10GlobalData14s_rentalSystemE
0829c975 +0x29d5:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
0829c97a +0x29da:  test   %eax,%eax
0829c97c +0x29dc:  jne    0829c9d4 <+0x2a34>
0829c97e +0x29de:  movl   $0x1,0x14(%esp)
0829c986 +0x29e6:  movl   $0x1,0x10(%esp)
0829c98e +0x29ee:  movl   $0x9,0xc(%esp)
0829c996 +0x29f6:  movl   $0x1e1b,0x8(%esp)
0829c99e +0x29fe:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829c9a6 +0x2a06:  lea    -0x138(%ebp),%eax
0829c9ac +0x2a0c:  mov    %eax,(%esp)
0829c9af +0x2a0f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829c9b4 +0x2a14:  movl   $"an`t allocate memory for a InstanceRentalSystem",0x4(%esp)
0829c9bc +0x2a1c:  lea    -0x138(%ebp),%eax
0829c9c2 +0x2a22:  mov    %eax,(%esp)
0829c9c5 +0x2a25:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829c9ca +0x2a2a:  mov    $0x0,%ebx
0829c9cf +0x2a2f:  jmp    0829d41d <+0x347d>
0829c9d4 +0x2a34:  movl   $&_ZSt7nothrow,0x4(%esp)
0829c9dc +0x2a3c:  movl   $0x8,(%esp)
0829c9e3 +0x2a43:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829c9e8 +0x2a48:  mov    %eax,%ebx
0829c9ea +0x2a4a:  mov    %ebx,%eax
0829c9ec +0x2a4c:  test   %eax,%eax
0829c9ee +0x2a4e:  je     0829c9fe <+0x2a5e>
0829c9f0 +0x2a50:  mov    %ebx,%eax
0829c9f2 +0x2a52:  mov    %eax,(%esp)
0829c9f5 +0x2a55:  call   082aa6a4 <_GLOBAL__I__ZN4CLog5this_E+0x6acb>  ; global constructors keyed to CLog::this_+0x6acb
0829c9fa +0x2a5a:  mov    %ebx,%eax
0829c9fc +0x2a5c:  jmp    0829ca00 <+0x2a60>
0829c9fe +0x2a5e:  mov    %ebx,%eax
0829ca00 +0x2a60:  mov    %eax,&_ZN10GlobalData19s_revengeDungeonMgrE
0829ca05 +0x2a65:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
0829ca0a +0x2a6a:  test   %eax,%eax
0829ca0c +0x2a6c:  jne    0829ca64 <+0x2ac4>
0829ca0e +0x2a6e:  movl   $0x1,0x14(%esp)
0829ca16 +0x2a76:  movl   $0x1,0x10(%esp)
0829ca1e +0x2a7e:  movl   $0x9,0xc(%esp)
0829ca26 +0x2a86:  movl   $0x1e24,0x8(%esp)
0829ca2e +0x2a8e:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829ca36 +0x2a96:  lea    -0x128(%ebp),%eax
0829ca3c +0x2a9c:  mov    %eax,(%esp)
0829ca3f +0x2a9f:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829ca44 +0x2aa4:  movl   $"Can't allocate memory for a CRevengeDungeon",0x4(%esp)
0829ca4c +0x2aac:  lea    -0x128(%ebp),%eax
0829ca52 +0x2ab2:  mov    %eax,(%esp)
0829ca55 +0x2ab5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829ca5a +0x2aba:  mov    $0x0,%ebx
0829ca5f +0x2abf:  jmp    0829d41d <+0x347d>
0829ca64 +0x2ac4:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ca6c +0x2acc:  movl   $0xe4,(%esp)
0829ca73 +0x2ad3:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829ca78 +0x2ad8:  mov    %eax,%ebx
0829ca7a +0x2ada:  mov    %ebx,%eax
0829ca7c +0x2adc:  test   %eax,%eax
0829ca7e +0x2ade:  je     0829caad <+0x2b0d>
0829ca80 +0x2ae0:  mov    %ebx,%eax
0829ca82 +0x2ae2:  mov    %eax,(%esp)
0829ca85 +0x2ae5:  call   08125c0c <_ZN21CDailyScheduleManagerC1Ev>  ; CDailyScheduleManager::CDailyScheduleManager()
0829ca8a +0x2aea:  jmp    0829caa9 <+0x2b09>
0829ca8c +0x2aec:  mov    %edx,%esi
0829ca8e +0x2aee:  mov    %eax,%edi
0829ca90 +0x2af0:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ca98 +0x2af8:  mov    %ebx,(%esp)
0829ca9b +0x2afb:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829caa0 +0x2b00:  mov    %edi,%eax
0829caa2 +0x2b02:  mov    %esi,%edx
0829caa4 +0x2b04:  jmp    0829d3ff <+0x345f>
0829caa9 +0x2b09:  mov    %ebx,%eax
0829caab +0x2b0b:  jmp    0829caaf <+0x2b0f>
0829caad +0x2b0d:  mov    %ebx,%eax
0829caaf +0x2b0f:  mov    %eax,&_ZN10GlobalData22s_DailyScheduleManagerE
0829cab4 +0x2b14:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0829cab9 +0x2b19:  test   %eax,%eax
0829cabb +0x2b1b:  jne    0829cb13 <+0x2b73>
0829cabd +0x2b1d:  movl   $0x1,0x14(%esp)
0829cac5 +0x2b25:  movl   $0x1,0x10(%esp)
0829cacd +0x2b2d:  movl   $0x9,0xc(%esp)
0829cad5 +0x2b35:  movl   $0x1e2d,0x8(%esp)
0829cadd +0x2b3d:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829cae5 +0x2b45:  lea    -0x118(%ebp),%eax
0829caeb +0x2b4b:  mov    %eax,(%esp)
0829caee +0x2b4e:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829caf3 +0x2b53:  movl   $"Can't allocate memory for a CDailyScheduleManager",0x4(%esp)
0829cafb +0x2b5b:  lea    -0x118(%ebp),%eax
0829cb01 +0x2b61:  mov    %eax,(%esp)
0829cb04 +0x2b64:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829cb09 +0x2b69:  mov    $0x0,%ebx
0829cb0e +0x2b6e:  jmp    0829d41d <+0x347d>
0829cb13 +0x2b73:  movl   $&_ZSt7nothrow,0x4(%esp)
0829cb1b +0x2b7b:  movl   $0x1c,(%esp)
0829cb22 +0x2b82:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829cb27 +0x2b87:  mov    %eax,%ebx
0829cb29 +0x2b89:  mov    %ebx,%eax
0829cb2b +0x2b8b:  test   %eax,%eax
0829cb2d +0x2b8d:  je     0829cb5c <+0x2bbc>
0829cb2f +0x2b8f:  mov    %ebx,%eax
0829cb31 +0x2b91:  mov    %eax,(%esp)
0829cb34 +0x2b94:  call   0858860c <_ZN18online_preliminary25COnlinePreliminaryTeamMgrC1Ev>  ; online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr()
0829cb39 +0x2b99:  jmp    0829cb58 <+0x2bb8>
0829cb3b +0x2b9b:  mov    %edx,%esi
0829cb3d +0x2b9d:  mov    %eax,%edi
0829cb3f +0x2b9f:  movl   $&_ZSt7nothrow,0x4(%esp)
0829cb47 +0x2ba7:  mov    %ebx,(%esp)
0829cb4a +0x2baa:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829cb4f +0x2baf:  mov    %edi,%eax
0829cb51 +0x2bb1:  mov    %esi,%edx
0829cb53 +0x2bb3:  jmp    0829d3ff <+0x345f>
0829cb58 +0x2bb8:  mov    %ebx,%eax
0829cb5a +0x2bba:  jmp    0829cb5e <+0x2bbe>
0829cb5c +0x2bbc:  mov    %ebx,%eax
0829cb5e +0x2bbe:  mov    %eax,&_ZN10GlobalData26s_onlinePreliminaryTeamMgrE
0829cb63 +0x2bc3:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
0829cb68 +0x2bc8:  test   %eax,%eax
0829cb6a +0x2bca:  jne    0829cbc2 <+0x2c22>
0829cb6c +0x2bcc:  movl   $0x1,0x14(%esp)
0829cb74 +0x2bd4:  movl   $0x1,0x10(%esp)
0829cb7c +0x2bdc:  movl   $0x9,0xc(%esp)
0829cb84 +0x2be4:  movl   $0x1e36,0x8(%esp)
0829cb8c +0x2bec:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829cb94 +0x2bf4:  lea    -0x108(%ebp),%eax
0829cb9a +0x2bfa:  mov    %eax,(%esp)
0829cb9d +0x2bfd:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829cba2 +0x2c02:  movl   $"Can't allocate memory for a COnlinePreliminaryTeamMgr",0x4(%esp)
0829cbaa +0x2c0a:  lea    -0x108(%ebp),%eax
0829cbb0 +0x2c10:  mov    %eax,(%esp)
0829cbb3 +0x2c13:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829cbb8 +0x2c18:  mov    $0x0,%ebx
0829cbbd +0x2c1d:  jmp    0829d41d <+0x347d>
0829cbc2 +0x2c22:  movl   $&_ZSt7nothrow,0x4(%esp)
0829cbca +0x2c2a:  movl   $0x40,(%esp)
0829cbd1 +0x2c31:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829cbd6 +0x2c36:  mov    %eax,%ebx
0829cbd8 +0x2c38:  mov    %ebx,%eax
0829cbda +0x2c3a:  test   %eax,%eax
0829cbdc +0x2c3c:  je     0829cc0b <+0x2c6b>
0829cbde +0x2c3e:  mov    %ebx,%eax
0829cbe0 +0x2c40:  mov    %eax,(%esp)
0829cbe3 +0x2c43:  call   082a8a28 <_GLOBAL__I__ZN4CLog5this_E+0x4e4f>  ; global constructors keyed to CLog::this_+0x4e4f
0829cbe8 +0x2c48:  jmp    0829cc07 <+0x2c67>
0829cbea +0x2c4a:  mov    %edx,%esi
0829cbec +0x2c4c:  mov    %eax,%edi
0829cbee +0x2c4e:  movl   $&_ZSt7nothrow,0x4(%esp)
0829cbf6 +0x2c56:  mov    %ebx,(%esp)
0829cbf9 +0x2c59:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829cbfe +0x2c5e:  mov    %edi,%eax
0829cc00 +0x2c60:  mov    %esi,%edx
0829cc02 +0x2c62:  jmp    0829d3ff <+0x345f>
0829cc07 +0x2c67:  mov    %ebx,%eax
0829cc09 +0x2c69:  jmp    0829cc0d <+0x2c6d>
0829cc0b +0x2c6b:  mov    %ebx,%eax
0829cc0d +0x2c6d:  mov    %eax,&_ZN10GlobalData15s_GameMasterMgrE
0829cc12 +0x2c72:  mov    &_ZN10GlobalData15s_GameMasterMgrE,%eax
0829cc17 +0x2c77:  test   %eax,%eax
0829cc19 +0x2c79:  jne    0829cc71 <+0x2cd1>
0829cc1b +0x2c7b:  movl   $0x1,0x14(%esp)
0829cc23 +0x2c83:  movl   $0x1,0x10(%esp)
0829cc2b +0x2c8b:  movl   $0x9,0xc(%esp)
0829cc33 +0x2c93:  movl   $0x1e47,0x8(%esp)
0829cc3b +0x2c9b:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829cc43 +0x2ca3:  lea    -0xf8(%ebp),%eax
0829cc49 +0x2ca9:  mov    %eax,(%esp)
0829cc4c +0x2cac:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829cc51 +0x2cb1:  movl   $"Can't allocate memory for a CGameMasterMgr",0x4(%esp)
0829cc59 +0x2cb9:  lea    -0xf8(%ebp),%eax
0829cc5f +0x2cbf:  mov    %eax,(%esp)
0829cc62 +0x2cc2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829cc67 +0x2cc7:  mov    $0x0,%ebx
0829cc6c +0x2ccc:  jmp    0829d41d <+0x347d>
0829cc71 +0x2cd1:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0829cc78 +0x2cd8:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0829cc7d +0x2cdd:  mov    %eax,(%esp)
0829cc80 +0x2ce0:  call   086373f2 <_ZN19TimerUpdatePvPGrade15registNextTimerEl>  ; TimerUpdatePvPGrade::registNextTimer(long)
0829cc85 +0x2ce5:  call   0842d0ae <_ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv>  ; DB_ReloadAutoPunishRuleBackIP::makeRequest()
0829cc8a +0x2cea:  call   0842d610 <_ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv>  ; DB_ReloadAutoPunishRuleHackType::makeRequest()
0829cc8f +0x2cef:  call   0842efa0 <_ZN20DB_LoadCleanPadPoint11makeRequestEv>  ; DB_LoadCleanPadPoint::makeRequest()
0829cc94 +0x2cf4:  call   08432e80 <_ZN17DB_BlackIPMonitor11makeRequestEv>  ; DB_BlackIPMonitor::makeRequest()
0829cc99 +0x2cf9:  movl   $0x4,(%esp)
0829cca0 +0x2d00:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0829cca5 +0x2d05:  mov    %eax,%ebx
0829cca7 +0x2d07:  mov    %ebx,%eax
0829cca9 +0x2d09:  mov    %eax,(%esp)
0829ccac +0x2d0c:  call   082a7c32 <_GLOBAL__I__ZN4CLog5this_E+0x4059>  ; global constructors keyed to CLog::this_+0x4059
0829ccb1 +0x2d11:  mov    %ebx,%eax
0829ccb3 +0x2d13:  mov    %eax,&_ZN10GlobalData22s_antibotBusinessImpl_E
0829ccb8 +0x2d18:  movl   $"./",(%esp)
0829ccbf +0x2d1f:  call   082a6539 <_GLOBAL__I__ZN4CLog5this_E+0x2960>  ; global constructors keyed to CLog::this_+0x2960
0829ccc4 +0x2d24:  mov    %eax,&_ZN10GlobalData17s_antibotChecker_E
0829ccc9 +0x2d29:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0829ccce +0x2d2e:  test   %eax,%eax
0829ccd0 +0x2d30:  jne    0829cd18 <+0x2d78>
0829ccd2 +0x2d32:  movl   $0x5,0xc(%esp)
0829ccda +0x2d3a:  movl   $0x1eb0,0x8(%esp)
0829cce2 +0x2d42:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829ccea +0x2d4a:  lea    -0xe8(%ebp),%eax
0829ccf0 +0x2d50:  mov    %eax,(%esp)
0829ccf3 +0x2d53:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0829ccf8 +0x2d58:  movl   $"AntiBot create fail",0x4(%esp)
0829cd00 +0x2d60:  lea    -0xe8(%ebp),%eax
0829cd06 +0x2d66:  mov    %eax,(%esp)
0829cd09 +0x2d69:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829cd0e +0x2d6e:  mov    $0x0,%ebx
0829cd13 +0x2d73:  jmp    0829d41d <+0x347d>
0829cd18 +0x2d78:  movl   $0x0,-0x35c(%ebp)
0829cd22 +0x2d82:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0829cd27 +0x2d87:  mov    %eax,(%esp)
0829cd2a +0x2d8a:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
0829cd2f +0x2d8f:  mov    %eax,0x8(%esp)
0829cd33 +0x2d93:  movl   $"%d",0x4(%esp)
0829cd3b +0x2d9b:  lea    -0x35c(%ebp),%eax
0829cd41 +0x2da1:  mov    %eax,(%esp)
0829cd44 +0x2da4:  call   0807e440 <_init+0xd38>
0829cd49 +0x2da9:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0829cd4e +0x2dae:  mov    (%eax),%eax
0829cd50 +0x2db0:  mov    (%eax),%ebx
0829cd52 +0x2db2:  mov    &_ZN10GlobalData22s_antibotBusinessImpl_E,%eax
0829cd57 +0x2db7:  mov    %eax,%edx
0829cd59 +0x2db9:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0829cd5e +0x2dbe:  lea    -0x35c(%ebp),%ecx
0829cd64 +0x2dc4:  mov    %ecx,0x8(%esp)
0829cd68 +0x2dc8:  mov    %edx,0x4(%esp)
0829cd6c +0x2dcc:  mov    %eax,(%esp)
0829cd6f +0x2dcf:  call   *%ebx
0829cd71 +0x2dd1:  test   %eax,%eax
0829cd73 +0x2dd3:  setne  %al
0829cd76 +0x2dd6:  test   %al,%al
0829cd78 +0x2dd8:  jmp    0829cdc0 <+0x2e20>
0829cd7a +0x2dda:  movl   $0x5,0xc(%esp)
0829cd82 +0x2de2:  movl   $0x1eb7,0x8(%esp)
0829cd8a +0x2dea:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829cd92 +0x2df2:  lea    -0xd8(%ebp),%eax
0829cd98 +0x2df8:  mov    %eax,(%esp)
0829cd9b +0x2dfb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0829cda0 +0x2e00:  movl   $"AntiBot init fail",0x4(%esp)
0829cda8 +0x2e08:  lea    -0xd8(%ebp),%eax
0829cdae +0x2e0e:  mov    %eax,(%esp)
0829cdb1 +0x2e11:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829cdb6 +0x2e16:  mov    $0x0,%ebx
0829cdbb +0x2e1b:  jmp    0829d41d <+0x347d>
0829cdc0 +0x2e20:  movl   $&_ZSt7nothrow,0x4(%esp)
0829cdc8 +0x2e28:  movl   $0x30,(%esp)
0829cdcf +0x2e2f:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829cdd4 +0x2e34:  mov    %eax,%ebx
0829cdd6 +0x2e36:  mov    %ebx,%eax
0829cdd8 +0x2e38:  test   %eax,%eax
0829cdda +0x2e3a:  je     0829ce29 <+0x2e89>
0829cddc +0x2e3c:  mov    %ebx,-0x76c(%ebp)
0829cde2 +0x2e42:  mov    -0x76c(%ebp),%esi
0829cde8 +0x2e48:  mov    $0x0,%eax
0829cded +0x2e4d:  mov    $0xc,%edx
0829cdf2 +0x2e52:  mov    %esi,%edi
0829cdf4 +0x2e54:  mov    %edx,%ecx
0829cdf6 +0x2e56:  rep stos %eax,%es:(%edi)
0829cdf8 +0x2e58:  mov    -0x76c(%ebp),%eax
0829cdfe +0x2e5e:  mov    %eax,(%esp)
0829ce01 +0x2e61:  call   082aa89e <_GLOBAL__I__ZN4CLog5this_E+0x6cc5>  ; global constructors keyed to CLog::this_+0x6cc5
0829ce06 +0x2e66:  jmp    0829ce25 <+0x2e85>
0829ce08 +0x2e68:  mov    %edx,%esi
0829ce0a +0x2e6a:  mov    %eax,%edi
0829ce0c +0x2e6c:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ce14 +0x2e74:  mov    %ebx,(%esp)
0829ce17 +0x2e77:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829ce1c +0x2e7c:  mov    %edi,%eax
0829ce1e +0x2e7e:  mov    %esi,%edx
0829ce20 +0x2e80:  jmp    0829d3ff <+0x345f>
0829ce25 +0x2e85:  mov    %ebx,%eax
0829ce27 +0x2e87:  jmp    0829ce2b <+0x2e8b>
0829ce29 +0x2e89:  mov    %ebx,%eax
0829ce2b +0x2e8b:  mov    %eax,&_ZN10GlobalData14s_statisticMgrE
0829ce30 +0x2e90:  mov    &_ZN10GlobalData14s_statisticMgrE,%eax
0829ce35 +0x2e95:  test   %eax,%eax
0829ce37 +0x2e97:  jne    0829ce8f <+0x2eef>
0829ce39 +0x2e99:  movl   $0x1,0x14(%esp)
0829ce41 +0x2ea1:  movl   $0x1,0x10(%esp)
0829ce49 +0x2ea9:  movl   $0x9,0xc(%esp)
0829ce51 +0x2eb1:  movl   $0x1ebf,0x8(%esp)
0829ce59 +0x2eb9:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829ce61 +0x2ec1:  lea    -0xc8(%ebp),%eax
0829ce67 +0x2ec7:  mov    %eax,(%esp)
0829ce6a +0x2eca:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829ce6f +0x2ecf:  movl   $"Can't allocate memory for a CStatisticMgr",0x4(%esp)
0829ce77 +0x2ed7:  lea    -0xc8(%ebp),%eax
0829ce7d +0x2edd:  mov    %eax,(%esp)
0829ce80 +0x2ee0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829ce85 +0x2ee5:  mov    $0x0,%ebx
0829ce8a +0x2eea:  jmp    0829d41d <+0x347d>
0829ce8f +0x2eef:  movl   $&_ZSt7nothrow,0x4(%esp)
0829ce97 +0x2ef7:  movl   $0x30,(%esp)
0829ce9e +0x2efe:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829cea3 +0x2f03:  mov    %eax,%ebx
0829cea5 +0x2f05:  mov    %ebx,%eax
0829cea7 +0x2f07:  test   %eax,%eax
0829cea9 +0x2f09:  je     0829ced8 <+0x2f38>
0829ceab +0x2f0b:  mov    %ebx,%eax
0829cead +0x2f0d:  mov    %eax,(%esp)
0829ceb0 +0x2f10:  call   0827f6d8 <_ZN15StackableAction6ActionC1Ev>  ; StackableAction::Action::Action()
0829ceb5 +0x2f15:  jmp    0829ced4 <+0x2f34>
0829ceb7 +0x2f17:  mov    %edx,%esi
0829ceb9 +0x2f19:  mov    %eax,%edi
0829cebb +0x2f1b:  movl   $&_ZSt7nothrow,0x4(%esp)
0829cec3 +0x2f23:  mov    %ebx,(%esp)
0829cec6 +0x2f26:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829cecb +0x2f2b:  mov    %edi,%eax
0829cecd +0x2f2d:  mov    %esi,%edx
0829cecf +0x2f2f:  jmp    0829d3ff <+0x345f>
0829ced4 +0x2f34:  mov    %ebx,%eax
0829ced6 +0x2f36:  jmp    0829ceda <+0x2f3a>
0829ced8 +0x2f38:  mov    %ebx,%eax
0829ceda +0x2f3a:  mov    %eax,&_ZN10GlobalData9g_ActionsE
0829cedf +0x2f3f:  mov    &_ZN10GlobalData9g_ActionsE,%eax
0829cee4 +0x2f44:  test   %eax,%eax
0829cee6 +0x2f46:  jne    0829cf3e <+0x2f9e>
0829cee8 +0x2f48:  movl   $0x1,0x14(%esp)
0829cef0 +0x2f50:  movl   $0x1,0x10(%esp)
0829cef8 +0x2f58:  movl   $0x9,0xc(%esp)
0829cf00 +0x2f60:  movl   $0x1ed9,0x8(%esp)
0829cf08 +0x2f68:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829cf10 +0x2f70:  lea    -0xb8(%ebp),%eax
0829cf16 +0x2f76:  mov    %eax,(%esp)
0829cf19 +0x2f79:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829cf1e +0x2f7e:  movl   $"Can't allocate memory for a StackableAction::Action()",0x4(%esp)
0829cf26 +0x2f86:  lea    -0xb8(%ebp),%eax
0829cf2c +0x2f8c:  mov    %eax,(%esp)
0829cf2f +0x2f8f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829cf34 +0x2f94:  mov    $0x0,%ebx
0829cf39 +0x2f99:  jmp    0829d41d <+0x347d>
0829cf3e +0x2f9e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0829cf43 +0x2fa3:  movl   $0x1ee0,0x8(%esp)
0829cf4b +0x2fab:  movl   $"App.cpp",0x4(%esp)
0829cf53 +0x2fb3:  mov    %eax,(%esp)
0829cf56 +0x2fb6:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0829cf5b +0x2fbb:  movl   $0x1,0x8(%esp)
0829cf63 +0x2fc3:  mov    %eax,0x4(%esp)
0829cf67 +0x2fc7:  lea    -0x364(%ebp),%eax
0829cf6d +0x2fcd:  mov    %eax,(%esp)
0829cf70 +0x2fd0:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0829cf75 +0x2fd5:  lea    -0x364(%ebp),%eax
0829cf7b +0x2fdb:  mov    %eax,(%esp)
0829cf7e +0x2fde:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0829cf83 +0x2fe3:  movl   $0x277,0x4(%esp)
0829cf8b +0x2feb:  mov    %eax,(%esp)
0829cf8e +0x2fee:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0829cf93 +0x2ff3:  lea    -0x364(%ebp),%eax
0829cf99 +0x2ff9:  mov    %eax,(%esp)
0829cf9c +0x2ffc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0829cfa1 +0x3001:  movl   $0xffffffff,0x4(%esp)
0829cfa9 +0x3009:  mov    %eax,(%esp)
0829cfac +0x300c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0829cfb1 +0x3011:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0829cfb6 +0x3016:  lea    -0x364(%ebp),%edx
0829cfbc +0x301c:  mov    %edx,0x8(%esp)
0829cfc0 +0x3020:  movl   $0x2,0x4(%esp)
0829cfc8 +0x3028:  mov    %eax,(%esp)
0829cfcb +0x302b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0829cfd0 +0x3030:  jmp    0829cfed <+0x304d>
0829cfd2 +0x3032:  mov    %edx,%ebx
0829cfd4 +0x3034:  mov    %eax,%esi
0829cfd6 +0x3036:  lea    -0x364(%ebp),%eax
0829cfdc +0x303c:  mov    %eax,(%esp)
0829cfdf +0x303f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0829cfe4 +0x3044:  mov    %esi,%eax
0829cfe6 +0x3046:  mov    %ebx,%edx
0829cfe8 +0x3048:  jmp    0829d3ff <+0x345f>
0829cfed +0x304d:  lea    -0x364(%ebp),%eax
0829cff3 +0x3053:  mov    %eax,(%esp)
0829cff6 +0x3056:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0829cffb +0x305b:  call   0829d438 <_ZN10GlobalData11InitCaptchaEv>  ; GlobalData::InitCaptcha()
0829d000 +0x3060:  xor    $0x1,%eax
0829d003 +0x3063:  test   %al,%al
0829d005 +0x3065:  je     0829d05d <+0x30bd>
0829d007 +0x3067:  movl   $0x1,0x14(%esp)
0829d00f +0x306f:  movl   $0x1,0x10(%esp)
0829d017 +0x3077:  movl   $0x9,0xc(%esp)
0829d01f +0x307f:  movl   $0x1eea,0x8(%esp)
0829d027 +0x3087:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d02f +0x308f:  lea    -0xa8(%ebp),%eax
0829d035 +0x3095:  mov    %eax,(%esp)
0829d038 +0x3098:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d03d +0x309d:  movl   $"captcha data initialization failed",0x4(%esp)
0829d045 +0x30a5:  lea    -0xa8(%ebp),%eax
0829d04b +0x30ab:  mov    %eax,(%esp)
0829d04e +0x30ae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d053 +0x30b3:  mov    $0x0,%ebx
0829d058 +0x30b8:  jmp    0829d41d <+0x347d>
0829d05d +0x30bd:  movl   $0x3,(%esp)
0829d064 +0x30c4:  call   0863b2ba <_ZN25Timer_GenerateCaptchaData15RegistNextTimerEi>  ; Timer_GenerateCaptchaData::RegistNextTimer(int)
0829d069 +0x30c9:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d071 +0x30d1:  movl   $0xc,(%esp)
0829d078 +0x30d8:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829d07d +0x30dd:  mov    %eax,%ebx
0829d07f +0x30df:  mov    %ebx,%eax
0829d081 +0x30e1:  test   %eax,%eax
0829d083 +0x30e3:  je     0829d0b2 <+0x3112>
0829d085 +0x30e5:  mov    %ebx,%eax
0829d087 +0x30e7:  mov    %eax,(%esp)
0829d08a +0x30ea:  call   084a302e <_ZN17expert_extraction14CExtractionMgrC1Ev>  ; expert_extraction::CExtractionMgr::CExtractionMgr()
0829d08f +0x30ef:  jmp    0829d0ae <+0x310e>
0829d091 +0x30f1:  mov    %edx,%esi
0829d093 +0x30f3:  mov    %eax,%edi
0829d095 +0x30f5:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d09d +0x30fd:  mov    %ebx,(%esp)
0829d0a0 +0x3100:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829d0a5 +0x3105:  mov    %edi,%eax
0829d0a7 +0x3107:  mov    %esi,%edx
0829d0a9 +0x3109:  jmp    0829d3ff <+0x345f>
0829d0ae +0x310e:  mov    %ebx,%eax
0829d0b0 +0x3110:  jmp    0829d0b4 <+0x3114>
0829d0b2 +0x3112:  mov    %ebx,%eax
0829d0b4 +0x3114:  mov    %eax,&_ZN10GlobalData15g_ExtractionMgrE
0829d0b9 +0x3119:  mov    &_ZN10GlobalData15g_ExtractionMgrE,%eax
0829d0be +0x311e:  test   %eax,%eax
0829d0c0 +0x3120:  jne    0829d118 <+0x3178>
0829d0c2 +0x3122:  movl   $0x1,0x14(%esp)
0829d0ca +0x312a:  movl   $0x1,0x10(%esp)
0829d0d2 +0x3132:  movl   $0x9,0xc(%esp)
0829d0da +0x313a:  movl   $0x1ef5,0x8(%esp)
0829d0e2 +0x3142:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d0ea +0x314a:  lea    -0x98(%ebp),%eax
0829d0f0 +0x3150:  mov    %eax,(%esp)
0829d0f3 +0x3153:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d0f8 +0x3158:  movl   $"Can't allocate memory for a CExtractionMng",0x4(%esp)
0829d100 +0x3160:  lea    -0x98(%ebp),%eax
0829d106 +0x3166:  mov    %eax,(%esp)
0829d109 +0x3169:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d10e +0x316e:  mov    $0x0,%ebx
0829d113 +0x3173:  jmp    0829d41d <+0x347d>
0829d118 +0x3178:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d120 +0x3180:  movl   $0x14,(%esp)
0829d127 +0x3187:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829d12c +0x318c:  mov    %eax,%ebx
0829d12e +0x318e:  mov    %ebx,%eax
0829d130 +0x3190:  test   %eax,%eax
0829d132 +0x3192:  je     0829d161 <+0x31c1>
0829d134 +0x3194:  mov    %ebx,%eax
0829d136 +0x3196:  mov    %eax,(%esp)
0829d139 +0x3199:  call   082840da <_ZN12NPC_TeleportC1Ev>  ; NPC_Teleport::NPC_Teleport()
0829d13e +0x319e:  jmp    0829d15d <+0x31bd>
0829d140 +0x31a0:  mov    %edx,%esi
0829d142 +0x31a2:  mov    %eax,%edi
0829d144 +0x31a4:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d14c +0x31ac:  mov    %ebx,(%esp)
0829d14f +0x31af:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829d154 +0x31b4:  mov    %edi,%eax
0829d156 +0x31b6:  mov    %esi,%edx
0829d158 +0x31b8:  jmp    0829d3ff <+0x345f>
0829d15d +0x31bd:  mov    %ebx,%eax
0829d15f +0x31bf:  jmp    0829d163 <+0x31c3>
0829d161 +0x31c1:  mov    %ebx,%eax
0829d163 +0x31c3:  mov    %eax,&_ZN10GlobalData11g_pTeleportE
0829d168 +0x31c8:  mov    &_ZN10GlobalData11g_pTeleportE,%eax
0829d16d +0x31cd:  test   %eax,%eax
0829d16f +0x31cf:  jne    0829d1c7 <+0x3227>
0829d171 +0x31d1:  movl   $0x1,0x14(%esp)
0829d179 +0x31d9:  movl   $0x1,0x10(%esp)
0829d181 +0x31e1:  movl   $0x9,0xc(%esp)
0829d189 +0x31e9:  movl   $0x1f02,0x8(%esp)
0829d191 +0x31f1:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d199 +0x31f9:  lea    -0x88(%ebp),%eax
0829d19f +0x31ff:  mov    %eax,(%esp)
0829d1a2 +0x3202:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d1a7 +0x3207:  movl   $"Can't allocate memory for a NPC_Teleport()",0x4(%esp)
0829d1af +0x320f:  lea    -0x88(%ebp),%eax
0829d1b5 +0x3215:  mov    %eax,(%esp)
0829d1b8 +0x3218:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d1bd +0x321d:  mov    $0x0,%ebx
0829d1c2 +0x3222:  jmp    0829d41d <+0x347d>
0829d1c7 +0x3227:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d1cf +0x322f:  movl   $0x14,(%esp)
0829d1d6 +0x3236:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829d1db +0x323b:  mov    %eax,%ebx
0829d1dd +0x323d:  mov    %ebx,%eax
0829d1df +0x323f:  test   %eax,%eax
0829d1e1 +0x3241:  je     0829d210 <+0x3270>
0829d1e3 +0x3243:  mov    %ebx,%eax
0829d1e5 +0x3245:  mov    %eax,(%esp)
0829d1e8 +0x3248:  call   08284142 <_ZN13User_TeleportC1Ev>  ; User_Teleport::User_Teleport()
0829d1ed +0x324d:  jmp    0829d20c <+0x326c>
0829d1ef +0x324f:  mov    %edx,%esi
0829d1f1 +0x3251:  mov    %eax,%edi
0829d1f3 +0x3253:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d1fb +0x325b:  mov    %ebx,(%esp)
0829d1fe +0x325e:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829d203 +0x3263:  mov    %edi,%eax
0829d205 +0x3265:  mov    %esi,%edx
0829d207 +0x3267:  jmp    0829d3ff <+0x345f>
0829d20c +0x326c:  mov    %ebx,%eax
0829d20e +0x326e:  jmp    0829d212 <+0x3272>
0829d210 +0x3270:  mov    %ebx,%eax
0829d212 +0x3272:  mov    %eax,&_ZN10GlobalData11g_pTeleportE+0x4
0829d217 +0x3277:  mov    &_ZN10GlobalData11g_pTeleportE+0x4,%eax
0829d21c +0x327c:  test   %eax,%eax
0829d21e +0x327e:  jne    0829d270 <+0x32d0>
0829d220 +0x3280:  movl   $0x1,0x14(%esp)
0829d228 +0x3288:  movl   $0x1,0x10(%esp)
0829d230 +0x3290:  movl   $0x9,0xc(%esp)
0829d238 +0x3298:  movl   $0x1f09,0x8(%esp)
0829d240 +0x32a0:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d248 +0x32a8:  lea    -0x78(%ebp),%eax
0829d24b +0x32ab:  mov    %eax,(%esp)
0829d24e +0x32ae:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d253 +0x32b3:  movl   $"Can't allocate memory for a User_Teleport()",0x4(%esp)
0829d25b +0x32bb:  lea    -0x78(%ebp),%eax
0829d25e +0x32be:  mov    %eax,(%esp)
0829d261 +0x32c1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d266 +0x32c6:  mov    $0x0,%ebx
0829d26b +0x32cb:  jmp    0829d41d <+0x347d>
0829d270 +0x32d0:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d278 +0x32d8:  movl   $0x18,(%esp)
0829d27f +0x32df:  call   08725b50 <_ZnwjRKSt9nothrow_t>  ; operator new(unsigned int, std::nothrow_t const&)
0829d284 +0x32e4:  mov    %eax,%ebx
0829d286 +0x32e6:  mov    %ebx,%eax
0829d288 +0x32e8:  test   %eax,%eax
0829d28a +0x32ea:  je     0829d2b9 <+0x3319>
0829d28c +0x32ec:  mov    %ebx,%eax
0829d28e +0x32ee:  mov    %eax,(%esp)
0829d291 +0x32f1:  call   085f0d64 <_ZN13random_option23CRandomOptionItemHandleC1Ev>  ; random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()
0829d296 +0x32f6:  jmp    0829d2b5 <+0x3315>
0829d298 +0x32f8:  mov    %edx,%esi
0829d29a +0x32fa:  mov    %eax,%edi
0829d29c +0x32fc:  movl   $&_ZSt7nothrow,0x4(%esp)
0829d2a4 +0x3304:  mov    %ebx,(%esp)
0829d2a7 +0x3307:  call   087247e0 <_ZdlPvRKSt9nothrow_t>  ; operator delete(void*, std::nothrow_t const&)
0829d2ac +0x330c:  mov    %edi,%eax
0829d2ae +0x330e:  mov    %esi,%edx
0829d2b0 +0x3310:  jmp    0829d3ff <+0x345f>
0829d2b5 +0x3315:  mov    %ebx,%eax
0829d2b7 +0x3317:  jmp    0829d2bb <+0x331b>
0829d2b9 +0x3319:  mov    %ebx,%eax
0829d2bb +0x331b:  mov    %eax,&_ZN10GlobalData20g_randomOptionHandleE
0829d2c0 +0x3320:  mov    &_ZN10GlobalData20g_randomOptionHandleE,%eax
0829d2c5 +0x3325:  test   %eax,%eax
0829d2c7 +0x3327:  jne    0829d319 <+0x3379>
0829d2c9 +0x3329:  movl   $0x1,0x14(%esp)
0829d2d1 +0x3331:  movl   $0x1,0x10(%esp)
0829d2d9 +0x3339:  movl   $0x9,0xc(%esp)
0829d2e1 +0x3341:  movl   $0x1f12,0x8(%esp)
0829d2e9 +0x3349:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d2f1 +0x3351:  lea    -0x68(%ebp),%eax
0829d2f4 +0x3354:  mov    %eax,(%esp)
0829d2f7 +0x3357:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d2fc +0x335c:  movl   $"Can't allocate memory for a CRandomOptionItemHandle",0x4(%esp)
0829d304 +0x3364:  lea    -0x68(%ebp),%eax
0829d307 +0x3367:  mov    %eax,(%esp)
0829d30a +0x336a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d30f +0x336f:  mov    $0x0,%ebx
0829d314 +0x3374:  jmp    0829d41d <+0x347d>
0829d319 +0x3379:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0829d31e +0x337e:  mov    %eax,(%esp)
0829d321 +0x3381:  call   0816e2b2 <_ZN22ServiceRestrictManager10initializeEv>  ; ServiceRestrictManager::initialize()
0829d326 +0x3386:  xor    $0x1,%eax
0829d329 +0x3389:  test   %al,%al
0829d32b +0x338b:  je     0829d37d <+0x33dd>
0829d32d +0x338d:  movl   $0x1,0x14(%esp)
0829d335 +0x3395:  movl   $0x1,0x10(%esp)
0829d33d +0x339d:  movl   $0x9,0xc(%esp)
0829d345 +0x33a5:  movl   $0x1f1f,0x8(%esp)
0829d34d +0x33ad:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d355 +0x33b5:  lea    -0x58(%ebp),%eax
0829d358 +0x33b8:  mov    %eax,(%esp)
0829d35b +0x33bb:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d360 +0x33c0:  movl   $"Can't allocate memory for a ServiceRestrictManager",0x4(%esp)
0829d368 +0x33c8:  lea    -0x58(%ebp),%eax
0829d36b +0x33cb:  mov    %eax,(%esp)
0829d36e +0x33ce:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d373 +0x33d3:  mov    $0x0,%ebx
0829d378 +0x33d8:  jmp    0829d41d <+0x347d>
0829d37d +0x33dd:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0829d382 +0x33e2:  mov    %eax,(%esp)
0829d385 +0x33e5:  call   0816e8ce <_ZN22ServiceRestrictManager10savePolicyEv>  ; ServiceRestrictManager::savePolicy()
0829d38a +0x33ea:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0829d38f +0x33ef:  mov    %eax,(%esp)
0829d392 +0x33f2:  call   0816e7d6 <_ZN22ServiceRestrictManager10loadPolicyEv>  ; ServiceRestrictManager::loadPolicy()
0829d397 +0x33f7:  call   08162679 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x8e7>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x8e7
0829d39c +0x33fc:  mov    %eax,(%esp)
0829d39f +0x33ff:  call   08170a46 <_ZN19RestrictGeolocation15initGeolocationEv>  ; RestrictGeolocation::initGeolocation()
0829d3a4 +0x3404:  xor    $0x1,%eax
0829d3a7 +0x3407:  test   %al,%al
0829d3a9 +0x3409:  je     0829d3f8 <+0x3458>
0829d3ab +0x340b:  movl   $0x1,0x14(%esp)
0829d3b3 +0x3413:  movl   $0x1,0x10(%esp)
0829d3bb +0x341b:  movl   $0x9,0xc(%esp)
0829d3c3 +0x3423:  movl   $0x1f2a,0x8(%esp)
0829d3cb +0x342b:  movl   $&_ZZN10GlobalData4InitEvE19__PRETTY_FUNCTION__,0x4(%esp)
0829d3d3 +0x3433:  lea    -0x48(%ebp),%eax
0829d3d6 +0x3436:  mov    %eax,(%esp)
0829d3d9 +0x3439:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
0829d3de +0x343e:  movl   $"Can't initialize GeoIP",0x4(%esp)
0829d3e6 +0x3446:  lea    -0x48(%ebp),%eax
0829d3e9 +0x3449:  mov    %eax,(%esp)
0829d3ec +0x344c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0829d3f1 +0x3451:  mov    $0x0,%ebx
0829d3f6 +0x3456:  jmp    0829d41d <+0x347d>
0829d3f8 +0x3458:  mov    $0x1,%ebx
0829d3fd +0x345d:  jmp    0829d41d <+0x347d>
0829d3ff +0x345f:  mov    %edx,%ebx
0829d401 +0x3461:  mov    %eax,%esi
0829d403 +0x3463:  lea    -0x358(%ebp),%eax
0829d409 +0x3469:  mov    %eax,(%esp)
0829d40c +0x346c:  call   082aa83a <_GLOBAL__I__ZN4CLog5this_E+0x6c61>  ; global constructors keyed to CLog::this_+0x6c61
0829d411 +0x3471:  mov    %esi,%eax
0829d413 +0x3473:  mov    %ebx,%edx
0829d415 +0x3475:  mov    %eax,(%esp)
0829d418 +0x3478:  call   08ae3750 <_Unwind_Resume>
0829d41d +0x347d:  lea    -0x358(%ebp),%eax
0829d423 +0x3483:  mov    %eax,(%esp)
0829d426 +0x3486:  call   082aa83a <_GLOBAL__I__ZN4CLog5this_E+0x6c61>  ; global constructors keyed to CLog::this_+0x6c61
0829d42b +0x348b:  mov    %ebx,%eax
0829d42d +0x348d:  lea    -0xc(%ebp),%esp
0829d430 +0x3490:  add    $0x0,%esp
0829d433 +0x3493:  pop    %ebx
0829d434 +0x3494:  pop    %esi
0829d435 +0x3495:  pop    %edi
0829d436 +0x3496:  pop    %ebp
0829d437 +0x3497:  ret
```

## 反编译 C

```c
// GlobalData::Init @ 0x8299fa0

/* WARNING: Type propagation algorithm not settling */
/* GlobalData::Init() */

undefined4 GlobalData::Init(void)

{
  bool bVar1;
  CIPGHelper *pCVar2;
  char cVar3;
  CItemAmplifier *this;
  CGlobalEffectManager *this_00;
  CTimeGate *this_01;
  ostream *poVar4;
  Arad_ServerStateManager *this_02;
  MsgQueueMgr *this_03;
  StreamPool *this_04;
  PacketPool *this_05;
  pthread_t pVar5;
  SmallStreamPool *this_06;
  BigStreamPool *this_07;
  DBMgr *this_08;
  DBThread *pDVar6;
  DispatchThread *this_09;
  NetworkThread *this_10;
  UdpThread *this_11;
  MonitorTcpThread *this_12;
  CServerProxyMgr<CMonitorServerProxy> *this_13;
  CServerProxyMgr<CGuildServerProxy> *this_14;
  CServerProxyMgr<CStatisticServerProxy> *this_15;
  CEnvironment *pCVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  CHadesServerProxy *this_16;
  CDoubleConnCheckServerProxy *this_17;
  CSchoolServerProxy *this_18;
  CPCRoomServerProxy *this_19;
  CCommunityServerProxy *this_20;
  CAuctionServerProxy *this_21;
  CCeraAuctionServerProxy *this_22;
  CPowerManager *this_23;
  CFatigueBatteryHandle *this_24;
  CSecretShop *this_25;
  CmmChannelProxy *this_26;
  CRijndael *pCVar11;
  CTEA *pCVar12;
  CLogGameChannel *this_27;
  CCeraShop *this_28;
  ItemVendingMachine *this_29;
  Secu_DataControl *this_30;
  CSecu_ProtectionField *this_31;
  CAutoPunishRuleBlackIPMgr *this_32;
  CAutoPunishRuleHackTypeMgr *this_33;
  CBlackIPMonitor *this_34;
  AcceptThread *this_35;
  RefPvpGrade *this_36;
  CDBConnector *this_37;
  int iVar13;
  undefined4 uVar14;
  STDBConnInfo *pSVar15;
  CSimpleSSO *this_38;
  MySQL *pMVar16;
  CSecurityCardCenter *this_39;
  CGMAccounts *this_40;
  CQueryCounter *pCVar17;
  CSyncScript *pCVar18;
  int iVar19;
  CSyncSlangFilter *pCVar20;
  CEventManager *this_41;
  Gm_List *this_42;
  CGM_Manager *this_43;
  Cipher *pCVar21;
  CStatisticMgr *pCVar22;
  CBreakAwayPreventSystem *this_44;
  CExpertJobMgr *this_45;
  CVillageObjectMgr *this_46;
  CVillageMonsterMgr *this_47;
  InstanceRentalSystem *this_48;
  CRevengeDungeon *this_49;
  CDailyScheduleManager *this_50;
  COnlinePreliminaryTeamMgr *this_51;
  CGameMasterMgr *this_52;
  long lVar23;
  CBusinessImpl *this_53;
  Action *this_54;
  Stream *pSVar24;
  CStreamGuard *pCVar25;
  CExtractionMgr *this_55;
  NPC_Teleport *this_56;
  User_Teleport *this_57;
  CRandomOptionItemHandle *this_58;
  ServiceRestrictManager *pSVar26;
  RestrictGeolocation *this_59;
  undefined4 uVar27;
  CStatisticMgr *pCVar28;
  byte bVar29;
  uchar local_768 [1024];
  CStreamGuard local_368 [8];
  char local_360 [4];
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  local_35c [24];
  undefined4 local_344;
  string local_340 [7];
  allocator<char> local_339;
  string local_338 [7];
  allocator<char> local_331;
  string local_330 [7];
  allocator<char> local_329;
  pair local_328 [8];
  pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP> local_320 [8];
  ENUM_DB_HANDLE_IDX local_318 [8];
  int local_310 [5];
  cMyTrace local_2fc [16];
  undefined4 local_2ec;
  cMyTrace local_2e8 [16];
  cMyTrace local_2d8 [16];
  cMyTrace local_2c8 [16];
  cMyTrace local_2b8 [16];
  cMyTrace local_2a8 [16];
  cMyTrace local_298 [16];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  local_288 [24];
  cMyTrace local_270 [16];
  cMyTrace local_260 [16];
  cMyTrace local_250 [16];
  cMyTrace local_240 [16];
  cMyTrace local_230 [16];
  cMyTrace local_220 [16];
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  cMyTrace local_1fc [16];
  cMyTrace local_1ec [16];
  cMyTrace local_1dc [16];
  cMyTrace local_1cc [16];
  cMyTrace local_1bc [16];
  cMyTrace local_1ac [16];
  cMyTrace local_19c [16];
  cMyTrace local_18c [16];
  cMyTrace local_17c [16];
  cMyTrace local_16c [16];
  cMyTrace local_15c [16];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [32];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  *local_3c;
  CIPGHelper *local_38;
  int local_34;
  bool local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar29 = 0;
  s_server_stop = 0;
  CSystemTime::update((CSystemTime *)s_systemTime_);
  this = operator_new(0x5e4);
                    /* try { // try from 08299fd2 to 08299fd6 has its CatchHandler @ 08299fd9 */
  CItemAmplifier::CItemAmplifier(this);
  s_itemAmplifier_ = this;
  this_00 = operator_new(0x18);
                    /* try { // try from 0829a00b to 0829a00f has its CatchHandler @ 0829a012 */
  CGlobalEffectManager::CGlobalEffectManager(this_00);
  s_globalEffectManager_ = this_00;
  this_01 = operator_new(0x1c,(nothrow_t *)&std::nothrow);
  if (this_01 == (CTimeGate *)0x0) {
    s_timeGate_ = this_01;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate s_timeGate_ memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a052 to 0829a056 has its CatchHandler @ 0829a059 */
  CTimeGate::CTimeGate(this_01);
  s_timeGate_ = this_01;
  this_02 = operator_new(0x34);
                    /* try { // try from 0829a0ce to 0829a0d2 has its CatchHandler @ 0829a0d5 */
  ARAD::Arad_ServerStateManager::Arad_ServerStateManager(this_02);
  s_serverStateManager_ = this_02;
  this_03 = operator_new(0x180);
                    /* try { // try from 0829a107 to 0829a10b has its CatchHandler @ 0829a10e */
  MsgQueueMgr::MsgQueueMgr(this_03);
  s_msgq_mgr = this_03;
  if (this_03 == (MsgQueueMgr *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate msg queue memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_04 = operator_new(0x1c);
                    /* try { // try from 0829a177 to 0829a17b has its CatchHandler @ 0829a17e */
  StreamPool::StreamPool(this_04);
  s_stream_pool = this_04;
  if (this_04 == (StreamPool *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate stream pool memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  for (local_28 = 0; local_28 < 9; local_28 = local_28 + 1) {
    this_05 = operator_new(8);
                    /* try { // try from 0829a1f0 to 0829a1f4 has its CatchHandler @ 0829a1f7 */
    PacketPool::PacketPool(this_05);
    *(PacketPool **)(s_packet_pool_list + local_28 * 4) = this_05;
    if (*(int *)(s_packet_pool_list + local_28 * 4) == 0) {
      poVar4 = std::operator<<((ostream *)&std::cerr,
                               "[GlobalData::Init] can\'t allocate packet pool memory");
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      return 0;
    }
  }
  pVar5 = pthread_self();
  setCurrentPacketPool(4,pVar5);
  this_06 = operator_new(0x1c);
                    /* try { // try from 0829a292 to 0829a296 has its CatchHandler @ 0829a299 */
  SmallStreamPool::SmallStreamPool(this_06);
  s_small_stream_pool = this_06;
  if (this_06 == (SmallStreamPool *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate small stream pool memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_07 = operator_new(0x1c);
                    /* try { // try from 0829a302 to 0829a306 has its CatchHandler @ 0829a309 */
  BigStreamPool::BigStreamPool(this_07);
  s_big_stream_pool = this_07;
  if (this_07 == (BigStreamPool *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate big stream pool memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_08 = operator_new(0x38);
                    /* try { // try from 0829a372 to 0829a376 has its CatchHandler @ 0829a379 */
  DBMgr::DBMgr(this_08);
  s_db_mgr = this_08;
  if (this_08 == (DBMgr *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] can\'t allocate db manager memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  pDVar6 = operator_new(0x4c);
                    /* try { // try from 0829a3e2 to 0829a3e6 has its CatchHandler @ 0829a3e9 */
  DBThread::DBThread(pDVar6);
  s_db_thr = pDVar6;
  if (pDVar6 == (DBThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate db thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  DBThread::setLogDB(pDVar6,false);
  pDVar6 = operator_new(0x4c);
                    /* try { // try from 0829a467 to 0829a46b has its CatchHandler @ 0829a46e */
  DBThread::DBThread(pDVar6);
  s_db_thr_for_logDB = pDVar6;
  if (pDVar6 == (DBThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate db thread memory, s_db_thr_for_logDB"
                            );
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  DBThread::setLogDB(pDVar6,true);
  this_09 = operator_new(0xc);
                    /* try { // try from 0829a4ec to 0829a4f0 has its CatchHandler @ 0829a4f3 */
  DispatchThread::DispatchThread(this_09);
  s_dispatch_thr = this_09;
  if (this_09 == (DispatchThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate dispath thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_10 = operator_new(0xc);
                    /* try { // try from 0829a55c to 0829a560 has its CatchHandler @ 0829a563 */
  NetworkThread::NetworkThread(this_10);
  s_net_thr = this_10;
  if (this_10 == (NetworkThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate network thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_11 = operator_new(0xc);
                    /* try { // try from 0829a5cc to 0829a5d0 has its CatchHandler @ 0829a5d3 */
  UdpThread::UdpThread(this_11);
  s_udp_thr = this_11;
  if (this_11 == (UdpThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate udp thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_12 = operator_new(0xc,(nothrow_t *)&std::nothrow);
  if (this_12 == (MonitorTcpThread *)0x0) {
    s_monitor_tcp_thr = this_12;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate monitor tcp thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a64a to 0829a64e has its CatchHandler @ 0829a651 */
  MonitorTcpThread::MonitorTcpThread(this_12);
  s_monitor_tcp_thr = this_12;
  this_13 = operator_new(0x30e1c,(nothrow_t *)&std::nothrow);
  if (this_13 == (CServerProxyMgr<CMonitorServerProxy> *)0x0) {
    s_monitor_proxy_mgr = this_13;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate monitor server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a6d4 to 0829a6d8 has its CatchHandler @ 0829a6db */
  CServerProxyMgr<CMonitorServerProxy>::CServerProxyMgr(this_13);
  s_monitor_proxy_mgr = this_13;
  this_14 = operator_new(0x30e34,(nothrow_t *)&std::nothrow);
  if (this_14 == (CServerProxyMgr<CGuildServerProxy> *)0x0) {
    s_guild_proxy_mgr = this_14;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate guild server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a75e to 0829a762 has its CatchHandler @ 0829a765 */
  CServerProxyMgr<CGuildServerProxy>::CServerProxyMgr(this_14);
  s_guild_proxy_mgr = this_14;
  this_15 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this_15 == (CServerProxyMgr<CStatisticServerProxy> *)0x0) {
    s_statistic_proxy_mgr = this_15;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate statistic server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a7e8 to 0829a7ec has its CatchHandler @ 0829a7ef */
  CServerProxyMgr<CStatisticServerProxy>::CServerProxyMgr(this_15);
  s_statistic_proxy_mgr = this_15;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_udp_ip_hades(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_tcp_port_hades(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar10 = CEnvironment::get_udp_port_hades(pCVar7);
  this_16 = operator_new(0x30e1c,(nothrow_t *)&std::nothrow);
  if (this_16 == (CHadesServerProxy *)0x0) {
    s_hades_proxy = this_16;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate Hades server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829a8b5 to 0829a8b9 has its CatchHandler @ 0829a8bc */
  CHadesServerProxy::CHadesServerProxy(this_16,pcVar8,iVar9,iVar10);
  s_hades_proxy = this_16;
  cVar3 = BaseServerProxy::Init((BaseServerProxy *)this_16);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (Hades server proxy)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0829a96e to 0829a996 has its CatchHandler @ 0829aa29 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_udp_ip_doublecheck(pCVar7);
  std::string::string(local_340,pcVar8,(allocator *)&local_339);
                    /* try { // try from 0829a99d to 0829a9a1 has its CatchHandler @ 0829aa11 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_udp_port_doublecheck(pCVar7);
  this_17 = operator_new(0x10,(nothrow_t *)&std::nothrow);
  if (this_17 != (CDoubleConnCheckServerProxy *)0x0) {
                    /* try { // try from 0829a9d5 to 0829a9d9 has its CatchHandler @ 0829a9dc */
    CDoubleConnCheckServerProxy::CDoubleConnCheckServerProxy(this_17,(string)local_340,iVar9);
  }
  s_double_check_proxy = this_17;
                    /* try { // try from 0829aa0a to 0829aa0e has its CatchHandler @ 0829aa29 */
  std::string::~string(local_340);
  std::allocator<char>::~allocator(&local_339);
  if (s_double_check_proxy == (CDoubleConnCheckServerProxy *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate double conn check server proxy memory"
                            );
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  cVar3 = CDoubleConnCheckServerProxy::Init(s_double_check_proxy);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (double conn check server proxy)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_school_server_ip(pCVar7);
  if (*pcVar8 == '\0') {
LAB_0829aafa:
    bVar1 = false;
  }
  else {
    pCVar7 = (CEnvironment *)G_CEnvironment();
    iVar9 = CEnvironment::get_school_server_port(pCVar7);
    if (iVar9 < 1) goto LAB_0829aafa;
    bVar1 = true;
  }
  if (bVar1) {
    std::allocator<char>::allocator();
                    /* try { // try from 0829ab15 to 0829ab3d has its CatchHandler @ 0829abd0 */
    pCVar7 = (CEnvironment *)G_CEnvironment();
    pcVar8 = (char *)CEnvironment::get_school_server_ip(pCVar7);
    std::string::string(local_338,pcVar8,(allocator *)&local_331);
                    /* try { // try from 0829ab44 to 0829ab48 has its CatchHandler @ 0829abb8 */
    pCVar7 = (CEnvironment *)G_CEnvironment();
    iVar9 = CEnvironment::get_school_server_port(pCVar7);
    this_18 = operator_new(0x10,(nothrow_t *)&std::nothrow);
    if (this_18 != (CSchoolServerProxy *)0x0) {
                    /* try { // try from 0829ab7c to 0829ab80 has its CatchHandler @ 0829ab83 */
      CSchoolServerProxy::CSchoolServerProxy(this_18,(string)local_338,iVar9);
    }
    s_school_proxy = this_18;
                    /* try { // try from 0829abb1 to 0829abb5 has its CatchHandler @ 0829abd0 */
    std::string::~string(local_338);
    std::allocator<char>::~allocator(&local_331);
    if (s_school_proxy == (CSchoolServerProxy *)0x0) {
      poVar4 = std::operator<<((ostream *)&std::cerr,
                               "[GlobalData::Init] Can\'t allocate school server proxy memory");
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      return 0;
    }
    cVar3 = CSchoolServerProxy::Init(s_school_proxy);
    if (cVar3 != '\x01') {
      poVar4 = std::operator<<((ostream *)&std::cerr,
                               "[GlobalData::Init] Fail Init (school server proxy)");
      std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
      return 0;
    }
  }
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_pcroom_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_pcroom_server_port(pCVar7);
  this_19 = operator_new(0x30e04,(nothrow_t *)&std::nothrow);
  if (this_19 == (CPCRoomServerProxy *)0x0) {
    s_pcroom_proxy = this_19;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate pcroom server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829acbc to 0829acc0 has its CatchHandler @ 0829acc3 */
  CPCRoomServerProxy::CPCRoomServerProxy(this_19,pcVar8,iVar9);
  s_pcroom_proxy = this_19;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_community_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_community_server_port(pCVar7);
  this_20 = operator_new(0x30e04,(nothrow_t *)&std::nothrow);
  if (this_20 == (CCommunityServerProxy *)0x0) {
    s_community_proxy = this_20;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate community server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829ad6c to 0829ad70 has its CatchHandler @ 0829ad73 */
  CCommunityServerProxy::CCommunityServerProxy(this_20,pcVar8,iVar9);
  s_community_proxy = this_20;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_auction_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_auction_server_port(pCVar7);
  this_21 = operator_new(0x30e10,(nothrow_t *)&std::nothrow);
  if (this_21 == (CAuctionServerProxy *)0x0) {
    s_auction_proxy = this_21;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate auction server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829ae24 to 0829ae28 has its CatchHandler @ 0829ae2b */
  CAuctionServerProxy::CAuctionServerProxy(this_21,pcVar8,iVar9,"Auction Server");
  s_auction_proxy = this_21;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_cera_auction_server_ip(pCVar7);
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_cera_auction_server_port(pCVar7);
  this_22 = operator_new(0x30e10,(nothrow_t *)&std::nothrow);
  if (this_22 == (CCeraAuctionServerProxy *)0x0) {
    s_cera_auction_proxy = this_22;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate cera auction server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829aedc to 0829aee0 has its CatchHandler @ 0829aee3 */
  CCeraAuctionServerProxy::CCeraAuctionServerProxy(this_22,pcVar8,iVar9,"Cera Auction Server");
  s_cera_auction_proxy = this_22;
  this_23 = operator_new(0x208,(nothrow_t *)&std::nothrow);
  if (this_23 == (CPowerManager *)0x0) {
    s_power_manager = this_23;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate power manager memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829af66 to 0829af6a has its CatchHandler @ 0829af6d */
  CPowerManager::CPowerManager(this_23);
  s_power_manager = this_23;
  cVar3 = CPowerManager::Init(this_23);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (power manager memory)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  CPowerManager::LoadPowerWarInfo();
  CPowerManager::LoadRankerInfo();
  this_24 = operator_new(1,(nothrow_t *)&std::nothrow);
  if (this_24 == (CFatigueBatteryHandle *)0x0) {
    s_fatigueBatteryHandle_ = this_24;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate Fatigue Battery Handle memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829b04c to 0829b050 has its CatchHandler @ 0829b053 */
  CFatigueBatteryHandle::CFatigueBatteryHandle(this_24);
  s_fatigueBatteryHandle_ = this_24;
  this_25 = operator_new(100,(nothrow_t *)&std::nothrow);
  if (this_25 == (CSecretShop *)0x0) {
    s_secret_shop = this_25;
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate SecretShop Handle memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
                    /* try { // try from 0829b0d6 to 0829b0da has its CatchHandler @ 0829b0dd */
  secretshop::CSecretShop::CSecretShop(this_25);
  s_secret_shop = this_25;
  std::allocator<char>::allocator();
                    /* try { // try from 0829b14d to 0829b175 has its CatchHandler @ 0829b208 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  pcVar8 = (char *)CEnvironment::get_udp_ip_channel(pCVar7);
  std::string::string(local_330,pcVar8,(allocator *)&local_329);
                    /* try { // try from 0829b17c to 0829b180 has its CatchHandler @ 0829b1f0 */
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_udp_port_channel(pCVar7);
  this_26 = operator_new(0x80020,(nothrow_t *)&std::nothrow);
  if (this_26 != (CmmChannelProxy *)0x0) {
                    /* try { // try from 0829b1b4 to 0829b1b8 has its CatchHandler @ 0829b1bb */
    CmmChannelProxy::CmmChannelProxy(this_26,(string)local_330,iVar9);
  }
  s_channel_proxy = this_26;
                    /* try { // try from 0829b1e9 to 0829b1ed has its CatchHandler @ 0829b208 */
  std::string::~string(local_330);
  std::allocator<char>::~allocator(&local_329);
  if (s_channel_proxy == (CmmChannelProxy *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate channel server proxy memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  cVar3 = CmmChannelProxy::Init(s_channel_proxy);
  if (cVar3 != '\x01') {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Fail Init (channel server proxy)");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  pCVar11 = operator_new(0x47c);
                    /* try { // try from 0829b2c0 to 0829b2c4 has its CatchHandler @ 0829b2c7 */
  CRijndael::CRijndael(pCVar11);
  s_pcryptRijndael_CharacView_ = pCVar11;
  CRijndael::Initialize(pCVar11,"wongyaofejsvk007",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  pCVar11 = operator_new(0x47c);
                    /* try { // try from 0829b33e to 0829b342 has its CatchHandler @ 0829b345 */
  CRijndael::CRijndael(pCVar11);
  s_pcryptRijndael_Password_ = pCVar11;
  CRijndael::Initialize(pCVar11,"wongyaofneople00",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  pCVar11 = operator_new(0x47c);
                    /* try { // try from 0829b3bc to 0829b3c0 has its CatchHandler @ 0829b3c3 */
  CRijndael::CRijndael(pCVar11);
  s_pcryptRijndael_MousePassword_ = pCVar11;
  CRijndael::Initialize(pCVar11,"ejsvk@@key4mouse",0x20,CRijndael::sm_chain0,0x10,0x10,0,0);
  pCVar12 = operator_new(0x48);
                    /* try { // try from 0829b43a to 0829b43e has its CatchHandler @ 0829b441 */
  CTEA::CTEA(pCVar12);
  s_pcryptTEA_MousePassword_ = pCVar12;
  CTEA::Initialize(pCVar12,"tjsghTlWkdajtwla",0x10,"",0,0);
  pCVar12 = operator_new(0x48);
                    /* try { // try from 0829b4a8 to 0829b4ac has its CatchHandler @ 0829b4af */
  CTEA::CTEA(pCVar12);
  s_pcryptTEA_SecurityCard_ = pCVar12;
  CTEA::Initialize(pCVar12,"ejsvk@@@secucard",0x10,"",0,0);
  this_27 = operator_new(0x10,(nothrow_t *)&std::nothrow);
  if (this_27 != (CLogGameChannel *)0x0) {
    WongWork::CLogGameChannel::CLogGameChannel(this_27);
  }
  s_pLogGameChannel = this_27;
  WongWork::CLogGameChannel::StartLogTimer(this_27);
  this_28 = operator_new(8,(nothrow_t *)&std::nothrow);
  if (this_28 != (CCeraShop *)0x0) {
                    /* try { // try from 0829b562 to 0829b566 has its CatchHandler @ 0829b569 */
    WongWork::CCeraShop::CCeraShop(this_28);
  }
  s_pCeraShop = this_28;
  this_29 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (this_29 != (ItemVendingMachine *)0x0) {
                    /* try { // try from 0829b5b5 to 0829b5b9 has its CatchHandler @ 0829b5bc */
    ItemVendingMachine::ItemVendingMachine(this_29);
  }
  s_pItemVendingMachine = this_29;
  this_30 = operator_new(1);
  Secu_DataControl::Secu_DataControl(this_30);
  s_pSecuDataControl = this_30;
  this_31 = operator_new(0x18);
                    /* try { // try from 0829b619 to 0829b61d has its CatchHandler @ 0829b620 */
  CSecu_ProtectionField::CSecu_ProtectionField(this_31);
  s_pSecuProtectionField = this_31;
  this_32 = operator_new(0x18);
                    /* try { // try from 0829b652 to 0829b656 has its CatchHandler @ 0829b659 */
  WongWork::CAutoPunishRuleBlackIPMgr::CAutoPunishRuleBlackIPMgr(this_32);
  g_autoPunishRuleBlackIPMgr = this_32;
  WongWork::CAutoPunishRuleBlackIPMgr::reset(this_32);
  this_33 = operator_new(0x70);
                    /* try { // try from 0829b698 to 0829b69c has its CatchHandler @ 0829b69f */
  WongWork::CAutoPunishRuleHackTypeMgr::CAutoPunishRuleHackTypeMgr(this_33);
  g_autoPunishRuleHackTypeMgr = this_33;
  WongWork::CAutoPunishRuleHackTypeMgr::reset(this_33);
  this_34 = operator_new(0x18);
                    /* try { // try from 0829b6de to 0829b6e2 has its CatchHandler @ 0829b6e5 */
  WongWork::CBlackIPMonitor::CBlackIPMonitor(this_34);
  g_blackIPMonitor = this_34;
  WongWork::CBlackIPMonitor::reset(this_34);
  this_35 = operator_new(0x10);
                    /* try { // try from 0829b724 to 0829b728 has its CatchHandler @ 0829b72b */
  AcceptThread::AcceptThread(this_35);
  s_accept_thr = this_35;
  if (this_35 == (AcceptThread *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate accept thread memory");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_36 = operator_new(0x14c);
                    /* try { // try from 0829b794 to 0829b798 has its CatchHandler @ 0829b79b */
  RefPvpGrade::RefPvpGrade(this_36);
  s_ref_pvp_grade = this_36;
  if (this_36 == (RefPvpGrade *)0x0) {
    poVar4 = std::operator<<((ostream *)&std::cerr,
                             "[GlobalData::Init] Can\'t allocate pvp grade ref");
    std::ostream::operator<<(poVar4,std::endl<char,std::char_traits<char>>);
    return 0;
  }
  this_37 = operator_new(0x16c,(nothrow_t *)&std::nothrow);
  if (this_37 == (CDBConnector *)0x0) {
    s_db_connector = this_37;
    return 0;
  }
                    /* try { // try from 0829b81c to 0829b820 has its CatchHandler @ 0829b823 */
  CDBConnector::CDBConnector(this_37,s_db_mgr);
  s_db_connector = this_37;
  iVar9 = G_CEnvironment();
  local_3c = (map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
              *)(iVar9 + 0x68);
  iVar9 = G_CEnvironment();
  local_344 = *(undefined4 *)(iVar9 + 0x378);
  std::
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  ::map(local_35c);
  for (local_24 = 1; local_24 < 0xf; local_24 = local_24 + 1) {
    local_310[0] = local_24;
                    /* try { // try from 0829b8ba to 0829bc4c has its CatchHandler @ 0829d3ff */
    std::make_pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP&>(local_318,(ENUM_SERVER_GROUP *)local_310);
    std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>::
    pair<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP>(local_320,local_318);
    std::
    map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
    ::insert(local_328);
  }
  local_310[1] = 0;
  iVar9 = std::
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 1));
  local_310[2] = 0;
  iVar10 = std::
           map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
           ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 2));
  local_310[3] = 0;
  iVar13 = std::
           map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
           ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 3));
  uVar27 = *(undefined4 *)(iVar13 + 0x14);
  local_310[4] = 0;
  uVar14 = std::
           map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
           ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)(local_310 + 4));
  cMyTrace::cMyTrace(local_2fc,"static bool GlobalData::Init()",0x1b0c,9,true,false);
  cMyTrace::operator()
            (local_2fc,"\t- DBConnector Init(masterdb %s/%d/%s/%s) ",uVar14,uVar27,iVar10 + 0x18,
             iVar9 + 0x42);
  local_2ec = 0;
  pSVar15 = (STDBConnInfo *)
            std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::operator[](local_3c,(ENUM_DB_HANDLE_IDX *)&local_2ec);
  cVar3 = CDBConnector::Init(s_db_connector,pSVar15);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_2e8,"static bool GlobalData::Init()",0x1b0f,9,true,true);
    cMyTrace::operator()(local_2e8,"\t- DBConnector Init Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_2d8,"static bool GlobalData::Init()",0x1b12,9,false,true);
  cMyTrace::operator()(local_2d8,"Success");
  cMyTrace::cMyTrace(local_2c8,"static bool GlobalData::Init()",0x1b14,9,true,false);
  cMyTrace::operator()(local_2c8,"\t- DBConnector Get Connection Info ");
  cVar3 = CDBConnector::GetConnInfo(s_db_connector,(map *)local_35c,(map *)local_3c);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_2b8,"static bool GlobalData::Init()",0x1b17,9,true,true);
    cMyTrace::operator()(local_2b8,"\t- DBConnector Get Connection Info Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_2a8,"static bool GlobalData::Init()",0x1b1a,9,false,true);
  cMyTrace::operator()(local_2a8,"Success");
  cMyTrace::cMyTrace(local_298,"static bool GlobalData::Init()",0x1b1c,9,true,true);
  cMyTrace::operator()(local_298,"\t- Open DB ... ");
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::map(local_288,(map *)local_3c);
                    /* try { // try from 0829bc5f to 0829bc63 has its CatchHandler @ 0829bc79 */
  cVar3 = CDBConnector::Connect(s_db_connector,local_288);
                    /* try { // try from 0829bc72 to 0829bc76 has its CatchHandler @ 0829d3ff */
  std::
  map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
  ::~map(local_288);
  if (cVar3 != '\x01') {
                    /* try { // try from 0829bcc9 to 0829bd45 has its CatchHandler @ 0829d3ff */
    cMyTrace::cMyTrace(local_270,"static bool GlobalData::Init()",0x1b1f,9,true,true);
    cMyTrace::operator()(local_270,"\t- DBConnector Connect DB Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_260,"static bool GlobalData::Init()",0x1b22,9,true,true);
  cMyTrace::operator()(local_260,"\t- All DB Open Success");
  this_38 = operator_new(0xd0864);
                    /* try { // try from 0829bd4d to 0829bd51 has its CatchHandler @ 0829bd54 */
  WongWork::CSimpleSSO::CSimpleSSO(this_38);
  s_psimpleSSO = this_38;
                    /* try { // try from 0829bd88 to 0829bdaa has its CatchHandler @ 0829d3ff */
  pMVar16 = (MySQL *)DBMgr::GetDBHandle(s_db_mgr,6,0);
  WongWork::CSimpleSSO::init(s_psimpleSSO,pMVar16);
  this_39 = operator_new(0x488);
                    /* try { // try from 0829bdb2 to 0829bdb6 has its CatchHandler @ 0829bdb9 */
  WongWork::CSecurityCardCenter::CSecurityCardCenter(this_39);
  s_securityCardCenter = this_39;
                    /* try { // try from 0829bddd to 0829be78 has its CatchHandler @ 0829d3ff */
  WongWork::CSecurityCardCenter::init(this_39);
  local_38 = operator_new(0x54,(nothrow_t *)&std::nothrow);
  if (local_38 != (CIPGHelper *)0x0) {
    WongWork::IPG::CIPGHelper::CIPGHelper(local_38);
  }
  iVar9 = WongWork::IPG::CIPGHelper::Initialize(local_38,1,5000);
  if (iVar9 < 0) {
    puts("Fail to init IPG Module");
    pCVar2 = local_38;
    if (local_38 != (CIPGHelper *)0x0) {
      WongWork::IPG::CIPGHelper::~CIPGHelper(local_38);
      operator_delete(pCVar2);
    }
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  s_pIPGHelper = local_38;
  CHumanCertifier::init();
  this_40 = operator_new(8);
                    /* try { // try from 0829be80 to 0829be84 has its CatchHandler @ 0829be87 */
  WongWork::CGMAccounts::CGMAccounts(this_40);
  s_pGMAccounts_ = this_40;
                    /* try { // try from 0829bed4 to 0829c2ce has its CatchHandler @ 0829d3ff */
  cMyTrace::cMyTrace(local_250,"static bool GlobalData::Init()",0x1d4d,9,true,false);
  cMyTrace::operator()(local_250,"\t- Init Query Table ");
  pMVar16 = (MySQL *)DBMgr::GetDBHandle(s_db_mgr,2,0);
  pCVar17 = (CQueryCounter *)MySQL::GetQueryCounter(pMVar16);
  cVar3 = CQueryCounter::LoadQueryTable(pCVar17);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_240,"static bool GlobalData::Init()",0x1d50,9,true,true);
    cMyTrace::operator()(local_240,"\t- Init Query Table Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  pMVar16 = (MySQL *)DBMgr::GetDBHandle(s_db_mgr,4,0);
  pCVar17 = (CQueryCounter *)MySQL::GetQueryCounter(pMVar16);
  cVar3 = CQueryCounter::LoadQueryTable(pCVar17);
  if (cVar3 != '\x01') {
    cMyTrace::cMyTrace(local_230,"static bool GlobalData::Init()",0x1d55,9,true,true);
    cMyTrace::operator()(local_230,"\t- Init Query Table Fail");
    uVar27 = 0;
    goto LAB_0829d41d;
  }
  cMyTrace::cMyTrace(local_220,"static bool GlobalData::Init()",0x1d58,9,false,true);
  cMyTrace::operator()(local_220,"Success");
  local_34 = 1;
  local_2d = false;
  pCVar7 = (CEnvironment *)G_CEnvironment();
  iVar9 = CEnvironment::get_channel_no(pCVar7);
  if (iVar9 == local_34) {
    local_2d = true;
  }
  bVar1 = local_2d;
  pCVar18 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  sync_script::CSyncScript::SetEnable(pCVar18,bVar1);
  pCVar18 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar3 = sync_script::CSyncScript::IsEnable(pCVar18);
  if (cVar3 != '\0') {
    local_210 = 5;
    iVar9 = G_CEnvironment();
    iVar9 = std::
            map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
            ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                          *)(iVar9 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_210);
    local_20c = 5;
    iVar10 = G_CEnvironment();
    iVar10 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar10 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_20c);
    local_208 = 5;
    iVar13 = G_CEnvironment();
    iVar13 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar13 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_208);
    local_204 = 5;
    iVar19 = G_CEnvironment();
    iVar19 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar19 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_204);
    uVar27 = *(undefined4 *)(iVar19 + 0x14);
    local_200 = 5;
    iVar19 = G_CEnvironment();
    uVar14 = std::
             map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
             ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                           *)(iVar19 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_200);
    cVar3 = DBMgr::Open(s_db_mgr,5,uVar14,uVar27,iVar13 + 0x42,iVar10 + 0x18,iVar9 + 0x2d,0);
    if (cVar3 != '\x01') {
      cMyTrace::cMyTrace(local_1fc,"static bool GlobalData::Init()",0x1d8d,9,true,true);
      cMyTrace::operator()(local_1fc,"\t- Failed to open web DB");
      uVar27 = 0;
      goto LAB_0829d41d;
    }
    cMyTrace::cMyTrace(local_1ec,"static bool GlobalData::Init()",0x1d90,9,true,true);
    cMyTrace::operator()(local_1ec,"\t- Success WEB DB OPEN");
  }
  pCVar20 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
  cVar3 = CSyncSlangFilter::AddSlangListName(pCVar20);
  if (cVar3 == '\x01') {
    pCVar20 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
    cVar3 = CSyncSlangFilter::AddSlangList(pCVar20);
    if (cVar3 != '\x01') goto LAB_0829c273;
    bVar1 = false;
  }
  else {
LAB_0829c273:
    bVar1 = true;
  }
  if (bVar1) {
    cMyTrace::cMyTrace(local_1dc,"static bool GlobalData::Init()",0x1d9f,9,true,true);
    cMyTrace::operator()(local_1dc,"Failed to read slang list");
    uVar27 = 0;
  }
  else {
    this_41 = operator_new(0x29c,(nothrow_t *)&std::nothrow);
    if (this_41 == (CEventManager *)0x0) {
      s_event_manager = this_41;
                    /* try { // try from 0829c363 to 0829c3d3 has its CatchHandler @ 0829d3ff */
      cMyTrace::cMyTrace(local_1cc,"static bool GlobalData::Init()",0x1da8,9,true,true);
      cMyTrace::operator()(local_1cc,"Can\'t allocate CEventManager memory");
      uVar27 = 0;
    }
    else {
                    /* try { // try from 0829c2fa to 0829c2fe has its CatchHandler @ 0829c301 */
      CEventManager::CEventManager(this_41);
      s_event_manager = this_41;
      cMyTrace::cMyTrace(local_1bc,"static bool GlobalData::Init()",0x1dc6,9,true,true);
      cMyTrace::operator()(local_1bc,"\t- Load GM List From DB");
      this_42 = operator_new(4,(nothrow_t *)&std::nothrow);
      if (this_42 == (Gm_List *)0x0) {
        gmList = this_42;
                    /* try { // try from 0829c45e to 0829c478 has its CatchHandler @ 0829d3ff */
        cMyTrace::cMyTrace(local_1ac,"static bool GlobalData::Init()",0x1dcd,9,true,true);
        cMyTrace::operator()(local_1ac,"\t- Can\'t allocate memory for a Gm_List");
        uVar27 = 0;
      }
      else {
                    /* try { // try from 0829c3f5 to 0829c3f9 has its CatchHandler @ 0829c3fc */
        Gm_List::Gm_List(this_42);
        gmList = this_42;
        this_43 = operator_new(0x3c,(nothrow_t *)&std::nothrow);
        if (this_43 == (CGM_Manager *)0x0) {
          s_GM_Manager = this_43;
                    /* try { // try from 0829c50d to 0829c599 has its CatchHandler @ 0829d3ff */
          cMyTrace::cMyTrace(local_19c,"static bool GlobalData::Init()",0x1dd6,9,true,true);
          cMyTrace::operator()(local_19c,"Can\'t allocate memory for a CGM_Manager");
          uVar27 = 0;
        }
        else {
                    /* try { // try from 0829c4a4 to 0829c4a8 has its CatchHandler @ 0829c4ab */
          CGM_Manager::CGM_Manager(this_43);
          s_GM_Manager = this_43;
          pCVar21 = (Cipher *)G_Cipher();
          local_2c = Cipher::GetTotalKeyLength(pCVar21);
          for (local_20 = 0; iVar9 = local_20, local_20 < local_2c; local_20 = local_20 + 1) {
            iVar10 = rand();
            local_768[iVar9] = (uchar)iVar10;
          }
          pCVar21 = (Cipher *)G_Cipher();
          Cipher::Initialize(pCVar21,local_768,local_2c);
          pCVar22 = operator_new(0x30,(nothrow_t *)&std::nothrow);
          if (pCVar22 != (CStatisticMgr *)0x0) {
            pCVar28 = pCVar22;
            for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined4 *)pCVar28 = 0;
              pCVar28 = pCVar28 + (uint)bVar29 * -8 + 4;
            }
                    /* try { // try from 0829c5db to 0829c5df has its CatchHandler @ 0829c5e2 */
            CStatisticMgr::CStatisticMgr(pCVar22);
          }
          s_statisticMgr = pCVar22;
          if (pCVar22 == (CStatisticMgr *)0x0) {
                    /* try { // try from 0829c644 to 0829c65e has its CatchHandler @ 0829d3ff */
            cMyTrace::cMyTrace(local_18c,"static bool GlobalData::Init()",0x1df7,9,true,true);
            cMyTrace::operator()(local_18c,"Can\'t allocate memory for a CStatisticMgr");
            uVar27 = 0;
          }
          else {
            this_44 = operator_new(0x32c,(nothrow_t *)&std::nothrow);
            if (this_44 == (CBreakAwayPreventSystem *)0x0) {
              s_BreakAwaySys = this_44;
                    /* try { // try from 0829c6f3 to 0829c70d has its CatchHandler @ 0829d3ff */
              cMyTrace::cMyTrace(local_17c,"static bool GlobalData::Init()",0x1dfe,9,true,true);
              cMyTrace::operator()(local_17c,"Can\'t allocate memory for a s_BreakAwaySys");
              uVar27 = 0;
            }
            else {
                    /* try { // try from 0829c68a to 0829c68e has its CatchHandler @ 0829c691 */
              break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem(this_44);
              s_BreakAwaySys = this_44;
              this_45 = operator_new(4,(nothrow_t *)&std::nothrow);
              if (this_45 == (CExpertJobMgr *)0x0) {
                s_ExpertJobMgr = this_45;
                    /* try { // try from 0829c7a2 to 0829c7bc has its CatchHandler @ 0829d3ff */
                cMyTrace::cMyTrace(local_16c,"static bool GlobalData::Init()",0x1e05,9,true,true);
                cMyTrace::operator()(local_16c,"Can\'t allocate memory for a CExpertJobMgr");
                uVar27 = 0;
              }
              else {
                    /* try { // try from 0829c739 to 0829c73d has its CatchHandler @ 0829c740 */
                expert_job::CExpertJobMgr::CExpertJobMgr(this_45);
                s_ExpertJobMgr = this_45;
                this_46 = operator_new(0x18,(nothrow_t *)&std::nothrow);
                if (this_46 == (CVillageObjectMgr *)0x0) {
                  s_villageObjectMgr = this_46;
                    /* try { // try from 0829c851 to 0829c86b has its CatchHandler @ 0829d3ff */
                  cMyTrace::cMyTrace(local_15c,"static bool GlobalData::Init()",0x1e0c,9,true,true);
                  cMyTrace::operator()(local_15c,"Can\'t allocate memory for a CVillageObjectMgr");
                  uVar27 = 0;
                }
                else {
                    /* try { // try from 0829c7e8 to 0829c7ec has its CatchHandler @ 0829c7ef */
                  village_object::CVillageObjectMgr::CVillageObjectMgr(this_46);
                  s_villageObjectMgr = this_46;
                  this_47 = operator_new(0x24,(nothrow_t *)&std::nothrow);
                  if (this_47 == (CVillageMonsterMgr *)0x0) {
                    s_villageMonsterMgr = this_47;
                    /* try { // try from 0829c900 to 0829c91a has its CatchHandler @ 0829d3ff */
                    cMyTrace::cMyTrace(local_14c,"static bool GlobalData::Init()",0x1e13,9,true,true
                                      );
                    cMyTrace::operator()
                              (local_14c,"Can\'t allocate memory for a CVillageMonsterMgr");
                    uVar27 = 0;
                  }
                  else {
                    /* try { // try from 0829c897 to 0829c89b has its CatchHandler @ 0829c89e */
                    village_attacked::CVillageMonsterMgr::CVillageMonsterMgr(this_47);
                    s_villageMonsterMgr = this_47;
                    this_48 = operator_new(4,(nothrow_t *)&std::nothrow);
                    if (this_48 == (InstanceRentalSystem *)0x0) {
                      s_rentalSystem = this_48;
                    /* try { // try from 0829c9af to 0829ca59 has its CatchHandler @ 0829d3ff */
                      cMyTrace::cMyTrace(local_13c,"static bool GlobalData::Init()",0x1e1b,9,true,
                                         true);
                      cMyTrace::operator()
                                (local_13c,"an`t allocate memory for a InstanceRentalSystem");
                      uVar27 = 0;
                    }
                    else {
                    /* try { // try from 0829c946 to 0829c94a has its CatchHandler @ 0829c94d */
                      InstanceRentalSystem::InstanceRentalSystem(this_48);
                      s_rentalSystem = this_48;
                      this_49 = operator_new(8,(nothrow_t *)&std::nothrow);
                      if (this_49 == (CRevengeDungeon *)0x0) {
                        s_revengeDungeonMgr = this_49;
                        cMyTrace::cMyTrace(local_12c,"static bool GlobalData::Init()",0x1e24,9,true,
                                           true);
                        cMyTrace::operator()
                                  (local_12c,"Can\'t allocate memory for a CRevengeDungeon");
                        uVar27 = 0;
                      }
                      else {
                        village_attacked::CRevengeDungeon::CRevengeDungeon(this_49);
                        s_revengeDungeonMgr = this_49;
                        this_50 = operator_new(0xe4,(nothrow_t *)&std::nothrow);
                        if (this_50 == (CDailyScheduleManager *)0x0) {
                          s_DailyScheduleManager = this_50;
                    /* try { // try from 0829caee to 0829cb08 has its CatchHandler @ 0829d3ff */
                          cMyTrace::cMyTrace(local_11c,"static bool GlobalData::Init()",0x1e2d,9,
                                             true,true);
                          cMyTrace::operator()
                                    (local_11c,"Can\'t allocate memory for a CDailyScheduleManager")
                          ;
                          uVar27 = 0;
                        }
                        else {
                    /* try { // try from 0829ca85 to 0829ca89 has its CatchHandler @ 0829ca8c */
                          CDailyScheduleManager::CDailyScheduleManager(this_50);
                          s_DailyScheduleManager = this_50;
                          this_51 = operator_new(0x1c,(nothrow_t *)&std::nothrow);
                          if (this_51 == (COnlinePreliminaryTeamMgr *)0x0) {
                            s_onlinePreliminaryTeamMgr = this_51;
                    /* try { // try from 0829cb9d to 0829cbb7 has its CatchHandler @ 0829d3ff */
                            cMyTrace::cMyTrace(local_10c,"static bool GlobalData::Init()",0x1e36,9,
                                               true,true);
                            cMyTrace::operator()
                                      (local_10c,
                                       "Can\'t allocate memory for a COnlinePreliminaryTeamMgr");
                            uVar27 = 0;
                          }
                          else {
                    /* try { // try from 0829cb34 to 0829cb38 has its CatchHandler @ 0829cb3b */
                            online_preliminary::COnlinePreliminaryTeamMgr::COnlinePreliminaryTeamMgr
                                      (this_51);
                            s_onlinePreliminaryTeamMgr = this_51;
                            this_52 = operator_new(0x40,(nothrow_t *)&std::nothrow);
                            if (this_52 == (CGameMasterMgr *)0x0) {
                              s_GameMasterMgr = this_52;
                    /* try { // try from 0829cc4c to 0829cdb5 has its CatchHandler @ 0829d3ff */
                              cMyTrace::cMyTrace(local_fc,"static bool GlobalData::Init()",0x1e47,9,
                                                 true,true);
                              cMyTrace::operator()
                                        (local_fc,"Can\'t allocate memory for a CGameMasterMgr");
                              uVar27 = 0;
                            }
                            else {
                    /* try { // try from 0829cbe3 to 0829cbe7 has its CatchHandler @ 0829cbea */
                              game_master::CGameMasterMgr::CGameMasterMgr(this_52);
                              s_GameMasterMgr = this_52;
                              lVar23 = CSystemTime::getCurSec((CSystemTime *)s_systemTime_);
                              TimerUpdatePvPGrade::registNextTimer(lVar23);
                              DB_ReloadAutoPunishRuleBackIP::makeRequest();
                              DB_ReloadAutoPunishRuleHackType::makeRequest();
                              DB_LoadCleanPadPoint::makeRequest();
                              DB_BlackIPMonitor::makeRequest();
                              this_53 = operator_new(4);
                              CBusinessImpl::CBusinessImpl(this_53);
                              s_antibotBusinessImpl_ = this_53;
                              s_antibotChecker_ = (undefined4 *)CreateAntiServerObj("./");
                              if (s_antibotChecker_ == (undefined4 *)0x0) {
                                cMyTrace::cMyTrace(local_ec,"static bool GlobalData::Init()",0x1eb0,
                                                   5);
                                cMyTrace::operator()(local_ec,"AntiBot create fail");
                                uVar27 = 0;
                              }
                              else {
                                local_360[0] = '\0';
                                local_360[1] = '\0';
                                local_360[2] = '\0';
                                local_360[3] = '\0';
                                pCVar7 = (CEnvironment *)G_CEnvironment();
                                uVar27 = CEnvironment::getProcessSequence(pCVar7);
                                sprintf(local_360,"%d",uVar27);
                                (**(code **)*s_antibotChecker_)
                                          (s_antibotChecker_,s_antibotBusinessImpl_,local_360);
                                pCVar22 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                if (pCVar22 != (CStatisticMgr *)0x0) {
                                  pCVar28 = pCVar22;
                                  for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
                                    *(undefined4 *)pCVar28 = 0;
                                    pCVar28 = pCVar28 + (uint)bVar29 * -8 + 4;
                                  }
                    /* try { // try from 0829ce01 to 0829ce05 has its CatchHandler @ 0829ce08 */
                                  CStatisticMgr::CStatisticMgr(pCVar22);
                                }
                                s_statisticMgr = pCVar22;
                                if (pCVar22 == (CStatisticMgr *)0x0) {
                    /* try { // try from 0829ce6a to 0829ce84 has its CatchHandler @ 0829d3ff */
                                  cMyTrace::cMyTrace(local_cc,"static bool GlobalData::Init()",
                                                     0x1ebf,9,true,true);
                                  cMyTrace::operator()
                                            (local_cc,"Can\'t allocate memory for a CStatisticMgr");
                                  uVar27 = 0;
                                }
                                else {
                                  this_54 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                                  if (this_54 == (Action *)0x0) {
                                    g_Actions = this_54;
                    /* try { // try from 0829cf19 to 0829cf5a has its CatchHandler @ 0829d3ff */
                                    cMyTrace::cMyTrace(local_bc,"static bool GlobalData::Init()",
                                                       0x1ed9,9,true,true);
                                    cMyTrace::operator()
                                              (local_bc,
                                               "Can\'t allocate memory for a StackableAction::Action()"
                                              );
                                    uVar27 = 0;
                                  }
                                  else {
                    /* try { // try from 0829ceb0 to 0829ceb4 has its CatchHandler @ 0829ceb7 */
                                    StackableAction::Action::Action(this_54);
                                    g_Actions = this_54;
                                    pSVar24 = (Stream *)
                                              StreamPool::Acquire(s_stream_pool,"App.cpp",0x1ee0);
                                    CStreamGuard::CStreamGuard(local_368,pSVar24,true);
                                    pCVar25 = (CStreamGuard *)CStreamGuard::operator*(local_368);
                    /* try { // try from 0829cf8e to 0829cfcf has its CatchHandler @ 0829cfd2 */
                                    CStreamGuard::operator<<(pCVar25,0x277);
                                    pCVar25 = (CStreamGuard *)CStreamGuard::operator*(local_368);
                                    CStreamGuard::operator<<(pCVar25,-1);
                                    MsgQueueMgr::put(s_msgq_mgr,2,local_368);
                    /* try { // try from 0829cff6 to 0829d068 has its CatchHandler @ 0829d3ff */
                                    CStreamGuard::~CStreamGuard(local_368);
                                    cVar3 = InitCaptcha();
                                    if (cVar3 == '\x01') {
                                      Timer_GenerateCaptchaData::RegistNextTimer(3);
                                      this_55 = operator_new(0xc,(nothrow_t *)&std::nothrow);
                                      if (this_55 == (CExtractionMgr *)0x0) {
                                        g_ExtractionMgr = this_55;
                    /* try { // try from 0829d0f3 to 0829d10d has its CatchHandler @ 0829d3ff */
                                        cMyTrace::cMyTrace(local_9c,"static bool GlobalData::Init()"
                                                           ,0x1ef5,9,true,true);
                                        cMyTrace::operator()
                                                  (local_9c,
                                                  "Can\'t allocate memory for a CExtractionMng");
                                        uVar27 = 0;
                                      }
                                      else {
                    /* try { // try from 0829d08a to 0829d08e has its CatchHandler @ 0829d091 */
                                        expert_extraction::CExtractionMgr::CExtractionMgr(this_55);
                                        g_ExtractionMgr = this_55;
                                        this_56 = operator_new(0x14,(nothrow_t *)&std::nothrow);
                                        if (this_56 == (NPC_Teleport *)0x0) {
                                          g_pTeleport = this_56;
                    /* try { // try from 0829d1a2 to 0829d1bc has its CatchHandler @ 0829d3ff */
                                          cMyTrace::cMyTrace(local_8c,
                                                  "static bool GlobalData::Init()",0x1f02,9,true,
                                                  true);
                                          cMyTrace::operator()
                                                    (local_8c,
                                                  "Can\'t allocate memory for a NPC_Teleport()");
                                          uVar27 = 0;
                                        }
                                        else {
                    /* try { // try from 0829d139 to 0829d13d has its CatchHandler @ 0829d140 */
                                          NPC_Teleport::NPC_Teleport(this_56);
                                          g_pTeleport = this_56;
                                          this_57 = operator_new(0x14,(nothrow_t *)&std::nothrow);
                                          if (this_57 == (User_Teleport *)0x0) {
                                            DAT_0941f81c = this_57;
                    /* try { // try from 0829d24e to 0829d265 has its CatchHandler @ 0829d3ff */
                                            cMyTrace::cMyTrace(local_7c,
                                                  "static bool GlobalData::Init()",0x1f09,9,true,
                                                  true);
                                            cMyTrace::operator()
                                                      (local_7c,
                                                  "Can\'t allocate memory for a User_Teleport()");
                                            uVar27 = 0;
                                          }
                                          else {
                    /* try { // try from 0829d1e8 to 0829d1ec has its CatchHandler @ 0829d1ef */
                                            User_Teleport::User_Teleport(this_57);
                                            DAT_0941f81c = this_57;
                                            this_58 = operator_new(0x18,(nothrow_t *)&std::nothrow);
                                            if (this_58 == (CRandomOptionItemHandle *)0x0) {
                                              g_randomOptionHandle = this_58;
                    /* try { // try from 0829d2f7 to 0829d3f0 has its CatchHandler @ 0829d3ff */
                                              cMyTrace::cMyTrace(local_6c,
                                                  "static bool GlobalData::Init()",0x1f12,9,true,
                                                  true);
                                              cMyTrace::operator()
                                                        (local_6c,
                                                  "Can\'t allocate memory for a CRandomOptionItemHandle"
                                                  );
                                              uVar27 = 0;
                                            }
                                            else {
                    /* try { // try from 0829d291 to 0829d295 has its CatchHandler @ 0829d298 */
                                              random_option::CRandomOptionItemHandle::
                                              CRandomOptionItemHandle(this_58);
                                              g_randomOptionHandle = this_58;
                                              pSVar26 = (ServiceRestrictManager *)
                                                        ARAD::Singleton<ServiceRestrictManager>::Get
                                                                  ();
                                              cVar3 = ServiceRestrictManager::initialize(pSVar26);
                                              if (cVar3 == '\x01') {
                                                pSVar26 = (ServiceRestrictManager *)
                                                          ARAD::Singleton<ServiceRestrictManager>::
                                                          Get();
                                                ServiceRestrictManager::savePolicy(pSVar26);
                                                ARAD::Singleton<ServiceRestrictManager>::Get();
                                                ServiceRestrictManager::loadPolicy();
                                                this_59 = (RestrictGeolocation *)
                                                          ARAD::Singleton<RestrictGeolocation>::Get
                                                                    ();
                                                cVar3 = RestrictGeolocation::initGeolocation
                                                                  (this_59);
                                                if (cVar3 == '\x01') {
                                                  uVar27 = 1;
                                                }
                                                else {
                                                  cMyTrace::cMyTrace(local_4c,
                                                  "static bool GlobalData::Init()",0x1f2a,9,true,
                                                  true);
                                                  cMyTrace::operator()
                                                            (local_4c,"Can\'t initialize GeoIP");
                                                  uVar27 = 0;
                                                }
                                              }
                                              else {
                                                cMyTrace::cMyTrace(local_5c,
                                                  "static bool GlobalData::Init()",0x1f1f,9,true,
                                                  true);
                                                cMyTrace::operator()
                                                          (local_5c,
                                                  "Can\'t allocate memory for a ServiceRestrictManager"
                                                  );
                                                uVar27 = 0;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      cMyTrace::cMyTrace(local_ac,"static bool GlobalData::Init()",
                                                         0x1eea,9,true,true);
                                      cMyTrace::operator()
                                                (local_ac,"captcha data initialization failed");
                                      uVar27 = 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0829d41d:
  std::
  map<ENUM_DB_HANDLE_IDX,ENUM_SERVER_GROUP,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,ENUM_SERVER_GROUP>>>
  ::~map(local_35c);
  return uVar27;
}
```
