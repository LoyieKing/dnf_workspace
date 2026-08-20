# Init

`_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv`

`ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init()`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DatabaseDispatcher` | `0x08184d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184d40  _ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv
#           ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init()
# range [0x08184d40, 0x081850df]
08184d40 +0x000:  push   %ebp
08184d41 +0x001:  mov    %esp,%ebp
08184d43 +0x003:  push   %ebx
08184d44 +0x004:  sub    $0x24,%esp
08184d47 +0x007:  movl   $0x0,-0xc(%ebp)
08184d4e +0x00e:  movl   $0x8,(%esp)
08184d55 +0x015:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184d5a +0x01a:  mov    %eax,%ebx
08184d5c +0x01c:  mov    %ebx,%eax
08184d5e +0x01e:  mov    %eax,(%esp)
08184d61 +0x021:  call   08186836 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x200>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x200
08184d66 +0x026:  mov    %ebx,%eax
08184d68 +0x028:  mov    %eax,-0xc(%ebp)
08184d6b +0x02b:  cmpl   $0x0,-0xc(%ebp)
08184d6f +0x02f:  je     08184da0 <+0x60>
08184d71 +0x031:  mov    -0xc(%ebp),%eax
08184d74 +0x034:  mov    %eax,(%esp)
08184d77 +0x037:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184d7c +0x03c:  mov    -0xc(%ebp),%edx
08184d7f +0x03f:  mov    %edx,0x8(%esp)
08184d83 +0x043:  mov    %eax,0x4(%esp)
08184d87 +0x047:  mov    0x8(%ebp),%eax
08184d8a +0x04a:  mov    %eax,(%esp)
08184d8d +0x04d:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184d92 +0x052:  xor    $0x1,%eax
08184d95 +0x055:  test   %al,%al
08184d97 +0x057:  je     08184da0 <+0x60>
08184d99 +0x059:  mov    $0x1,%eax
08184d9e +0x05e:  jmp    08184da5 <+0x65>
08184da0 +0x060:  mov    $0x0,%eax
08184da5 +0x065:  test   %al,%al
08184da7 +0x067:  je     08184db3 <+0x73>
08184da9 +0x069:  mov    $0x0,%eax
08184dae +0x06e:  jmp    081850da <+0x39a>
08184db3 +0x073:  movl   $0x8,(%esp)
08184dba +0x07a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184dbf +0x07f:  mov    %eax,%ebx
08184dc1 +0x081:  mov    %ebx,%eax
08184dc3 +0x083:  mov    %eax,(%esp)
08184dc6 +0x086:  call   081868a8 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x272>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x272
08184dcb +0x08b:  mov    %ebx,%eax
08184dcd +0x08d:  mov    %eax,-0xc(%ebp)
08184dd0 +0x090:  cmpl   $0x0,-0xc(%ebp)
08184dd4 +0x094:  je     08184e05 <+0xc5>
08184dd6 +0x096:  mov    -0xc(%ebp),%eax
08184dd9 +0x099:  mov    %eax,(%esp)
08184ddc +0x09c:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184de1 +0x0a1:  mov    -0xc(%ebp),%edx
08184de4 +0x0a4:  mov    %edx,0x8(%esp)
08184de8 +0x0a8:  mov    %eax,0x4(%esp)
08184dec +0x0ac:  mov    0x8(%ebp),%eax
08184def +0x0af:  mov    %eax,(%esp)
08184df2 +0x0b2:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184df7 +0x0b7:  xor    $0x1,%eax
08184dfa +0x0ba:  test   %al,%al
08184dfc +0x0bc:  je     08184e05 <+0xc5>
08184dfe +0x0be:  mov    $0x1,%eax
08184e03 +0x0c3:  jmp    08184e0a <+0xca>
08184e05 +0x0c5:  mov    $0x0,%eax
08184e0a +0x0ca:  test   %al,%al
08184e0c +0x0cc:  je     08184e18 <+0xd8>
08184e0e +0x0ce:  mov    $0x0,%eax
08184e13 +0x0d3:  jmp    081850da <+0x39a>
08184e18 +0x0d8:  movl   $0x8,(%esp)
08184e1f +0x0df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184e24 +0x0e4:  mov    %eax,%ebx
08184e26 +0x0e6:  mov    %ebx,%eax
08184e28 +0x0e8:  mov    %eax,(%esp)
08184e2b +0x0eb:  call   0818691a <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x2e4>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x2e4
08184e30 +0x0f0:  mov    %ebx,%eax
08184e32 +0x0f2:  mov    %eax,-0xc(%ebp)
08184e35 +0x0f5:  cmpl   $0x0,-0xc(%ebp)
08184e39 +0x0f9:  je     08184e6a <+0x12a>
08184e3b +0x0fb:  mov    -0xc(%ebp),%eax
08184e3e +0x0fe:  mov    %eax,(%esp)
08184e41 +0x101:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184e46 +0x106:  mov    -0xc(%ebp),%edx
08184e49 +0x109:  mov    %edx,0x8(%esp)
08184e4d +0x10d:  mov    %eax,0x4(%esp)
08184e51 +0x111:  mov    0x8(%ebp),%eax
08184e54 +0x114:  mov    %eax,(%esp)
08184e57 +0x117:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184e5c +0x11c:  xor    $0x1,%eax
08184e5f +0x11f:  test   %al,%al
08184e61 +0x121:  je     08184e6a <+0x12a>
08184e63 +0x123:  mov    $0x1,%eax
08184e68 +0x128:  jmp    08184e6f <+0x12f>
08184e6a +0x12a:  mov    $0x0,%eax
08184e6f +0x12f:  test   %al,%al
08184e71 +0x131:  je     08184e7d <+0x13d>
08184e73 +0x133:  mov    $0x0,%eax
08184e78 +0x138:  jmp    081850da <+0x39a>
08184e7d +0x13d:  movl   $0x8,(%esp)
08184e84 +0x144:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184e89 +0x149:  mov    %eax,%ebx
08184e8b +0x14b:  mov    %ebx,%eax
08184e8d +0x14d:  mov    %eax,(%esp)
08184e90 +0x150:  call   0818698c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x356>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x356
08184e95 +0x155:  mov    %ebx,%eax
08184e97 +0x157:  mov    %eax,-0xc(%ebp)
08184e9a +0x15a:  cmpl   $0x0,-0xc(%ebp)
08184e9e +0x15e:  je     08184ecf <+0x18f>
08184ea0 +0x160:  mov    -0xc(%ebp),%eax
08184ea3 +0x163:  mov    %eax,(%esp)
08184ea6 +0x166:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184eab +0x16b:  mov    -0xc(%ebp),%edx
08184eae +0x16e:  mov    %edx,0x8(%esp)
08184eb2 +0x172:  mov    %eax,0x4(%esp)
08184eb6 +0x176:  mov    0x8(%ebp),%eax
08184eb9 +0x179:  mov    %eax,(%esp)
08184ebc +0x17c:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184ec1 +0x181:  xor    $0x1,%eax
08184ec4 +0x184:  test   %al,%al
08184ec6 +0x186:  je     08184ecf <+0x18f>
08184ec8 +0x188:  mov    $0x1,%eax
08184ecd +0x18d:  jmp    08184ed4 <+0x194>
08184ecf +0x18f:  mov    $0x0,%eax
08184ed4 +0x194:  test   %al,%al
08184ed6 +0x196:  je     08184ee2 <+0x1a2>
08184ed8 +0x198:  mov    $0x0,%eax
08184edd +0x19d:  jmp    081850da <+0x39a>
08184ee2 +0x1a2:  movl   $0x8,(%esp)
08184ee9 +0x1a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184eee +0x1ae:  mov    %eax,%ebx
08184ef0 +0x1b0:  mov    %ebx,%eax
08184ef2 +0x1b2:  mov    %eax,(%esp)
08184ef5 +0x1b5:  call   081869fe <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x3c8>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x3c8
08184efa +0x1ba:  mov    %ebx,%eax
08184efc +0x1bc:  mov    %eax,-0xc(%ebp)
08184eff +0x1bf:  cmpl   $0x0,-0xc(%ebp)
08184f03 +0x1c3:  je     08184f34 <+0x1f4>
08184f05 +0x1c5:  mov    -0xc(%ebp),%eax
08184f08 +0x1c8:  mov    %eax,(%esp)
08184f0b +0x1cb:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184f10 +0x1d0:  mov    -0xc(%ebp),%edx
08184f13 +0x1d3:  mov    %edx,0x8(%esp)
08184f17 +0x1d7:  mov    %eax,0x4(%esp)
08184f1b +0x1db:  mov    0x8(%ebp),%eax
08184f1e +0x1de:  mov    %eax,(%esp)
08184f21 +0x1e1:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184f26 +0x1e6:  xor    $0x1,%eax
08184f29 +0x1e9:  test   %al,%al
08184f2b +0x1eb:  je     08184f34 <+0x1f4>
08184f2d +0x1ed:  mov    $0x1,%eax
08184f32 +0x1f2:  jmp    08184f39 <+0x1f9>
08184f34 +0x1f4:  mov    $0x0,%eax
08184f39 +0x1f9:  test   %al,%al
08184f3b +0x1fb:  je     08184f47 <+0x207>
08184f3d +0x1fd:  mov    $0x0,%eax
08184f42 +0x202:  jmp    081850da <+0x39a>
08184f47 +0x207:  movl   $0x8,(%esp)
08184f4e +0x20e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184f53 +0x213:  mov    %eax,%ebx
08184f55 +0x215:  mov    %ebx,%eax
08184f57 +0x217:  mov    %eax,(%esp)
08184f5a +0x21a:  call   08186a70 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x43a>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x43a
08184f5f +0x21f:  mov    %ebx,%eax
08184f61 +0x221:  mov    %eax,-0xc(%ebp)
08184f64 +0x224:  cmpl   $0x0,-0xc(%ebp)
08184f68 +0x228:  je     08184f99 <+0x259>
08184f6a +0x22a:  mov    -0xc(%ebp),%eax
08184f6d +0x22d:  mov    %eax,(%esp)
08184f70 +0x230:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184f75 +0x235:  mov    -0xc(%ebp),%edx
08184f78 +0x238:  mov    %edx,0x8(%esp)
08184f7c +0x23c:  mov    %eax,0x4(%esp)
08184f80 +0x240:  mov    0x8(%ebp),%eax
08184f83 +0x243:  mov    %eax,(%esp)
08184f86 +0x246:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184f8b +0x24b:  xor    $0x1,%eax
08184f8e +0x24e:  test   %al,%al
08184f90 +0x250:  je     08184f99 <+0x259>
08184f92 +0x252:  mov    $0x1,%eax
08184f97 +0x257:  jmp    08184f9e <+0x25e>
08184f99 +0x259:  mov    $0x0,%eax
08184f9e +0x25e:  test   %al,%al
08184fa0 +0x260:  je     08184fac <+0x26c>
08184fa2 +0x262:  mov    $0x0,%eax
08184fa7 +0x267:  jmp    081850da <+0x39a>
08184fac +0x26c:  movl   $0x8,(%esp)
08184fb3 +0x273:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08184fb8 +0x278:  mov    %eax,%ebx
08184fba +0x27a:  mov    %ebx,%eax
08184fbc +0x27c:  mov    %eax,(%esp)
08184fbf +0x27f:  call   08186ae2 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x4ac>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x4ac
08184fc4 +0x284:  mov    %ebx,%eax
08184fc6 +0x286:  mov    %eax,-0xc(%ebp)
08184fc9 +0x289:  cmpl   $0x0,-0xc(%ebp)
08184fcd +0x28d:  je     08184ffe <+0x2be>
08184fcf +0x28f:  mov    -0xc(%ebp),%eax
08184fd2 +0x292:  mov    %eax,(%esp)
08184fd5 +0x295:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
08184fda +0x29a:  mov    -0xc(%ebp),%edx
08184fdd +0x29d:  mov    %edx,0x8(%esp)
08184fe1 +0x2a1:  mov    %eax,0x4(%esp)
08184fe5 +0x2a5:  mov    0x8(%ebp),%eax
08184fe8 +0x2a8:  mov    %eax,(%esp)
08184feb +0x2ab:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08184ff0 +0x2b0:  xor    $0x1,%eax
08184ff3 +0x2b3:  test   %al,%al
08184ff5 +0x2b5:  je     08184ffe <+0x2be>
08184ff7 +0x2b7:  mov    $0x1,%eax
08184ffc +0x2bc:  jmp    08185003 <+0x2c3>
08184ffe +0x2be:  mov    $0x0,%eax
08185003 +0x2c3:  test   %al,%al
08185005 +0x2c5:  je     08185011 <+0x2d1>
08185007 +0x2c7:  mov    $0x0,%eax
0818500c +0x2cc:  jmp    081850da <+0x39a>
08185011 +0x2d1:  movl   $0x8,(%esp)
08185018 +0x2d8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0818501d +0x2dd:  mov    %eax,%ebx
0818501f +0x2df:  mov    %ebx,%eax
08185021 +0x2e1:  mov    %eax,(%esp)
08185024 +0x2e4:  call   08186b54 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x51e>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x51e
08185029 +0x2e9:  mov    %ebx,%eax
0818502b +0x2eb:  mov    %eax,-0xc(%ebp)
0818502e +0x2ee:  cmpl   $0x0,-0xc(%ebp)
08185032 +0x2f2:  je     08185063 <+0x323>
08185034 +0x2f4:  mov    -0xc(%ebp),%eax
08185037 +0x2f7:  mov    %eax,(%esp)
0818503a +0x2fa:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
0818503f +0x2ff:  mov    -0xc(%ebp),%edx
08185042 +0x302:  mov    %edx,0x8(%esp)
08185046 +0x306:  mov    %eax,0x4(%esp)
0818504a +0x30a:  mov    0x8(%ebp),%eax
0818504d +0x30d:  mov    %eax,(%esp)
08185050 +0x310:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
08185055 +0x315:  xor    $0x1,%eax
08185058 +0x318:  test   %al,%al
0818505a +0x31a:  je     08185063 <+0x323>
0818505c +0x31c:  mov    $0x1,%eax
08185061 +0x321:  jmp    08185068 <+0x328>
08185063 +0x323:  mov    $0x0,%eax
08185068 +0x328:  test   %al,%al
0818506a +0x32a:  je     08185073 <+0x333>
0818506c +0x32c:  mov    $0x0,%eax
08185071 +0x331:  jmp    081850da <+0x39a>
08185073 +0x333:  movl   $0x8,(%esp)
0818507a +0x33a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0818507f +0x33f:  mov    %eax,%ebx
08185081 +0x341:  mov    %ebx,%eax
08185083 +0x343:  mov    %eax,(%esp)
08185086 +0x346:  call   08186bc6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x590>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x590
0818508b +0x34b:  mov    %ebx,%eax
0818508d +0x34d:  mov    %eax,-0xc(%ebp)
08185090 +0x350:  cmpl   $0x0,-0xc(%ebp)
08185094 +0x354:  je     081850c5 <+0x385>
08185096 +0x356:  mov    -0xc(%ebp),%eax
08185099 +0x359:  mov    %eax,(%esp)
0818509c +0x35c:  call   08186800 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1ca
081850a1 +0x361:  mov    -0xc(%ebp),%edx
081850a4 +0x364:  mov    %edx,0x8(%esp)
081850a8 +0x368:  mov    %eax,0x4(%esp)
081850ac +0x36c:  mov    0x8(%ebp),%eax
081850af +0x36f:  mov    %eax,(%esp)
081850b2 +0x372:  call   08185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
081850b7 +0x377:  xor    $0x1,%eax
081850ba +0x37a:  test   %al,%al
081850bc +0x37c:  je     081850c5 <+0x385>
081850be +0x37e:  mov    $0x1,%eax
081850c3 +0x383:  jmp    081850ca <+0x38a>
081850c5 +0x385:  mov    $0x0,%eax
081850ca +0x38a:  test   %al,%al
081850cc +0x38c:  je     081850d5 <+0x395>
081850ce +0x38e:  mov    $0x0,%eax
081850d3 +0x393:  jmp    081850da <+0x39a>
081850d5 +0x395:  mov    $0x1,%eax
081850da +0x39a:  add    $0x24,%esp
081850dd +0x39d:  pop    %ebx
081850de +0x39e:  pop    %ebp
081850df +0x39f:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init @ 0x8184d40

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init() */

