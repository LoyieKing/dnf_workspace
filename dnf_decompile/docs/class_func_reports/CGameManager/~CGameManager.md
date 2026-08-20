# ~CGameManager

`_ZN12CGameManagerD1Ev`

`CGameManager::~CGameManager()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08293d1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08293d1a  _ZN12CGameManagerD1Ev
#           CGameManager::~CGameManager()
# range [0x08293d1a, 0x082941d7]
08293d1a +0x000:  push   %ebp
08293d1b +0x001:  mov    %esp,%ebp
08293d1d +0x003:  push   %esi
08293d1e +0x004:  push   %ebx
08293d1f +0x005:  sub    $0x10,%esp
08293d22 +0x008:  mov    0x8(%ebp),%eax
08293d25 +0x00b:  mov    0x2fc(%eax),%eax
08293d2b +0x011:  test   %eax,%eax
08293d2d +0x013:  je     08293d4c <+0x32>
08293d2f +0x015:  mov    0x8(%ebp),%eax
08293d32 +0x018:  mov    0x2fc(%eax),%ebx
08293d38 +0x01e:  test   %ebx,%ebx
08293d3a +0x020:  je     08293d4c <+0x32>
08293d3c +0x022:  mov    %ebx,(%esp)
08293d3f +0x025:  call   08269bf8 <_ZN10QuickParty24CQuickPartySystemManagerD1Ev>  ; QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager()
08293d44 +0x02a:  mov    %ebx,(%esp)
08293d47 +0x02d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08293d4c +0x032:  mov    0x8(%ebp),%eax
08293d4f +0x035:  movl   $0x0,0x2fc(%eax)
08293d59 +0x03f:  mov    0x8(%ebp),%eax
08293d5c +0x042:  mov    0x300(%eax),%eax
08293d62 +0x048:  test   %eax,%eax
08293d64 +0x04a:  je     08293d83 <+0x69>
08293d66 +0x04c:  mov    0x8(%ebp),%eax
08293d69 +0x04f:  mov    0x300(%eax),%ebx
08293d6f +0x055:  test   %ebx,%ebx
08293d71 +0x057:  je     08293d83 <+0x69>
08293d73 +0x059:  mov    %ebx,(%esp)
08293d76 +0x05c:  call   0826d69c <_ZN10QuickParty24CQuickPartyRewardManagerD1Ev>  ; QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager()
08293d7b +0x061:  mov    %ebx,(%esp)
08293d7e +0x064:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08293d83 +0x069:  mov    0x8(%ebp),%eax
08293d86 +0x06c:  movl   $0x0,0x300(%eax)
08293d90 +0x076:  mov    0x8(%ebp),%eax
08293d93 +0x079:  mov    0x314(%eax),%eax
08293d99 +0x07f:  test   %eax,%eax
08293d9b +0x081:  je     08293dc7 <+0xad>
08293d9d +0x083:  mov    0x8(%ebp),%eax
08293da0 +0x086:  mov    0x314(%eax),%ebx
08293da6 +0x08c:  test   %ebx,%ebx
08293da8 +0x08e:  je     08293dba <+0xa0>
08293daa +0x090:  mov    %ebx,(%esp)
08293dad +0x093:  call   082aa812 <_GLOBAL__I__ZN4CLog5this_E+0x6c39>  ; global constructors keyed to CLog::this_+0x6c39
08293db2 +0x098:  mov    %ebx,(%esp)
08293db5 +0x09b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08293dba +0x0a0:  mov    0x8(%ebp),%eax
08293dbd +0x0a3:  movl   $0x0,0x314(%eax)
08293dc7 +0x0ad:  mov    0x8(%ebp),%eax
08293dca +0x0b0:  mov    0x318(%eax),%eax
08293dd0 +0x0b6:  test   %eax,%eax
08293dd2 +0x0b8:  je     08293e0d <+0xf3>
08293dd4 +0x0ba:  mov    0x8(%ebp),%eax
08293dd7 +0x0bd:  mov    0x318(%eax),%ebx
08293ddd +0x0c3:  test   %ebx,%ebx
08293ddf +0x0c5:  je     08293e0d <+0xf3>
08293de1 +0x0c7:  mov    %ebx,(%esp)
08293de4 +0x0ca:  call   080ebc5a <_ZN20CraneMinigameManagerD1Ev>  ; CraneMinigameManager::~CraneMinigameManager()
08293de9 +0x0cf:  mov    %ebx,(%esp)
08293dec +0x0d2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08293df1 +0x0d7:  jmp    08293e0d <+0xf3>
08293df3 +0x0d9:  mov    %edx,%ebx
08293df5 +0x0db:  mov    %eax,%esi
08293df7 +0x0dd:  mov    0x8(%ebp),%eax
08293dfa +0x0e0:  add    $0x2e8,%eax
08293dff +0x0e5:  mov    %eax,(%esp)
08293e02 +0x0e8:  call   082aa7ea <_GLOBAL__I__ZN4CLog5this_E+0x6c11>  ; global constructors keyed to CLog::this_+0x6c11
08293e07 +0x0ed:  mov    %esi,%eax
08293e09 +0x0ef:  mov    %ebx,%edx
08293e0b +0x0f1:  jmp    08293e1f <+0x105>
08293e0d +0x0f3:  mov    0x8(%ebp),%eax
08293e10 +0x0f6:  add    $0x2e8,%eax
08293e15 +0x0fb:  mov    %eax,(%esp)
08293e18 +0x0fe:  call   082aa7ea <_GLOBAL__I__ZN4CLog5this_E+0x6c11>  ; global constructors keyed to CLog::this_+0x6c11
08293e1d +0x103:  jmp    08293e39 <+0x11f>
08293e1f +0x105:  mov    %edx,%ebx
08293e21 +0x107:  mov    %eax,%esi
08293e23 +0x109:  mov    0x8(%ebp),%eax
08293e26 +0x10c:  add    $0x2d4,%eax
08293e2b +0x111:  mov    %eax,(%esp)
08293e2e +0x114:  call   082aa7d6 <_GLOBAL__I__ZN4CLog5this_E+0x6bfd>  ; global constructors keyed to CLog::this_+0x6bfd
08293e33 +0x119:  mov    %esi,%eax
08293e35 +0x11b:  mov    %ebx,%edx
08293e37 +0x11d:  jmp    08293e4b <+0x131>
08293e39 +0x11f:  mov    0x8(%ebp),%eax
08293e3c +0x122:  add    $0x2d4,%eax
08293e41 +0x127:  mov    %eax,(%esp)
08293e44 +0x12a:  call   082aa7d6 <_GLOBAL__I__ZN4CLog5this_E+0x6bfd>  ; global constructors keyed to CLog::this_+0x6bfd
08293e49 +0x12f:  jmp    08293e65 <+0x14b>
08293e4b +0x131:  mov    %edx,%ebx
08293e4d +0x133:  mov    %eax,%esi
08293e4f +0x135:  mov    0x8(%ebp),%eax
08293e52 +0x138:  add    $0x2c0,%eax
08293e57 +0x13d:  mov    %eax,(%esp)
08293e5a +0x140:  call   082aa7c2 <_GLOBAL__I__ZN4CLog5this_E+0x6be9>  ; global constructors keyed to CLog::this_+0x6be9
08293e5f +0x145:  mov    %esi,%eax
08293e61 +0x147:  mov    %ebx,%edx
08293e63 +0x149:  jmp    08293e77 <+0x15d>
08293e65 +0x14b:  mov    0x8(%ebp),%eax
08293e68 +0x14e:  add    $0x2c0,%eax
08293e6d +0x153:  mov    %eax,(%esp)
08293e70 +0x156:  call   082aa7c2 <_GLOBAL__I__ZN4CLog5this_E+0x6be9>  ; global constructors keyed to CLog::this_+0x6be9
08293e75 +0x15b:  jmp    08293e91 <+0x177>
08293e77 +0x15d:  mov    %edx,%ebx
08293e79 +0x15f:  mov    %eax,%esi
08293e7b +0x161:  mov    0x8(%ebp),%eax
08293e7e +0x164:  add    $0x2ac,%eax
08293e83 +0x169:  mov    %eax,(%esp)
08293e86 +0x16c:  call   082aa7ae <_GLOBAL__I__ZN4CLog5this_E+0x6bd5>  ; global constructors keyed to CLog::this_+0x6bd5
08293e8b +0x171:  mov    %esi,%eax
08293e8d +0x173:  mov    %ebx,%edx
08293e8f +0x175:  jmp    08293ea3 <+0x189>
08293e91 +0x177:  mov    0x8(%ebp),%eax
08293e94 +0x17a:  add    $0x2ac,%eax
08293e99 +0x17f:  mov    %eax,(%esp)
08293e9c +0x182:  call   082aa7ae <_GLOBAL__I__ZN4CLog5this_E+0x6bd5>  ; global constructors keyed to CLog::this_+0x6bd5
08293ea1 +0x187:  jmp    08293ebd <+0x1a3>
08293ea3 +0x189:  mov    %edx,%ebx
08293ea5 +0x18b:  mov    %eax,%esi
08293ea7 +0x18d:  mov    0x8(%ebp),%eax
08293eaa +0x190:  add    $0x298,%eax
08293eaf +0x195:  mov    %eax,(%esp)
08293eb2 +0x198:  call   082aa79a <_GLOBAL__I__ZN4CLog5this_E+0x6bc1>  ; global constructors keyed to CLog::this_+0x6bc1
08293eb7 +0x19d:  mov    %esi,%eax
08293eb9 +0x19f:  mov    %ebx,%edx
08293ebb +0x1a1:  jmp    08293ecf <+0x1b5>
08293ebd +0x1a3:  mov    0x8(%ebp),%eax
08293ec0 +0x1a6:  add    $0x298,%eax
08293ec5 +0x1ab:  mov    %eax,(%esp)
08293ec8 +0x1ae:  call   082aa79a <_GLOBAL__I__ZN4CLog5this_E+0x6bc1>  ; global constructors keyed to CLog::this_+0x6bc1
08293ecd +0x1b3:  jmp    08293ee9 <+0x1cf>
08293ecf +0x1b5:  mov    %edx,%ebx
08293ed1 +0x1b7:  mov    %eax,%esi
08293ed3 +0x1b9:  mov    0x8(%ebp),%eax
08293ed6 +0x1bc:  add    $0x284,%eax
08293edb +0x1c1:  mov    %eax,(%esp)
08293ede +0x1c4:  call   082aa786 <_GLOBAL__I__ZN4CLog5this_E+0x6bad>  ; global constructors keyed to CLog::this_+0x6bad
08293ee3 +0x1c9:  mov    %esi,%eax
08293ee5 +0x1cb:  mov    %ebx,%edx
08293ee7 +0x1cd:  jmp    08293efb <+0x1e1>
08293ee9 +0x1cf:  mov    0x8(%ebp),%eax
08293eec +0x1d2:  add    $0x284,%eax
08293ef1 +0x1d7:  mov    %eax,(%esp)
08293ef4 +0x1da:  call   082aa786 <_GLOBAL__I__ZN4CLog5this_E+0x6bad>  ; global constructors keyed to CLog::this_+0x6bad
08293ef9 +0x1df:  jmp    08293f15 <+0x1fb>
08293efb +0x1e1:  mov    %edx,%ebx
08293efd +0x1e3:  mov    %eax,%esi
08293eff +0x1e5:  mov    0x8(%ebp),%eax
08293f02 +0x1e8:  add    $0x270,%eax
08293f07 +0x1ed:  mov    %eax,(%esp)
08293f0a +0x1f0:  call   082aa772 <_GLOBAL__I__ZN4CLog5this_E+0x6b99>  ; global constructors keyed to CLog::this_+0x6b99
08293f0f +0x1f5:  mov    %esi,%eax
08293f11 +0x1f7:  mov    %ebx,%edx
08293f13 +0x1f9:  jmp    08293f27 <+0x20d>
08293f15 +0x1fb:  mov    0x8(%ebp),%eax
08293f18 +0x1fe:  add    $0x270,%eax
08293f1d +0x203:  mov    %eax,(%esp)
08293f20 +0x206:  call   082aa772 <_GLOBAL__I__ZN4CLog5this_E+0x6b99>  ; global constructors keyed to CLog::this_+0x6b99
08293f25 +0x20b:  jmp    08293f41 <+0x227>
08293f27 +0x20d:  mov    %edx,%ebx
08293f29 +0x20f:  mov    %eax,%esi
08293f2b +0x211:  mov    0x8(%ebp),%eax
08293f2e +0x214:  add    $0x25c,%eax
08293f33 +0x219:  mov    %eax,(%esp)
08293f36 +0x21c:  call   082aa75e <_GLOBAL__I__ZN4CLog5this_E+0x6b85>  ; global constructors keyed to CLog::this_+0x6b85
08293f3b +0x221:  mov    %esi,%eax
08293f3d +0x223:  mov    %ebx,%edx
08293f3f +0x225:  jmp    08293f53 <+0x239>
08293f41 +0x227:  mov    0x8(%ebp),%eax
08293f44 +0x22a:  add    $0x25c,%eax
08293f49 +0x22f:  mov    %eax,(%esp)
08293f4c +0x232:  call   082aa75e <_GLOBAL__I__ZN4CLog5this_E+0x6b85>  ; global constructors keyed to CLog::this_+0x6b85
08293f51 +0x237:  jmp    08293f6d <+0x253>
08293f53 +0x239:  mov    %edx,%ebx
08293f55 +0x23b:  mov    %eax,%esi
08293f57 +0x23d:  mov    0x8(%ebp),%eax
08293f5a +0x240:  add    $0x244,%eax
08293f5f +0x245:  mov    %eax,(%esp)
08293f62 +0x248:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
08293f67 +0x24d:  mov    %esi,%eax
08293f69 +0x24f:  mov    %ebx,%edx
08293f6b +0x251:  jmp    08293f7f <+0x265>
08293f6d +0x253:  mov    0x8(%ebp),%eax
08293f70 +0x256:  add    $0x244,%eax
08293f75 +0x25b:  mov    %eax,(%esp)
08293f78 +0x25e:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
08293f7d +0x263:  jmp    08293f99 <+0x27f>
08293f7f +0x265:  mov    %edx,%ebx
08293f81 +0x267:  mov    %eax,%esi
08293f83 +0x269:  mov    0x8(%ebp),%eax
08293f86 +0x26c:  add    $0x22c,%eax
08293f8b +0x271:  mov    %eax,(%esp)
08293f8e +0x274:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
08293f93 +0x279:  mov    %esi,%eax
08293f95 +0x27b:  mov    %ebx,%edx
08293f97 +0x27d:  jmp    08293fab <+0x291>
08293f99 +0x27f:  mov    0x8(%ebp),%eax
08293f9c +0x282:  add    $0x22c,%eax
08293fa1 +0x287:  mov    %eax,(%esp)
08293fa4 +0x28a:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
08293fa9 +0x28f:  jmp    08293fc5 <+0x2ab>
08293fab +0x291:  mov    %edx,%ebx
08293fad +0x293:  mov    %eax,%esi
08293faf +0x295:  mov    0x8(%ebp),%eax
08293fb2 +0x298:  add    $0x1fc,%eax
08293fb7 +0x29d:  mov    %eax,(%esp)
08293fba +0x2a0:  call   082afa8c <_GLOBAL__I__ZN4CLog5this_E+0xbeb3>  ; global constructors keyed to CLog::this_+0xbeb3
08293fbf +0x2a5:  mov    %esi,%eax
08293fc1 +0x2a7:  mov    %ebx,%edx
08293fc3 +0x2a9:  jmp    08293fd7 <+0x2bd>
08293fc5 +0x2ab:  mov    0x8(%ebp),%eax
08293fc8 +0x2ae:  add    $0x1fc,%eax
08293fcd +0x2b3:  mov    %eax,(%esp)
08293fd0 +0x2b6:  call   082afa8c <_GLOBAL__I__ZN4CLog5this_E+0xbeb3>  ; global constructors keyed to CLog::this_+0xbeb3
08293fd5 +0x2bb:  jmp    08293ff1 <+0x2d7>
08293fd7 +0x2bd:  mov    %edx,%ebx
08293fd9 +0x2bf:  mov    %eax,%esi
08293fdb +0x2c1:  mov    0x8(%ebp),%eax
08293fde +0x2c4:  add    $0x1cc,%eax
08293fe3 +0x2c9:  mov    %eax,(%esp)
08293fe6 +0x2cc:  call   082af82a <_GLOBAL__I__ZN4CLog5this_E+0xbc51>  ; global constructors keyed to CLog::this_+0xbc51
08293feb +0x2d1:  mov    %esi,%eax
08293fed +0x2d3:  mov    %ebx,%edx
08293fef +0x2d5:  jmp    08294003 <+0x2e9>
08293ff1 +0x2d7:  mov    0x8(%ebp),%eax
08293ff4 +0x2da:  add    $0x1cc,%eax
08293ff9 +0x2df:  mov    %eax,(%esp)
08293ffc +0x2e2:  call   082af82a <_GLOBAL__I__ZN4CLog5this_E+0xbc51>  ; global constructors keyed to CLog::this_+0xbc51
08294001 +0x2e7:  jmp    0829401d <+0x303>
08294003 +0x2e9:  mov    %edx,%ebx
08294005 +0x2eb:  mov    %eax,%esi
08294007 +0x2ed:  mov    0x8(%ebp),%eax
0829400a +0x2f0:  add    $0x19c,%eax
0829400f +0x2f5:  mov    %eax,(%esp)
08294012 +0x2f8:  call   082af5ca <_GLOBAL__I__ZN4CLog5this_E+0xb9f1>  ; global constructors keyed to CLog::this_+0xb9f1
08294017 +0x2fd:  mov    %esi,%eax
08294019 +0x2ff:  mov    %ebx,%edx
0829401b +0x301:  jmp    0829402f <+0x315>
0829401d +0x303:  mov    0x8(%ebp),%eax
08294020 +0x306:  add    $0x19c,%eax
08294025 +0x30b:  mov    %eax,(%esp)
08294028 +0x30e:  call   082af5ca <_GLOBAL__I__ZN4CLog5this_E+0xb9f1>  ; global constructors keyed to CLog::this_+0xb9f1
0829402d +0x313:  jmp    08294049 <+0x32f>
0829402f +0x315:  mov    %edx,%ebx
08294031 +0x317:  mov    %eax,%esi
08294033 +0x319:  mov    0x8(%ebp),%eax
08294036 +0x31c:  add    $0x16c,%eax
0829403b +0x321:  mov    %eax,(%esp)
0829403e +0x324:  call   082af36c <_GLOBAL__I__ZN4CLog5this_E+0xb793>  ; global constructors keyed to CLog::this_+0xb793
08294043 +0x329:  mov    %esi,%eax
08294045 +0x32b:  mov    %ebx,%edx
08294047 +0x32d:  jmp    0829405b <+0x341>
08294049 +0x32f:  mov    0x8(%ebp),%eax
0829404c +0x332:  add    $0x16c,%eax
08294051 +0x337:  mov    %eax,(%esp)
08294054 +0x33a:  call   082af36c <_GLOBAL__I__ZN4CLog5this_E+0xb793>  ; global constructors keyed to CLog::this_+0xb793
08294059 +0x33f:  jmp    08294075 <+0x35b>
0829405b +0x341:  mov    %edx,%ebx
0829405d +0x343:  mov    %eax,%esi
0829405f +0x345:  mov    0x8(%ebp),%eax
08294062 +0x348:  add    $0x13c,%eax
08294067 +0x34d:  mov    %eax,(%esp)
0829406a +0x350:  call   082af106 <_GLOBAL__I__ZN4CLog5this_E+0xb52d>  ; global constructors keyed to CLog::this_+0xb52d
0829406f +0x355:  mov    %esi,%eax
08294071 +0x357:  mov    %ebx,%edx
08294073 +0x359:  jmp    08294087 <+0x36d>
08294075 +0x35b:  mov    0x8(%ebp),%eax
08294078 +0x35e:  add    $0x13c,%eax
0829407d +0x363:  mov    %eax,(%esp)
08294080 +0x366:  call   082af106 <_GLOBAL__I__ZN4CLog5this_E+0xb52d>  ; global constructors keyed to CLog::this_+0xb52d
08294085 +0x36b:  jmp    082940a1 <+0x387>
08294087 +0x36d:  mov    %edx,%ebx
08294089 +0x36f:  mov    %eax,%esi
0829408b +0x371:  mov    0x8(%ebp),%eax
0829408e +0x374:  add    $0x10c,%eax
08294093 +0x379:  mov    %eax,(%esp)
08294096 +0x37c:  call   082aeea0 <_GLOBAL__I__ZN4CLog5this_E+0xb2c7>  ; global constructors keyed to CLog::this_+0xb2c7
0829409b +0x381:  mov    %esi,%eax
0829409d +0x383:  mov    %ebx,%edx
0829409f +0x385:  jmp    082940b3 <+0x399>
082940a1 +0x387:  mov    0x8(%ebp),%eax
082940a4 +0x38a:  add    $0x10c,%eax
082940a9 +0x38f:  mov    %eax,(%esp)
082940ac +0x392:  call   082aeea0 <_GLOBAL__I__ZN4CLog5this_E+0xb2c7>  ; global constructors keyed to CLog::this_+0xb2c7
082940b1 +0x397:  jmp    082940cd <+0x3b3>
082940b3 +0x399:  mov    %edx,%ebx
082940b5 +0x39b:  mov    %eax,%esi
082940b7 +0x39d:  mov    0x8(%ebp),%eax
082940ba +0x3a0:  add    $0xdc,%eax
082940bf +0x3a5:  mov    %eax,(%esp)
082940c2 +0x3a8:  call   082aec36 <_GLOBAL__I__ZN4CLog5this_E+0xb05d>  ; global constructors keyed to CLog::this_+0xb05d
082940c7 +0x3ad:  mov    %esi,%eax
082940c9 +0x3af:  mov    %ebx,%edx
082940cb +0x3b1:  jmp    082940df <+0x3c5>
082940cd +0x3b3:  mov    0x8(%ebp),%eax
082940d0 +0x3b6:  add    $0xdc,%eax
082940d5 +0x3bb:  mov    %eax,(%esp)
082940d8 +0x3be:  call   082aec36 <_GLOBAL__I__ZN4CLog5this_E+0xb05d>  ; global constructors keyed to CLog::this_+0xb05d
082940dd +0x3c3:  jmp    082940f9 <+0x3df>
082940df +0x3c5:  mov    %edx,%ebx
082940e1 +0x3c7:  mov    %eax,%esi
082940e3 +0x3c9:  mov    0x8(%ebp),%eax
082940e6 +0x3cc:  add    $0xac,%eax
082940eb +0x3d1:  mov    %eax,(%esp)
082940ee +0x3d4:  call   082ae9d8 <_GLOBAL__I__ZN4CLog5this_E+0xadff>  ; global constructors keyed to CLog::this_+0xadff
082940f3 +0x3d9:  mov    %esi,%eax
082940f5 +0x3db:  mov    %ebx,%edx
082940f7 +0x3dd:  jmp    0829410b <+0x3f1>
082940f9 +0x3df:  mov    0x8(%ebp),%eax
082940fc +0x3e2:  add    $0xac,%eax
08294101 +0x3e7:  mov    %eax,(%esp)
08294104 +0x3ea:  call   082ae9d8 <_GLOBAL__I__ZN4CLog5this_E+0xadff>  ; global constructors keyed to CLog::this_+0xadff
08294109 +0x3ef:  jmp    08294123 <+0x409>
0829410b +0x3f1:  mov    %edx,%ebx
0829410d +0x3f3:  mov    %eax,%esi
0829410f +0x3f5:  mov    0x8(%ebp),%eax
08294112 +0x3f8:  add    $0x7c,%eax
08294115 +0x3fb:  mov    %eax,(%esp)
08294118 +0x3fe:  call   082ae79c <_GLOBAL__I__ZN4CLog5this_E+0xabc3>  ; global constructors keyed to CLog::this_+0xabc3
0829411d +0x403:  mov    %esi,%eax
0829411f +0x405:  mov    %ebx,%edx
08294121 +0x407:  jmp    08294133 <+0x419>
08294123 +0x409:  mov    0x8(%ebp),%eax
08294126 +0x40c:  add    $0x7c,%eax
08294129 +0x40f:  mov    %eax,(%esp)
0829412c +0x412:  call   082ae79c <_GLOBAL__I__ZN4CLog5this_E+0xabc3>  ; global constructors keyed to CLog::this_+0xabc3
08294131 +0x417:  jmp    0829414b <+0x431>
08294133 +0x419:  mov    %edx,%ebx
08294135 +0x41b:  mov    %eax,%esi
08294137 +0x41d:  mov    0x8(%ebp),%eax
0829413a +0x420:  add    $0x4c,%eax
0829413d +0x423:  mov    %eax,(%esp)
08294140 +0x426:  call   082ae53e <_GLOBAL__I__ZN4CLog5this_E+0xa965>  ; global constructors keyed to CLog::this_+0xa965
08294145 +0x42b:  mov    %esi,%eax
08294147 +0x42d:  mov    %ebx,%edx
08294149 +0x42f:  jmp    0829415b <+0x441>
0829414b +0x431:  mov    0x8(%ebp),%eax
0829414e +0x434:  add    $0x4c,%eax
08294151 +0x437:  mov    %eax,(%esp)
08294154 +0x43a:  call   082ae53e <_GLOBAL__I__ZN4CLog5this_E+0xa965>  ; global constructors keyed to CLog::this_+0xa965
08294159 +0x43f:  jmp    08294173 <+0x459>
0829415b +0x441:  mov    %edx,%ebx
0829415d +0x443:  mov    %eax,%esi
0829415f +0x445:  mov    0x8(%ebp),%eax
08294162 +0x448:  add    $0x34,%eax
08294165 +0x44b:  mov    %eax,(%esp)
08294168 +0x44e:  call   082aa736 <_GLOBAL__I__ZN4CLog5this_E+0x6b5d>  ; global constructors keyed to CLog::this_+0x6b5d
0829416d +0x453:  mov    %esi,%eax
0829416f +0x455:  mov    %ebx,%edx
08294171 +0x457:  jmp    08294183 <+0x469>
08294173 +0x459:  mov    0x8(%ebp),%eax
08294176 +0x45c:  add    $0x34,%eax
08294179 +0x45f:  mov    %eax,(%esp)
0829417c +0x462:  call   082aa736 <_GLOBAL__I__ZN4CLog5this_E+0x6b5d>  ; global constructors keyed to CLog::this_+0x6b5d
08294181 +0x467:  jmp    0829419b <+0x481>
08294183 +0x469:  mov    %edx,%ebx
08294185 +0x46b:  mov    %eax,%esi
08294187 +0x46d:  mov    0x8(%ebp),%eax
0829418a +0x470:  add    $0x1c,%eax
0829418d +0x473:  mov    %eax,(%esp)
08294190 +0x476:  call   082aa736 <_GLOBAL__I__ZN4CLog5this_E+0x6b5d>  ; global constructors keyed to CLog::this_+0x6b5d
08294195 +0x47b:  mov    %esi,%eax
08294197 +0x47d:  mov    %ebx,%edx
08294199 +0x47f:  jmp    082941ab <+0x491>
0829419b +0x481:  mov    0x8(%ebp),%eax
0829419e +0x484:  add    $0x1c,%eax
082941a1 +0x487:  mov    %eax,(%esp)
082941a4 +0x48a:  call   082aa736 <_GLOBAL__I__ZN4CLog5this_E+0x6b5d>  ; global constructors keyed to CLog::this_+0x6b5d
082941a9 +0x48f:  jmp    082941c6 <+0x4ac>
082941ab +0x491:  mov    %edx,%ebx
082941ad +0x493:  mov    %eax,%esi
082941af +0x495:  mov    0x8(%ebp),%eax
082941b2 +0x498:  mov    %eax,(%esp)
082941b5 +0x49b:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
082941ba +0x4a0:  mov    %esi,%eax
082941bc +0x4a2:  mov    %ebx,%edx
082941be +0x4a4:  mov    %eax,(%esp)
082941c1 +0x4a7:  call   08ae3750 <_Unwind_Resume>
082941c6 +0x4ac:  mov    0x8(%ebp),%eax
082941c9 +0x4af:  mov    %eax,(%esp)
082941cc +0x4b2:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
082941d1 +0x4b7:  add    $0x10,%esp
082941d4 +0x4ba:  pop    %ebx
082941d5 +0x4bb:  pop    %esi
082941d6 +0x4bc:  pop    %ebp
082941d7 +0x4bd:  ret
```

