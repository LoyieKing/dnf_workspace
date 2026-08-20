# UseQuestItem

`_ZN5CUser12UseQuestItemEi`

`CUser::UseQuestItem(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08668d1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08668d1a  _ZN5CUser12UseQuestItemEi
#           CUser::UseQuestItem(int)
# range [0x08668d1a, 0x0866a3fd]
08668d1a +0x0000:  push   %ebp
08668d1b +0x0001:  mov    %esp,%ebp
08668d1d +0x0003:  push   %edi
08668d1e +0x0004:  push   %esi
08668d1f +0x0005:  push   %ebx
08668d20 +0x0006:  sub    $0xb7c,%esp
08668d26 +0x000c:  mov    0x8(%ebp),%eax
08668d29 +0x000f:  mov    %eax,(%esp)
08668d2c +0x0012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08668d31 +0x0017:  cmp    $0x3,%eax
08668d34 +0x001a:  setne  %al
08668d37 +0x001d:  test   %al,%al
08668d39 +0x001f:  jne    0866a3f2 <+0x16d8>
08668d3f +0x0025:  lea    -0x5c(%ebp),%eax
08668d42 +0x0028:  mov    %eax,(%esp)
08668d45 +0x002b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08668d4a +0x0030:  mov    0x8(%ebp),%eax
08668d4d +0x0033:  mov    %eax,(%esp)
08668d50 +0x0036:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
08668d55 +0x003b:  test   %al,%al
08668d57 +0x003d:  je     08668d8b <+0x71>
08668d59 +0x003f:  lea    -0x5c(%ebp),%eax
08668d5c +0x0042:  mov    %eax,(%esp)
08668d5f +0x0045:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08668d64 +0x004a:  lea    -0x5c(%ebp),%eax
08668d67 +0x004d:  mov    %eax,0xc(%esp)
08668d6b +0x0051:  movl   $0x13,0x8(%esp)
08668d73 +0x0059:  movl   $0x20,0x4(%esp)
08668d7b +0x0061:  mov    0x8(%ebp),%eax
08668d7e +0x0064:  mov    %eax,(%esp)
08668d81 +0x0067:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
08668d86 +0x006c:  jmp    0866a3e5 <+0x16cb>
08668d8b +0x0071:  mov    0x8(%ebp),%eax
08668d8e +0x0074:  mov    %eax,(%esp)
08668d91 +0x0077:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08668d96 +0x007c:  lea    -0x99(%ebp),%edx
08668d9c +0x0082:  mov    0xc(%ebp),%ecx
08668d9f +0x0085:  mov    %ecx,0xc(%esp)
08668da3 +0x0089:  movl   $0x1,0x8(%esp)
08668dab +0x0091:  mov    %eax,0x4(%esp)
08668daf +0x0095:  mov    %edx,(%esp)
08668db2 +0x0098:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08668db7 +0x009d:  sub    $0x4,%esp
08668dba +0x00a0:  movl   $0x0,-0x4c(%ebp)
08668dc1 +0x00a7:  movb   $0x0,-0x41(%ebp)
08668dc5 +0x00ab:  mov    -0x97(%ebp),%eax
08668dcb +0x00b1:  cmp    $0x105d,%eax
08668dd0 +0x00b6:  je     08669517 <+0x7fd>
08668dd6 +0x00bc:  cmp    $0x105d,%eax
08668ddb +0x00c1:  ja     08668fca <+0x2b0>
08668de1 +0x00c7:  cmp    $0xff9,%eax
08668de6 +0x00cc:  je     0866931c <+0x602>
08668dec +0x00d2:  cmp    $0xff9,%eax
08668df1 +0x00d7:  ja     08668ee6 <+0x1cc>
08668df7 +0x00dd:  cmp    $0xfd1,%eax
08668dfc +0x00e2:  je     08669234 <+0x51a>
08668e02 +0x00e8:  cmp    $0xfd1,%eax
08668e07 +0x00ed:  ja     08668e72 <+0x158>
08668e09 +0x00ef:  cmp    $0xfcc,%eax
08668e0e +0x00f4:  je     086691e4 <+0x4ca>
08668e14 +0x00fa:  cmp    $0xfcc,%eax
08668e19 +0x00ff:  ja     08668e41 <+0x127>
08668e1b +0x0101:  cmp    $0xfca,%eax
08668e20 +0x0106:  je     086691c4 <+0x4aa>
08668e26 +0x010c:  cmp    $0xfca,%eax
08668e2b +0x0111:  ja     086691d4 <+0x4ba>
08668e31 +0x0117:  cmp    $0xfc9,%eax
08668e36 +0x011c:  je     086691b4 <+0x49a>
08668e3c +0x0122:  jmp    08669808 <+0xaee>
08668e41 +0x0127:  cmp    $0xfce,%eax
08668e46 +0x012c:  je     086691f4 <+0x4da>
08668e4c +0x0132:  cmp    $0xfce,%eax
08668e51 +0x0137:  jb     08669204 <+0x4ea>
08668e57 +0x013d:  cmp    $0xfcf,%eax
08668e5c +0x0142:  je     08669214 <+0x4fa>
08668e62 +0x0148:  cmp    $0xfd0,%eax
08668e67 +0x014d:  je     08669224 <+0x50a>
08668e6d +0x0153:  jmp    08669808 <+0xaee>
08668e72 +0x0158:  cmp    $0xff0,%eax
08668e77 +0x015d:  je     08669294 <+0x57a>
08668e7d +0x0163:  cmp    $0xff0,%eax
08668e82 +0x0168:  ja     08668eb5 <+0x19b>
08668e84 +0x016a:  cmp    $0xfd3,%eax
08668e89 +0x016f:  je     08669244 <+0x52a>
08668e8f +0x0175:  cmp    $0xfd3,%eax
08668e94 +0x017a:  jb     08669254 <+0x53a>
08668e9a +0x0180:  cmp    $0xfd4,%eax
08668e9f +0x0185:  je     08669264 <+0x54a>
08668ea5 +0x018b:  cmp    $0xfef,%eax
08668eaa +0x0190:  je     08669274 <+0x55a>
08668eb0 +0x0196:  jmp    08669808 <+0xaee>
08668eb5 +0x019b:  cmp    $0xff2,%eax
08668eba +0x01a0:  je     086692a4 <+0x58a>
08668ec0 +0x01a6:  cmp    $0xff2,%eax
08668ec5 +0x01ab:  jb     08669284 <+0x56a>
08668ecb +0x01b1:  cmp    $0xff7,%eax
08668ed0 +0x01b6:  je     086692f4 <+0x5da>
08668ed6 +0x01bc:  cmp    $0xff8,%eax
08668edb +0x01c1:  je     08669308 <+0x5ee>
08668ee1 +0x01c7:  jmp    08669808 <+0xaee>
08668ee6 +0x01cc:  cmp    $0x1002,%eax
08668eeb +0x01d1:  je     086693d0 <+0x6b6>
08668ef1 +0x01d7:  cmp    $0x1002,%eax
08668ef6 +0x01dc:  ja     08668f56 <+0x23c>
08668ef8 +0x01de:  cmp    $0xffd,%eax
08668efd +0x01e3:  je     0866936c <+0x652>
08668f03 +0x01e9:  cmp    $0xffd,%eax
08668f08 +0x01ee:  ja     08668f25 <+0x20b>
08668f0a +0x01f0:  cmp    $0xffb,%eax
08668f0f +0x01f5:  je     08669358 <+0x63e>
08668f15 +0x01fb:  cmp    $0xffb,%eax
08668f1a +0x0200:  ja     08669344 <+0x62a>
08668f20 +0x0206:  jmp    08669330 <+0x616>
08668f25 +0x020b:  cmp    $0xfff,%eax
08668f2a +0x0210:  je     08669394 <+0x67a>
08668f30 +0x0216:  cmp    $0xfff,%eax
08668f35 +0x021b:  jb     08669380 <+0x666>
08668f3b +0x0221:  cmp    $0x1000,%eax
08668f40 +0x0226:  je     086693bc <+0x6a2>
08668f46 +0x022c:  cmp    $0x1001,%eax
08668f4b +0x0231:  je     086693a8 <+0x68e>
08668f51 +0x0237:  jmp    08669808 <+0xaee>
08668f56 +0x023c:  cmp    $0x1045,%eax
08668f5b +0x0241:  je     086692b4 <+0x59a>
08668f61 +0x0247:  cmp    $0x1045,%eax
08668f66 +0x024c:  ja     08668f99 <+0x27f>
08668f68 +0x024e:  cmp    $0x1004,%eax
08668f6d +0x0253:  je     0866940c <+0x6f2>
08668f73 +0x0259:  cmp    $0x1004,%eax
08668f78 +0x025e:  jb     086693e4 <+0x6ca>
08668f7e +0x0264:  cmp    $0x1005,%eax
08668f83 +0x0269:  je     086693f8 <+0x6de>
08668f89 +0x026f:  cmp    $0x1006,%eax
08668f8e +0x0274:  je     08669420 <+0x706>
08668f94 +0x027a:  jmp    08669808 <+0xaee>
08668f99 +0x027f:  cmp    $0x1047,%eax
08668f9e +0x0284:  je     086692d4 <+0x5ba>
08668fa4 +0x028a:  cmp    $0x1047,%eax
08668fa9 +0x028f:  jb     086692c4 <+0x5aa>
08668faf +0x0295:  cmp    $0x1048,%eax
08668fb4 +0x029a:  je     086692e4 <+0x5ca>
08668fba +0x02a0:  cmp    $0x105c,%eax
08668fbf +0x02a5:  je     086694fc <+0x7e2>
08668fc5 +0x02ab:  jmp    08669808 <+0xaee>
08668fca +0x02b0:  cmp    $0x1f21,%eax
08668fcf +0x02b5:  je     0866945c <+0x742>
08668fd5 +0x02bb:  cmp    $0x1f21,%eax
08668fda +0x02c0:  ja     086690c4 <+0x3aa>
08668fe0 +0x02c6:  cmp    $0x1079,%eax
08668fe5 +0x02cb:  je     0866960a <+0x8f0>
08668feb +0x02d1:  cmp    $0x1079,%eax
08668ff0 +0x02d6:  ja     08669050 <+0x336>
08668ff2 +0x02d8:  cmp    $0x1061,%eax
08668ff7 +0x02dd:  je     08669583 <+0x869>
08668ffd +0x02e3:  cmp    $0x1061,%eax
08669002 +0x02e8:  ja     0866901f <+0x305>
08669004 +0x02ea:  cmp    $0x105f,%eax
08669009 +0x02ef:  je     0866954d <+0x833>
0866900f +0x02f5:  cmp    $0x105f,%eax
08669014 +0x02fa:  ja     08669568 <+0x84e>
0866901a +0x0300:  jmp    08669532 <+0x818>
0866901f +0x0305:  cmp    $0x1063,%eax
08669024 +0x030a:  je     086695b9 <+0x89f>
0866902a +0x0310:  cmp    $0x1063,%eax
0866902f +0x0315:  jb     0866959e <+0x884>
08669035 +0x031b:  cmp    $0x1064,%eax
0866903a +0x0320:  je     086695d4 <+0x8ba>
08669040 +0x0326:  cmp    $0x1065,%eax
08669045 +0x032b:  je     086695ef <+0x8d5>
0866904b +0x0331:  jmp    08669808 <+0xaee>
08669050 +0x0336:  cmp    $0x1f1c,%eax
08669055 +0x033b:  je     08669691 <+0x977>
0866905b +0x0341:  cmp    $0x1f1c,%eax
08669060 +0x0346:  ja     08669093 <+0x379>
08669062 +0x0348:  cmp    $0x107b,%eax
08669067 +0x034d:  je     08669640 <+0x926>
0866906d +0x0353:  cmp    $0x107b,%eax
08669072 +0x0358:  jb     08669625 <+0x90b>
08669078 +0x035e:  cmp    $0x107c,%eax
0866907d +0x0363:  je     0866965b <+0x941>
08669083 +0x0369:  cmp    $0x107d,%eax
08669088 +0x036e:  je     08669676 <+0x95c>
0866908e +0x0374:  jmp    08669808 <+0xaee>
08669093 +0x0379:  cmp    $0x1f1e,%eax
08669098 +0x037e:  je     086696c7 <+0x9ad>
0866909e +0x0384:  cmp    $0x1f1e,%eax
086690a3 +0x0389:  jb     086696ac <+0x992>
086690a9 +0x038f:  cmp    $0x1f1f,%eax
086690ae +0x0394:  je     086696e2 <+0x9c8>
086690b4 +0x039a:  cmp    $0x1f20,%eax
086690b9 +0x039f:  je     08669434 <+0x71a>
086690bf +0x03a5:  jmp    08669808 <+0xaee>
086690c4 +0x03aa:  cmp    $0x1f2a,%eax
086690c9 +0x03af:  je     08669769 <+0xa4f>
086690cf +0x03b5:  cmp    $0x1f2a,%eax
086690d4 +0x03ba:  ja     08669134 <+0x41a>
086690d6 +0x03bc:  cmp    $0x1f25,%eax
086690db +0x03c1:  je     08669733 <+0xa19>
086690e1 +0x03c7:  cmp    $0x1f25,%eax
086690e6 +0x03cc:  ja     08669103 <+0x3e9>
086690e8 +0x03ce:  cmp    $0x1f23,%eax
086690ed +0x03d3:  je     08669470 <+0x756>
086690f3 +0x03d9:  cmp    $0x1f23,%eax
086690f8 +0x03de:  ja     086696fd <+0x9e3>
086690fe +0x03e4:  jmp    08669448 <+0x72e>
08669103 +0x03e9:  cmp    $0x1f27,%eax
08669108 +0x03ee:  je     0866974e <+0xa34>
0866910e +0x03f4:  cmp    $0x1f27,%eax
08669113 +0x03f9:  jb     08669718 <+0x9fe>
08669119 +0x03ff:  cmp    $0x1f28,%eax
0866911e +0x0404:  je     08669484 <+0x76a>
08669124 +0x040a:  cmp    $0x1f29,%eax
08669129 +0x040f:  je     08669498 <+0x77e>
0866912f +0x0415:  jmp    08669808 <+0xaee>
08669134 +0x041a:  cmp    $0x1f53,%eax
08669139 +0x041f:  je     086694e8 <+0x7ce>
0866913f +0x0425:  cmp    $0x1f53,%eax
08669144 +0x042a:  ja     08669183 <+0x469>
08669146 +0x042c:  cmp    $0x1f50,%eax
0866914b +0x0431:  je     086694ac <+0x792>
08669151 +0x0437:  cmp    $0x1f50,%eax
08669156 +0x043c:  ja     08669168 <+0x44e>
08669158 +0x043e:  cmp    $0x1f2b,%eax
0866915d +0x0443:  je     08669784 <+0xa6a>
08669163 +0x0449:  jmp    08669808 <+0xaee>
08669168 +0x044e:  cmp    $0x1f51,%eax
0866916d +0x0453:  je     086694d4 <+0x7ba>
08669173 +0x0459:  cmp    $0x1f52,%eax
08669178 +0x045e:  je     086694c0 <+0x7a6>
0866917e +0x0464:  jmp    08669808 <+0xaee>
08669183 +0x0469:  cmp    $0x1f55,%eax
08669188 +0x046e:  je     086697d5 <+0xabb>
0866918e +0x0474:  cmp    $0x1f55,%eax
08669193 +0x0479:  jb     0866979f <+0xa85>
08669199 +0x047f:  cmp    $0x1f56,%eax
0866919e +0x0484:  je     086697ba <+0xaa0>
086691a4 +0x048a:  cmp    $0x1f57,%eax
086691a9 +0x048f:  je     086697f0 <+0xad6>
086691af +0x0495:  jmp    08669808 <+0xaee>
086691b4 +0x049a:  movb   $0x0,-0x4d(%ebp)
086691b8 +0x049e:  movl   $0x1,-0x48(%ebp)
086691bf +0x04a5:  jmp    0866987e <+0xb64>
086691c4 +0x04aa:  movb   $0x0,-0x4d(%ebp)
086691c8 +0x04ae:  movl   $0x2,-0x48(%ebp)
086691cf +0x04b5:  jmp    0866987e <+0xb64>
086691d4 +0x04ba:  movb   $0x0,-0x4d(%ebp)
086691d8 +0x04be:  movl   $0x3,-0x48(%ebp)
086691df +0x04c5:  jmp    0866987e <+0xb64>
086691e4 +0x04ca:  movb   $0x0,-0x4d(%ebp)
086691e8 +0x04ce:  movl   $0x4,-0x48(%ebp)
086691ef +0x04d5:  jmp    0866987e <+0xb64>
086691f4 +0x04da:  movb   $0x1,-0x4d(%ebp)
086691f8 +0x04de:  movl   $0x1,-0x48(%ebp)
086691ff +0x04e5:  jmp    0866987e <+0xb64>
08669204 +0x04ea:  movb   $0x1,-0x4d(%ebp)
08669208 +0x04ee:  movl   $0x2,-0x48(%ebp)
0866920f +0x04f5:  jmp    0866987e <+0xb64>
08669214 +0x04fa:  movb   $0x1,-0x4d(%ebp)
08669218 +0x04fe:  movl   $0x3,-0x48(%ebp)
0866921f +0x0505:  jmp    0866987e <+0xb64>
08669224 +0x050a:  movb   $0x1,-0x4d(%ebp)
08669228 +0x050e:  movl   $0x4,-0x48(%ebp)
0866922f +0x0515:  jmp    0866987e <+0xb64>
08669234 +0x051a:  movb   $0x2,-0x4d(%ebp)
08669238 +0x051e:  movl   $0x1,-0x48(%ebp)
0866923f +0x0525:  jmp    0866987e <+0xb64>
08669244 +0x052a:  movb   $0x2,-0x4d(%ebp)
08669248 +0x052e:  movl   $0x2,-0x48(%ebp)
0866924f +0x0535:  jmp    0866987e <+0xb64>
08669254 +0x053a:  movb   $0x2,-0x4d(%ebp)
08669258 +0x053e:  movl   $0x3,-0x48(%ebp)
0866925f +0x0545:  jmp    0866987e <+0xb64>
08669264 +0x054a:  movb   $0x2,-0x4d(%ebp)
08669268 +0x054e:  movl   $0x4,-0x48(%ebp)
0866926f +0x0555:  jmp    0866987e <+0xb64>
08669274 +0x055a:  movb   $0x3,-0x4d(%ebp)
08669278 +0x055e:  movl   $0x1,-0x48(%ebp)
0866927f +0x0565:  jmp    0866987e <+0xb64>
08669284 +0x056a:  movb   $0x3,-0x4d(%ebp)
08669288 +0x056e:  movl   $0x2,-0x48(%ebp)
0866928f +0x0575:  jmp    0866987e <+0xb64>
08669294 +0x057a:  movb   $0x3,-0x4d(%ebp)
08669298 +0x057e:  movl   $0x3,-0x48(%ebp)
0866929f +0x0585:  jmp    0866987e <+0xb64>
086692a4 +0x058a:  movb   $0x3,-0x4d(%ebp)
086692a8 +0x058e:  movl   $0x4,-0x48(%ebp)
086692af +0x0595:  jmp    0866987e <+0xb64>
086692b4 +0x059a:  movb   $0x4,-0x4d(%ebp)
086692b8 +0x059e:  movl   $0x1,-0x48(%ebp)
086692bf +0x05a5:  jmp    0866987e <+0xb64>
086692c4 +0x05aa:  movb   $0x4,-0x4d(%ebp)
086692c8 +0x05ae:  movl   $0x2,-0x48(%ebp)
086692cf +0x05b5:  jmp    0866987e <+0xb64>
086692d4 +0x05ba:  movb   $0x4,-0x4d(%ebp)
086692d8 +0x05be:  movl   $0x3,-0x48(%ebp)
086692df +0x05c5:  jmp    0866987e <+0xb64>
086692e4 +0x05ca:  movb   $0x4,-0x4d(%ebp)
086692e8 +0x05ce:  movl   $0x4,-0x48(%ebp)
086692ef +0x05d5:  jmp    0866987e <+0xb64>
086692f4 +0x05da:  movb   $0x0,-0x4d(%ebp)
086692f8 +0x05de:  movl   $0x1,-0x48(%ebp)
086692ff +0x05e5:  movb   $0x1,-0x41(%ebp)
08669303 +0x05e9:  jmp    0866987e <+0xb64>
08669308 +0x05ee:  movb   $0x0,-0x4d(%ebp)
0866930c +0x05f2:  movl   $0x2,-0x48(%ebp)
08669313 +0x05f9:  movb   $0x1,-0x41(%ebp)
08669317 +0x05fd:  jmp    0866987e <+0xb64>
0866931c +0x0602:  movb   $0x0,-0x4d(%ebp)
08669320 +0x0606:  movl   $0x3,-0x48(%ebp)
08669327 +0x060d:  movb   $0x1,-0x41(%ebp)
0866932b +0x0611:  jmp    0866987e <+0xb64>
08669330 +0x0616:  movb   $0x0,-0x4d(%ebp)
08669334 +0x061a:  movl   $0x4,-0x48(%ebp)
0866933b +0x0621:  movb   $0x1,-0x41(%ebp)
0866933f +0x0625:  jmp    0866987e <+0xb64>
08669344 +0x062a:  movb   $0x1,-0x4d(%ebp)
08669348 +0x062e:  movl   $0x1,-0x48(%ebp)
0866934f +0x0635:  movb   $0x1,-0x41(%ebp)
08669353 +0x0639:  jmp    0866987e <+0xb64>
08669358 +0x063e:  movb   $0x1,-0x4d(%ebp)
0866935c +0x0642:  movl   $0x2,-0x48(%ebp)
08669363 +0x0649:  movb   $0x1,-0x41(%ebp)
08669367 +0x064d:  jmp    0866987e <+0xb64>
0866936c +0x0652:  movb   $0x1,-0x4d(%ebp)
08669370 +0x0656:  movl   $0x3,-0x48(%ebp)
08669377 +0x065d:  movb   $0x1,-0x41(%ebp)
0866937b +0x0661:  jmp    0866987e <+0xb64>
08669380 +0x0666:  movb   $0x1,-0x4d(%ebp)
08669384 +0x066a:  movl   $0x4,-0x48(%ebp)
0866938b +0x0671:  movb   $0x1,-0x41(%ebp)
0866938f +0x0675:  jmp    0866987e <+0xb64>
08669394 +0x067a:  movb   $0x2,-0x4d(%ebp)
08669398 +0x067e:  movl   $0x1,-0x48(%ebp)
0866939f +0x0685:  movb   $0x1,-0x41(%ebp)
086693a3 +0x0689:  jmp    0866987e <+0xb64>
086693a8 +0x068e:  movb   $0x2,-0x4d(%ebp)
086693ac +0x0692:  movl   $0x2,-0x48(%ebp)
086693b3 +0x0699:  movb   $0x1,-0x41(%ebp)
086693b7 +0x069d:  jmp    0866987e <+0xb64>
086693bc +0x06a2:  movb   $0x2,-0x4d(%ebp)
086693c0 +0x06a6:  movl   $0x3,-0x48(%ebp)
086693c7 +0x06ad:  movb   $0x1,-0x41(%ebp)
086693cb +0x06b1:  jmp    0866987e <+0xb64>
086693d0 +0x06b6:  movb   $0x2,-0x4d(%ebp)
086693d4 +0x06ba:  movl   $0x4,-0x48(%ebp)
086693db +0x06c1:  movb   $0x1,-0x41(%ebp)
086693df +0x06c5:  jmp    0866987e <+0xb64>
086693e4 +0x06ca:  movb   $0x3,-0x4d(%ebp)
086693e8 +0x06ce:  movl   $0x1,-0x48(%ebp)
086693ef +0x06d5:  movb   $0x1,-0x41(%ebp)
086693f3 +0x06d9:  jmp    0866987e <+0xb64>
086693f8 +0x06de:  movb   $0x3,-0x4d(%ebp)
086693fc +0x06e2:  movl   $0x2,-0x48(%ebp)
08669403 +0x06e9:  movb   $0x1,-0x41(%ebp)
08669407 +0x06ed:  jmp    0866987e <+0xb64>
0866940c +0x06f2:  movb   $0x3,-0x4d(%ebp)
08669410 +0x06f6:  movl   $0x3,-0x48(%ebp)
08669417 +0x06fd:  movb   $0x1,-0x41(%ebp)
0866941b +0x0701:  jmp    0866987e <+0xb64>
08669420 +0x0706:  movb   $0x3,-0x4d(%ebp)
08669424 +0x070a:  movl   $0x4,-0x48(%ebp)
0866942b +0x0711:  movb   $0x1,-0x41(%ebp)
0866942f +0x0715:  jmp    0866987e <+0xb64>
08669434 +0x071a:  movb   $0x5,-0x4d(%ebp)
08669438 +0x071e:  movl   $0x1,-0x48(%ebp)
0866943f +0x0725:  movb   $0x1,-0x41(%ebp)
08669443 +0x0729:  jmp    0866987e <+0xb64>
08669448 +0x072e:  movb   $0x5,-0x4d(%ebp)
0866944c +0x0732:  movl   $0x2,-0x48(%ebp)
08669453 +0x0739:  movb   $0x1,-0x41(%ebp)
08669457 +0x073d:  jmp    0866987e <+0xb64>
0866945c +0x0742:  movb   $0x5,-0x4d(%ebp)
08669460 +0x0746:  movl   $0x3,-0x48(%ebp)
08669467 +0x074d:  movb   $0x1,-0x41(%ebp)
0866946b +0x0751:  jmp    0866987e <+0xb64>
08669470 +0x0756:  movb   $0x5,-0x4d(%ebp)
08669474 +0x075a:  movl   $0x4,-0x48(%ebp)
0866947b +0x0761:  movb   $0x1,-0x41(%ebp)
0866947f +0x0765:  jmp    0866987e <+0xb64>
08669484 +0x076a:  movb   $0x6,-0x4d(%ebp)
08669488 +0x076e:  movl   $0x1,-0x48(%ebp)
0866948f +0x0775:  movb   $0x1,-0x41(%ebp)
08669493 +0x0779:  jmp    0866987e <+0xb64>
08669498 +0x077e:  movb   $0x6,-0x4d(%ebp)
0866949c +0x0782:  movl   $0x2,-0x48(%ebp)
086694a3 +0x0789:  movb   $0x1,-0x41(%ebp)
086694a7 +0x078d:  jmp    0866987e <+0xb64>
086694ac +0x0792:  movb   $0x7,-0x4d(%ebp)
086694b0 +0x0796:  movl   $0x1,-0x48(%ebp)
086694b7 +0x079d:  movb   $0x1,-0x41(%ebp)
086694bb +0x07a1:  jmp    0866987e <+0xb64>
086694c0 +0x07a6:  movb   $0x7,-0x4d(%ebp)
086694c4 +0x07aa:  movl   $0x2,-0x48(%ebp)
086694cb +0x07b1:  movb   $0x1,-0x41(%ebp)
086694cf +0x07b5:  jmp    0866987e <+0xb64>
086694d4 +0x07ba:  movb   $0x7,-0x4d(%ebp)
086694d8 +0x07be:  movl   $0x3,-0x48(%ebp)
086694df +0x07c5:  movb   $0x1,-0x41(%ebp)
086694e3 +0x07c9:  jmp    0866987e <+0xb64>
086694e8 +0x07ce:  movb   $0x7,-0x4d(%ebp)
086694ec +0x07d2:  movl   $0x4,-0x48(%ebp)
086694f3 +0x07d9:  movb   $0x1,-0x41(%ebp)
086694f7 +0x07dd:  jmp    0866987e <+0xb64>
086694fc +0x07e2:  movb   $0x1,-0x4d(%ebp)
08669500 +0x07e6:  movl   $0x1,-0x48(%ebp)
08669507 +0x07ed:  movl   $0x1,-0x4c(%ebp)
0866950e +0x07f4:  movb   $0x1,-0x41(%ebp)
08669512 +0x07f8:  jmp    0866987e <+0xb64>
08669517 +0x07fd:  movb   $0x1,-0x4d(%ebp)
0866951b +0x0801:  movl   $0x2,-0x48(%ebp)
08669522 +0x0808:  movl   $0x1,-0x4c(%ebp)
08669529 +0x080f:  movb   $0x1,-0x41(%ebp)
0866952d +0x0813:  jmp    0866987e <+0xb64>
08669532 +0x0818:  movb   $0x1,-0x4d(%ebp)
08669536 +0x081c:  movl   $0x3,-0x48(%ebp)
0866953d +0x0823:  movl   $0x1,-0x4c(%ebp)
08669544 +0x082a:  movb   $0x1,-0x41(%ebp)
08669548 +0x082e:  jmp    0866987e <+0xb64>
0866954d +0x0833:  movb   $0x1,-0x4d(%ebp)
08669551 +0x0837:  movl   $0x4,-0x48(%ebp)
08669558 +0x083e:  movl   $0x1,-0x4c(%ebp)
0866955f +0x0845:  movb   $0x1,-0x41(%ebp)
08669563 +0x0849:  jmp    0866987e <+0xb64>
08669568 +0x084e:  movb   $0x2,-0x4d(%ebp)
0866956c +0x0852:  movl   $0x1,-0x48(%ebp)
08669573 +0x0859:  movl   $0x1,-0x4c(%ebp)
0866957a +0x0860:  movb   $0x1,-0x41(%ebp)
0866957e +0x0864:  jmp    0866987e <+0xb64>
08669583 +0x0869:  movb   $0x2,-0x4d(%ebp)
08669587 +0x086d:  movl   $0x2,-0x48(%ebp)
0866958e +0x0874:  movl   $0x1,-0x4c(%ebp)
08669595 +0x087b:  movb   $0x1,-0x41(%ebp)
08669599 +0x087f:  jmp    0866987e <+0xb64>
0866959e +0x0884:  movb   $0x2,-0x4d(%ebp)
086695a2 +0x0888:  movl   $0x3,-0x48(%ebp)
086695a9 +0x088f:  movl   $0x1,-0x4c(%ebp)
086695b0 +0x0896:  movb   $0x1,-0x41(%ebp)
086695b4 +0x089a:  jmp    0866987e <+0xb64>
086695b9 +0x089f:  movb   $0x2,-0x4d(%ebp)
086695bd +0x08a3:  movl   $0x4,-0x48(%ebp)
086695c4 +0x08aa:  movl   $0x1,-0x4c(%ebp)
086695cb +0x08b1:  movb   $0x1,-0x41(%ebp)
086695cf +0x08b5:  jmp    0866987e <+0xb64>
086695d4 +0x08ba:  movb   $0x3,-0x4d(%ebp)
086695d8 +0x08be:  movl   $0x1,-0x48(%ebp)
086695df +0x08c5:  movl   $0x1,-0x4c(%ebp)
086695e6 +0x08cc:  movb   $0x1,-0x41(%ebp)
086695ea +0x08d0:  jmp    0866987e <+0xb64>
086695ef +0x08d5:  movb   $0x3,-0x4d(%ebp)
086695f3 +0x08d9:  movl   $0x2,-0x48(%ebp)
086695fa +0x08e0:  movl   $0x1,-0x4c(%ebp)
08669601 +0x08e7:  movb   $0x1,-0x41(%ebp)
08669605 +0x08eb:  jmp    0866987e <+0xb64>
0866960a +0x08f0:  movb   $0x3,-0x4d(%ebp)
0866960e +0x08f4:  movl   $0x3,-0x48(%ebp)
08669615 +0x08fb:  movl   $0x1,-0x4c(%ebp)
0866961c +0x0902:  movb   $0x1,-0x41(%ebp)
08669620 +0x0906:  jmp    0866987e <+0xb64>
08669625 +0x090b:  movb   $0x0,-0x4d(%ebp)
08669629 +0x090f:  movl   $0x1,-0x48(%ebp)
08669630 +0x0916:  movl   $0x1,-0x4c(%ebp)
08669637 +0x091d:  movb   $0x1,-0x41(%ebp)
0866963b +0x0921:  jmp    0866987e <+0xb64>
08669640 +0x0926:  movb   $0x0,-0x4d(%ebp)
08669644 +0x092a:  movl   $0x2,-0x48(%ebp)
0866964b +0x0931:  movl   $0x1,-0x4c(%ebp)
08669652 +0x0938:  movb   $0x1,-0x41(%ebp)
08669656 +0x093c:  jmp    0866987e <+0xb64>
0866965b +0x0941:  movb   $0x0,-0x4d(%ebp)
0866965f +0x0945:  movl   $0x3,-0x48(%ebp)
08669666 +0x094c:  movl   $0x1,-0x4c(%ebp)
0866966d +0x0953:  movb   $0x1,-0x41(%ebp)
08669671 +0x0957:  jmp    0866987e <+0xb64>
08669676 +0x095c:  movb   $0x0,-0x4d(%ebp)
0866967a +0x0960:  movl   $0x4,-0x48(%ebp)
08669681 +0x0967:  movl   $0x1,-0x4c(%ebp)
08669688 +0x096e:  movb   $0x1,-0x41(%ebp)
0866968c +0x0972:  jmp    0866987e <+0xb64>
08669691 +0x0977:  movb   $0x3,-0x4d(%ebp)
08669695 +0x097b:  movl   $0x4,-0x48(%ebp)
0866969c +0x0982:  movl   $0x1,-0x4c(%ebp)
086696a3 +0x0989:  movb   $0x1,-0x41(%ebp)
086696a7 +0x098d:  jmp    0866987e <+0xb64>
086696ac +0x0992:  movb   $0x4,-0x4d(%ebp)
086696b0 +0x0996:  movl   $0x1,-0x48(%ebp)
086696b7 +0x099d:  movl   $0x1,-0x4c(%ebp)
086696be +0x09a4:  movb   $0x1,-0x41(%ebp)
086696c2 +0x09a8:  jmp    0866987e <+0xb64>
086696c7 +0x09ad:  movb   $0x4,-0x4d(%ebp)
086696cb +0x09b1:  movl   $0x2,-0x48(%ebp)
086696d2 +0x09b8:  movl   $0x1,-0x4c(%ebp)
086696d9 +0x09bf:  movb   $0x1,-0x41(%ebp)
086696dd +0x09c3:  jmp    0866987e <+0xb64>
086696e2 +0x09c8:  movb   $0x4,-0x4d(%ebp)
086696e6 +0x09cc:  movl   $0x3,-0x48(%ebp)
086696ed +0x09d3:  movl   $0x1,-0x4c(%ebp)
086696f4 +0x09da:  movb   $0x1,-0x41(%ebp)
086696f8 +0x09de:  jmp    0866987e <+0xb64>
086696fd +0x09e3:  movb   $0x5,-0x4d(%ebp)
08669701 +0x09e7:  movl   $0x1,-0x48(%ebp)
08669708 +0x09ee:  movl   $0x1,-0x4c(%ebp)
0866970f +0x09f5:  movb   $0x1,-0x41(%ebp)
08669713 +0x09f9:  jmp    0866987e <+0xb64>
08669718 +0x09fe:  movb   $0x5,-0x4d(%ebp)
0866971c +0x0a02:  movl   $0x2,-0x48(%ebp)
08669723 +0x0a09:  movl   $0x1,-0x4c(%ebp)
0866972a +0x0a10:  movb   $0x1,-0x41(%ebp)
0866972e +0x0a14:  jmp    0866987e <+0xb64>
08669733 +0x0a19:  movb   $0x5,-0x4d(%ebp)
08669737 +0x0a1d:  movl   $0x3,-0x48(%ebp)
0866973e +0x0a24:  movl   $0x1,-0x4c(%ebp)
08669745 +0x0a2b:  movb   $0x1,-0x41(%ebp)
08669749 +0x0a2f:  jmp    0866987e <+0xb64>
0866974e +0x0a34:  movb   $0x5,-0x4d(%ebp)
08669752 +0x0a38:  movl   $0x4,-0x48(%ebp)
08669759 +0x0a3f:  movl   $0x1,-0x4c(%ebp)
08669760 +0x0a46:  movb   $0x1,-0x41(%ebp)
08669764 +0x0a4a:  jmp    0866987e <+0xb64>
08669769 +0x0a4f:  movb   $0x6,-0x4d(%ebp)
0866976d +0x0a53:  movl   $0x1,-0x48(%ebp)
08669774 +0x0a5a:  movl   $0x1,-0x4c(%ebp)
0866977b +0x0a61:  movb   $0x1,-0x41(%ebp)
0866977f +0x0a65:  jmp    0866987e <+0xb64>
08669784 +0x0a6a:  movb   $0x6,-0x4d(%ebp)
08669788 +0x0a6e:  movl   $0x2,-0x48(%ebp)
0866978f +0x0a75:  movl   $0x1,-0x4c(%ebp)
08669796 +0x0a7c:  movb   $0x1,-0x41(%ebp)
0866979a +0x0a80:  jmp    0866987e <+0xb64>
0866979f +0x0a85:  movb   $0x7,-0x4d(%ebp)
086697a3 +0x0a89:  movl   $0x1,-0x48(%ebp)
086697aa +0x0a90:  movl   $0x1,-0x4c(%ebp)
086697b1 +0x0a97:  movb   $0x1,-0x41(%ebp)
086697b5 +0x0a9b:  jmp    0866987e <+0xb64>
086697ba +0x0aa0:  movb   $0x7,-0x4d(%ebp)
086697be +0x0aa4:  movl   $0x2,-0x48(%ebp)
086697c5 +0x0aab:  movl   $0x1,-0x4c(%ebp)
086697cc +0x0ab2:  movb   $0x1,-0x41(%ebp)
086697d0 +0x0ab6:  jmp    0866987e <+0xb64>
086697d5 +0x0abb:  movb   $0x7,-0x4d(%ebp)
086697d9 +0x0abf:  movl   $0x3,-0x48(%ebp)
086697e0 +0x0ac6:  movl   $0x1,-0x4c(%ebp)
086697e7 +0x0acd:  movb   $0x1,-0x41(%ebp)
086697eb +0x0ad1:  jmp    0866987e <+0xb64>
086697f0 +0x0ad6:  movb   $0x7,-0x4d(%ebp)
086697f4 +0x0ada:  movl   $0x4,-0x48(%ebp)
086697fb +0x0ae1:  movl   $0x1,-0x4c(%ebp)
08669802 +0x0ae8:  movb   $0x1,-0x41(%ebp)
08669806 +0x0aec:  jmp    0866987e <+0xb64>
08669808 +0x0aee:  lea    -0x5c(%ebp),%eax
0866980b +0x0af1:  mov    %eax,(%esp)
0866980e +0x0af4:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08669813 +0x0af9:  movl   $0x20,0x8(%esp)
0866981b +0x0b01:  movl   $0x1,0x4(%esp)
08669823 +0x0b09:  lea    -0x5c(%ebp),%eax
08669826 +0x0b0c:  mov    %eax,(%esp)
08669829 +0x0b0f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866982e +0x0b14:  movl   $0x0,0x4(%esp)
08669836 +0x0b1c:  lea    -0x5c(%ebp),%eax
08669839 +0x0b1f:  mov    %eax,(%esp)
0866983c +0x0b22:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669841 +0x0b27:  movl   $0x11,0x4(%esp)
08669849 +0x0b2f:  lea    -0x5c(%ebp),%eax
0866984c +0x0b32:  mov    %eax,(%esp)
0866984f +0x0b35:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669854 +0x0b3a:  movl   $0x1,0x4(%esp)
0866985c +0x0b42:  lea    -0x5c(%ebp),%eax
0866985f +0x0b45:  mov    %eax,(%esp)
08669862 +0x0b48:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08669867 +0x0b4d:  lea    -0x5c(%ebp),%eax
0866986a +0x0b50:  mov    %eax,0x4(%esp)
0866986e +0x0b54:  mov    0x8(%ebp),%eax
08669871 +0x0b57:  mov    %eax,(%esp)
08669874 +0x0b5a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08669879 +0x0b5f:  jmp    0866a3e5 <+0x16cb>
0866987e +0x0b64:  mov    -0x97(%ebp),%eax
08669884 +0x0b6a:  cmp    $0x105b,%eax
08669889 +0x0b6f:  jbe    0866989c <+0xb82>
0866988b +0x0b71:  mov    -0x97(%ebp),%eax
08669891 +0x0b77:  cmp    $0x1065,%eax
08669896 +0x0b7c:  jbe    08669926 <+0xc0c>
0866989c +0x0b82:  mov    -0x97(%ebp),%eax
086698a2 +0x0b88:  cmp    $0x1078,%eax
086698a7 +0x0b8d:  jbe    086698b6 <+0xb9c>
086698a9 +0x0b8f:  mov    -0x97(%ebp),%eax
086698af +0x0b95:  cmp    $0x107d,%eax
086698b4 +0x0b9a:  jbe    08669926 <+0xc0c>
086698b6 +0x0b9c:  mov    -0x97(%ebp),%eax
086698bc +0x0ba2:  cmp    $0x1f1b,%eax
086698c1 +0x0ba7:  jbe    086698d0 <+0xbb6>
086698c3 +0x0ba9:  mov    -0x97(%ebp),%eax
086698c9 +0x0baf:  cmp    $0x1f1f,%eax
086698ce +0x0bb4:  jbe    08669926 <+0xc0c>
086698d0 +0x0bb6:  mov    -0x97(%ebp),%eax
086698d6 +0x0bbc:  cmp    $0x1f23,%eax
086698db +0x0bc1:  jbe    086698ea <+0xbd0>
086698dd +0x0bc3:  mov    -0x97(%ebp),%eax
086698e3 +0x0bc9:  cmp    $0x1f27,%eax
086698e8 +0x0bce:  jbe    08669926 <+0xc0c>
086698ea +0x0bd0:  mov    -0x97(%ebp),%eax
086698f0 +0x0bd6:  cmp    $0x1f29,%eax
086698f5 +0x0bdb:  jbe    08669904 <+0xbea>
086698f7 +0x0bdd:  mov    -0x97(%ebp),%eax
086698fd +0x0be3:  cmp    $0x1f2b,%eax
08669902 +0x0be8:  jbe    08669926 <+0xc0c>
08669904 +0x0bea:  mov    -0x97(%ebp),%eax
0866990a +0x0bf0:  cmp    $0x1f53,%eax
0866990f +0x0bf5:  jbe    086699b0 <+0xc96>
08669915 +0x0bfb:  mov    -0x97(%ebp),%eax
0866991b +0x0c01:  cmp    $0x1f57,%eax
08669920 +0x0c06:  ja     086699b0 <+0xc96>
08669926 +0x0c0c:  mov    0x8(%ebp),%eax
08669929 +0x0c0f:  mov    %eax,(%esp)
0866992c +0x0c12:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08669931 +0x0c17:  test   %al,%al
08669933 +0x0c19:  sete   %al
08669936 +0x0c1c:  test   %al,%al
08669938 +0x0c1e:  je     086699b0 <+0xc96>
0866993a +0x0c20:  lea    -0x5c(%ebp),%eax
0866993d +0x0c23:  mov    %eax,(%esp)
08669940 +0x0c26:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08669945 +0x0c2b:  movl   $0x20,0x8(%esp)
0866994d +0x0c33:  movl   $0x1,0x4(%esp)
08669955 +0x0c3b:  lea    -0x5c(%ebp),%eax
08669958 +0x0c3e:  mov    %eax,(%esp)
0866995b +0x0c41:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08669960 +0x0c46:  movl   $0x0,0x4(%esp)
08669968 +0x0c4e:  lea    -0x5c(%ebp),%eax
0866996b +0x0c51:  mov    %eax,(%esp)
0866996e +0x0c54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669973 +0x0c59:  movl   $0x11,0x4(%esp)
0866997b +0x0c61:  lea    -0x5c(%ebp),%eax
0866997e +0x0c64:  mov    %eax,(%esp)
08669981 +0x0c67:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669986 +0x0c6c:  movl   $0x1,0x4(%esp)
0866998e +0x0c74:  lea    -0x5c(%ebp),%eax
08669991 +0x0c77:  mov    %eax,(%esp)
08669994 +0x0c7a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08669999 +0x0c7f:  lea    -0x5c(%ebp),%eax
0866999c +0x0c82:  mov    %eax,0x4(%esp)
086699a0 +0x0c86:  mov    0x8(%ebp),%eax
086699a3 +0x0c89:  mov    %eax,(%esp)
086699a6 +0x0c8c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086699ab +0x0c91:  jmp    0866a3e5 <+0x16cb>
086699b0 +0x0c96:  cmpb   $0x0,-0x4d(%ebp)
086699b4 +0x0c9a:  js     0866a357 <+0x163d>
086699ba +0x0ca0:  cmpb   $0xa,-0x4d(%ebp)
086699be +0x0ca4:  jg     0866a357 <+0x163d>
086699c4 +0x0caa:  movsbl -0x4d(%ebp),%ebx
086699c8 +0x0cae:  mov    0x8(%ebp),%eax
086699cb +0x0cb1:  mov    %eax,(%esp)
086699ce +0x0cb4:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086699d3 +0x0cb9:  cmp    %eax,%ebx
086699d5 +0x0cbb:  setne  %al
086699d8 +0x0cbe:  test   %al,%al
086699da +0x0cc0:  je     08669a52 <+0xd38>
086699dc +0x0cc2:  lea    -0x5c(%ebp),%eax
086699df +0x0cc5:  mov    %eax,(%esp)
086699e2 +0x0cc8:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086699e7 +0x0ccd:  movl   $0x20,0x8(%esp)
086699ef +0x0cd5:  movl   $0x1,0x4(%esp)
086699f7 +0x0cdd:  lea    -0x5c(%ebp),%eax
086699fa +0x0ce0:  mov    %eax,(%esp)
086699fd +0x0ce3:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08669a02 +0x0ce8:  movl   $0x0,0x4(%esp)
08669a0a +0x0cf0:  lea    -0x5c(%ebp),%eax
08669a0d +0x0cf3:  mov    %eax,(%esp)
08669a10 +0x0cf6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669a15 +0x0cfb:  movl   $0x11,0x4(%esp)
08669a1d +0x0d03:  lea    -0x5c(%ebp),%eax
08669a20 +0x0d06:  mov    %eax,(%esp)
08669a23 +0x0d09:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669a28 +0x0d0e:  movl   $0x1,0x4(%esp)
08669a30 +0x0d16:  lea    -0x5c(%ebp),%eax
08669a33 +0x0d19:  mov    %eax,(%esp)
08669a36 +0x0d1c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08669a3b +0x0d21:  lea    -0x5c(%ebp),%eax
08669a3e +0x0d24:  mov    %eax,0x4(%esp)
08669a42 +0x0d28:  mov    0x8(%ebp),%eax
08669a45 +0x0d2b:  mov    %eax,(%esp)
08669a48 +0x0d2e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08669a4d +0x0d33:  jmp    0866a3e5 <+0x16cb>
08669a52 +0x0d38:  mov    0x8(%ebp),%eax
08669a55 +0x0d3b:  mov    %eax,(%esp)
08669a58 +0x0d3e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08669a5d +0x0d43:  mov    %eax,%ebx
08669a5f +0x0d45:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08669a64 +0x0d4a:  mov    %ebx,0x4(%esp)
08669a68 +0x0d4e:  mov    %eax,(%esp)
08669a6b +0x0d51:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08669a70 +0x0d56:  mov    %eax,-0x40(%ebp)
08669a73 +0x0d59:  mov    0x8(%ebp),%eax
08669a76 +0x0d5c:  mov    %eax,(%esp)
08669a79 +0x0d5f:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08669a7e +0x0d64:  lea    0x1(%eax),%ebx
08669a81 +0x0d67:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08669a86 +0x0d6c:  mov    %ebx,0x4(%esp)
08669a8a +0x0d70:  mov    %eax,(%esp)
08669a8d +0x0d73:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
08669a92 +0x0d78:  mov    %eax,-0x3c(%ebp)
08669a95 +0x0d7b:  mov    0x8(%ebp),%eax
08669a98 +0x0d7e:  mov    %eax,(%esp)
08669a9b +0x0d81:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08669aa0 +0x0d86:  cmp    -0x40(%ebp),%eax
08669aa3 +0x0d89:  setb   %al
08669aa6 +0x0d8c:  test   %al,%al
08669aa8 +0x0d8e:  je     08669abe <+0xda4>
08669aaa +0x0d90:  mov    -0x40(%ebp),%edx
08669aad +0x0d93:  mov    0x8(%ebp),%eax
08669ab0 +0x0d96:  mov    %edx,0x4(%esp)
08669ab4 +0x0d9a:  mov    %eax,(%esp)
08669ab7 +0x0d9d:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
08669abc +0x0da2:  jmp    08669aea <+0xdd0>
08669abe +0x0da4:  mov    0x8(%ebp),%eax
08669ac1 +0x0da7:  mov    %eax,(%esp)
08669ac4 +0x0daa:  call   08151abe <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13f3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13f3
08669ac9 +0x0daf:  cmp    -0x3c(%ebp),%eax
08669acc +0x0db2:  seta   %al
08669acf +0x0db5:  test   %al,%al
08669ad1 +0x0db7:  je     08669aea <+0xdd0>
08669ad3 +0x0db9:  mov    -0x3c(%ebp),%eax
08669ad6 +0x0dbc:  sub    $0x1,%eax
08669ad9 +0x0dbf:  mov    %eax,%edx
08669adb +0x0dc1:  mov    0x8(%ebp),%eax
08669ade +0x0dc4:  mov    %edx,0x4(%esp)
08669ae2 +0x0dc8:  mov    %eax,(%esp)
08669ae5 +0x0dcb:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
08669aea +0x0dd0:  movl   $0x0,-0x38(%ebp)
08669af1 +0x0dd7:  lea    -0x688(%ebp),%ebx
08669af7 +0x0ddd:  mov    $0x0,%eax
08669afc +0x0de2:  mov    $0x138,%edx
08669b01 +0x0de7:  mov    %ebx,%edi
08669b03 +0x0de9:  mov    %edx,%ecx
08669b05 +0x0deb:  rep stos %eax,%es:(%edi)
08669b07 +0x0ded:  lea    -0xb68(%ebp),%ebx
08669b0d +0x0df3:  mov    $0x0,%eax
08669b12 +0x0df8:  mov    $0x138,%edx
08669b17 +0x0dfd:  mov    %ebx,%edi
08669b19 +0x0dff:  mov    %edx,%ecx
08669b1b +0x0e01:  rep stos %eax,%es:(%edi)
08669b1d +0x0e03:  movl   $0x3,-0x28(%ebp)
08669b24 +0x0e0a:  jmp    08669d1e <+0x1004>
08669b29 +0x0e0f:  mov    0x8(%ebp),%eax
08669b2c +0x0e12:  mov    %eax,(%esp)
08669b2f +0x0e15:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08669b34 +0x0e1a:  lea    -0xd6(%ebp),%edx
08669b3a +0x0e20:  mov    -0x28(%ebp),%ecx
08669b3d +0x0e23:  mov    %ecx,0xc(%esp)
08669b41 +0x0e27:  movl   $0x1,0x8(%esp)
08669b49 +0x0e2f:  mov    %eax,0x4(%esp)
08669b4d +0x0e33:  mov    %edx,(%esp)
08669b50 +0x0e36:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08669b55 +0x0e3b:  sub    $0x4,%esp
08669b58 +0x0e3e:  cmpl   $0x0,-0x4c(%ebp)
08669b5c +0x0e42:  je     08669c23 <+0xf09>
08669b62 +0x0e48:  mov    -0xd4(%ebp),%eax
08669b68 +0x0e4e:  cmp    $0x105b,%eax
08669b6d +0x0e53:  jbe    08669d04 <+0xfea>
08669b73 +0x0e59:  mov    -0xd4(%ebp),%eax
08669b79 +0x0e5f:  cmp    $0x1065,%eax
08669b7e +0x0e64:  ja     08669d07 <+0xfed>
08669b84 +0x0e6a:  mov    -0xd4(%ebp),%eax
08669b8a +0x0e70:  cmp    $0x1078,%eax
08669b8f +0x0e75:  jbe    08669ba2 <+0xe88>
08669b91 +0x0e77:  mov    -0xd4(%ebp),%eax
08669b97 +0x0e7d:  cmp    $0x107d,%eax
08669b9c +0x0e82:  jbe    08669d0a <+0xff0>
08669ba2 +0x0e88:  mov    -0xd4(%ebp),%eax
08669ba8 +0x0e8e:  cmp    $0x1f1b,%eax
08669bad +0x0e93:  jbe    08669bc0 <+0xea6>
08669baf +0x0e95:  mov    -0xd4(%ebp),%eax
08669bb5 +0x0e9b:  cmp    $0x1f1f,%eax
08669bba +0x0ea0:  jbe    08669d0d <+0xff3>
08669bc0 +0x0ea6:  mov    -0xd4(%ebp),%eax
08669bc6 +0x0eac:  cmp    $0x1f23,%eax
08669bcb +0x0eb1:  jbe    08669bde <+0xec4>
08669bcd +0x0eb3:  mov    -0xd4(%ebp),%eax
08669bd3 +0x0eb9:  cmp    $0x1f27,%eax
08669bd8 +0x0ebe:  jbe    08669d10 <+0xff6>
08669bde +0x0ec4:  mov    -0xd4(%ebp),%eax
08669be4 +0x0eca:  cmp    $0x1f29,%eax
08669be9 +0x0ecf:  jbe    08669bfc <+0xee2>
08669beb +0x0ed1:  mov    -0xd4(%ebp),%eax
08669bf1 +0x0ed7:  cmp    $0x1f2b,%eax
08669bf6 +0x0edc:  jbe    08669d13 <+0xff9>
08669bfc +0x0ee2:  mov    -0xd4(%ebp),%eax
08669c02 +0x0ee8:  cmp    $0x1f53,%eax
08669c07 +0x0eed:  jbe    08669ce1 <+0xfc7>
08669c0d +0x0ef3:  mov    -0xd4(%ebp),%eax
08669c13 +0x0ef9:  cmp    $0x1f57,%eax
08669c18 +0x0efe:  ja     08669ce1 <+0xfc7>
08669c1e +0x0f04:  jmp    08669d1a <+0x1000>
08669c23 +0x0f09:  mov    -0xd4(%ebp),%eax
08669c29 +0x0f0f:  cmp    $0xfc8,%eax
08669c2e +0x0f14:  jbe    08669c41 <+0xf27>
08669c30 +0x0f16:  mov    -0xd4(%ebp),%eax
08669c36 +0x0f1c:  cmp    $0xfd4,%eax
08669c3b +0x0f21:  jbe    08669ce1 <+0xfc7>
08669c41 +0x0f27:  mov    -0xd4(%ebp),%eax
08669c47 +0x0f2d:  cmp    $0xfee,%eax
08669c4c +0x0f32:  jbe    08669c5f <+0xf45>
08669c4e +0x0f34:  mov    -0xd4(%ebp),%eax
08669c54 +0x0f3a:  cmp    $0xff2,%eax
08669c59 +0x0f3f:  jbe    08669ce1 <+0xfc7>
08669c5f +0x0f45:  mov    -0xd4(%ebp),%eax
08669c65 +0x0f4b:  cmp    $0xff6,%eax
08669c6a +0x0f50:  jbe    08669c79 <+0xf5f>
08669c6c +0x0f52:  mov    -0xd4(%ebp),%eax
08669c72 +0x0f58:  cmp    $0x1006,%eax
08669c77 +0x0f5d:  jbe    08669ce1 <+0xfc7>
08669c79 +0x0f5f:  mov    -0xd4(%ebp),%eax
08669c7f +0x0f65:  cmp    $0x1044,%eax
08669c84 +0x0f6a:  jbe    08669c93 <+0xf79>
08669c86 +0x0f6c:  mov    -0xd4(%ebp),%eax
08669c8c +0x0f72:  cmp    $0x1048,%eax
08669c91 +0x0f77:  jbe    08669ce1 <+0xfc7>
08669c93 +0x0f79:  mov    -0xd4(%ebp),%eax
08669c99 +0x0f7f:  cmp    $0x1f1f,%eax
08669c9e +0x0f84:  jbe    08669cad <+0xf93>
08669ca0 +0x0f86:  mov    -0xd4(%ebp),%eax
08669ca6 +0x0f8c:  cmp    $0x1f23,%eax
08669cab +0x0f91:  jbe    08669ce1 <+0xfc7>
08669cad +0x0f93:  mov    -0xd4(%ebp),%eax
08669cb3 +0x0f99:  cmp    $0x1f27,%eax
08669cb8 +0x0f9e:  jbe    08669cc7 <+0xfad>
08669cba +0x0fa0:  mov    -0xd4(%ebp),%eax
08669cc0 +0x0fa6:  cmp    $0x1f29,%eax
08669cc5 +0x0fab:  jbe    08669ce1 <+0xfc7>
08669cc7 +0x0fad:  mov    -0xd4(%ebp),%eax
08669ccd +0x0fb3:  cmp    $0x1f4f,%eax
08669cd2 +0x0fb8:  jbe    08669d16 <+0xffc>
08669cd4 +0x0fba:  mov    -0xd4(%ebp),%eax
08669cda +0x0fc0:  cmp    $0x1f53,%eax
08669cdf +0x0fc5:  ja     08669d19 <+0xfff>
08669ce1 +0x0fc7:  mov    -0x38(%ebp),%eax
08669ce4 +0x0fca:  mov    -0x28(%ebp),%edx
08669ce7 +0x0fcd:  mov    %edx,-0x688(%ebp,%eax,4)
08669cee +0x0fd4:  mov    -0x38(%ebp),%eax
08669cf1 +0x0fd7:  mov    -0xcf(%ebp),%edx
08669cf7 +0x0fdd:  mov    %edx,-0xb68(%ebp,%eax,4)
08669cfe +0x0fe4:  addl   $0x1,-0x38(%ebp)
08669d02 +0x0fe8:  jmp    08669d1a <+0x1000>
08669d04 +0x0fea:  nop
08669d05 +0x0feb:  jmp    08669d1a <+0x1000>
08669d07 +0x0fed:  nop
08669d08 +0x0fee:  jmp    08669d1a <+0x1000>
08669d0a +0x0ff0:  nop
08669d0b +0x0ff1:  jmp    08669d1a <+0x1000>
08669d0d +0x0ff3:  nop
08669d0e +0x0ff4:  jmp    08669d1a <+0x1000>
08669d10 +0x0ff6:  nop
08669d11 +0x0ff7:  jmp    08669d1a <+0x1000>
08669d13 +0x0ff9:  nop
08669d14 +0x0ffa:  jmp    08669d1a <+0x1000>
08669d16 +0x0ffc:  nop
08669d17 +0x0ffd:  jmp    08669d1a <+0x1000>
08669d19 +0x0fff:  nop
08669d1a +0x1000:  addl   $0x1,-0x28(%ebp)
08669d1e +0x1004:  cmpl   $0x8,-0x28(%ebp)
08669d22 +0x1008:  setle  %al
08669d25 +0x100b:  test   %al,%al
08669d27 +0x100d:  jne    08669b29 <+0xe0f>
08669d2d +0x1013:  movl   $0x99,-0x24(%ebp)
08669d34 +0x101a:  jmp    08669f2e <+0x1214>
08669d39 +0x101f:  mov    0x8(%ebp),%eax
08669d3c +0x1022:  mov    %eax,(%esp)
08669d3f +0x1025:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08669d44 +0x102a:  lea    -0x113(%ebp),%edx
08669d4a +0x1030:  mov    -0x24(%ebp),%ecx
08669d4d +0x1033:  mov    %ecx,0xc(%esp)
08669d51 +0x1037:  movl   $0x1,0x8(%esp)
08669d59 +0x103f:  mov    %eax,0x4(%esp)
08669d5d +0x1043:  mov    %edx,(%esp)
08669d60 +0x1046:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08669d65 +0x104b:  sub    $0x4,%esp
08669d68 +0x104e:  cmpl   $0x0,-0x4c(%ebp)
08669d6c +0x1052:  je     08669e33 <+0x1119>
08669d72 +0x1058:  mov    -0x111(%ebp),%eax
08669d78 +0x105e:  cmp    $0x105b,%eax
08669d7d +0x1063:  jbe    08669f14 <+0x11fa>
08669d83 +0x1069:  mov    -0x111(%ebp),%eax
08669d89 +0x106f:  cmp    $0x1065,%eax
08669d8e +0x1074:  ja     08669f17 <+0x11fd>
08669d94 +0x107a:  mov    -0x111(%ebp),%eax
08669d9a +0x1080:  cmp    $0x1078,%eax
08669d9f +0x1085:  jbe    08669db2 <+0x1098>
08669da1 +0x1087:  mov    -0x111(%ebp),%eax
08669da7 +0x108d:  cmp    $0x107d,%eax
08669dac +0x1092:  jbe    08669f1a <+0x1200>
08669db2 +0x1098:  mov    -0x111(%ebp),%eax
08669db8 +0x109e:  cmp    $0x1f1b,%eax
08669dbd +0x10a3:  jbe    08669dd0 <+0x10b6>
08669dbf +0x10a5:  mov    -0x111(%ebp),%eax
08669dc5 +0x10ab:  cmp    $0x1f1f,%eax
08669dca +0x10b0:  jbe    08669f1d <+0x1203>
08669dd0 +0x10b6:  mov    -0x111(%ebp),%eax
08669dd6 +0x10bc:  cmp    $0x1f23,%eax
08669ddb +0x10c1:  jbe    08669dee <+0x10d4>
08669ddd +0x10c3:  mov    -0x111(%ebp),%eax
08669de3 +0x10c9:  cmp    $0x1f27,%eax
08669de8 +0x10ce:  jbe    08669f20 <+0x1206>
08669dee +0x10d4:  mov    -0x111(%ebp),%eax
08669df4 +0x10da:  cmp    $0x1f29,%eax
08669df9 +0x10df:  jbe    08669e0c <+0x10f2>
08669dfb +0x10e1:  mov    -0x111(%ebp),%eax
08669e01 +0x10e7:  cmp    $0x1f2b,%eax
08669e06 +0x10ec:  jbe    08669f23 <+0x1209>
08669e0c +0x10f2:  mov    -0x111(%ebp),%eax
08669e12 +0x10f8:  cmp    $0x1f53,%eax
08669e17 +0x10fd:  jbe    08669ef1 <+0x11d7>
08669e1d +0x1103:  mov    -0x111(%ebp),%eax
08669e23 +0x1109:  cmp    $0x1f57,%eax
08669e28 +0x110e:  ja     08669ef1 <+0x11d7>
08669e2e +0x1114:  jmp    08669f2a <+0x1210>
08669e33 +0x1119:  mov    -0x111(%ebp),%eax
08669e39 +0x111f:  cmp    $0xfc8,%eax
08669e3e +0x1124:  jbe    08669e51 <+0x1137>
08669e40 +0x1126:  mov    -0x111(%ebp),%eax
08669e46 +0x112c:  cmp    $0xfd4,%eax
08669e4b +0x1131:  jbe    08669ef1 <+0x11d7>
08669e51 +0x1137:  mov    -0x111(%ebp),%eax
08669e57 +0x113d:  cmp    $0xfee,%eax
08669e5c +0x1142:  jbe    08669e6f <+0x1155>
08669e5e +0x1144:  mov    -0x111(%ebp),%eax
08669e64 +0x114a:  cmp    $0xff2,%eax
08669e69 +0x114f:  jbe    08669ef1 <+0x11d7>
08669e6f +0x1155:  mov    -0x111(%ebp),%eax
08669e75 +0x115b:  cmp    $0xff6,%eax
08669e7a +0x1160:  jbe    08669e89 <+0x116f>
08669e7c +0x1162:  mov    -0x111(%ebp),%eax
08669e82 +0x1168:  cmp    $0x1006,%eax
08669e87 +0x116d:  jbe    08669ef1 <+0x11d7>
08669e89 +0x116f:  mov    -0x111(%ebp),%eax
08669e8f +0x1175:  cmp    $0x1044,%eax
08669e94 +0x117a:  jbe    08669ea3 <+0x1189>
08669e96 +0x117c:  mov    -0x111(%ebp),%eax
08669e9c +0x1182:  cmp    $0x1048,%eax
08669ea1 +0x1187:  jbe    08669ef1 <+0x11d7>
08669ea3 +0x1189:  mov    -0x111(%ebp),%eax
08669ea9 +0x118f:  cmp    $0x1f1f,%eax
08669eae +0x1194:  jbe    08669ebd <+0x11a3>
08669eb0 +0x1196:  mov    -0x111(%ebp),%eax
08669eb6 +0x119c:  cmp    $0x1f23,%eax
08669ebb +0x11a1:  jbe    08669ef1 <+0x11d7>
08669ebd +0x11a3:  mov    -0x111(%ebp),%eax
08669ec3 +0x11a9:  cmp    $0x1f27,%eax
08669ec8 +0x11ae:  jbe    08669ed7 <+0x11bd>
08669eca +0x11b0:  mov    -0x111(%ebp),%eax
08669ed0 +0x11b6:  cmp    $0x1f29,%eax
08669ed5 +0x11bb:  jbe    08669ef1 <+0x11d7>
08669ed7 +0x11bd:  mov    -0x111(%ebp),%eax
08669edd +0x11c3:  cmp    $0x1f4f,%eax
08669ee2 +0x11c8:  jbe    08669f26 <+0x120c>
08669ee4 +0x11ca:  mov    -0x111(%ebp),%eax
08669eea +0x11d0:  cmp    $0x1f53,%eax
08669eef +0x11d5:  ja     08669f29 <+0x120f>
08669ef1 +0x11d7:  mov    -0x38(%ebp),%eax
08669ef4 +0x11da:  mov    -0x24(%ebp),%edx
08669ef7 +0x11dd:  mov    %edx,-0x688(%ebp,%eax,4)
08669efe +0x11e4:  mov    -0x38(%ebp),%eax
08669f01 +0x11e7:  mov    -0x10c(%ebp),%edx
08669f07 +0x11ed:  mov    %edx,-0xb68(%ebp,%eax,4)
08669f0e +0x11f4:  addl   $0x1,-0x38(%ebp)
08669f12 +0x11f8:  jmp    08669f2a <+0x1210>
08669f14 +0x11fa:  nop
08669f15 +0x11fb:  jmp    08669f2a <+0x1210>
08669f17 +0x11fd:  nop
08669f18 +0x11fe:  jmp    08669f2a <+0x1210>
08669f1a +0x1200:  nop
08669f1b +0x1201:  jmp    08669f2a <+0x1210>
08669f1d +0x1203:  nop
08669f1e +0x1204:  jmp    08669f2a <+0x1210>
08669f20 +0x1206:  nop
08669f21 +0x1207:  jmp    08669f2a <+0x1210>
08669f23 +0x1209:  nop
08669f24 +0x120a:  jmp    08669f2a <+0x1210>
08669f26 +0x120c:  nop
08669f27 +0x120d:  jmp    08669f2a <+0x1210>
08669f29 +0x120f:  nop
08669f2a +0x1210:  addl   $0x1,-0x24(%ebp)
08669f2e +0x1214:  cmpl   $0xc8,-0x24(%ebp)
08669f35 +0x121b:  setle  %al
08669f38 +0x121e:  test   %al,%al
08669f3a +0x1220:  jne    08669d39 <+0x101f>
08669f40 +0x1226:  cmpl   $0x0,-0x38(%ebp)
08669f44 +0x122a:  jle    0866a064 <+0x134a>
08669f4a +0x1230:  lea    -0x5c(%ebp),%eax
08669f4d +0x1233:  mov    %eax,(%esp)
08669f50 +0x1236:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
08669f55 +0x123b:  movl   $0x12,0x8(%esp)
08669f5d +0x1243:  movl   $0x1,0x4(%esp)
08669f65 +0x124b:  lea    -0x5c(%ebp),%eax
08669f68 +0x124e:  mov    %eax,(%esp)
08669f6b +0x1251:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08669f70 +0x1256:  movl   $0x1,0x4(%esp)
08669f78 +0x125e:  lea    -0x5c(%ebp),%eax
08669f7b +0x1261:  mov    %eax,(%esp)
08669f7e +0x1264:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669f83 +0x1269:  movl   $0x0,0x4(%esp)
08669f8b +0x1271:  lea    -0x5c(%ebp),%eax
08669f8e +0x1274:  mov    %eax,(%esp)
08669f91 +0x1277:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669f96 +0x127c:  mov    -0x38(%ebp),%eax
08669f99 +0x127f:  mov    %eax,0x4(%esp)
08669f9d +0x1283:  lea    -0x5c(%ebp),%eax
08669fa0 +0x1286:  mov    %eax,(%esp)
08669fa3 +0x1289:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08669fa8 +0x128e:  movl   $0x0,-0x20(%ebp)
08669faf +0x1295:  jmp    0866a02e <+0x1314>
08669fb1 +0x1297:  mov    -0x20(%ebp),%eax
08669fb4 +0x129a:  mov    -0xb68(%ebp,%eax,4),%esi
08669fbb +0x12a1:  mov    -0x20(%ebp),%eax
08669fbe +0x12a4:  mov    -0x688(%ebp,%eax,4),%ebx
08669fc5 +0x12ab:  mov    0x8(%ebp),%eax
08669fc8 +0x12ae:  mov    %eax,(%esp)
08669fcb +0x12b1:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08669fd0 +0x12b6:  movl   $0x1,0x14(%esp)
08669fd8 +0x12be:  movl   $0xa,0x10(%esp)
08669fe0 +0x12c6:  mov    %esi,0xc(%esp)
08669fe4 +0x12ca:  mov    %ebx,0x8(%esp)
08669fe8 +0x12ce:  movl   $0x1,0x4(%esp)
08669ff0 +0x12d6:  mov    %eax,(%esp)
08669ff3 +0x12d9:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08669ff8 +0x12de:  mov    -0x20(%ebp),%eax
08669ffb +0x12e1:  mov    -0x688(%ebp,%eax,4),%eax
0866a002 +0x12e8:  mov    %eax,0x4(%esp)
0866a006 +0x12ec:  lea    -0x5c(%ebp),%eax
0866a009 +0x12ef:  mov    %eax,(%esp)
0866a00c +0x12f2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0866a011 +0x12f7:  mov    -0x20(%ebp),%eax
0866a014 +0x12fa:  mov    -0xb68(%ebp,%eax,4),%eax
0866a01b +0x1301:  mov    %eax,0x4(%esp)
0866a01f +0x1305:  lea    -0x5c(%ebp),%eax
0866a022 +0x1308:  mov    %eax,(%esp)
0866a025 +0x130b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0866a02a +0x1310:  addl   $0x1,-0x20(%ebp)
0866a02e +0x1314:  mov    -0x20(%ebp),%eax
0866a031 +0x1317:  cmp    -0x38(%ebp),%eax
0866a034 +0x131a:  setl   %al
0866a037 +0x131d:  test   %al,%al
0866a039 +0x131f:  jne    08669fb1 <+0x1297>
0866a03f +0x1325:  movl   $0x1,0x4(%esp)
0866a047 +0x132d:  lea    -0x5c(%ebp),%eax
0866a04a +0x1330:  mov    %eax,(%esp)
0866a04d +0x1333:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866a052 +0x1338:  lea    -0x5c(%ebp),%eax
0866a055 +0x133b:  mov    %eax,0x4(%esp)
0866a059 +0x133f:  mov    0x8(%ebp),%eax
0866a05c +0x1342:  mov    %eax,(%esp)
0866a05f +0x1345:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866a064 +0x134a:  lea    -0x1a8(%ebp),%eax
0866a06a +0x1350:  mov    %eax,(%esp)
0866a06d +0x1353:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
0866a072 +0x1358:  movzbl -0x41(%ebp),%eax
0866a076 +0x135c:  xor    $0x1,%eax
0866a079 +0x135f:  test   %al,%al
0866a07b +0x1361:  je     0866a125 <+0x140b>
0866a081 +0x1367:  mov    0x8(%ebp),%eax
0866a084 +0x136a:  mov    %eax,(%esp)
0866a087 +0x136d:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866a08c +0x1372:  mov    %eax,(%esp)
0866a08f +0x1375:  call   08604e08 <_ZN9SkillSlot21clear_all_skills_bothEv>  ; SkillSlot::clear_all_skills_both()
0866a094 +0x137a:  mov    0x8(%ebp),%eax
0866a097 +0x137d:  mov    %eax,(%esp)
0866a09a +0x1380:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866a09f +0x1385:  mov    0x8(%ebp),%edx
0866a0a2 +0x1388:  mov    %edx,0x4(%esp)
0866a0a6 +0x138c:  mov    %eax,(%esp)
0866a0a9 +0x138f:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
0866a0ae +0x1394:  mov    0x8(%ebp),%eax
0866a0b1 +0x1397:  mov    %eax,(%esp)
0866a0b4 +0x139a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866a0b9 +0x139f:  mov    %eax,%ebx
0866a0bb +0x13a1:  mov    0x8(%ebp),%eax
0866a0be +0x13a4:  mov    %eax,(%esp)
0866a0c1 +0x13a7:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866a0c6 +0x13ac:  add    $0x46,%eax
0866a0c9 +0x13af:  mov    %ebx,0x4(%esp)
0866a0cd +0x13b3:  mov    %eax,(%esp)
0866a0d0 +0x13b6:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0866a0d5 +0x13bb:  mov    0x8(%ebp),%eax
0866a0d8 +0x13be:  mov    %eax,(%esp)
0866a0db +0x13c1:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866a0e0 +0x13c6:  mov    %eax,%ebx
0866a0e2 +0x13c8:  mov    0x8(%ebp),%eax
0866a0e5 +0x13cb:  mov    %eax,(%esp)
0866a0e8 +0x13ce:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866a0ed +0x13d3:  add    $0x1de,%eax
0866a0f2 +0x13d8:  mov    %ebx,0x4(%esp)
0866a0f6 +0x13dc:  mov    %eax,(%esp)
0866a0f9 +0x13df:  call   08604fe2 <_Z25addSkillOnCreateCharacterP15_Mastered_skilli>  ; addSkillOnCreateCharacter(_Mastered_skill*, int)
0866a0fe +0x13e4:  movl   $0x1,0xc(%esp)
0866a106 +0x13ec:  movl   $0x0,0x8(%esp)
0866a10e +0x13f4:  mov    0x8(%ebp),%eax
0866a111 +0x13f7:  mov    %eax,0x4(%esp)
0866a115 +0x13fb:  lea    -0x1a8(%ebp),%eax
0866a11b +0x1401:  mov    %eax,(%esp)
0866a11e +0x1404:  call   08609e90 <_ZN8WongWork13CSkillChanger15SkillInitializeEP5CUserib>  ; WongWork::CSkillChanger::SkillInitialize(CUser*, int, bool)
0866a123 +0x1409:  jmp    0866a17d <+0x1463>
0866a125 +0x140b:  mov    0x8(%ebp),%eax
0866a128 +0x140e:  mov    %eax,0x4(%esp)
0866a12c +0x1412:  lea    -0x1a8(%ebp),%eax
0866a132 +0x1418:  mov    %eax,(%esp)
0866a135 +0x141b:  call   08609d9c <_ZN8WongWork13CSkillChanger11CountElixerEP5CUser>  ; WongWork::CSkillChanger::CountElixer(CUser*)
0866a13a +0x1420:  mov    0x8(%ebp),%eax
0866a13d +0x1423:  mov    %eax,(%esp)
0866a140 +0x1426:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866a145 +0x142b:  mov    %eax,%esi
0866a147 +0x142d:  mov    0x8(%ebp),%eax
0866a14a +0x1430:  mov    %eax,(%esp)
0866a14d +0x1433:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a152 +0x1438:  mov    %eax,%ebx
0866a154 +0x143a:  mov    0x8(%ebp),%eax
0866a157 +0x143d:  mov    %eax,(%esp)
0866a15a +0x1440:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0866a15f +0x1445:  mov    -0x4c(%ebp),%edx
0866a162 +0x1448:  mov    %edx,0x10(%esp)
0866a166 +0x144c:  mov    -0x48(%ebp),%edx
0866a169 +0x144f:  mov    %edx,0xc(%esp)
0866a16d +0x1453:  mov    %esi,0x8(%esp)
0866a171 +0x1457:  mov    %ebx,0x4(%esp)
0866a175 +0x145b:  mov    %eax,(%esp)
0866a178 +0x145e:  call   086053c6 <_ZN9SkillSlot23debugCheckGrowTypeSkillEiiii>  ; SkillSlot::debugCheckGrowTypeSkill(int, int, int, int)
0866a17d +0x1463:  mov    0x8(%ebp),%eax
0866a180 +0x1466:  mov    %eax,(%esp)
0866a183 +0x1469:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866a188 +0x146e:  mov    %eax,%ebx
0866a18a +0x1470:  mov    0x8(%ebp),%eax
0866a18d +0x1473:  mov    %eax,(%esp)
0866a190 +0x1476:  call   086960ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x290f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x290f
0866a195 +0x147b:  mov    %ebx,0x4(%esp)
0866a199 +0x147f:  mov    %eax,(%esp)
0866a19c +0x1482:  call   0831e9ca <_ZN8WongWork15CCalcCharacStat14InitializeStatEP15_Additioal_infoi>  ; WongWork::CCalcCharacStat::InitializeStat(_Additioal_info*, int)
0866a1a1 +0x1487:  mov    0x8(%ebp),%eax
0866a1a4 +0x148a:  mov    %eax,(%esp)
0866a1a7 +0x148d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866a1ac +0x1492:  mov    %eax,%esi
0866a1ae +0x1494:  mov    0x8(%ebp),%eax
0866a1b1 +0x1497:  mov    %eax,(%esp)
0866a1b4 +0x149a:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0866a1b9 +0x149f:  mov    %eax,%ebx
0866a1bb +0x14a1:  mov    0x8(%ebp),%eax
0866a1be +0x14a4:  mov    %eax,(%esp)
0866a1c1 +0x14a7:  call   086960ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x290f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x290f
0866a1c6 +0x14ac:  mov    %esi,0x10(%esp)
0866a1ca +0x14b0:  mov    -0x4c(%ebp),%edx
0866a1cd +0x14b3:  mov    %edx,0xc(%esp)
0866a1d1 +0x14b7:  mov    -0x48(%ebp),%edx
0866a1d4 +0x14ba:  mov    %edx,0x8(%esp)
0866a1d8 +0x14be:  mov    %ebx,0x4(%esp)
0866a1dc +0x14c2:  mov    %eax,(%esp)
0866a1df +0x14c5:  call   0831ec4a <_ZN8WongWork15CCalcCharacStat8CalcStatEP15_Additioal_infoiiii>  ; WongWork::CCalcCharacStat::CalcStat(_Additioal_info*, int, int, int, int)
0866a1e4 +0x14ca:  lea    -0x1a8(%ebp),%eax
0866a1ea +0x14d0:  mov    %eax,(%esp)
0866a1ed +0x14d3:  call   08697816 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x406b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x406b
0866a1f2 +0x14d8:  mov    %eax,-0x34(%ebp)
0866a1f5 +0x14db:  lea    -0x1a8(%ebp),%eax
0866a1fb +0x14e1:  mov    %eax,(%esp)
0866a1fe +0x14e4:  call   0869780e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4063>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4063
0866a203 +0x14e9:  mov    %eax,-0x30(%ebp)
0866a206 +0x14ec:  lea    -0x1a8(%ebp),%eax
0866a20c +0x14f2:  mov    %eax,(%esp)
0866a20f +0x14f5:  call   08697822 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4077>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4077
0866a214 +0x14fa:  mov    %eax,-0x2c(%ebp)
0866a217 +0x14fd:  movl   $0x1,-0x1c(%ebp)
0866a21e +0x1504:  jmp    0866a27e <+0x1564>
0866a220 +0x1506:  mov    -0x1c(%ebp),%eax
0866a223 +0x1509:  shl    $0x2,%eax
0866a226 +0x150c:  add    -0x34(%ebp),%eax
0866a229 +0x150f:  mov    (%eax),%edx
0866a22b +0x1511:  mov    -0x1c(%ebp),%eax
0866a22e +0x1514:  shl    $0x2,%eax
0866a231 +0x1517:  add    -0x30(%ebp),%eax
0866a234 +0x151a:  mov    (%eax),%eax
0866a236 +0x151c:  cmp    %eax,%edx
0866a238 +0x151e:  jle    0866a27a <+0x1560>
0866a23a +0x1520:  mov    -0x1c(%ebp),%eax
0866a23d +0x1523:  shl    $0x2,%eax
0866a240 +0x1526:  add    -0x34(%ebp),%eax
0866a243 +0x1529:  mov    (%eax),%edx
0866a245 +0x152b:  mov    -0x1c(%ebp),%eax
0866a248 +0x152e:  shl    $0x2,%eax
0866a24b +0x1531:  add    -0x30(%ebp),%eax
0866a24e +0x1534:  mov    (%eax),%eax
0866a250 +0x1536:  mov    %edx,%esi
0866a252 +0x1538:  sub    %eax,%esi
0866a254 +0x153a:  mov    -0x1c(%ebp),%eax
0866a257 +0x153d:  shl    $0x2,%eax
0866a25a +0x1540:  add    -0x2c(%ebp),%eax
0866a25d +0x1543:  mov    (%eax),%ebx
0866a25f +0x1545:  mov    0x8(%ebp),%eax
0866a262 +0x1548:  mov    %eax,(%esp)
0866a265 +0x154b:  call   086960ba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x290f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x290f
0866a26a +0x1550:  mov    %esi,0x8(%esp)
0866a26e +0x1554:  mov    %ebx,0x4(%esp)
0866a272 +0x1558:  mov    %eax,(%esp)
0866a275 +0x155b:  call   0831e85c <_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii>  ; WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int)
0866a27a +0x1560:  addl   $0x1,-0x1c(%ebp)
0866a27e +0x1564:  mov    -0x2c(%ebp),%eax
0866a281 +0x1567:  mov    (%eax),%eax
0866a283 +0x1569:  cmp    -0x1c(%ebp),%eax
0866a286 +0x156c:  setge  %al
0866a289 +0x156f:  test   %al,%al
0866a28b +0x1571:  jne    0866a220 <+0x1506>
0866a28d +0x1573:  mov    -0x4c(%ebp),%eax
0866a290 +0x1576:  movzbl %al,%edx
0866a293 +0x1579:  mov    -0x48(%ebp),%eax
0866a296 +0x157c:  movzbl %al,%eax
0866a299 +0x157f:  movl   $0x1,0x10(%esp)
0866a2a1 +0x1587:  movl   $0x0,0xc(%esp)
0866a2a9 +0x158f:  mov    %edx,0x8(%esp)
0866a2ad +0x1593:  mov    %eax,0x4(%esp)
0866a2b1 +0x1597:  mov    0x8(%ebp),%eax
0866a2b4 +0x159a:  mov    %eax,(%esp)
0866a2b7 +0x159d:  call   086787fc <_ZN5CUser13set_grow_typeEhhPc21eChangeGrowTypeReason>  ; CUser::set_grow_type(unsigned char, unsigned char, char*, eChangeGrowTypeReason)
0866a2bc +0x15a2:  mov    -0x4c(%ebp),%eax
0866a2bf +0x15a5:  mov    %eax,0x8(%esp)
0866a2c3 +0x15a9:  mov    -0x48(%ebp),%eax
0866a2c6 +0x15ac:  mov    %eax,0x4(%esp)
0866a2ca +0x15b0:  mov    0x8(%ebp),%eax
0866a2cd +0x15b3:  mov    %eax,(%esp)
0866a2d0 +0x15b6:  call   08668823 <_Z29_postCheckForceChangeGrowTypeP5CUserii>  ; _postCheckForceChangeGrowType(CUser*, int, int)
0866a2d5 +0x15bb:  movl   $0x0,0xc(%esp)
0866a2dd +0x15c3:  movl   $0x2,0x8(%esp)
0866a2e5 +0x15cb:  movl   $0x0,0x4(%esp)
0866a2ed +0x15d3:  mov    0x8(%ebp),%eax
0866a2f0 +0x15d6:  mov    %eax,(%esp)
0866a2f3 +0x15d9:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866a2f8 +0x15de:  mov    0x8(%ebp),%eax
0866a2fb +0x15e1:  mov    %eax,(%esp)
0866a2fe +0x15e4:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0866a303 +0x15e9:  movl   $0x1,0xc(%esp)
0866a30b +0x15f1:  movl   $0x2,0x8(%esp)
0866a313 +0x15f9:  movl   $0x1,0x4(%esp)
0866a31b +0x1601:  mov    0x8(%ebp),%eax
0866a31e +0x1604:  mov    %eax,(%esp)
0866a321 +0x1607:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866a326 +0x160c:  jmp    0866a343 <+0x1629>
0866a328 +0x160e:  mov    %edx,%ebx
0866a32a +0x1610:  mov    %eax,%esi
0866a32c +0x1612:  lea    -0x1a8(%ebp),%eax
0866a332 +0x1618:  mov    %eax,(%esp)
0866a335 +0x161b:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0866a33a +0x1620:  mov    %esi,%eax
0866a33c +0x1622:  mov    %ebx,%edx
0866a33e +0x1624:  jmp    0866a3ca <+0x16b0>
0866a343 +0x1629:  lea    -0x1a8(%ebp),%eax
0866a349 +0x162f:  mov    %eax,(%esp)
0866a34c +0x1632:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
0866a351 +0x1637:  nop
0866a352 +0x1638:  jmp    0866a3e5 <+0x16cb>
0866a357 +0x163d:  lea    -0x5c(%ebp),%eax
0866a35a +0x1640:  mov    %eax,(%esp)
0866a35d +0x1643:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0866a362 +0x1648:  movl   $0x20,0x8(%esp)
0866a36a +0x1650:  movl   $0x1,0x4(%esp)
0866a372 +0x1658:  lea    -0x5c(%ebp),%eax
0866a375 +0x165b:  mov    %eax,(%esp)
0866a378 +0x165e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0866a37d +0x1663:  movl   $0x0,0x4(%esp)
0866a385 +0x166b:  lea    -0x5c(%ebp),%eax
0866a388 +0x166e:  mov    %eax,(%esp)
0866a38b +0x1671:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866a390 +0x1676:  movl   $0x11,0x4(%esp)
0866a398 +0x167e:  lea    -0x5c(%ebp),%eax
0866a39b +0x1681:  mov    %eax,(%esp)
0866a39e +0x1684:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0866a3a3 +0x1689:  movl   $0x1,0x4(%esp)
0866a3ab +0x1691:  lea    -0x5c(%ebp),%eax
0866a3ae +0x1694:  mov    %eax,(%esp)
0866a3b1 +0x1697:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0866a3b6 +0x169c:  lea    -0x5c(%ebp),%eax
0866a3b9 +0x169f:  mov    %eax,0x4(%esp)
0866a3bd +0x16a3:  mov    0x8(%ebp),%eax
0866a3c0 +0x16a6:  mov    %eax,(%esp)
0866a3c3 +0x16a9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0866a3c8 +0x16ae:  jmp    0866a3e5 <+0x16cb>
0866a3ca +0x16b0:  mov    %edx,%ebx
0866a3cc +0x16b2:  mov    %eax,%esi
0866a3ce +0x16b4:  lea    -0x5c(%ebp),%eax
0866a3d1 +0x16b7:  mov    %eax,(%esp)
0866a3d4 +0x16ba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866a3d9 +0x16bf:  mov    %esi,%eax
0866a3db +0x16c1:  mov    %ebx,%edx
0866a3dd +0x16c3:  mov    %eax,(%esp)
0866a3e0 +0x16c6:  call   08ae3750 <_Unwind_Resume>
0866a3e5 +0x16cb:  lea    -0x5c(%ebp),%eax
0866a3e8 +0x16ce:  mov    %eax,(%esp)
0866a3eb +0x16d1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0866a3f0 +0x16d6:  jmp    0866a3f3 <+0x16d9>
0866a3f2 +0x16d8:  nop
0866a3f3 +0x16d9:  lea    -0xc(%ebp),%esp
0866a3f6 +0x16dc:  add    $0x0,%esp
0866a3f9 +0x16df:  pop    %ebx
0866a3fa +0x16e0:  pop    %esi
0866a3fb +0x16e1:  pop    %edi
0866a3fc +0x16e2:  pop    %ebp
0866a3fd +0x16e3:  ret
```

