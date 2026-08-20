# Transform

`_ZN8TaoCrypt3MD49TransformEv`

`TaoCrypt::MD4::Transform()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::MD4` | `0x087659d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087659d0  _ZN8TaoCrypt3MD49TransformEv
#           TaoCrypt::MD4::Transform()
# range [0x087659d0, 0x08765f4a]
087659d0 +0x000:  push   %ebp
087659d1 +0x001:  mov    %esp,%ebp
087659d3 +0x003:  push   %edi
087659d4 +0x004:  push   %esi
087659d5 +0x005:  sub    $0x1c,%esp
087659d8 +0x008:  mov    0x8(%ebp),%eax
087659db +0x00b:  mov    0x1c(%eax),%esi
087659de +0x00e:  mov    0x18(%eax),%edx
087659e1 +0x011:  mov    0x30(%eax),%edi
087659e4 +0x014:  add    0x10(%eax),%edi
087659e7 +0x017:  mov    %esi,%ecx
087659e9 +0x019:  xor    %edx,%ecx
087659eb +0x01b:  and    0x14(%eax),%ecx
087659ee +0x01e:  xor    %esi,%ecx
087659f0 +0x020:  add    %edi,%ecx
087659f2 +0x022:  mov    0x14(%eax),%edi
087659f5 +0x025:  ror    $0x1d,%ecx
087659f8 +0x028:  add    0x34(%eax),%esi
087659fb +0x02b:  xor    %edx,%edi
087659fd +0x02d:  and    %ecx,%edi
087659ff +0x02f:  xor    %edx,%edi
08765a01 +0x031:  add    %esi,%edi
08765a03 +0x033:  mov    0x14(%eax),%esi
08765a06 +0x036:  ror    $0x19,%edi
08765a09 +0x039:  add    0x38(%eax),%edx
08765a0c +0x03c:  xor    %ecx,%esi
08765a0e +0x03e:  and    %edi,%esi
08765a10 +0x040:  xor    0x14(%eax),%esi
08765a13 +0x043:  add    %edx,%esi
08765a15 +0x045:  mov    0x14(%eax),%edx
08765a18 +0x048:  add    0x3c(%eax),%edx
08765a1b +0x04b:  ror    $0x15,%esi
08765a1e +0x04e:  mov    %edx,-0xc(%ebp)
08765a21 +0x051:  mov    %edi,%edx
08765a23 +0x053:  xor    %ecx,%edx
08765a25 +0x055:  and    %esi,%edx
08765a27 +0x057:  xor    %ecx,%edx
08765a29 +0x059:  add    -0xc(%ebp),%edx
08765a2c +0x05c:  ror    $0xd,%edx
08765a2f +0x05f:  mov    %edx,-0x10(%ebp)
08765a32 +0x062:  mov    0x40(%eax),%edx
08765a35 +0x065:  lea    (%ecx,%edx,1),%edx
08765a38 +0x068:  mov    %esi,%ecx
08765a3a +0x06a:  xor    %edi,%ecx
08765a3c +0x06c:  and    -0x10(%ebp),%ecx
08765a3f +0x06f:  xor    %edi,%ecx
08765a41 +0x071:  add    %edx,%ecx
08765a43 +0x073:  mov    0x44(%eax),%edx
08765a46 +0x076:  ror    $0x1d,%ecx
08765a49 +0x079:  lea    (%edi,%edx,1),%edx
08765a4c +0x07c:  mov    -0x10(%ebp),%edi
08765a4f +0x07f:  xor    %esi,%edi
08765a51 +0x081:  and    %ecx,%edi
08765a53 +0x083:  xor    %esi,%edi
08765a55 +0x085:  add    %edx,%edi
08765a57 +0x087:  mov    0x48(%eax),%edx
08765a5a +0x08a:  ror    $0x19,%edi
08765a5d +0x08d:  lea    (%esi,%edx,1),%edx
08765a60 +0x090:  mov    -0x10(%ebp),%esi
08765a63 +0x093:  xor    %ecx,%esi
08765a65 +0x095:  and    %edi,%esi
08765a67 +0x097:  xor    -0x10(%ebp),%esi
08765a6a +0x09a:  add    %edx,%esi
08765a6c +0x09c:  mov    -0x10(%ebp),%edx
08765a6f +0x09f:  add    0x4c(%eax),%edx
08765a72 +0x0a2:  ror    $0x15,%esi
08765a75 +0x0a5:  mov    %edx,-0xc(%ebp)
08765a78 +0x0a8:  mov    %edi,%edx
08765a7a +0x0aa:  xor    %ecx,%edx
08765a7c +0x0ac:  and    %esi,%edx
08765a7e +0x0ae:  xor    %ecx,%edx
08765a80 +0x0b0:  add    -0xc(%ebp),%edx
08765a83 +0x0b3:  ror    $0xd,%edx
08765a86 +0x0b6:  mov    %edx,-0x10(%ebp)
08765a89 +0x0b9:  mov    0x50(%eax),%edx
08765a8c +0x0bc:  lea    (%ecx,%edx,1),%edx
08765a8f +0x0bf:  mov    %esi,%ecx
08765a91 +0x0c1:  xor    %edi,%ecx
08765a93 +0x0c3:  and    -0x10(%ebp),%ecx
08765a96 +0x0c6:  xor    %edi,%ecx
08765a98 +0x0c8:  add    %edx,%ecx
08765a9a +0x0ca:  mov    0x54(%eax),%edx
08765a9d +0x0cd:  ror    $0x1d,%ecx
08765aa0 +0x0d0:  lea    (%edi,%edx,1),%edx
08765aa3 +0x0d3:  mov    -0x10(%ebp),%edi
08765aa6 +0x0d6:  xor    %esi,%edi
08765aa8 +0x0d8:  and    %ecx,%edi
08765aaa +0x0da:  xor    %esi,%edi
08765aac +0x0dc:  add    %edx,%edi
08765aae +0x0de:  mov    0x58(%eax),%edx
08765ab1 +0x0e1:  ror    $0x19,%edi
08765ab4 +0x0e4:  lea    (%esi,%edx,1),%edx
08765ab7 +0x0e7:  mov    -0x10(%ebp),%esi
08765aba +0x0ea:  xor    %ecx,%esi
08765abc +0x0ec:  and    %edi,%esi
08765abe +0x0ee:  xor    -0x10(%ebp),%esi
08765ac1 +0x0f1:  add    %edx,%esi
08765ac3 +0x0f3:  mov    -0x10(%ebp),%edx
08765ac6 +0x0f6:  add    0x5c(%eax),%edx
08765ac9 +0x0f9:  ror    $0x15,%esi
08765acc +0x0fc:  mov    %edx,-0xc(%ebp)
08765acf +0x0ff:  mov    %edi,%edx
08765ad1 +0x101:  xor    %ecx,%edx
08765ad3 +0x103:  and    %esi,%edx
08765ad5 +0x105:  xor    %ecx,%edx
08765ad7 +0x107:  add    -0xc(%ebp),%edx
08765ada +0x10a:  ror    $0xd,%edx
08765add +0x10d:  mov    %edx,-0x10(%ebp)
08765ae0 +0x110:  mov    0x60(%eax),%edx
08765ae3 +0x113:  lea    (%ecx,%edx,1),%edx
08765ae6 +0x116:  mov    %esi,%ecx
08765ae8 +0x118:  xor    %edi,%ecx
08765aea +0x11a:  and    -0x10(%ebp),%ecx
08765aed +0x11d:  xor    %edi,%ecx
08765aef +0x11f:  add    %edx,%ecx
08765af1 +0x121:  mov    0x64(%eax),%edx
08765af4 +0x124:  ror    $0x1d,%ecx
08765af7 +0x127:  mov    %ecx,-0x14(%ebp)
08765afa +0x12a:  lea    (%edi,%edx,1),%edx
08765afd +0x12d:  mov    -0x10(%ebp),%edi
08765b00 +0x130:  xor    %esi,%edi
08765b02 +0x132:  and    %ecx,%edi
08765b04 +0x134:  xor    %esi,%edi
08765b06 +0x136:  add    %edx,%edi
08765b08 +0x138:  mov    0x68(%eax),%edx
08765b0b +0x13b:  ror    $0x19,%edi
08765b0e +0x13e:  mov    %edi,-0x18(%ebp)
08765b11 +0x141:  lea    (%esi,%edx,1),%edx
08765b14 +0x144:  mov    -0x10(%ebp),%esi
08765b17 +0x147:  xor    %ecx,%esi
08765b19 +0x149:  mov    -0x10(%ebp),%ecx
08765b1c +0x14c:  and    %edi,%esi
08765b1e +0x14e:  xor    -0x10(%ebp),%esi
08765b21 +0x151:  add    0x6c(%eax),%ecx
08765b24 +0x154:  add    %edx,%esi
08765b26 +0x156:  mov    -0x14(%ebp),%edx
08765b29 +0x159:  ror    $0x15,%esi
08765b2c +0x15c:  xor    %edi,%edx
08765b2e +0x15e:  mov    -0x14(%ebp),%edi
08765b31 +0x161:  and    %esi,%edx
08765b33 +0x163:  xor    -0x14(%ebp),%edx
08765b36 +0x166:  add    %ecx,%edx
08765b38 +0x168:  mov    0x30(%eax),%ecx
08765b3b +0x16b:  ror    $0xd,%edx
08765b3e +0x16e:  mov    %edx,-0xc(%ebp)
08765b41 +0x171:  mov    -0x18(%ebp),%edx
08765b44 +0x174:  lea    0x5a827999(%edi,%ecx,1),%ecx
08765b4b +0x17b:  mov    -0x18(%ebp),%edi
08765b4e +0x17e:  or     %esi,%edx
08765b50 +0x180:  and    -0xc(%ebp),%edx
08765b53 +0x183:  and    %esi,%edi
08765b55 +0x185:  or     %edi,%edx
08765b57 +0x187:  mov    0x40(%eax),%edi
08765b5a +0x18a:  add    %ecx,%edx
08765b5c +0x18c:  mov    -0xc(%ebp),%ecx
08765b5f +0x18f:  ror    $0x1d,%edx
08765b62 +0x192:  mov    %edx,-0x1c(%ebp)
08765b65 +0x195:  mov    -0x18(%ebp),%edx
08765b68 +0x198:  and    %esi,%ecx
08765b6a +0x19a:  lea    0x5a827999(%edx,%edi,1),%edi
08765b71 +0x1a1:  mov    -0xc(%ebp),%edx
08765b74 +0x1a4:  or     %esi,%edx
08765b76 +0x1a6:  and    -0x1c(%ebp),%edx
08765b79 +0x1a9:  or     %ecx,%edx
08765b7b +0x1ab:  mov    -0xc(%ebp),%ecx
08765b7e +0x1ae:  lea    (%edx,%edi,1),%edi
08765b81 +0x1b1:  mov    0x50(%eax),%edx
08765b84 +0x1b4:  ror    $0x1b,%edi
08765b87 +0x1b7:  lea    0x5a827999(%esi,%edx,1),%esi
08765b8e +0x1be:  mov    0x60(%eax),%edx
08765b91 +0x1c1:  mov    %esi,-0x10(%ebp)
08765b94 +0x1c4:  mov    -0xc(%ebp),%esi
08765b97 +0x1c7:  or     -0x1c(%ebp),%esi
08765b9a +0x1ca:  and    -0x1c(%ebp),%ecx
08765b9d +0x1cd:  and    %edi,%esi
08765b9f +0x1cf:  or     %ecx,%esi
08765ba1 +0x1d1:  mov    -0xc(%ebp),%ecx
08765ba4 +0x1d4:  add    -0x10(%ebp),%esi
08765ba7 +0x1d7:  lea    0x5a827999(%ecx,%edx,1),%edx
08765bae +0x1de:  mov    %edx,-0x10(%ebp)
08765bb1 +0x1e1:  mov    -0x1c(%ebp),%ecx
08765bb4 +0x1e4:  ror    $0x17,%esi
08765bb7 +0x1e7:  mov    -0x1c(%ebp),%edx
08765bba +0x1ea:  or     %edi,%ecx
08765bbc +0x1ec:  and    %edi,%edx
08765bbe +0x1ee:  and    %esi,%ecx
08765bc0 +0x1f0:  or     %edx,%ecx
08765bc2 +0x1f2:  mov    -0x1c(%ebp),%edx
08765bc5 +0x1f5:  add    -0x10(%ebp),%ecx
08765bc8 +0x1f8:  ror    $0x13,%ecx
08765bcb +0x1fb:  mov    %ecx,-0xc(%ebp)
08765bce +0x1fe:  mov    0x34(%eax),%ecx
08765bd1 +0x201:  lea    0x5a827999(%edx,%ecx,1),%ecx
08765bd8 +0x208:  mov    %esi,%edx
08765bda +0x20a:  mov    %ecx,-0x10(%ebp)
08765bdd +0x20d:  mov    %esi,%ecx
08765bdf +0x20f:  and    %edi,%edx
08765be1 +0x211:  or     %edi,%ecx
08765be3 +0x213:  and    -0xc(%ebp),%ecx
08765be6 +0x216:  or     %edx,%ecx
08765be8 +0x218:  mov    -0xc(%ebp),%edx
08765beb +0x21b:  add    -0x10(%ebp),%ecx
08765bee +0x21e:  ror    $0x1d,%ecx
08765bf1 +0x221:  and    %esi,%edx
08765bf3 +0x223:  mov    %ecx,-0x18(%ebp)
08765bf6 +0x226:  mov    0x44(%eax),%ecx
08765bf9 +0x229:  lea    0x5a827999(%edi,%ecx,1),%edi
08765c00 +0x230:  mov    0x54(%eax),%ecx
08765c03 +0x233:  mov    %edi,-0x10(%ebp)
08765c06 +0x236:  mov    -0xc(%ebp),%edi
08765c09 +0x239:  or     %esi,%edi
08765c0b +0x23b:  and    -0x18(%ebp),%edi
08765c0e +0x23e:  lea    0x5a827999(%esi,%ecx,1),%esi
08765c15 +0x245:  mov    0x64(%eax),%ecx
08765c18 +0x248:  or     %edx,%edi
08765c1a +0x24a:  mov    -0xc(%ebp),%edx
08765c1d +0x24d:  add    -0x10(%ebp),%edi
08765c20 +0x250:  mov    %esi,-0x10(%ebp)
08765c23 +0x253:  mov    -0xc(%ebp),%esi
08765c26 +0x256:  or     -0x18(%ebp),%esi
08765c29 +0x259:  and    -0x18(%ebp),%edx
08765c2c +0x25c:  ror    $0x1b,%edi
08765c2f +0x25f:  and    %edi,%esi
08765c31 +0x261:  or     %edx,%esi
08765c33 +0x263:  mov    -0xc(%ebp),%edx
08765c36 +0x266:  add    -0x10(%ebp),%esi
08765c39 +0x269:  lea    0x5a827999(%edx,%ecx,1),%ecx
08765c40 +0x270:  mov    -0x18(%ebp),%edx
08765c43 +0x273:  mov    %ecx,-0x10(%ebp)
08765c46 +0x276:  mov    -0x18(%ebp),%ecx
08765c49 +0x279:  ror    $0x17,%esi
08765c4c +0x27c:  and    %edi,%edx
08765c4e +0x27e:  or     %edi,%ecx
08765c50 +0x280:  and    %esi,%ecx
08765c52 +0x282:  or     %edx,%ecx
08765c54 +0x284:  mov    -0x18(%ebp),%edx
08765c57 +0x287:  add    -0x10(%ebp),%ecx
08765c5a +0x28a:  ror    $0x13,%ecx
08765c5d +0x28d:  mov    %ecx,-0xc(%ebp)
08765c60 +0x290:  mov    0x38(%eax),%ecx
08765c63 +0x293:  lea    0x5a827999(%edx,%ecx,1),%ecx
08765c6a +0x29a:  mov    %esi,%edx
08765c6c +0x29c:  mov    %ecx,-0x10(%ebp)
08765c6f +0x29f:  mov    %esi,%ecx
08765c71 +0x2a1:  and    %edi,%edx
08765c73 +0x2a3:  or     %edi,%ecx
08765c75 +0x2a5:  and    -0xc(%ebp),%ecx
08765c78 +0x2a8:  or     %edx,%ecx
08765c7a +0x2aa:  add    -0x10(%ebp),%ecx
08765c7d +0x2ad:  ror    $0x1d,%ecx
08765c80 +0x2b0:  mov    %ecx,-0x18(%ebp)
08765c83 +0x2b3:  mov    0x48(%eax),%ecx
08765c86 +0x2b6:  mov    -0xc(%ebp),%edx
08765c89 +0x2b9:  lea    0x5a827999(%edi,%ecx,1),%edi
08765c90 +0x2c0:  mov    0x58(%eax),%ecx
08765c93 +0x2c3:  mov    %edi,-0x10(%ebp)
08765c96 +0x2c6:  mov    -0xc(%ebp),%edi
08765c99 +0x2c9:  and    %esi,%edx
08765c9b +0x2cb:  or     %esi,%edi
08765c9d +0x2cd:  and    -0x18(%ebp),%edi
08765ca0 +0x2d0:  lea    0x5a827999(%esi,%ecx,1),%esi
08765ca7 +0x2d7:  mov    0x68(%eax),%ecx
08765caa +0x2da:  or     %edx,%edi
08765cac +0x2dc:  mov    -0xc(%ebp),%edx
08765caf +0x2df:  add    -0x10(%ebp),%edi
08765cb2 +0x2e2:  mov    %esi,-0x10(%ebp)
08765cb5 +0x2e5:  mov    -0xc(%ebp),%esi
08765cb8 +0x2e8:  or     -0x18(%ebp),%esi
08765cbb +0x2eb:  and    -0x18(%ebp),%edx
08765cbe +0x2ee:  ror    $0x1b,%edi
08765cc1 +0x2f1:  and    %edi,%esi
08765cc3 +0x2f3:  or     %edx,%esi
08765cc5 +0x2f5:  mov    -0xc(%ebp),%edx
08765cc8 +0x2f8:  add    -0x10(%ebp),%esi
08765ccb +0x2fb:  lea    0x5a827999(%edx,%ecx,1),%ecx
08765cd2 +0x302:  mov    -0x18(%ebp),%edx
08765cd5 +0x305:  mov    %ecx,-0x10(%ebp)
08765cd8 +0x308:  mov    -0x18(%ebp),%ecx
08765cdb +0x30b:  ror    $0x17,%esi
08765cde +0x30e:  and    %edi,%edx
08765ce0 +0x310:  or     %edi,%ecx
08765ce2 +0x312:  and    %esi,%ecx
08765ce4 +0x314:  or     %edx,%ecx
08765ce6 +0x316:  mov    -0x18(%ebp),%edx
08765ce9 +0x319:  add    -0x10(%ebp),%ecx
08765cec +0x31c:  ror    $0x13,%ecx
08765cef +0x31f:  mov    %ecx,-0xc(%ebp)
08765cf2 +0x322:  mov    0x3c(%eax),%ecx
08765cf5 +0x325:  lea    0x5a827999(%edx,%ecx,1),%ecx
08765cfc +0x32c:  mov    %esi,%edx
08765cfe +0x32e:  mov    %ecx,-0x10(%ebp)
08765d01 +0x331:  mov    %esi,%ecx
08765d03 +0x333:  and    %edi,%edx
08765d05 +0x335:  or     %edi,%ecx
08765d07 +0x337:  and    -0xc(%ebp),%ecx
08765d0a +0x33a:  or     %edx,%ecx
08765d0c +0x33c:  mov    0x4c(%eax),%edx
08765d0f +0x33f:  add    -0x10(%ebp),%ecx
08765d12 +0x342:  lea    0x5a827999(%edi,%edx,1),%edi
08765d19 +0x349:  mov    -0xc(%ebp),%edx
08765d1c +0x34c:  mov    %edi,-0x10(%ebp)
08765d1f +0x34f:  mov    -0xc(%ebp),%edi
08765d22 +0x352:  ror    $0x1d,%ecx
08765d25 +0x355:  or     %esi,%edi
08765d27 +0x357:  and    %esi,%edx
08765d29 +0x359:  and    %ecx,%edi
08765d2b +0x35b:  or     %edx,%edi
08765d2d +0x35d:  mov    0x5c(%eax),%edx
08765d30 +0x360:  add    -0x10(%ebp),%edi
08765d33 +0x363:  lea    0x5a827999(%esi,%edx,1),%esi
08765d3a +0x36a:  mov    -0xc(%ebp),%edx
08765d3d +0x36d:  mov    %esi,-0x10(%ebp)
08765d40 +0x370:  mov    -0xc(%ebp),%esi
08765d43 +0x373:  ror    $0x1b,%edi
08765d46 +0x376:  and    %ecx,%edx
08765d48 +0x378:  or     %ecx,%esi
08765d4a +0x37a:  and    %edi,%esi
08765d4c +0x37c:  or     %edx,%esi
08765d4e +0x37e:  add    -0x10(%ebp),%esi
08765d51 +0x381:  ror    $0x17,%esi
08765d54 +0x384:  mov    %esi,-0x18(%ebp)
08765d57 +0x387:  mov    -0xc(%ebp),%edx
08765d5a +0x38a:  mov    0x6c(%eax),%esi
08765d5d +0x38d:  lea    0x5a827999(%edx,%esi,1),%esi
08765d64 +0x394:  mov    %edi,%edx
08765d66 +0x396:  mov    %esi,-0x10(%ebp)
08765d69 +0x399:  mov    %edi,%esi
08765d6b +0x39b:  and    %ecx,%edx
08765d6d +0x39d:  or     %ecx,%esi
08765d6f +0x39f:  and    -0x18(%ebp),%esi
08765d72 +0x3a2:  or     %edx,%esi
08765d74 +0x3a4:  add    -0x10(%ebp),%esi
08765d77 +0x3a7:  ror    $0x13,%esi
08765d7a +0x3aa:  mov    %esi,-0xc(%ebp)
08765d7d +0x3ad:  mov    0x30(%eax),%esi
08765d80 +0x3b0:  lea    0x6ed9eba1(%ecx,%esi,1),%edx
08765d87 +0x3b7:  mov    -0x18(%ebp),%ecx
08765d8a +0x3ba:  mov    0x40(%eax),%esi
08765d8d +0x3bd:  xor    %edi,%ecx
08765d8f +0x3bf:  xor    -0xc(%ebp),%ecx
08765d92 +0x3c2:  add    %edx,%ecx
08765d94 +0x3c4:  ror    $0x1d,%ecx
08765d97 +0x3c7:  mov    %ecx,-0x10(%ebp)
08765d9a +0x3ca:  mov    0x50(%eax),%ecx
08765d9d +0x3cd:  lea    0x6ed9eba1(%edi,%ecx,1),%edx
08765da4 +0x3d4:  mov    -0xc(%ebp),%edi
08765da7 +0x3d7:  xor    -0x18(%ebp),%edi
08765daa +0x3da:  xor    -0x10(%ebp),%edi
08765dad +0x3dd:  add    %edx,%edi
08765daf +0x3df:  mov    -0x18(%ebp),%edx
08765db2 +0x3e2:  ror    $0x17,%edi
08765db5 +0x3e5:  lea    0x6ed9eba1(%edx,%esi,1),%ecx
08765dbc +0x3ec:  mov    -0xc(%ebp),%esi
08765dbf +0x3ef:  xor    -0x10(%ebp),%esi
08765dc2 +0x3f2:  mov    -0xc(%ebp),%edx
08765dc5 +0x3f5:  xor    %edi,%esi
08765dc7 +0x3f7:  add    %ecx,%esi
08765dc9 +0x3f9:  mov    0x60(%eax),%ecx
08765dcc +0x3fc:  ror    $0x15,%esi
08765dcf +0x3ff:  lea    0x6ed9eba1(%edx,%ecx,1),%ecx
08765dd6 +0x406:  mov    -0x10(%ebp),%edx
08765dd9 +0x409:  xor    %edi,%edx
08765ddb +0x40b:  xor    %esi,%edx
08765ddd +0x40d:  add    %ecx,%edx
08765ddf +0x40f:  mov    -0x10(%ebp),%ecx
08765de2 +0x412:  ror    $0x11,%edx
08765de5 +0x415:  mov    %edx,-0xc(%ebp)
08765de8 +0x418:  mov    0x38(%eax),%edx
08765deb +0x41b:  lea    0x6ed9eba1(%ecx,%edx,1),%edx
08765df2 +0x422:  mov    %esi,%ecx
08765df4 +0x424:  xor    %edi,%ecx
08765df6 +0x426:  xor    -0xc(%ebp),%ecx
08765df9 +0x429:  add    %edx,%ecx
08765dfb +0x42b:  mov    0x48(%eax),%edx
08765dfe +0x42e:  ror    $0x1d,%ecx
08765e01 +0x431:  mov    %ecx,-0x10(%ebp)
08765e04 +0x434:  mov    0x58(%eax),%ecx
08765e07 +0x437:  lea    0x6ed9eba1(%edi,%ecx,1),%edi
08765e0e +0x43e:  mov    0x68(%eax),%ecx
08765e11 +0x441:  mov    %edi,-0x1c(%ebp)
08765e14 +0x444:  mov    -0xc(%ebp),%edi
08765e17 +0x447:  xor    %esi,%edi
08765e19 +0x449:  lea    0x6ed9eba1(%esi,%edx,1),%esi
08765e20 +0x450:  mov    -0xc(%ebp),%edx
08765e23 +0x453:  xor    -0x10(%ebp),%edi
08765e26 +0x456:  add    -0x1c(%ebp),%edi
08765e29 +0x459:  mov    %esi,-0x1c(%ebp)
08765e2c +0x45c:  mov    -0xc(%ebp),%esi
08765e2f +0x45f:  xor    -0x10(%ebp),%esi
08765e32 +0x462:  ror    $0x17,%edi
08765e35 +0x465:  lea    0x6ed9eba1(%edx,%ecx,1),%ecx
08765e3c +0x46c:  mov    -0x10(%ebp),%edx
08765e3f +0x46f:  xor    %edi,%esi
08765e41 +0x471:  add    -0x1c(%ebp),%esi
08765e44 +0x474:  xor    %edi,%edx
08765e46 +0x476:  ror    $0x15,%esi
08765e49 +0x479:  xor    %esi,%edx
08765e4b +0x47b:  add    %ecx,%edx
08765e4d +0x47d:  ror    $0x11,%edx
08765e50 +0x480:  mov    %edx,-0xc(%ebp)
08765e53 +0x483:  mov    -0x10(%ebp),%ecx
08765e56 +0x486:  mov    0x34(%eax),%edx
08765e59 +0x489:  lea    0x6ed9eba1(%ecx,%edx,1),%edx
08765e60 +0x490:  mov    %esi,%ecx
08765e62 +0x492:  xor    %edi,%ecx
08765e64 +0x494:  xor    -0xc(%ebp),%ecx
08765e67 +0x497:  add    %edx,%ecx
08765e69 +0x499:  mov    0x44(%eax),%edx
08765e6c +0x49c:  ror    $0x1d,%ecx
08765e6f +0x49f:  mov    %ecx,-0x10(%ebp)
08765e72 +0x4a2:  mov    0x54(%eax),%ecx
08765e75 +0x4a5:  lea    0x6ed9eba1(%edi,%ecx,1),%edi
08765e7c +0x4ac:  mov    0x64(%eax),%ecx
08765e7f +0x4af:  mov    %edi,-0x18(%ebp)
08765e82 +0x4b2:  mov    -0xc(%ebp),%edi
08765e85 +0x4b5:  xor    %esi,%edi
08765e87 +0x4b7:  lea    0x6ed9eba1(%esi,%edx,1),%esi
08765e8e +0x4be:  mov    -0xc(%ebp),%edx
08765e91 +0x4c1:  xor    -0x10(%ebp),%edi
08765e94 +0x4c4:  add    -0x18(%ebp),%edi
08765e97 +0x4c7:  mov    %esi,-0x18(%ebp)
08765e9a +0x4ca:  mov    -0xc(%ebp),%esi
08765e9d +0x4cd:  xor    -0x10(%ebp),%esi
08765ea0 +0x4d0:  ror    $0x17,%edi
08765ea3 +0x4d3:  lea    0x6ed9eba1(%edx,%ecx,1),%ecx
08765eaa +0x4da:  mov    -0x10(%ebp),%edx
08765ead +0x4dd:  xor    %edi,%esi
08765eaf +0x4df:  add    -0x18(%ebp),%esi
08765eb2 +0x4e2:  xor    %edi,%edx
08765eb4 +0x4e4:  ror    $0x15,%esi
08765eb7 +0x4e7:  xor    %esi,%edx
08765eb9 +0x4e9:  add    %ecx,%edx
08765ebb +0x4eb:  mov    -0x10(%ebp),%ecx
08765ebe +0x4ee:  ror    $0x11,%edx
08765ec1 +0x4f1:  mov    %edx,-0xc(%ebp)
08765ec4 +0x4f4:  mov    0x3c(%eax),%edx
08765ec7 +0x4f7:  lea    0x6ed9eba1(%ecx,%edx,1),%edx
08765ece +0x4fe:  mov    %esi,%ecx
08765ed0 +0x500:  xor    %edi,%ecx
08765ed2 +0x502:  xor    -0xc(%ebp),%ecx
08765ed5 +0x505:  add    %edx,%ecx
08765ed7 +0x507:  mov    0x5c(%eax),%edx
08765eda +0x50a:  ror    $0x1d,%ecx
08765edd +0x50d:  lea    0x6ed9eba1(%edi,%edx,1),%edi
08765ee4 +0x514:  mov    0x4c(%eax),%edx
08765ee7 +0x517:  mov    %edi,-0x18(%ebp)
08765eea +0x51a:  mov    -0xc(%ebp),%edi
08765eed +0x51d:  xor    %esi,%edi
08765eef +0x51f:  lea    0x6ed9eba1(%esi,%edx,1),%esi
08765ef6 +0x526:  xor    %ecx,%edi
08765ef8 +0x528:  mov    -0xc(%ebp),%edx
08765efb +0x52b:  add    -0x18(%ebp),%edi
08765efe +0x52e:  mov    %esi,-0x18(%ebp)
08765f01 +0x531:  mov    -0xc(%ebp),%esi
08765f04 +0x534:  ror    $0x17,%edi
08765f07 +0x537:  xor    %ecx,%esi
08765f09 +0x539:  xor    %edi,%esi
08765f0b +0x53b:  add    -0x18(%ebp),%esi
08765f0e +0x53e:  ror    $0x15,%esi
08765f11 +0x541:  mov    %esi,-0x10(%ebp)
08765f14 +0x544:  mov    0x6c(%eax),%esi
08765f17 +0x547:  lea    0x6ed9eba1(%edx,%esi,1),%esi
08765f1e +0x54e:  mov    %edi,%edx
08765f20 +0x550:  xor    %ecx,%edx
08765f22 +0x552:  xor    -0x10(%ebp),%edx
08765f25 +0x555:  add    0x10(%eax),%ecx
08765f28 +0x558:  add    %esi,%edx
08765f2a +0x55a:  mov    %ecx,0x10(%eax)
08765f2d +0x55d:  ror    $0x11,%edx
08765f30 +0x560:  add    %edx,0x14(%eax)
08765f33 +0x563:  mov    -0x10(%ebp),%edx
08765f36 +0x566:  add    %edx,0x18(%eax)
08765f39 +0x569:  add    %edi,0x1c(%eax)
08765f3c +0x56c:  add    $0x1c,%esp
08765f3f +0x56f:  pop    %esi
08765f40 +0x570:  pop    %edi
08765f41 +0x571:  pop    %ebp
08765f42 +0x572:  ret
08765f43 +0x573:  nop
08765f44 +0x574:  lea    0x0(%esi),%esi
08765f4a +0x57a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::MD4::Transform @ 0x87659d0

/* TaoCrypt::MD4::Transform() */

void __thiscall TaoCrypt::MD4::Transform(MD4 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(this + 0x1c);
  uVar2 = *(uint *)(this + 0x18);
  uVar1 = ((uVar4 ^ uVar2) & *(uint *)(this + 0x14) ^ uVar4) +
          *(int *)(this + 0x30) + *(int *)(this + 0x10);
  uVar1 = uVar1 >> 0x1d | uVar1 * 8;
  uVar4 = ((*(uint *)(this + 0x14) ^ uVar2) & uVar1 ^ uVar2) + uVar4 + *(int *)(this + 0x34);
  uVar5 = uVar4 >> 0x19 | uVar4 * 0x80;
  uVar4 = ((*(uint *)(this + 0x14) ^ uVar1) & uVar5 ^ *(uint *)(this + 0x14)) +
          uVar2 + *(int *)(this + 0x38);
  uVar3 = uVar4 >> 0x15 | uVar4 * 0x800;
  uVar4 = ((uVar5 ^ uVar1) & uVar3 ^ uVar1) + *(int *)(this + 0x14) + *(int *)(this + 0x3c);
  uVar2 = uVar4 >> 0xd | uVar4 * 0x80000;
  uVar4 = ((uVar3 ^ uVar5) & uVar2 ^ uVar5) + uVar1 + *(int *)(this + 0x40);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar1 = ((uVar2 ^ uVar3) & uVar4 ^ uVar3) + uVar5 + *(int *)(this + 0x44);
  uVar5 = uVar1 >> 0x19 | uVar1 * 0x80;
  uVar1 = ((uVar2 ^ uVar4) & uVar5 ^ uVar2) + uVar3 + *(int *)(this + 0x48);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = ((uVar5 ^ uVar4) & uVar1 ^ uVar4) + uVar2 + *(int *)(this + 0x4c);
  uVar2 = uVar2 >> 0xd | uVar2 * 0x80000;
  uVar4 = ((uVar1 ^ uVar5) & uVar2 ^ uVar5) + uVar4 + *(int *)(this + 0x50);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = ((uVar2 ^ uVar1) & uVar4 ^ uVar1) + uVar5 + *(int *)(this + 0x54);
  uVar3 = uVar3 >> 0x19 | uVar3 * 0x80;
  uVar1 = ((uVar2 ^ uVar4) & uVar3 ^ uVar2) + uVar1 + *(int *)(this + 0x58);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = ((uVar3 ^ uVar4) & uVar1 ^ uVar4) + uVar2 + *(int *)(this + 0x5c);
  uVar2 = uVar2 >> 0xd | uVar2 * 0x80000;
  uVar4 = ((uVar1 ^ uVar3) & uVar2 ^ uVar3) + uVar4 + *(int *)(this + 0x60);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = ((uVar2 ^ uVar1) & uVar4 ^ uVar1) + uVar3 + *(int *)(this + 100);
  uVar5 = uVar3 >> 0x19 | uVar3 * 0x80;
  uVar1 = ((uVar2 ^ uVar4) & uVar5 ^ uVar2) + uVar1 + *(int *)(this + 0x68);
  uVar3 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = ((uVar4 ^ uVar5) & uVar3 ^ uVar4) + uVar2 + *(int *)(this + 0x6c);
  uVar2 = uVar2 >> 0xd | uVar2 * 0x80000;
  uVar4 = ((uVar5 | uVar3) & uVar2 | uVar5 & uVar3) + uVar4 + 0x5a827999 + *(int *)(this + 0x30);
  uVar1 = uVar4 >> 0x1d | uVar4 * 8;
  uVar4 = ((uVar2 | uVar3) & uVar1 | uVar2 & uVar3) + uVar5 + 0x5a827999 + *(int *)(this + 0x40);
  uVar5 = uVar4 >> 0x1b | uVar4 * 0x20;
  uVar4 = ((uVar2 | uVar1) & uVar5 | uVar2 & uVar1) + uVar3 + 0x5a827999 + *(int *)(this + 0x50);
  uVar3 = uVar4 >> 0x17 | uVar4 * 0x200;
  uVar4 = ((uVar1 | uVar5) & uVar3 | uVar1 & uVar5) + uVar2 + 0x5a827999 + *(int *)(this + 0x60);
  uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar2 = ((uVar3 | uVar5) & uVar4 | uVar3 & uVar5) + uVar1 + 0x5a827999 + *(int *)(this + 0x34);
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar1 = ((uVar4 | uVar3) & uVar2 | uVar4 & uVar3) + uVar5 + 0x5a827999 + *(int *)(this + 0x44);
  uVar5 = uVar1 >> 0x1b | uVar1 * 0x20;
  uVar1 = ((uVar4 | uVar2) & uVar5 | uVar4 & uVar2) + uVar3 + 0x5a827999 + *(int *)(this + 0x54);
  uVar1 = uVar1 >> 0x17 | uVar1 * 0x200;
  uVar4 = ((uVar2 | uVar5) & uVar1 | uVar2 & uVar5) + uVar4 + 0x5a827999 + *(int *)(this + 100);
  uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar2 = ((uVar1 | uVar5) & uVar4 | uVar1 & uVar5) + uVar2 + 0x5a827999 + *(int *)(this + 0x38);
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar3 = ((uVar4 | uVar1) & uVar2 | uVar4 & uVar1) + uVar5 + 0x5a827999 + *(int *)(this + 0x48);
  uVar3 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar1 = ((uVar4 | uVar2) & uVar3 | uVar4 & uVar2) + uVar1 + 0x5a827999 + *(int *)(this + 0x58);
  uVar1 = uVar1 >> 0x17 | uVar1 * 0x200;
  uVar4 = ((uVar2 | uVar3) & uVar1 | uVar2 & uVar3) + uVar4 + 0x5a827999 + *(int *)(this + 0x68);
  uVar4 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar2 = ((uVar1 | uVar3) & uVar4 | uVar1 & uVar3) + uVar2 + 0x5a827999 + *(int *)(this + 0x3c);
  uVar2 = uVar2 >> 0x1d | uVar2 * 8;
  uVar3 = ((uVar4 | uVar1) & uVar2 | uVar4 & uVar1) + uVar3 + 0x5a827999 + *(int *)(this + 0x4c);
  uVar5 = uVar3 >> 0x1b | uVar3 * 0x20;
  uVar1 = ((uVar4 | uVar2) & uVar5 | uVar4 & uVar2) + uVar1 + 0x5a827999 + *(int *)(this + 0x5c);
  uVar1 = uVar1 >> 0x17 | uVar1 * 0x200;
  uVar4 = ((uVar5 | uVar2) & uVar1 | uVar5 & uVar2) + uVar4 + 0x5a827999 + *(int *)(this + 0x6c);
  uVar3 = uVar4 >> 0x13 | uVar4 * 0x2000;
  uVar4 = (uVar1 ^ uVar5 ^ uVar3) + uVar2 + 0x6ed9eba1 + *(int *)(this + 0x30);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar2 = (uVar3 ^ uVar1 ^ uVar4) + uVar5 + 0x6ed9eba1 + *(int *)(this + 0x50);
  uVar5 = uVar2 >> 0x17 | uVar2 * 0x200;
  uVar2 = (uVar3 ^ uVar4 ^ uVar5) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x40);
  uVar1 = uVar2 >> 0x15 | uVar2 * 0x800;
  uVar2 = (uVar4 ^ uVar5 ^ uVar1) + uVar3 + 0x6ed9eba1 + *(int *)(this + 0x60);
  uVar2 = uVar2 >> 0x11 | uVar2 * 0x8000;
  uVar4 = (uVar1 ^ uVar5 ^ uVar2) + uVar4 + 0x6ed9eba1 + *(int *)(this + 0x38);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = (uVar2 ^ uVar1 ^ uVar4) + uVar5 + 0x6ed9eba1 + *(int *)(this + 0x58);
  uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar1 = (uVar2 ^ uVar4 ^ uVar3) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x48);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = (uVar4 ^ uVar3 ^ uVar1) + uVar2 + 0x6ed9eba1 + *(int *)(this + 0x68);
  uVar2 = uVar2 >> 0x11 | uVar2 * 0x8000;
  uVar4 = (uVar1 ^ uVar3 ^ uVar2) + uVar4 + 0x6ed9eba1 + *(int *)(this + 0x34);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = (uVar2 ^ uVar1 ^ uVar4) + uVar3 + 0x6ed9eba1 + *(int *)(this + 0x54);
  uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar1 = (uVar2 ^ uVar4 ^ uVar3) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x44);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = (uVar4 ^ uVar3 ^ uVar1) + uVar2 + 0x6ed9eba1 + *(int *)(this + 100);
  uVar2 = uVar2 >> 0x11 | uVar2 * 0x8000;
  uVar4 = (uVar1 ^ uVar3 ^ uVar2) + uVar4 + 0x6ed9eba1 + *(int *)(this + 0x3c);
  uVar4 = uVar4 >> 0x1d | uVar4 * 8;
  uVar3 = (uVar2 ^ uVar1 ^ uVar4) + uVar3 + 0x6ed9eba1 + *(int *)(this + 0x5c);
  uVar3 = uVar3 >> 0x17 | uVar3 * 0x200;
  uVar1 = (uVar2 ^ uVar4 ^ uVar3) + uVar1 + 0x6ed9eba1 + *(int *)(this + 0x4c);
  uVar1 = uVar1 >> 0x15 | uVar1 * 0x800;
  uVar2 = (uVar3 ^ uVar4 ^ uVar1) + uVar2 + 0x6ed9eba1 + *(int *)(this + 0x6c);
  *(uint *)(this + 0x10) = uVar4 + *(int *)(this + 0x10);
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + (uVar2 >> 0x11 | uVar2 * 0x8000);
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar1;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar3;
  return;
}
```