## 反编译 C

```c
// CGameManager::~CGameManager @ 0x8293d1a

/* CGameManager::~CGameManager() */

void __thiscall CGameManager::~CGameManager(CGameManager *this)

{
  CQuickPartySystemManager *this_00;
  CQuickPartyRewardManager *this_01;
  CAuctionAveragePrice *this_02;
  CraneMinigameManager *this_03;
  
  if ((*(int *)(this + 0x2fc) != 0) &&
     (this_00 = *(CQuickPartySystemManager **)(this + 0x2fc),
     this_00 != (CQuickPartySystemManager *)0x0)) {
                    /* try { // try from 08293d3f to 08293de8 has its CatchHandler @ 08293df3 */
    QuickParty::CQuickPartySystemManager::~CQuickPartySystemManager(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x2fc) = 0;
  if ((*(int *)(this + 0x300) != 0) &&
     (this_01 = *(CQuickPartyRewardManager **)(this + 0x300),
     this_01 != (CQuickPartyRewardManager *)0x0)) {
    QuickParty::CQuickPartyRewardManager::~CQuickPartyRewardManager(this_01);
    operator_delete(this_01);
  }
  *(undefined4 *)(this + 0x300) = 0;
  if (*(int *)(this + 0x314) != 0) {
    this_02 = *(CAuctionAveragePrice **)(this + 0x314);
    if (this_02 != (CAuctionAveragePrice *)0x0) {
      CAuctionAveragePrice::~CAuctionAveragePrice(this_02);
      operator_delete(this_02);
    }
    *(undefined4 *)(this + 0x314) = 0;
  }
  if ((*(int *)(this + 0x318) != 0) &&
     (this_03 = *(CraneMinigameManager **)(this + 0x318), this_03 != (CraneMinigameManager *)0x0)) {
    CraneMinigameManager::~CraneMinigameManager(this_03);
    operator_delete(this_03);
  }
                    /* try { // try from 08293e18 to 08293e1c has its CatchHandler @ 08293e1f */
  __gnu_cxx::
  hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>::
  ~hash_map((hash_map<int,BlueMarble*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<BlueMarble*>>
             *)(this + 0x2e8));
                    /* try { // try from 08293e44 to 08293e48 has its CatchHandler @ 08293e4b */
  __gnu_cxx::
  hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
  ::~hash_map((hash_map<int,QuickParty::CQuickParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<QuickParty::CQuickParty*>>
               *)(this + 0x2d4));
                    /* try { // try from 08293e70 to 08293e74 has its CatchHandler @ 08293e77 */
  __gnu_cxx::
  hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
  ::~hash_map((hash_map<int,advancealtar::StageControl*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<advancealtar::StageControl*>>
               *)(this + 0x2c0));
                    /* try { // try from 08293e9c to 08293ea0 has its CatchHandler @ 08293ea3 */
  __gnu_cxx::
  hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
  ::~hash_map((hash_map<int,WongWork::CBossTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CBossTower*>>
               *)(this + 0x2ac));
                    /* try { // try from 08293ec8 to 08293ecc has its CatchHandler @ 08293ecf */
  __gnu_cxx::
  hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
  ::~hash_map((hash_map<int,WongWork::CDeathTower*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WongWork::CDeathTower*>>
               *)(this + 0x298));
                    /* try { // try from 08293ef4 to 08293ef8 has its CatchHandler @ 08293efb */
  __gnu_cxx::hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
  ::~hash_map((hash_map<int,WarRoom*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<WarRoom*>>
               *)(this + 0x284));
                    /* try { // try from 08293f20 to 08293f24 has its CatchHandler @ 08293f27 */
  __gnu_cxx::hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>>::
  ~hash_map((hash_map<int,CParty*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CParty*>> *
            )(this + 0x270));
                    /* try { // try from 08293f4c to 08293f50 has its CatchHandler @ 08293f53 */
  __gnu_cxx::
  hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>::
  ~hash_map((hash_map<int,PvP_Room*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<PvP_Room*>>
             *)(this + 0x25c));
                    /* try { // try from 08293f78 to 08293f7c has its CatchHandler @ 08293f7f */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::~map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          *)(this + 0x244));
                    /* try { // try from 08293fa4 to 08293fa8 has its CatchHandler @ 08293fab */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::~map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          *)(this + 0x22c));
                    /* try { // try from 08293fd0 to 08293fd4 has its CatchHandler @ 08293fd7 */
  StaticPool<BlueMarble,300>::~StaticPool((StaticPool<BlueMarble,300> *)(this + 0x1fc));
                    /* try { // try from 08293ffc to 08294000 has its CatchHandler @ 08294003 */
  StaticPool<QuickParty::CQuickParty,300>::~StaticPool
            ((StaticPool<QuickParty::CQuickParty,300> *)(this + 0x1cc));
                    /* try { // try from 08294028 to 0829402c has its CatchHandler @ 0829402f */
  StaticPool<advancealtar::StageControl,600>::~StaticPool
            ((StaticPool<advancealtar::StageControl,600> *)(this + 0x19c));
                    /* try { // try from 08294054 to 08294058 has its CatchHandler @ 0829405b */
  StaticPool<WongWork::CBossTower,600>::~StaticPool
            ((StaticPool<WongWork::CBossTower,600> *)(this + 0x16c));
                    /* try { // try from 08294080 to 08294084 has its CatchHandler @ 08294087 */
  StaticPool<WongWork::CDeathTower,600>::~StaticPool
            ((StaticPool<WongWork::CDeathTower,600> *)(this + 0x13c));
                    /* try { // try from 082940ac to 082940b0 has its CatchHandler @ 082940b3 */
  StaticPool<WarRoom,40>::~StaticPool((StaticPool<WarRoom,40> *)(this + 0x10c));
                    /* try { // try from 082940d8 to 082940dc has its CatchHandler @ 082940df */
  StaticPool<PvP_Room,600>::~StaticPool((StaticPool<PvP_Room,600> *)(this + 0xdc));
                    /* try { // try from 08294104 to 08294108 has its CatchHandler @ 0829410b */
  StaticPool<CParty,600>::~StaticPool((StaticPool<CParty,600> *)(this + 0xac));
                    /* try { // try from 0829412c to 08294130 has its CatchHandler @ 08294133 */
  StaticPool<CTradeSpace,300>::~StaticPool((StaticPool<CTradeSpace,300> *)(this + 0x7c));
                    /* try { // try from 08294154 to 08294158 has its CatchHandler @ 0829415b */
  StaticPool<CUser,600>::~StaticPool((StaticPool<CUser,600> *)(this + 0x4c));
                    /* try { // try from 0829417c to 08294180 has its CatchHandler @ 08294183 */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x34));
                    /* try { // try from 082941a4 to 082941a8 has its CatchHandler @ 082941ab */
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::~set
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0x1c));
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
