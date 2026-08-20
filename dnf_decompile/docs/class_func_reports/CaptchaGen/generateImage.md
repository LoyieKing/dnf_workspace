# generateImage

`_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage`

`CaptchaGen::generateImage(int, int, unsigned short const*, int, CaptchaGen::ImageOption const&, GreyImage*)`

| 类 | 地址 |
|---|---|
| `CaptchaGen` | `0x080deade` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080deade  _ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage
#           CaptchaGen::generateImage(int, int, unsigned short const*, int, CaptchaGen::ImageOption const&, GreyImage*)
# range [0x080deade, 0x080df4e7]
080deade +0x000:  push   %ebp
080deadf +0x001:  mov    %esp,%ebp
080deae1 +0x003:  push   %esi
080deae2 +0x004:  push   %ebx
080deae3 +0x005:  sub    $0x120,%esp
080deae9 +0x00b:  mov    0x8(%ebp),%eax
080deaec +0x00e:  add    $0x4,%eax
080deaef +0x011:  mov    %eax,(%esp)
080deaf2 +0x014:  call   080df8ca <_GLOBAL__I__ZN10CaptchaGenC2Ev+0xe6>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0xe6
080deaf7 +0x019:  test   %al,%al
080deaf9 +0x01b:  jne    080df4dd <+0x9ff>
080deaff +0x021:  movl   $0x0,0xc(%esp)
080deb07 +0x029:  mov    0x10(%ebp),%eax
080deb0a +0x02c:  mov    %eax,0x8(%esp)
080deb0e +0x030:  mov    0xc(%ebp),%eax
080deb11 +0x033:  mov    %eax,0x4(%esp)
080deb15 +0x037:  mov    0x20(%ebp),%eax
080deb18 +0x03a:  mov    %eax,(%esp)
080deb1b +0x03d:  call   080df51e <_ZN9GreyImage4initEiih>  ; GreyImage::init(int, int, unsigned char)
080deb20 +0x042:  movl   $0x0,-0x90(%ebp)
080deb2a +0x04c:  jmp    080dec8b <+0x1ad>
080deb2f +0x051:  mov    0x8(%ebp),%eax
080deb32 +0x054:  add    $0x10,%eax
080deb35 +0x057:  mov    %eax,(%esp)
080deb38 +0x05a:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080deb3d +0x05f:  mov    0xc(%ebp),%edx
080deb40 +0x062:  sub    $0xa,%edx
080deb43 +0x065:  mov    %edx,%ecx
080deb45 +0x067:  mov    $0x0,%edx
080deb4a +0x06c:  div    %ecx
080deb4c +0x06e:  mov    %edx,%eax
080deb4e +0x070:  add    $0x5,%eax
080deb51 +0x073:  mov    %eax,-0x8c(%ebp)
080deb57 +0x079:  mov    0x8(%ebp),%eax
080deb5a +0x07c:  add    $0x10,%eax
080deb5d +0x07f:  mov    %eax,(%esp)
080deb60 +0x082:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080deb65 +0x087:  mov    0x10(%ebp),%edx
080deb68 +0x08a:  sub    $0xa,%edx
080deb6b +0x08d:  mov    %edx,%ecx
080deb6d +0x08f:  mov    $0x0,%edx
080deb72 +0x094:  div    %ecx
080deb74 +0x096:  mov    %edx,%eax
080deb76 +0x098:  add    $0x5,%eax
080deb79 +0x09b:  mov    %eax,-0x88(%ebp)
080deb7f +0x0a1:  mov    0x8(%ebp),%eax
080deb82 +0x0a4:  add    $0x10,%eax
080deb85 +0x0a7:  mov    %eax,(%esp)
080deb88 +0x0aa:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080deb8d +0x0af:  mov    0x1c(%ebp),%edx
080deb90 +0x0b2:  mov    0x4(%edx),%edx
080deb93 +0x0b5:  mov    %edx,%ecx
080deb95 +0x0b7:  mov    $0x0,%edx
080deb9a +0x0bc:  div    %ecx
080deb9c +0x0be:  mov    %edx,%eax
080deb9e +0x0c0:  add    $0x1,%eax
080deba1 +0x0c3:  mov    %eax,-0x84(%ebp)
080deba7 +0x0c9:  mov    -0x84(%ebp),%eax
080debad +0x0cf:  neg    %eax
080debaf +0x0d1:  mov    %eax,-0x80(%ebp)
080debb2 +0x0d4:  jmp    080dec70 <+0x192>
080debb7 +0x0d9:  mov    -0x84(%ebp),%eax
080debbd +0x0df:  neg    %eax
080debbf +0x0e1:  mov    %eax,-0x7c(%ebp)
080debc2 +0x0e4:  jmp    080dec58 <+0x17a>
080debc7 +0x0e9:  mov    -0x80(%ebp),%eax
080debca +0x0ec:  mov    %eax,%edx
080debcc +0x0ee:  imul   -0x80(%ebp),%edx
080debd0 +0x0f2:  mov    -0x7c(%ebp),%eax
080debd3 +0x0f5:  imul   -0x7c(%ebp),%eax
080debd7 +0x0f9:  add    %eax,%edx
080debd9 +0x0fb:  mov    %edx,%eax
080debdb +0x0fd:  shl    $0x8,%eax
080debde +0x100:  mov    %eax,%ecx
080debe0 +0x102:  sub    %edx,%ecx
080debe2 +0x104:  mov    -0x84(%ebp),%eax
080debe8 +0x10a:  mov    %eax,%edx
080debea +0x10c:  imul   -0x84(%ebp),%edx
080debf1 +0x113:  mov    %edx,-0xfc(%ebp)
080debf7 +0x119:  mov    %ecx,%edx
080debf9 +0x11b:  mov    %edx,%eax
080debfb +0x11d:  sar    $0x1f,%edx
080debfe +0x120:  idivl  -0xfc(%ebp)
080dec04 +0x126:  mov    %eax,-0x78(%ebp)
080dec07 +0x129:  cmpl   $0xfe,-0x78(%ebp)
080dec0e +0x130:  jg     080dec54 <+0x176>
080dec10 +0x132:  mov    $0xff,%eax
080dec15 +0x137:  sub    -0x78(%ebp),%eax
080dec18 +0x13a:  mov    %eax,%edx
080dec1a +0x13c:  sar    $0x1f,%edx
080dec1d +0x13f:  idivl  -0x84(%ebp)
080dec23 +0x145:  movzbl %al,%eax
080dec26 +0x148:  mov    -0x7c(%ebp),%edx
080dec29 +0x14b:  mov    -0x88(%ebp),%ecx
080dec2f +0x151:  add    %edx,%ecx
080dec31 +0x153:  mov    -0x80(%ebp),%edx
080dec34 +0x156:  mov    -0x8c(%ebp),%ebx
080dec3a +0x15c:  lea    (%ebx,%edx,1),%edx
080dec3d +0x15f:  mov    %eax,0xc(%esp)
080dec41 +0x163:  mov    %ecx,0x8(%esp)
080dec45 +0x167:  mov    %edx,0x4(%esp)
080dec49 +0x16b:  mov    0x20(%ebp),%eax
080dec4c +0x16e:  mov    %eax,(%esp)
080dec4f +0x171:  call   080df636 <_ZN9GreyImage13setAlphaAsMaxEiih>  ; GreyImage::setAlphaAsMax(int, int, unsigned char)
080dec54 +0x176:  addl   $0x1,-0x7c(%ebp)
080dec58 +0x17a:  mov    -0x7c(%ebp),%eax
080dec5b +0x17d:  cmp    -0x84(%ebp),%eax
080dec61 +0x183:  setle  %al
080dec64 +0x186:  test   %al,%al
080dec66 +0x188:  jne    080debc7 <+0xe9>
080dec6c +0x18e:  addl   $0x1,-0x80(%ebp)
080dec70 +0x192:  mov    -0x80(%ebp),%eax
080dec73 +0x195:  cmp    -0x84(%ebp),%eax
080dec79 +0x19b:  setle  %al
080dec7c +0x19e:  test   %al,%al
080dec7e +0x1a0:  jne    080debb7 <+0xd9>
080dec84 +0x1a6:  addl   $0x1,-0x90(%ebp)
080dec8b +0x1ad:  mov    0x1c(%ebp),%eax
080dec8e +0x1b0:  mov    (%eax),%eax
080dec90 +0x1b2:  cmp    -0x90(%ebp),%eax
080dec96 +0x1b8:  setg   %al
080dec99 +0x1bb:  test   %al,%al
080dec9b +0x1bd:  jne    080deb2f <+0x51>
080deca1 +0x1c3:  movl   $0x0,-0x74(%ebp)
080deca8 +0x1ca:  jmp    080ded77 <+0x299>
080decad +0x1cf:  mov    0x8(%ebp),%eax
080decb0 +0x1d2:  add    $0x10,%eax
080decb3 +0x1d5:  mov    %eax,(%esp)
080decb6 +0x1d8:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080decbb +0x1dd:  mov    %eax,%ecx
080decbd +0x1df:  mov    $0xcccccccd,%edx
080decc2 +0x1e4:  mov    %ecx,%eax
080decc4 +0x1e6:  mul    %edx
080decc6 +0x1e8:  shr    $0x3,%edx
080decc9 +0x1eb:  mov    %edx,%eax
080deccb +0x1ed:  shl    $0x2,%eax
080decce +0x1f0:  add    %edx,%eax
080decd0 +0x1f2:  add    %eax,%eax
080decd2 +0x1f4:  mov    %ecx,%edx
080decd4 +0x1f6:  sub    %eax,%edx
080decd6 +0x1f8:  lea    0x1(%edx),%eax
080decd9 +0x1fb:  mov    %eax,-0x70(%ebp)
080decdc +0x1fe:  mov    0x8(%ebp),%eax
080decdf +0x201:  add    $0x10,%eax
080dece2 +0x204:  mov    %eax,(%esp)
080dece5 +0x207:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080decea +0x20c:  mov    0x10(%ebp),%ecx
080deced +0x20f:  mov    $0x0,%edx
080decf2 +0x214:  div    %ecx
080decf4 +0x216:  mov    %edx,%eax
080decf6 +0x218:  mov    %eax,-0x6c(%ebp)
080decf9 +0x21b:  mov    0xc(%ebp),%ebx
080decfc +0x21e:  mov    0x8(%ebp),%eax
080decff +0x221:  add    $0x10,%eax
080ded02 +0x224:  mov    %eax,(%esp)
080ded05 +0x227:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080ded0a +0x22c:  mov    %eax,%ecx
080ded0c +0x22e:  mov    $0xcccccccd,%edx
080ded11 +0x233:  mov    %ecx,%eax
080ded13 +0x235:  mul    %edx
080ded15 +0x237:  shr    $0x3,%edx
080ded18 +0x23a:  mov    %edx,%eax
080ded1a +0x23c:  shl    $0x2,%eax
080ded1d +0x23f:  add    %edx,%eax
080ded1f +0x241:  add    %eax,%eax
080ded21 +0x243:  mov    %ecx,%edx
080ded23 +0x245:  sub    %eax,%edx
080ded25 +0x247:  mov    %ebx,%eax
080ded27 +0x249:  sub    %edx,%eax
080ded29 +0x24b:  sub    $0x2,%eax
080ded2c +0x24e:  mov    %eax,-0x68(%ebp)
080ded2f +0x251:  mov    0x8(%ebp),%eax
080ded32 +0x254:  add    $0x10,%eax
080ded35 +0x257:  mov    %eax,(%esp)
080ded38 +0x25a:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080ded3d +0x25f:  mov    0x10(%ebp),%ecx
080ded40 +0x262:  mov    $0x0,%edx
080ded45 +0x267:  div    %ecx
080ded47 +0x269:  mov    %edx,%eax
080ded49 +0x26b:  mov    %eax,-0x64(%ebp)
080ded4c +0x26e:  mov    -0x64(%ebp),%eax
080ded4f +0x271:  mov    %eax,0x10(%esp)
080ded53 +0x275:  mov    -0x68(%ebp),%eax
080ded56 +0x278:  mov    %eax,0xc(%esp)
080ded5a +0x27c:  mov    -0x6c(%ebp),%eax
080ded5d +0x27f:  mov    %eax,0x8(%esp)
080ded61 +0x283:  mov    -0x70(%ebp),%eax
080ded64 +0x286:  mov    %eax,0x4(%esp)
080ded68 +0x28a:  mov    0x20(%ebp),%eax
080ded6b +0x28d:  mov    %eax,(%esp)
080ded6e +0x290:  call   080dea17 <_ZL8drawLineP9GreyImageiiii>  ; drawLine(GreyImage*, int, int, int, int)
080ded73 +0x295:  addl   $0x1,-0x74(%ebp)
080ded77 +0x299:  mov    0x1c(%ebp),%eax
080ded7a +0x29c:  mov    0x8(%eax),%eax
080ded7d +0x29f:  cmp    -0x74(%ebp),%eax
080ded80 +0x2a2:  setg   %al
080ded83 +0x2a5:  test   %al,%al
080ded85 +0x2a7:  jne    080decad <+0x1cf>
080ded8b +0x2ad:  movl   $0xa,-0xa0(%ebp)
080ded95 +0x2b7:  movl   $0x2,-0x9c(%ebp)
080ded9f +0x2c1:  movl   $0x0,-0x60(%ebp)
080deda6 +0x2c8:  jmp    080df17a <+0x69c>
080dedab +0x2cd:  mov    0x8(%ebp),%eax
080dedae +0x2d0:  add    $0x10,%eax
080dedb1 +0x2d3:  mov    %eax,(%esp)
080dedb4 +0x2d6:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080dedb9 +0x2db:  mov    %eax,%ebx
080dedbb +0x2dd:  mov    0x8(%ebp),%eax
080dedbe +0x2e0:  add    $0x4,%eax
080dedc1 +0x2e3:  mov    %eax,(%esp)
080dedc4 +0x2e6:  call   080df872 <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x8e>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x8e
080dedc9 +0x2eb:  mov    %eax,-0xfc(%ebp)
080dedcf +0x2f1:  mov    %ebx,%eax
080dedd1 +0x2f3:  mov    $0x0,%edx
080dedd6 +0x2f8:  divl   -0xfc(%ebp)
080deddc +0x2fe:  mov    %edx,%ecx
080dedde +0x300:  mov    %ecx,%eax
080dede0 +0x302:  mov    0x8(%ebp),%edx
080dede3 +0x305:  add    $0x4,%edx
080dede6 +0x308:  mov    %eax,0x4(%esp)
080dedea +0x30c:  mov    %edx,(%esp)
080deded +0x30f:  call   080df88e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0xaa>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0xaa
080dedf2 +0x314:  mov    (%eax),%eax
080dedf4 +0x316:  mov    %eax,-0x5c(%ebp)
080dedf7 +0x319:  mov    0x1c(%ebp),%eax
080dedfa +0x31c:  mov    0x10(%eax),%edx
080dedfd +0x31f:  mov    0x1c(%ebp),%eax
080dee00 +0x322:  mov    0xc(%eax),%eax
080dee03 +0x325:  mov    0x8(%ebp),%ecx
080dee06 +0x328:  add    $0x10,%ecx
080dee09 +0x32b:  mov    %edx,0x8(%esp)
080dee0d +0x32f:  mov    %eax,0x4(%esp)
080dee11 +0x333:  mov    %ecx,(%esp)
080dee14 +0x336:  call   08ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>  ; RandGen::getFloat(XorRand4*, float, float)
080dee19 +0x33b:  fstps  -0x58(%ebp)
080dee1c +0x33e:  mov    0x1c(%ebp),%eax
080dee1f +0x341:  mov    0x10(%eax),%edx
080dee22 +0x344:  mov    0x1c(%ebp),%eax
080dee25 +0x347:  mov    0xc(%eax),%eax
080dee28 +0x34a:  mov    0x8(%ebp),%ecx
080dee2b +0x34d:  add    $0x10,%ecx
080dee2e +0x350:  mov    %edx,0x8(%esp)
080dee32 +0x354:  mov    %eax,0x4(%esp)
080dee36 +0x358:  mov    %ecx,(%esp)
080dee39 +0x35b:  call   08ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>  ; RandGen::getFloat(XorRand4*, float, float)
080dee3e +0x360:  fstps  -0x54(%ebp)
080dee41 +0x363:  mov    0x1c(%ebp),%eax
080dee44 +0x366:  mov    0x18(%eax),%edx
080dee47 +0x369:  mov    0x1c(%ebp),%eax
080dee4a +0x36c:  mov    0x14(%eax),%eax
080dee4d +0x36f:  mov    0x8(%ebp),%ecx
080dee50 +0x372:  add    $0x10,%ecx
080dee53 +0x375:  mov    %edx,0x8(%esp)
080dee57 +0x379:  mov    %eax,0x4(%esp)
080dee5b +0x37d:  mov    %ecx,(%esp)
080dee5e +0x380:  call   08ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>  ; RandGen::getFloat(XorRand4*, float, float)
080dee63 +0x385:  fstps  -0x50(%ebp)
080dee66 +0x388:  mov    0x1c(%ebp),%eax
080dee69 +0x38b:  mov    0x18(%eax),%edx
080dee6c +0x38e:  mov    0x1c(%ebp),%eax
080dee6f +0x391:  mov    0x14(%eax),%eax
080dee72 +0x394:  mov    0x8(%ebp),%ecx
080dee75 +0x397:  add    $0x10,%ecx
080dee78 +0x39a:  mov    %edx,0x8(%esp)
080dee7c +0x39e:  mov    %eax,0x4(%esp)
080dee80 +0x3a2:  mov    %ecx,(%esp)
080dee83 +0x3a5:  call   08ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>  ; RandGen::getFloat(XorRand4*, float, float)
080dee88 +0x3aa:  fstps  -0x4c(%ebp)
080dee8b +0x3ad:  mov    0x8(%ebp),%eax
080dee8e +0x3b0:  add    $0x10,%eax
080dee91 +0x3b3:  mov    %eax,(%esp)
080dee94 +0x3b6:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080dee99 +0x3bb:  and    $0x2,%eax
080dee9c +0x3be:  test   %eax,%eax
080dee9e +0x3c0:  je     080deea7 <+0x3c9>
080deea0 +0x3c2:  mov    $0x3f800000,%eax
080deea5 +0x3c7:  jmp    080deeac <+0x3ce>
080deea7 +0x3c9:  mov    $0xbf800000,%eax
080deeac +0x3ce:  mov    %eax,-0x48(%ebp)
080deeaf +0x3d1:  mov    0x8(%ebp),%eax
080deeb2 +0x3d4:  add    $0x10,%eax
080deeb5 +0x3d7:  mov    %eax,(%esp)
080deeb8 +0x3da:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080deebd +0x3df:  and    $0x2,%eax
080deec0 +0x3e2:  test   %eax,%eax
080deec2 +0x3e4:  je     080deecb <+0x3ed>
080deec4 +0x3e6:  mov    $0x3f800000,%eax
080deec9 +0x3eb:  jmp    080deed0 <+0x3f2>
080deecb +0x3ed:  mov    $0xbf800000,%eax
080deed0 +0x3f2:  mov    %eax,-0x44(%ebp)
080deed3 +0x3f5:  flds   -0x58(%ebp)
080deed6 +0x3f8:  flds   &data#432d85a3(.rodata)
080deedc +0x3fe:  fmulp  %st,%st(1)
080deede +0x400:  fnstcw -0xea(%ebp)
080deee4 +0x406:  movzwl -0xea(%ebp),%eax
080deeeb +0x40d:  mov    $0xc,%ah
080deeed +0x40f:  mov    %ax,-0xec(%ebp)
080deef4 +0x416:  fldcw  -0xec(%ebp)
080deefa +0x41c:  fistpl -0xf0(%ebp)
080def00 +0x422:  fldcw  -0xea(%ebp)
080def06 +0x428:  mov    -0xf0(%ebp),%eax
080def0c +0x42e:  mov    %eax,-0xdc(%ebp)
080def12 +0x434:  flds   -0x50(%ebp)
080def15 +0x437:  fmuls  -0x48(%ebp)
080def18 +0x43a:  flds   &data#432d85a3(.rodata)
080def1e +0x440:  fmulp  %st,%st(1)
080def20 +0x442:  fldcw  -0xec(%ebp)
080def26 +0x448:  fistpl -0xf0(%ebp)
080def2c +0x44e:  fldcw  -0xea(%ebp)
080def32 +0x454:  mov    -0xf0(%ebp),%eax
080def38 +0x45a:  mov    %eax,-0xd8(%ebp)
080def3e +0x460:  flds   -0x4c(%ebp)
080def41 +0x463:  fmuls  -0x44(%ebp)
080def44 +0x466:  flds   &data#432d85a3(.rodata)
080def4a +0x46c:  fmulp  %st,%st(1)
080def4c +0x46e:  fldcw  -0xec(%ebp)
080def52 +0x474:  fistpl -0xf0(%ebp)
080def58 +0x47a:  fldcw  -0xea(%ebp)
080def5e +0x480:  mov    -0xf0(%ebp),%eax
080def64 +0x486:  mov    %eax,-0xd4(%ebp)
080def6a +0x48c:  flds   -0x54(%ebp)
080def6d +0x48f:  flds   &data#432d85a3(.rodata)
080def73 +0x495:  fmulp  %st,%st(1)
080def75 +0x497:  fldcw  -0xec(%ebp)
080def7b +0x49d:  fistpl -0xf0(%ebp)
080def81 +0x4a3:  fldcw  -0xea(%ebp)
080def87 +0x4a9:  mov    -0xf0(%ebp),%eax
080def8d +0x4af:  mov    %eax,-0xd0(%ebp)
080def93 +0x4b5:  movl   $0x0,0x8(%esp)
080def9b +0x4bd:  lea    -0xdc(%ebp),%eax
080defa1 +0x4c3:  mov    %eax,0x4(%esp)
080defa5 +0x4c7:  mov    -0x5c(%ebp),%eax
080defa8 +0x4ca:  mov    %eax,(%esp)
080defab +0x4cd:  call   087bd6c0 <FT_Set_Transform>
080defb0 +0x4d2:  mov    -0x60(%ebp),%eax
080defb3 +0x4d5:  add    %eax,%eax
080defb5 +0x4d7:  add    0x14(%ebp),%eax
080defb8 +0x4da:  movzwl (%eax),%eax
080defbb +0x4dd:  movzwl %ax,%eax
080defbe +0x4e0:  mov    %eax,0x4(%esp)
080defc2 +0x4e4:  mov    -0x5c(%ebp),%eax
080defc5 +0x4e7:  mov    %eax,(%esp)
080defc8 +0x4ea:  call   087bde70 <FT_Get_Char_Index>
080defcd +0x4ef:  mov    %eax,-0x40(%ebp)
080defd0 +0x4f2:  mov    -0x40(%ebp),%eax
080defd3 +0x4f5:  movl   $0x0,0x8(%esp)
080defdb +0x4fd:  mov    %eax,0x4(%esp)
080defdf +0x501:  mov    -0x5c(%ebp),%eax
080defe2 +0x504:  mov    %eax,(%esp)
080defe5 +0x507:  call   087c3020 <FT_Load_Glyph>
080defea +0x50c:  mov    %eax,-0xa4(%ebp)
080deff0 +0x512:  mov    -0x5c(%ebp),%eax
080deff3 +0x515:  mov    0x54(%eax),%eax
080deff6 +0x518:  movl   $0x0,0x4(%esp)
080deffe +0x520:  mov    %eax,(%esp)
080df001 +0x523:  call   087be950 <FT_Render_Glyph>
080df006 +0x528:  mov    %eax,-0xa4(%ebp)
080df00c +0x52e:  mov    0x8(%ebp),%eax
080df00f +0x531:  add    $0x10,%eax
080df012 +0x534:  mov    %eax,(%esp)
080df015 +0x537:  call   08adfb3c <_ZN8XorRand4clEv>  ; XorRand4::operator()()
080df01a +0x53c:  mov    0x1c(%ebp),%edx
080df01d +0x53f:  mov    0x1c(%edx),%edx
080df020 +0x542:  mov    %edx,%ecx
080df022 +0x544:  mov    $0x0,%edx
080df027 +0x549:  div    %ecx
080df029 +0x54b:  mov    %edx,%eax
080df02b +0x54d:  mov    %eax,-0x3c(%ebp)
080df02e +0x550:  mov    -0x5c(%ebp),%eax
080df031 +0x553:  mov    0x54(%eax),%eax
080df034 +0x556:  add    $0x4c,%eax
080df037 +0x559:  mov    %eax,-0x38(%ebp)
080df03a +0x55c:  movl   $0x0,-0x34(%ebp)
080df041 +0x563:  jmp    080df115 <+0x637>
080df046 +0x568:  mov    -0x34(%ebp),%eax
080df049 +0x56b:  mov    -0x9c(%ebp),%edx
080df04f +0x571:  lea    (%edx,%eax,1),%eax
080df052 +0x574:  add    -0x3c(%ebp),%eax
080df055 +0x577:  mov    %eax,-0x30(%ebp)
080df058 +0x57a:  cmpl   $0x0,-0x30(%ebp)
080df05c +0x57e:  js     080df10d <+0x62f>
080df062 +0x584:  mov    -0x30(%ebp),%eax
080df065 +0x587:  cmp    0x10(%ebp),%eax
080df068 +0x58a:  jge    080df110 <+0x632>
080df06e +0x590:  mov    -0xa0(%ebp),%eax
080df074 +0x596:  mov    0xc(%ebp),%edx
080df077 +0x599:  mov    %edx,%ecx
080df079 +0x59b:  sub    %eax,%ecx
080df07b +0x59d:  mov    %ecx,%eax
080df07d +0x59f:  mov    %eax,-0xa8(%ebp)
080df083 +0x5a5:  mov    -0x38(%ebp),%eax
080df086 +0x5a8:  lea    0x4(%eax),%edx
080df089 +0x5ab:  lea    -0xa8(%ebp),%eax
080df08f +0x5b1:  mov    %eax,0x4(%esp)
080df093 +0x5b5:  mov    %edx,(%esp)
080df096 +0x5b8:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
080df09b +0x5bd:  mov    (%eax),%eax
080df09d +0x5bf:  mov    %eax,-0x2c(%ebp)
080df0a0 +0x5c2:  movl   $0x0,-0x28(%ebp)
080df0a7 +0x5c9:  jmp    080df0fe <+0x620>
080df0a9 +0x5cb:  mov    -0x38(%ebp),%eax
080df0ac +0x5ce:  mov    0xc(%eax),%edx
080df0af +0x5d1:  mov    -0x38(%ebp),%eax
080df0b2 +0x5d4:  mov    0x8(%eax),%eax
080df0b5 +0x5d7:  imul   -0x34(%ebp),%eax
080df0b9 +0x5db:  add    -0x28(%ebp),%eax
080df0bc +0x5de:  lea    (%edx,%eax,1),%eax
080df0bf +0x5e1:  movzbl (%eax),%eax
080df0c2 +0x5e4:  movzbl %al,%eax
080df0c5 +0x5e7:  mov    %eax,-0x24(%ebp)
080df0c8 +0x5ea:  cmpl   $0x0,-0x24(%ebp)
080df0cc +0x5ee:  je     080df0fa <+0x61c>
080df0ce +0x5f0:  mov    -0x24(%ebp),%eax
080df0d1 +0x5f3:  movzbl %al,%eax
080df0d4 +0x5f6:  mov    -0x28(%ebp),%edx
080df0d7 +0x5f9:  mov    -0xa0(%ebp),%ecx
080df0dd +0x5ff:  lea    (%ecx,%edx,1),%edx
080df0e0 +0x602:  mov    %eax,0xc(%esp)
080df0e4 +0x606:  mov    -0x30(%ebp),%eax
080df0e7 +0x609:  mov    %eax,0x8(%esp)
080df0eb +0x60d:  mov    %edx,0x4(%esp)
080df0ef +0x611:  mov    0x20(%ebp),%eax
080df0f2 +0x614:  mov    %eax,(%esp)
080df0f5 +0x617:  call   080df636 <_ZN9GreyImage13setAlphaAsMaxEiih>  ; GreyImage::setAlphaAsMax(int, int, unsigned char)
080df0fa +0x61c:  addl   $0x1,-0x28(%ebp)
080df0fe +0x620:  mov    -0x28(%ebp),%eax
080df101 +0x623:  cmp    -0x2c(%ebp),%eax
080df104 +0x626:  setl   %al
080df107 +0x629:  test   %al,%al
080df109 +0x62b:  jne    080df0a9 <+0x5cb>
080df10b +0x62d:  jmp    080df111 <+0x633>
080df10d +0x62f:  nop
080df10e +0x630:  jmp    080df111 <+0x633>
080df110 +0x632:  nop
080df111 +0x633:  addl   $0x1,-0x34(%ebp)
080df115 +0x637:  mov    -0x38(%ebp),%eax
080df118 +0x63a:  mov    (%eax),%eax
080df11a +0x63c:  cmp    -0x34(%ebp),%eax
080df11d +0x63f:  setg   %al
080df120 +0x642:  test   %al,%al
080df122 +0x644:  jne    080df046 <+0x568>
080df128 +0x64a:  mov    -0x38(%ebp),%eax
080df12b +0x64d:  mov    0x4(%eax),%eax
080df12e +0x650:  mov    %eax,-0xf0(%ebp)
080df134 +0x656:  fildl  -0xf0(%ebp)
080df13a +0x65c:  mov    0x1c(%ebp),%eax
080df13d +0x65f:  flds   0x20(%eax)
080df140 +0x662:  fmulp  %st,%st(1)
080df142 +0x664:  fnstcw -0xea(%ebp)
080df148 +0x66a:  movzwl -0xea(%ebp),%eax
080df14f +0x671:  mov    $0xc,%ah
080df151 +0x673:  mov    %ax,-0xec(%ebp)
080df158 +0x67a:  fldcw  -0xec(%ebp)
080df15e +0x680:  fistpl -0xf0(%ebp)
080df164 +0x686:  fldcw  -0xea(%ebp)
080df16a +0x68c:  mov    -0xf0(%ebp),%eax
080df170 +0x692:  add    %eax,-0xa0(%ebp)
080df176 +0x698:  addl   $0x1,-0x60(%ebp)
080df17a +0x69c:  mov    -0x60(%ebp),%eax
080df17d +0x69f:  cmp    0x18(%ebp),%eax
080df180 +0x6a2:  setl   %al
080df183 +0x6a5:  test   %al,%al
080df185 +0x6a7:  jne    080dedab <+0x2cd>
080df18b +0x6ad:  lea    -0xb4(%ebp),%eax
080df191 +0x6b3:  mov    %eax,(%esp)
080df194 +0x6b6:  call   080df4e8 <_ZN9GreyImageC1Ev>  ; GreyImage::GreyImage()
080df199 +0x6bb:  movl   $0x0,0xc(%esp)
080df1a1 +0x6c3:  mov    0x10(%ebp),%eax
080df1a4 +0x6c6:  mov    %eax,0x8(%esp)
080df1a8 +0x6ca:  mov    0xc(%ebp),%eax
080df1ab +0x6cd:  mov    %eax,0x4(%esp)
080df1af +0x6d1:  lea    -0xb4(%ebp),%eax
080df1b5 +0x6d7:  mov    %eax,(%esp)
080df1b8 +0x6da:  call   080df51e <_ZN9GreyImage4initEiih>  ; GreyImage::init(int, int, unsigned char)
080df1bd +0x6df:  mov    0x1c(%ebp),%eax
080df1c0 +0x6e2:  mov    0x28(%eax),%edx
080df1c3 +0x6e5:  mov    0x1c(%ebp),%eax
080df1c6 +0x6e8:  mov    0x24(%eax),%eax
080df1c9 +0x6eb:  mov    0x8(%ebp),%ecx
080df1cc +0x6ee:  add    $0x10,%ecx
080df1cf +0x6f1:  mov    %edx,0x8(%esp)
080df1d3 +0x6f5:  mov    %eax,0x4(%esp)
080df1d7 +0x6f9:  mov    %ecx,(%esp)
080df1da +0x6fc:  call   08ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>  ; RandGen::getFloat(XorRand4*, float, float)
080df1df +0x701:  fstps  -0x98(%ebp)
080df1e5 +0x707:  mov    0x1c(%ebp),%eax
080df1e8 +0x70a:  mov    0x30(%eax),%edx
080df1eb +0x70d:  mov    0x1c(%ebp),%eax
080df1ee +0x710:  mov    0x2c(%eax),%eax
080df1f1 +0x713:  mov    0x8(%ebp),%ecx
080df1f4 +0x716:  add    $0x10,%ecx
080df1f7 +0x719:  mov    %edx,0x8(%esp)
080df1fb +0x71d:  mov    %eax,0x4(%esp)
080df1ff +0x721:  mov    %ecx,(%esp)
080df202 +0x724:  call   08ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>  ; RandGen::getFloat(XorRand4*, float, float)
080df207 +0x729:  fstps  -0x94(%ebp)
080df20d +0x72f:  lea    -0xc0(%ebp),%eax
080df213 +0x735:  mov    %eax,(%esp)
080df216 +0x738:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080df21b +0x73d:  mov    0xc(%ebp),%eax
080df21e +0x740:  movl   $0x0,0x8(%esp)
080df226 +0x748:  mov    %eax,0x4(%esp)
080df22a +0x74c:  lea    -0xc0(%ebp),%eax
080df230 +0x752:  mov    %eax,(%esp)
080df233 +0x755:  call   080df92a <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x146>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x146
080df238 +0x75a:  movl   $0x0,-0x20(%ebp)
080df23f +0x761:  jmp    080df2ab <+0x7cd>
080df241 +0x763:  mov    -0x20(%ebp),%eax
080df244 +0x766:  mov    %eax,0x4(%esp)
080df248 +0x76a:  lea    -0xc0(%ebp),%eax
080df24e +0x770:  mov    %eax,(%esp)
080df251 +0x773:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080df256 +0x778:  mov    %eax,%ebx
080df258 +0x77a:  fildl  -0x20(%ebp)
080df25b +0x77d:  fmuls  -0x98(%ebp)
080df261 +0x783:  fstps  (%esp)
080df264 +0x786:  call   0807d920 <_init+0x218>
080df269 +0x78b:  fmuls  -0x94(%ebp)
080df26f +0x791:  flds   &data#432d85a3(.rodata)
080df275 +0x797:  fmulp  %st,%st(1)
080df277 +0x799:  fnstcw -0xea(%ebp)
080df27d +0x79f:  movzwl -0xea(%ebp),%eax
080df284 +0x7a6:  mov    $0xc,%ah
080df286 +0x7a8:  mov    %ax,-0xec(%ebp)
080df28d +0x7af:  fldcw  -0xec(%ebp)
080df293 +0x7b5:  fistpl -0xf0(%ebp)
080df299 +0x7bb:  fldcw  -0xea(%ebp)
080df29f +0x7c1:  mov    -0xf0(%ebp),%eax
080df2a5 +0x7c7:  mov    %eax,(%ebx)
080df2a7 +0x7c9:  addl   $0x1,-0x20(%ebp)
080df2ab +0x7cd:  mov    -0x20(%ebp),%eax
080df2ae +0x7d0:  cmp    0xc(%ebp),%eax
080df2b1 +0x7d3:  setl   %al
080df2b4 +0x7d6:  test   %al,%al
080df2b6 +0x7d8:  jne    080df241 <+0x763>
080df2b8 +0x7da:  lea    -0xcc(%ebp),%eax
080df2be +0x7e0:  mov    %eax,(%esp)
080df2c1 +0x7e3:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
080df2c6 +0x7e8:  mov    0x10(%ebp),%eax
080df2c9 +0x7eb:  movl   $0x0,0x8(%esp)
080df2d1 +0x7f3:  mov    %eax,0x4(%esp)
080df2d5 +0x7f7:  lea    -0xcc(%ebp),%eax
080df2db +0x7fd:  mov    %eax,(%esp)
080df2de +0x800:  call   080df92a <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x146>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x146
080df2e3 +0x805:  movl   $0x0,-0x1c(%ebp)
080df2ea +0x80c:  jmp    080df356 <+0x878>
080df2ec +0x80e:  mov    -0x1c(%ebp),%eax
080df2ef +0x811:  mov    %eax,0x4(%esp)
080df2f3 +0x815:  lea    -0xcc(%ebp),%eax
080df2f9 +0x81b:  mov    %eax,(%esp)
080df2fc +0x81e:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080df301 +0x823:  mov    %eax,%ebx
080df303 +0x825:  fildl  -0x1c(%ebp)
080df306 +0x828:  fmuls  -0x98(%ebp)
080df30c +0x82e:  fstps  (%esp)
080df30f +0x831:  call   0807df60 <_init+0x858>
080df314 +0x836:  fmuls  -0x94(%ebp)
080df31a +0x83c:  flds   &data#432d85a3(.rodata)
080df320 +0x842:  fmulp  %st,%st(1)
080df322 +0x844:  fnstcw -0xea(%ebp)
080df328 +0x84a:  movzwl -0xea(%ebp),%eax
080df32f +0x851:  mov    $0xc,%ah
080df331 +0x853:  mov    %ax,-0xec(%ebp)
080df338 +0x85a:  fldcw  -0xec(%ebp)
080df33e +0x860:  fistpl -0xf0(%ebp)
080df344 +0x866:  fldcw  -0xea(%ebp)
080df34a +0x86c:  mov    -0xf0(%ebp),%eax
080df350 +0x872:  mov    %eax,(%ebx)
080df352 +0x874:  addl   $0x1,-0x1c(%ebp)
080df356 +0x878:  mov    -0x1c(%ebp),%eax
080df359 +0x87b:  cmp    0x10(%ebp),%eax
080df35c +0x87e:  setl   %al
080df35f +0x881:  test   %al,%al
080df361 +0x883:  jne    080df2ec <+0x80e>
080df363 +0x885:  movl   $0x0,-0x18(%ebp)
080df36a +0x88c:  jmp    080df41a <+0x93c>
080df36f +0x891:  movl   $0x0,-0x14(%ebp)
080df376 +0x898:  jmp    080df405 <+0x927>
080df37b +0x89d:  mov    -0x18(%ebp),%eax
080df37e +0x8a0:  mov    %eax,%ebx
080df380 +0x8a2:  shl    $0x10,%ebx
080df383 +0x8a5:  mov    -0x14(%ebp),%eax
080df386 +0x8a8:  mov    %eax,0x4(%esp)
080df38a +0x8ac:  lea    -0xcc(%ebp),%eax
080df390 +0x8b2:  mov    %eax,(%esp)
080df393 +0x8b5:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080df398 +0x8ba:  mov    (%eax),%eax
080df39a +0x8bc:  lea    (%ebx,%eax,1),%eax
080df39d +0x8bf:  mov    %eax,-0x10(%ebp)
080df3a0 +0x8c2:  mov    -0x14(%ebp),%eax
080df3a3 +0x8c5:  mov    %eax,%ebx
080df3a5 +0x8c7:  shl    $0x10,%ebx
080df3a8 +0x8ca:  mov    -0x18(%ebp),%eax
080df3ab +0x8cd:  mov    %eax,0x4(%esp)
080df3af +0x8d1:  lea    -0xc0(%ebp),%eax
080df3b5 +0x8d7:  mov    %eax,(%esp)
080df3b8 +0x8da:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080df3bd +0x8df:  mov    (%eax),%eax
080df3bf +0x8e1:  lea    (%ebx,%eax,1),%eax
080df3c2 +0x8e4:  mov    %eax,-0xc(%ebp)
080df3c5 +0x8e7:  mov    -0xc(%ebp),%eax
080df3c8 +0x8ea:  mov    %eax,0x8(%esp)
080df3cc +0x8ee:  mov    -0x10(%ebp),%eax
080df3cf +0x8f1:  mov    %eax,0x4(%esp)
080df3d3 +0x8f5:  mov    0x20(%ebp),%eax
080df3d6 +0x8f8:  mov    %eax,(%esp)
080df3d9 +0x8fb:  call   080df676 <_ZN9GreyImage11sampleAlphaEii>  ; GreyImage::sampleAlpha(int, int)
080df3de +0x900:  movzbl %al,%eax
080df3e1 +0x903:  mov    %eax,0xc(%esp)
080df3e5 +0x907:  mov    -0x14(%ebp),%eax
080df3e8 +0x90a:  mov    %eax,0x8(%esp)
080df3ec +0x90e:  mov    -0x18(%ebp),%eax
080df3ef +0x911:  mov    %eax,0x4(%esp)
080df3f3 +0x915:  lea    -0xb4(%ebp),%eax
080df3f9 +0x91b:  mov    %eax,(%esp)
080df3fc +0x91e:  call   080df60e <_ZN9GreyImage8setAlphaEiih>  ; GreyImage::setAlpha(int, int, unsigned char)
080df401 +0x923:  addl   $0x1,-0x14(%ebp)
080df405 +0x927:  mov    -0x14(%ebp),%eax
080df408 +0x92a:  cmp    0x10(%ebp),%eax
080df40b +0x92d:  setl   %al
080df40e +0x930:  test   %al,%al
080df410 +0x932:  jne    080df37b <+0x89d>
080df416 +0x938:  addl   $0x1,-0x18(%ebp)
080df41a +0x93c:  mov    -0x18(%ebp),%eax
080df41d +0x93f:  cmp    0xc(%ebp),%eax
080df420 +0x942:  setl   %al
080df423 +0x945:  test   %al,%al
080df425 +0x947:  jne    080df36f <+0x891>
080df42b +0x94d:  mov    0xc(%ebp),%eax
080df42e +0x950:  imul   0x10(%ebp),%eax
080df432 +0x954:  mov    %eax,%esi
080df434 +0x956:  lea    -0xb4(%ebp),%eax
080df43a +0x95c:  mov    %eax,(%esp)
080df43d +0x95f:  call   080df5e4 <_ZN9GreyImage8getImageEv>  ; GreyImage::getImage()
080df442 +0x964:  mov    %eax,%ebx
080df444 +0x966:  mov    0x20(%ebp),%eax
080df447 +0x969:  mov    %eax,(%esp)
080df44a +0x96c:  call   080df5e4 <_ZN9GreyImage8getImageEv>  ; GreyImage::getImage()
080df44f +0x971:  mov    %esi,0x8(%esp)
080df453 +0x975:  mov    %ebx,0x4(%esp)
080df457 +0x979:  mov    %eax,(%esp)
080df45a +0x97c:  call   0807d8a0 <_init+0x198>
080df45f +0x981:  lea    -0xcc(%ebp),%eax
080df465 +0x987:  mov    %eax,(%esp)
080df468 +0x98a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080df46d +0x98f:  jmp    080df49f <+0x9c1>
080df46f +0x991:  mov    %edx,%ebx
080df471 +0x993:  mov    %eax,%esi
080df473 +0x995:  lea    -0xcc(%ebp),%eax
080df479 +0x99b:  mov    %eax,(%esp)
080df47c +0x99e:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080df481 +0x9a3:  mov    %esi,%eax
080df483 +0x9a5:  mov    %ebx,%edx
080df485 +0x9a7:  jmp    080df487 <+0x9a9>
080df487 +0x9a9:  mov    %edx,%ebx
080df489 +0x9ab:  mov    %eax,%esi
080df48b +0x9ad:  lea    -0xc0(%ebp),%eax
080df491 +0x9b3:  mov    %eax,(%esp)
080df494 +0x9b6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080df499 +0x9bb:  mov    %esi,%eax
080df49b +0x9bd:  mov    %ebx,%edx
080df49d +0x9bf:  jmp    080df4af <+0x9d1>
080df49f +0x9c1:  lea    -0xc0(%ebp),%eax
080df4a5 +0x9c7:  mov    %eax,(%esp)
080df4a8 +0x9ca:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
080df4ad +0x9cf:  jmp    080df4cd <+0x9ef>
080df4af +0x9d1:  mov    %edx,%ebx
080df4b1 +0x9d3:  mov    %eax,%esi
080df4b3 +0x9d5:  lea    -0xb4(%ebp),%eax
080df4b9 +0x9db:  mov    %eax,(%esp)
080df4bc +0x9de:  call   080df50a <_ZN9GreyImageD1Ev>  ; GreyImage::~GreyImage()
080df4c1 +0x9e3:  mov    %esi,%eax
080df4c3 +0x9e5:  mov    %ebx,%edx
080df4c5 +0x9e7:  mov    %eax,(%esp)
080df4c8 +0x9ea:  call   08ae3750 <_Unwind_Resume>
080df4cd +0x9ef:  lea    -0xb4(%ebp),%eax
080df4d3 +0x9f5:  mov    %eax,(%esp)
080df4d6 +0x9f8:  call   080df50a <_ZN9GreyImageD1Ev>  ; GreyImage::~GreyImage()
080df4db +0x9fd:  jmp    080df4de <+0xa00>
080df4dd +0x9ff:  nop
080df4de +0xa00:  add    $0x120,%esp
080df4e4 +0xa06:  pop    %ebx
080df4e5 +0xa07:  pop    %esi
080df4e6 +0xa08:  pop    %ebp
080df4e7 +0xa09:  ret
```

## 反编译 C

```c
// CaptchaGen::generateImage @ 0x80deade

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::generateImage(int, int, unsigned short const*, int, CaptchaGen::ImageOption const&,
   GreyImage*) */

