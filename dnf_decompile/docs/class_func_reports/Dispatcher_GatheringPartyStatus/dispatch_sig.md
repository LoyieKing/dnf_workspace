# dispatch_sig

`_ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GatheringPartyStatus` | `0x08203878` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08203878  _ZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)
# range [0x08203878, 0x0820419f]
08203878 +0x000:  push   %ebp
08203879 +0x001:  mov    %esp,%ebp
0820387b +0x003:  push   %esi
0820387c +0x004:  push   %ebx
0820387d +0x005:  sub    $0x1f0,%esp
08203883 +0x00b:  movl   $0x1b4,0x8(%esp)
0820388b +0x013:  movl   $0x0,0x4(%esp)
08203893 +0x01b:  lea    -0x1d0(%ebp),%eax
08203899 +0x021:  mov    %eax,(%esp)
0820389c +0x024:  call   0807dcc0 <_init+0x5b8>
082038a1 +0x029:  lea    -0x1d0(%ebp),%eax
082038a7 +0x02f:  add    $0xd,%eax
082038aa +0x032:  mov    %eax,0x4(%esp)
082038ae +0x036:  mov    0x10(%ebp),%eax
082038b1 +0x039:  mov    %eax,(%esp)
082038b4 +0x03c:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082038b9 +0x041:  xor    $0x1,%eax
082038bc +0x044:  test   %al,%al
082038be +0x046:  je     082038eb <+0x73>
082038c0 +0x048:  movl   $0x0,0xc(%esp)
082038c8 +0x050:  movl   $0x0,0x8(%esp)
082038d0 +0x058:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082038d8 +0x060:  movl   $0x9aeb,(%esp)
082038df +0x067:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082038e4 +0x06c:  mov    %eax,%ebx
082038e6 +0x06e:  jmp    08204193 <+0x91b>
082038eb +0x073:  lea    -0x1d0(%ebp),%eax
082038f1 +0x079:  add    $0xe,%eax
082038f4 +0x07c:  mov    %eax,0x4(%esp)
082038f8 +0x080:  mov    0x10(%ebp),%eax
082038fb +0x083:  mov    %eax,(%esp)
082038fe +0x086:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08203903 +0x08b:  xor    $0x1,%eax
08203906 +0x08e:  test   %al,%al
08203908 +0x090:  je     08203935 <+0xbd>
0820390a +0x092:  movl   $0x0,0xc(%esp)
08203912 +0x09a:  movl   $0x0,0x8(%esp)
0820391a +0x0a2:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203922 +0x0aa:  movl   $0x9aef,(%esp)
08203929 +0x0b1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820392e +0x0b6:  mov    %eax,%ebx
08203930 +0x0b8:  jmp    08204193 <+0x91b>
08203935 +0x0bd:  lea    -0x1d0(%ebp),%eax
0820393b +0x0c3:  add    $0x12,%eax
0820393e +0x0c6:  mov    %eax,0x4(%esp)
08203942 +0x0ca:  mov    0x10(%ebp),%eax
08203945 +0x0cd:  mov    %eax,(%esp)
08203948 +0x0d0:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820394d +0x0d5:  xor    $0x1,%eax
08203950 +0x0d8:  test   %al,%al
08203952 +0x0da:  je     0820397f <+0x107>
08203954 +0x0dc:  movl   $0x0,0xc(%esp)
0820395c +0x0e4:  movl   $0x0,0x8(%esp)
08203964 +0x0ec:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820396c +0x0f4:  movl   $0x9af2,(%esp)
08203973 +0x0fb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203978 +0x100:  mov    %eax,%ebx
0820397a +0x102:  jmp    08204193 <+0x91b>
0820397f +0x107:  lea    -0x1d0(%ebp),%eax
08203985 +0x10d:  add    $0x16,%eax
08203988 +0x110:  mov    %eax,0x4(%esp)
0820398c +0x114:  mov    0x10(%ebp),%eax
0820398f +0x117:  mov    %eax,(%esp)
08203992 +0x11a:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08203997 +0x11f:  xor    $0x1,%eax
0820399a +0x122:  test   %al,%al
0820399c +0x124:  je     082039c9 <+0x151>
0820399e +0x126:  movl   $0x0,0xc(%esp)
082039a6 +0x12e:  movl   $0x0,0x8(%esp)
082039ae +0x136:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082039b6 +0x13e:  movl   $0x9af4,(%esp)
082039bd +0x145:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082039c2 +0x14a:  mov    %eax,%ebx
082039c4 +0x14c:  jmp    08204193 <+0x91b>
082039c9 +0x151:  lea    -0x1d0(%ebp),%eax
082039cf +0x157:  add    $0x17,%eax
082039d2 +0x15a:  mov    %eax,0x4(%esp)
082039d6 +0x15e:  mov    0x10(%ebp),%eax
082039d9 +0x161:  mov    %eax,(%esp)
082039dc +0x164:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
082039e1 +0x169:  xor    $0x1,%eax
082039e4 +0x16c:  test   %al,%al
082039e6 +0x16e:  je     08203a13 <+0x19b>
082039e8 +0x170:  movl   $0x0,0xc(%esp)
082039f0 +0x178:  movl   $0x0,0x8(%esp)
082039f8 +0x180:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203a00 +0x188:  movl   $0x9af6,(%esp)
08203a07 +0x18f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203a0c +0x194:  mov    %eax,%ebx
08203a0e +0x196:  jmp    08204193 <+0x91b>
08203a13 +0x19b:  lea    -0x1d0(%ebp),%eax
08203a19 +0x1a1:  add    $0x18,%eax
08203a1c +0x1a4:  mov    %eax,0x4(%esp)
08203a20 +0x1a8:  mov    0x10(%ebp),%eax
08203a23 +0x1ab:  mov    %eax,(%esp)
08203a26 +0x1ae:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08203a2b +0x1b3:  xor    $0x1,%eax
08203a2e +0x1b6:  test   %al,%al
08203a30 +0x1b8:  je     08203a5d <+0x1e5>
08203a32 +0x1ba:  movl   $0x0,0xc(%esp)
08203a3a +0x1c2:  movl   $0x0,0x8(%esp)
08203a42 +0x1ca:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203a4a +0x1d2:  movl   $0x9af8,(%esp)
08203a51 +0x1d9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203a56 +0x1de:  mov    %eax,%ebx
08203a58 +0x1e0:  jmp    08204193 <+0x91b>
08203a5d +0x1e5:  lea    -0x1d0(%ebp),%eax
08203a63 +0x1eb:  add    $0x1c,%eax
08203a66 +0x1ee:  mov    %eax,0x4(%esp)
08203a6a +0x1f2:  mov    0x10(%ebp),%eax
08203a6d +0x1f5:  mov    %eax,(%esp)
08203a70 +0x1f8:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08203a75 +0x1fd:  xor    $0x1,%eax
08203a78 +0x200:  test   %al,%al
08203a7a +0x202:  je     08203aa7 <+0x22f>
08203a7c +0x204:  movl   $0x0,0xc(%esp)
08203a84 +0x20c:  movl   $0x0,0x8(%esp)
08203a8c +0x214:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203a94 +0x21c:  movl   $0x9afa,(%esp)
08203a9b +0x223:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203aa0 +0x228:  mov    %eax,%ebx
08203aa2 +0x22a:  jmp    08204193 <+0x91b>
08203aa7 +0x22f:  movzwl -0x1b4(%ebp),%eax
08203aae +0x236:  cmp    $0x1e,%ax
08203ab2 +0x23a:  jbe    08203b13 <+0x29b>
08203ab4 +0x23c:  movl   $0x1e,0x14(%esp)
08203abc +0x244:  movl   $"recv_pk_party_status.try_num > %d\n",0x10(%esp)
08203ac4 +0x24c:  movl   $0x9aff,0xc(%esp)
08203acc +0x254:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08203ad4 +0x25c:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08203adc +0x264:  movl   $0x1,(%esp)
08203ae3 +0x26b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08203ae8 +0x270:  movl   $0x0,0xc(%esp)
08203af0 +0x278:  movl   $0x0,0x8(%esp)
08203af8 +0x280:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203b00 +0x288:  movl   $0x9b00,(%esp)
08203b07 +0x28f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203b0c +0x294:  mov    %eax,%ebx
08203b0e +0x296:  jmp    08204193 <+0x91b>
08203b13 +0x29b:  movzwl -0x1b4(%ebp),%eax
08203b1a +0x2a2:  test   %ax,%ax
08203b1d +0x2a5:  je     08203cc3 <+0x44b>
08203b23 +0x2ab:  movl   $0x0,-0x10(%ebp)
08203b2a +0x2b2:  jmp    08203cab <+0x433>
08203b2f +0x2b7:  mov    -0x10(%ebp),%edx
08203b32 +0x2ba:  lea    -0x1d0(%ebp),%ecx
08203b38 +0x2c0:  mov    %edx,%eax
08203b3a +0x2c2:  shl    $0x2,%eax
08203b3d +0x2c5:  add    %edx,%eax
08203b3f +0x2c7:  add    %eax,%eax
08203b41 +0x2c9:  add    $0x10,%eax
08203b44 +0x2cc:  lea    (%ecx,%eax,1),%eax
08203b47 +0x2cf:  add    $0xe,%eax
08203b4a +0x2d2:  mov    %eax,0x4(%esp)
08203b4e +0x2d6:  mov    0x10(%ebp),%eax
08203b51 +0x2d9:  mov    %eax,(%esp)
08203b54 +0x2dc:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08203b59 +0x2e1:  xor    $0x1,%eax
08203b5c +0x2e4:  test   %al,%al
08203b5e +0x2e6:  je     08203b8b <+0x313>
08203b60 +0x2e8:  movl   $0x0,0xc(%esp)
08203b68 +0x2f0:  movl   $0x0,0x8(%esp)
08203b70 +0x2f8:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203b78 +0x300:  movl   $0x9b09,(%esp)
08203b7f +0x307:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203b84 +0x30c:  mov    %eax,%ebx
08203b86 +0x30e:  jmp    08204193 <+0x91b>
08203b8b +0x313:  mov    -0x10(%ebp),%edx
08203b8e +0x316:  lea    -0x1d0(%ebp),%ecx
08203b94 +0x31c:  mov    %edx,%eax
08203b96 +0x31e:  shl    $0x2,%eax
08203b99 +0x321:  add    %edx,%eax
08203b9b +0x323:  add    %eax,%eax
08203b9d +0x325:  add    $0x10,%eax
08203ba0 +0x328:  lea    (%ecx,%eax,1),%eax
08203ba3 +0x32b:  add    $0xf,%eax
08203ba6 +0x32e:  mov    %eax,0x4(%esp)
08203baa +0x332:  mov    0x10(%ebp),%eax
08203bad +0x335:  mov    %eax,(%esp)
08203bb0 +0x338:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08203bb5 +0x33d:  xor    $0x1,%eax
08203bb8 +0x340:  test   %al,%al
08203bba +0x342:  je     08203be7 <+0x36f>
08203bbc +0x344:  movl   $0x0,0xc(%esp)
08203bc4 +0x34c:  movl   $0x0,0x8(%esp)
08203bcc +0x354:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203bd4 +0x35c:  movl   $0x9b0a,(%esp)
08203bdb +0x363:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203be0 +0x368:  mov    %eax,%ebx
08203be2 +0x36a:  jmp    08204193 <+0x91b>
08203be7 +0x36f:  mov    -0x10(%ebp),%edx
08203bea +0x372:  lea    -0x1d0(%ebp),%ecx
08203bf0 +0x378:  mov    %edx,%eax
08203bf2 +0x37a:  shl    $0x2,%eax
08203bf5 +0x37d:  add    %edx,%eax
08203bf7 +0x37f:  add    %eax,%eax
08203bf9 +0x381:  add    $0x10,%eax
08203bfc +0x384:  lea    (%ecx,%eax,1),%eax
08203bff +0x387:  add    $0x10,%eax
08203c02 +0x38a:  movl   $0x4,0x8(%esp)
08203c0a +0x392:  mov    %eax,0x4(%esp)
08203c0e +0x396:  mov    0x10(%ebp),%eax
08203c11 +0x399:  mov    %eax,(%esp)
08203c14 +0x39c:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08203c19 +0x3a1:  xor    $0x1,%eax
08203c1c +0x3a4:  test   %al,%al
08203c1e +0x3a6:  je     08203c4b <+0x3d3>
08203c20 +0x3a8:  movl   $0x0,0xc(%esp)
08203c28 +0x3b0:  movl   $0x0,0x8(%esp)
08203c30 +0x3b8:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203c38 +0x3c0:  movl   $0x9b0b,(%esp)
08203c3f +0x3c7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203c44 +0x3cc:  mov    %eax,%ebx
08203c46 +0x3ce:  jmp    08204193 <+0x91b>
08203c4b +0x3d3:  mov    -0x10(%ebp),%edx
08203c4e +0x3d6:  lea    -0x1d0(%ebp),%ecx
08203c54 +0x3dc:  mov    %edx,%eax
08203c56 +0x3de:  shl    $0x2,%eax
08203c59 +0x3e1:  add    %edx,%eax
08203c5b +0x3e3:  add    %eax,%eax
08203c5d +0x3e5:  add    $0x10,%eax
08203c60 +0x3e8:  lea    (%ecx,%eax,1),%eax
08203c63 +0x3eb:  add    $0x14,%eax
08203c66 +0x3ee:  mov    %eax,0x4(%esp)
08203c6a +0x3f2:  mov    0x10(%ebp),%eax
08203c6d +0x3f5:  mov    %eax,(%esp)
08203c70 +0x3f8:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08203c75 +0x3fd:  xor    $0x1,%eax
08203c78 +0x400:  test   %al,%al
08203c7a +0x402:  je     08203ca7 <+0x42f>
08203c7c +0x404:  movl   $0x0,0xc(%esp)
08203c84 +0x40c:  movl   $0x0,0x8(%esp)
08203c8c +0x414:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203c94 +0x41c:  movl   $0x9b0c,(%esp)
08203c9b +0x423:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203ca0 +0x428:  mov    %eax,%ebx
08203ca2 +0x42a:  jmp    08204193 <+0x91b>
08203ca7 +0x42f:  addl   $0x1,-0x10(%ebp)
08203cab +0x433:  movzwl -0x1b4(%ebp),%eax
08203cb2 +0x43a:  movzwl %ax,%eax
08203cb5 +0x43d:  cmp    -0x10(%ebp),%eax
08203cb8 +0x440:  setg   %al
08203cbb +0x443:  test   %al,%al
08203cbd +0x445:  jne    08203b2f <+0x2b7>
08203cc3 +0x44b:  lea    -0x1d0(%ebp),%eax
08203cc9 +0x451:  add    $0x14a,%eax
08203cce +0x456:  mov    %eax,0x4(%esp)
08203cd2 +0x45a:  mov    0x10(%ebp),%eax
08203cd5 +0x45d:  mov    %eax,(%esp)
08203cd8 +0x460:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08203cdd +0x465:  xor    $0x1,%eax
08203ce0 +0x468:  test   %al,%al
08203ce2 +0x46a:  je     08203d0f <+0x497>
08203ce4 +0x46c:  movl   $0x0,0xc(%esp)
08203cec +0x474:  movl   $0x0,0x8(%esp)
08203cf4 +0x47c:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203cfc +0x484:  movl   $0x9b12,(%esp)
08203d03 +0x48b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203d08 +0x490:  mov    %eax,%ebx
08203d0a +0x492:  jmp    08204193 <+0x91b>
08203d0f +0x497:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08203d14 +0x49c:  mov    %eax,(%esp)
08203d17 +0x49f:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
08203d1c +0x4a4:  test   %al,%al
08203d1e +0x4a6:  je     08203d88 <+0x510>
08203d20 +0x4a8:  movzwl -0x86(%ebp),%eax
08203d27 +0x4af:  cmp    $0x8,%ax
08203d2b +0x4b3:  jbe    08203dec <+0x574>
08203d31 +0x4b9:  movl   $"recv_pk_party_status.party_num > MAX_PVP_MEM\n",0x10(%esp)
08203d39 +0x4c1:  movl   $0x9b1c,0xc(%esp)
08203d41 +0x4c9:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08203d49 +0x4d1:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08203d51 +0x4d9:  movl   $0x1,(%esp)
08203d58 +0x4e0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08203d5d +0x4e5:  movl   $0x0,0xc(%esp)
08203d65 +0x4ed:  movl   $0x0,0x8(%esp)
08203d6d +0x4f5:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203d75 +0x4fd:  movl   $0x9b1d,(%esp)
08203d7c +0x504:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203d81 +0x509:  mov    %eax,%ebx
08203d83 +0x50b:  jmp    08204193 <+0x91b>
08203d88 +0x510:  movzwl -0x86(%ebp),%eax
08203d8f +0x517:  cmp    $0x4,%ax
08203d93 +0x51b:  jbe    08203dec <+0x574>
08203d95 +0x51d:  movl   $"recv_pk_party_status.party_num > PARTY_PLAYER_MAX\n",0x10(%esp)
08203d9d +0x525:  movl   $0x9b24,0xc(%esp)
08203da5 +0x52d:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x8(%esp)
08203dad +0x535:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08203db5 +0x53d:  movl   $0x1,(%esp)
08203dbc +0x544:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08203dc1 +0x549:  movl   $0x0,0xc(%esp)
08203dc9 +0x551:  movl   $0x0,0x8(%esp)
08203dd1 +0x559:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203dd9 +0x561:  movl   $0x9b25,(%esp)
08203de0 +0x568:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203de5 +0x56d:  mov    %eax,%ebx
08203de7 +0x56f:  jmp    08204193 <+0x91b>
08203dec +0x574:  movl   $0x0,-0xc(%ebp)
08203df3 +0x57b:  jmp    08203f84 <+0x70c>
08203df8 +0x580:  mov    -0xc(%ebp),%edx
08203dfb +0x583:  lea    -0x1d0(%ebp),%ecx
08203e01 +0x589:  mov    %edx,%eax
08203e03 +0x58b:  add    %eax,%eax
08203e05 +0x58d:  add    %edx,%eax
08203e07 +0x58f:  shl    $0x2,%eax
08203e0a +0x592:  add    %edx,%eax
08203e0c +0x594:  add    $0x140,%eax
08203e11 +0x599:  lea    (%ecx,%eax,1),%eax
08203e14 +0x59c:  add    $0xc,%eax
08203e17 +0x59f:  mov    %eax,0x4(%esp)
08203e1b +0x5a3:  mov    0x10(%ebp),%eax
08203e1e +0x5a6:  mov    %eax,(%esp)
08203e21 +0x5a9:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08203e26 +0x5ae:  xor    $0x1,%eax
08203e29 +0x5b1:  test   %al,%al
08203e2b +0x5b3:  je     08203e58 <+0x5e0>
08203e2d +0x5b5:  movl   $0x0,0xc(%esp)
08203e35 +0x5bd:  movl   $0x0,0x8(%esp)
08203e3d +0x5c5:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203e45 +0x5cd:  movl   $0x9b2e,(%esp)
08203e4c +0x5d4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203e51 +0x5d9:  mov    %eax,%ebx
08203e53 +0x5db:  jmp    08204193 <+0x91b>
08203e58 +0x5e0:  mov    -0xc(%ebp),%edx
08203e5b +0x5e3:  lea    -0x1d0(%ebp),%ecx
08203e61 +0x5e9:  mov    %edx,%eax
08203e63 +0x5eb:  add    %eax,%eax
08203e65 +0x5ed:  add    %edx,%eax
08203e67 +0x5ef:  shl    $0x2,%eax
08203e6a +0x5f2:  add    %edx,%eax
08203e6c +0x5f4:  add    $0x140,%eax
08203e71 +0x5f9:  lea    (%ecx,%eax,1),%eax
08203e74 +0x5fc:  add    $0xd,%eax
08203e77 +0x5ff:  mov    %eax,0x4(%esp)
08203e7b +0x603:  mov    0x10(%ebp),%eax
08203e7e +0x606:  mov    %eax,(%esp)
08203e81 +0x609:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08203e86 +0x60e:  xor    $0x1,%eax
08203e89 +0x611:  test   %al,%al
08203e8b +0x613:  je     08203eb8 <+0x640>
08203e8d +0x615:  movl   $0x0,0xc(%esp)
08203e95 +0x61d:  movl   $0x0,0x8(%esp)
08203e9d +0x625:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203ea5 +0x62d:  movl   $0x9b36,(%esp)
08203eac +0x634:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203eb1 +0x639:  mov    %eax,%ebx
08203eb3 +0x63b:  jmp    08204193 <+0x91b>
08203eb8 +0x640:  mov    -0xc(%ebp),%edx
08203ebb +0x643:  lea    -0x1d0(%ebp),%ecx
08203ec1 +0x649:  mov    %edx,%eax
08203ec3 +0x64b:  add    %eax,%eax
08203ec5 +0x64d:  add    %edx,%eax
08203ec7 +0x64f:  shl    $0x2,%eax
08203eca +0x652:  add    %edx,%eax
08203ecc +0x654:  add    $0x140,%eax
08203ed1 +0x659:  lea    (%ecx,%eax,1),%eax
08203ed4 +0x65c:  add    $0x11,%eax
08203ed7 +0x65f:  mov    %eax,0x4(%esp)
08203edb +0x663:  mov    0x10(%ebp),%eax
08203ede +0x666:  mov    %eax,(%esp)
08203ee1 +0x669:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
08203ee6 +0x66e:  xor    $0x1,%eax
08203ee9 +0x671:  test   %al,%al
08203eeb +0x673:  je     08203f18 <+0x6a0>
08203eed +0x675:  movl   $0x0,0xc(%esp)
08203ef5 +0x67d:  movl   $0x0,0x8(%esp)
08203efd +0x685:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203f05 +0x68d:  movl   $0x9b3e,(%esp)
08203f0c +0x694:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203f11 +0x699:  mov    %eax,%ebx
08203f13 +0x69b:  jmp    08204193 <+0x91b>
08203f18 +0x6a0:  mov    -0xc(%ebp),%edx
08203f1b +0x6a3:  lea    -0x1d0(%ebp),%ecx
08203f21 +0x6a9:  mov    %edx,%eax
08203f23 +0x6ab:  add    %eax,%eax
08203f25 +0x6ad:  add    %edx,%eax
08203f27 +0x6af:  shl    $0x2,%eax
08203f2a +0x6b2:  add    %edx,%eax
08203f2c +0x6b4:  add    $0x140,%eax
08203f31 +0x6b9:  lea    (%ecx,%eax,1),%eax
08203f34 +0x6bc:  add    $0x15,%eax
08203f37 +0x6bf:  movl   $0x4,0x8(%esp)
08203f3f +0x6c7:  mov    %eax,0x4(%esp)
08203f43 +0x6cb:  mov    0x10(%ebp),%eax
08203f46 +0x6ce:  mov    %eax,(%esp)
08203f49 +0x6d1:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
08203f4e +0x6d6:  xor    $0x1,%eax
08203f51 +0x6d9:  test   %al,%al
08203f53 +0x6db:  je     08203f80 <+0x708>
08203f55 +0x6dd:  movl   $0x0,0xc(%esp)
08203f5d +0x6e5:  movl   $0x0,0x8(%esp)
08203f65 +0x6ed:  movl   $&_ZZN31Dispatcher_GatheringPartyStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08203f6d +0x6f5:  movl   $0x9b47,(%esp)
08203f74 +0x6fc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08203f79 +0x701:  mov    %eax,%ebx
08203f7b +0x703:  jmp    08204193 <+0x91b>
08203f80 +0x708:  addl   $0x1,-0xc(%ebp)
08203f84 +0x70c:  movzwl -0x86(%ebp),%eax
08203f8b +0x713:  movzwl %ax,%eax
08203f8e +0x716:  cmp    -0xc(%ebp),%eax
08203f91 +0x719:  setg   %al
08203f94 +0x71c:  test   %al,%al
08203f96 +0x71e:  jne    08203df8 <+0x580>
08203f9c +0x724:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08203fa1 +0x729:  movl   $0x9b4e,0x8(%esp)
08203fa9 +0x731:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
08203fb1 +0x739:  mov    %eax,(%esp)
08203fb4 +0x73c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08203fb9 +0x741:  movl   $0x1,0x8(%esp)
08203fc1 +0x749:  mov    %eax,0x4(%esp)
08203fc5 +0x74d:  lea    -0x1c(%ebp),%eax
08203fc8 +0x750:  mov    %eax,(%esp)
08203fcb +0x753:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08203fd0 +0x758:  lea    -0x1c(%ebp),%eax
08203fd3 +0x75b:  mov    %eax,(%esp)
08203fd6 +0x75e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08203fdb +0x763:  movl   $0x8e,0x4(%esp)
08203fe3 +0x76b:  mov    %eax,(%esp)
08203fe6 +0x76e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08203feb +0x773:  lea    -0x1c(%ebp),%eax
08203fee +0x776:  mov    %eax,(%esp)
08203ff1 +0x779:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08203ff6 +0x77e:  movl   $0xffffffff,0x4(%esp)
08203ffe +0x786:  mov    %eax,(%esp)
08204001 +0x789:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08204006 +0x78e:  lea    -0x1c(%ebp),%eax
08204009 +0x791:  mov    %eax,(%esp)
0820400c +0x794:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08204011 +0x799:  mov    %eax,(%esp)
08204014 +0x79c:  call   08237932 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcfdc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcfdc
08204019 +0x7a1:  mov    %eax,-0x14(%ebp)
0820401c +0x7a4:  movl   $0x1c8,0x8(%esp)
08204024 +0x7ac:  movl   $0x0,0x4(%esp)
0820402c +0x7b4:  mov    -0x14(%ebp),%eax
0820402f +0x7b7:  mov    %eax,(%esp)
08204032 +0x7ba:  call   0807dcc0 <_init+0x5b8>
08204037 +0x7bf:  mov    -0x14(%ebp),%eax
0820403a +0x7c2:  mov    0xc(%ebp),%edx
0820403d +0x7c5:  add    $0xe0,%edx
08204043 +0x7cb:  movl   $0x10,0x8(%esp)
0820404b +0x7d3:  mov    %eax,0x4(%esp)
0820404f +0x7d7:  mov    %edx,(%esp)
08204052 +0x7da:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
08204057 +0x7df:  mov    0xc(%ebp),%eax
0820405a +0x7e2:  mov    %eax,(%esp)
0820405d +0x7e5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08204062 +0x7ea:  mov    -0x14(%ebp),%edx
08204065 +0x7ed:  mov    %eax,0x10(%edx)
08204068 +0x7f0:  mov    0xc(%ebp),%eax
0820406b +0x7f3:  add    $0xe0,%eax
08204070 +0x7f8:  mov    %eax,(%esp)
08204073 +0x7fb:  call   08236de0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc48a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc48a
08204078 +0x800:  movsbl %al,%edx
0820407b +0x803:  mov    -0x14(%ebp),%eax
0820407e +0x806:  mov    %edx,0x14(%eax)
08204081 +0x809:  mov    -0x1c2(%ebp),%edx
08204087 +0x80f:  mov    -0x14(%ebp),%eax
0820408a +0x812:  mov    %edx,0x18(%eax)
0820408d +0x815:  mov    -0x1be(%ebp),%edx
08204093 +0x81b:  mov    -0x14(%ebp),%eax
08204096 +0x81e:  mov    %edx,0x1c(%eax)
08204099 +0x821:  movzbl -0x1ba(%ebp),%edx
082040a0 +0x828:  mov    -0x14(%ebp),%eax
082040a3 +0x82b:  mov    %dl,0x20(%eax)
082040a6 +0x82e:  movzbl -0x1b9(%ebp),%edx
082040ad +0x835:  mov    -0x14(%ebp),%eax
082040b0 +0x838:  mov    %dl,0x21(%eax)
082040b3 +0x83b:  mov    -0x1b8(%ebp),%edx
082040b9 +0x841:  mov    -0x14(%ebp),%eax
082040bc +0x844:  mov    %edx,0x22(%eax)
082040bf +0x847:  movzwl -0x1b4(%ebp),%edx
082040c6 +0x84e:  mov    -0x14(%ebp),%eax
082040c9 +0x851:  mov    %dx,0x26(%eax)
082040cd +0x855:  movzwl -0x1b4(%ebp),%eax
082040d4 +0x85c:  movzwl %ax,%edx
082040d7 +0x85f:  mov    %edx,%eax
082040d9 +0x861:  shl    $0x2,%eax
082040dc +0x864:  add    %edx,%eax
082040de +0x866:  add    %eax,%eax
082040e0 +0x868:  mov    -0x14(%ebp),%edx
082040e3 +0x86b:  add    $0x28,%edx
082040e6 +0x86e:  mov    %eax,0x8(%esp)
082040ea +0x872:  lea    -0x1d0(%ebp),%eax
082040f0 +0x878:  add    $0x1e,%eax
082040f3 +0x87b:  mov    %eax,0x4(%esp)
082040f7 +0x87f:  mov    %edx,(%esp)
082040fa +0x882:  call   0807d8a0 <_init+0x198>
082040ff +0x887:  movzwl -0x86(%ebp),%edx
08204106 +0x88e:  mov    -0x14(%ebp),%eax
08204109 +0x891:  mov    %dx,0x15e(%eax)
08204110 +0x898:  movzwl -0x86(%ebp),%eax
08204117 +0x89f:  movzwl %ax,%edx
0820411a +0x8a2:  mov    %edx,%eax
0820411c +0x8a4:  add    %eax,%eax
0820411e +0x8a6:  add    %edx,%eax
08204120 +0x8a8:  shl    $0x2,%eax
08204123 +0x8ab:  lea    (%eax,%edx,1),%edx
08204126 +0x8ae:  mov    -0x14(%ebp),%eax
08204129 +0x8b1:  add    $0x160,%eax
0820412e +0x8b6:  mov    %edx,0x8(%esp)
08204132 +0x8ba:  lea    -0x1d0(%ebp),%edx
08204138 +0x8c0:  add    $0x14c,%edx
0820413e +0x8c6:  mov    %edx,0x4(%esp)
08204142 +0x8ca:  mov    %eax,(%esp)
08204145 +0x8cd:  call   0807d8a0 <_init+0x198>
0820414a +0x8d2:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0820414f +0x8d7:  lea    -0x1c(%ebp),%edx
08204152 +0x8da:  mov    %edx,0x8(%esp)
08204156 +0x8de:  movl   $0x4,0x4(%esp)
0820415e +0x8e6:  mov    %eax,(%esp)
08204161 +0x8e9:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08204166 +0x8ee:  mov    $0x0,%ebx
0820416b +0x8f3:  lea    -0x1c(%ebp),%eax
0820416e +0x8f6:  mov    %eax,(%esp)
08204171 +0x8f9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08204176 +0x8fe:  jmp    08204193 <+0x91b>
08204178 +0x900:  mov    %edx,%ebx
0820417a +0x902:  mov    %eax,%esi
0820417c +0x904:  lea    -0x1c(%ebp),%eax
0820417f +0x907:  mov    %eax,(%esp)
08204182 +0x90a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08204187 +0x90f:  mov    %esi,%eax
08204189 +0x911:  mov    %ebx,%edx
0820418b +0x913:  mov    %eax,(%esp)
0820418e +0x916:  call   08ae3750 <_Unwind_Resume>
08204193 +0x91b:  mov    %ebx,%eax
08204195 +0x91d:  add    $0x1f0,%esp
0820419b +0x923:  pop    %ebx
0820419c +0x924:  pop    %esi
0820419d +0x925:  pop    %ebp
0820419e +0x926:  ret
0820419f +0x927:  nop
```

## 反编译 C

```c
// Dispatcher_GatheringPartyStatus::dispatch_sig @ 0x8203878

/* Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_GatheringPartyStatus::dispatch_sig
          (Dispatcher_GatheringPartyStatus *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  GameWorld *this_00;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined1 local_1d4 [13];
  uchar uStack_1c7;
  int local_1c6;
  int local_1c2;
  SIG_PARTY_STATUS local_1be;
  SIG_PARTY_STATUS local_1bd;
  uint local_1bc;
  ushort local_1b8;
  uchar auStack_1b6 [6];
  uint auStack_1b0 [73];
  ushort local_8a;
  uchar uStack_88;
  uint auStack_87 [2];
  char acStack_7f [95];
  CStreamGuard local_20 [8];
  SIG_PARTY_STATUS *local_18;
  int local_14;
  int local_10;
  
  memset(local_1d4,0,0x1b4);
  cVar1 = PacketBuf::get_byte(param_2,&uStack_1c7);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_2,&local_1c6);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_1c2);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_2,(uchar *)&local_1be);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_2,(uchar *)&local_1bd);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&local_1bc);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,&local_1b8);
              if (cVar1 == '\x01') {
                if (local_1b8 < 0x1f) {
                  if (local_1b8 != 0) {
                    for (local_14 = 0; local_14 < (int)(uint)local_1b8; local_14 = local_14 + 1) {
                      cVar1 = PacketBuf::get_byte(param_2,auStack_1b6 + local_14 * 10);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b09,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_byte(param_2,auStack_1b6 + local_14 * 10 + 1);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b0a,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_binary
                                        (param_2,(char *)(auStack_1b6 + local_14 * 10 + 2),4);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b0b,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_1b0 + local_14 * 10))
                      ;
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b0c,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                    }
                  }
                  cVar1 = PacketBuf::get_short(param_2,&local_8a);
                  if (cVar1 == '\x01') {
                    this_00 = (GameWorld *)G_GameWorld();
                    cVar1 = GameWorld::IsPVPChannel(this_00);
                    if (cVar1 == '\0') {
                      if (4 < local_8a) {
                        LogManager::logFormat
                                  (1,"PacketDispatcher_Impl_1.cpp",
                                   "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0x9b24,"recv_pk_party_status.party_num > PARTY_PLAYER_MAX\n");
                        uVar2 = LineFunc(0x9b25,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                    }
                    else if (8 < local_8a) {
                      LogManager::logFormat
                                (1,"PacketDispatcher_Impl_1.cpp",
                                 "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0x9b1c,"recv_pk_party_status.party_num > MAX_PVP_MEM\n");
                      uVar2 = LineFunc(0x9b1d,
                                       "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                      return uVar2;
                    }
                    for (local_10 = 0; local_10 < (int)(uint)local_8a; local_10 = local_10 + 1) {
                      cVar1 = PacketBuf::get_byte(param_2,&uStack_88 + local_10 * 0xd);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b2e,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_87 + local_10 * 0xd))
                      ;
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b36,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_int(param_2,(uint *)((int)auStack_87 +
                                                                 local_10 * 0xd + 4));
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b3e,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                      cVar1 = PacketBuf::get_binary(param_2,acStack_7f + local_10 * 0xd,4);
                      if (cVar1 != '\x01') {
                        uVar2 = LineFunc(0x9b47,
                                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                        return uVar2;
                      }
                    }
                    pSVar3 = (Stream *)
                             StreamPool::Acquire(GlobalData::s_stream_pool,
                                                 "PacketDispatcher_Impl_1.cpp",0x9b4e);
                    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
                    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08203fe6 to 08204165 has its CatchHandler @ 08204178 */
                    CStreamGuard::operator<<(pCVar4,0x8e);
                    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    CStreamGuard::operator<<(pCVar4,-1);
                    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
                    local_18 = CStreamGuard::GetInBuffer<SIG_PARTY_STATUS>(pCVar4);
                    memset(local_18,0,0x1c8);
                    CNetwork<4096,450000>::GetPeerIP2
                              ((CNetwork<4096,450000> *)(param_1 + 0xe0),(char *)local_18,0x10);
                    uVar2 = CUser::get_acc_id(param_1);
                    *(undefined4 *)(local_18 + 0x10) = uVar2;
                    cVar1 = CNetwork<4096,450000>::get_nat_type
                                      ((CNetwork<4096,450000> *)(param_1 + 0xe0));
                    *(int *)(local_18 + 0x14) = (int)cVar1;
                    *(int *)(local_18 + 0x18) = local_1c6;
                    *(int *)(local_18 + 0x1c) = local_1c2;
                    local_18[0x20] = local_1be;
                    local_18[0x21] = local_1bd;
                    *(uint *)(local_18 + 0x22) = local_1bc;
                    *(ushort *)(local_18 + 0x26) = local_1b8;
                    memcpy(local_18 + 0x28,auStack_1b6,(uint)local_1b8 * 10);
                    *(ushort *)(local_18 + 0x15e) = local_8a;
                    memcpy(local_18 + 0x160,&uStack_88,(uint)local_8a * 0xd);
                    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_20);
                    uVar2 = 0;
                    CStreamGuard::~CStreamGuard(local_20);
                  }
                  else {
                    uVar2 = LineFunc(0x9b12,
                                     "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  LogManager::logFormat
                            (1,"PacketDispatcher_Impl_1.cpp",
                             "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                             ,0x9aff,"recv_pk_party_status.try_num > %d\n",0x1e);
                  uVar2 = LineFunc(0x9b00,
                                   "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0x9afa,
                                 "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x9af8,
                               "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x9af6,
                             "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x9af4,
                           "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x9af2,
                         "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x9aef,
                       "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x9aeb,
                     "virtual int Dispatcher_GatheringPartyStatus::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}
```
