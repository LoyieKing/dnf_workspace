# dispatch_sig

`_ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci`

`Inter_CreateCharac::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CreateCharac` | `0x084bee06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084bee06  _ZN18Inter_CreateCharac12dispatch_sigEP5CUserPci
#           Inter_CreateCharac::dispatch_sig(CUser*, char*, int)
# range [0x084bee06, 0x084bf4ab]
084bee06 +0x000:  push   %ebp
084bee07 +0x001:  mov    %esp,%ebp
084bee09 +0x003:  push   %edi
084bee0a +0x004:  push   %esi
084bee0b +0x005:  push   %ebx
084bee0c +0x006:  sub    $0x2ec,%esp
084bee12 +0x00c:  mov    0xc(%ebp),%eax
084bee15 +0x00f:  mov    %eax,(%esp)
084bee18 +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084bee1d +0x017:  test   %eax,%eax
084bee1f +0x019:  sete   %al
084bee22 +0x01c:  test   %al,%al
084bee24 +0x01e:  je     084bee30 <+0x2a>
084bee26 +0x020:  mov    $0x6c0,%ebx
084bee2b +0x025:  jmp    084bf49f <+0x699>
084bee30 +0x02a:  mov    0xc(%ebp),%eax
084bee33 +0x02d:  mov    %eax,(%esp)
084bee36 +0x030:  call   0864aab6 <_ZN5CUser18unlockCreateCharacEv>  ; CUser::unlockCreateCharac()
084bee3b +0x035:  xor    $0x1,%eax
084bee3e +0x038:  test   %al,%al
084bee40 +0x03a:  je     084bee4c <+0x46>
084bee42 +0x03c:  mov    $0x6c4,%ebx
084bee47 +0x041:  jmp    084bf49f <+0x699>
084bee4c +0x046:  mov    0x10(%ebp),%eax
084bee4f +0x049:  mov    %eax,-0x24(%ebp)
084bee52 +0x04c:  lea    -0x38(%ebp),%eax
084bee55 +0x04f:  mov    %eax,(%esp)
084bee58 +0x052:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084bee5d +0x057:  movl   $0x5,0x8(%esp)
084bee65 +0x05f:  movl   $0x1,0x4(%esp)
084bee6d +0x067:  lea    -0x38(%ebp),%eax
084bee70 +0x06a:  mov    %eax,(%esp)
084bee73 +0x06d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084bee78 +0x072:  mov    -0x24(%ebp),%eax
084bee7b +0x075:  mov    0x5344(%eax),%eax
084bee81 +0x07b:  test   %eax,%eax
084bee83 +0x07d:  je     084bef6a <+0x164>
084bee89 +0x083:  movl   $0x0,0x4(%esp)
084bee91 +0x08b:  lea    -0x38(%ebp),%eax
084bee94 +0x08e:  mov    %eax,(%esp)
084bee97 +0x091:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bee9c +0x096:  mov    -0x24(%ebp),%eax
084bee9f +0x099:  mov    0x5344(%eax),%eax
084beea5 +0x09f:  cmp    $0x1,%eax
084beea8 +0x0a2:  jne    084beebf <+0xb9>
084beeaa +0x0a4:  movl   $0x12,0x4(%esp)
084beeb2 +0x0ac:  lea    -0x38(%ebp),%eax
084beeb5 +0x0af:  mov    %eax,(%esp)
084beeb8 +0x0b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084beebd +0x0b7:  jmp    084bef3b <+0x135>
084beebf +0x0b9:  mov    -0x24(%ebp),%eax
084beec2 +0x0bc:  mov    0x5344(%eax),%eax
084beec8 +0x0c2:  cmp    $0x4,%eax
084beecb +0x0c5:  jne    084beee2 <+0xdc>
084beecd +0x0c7:  movl   $0x14,0x4(%esp)
084beed5 +0x0cf:  lea    -0x38(%ebp),%eax
084beed8 +0x0d2:  mov    %eax,(%esp)
084beedb +0x0d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084beee0 +0x0da:  jmp    084bef3b <+0x135>
084beee2 +0x0dc:  mov    -0x24(%ebp),%eax
084beee5 +0x0df:  mov    0x5344(%eax),%eax
084beeeb +0x0e5:  cmp    $0x5,%eax
084beeee +0x0e8:  jne    084bef05 <+0xff>
084beef0 +0x0ea:  movl   $0x5f,0x4(%esp)
084beef8 +0x0f2:  lea    -0x38(%ebp),%eax
084beefb +0x0f5:  mov    %eax,(%esp)
084beefe +0x0f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bef03 +0x0fd:  jmp    084bef3b <+0x135>
084bef05 +0x0ff:  mov    -0x24(%ebp),%eax
084bef08 +0x102:  mov    0x5344(%eax),%eax
084bef0e +0x108:  cmp    $0x3,%eax
084bef11 +0x10b:  jne    084bef28 <+0x122>
084bef13 +0x10d:  movl   $0x18,0x4(%esp)
084bef1b +0x115:  lea    -0x38(%ebp),%eax
084bef1e +0x118:  mov    %eax,(%esp)
084bef21 +0x11b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bef26 +0x120:  jmp    084bef3b <+0x135>
084bef28 +0x122:  movl   $0x2,0x4(%esp)
084bef30 +0x12a:  lea    -0x38(%ebp),%eax
084bef33 +0x12d:  mov    %eax,(%esp)
084bef36 +0x130:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bef3b +0x135:  movl   $0x1,0x4(%esp)
084bef43 +0x13d:  lea    -0x38(%ebp),%eax
084bef46 +0x140:  mov    %eax,(%esp)
084bef49 +0x143:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bef4e +0x148:  lea    -0x38(%ebp),%eax
084bef51 +0x14b:  mov    %eax,0x4(%esp)
084bef55 +0x14f:  mov    0xc(%ebp),%eax
084bef58 +0x152:  mov    %eax,(%esp)
084bef5b +0x155:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bef60 +0x15a:  mov    $0x0,%ebx
084bef65 +0x15f:  jmp    084bf494 <+0x68e>
084bef6a +0x164:  mov    -0x24(%ebp),%eax
084bef6d +0x167:  movzbl 0x23(%eax),%eax
084bef71 +0x16b:  test   %al,%al
084bef73 +0x16d:  jle    084bf12a <+0x324>
084bef79 +0x173:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084bef80 +0x17a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084bef85 +0x17f:  mov    %eax,-0x3c(%ebp)
084bef88 +0x182:  lea    -0x7c(%ebp),%eax
084bef8b +0x185:  mov    %eax,0x4(%esp)
084bef8f +0x189:  lea    -0x3c(%ebp),%eax
084bef92 +0x18c:  mov    %eax,(%esp)
084bef95 +0x18f:  call   0807e360 <_init+0xc58>
084bef9a +0x194:  mov    %eax,-0x1c(%ebp)
084bef9d +0x197:  mov    -0x1c(%ebp),%eax
084befa0 +0x19a:  mov    (%eax),%ecx
084befa2 +0x19c:  mov    -0x1c(%ebp),%eax
084befa5 +0x19f:  mov    0x4(%eax),%edx
084befa8 +0x1a2:  mov    -0x1c(%ebp),%eax
084befab +0x1a5:  mov    0x8(%eax),%eax
084befae +0x1a8:  mov    %ecx,0x10(%esp)
084befb2 +0x1ac:  mov    %edx,0xc(%esp)
084befb6 +0x1b0:  mov    %eax,0x8(%esp)
084befba +0x1b4:  movl   $"%02d:%02d:%02d",0x4(%esp)
084befc2 +0x1bc:  lea    -0x2b8(%ebp),%eax
084befc8 +0x1c2:  mov    %eax,(%esp)
084befcb +0x1c5:  call   0807e440 <_init+0xd38>
084befd0 +0x1ca:  movl   $0x0,-0x4c(%ebp)
084befd7 +0x1d1:  movl   $0x0,-0x48(%ebp)
084befde +0x1d8:  movl   $0x0,-0x44(%ebp)
084befe5 +0x1df:  movl   $0x0,-0x40(%ebp)
084befec +0x1e6:  mov    0xc(%ebp),%eax
084befef +0x1e9:  mov    %eax,(%esp)
084beff2 +0x1ec:  call   084ec90a <_GLOBAL__I__Z7getUserj+0x38bc>  ; global constructors keyed to getUser(unsigned int)+0x38bc
084beff7 +0x1f1:  mov    %eax,-0x50(%ebp)
084beffa +0x1f4:  mov    -0x50(%ebp),%eax
084beffd +0x1f7:  mov    %eax,(%esp)
084bf000 +0x1fa:  call   0807ddc0 <_init+0x6b8>
084bf005 +0x1ff:  mov    %eax,0x4(%esp)
084bf009 +0x203:  lea    -0x4c(%ebp),%eax
084bf00c +0x206:  mov    %eax,(%esp)
084bf00f +0x209:  call   0807def0 <_init+0x7e8>
084bf014 +0x20e:  lea    -0x1b8(%ebp),%edx
084bf01a +0x214:  mov    $0x0,%eax
084bf01f +0x219:  mov    $0x3f,%ecx
084bf024 +0x21e:  mov    %edx,%edi
084bf026 +0x220:  rep stos %eax,%es:(%edi)
084bf028 +0x222:  mov    %edi,%edx
084bf02a +0x224:  mov    %ax,(%edx)
084bf02d +0x227:  add    $0x2,%edx
084bf030 +0x22a:  mov    %al,(%edx)
084bf032 +0x22c:  add    $0x1,%edx
084bf035 +0x22f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084bf03a +0x234:  mov    %eax,(%esp)
084bf03d +0x237:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
084bf042 +0x23c:  mov    %eax,0x8(%esp)
084bf046 +0x240:  movl   $"./log/%s/JumpingCharacter",0x4(%esp)
084bf04e +0x248:  lea    -0x1b8(%ebp),%eax
084bf054 +0x24e:  mov    %eax,(%esp)
084bf057 +0x251:  call   0807e440 <_init+0xd38>
084bf05c +0x256:  mov    -0x24(%ebp),%eax
084bf05f +0x259:  mov    0x5348(%eax),%eax
084bf065 +0x25f:  mov    %eax,-0x2c0(%ebp)
084bf06b +0x265:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084bf070 +0x26a:  mov    %eax,(%esp)
084bf073 +0x26d:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
084bf078 +0x272:  mov    %eax,%edi
084bf07a +0x274:  mov    0xc(%ebp),%eax
084bf07d +0x277:  mov    %eax,(%esp)
084bf080 +0x27a:  call   084ec9b8 <_GLOBAL__I__Z7getUserj+0x396a>  ; global constructors keyed to getUser(unsigned int)+0x396a
084bf085 +0x27f:  test   %al,%al
084bf087 +0x281:  je     084bf090 <+0x28a>
084bf089 +0x283:  mov    $0x1,%ebx
084bf08e +0x288:  jmp    084bf095 <+0x28f>
084bf090 +0x28a:  mov    $0x0,%ebx
084bf095 +0x28f:  mov    0xc(%ebp),%eax
084bf098 +0x292:  mov    %eax,(%esp)
084bf09b +0x295:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084bf0a0 +0x29a:  movl   $0x0,0x4(%esp)
084bf0a8 +0x2a2:  mov    %eax,(%esp)
084bf0ab +0x2a5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084bf0b0 +0x2aa:  mov    %eax,%esi
084bf0b2 +0x2ac:  movl   $0x703,0x8(%esp)
084bf0ba +0x2b4:  movl   $&_ZZN18Inter_CreateCharac12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084bf0c2 +0x2bc:  lea    -0x2c(%ebp),%eax
084bf0c5 +0x2bf:  mov    %eax,(%esp)
084bf0c8 +0x2c2:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
084bf0cd +0x2c7:  lea    -0x2b8(%ebp),%eax
084bf0d3 +0x2cd:  mov    %eax,0x20(%esp)
084bf0d7 +0x2d1:  lea    -0x4c(%ebp),%eax
084bf0da +0x2d4:  mov    %eax,0x1c(%esp)
084bf0de +0x2d8:  mov    -0x2c0(%ebp),%eax
084bf0e4 +0x2de:  mov    %eax,0x18(%esp)
084bf0e8 +0x2e2:  mov    %edi,0x14(%esp)
084bf0ec +0x2e6:  mov    %ebx,0x10(%esp)
084bf0f0 +0x2ea:  mov    %esi,0xc(%esp)
084bf0f4 +0x2ee:  movl   $",%s,%d,%d,%d,%s,%s",0x8(%esp)
084bf0fc +0x2f6:  lea    -0x1b8(%ebp),%eax
084bf102 +0x2fc:  mov    %eax,0x4(%esp)
084bf106 +0x300:  lea    -0x2c(%ebp),%eax
084bf109 +0x303:  mov    %eax,(%esp)
084bf10c +0x306:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
084bf111 +0x30b:  mov    -0x24(%ebp),%eax
084bf114 +0x30e:  movzbl 0x24(%eax),%eax
084bf118 +0x312:  movzbl %al,%edx
084bf11b +0x315:  mov    0xc(%ebp),%eax
084bf11e +0x318:  mov    %edx,0x4(%esp)
084bf122 +0x31c:  mov    %eax,(%esp)
084bf125 +0x31f:  call   084ebfe6 <_GLOBAL__I__Z7getUserj+0x2f98>  ; global constructors keyed to getUser(unsigned int)+0x2f98
084bf12a +0x324:  mov    -0x24(%ebp),%eax
084bf12d +0x327:  mov    %eax,0x4(%esp)
084bf131 +0x32b:  mov    0xc(%ebp),%eax
084bf134 +0x32e:  mov    %eax,(%esp)
084bf137 +0x331:  call   0864a186 <_ZN5CUser12CreateCharacEP17SIG_CREATE_CHARAC>  ; CUser::CreateCharac(SIG_CREATE_CHARAC*)
084bf13c +0x336:  mov    -0x24(%ebp),%eax
084bf13f +0x339:  movzbl 0x22(%eax),%eax
084bf143 +0x33d:  movsbl %al,%edx
084bf146 +0x340:  mov    -0x24(%ebp),%eax
084bf149 +0x343:  lea    0x4(%eax),%ecx
084bf14c +0x346:  mov    0xc(%ebp),%eax
084bf14f +0x349:  mov    0x796f8(%eax),%eax
084bf155 +0x34f:  mov    %edx,0x8(%esp)
084bf159 +0x353:  mov    %ecx,0x4(%esp)
084bf15d +0x357:  mov    %eax,(%esp)
084bf160 +0x35a:  call   084b9d70 <_ZN10HistoryLog13WriteCreateChEP8_IO_FILEPci>  ; HistoryLog::WriteCreateCh(_IO_FILE*, char*, int)
084bf165 +0x35f:  movl   $0x1,0x4(%esp)
084bf16d +0x367:  lea    -0x38(%ebp),%eax
084bf170 +0x36a:  mov    %eax,(%esp)
084bf173 +0x36d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf178 +0x372:  movl   $0x1,0x4(%esp)
084bf180 +0x37a:  lea    -0x38(%ebp),%eax
084bf183 +0x37d:  mov    %eax,(%esp)
084bf186 +0x380:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bf18b +0x385:  lea    -0x38(%ebp),%eax
084bf18e +0x388:  mov    %eax,0x4(%esp)
084bf192 +0x38c:  mov    0xc(%ebp),%eax
084bf195 +0x38f:  mov    %eax,(%esp)
084bf198 +0x392:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bf19d +0x397:  lea    -0x38(%ebp),%eax
084bf1a0 +0x39a:  mov    %eax,(%esp)
084bf1a3 +0x39d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084bf1a8 +0x3a2:  movl   $0x2,0x8(%esp)
084bf1b0 +0x3aa:  movl   $0x0,0x4(%esp)
084bf1b8 +0x3b2:  lea    -0x38(%ebp),%eax
084bf1bb +0x3b5:  mov    %eax,(%esp)
084bf1be +0x3b8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084bf1c3 +0x3bd:  movl   $0x2,0x4(%esp)
084bf1cb +0x3c5:  lea    -0x38(%ebp),%eax
084bf1ce +0x3c8:  mov    %eax,(%esp)
084bf1d1 +0x3cb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084bf1d6 +0x3d0:  lea    -0x38(%ebp),%eax
084bf1d9 +0x3d3:  movl   $0x2,0x8(%esp)
084bf1e1 +0x3db:  mov    %eax,0x4(%esp)
084bf1e5 +0x3df:  mov    0xc(%ebp),%eax
084bf1e8 +0x3e2:  mov    %eax,(%esp)
084bf1eb +0x3e5:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084bf1f0 +0x3ea:  movl   $0x1,0x4(%esp)
084bf1f8 +0x3f2:  lea    -0x38(%ebp),%eax
084bf1fb +0x3f5:  mov    %eax,(%esp)
084bf1fe +0x3f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084bf203 +0x3fd:  lea    -0x38(%ebp),%eax
084bf206 +0x400:  mov    %eax,0x4(%esp)
084bf20a +0x404:  mov    0xc(%ebp),%eax
084bf20d +0x407:  mov    %eax,(%esp)
084bf210 +0x40a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084bf215 +0x40f:  mov    0xc(%ebp),%eax
084bf218 +0x412:  mov    %eax,(%esp)
084bf21b +0x415:  call   08651740 <_ZN5CUser16UpdateCharacViewEv>  ; CUser::UpdateCharacView()
084bf220 +0x41a:  mov    -0x24(%ebp),%eax
084bf223 +0x41d:  mov    %eax,0x8(%esp)
084bf227 +0x421:  mov    0xc(%ebp),%eax
084bf22a +0x424:  mov    %eax,0x4(%esp)
084bf22e +0x428:  mov    0x8(%ebp),%eax
084bf231 +0x42b:  mov    %eax,(%esp)
084bf234 +0x42e:  call   084bf4ac <_ZN18Inter_CreateCharac13process_eventEP5CUserP17SIG_CREATE_CHARAC>  ; Inter_CreateCharac::process_event(CUser*, SIG_CREATE_CHARAC*)
084bf239 +0x433:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084bf23e +0x438:  mov    0x378(%eax),%eax
084bf244 +0x43e:  cmp    $0xa,%eax
084bf247 +0x441:  jne    084bf263 <+0x45d>
084bf249 +0x443:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084bf250 +0x44a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084bf255 +0x44f:  cmp    $0x478e7050,%eax
084bf25a +0x454:  ja     084bf263 <+0x45d>
084bf25c +0x456:  mov    $0x1,%eax
084bf261 +0x45b:  jmp    084bf268 <+0x462>
084bf263 +0x45d:  mov    $0x0,%eax
084bf268 +0x462:  test   %al,%al
084bf26a +0x464:  je     084bf41f <+0x619>
084bf270 +0x46a:  mov    -0x24(%ebp),%eax
084bf273 +0x46d:  movzbl 0x534d(%eax),%eax
084bf27a +0x474:  test   %al,%al
084bf27c +0x476:  je     084bf41f <+0x619>
084bf282 +0x47c:  lea    -0xb9(%ebp),%eax
084bf288 +0x482:  mov    %eax,(%esp)
084bf28b +0x485:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084bf290 +0x48a:  mov    -0x24(%ebp),%eax
084bf293 +0x48d:  movzbl 0x22(%eax),%eax
084bf297 +0x491:  movsbl %al,%eax
084bf29a +0x494:  cmp    $0x4,%eax
084bf29d +0x497:  ja     084bf2e2 <+0x4dc>
084bf29f +0x499:  mov    &data#aebfdd15(.rodata)(,%eax,4),%eax
084bf2a6 +0x4a0:  jmp    *%eax
084bf2a8 +0x4a2:  movl   $0x1c70,-0xb7(%ebp)
084bf2b2 +0x4ac:  jmp    084bf2e2 <+0x4dc>
084bf2b4 +0x4ae:  movl   $0x1c71,-0xb7(%ebp)
084bf2be +0x4b8:  jmp    084bf2e2 <+0x4dc>
084bf2c0 +0x4ba:  movl   $0x1c72,-0xb7(%ebp)
084bf2ca +0x4c4:  jmp    084bf2e2 <+0x4dc>
084bf2cc +0x4c6:  movl   $0x1c73,-0xb7(%ebp)
084bf2d6 +0x4d0:  jmp    084bf2e2 <+0x4dc>
084bf2d8 +0x4d2:  movl   $0x1c74,-0xb7(%ebp)
084bf2e2 +0x4dc:  movb   $0x2,-0xb8(%ebp)
084bf2e9 +0x4e3:  movl   $0x1,-0xb2(%ebp)
084bf2f3 +0x4ed:  movw   $0x0,-0xae(%ebp)
084bf2fc +0x4f6:  lea    -0xb9(%ebp),%eax
084bf302 +0x4fc:  mov    %eax,(%esp)
084bf305 +0x4ff:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
084bf30a +0x504:  mov    -0xb7(%ebp),%eax
084bf310 +0x50a:  test   %eax,%eax
084bf312 +0x50c:  je     084bf338 <+0x532>
084bf314 +0x50e:  mov    -0xb7(%ebp),%eax
084bf31a +0x514:  mov    %eax,%ebx
084bf31c +0x516:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084bf321 +0x51b:  mov    %ebx,0x4(%esp)
084bf325 +0x51f:  mov    %eax,(%esp)
084bf328 +0x522:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084bf32d +0x527:  test   %eax,%eax
084bf32f +0x529:  je     084bf338 <+0x532>
084bf331 +0x52b:  mov    $0x1,%eax
084bf336 +0x530:  jmp    084bf33d <+0x537>
084bf338 +0x532:  mov    $0x0,%eax
084bf33d +0x537:  test   %al,%al
084bf33f +0x539:  je     084bf41f <+0x619>
084bf345 +0x53f:  mov    0xc(%ebp),%eax
084bf348 +0x542:  mov    %eax,(%esp)
084bf34b +0x545:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084bf350 +0x54a:  mov    %eax,%esi
084bf352 +0x54c:  movl   $0x0,0xc(%esp)
084bf35a +0x554:  movl   $"game_server_msg_10",0x8(%esp)
084bf362 +0x55c:  movl   $0x4,0x4(%esp)
084bf36a +0x564:  movl   $&g_scriptStringManager_,(%esp)
084bf371 +0x56b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084bf376 +0x570:  mov    %eax,(%esp)
084bf379 +0x573:  call   0807e3b0 <_init+0xca8>
084bf37e +0x578:  mov    %eax,-0x2bc(%ebp)
084bf384 +0x57e:  movl   $0x0,0xc(%esp)
084bf38c +0x586:  movl   $"game_server_msg_10",0x8(%esp)
084bf394 +0x58e:  movl   $0x4,0x4(%esp)
084bf39c +0x596:  movl   $&g_scriptStringManager_,(%esp)
084bf3a3 +0x59d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084bf3a8 +0x5a2:  mov    %eax,%ebx
084bf3aa +0x5a4:  mov    -0x24(%ebp),%eax
084bf3ad +0x5a7:  mov    0x5348(%eax),%edi
084bf3b3 +0x5ad:  movl   $0x0,0xc(%esp)
084bf3bb +0x5b5:  movl   $"game_server_msg_09",0x8(%esp)
084bf3c3 +0x5bd:  movl   $0x4,0x4(%esp)
084bf3cb +0x5c5:  movl   $&g_scriptStringManager_,(%esp)
084bf3d2 +0x5cc:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084bf3d7 +0x5d1:  movl   $0x0,0x24(%esp)
084bf3df +0x5d9:  movl   $0x0,0x20(%esp)
084bf3e7 +0x5e1:  mov    %esi,0x1c(%esp)
084bf3eb +0x5e5:  movl   $0x0,0x18(%esp)
084bf3f3 +0x5ed:  mov    -0x2bc(%ebp),%edx
084bf3f9 +0x5f3:  mov    %edx,0x14(%esp)
084bf3fd +0x5f7:  mov    %ebx,0x10(%esp)
084bf401 +0x5fb:  mov    %edi,0xc(%esp)
084bf405 +0x5ff:  movl   $0x0,0x8(%esp)
084bf40d +0x607:  lea    -0xb9(%ebp),%edx
084bf413 +0x60d:  mov    %edx,0x4(%esp)
084bf417 +0x611:  mov    %eax,(%esp)
084bf41a +0x614:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084bf41f +0x619:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084bf424 +0x61e:  movl   $0x74,0x4(%esp)
084bf42c +0x626:  mov    %eax,(%esp)
084bf42f +0x629:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084bf434 +0x62e:  mov    %eax,-0x20(%ebp)
084bf437 +0x631:  cmpl   $0x0,-0x20(%ebp)
084bf43b +0x635:  je     084bf472 <+0x66c>
084bf43d +0x637:  mov    -0x24(%ebp),%eax
084bf440 +0x63a:  movzbl 0x22(%eax),%eax
084bf444 +0x63e:  movsbl %al,%edx
084bf447 +0x641:  mov    -0x24(%ebp),%eax
084bf44a +0x644:  mov    0x5348(%eax),%eax
084bf450 +0x64a:  mov    %edx,0x10(%esp)
084bf454 +0x64e:  movl   $0x1,0xc(%esp)
084bf45c +0x656:  mov    %eax,0x8(%esp)
084bf460 +0x65a:  mov    0xc(%ebp),%eax
084bf463 +0x65d:  mov    %eax,0x4(%esp)
084bf467 +0x661:  mov    -0x20(%ebp),%eax
084bf46a +0x664:  mov    %eax,(%esp)
084bf46d +0x667:  call   081a107c <_ZN17CAradRyosikaEvent7DoEventEP5CUseriii>  ; CAradRyosikaEvent::DoEvent(CUser*, int, int, int)
084bf472 +0x66c:  mov    $0x0,%ebx
084bf477 +0x671:  jmp    084bf494 <+0x68e>
084bf479 +0x673:  mov    %edx,%ebx
084bf47b +0x675:  mov    %eax,%esi
084bf47d +0x677:  lea    -0x38(%ebp),%eax
084bf480 +0x67a:  mov    %eax,(%esp)
084bf483 +0x67d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084bf488 +0x682:  mov    %esi,%eax
084bf48a +0x684:  mov    %ebx,%edx
084bf48c +0x686:  mov    %eax,(%esp)
084bf48f +0x689:  call   08ae3750 <_Unwind_Resume>
084bf494 +0x68e:  lea    -0x38(%ebp),%eax
084bf497 +0x691:  mov    %eax,(%esp)
084bf49a +0x694:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084bf49f +0x699:  mov    %ebx,%eax
084bf4a1 +0x69b:  add    $0x2ec,%esp
084bf4a7 +0x6a1:  pop    %ebx
084bf4a8 +0x6a2:  pop    %esi
084bf4a9 +0x6a3:  pop    %edi
084bf4aa +0x6a4:  pop    %ebp
084bf4ab +0x6a5:  ret
```