## 反编译 C

```c
// CUser::UseQuestItem @ 0x8668d1a

/* CUser::UseQuestItem(int) */

void CUser::UseQuestItem(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  uint uVar5;
  CInventory *pCVar6;
  SkillSlot *pSVar7;
  _Additioal_info *p_Var8;
  int iVar9;
  int *piVar10;
  byte bVar11;
  int local_b6c [312];
  int local_68c [312];
  CSkillChanger local_1ac [149];
  undefined1 local_117 [2];
  uint local_115;
  int local_110;
  undefined1 local_da [2];
  uint local_d8;
  int local_d3;
  undefined1 local_9d [2];
  uint local_9b;
  PacketGuard local_60 [15];
  char local_51;
  uint local_50;
  uint local_4c;
  char local_45;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar11 = 0;
  iVar3 = get_state((CUser *)param_1);
  if (iVar3 != 3) {
    return;
  }
  PacketGuard::PacketGuard(local_60);
  cVar2 = CheckInTrade((CUser *)param_1);
  if (cVar2 != '\0') {
                    /* try { // try from 08668d5f to 0866a063 has its CatchHandler @ 0866a3ca */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
    SendCmdErrorPacket((CUser *)param_1,0x20,0x13,local_60);
    goto LAB_0866a3e5;
  }
  iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_9d,iVar3);
  local_50 = 0;
  local_45 = '\0';
  if (local_9b == 0x105d) {
    local_51 = '\x01';
    local_4c = 2;
    local_50 = 1;
    local_45 = '\x01';
  }
  else if (local_9b < 0x105e) {
    if (local_9b == 0xff9) {
      local_51 = '\0';
      local_4c = 3;
      local_45 = '\x01';
    }
    else if (local_9b < 0xffa) {
      if (local_9b == 0xfd1) {
        local_51 = '\x02';
        local_4c = 1;
      }
      else if (local_9b < 0xfd2) {
        if (local_9b == 0xfcc) {
          local_51 = '\0';
          local_4c = 4;
        }
        else if (local_9b < 0xfcd) {
          if (local_9b == 0xfca) {
            local_51 = '\0';
            local_4c = 2;
          }
          else if (local_9b < 0xfcb) {
            if (local_9b != 0xfc9) goto LAB_08669808;
            local_51 = '\0';
            local_4c = 1;
          }
          else {
            local_51 = '\0';
            local_4c = 3;
          }
        }
        else if (local_9b == 0xfce) {
          local_51 = '\x01';
          local_4c = 1;
        }
        else if (local_9b < 0xfce) {
          local_51 = '\x01';
          local_4c = 2;
        }
        else if (local_9b == 0xfcf) {
          local_51 = '\x01';
          local_4c = 3;
        }
        else {
          if (local_9b != 0xfd0) goto LAB_08669808;
          local_51 = '\x01';
          local_4c = 4;
        }
      }
      else if (local_9b == 0xff0) {
        local_51 = '\x03';
        local_4c = 3;
      }
      else if (local_9b < 0xff1) {
        if (local_9b == 0xfd3) {
          local_51 = '\x02';
          local_4c = 2;
        }
        else if (local_9b < 0xfd3) {
          local_51 = '\x02';
          local_4c = 3;
        }
        else if (local_9b == 0xfd4) {
          local_51 = '\x02';
          local_4c = 4;
        }
        else {
          if (local_9b != 0xfef) goto LAB_08669808;
          local_51 = '\x03';
          local_4c = 1;
        }
      }
      else if (local_9b == 0xff2) {
        local_51 = '\x03';
        local_4c = 4;
      }
      else if (local_9b < 0xff2) {
        local_51 = '\x03';
        local_4c = 2;
      }
      else if (local_9b == 0xff7) {
        local_51 = '\0';
        local_4c = 1;
        local_45 = '\x01';
      }
      else {
        if (local_9b != 0xff8) goto LAB_08669808;
        local_51 = '\0';
        local_4c = 2;
        local_45 = '\x01';
      }
    }
    else if (local_9b == 0x1002) {
      local_51 = '\x02';
      local_4c = 4;
      local_45 = '\x01';
    }
    else if (local_9b < 0x1003) {
      if (local_9b == 0xffd) {
        local_51 = '\x01';
        local_4c = 3;
        local_45 = '\x01';
      }
      else if (local_9b < 0xffe) {
        if (local_9b == 0xffb) {
          local_51 = '\x01';
          local_4c = 2;
          local_45 = '\x01';
        }
        else if (local_9b < 0xffc) {
          local_51 = '\0';
          local_4c = 4;
          local_45 = '\x01';
        }
        else {
          local_51 = '\x01';
          local_4c = 1;
          local_45 = '\x01';
        }
      }
      else if (local_9b == 0xfff) {
        local_51 = '\x02';
        local_4c = 1;
        local_45 = '\x01';
      }
      else if (local_9b < 0xfff) {
        local_51 = '\x01';
        local_4c = 4;
        local_45 = '\x01';
      }
      else if (local_9b == 0x1000) {
        local_51 = '\x02';
        local_4c = 3;
        local_45 = '\x01';
      }
      else {
        if (local_9b != 0x1001) goto LAB_08669808;
        local_51 = '\x02';
        local_4c = 2;
        local_45 = '\x01';
      }
    }
    else if (local_9b == 0x1045) {
      local_51 = '\x04';
      local_4c = 1;
    }
    else if (local_9b < 0x1046) {
      if (local_9b == 0x1004) {
        local_51 = '\x03';
        local_4c = 3;
        local_45 = '\x01';
      }
      else if (local_9b < 0x1004) {
        local_51 = '\x03';
        local_4c = 1;
        local_45 = '\x01';
      }
      else if (local_9b == 0x1005) {
        local_51 = '\x03';
        local_4c = 2;
        local_45 = '\x01';
      }
      else {
        if (local_9b != 0x1006) goto LAB_08669808;
        local_51 = '\x03';
        local_4c = 4;
        local_45 = '\x01';
      }
    }
    else if (local_9b == 0x1047) {
      local_51 = '\x04';
      local_4c = 3;
    }
    else if (local_9b < 0x1047) {
      local_51 = '\x04';
      local_4c = 2;
    }
    else if (local_9b == 0x1048) {
      local_51 = '\x04';
      local_4c = 4;
    }
    else {
      if (local_9b != 0x105c) goto LAB_08669808;
      local_51 = '\x01';
      local_4c = 1;
      local_50 = 1;
      local_45 = '\x01';
    }
  }
  else if (local_9b == 0x1f21) {
    local_51 = '\x05';
    local_4c = 3;
    local_45 = '\x01';
  }
  else if (local_9b < 0x1f22) {
    if (local_9b == 0x1079) {
      local_51 = '\x03';
      local_4c = 3;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b < 0x107a) {
      if (local_9b == 0x1061) {
        local_51 = '\x02';
        local_4c = 2;
        local_50 = 1;
        local_45 = '\x01';
      }
      else if (local_9b < 0x1062) {
        if (local_9b == 0x105f) {
          local_51 = '\x01';
          local_4c = 4;
          local_50 = 1;
          local_45 = '\x01';
        }
        else if (local_9b < 0x1060) {
          local_51 = '\x01';
          local_4c = 3;
          local_50 = 1;
          local_45 = '\x01';
        }
        else {
          local_51 = '\x02';
          local_4c = 1;
          local_50 = 1;
          local_45 = '\x01';
        }
      }
      else if (local_9b == 0x1063) {
        local_51 = '\x02';
        local_4c = 4;
        local_50 = 1;
        local_45 = '\x01';
      }
      else if (local_9b < 0x1063) {
        local_51 = '\x02';
        local_4c = 3;
        local_50 = 1;
        local_45 = '\x01';
      }
      else if (local_9b == 0x1064) {
        local_51 = '\x03';
        local_4c = 1;
        local_50 = 1;
        local_45 = '\x01';
      }
      else {
        if (local_9b != 0x1065) goto LAB_08669808;
        local_51 = '\x03';
        local_4c = 2;
        local_50 = 1;
        local_45 = '\x01';
      }
    }
    else if (local_9b == 0x1f1c) {
      local_51 = '\x03';
      local_4c = 4;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b < 0x1f1d) {
      if (local_9b == 0x107b) {
        local_51 = '\0';
        local_4c = 2;
        local_50 = 1;
        local_45 = '\x01';
      }
      else if (local_9b < 0x107b) {
        local_51 = '\0';
        local_4c = 1;
        local_50 = 1;
        local_45 = '\x01';
      }
      else if (local_9b == 0x107c) {
        local_51 = '\0';
        local_4c = 3;
        local_50 = 1;
        local_45 = '\x01';
      }
      else {
        if (local_9b != 0x107d) goto LAB_08669808;
        local_51 = '\0';
        local_4c = 4;
        local_50 = 1;
        local_45 = '\x01';
      }
    }
    else if (local_9b == 0x1f1e) {
      local_51 = '\x04';
      local_4c = 2;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b < 0x1f1e) {
      local_51 = '\x04';
      local_4c = 1;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b == 0x1f1f) {
      local_51 = '\x04';
      local_4c = 3;
      local_50 = 1;
      local_45 = '\x01';
    }
    else {
      if (local_9b != 0x1f20) goto LAB_08669808;
      local_51 = '\x05';
      local_4c = 1;
      local_45 = '\x01';
    }
  }
  else if (local_9b == 0x1f2a) {
    local_51 = '\x06';
    local_4c = 1;
    local_50 = 1;
    local_45 = '\x01';
  }
  else if (local_9b < 0x1f2b) {
    if (local_9b == 0x1f25) {
      local_51 = '\x05';
      local_4c = 3;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b < 0x1f26) {
      if (local_9b == 0x1f23) {
        local_51 = '\x05';
        local_4c = 4;
        local_45 = '\x01';
      }
      else if (local_9b < 0x1f24) {
        local_51 = '\x05';
        local_4c = 2;
        local_45 = '\x01';
      }
      else {
        local_51 = '\x05';
        local_4c = 1;
        local_50 = 1;
        local_45 = '\x01';
      }
    }
    else if (local_9b == 0x1f27) {
      local_51 = '\x05';
      local_4c = 4;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b < 0x1f27) {
      local_51 = '\x05';
      local_4c = 2;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b == 0x1f28) {
      local_51 = '\x06';
      local_4c = 1;
      local_45 = '\x01';
    }
    else {
      if (local_9b != 0x1f29) goto LAB_08669808;
      local_51 = '\x06';
      local_4c = 2;
      local_45 = '\x01';
    }
  }
  else if (local_9b == 0x1f53) {
    local_51 = '\a';
    local_4c = 4;
    local_45 = '\x01';
  }
  else if (local_9b < 0x1f54) {
    if (local_9b == 0x1f50) {
      local_51 = '\a';
      local_4c = 1;
      local_45 = '\x01';
    }
    else if (local_9b < 0x1f51) {
      if (local_9b != 0x1f2b) {
LAB_08669808:
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x20);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0x11);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
        Send((CUser *)param_1,local_60);
        goto LAB_0866a3e5;
      }
      local_51 = '\x06';
      local_4c = 2;
      local_50 = 1;
      local_45 = '\x01';
    }
    else if (local_9b == 0x1f51) {
      local_51 = '\a';
      local_4c = 3;
      local_45 = '\x01';
    }
    else {
      if (local_9b != 0x1f52) goto LAB_08669808;
      local_51 = '\a';
      local_4c = 2;
      local_45 = '\x01';
    }
  }
  else if (local_9b == 0x1f55) {
    local_51 = '\a';
    local_4c = 3;
    local_50 = 1;
    local_45 = '\x01';
  }
  else if (local_9b < 0x1f55) {
    local_51 = '\a';
    local_4c = 1;
    local_50 = 1;
    local_45 = '\x01';
  }
  else if (local_9b == 0x1f56) {
    local_51 = '\a';
    local_4c = 2;
    local_50 = 1;
    local_45 = '\x01';
  }
  else {
    if (local_9b != 0x1f57) goto LAB_08669808;
    local_51 = '\a';
    local_4c = 4;
    local_50 = 1;
    local_45 = '\x01';
  }
  if (((((((local_9b < 0x105c) || (0x1065 < local_9b)) &&
         ((local_9b < 0x1079 || (0x107d < local_9b)))) &&
        ((local_9b < 0x1f1c || (0x1f1f < local_9b)))) &&
       ((local_9b < 0x1f24 || (0x1f27 < local_9b)))) &&
      (((local_9b < 0x1f2a || (0x1f2b < local_9b)) && ((local_9b < 0x1f54 || (0x1f57 < local_9b)))))
      ) || (cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1),
           cVar2 != '\0')) {
    if ((local_51 < '\0') || ('\n' < local_51)) {
                    /* try { // try from 0866a35d to 0866a3c7 has its CatchHandler @ 0866a3ca */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x20);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0x11);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      Send((CUser *)param_1,local_60);
    }
    else {
      iVar9 = (int)local_51;
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar9 == iVar3) {
        iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        pCVar4 = (CDataManager *)G_CDataManager();
        local_44 = CDataManager::get_level_exp(pCVar4,iVar3);
        iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        pCVar4 = (CDataManager *)G_CDataManager();
        local_40 = CDataManager::get_level_exp(pCVar4,iVar3 + 1);
        uVar5 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1);
        if (uVar5 < local_44) {
          CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_1,local_44);
        }
        else {
          uVar5 = CUserCharacInfo::getCurCharacExp((CUserCharacInfo *)param_1);
          if (local_40 < uVar5) {
            CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)param_1,local_40 - 1);
          }
        }
        local_3c = 0;
        piVar10 = local_68c;
        for (iVar3 = 0x138; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
        }
        piVar10 = local_b6c;
        for (iVar3 = 0x138; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
        }
        for (local_2c = 3; local_2c < 9; local_2c = local_2c + 1) {
          iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::GetInvenSlot((int)local_da,iVar3);
          if (local_50 == 0) {
            if (((((0xfc8 < local_d8) && (local_d8 < 0xfd5)) ||
                 ((0xfee < local_d8 && (local_d8 < 0xff3)))) ||
                (((0xff6 < local_d8 && (local_d8 < 0x1007)) ||
                 ((0x1044 < local_d8 && (local_d8 < 0x1049)))))) ||
               ((((0x1f1f < local_d8 && (local_d8 < 0x1f24)) ||
                 ((0x1f27 < local_d8 && (local_d8 < 0x1f2a)))) ||
                ((0x1f4f < local_d8 && (local_d8 < 0x1f54)))))) goto LAB_08669ce1;
          }
          else if (((0x105b < local_d8) &&
                   (((local_d8 < 0x1066 && ((local_d8 < 0x1079 || (0x107d < local_d8)))) &&
                    ((local_d8 < 0x1f1c || (0x1f1f < local_d8)))))) &&
                  ((((local_d8 < 0x1f24 || (0x1f27 < local_d8)) &&
                    ((local_d8 < 0x1f2a || (0x1f2b < local_d8)))) &&
                   ((local_d8 < 0x1f54 || (0x1f57 < local_d8)))))) {
LAB_08669ce1:
            local_68c[local_3c] = local_2c;
            local_b6c[local_3c] = local_d3;
            local_3c = local_3c + 1;
          }
        }
        for (local_28 = 0x99; local_28 < 0xc9; local_28 = local_28 + 1) {
          iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::GetInvenSlot((int)local_117,iVar3);
          if (local_50 == 0) {
            if (((((0xfc8 < local_115) && (local_115 < 0xfd5)) ||
                 ((0xfee < local_115 && (local_115 < 0xff3)))) ||
                (((0xff6 < local_115 && (local_115 < 0x1007)) ||
                 ((0x1044 < local_115 && (local_115 < 0x1049)))))) ||
               ((((0x1f1f < local_115 && (local_115 < 0x1f24)) ||
                 ((0x1f27 < local_115 && (local_115 < 0x1f2a)))) ||
                ((0x1f4f < local_115 && (local_115 < 0x1f54)))))) goto LAB_08669ef1;
          }
          else if ((((0x105b < local_115) &&
                    ((local_115 < 0x1066 && ((local_115 < 0x1079 || (0x107d < local_115)))))) &&
                   (((local_115 < 0x1f1c || (0x1f1f < local_115)) &&
                    (((local_115 < 0x1f24 || (0x1f27 < local_115)) &&
                     ((local_115 < 0x1f2a || (0x1f2b < local_115)))))))) &&
                  ((local_115 < 0x1f54 || (0x1f57 < local_115)))) {
LAB_08669ef1:
            local_68c[local_3c] = local_28;
            local_b6c[local_3c] = local_110;
            local_3c = local_3c + 1;
          }
        }
        if (0 < local_3c) {
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x12);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,local_3c);
          for (local_24 = 0; local_24 < local_3c; local_24 = local_24 + 1) {
            iVar3 = local_b6c[local_24];
            iVar9 = local_68c[local_24];
            pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            CInventory::delete_item(pCVar6,1,iVar9,iVar3,10,1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,local_68c[local_24]);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_60,local_b6c[local_24]);
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
          Send((CUser *)param_1,local_60);
        }
        WongWork::CSkillChanger::CSkillChanger(local_1ac);
        if (local_45 == '\x01') {
          WongWork::CSkillChanger::CountElixer(local_1ac,(CUser *)param_1);
          iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
          SkillSlot::debugCheckGrowTypeSkill(pSVar7,iVar9,iVar3,local_4c,local_50);
        }
        else {
          pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
                    /* try { // try from 0866a08f to 0866a325 has its CatchHandler @ 0866a328 */
          SkillSlot::clear_all_skills_both(pSVar7);
          pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
          SkillSlot::set_parent(pSVar7,(CUser *)param_1);
          iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          iVar9 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
          addSkillOnCreateCharacter((_Mastered_skill *)(iVar9 + 0x46),iVar3);
          iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          iVar9 = CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
          addSkillOnCreateCharacter((_Mastered_skill *)(iVar9 + 0x1de),iVar3);
          WongWork::CSkillChanger::SkillInitialize(local_1ac,(CUser *)param_1,0,true);
        }
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        p_Var8 = (_Additioal_info *)
                 CUserCharacInfo::getCurCharacAddInfoW((CUserCharacInfo *)param_1);
        WongWork::CCalcCharacStat::InitializeStat(p_Var8,iVar3);
        iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
        iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        p_Var8 = (_Additioal_info *)
                 CUserCharacInfo::getCurCharacAddInfoW((CUserCharacInfo *)param_1);
        WongWork::CCalcCharacStat::CalcStat(p_Var8,iVar9,local_4c,local_50,iVar3);
        local_38 = WongWork::CSkillChanger::GetNeedElixerCount(local_1ac);
        local_34 = WongWork::CSkillChanger::GetElixerCount(local_1ac);
        local_30 = (int *)WongWork::CSkillChanger::GetNeedElixerAbility(local_1ac);
        for (local_20 = 1; local_20 <= *local_30; local_20 = local_20 + 1) {
          if (*(int *)(local_20 * 4 + local_34) < *(int *)(local_20 * 4 + local_38)) {
            iVar3 = *(int *)(local_20 * 4 + local_38);
            iVar9 = *(int *)(local_20 * 4 + local_34);
            iVar1 = local_30[local_20];
            p_Var8 = (_Additioal_info *)
                     CUserCharacInfo::getCurCharacAddInfoW((CUserCharacInfo *)param_1);
            WongWork::CCalcCharacStat::ApplyElixerItem(p_Var8,iVar1,iVar3 - iVar9);
          }
        }
        set_grow_type((CUser *)param_1,local_4c & 0xff,local_50 & 0xff,0,1);
        _postCheckForceChangeGrowType((CUser *)param_1,local_4c,local_50);
        SendNotiPacket((CUser *)param_1,0,2,0);
        send_skill_info((CUser *)param_1);
        SendNotiPacket((CUser *)param_1,1,2,1);
        WongWork::CSkillChanger::~CSkillChanger(local_1ac);
      }
      else {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x20);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0x11);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
        Send((CUser *)param_1,local_60);
      }
    }
  }
  else {
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_60);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,1,0x20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,0x11);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
    Send((CUser *)param_1,local_60);
  }
LAB_0866a3e5:
  PacketGuard::~PacketGuard(local_60);
  return;
}
```
