# initCharacStat

`_ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii`

`global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `global::tools::InitializeCharacStat` | `0x08145e64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08145e64  _ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii
#           global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)
# range [0x08145e64, 0x081462a2]
08145e64 +0x000:  push   %ebp
08145e65 +0x001:  mov    %esp,%ebp
08145e67 +0x003:  push   %edi
08145e68 +0x004:  push   %esi
08145e69 +0x005:  push   %ebx
08145e6a +0x006:  sub    $0x10c,%esp
08145e70 +0x00c:  mov    0x8(%ebp),%eax
08145e73 +0x00f:  movzwl 0x8(%eax),%eax
08145e77 +0x013:  test   %ax,%ax
08145e7a +0x016:  jne    08146298 <+0x434>
08145e80 +0x01c:  mov    0x8(%ebp),%eax
08145e83 +0x01f:  movzwl 0xc(%eax),%eax
08145e87 +0x023:  test   %ax,%ax
08145e8a +0x026:  jne    08146298 <+0x434>
08145e90 +0x02c:  mov    0x8(%ebp),%eax
08145e93 +0x02f:  movzwl 0xa(%eax),%eax
08145e97 +0x033:  test   %ax,%ax
08145e9a +0x036:  jne    08146298 <+0x434>
08145ea0 +0x03c:  mov    0x8(%ebp),%eax
08145ea3 +0x03f:  movzwl 0xe(%eax),%eax
08145ea7 +0x043:  test   %ax,%ax
08145eaa +0x046:  jne    08146298 <+0x434>
08145eb0 +0x04c:  mov    0x8(%ebp),%eax
08145eb3 +0x04f:  mov    (%eax),%eax
08145eb5 +0x051:  test   %eax,%eax
08145eb7 +0x053:  jne    08146298 <+0x434>
08145ebd +0x059:  mov    0x8(%ebp),%eax
08145ec0 +0x05c:  mov    0x4(%eax),%eax
08145ec3 +0x05f:  test   %eax,%eax
08145ec5 +0x061:  jne    08146298 <+0x434>
08145ecb +0x067:  mov    0x8(%ebp),%eax
08145ece +0x06a:  mov    0x42(%eax),%eax
08145ed1 +0x06d:  test   %eax,%eax
08145ed3 +0x06f:  jne    08146298 <+0x434>
08145ed9 +0x075:  mov    0x8(%ebp),%eax
08145edc +0x078:  mov    %eax,(%esp)
08145edf +0x07b:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
08145ee4 +0x080:  cmpl   $0x0,0x10(%ebp)
08145ee8 +0x084:  js     08145efc <+0x98>
08145eea +0x086:  cmpl   $0xa,0x10(%ebp)
08145eee +0x08a:  jg     08145efc <+0x98>
08145ef0 +0x08c:  cmpl   $0x46,0x14(%ebp)
08145ef4 +0x090:  jg     08145efc <+0x98>
08145ef6 +0x092:  cmpl   $0x0,0x14(%ebp)
08145efa +0x096:  jg     08145f4c <+0xe8>
08145efc +0x098:  movl   $0x5,0xc(%esp)
08145f04 +0x0a0:  movl   $0x1f,0x8(%esp)
08145f0c +0x0a8:  movl   $&_ZZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
08145f14 +0x0b0:  lea    -0x58(%ebp),%eax
08145f17 +0x0b3:  mov    %eax,(%esp)
08145f1a +0x0b6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08145f1f +0x0bb:  mov    0x14(%ebp),%eax
08145f22 +0x0be:  mov    %eax,0x10(%esp)
08145f26 +0x0c2:  mov    0x10(%ebp),%eax
08145f29 +0x0c5:  mov    %eax,0xc(%esp)
08145f2d +0x0c9:  mov    0xc(%ebp),%eax
08145f30 +0x0cc:  mov    %eax,0x8(%esp)
08145f34 +0x0d0:  movl   $"[ARAD,STAT,RESET] Invalid character job. charac %u, job %d, level %d",0x4(%esp)
08145f3c +0x0d8:  lea    -0x58(%ebp),%eax
08145f3f +0x0db:  mov    %eax,(%esp)
08145f42 +0x0de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08145f47 +0x0e3:  jmp    08146298 <+0x434>
08145f4c +0x0e8:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08145f51 +0x0ed:  mov    0x14(%eax),%ecx
08145f54 +0x0f0:  mov    0x10(%ebp),%eax
08145f57 +0x0f3:  imul   $0x7dc,%eax,%edx
08145f5d +0x0f9:  lea    -0xaa(%ebp),%eax
08145f63 +0x0ff:  lea    (%ecx,%edx,1),%edx
08145f66 +0x102:  mov    $0x52,%ebx
08145f6b +0x107:  mov    %eax,%ecx
08145f6d +0x109:  and    $0x2,%ecx
08145f70 +0x10c:  test   %ecx,%ecx
08145f72 +0x10e:  je     08145f83 <+0x11f>
08145f74 +0x110:  movzwl (%edx),%ecx
08145f77 +0x113:  mov    %cx,(%eax)
08145f7a +0x116:  add    $0x2,%eax
08145f7d +0x119:  add    $0x2,%edx
08145f80 +0x11c:  sub    $0x2,%ebx
08145f83 +0x11f:  mov    %ebx,%ecx
08145f85 +0x121:  shr    $0x2,%ecx
08145f88 +0x124:  mov    %eax,%edi
08145f8a +0x126:  mov    %edx,%esi
08145f8c +0x128:  rep movsl %ds:(%esi),%es:(%edi)
08145f8e +0x12a:  mov    %esi,%edx
08145f90 +0x12c:  mov    %edi,%eax
08145f92 +0x12e:  mov    $0x0,%ecx
08145f97 +0x133:  mov    %ebx,%esi
08145f99 +0x135:  and    $0x2,%esi
08145f9c +0x138:  test   %esi,%esi
08145f9e +0x13a:  je     08145fab <+0x147>
08145fa0 +0x13c:  movzwl (%edx,%ecx,1),%esi
08145fa4 +0x140:  mov    %si,(%eax,%ecx,1)
08145fa8 +0x144:  add    $0x2,%ecx
08145fab +0x147:  and    $0x1,%ebx
08145fae +0x14a:  test   %ebx,%ebx
08145fb0 +0x14c:  je     08145fb9 <+0x155>
08145fb2 +0x14e:  movzbl (%edx,%ecx,1),%edx
08145fb6 +0x152:  mov    %dl,(%eax,%ecx,1)
08145fb9 +0x155:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08145fbe +0x15a:  mov    0x14(%eax),%edx
08145fc1 +0x15d:  mov    0x10(%ebp),%eax
08145fc4 +0x160:  imul   $0x7dc,%eax,%eax
08145fca +0x166:  lea    (%edx,%eax,1),%eax
08145fcd +0x169:  movl   $0x0,0x8(%esp)
08145fd5 +0x171:  movl   $0x0,0x4(%esp)
08145fdd +0x179:  mov    %eax,(%esp)
08145fe0 +0x17c:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
08145fe5 +0x181:  mov    %eax,-0x28(%ebp)
08145fe8 +0x184:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08145fed +0x189:  mov    0x14(%eax),%edx
08145ff0 +0x18c:  mov    0x10(%ebp),%eax
08145ff3 +0x18f:  imul   $0x7dc,%eax,%eax
08145ff9 +0x195:  add    %eax,%edx
08145ffb +0x197:  movl   $0x0,0x8(%esp)
08146003 +0x19f:  mov    0x18(%ebp),%eax
08146006 +0x1a2:  mov    %eax,0x4(%esp)
0814600a +0x1a6:  mov    %edx,(%esp)
0814600d +0x1a9:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
08146012 +0x1ae:  mov    %eax,-0x24(%ebp)
08146015 +0x1b1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814601a +0x1b6:  mov    0x14(%eax),%edx
0814601d +0x1b9:  mov    0x10(%ebp),%eax
08146020 +0x1bc:  imul   $0x7dc,%eax,%eax
08146026 +0x1c2:  add    %eax,%edx
08146028 +0x1c4:  mov    0x1c(%ebp),%eax
0814602b +0x1c7:  mov    %eax,0x8(%esp)
0814602f +0x1cb:  mov    0x18(%ebp),%eax
08146032 +0x1ce:  mov    %eax,0x4(%esp)
08146036 +0x1d2:  mov    %edx,(%esp)
08146039 +0x1d5:  call   0834883e <_ZNK10CCharacter17get_growtype_statEii>  ; CCharacter::get_growtype_stat(int, int) const
0814603e +0x1da:  mov    %eax,-0x20(%ebp)
08146041 +0x1dd:  cmpl   $0x0,-0x28(%ebp)
08146045 +0x1e1:  je     08146053 <+0x1ef>
08146047 +0x1e3:  cmpl   $0x0,-0x24(%ebp)
0814604b +0x1e7:  je     08146053 <+0x1ef>
0814604d +0x1e9:  cmpl   $0x0,-0x20(%ebp)
08146051 +0x1ed:  jne    081460a3 <+0x23f>
08146053 +0x1ef:  movl   $0x5,0xc(%esp)
0814605b +0x1f7:  movl   $0x2d,0x8(%esp)
08146063 +0x1ff:  movl   $&_ZZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0814606b +0x207:  lea    -0x48(%ebp),%eax
0814606e +0x20a:  mov    %eax,(%esp)
08146071 +0x20d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08146076 +0x212:  mov    0x1c(%ebp),%eax
08146079 +0x215:  mov    %eax,0x10(%esp)
0814607d +0x219:  mov    0x18(%ebp),%eax
08146080 +0x21c:  mov    %eax,0xc(%esp)
08146084 +0x220:  mov    0xc(%ebp),%eax
08146087 +0x223:  mov    %eax,0x8(%esp)
0814608b +0x227:  movl   $"[ARAD,STAT,RESET] Invalid character grow type. charac %u, first %d, second %d",0x4(%esp)
08146093 +0x22f:  lea    -0x48(%ebp),%eax
08146096 +0x232:  mov    %eax,(%esp)
08146099 +0x235:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0814609e +0x23a:  jmp    08146298 <+0x434>
081460a3 +0x23f:  mov    0x8(%ebp),%eax
081460a6 +0x242:  lea    -0xaa(%ebp),%edx
081460ac +0x248:  mov    $0x52,%ebx
081460b1 +0x24d:  mov    %eax,%ecx
081460b3 +0x24f:  and    $0x1,%ecx
081460b6 +0x252:  test   %ecx,%ecx
081460b8 +0x254:  je     081460c8 <+0x264>
081460ba +0x256:  movzbl (%edx),%ecx
081460bd +0x259:  mov    %cl,(%eax)
081460bf +0x25b:  add    $0x1,%eax
081460c2 +0x25e:  add    $0x1,%edx
081460c5 +0x261:  sub    $0x1,%ebx
081460c8 +0x264:  mov    %eax,%ecx
081460ca +0x266:  and    $0x2,%ecx
081460cd +0x269:  test   %ecx,%ecx
081460cf +0x26b:  je     081460e0 <+0x27c>
081460d1 +0x26d:  movzwl (%edx),%ecx
081460d4 +0x270:  mov    %cx,(%eax)
081460d7 +0x273:  add    $0x2,%eax
081460da +0x276:  add    $0x2,%edx
081460dd +0x279:  sub    $0x2,%ebx
081460e0 +0x27c:  mov    %ebx,%ecx
081460e2 +0x27e:  shr    $0x2,%ecx
081460e5 +0x281:  mov    %eax,%edi
081460e7 +0x283:  mov    %edx,%esi
081460e9 +0x285:  rep movsl %ds:(%esi),%es:(%edi)
081460eb +0x287:  mov    %esi,%edx
081460ed +0x289:  mov    %edi,%eax
081460ef +0x28b:  mov    $0x0,%ecx
081460f4 +0x290:  mov    %ebx,%esi
081460f6 +0x292:  and    $0x2,%esi
081460f9 +0x295:  test   %esi,%esi
081460fb +0x297:  je     08146108 <+0x2a4>
081460fd +0x299:  movzwl (%edx,%ecx,1),%esi
08146101 +0x29d:  mov    %si,(%eax,%ecx,1)
08146105 +0x2a1:  add    $0x2,%ecx
08146108 +0x2a4:  and    $0x1,%ebx
0814610b +0x2a7:  test   %ebx,%ebx
0814610d +0x2a9:  je     08146116 <+0x2b2>
0814610f +0x2ab:  movzbl (%edx,%ecx,1),%edx
08146113 +0x2af:  mov    %dl,(%eax,%ecx,1)
08146116 +0x2b2:  movl   $0x1,-0x1c(%ebp)
0814611d +0x2b9:  jmp    08146169 <+0x305>
0814611f +0x2bb:  cmpl   $0xe,-0x1c(%ebp)
08146123 +0x2bf:  jg     08146139 <+0x2d5>
08146125 +0x2c1:  mov    -0x28(%ebp),%eax
08146128 +0x2c4:  mov    %eax,0x4(%esp)
0814612c +0x2c8:  mov    0x8(%ebp),%eax
0814612f +0x2cb:  mov    %eax,(%esp)
08146132 +0x2ce:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08146137 +0x2d3:  jmp    08146165 <+0x301>
08146139 +0x2d5:  cmpl   $0x31,-0x1c(%ebp)
0814613d +0x2d9:  jg     08146153 <+0x2ef>
0814613f +0x2db:  mov    -0x24(%ebp),%eax
08146142 +0x2de:  mov    %eax,0x4(%esp)
08146146 +0x2e2:  mov    0x8(%ebp),%eax
08146149 +0x2e5:  mov    %eax,(%esp)
0814614c +0x2e8:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08146151 +0x2ed:  jmp    08146165 <+0x301>
08146153 +0x2ef:  mov    -0x20(%ebp),%eax
08146156 +0x2f2:  mov    %eax,0x4(%esp)
0814615a +0x2f6:  mov    0x8(%ebp),%eax
0814615d +0x2f9:  mov    %eax,(%esp)
08146160 +0x2fc:  call   08146300 <_GLOBAL__I__ZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiii+0x1d>  ; global constructors keyed to global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)+0x1d
08146165 +0x301:  addl   $0x1,-0x1c(%ebp)
08146169 +0x305:  mov    -0x1c(%ebp),%eax
0814616c +0x308:  cmp    0x14(%ebp),%eax
0814616f +0x30b:  setl   %al
08146172 +0x30e:  test   %al,%al
08146174 +0x310:  jne    0814611f <+0x2bb>
08146176 +0x312:  mov    0x8(%ebp),%eax
08146179 +0x315:  movzwl 0x16(%eax),%eax
0814617d +0x319:  cwtl
0814617e +0x31a:  mov    %eax,-0xd8(%ebp)
08146184 +0x320:  mov    0x8(%ebp),%eax
08146187 +0x323:  movzwl 0x14(%eax),%eax
0814618b +0x327:  cwtl
0814618c +0x328:  mov    %eax,-0xd4(%ebp)
08146192 +0x32e:  mov    0x8(%ebp),%eax
08146195 +0x331:  movzwl 0x12(%eax),%eax
08146199 +0x335:  cwtl
0814619a +0x336:  mov    %eax,-0xd0(%ebp)
081461a0 +0x33c:  mov    0x8(%ebp),%eax
081461a3 +0x33f:  movzwl 0x10(%eax),%eax
081461a7 +0x343:  cwtl
081461a8 +0x344:  mov    %eax,-0xcc(%ebp)
081461ae +0x34a:  mov    0x8(%ebp),%eax
081461b1 +0x34d:  mov    0x42(%eax),%eax
081461b4 +0x350:  mov    %eax,-0xc8(%ebp)
081461ba +0x356:  mov    0x8(%ebp),%eax
081461bd +0x359:  movzwl 0xe(%eax),%eax
081461c1 +0x35d:  movzwl %ax,%eax
081461c4 +0x360:  mov    %eax,-0xc4(%ebp)
081461ca +0x366:  mov    0x8(%ebp),%eax
081461cd +0x369:  movzwl 0xc(%eax),%eax
081461d1 +0x36d:  movzwl %ax,%eax
081461d4 +0x370:  mov    %eax,-0xc0(%ebp)
081461da +0x376:  mov    0x8(%ebp),%eax
081461dd +0x379:  movzwl 0xa(%eax),%eax
081461e1 +0x37d:  movzwl %ax,%eax
081461e4 +0x380:  mov    %eax,-0xbc(%ebp)
081461ea +0x386:  mov    0x8(%ebp),%eax
081461ed +0x389:  movzwl 0x8(%eax),%eax
081461f1 +0x38d:  movzwl %ax,%edi
081461f4 +0x390:  mov    0x8(%ebp),%eax
081461f7 +0x393:  mov    0x4(%eax),%esi
081461fa +0x396:  mov    0x8(%ebp),%eax
081461fd +0x399:  mov    (%eax),%ebx
081461ff +0x39b:  movl   $0x0,0xc(%esp)
08146207 +0x3a3:  movl   $0x41,0x8(%esp)
0814620f +0x3ab:  movl   $&_ZZN6global5tools20InitializeCharacStat14initCharacStatER15_Additioal_infojiiiiE19__PRETTY_FUNCTION__,0x4(%esp)
08146217 +0x3b3:  lea    -0x38(%ebp),%eax
0814621a +0x3b6:  mov    %eax,(%esp)
0814621d +0x3b9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08146222 +0x3be:  mov    -0xd8(%ebp),%eax
08146228 +0x3c4:  mov    %eax,0x34(%esp)
0814622c +0x3c8:  mov    -0xd4(%ebp),%eax
08146232 +0x3ce:  mov    %eax,0x30(%esp)
08146236 +0x3d2:  mov    -0xd0(%ebp),%eax
0814623c +0x3d8:  mov    %eax,0x2c(%esp)
08146240 +0x3dc:  mov    -0xcc(%ebp),%eax
08146246 +0x3e2:  mov    %eax,0x28(%esp)
0814624a +0x3e6:  mov    -0xc8(%ebp),%eax
08146250 +0x3ec:  mov    %eax,0x24(%esp)
08146254 +0x3f0:  mov    -0xc4(%ebp),%eax
0814625a +0x3f6:  mov    %eax,0x20(%esp)
0814625e +0x3fa:  mov    -0xc0(%ebp),%eax
08146264 +0x400:  mov    %eax,0x1c(%esp)
08146268 +0x404:  mov    -0xbc(%ebp),%eax
0814626e +0x40a:  mov    %eax,0x18(%esp)
08146272 +0x40e:  mov    %edi,0x14(%esp)
08146276 +0x412:  mov    %esi,0x10(%esp)
0814627a +0x416:  mov    %ebx,0xc(%esp)
0814627e +0x41a:  mov    0xc(%ebp),%eax
08146281 +0x41d:  mov    %eax,0x8(%esp)
08146285 +0x421:  movl   $"[ARAD][RESET STAT] Init Character : %d, stat : hp %d, mp %d, pyatt %d, pydef %d, mgatt %d, mgdef %d, speed %d, element %d, element %d, element %d, element %d)",0x4(%esp)
0814628d +0x429:  lea    -0x38(%ebp),%eax
08146290 +0x42c:  mov    %eax,(%esp)
08146293 +0x42f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08146298 +0x434:  add    $0x10c,%esp
0814629e +0x43a:  pop    %ebx
0814629f +0x43b:  pop    %esi
081462a0 +0x43c:  pop    %edi
081462a1 +0x43d:  pop    %ebp
081462a2 +0x43e:  ret
```

## 反编译 C

```c
// global::tools::InitializeCharacStat::initCharacStat @ 0x8145e64

