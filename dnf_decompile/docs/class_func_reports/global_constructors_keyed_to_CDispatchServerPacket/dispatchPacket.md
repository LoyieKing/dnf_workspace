# dispatchPacket

`_GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc`

`global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CDispatchServerPacket` | `0x0847dcde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847dcde  _GLOBAL__I__ZN21CDispatchServerPacket14dispatchPacketEPc
#           global constructors keyed to CDispatchServerPacket::dispatchPacket(char*)
# range [0x0847dcde, 0x0847e253]
0847dcde +0x000:  push   %ebp
0847dcdf +0x001:  mov    %esp,%ebp
0847dce1 +0x003:  sub    $0x18,%esp
0847dce4 +0x006:  movl   $0xffff,0x4(%esp)
0847dcec +0x00e:  movl   $0x1,(%esp)
0847dcf3 +0x015:  call   0847dc9e <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0847dcf8 +0x01a:  leave
0847dcf9 +0x01b:  ret
0847dcfa +0x01c:  push   %ebp
0847dcfb +0x01d:  mov    %esp,%ebp
0847dcfd +0x01f:  sub    $0x28,%esp
0847dd00 +0x022:  mov    0xc(%ebp),%eax
0847dd03 +0x025:  mov    %ax,-0xc(%ebp)
0847dd07 +0x029:  movzwl -0xc(%ebp),%edx
0847dd0b +0x02d:  mov    0x8(%ebp),%eax
0847dd0e +0x030:  mov    (%eax),%eax
0847dd10 +0x032:  mov    %edx,0x4(%esp)
0847dd14 +0x036:  mov    %eax,(%esp)
0847dd17 +0x039:  call   0861c392 <_ZN6StreamlsEt>  ; Stream::operator<<(unsigned short)
0847dd1c +0x03e:  leave
0847dd1d +0x03f:  ret
0847dd1e +0x040:  push   %ebp
0847dd1f +0x041:  mov    %esp,%ebp
0847dd21 +0x043:  mov    0x8(%ebp),%eax
0847dd24 +0x046:  movb   $0x1,(%eax)
0847dd27 +0x049:  pop    %ebp
0847dd28 +0x04a:  ret
0847dd29 +0x04b:  nop
0847dd2a +0x04c:  push   %ebp
0847dd2b +0x04d:  mov    %esp,%ebp
0847dd2d +0x04f:  mov    0x8(%ebp),%eax
0847dd30 +0x052:  movb   $0x0,(%eax)
0847dd33 +0x055:  pop    %ebp
0847dd34 +0x056:  ret
0847dd35 +0x057:  nop
0847dd36 +0x058:  push   %ebp
0847dd37 +0x059:  mov    %esp,%ebp
0847dd39 +0x05b:  mov    0x8(%ebp),%eax
0847dd3c +0x05e:  mov    0xc(%ebp),%edx
0847dd3f +0x061:  mov    %edx,0x4(%eax)
0847dd42 +0x064:  pop    %ebp
0847dd43 +0x065:  ret
0847dd44 +0x066:  push   %ebp
0847dd45 +0x067:  mov    %esp,%ebp
0847dd47 +0x069:  mov    0x8(%ebp),%eax
0847dd4a +0x06c:  mov    0xc(%ebp),%edx
0847dd4d +0x06f:  mov    %edx,0x20(%eax)
0847dd50 +0x072:  pop    %ebp
0847dd51 +0x073:  ret
0847dd52 +0x074:  push   %ebp
0847dd53 +0x075:  mov    %esp,%ebp
0847dd55 +0x077:  sub    $0x18,%esp
0847dd58 +0x07a:  mov    0x8(%ebp),%eax
0847dd5b +0x07d:  mov    (%eax),%eax
0847dd5d +0x07f:  mov    %eax,(%esp)
0847dd60 +0x082:  call   0847de2e <+0x150>
0847dd65 +0x087:  leave
0847dd66 +0x088:  ret
0847dd67 +0x089:  nop
0847dd68 +0x08a:  push   %ebp
0847dd69 +0x08b:  mov    %esp,%ebp
0847dd6b +0x08d:  sub    $0x18,%esp
0847dd6e +0x090:  mov    0x8(%ebp),%eax
0847dd71 +0x093:  mov    (%eax),%eax
0847dd73 +0x095:  mov    %eax,(%esp)
0847dd76 +0x098:  call   0847de98 <+0x1ba>
0847dd7b +0x09d:  leave
0847dd7c +0x09e:  ret
0847dd7d +0x09f:  nop
0847dd7e +0x0a0:  push   %ebp
0847dd7f +0x0a1:  mov    %esp,%ebp
0847dd81 +0x0a3:  sub    $0x18,%esp
0847dd84 +0x0a6:  mov    0x8(%ebp),%eax
0847dd87 +0x0a9:  mov    (%eax),%eax
0847dd89 +0x0ab:  mov    %eax,(%esp)
0847dd8c +0x0ae:  call   0847df02 <+0x224>
0847dd91 +0x0b3:  leave
0847dd92 +0x0b4:  ret
0847dd93 +0x0b5:  nop
0847dd94 +0x0b6:  push   %ebp
0847dd95 +0x0b7:  mov    %esp,%ebp
0847dd97 +0x0b9:  sub    $0x18,%esp
0847dd9a +0x0bc:  mov    0x8(%ebp),%eax
0847dd9d +0x0bf:  mov    (%eax),%eax
0847dd9f +0x0c1:  mov    %eax,(%esp)
0847dda2 +0x0c4:  call   0847df6c <+0x28e>
0847dda7 +0x0c9:  leave
0847dda8 +0x0ca:  ret
0847dda9 +0x0cb:  nop
0847ddaa +0x0cc:  push   %ebp
0847ddab +0x0cd:  mov    %esp,%ebp
0847ddad +0x0cf:  sub    $0x18,%esp
0847ddb0 +0x0d2:  mov    0x8(%ebp),%eax
0847ddb3 +0x0d5:  mov    (%eax),%eax
0847ddb5 +0x0d7:  mov    %eax,(%esp)
0847ddb8 +0x0da:  call   0847dfd6 <+0x2f8>
0847ddbd +0x0df:  leave
0847ddbe +0x0e0:  ret
0847ddbf +0x0e1:  nop
0847ddc0 +0x0e2:  push   %ebp
0847ddc1 +0x0e3:  mov    %esp,%ebp
0847ddc3 +0x0e5:  sub    $0x18,%esp
0847ddc6 +0x0e8:  mov    0x8(%ebp),%eax
0847ddc9 +0x0eb:  mov    (%eax),%eax
0847ddcb +0x0ed:  mov    %eax,(%esp)
0847ddce +0x0f0:  call   0847e040 <+0x362>
0847ddd3 +0x0f5:  leave
0847ddd4 +0x0f6:  ret
0847ddd5 +0x0f7:  nop
0847ddd6 +0x0f8:  push   %ebp
0847ddd7 +0x0f9:  mov    %esp,%ebp
0847ddd9 +0x0fb:  sub    $0x18,%esp
0847dddc +0x0fe:  mov    0x8(%ebp),%eax
0847dddf +0x101:  mov    (%eax),%eax
0847dde1 +0x103:  mov    %eax,(%esp)
0847dde4 +0x106:  call   0847e0aa <+0x3cc>
0847dde9 +0x10b:  leave
0847ddea +0x10c:  ret
0847ddeb +0x10d:  nop
0847ddec +0x10e:  push   %ebp
0847dded +0x10f:  mov    %esp,%ebp
0847ddef +0x111:  sub    $0x18,%esp
0847ddf2 +0x114:  mov    0x8(%ebp),%eax
0847ddf5 +0x117:  mov    (%eax),%eax
0847ddf7 +0x119:  mov    %eax,(%esp)
0847ddfa +0x11c:  call   0847e114 <+0x436>
0847ddff +0x121:  leave
0847de00 +0x122:  ret
0847de01 +0x123:  nop
0847de02 +0x124:  push   %ebp
0847de03 +0x125:  mov    %esp,%ebp
0847de05 +0x127:  sub    $0x18,%esp
0847de08 +0x12a:  mov    0x8(%ebp),%eax
0847de0b +0x12d:  mov    (%eax),%eax
0847de0d +0x12f:  mov    %eax,(%esp)
0847de10 +0x132:  call   0847e17e <+0x4a0>
0847de15 +0x137:  leave
0847de16 +0x138:  ret
0847de17 +0x139:  nop
0847de18 +0x13a:  push   %ebp
0847de19 +0x13b:  mov    %esp,%ebp
0847de1b +0x13d:  sub    $0x18,%esp
0847de1e +0x140:  mov    0x8(%ebp),%eax
0847de21 +0x143:  mov    (%eax),%eax
0847de23 +0x145:  mov    %eax,(%esp)
0847de26 +0x148:  call   0847e1e8 <+0x50a>
0847de2b +0x14d:  leave
0847de2c +0x14e:  ret
0847de2d +0x14f:  nop
0847de2e +0x150:  push   %ebp
0847de2f +0x151:  mov    %esp,%ebp
0847de31 +0x153:  sub    $0x28,%esp
0847de34 +0x156:  jmp    0847de52 <+0x174>
0847de36 +0x158:  mov    0x8(%ebp),%eax
0847de39 +0x15b:  mov    %eax,(%esp)
0847de3c +0x15e:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847de41 +0x163:  add    %eax,%eax
0847de43 +0x165:  mov    %eax,0x4(%esp)
0847de47 +0x169:  mov    0x8(%ebp),%eax
0847de4a +0x16c:  mov    %eax,(%esp)
0847de4d +0x16f:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847de52 +0x174:  movl   $0x5,0x4(%esp)
0847de5a +0x17c:  mov    0x8(%ebp),%eax
0847de5d +0x17f:  mov    %eax,(%esp)
0847de60 +0x182:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847de65 +0x187:  xor    $0x1,%eax
0847de68 +0x18a:  test   %al,%al
0847de6a +0x18c:  jne    0847de36 <+0x158>
0847de6c +0x18e:  mov    0x8(%ebp),%eax
0847de6f +0x191:  mov    0x8(%eax),%eax
0847de72 +0x194:  mov    %eax,%edx
0847de74 +0x196:  mov    0x8(%ebp),%eax
0847de77 +0x199:  mov    0xc(%eax),%eax
0847de7a +0x19c:  lea    (%edx,%eax,1),%eax
0847de7d +0x19f:  mov    %eax,-0xc(%ebp)
0847de80 +0x1a2:  movl   $0x5,0x4(%esp)
0847de88 +0x1aa:  mov    0x8(%ebp),%eax
0847de8b +0x1ad:  mov    %eax,(%esp)
0847de8e +0x1b0:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847de93 +0x1b5:  mov    -0xc(%ebp),%eax
0847de96 +0x1b8:  leave
0847de97 +0x1b9:  ret
0847de98 +0x1ba:  push   %ebp
0847de99 +0x1bb:  mov    %esp,%ebp
0847de9b +0x1bd:  sub    $0x28,%esp
0847de9e +0x1c0:  jmp    0847debc <+0x1de>
0847dea0 +0x1c2:  mov    0x8(%ebp),%eax
0847dea3 +0x1c5:  mov    %eax,(%esp)
0847dea6 +0x1c8:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847deab +0x1cd:  add    %eax,%eax
0847dead +0x1cf:  mov    %eax,0x4(%esp)
0847deb1 +0x1d3:  mov    0x8(%ebp),%eax
0847deb4 +0x1d6:  mov    %eax,(%esp)
0847deb7 +0x1d9:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847debc +0x1de:  movl   $0x24,0x4(%esp)
0847dec4 +0x1e6:  mov    0x8(%ebp),%eax
0847dec7 +0x1e9:  mov    %eax,(%esp)
0847deca +0x1ec:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847decf +0x1f1:  xor    $0x1,%eax
0847ded2 +0x1f4:  test   %al,%al
0847ded4 +0x1f6:  jne    0847dea0 <+0x1c2>
0847ded6 +0x1f8:  mov    0x8(%ebp),%eax
0847ded9 +0x1fb:  mov    0x8(%eax),%eax
0847dedc +0x1fe:  mov    %eax,%edx
0847dede +0x200:  mov    0x8(%ebp),%eax
0847dee1 +0x203:  mov    0xc(%eax),%eax
0847dee4 +0x206:  lea    (%edx,%eax,1),%eax
0847dee7 +0x209:  mov    %eax,-0xc(%ebp)
0847deea +0x20c:  movl   $0x24,0x4(%esp)
0847def2 +0x214:  mov    0x8(%ebp),%eax
0847def5 +0x217:  mov    %eax,(%esp)
0847def8 +0x21a:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847defd +0x21f:  mov    -0xc(%ebp),%eax
0847df00 +0x222:  leave
0847df01 +0x223:  ret
0847df02 +0x224:  push   %ebp
0847df03 +0x225:  mov    %esp,%ebp
0847df05 +0x227:  sub    $0x28,%esp
0847df08 +0x22a:  jmp    0847df26 <+0x248>
0847df0a +0x22c:  mov    0x8(%ebp),%eax
0847df0d +0x22f:  mov    %eax,(%esp)
0847df10 +0x232:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847df15 +0x237:  add    %eax,%eax
0847df17 +0x239:  mov    %eax,0x4(%esp)
0847df1b +0x23d:  mov    0x8(%ebp),%eax
0847df1e +0x240:  mov    %eax,(%esp)
0847df21 +0x243:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847df26 +0x248:  movl   $0x2d,0x4(%esp)
0847df2e +0x250:  mov    0x8(%ebp),%eax
0847df31 +0x253:  mov    %eax,(%esp)
0847df34 +0x256:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847df39 +0x25b:  xor    $0x1,%eax
0847df3c +0x25e:  test   %al,%al
0847df3e +0x260:  jne    0847df0a <+0x22c>
0847df40 +0x262:  mov    0x8(%ebp),%eax
0847df43 +0x265:  mov    0x8(%eax),%eax
0847df46 +0x268:  mov    %eax,%edx
0847df48 +0x26a:  mov    0x8(%ebp),%eax
0847df4b +0x26d:  mov    0xc(%eax),%eax
0847df4e +0x270:  lea    (%edx,%eax,1),%eax
0847df51 +0x273:  mov    %eax,-0xc(%ebp)
0847df54 +0x276:  movl   $0x2d,0x4(%esp)
0847df5c +0x27e:  mov    0x8(%ebp),%eax
0847df5f +0x281:  mov    %eax,(%esp)
0847df62 +0x284:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847df67 +0x289:  mov    -0xc(%ebp),%eax
0847df6a +0x28c:  leave
0847df6b +0x28d:  ret
0847df6c +0x28e:  push   %ebp
0847df6d +0x28f:  mov    %esp,%ebp
0847df6f +0x291:  sub    $0x28,%esp
0847df72 +0x294:  jmp    0847df90 <+0x2b2>
0847df74 +0x296:  mov    0x8(%ebp),%eax
0847df77 +0x299:  mov    %eax,(%esp)
0847df7a +0x29c:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847df7f +0x2a1:  add    %eax,%eax
0847df81 +0x2a3:  mov    %eax,0x4(%esp)
0847df85 +0x2a7:  mov    0x8(%ebp),%eax
0847df88 +0x2aa:  mov    %eax,(%esp)
0847df8b +0x2ad:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847df90 +0x2b2:  movl   $0xa,0x4(%esp)
0847df98 +0x2ba:  mov    0x8(%ebp),%eax
0847df9b +0x2bd:  mov    %eax,(%esp)
0847df9e +0x2c0:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847dfa3 +0x2c5:  xor    $0x1,%eax
0847dfa6 +0x2c8:  test   %al,%al
0847dfa8 +0x2ca:  jne    0847df74 <+0x296>
0847dfaa +0x2cc:  mov    0x8(%ebp),%eax
0847dfad +0x2cf:  mov    0x8(%eax),%eax
0847dfb0 +0x2d2:  mov    %eax,%edx
0847dfb2 +0x2d4:  mov    0x8(%ebp),%eax
0847dfb5 +0x2d7:  mov    0xc(%eax),%eax
0847dfb8 +0x2da:  lea    (%edx,%eax,1),%eax
0847dfbb +0x2dd:  mov    %eax,-0xc(%ebp)
0847dfbe +0x2e0:  movl   $0xa,0x4(%esp)
0847dfc6 +0x2e8:  mov    0x8(%ebp),%eax
0847dfc9 +0x2eb:  mov    %eax,(%esp)
0847dfcc +0x2ee:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847dfd1 +0x2f3:  mov    -0xc(%ebp),%eax
0847dfd4 +0x2f6:  leave
0847dfd5 +0x2f7:  ret
0847dfd6 +0x2f8:  push   %ebp
0847dfd7 +0x2f9:  mov    %esp,%ebp
0847dfd9 +0x2fb:  sub    $0x28,%esp
0847dfdc +0x2fe:  jmp    0847dffa <+0x31c>
0847dfde +0x300:  mov    0x8(%ebp),%eax
0847dfe1 +0x303:  mov    %eax,(%esp)
0847dfe4 +0x306:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847dfe9 +0x30b:  add    %eax,%eax
0847dfeb +0x30d:  mov    %eax,0x4(%esp)
0847dfef +0x311:  mov    0x8(%ebp),%eax
0847dff2 +0x314:  mov    %eax,(%esp)
0847dff5 +0x317:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847dffa +0x31c:  movl   $0x3a,0x4(%esp)
0847e002 +0x324:  mov    0x8(%ebp),%eax
0847e005 +0x327:  mov    %eax,(%esp)
0847e008 +0x32a:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847e00d +0x32f:  xor    $0x1,%eax
0847e010 +0x332:  test   %al,%al
0847e012 +0x334:  jne    0847dfde <+0x300>
0847e014 +0x336:  mov    0x8(%ebp),%eax
0847e017 +0x339:  mov    0x8(%eax),%eax
0847e01a +0x33c:  mov    %eax,%edx
0847e01c +0x33e:  mov    0x8(%ebp),%eax
0847e01f +0x341:  mov    0xc(%eax),%eax
0847e022 +0x344:  lea    (%edx,%eax,1),%eax
0847e025 +0x347:  mov    %eax,-0xc(%ebp)
0847e028 +0x34a:  movl   $0x3a,0x4(%esp)
0847e030 +0x352:  mov    0x8(%ebp),%eax
0847e033 +0x355:  mov    %eax,(%esp)
0847e036 +0x358:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847e03b +0x35d:  mov    -0xc(%ebp),%eax
0847e03e +0x360:  leave
0847e03f +0x361:  ret
0847e040 +0x362:  push   %ebp
0847e041 +0x363:  mov    %esp,%ebp
0847e043 +0x365:  sub    $0x28,%esp
0847e046 +0x368:  jmp    0847e064 <+0x386>
0847e048 +0x36a:  mov    0x8(%ebp),%eax
0847e04b +0x36d:  mov    %eax,(%esp)
0847e04e +0x370:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847e053 +0x375:  add    %eax,%eax
0847e055 +0x377:  mov    %eax,0x4(%esp)
0847e059 +0x37b:  mov    0x8(%ebp),%eax
0847e05c +0x37e:  mov    %eax,(%esp)
0847e05f +0x381:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847e064 +0x386:  movl   $0xa,0x4(%esp)
0847e06c +0x38e:  mov    0x8(%ebp),%eax
0847e06f +0x391:  mov    %eax,(%esp)
0847e072 +0x394:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847e077 +0x399:  xor    $0x1,%eax
0847e07a +0x39c:  test   %al,%al
0847e07c +0x39e:  jne    0847e048 <+0x36a>
0847e07e +0x3a0:  mov    0x8(%ebp),%eax
0847e081 +0x3a3:  mov    0x8(%eax),%eax
0847e084 +0x3a6:  mov    %eax,%edx
0847e086 +0x3a8:  mov    0x8(%ebp),%eax
0847e089 +0x3ab:  mov    0xc(%eax),%eax
0847e08c +0x3ae:  lea    (%edx,%eax,1),%eax
0847e08f +0x3b1:  mov    %eax,-0xc(%ebp)
0847e092 +0x3b4:  movl   $0xa,0x4(%esp)
0847e09a +0x3bc:  mov    0x8(%ebp),%eax
0847e09d +0x3bf:  mov    %eax,(%esp)
0847e0a0 +0x3c2:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847e0a5 +0x3c7:  mov    -0xc(%ebp),%eax
0847e0a8 +0x3ca:  leave
0847e0a9 +0x3cb:  ret
0847e0aa +0x3cc:  push   %ebp
0847e0ab +0x3cd:  mov    %esp,%ebp
0847e0ad +0x3cf:  sub    $0x28,%esp
0847e0b0 +0x3d2:  jmp    0847e0ce <+0x3f0>
0847e0b2 +0x3d4:  mov    0x8(%ebp),%eax
0847e0b5 +0x3d7:  mov    %eax,(%esp)
0847e0b8 +0x3da:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847e0bd +0x3df:  add    %eax,%eax
0847e0bf +0x3e1:  mov    %eax,0x4(%esp)
0847e0c3 +0x3e5:  mov    0x8(%ebp),%eax
0847e0c6 +0x3e8:  mov    %eax,(%esp)
0847e0c9 +0x3eb:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847e0ce +0x3f0:  movl   $0x21,0x4(%esp)
0847e0d6 +0x3f8:  mov    0x8(%ebp),%eax
0847e0d9 +0x3fb:  mov    %eax,(%esp)
0847e0dc +0x3fe:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847e0e1 +0x403:  xor    $0x1,%eax
0847e0e4 +0x406:  test   %al,%al
0847e0e6 +0x408:  jne    0847e0b2 <+0x3d4>
0847e0e8 +0x40a:  mov    0x8(%ebp),%eax
0847e0eb +0x40d:  mov    0x8(%eax),%eax
0847e0ee +0x410:  mov    %eax,%edx
0847e0f0 +0x412:  mov    0x8(%ebp),%eax
0847e0f3 +0x415:  mov    0xc(%eax),%eax
0847e0f6 +0x418:  lea    (%edx,%eax,1),%eax
0847e0f9 +0x41b:  mov    %eax,-0xc(%ebp)
0847e0fc +0x41e:  movl   $0x21,0x4(%esp)
0847e104 +0x426:  mov    0x8(%ebp),%eax
0847e107 +0x429:  mov    %eax,(%esp)
0847e10a +0x42c:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847e10f +0x431:  mov    -0xc(%ebp),%eax
0847e112 +0x434:  leave
0847e113 +0x435:  ret
0847e114 +0x436:  push   %ebp
0847e115 +0x437:  mov    %esp,%ebp
0847e117 +0x439:  sub    $0x28,%esp
0847e11a +0x43c:  jmp    0847e138 <+0x45a>
0847e11c +0x43e:  mov    0x8(%ebp),%eax
0847e11f +0x441:  mov    %eax,(%esp)
0847e122 +0x444:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847e127 +0x449:  add    %eax,%eax
0847e129 +0x44b:  mov    %eax,0x4(%esp)
0847e12d +0x44f:  mov    0x8(%ebp),%eax
0847e130 +0x452:  mov    %eax,(%esp)
0847e133 +0x455:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847e138 +0x45a:  movl   $0x12,0x4(%esp)
0847e140 +0x462:  mov    0x8(%ebp),%eax
0847e143 +0x465:  mov    %eax,(%esp)
0847e146 +0x468:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847e14b +0x46d:  xor    $0x1,%eax
0847e14e +0x470:  test   %al,%al
0847e150 +0x472:  jne    0847e11c <+0x43e>
0847e152 +0x474:  mov    0x8(%ebp),%eax
0847e155 +0x477:  mov    0x8(%eax),%eax
0847e158 +0x47a:  mov    %eax,%edx
0847e15a +0x47c:  mov    0x8(%ebp),%eax
0847e15d +0x47f:  mov    0xc(%eax),%eax
0847e160 +0x482:  lea    (%edx,%eax,1),%eax
0847e163 +0x485:  mov    %eax,-0xc(%ebp)
0847e166 +0x488:  movl   $0x12,0x4(%esp)
0847e16e +0x490:  mov    0x8(%ebp),%eax
0847e171 +0x493:  mov    %eax,(%esp)
0847e174 +0x496:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847e179 +0x49b:  mov    -0xc(%ebp),%eax
0847e17c +0x49e:  leave
0847e17d +0x49f:  ret
0847e17e +0x4a0:  push   %ebp
0847e17f +0x4a1:  mov    %esp,%ebp
0847e181 +0x4a3:  sub    $0x28,%esp
0847e184 +0x4a6:  jmp    0847e1a2 <+0x4c4>
0847e186 +0x4a8:  mov    0x8(%ebp),%eax
0847e189 +0x4ab:  mov    %eax,(%esp)
0847e18c +0x4ae:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847e191 +0x4b3:  add    %eax,%eax
0847e193 +0x4b5:  mov    %eax,0x4(%esp)
0847e197 +0x4b9:  mov    0x8(%ebp),%eax
0847e19a +0x4bc:  mov    %eax,(%esp)
0847e19d +0x4bf:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847e1a2 +0x4c4:  movl   $0x20,0x4(%esp)
0847e1aa +0x4cc:  mov    0x8(%ebp),%eax
0847e1ad +0x4cf:  mov    %eax,(%esp)
0847e1b0 +0x4d2:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847e1b5 +0x4d7:  xor    $0x1,%eax
0847e1b8 +0x4da:  test   %al,%al
0847e1ba +0x4dc:  jne    0847e186 <+0x4a8>
0847e1bc +0x4de:  mov    0x8(%ebp),%eax
0847e1bf +0x4e1:  mov    0x8(%eax),%eax
0847e1c2 +0x4e4:  mov    %eax,%edx
0847e1c4 +0x4e6:  mov    0x8(%ebp),%eax
0847e1c7 +0x4e9:  mov    0xc(%eax),%eax
0847e1ca +0x4ec:  lea    (%edx,%eax,1),%eax
0847e1cd +0x4ef:  mov    %eax,-0xc(%ebp)
0847e1d0 +0x4f2:  movl   $0x20,0x4(%esp)
0847e1d8 +0x4fa:  mov    0x8(%ebp),%eax
0847e1db +0x4fd:  mov    %eax,(%esp)
0847e1de +0x500:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847e1e3 +0x505:  mov    -0xc(%ebp),%eax
0847e1e6 +0x508:  leave
0847e1e7 +0x509:  ret
0847e1e8 +0x50a:  push   %ebp
0847e1e9 +0x50b:  mov    %esp,%ebp
0847e1eb +0x50d:  sub    $0x28,%esp
0847e1ee +0x510:  jmp    0847e20c <+0x52e>
0847e1f0 +0x512:  mov    0x8(%ebp),%eax
0847e1f3 +0x515:  mov    %eax,(%esp)
0847e1f6 +0x518:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0847e1fb +0x51d:  add    %eax,%eax
0847e1fd +0x51f:  mov    %eax,0x4(%esp)
0847e201 +0x523:  mov    0x8(%ebp),%eax
0847e204 +0x526:  mov    %eax,(%esp)
0847e207 +0x529:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0847e20c +0x52e:  movl   $0x2a,0x4(%esp)
0847e214 +0x536:  mov    0x8(%ebp),%eax
0847e217 +0x539:  mov    %eax,(%esp)
0847e21a +0x53c:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0847e21f +0x541:  xor    $0x1,%eax
0847e222 +0x544:  test   %al,%al
0847e224 +0x546:  jne    0847e1f0 <+0x512>
0847e226 +0x548:  mov    0x8(%ebp),%eax
0847e229 +0x54b:  mov    0x8(%eax),%eax
0847e22c +0x54e:  mov    %eax,%edx
0847e22e +0x550:  mov    0x8(%ebp),%eax
0847e231 +0x553:  mov    0xc(%eax),%eax
0847e234 +0x556:  lea    (%edx,%eax,1),%eax
0847e237 +0x559:  mov    %eax,-0xc(%ebp)
0847e23a +0x55c:  movl   $0x2a,0x4(%esp)
0847e242 +0x564:  mov    0x8(%ebp),%eax
0847e245 +0x567:  mov    %eax,(%esp)
0847e248 +0x56a:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0847e24d +0x56f:  mov    -0xc(%ebp),%eax
0847e250 +0x572:  leave
0847e251 +0x573:  ret
0847e252 +0x574:  nop
0847e253 +0x575:  nop
```

## 反编译 C

```c
// <global>::global @ 0x847dcde

/* CDispatchServerPacket::dispatchPacket(char*) */

void CDispatchServerPacket::_GLOBAL__I_dispatchPacket(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
