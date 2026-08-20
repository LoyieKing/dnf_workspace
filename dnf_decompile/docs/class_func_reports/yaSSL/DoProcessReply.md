# DoProcessReply

`_ZN5yaSSL14DoProcessReplyERNS_3SSLE`

`yaSSL::DoProcessReply(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879de30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879de30  _ZN5yaSSL14DoProcessReplyERNS_3SSLE
#           yaSSL::DoProcessReply(yaSSL::SSL&)
# range [0x0879de30, 0x0879e389]
0879de30 +0x000:  push   %ebp
0879de31 +0x001:  mov    %esp,%ebp
0879de33 +0x003:  push   %edi
0879de34 +0x004:  push   %esi
0879de35 +0x005:  push   %ebx
0879de36 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879de3b +0x00b:  add    $0xbced5d,%ebx
0879de41 +0x011:  sub    $0x8c,%esp
0879de47 +0x017:  mov    0x8(%ebp),%edi
0879de4a +0x01a:  mov    %edi,(%esp)
0879de4d +0x01d:  call   0874e2f0 <_ZN5yaSSL3SSL9useSocketEv>  ; yaSSL::SSL::useSocket()
0879de52 +0x022:  mov    %eax,(%esp)
0879de55 +0x025:  call   087a1610 <_ZN5yaSSL6Socket4waitEv>  ; yaSSL::Socket::wait()
0879de5a +0x02a:  test   %al,%al
0879de5c +0x02c:  je     0879e080 <+0x250>
0879de62 +0x032:  mov    %edi,(%esp)
0879de65 +0x035:  call   0874e0a0 <_ZNK5yaSSL3SSL9getSocketEv>  ; yaSSL::SSL::getSocket() const
0879de6a +0x03a:  mov    %eax,(%esp)
0879de6d +0x03d:  call   087a16c0 <_ZNK5yaSSL6Socket9get_readyEv>  ; yaSSL::Socket::get_ready() const
0879de72 +0x042:  mov    %eax,%esi
0879de74 +0x044:  mov    $0x1,%eax
0879de79 +0x049:  test   %esi,%esi
0879de7b +0x04b:  jne    0879de88 <+0x58>
0879de7d +0x04d:  add    $0x8c,%esp
0879de83 +0x053:  pop    %ebx
0879de84 +0x054:  pop    %esi
0879de85 +0x055:  pop    %edi
0879de86 +0x056:  pop    %ebp
0879de87 +0x057:  ret
0879de88 +0x058:  mov    %edi,(%esp)
0879de8b +0x05b:  call   0874e020 <_ZN5yaSSL3SSL10useBuffersEv>  ; yaSSL::SSL::useBuffers()
0879de90 +0x060:  mov    %eax,(%esp)
0879de93 +0x063:  call   0874e900 <_ZN5yaSSL7Buffers12TakeRawInputEv>  ; yaSSL::Buffers::TakeRawInput()
0879de98 +0x068:  test   %eax,%eax
0879de9a +0x06a:  je     0879e09d <+0x26d>
0879dea0 +0x070:  mov    %eax,(%esp)
0879dea3 +0x073:  mov    %eax,-0x70(%ebp)
0879dea6 +0x076:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
0879deab +0x07b:  mov    %eax,-0x50(%ebp)
0879deae +0x07e:  add    %esi,%eax
0879deb0 +0x080:  mov    %eax,0x4(%esp)
0879deb4 +0x084:  lea    -0x30(%ebp),%eax
0879deb7 +0x087:  mov    %eax,-0x4c(%ebp)
0879deba +0x08a:  mov    %eax,(%esp)
0879debd +0x08d:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0879dec2 +0x092:  mov    -0x50(%ebp),%ecx
0879dec5 +0x095:  mov    -0x70(%ebp),%edx
0879dec8 +0x098:  test   %ecx,%ecx
0879deca +0x09a:  je     0879df05 <+0xd5>
0879decc +0x09c:  mov    %edx,(%esp)
0879decf +0x09f:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879ded4 +0x0a4:  mov    -0x50(%ebp),%ecx
0879ded7 +0x0a7:  mov    %ecx,0x8(%esp)
0879dedb +0x0ab:  mov    %eax,0x4(%esp)
0879dedf +0x0af:  mov    -0x4c(%ebp),%eax
0879dee2 +0x0b2:  mov    %eax,(%esp)
0879dee5 +0x0b5:  call   087970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>  ; yaSSL::input_buffer::assign(unsigned char const*, unsigned int)
0879deea +0x0ba:  mov    -0x70(%ebp),%edx
0879deed +0x0bd:  mov    %edx,(%esp)
0879def0 +0x0c0:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879def5 +0x0c5:  mov    -0x70(%ebp),%edx
0879def8 +0x0c8:  movb   $0x0,0x4(%esp)
0879defd +0x0cd:  mov    %edx,(%esp)
0879df00 +0x0d0:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879df05 +0x0d5:  mov    -0x4c(%ebp),%edx
0879df08 +0x0d8:  mov    %edx,(%esp)
0879df0b +0x0db:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879df10 +0x0e0:  mov    %edi,(%esp)
0879df13 +0x0e3:  mov    %eax,-0x54(%ebp)
0879df16 +0x0e6:  call   0874e2f0 <_ZN5yaSSL3SSL9useSocketEv>  ; yaSSL::SSL::useSocket()
0879df1b +0x0eb:  mov    -0x54(%ebp),%edx
0879df1e +0x0ee:  add    -0x50(%ebp),%edx
0879df21 +0x0f1:  movl   $0x0,0xc(%esp)
0879df29 +0x0f9:  mov    %esi,0x8(%esp)
0879df2d +0x0fd:  mov    %edx,0x4(%esp)
0879df31 +0x101:  mov    %eax,(%esp)
0879df34 +0x104:  call   087a1590 <_ZN5yaSSL6Socket7receiveEPhji>  ; yaSSL::Socket::receive(unsigned char*, unsigned int, int)
0879df39 +0x109:  cmp    $0xffffffff,%eax
0879df3c +0x10c:  je     0879e1bb <+0x38b>
0879df42 +0x112:  mov    -0x4c(%ebp),%ecx
0879df45 +0x115:  mov    %eax,0x4(%esp)
0879df49 +0x119:  mov    %ecx,(%esp)
0879df4c +0x11c:  call   08796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>  ; yaSSL::input_buffer::add_size(unsigned int)
0879df51 +0x121:  mov    %edi,(%esp)
0879df54 +0x124:  call   08751180 <_ZNK5yaSSL3SSL10getFactoryEv>  ; yaSSL::SSL::getFactory() const
0879df59 +0x129:  mov    %eax,(%esp)
0879df5c +0x12c:  call   0874df80 <_ZNK5yaSSL10sslFactory10getMessageEv>  ; yaSSL::sslFactory::getMessage() const
0879df61 +0x131:  mov    %edi,(%esp)
0879df64 +0x134:  mov    %eax,-0x50(%ebp)
0879df67 +0x137:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879df6c +0x13c:  mov    %eax,(%esp)
0879df6f +0x13f:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879df74 +0x144:  mov    (%eax),%edx
0879df76 +0x146:  test   %edx,%edx
0879df78 +0x148:  je     0879e1d2 <+0x3a2>
0879df7e +0x14e:  lea    -0x20(%ebp),%eax
0879df81 +0x151:  lea    -0x1c(%ebp),%edx
0879df84 +0x154:  lea    -0x40(%ebp),%ecx
0879df87 +0x157:  movl   $0x0,-0x58(%ebp)
0879df8e +0x15e:  mov    %eax,-0x6c(%ebp)
0879df91 +0x161:  mov    %edx,-0x68(%ebp)
0879df94 +0x164:  mov    %ecx,-0x54(%ebp)
0879df97 +0x167:  mov    %edi,-0x64(%ebp)
0879df9a +0x16a:  mov    -0x4c(%ebp),%eax
0879df9d +0x16d:  mov    %eax,(%esp)
0879dfa0 +0x170:  call   08796e70 <_ZN5yaSSL12input_buffer3eofEv>  ; yaSSL::input_buffer::eof()
0879dfa5 +0x175:  test   %al,%al
0879dfa7 +0x177:  jne    0879e21b <+0x3eb>
0879dfad +0x17d:  mov    -0x68(%ebp),%esi
0879dfb0 +0x180:  movl   $0x0,0x8(%esp)
0879dfb8 +0x188:  movl   $0x3,0x4(%esp)
0879dfc0 +0x190:  mov    %esi,(%esp)
0879dfc3 +0x193:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
0879dfc8 +0x198:  mov    -0x4c(%ebp),%eax
0879dfcb +0x19b:  mov    %eax,(%esp)
0879dfce +0x19e:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0879dfd3 +0x1a3:  cmp    $0x4,%eax
0879dfd6 +0x1a6:  ja     0879e0bb <+0x28b>
0879dfdc +0x1ac:  mov    -0x64(%ebp),%edi
0879dfdf +0x1af:  xor    %esi,%esi
0879dfe1 +0x1b1:  mov    -0x4c(%ebp),%ecx
0879dfe4 +0x1b4:  mov    %ecx,(%esp)
0879dfe7 +0x1b7:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0879dfec +0x1bc:  lea    (%eax,%esi,1),%ecx
0879dfef +0x1bf:  mov    -0x4c(%ebp),%eax
0879dff2 +0x1c2:  mov    %ecx,-0x70(%ebp)
0879dff5 +0x1c5:  mov    %eax,(%esp)
0879dff8 +0x1c8:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879dffd +0x1cd:  mov    -0x4c(%ebp),%edx
0879e000 +0x1d0:  mov    %edx,(%esp)
0879e003 +0x1d3:  mov    %eax,-0x54(%ebp)
0879e006 +0x1d6:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0879e00b +0x1db:  movb   $0x0,0x4(%esp)
0879e010 +0x1e0:  movl   $0x10,(%esp)
0879e017 +0x1e7:  mov    %eax,-0x50(%ebp)
0879e01a +0x1ea:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879e01f +0x1ef:  mov    -0x70(%ebp),%ecx
0879e022 +0x1f2:  mov    %ecx,0xc(%esp)
0879e026 +0x1f6:  mov    %ecx,0x4(%esp)
0879e02a +0x1fa:  mov    %eax,%edx
0879e02c +0x1fc:  mov    -0x50(%ebp),%eax
0879e02f +0x1ff:  mov    %edx,(%esp)
0879e032 +0x202:  mov    %edx,-0x70(%ebp)
0879e035 +0x205:  sub    %esi,%eax
0879e037 +0x207:  mov    -0x54(%ebp),%esi
0879e03a +0x20a:  add    %eax,%esi
0879e03c +0x20c:  mov    %esi,0x8(%esp)
0879e040 +0x210:  call   08797270 <_ZN5yaSSL12input_bufferC1EjPKhj>  ; yaSSL::input_buffer::input_buffer(unsigned int, unsigned char const*, unsigned int)
0879e045 +0x215:  mov    %edi,(%esp)
0879e048 +0x218:  call   0874e020 <_ZN5yaSSL3SSL10useBuffersEv>  ; yaSSL::SSL::useBuffers()
0879e04d +0x21d:  mov    -0x70(%ebp),%edx
0879e050 +0x220:  mov    %edx,0x4(%esp)
0879e054 +0x224:  mov    %eax,(%esp)
0879e057 +0x227:  call   0874e8f0 <_ZN5yaSSL7Buffers11SetRawInputEPNS_12input_bufferE>  ; yaSSL::Buffers::SetRawInput(yaSSL::input_buffer*)
0879e05c +0x22c:  mov    $0x1,%eax
0879e061 +0x231:  mov    -0x4c(%ebp),%edx
0879e064 +0x234:  mov    %eax,-0x70(%ebp)
0879e067 +0x237:  mov    %edx,(%esp)
0879e06a +0x23a:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879e06f +0x23f:  mov    -0x70(%ebp),%eax
0879e072 +0x242:  add    $0x8c,%esp
0879e078 +0x248:  pop    %ebx
0879e079 +0x249:  pop    %esi
0879e07a +0x24a:  pop    %edi
0879e07b +0x24b:  pop    %ebp
0879e07c +0x24c:  ret
0879e07d +0x24d:  lea    0x0(%esi),%esi
0879e080 +0x250:  mov    %edi,(%esp)
0879e083 +0x253:  movl   $0x72,0x4(%esp)
0879e08b +0x25b:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879e090 +0x260:  add    $0x8c,%esp
0879e096 +0x266:  xor    %eax,%eax
0879e098 +0x268:  pop    %ebx
0879e099 +0x269:  pop    %esi
0879e09a +0x26a:  pop    %edi
0879e09b +0x26b:  pop    %ebp
0879e09c +0x26c:  ret
0879e09d +0x26d:  lea    -0x30(%ebp),%ecx
0879e0a0 +0x270:  mov    %esi,0x4(%esp)
0879e0a4 +0x274:  mov    %ecx,-0x4c(%ebp)
0879e0a7 +0x277:  mov    %ecx,(%esp)
0879e0aa +0x27a:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0879e0af +0x27f:  movl   $0x0,-0x50(%ebp)
0879e0b6 +0x286:  jmp    0879df05 <+0xd5>
0879e0bb +0x28b:  mov    -0x6c(%ebp),%edx
0879e0be +0x28e:  mov    -0x4c(%ebp),%ecx
0879e0c1 +0x291:  mov    %edx,0x4(%esp)
0879e0c5 +0x295:  mov    %ecx,(%esp)
0879e0c8 +0x298:  call   08748b30 <_ZN5yaSSLrsERNS_12input_bufferERNS_17RecordLayerHeaderE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::RecordLayerHeader&)
0879e0cd +0x29d:  mov    -0x6c(%ebp),%esi
0879e0d0 +0x2a0:  mov    -0x64(%ebp),%eax
0879e0d3 +0x2a3:  mov    %esi,0x4(%esp)
0879e0d7 +0x2a7:  mov    %eax,(%esp)
0879e0da +0x2aa:  call   0874e200 <_ZN5yaSSL3SSL11verifyStateERKNS_17RecordLayerHeaderE>  ; yaSSL::SSL::verifyState(yaSSL::RecordLayerHeader const&)
0879e0df +0x2af:  mov    -0x4c(%ebp),%edx
0879e0e2 +0x2b2:  movzwl -0x1a(%ebp),%esi
0879e0e6 +0x2b6:  mov    %edx,(%esp)
0879e0e9 +0x2b9:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0879e0ee +0x2be:  cmp    %eax,%esi
0879e0f0 +0x2c0:  ja     0879e222 <+0x3f2>
0879e0f6 +0x2c6:  mov    -0x64(%ebp),%edi
0879e0f9 +0x2c9:  lea    0x0(%esi,%eiz,1),%esi
0879e100 +0x2d0:  mov    -0x4c(%ebp),%ecx
0879e103 +0x2d3:  mov    %ecx,(%esp)
0879e106 +0x2d6:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0879e10b +0x2db:  movzwl -0x1a(%ebp),%edx
0879e10f +0x2df:  mov    -0x58(%ebp),%esi
0879e112 +0x2e2:  lea    0x5(%esi,%edx,1),%edx
0879e116 +0x2e6:  cmp    %edx,%eax
0879e118 +0x2e8:  jae    0879e36e <+0x53e>
0879e11e +0x2ee:  mov    %edi,(%esp)
0879e121 +0x2f1:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879e126 +0x2f6:  mov    %eax,(%esp)
0879e129 +0x2f9:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879e12e +0x2fe:  cmpb   $0x0,0x28(%eax)
0879e132 +0x302:  je     0879e230 <+0x400>
0879e138 +0x308:  mov    -0x50(%ebp),%edx
0879e13b +0x30b:  mov    -0x20(%ebp),%ecx
0879e13e +0x30e:  mov    (%edx),%eax
0879e140 +0x310:  mov    0x4(%edx),%edx
0879e143 +0x313:  cmp    %edx,%eax
0879e145 +0x315:  jne    0879e15b <+0x32b>
0879e147 +0x317:  jmp    0879e348 <+0x518>
0879e14c +0x31c:  lea    0x0(%esi,%eiz,1),%esi
0879e150 +0x320:  add    $0x8,%eax
0879e153 +0x323:  cmp    %eax,%edx
0879e155 +0x325:  je     0879e348 <+0x518>
0879e15b +0x32b:  cmp    (%eax),%ecx
0879e15d +0x32d:  lea    0x0(%esi),%esi
0879e160 +0x330:  jne    0879e150 <+0x320>
0879e162 +0x332:  call   *0x4(%eax)
0879e165 +0x335:  test   %eax,%eax
0879e167 +0x337:  mov    %eax,%esi
0879e169 +0x339:  je     0879e348 <+0x518>
0879e16f +0x33f:  mov    %eax,0x4(%esp)
0879e173 +0x343:  mov    -0x4c(%ebp),%eax
0879e176 +0x346:  mov    %eax,(%esp)
0879e179 +0x349:  call   08746a30 <_ZN5yaSSLrsERNS_12input_bufferERNS_7MessageE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Message&)
0879e17e +0x34e:  mov    (%esi),%eax
0879e180 +0x350:  mov    -0x4c(%ebp),%edx
0879e183 +0x353:  mov    %edi,0x8(%esp)
0879e187 +0x357:  mov    %esi,(%esp)
0879e18a +0x35a:  mov    %edx,0x4(%esp)
0879e18e +0x35e:  call   *0x8(%eax)
0879e191 +0x361:  mov    %edi,(%esp)
0879e194 +0x364:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e199 +0x369:  test   %eax,%eax
0879e19b +0x36b:  jne    0879e376 <+0x546>
0879e1a1 +0x371:  mov    (%esi),%eax
0879e1a3 +0x373:  mov    %esi,(%esp)
0879e1a6 +0x376:  call   *0x14(%eax)
0879e1a9 +0x379:  movb   $0x0,0x4(%esp)
0879e1ae +0x37e:  mov    %esi,(%esp)
0879e1b1 +0x381:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879e1b6 +0x386:  jmp    0879e100 <+0x2d0>
0879e1bb +0x38b:  movl   $0x72,0x4(%esp)
0879e1c3 +0x393:  mov    %edi,(%esp)
0879e1c6 +0x396:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879e1cb +0x39b:  xor    %eax,%eax
0879e1cd +0x39d:  jmp    0879e061 <+0x231>
0879e1d2 +0x3a2:  mov    %edi,(%esp)
0879e1d5 +0x3a5:  call   0874e080 <_ZNK5yaSSL3SSL9getStatesEv>  ; yaSSL::SSL::getStates() const
0879e1da +0x3aa:  mov    %eax,(%esp)
0879e1dd +0x3ad:  call   0874deb0 <_ZNK5yaSSL6States9getServerEv>  ; yaSSL::States::getServer() const
0879e1e2 +0x3b2:  mov    (%eax),%eax
0879e1e4 +0x3b4:  test   %eax,%eax
0879e1e6 +0x3b6:  jne    0879df7e <+0x14e>
0879e1ec +0x3bc:  mov    -0x4c(%ebp),%esi
0879e1ef +0x3bf:  mov    %esi,(%esp)
0879e1f2 +0x3c2:  call   08796e80 <_ZNK5yaSSL12input_buffer4peekEv>  ; yaSSL::input_buffer::peek() const
0879e1f7 +0x3c7:  cmp    $0x16,%al
0879e1f9 +0x3c9:  je     0879df7e <+0x14e>
0879e1ff +0x3cf:  mov    %edi,0x4(%esp)
0879e203 +0x3d3:  mov    %esi,(%esp)
0879e206 +0x3d6:  call   0879d7e0 <_ZN5yaSSL21ProcessOldClientHelloERNS_12input_bufferERNS_3SSLE>  ; yaSSL::ProcessOldClientHello(yaSSL::input_buffer&, yaSSL::SSL&)
0879e20b +0x3db:  mov    %edi,(%esp)
0879e20e +0x3de:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e213 +0x3e3:  test   %eax,%eax
0879e215 +0x3e5:  je     0879df7e <+0x14e>
0879e21b +0x3eb:  xor    %eax,%eax
0879e21d +0x3ed:  jmp    0879e061 <+0x231>
0879e222 +0x3f2:  mov    -0x64(%ebp),%edi
0879e225 +0x3f5:  mov    $0x5,%esi
0879e22a +0x3fa:  jmp    0879dfe1 <+0x1b1>
0879e22f +0x3ff:  nop
0879e230 +0x400:  movzwl -0x1a(%ebp),%edx
0879e234 +0x404:  mov    -0x54(%ebp),%ecx
0879e237 +0x407:  mov    %dx,-0x7a(%ebp)
0879e23b +0x40b:  movzwl %dx,%edx
0879e23e +0x40e:  mov    %edx,0x4(%esp)
0879e242 +0x412:  mov    %edx,-0x70(%ebp)
0879e245 +0x415:  mov    %ecx,(%esp)
0879e248 +0x418:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
0879e24d +0x41d:  mov    -0x4c(%ebp),%esi
0879e250 +0x420:  mov    %esi,(%esp)
0879e253 +0x423:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879e258 +0x428:  mov    %eax,%esi
0879e25a +0x42a:  mov    -0x4c(%ebp),%eax
0879e25d +0x42d:  mov    %eax,(%esp)
0879e260 +0x430:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0879e265 +0x435:  mov    %edi,(%esp)
0879e268 +0x438:  lea    (%esi,%eax,1),%eax
0879e26b +0x43b:  mov    %eax,-0x5c(%ebp)
0879e26e +0x43e:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0879e273 +0x443:  mov    %eax,(%esp)
0879e276 +0x446:  call   0874e7b0 <_ZN5yaSSL6Crypto10use_cipherEv>  ; yaSSL::Crypto::use_cipher()
0879e27b +0x44b:  mov    -0x54(%ebp),%ecx
0879e27e +0x44e:  mov    %eax,%esi
0879e280 +0x450:  mov    (%eax),%eax
0879e282 +0x452:  mov    0x4(%eax),%eax
0879e285 +0x455:  mov    %ecx,(%esp)
0879e288 +0x458:  mov    %eax,-0x60(%ebp)
0879e28b +0x45b:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879e290 +0x460:  mov    -0x5c(%ebp),%ecx
0879e293 +0x463:  mov    -0x70(%ebp),%edx
0879e296 +0x466:  mov    %esi,(%esp)
0879e299 +0x469:  mov    %ecx,0x8(%esp)
0879e29d +0x46d:  mov    %edx,0xc(%esp)
0879e2a1 +0x471:  mov    %eax,0x4(%esp)
0879e2a5 +0x475:  call   *-0x60(%ebp)
0879e2a8 +0x478:  mov    -0x54(%ebp),%esi
0879e2ab +0x47b:  mov    %esi,(%esp)
0879e2ae +0x47e:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0879e2b3 +0x483:  mov    -0x70(%ebp),%edx
0879e2b6 +0x486:  mov    %edx,0x8(%esp)
0879e2ba +0x48a:  mov    %eax,0x4(%esp)
0879e2be +0x48e:  mov    -0x5c(%ebp),%eax
0879e2c1 +0x491:  mov    %eax,(%esp)
0879e2c4 +0x494:  call   0807d8a0 <_init+0x198>
0879e2c9 +0x499:  mov    %edi,(%esp)
0879e2cc +0x49c:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0879e2d1 +0x4a1:  mov    %eax,(%esp)
0879e2d4 +0x4a4:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0879e2d9 +0x4a9:  movzwl -0x7a(%ebp),%edx
0879e2dd +0x4ad:  mov    %dx,0x2a(%eax)
0879e2e1 +0x4b1:  mov    %edi,(%esp)
0879e2e4 +0x4b4:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
0879e2e9 +0x4b9:  test   %al,%al
0879e2eb +0x4bb:  je     0879e323 <+0x4f3>
0879e2ed +0x4bd:  mov    -0x4c(%ebp),%ecx
0879e2f0 +0x4c0:  mov    %ecx,(%esp)
0879e2f3 +0x4c3:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
0879e2f8 +0x4c8:  mov    %edi,(%esp)
0879e2fb +0x4cb:  mov    %eax,%esi
0879e2fd +0x4cd:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0879e302 +0x4d2:  mov    %eax,(%esp)
0879e305 +0x4d5:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
0879e30a +0x4da:  mov    (%eax),%edx
0879e30c +0x4dc:  mov    %eax,(%esp)
0879e30f +0x4df:  call   *0x10(%edx)
0879e312 +0x4e2:  add    %esi,%eax
0879e314 +0x4e4:  mov    -0x4c(%ebp),%esi
0879e317 +0x4e7:  mov    %eax,0x4(%esp)
0879e31b +0x4eb:  mov    %esi,(%esp)
0879e31e +0x4ee:  call   08796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>  ; yaSSL::input_buffer::set_current(unsigned int)
0879e323 +0x4f3:  mov    -0x54(%ebp),%eax
0879e326 +0x4f6:  mov    %eax,(%esp)
0879e329 +0x4f9:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
0879e32e +0x4fe:  mov    -0x50(%ebp),%edx
0879e331 +0x501:  mov    -0x20(%ebp),%ecx
0879e334 +0x504:  mov    (%edx),%eax
0879e336 +0x506:  mov    0x4(%edx),%edx
0879e339 +0x509:  cmp    %edx,%eax
0879e33b +0x50b:  jne    0879e15b <+0x32b>
0879e341 +0x511:  lea    0x0(%esi,%eiz,1),%esi
0879e348 +0x518:  movl   $0x67,0x4(%esp)
0879e350 +0x520:  xor    %esi,%esi
0879e352 +0x522:  mov    %edi,(%esp)
0879e355 +0x525:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0879e35a +0x52a:  movb   $0x0,0x4(%esp)
0879e35f +0x52f:  mov    %esi,(%esp)
0879e362 +0x532:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879e367 +0x537:  xor    %eax,%eax
0879e369 +0x539:  jmp    0879e061 <+0x231>
0879e36e +0x53e:  mov    %edx,-0x58(%ebp)
0879e371 +0x541:  jmp    0879df9a <+0x16a>
0879e376 +0x546:  mov    (%esi),%eax
0879e378 +0x548:  mov    %esi,(%esp)
0879e37b +0x54b:  call   *0x14(%eax)
0879e37e +0x54e:  xchg   %ax,%ax
0879e380 +0x550:  jmp    0879e35a <+0x52a>
0879e382 +0x552:  lea    0x0(%esi,%eiz,1),%esi
0879e389 +0x559:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DoProcessReply @ 0x879de30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DoProcessReply(yaSSL::SSL&) */

undefined4 yaSSL::DoProcessReply(SSL *param_1)

{
  code *pcVar1;
  ushort uVar2;
  char cVar3;
  Socket *pSVar4;
  uint uVar5;
  Buffers *pBVar6;
  input_buffer *piVar7;
  uchar *puVar8;
  int iVar9;
  sslFactory *this;
  undefined4 *puVar10;
  Security *pSVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  States *this_00;
  Crypto *pCVar17;
  void *__src;
  int *piVar18;
  uint uVar19;
  Message *pMVar20;
  RecordLayerHeader *pRVar21;
  uint local_5c;
  uint local_54;
  input_buffer *local_50;
  input_buffer local_44 [16];
  input_buffer local_34 [16];
  int local_24;
  ProtocolVersion local_20 [2];
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879de3b;
  pSVar4 = (Socket *)SSL::useSocket(param_1);
  cVar3 = Socket::wait(pSVar4);
  if (cVar3 == '\0') {
    SSL::SetError(param_1,0x72);
    return 0;
  }
  pSVar4 = (Socket *)SSL::getSocket(param_1);
  uVar5 = Socket::get_ready(pSVar4);
  if (uVar5 == 0) {
    return 1;
  }
  pBVar6 = (Buffers *)SSL::useBuffers(param_1);
  piVar7 = (input_buffer *)Buffers::TakeRawInput(pBVar6);
  if (piVar7 == (input_buffer *)0x0) {
    input_buffer::input_buffer(local_34,uVar5);
    local_54 = 0;
  }
  else {
    local_54 = input_buffer::get_size(piVar7);
    input_buffer::input_buffer(local_34,local_54 + uVar5);
    if (local_54 != 0) {
      puVar8 = (uchar *)input_buffer::get_buffer(piVar7);
      input_buffer::assign(local_34,puVar8,local_54);
      input_buffer::~input_buffer(piVar7);
      operator_delete(piVar7,(uint)puVar8 & 0xffffff00);
    }
  }
  local_50 = local_34;
  iVar9 = input_buffer::get_buffer(local_50);
  pSVar4 = (Socket *)SSL::useSocket(param_1);
  uVar5 = Socket::receive(pSVar4,(uchar *)(iVar9 + local_54),uVar5,0);
  if (uVar5 == 0xffffffff) {
    SSL::SetError(param_1,0x72);
    uVar16 = 0;
    goto LAB_0879e061;
  }
  input_buffer::add_size(local_50,uVar5);
  this = (sslFactory *)SSL::getFactory();
  puVar10 = (undefined4 *)sslFactory::getMessage(this);
  pSVar11 = (Security *)SSL::getSecurity(param_1);
  piVar12 = (int *)Security::get_parms(pSVar11);
  if (*piVar12 == 0) {
    this_00 = (States *)SSL::getStates(param_1);
    piVar12 = (int *)States::getServer(this_00);
    if ((*piVar12 != 0) || (cVar3 = input_buffer::peek(local_50), cVar3 == '\x16'))
    goto LAB_0879df7e;
    ProcessOldClientHello(local_50,param_1);
    iVar9 = SSL::GetError(param_1);
    if (iVar9 == 0) goto LAB_0879df7e;
  }
  else {
LAB_0879df7e:
    local_5c = 0;
    uVar5 = local_5c;
    while (local_5c = uVar5, cVar3 = input_buffer::eof(local_50), cVar3 == '\0') {
      pRVar21 = (RecordLayerHeader *)0x0;
      ProtocolVersion::ProtocolVersion(local_20,'\x03','\0');
      uVar5 = input_buffer::get_remaining(local_50);
      if (uVar5 < 5) {
        iVar9 = 0;
LAB_0879dfe1:
        iVar13 = input_buffer::get_remaining(local_50);
        iVar14 = input_buffer::get_buffer(local_50);
        iVar15 = input_buffer::get_current(local_50);
        piVar7 = operator_new(0x10,(uint)pRVar21 & 0xffffff00);
        input_buffer::input_buffer
                  (piVar7,iVar13 + iVar9,(uchar *)(iVar14 + (iVar15 - iVar9)),iVar13 + iVar9);
        pBVar6 = (Buffers *)SSL::useBuffers(param_1);
        Buffers::SetRawInput(pBVar6,piVar7);
        uVar16 = 1;
        goto LAB_0879e061;
      }
      operator>>(local_50,(RecordLayerHeader *)&local_24);
      pRVar21 = (RecordLayerHeader *)&local_24;
      SSL::verifyState(param_1,(RecordLayerHeader *)&local_24);
      uVar19 = (uint)local_1e;
      uVar5 = input_buffer::get_remaining(local_50);
      if (uVar5 < uVar19) {
        iVar9 = 5;
        goto LAB_0879dfe1;
      }
      while( true ) {
        uVar19 = input_buffer::get_current(local_50);
        uVar5 = local_5c + 5 + (uint)local_1e;
        if (uVar5 <= uVar19) break;
        pSVar11 = (Security *)SSL::getSecurity(param_1);
        iVar9 = Security::get_parms(pSVar11);
        uVar2 = local_1e;
        if (*(char *)(iVar9 + 0x28) == '\0') {
          uVar5 = (uint)local_1e;
          input_buffer::input_buffer(local_44,uVar5);
          iVar9 = input_buffer::get_buffer(local_50);
          iVar13 = input_buffer::get_current(local_50);
          pCVar17 = (Crypto *)SSL::useCrypto(param_1);
          piVar12 = (int *)Crypto::use_cipher(pCVar17);
          pcVar1 = *(code **)(*piVar12 + 4);
          uVar16 = input_buffer::get_buffer(local_44);
          (*pcVar1)(piVar12,uVar16,(void *)(iVar9 + iVar13),uVar5);
          __src = (void *)input_buffer::get_buffer(local_44);
          memcpy((void *)(iVar9 + iVar13),__src,uVar5);
          pSVar11 = (Security *)SSL::useSecurity(param_1);
          iVar9 = Security::use_parms(pSVar11);
          *(ushort *)(iVar9 + 0x2a) = uVar2;
          cVar3 = SSL::isTLSv1_1(param_1);
          if (cVar3 != '\0') {
            iVar9 = input_buffer::get_current(local_50);
            pCVar17 = (Crypto *)SSL::getCrypto(param_1);
            piVar12 = (int *)Crypto::get_cipher(pCVar17);
            iVar13 = (**(code **)(*piVar12 + 0x10))(piVar12);
            input_buffer::set_current(local_50,iVar13 + iVar9);
          }
          input_buffer::~input_buffer(local_44);
          piVar12 = (int *)*puVar10;
          piVar18 = (int *)puVar10[1];
          iVar9 = local_24;
          if (piVar12 != piVar18) goto LAB_0879e15b;
LAB_0879e348:
          piVar7 = (input_buffer *)0x0;
          pMVar20 = (Message *)0x0;
          SSL::SetError(param_1,0x67);
LAB_0879e35a:
          operator_delete(pMVar20,(uint)piVar7 & 0xffffff00);
          uVar16 = 0;
          goto LAB_0879e061;
        }
        piVar12 = (int *)*puVar10;
        piVar18 = (int *)puVar10[1];
        iVar9 = local_24;
        if (piVar12 == piVar18) goto LAB_0879e348;
LAB_0879e15b:
        while (iVar9 != *piVar12) {
          piVar12 = piVar12 + 2;
          if (piVar18 == piVar12) goto LAB_0879e348;
        }
        pMVar20 = (Message *)(*(code *)piVar12[1])();
        if (pMVar20 == (Message *)0x0) goto LAB_0879e348;
        operator>>(local_50,pMVar20);
        piVar7 = local_50;
        (**(code **)(*(int *)pMVar20 + 8))(pMVar20,local_50,param_1);
        iVar9 = SSL::GetError(param_1);
        if (iVar9 != 0) {
          (**(code **)(*(int *)pMVar20 + 0x14))(pMVar20);
          goto LAB_0879e35a;
        }
        (**(code **)(*(int *)pMVar20 + 0x14))(pMVar20);
        operator_delete(pMVar20,(uint)piVar7 & 0xffffff00);
      }
    }
  }
  uVar16 = 0;
LAB_0879e061:
  input_buffer::~input_buffer(local_50);
  return uVar16;
}
```
