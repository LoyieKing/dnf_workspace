# dispatch_sig

`_ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetIP` | `0x081f468c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f468c  _ZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f468c, 0x081f4ce5]
081f468c +0x000:  push   %ebp
081f468d +0x001:  mov    %esp,%ebp
081f468f +0x003:  push   %edi
081f4690 +0x004:  push   %esi
081f4691 +0x005:  push   %ebx
081f4692 +0x006:  sub    $0x12c,%esp
081f4698 +0x00c:  mov    0xc(%ebp),%eax
081f469b +0x00f:  mov    %eax,(%esp)
081f469e +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f46a3 +0x017:  cmp    $0x3,%eax
081f46a6 +0x01a:  setg   %al
081f46a9 +0x01d:  test   %al,%al
081f46ab +0x01f:  je     081f46b7 <+0x2b>
081f46ad +0x021:  mov    $0x0,%eax
081f46b2 +0x026:  jmp    081f4cdb <+0x64f>
081f46b7 +0x02b:  lea    -0xf6(%ebp),%eax
081f46bd +0x031:  add    $0xd,%eax
081f46c0 +0x034:  mov    %eax,0x4(%esp)
081f46c4 +0x038:  mov    0x10(%ebp),%eax
081f46c7 +0x03b:  mov    %eax,(%esp)
081f46ca +0x03e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f46cf +0x043:  xor    $0x1,%eax
081f46d2 +0x046:  test   %al,%al
081f46d4 +0x048:  je     081f46ff <+0x73>
081f46d6 +0x04a:  movl   $0x0,0xc(%esp)
081f46de +0x052:  movl   $0x0,0x8(%esp)
081f46e6 +0x05a:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f46ee +0x062:  movl   $0x80e4,(%esp)
081f46f5 +0x069:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f46fa +0x06e:  jmp    081f4cdb <+0x64f>
081f46ff +0x073:  lea    -0xf6(%ebp),%eax
081f4705 +0x079:  add    $0xe,%eax
081f4708 +0x07c:  mov    %eax,0x4(%esp)
081f470c +0x080:  mov    0x10(%ebp),%eax
081f470f +0x083:  mov    %eax,(%esp)
081f4712 +0x086:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f4717 +0x08b:  xor    $0x1,%eax
081f471a +0x08e:  test   %al,%al
081f471c +0x090:  je     081f4747 <+0xbb>
081f471e +0x092:  movl   $0x0,0xc(%esp)
081f4726 +0x09a:  movl   $0x0,0x8(%esp)
081f472e +0x0a2:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f4736 +0x0aa:  movl   $0x80e5,(%esp)
081f473d +0x0b1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4742 +0x0b6:  jmp    081f4cdb <+0x64f>
081f4747 +0x0bb:  lea    -0xf6(%ebp),%eax
081f474d +0x0c1:  add    $0x12,%eax
081f4750 +0x0c4:  mov    %eax,0x4(%esp)
081f4754 +0x0c8:  mov    0x10(%ebp),%eax
081f4757 +0x0cb:  mov    %eax,(%esp)
081f475a +0x0ce:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f475f +0x0d3:  xor    $0x1,%eax
081f4762 +0x0d6:  test   %al,%al
081f4764 +0x0d8:  je     081f478f <+0x103>
081f4766 +0x0da:  movl   $0x0,0xc(%esp)
081f476e +0x0e2:  movl   $0x0,0x8(%esp)
081f4776 +0x0ea:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f477e +0x0f2:  movl   $0x80e6,(%esp)
081f4785 +0x0f9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f478a +0x0fe:  jmp    081f4cdb <+0x64f>
081f478f +0x103:  lea    -0xf6(%ebp),%eax
081f4795 +0x109:  add    $0x16,%eax
081f4798 +0x10c:  mov    %eax,0x4(%esp)
081f479c +0x110:  mov    0x10(%ebp),%eax
081f479f +0x113:  mov    %eax,(%esp)
081f47a2 +0x116:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
081f47a7 +0x11b:  xor    $0x1,%eax
081f47aa +0x11e:  test   %al,%al
081f47ac +0x120:  je     081f47d7 <+0x14b>
081f47ae +0x122:  movl   $0x0,0xc(%esp)
081f47b6 +0x12a:  movl   $0x0,0x8(%esp)
081f47be +0x132:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f47c6 +0x13a:  movl   $0x80e7,(%esp)
081f47cd +0x141:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f47d2 +0x146:  jmp    081f4cdb <+0x64f>
081f47d7 +0x14b:  lea    -0xf6(%ebp),%eax
081f47dd +0x151:  add    $0x18,%eax
081f47e0 +0x154:  mov    %eax,0x4(%esp)
081f47e4 +0x158:  mov    0x10(%ebp),%eax
081f47e7 +0x15b:  mov    %eax,(%esp)
081f47ea +0x15e:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f47ef +0x163:  xor    $0x1,%eax
081f47f2 +0x166:  test   %al,%al
081f47f4 +0x168:  je     081f481f <+0x193>
081f47f6 +0x16a:  movl   $0x0,0xc(%esp)
081f47fe +0x172:  movl   $0x0,0x8(%esp)
081f4806 +0x17a:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f480e +0x182:  movl   $0x80e8,(%esp)
081f4815 +0x189:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f481a +0x18e:  jmp    081f4cdb <+0x64f>
081f481f +0x193:  mov    -0xde(%ebp),%esi
081f4825 +0x199:  movzwl -0xe0(%ebp),%eax
081f482c +0x1a0:  movzwl %ax,%ebx
081f482f +0x1a3:  mov    -0xe4(%ebp),%ecx
081f4835 +0x1a9:  mov    -0xe8(%ebp),%edx
081f483b +0x1af:  movzbl -0xe9(%ebp),%eax
081f4842 +0x1b6:  movsbl %al,%eax
081f4845 +0x1b9:  mov    0xc(%ebp),%edi
081f4848 +0x1bc:  add    $0xe0,%edi
081f484e +0x1c2:  mov    %esi,0x14(%esp)
081f4852 +0x1c6:  mov    %ebx,0x10(%esp)
081f4856 +0x1ca:  mov    %ecx,0xc(%esp)
081f485a +0x1ce:  mov    %edx,0x8(%esp)
081f485e +0x1d2:  mov    %eax,0x4(%esp)
081f4862 +0x1d6:  mov    %edi,(%esp)
081f4865 +0x1d9:  call   0823779e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xce48>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xce48
081f486a +0x1de:  lea    -0xf6(%ebp),%eax
081f4870 +0x1e4:  add    $0x1c,%eax
081f4873 +0x1e7:  mov    %eax,0x4(%esp)
081f4877 +0x1eb:  mov    0x10(%ebp),%eax
081f487a +0x1ee:  mov    %eax,(%esp)
081f487d +0x1f1:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
081f4882 +0x1f6:  xor    $0x1,%eax
081f4885 +0x1f9:  test   %al,%al
081f4887 +0x1fb:  je     081f48b2 <+0x226>
081f4889 +0x1fd:  movl   $0x0,0xc(%esp)
081f4891 +0x205:  movl   $0x0,0x8(%esp)
081f4899 +0x20d:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f48a1 +0x215:  movl   $0x8100,(%esp)
081f48a8 +0x21c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f48ad +0x221:  jmp    081f4cdb <+0x64f>
081f48b2 +0x226:  mov    -0xda(%ebp),%eax
081f48b8 +0x22c:  mov    %eax,0xc(%esp)
081f48bc +0x230:  movl   $0x41,0x8(%esp)
081f48c4 +0x238:  lea    -0xf6(%ebp),%eax
081f48ca +0x23e:  add    $0x20,%eax
081f48cd +0x241:  mov    %eax,0x4(%esp)
081f48d1 +0x245:  mov    0x10(%ebp),%eax
081f48d4 +0x248:  mov    %eax,(%esp)
081f48d7 +0x24b:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081f48dc +0x250:  xor    $0x1,%eax
081f48df +0x253:  test   %al,%al
081f48e1 +0x255:  je     081f490c <+0x280>
081f48e3 +0x257:  movl   $0x0,0xc(%esp)
081f48eb +0x25f:  movl   $0x0,0x8(%esp)
081f48f3 +0x267:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f48fb +0x26f:  movl   $0x8102,(%esp)
081f4902 +0x276:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f4907 +0x27b:  jmp    081f4cdb <+0x64f>
081f490c +0x280:  lea    -0x95(%ebp),%edx
081f4912 +0x286:  mov    $0x41,%ebx
081f4917 +0x28b:  mov    $0x0,%eax
081f491c +0x290:  mov    %edx,%ecx
081f491e +0x292:  and    $0x1,%ecx
081f4921 +0x295:  test   %ecx,%ecx
081f4923 +0x297:  je     081f492d <+0x2a1>
081f4925 +0x299:  mov    %al,(%edx)
081f4927 +0x29b:  add    $0x1,%edx
081f492a +0x29e:  sub    $0x1,%ebx
081f492d +0x2a1:  mov    %edx,%ecx
081f492f +0x2a3:  and    $0x2,%ecx
081f4932 +0x2a6:  test   %ecx,%ecx
081f4934 +0x2a8:  je     081f493f <+0x2b3>
081f4936 +0x2aa:  mov    %ax,(%edx)
081f4939 +0x2ad:  add    $0x2,%edx
081f493c +0x2b0:  sub    $0x2,%ebx
081f493f +0x2b3:  mov    %ebx,%ecx
081f4941 +0x2b5:  shr    $0x2,%ecx
081f4944 +0x2b8:  mov    %edx,%edi
081f4946 +0x2ba:  rep stos %eax,%es:(%edi)
081f4948 +0x2bc:  mov    %edi,%edx
081f494a +0x2be:  mov    %ebx,%ecx
081f494c +0x2c0:  and    $0x2,%ecx
081f494f +0x2c3:  test   %ecx,%ecx
081f4951 +0x2c5:  je     081f4959 <+0x2cd>
081f4953 +0x2c7:  mov    %ax,(%edx)
081f4956 +0x2ca:  add    $0x2,%edx
081f4959 +0x2cd:  mov    %ebx,%ecx
081f495b +0x2cf:  and    $0x1,%ecx
081f495e +0x2d2:  test   %ecx,%ecx
081f4960 +0x2d4:  je     081f4967 <+0x2db>
081f4962 +0x2d6:  mov    %al,(%edx)
081f4964 +0x2d8:  add    $0x1,%edx
081f4967 +0x2db:  lea    -0xf6(%ebp),%eax
081f496d +0x2e1:  lea    0x20(%eax),%edx
081f4970 +0x2e4:  lea    -0x95(%ebp),%eax
081f4976 +0x2ea:  mov    %eax,0x8(%esp)
081f497a +0x2ee:  movl   $0x41,0x4(%esp)
081f4982 +0x2f6:  mov    %edx,(%esp)
081f4985 +0x2f9:  call   0808cc6a <_Z18getSha256UsingSaltPKhiPc>  ; getSha256UsingSalt(unsigned char const*, int, char*)
081f498a +0x2fe:  mov    -0xde(%ebp),%eax
081f4990 +0x304:  mov    %eax,-0x104(%ebp)
081f4996 +0x30a:  movzwl -0xe0(%ebp),%eax
081f499d +0x311:  movzwl %ax,%eax
081f49a0 +0x314:  mov    %eax,-0x100(%ebp)
081f49a6 +0x31a:  mov    -0xe4(%ebp),%edi
081f49ac +0x320:  mov    %edi,-0xfc(%ebp)
081f49b2 +0x326:  mov    -0xe8(%ebp),%edi
081f49b8 +0x32c:  movzbl -0xe9(%ebp),%eax
081f49bf +0x333:  movsbl %al,%esi
081f49c2 +0x336:  mov    0xc(%ebp),%eax
081f49c5 +0x339:  mov    %eax,(%esp)
081f49c8 +0x33c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081f49cd +0x341:  movl   $0x0,0x4(%esp)
081f49d5 +0x349:  mov    %eax,(%esp)
081f49d8 +0x34c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081f49dd +0x351:  mov    %eax,%ebx
081f49df +0x353:  movl   $0x0,0xc(%esp)
081f49e7 +0x35b:  movl   $0x810b,0x8(%esp)
081f49ef +0x363:  movl   $&_ZZN16DisPatcher_SetIP12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f49f7 +0x36b:  lea    -0x2c(%ebp),%eax
081f49fa +0x36e:  mov    %eax,(%esp)
081f49fd +0x371:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081f4a02 +0x376:  mov    -0x104(%ebp),%eax
081f4a08 +0x37c:  mov    %eax,0x20(%esp)
081f4a0c +0x380:  lea    -0x95(%ebp),%eax
081f4a12 +0x386:  mov    %eax,0x1c(%esp)
081f4a16 +0x38a:  mov    -0x100(%ebp),%eax
081f4a1c +0x390:  mov    %eax,0x18(%esp)
081f4a20 +0x394:  mov    -0xfc(%ebp),%eax
081f4a26 +0x39a:  mov    %eax,0x14(%esp)
081f4a2a +0x39e:  mov    %edi,0x10(%esp)
081f4a2e +0x3a2:  mov    %esi,0xc(%esp)
081f4a32 +0x3a6:  mov    %ebx,0x8(%esp)
081f4a36 +0x3aa:  movl   $"(acc_id: %s) (nat type: %d) (inner_ip: %d) (nat_ip: %d) (nat_port: %d) (mac_addr: %s) (mtu: %d)",0x4(%esp)
081f4a3e +0x3b2:  lea    -0x2c(%ebp),%eax
081f4a41 +0x3b5:  mov    %eax,(%esp)
081f4a44 +0x3b8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081f4a49 +0x3bd:  movzwl -0xe0(%ebp),%eax
081f4a50 +0x3c4:  movzwl %ax,%ebx
081f4a53 +0x3c7:  mov    -0xe4(%ebp),%ecx
081f4a59 +0x3cd:  mov    -0xe8(%ebp),%edx
081f4a5f +0x3d3:  movzbl -0xe9(%ebp),%eax
081f4a66 +0x3da:  movsbl %al,%eax
081f4a69 +0x3dd:  mov    0xc(%ebp),%esi
081f4a6c +0x3e0:  lea    0xe0(%esi),%edi
081f4a72 +0x3e6:  lea    -0x95(%ebp),%esi
081f4a78 +0x3ec:  mov    %esi,0x14(%esp)
081f4a7c +0x3f0:  mov    %ebx,0x10(%esp)
081f4a80 +0x3f4:  mov    %ecx,0xc(%esp)
081f4a84 +0x3f8:  mov    %edx,0x8(%esp)
081f4a88 +0x3fc:  mov    %eax,0x4(%esp)
081f4a8c +0x400:  mov    %edi,(%esp)
081f4a8f +0x403:  call   08237826 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xced0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xced0
081f4a94 +0x408:  movl   $0x0,-0x40(%ebp)
081f4a9b +0x40f:  movl   $0x0,-0x3c(%ebp)
081f4aa2 +0x416:  movl   $0x0,-0x38(%ebp)
081f4aa9 +0x41d:  movl   $0x0,-0x34(%ebp)
081f4ab0 +0x424:  movl   $0x0,-0x30(%ebp)
081f4ab7 +0x42b:  mov    0xc(%ebp),%eax
081f4aba +0x42e:  lea    0xe0(%eax),%edx
081f4ac0 +0x434:  movl   $0x14,0x8(%esp)
081f4ac8 +0x43c:  lea    -0x40(%ebp),%eax
081f4acb +0x43f:  mov    %eax,0x4(%esp)
081f4acf +0x443:  mov    %edx,(%esp)
081f4ad2 +0x446:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
081f4ad7 +0x44b:  mov    %eax,%ebx
081f4ad9 +0x44d:  mov    0xc(%ebp),%eax
081f4adc +0x450:  add    $0xe0,%eax
081f4ae1 +0x455:  mov    %eax,(%esp)
081f4ae4 +0x458:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
081f4ae9 +0x45d:  mov    %ebx,0x4(%esp)
081f4aed +0x461:  mov    %eax,(%esp)
081f4af0 +0x464:  call   081f44bb <_Z11checkDenyIPPKcS0_>  ; checkDenyIP(char const*, char const*)
081f4af5 +0x469:  test   %al,%al
081f4af7 +0x46b:  je     081f4c50 <+0x5c4>
081f4afd +0x471:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081f4b02 +0x476:  movl   $0x811d,0x8(%esp)
081f4b0a +0x47e:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081f4b12 +0x486:  mov    %eax,(%esp)
081f4b15 +0x489:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081f4b1a +0x48e:  movl   $0x1,0x8(%esp)
081f4b22 +0x496:  mov    %eax,0x4(%esp)
081f4b26 +0x49a:  lea    -0x48(%ebp),%eax
081f4b29 +0x49d:  mov    %eax,(%esp)
081f4b2c +0x4a0:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081f4b31 +0x4a5:  lea    -0x48(%ebp),%eax
081f4b34 +0x4a8:  mov    %eax,(%esp)
081f4b37 +0x4ab:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081f4b3c +0x4b0:  movl   $0x9e,0x4(%esp)
081f4b44 +0x4b8:  mov    %eax,(%esp)
081f4b47 +0x4bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081f4b4c +0x4c0:  lea    -0x48(%ebp),%eax
081f4b4f +0x4c3:  mov    %eax,(%esp)
081f4b52 +0x4c6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081f4b57 +0x4cb:  movl   $0xffffffff,0x4(%esp)
081f4b5f +0x4d3:  mov    %eax,(%esp)
081f4b62 +0x4d6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081f4b67 +0x4db:  lea    -0x48(%ebp),%eax
081f4b6a +0x4de:  mov    %eax,(%esp)
081f4b6d +0x4e1:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081f4b72 +0x4e6:  mov    %eax,(%esp)
081f4b75 +0x4e9:  call   082378c2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcf6c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcf6c
081f4b7a +0x4ee:  mov    %eax,-0x1c(%ebp)
081f4b7d +0x4f1:  mov    0xc(%ebp),%eax
081f4b80 +0x4f4:  mov    %eax,(%esp)
081f4b83 +0x4f7:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081f4b88 +0x4fc:  mov    -0x1c(%ebp),%edx
081f4b8b +0x4ff:  mov    %eax,(%edx)
081f4b8d +0x501:  mov    0xc(%ebp),%eax
081f4b90 +0x504:  add    $0xe0,%eax
081f4b95 +0x509:  mov    %eax,(%esp)
081f4b98 +0x50c:  call   08236d0c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3b6
081f4b9d +0x511:  mov    -0x1c(%ebp),%edx
081f4ba0 +0x514:  add    $0x4,%edx
081f4ba3 +0x517:  movl   $0x10,0x8(%esp)
081f4bab +0x51f:  mov    %eax,0x4(%esp)
081f4baf +0x523:  mov    %edx,(%esp)
081f4bb2 +0x526:  call   0807d8d0 <_init+0x1c8>
081f4bb7 +0x52b:  mov    -0x1c(%ebp),%eax
081f4bba +0x52e:  lea    0x18(%eax),%edx
081f4bbd +0x531:  movl   $0x10,0x8(%esp)
081f4bc5 +0x539:  lea    -0x40(%ebp),%eax
081f4bc8 +0x53c:  mov    %eax,0x4(%esp)
081f4bcc +0x540:  mov    %edx,(%esp)
081f4bcf +0x543:  call   0807d8d0 <_init+0x1c8>
081f4bd4 +0x548:  movzbl -0xe9(%ebp),%eax
081f4bdb +0x54f:  mov    %eax,%edx
081f4bdd +0x551:  mov    -0x1c(%ebp),%eax
081f4be0 +0x554:  mov    %dl,0x2c(%eax)
081f4be3 +0x557:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081f4be8 +0x55c:  lea    -0x48(%ebp),%edx
081f4beb +0x55f:  mov    %edx,0x8(%esp)
081f4bef +0x563:  movl   $0x4,0x4(%esp)
081f4bf7 +0x56b:  mov    %eax,(%esp)
081f4bfa +0x56e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081f4bff +0x573:  mov    0xc(%ebp),%eax
081f4c02 +0x576:  mov    %eax,(%esp)
081f4c05 +0x579:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081f4c0a +0x57e:  mov    %eax,%ebx
081f4c0c +0x580:  mov    0xc(%ebp),%eax
081f4c0f +0x583:  mov    %eax,(%esp)
081f4c12 +0x586:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081f4c17 +0x58b:  mov    %ebx,0x4(%esp)
081f4c1b +0x58f:  mov    %eax,(%esp)
081f4c1e +0x592:  call   0844d2d4 <_ZN23DB_SelectAllowProxyUser11makeRequestEij>  ; DB_SelectAllowProxyUser::makeRequest(int, unsigned int)
081f4c23 +0x597:  jmp    081f4c40 <+0x5b4>
081f4c25 +0x599:  mov    %edx,%ebx
081f4c27 +0x59b:  mov    %eax,%esi
081f4c29 +0x59d:  lea    -0x48(%ebp),%eax
081f4c2c +0x5a0:  mov    %eax,(%esp)
081f4c2f +0x5a3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081f4c34 +0x5a8:  mov    %esi,%eax
081f4c36 +0x5aa:  mov    %ebx,%edx
081f4c38 +0x5ac:  mov    %eax,(%esp)
081f4c3b +0x5af:  call   08ae3750 <_Unwind_Resume>
081f4c40 +0x5b4:  lea    -0x48(%ebp),%eax
081f4c43 +0x5b7:  mov    %eax,(%esp)
081f4c46 +0x5ba:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081f4c4b +0x5bf:  jmp    081f4cd6 <+0x64a>
081f4c50 +0x5c4:  lea    -0x54(%ebp),%eax
081f4c53 +0x5c7:  mov    %eax,(%esp)
081f4c56 +0x5ca:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081f4c5b +0x5cf:  movl   $0x2,0x8(%esp)
081f4c63 +0x5d7:  movl   $0x1,0x4(%esp)
081f4c6b +0x5df:  lea    -0x54(%ebp),%eax
081f4c6e +0x5e2:  mov    %eax,(%esp)
081f4c71 +0x5e5:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081f4c76 +0x5ea:  movl   $0x1,0x4(%esp)
081f4c7e +0x5f2:  lea    -0x54(%ebp),%eax
081f4c81 +0x5f5:  mov    %eax,(%esp)
081f4c84 +0x5f8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081f4c89 +0x5fd:  movl   $0x1,0x4(%esp)
081f4c91 +0x605:  lea    -0x54(%ebp),%eax
081f4c94 +0x608:  mov    %eax,(%esp)
081f4c97 +0x60b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081f4c9c +0x610:  lea    -0x54(%ebp),%eax
081f4c9f +0x613:  mov    %eax,0x4(%esp)
081f4ca3 +0x617:  mov    0xc(%ebp),%eax
081f4ca6 +0x61a:  mov    %eax,(%esp)
081f4ca9 +0x61d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081f4cae +0x622:  jmp    081f4ccb <+0x63f>
081f4cb0 +0x624:  mov    %edx,%ebx
081f4cb2 +0x626:  mov    %eax,%esi
081f4cb4 +0x628:  lea    -0x54(%ebp),%eax
081f4cb7 +0x62b:  mov    %eax,(%esp)
081f4cba +0x62e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f4cbf +0x633:  mov    %esi,%eax
081f4cc1 +0x635:  mov    %ebx,%edx
081f4cc3 +0x637:  mov    %eax,(%esp)
081f4cc6 +0x63a:  call   08ae3750 <_Unwind_Resume>
081f4ccb +0x63f:  lea    -0x54(%ebp),%eax
081f4cce +0x642:  mov    %eax,(%esp)
081f4cd1 +0x645:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081f4cd6 +0x64a:  mov    $0x0,%eax
081f4cdb +0x64f:  add    $0x12c,%esp
081f4ce1 +0x655:  pop    %ebx
081f4ce2 +0x656:  pop    %esi
081f4ce3 +0x657:  pop    %edi
081f4ce4 +0x658:  pop    %ebp
081f4ce5 +0x659:  ret
```