## 反编译 C

```c
// Inter_CreateCharac::dispatch_sig @ 0x84bee06

/* Inter_CreateCharac::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CreateCharac::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  CEnvironment *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  CDataManager *this;
  size_t sVar10;
  undefined4 uVar11;
  byte bVar12;
  char local_2bc [256];
  char local_1bc [255];
  Inven_Item local_bd;
  undefined1 local_bc;
  int local_bb;
  undefined4 local_b6;
  undefined2 local_b2;
  tm local_80;
  in_addr_t local_54;
  char local_50 [16];
  time_t local_40;
  PacketGuard local_3c [12];
  CMyFileLog local_30 [8];
  SIG_CREATE_CHARAC *local_28;
  CAradRyosikaEvent *local_24;
  tm *local_20;
  
  bVar12 = 0;
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 0) {
    return 0x6c0;
  }
  cVar2 = CUser::unlockCreateCharac((CUser *)param_2);
  if (cVar2 != '\x01') {
    return 0x6c4;
  }
  local_28 = (SIG_CREATE_CHARAC *)param_3;
  PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 084bee73 to 084bf471 has its CatchHandler @ 084bf479 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,1,5);
  if (*(int *)(local_28 + 0x5344) != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0);
    if (*(int *)(local_28 + 0x5344) == 1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x12);
    }
    else if (*(int *)(local_28 + 0x5344) == 4) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x14);
    }
    else if (*(int *)(local_28 + 0x5344) == 5) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x5f);
    }
    else if (*(int *)(local_28 + 0x5344) == 3) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,0x18);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,2);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
    CUser::Send((CUser *)param_2,local_3c);
    goto LAB_084bf494;
  }
  if ('\0' < (char)local_28[0x23]) {
    local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_20 = localtime_r(&local_40,&local_80);
    sprintf(local_2bc,"%02d:%02d:%02d",local_20->tm_hour,local_20->tm_min,local_20->tm_sec);
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_54 = CUser::get_public_ip_address((CUser *)param_2);
    pcVar4 = inet_ntoa((in_addr)local_54);
    strcpy(local_50,pcVar4);
    pcVar4 = local_1bc;
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
    }
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pCVar5 = (CEnvironment *)G_CEnvironment();
    uVar6 = CEnvironment::get_file_name(pCVar5);
    sprintf(local_1bc,"./log/%s/JumpingCharacter",uVar6);
    uVar6 = *(undefined4 *)(local_28 + 0x5348);
    pCVar5 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_server_group(pCVar5);
    cVar2 = CUser::isHangameUser((CUser *)param_2);
    uVar8 = CUser::get_acc_id((CUser *)param_2);
    uVar9 = NumberToString(uVar8,0);
    CMyFileLog::CMyFileLog
              (local_30,"virtual int Inter_CreateCharac::dispatch_sig(CUser*, char*, int)",0x703);
    CMyFileLog::operator()
              (local_30,local_1bc,",%s,%d,%d,%d,%s,%s",uVar9,(uint)(cVar2 != '\0'),uVar7,uVar6,
               local_50,local_2bc);
    CUserCharacInfo::setUserEventCharacterFlag((CUserCharacInfo *)param_2,(uchar)local_28[0x24]);
  }
  CUser::CreateCharac((CUser *)param_2,local_28);
  HistoryLog::WriteCreateCh
            (*(_IO_FILE **)(param_2 + 0x796f8),(char *)(local_28 + 4),(int)(char)local_28[0x22]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  CUser::Send((CUser *)param_2,local_3c);
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_3c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,2);
  CUser::make_basic_info((CUser *)param_2,(char *)local_3c,'\x02');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
  CUser::Send((CUser *)param_2,local_3c);
  CUser::UpdateCharacView((CUser *)param_2);
  process_event((Inter_CreateCharac *)param_1,(CUser *)param_2,local_28);
  iVar3 = G_CEnvironment();
  if ((*(int *)(iVar3 + 0x378) == 10) &&
     (uVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), uVar8 < 0x478e7051))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_28[0x534d] != (SIG_CREATE_CHARAC)0x0)) {
    Inven_Item::Inven_Item(&local_bd);
    switch(local_28[0x22]) {
    case (SIG_CREATE_CHARAC)0x0:
      local_bb = 0x1c70;
      break;
    case (SIG_CREATE_CHARAC)0x1:
      local_bb = 0x1c71;
      break;
    case (SIG_CREATE_CHARAC)0x2:
      local_bb = 0x1c72;
      break;
    case (SIG_CREATE_CHARAC)0x3:
      local_bb = 0x1c73;
      break;
    case (SIG_CREATE_CHARAC)0x4:
      local_bb = 0x1c74;
    }
    local_bc = 2;
    local_b6 = 1;
    local_b2 = 0;
    Inven_Item::ResetItemAttr(&local_bd);
    iVar3 = local_bb;
    if (local_bb == 0) {
LAB_084bf338:
      bVar1 = false;
    }
    else {
      this = (CDataManager *)G_CDataManager();
      iVar3 = CDataManager::find_item(this,iVar3);
      if (iVar3 == 0) goto LAB_084bf338;
      bVar1 = true;
    }
    if (bVar1) {
      uVar7 = CUser::GetServerGroup((CUser *)param_2);
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_10",(bool *)0x0);
      sVar10 = strlen(pcVar4);
      uVar9 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_10",
                         (bool *)0x0);
      uVar6 = *(undefined4 *)(local_28 + 0x5348);
      uVar11 = RDARScriptStringManager::findString
                         ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_09",
                          (bool *)0x0);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (uVar11,&local_bd,0,uVar6,uVar9,sVar10,0,uVar7,0,0);
    }
  }
  local_24 = (CAradRyosikaEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x74);
  if (local_24 != (CAradRyosikaEvent *)0x0) {
    CAradRyosikaEvent::DoEvent
              (local_24,(CUser *)param_2,*(int *)(local_28 + 0x5348),1,(int)(char)local_28[0x22]);
  }
LAB_084bf494:
  PacketGuard::~PacketGuard(local_3c);
  return 0;
}
```
