# set_pending

`_ZN5yaSSL3SSL11set_pendingEh`

`yaSSL::SSL::set_pending(unsigned char)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x08751220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08751220  _ZN5yaSSL3SSL11set_pendingEh
#           yaSSL::SSL::set_pending(unsigned char)
# range [0x08751220, 0x0875234c]
08751220 +0x0000:  push   %ebp
08751221 +0x0001:  mov    %esp,%ebp
08751223 +0x0003:  push   %edi
08751224 +0x0004:  push   %esi
08751225 +0x0005:  push   %ebx
08751226 +0x0006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875122b +0x000b:  add    $0xc1b96d,%ebx
08751231 +0x0011:  sub    $0x2c,%esp
08751234 +0x0014:  mov    0x8(%ebp),%edi
08751237 +0x0017:  movzbl 0xc(%ebp),%eax
0875123b +0x001b:  lea    0x68(%edi),%edx
0875123e +0x001e:  mov    %edx,(%esp)
08751241 +0x0021:  mov    %edx,-0x20(%ebp)
08751244 +0x0024:  mov    %al,-0x19(%ebp)
08751247 +0x0027:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0875124c +0x002c:  mov    -0x20(%ebp),%edx
0875124f +0x002f:  mov    %eax,%esi
08751251 +0x0031:  movzbl -0x19(%ebp),%eax
08751255 +0x0035:  sub    $0x4,%eax
08751258 +0x0038:  cmp    $0x7a,%al
0875125a +0x003a:  jbe    08751278 <+0x58>
0875125c +0x003c:  movl   $0x68,0x4(%esp)
08751264 +0x0044:  mov    %edi,(%esp)
08751267 +0x0047:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0875126c +0x004c:  lea    0x0(%esi,%eiz,1),%esi
08751270 +0x0050:  add    $0x2c,%esp
08751273 +0x0053:  pop    %ebx
08751274 +0x0054:  pop    %esi
08751275 +0x0055:  pop    %edi
08751276 +0x0056:  pop    %ebp
08751277 +0x0057:  ret
08751278 +0x0058:  movzbl %al,%eax
0875127b +0x005b:  mov    -0x667bd4(%ebx,%eax,4),%eax
08751282 +0x0062:  add    %ebx,%eax
08751284 +0x0064:  jmp    *%eax
08751286 +0x0066:  xchg   %ax,%ax
08751288 +0x0068:  movl   $0x7,0x4(%esi)
0875128f +0x006f:  movl   $0x3,0x10(%esi)
08751296 +0x0076:  movl   $0x1,0x1c(%esi)
0875129d +0x007d:  movb   $0x14,0x14(%esi)
087512a1 +0x0081:  movb   $0x20,0xc(%esi)
087512a5 +0x0085:  movb   $0x10,0xd(%esi)
087512a9 +0x0089:  movl   $0x1,0x8(%esi)
087512b0 +0x0090:  movb   $0x0,0x4(%esp)
087512b5 +0x0095:  movl   $0x8,(%esp)
087512bc +0x009c:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087512c1 +0x00a1:  mov    %eax,(%esp)
087512c4 +0x00a4:  mov    %eax,-0x20(%ebp)
087512c7 +0x00a7:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
087512cc +0x00ac:  mov    -0x20(%ebp),%eax
087512cf +0x00af:  mov    %edi,(%esp)
087512d2 +0x00b2:  mov    %eax,0x4(%esp)
087512d6 +0x00b6:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
087512db +0x00bb:  movb   $0x0,0x4(%esp)
087512e0 +0x00c0:  add    $0xaf,%esi
087512e6 +0x00c6:  movl   $0x8,(%esp)
087512ed +0x00cd:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087512f2 +0x00d2:  movl   $0x20,0x4(%esp)
087512fa +0x00da:  mov    %eax,(%esp)
087512fd +0x00dd:  mov    %eax,-0x20(%ebp)
08751300 +0x00e0:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751305 +0x00e5:  mov    -0x20(%ebp),%eax
08751308 +0x00e8:  mov    %edi,(%esp)
0875130b +0x00eb:  mov    %eax,0x4(%esp)
0875130f +0x00ef:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751314 +0x00f4:  lea    -0x667ce8(%ebx),%eax
0875131a +0x00fa:  movl   $0x30,0x8(%esp)
08751322 +0x0102:  mov    %eax,0x4(%esp)
08751326 +0x0106:  mov    %esi,(%esp)
08751329 +0x0109:  call   0807d8d0 <_init+0x1c8>
0875132e +0x010e:  jmp    08751270 <+0x50>
08751333 +0x0113:  nop
08751334 +0x0114:  lea    0x0(%esi,%eiz,1),%esi
08751338 +0x0118:  movl   $0x7,0x4(%esi)
0875133f +0x011f:  movl   $0x3,0x10(%esi)
08751346 +0x0126:  movl   $0x1,0x1c(%esi)
0875134d +0x012d:  movb   $0x14,0x14(%esi)
08751351 +0x0131:  movb   $0x10,0xc(%esi)
08751355 +0x0135:  movb   $0x10,0xd(%esi)
08751359 +0x0139:  movl   $0x1,0x8(%esi)
08751360 +0x0140:  movb   $0x0,0x4(%esp)
08751365 +0x0145:  movl   $0x8,(%esp)
0875136c +0x014c:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751371 +0x0151:  mov    %eax,(%esp)
08751374 +0x0154:  mov    %eax,-0x20(%ebp)
08751377 +0x0157:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
0875137c +0x015c:  mov    -0x20(%ebp),%eax
0875137f +0x015f:  mov    %edi,(%esp)
08751382 +0x0162:  mov    %eax,0x4(%esp)
08751386 +0x0166:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
0875138b +0x016b:  movb   $0x0,0x4(%esp)
08751390 +0x0170:  add    $0xaf,%esi
08751396 +0x0176:  movl   $0x8,(%esp)
0875139d +0x017d:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087513a2 +0x0182:  movl   $0x10,0x4(%esp)
087513aa +0x018a:  mov    %eax,(%esp)
087513ad +0x018d:  mov    %eax,-0x20(%ebp)
087513b0 +0x0190:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
087513b5 +0x0195:  mov    -0x20(%ebp),%eax
087513b8 +0x0198:  mov    %edi,(%esp)
087513bb +0x019b:  mov    %eax,0x4(%esp)
087513bf +0x019f:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
087513c4 +0x01a4:  lea    -0x667cfb(%ebx),%eax
087513ca +0x01aa:  movl   $0x30,0x8(%esp)
087513d2 +0x01b2:  mov    %eax,0x4(%esp)
087513d6 +0x01b6:  mov    %esi,(%esp)
087513d9 +0x01b9:  call   0807d8d0 <_init+0x1c8>
087513de +0x01be:  jmp    08751270 <+0x50>
087513e3 +0x01c3:  nop
087513e4 +0x01c4:  lea    0x0(%esi,%eiz,1),%esi
087513e8 +0x01c8:  movl   $0x4,0x4(%esi)
087513ef +0x01cf:  movl   $0x3,0x10(%esi)
087513f6 +0x01d6:  movl   $0x1,0x1c(%esi)
087513fd +0x01dd:  movb   $0x14,0x14(%esi)
08751401 +0x01e1:  movb   $0x18,0xc(%esi)
08751405 +0x01e5:  movb   $0x8,0xd(%esi)
08751409 +0x01e9:  movl   $0x1,0x8(%esi)
08751410 +0x01f0:  movb   $0x0,0x4(%esp)
08751415 +0x01f5:  movl   $0x8,(%esp)
0875141c +0x01fc:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751421 +0x0201:  mov    %eax,(%esp)
08751424 +0x0204:  mov    %eax,-0x20(%ebp)
08751427 +0x0207:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
0875142c +0x020c:  mov    -0x20(%ebp),%eax
0875142f +0x020f:  mov    %edi,(%esp)
08751432 +0x0212:  mov    %eax,0x4(%esp)
08751436 +0x0216:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
0875143b +0x021b:  movb   $0x0,0x4(%esp)
08751440 +0x0220:  add    $0xaf,%esi
08751446 +0x0226:  movl   $0x8,(%esp)
0875144d +0x022d:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751452 +0x0232:  mov    %eax,(%esp)
08751455 +0x0235:  mov    %eax,-0x20(%ebp)
08751458 +0x0238:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
0875145d +0x023d:  mov    -0x20(%ebp),%eax
08751460 +0x0240:  mov    %edi,(%esp)
08751463 +0x0243:  mov    %eax,0x4(%esp)
08751467 +0x0247:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
0875146c +0x024c:  lea    -0x667d10(%ebx),%eax
08751472 +0x0252:  movl   $0x30,0x8(%esp)
0875147a +0x025a:  mov    %eax,0x4(%esp)
0875147e +0x025e:  mov    %esi,(%esp)
08751481 +0x0261:  call   0807d8d0 <_init+0x1c8>
08751486 +0x0266:  jmp    08751270 <+0x50>
0875148b +0x026b:  nop
0875148c +0x026c:  lea    0x0(%esi,%eiz,1),%esi
08751490 +0x0270:  movl   $0x7,0x4(%esi)
08751497 +0x0277:  movl   $0x3,0x10(%esi)
0875149e +0x027e:  movl   $0x2,0x1c(%esi)
087514a5 +0x0285:  movl   $0x1,0x20(%esi)
087514ac +0x028c:  movb   $0x14,0x14(%esi)
087514b0 +0x0290:  movb   $0x20,0xc(%esi)
087514b4 +0x0294:  movb   $0x10,0xd(%esi)
087514b8 +0x0298:  movl   $0x1,0x8(%esi)
087514bf +0x029f:  mov    %edx,(%esp)
087514c2 +0x02a2:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
087514c7 +0x02a7:  movb   $0x1,0x128(%eax)
087514ce +0x02ae:  movb   $0x0,0x4(%esp)
087514d3 +0x02b3:  movl   $0x8,(%esp)
087514da +0x02ba:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087514df +0x02bf:  mov    %eax,(%esp)
087514e2 +0x02c2:  mov    %eax,-0x20(%ebp)
087514e5 +0x02c5:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
087514ea +0x02ca:  mov    -0x20(%ebp),%eax
087514ed +0x02cd:  mov    %edi,(%esp)
087514f0 +0x02d0:  mov    %eax,0x4(%esp)
087514f4 +0x02d4:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
087514f9 +0x02d9:  movb   $0x0,0x4(%esp)
087514fe +0x02de:  add    $0xaf,%esi
08751504 +0x02e4:  movl   $0x8,(%esp)
0875150b +0x02eb:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751510 +0x02f0:  movl   $0x20,0x4(%esp)
08751518 +0x02f8:  mov    %eax,(%esp)
0875151b +0x02fb:  mov    %eax,-0x20(%ebp)
0875151e +0x02fe:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751523 +0x0303:  mov    -0x20(%ebp),%eax
08751526 +0x0306:  mov    %edi,(%esp)
08751529 +0x0309:  mov    %eax,0x4(%esp)
0875152d +0x030d:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751532 +0x0312:  lea    -0x667cf0(%ebx),%eax
08751538 +0x0318:  movl   $0x30,0x8(%esp)
08751540 +0x0320:  mov    %eax,0x4(%esp)
08751544 +0x0324:  mov    %esi,(%esp)
08751547 +0x0327:  call   0807d8d0 <_init+0x1c8>
0875154c +0x032c:  jmp    08751270 <+0x50>
08751551 +0x0331:  lea    0x0(%esi,%eiz,1),%esi
08751558 +0x0338:  movl   $0x7,0x4(%esi)
0875155f +0x033f:  movl   $0x3,0x10(%esi)
08751566 +0x0346:  movl   $0x2,0x1c(%esi)
0875156d +0x034d:  movl   $0x1,0x20(%esi)
08751574 +0x0354:  movb   $0x14,0x14(%esi)
08751578 +0x0358:  movb   $0x10,0xc(%esi)
0875157c +0x035c:  movb   $0x10,0xd(%esi)
08751580 +0x0360:  movl   $0x1,0x8(%esi)
08751587 +0x0367:  mov    %edx,(%esp)
0875158a +0x036a:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0875158f +0x036f:  movb   $0x1,0x128(%eax)
08751596 +0x0376:  movb   $0x0,0x4(%esp)
0875159b +0x037b:  movl   $0x8,(%esp)
087515a2 +0x0382:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087515a7 +0x0387:  mov    %eax,(%esp)
087515aa +0x038a:  mov    %eax,-0x20(%ebp)
087515ad +0x038d:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
087515b2 +0x0392:  mov    -0x20(%ebp),%eax
087515b5 +0x0395:  mov    %edi,(%esp)
087515b8 +0x0398:  mov    %eax,0x4(%esp)
087515bc +0x039c:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
087515c1 +0x03a1:  movb   $0x0,0x4(%esp)
087515c6 +0x03a6:  add    $0xaf,%esi
087515cc +0x03ac:  movl   $0x8,(%esp)
087515d3 +0x03b3:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087515d8 +0x03b8:  movl   $0x10,0x4(%esp)
087515e0 +0x03c0:  mov    %eax,(%esp)
087515e3 +0x03c3:  mov    %eax,-0x20(%ebp)
087515e6 +0x03c6:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
087515eb +0x03cb:  mov    -0x20(%ebp),%eax
087515ee +0x03ce:  mov    %edi,(%esp)
087515f1 +0x03d1:  mov    %eax,0x4(%esp)
087515f5 +0x03d5:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
087515fa +0x03da:  lea    -0x667d03(%ebx),%eax
08751600 +0x03e0:  movl   $0x30,0x8(%esp)
08751608 +0x03e8:  mov    %eax,0x4(%esp)
0875160c +0x03ec:  mov    %esi,(%esp)
0875160f +0x03ef:  call   0807d8d0 <_init+0x1c8>
08751614 +0x03f4:  jmp    08751270 <+0x50>
08751619 +0x03f9:  lea    0x0(%esi,%eiz,1),%esi
08751620 +0x0400:  movl   $0x4,0x4(%esi)
08751627 +0x0407:  movl   $0x3,0x10(%esi)
0875162e +0x040e:  movl   $0x2,0x1c(%esi)
08751635 +0x0415:  movl   $0x1,0x20(%esi)
0875163c +0x041c:  movb   $0x14,0x14(%esi)
08751640 +0x0420:  movb   $0x18,0xc(%esi)
08751644 +0x0424:  movb   $0x8,0xd(%esi)
08751648 +0x0428:  movl   $0x1,0x8(%esi)
0875164f +0x042f:  mov    %edx,(%esp)
08751652 +0x0432:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751657 +0x0437:  movb   $0x1,0x128(%eax)
0875165e +0x043e:  movb   $0x0,0x4(%esp)
08751663 +0x0443:  movl   $0x8,(%esp)
0875166a +0x044a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0875166f +0x044f:  mov    %eax,(%esp)
08751672 +0x0452:  mov    %eax,-0x20(%ebp)
08751675 +0x0455:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
0875167a +0x045a:  mov    -0x20(%ebp),%eax
0875167d +0x045d:  mov    %edi,(%esp)
08751680 +0x0460:  mov    %eax,0x4(%esp)
08751684 +0x0464:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751689 +0x0469:  movb   $0x0,0x4(%esp)
0875168e +0x046e:  add    $0xaf,%esi
08751694 +0x0474:  movl   $0x8,(%esp)
0875169b +0x047b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087516a0 +0x0480:  mov    %eax,(%esp)
087516a3 +0x0483:  mov    %eax,-0x20(%ebp)
087516a6 +0x0486:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
087516ab +0x048b:  mov    -0x20(%ebp),%eax
087516ae +0x048e:  mov    %edi,(%esp)
087516b1 +0x0491:  mov    %eax,0x4(%esp)
087516b5 +0x0495:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
087516ba +0x049a:  lea    -0x667d18(%ebx),%eax
087516c0 +0x04a0:  movl   $0x30,0x8(%esp)
087516c8 +0x04a8:  mov    %eax,0x4(%esp)
087516cc +0x04ac:  mov    %esi,(%esp)
087516cf +0x04af:  call   0807d8d0 <_init+0x1c8>
087516d4 +0x04b4:  jmp    08751270 <+0x50>
087516d9 +0x04b9:  lea    0x0(%esi,%eiz,1),%esi
087516e0 +0x04c0:  movl   $0x7,0x4(%esi)
087516e7 +0x04c7:  movl   $0x3,0x10(%esi)
087516ee +0x04ce:  movl   $0x2,0x1c(%esi)
087516f5 +0x04d5:  movl   $0x2,0x20(%esi)
087516fc +0x04dc:  movb   $0x14,0x14(%esi)
08751700 +0x04e0:  movb   $0x20,0xc(%esi)
08751704 +0x04e4:  movb   $0x10,0xd(%esi)
08751708 +0x04e8:  movl   $0x1,0x8(%esi)
0875170f +0x04ef:  mov    %edx,(%esp)
08751712 +0x04f2:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751717 +0x04f7:  movb   $0x1,0x128(%eax)
0875171e +0x04fe:  movb   $0x0,0x4(%esp)
08751723 +0x0503:  movl   $0x8,(%esp)
0875172a +0x050a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0875172f +0x050f:  mov    %eax,(%esp)
08751732 +0x0512:  mov    %eax,-0x20(%ebp)
08751735 +0x0515:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
0875173a +0x051a:  mov    -0x20(%ebp),%eax
0875173d +0x051d:  mov    %edi,(%esp)
08751740 +0x0520:  mov    %eax,0x4(%esp)
08751744 +0x0524:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751749 +0x0529:  movb   $0x0,0x4(%esp)
0875174e +0x052e:  add    $0xaf,%esi
08751754 +0x0534:  movl   $0x8,(%esp)
0875175b +0x053b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751760 +0x0540:  movl   $0x20,0x4(%esp)
08751768 +0x0548:  mov    %eax,(%esp)
0875176b +0x054b:  mov    %eax,-0x20(%ebp)
0875176e +0x054e:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751773 +0x0553:  mov    -0x20(%ebp),%eax
08751776 +0x0556:  mov    %edi,(%esp)
08751779 +0x0559:  mov    %eax,0x4(%esp)
0875177d +0x055d:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751782 +0x0562:  lea    -0x667d2b(%ebx),%eax
08751788 +0x0568:  movl   $0x30,0x8(%esp)
08751790 +0x0570:  mov    %eax,0x4(%esp)
08751794 +0x0574:  mov    %esi,(%esp)
08751797 +0x0577:  call   0807d8d0 <_init+0x1c8>
0875179c +0x057c:  jmp    08751270 <+0x50>
087517a1 +0x0581:  lea    0x0(%esi,%eiz,1),%esi
087517a8 +0x0588:  movl   $0x7,0x4(%esi)
087517af +0x058f:  movl   $0x3,0x10(%esi)
087517b6 +0x0596:  movl   $0x2,0x1c(%esi)
087517bd +0x059d:  movl   $0x2,0x20(%esi)
087517c4 +0x05a4:  movb   $0x14,0x14(%esi)
087517c8 +0x05a8:  movb   $0x10,0xc(%esi)
087517cc +0x05ac:  movb   $0x10,0xd(%esi)
087517d0 +0x05b0:  movl   $0x1,0x8(%esi)
087517d7 +0x05b7:  mov    %edx,(%esp)
087517da +0x05ba:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
087517df +0x05bf:  movb   $0x1,0x128(%eax)
087517e6 +0x05c6:  movb   $0x0,0x4(%esp)
087517eb +0x05cb:  movl   $0x8,(%esp)
087517f2 +0x05d2:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087517f7 +0x05d7:  mov    %eax,(%esp)
087517fa +0x05da:  mov    %eax,-0x20(%ebp)
087517fd +0x05dd:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
08751802 +0x05e2:  mov    -0x20(%ebp),%eax
08751805 +0x05e5:  mov    %edi,(%esp)
08751808 +0x05e8:  mov    %eax,0x4(%esp)
0875180c +0x05ec:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751811 +0x05f1:  movb   $0x0,0x4(%esp)
08751816 +0x05f6:  add    $0xaf,%esi
0875181c +0x05fc:  movl   $0x8,(%esp)
08751823 +0x0603:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751828 +0x0608:  movl   $0x10,0x4(%esp)
08751830 +0x0610:  mov    %eax,(%esp)
08751833 +0x0613:  mov    %eax,-0x20(%ebp)
08751836 +0x0616:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
0875183b +0x061b:  mov    -0x20(%ebp),%eax
0875183e +0x061e:  mov    %edi,(%esp)
08751841 +0x0621:  mov    %eax,0x4(%esp)
08751845 +0x0625:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
0875184a +0x062a:  lea    -0x667d3e(%ebx),%eax
08751850 +0x0630:  movl   $0x30,0x8(%esp)
08751858 +0x0638:  mov    %eax,0x4(%esp)
0875185c +0x063c:  mov    %esi,(%esp)
0875185f +0x063f:  call   0807d8d0 <_init+0x1c8>
08751864 +0x0644:  jmp    08751270 <+0x50>
08751869 +0x0649:  lea    0x0(%esi,%eiz,1),%esi
08751870 +0x0650:  movl   $0x4,0x4(%esi)
08751877 +0x0657:  movl   $0x3,0x10(%esi)
0875187e +0x065e:  movl   $0x2,0x1c(%esi)
08751885 +0x0665:  movl   $0x2,0x20(%esi)
0875188c +0x066c:  movb   $0x14,0x14(%esi)
08751890 +0x0670:  movb   $0x18,0xc(%esi)
08751894 +0x0674:  movb   $0x8,0xd(%esi)
08751898 +0x0678:  movl   $0x1,0x8(%esi)
0875189f +0x067f:  mov    %edx,(%esp)
087518a2 +0x0682:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
087518a7 +0x0687:  movb   $0x1,0x128(%eax)
087518ae +0x068e:  movb   $0x0,0x4(%esp)
087518b3 +0x0693:  movl   $0x8,(%esp)
087518ba +0x069a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087518bf +0x069f:  mov    %eax,(%esp)
087518c2 +0x06a2:  mov    %eax,-0x20(%ebp)
087518c5 +0x06a5:  call   0879a210 <_ZN5yaSSL3RMDC1Ev>  ; yaSSL::RMD::RMD()
087518ca +0x06aa:  mov    -0x20(%ebp),%eax
087518cd +0x06ad:  mov    %edi,(%esp)
087518d0 +0x06b0:  mov    %eax,0x4(%esp)
087518d4 +0x06b4:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
087518d9 +0x06b9:  movb   $0x0,0x4(%esp)
087518de +0x06be:  add    $0xaf,%esi
087518e4 +0x06c4:  movl   $0x8,(%esp)
087518eb +0x06cb:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087518f0 +0x06d0:  mov    %eax,(%esp)
087518f3 +0x06d3:  mov    %eax,-0x20(%ebp)
087518f6 +0x06d6:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
087518fb +0x06db:  mov    -0x20(%ebp),%eax
087518fe +0x06de:  mov    %edi,(%esp)
08751901 +0x06e1:  mov    %eax,0x4(%esp)
08751905 +0x06e5:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
0875190a +0x06ea:  lea    -0x667d53(%ebx),%eax
08751910 +0x06f0:  movl   $0x30,0x8(%esp)
08751918 +0x06f8:  mov    %eax,0x4(%esp)
0875191c +0x06fc:  mov    %esi,(%esp)
0875191f +0x06ff:  call   0807d8d0 <_init+0x1c8>
08751924 +0x0704:  jmp    08751270 <+0x50>
08751929 +0x0709:  lea    0x0(%esi,%eiz,1),%esi
08751930 +0x0710:  movl   $0x7,0x4(%esi)
08751937 +0x0717:  movl   $0x2,0x10(%esi)
0875193e +0x071e:  movl   $0x2,0x1c(%esi)
08751945 +0x0725:  movl   $0x1,0x20(%esi)
0875194c +0x072c:  movb   $0x14,0x14(%esi)
08751950 +0x0730:  movb   $0x20,0xc(%esi)
08751954 +0x0734:  movb   $0x10,0xd(%esi)
08751958 +0x0738:  movl   $0x1,0x8(%esi)
0875195f +0x073f:  mov    %edx,(%esp)
08751962 +0x0742:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751967 +0x0747:  movb   $0x1,0x128(%eax)
0875196e +0x074e:  movb   $0x0,0x4(%esp)
08751973 +0x0753:  movl   $0x8,(%esp)
0875197a +0x075a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0875197f +0x075f:  mov    %eax,(%esp)
08751982 +0x0762:  mov    %eax,-0x20(%ebp)
08751985 +0x0765:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
0875198a +0x076a:  mov    -0x20(%ebp),%eax
0875198d +0x076d:  mov    %edi,(%esp)
08751990 +0x0770:  mov    %eax,0x4(%esp)
08751994 +0x0774:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751999 +0x0779:  movb   $0x0,0x4(%esp)
0875199e +0x077e:  add    $0xaf,%esi
087519a4 +0x0784:  movl   $0x8,(%esp)
087519ab +0x078b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087519b0 +0x0790:  movl   $0x20,0x4(%esp)
087519b8 +0x0798:  mov    %eax,(%esp)
087519bb +0x079b:  mov    %eax,-0x20(%ebp)
087519be +0x079e:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
087519c3 +0x07a3:  mov    -0x20(%ebp),%eax
087519c6 +0x07a6:  mov    %edi,(%esp)
087519c9 +0x07a9:  mov    %eax,0x4(%esp)
087519cd +0x07ad:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
087519d2 +0x07b2:  lea    -0x667d66(%ebx),%eax
087519d8 +0x07b8:  movl   $0x30,0x8(%esp)
087519e0 +0x07c0:  mov    %eax,0x4(%esp)
087519e4 +0x07c4:  mov    %esi,(%esp)
087519e7 +0x07c7:  call   0807d8d0 <_init+0x1c8>
087519ec +0x07cc:  jmp    08751270 <+0x50>
087519f1 +0x07d1:  lea    0x0(%esi,%eiz,1),%esi
087519f8 +0x07d8:  movl   $0x7,0x4(%esi)
087519ff +0x07df:  movl   $0x2,0x10(%esi)
08751a06 +0x07e6:  movl   $0x2,0x1c(%esi)
08751a0d +0x07ed:  movl   $0x2,0x20(%esi)
08751a14 +0x07f4:  movb   $0x14,0x14(%esi)
08751a18 +0x07f8:  movb   $0x20,0xc(%esi)
08751a1c +0x07fc:  movb   $0x10,0xd(%esi)
08751a20 +0x0800:  movl   $0x1,0x8(%esi)
08751a27 +0x0807:  mov    %edx,(%esp)
08751a2a +0x080a:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751a2f +0x080f:  movb   $0x1,0x128(%eax)
08751a36 +0x0816:  movb   $0x0,0x4(%esp)
08751a3b +0x081b:  movl   $0x8,(%esp)
08751a42 +0x0822:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751a47 +0x0827:  mov    %eax,(%esp)
08751a4a +0x082a:  mov    %eax,-0x20(%ebp)
08751a4d +0x082d:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751a52 +0x0832:  mov    -0x20(%ebp),%eax
08751a55 +0x0835:  mov    %edi,(%esp)
08751a58 +0x0838:  mov    %eax,0x4(%esp)
08751a5c +0x083c:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751a61 +0x0841:  movb   $0x0,0x4(%esp)
08751a66 +0x0846:  add    $0xaf,%esi
08751a6c +0x084c:  movl   $0x8,(%esp)
08751a73 +0x0853:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751a78 +0x0858:  movl   $0x20,0x4(%esp)
08751a80 +0x0860:  mov    %eax,(%esp)
08751a83 +0x0863:  mov    %eax,-0x20(%ebp)
08751a86 +0x0866:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751a8b +0x086b:  mov    -0x20(%ebp),%eax
08751a8e +0x086e:  mov    %edi,(%esp)
08751a91 +0x0871:  mov    %eax,0x4(%esp)
08751a95 +0x0875:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751a9a +0x087a:  lea    -0x667d79(%ebx),%eax
08751aa0 +0x0880:  movl   $0x30,0x8(%esp)
08751aa8 +0x0888:  mov    %eax,0x4(%esp)
08751aac +0x088c:  mov    %esi,(%esp)
08751aaf +0x088f:  call   0807d8d0 <_init+0x1c8>
08751ab4 +0x0894:  jmp    08751270 <+0x50>
08751ab9 +0x0899:  lea    0x0(%esi,%eiz,1),%esi
08751ac0 +0x08a0:  movl   $0x7,0x4(%esi)
08751ac7 +0x08a7:  movl   $0x2,0x10(%esi)
08751ace +0x08ae:  movl   $0x1,0x1c(%esi)
08751ad5 +0x08b5:  movb   $0x14,0x14(%esi)
08751ad9 +0x08b9:  movb   $0x20,0xc(%esi)
08751add +0x08bd:  movb   $0x10,0xd(%esi)
08751ae1 +0x08c1:  movl   $0x1,0x8(%esi)
08751ae8 +0x08c8:  movb   $0x0,0x4(%esp)
08751aed +0x08cd:  movl   $0x8,(%esp)
08751af4 +0x08d4:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751af9 +0x08d9:  mov    %eax,(%esp)
08751afc +0x08dc:  mov    %eax,-0x20(%ebp)
08751aff +0x08df:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751b04 +0x08e4:  mov    -0x20(%ebp),%eax
08751b07 +0x08e7:  mov    %edi,(%esp)
08751b0a +0x08ea:  mov    %eax,0x4(%esp)
08751b0e +0x08ee:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751b13 +0x08f3:  movb   $0x0,0x4(%esp)
08751b18 +0x08f8:  add    $0xaf,%esi
08751b1e +0x08fe:  movl   $0x8,(%esp)
08751b25 +0x0905:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751b2a +0x090a:  movl   $0x20,0x4(%esp)
08751b32 +0x0912:  mov    %eax,(%esp)
08751b35 +0x0915:  mov    %eax,-0x20(%ebp)
08751b38 +0x0918:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751b3d +0x091d:  mov    -0x20(%ebp),%eax
08751b40 +0x0920:  mov    %edi,(%esp)
08751b43 +0x0923:  mov    %eax,0x4(%esp)
08751b47 +0x0927:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751b4c +0x092c:  lea    -0x667d5e(%ebx),%eax
08751b52 +0x0932:  movl   $0x30,0x8(%esp)
08751b5a +0x093a:  mov    %eax,0x4(%esp)
08751b5e +0x093e:  mov    %esi,(%esp)
08751b61 +0x0941:  call   0807d8d0 <_init+0x1c8>
08751b66 +0x0946:  jmp    08751270 <+0x50>
08751b6b +0x094b:  nop
08751b6c +0x094c:  lea    0x0(%esi,%eiz,1),%esi
08751b70 +0x0950:  movl   $0x7,0x4(%esi)
08751b77 +0x0957:  movl   $0x2,0x10(%esi)
08751b7e +0x095e:  movl   $0x2,0x1c(%esi)
08751b85 +0x0965:  movl   $0x1,0x20(%esi)
08751b8c +0x096c:  movb   $0x14,0x14(%esi)
08751b90 +0x0970:  movb   $0x10,0xc(%esi)
08751b94 +0x0974:  movb   $0x10,0xd(%esi)
08751b98 +0x0978:  movl   $0x1,0x8(%esi)
08751b9f +0x097f:  mov    %edx,(%esp)
08751ba2 +0x0982:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751ba7 +0x0987:  movb   $0x1,0x128(%eax)
08751bae +0x098e:  movb   $0x0,0x4(%esp)
08751bb3 +0x0993:  movl   $0x8,(%esp)
08751bba +0x099a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751bbf +0x099f:  mov    %eax,(%esp)
08751bc2 +0x09a2:  mov    %eax,-0x20(%ebp)
08751bc5 +0x09a5:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751bca +0x09aa:  mov    -0x20(%ebp),%eax
08751bcd +0x09ad:  mov    %edi,(%esp)
08751bd0 +0x09b0:  mov    %eax,0x4(%esp)
08751bd4 +0x09b4:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751bd9 +0x09b9:  movb   $0x0,0x4(%esp)
08751bde +0x09be:  add    $0xaf,%esi
08751be4 +0x09c4:  movl   $0x8,(%esp)
08751beb +0x09cb:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751bf0 +0x09d0:  movl   $0x10,0x4(%esp)
08751bf8 +0x09d8:  mov    %eax,(%esp)
08751bfb +0x09db:  mov    %eax,-0x20(%ebp)
08751bfe +0x09de:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751c03 +0x09e3:  mov    -0x20(%ebp),%eax
08751c06 +0x09e6:  mov    %edi,(%esp)
08751c09 +0x09e9:  mov    %eax,0x4(%esp)
08751c0d +0x09ed:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751c12 +0x09f2:  lea    -0x667d8c(%ebx),%eax
08751c18 +0x09f8:  movl   $0x30,0x8(%esp)
08751c20 +0x0a00:  mov    %eax,0x4(%esp)
08751c24 +0x0a04:  mov    %esi,(%esp)
08751c27 +0x0a07:  call   0807d8d0 <_init+0x1c8>
08751c2c +0x0a0c:  jmp    08751270 <+0x50>
08751c31 +0x0a11:  lea    0x0(%esi,%eiz,1),%esi
08751c38 +0x0a18:  movl   $0x7,0x4(%esi)
08751c3f +0x0a1f:  movl   $0x2,0x10(%esi)
08751c46 +0x0a26:  movl   $0x2,0x1c(%esi)
08751c4d +0x0a2d:  movl   $0x2,0x20(%esi)
08751c54 +0x0a34:  movb   $0x14,0x14(%esi)
08751c58 +0x0a38:  movb   $0x10,0xc(%esi)
08751c5c +0x0a3c:  movb   $0x10,0xd(%esi)
08751c60 +0x0a40:  movl   $0x1,0x8(%esi)
08751c67 +0x0a47:  mov    %edx,(%esp)
08751c6a +0x0a4a:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751c6f +0x0a4f:  movb   $0x1,0x128(%eax)
08751c76 +0x0a56:  movb   $0x0,0x4(%esp)
08751c7b +0x0a5b:  movl   $0x8,(%esp)
08751c82 +0x0a62:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751c87 +0x0a67:  mov    %eax,(%esp)
08751c8a +0x0a6a:  mov    %eax,-0x20(%ebp)
08751c8d +0x0a6d:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751c92 +0x0a72:  mov    -0x20(%ebp),%eax
08751c95 +0x0a75:  mov    %edi,(%esp)
08751c98 +0x0a78:  mov    %eax,0x4(%esp)
08751c9c +0x0a7c:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751ca1 +0x0a81:  movb   $0x0,0x4(%esp)
08751ca6 +0x0a86:  add    $0xaf,%esi
08751cac +0x0a8c:  movl   $0x8,(%esp)
08751cb3 +0x0a93:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751cb8 +0x0a98:  movl   $0x10,0x4(%esp)
08751cc0 +0x0aa0:  mov    %eax,(%esp)
08751cc3 +0x0aa3:  mov    %eax,-0x20(%ebp)
08751cc6 +0x0aa6:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751ccb +0x0aab:  mov    -0x20(%ebp),%eax
08751cce +0x0aae:  mov    %edi,(%esp)
08751cd1 +0x0ab1:  mov    %eax,0x4(%esp)
08751cd5 +0x0ab5:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751cda +0x0aba:  lea    -0x667d9f(%ebx),%eax
08751ce0 +0x0ac0:  movl   $0x30,0x8(%esp)
08751ce8 +0x0ac8:  mov    %eax,0x4(%esp)
08751cec +0x0acc:  mov    %esi,(%esp)
08751cef +0x0acf:  call   0807d8d0 <_init+0x1c8>
08751cf4 +0x0ad4:  jmp    08751270 <+0x50>
08751cf9 +0x0ad9:  lea    0x0(%esi,%eiz,1),%esi
08751d00 +0x0ae0:  movl   $0x7,0x4(%esi)
08751d07 +0x0ae7:  movl   $0x2,0x10(%esi)
08751d0e +0x0aee:  movl   $0x1,0x1c(%esi)
08751d15 +0x0af5:  movb   $0x14,0x14(%esi)
08751d19 +0x0af9:  movb   $0x10,0xc(%esi)
08751d1d +0x0afd:  movb   $0x10,0xd(%esi)
08751d21 +0x0b01:  movl   $0x1,0x8(%esi)
08751d28 +0x0b08:  movb   $0x0,0x4(%esp)
08751d2d +0x0b0d:  movl   $0x8,(%esp)
08751d34 +0x0b14:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751d39 +0x0b19:  mov    %eax,(%esp)
08751d3c +0x0b1c:  mov    %eax,-0x20(%ebp)
08751d3f +0x0b1f:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751d44 +0x0b24:  mov    -0x20(%ebp),%eax
08751d47 +0x0b27:  mov    %edi,(%esp)
08751d4a +0x0b2a:  mov    %eax,0x4(%esp)
08751d4e +0x0b2e:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751d53 +0x0b33:  movb   $0x0,0x4(%esp)
08751d58 +0x0b38:  add    $0xaf,%esi
08751d5e +0x0b3e:  movl   $0x8,(%esp)
08751d65 +0x0b45:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751d6a +0x0b4a:  movl   $0x10,0x4(%esp)
08751d72 +0x0b52:  mov    %eax,(%esp)
08751d75 +0x0b55:  mov    %eax,-0x20(%ebp)
08751d78 +0x0b58:  call   087985e0 <_ZN5yaSSL3AESC1Ej>  ; yaSSL::AES::AES(unsigned int)
08751d7d +0x0b5d:  mov    -0x20(%ebp),%eax
08751d80 +0x0b60:  mov    %edi,(%esp)
08751d83 +0x0b63:  mov    %eax,0x4(%esp)
08751d87 +0x0b67:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751d8c +0x0b6c:  lea    -0x667d84(%ebx),%eax
08751d92 +0x0b72:  movl   $0x30,0x8(%esp)
08751d9a +0x0b7a:  mov    %eax,0x4(%esp)
08751d9e +0x0b7e:  mov    %esi,(%esp)
08751da1 +0x0b81:  call   0807d8d0 <_init+0x1c8>
08751da6 +0x0b86:  jmp    08751270 <+0x50>
08751dab +0x0b8b:  nop
08751dac +0x0b8c:  lea    0x0(%esi,%eiz,1),%esi
08751db0 +0x0b90:  movl   $0x4,0x4(%esi)
08751db7 +0x0b97:  movl   $0x2,0x10(%esi)
08751dbe +0x0b9e:  movl   $0x2,0x1c(%esi)
08751dc5 +0x0ba5:  movl   $0x1,0x20(%esi)
08751dcc +0x0bac:  movb   $0x14,0x14(%esi)
08751dd0 +0x0bb0:  movb   $0x18,0xc(%esi)
08751dd4 +0x0bb4:  movb   $0x8,0xd(%esi)
08751dd8 +0x0bb8:  movl   $0x1,0x8(%esi)
08751ddf +0x0bbf:  mov    %edx,(%esp)
08751de2 +0x0bc2:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751de7 +0x0bc7:  movb   $0x1,0x128(%eax)
08751dee +0x0bce:  movb   $0x0,0x4(%esp)
08751df3 +0x0bd3:  movl   $0x8,(%esp)
08751dfa +0x0bda:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751dff +0x0bdf:  mov    %eax,(%esp)
08751e02 +0x0be2:  mov    %eax,-0x20(%ebp)
08751e05 +0x0be5:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751e0a +0x0bea:  mov    -0x20(%ebp),%eax
08751e0d +0x0bed:  mov    %edi,(%esp)
08751e10 +0x0bf0:  mov    %eax,0x4(%esp)
08751e14 +0x0bf4:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751e19 +0x0bf9:  movb   $0x0,0x4(%esp)
08751e1e +0x0bfe:  add    $0xaf,%esi
08751e24 +0x0c04:  movl   $0x8,(%esp)
08751e2b +0x0c0b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751e30 +0x0c10:  mov    %eax,(%esp)
08751e33 +0x0c13:  mov    %eax,-0x20(%ebp)
08751e36 +0x0c16:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
08751e3b +0x0c1b:  mov    -0x20(%ebp),%eax
08751e3e +0x0c1e:  mov    %edi,(%esp)
08751e41 +0x0c21:  mov    %eax,0x4(%esp)
08751e45 +0x0c25:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751e4a +0x0c2a:  lea    -0x667db4(%ebx),%eax
08751e50 +0x0c30:  movl   $0x30,0x8(%esp)
08751e58 +0x0c38:  mov    %eax,0x4(%esp)
08751e5c +0x0c3c:  mov    %esi,(%esp)
08751e5f +0x0c3f:  call   0807d8d0 <_init+0x1c8>
08751e64 +0x0c44:  jmp    08751270 <+0x50>
08751e69 +0x0c49:  lea    0x0(%esi,%eiz,1),%esi
08751e70 +0x0c50:  movl   $0x3,0x4(%esi)
08751e77 +0x0c57:  movl   $0x2,0x10(%esi)
08751e7e +0x0c5e:  movl   $0x2,0x1c(%esi)
08751e85 +0x0c65:  movl   $0x1,0x20(%esi)
08751e8c +0x0c6c:  movb   $0x14,0x14(%esi)
08751e90 +0x0c70:  movb   $0x8,0xc(%esi)
08751e94 +0x0c74:  movb   $0x8,0xd(%esi)
08751e98 +0x0c78:  movl   $0x1,0x8(%esi)
08751e9f +0x0c7f:  mov    %edx,(%esp)
08751ea2 +0x0c82:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751ea7 +0x0c87:  movb   $0x1,0x128(%eax)
08751eae +0x0c8e:  movb   $0x0,0x4(%esp)
08751eb3 +0x0c93:  movl   $0x8,(%esp)
08751eba +0x0c9a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751ebf +0x0c9f:  mov    %eax,(%esp)
08751ec2 +0x0ca2:  mov    %eax,-0x20(%ebp)
08751ec5 +0x0ca5:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751eca +0x0caa:  mov    -0x20(%ebp),%eax
08751ecd +0x0cad:  mov    %edi,(%esp)
08751ed0 +0x0cb0:  mov    %eax,0x4(%esp)
08751ed4 +0x0cb4:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751ed9 +0x0cb9:  movb   $0x0,0x4(%esp)
08751ede +0x0cbe:  add    $0xaf,%esi
08751ee4 +0x0cc4:  movl   $0x8,(%esp)
08751eeb +0x0ccb:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751ef0 +0x0cd0:  mov    %eax,(%esp)
08751ef3 +0x0cd3:  mov    %eax,-0x20(%ebp)
08751ef6 +0x0cd6:  call   08798790 <_ZN5yaSSL3DESC1Ev>  ; yaSSL::DES::DES()
08751efb +0x0cdb:  mov    -0x20(%ebp),%eax
08751efe +0x0cde:  mov    %edi,(%esp)
08751f01 +0x0ce1:  mov    %eax,0x4(%esp)
08751f05 +0x0ce5:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751f0a +0x0cea:  lea    -0x667dc8(%ebx),%eax
08751f10 +0x0cf0:  movl   $0x30,0x8(%esp)
08751f18 +0x0cf8:  mov    %eax,0x4(%esp)
08751f1c +0x0cfc:  mov    %esi,(%esp)
08751f1f +0x0cff:  call   0807d8d0 <_init+0x1c8>
08751f24 +0x0d04:  jmp    08751270 <+0x50>
08751f29 +0x0d09:  lea    0x0(%esi,%eiz,1),%esi
08751f30 +0x0d10:  movl   $0x4,0x4(%esi)
08751f37 +0x0d17:  movl   $0x2,0x10(%esi)
08751f3e +0x0d1e:  movl   $0x2,0x1c(%esi)
08751f45 +0x0d25:  movl   $0x2,0x20(%esi)
08751f4c +0x0d2c:  movb   $0x14,0x14(%esi)
08751f50 +0x0d30:  movb   $0x18,0xc(%esi)
08751f54 +0x0d34:  movb   $0x8,0xd(%esi)
08751f58 +0x0d38:  movl   $0x1,0x8(%esi)
08751f5f +0x0d3f:  mov    %edx,(%esp)
08751f62 +0x0d42:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08751f67 +0x0d47:  movb   $0x1,0x128(%eax)
08751f6e +0x0d4e:  movb   $0x0,0x4(%esp)
08751f73 +0x0d53:  movl   $0x8,(%esp)
08751f7a +0x0d5a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751f7f +0x0d5f:  mov    %eax,(%esp)
08751f82 +0x0d62:  mov    %eax,-0x20(%ebp)
08751f85 +0x0d65:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08751f8a +0x0d6a:  mov    -0x20(%ebp),%eax
08751f8d +0x0d6d:  mov    %edi,(%esp)
08751f90 +0x0d70:  mov    %eax,0x4(%esp)
08751f94 +0x0d74:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08751f99 +0x0d79:  movb   $0x0,0x4(%esp)
08751f9e +0x0d7e:  add    $0xaf,%esi
08751fa4 +0x0d84:  movl   $0x8,(%esp)
08751fab +0x0d8b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08751fb0 +0x0d90:  mov    %eax,(%esp)
08751fb3 +0x0d93:  mov    %eax,-0x20(%ebp)
08751fb6 +0x0d96:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
08751fbb +0x0d9b:  mov    -0x20(%ebp),%eax
08751fbe +0x0d9e:  mov    %edi,(%esp)
08751fc1 +0x0da1:  mov    %eax,0x4(%esp)
08751fc5 +0x0da5:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08751fca +0x0daa:  lea    -0x667ddd(%ebx),%eax
08751fd0 +0x0db0:  movl   $0x30,0x8(%esp)
08751fd8 +0x0db8:  mov    %eax,0x4(%esp)
08751fdc +0x0dbc:  mov    %esi,(%esp)
08751fdf +0x0dbf:  call   0807d8d0 <_init+0x1c8>
08751fe4 +0x0dc4:  jmp    08751270 <+0x50>
08751fe9 +0x0dc9:  lea    0x0(%esi,%eiz,1),%esi
08751ff0 +0x0dd0:  movl   $0x3,0x4(%esi)
08751ff7 +0x0dd7:  movl   $0x2,0x10(%esi)
08751ffe +0x0dde:  movl   $0x2,0x1c(%esi)
08752005 +0x0de5:  movl   $0x2,0x20(%esi)
0875200c +0x0dec:  movb   $0x14,0x14(%esi)
08752010 +0x0df0:  movb   $0x8,0xc(%esi)
08752014 +0x0df4:  movb   $0x8,0xd(%esi)
08752018 +0x0df8:  movl   $0x1,0x8(%esi)
0875201f +0x0dff:  mov    %edx,(%esp)
08752022 +0x0e02:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08752027 +0x0e07:  movb   $0x1,0x128(%eax)
0875202e +0x0e0e:  movb   $0x0,0x4(%esp)
08752033 +0x0e13:  movl   $0x8,(%esp)
0875203a +0x0e1a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0875203f +0x0e1f:  mov    %eax,(%esp)
08752042 +0x0e22:  mov    %eax,-0x20(%ebp)
08752045 +0x0e25:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
0875204a +0x0e2a:  mov    -0x20(%ebp),%eax
0875204d +0x0e2d:  mov    %edi,(%esp)
08752050 +0x0e30:  mov    %eax,0x4(%esp)
08752054 +0x0e34:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08752059 +0x0e39:  movb   $0x0,0x4(%esp)
0875205e +0x0e3e:  add    $0xaf,%esi
08752064 +0x0e44:  movl   $0x8,(%esp)
0875206b +0x0e4b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08752070 +0x0e50:  mov    %eax,(%esp)
08752073 +0x0e53:  mov    %eax,-0x20(%ebp)
08752076 +0x0e56:  call   08798790 <_ZN5yaSSL3DESC1Ev>  ; yaSSL::DES::DES()
0875207b +0x0e5b:  mov    -0x20(%ebp),%eax
0875207e +0x0e5e:  mov    %edi,(%esp)
08752081 +0x0e61:  mov    %eax,0x4(%esp)
08752085 +0x0e65:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
0875208a +0x0e6a:  lea    -0x667df1(%ebx),%eax
08752090 +0x0e70:  movl   $0x30,0x8(%esp)
08752098 +0x0e78:  mov    %eax,0x4(%esp)
0875209c +0x0e7c:  mov    %esi,(%esp)
0875209f +0x0e7f:  call   0807d8d0 <_init+0x1c8>
087520a4 +0x0e84:  jmp    08751270 <+0x50>
087520a9 +0x0e89:  lea    0x0(%esi,%eiz,1),%esi
087520b0 +0x0e90:  movl   $0x4,0x4(%esi)
087520b7 +0x0e97:  movl   $0x2,0x10(%esi)
087520be +0x0e9e:  movl   $0x1,0x1c(%esi)
087520c5 +0x0ea5:  movb   $0x14,0x14(%esi)
087520c9 +0x0ea9:  movb   $0x18,0xc(%esi)
087520cd +0x0ead:  movb   $0x8,0xd(%esi)
087520d1 +0x0eb1:  movl   $0x1,0x8(%esi)
087520d8 +0x0eb8:  movb   $0x0,0x4(%esp)
087520dd +0x0ebd:  movl   $0x8,(%esp)
087520e4 +0x0ec4:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087520e9 +0x0ec9:  mov    %eax,(%esp)
087520ec +0x0ecc:  mov    %eax,-0x20(%ebp)
087520ef +0x0ecf:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
087520f4 +0x0ed4:  mov    -0x20(%ebp),%eax
087520f7 +0x0ed7:  mov    %edi,(%esp)
087520fa +0x0eda:  mov    %eax,0x4(%esp)
087520fe +0x0ede:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08752103 +0x0ee3:  movb   $0x0,0x4(%esp)
08752108 +0x0ee8:  add    $0xaf,%esi
0875210e +0x0eee:  movl   $0x8,(%esp)
08752115 +0x0ef5:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0875211a +0x0efa:  mov    %eax,(%esp)
0875211d +0x0efd:  mov    %eax,-0x20(%ebp)
08752120 +0x0f00:  call   087986e0 <_ZN5yaSSL7DES_EDEC1Ev>  ; yaSSL::DES_EDE::DES_EDE()
08752125 +0x0f05:  mov    -0x20(%ebp),%eax
08752128 +0x0f08:  mov    %edi,(%esp)
0875212b +0x0f0b:  mov    %eax,0x4(%esp)
0875212f +0x0f0f:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08752134 +0x0f14:  lea    -0x667dac(%ebx),%eax
0875213a +0x0f1a:  movl   $0x30,0x8(%esp)
08752142 +0x0f22:  mov    %eax,0x4(%esp)
08752146 +0x0f26:  mov    %esi,(%esp)
08752149 +0x0f29:  call   0807d8d0 <_init+0x1c8>
0875214e +0x0f2e:  jmp    08751270 <+0x50>
08752153 +0x0f33:  nop
08752154 +0x0f34:  lea    0x0(%esi,%eiz,1),%esi
08752158 +0x0f38:  movl   $0x3,0x4(%esi)
0875215f +0x0f3f:  movl   $0x2,0x10(%esi)
08752166 +0x0f46:  movl   $0x1,0x1c(%esi)
0875216d +0x0f4d:  movb   $0x14,0x14(%esi)
08752171 +0x0f51:  movb   $0x8,0xc(%esi)
08752175 +0x0f55:  movb   $0x8,0xd(%esi)
08752179 +0x0f59:  movl   $0x1,0x8(%esi)
08752180 +0x0f60:  movb   $0x0,0x4(%esp)
08752185 +0x0f65:  movl   $0x8,(%esp)
0875218c +0x0f6c:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08752191 +0x0f71:  mov    %eax,(%esp)
08752194 +0x0f74:  mov    %eax,-0x20(%ebp)
08752197 +0x0f77:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
0875219c +0x0f7c:  mov    -0x20(%ebp),%eax
0875219f +0x0f7f:  mov    %edi,(%esp)
087521a2 +0x0f82:  mov    %eax,0x4(%esp)
087521a6 +0x0f86:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
087521ab +0x0f8b:  movb   $0x0,0x4(%esp)
087521b0 +0x0f90:  add    $0xaf,%esi
087521b6 +0x0f96:  movl   $0x8,(%esp)
087521bd +0x0f9d:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087521c2 +0x0fa2:  mov    %eax,(%esp)
087521c5 +0x0fa5:  mov    %eax,-0x20(%ebp)
087521c8 +0x0fa8:  call   08798790 <_ZN5yaSSL3DESC1Ev>  ; yaSSL::DES::DES()
087521cd +0x0fad:  mov    -0x20(%ebp),%eax
087521d0 +0x0fb0:  mov    %edi,(%esp)
087521d3 +0x0fb3:  mov    %eax,0x4(%esp)
087521d7 +0x0fb7:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
087521dc +0x0fbc:  lea    -0x667dc0(%ebx),%eax
087521e2 +0x0fc2:  movl   $0x30,0x8(%esp)
087521ea +0x0fca:  mov    %eax,0x4(%esp)
087521ee +0x0fce:  mov    %esi,(%esp)
087521f1 +0x0fd1:  call   0807d8d0 <_init+0x1c8>
087521f6 +0x0fd6:  jmp    08751270 <+0x50>
087521fb +0x0fdb:  nop
087521fc +0x0fdc:  lea    0x0(%esi,%eiz,1),%esi
08752200 +0x0fe0:  movl   $0x1,0x4(%esi)
08752207 +0x0fe7:  movl   $0x2,0x10(%esi)
0875220e +0x0fee:  movl   $0x1,0x1c(%esi)
08752215 +0x0ff5:  movb   $0x14,0x14(%esi)
08752219 +0x0ff9:  movb   $0x10,0xc(%esi)
0875221d +0x0ffd:  movb   $0x0,0xd(%esi)
08752221 +0x1001:  movl   $0x0,0x8(%esi)
08752228 +0x1008:  movb   $0x0,0x4(%esp)
0875222d +0x100d:  movl   $0x8,(%esp)
08752234 +0x1014:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08752239 +0x1019:  mov    %eax,(%esp)
0875223c +0x101c:  mov    %eax,-0x20(%ebp)
0875223f +0x101f:  call   0879a190 <_ZN5yaSSL3SHAC1Ev>  ; yaSSL::SHA::SHA()
08752244 +0x1024:  mov    -0x20(%ebp),%eax
08752247 +0x1027:  mov    %edi,(%esp)
0875224a +0x102a:  mov    %eax,0x4(%esp)
0875224e +0x102e:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
08752253 +0x1033:  movb   $0x0,0x4(%esp)
08752258 +0x1038:  add    $0xaf,%esi
0875225e +0x103e:  movl   $0x8,(%esp)
08752265 +0x1045:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0875226a +0x104a:  mov    %eax,(%esp)
0875226d +0x104d:  mov    %eax,-0x20(%ebp)
08752270 +0x1050:  call   08798690 <_ZN5yaSSL3RC4C1Ev>  ; yaSSL::RC4::RC4()
08752275 +0x1055:  mov    -0x20(%ebp),%eax
08752278 +0x1058:  mov    %edi,(%esp)
0875227b +0x105b:  mov    %eax,0x4(%esp)
0875227f +0x105f:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
08752284 +0x1064:  lea    -0x667df9(%ebx),%eax
0875228a +0x106a:  movl   $0x30,0x8(%esp)
08752292 +0x1072:  mov    %eax,0x4(%esp)
08752296 +0x1076:  mov    %esi,(%esp)
08752299 +0x1079:  call   0807d8d0 <_init+0x1c8>
0875229e +0x107e:  jmp    08751270 <+0x50>
087522a3 +0x1083:  nop
087522a4 +0x1084:  lea    0x0(%esi,%eiz,1),%esi
087522a8 +0x1088:  movl   $0x1,0x4(%esi)
087522af +0x108f:  movl   $0x1,0x10(%esi)
087522b6 +0x1096:  movl   $0x1,0x1c(%esi)
087522bd +0x109d:  movb   $0x10,0x14(%esi)
087522c1 +0x10a1:  movb   $0x10,0xc(%esi)
087522c5 +0x10a5:  movb   $0x0,0xd(%esi)
087522c9 +0x10a9:  movl   $0x0,0x8(%esi)
087522d0 +0x10b0:  movb   $0x0,0x4(%esp)
087522d5 +0x10b5:  movl   $0x8,(%esp)
087522dc +0x10bc:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087522e1 +0x10c1:  mov    %eax,(%esp)
087522e4 +0x10c4:  mov    %eax,-0x20(%ebp)
087522e7 +0x10c7:  call   0879a110 <_ZN5yaSSL3MD5C1Ev>  ; yaSSL::MD5::MD5()
087522ec +0x10cc:  mov    -0x20(%ebp),%eax
087522ef +0x10cf:  mov    %edi,(%esp)
087522f2 +0x10d2:  mov    %eax,0x4(%esp)
087522f6 +0x10d6:  call   0874e810 <_ZN5yaSSL6Crypto9setDigestEPNS_6DigestE>  ; yaSSL::Crypto::setDigest(yaSSL::Digest*)
087522fb +0x10db:  movb   $0x0,0x4(%esp)
08752300 +0x10e0:  add    $0xaf,%esi
08752306 +0x10e6:  movl   $0x8,(%esp)
0875230d +0x10ed:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08752312 +0x10f2:  mov    %eax,(%esp)
08752315 +0x10f5:  mov    %eax,-0x20(%ebp)
08752318 +0x10f8:  call   08798690 <_ZN5yaSSL3RC4C1Ev>  ; yaSSL::RC4::RC4()
0875231d +0x10fd:  mov    -0x20(%ebp),%eax
08752320 +0x1100:  mov    %edi,(%esp)
08752323 +0x1103:  mov    %eax,0x4(%esp)
08752327 +0x1107:  call   0874e820 <_ZN5yaSSL6Crypto9setCipherEPNS_10BulkCipherE>  ; yaSSL::Crypto::setCipher(yaSSL::BulkCipher*)
0875232c +0x110c:  lea    -0x667e01(%ebx),%eax
08752332 +0x1112:  movl   $0x30,0x8(%esp)
0875233a +0x111a:  mov    %eax,0x4(%esp)
0875233e +0x111e:  mov    %esi,(%esp)
08752341 +0x1121:  call   0807d8d0 <_init+0x1c8>
08752346 +0x1126:  jmp    08751270 <+0x50>
0875234b +0x112b:  nop
0875234c +0x112c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL::set_pending @ 0x8751220

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::set_pending(unsigned char) */

void __thiscall yaSSL::SSL::set_pending(SSL *this,uchar param_1)

{
  Security *this_00;
  int iVar1;
  RMD *pRVar2;
  AES *pAVar3;
  DES_EDE *pDVar4;
  int iVar5;
  SHA *pSVar6;
  DES *pDVar7;
  RC4 *pRVar8;
  MD5 *this_01;
  uint in_stack_ffffffc8;
  uint3 uVar9;
  
  this_00 = (Security *)(this + 0x68);
  iVar1 = Security::use_parms(this_00);
  uVar9 = (uint3)(in_stack_ffffffc8 >> 8);
  switch(param_1) {
  case '\x04':
    *(undefined4 *)(iVar1 + 4) = 1;
    *(undefined4 *)(iVar1 + 0x10) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x10;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    this_01 = operator_new(8,(uint)uVar9 << 8);
    MD5::MD5(this_01);
    Crypto::setDigest((Crypto *)this,(Digest *)this_01);
    pRVar8 = operator_new(8,(uint)this_01 & 0xffffff00);
    RC4::RC4(pRVar8);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pRVar8);
    strncpy((char *)(iVar1 + 0xaf),"RC4-MD5",0x30);
    break;
  case '\x05':
    *(undefined4 *)(iVar1 + 4) = 1;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pRVar8 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    RC4::RC4(pRVar8);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pRVar8);
    strncpy((char *)(iVar1 + 0xaf),"RC4-SHA",0x30);
    break;
  default:
    SetError(this,0x68);
    break;
  case '\t':
    *(undefined4 *)(iVar1 + 4) = 3;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 8;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar7 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES::DES(pDVar7);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar7);
    strncpy((char *)(iVar1 + 0xaf),"DES-CBC-SHA",0x30);
    break;
  case '\n':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar4 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DES-CBC3-SHA",0x30);
    break;
  case '\x12':
    *(undefined4 *)(iVar1 + 4) = 3;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 8;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar7 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES::DES(pDVar7);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar7);
    strncpy((char *)(iVar1 + 0xaf),"EDH-DSS-DES-CBC-SHA",0x30);
    break;
  case '\x13':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar4 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"EDH-DSS-DES-CBC3-SHA",0x30);
    break;
  case '\x15':
    *(undefined4 *)(iVar1 + 4) = 3;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 8;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar7 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES::DES(pDVar7);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar7);
    strncpy((char *)(iVar1 + 0xaf),"EDH-RSA-DES-CBC-SHA",0x30);
    break;
  case '\x16':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pDVar4 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"EDH-RSA-DES-CBC3-SHA",0x30);
    break;
  case '/':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES128-SHA",0x30);
    break;
  case '2':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES128-SHA",0x30);
    break;
  case '3':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES128-SHA",0x30);
    break;
  case '5':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pSVar6 = operator_new(8,(uint)uVar9 << 8);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES256-SHA",0x30);
    break;
  case '8':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES256-SHA",0x30);
    break;
  case '9':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 2;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pSVar6 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    SHA::SHA(pSVar6);
    Crypto::setDigest((Crypto *)this,(Digest *)pSVar6);
    pAVar3 = operator_new(8,(uint)pSVar6 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES256-SHA",0x30);
    break;
  case 'r':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pDVar4 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-DES-CBC3-RMD",0x30);
    break;
  case 's':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES128-RMD",0x30);
    break;
  case 't':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 2;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-DSS-AES256-RMD",0x30);
    break;
  case 'w':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pDVar4 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-DES-CBC3-RMD",0x30);
    break;
  case 'x':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES128-RMD",0x30);
    break;
  case 'y':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    iVar5 = Security::use_connection(this_00);
    *(undefined1 *)(iVar5 + 0x128) = 1;
    pRVar2 = operator_new(8,in_stack_ffffffc8 & 0xffffff00);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"DHE-RSA-AES256-RMD",0x30);
    break;
  case '|':
    *(undefined4 *)(iVar1 + 4) = 4;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x18;
    *(undefined1 *)(iVar1 + 0xd) = 8;
    *(undefined4 *)(iVar1 + 8) = 1;
    pRVar2 = operator_new(8,(uint)uVar9 << 8);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pDVar4 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    DES_EDE::DES_EDE(pDVar4);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pDVar4);
    strncpy((char *)(iVar1 + 0xaf),"DES-CBC3-RMD",0x30);
    break;
  case '}':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x10;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pRVar2 = operator_new(8,(uint)uVar9 << 8);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x10);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES128-RMD",0x30);
    break;
  case '~':
    *(undefined4 *)(iVar1 + 4) = 7;
    *(undefined4 *)(iVar1 + 0x10) = 3;
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined1 *)(iVar1 + 0x14) = 0x14;
    *(undefined1 *)(iVar1 + 0xc) = 0x20;
    *(undefined1 *)(iVar1 + 0xd) = 0x10;
    *(undefined4 *)(iVar1 + 8) = 1;
    pRVar2 = operator_new(8,(uint)uVar9 << 8);
    RMD::RMD(pRVar2);
    Crypto::setDigest((Crypto *)this,(Digest *)pRVar2);
    pAVar3 = operator_new(8,(uint)pRVar2 & 0xffffff00);
    AES::AES(pAVar3,0x20);
    Crypto::setCipher((Crypto *)this,(BulkCipher *)pAVar3);
    strncpy((char *)(iVar1 + 0xaf),"AES256-RMD",0x30);
  }
  return;
}
```