/* WARNING: Removing unreachable block (ram,0x08145fb2) */
/* global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int,
   int, int) */

void global::tools::InitializeCharacStat::initCharacStat
               (_Additioal_info *param_1,uint param_2,int param_3,int param_4,int param_5,
               int param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  _Additioal_info *p_Var13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  bool bVar18;
  byte bVar19;
  undefined1 local_ae [2];
  undefined4 auStack_ac [20];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  _Additioal_info *local_2c;
  _Additioal_info *local_28;
  _Additioal_info *local_24;
  int local_20;
  
  bVar19 = 0;
  if ((((*(short *)(param_1 + 8) == 0) && (*(short *)(param_1 + 0xc) == 0)) &&
      (*(short *)(param_1 + 10) == 0)) &&
     (((*(short *)(param_1 + 0xe) == 0 && (*(int *)param_1 == 0)) &&
      ((*(int *)(param_1 + 4) == 0 && (*(int *)(param_1 + 0x42) == 0)))))) {
    _Additioal_info::clear(param_1);
    if (((param_3 < 0) || (10 < param_3)) || ((0x46 < param_4 || (param_4 < 1)))) {
      cMyTrace::cMyTrace(local_5c,
                         "static void global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)"
                         ,0x1f,5);
      cMyTrace::operator()
                (local_5c,"[ARAD,STAT,RESET] Invalid character job. charac %u, job %d, level %d",
                 param_2,param_3,param_4);
    }
    else {
      iVar12 = G_CDataManager();
      puVar16 = (undefined4 *)local_ae;
      puVar15 = (undefined4 *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc);
      uVar17 = 0x52;
      bVar18 = ((uint)puVar16 & 2) != 0;
      if (bVar18) {
        local_ae = *(undefined1 (*) [2])puVar15;
        puVar16 = auStack_ac;
        puVar15 = (undefined4 *)((int)puVar15 + 2);
        uVar17 = 0x50;
      }
      for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar16 = *puVar15;
        puVar15 = puVar15 + (uint)bVar19 * -2 + 1;
        puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
      }
      if (!bVar18) {
        *(undefined2 *)puVar16 = *(undefined2 *)puVar15;
      }
      iVar12 = G_CDataManager();
      local_2c = (_Additioal_info *)
                 CCharacter::get_growtype_stat
                           ((CCharacter *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc),0,0);
      iVar12 = G_CDataManager();
      local_28 = (_Additioal_info *)
                 CCharacter::get_growtype_stat
                           ((CCharacter *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc),param_5,0);
      iVar12 = G_CDataManager();
      local_24 = (_Additioal_info *)
                 CCharacter::get_growtype_stat
                           ((CCharacter *)(*(int *)(iVar12 + 0x14) + param_3 * 0x7dc),param_5,
                            param_6);
      if (((local_2c == (_Additioal_info *)0x0) || (local_28 == (_Additioal_info *)0x0)) ||
         (local_24 == (_Additioal_info *)0x0)) {
        cMyTrace::cMyTrace(local_4c,
                           "static void global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)"
                           ,0x2d,5);
        cMyTrace::operator()
                  (local_4c,
                   "[ARAD,STAT,RESET] Invalid character grow type. charac %u, first %d, second %d",
                   param_2,param_5,param_6);
      }
      else {
        puVar16 = (undefined4 *)local_ae;
        uVar17 = 0x52;
        bVar18 = ((uint)param_1 & 1) != 0;
        p_Var13 = param_1;
        if (bVar18) {
          *param_1 = local_ae[0];
          p_Var13 = param_1 + 1;
          puVar16 = (undefined4 *)(local_ae + 1);
          uVar17 = 0x51;
        }
        if (((uint)p_Var13 & 2) != 0) {
          *(undefined2 *)p_Var13 = *(undefined2 *)puVar16;
          p_Var13 = p_Var13 + 2;
          puVar16 = (undefined4 *)((int)puVar16 + 2);
          uVar17 = uVar17 - 2;
        }
        for (uVar14 = uVar17 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)p_Var13 = *puVar16;
          puVar16 = puVar16 + (uint)bVar19 * -2 + 1;
          p_Var13 = p_Var13 + (uint)bVar19 * -8 + 4;
        }
        iVar12 = 0;
        if ((uVar17 & 2) != 0) {
          *(undefined2 *)p_Var13 = *(undefined2 *)puVar16;
          iVar12 = 2;
        }
        if (bVar18) {
          p_Var13[iVar12] = *(_Additioal_info *)((int)puVar16 + iVar12);
        }
        for (local_20 = 1; local_20 < param_4; local_20 = local_20 + 1) {
          if (local_20 < 0xf) {
            _Additioal_info::add(param_1,local_2c);
          }
          else if (local_20 < 0x32) {
            _Additioal_info::add(param_1,local_28);
          }
          else {
            _Additioal_info::add(param_1,local_24);
          }
        }
        sVar1 = *(short *)(param_1 + 0x16);
        sVar2 = *(short *)(param_1 + 0x14);
        sVar3 = *(short *)(param_1 + 0x12);
        sVar4 = *(short *)(param_1 + 0x10);
        uVar9 = *(undefined4 *)(param_1 + 0x42);
        uVar5 = *(ushort *)(param_1 + 0xe);
        uVar6 = *(ushort *)(param_1 + 0xc);
        uVar7 = *(ushort *)(param_1 + 10);
        uVar8 = *(ushort *)(param_1 + 8);
        uVar10 = *(undefined4 *)(param_1 + 4);
        uVar11 = *(undefined4 *)param_1;
        cMyTrace::cMyTrace(local_3c,
                           "static void global::tools::InitializeCharacStat::initCharacStat(_Additioal_info&, unsigned int, int, int, int, int)"
                           ,0x41,0);
        cMyTrace::operator()
                  (local_3c,
                   "[ARAD][RESET STAT] Init Character : %d, stat : hp %d, mp %d, pyatt %d, pydef %d, mgatt %d, mgdef %d, speed %d, element %d, element %d, element %d, element %d)"
                   ,param_2,uVar11,uVar10,(uint)uVar8,(uint)uVar7,(uint)uVar6,(uint)uVar5,uVar9,
                   (int)sVar4,(int)sVar3,(int)sVar2,(int)sVar1);
      }
    }
  }
  return;
}
```
