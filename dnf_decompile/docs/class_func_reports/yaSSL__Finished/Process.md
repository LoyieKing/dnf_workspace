# Process

`_ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::Finished::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::Finished` | `0x08748020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748020  _ZN5yaSSL8Finished7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::Finished::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08748020, 0x08748319]
08748020 +0x000:  push   %ebp
08748021 +0x001:  mov    %esp,%ebp
08748023 +0x003:  push   %edi
08748024 +0x004:  push   %esi
08748025 +0x005:  push   %ebx
08748026 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874802b +0x00b:  add    $0xc24b6d,%ebx
08748031 +0x011:  sub    $0x6c,%esp
08748034 +0x014:  mov    0x10(%ebp),%eax
08748037 +0x017:  mov    %eax,(%esp)
0874803a +0x01a:  call   0874e090 <_ZNK5yaSSL3SSL9getHashesEv>  ; yaSSL::SSL::getHashes() const
0874803f +0x01f:  mov    %eax,(%esp)
08748042 +0x022:  call   0874e850 <_ZNK5yaSSL9sslHashes10get_verifyEv>  ; yaSSL::sslHashes::get_verify() const
08748047 +0x027:  mov    0x10(%ebp),%edx
0874804a +0x02a:  mov    %edx,(%esp)
0874804d +0x02d:  mov    %eax,%edi
0874804f +0x02f:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
08748054 +0x034:  mov    0x8(%ebp),%esi
08748057 +0x037:  cmp    $0x1,%al
08748059 +0x039:  sbb    %ecx,%ecx
0874805b +0x03b:  and    $0x18,%ecx
0874805e +0x03e:  add    $0x10,%ecx
08748061 +0x041:  cmp    $0x1,%al
08748063 +0x043:  mov    0xc(%ebp),%eax
08748066 +0x046:  sbb    %edx,%edx
08748068 +0x048:  add    $0x8,%esi
0874806b +0x04b:  and    $0x18,%edx
0874806e +0x04e:  add    $0x8,%edi
08748071 +0x051:  add    $0xc,%edx
08748074 +0x054:  mov    %ecx,-0x4c(%ebp)
08748077 +0x057:  mov    %edx,0x8(%esp)
0874807b +0x05b:  mov    %esi,0x4(%esp)
0874807f +0x05f:  mov    %edx,-0x58(%ebp)
08748082 +0x062:  mov    %eax,(%esp)
08748085 +0x065:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874808a +0x06a:  mov    -0x58(%ebp),%edx
0874808d +0x06d:  cmp    %edx,%edx
0874808f +0x06f:  mov    %edx,%ecx
08748091 +0x071:  repz cmpsb %es:(%edi),%ds:(%esi)
08748093 +0x073:  jne    08748278 <+0x258>
08748099 +0x079:  mov    0x10(%ebp),%ecx
0874809c +0x07c:  mov    %edx,-0x58(%ebp)
0874809f +0x07f:  mov    %ecx,(%esp)
087480a2 +0x082:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
087480a7 +0x087:  mov    -0x58(%ebp),%edx
087480aa +0x08a:  test   %al,%al
087480ac +0x08c:  jne    08748220 <+0x200>
087480b2 +0x092:  mov    0xc(%ebp),%eax
087480b5 +0x095:  mov    %edx,-0x58(%ebp)
087480b8 +0x098:  mov    %eax,(%esp)
087480bb +0x09b:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
087480c0 +0x0a0:  mov    0xc(%ebp),%ecx
087480c3 +0x0a3:  mov    %ecx,(%esp)
087480c6 +0x0a6:  mov    %eax,%esi
087480c8 +0x0a8:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
087480cd +0x0ad:  mov    -0x4c(%ebp),%ecx
087480d0 +0x0b0:  movl   $0x1,0x14(%esp)
087480d8 +0x0b8:  movl   $0x16,0x10(%esp)
087480e0 +0x0c0:  mov    %ecx,0xc(%esp)
087480e4 +0x0c4:  sub    %ecx,%eax
087480e6 +0x0c6:  mov    0x10(%ebp),%ecx
087480e9 +0x0c9:  lea    (%esi,%eax,1),%eax
087480ec +0x0cc:  mov    %eax,0x8(%esp)
087480f0 +0x0d0:  lea    -0x2c(%ebp),%eax
087480f3 +0x0d3:  mov    %eax,-0x54(%ebp)
087480f6 +0x0d6:  mov    %eax,0x4(%esp)
087480fa +0x0da:  mov    %ecx,(%esp)
087480fd +0x0dd:  call   0879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
08748102 +0x0e2:  mov    -0x58(%ebp),%edx
08748105 +0x0e5:  mov    0x10(%ebp),%eax
08748108 +0x0e8:  mov    %edx,-0x58(%ebp)
0874810b +0x0eb:  mov    %eax,(%esp)
0874810e +0x0ee:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
08748113 +0x0f3:  mov    %eax,(%esp)
08748116 +0x0f6:  call   0874e750 <_ZNK5yaSSL6Crypto10get_digestEv>  ; yaSSL::Crypto::get_digest() const
0874811b +0x0fb:  mov    (%eax),%ecx
0874811d +0x0fd:  mov    %eax,(%esp)
08748120 +0x100:  call   *0xc(%ecx)
08748123 +0x103:  lea    -0x40(%ebp),%ecx
08748126 +0x106:  mov    %ecx,-0x50(%ebp)
08748129 +0x109:  mov    %ecx,0x4(%esp)
0874812d +0x10d:  mov    %eax,-0x4c(%ebp)
08748130 +0x110:  mov    %eax,0x8(%esp)
08748134 +0x114:  mov    0xc(%ebp),%eax
08748137 +0x117:  mov    %eax,(%esp)
0874813a +0x11a:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874813f +0x11f:  mov    0x10(%ebp),%ecx
08748142 +0x122:  mov    %ecx,(%esp)
08748145 +0x125:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874814a +0x12a:  mov    %eax,(%esp)
0874814d +0x12d:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08748152 +0x132:  mov    -0x58(%ebp),%edx
08748155 +0x135:  cmpl   $0x1,0x8(%eax)
08748159 +0x139:  je     087482b8 <+0x298>
0874815f +0x13f:  xor    %esi,%esi
08748161 +0x141:  mov    0x10(%ebp),%eax
08748164 +0x144:  mov    %edx,-0x58(%ebp)
08748167 +0x147:  mov    %eax,(%esp)
0874816a +0x14a:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874816f +0x14f:  mov    %eax,(%esp)
08748172 +0x152:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
08748177 +0x157:  mov    -0x58(%ebp),%edx
0874817a +0x15a:  mov    $0xfffffffc,%ecx
0874817f +0x15f:  sub    %edx,%ecx
08748181 +0x161:  sub    -0x4c(%ebp),%ecx
08748184 +0x164:  movzwl 0x2a(%eax),%edi
08748188 +0x168:  sub    %esi,%edi
0874818a +0x16a:  lea    (%ecx,%edi,1),%edi
0874818d +0x16d:  test   %edi,%edi
0874818f +0x16f:  jle    087481b2 <+0x192>
08748191 +0x171:  xor    %esi,%esi
08748193 +0x173:  nop
08748194 +0x174:  lea    0x0(%esi,%eiz,1),%esi
08748198 +0x178:  mov    0xc(%ebp),%edx
0874819b +0x17b:  add    $0x1,%esi
0874819e +0x17e:  movl   $0xfeedbeef,0x4(%esp)
087481a6 +0x186:  mov    %edx,(%esp)
087481a9 +0x189:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
087481ae +0x18e:  cmp    %esi,%edi
087481b0 +0x190:  jg     08748198 <+0x178>
087481b2 +0x192:  mov    -0x4c(%ebp),%ecx
087481b5 +0x195:  mov    -0x50(%ebp),%esi
087481b8 +0x198:  mov    -0x54(%ebp),%edi
087481bb +0x19b:  cmp    %ecx,%ecx
087481bd +0x19d:  repz cmpsb %es:(%edi),%ds:(%esi)
087481bf +0x19f:  jne    08748298 <+0x278>
087481c5 +0x1a5:  mov    0x10(%ebp),%edx
087481c8 +0x1a8:  mov    %edx,(%esp)
087481cb +0x1ab:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
087481d0 +0x1b0:  mov    %eax,(%esp)
087481d3 +0x1b3:  call   0874df10 <_ZN5yaSSL6States12useHandShakeEv>  ; yaSSL::States::useHandShake()
087481d8 +0x1b8:  mov    0x10(%ebp),%ecx
087481db +0x1bb:  movl   $0x3,(%eax)
087481e1 +0x1c1:  mov    %ecx,(%esp)
087481e4 +0x1c4:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087481e9 +0x1c9:  mov    %eax,(%esp)
087481ec +0x1cc:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
087481f1 +0x1d1:  cmpl   $0x1,(%eax)
087481f4 +0x1d4:  je     087482f8 <+0x2d8>
087481fa +0x1da:  mov    0x10(%ebp),%edx
087481fd +0x1dd:  mov    %edx,(%esp)
08748200 +0x1e0:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
08748205 +0x1e5:  mov    %eax,(%esp)
08748208 +0x1e8:  call   0874df30 <_ZN5yaSSL6States9useServerEv>  ; yaSSL::States::useServer()
0874820d +0x1ed:  movl   $0x3,(%eax)
08748213 +0x1f3:  add    $0x6c,%esp
08748216 +0x1f6:  pop    %ebx
08748217 +0x1f7:  pop    %esi
08748218 +0x1f8:  pop    %edi
08748219 +0x1f9:  pop    %ebp
0874821a +0x1fa:  ret
0874821b +0x1fb:  nop
0874821c +0x1fc:  lea    0x0(%esi,%eiz,1),%esi
08748220 +0x200:  mov    0xc(%ebp),%eax
08748223 +0x203:  mov    %eax,(%esp)
08748226 +0x206:  call   08796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>  ; yaSSL::input_buffer::get_buffer() const
0874822b +0x20b:  mov    0xc(%ebp),%ecx
0874822e +0x20e:  mov    %ecx,(%esp)
08748231 +0x211:  mov    %eax,%esi
08748233 +0x213:  call   08796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>  ; yaSSL::input_buffer::get_current() const
08748238 +0x218:  mov    -0x4c(%ebp),%ecx
0874823b +0x21b:  movl   $0x1,0x14(%esp)
08748243 +0x223:  movl   $0x16,0x10(%esp)
0874824b +0x22b:  mov    %ecx,0xc(%esp)
0874824f +0x22f:  sub    %ecx,%eax
08748251 +0x231:  mov    0x10(%ebp),%ecx
08748254 +0x234:  lea    (%esi,%eax,1),%eax
08748257 +0x237:  mov    %eax,0x8(%esp)
0874825b +0x23b:  lea    -0x2c(%ebp),%eax
0874825e +0x23e:  mov    %eax,-0x54(%ebp)
08748261 +0x241:  mov    %eax,0x4(%esp)
08748265 +0x245:  mov    %ecx,(%esp)
08748268 +0x248:  call   0879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>  ; yaSSL::TLS_hmac(yaSSL::SSL&, unsigned char*, unsigned char const*, unsigned int, yaSSL::ContentType, bool)
0874826d +0x24d:  mov    -0x58(%ebp),%edx
08748270 +0x250:  jmp    08748105 <+0xe5>
08748275 +0x255:  lea    0x0(%esi),%esi
08748278 +0x258:  mov    0x10(%ebp),%edx
0874827b +0x25b:  movl   $0x70,0x4(%esp)
08748283 +0x263:  mov    %edx,(%esp)
08748286 +0x266:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874828b +0x26b:  add    $0x6c,%esp
0874828e +0x26e:  pop    %ebx
0874828f +0x26f:  pop    %esi
08748290 +0x270:  pop    %edi
08748291 +0x271:  pop    %ebp
08748292 +0x272:  ret
08748293 +0x273:  nop
08748294 +0x274:  lea    0x0(%esi,%eiz,1),%esi
08748298 +0x278:  mov    0x10(%ebp),%eax
0874829b +0x27b:  movl   $0x70,0x4(%esp)
087482a3 +0x283:  mov    %eax,(%esp)
087482a6 +0x286:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
087482ab +0x28b:  add    $0x6c,%esp
087482ae +0x28e:  pop    %ebx
087482af +0x28f:  pop    %esi
087482b0 +0x290:  pop    %edi
087482b1 +0x291:  pop    %ebp
087482b2 +0x292:  ret
087482b3 +0x293:  nop
087482b4 +0x294:  lea    0x0(%esi,%eiz,1),%esi
087482b8 +0x298:  mov    0x10(%ebp),%eax
087482bb +0x29b:  mov    %eax,(%esp)
087482be +0x29e:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
087482c3 +0x2a3:  mov    -0x58(%ebp),%edx
087482c6 +0x2a6:  test   %al,%al
087482c8 +0x2a8:  je     0874815f <+0x13f>
087482ce +0x2ae:  mov    0x10(%ebp),%ecx
087482d1 +0x2b1:  mov    %ecx,(%esp)
087482d4 +0x2b4:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
087482d9 +0x2b9:  mov    %eax,(%esp)
087482dc +0x2bc:  call   0874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>  ; yaSSL::Crypto::get_cipher() const
087482e1 +0x2c1:  mov    %eax,%ecx
087482e3 +0x2c3:  mov    (%eax),%eax
087482e5 +0x2c5:  mov    %ecx,(%esp)
087482e8 +0x2c8:  call   *0x10(%eax)
087482eb +0x2cb:  mov    -0x58(%ebp),%edx
087482ee +0x2ce:  mov    %eax,%esi
087482f0 +0x2d0:  jmp    08748161 <+0x141>
087482f5 +0x2d5:  lea    0x0(%esi),%esi
087482f8 +0x2d8:  mov    0x10(%ebp),%eax
087482fb +0x2db:  mov    %eax,(%esp)
087482fe +0x2de:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
08748303 +0x2e3:  mov    %eax,(%esp)
08748306 +0x2e6:  call   0874df20 <_ZN5yaSSL6States9useClientEv>  ; yaSSL::States::useClient()
0874830b +0x2eb:  movl   $0x5,(%eax)
08748311 +0x2f1:  jmp    08748213 <+0x1f3>
08748316 +0x2f6:  lea    0x0(%esi),%esi
08748319 +0x2f9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Finished::Process @ 0x8748020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Finished::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Finished::Process(Finished *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  sslHashes *this_00;
  int iVar2;
  int iVar3;
  Crypto *pCVar4;
  int *piVar5;
  Security *pSVar6;
  States *pSVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  Finished *pFVar12;
  uchar *puVar13;
  Finished *pFVar14;
  bool bVar15;
  byte bVar16;
  uchar *local_58;
  uchar local_44 [20];
  uchar local_30 [28];
  undefined4 uStack_14;
  
  bVar16 = 0;
  uStack_14 = 0x874802b;
  this_00 = (sslHashes *)SSL::getHashes(param_2);
  iVar2 = sslHashes::get_verify(this_00);
  cVar1 = SSL::isTLS(param_2);
  iVar9 = (-(uint)(cVar1 == '\0') & 0x18) + 0x10;
  uVar11 = (-(uint)(cVar1 == '\0') & 0x18) + 0xc;
  input_buffer::read(param_1,(uchar *)(this + 8),uVar11);
  bVar15 = true;
  uVar10 = uVar11;
  pFVar12 = this + 8;
  pFVar14 = (Finished *)(iVar2 + 8);
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    bVar15 = *pFVar12 == *pFVar14;
    pFVar12 = pFVar12 + (uint)bVar16 * -2 + 1;
    pFVar14 = pFVar14 + (uint)bVar16 * -2 + 1;
  } while (bVar15);
  if (!bVar15) {
    SSL::SetError(param_2,0x70);
    return;
  }
  cVar1 = SSL::isTLS(param_2);
  if (cVar1 == '\0') {
    iVar2 = input_buffer::get_buffer(param_1);
    iVar3 = input_buffer::get_current(param_1);
    hmac(param_2,local_30,iVar2 + (iVar3 - iVar9),iVar9,0x16,1);
  }
  else {
    iVar2 = input_buffer::get_buffer(param_1);
    iVar3 = input_buffer::get_current(param_1);
    TLS_hmac(param_2,local_30,iVar2 + (iVar3 - iVar9),iVar9,0x16,1);
  }
  local_58 = local_30;
  pCVar4 = (Crypto *)SSL::getCrypto(param_2);
  piVar5 = (int *)Crypto::get_digest(pCVar4);
  uVar10 = (**(code **)(*piVar5 + 0xc))(piVar5);
  input_buffer::read(param_1,local_44,uVar10);
  pSVar6 = (Security *)SSL::getSecurity(param_2);
  iVar2 = Security::get_parms(pSVar6);
  if (*(int *)(iVar2 + 8) == 1) {
    cVar1 = SSL::isTLSv1_1(param_2);
    if (cVar1 != '\0') {
      pCVar4 = (Crypto *)SSL::getCrypto(param_2);
      piVar5 = (int *)Crypto::get_cipher(pCVar4);
      iVar2 = (**(code **)(*piVar5 + 0x10))(piVar5);
      goto LAB_08748161;
    }
  }
  iVar2 = 0;
LAB_08748161:
  pSVar6 = (Security *)SSL::getSecurity(param_2);
  iVar9 = Security::get_parms(pSVar6);
  iVar2 = ((-4 - uVar11) - uVar10) + ((uint)*(ushort *)(iVar9 + 0x2a) - iVar2);
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 1;
      input_buffer::operator[]((uint)param_1);
    } while (iVar9 < iVar2);
  }
  bVar15 = true;
  puVar13 = local_44;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    bVar15 = *puVar13 == *local_58;
    puVar13 = puVar13 + (uint)bVar16 * -2 + 1;
    local_58 = local_58 + (uint)bVar16 * -2 + 1;
  } while (bVar15);
  if (bVar15) {
    pSVar7 = (States *)SSL::useStates(param_2);
    puVar8 = (undefined4 *)States::useHandShake(pSVar7);
    *puVar8 = 3;
    pSVar6 = (Security *)SSL::getSecurity(param_2);
    piVar5 = (int *)Security::get_parms(pSVar6);
    if (*piVar5 == 1) {
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useClient(pSVar7);
      *puVar8 = 5;
    }
    else {
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useServer(pSVar7);
      *puVar8 = 3;
    }
    return;
  }
  SSL::SetError(param_2,0x70);
  return;
}
```