void __thiscall
CaptchaGen::generateImage
          (CaptchaGen *this,int param_1,int param_2,ushort *param_3,int param_4,ImageOption *param_5
          ,GreyImage *param_6)

{
  char cVar1;
  uchar uVar2;
  uint32 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *__src;
  void *__dest;
  int iVar7;
  float fVar8;
  FT_Matrix local_e0;
  vector<int,std::allocator<int>> local_d0 [12];
  vector<int,std::allocator<int>> local_c4 [12];
  GreyImage local_b8 [12];
  int local_ac;
  FT_Error local_a8;
  int local_a4;
  int local_a0;
  float32 local_9c;
  float32 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  FT_Face_conflict local_60;
  float32 local_5c;
  float32 local_58;
  float32 local_54;
  float32 local_50;
  float local_4c;
  float local_48;
  FT_UInt local_44;
  uint local_40;
  FT_Bitmap *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  cVar1 = std::vector<void*,std::allocator<void*>>::empty();
  if (cVar1 == '\0') {
    GreyImage::init(param_6,param_1,param_2,'\0');
    for (local_94 = 0; local_94 < *(int *)param_5; local_94 = local_94 + 1) {
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_90 = uVar3 % (param_1 - 10U) + 5;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_8c = uVar3 % (param_2 - 10U) + 5;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_88 = uVar3 % *(uint *)(param_5 + 4) + 1;
      for (local_84 = -local_88; local_84 <= local_88; local_84 = local_84 + 1) {
        for (local_80 = -local_88; local_80 <= local_88; local_80 = local_80 + 1) {
          local_7c = ((local_84 * local_84 + local_80 * local_80) * 0xff) / (local_88 * local_88);
          if (local_7c < 0xff) {
            GreyImage::setAlphaAsMax
                      (param_6,local_90 + local_84,local_8c + local_80,
                       (uchar)((0xff - local_7c) / local_88));
          }
        }
      }
    }
    for (local_78 = 0; local_78 < *(int *)(param_5 + 8); local_78 = local_78 + 1) {
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_74 = uVar3 % 10 + 1;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_70 = uVar3 % (uint)param_2;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_6c = (param_1 - uVar3 % 10) + -2;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_68 = uVar3 % (uint)param_2;
      drawLine(param_6,local_74,local_70,local_6c,local_68);
    }
    local_a4 = 10;
    local_a0 = 2;
    for (local_64 = 0; local_64 < param_4; local_64 = local_64 + 1) {
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      uVar4 = std::vector<void*,std::allocator<void*>>::size
                        ((vector<void*,std::allocator<void*>> *)(this + 4));
      puVar5 = (undefined4 *)
               std::vector<void*,std::allocator<void*>>::operator[]
                         ((vector<void*,std::allocator<void*>> *)(this + 4),uVar3 % uVar4);
      local_60 = (FT_Face_conflict)*puVar5;
      local_5c = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0xc),
                                   *(float32 *)(param_5 + 0x10));
      local_58 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0xc),
                                   *(float32 *)(param_5 + 0x10));
      local_54 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x14),
                                   *(float32 *)(param_5 + 0x18));
      local_50 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x14),
                                   *(float32 *)(param_5 + 0x18));
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      if ((uVar3 & 2) == 0) {
        local_4c = -1.0;
      }
      else {
        local_4c = 1.0;
      }
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      if ((uVar3 & 2) == 0) {
        local_48 = -1.0;
      }
      else {
        local_48 = 1.0;
      }
      local_e0.xx = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_5c);
      local_e0.xy = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_54 * local_4c);
      local_e0.yx = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_50 * local_48);
      local_e0.yy = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_58);
      FT_Set_Transform(local_60,&local_e0,(FT_Vector *)0x0);
      local_44 = FT_Get_Char_Index(local_60,(uint)param_3[local_64]);
      local_a8 = FT_Load_Glyph(local_60,local_44,0);
      local_a8 = FT_Render_Glyph(local_60->glyph,FT_RENDER_MODE_NORMAL);
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_40 = uVar3 % *(uint *)(param_5 + 0x1c);
      local_3c = &local_60->glyph->bitmap;
      for (local_38 = 0; local_38 < local_3c->rows; local_38 = local_38 + 1) {
        local_34 = local_a0 + local_38 + local_40;
        if ((-1 < local_34) && (local_34 < param_2)) {
          local_ac = param_1 - local_a4;
          piVar6 = std::min<int>(&local_3c->width,&local_ac);
          local_30 = *piVar6;
          for (local_2c = 0; local_2c < local_30; local_2c = local_2c + 1) {
            local_28 = (uint)local_3c->buffer[local_3c->pitch * local_38 + local_2c];
            if (local_28 != 0) {
              GreyImage::setAlphaAsMax
                        (param_6,local_a4 + local_2c,local_34,
                         local_3c->buffer[local_3c->pitch * local_38 + local_2c]);
            }
          }
        }
      }
      local_a4 = local_a4 + (int)ROUND(*(float *)(param_5 + 0x20) * (float)local_3c->width);
    }
    GreyImage::GreyImage(local_b8);
                    /* try { // try from 080df1b8 to 080df21a has its CatchHandler @ 080df4af */
    GreyImage::init(local_b8,param_1,param_2,'\0');
    local_9c = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x24),
                                 *(float32 *)(param_5 + 0x28));
    local_98 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x2c),
                                 *(float32 *)(param_5 + 0x30));
    std::vector<int,std::allocator<int>>::vector(local_c4);
                    /* try { // try from 080df233 to 080df2c5 has its CatchHandler @ 080df487 */
    std::vector<int,std::allocator<int>>::resize((uint)local_c4,param_1);
    for (local_24 = 0; (int)local_24 < param_1; local_24 = local_24 + 1) {
      piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c4,local_24);
      fVar8 = cosf((float)(int)local_24 * (float)local_9c);
      *piVar6 = (int)ROUND(_DAT_08b2cab0 * fVar8 * (float)local_98);
    }
    std::vector<int,std::allocator<int>>::vector(local_d0);
                    /* try { // try from 080df2de to 080df2e2 has its CatchHandler @ 080df46f */
    std::vector<int,std::allocator<int>>::resize((uint)local_d0,param_2);
    for (local_20 = 0; (int)local_20 < param_2; local_20 = local_20 + 1) {
      piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_d0,local_20);
      fVar8 = sinf((float)(int)local_20 * (float)local_9c);
      *piVar6 = (int)ROUND(_DAT_08b2cab0 * fVar8 * (float)local_98);
    }
    for (local_1c = 0; (int)local_1c < param_1; local_1c = local_1c + 1) {
      for (local_18 = 0; (int)local_18 < param_2; local_18 = local_18 + 1) {
        iVar7 = local_1c * 0x10000;
        piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_d0,local_18);
        local_14 = iVar7 + *piVar6;
        iVar7 = local_18 * 0x10000;
        piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c4,local_1c);
        local_10 = iVar7 + *piVar6;
        uVar2 = GreyImage::sampleAlpha(param_6,local_14,local_10);
        GreyImage::setAlpha(local_b8,local_1c,local_18,uVar2);
      }
    }
    __src = (void *)GreyImage::getImage(local_b8);
    __dest = (void *)GreyImage::getImage(param_6);
    memcpy(__dest,__src,param_1 * param_2);
                    /* try { // try from 080df468 to 080df46c has its CatchHandler @ 080df487 */
    std::vector<int,std::allocator<int>>::~vector(local_d0);
                    /* try { // try from 080df4a8 to 080df4ac has its CatchHandler @ 080df4af */
    std::vector<int,std::allocator<int>>::~vector(local_c4);
    GreyImage::~GreyImage(local_b8);
  }
  return;
}
```
