# CCommunityServerProxy

`_GLOBAL__I__ZN21CCommunityServerProxyC2EPci`

`global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCommunityServerProxy` | `0x0846cd2d` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846cd2d  _GLOBAL__I__ZN21CCommunityServerProxyC2EPci
#           global constructors keyed to CCommunityServerProxy::CCommunityServerProxy(char*, int)
# range [0x0846cd2d, 0x0846d27b]
0846cd2d +0x000:  push   %ebp
0846cd2e +0x001:  mov    %esp,%ebp
0846cd30 +0x003:  sub    $0x18,%esp
0846cd33 +0x006:  movl   $0xffff,0x4(%esp)
0846cd3b +0x00e:  movl   $0x1,(%esp)
0846cd42 +0x015:  call   0846cced <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0846cd47 +0x01a:  leave
0846cd48 +0x01b:  ret
0846cd49 +0x01c:  nop
0846cd4a +0x01d:  push   %ebp
0846cd4b +0x01e:  mov    %esp,%ebp
0846cd4d +0x020:  sub    $0x18,%esp
0846cd50 +0x023:  mov    0x8(%ebp),%eax
0846cd53 +0x026:  movb   $0x0,(%eax)
0846cd56 +0x029:  mov    0x8(%ebp),%eax
0846cd59 +0x02c:  movl   $0x0,0x1(%eax)
0846cd60 +0x033:  mov    0x8(%ebp),%eax
0846cd63 +0x036:  movl   $0x0,0x5(%eax)
0846cd6a +0x03d:  mov    0x8(%ebp),%eax
0846cd6d +0x040:  movb   $0x0,0x27(%eax)
0846cd71 +0x044:  mov    0x8(%ebp),%eax
0846cd74 +0x047:  movb   $0x0,0x28(%eax)
0846cd78 +0x04b:  mov    0x8(%ebp),%eax
0846cd7b +0x04e:  movb   $0x0,0x29(%eax)
0846cd7f +0x052:  mov    0x8(%ebp),%eax
0846cd82 +0x055:  movb   $0x0,0x2a(%eax)
0846cd86 +0x059:  mov    0x8(%ebp),%eax
0846cd89 +0x05c:  add    $0x9,%eax
0846cd8c +0x05f:  movl   $0x1e,0x8(%esp)
0846cd94 +0x067:  movl   $0x0,0x4(%esp)
0846cd9c +0x06f:  mov    %eax,(%esp)
0846cd9f +0x072:  call   0807dcc0 <_init+0x5b8>
0846cda4 +0x077:  leave
0846cda5 +0x078:  ret
0846cda6 +0x079:  push   %ebp
0846cda7 +0x07a:  mov    %esp,%ebp
0846cda9 +0x07c:  sub    $0x18,%esp
0846cdac +0x07f:  mov    0x8(%ebp),%eax
0846cdaf +0x082:  movb   $0x0,(%eax)
0846cdb2 +0x085:  mov    0x8(%ebp),%eax
0846cdb5 +0x088:  movl   $0x0,0x1(%eax)
0846cdbc +0x08f:  mov    0x8(%ebp),%eax
0846cdbf +0x092:  movl   $0xffffffff,0x5(%eax)
0846cdc6 +0x099:  mov    0x8(%ebp),%eax
0846cdc9 +0x09c:  movb   $0x0,0x9(%eax)
0846cdcd +0x0a0:  mov    0x8(%ebp),%eax
0846cdd0 +0x0a3:  movl   $0x0,0xa(%eax)
0846cdd7 +0x0aa:  mov    0x8(%ebp),%eax
0846cdda +0x0ad:  movb   $0x0,0x2c(%eax)
0846cdde +0x0b1:  mov    0x8(%ebp),%eax
0846cde1 +0x0b4:  movb   $0x0,0x2d(%eax)
0846cde5 +0x0b8:  mov    0x8(%ebp),%eax
0846cde8 +0x0bb:  movb   $0x0,0x2e(%eax)
0846cdec +0x0bf:  mov    0x8(%ebp),%eax
0846cdef +0x0c2:  movb   $0x0,0x2f(%eax)
0846cdf3 +0x0c6:  mov    0x8(%ebp),%eax
0846cdf6 +0x0c9:  add    $0xe,%eax
0846cdf9 +0x0cc:  movl   $0x1e,0x8(%esp)
0846ce01 +0x0d4:  movl   $0x0,0x4(%esp)
0846ce09 +0x0dc:  mov    %eax,(%esp)
0846ce0c +0x0df:  call   0807dcc0 <_init+0x5b8>
0846ce11 +0x0e4:  leave
0846ce12 +0x0e5:  ret
0846ce13 +0x0e6:  nop
0846ce14 +0x0e7:  push   %ebp
0846ce15 +0x0e8:  mov    %esp,%ebp
0846ce17 +0x0ea:  push   %esi
0846ce18 +0x0eb:  push   %ebx
0846ce19 +0x0ec:  sub    $0x10,%esp
0846ce1c +0x0ef:  mov    0x8(%ebp),%eax
0846ce1f +0x0f2:  movl   $0x5a2,0x8(%esp)
0846ce27 +0x0fa:  movl   $0x1b58,0x4(%esp)
0846ce2f +0x102:  mov    %eax,(%esp)
0846ce32 +0x105:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846ce37 +0x10a:  mov    0x8(%ebp),%eax
0846ce3a +0x10d:  movl   $0x0,0xa(%eax)
0846ce41 +0x114:  mov    0x8(%ebp),%eax
0846ce44 +0x117:  add    $0xe,%eax
0846ce47 +0x11a:  mov    %eax,(%esp)
0846ce4a +0x11d:  call   0846cda6 <+0x79>
0846ce4f +0x122:  mov    0x8(%ebp),%eax
0846ce52 +0x125:  movl   $0x0,0x3e(%eax)
0846ce59 +0x12c:  mov    0x8(%ebp),%eax
0846ce5c +0x12f:  add    $0x42,%eax
0846ce5f +0x132:  mov    %eax,%ebx
0846ce61 +0x134:  mov    $0x1f,%esi
0846ce66 +0x139:  jmp    0846ce76 <+0x149>
0846ce68 +0x13b:  mov    %ebx,(%esp)
0846ce6b +0x13e:  call   0846cd4a <+0x1d>
0846ce70 +0x143:  add    $0x2b,%ebx
0846ce73 +0x146:  sub    $0x1,%esi
0846ce76 +0x149:  cmp    $0xffffffff,%esi
0846ce79 +0x14c:  setne  %al
0846ce7c +0x14f:  test   %al,%al
0846ce7e +0x151:  jne    0846ce68 <+0x13b>
0846ce80 +0x153:  mov    0x8(%ebp),%eax
0846ce83 +0x156:  add    $0xe,%eax
0846ce86 +0x159:  movl   $0x30,0x8(%esp)
0846ce8e +0x161:  movl   $0x0,0x4(%esp)
0846ce96 +0x169:  mov    %eax,(%esp)
0846ce99 +0x16c:  call   0807dcc0 <_init+0x5b8>
0846ce9e +0x171:  mov    0x8(%ebp),%eax
0846cea1 +0x174:  add    $0x42,%eax
0846cea4 +0x177:  movl   $0x560,0x8(%esp)
0846ceac +0x17f:  movl   $0x0,0x4(%esp)
0846ceb4 +0x187:  mov    %eax,(%esp)
0846ceb7 +0x18a:  call   0807dcc0 <_init+0x5b8>
0846cebc +0x18f:  add    $0x10,%esp
0846cebf +0x192:  pop    %ebx
0846cec0 +0x193:  pop    %esi
0846cec1 +0x194:  pop    %ebp
0846cec2 +0x195:  ret
0846cec3 +0x196:  nop
0846cec4 +0x197:  push   %ebp
0846cec5 +0x198:  mov    %esp,%ebp
0846cec7 +0x19a:  sub    $0x18,%esp
0846ceca +0x19d:  mov    0x8(%ebp),%eax
0846cecd +0x1a0:  movl   $0x12,0x8(%esp)
0846ced5 +0x1a8:  movl   $0x1b59,0x4(%esp)
0846cedd +0x1b0:  mov    %eax,(%esp)
0846cee0 +0x1b3:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846cee5 +0x1b8:  mov    0x8(%ebp),%eax
0846cee8 +0x1bb:  movl   $0x0,0xa(%eax)
0846ceef +0x1c2:  mov    0x8(%ebp),%eax
0846cef2 +0x1c5:  movl   $0x0,0xe(%eax)
0846cef9 +0x1cc:  leave
0846cefa +0x1cd:  ret
0846cefb +0x1ce:  nop
0846cefc +0x1cf:  push   %ebp
0846cefd +0x1d0:  mov    %esp,%ebp
0846ceff +0x1d2:  sub    $0x18,%esp
0846cf02 +0x1d5:  mov    0x8(%ebp),%eax
0846cf05 +0x1d8:  movl   $0x12,0x8(%esp)
0846cf0d +0x1e0:  movl   $0x1b5a,0x4(%esp)
0846cf15 +0x1e8:  mov    %eax,(%esp)
0846cf18 +0x1eb:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846cf1d +0x1f0:  mov    0x8(%ebp),%eax
0846cf20 +0x1f3:  movl   $0x0,0xa(%eax)
0846cf27 +0x1fa:  mov    0x8(%ebp),%eax
0846cf2a +0x1fd:  movl   $0x0,0xe(%eax)
0846cf31 +0x204:  leave
0846cf32 +0x205:  ret
0846cf33 +0x206:  nop
0846cf34 +0x207:  push   %ebp
0846cf35 +0x208:  mov    %esp,%ebp
0846cf37 +0x20a:  sub    $0x18,%esp
0846cf3a +0x20d:  mov    0x8(%ebp),%eax
0846cf3d +0x210:  movl   $0x31,0x8(%esp)
0846cf45 +0x218:  movl   $0x1b5c,0x4(%esp)
0846cf4d +0x220:  mov    %eax,(%esp)
0846cf50 +0x223:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846cf55 +0x228:  mov    0x8(%ebp),%eax
0846cf58 +0x22b:  movl   $0x0,0xa(%eax)
0846cf5f +0x232:  mov    0x8(%ebp),%eax
0846cf62 +0x235:  movl   $0x0,0xe(%eax)
0846cf69 +0x23c:  mov    0x8(%ebp),%eax
0846cf6c +0x23f:  movb   $0x0,0x12(%eax)
0846cf70 +0x243:  mov    0x8(%ebp),%eax
0846cf73 +0x246:  add    $0x13,%eax
0846cf76 +0x249:  movl   $0x1e,0x8(%esp)
0846cf7e +0x251:  movl   $0x0,0x4(%esp)
0846cf86 +0x259:  mov    %eax,(%esp)
0846cf89 +0x25c:  call   0807dcc0 <_init+0x5b8>
0846cf8e +0x261:  leave
0846cf8f +0x262:  ret
0846cf90 +0x263:  push   %ebp
0846cf91 +0x264:  mov    %esp,%ebp
0846cf93 +0x266:  sub    $0x18,%esp
0846cf96 +0x269:  mov    0x8(%ebp),%eax
0846cf99 +0x26c:  movl   $0x31,0x8(%esp)
0846cfa1 +0x274:  movl   $0x1b5e,0x4(%esp)
0846cfa9 +0x27c:  mov    %eax,(%esp)
0846cfac +0x27f:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846cfb1 +0x284:  mov    0x8(%ebp),%eax
0846cfb4 +0x287:  movl   $0x0,0xa(%eax)
0846cfbb +0x28e:  mov    0x8(%ebp),%eax
0846cfbe +0x291:  movl   $0x0,0xe(%eax)
0846cfc5 +0x298:  mov    0x8(%ebp),%eax
0846cfc8 +0x29b:  movb   $0x0,0x12(%eax)
0846cfcc +0x29f:  mov    0x8(%ebp),%eax
0846cfcf +0x2a2:  add    $0x13,%eax
0846cfd2 +0x2a5:  movl   $0x1e,0x8(%esp)
0846cfda +0x2ad:  movl   $0x0,0x4(%esp)
0846cfe2 +0x2b5:  mov    %eax,(%esp)
0846cfe5 +0x2b8:  call   0807dcc0 <_init+0x5b8>
0846cfea +0x2bd:  leave
0846cfeb +0x2be:  ret
0846cfec +0x2bf:  push   %ebp
0846cfed +0x2c0:  mov    %esp,%ebp
0846cfef +0x2c2:  sub    $0x18,%esp
0846cff2 +0x2c5:  mov    0x8(%ebp),%eax
0846cff5 +0x2c8:  movl   $0x31,0x8(%esp)
0846cffd +0x2d0:  movl   $0x1b60,0x4(%esp)
0846d005 +0x2d8:  mov    %eax,(%esp)
0846d008 +0x2db:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846d00d +0x2e0:  mov    0x8(%ebp),%eax
0846d010 +0x2e3:  movl   $0x0,0xa(%eax)
0846d017 +0x2ea:  mov    0x8(%ebp),%eax
0846d01a +0x2ed:  movl   $0x0,0xe(%eax)
0846d021 +0x2f4:  mov    0x8(%ebp),%eax
0846d024 +0x2f7:  movb   $0x0,0x12(%eax)
0846d028 +0x2fb:  mov    0x8(%ebp),%eax
0846d02b +0x2fe:  add    $0x13,%eax
0846d02e +0x301:  movl   $0x1e,0x8(%esp)
0846d036 +0x309:  movl   $0x0,0x4(%esp)
0846d03e +0x311:  mov    %eax,(%esp)
0846d041 +0x314:  call   0807dcc0 <_init+0x5b8>
0846d046 +0x319:  leave
0846d047 +0x31a:  ret
0846d048 +0x31b:  push   %ebp
0846d049 +0x31c:  mov    %esp,%ebp
0846d04b +0x31e:  mov    0x8(%ebp),%eax
0846d04e +0x321:  pop    %ebp
0846d04f +0x322:  ret
0846d050 +0x323:  push   %ebp
0846d051 +0x324:  mov    %esp,%ebp
0846d053 +0x326:  push   %ebx
0846d054 +0x327:  sub    $0x54,%esp
0846d057 +0x32a:  movl   $0x0,0x8(%esp)
0846d05f +0x332:  movl   $0x0,0x4(%esp)
0846d067 +0x33a:  lea    -0x1e(%ebp),%eax
0846d06a +0x33d:  mov    %eax,(%esp)
0846d06d +0x340:  call   08110b70 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x82>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x82
0846d072 +0x345:  mov    0x8(%ebp),%eax
0846d075 +0x348:  mov    0x18(%eax),%edx
0846d078 +0x34b:  mov    0xc(%ebp),%eax
0846d07b +0x34e:  lea    (%edx,%eax,1),%eax
0846d07e +0x351:  mov    %eax,-0x14(%ebp)
0846d081 +0x354:  movl   $0xa,-0xc(%ebp)
0846d088 +0x35b:  cmpl   $0x9,-0x14(%ebp)
0846d08c +0x35f:  jg     0846d10c <+0x3df>
0846d08e +0x361:  mov    0x8(%ebp),%eax
0846d091 +0x364:  mov    0x18(%eax),%edx
0846d094 +0x367:  mov    0xc(%ebp),%eax
0846d097 +0x36a:  add    %eax,%edx
0846d099 +0x36c:  mov    0x8(%ebp),%eax
0846d09c +0x36f:  mov    %edx,0x18(%eax)
0846d09f +0x372:  mov    0x8(%ebp),%eax
0846d0a2 +0x375:  mov    0x2c(%eax),%edx
0846d0a5 +0x378:  mov    0xc(%ebp),%eax
0846d0a8 +0x37b:  add    %eax,%edx
0846d0aa +0x37d:  mov    0x8(%ebp),%eax
0846d0ad +0x380:  mov    %edx,0x2c(%eax)
0846d0b0 +0x383:  mov    0x8(%ebp),%eax
0846d0b3 +0x386:  mov    0x18(%eax),%edx
0846d0b6 +0x389:  mov    0x8(%ebp),%eax
0846d0b9 +0x38c:  lea    0x30(%eax),%ebx
0846d0bc +0x38f:  mov    0x8(%ebp),%eax
0846d0bf +0x392:  mov    0x2c(%eax),%eax
0846d0c2 +0x395:  mov    0xc(%ebp),%ecx
0846d0c5 +0x398:  mov    %ecx,0x20(%esp)
0846d0c9 +0x39c:  mov    %edx,0x1c(%esp)
0846d0cd +0x3a0:  mov    %ebx,0x18(%esp)
0846d0d1 +0x3a4:  mov    %eax,0x14(%esp)
0846d0d5 +0x3a8:  movl   $"(offset:%x - buf:%x) = remainlen:%d, Recv Size[%d] ",0x10(%esp)
0846d0dd +0x3b0:  movl   $0x31d,0xc(%esp)
0846d0e5 +0x3b8:  movl   $&_ZZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEiE12__FUNCTION__,0x8(%esp)
0846d0ed +0x3c0:  movl   $"Network.h",0x4(%esp)
0846d0f5 +0x3c8:  movl   $0x1,(%esp)
0846d0fc +0x3cf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846d101 +0x3d4:  mov    $0x1,%eax
0846d106 +0x3d9:  jmp    0846d276 <+0x549>
0846d10b +0x3de:  nop
0846d10c +0x3df:  mov    0x8(%ebp),%eax
0846d10f +0x3e2:  mov    0x18(%eax),%eax
0846d112 +0x3e5:  test   %eax,%eax
0846d114 +0x3e7:  je     0846d12c <+0x3ff>
0846d116 +0x3e9:  mov    0x8(%ebp),%eax
0846d119 +0x3ec:  mov    0x2c(%eax),%edx
0846d11c +0x3ef:  mov    0x8(%ebp),%eax
0846d11f +0x3f2:  mov    0x18(%eax),%eax
0846d122 +0x3f5:  neg    %eax
0846d124 +0x3f7:  add    %eax,%edx
0846d126 +0x3f9:  mov    0x8(%ebp),%eax
0846d129 +0x3fc:  mov    %edx,0x2c(%eax)
0846d12c +0x3ff:  mov    0x8(%ebp),%eax
0846d12f +0x402:  mov    0x2c(%eax),%eax
0846d132 +0x405:  movl   $0xa,0x8(%esp)
0846d13a +0x40d:  mov    %eax,0x4(%esp)
0846d13e +0x411:  lea    -0x1e(%ebp),%eax
0846d141 +0x414:  mov    %eax,(%esp)
0846d144 +0x417:  call   0807d8a0 <_init+0x198>
0846d149 +0x41c:  movzwl -0x1c(%ebp),%eax
0846d14d +0x420:  movzwl %ax,%eax
0846d150 +0x423:  mov    %eax,-0x10(%ebp)
0846d153 +0x426:  cmpl   $0x9,-0x10(%ebp)
0846d157 +0x42a:  jbe    0846d162 <+0x435>
0846d159 +0x42c:  cmpl   $0x1800,-0x10(%ebp)
0846d160 +0x433:  jbe    0846d1c6 <+0x499>
0846d162 +0x435:  mov    0x8(%ebp),%eax
0846d165 +0x438:  mov    0x2c(%eax),%eax
0846d168 +0x43b:  mov    %eax,0x1c(%esp)
0846d16c +0x43f:  mov    -0x10(%ebp),%eax
0846d16f +0x442:  mov    %eax,0x18(%esp)
0846d173 +0x446:  mov    0xc(%ebp),%eax
0846d176 +0x449:  mov    %eax,0x14(%esp)
0846d17a +0x44d:  movl   $"Recv Size[%d], Parsing Packet Size[%d], recvbuf_offset[%d] is Too Large",0x10(%esp)
0846d182 +0x455:  movl   $0x32d,0xc(%esp)
0846d18a +0x45d:  movl   $&_ZZN8CNetworkILi100000ELi100000EE20Parsing_ServerPacketEiE12__FUNCTION__,0x8(%esp)
0846d192 +0x465:  movl   $"Network.h",0x4(%esp)
0846d19a +0x46d:  movl   $0x1,(%esp)
0846d1a1 +0x474:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0846d1a6 +0x479:  mov    0x8(%ebp),%eax
0846d1a9 +0x47c:  lea    0x30(%eax),%edx
0846d1ac +0x47f:  mov    0x8(%ebp),%eax
0846d1af +0x482:  mov    %edx,0x2c(%eax)
0846d1b2 +0x485:  mov    0x8(%ebp),%eax
0846d1b5 +0x488:  movl   $0x0,0x18(%eax)
0846d1bc +0x48f:  mov    $0x0,%eax
0846d1c1 +0x494:  jmp    0846d276 <+0x549>
0846d1c6 +0x499:  mov    -0x14(%ebp),%eax
0846d1c9 +0x49c:  cmp    -0x10(%ebp),%eax
0846d1cc +0x49f:  jb     0846d220 <+0x4f3>
0846d1ce +0x4a1:  mov    0x8(%ebp),%eax
0846d1d1 +0x4a4:  mov    0x2c(%eax),%eax
0846d1d4 +0x4a7:  mov    %eax,(%esp)
0846d1d7 +0x4aa:  call   08473660 <_ZN21CDispatchServerPacket14dispatchPacketEPc>  ; CDispatchServerPacket::dispatchPacket(char*)
0846d1dc +0x4af:  mov    -0x14(%ebp),%eax
0846d1df +0x4b2:  sub    -0x10(%ebp),%eax
0846d1e2 +0x4b5:  mov    %eax,-0x14(%ebp)
0846d1e5 +0x4b8:  mov    0x8(%ebp),%eax
0846d1e8 +0x4bb:  mov    0x2c(%eax),%eax
0846d1eb +0x4be:  mov    %eax,%edx
0846d1ed +0x4c0:  add    -0x10(%ebp),%edx
0846d1f0 +0x4c3:  mov    0x8(%ebp),%eax
0846d1f3 +0x4c6:  mov    %edx,0x2c(%eax)
0846d1f6 +0x4c9:  mov    0x8(%ebp),%eax
0846d1f9 +0x4cc:  movl   $0x0,0x18(%eax)
0846d200 +0x4d3:  cmpl   $0x0,-0x14(%ebp)
0846d204 +0x4d7:  jne    0846d214 <+0x4e7>
0846d206 +0x4d9:  mov    0x8(%ebp),%eax
0846d209 +0x4dc:  lea    0x30(%eax),%edx
0846d20c +0x4df:  mov    0x8(%ebp),%eax
0846d20f +0x4e2:  mov    %edx,0x2c(%eax)
0846d212 +0x4e5:  jmp    0846d221 <+0x4f4>
0846d214 +0x4e7:  cmpl   $0x9,-0x14(%ebp)
0846d218 +0x4eb:  jg     0846d10b <+0x3de>
0846d21e +0x4f1:  jmp    0846d221 <+0x4f4>
0846d220 +0x4f3:  nop
0846d221 +0x4f4:  cmpl   $0x0,-0x14(%ebp)
0846d225 +0x4f8:  jle    0846d271 <+0x544>
0846d227 +0x4fa:  mov    -0x14(%ebp),%eax
0846d22a +0x4fd:  cmp    $&_ZL14gUnicodeBuffer+0xe174,%eax
0846d22f +0x502:  jbe    0846d238 <+0x50b>
0846d231 +0x504:  mov    $0x0,%eax
0846d236 +0x509:  jmp    0846d276 <+0x549>
0846d238 +0x50b:  mov    -0x14(%ebp),%edx
0846d23b +0x50e:  mov    0x8(%ebp),%eax
0846d23e +0x511:  mov    0x2c(%eax),%eax
0846d241 +0x514:  mov    0x8(%ebp),%ecx
0846d244 +0x517:  add    $0x30,%ecx
0846d247 +0x51a:  mov    %edx,0x8(%esp)
0846d24b +0x51e:  mov    %eax,0x4(%esp)
0846d24f +0x522:  mov    %ecx,(%esp)
0846d252 +0x525:  call   0807d880 <_init+0x178>
0846d257 +0x52a:  mov    0x8(%ebp),%eax
0846d25a +0x52d:  lea    0x30(%eax),%edx
0846d25d +0x530:  mov    -0x14(%ebp),%eax
0846d260 +0x533:  add    %eax,%edx
0846d262 +0x535:  mov    0x8(%ebp),%eax
0846d265 +0x538:  mov    %edx,0x2c(%eax)
0846d268 +0x53b:  mov    -0x14(%ebp),%edx
0846d26b +0x53e:  mov    0x8(%ebp),%eax
0846d26e +0x541:  mov    %edx,0x18(%eax)
0846d271 +0x544:  mov    $0x1,%eax
0846d276 +0x549:  add    $0x54,%esp
0846d279 +0x54c:  pop    %ebx
0846d27a +0x54d:  pop    %ebp
0846d27b +0x54e:  ret
```

## 反编译 C

```c
// <global>::global @ 0x846cd2d

/* CCommunityServerProxy::CCommunityServerProxy(char*, int) */

void CCommunityServerProxy::_GLOBAL__I_CCommunityServerProxy(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
