# Process

`_ZN5yaSSL16ChangeCipherSpec7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::ChangeCipherSpec::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ChangeCipherSpec` | `0x0874a0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a0a0  _ZN5yaSSL16ChangeCipherSpec7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::ChangeCipherSpec::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x0874a0a0, 0x0874a16e]
0874a0a0 +0x00:  push   %ebp
0874a0a1 +0x01:  mov    %esp,%ebp
0874a0a3 +0x03:  push   %esi
0874a0a4 +0x04:  push   %ebx
0874a0a5 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a0aa +0x0a:  add    $0xc22aee,%ebx
0874a0b0 +0x10:  sub    $0x10,%esp
0874a0b3 +0x13:  mov    0x10(%ebp),%esi
0874a0b6 +0x16:  mov    %esi,(%esp)
0874a0b9 +0x19:  call   0874e2c0 <_ZN5yaSSL3SSL11useSecurityEv>  ; yaSSL::SSL::useSecurity()
0874a0be +0x1e:  mov    %eax,(%esp)
0874a0c1 +0x21:  call   0874eea0 <_ZN5yaSSL8Security9use_parmsEv>  ; yaSSL::Security::use_parms()
0874a0c6 +0x26:  movb   $0x0,0x28(%eax)
0874a0ca +0x2a:  mov    %esi,(%esp)
0874a0cd +0x2d:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a0d2 +0x32:  mov    %eax,(%esp)
0874a0d5 +0x35:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
0874a0da +0x3a:  test   %al,%al
0874a0dc +0x3c:  je     0874a100 <+0x60>
0874a0de +0x3e:  mov    %esi,(%esp)
0874a0e1 +0x41:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a0e6 +0x46:  mov    %eax,(%esp)
0874a0e9 +0x49:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874a0ee +0x4e:  cmpl   $0x1,(%eax)
0874a0f1 +0x51:  je     0874a148 <+0xa8>
0874a0f3 +0x53:  add    $0x10,%esp
0874a0f6 +0x56:  pop    %ebx
0874a0f7 +0x57:  pop    %esi
0874a0f8 +0x58:  pop    %ebp
0874a0f9 +0x59:  ret
0874a0fa +0x5a:  lea    0x0(%esi),%esi
0874a100 +0x60:  mov    %esi,(%esp)
0874a103 +0x63:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874a108 +0x68:  mov    %eax,(%esp)
0874a10b +0x6b:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0874a110 +0x70:  mov    (%eax),%eax
0874a112 +0x72:  test   %eax,%eax
0874a114 +0x74:  jne    0874a0f3 <+0x53>
0874a116 +0x76:  mov    %esi,(%esp)
0874a119 +0x79:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0874a11e +0x7e:  mov    %eax,(%esp)
0874a121 +0x81:  call   0874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>  ; yaSSL::sslHashes::use_verify()
0874a126 +0x86:  lea    -0x667cd9(%ebx),%edx
0874a12c +0x8c:  mov    %esi,(%esp)
0874a12f +0x8f:  mov    %edx,0x8(%esp)
0874a133 +0x93:  mov    %eax,0x4(%esp)
0874a137 +0x97:  call   0879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>  ; yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)
0874a13c +0x9c:  add    $0x10,%esp
0874a13f +0x9f:  pop    %ebx
0874a140 +0xa0:  pop    %esi
0874a141 +0xa1:  pop    %ebp
0874a142 +0xa2:  ret
0874a143 +0xa3:  nop
0874a144 +0xa4:  lea    0x0(%esi,%eiz,1),%esi
0874a148 +0xa8:  mov    %esi,(%esp)
0874a14b +0xab:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0874a150 +0xb0:  mov    %eax,(%esp)
0874a153 +0xb3:  call   0874e890 <_ZN5yaSSL9sslHashes10use_verifyEv>  ; yaSSL::sslHashes::use_verify()
0874a158 +0xb8:  lea    -0x667cdd(%ebx),%edx
0874a15e +0xbe:  mov    %edx,0x8(%esp)
0874a162 +0xc2:  mov    %esi,(%esp)
0874a165 +0xc5:  mov    %eax,0x4(%esp)
0874a169 +0xc9:  call   0879eb40 <_ZN5yaSSL13buildFinishedERNS_3SSLERNS_8FinishedEPKh>  ; yaSSL::buildFinished(yaSSL::SSL&, yaSSL::Finished&, unsigned char const*)
0874a16e +0xce:  jmp    0874a0f3 <+0x53>
```

## 反编译 C

```c
// yaSSL::ChangeCipherSpec::Process @ 0x874a0a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ChangeCipherSpec::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ChangeCipherSpec::Process(ChangeCipherSpec *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  Security *pSVar2;
  int iVar3;
  int *piVar4;
  sslHashes *psVar5;
  Finished *pFVar6;
  
  pSVar2 = (Security *)SSL::useSecurity(param_2);
  iVar3 = Security::use_parms(pSVar2);
  *(undefined1 *)(iVar3 + 0x28) = 0;
  pSVar2 = (Security *)SSL::getSecurity(param_2);
  cVar1 = Security::get_resuming(pSVar2);
  if (cVar1 == '\0') {
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    piVar4 = (int *)Security::get_parms(pSVar2);
    if (*piVar4 == 0) {
      psVar5 = (sslHashes *)SSL::useHashes(param_2);
      pFVar6 = (Finished *)sslHashes::use_verify(psVar5);
      buildFinished(param_2,pFVar6,"CLNT");
      return;
    }
  }
  else {
    pSVar2 = (Security *)SSL::getSecurity(param_2);
    piVar4 = (int *)Security::get_parms(pSVar2);
    if (*piVar4 == 1) {
      psVar5 = (sslHashes *)SSL::useHashes(param_2);
      pFVar6 = (Finished *)sslHashes::use_verify(psVar5);
      buildFinished(param_2,pFVar6,"SRVRCLNT");
    }
  }
  return;
}
```
