# Process

`_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::Data::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Data` | `0x08749a90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749a90  _ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::Data::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08749a90, 0x08749e39]
08749a90 +0x000:  push   %ebp
08749a91 +0x001:  mov    %esp,%ebp
08749a93 +0x003:  push   %edi
08749a94 +0x004:  push   %esi
08749a95 +0x005:  push   %ebx
08749a96 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08749a9b +0x00b:  add    $0xc230fd,%ebx
08749aa1 +0x011:  sub    $0x9c,%esp
08749aa7 +0x017:  mov    0x10(%ebp),%eax
08749aaa +0x01a:  mov    0xc(%ebp),%edi
08749aad +0x01d:  mov    %eax,(%esp)
08749ab0 +0x020:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08749ab5 +0x025:  mov    %eax,(%esp)
08749ab8 +0x028:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08749abd +0x02d:  mov    0x10(%ebp),%edx
08749ac0 +0x030:  movzwl 0x2a(%eax),%esi
08749ac4 +0x034:  mov    %edx,(%esp)
08749ac7 +0x037:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08749acc +0x03c:  mov    %eax,(%esp)
08749acf +0x03f:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08749ad4 +0x044:  cmpl   $0x1,0x8(%eax)
08749ad8 +0x048:  je     08749da8 <+0x318>
08749ade +0x04e:  movl   $0x0,-0x5c(%ebp)
08749ae5 +0x055:  movl   $0x0,-0x70(%ebp)
08749aec +0x05c:  movl   $0x0,-0x6c(%ebp)
08749af3 +0x063:  mov    0x10(%ebp),%eax
08749af6 +0x066:  mov    %eax,(%esp)
08749af9 +0x069:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
08749afe +0x06e:  mov    %eax,(%esp)
08749b01 +0x071:  call   0874e750 <_ZNK5yaSSL6Crypto10get_digestEv>  ; yaSSL::Crypto::get_digest() const
08749b06 +0x076:  mov    (%eax),%edx
08749b08 +0x078:  mov    %eax,(%esp)
08749b0b +0x07b:  call   *0xc(%edx)
08749b0e +0x07e:  mov    -0x6c(%ebp),%edx
08749b11 +0x081:  sub    -0x5c(%ebp),%esi
08749b14 +0x084:  mov    %edi,(%esp)
08749b17 +0x087:  mov    %esi,-0x60(%ebp)
08749b1a +0x08a:  sub    %eax,-0x60(%ebp)
08749b1d +0x08d:  sub    %edx,-0x60(%ebp)
08749b20 +0x090:  mov    %eax,-0x64(%ebp)
08749b23 +0x093:  mov    -0x70(%ebp),%eax
08749b26 +0x096:  sub    %eax,-0x60(%ebp)
08749b29 +0x099:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08749b2e +0x09e:  mov    %edi,(%esp)
08749b31 +0x0a1:  mov    %eax,-0x68(%ebp)
08749b34 +0x0a4:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08749b39 +0x0a9:  mov    -0x60(%ebp),%ecx
08749b3c +0x0ac:  test   %ecx,%ecx
08749b3e +0x0ae:  mov    %eax,-0x5c(%ebp)
08749b41 +0x0b1:  je     08749bfb <+0x16b>
08749b47 +0x0b7:  mov    0x10(%ebp),%edx
08749b4a +0x0ba:  mov    %edx,(%esp)
08749b4d +0x0bd:  call   0874e9d0 <_ZNK5yaSSL3SSL13CompressionOnEv>  ; yaSSL::SSL::CompressionOn() const
08749b52 +0x0c2:  test   %al,%al
08749b54 +0x0c4:  jne    08749c80 <+0x1f0>
08749b5a +0x0ca:  movb   $0x0,0x4(%esp)
08749b5f +0x0cf:  movl   $0x10,(%esp)
08749b66 +0x0d6:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08749b6b +0x0db:  mov    -0x60(%ebp),%edx
08749b6e +0x0de:  mov    %edx,0x4(%esp)
08749b72 +0x0e2:  mov    %eax,%esi
08749b74 +0x0e4:  mov    %eax,(%esp)
08749b77 +0x0e7:  call   087972e0 <_ZN5yaSSL12input_bufferC1Ej>  ; yaSSL::input_buffer::input_buffer(unsigned int)
08749b7c +0x0ec:  mov    0x10(%ebp),%eax
08749b7f +0x0ef:  mov    %esi,0x4(%esp)
08749b83 +0x0f3:  mov    %eax,(%esp)
08749b86 +0x0f6:  call   08752690 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE>  ; yaSSL::SSL::addData(yaSSL::input_buffer*)
08749b8b +0x0fb:  mov    %esi,(%esp)
08749b8e +0x0fe:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08749b93 +0x103:  mov    -0x60(%ebp),%edx
08749b96 +0x106:  mov    %edi,(%esp)
08749b99 +0x109:  mov    %edx,0x8(%esp)
08749b9d +0x10d:  mov    %eax,0x4(%esp)
08749ba1 +0x111:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08749ba6 +0x116:  mov    -0x60(%ebp),%eax
08749ba9 +0x119:  mov    %esi,(%esp)
08749bac +0x11c:  mov    %eax,0x4(%esp)
08749bb0 +0x120:  call   08796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>  ; yaSSL::input_buffer::add_size(unsigned int)
08749bb5 +0x125:  mov    0x10(%ebp),%edx
08749bb8 +0x128:  mov    -0x68(%ebp),%esi
08749bbb +0x12b:  add    -0x5c(%ebp),%esi
08749bbe +0x12e:  mov    %edx,(%esp)
08749bc1 +0x131:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
08749bc6 +0x136:  test   %al,%al
08749bc8 +0x138:  je     08749d50 <+0x2c0>
08749bce +0x13e:  mov    -0x60(%ebp),%eax
08749bd1 +0x141:  mov    0x10(%ebp),%edx
08749bd4 +0x144:  movl   $0x1,0x14(%esp)
08749bdc +0x14c:  movl   $0x17,0x10(%esp)
08749be4 +0x154:  mov    %eax,0xc(%esp)
08749be8 +0x158:  lea    -0x3c(%ebp),%eax
08749beb +0x15b:  mov    %esi,0x8(%esp)
08749bef +0x15f:  mov    %eax,0x4(%esp)
08749bf3 +0x163:  mov    %edx,(%esp)
08749bf6 +0x166:  call   0879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
08749bfb +0x16b:  mov    -0x64(%ebp),%eax
08749bfe +0x16e:  lea    -0x50(%ebp),%edx
08749c01 +0x171:  mov    %edx,-0x68(%ebp)
08749c04 +0x174:  mov    %edx,0x4(%esp)
08749c08 +0x178:  mov    %edi,(%esp)
08749c0b +0x17b:  mov    %eax,0x8(%esp)
08749c0f +0x17f:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08749c14 +0x184:  mov    -0x6c(%ebp),%edx
08749c17 +0x187:  test   %edx,%edx
08749c19 +0x189:  je     08749c45 <+0x1b5>
08749c1b +0x18b:  mov    %edi,-0x5c(%ebp)
08749c1e +0x18e:  mov    -0x6c(%ebp),%edi
08749c21 +0x191:  xor    %esi,%esi
08749c23 +0x193:  nop
08749c24 +0x194:  lea    0x0(%esi,%eiz,1),%esi
08749c28 +0x198:  mov    -0x5c(%ebp),%eax
08749c2b +0x19b:  add    $0x1,%esi
08749c2e +0x19e:  movl   $0xfeedbeef,0x4(%esp)
08749c36 +0x1a6:  mov    %eax,(%esp)
08749c39 +0x1a9:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749c3e +0x1ae:  cmp    %esi,%edi
08749c40 +0x1b0:  jg     08749c28 <+0x198>
08749c42 +0x1b2:  mov    -0x5c(%ebp),%edi
08749c45 +0x1b5:  mov    -0x70(%ebp),%eax
08749c48 +0x1b8:  test   %eax,%eax
08749c4a +0x1ba:  jne    08749d38 <+0x2a8>
08749c50 +0x1c0:  mov    -0x60(%ebp),%esi
08749c53 +0x1c3:  test   %esi,%esi
08749c55 +0x1c5:  je     08749d18 <+0x288>
08749c5b +0x1cb:  mov    -0x64(%ebp),%edx
08749c5e +0x1ce:  lea    -0x3c(%ebp),%edi
08749c61 +0x1d1:  mov    -0x68(%ebp),%esi
08749c64 +0x1d4:  cmp    %edx,%edx
08749c66 +0x1d6:  mov    %edx,%ecx
08749c68 +0x1d8:  repz cmpsb %es:(%edi),%ds:(%esi)
08749c6a +0x1da:  jne    08749d88 <+0x2f8>
08749c70 +0x1e0:  add    $0x9c,%esp
08749c76 +0x1e6:  pop    %ebx
08749c77 +0x1e7:  pop    %esi
08749c78 +0x1e8:  pop    %edi
08749c79 +0x1e9:  pop    %ebp
08749c7a +0x1ea:  ret
08749c7b +0x1eb:  nop
08749c7c +0x1ec:  lea    0x0(%esi,%eiz,1),%esi
08749c80 +0x1f0:  lea    -0x28(%ebp),%esi
08749c83 +0x1f3:  mov    %esi,(%esp)
08749c86 +0x1f6:  call   08796d00 <_ZN5yaSSL12input_bufferC1Ev>  ; yaSSL::input_buffer::input_buffer()
08749c8b +0x1fb:  mov    -0x60(%ebp),%eax
08749c8e +0x1fe:  mov    %esi,0x8(%esp)
08749c92 +0x202:  mov    %edi,(%esp)
08749c95 +0x205:  mov    %eax,0x4(%esp)
08749c99 +0x209:  call   0874f0a0 <_ZN5yaSSL10DeCompressERNS_12input_bufferEiS1_>  ; yaSSL::DeCompress(yaSSL::input_buffer&, int, yaSSL::input_buffer&)
08749c9e +0x20e:  cmp    $0xffffffff,%eax
08749ca1 +0x211:  je     08749df5 <+0x365>
08749ca7 +0x217:  mov    %esi,(%esp)
08749caa +0x21a:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
08749caf +0x21f:  mov    %esi,(%esp)
08749cb2 +0x222:  mov    %eax,-0x74(%ebp)
08749cb5 +0x225:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08749cba +0x22a:  mov    %esi,(%esp)
08749cbd +0x22d:  mov    %eax,-0x78(%ebp)
08749cc0 +0x230:  call   08796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>  ; yaSSL::input_buffer::get_size() const
08749cc5 +0x235:  movb   $0x0,0x4(%esp)
08749cca +0x23a:  movl   $0x10,(%esp)
08749cd1 +0x241:  mov    %eax,-0x7c(%ebp)
08749cd4 +0x244:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08749cd9 +0x249:  mov    -0x7c(%ebp),%edx
08749cdc +0x24c:  mov    -0x78(%ebp),%ecx
08749cdf +0x24f:  mov    %edx,0xc(%esp)
08749ce3 +0x253:  mov    -0x74(%ebp),%edx
08749ce6 +0x256:  mov    %ecx,0x8(%esp)
08749cea +0x25a:  mov    %eax,(%esp)
08749ced +0x25d:  mov    %eax,-0x78(%ebp)
08749cf0 +0x260:  mov    %edx,0x4(%esp)
08749cf4 +0x264:  call   08797270 <_ZN5yaSSL12input_bufferC1EjPKhj>  ; yaSSL::input_buffer::input_buffer(unsigned int, unsigned char const*, unsigned int)
08749cf9 +0x269:  mov    -0x78(%ebp),%eax
08749cfc +0x26c:  mov    %eax,0x4(%esp)
08749d00 +0x270:  mov    0x10(%ebp),%eax
08749d03 +0x273:  mov    %eax,(%esp)
08749d06 +0x276:  call   08752690 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE>  ; yaSSL::SSL::addData(yaSSL::input_buffer*)
08749d0b +0x27b:  mov    %esi,(%esp)
08749d0e +0x27e:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08749d13 +0x283:  jmp    08749bb5 <+0x125>
08749d18 +0x288:  mov    0x10(%ebp),%edx
08749d1b +0x28b:  movl   $0x1,0x4(%esp)
08749d23 +0x293:  mov    %edx,(%esp)
08749d26 +0x296:  call   0874ed10 <_ZN5yaSSL3SSL16get_SEQIncrementEb>  ; yaSSL::SSL::get_SEQIncrement(bool)
08749d2b +0x29b:  add    $0x9c,%esp
08749d31 +0x2a1:  pop    %ebx
08749d32 +0x2a2:  pop    %esi
08749d33 +0x2a3:  pop    %edi
08749d34 +0x2a4:  pop    %ebp
08749d35 +0x2a5:  ret
08749d36 +0x2a6:  xchg   %ax,%ax
08749d38 +0x2a8:  movl   $0xfeedbeef,0x4(%esp)
08749d40 +0x2b0:  mov    %edi,(%esp)
08749d43 +0x2b3:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08749d48 +0x2b8:  jmp    08749c50 <+0x1c0>
08749d4d +0x2bd:  lea    0x0(%esi),%esi
08749d50 +0x2c0:  mov    -0x60(%ebp),%eax
08749d53 +0x2c3:  mov    0x10(%ebp),%edx
08749d56 +0x2c6:  movl   $0x1,0x14(%esp)
08749d5e +0x2ce:  movl   $0x17,0x10(%esp)
08749d66 +0x2d6:  mov    %eax,0xc(%esp)
08749d6a +0x2da:  lea    -0x3c(%ebp),%eax
08749d6d +0x2dd:  mov    %esi,0x8(%esp)
08749d71 +0x2e1:  mov    %eax,0x4(%esp)
08749d75 +0x2e5:  mov    %edx,(%esp)
08749d78 +0x2e8:  call   0879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
08749d7d +0x2ed:  jmp    08749bfb <+0x16b>
08749d82 +0x2f2:  lea    0x0(%esi),%esi
08749d88 +0x2f8:  mov    0x10(%ebp),%eax
08749d8b +0x2fb:  movl   $0x70,0x4(%esp)
08749d93 +0x303:  mov    %eax,(%esp)
08749d96 +0x306:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08749d9b +0x30b:  add    $0x9c,%esp
08749da1 +0x311:  pop    %ebx
08749da2 +0x312:  pop    %esi
08749da3 +0x313:  pop    %edi
08749da4 +0x314:  pop    %ebp
08749da5 +0x315:  ret
08749da6 +0x316:  xchg   %ax,%ax
08749da8 +0x318:  mov    0x10(%ebp),%eax
08749dab +0x31b:  mov    %eax,(%esp)
08749dae +0x31e:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
08749db3 +0x323:  movl   $0x0,-0x60(%ebp)
08749dba +0x32a:  movl   $0x0,-0x5c(%ebp)
08749dc1 +0x331:  test   %al,%al
08749dc3 +0x333:  jne    08749e15 <+0x385>
08749dc5 +0x335:  mov    %edi,(%esp)
08749dc8 +0x338:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
08749dcd +0x33d:  mov    %edi,(%esp)
08749dd0 +0x340:  mov    %eax,-0x7c(%ebp)
08749dd3 +0x343:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08749dd8 +0x348:  mov    -0x7c(%ebp),%edx
08749ddb +0x34b:  lea    -0x1(%esi,%eax,1),%eax
08749ddf +0x34f:  sub    -0x60(%ebp),%eax
08749de2 +0x352:  movzbl (%edx,%eax,1),%eax
08749de6 +0x356:  movl   $0x1,-0x70(%ebp)
08749ded +0x35d:  mov    %eax,-0x6c(%ebp)
08749df0 +0x360:  jmp    08749af3 <+0x63>
08749df5 +0x365:  mov    0x10(%ebp),%edx
08749df8 +0x368:  movl   $0x77,0x4(%esp)
08749e00 +0x370:  mov    %edx,(%esp)
08749e03 +0x373:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
08749e08 +0x378:  mov    %esi,(%esp)
08749e0b +0x37b:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08749e10 +0x380:  jmp    08749c70 <+0x1e0>
08749e15 +0x385:  mov    0x10(%ebp),%edx
08749e18 +0x388:  mov    %edx,(%esp)
08749e1b +0x38b:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
08749e20 +0x390:  mov    %eax,(%esp)
08749e23 +0x393:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
08749e28 +0x398:  mov    (%eax),%edx
08749e2a +0x39a:  mov    %eax,(%esp)
08749e2d +0x39d:  call   *0x10(%edx)
08749e30 +0x3a0:  mov    %eax,-0x5c(%ebp)
08749e33 +0x3a3:  mov    %eax,-0x60(%ebp)
08749e36 +0x3a6:  jmp    08749dc5 <+0x335>
08749e38 +0x3a8:  nop
08749e39 +0x3a9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Data::Process @ 0x8749a90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Data::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Data::Process(Data *this,input_buffer *param_1,SSL *param_2)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  Security *pSVar4;
  int iVar5;
  Crypto *pCVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  input_buffer *piVar10;
  uchar *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uchar *puVar15;
  bool bVar16;
  byte bVar17;
  uint in_stack_ffffff58;
  uint uVar18;
  int local_74;
  uint local_70;
  int local_60;
  uchar local_54 [20];
  uchar local_40 [20];
  input_buffer local_2c [24];
  undefined4 uStack_14;
  
  bVar17 = 0;
  uStack_14 = 0x8749a9b;
  pSVar4 = (Security *)SSL::getSecurity(param_2);
  iVar5 = Security::get_parms(pSVar4);
  uVar2 = *(ushort *)(iVar5 + 0x2a);
  pSVar4 = (Security *)SSL::getSecurity(param_2);
  iVar5 = Security::get_parms(pSVar4);
  if (*(int *)(iVar5 + 8) == 1) {
    cVar3 = SSL::isTLSv1_1(param_2);
    local_60 = 0;
    if (cVar3 != '\0') {
      pCVar6 = (Crypto *)SSL::getCrypto(param_2);
      piVar7 = (int *)Crypto::get_cipher(pCVar6);
      local_60 = (**(code **)(*piVar7 + 0x10))(piVar7);
    }
    iVar5 = input_buffer::get_buffer(param_1);
    iVar9 = input_buffer::get_current(param_1);
    local_70 = (uint)*(byte *)(iVar5 + (((uVar2 - 1) + iVar9) - local_60));
    local_74 = 1;
  }
  else {
    local_60 = 0;
    local_74 = 0;
    local_70 = 0;
  }
  pCVar6 = (Crypto *)SSL::getCrypto(param_2);
  piVar7 = (int *)Crypto::get_digest(pCVar6);
  uVar8 = (**(code **)(*piVar7 + 0xc))(piVar7);
  uVar1 = ((((uint)uVar2 - local_60) - uVar8) - local_70) - local_74;
  iVar5 = input_buffer::get_buffer(param_1);
  iVar9 = input_buffer::get_current(param_1);
  if (uVar1 != 0) {
    cVar3 = SSL::CompressionOn(param_2);
    if (cVar3 == '\0') {
      piVar10 = operator_new(0x10,in_stack_ffffff58 & 0xffffff00);
      input_buffer::input_buffer(piVar10,uVar1);
      SSL::addData(param_2,piVar10);
      puVar11 = (uchar *)input_buffer::get_buffer(piVar10);
      input_buffer::read(param_1,puVar11,uVar1);
      input_buffer::add_size(piVar10,uVar1);
    }
    else {
      input_buffer::input_buffer(local_2c);
      uVar18 = uVar1;
      iVar12 = DeCompress(param_1,uVar1,local_2c);
      if (iVar12 == -1) {
        SSL::SetError(param_2,0x77);
        input_buffer::~input_buffer(local_2c);
        return;
      }
      uVar13 = input_buffer::get_size(local_2c);
      puVar11 = (uchar *)input_buffer::get_buffer(local_2c);
      uVar14 = input_buffer::get_size(local_2c);
      piVar10 = operator_new(0x10,uVar18 & 0xffffff00);
      input_buffer::input_buffer(piVar10,uVar13,puVar11,uVar14);
      SSL::addData(param_2,piVar10);
      input_buffer::~input_buffer(local_2c);
    }
    cVar3 = SSL::isTLS(param_2);
    if (cVar3 == '\0') {
      hmac(param_2,local_40,iVar5 + iVar9,uVar1,0x17,1);
    }
    else {
      TLS_hmac(param_2,local_40,iVar5 + iVar9,uVar1,0x17,1);
    }
  }
  input_buffer::read(param_1,local_54,uVar8);
  if (local_70 != 0) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      input_buffer::operator[]((uint)param_1);
    } while (iVar5 < (int)local_70);
  }
  if (local_74 != 0) {
    input_buffer::operator[]((uint)param_1);
  }
  if (uVar1 == 0) {
    SSL::get_SEQIncrement(param_2,true);
    return;
  }
  bVar16 = true;
  puVar11 = local_54;
  puVar15 = local_40;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar16 = *puVar11 == *puVar15;
    puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
    puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
  } while (bVar16);
  if (bVar16) {
    return;
  }
  SSL::SetError(param_2,0x70);
  return;
}
```
