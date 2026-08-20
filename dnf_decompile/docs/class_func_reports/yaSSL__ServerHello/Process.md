# Process

`_ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::ServerHello::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHello` | `0x08749430` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749430  _ZN5yaSSL11ServerHello7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::ServerHello::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x08749430, 0x0874972b]
08749430 +0x000:  push   %ebp
08749431 +0x001:  mov    %esp,%ebp
08749433 +0x003:  push   %edi
08749434 +0x004:  push   %esi
08749435 +0x005:  push   %ebx
08749436 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874943b +0x00b:  add    $0xc2375d,%ebx
08749441 +0x011:  sub    $0x1c,%esp
08749444 +0x014:  mov    0x10(%ebp),%eax
08749447 +0x017:  mov    %eax,(%esp)
0874944a +0x01a:  call   0874ea10 <_ZNK5yaSSL3SSL16GetMultiProtocolEv>  ; yaSSL::SSL::GetMultiProtocol() const
0874944f +0x01f:  test   %al,%al
08749451 +0x021:  je     087495a0 <+0x170>
08749457 +0x027:  mov    0x10(%ebp),%edx
0874945a +0x02a:  mov    %edx,(%esp)
0874945d +0x02d:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
08749462 +0x032:  test   %al,%al
08749464 +0x034:  je     087495e8 <+0x1b8>
0874946a +0x03a:  mov    0x8(%ebp),%eax
0874946d +0x03d:  cmpb   $0x0,0x9(%eax)
08749471 +0x041:  jne    087495e8 <+0x1b8>
08749477 +0x047:  mov    0x10(%ebp),%edx
0874947a +0x04a:  mov    %edx,(%esp)
0874947d +0x04d:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
08749482 +0x052:  mov    %eax,(%esp)
08749485 +0x055:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874948a +0x05a:  mov    %eax,(%esp)
0874948d +0x05d:  call   08747240 <_ZN5yaSSL10Connection10TurnOffTLSEv>  ; yaSSL::Connection::TurnOffTLS()
08749492 +0x062:  lea    0x0(%esi),%esi
08749498 +0x068:  mov    0x8(%ebp),%edx
0874949b +0x06b:  movzbl 0x4c(%edx),%eax
0874949f +0x06f:  mov    %eax,0x4(%esp)
087494a3 +0x073:  mov    0x10(%ebp),%eax
087494a6 +0x076:  mov    %eax,(%esp)
087494a9 +0x079:  call   08751220 <_ZN5yaSSL3SSL11set_pendingEh>  ; yaSSL::SSL::set_pending(unsigned char)
087494ae +0x07e:  mov    0x8(%ebp),%eax
087494b1 +0x081:  mov    0x10(%ebp),%edx
087494b4 +0x084:  movl   $0x0,0x8(%esp)
087494bc +0x08c:  add    $0xa,%eax
087494bf +0x08f:  mov    %eax,0x4(%esp)
087494c3 +0x093:  mov    %edx,(%esp)
087494c6 +0x096:  call   0874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>  ; yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)
087494cb +0x09b:  mov    0x8(%ebp),%eax
087494ce +0x09e:  cmpb   $0x0,0x2a(%eax)
087494d2 +0x0a2:  je     087496f0 <+0x2c0>
087494d8 +0x0a8:  mov    0x10(%ebp),%edx
087494db +0x0ab:  add    $0x2b,%eax
087494de +0x0ae:  mov    %eax,0x4(%esp)
087494e2 +0x0b2:  mov    %edx,(%esp)
087494e5 +0x0b5:  call   0874f2d0 <_ZN5yaSSL3SSL13set_sessionIDEPKh>  ; yaSSL::SSL::set_sessionID(unsigned char const*)
087494ea +0x0ba:  mov    0x10(%ebp),%edx
087494ed +0x0bd:  mov    %edx,(%esp)
087494f0 +0x0c0:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087494f5 +0x0c5:  mov    %eax,(%esp)
087494f8 +0x0c8:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
087494fd +0x0cd:  test   %al,%al
087494ff +0x0cf:  je     087496b0 <+0x280>
08749505 +0x0d5:  mov    0x10(%ebp),%eax
08749508 +0x0d8:  mov    %eax,(%esp)
0874950b +0x0db:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08749510 +0x0e0:  mov    %eax,(%esp)
08749513 +0x0e3:  call   0874ece0 <_ZNK5yaSSL8Security10get_resumeEv>  ; yaSSL::Security::get_resume() const
08749518 +0x0e8:  mov    %eax,(%esp)
0874951b +0x0eb:  call   0874e320 <_ZNK5yaSSL11SSL_SESSION5GetIDEv>  ; yaSSL::SSL_SESSION::GetID() const
08749520 +0x0f0:  mov    0x8(%ebp),%esi
08749523 +0x0f3:  mov    $0x20,%ecx
08749528 +0x0f8:  add    $0x2b,%esi
0874952b +0x0fb:  mov    %eax,%edi
0874952d +0x0fd:  repz cmpsb %es:(%edi),%ds:(%esi)
0874952f +0x0ff:  jne    08749678 <+0x248>
08749535 +0x105:  mov    0x10(%ebp),%edx
08749538 +0x108:  mov    %edx,(%esp)
0874953b +0x10b:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
08749540 +0x110:  mov    %eax,(%esp)
08749543 +0x113:  call   0874ece0 <_ZNK5yaSSL8Security10get_resumeEv>  ; yaSSL::Security::get_resume() const
08749548 +0x118:  mov    %eax,(%esp)
0874954b +0x11b:  call   0874e330 <_ZNK5yaSSL11SSL_SESSION9GetSecretEv>  ; yaSSL::SSL_SESSION::GetSecret() const
08749550 +0x120:  mov    %eax,0x4(%esp)
08749554 +0x124:  mov    0x10(%ebp),%eax
08749557 +0x127:  mov    %eax,(%esp)
0874955a +0x12a:  call   0874f350 <_ZN5yaSSL3SSL16set_masterSecretEPKh>  ; yaSSL::SSL::set_masterSecret(unsigned char const*)
0874955f +0x12f:  mov    0x10(%ebp),%edx
08749562 +0x132:  mov    %edx,(%esp)
08749565 +0x135:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874956a +0x13a:  test   %al,%al
0874956c +0x13c:  je     08749720 <+0x2f0>
08749572 +0x142:  mov    0x10(%ebp),%eax
08749575 +0x145:  mov    %eax,(%esp)
08749578 +0x148:  call   0874fbc0 <_ZN5yaSSL3SSL13deriveTLSKeysEv>  ; yaSSL::SSL::deriveTLSKeys()
0874957d +0x14d:  mov    0x10(%ebp),%eax
08749580 +0x150:  mov    %eax,(%esp)
08749583 +0x153:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
08749588 +0x158:  mov    %eax,(%esp)
0874958b +0x15b:  call   0874df20 <_ZN5yaSSL6States9useClientEv>  ; yaSSL::States::useClient()
08749590 +0x160:  movl   $0x4,(%eax)
08749596 +0x166:  add    $0x1c,%esp
08749599 +0x169:  pop    %ebx
0874959a +0x16a:  pop    %esi
0874959b +0x16b:  pop    %edi
0874959c +0x16c:  pop    %ebp
0874959d +0x16d:  ret
0874959e +0x16e:  xchg   %ax,%ax
087495a0 +0x170:  mov    0x10(%ebp),%eax
087495a3 +0x173:  mov    %eax,(%esp)
087495a6 +0x176:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
087495ab +0x17b:  test   %al,%al
087495ad +0x17d:  jne    08749628 <+0x1f8>
087495af +0x17f:  mov    0x10(%ebp),%eax
087495b2 +0x182:  mov    %eax,(%esp)
087495b5 +0x185:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
087495ba +0x18a:  test   %al,%al
087495bc +0x18c:  je     08749644 <+0x214>
087495c2 +0x192:  mov    0x8(%ebp),%edx
087495c5 +0x195:  cmpb   $0x0,0x9(%edx)
087495c9 +0x199:  jne    08749644 <+0x214>
087495cb +0x19b:  mov    0x10(%ebp),%eax
087495ce +0x19e:  movl   $0x75,0x4(%esp)
087495d6 +0x1a6:  mov    %eax,(%esp)
087495d9 +0x1a9:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
087495de +0x1ae:  add    $0x1c,%esp
087495e1 +0x1b1:  pop    %ebx
087495e2 +0x1b2:  pop    %esi
087495e3 +0x1b3:  pop    %edi
087495e4 +0x1b4:  pop    %ebp
087495e5 +0x1b5:  ret
087495e6 +0x1b6:  xchg   %ax,%ax
087495e8 +0x1b8:  mov    0x10(%ebp),%edx
087495eb +0x1bb:  mov    %edx,(%esp)
087495ee +0x1be:  call   0874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>  ; yaSSL::SSL::isTLSv1_1() const
087495f3 +0x1c3:  test   %al,%al
087495f5 +0x1c5:  je     08749498 <+0x68>
087495fb +0x1cb:  mov    0x8(%ebp),%eax
087495fe +0x1ce:  cmpb   $0x1,0x9(%eax)
08749602 +0x1d2:  jne    08749498 <+0x68>
08749608 +0x1d8:  mov    0x10(%ebp),%edx
0874960b +0x1db:  mov    %edx,(%esp)
0874960e +0x1de:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
08749613 +0x1e3:  mov    %eax,(%esp)
08749616 +0x1e6:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874961b +0x1eb:  mov    %eax,(%esp)
0874961e +0x1ee:  call   08747260 <_ZN5yaSSL10Connection13TurnOffTLS1_1Ev>  ; yaSSL::Connection::TurnOffTLS1_1()
08749623 +0x1f3:  jmp    08749498 <+0x68>
08749628 +0x1f8:  mov    0x8(%ebp),%edx
0874962b +0x1fb:  cmpb   $0x1,0x9(%edx)
0874962f +0x1ff:  jbe    087495cb <+0x19b>
08749631 +0x201:  mov    0x10(%ebp),%eax
08749634 +0x204:  mov    %eax,(%esp)
08749637 +0x207:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874963c +0x20c:  test   %al,%al
0874963e +0x20e:  jne    087495c2 <+0x192>
08749644 +0x214:  mov    0x10(%ebp),%edx
08749647 +0x217:  mov    %edx,(%esp)
0874964a +0x21a:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874964f +0x21f:  test   %al,%al
08749651 +0x221:  jne    08749498 <+0x68>
08749657 +0x227:  mov    0x8(%ebp),%edx
0874965a +0x22a:  cmpb   $0x3,0x8(%edx)
0874965e +0x22e:  jne    08749498 <+0x68>
08749664 +0x234:  cmpb   $0x0,0x9(%edx)
08749668 +0x238:  je     08749498 <+0x68>
0874966e +0x23e:  jmp    087495cb <+0x19b>
08749673 +0x243:  nop
08749674 +0x244:  lea    0x0(%esi,%eiz,1),%esi
08749678 +0x248:  mov    0x10(%ebp),%edx
0874967b +0x24b:  mov    %edx,(%esp)
0874967e +0x24e:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
08749683 +0x253:  movl   $0x0,0x4(%esp)
0874968b +0x25b:  mov    %eax,(%esp)
0874968e +0x25e:  call   0874efc0 <_ZN5yaSSL8Security12set_resumingEb>  ; yaSSL::Security::set_resuming(bool)
08749693 +0x263:  mov    0x10(%ebp),%eax
08749696 +0x266:  mov    %eax,(%esp)
08749699 +0x269:  call   0874e300 <_ZN5yaSSL3SSL6useLogEv>  ; yaSSL::SSL::useLog()
0874969e +0x26e:  lea    -0x667e30(%ebx),%edx
087496a4 +0x274:  mov    %edx,0x4(%esp)
087496a8 +0x278:  mov    %eax,(%esp)
087496ab +0x27b:  call   087a1460 <_ZN5yaSSL3Log5TraceEPKc>  ; yaSSL::Log::Trace(char const*)
087496b0 +0x280:  mov    0x10(%ebp),%edx
087496b3 +0x283:  mov    %edx,(%esp)
087496b6 +0x286:  call   0874e9d0 <_ZNK5yaSSL3SSL13CompressionOnEv>  ; yaSSL::SSL::CompressionOn() const
087496bb +0x28b:  test   %al,%al
087496bd +0x28d:  je     087496c9 <+0x299>
087496bf +0x28f:  mov    0x8(%ebp),%eax
087496c2 +0x292:  mov    0x50(%eax),%edx
087496c5 +0x295:  test   %edx,%edx
087496c7 +0x297:  je     08749710 <+0x2e0>
087496c9 +0x299:  mov    0x10(%ebp),%eax
087496cc +0x29c:  mov    %eax,(%esp)
087496cf +0x29f:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
087496d4 +0x2a4:  mov    %eax,(%esp)
087496d7 +0x2a7:  call   0874df20 <_ZN5yaSSL6States9useClientEv>  ; yaSSL::States::useClient()
087496dc +0x2ac:  movl   $0x1,(%eax)
087496e2 +0x2b2:  add    $0x1c,%esp
087496e5 +0x2b5:  pop    %ebx
087496e6 +0x2b6:  pop    %esi
087496e7 +0x2b7:  pop    %edi
087496e8 +0x2b8:  pop    %ebp
087496e9 +0x2b9:  ret
087496ea +0x2ba:  lea    0x0(%esi),%esi
087496f0 +0x2c0:  mov    0x10(%ebp),%eax
087496f3 +0x2c3:  mov    %eax,(%esp)
087496f6 +0x2c6:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
087496fb +0x2cb:  mov    %eax,(%esp)
087496fe +0x2ce:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
08749703 +0x2d3:  movb   $0x0,0x12c(%eax)
0874970a +0x2da:  jmp    087494ea <+0xba>
0874970f +0x2df:  nop
08749710 +0x2e0:  mov    0x10(%ebp),%edx
08749713 +0x2e3:  mov    %edx,(%esp)
08749716 +0x2e6:  call   0874ee70 <_ZN5yaSSL3SSL16UnSetCompressionEv>  ; yaSSL::SSL::UnSetCompression()
0874971b +0x2eb:  jmp    087496c9 <+0x299>
0874971d +0x2ed:  lea    0x0(%esi),%esi
08749720 +0x2f0:  mov    0x10(%ebp),%edx
08749723 +0x2f3:  mov    %edx,(%esp)
08749726 +0x2f6:  call   0874fe30 <_ZN5yaSSL3SSL10deriveKeysEv>  ; yaSSL::SSL::deriveKeys()
0874972b +0x2fb:  jmp    0874957d <+0x14d>
```

## 反编译 C

```c
// yaSSL::ServerHello::Process @ 0x8749430

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::ServerHello::Process(ServerHello *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  Security *pSVar2;
  Connection *pCVar3;
  SSL_SESSION *pSVar4;
  ServerHello *pSVar5;
  uchar *puVar6;
  States *pSVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  ServerHello *pSVar11;
  bool bVar12;
  byte bVar13;
  
  bVar13 = 0;
  cVar1 = SSL::GetMultiProtocol(param_2);
  if (cVar1 == '\0') {
    cVar1 = SSL::isTLSv1_1(param_2);
    if (cVar1 == '\0') {
      cVar1 = SSL::isTLS(param_2);
    }
    else {
      if ((byte)this[9] < 2) goto LAB_087495cb;
      cVar1 = SSL::isTLS(param_2);
    }
    if (((cVar1 != '\0') && (this[9] == (ServerHello)0x0)) ||
       ((cVar1 = SSL::isTLS(param_2), cVar1 == '\0' &&
        ((this[8] == (ServerHello)0x3 && (this[9] != (ServerHello)0x0)))))) {
LAB_087495cb:
      SSL::SetError(param_2,0x75);
      return;
    }
  }
  else {
    cVar1 = SSL::isTLS(param_2);
    if ((cVar1 == '\0') || (this[9] != (ServerHello)0x0)) {
      cVar1 = SSL::isTLSv1_1(param_2);
      if ((cVar1 != '\0') && (this[9] == (ServerHello)0x1)) {
        pSVar2 = (Security *)SSL::useSecurity(param_2);
        pCVar3 = (Connection *)Security::use_connection(pSVar2);
        Connection::TurnOffTLS1_1(pCVar3);
      }
    }
    else {
      pSVar2 = (Security *)SSL::useSecurity(param_2);
      pCVar3 = (Connection *)Security::use_connection(pSVar2);
      Connection::TurnOffTLS(pCVar3);
    }
  }
  SSL::set_pending(param_2,(uchar)this[0x4c]);
  SSL::set_random(param_2,this + 10,0);
  if (this[0x2a] == (ServerHello)0x0) {
    pSVar2 = (Security *)SSL::useSecurity(param_2);
    iVar10 = Security::use_connection(pSVar2);
    *(undefined1 *)(iVar10 + 300) = 0;
  }
  else {
    SSL::set_sessionID(param_2,(uchar *)(this + 0x2b));
  }
  pSVar2 = (Security *)SSL::getSecurity(param_2);
  cVar1 = Security::get_resuming(pSVar2);
  if (cVar1 != '\0') {
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    pSVar4 = (SSL_SESSION *)Security::get_resume(pSVar2);
    pSVar5 = (ServerHello *)SSL_SESSION::GetID(pSVar4);
    iVar10 = 0x20;
    bVar12 = this + 0x2b == (ServerHello *)0x0;
    pSVar11 = this + 0x2b;
    do {
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      bVar12 = *pSVar11 == *pSVar5;
      pSVar11 = pSVar11 + (uint)bVar13 * -2 + 1;
      pSVar5 = pSVar5 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    if (bVar12) {
      pSVar2 = (Security *)SSL::getSecurity(param_2);
      pSVar4 = (SSL_SESSION *)Security::get_resume(pSVar2);
      puVar6 = (uchar *)SSL_SESSION::GetSecret(pSVar4);
      SSL::set_masterSecret(param_2,puVar6);
      cVar1 = SSL::isTLS(param_2);
      if (cVar1 == '\0') {
        SSL::deriveKeys(param_2);
      }
      else {
        SSL::deriveTLSKeys(param_2);
      }
      pSVar7 = (States *)SSL::useStates(param_2);
      puVar8 = (undefined4 *)States::useClient(pSVar7);
      *puVar8 = 4;
      return;
    }
    pSVar2 = (Security *)SSL::useSecurity(param_2);
    Security::set_resuming(pSVar2,false);
    pcVar9 = (char *)SSL::useLog(param_2);
    Log::Trace(pcVar9);
  }
  cVar1 = SSL::CompressionOn(param_2);
  if ((cVar1 != '\0') && (*(int *)(this + 0x50) == 0)) {
    SSL::UnSetCompression(param_2);
  }
  pSVar7 = (States *)SSL::useStates(param_2);
  puVar8 = (undefined4 *)States::useClient(pSVar7);
  *puVar8 = 1;
  return;
}
```