bool __thiscall ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init(Arad_DatabaseDispatcher *this)

{
  bool bVar1;
  char cVar2;
  Arad_DB_kAradEventItemLog *this_00;
  undefined4 uVar3;
  Arad_DB_kSetCharacCreateTime *this_01;
  Arad_DB_kLoadRewardEventItem *this_02;
  Arad_DB_kSaveRewardEventItem *this_03;
  Arad_DB_kSaveServerState *this_04;
  Arad_DB_kLoadServerState *this_05;
  Arad_DB_kAvatarHiddenOptionSave *this_06;
  Arad_DB_kAvatarEnduranceSave *this_07;
  Arad_DB_kResetLimitedCreateCharacPerMid *this_08;
  
  this_00 = operator_new(8);
  Arad_DB_kAradEventItemLog::Arad_DB_kAradEventItemLog(this_00);
  if (this_00 == (Arad_DB_kAradEventItemLog *)0x0) {
LAB_08184da0:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_00);
    cVar2 = _registDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_08184da0;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  Arad_DB_kSetCharacCreateTime::Arad_DB_kSetCharacCreateTime(this_01);
  if (this_01 == (Arad_DB_kSetCharacCreateTime *)0x0) {
LAB_08184e05:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_01);
    cVar2 = _registDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_08184e05;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  Arad_DB_kLoadRewardEventItem::Arad_DB_kLoadRewardEventItem(this_02);
  if (this_02 == (Arad_DB_kLoadRewardEventItem *)0x0) {
LAB_08184e6a:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_02);
    cVar2 = _registDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_08184e6a;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  Arad_DB_kSaveRewardEventItem::Arad_DB_kSaveRewardEventItem(this_03);
  if (this_03 == (Arad_DB_kSaveRewardEventItem *)0x0) {
LAB_08184ecf:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_03);
    cVar2 = _registDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_08184ecf;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  Arad_DB_kSaveServerState::Arad_DB_kSaveServerState(this_04);
  if (this_04 == (Arad_DB_kSaveServerState *)0x0) {
LAB_08184f34:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_04);
    cVar2 = _registDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_08184f34;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  Arad_DB_kLoadServerState::Arad_DB_kLoadServerState(this_05);
  if (this_05 == (Arad_DB_kLoadServerState *)0x0) {
LAB_08184f99:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_05);
    cVar2 = _registDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_08184f99;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  Arad_DB_kAvatarHiddenOptionSave::Arad_DB_kAvatarHiddenOptionSave(this_06);
  if (this_06 == (Arad_DB_kAvatarHiddenOptionSave *)0x0) {
LAB_08184ffe:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_06);
    cVar2 = _registDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_08184ffe;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  Arad_DB_kAvatarEnduranceSave::Arad_DB_kAvatarEnduranceSave(this_07);
  if (this_07 == (Arad_DB_kAvatarEnduranceSave *)0x0) {
LAB_08185063:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_07);
    cVar2 = _registDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_08185063;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  Arad_DB_kResetLimitedCreateCharacPerMid::Arad_DB_kResetLimitedCreateCharacPerMid(this_08);
  if (this_08 != (Arad_DB_kResetLimitedCreateCharacPerMid *)0x0) {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_08);
    cVar2 = _registDispatcher(this,uVar3,this_08);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_081850ca;
    }
  }
  bVar1 = false;
LAB_081850ca:
  return !bVar1;
}
```
