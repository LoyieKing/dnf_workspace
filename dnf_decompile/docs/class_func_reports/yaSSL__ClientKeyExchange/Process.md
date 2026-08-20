# Process

`_ZN5yaSSL17ClientKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE`

`yaSSL::ClientKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x0874b740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b740  _ZN5yaSSL17ClientKeyExchange7ProcessERNS_12input_bufferERNS_3SSLE
#           yaSSL::ClientKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&)
# range [0x0874b740, 0x0874b7fe]
0874b740 +0x00:  push   %ebp
0874b741 +0x01:  mov    %esp,%ebp
0874b743 +0x03:  sub    $0x28,%esp
0874b746 +0x06:  mov    %ebx,-0xc(%ebp)
0874b749 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b74e +0x0e:  add    $0xc2144a,%ebx
0874b754 +0x14:  mov    %esi,-0x8(%ebp)
0874b757 +0x17:  mov    0x10(%ebp),%esi
0874b75a +0x1a:  mov    %edi,-0x4(%ebp)
0874b75d +0x1d:  mov    0x8(%ebp),%edi
0874b760 +0x20:  mov    %esi,0x4(%esp)
0874b764 +0x24:  mov    %edi,(%esp)
0874b767 +0x27:  call   0874b670 <_ZN5yaSSL17ClientKeyExchange9createKeyERNS_3SSLE>  ; yaSSL::ClientKeyExchange::createKey(yaSSL::SSL&)
0874b76c +0x2c:  mov    %esi,(%esp)
0874b76f +0x2f:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0874b774 +0x34:  test   %eax,%eax
0874b776 +0x36:  je     0874b788 <+0x48>
0874b778 +0x38:  mov    -0xc(%ebp),%ebx
0874b77b +0x3b:  mov    -0x8(%ebp),%esi
0874b77e +0x3e:  mov    -0x4(%ebp),%edi
0874b781 +0x41:  mov    %ebp,%esp
0874b783 +0x43:  pop    %ebp
0874b784 +0x44:  ret
0874b785 +0x45:  lea    0x0(%esi),%esi
0874b788 +0x48:  mov    0x8(%edi),%eax
0874b78b +0x4b:  mov    0xc(%ebp),%ecx
0874b78e +0x4e:  mov    (%eax),%edx
0874b790 +0x50:  mov    %ecx,0x8(%esp)
0874b794 +0x54:  mov    %eax,(%esp)
0874b797 +0x57:  mov    %esi,0x4(%esp)
0874b79b +0x5b:  call   *0xc(%edx)
0874b79e +0x5e:  mov    %esi,(%esp)
0874b7a1 +0x61:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874b7a6 +0x66:  mov    %eax,(%esp)
0874b7a9 +0x69:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874b7ae +0x6e:  mov    %eax,(%esp)
0874b7b1 +0x71:  call   08797400 <_ZNK5yaSSL11CertManager10verifyPeerEv>  ; yaSSL::CertManager::verifyPeer() const
0874b7b6 +0x76:  test   %al,%al
0874b7b8 +0x78:  jne    0874b7e0 <+0xa0>
0874b7ba +0x7a:  mov    %esi,(%esp)
0874b7bd +0x7d:  call   0874e2d0 <_ZN5yaSSL3SSL9useStatesEv>  ; yaSSL::SSL::useStates()
0874b7c2 +0x82:  mov    %eax,(%esp)
0874b7c5 +0x85:  call   0874df30 <_ZN5yaSSL6States9useServerEv>  ; yaSSL::States::useServer()
0874b7ca +0x8a:  movl   $0x2,(%eax)
0874b7d0 +0x90:  mov    -0xc(%ebp),%ebx
0874b7d3 +0x93:  mov    -0x8(%ebp),%esi
0874b7d6 +0x96:  mov    -0x4(%ebp),%edi
0874b7d9 +0x99:  mov    %ebp,%esp
0874b7db +0x9b:  pop    %ebp
0874b7dc +0x9c:  ret
0874b7dd +0x9d:  lea    0x0(%esi),%esi
0874b7e0 +0xa0:  mov    %esi,(%esp)
0874b7e3 +0xa3:  call   0874e2e0 <_ZN5yaSSL3SSL9useHashesEv>  ; yaSSL::SSL::useHashes()
0874b7e8 +0xa8:  mov    %eax,(%esp)
0874b7eb +0xab:  call   0874e8a0 <_ZN5yaSSL9sslHashes14use_certVerifyEv>  ; yaSSL::sslHashes::use_certVerify()
0874b7f0 +0xb0:  mov    %esi,(%esp)
0874b7f3 +0xb3:  mov    %eax,0x4(%esp)
0874b7f7 +0xb7:  call   0879cea0 <_ZN5yaSSL16build_certHashesERNS_3SSLERNS_6HashesE>  ; yaSSL::build_certHashes(yaSSL::SSL&, yaSSL::Hashes&)
0874b7fc +0xbc:  jmp    0874b7ba <+0x7a>
0874b7fe +0xbe:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::Process @ 0x874b740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientKeyExchange::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ClientKeyExchange::Process(ClientKeyExchange *this,input_buffer *param_1,SSL *param_2)

{
  char cVar1;
  int iVar2;
  Crypto *this_00;
  CertManager *this_01;
  States *this_02;
  undefined4 *puVar3;
  sslHashes *this_03;
  Hashes *pHVar4;
  
  createKey(this,param_2);
  iVar2 = SSL::GetError(param_2);
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(**(int **)(this + 8) + 0xc))(*(int **)(this + 8),param_2,param_1);
  this_00 = (Crypto *)SSL::getCrypto(param_2);
  this_01 = (CertManager *)Crypto::get_certManager(this_00);
  cVar1 = CertManager::verifyPeer(this_01);
  if (cVar1 != '\0') {
    this_03 = (sslHashes *)SSL::useHashes(param_2);
    pHVar4 = (Hashes *)sslHashes::use_certVerify(this_03);
    build_certHashes(param_2,pHVar4);
  }
  this_02 = (States *)SSL::useStates(param_2);
  puVar3 = (undefined4 *)States::useServer(this_02);
  *puVar3 = 2;
  return;
}
```