## 反编译 C

```c
// DisPatcher_SetIP::dispatch_sig @ 0x81f468c

/* DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetIP::dispatch_sig(DisPatcher_SetIP *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  SIG_SAVE_PROXY_LOG local_ed;
  uint local_ec;
  uint local_e8;
  ushort local_e4;
  uint local_e2;
  uint local_de;
  uchar local_da [65];
  char local_99;
  char local_98 [64];
  PacketGuard local_58 [12];
  CStreamGuard local_4c [8];
  char local_44 [20];
  cMyTrace local_30 [16];
  SIG_SAVE_PROXY_LOG *local_20;
  
  bVar13 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 4) {
    cVar1 = PacketBuf::get_byte(param_2,(char *)&local_ed);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_ec);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_e8);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&local_e4);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&local_e2);
            if (cVar1 == '\x01') {
              CNetwork<4096,450000>::set_nat
                        ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char)local_ed,local_ec,local_e8,
                         local_e4,local_e2);
              cVar1 = PacketBuf::get_int(param_2,&local_de);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_str(param_2,(char *)local_da,0x41,local_de);
                if (cVar1 == '\x01') {
                  pcVar10 = &local_99;
                  uVar11 = 0x41;
                  bVar12 = ((uint)pcVar10 & 1) != 0;
                  if (bVar12) {
                    local_99 = '\0';
                    pcVar10 = local_98;
                    uVar11 = 0x40;
                  }
                  if (((uint)pcVar10 & 2) != 0) {
                    pcVar10[0] = '\0';
                    pcVar10[1] = '\0';
                    pcVar10 = pcVar10 + 2;
                    uVar11 = uVar11 - 2;
                  }
                  for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                    pcVar10[0] = '\0';
                    pcVar10[1] = '\0';
                    pcVar10[2] = '\0';
                    pcVar10[3] = '\0';
                    pcVar10 = pcVar10 + ((uint)bVar13 * -2 + 1) * 4;
                  }
                  if ((uVar11 & 2) != 0) {
                    pcVar10[0] = '\0';
                    pcVar10[1] = '\0';
                    pcVar10 = pcVar10 + 2;
                  }
                  if (!bVar12) {
                    *pcVar10 = '\0';
                  }
                  getSha256UsingSalt(local_da,0x41,&local_99);
                  uVar9 = local_e8;
                  uVar11 = local_ec;
                  uVar4 = (uint)local_e4;
                  iVar2 = (int)(char)local_ed;
                  uVar5 = CUser::get_acc_id(param_1);
                  uVar3 = NumberToString(uVar5,0);
                  cMyTrace::cMyTrace(local_30,
                                     "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0x810b,0);
                  cMyTrace::operator()
                            (local_30,
                             "(acc_id: %s) (nat type: %d) (inner_ip: %d) (nat_ip: %d) (nat_port: %d) (mac_addr: %s) (mtu: %d)"
                             ,uVar3,iVar2,uVar11,uVar9,uVar4,&local_99,local_e2);
                  CNetwork<4096,450000>::set_nat
                            ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char)local_ed,local_ec,
                             local_e8,local_e4,&local_99);
                  local_44[0] = '\0';
                  local_44[1] = '\0';
                  local_44[2] = '\0';
                  local_44[3] = '\0';
                  local_44[4] = '\0';
                  local_44[5] = '\0';
                  local_44[6] = '\0';
                  local_44[7] = '\0';
                  local_44[8] = '\0';
                  local_44[9] = '\0';
                  local_44[10] = '\0';
                  local_44[0xb] = '\0';
                  local_44[0xc] = '\0';
                  local_44[0xd] = '\0';
                  local_44[0xe] = '\0';
                  local_44[0xf] = '\0';
                  local_44[0x10] = '\0';
                  local_44[0x11] = '\0';
                  local_44[0x12] = '\0';
                  local_44[0x13] = '\0';
                  pcVar10 = (char *)CNetwork<4096,450000>::GetPeerIP2
                                              ((CNetwork<4096,450000> *)(param_1 + 0xe0),local_44,
                                               0x14);
                  pcVar6 = (char *)CNetwork<4096,450000>::get_str_ip
                                             ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                  cVar1 = checkDenyIP(pcVar6,pcVar10);
                  if (cVar1 == '\0') {
                    PacketGuard::PacketGuard(local_58);
                    /* try { // try from 081f4c71 to 081f4cad has its CatchHandler @ 081f4cb0 */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,1,2);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,1);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
                    CUser::Send(param_1,local_58);
                    PacketGuard::~PacketGuard(local_58);
                  }
                  else {
                    pSVar7 = (Stream *)
                             StreamPool::Acquire(GlobalData::s_stream_pool,
                                                 "PacketDispatcher_Impl_1.cpp",0x811d);
                    CStreamGuard::CStreamGuard(local_4c,pSVar7,true);
                    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 081f4b47 to 081f4c22 has its CatchHandler @ 081f4c25 */
                    CStreamGuard::operator<<(pCVar8,0x9e);
                    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    CStreamGuard::operator<<(pCVar8,-1);
                    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
                    local_20 = CStreamGuard::GetInBuffer<SIG_SAVE_PROXY_LOG>(pCVar8);
                    uVar3 = CUser::get_acc_id(param_1);
                    *(undefined4 *)local_20 = uVar3;
                    pcVar10 = (char *)CNetwork<4096,450000>::get_str_ip
                                                ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                    strncpy((char *)(local_20 + 4),pcVar10,0x10);
                    strncpy((char *)(local_20 + 0x18),local_44,0x10);
                    local_20[0x2c] = local_ed;
                    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_4c);
                    uVar11 = CUser::get_acc_id(param_1);
                    iVar2 = CUser::GetUID(param_1);
                    DB_SelectAllowProxyUser::makeRequest(iVar2,uVar11);
                    CStreamGuard::~CStreamGuard(local_4c);
                  }
                  uVar3 = 0;
                }
                else {
                  uVar3 = LineFunc(0x8102,
                                   "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",
                                   0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x8100,
                                 "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,
                                 0);
              }
            }
            else {
              uVar3 = LineFunc(33000,
                               "virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,0)
              ;
            }
          }
          else {
            uVar3 = LineFunc(32999,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",
                             0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x80e6,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0
                           ,0);
        }
      }
      else {
        uVar3 = LineFunc(0x80e5,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      uVar3 = LineFunc(0x80e4,"virtual int DisPatcher_SetIP::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
