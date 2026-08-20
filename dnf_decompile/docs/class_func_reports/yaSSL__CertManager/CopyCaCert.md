# CopyCaCert

`_ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E`

`yaSSL::CertManager::CopyCaCert(yaSSL::x509 const*)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797b00  _ZN5yaSSL11CertManager10CopyCaCertEPKNS_4x509E
#           yaSSL::CertManager::CopyCaCert(yaSSL::x509 const*)
# range [0x08797b00, 0x08797cbe]
08797b00 +0x000:  push   %ebp
08797b01 +0x001:  mov    %esp,%ebp
08797b03 +0x003:  push   %edi
08797b04 +0x004:  push   %esi
08797b05 +0x005:  push   %ebx
08797b06 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08797b0b +0x00b:  add    $0xbd508d,%ebx
08797b11 +0x011:  sub    $0x4cc,%esp
08797b17 +0x017:  mov    0xc(%ebp),%edx
08797b1a +0x01a:  mov    0x8(%ebp),%esi
08797b1d +0x01d:  mov    %edx,(%esp)
08797b20 +0x020:  mov    %edx,-0x4b4(%ebp)
08797b26 +0x026:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08797b2b +0x02b:  mov    -0x4b4(%ebp),%edx
08797b31 +0x031:  mov    %edx,(%esp)
08797b34 +0x034:  mov    %eax,%edi
08797b36 +0x036:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
08797b3b +0x03b:  mov    %edi,-0x2c(%ebp)
08797b3e +0x03e:  mov    %eax,%edx
08797b40 +0x040:  xor    %eax,%eax
08797b42 +0x042:  test   %edi,%edi
08797b44 +0x044:  je     08797b5f <+0x5f>
08797b46 +0x046:  mov    %edx,-0x4b4(%ebp)
08797b4c +0x04c:  movb   $0x0,0x4(%esp)
08797b51 +0x051:  mov    %edi,(%esp)
08797b54 +0x054:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08797b59 +0x059:  mov    -0x4b4(%ebp),%edx
08797b5f +0x05f:  mov    -0x2c(%ebp),%ecx
08797b62 +0x062:  lea    -0x4a0(%ebp),%edi
08797b68 +0x068:  mov    %edx,0x4(%esp)
08797b6c +0x06c:  mov    %eax,(%esp)
08797b6f +0x06f:  mov    %eax,-0x28(%ebp)
08797b72 +0x072:  mov    %ecx,0x8(%esp)
08797b76 +0x076:  call   0807d8a0 <_init+0x198>
08797b7b +0x07b:  movl   $0x0,0x14(%esp)
08797b83 +0x083:  movzbl 0x51(%esi),%eax
08797b87 +0x087:  movl   $0x0,-0x20(%ebp)
08797b8e +0x08e:  movl   $0x1,0x8(%esp)
08797b96 +0x096:  mov    %edi,(%esp)
08797b99 +0x099:  mov    %eax,0x10(%esp)
08797b9d +0x09d:  lea    0x44(%esi),%eax
08797ba0 +0x0a0:  mov    %eax,0xc(%esp)
08797ba4 +0x0a4:  lea    -0x2c(%ebp),%eax
08797ba7 +0x0a7:  mov    %eax,0x4(%esp)
08797bab +0x0ab:  movl   $0x0,-0x1c(%ebp)
08797bb2 +0x0b2:  call   087565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>  ; TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)
08797bb7 +0x0b7:  lea    -0x4ac(%ebp),%eax
08797bbd +0x0bd:  mov    %eax,(%esp)
08797bc0 +0x0c0:  mov    %edi,0x4(%esp)
08797bc4 +0x0c4:  call   08753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>  ; TaoCrypt::BER_Decoder::GetError()
08797bc9 +0x0c9:  mov    -0x4ac(%ebp),%eax
08797bcf +0x0cf:  sub    $0x4,%esp
08797bd2 +0x0d2:  test   %eax,%eax
08797bd4 +0x0d4:  je     08797c10 <+0x110>
08797bd6 +0x0d6:  mov    %edi,(%esp)
08797bd9 +0x0d9:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08797bde +0x0de:  mov    -0x28(%ebp),%esi
08797be1 +0x0e1:  mov    -0x2c(%ebp),%eax
08797be4 +0x0e4:  movl   $0x0,0x4(%esp)
08797bec +0x0ec:  mov    %esi,(%esp)
08797bef +0x0ef:  mov    %eax,0x8(%esp)
08797bf3 +0x0f3:  call   0807dcc0 <_init+0x5b8>
08797bf8 +0x0f8:  mov    %esi,(%esp)
08797bfb +0x0fb:  movb   $0x0,0x4(%esp)
08797c00 +0x100:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08797c05 +0x105:  lea    -0xc(%ebp),%esp
08797c08 +0x108:  xor    %eax,%eax
08797c0a +0x10a:  pop    %ebx
08797c0b +0x10b:  pop    %esi
08797c0c +0x10c:  pop    %edi
08797c0d +0x10d:  pop    %ebp
08797c0e +0x10e:  ret
08797c0f +0x10f:  nop
08797c10 +0x110:  mov    -0x494(%ebp),%ecx
08797c16 +0x116:  mov    -0x498(%ebp),%eax
08797c1c +0x11c:  movb   $0x0,0x4(%esp)
08797c21 +0x121:  movl   $0x21c,(%esp)
08797c28 +0x128:  mov    %ecx,-0x4b4(%ebp)
08797c2e +0x12e:  mov    %eax,-0x4b0(%ebp)
08797c34 +0x134:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08797c39 +0x139:  mov    -0x4b4(%ebp),%ecx
08797c3f +0x13f:  mov    %ecx,0x8(%esp)
08797c43 +0x143:  mov    %eax,%edx
08797c45 +0x145:  lea    -0x47c(%ebp),%eax
08797c4b +0x14b:  mov    %eax,0x10(%esp)
08797c4f +0x14f:  lea    -0x250(%ebp),%eax
08797c55 +0x155:  mov    %eax,0xc(%esp)
08797c59 +0x159:  mov    -0x4b0(%ebp),%eax
08797c5f +0x15f:  mov    %edx,(%esp)
08797c62 +0x162:  mov    %edx,-0x4b4(%ebp)
08797c68 +0x168:  mov    %eax,0x4(%esp)
08797c6c +0x16c:  call   08753fa0 <_ZN8TaoCrypt6SignerC1EPKhjPKcS2_>  ; TaoCrypt::Signer::Signer(unsigned char const*, unsigned int, char const*, unsigned char const*)
08797c71 +0x171:  movb   $0x0,0x4(%esp)
08797c76 +0x176:  movl   $0xc,(%esp)
08797c7d +0x17d:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08797c82 +0x182:  movl   $0x0,(%eax)
08797c88 +0x188:  movl   $0x0,0x4(%eax)
08797c8f +0x18f:  mov    -0x4b4(%ebp),%edx
08797c95 +0x195:  mov    %edx,0x8(%eax)
08797c98 +0x198:  mov    0x48(%esi),%edx
08797c9b +0x19b:  test   %edx,%edx
08797c9d +0x19d:  je     08797cb8 <+0x1b8>
08797c9f +0x19f:  mov    %eax,0x4(%edx)
08797ca2 +0x1a2:  mov    0x48(%esi),%edx
08797ca5 +0x1a5:  mov    %edx,(%eax)
08797ca7 +0x1a7:  mov    %eax,0x48(%esi)
08797caa +0x1aa:  addl   $0x1,0x4c(%esi)
08797cae +0x1ae:  jmp    08797bd6 <+0xd6>
08797cb3 +0x1b3:  nop
08797cb4 +0x1b4:  lea    0x0(%esi,%eiz,1),%esi
08797cb8 +0x1b8:  mov    %eax,0x44(%esi)
08797cbb +0x1bb:  jmp    08797ca7 <+0x1a7>
08797cbd +0x1bd:  nop
08797cbe +0x1be:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CertManager::CopyCaCert @ 0x8797b00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::CopyCaCert(yaSSL::x509 const*) */

undefined4 __thiscall yaSSL::CertManager::CopyCaCert(CertManager *this,x509 *param_1)

{
  size_t sVar1;
  void *pvVar2;
  Signer *this_00;
  undefined4 *puVar3;
  uint in_stack_fffffb28;
  CertDecoder *pCVar4;
  uint uVar5;
  int local_4b0;
  CertDecoder local_4a4 [8];
  uchar *local_49c;
  uint local_498;
  uchar local_480 [556];
  char local_254 [548];
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8797b0b;
  sVar1 = yaSSL::x509::get_length(param_1);
  pvVar2 = (void *)yaSSL::x509::get_buffer(param_1);
  local_2c = (void *)0x0;
  local_30 = sVar1;
  if (sVar1 != 0) {
    local_2c = operator_new__(sVar1,in_stack_fffffb28 & 0xffffff00);
  }
  memcpy(local_2c,pvVar2,local_30);
  local_24 = 0;
  local_20 = 0;
  TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,1,this + 0x44,this[0x51],0);
  pCVar4 = local_4a4;
  TaoCrypt::BER_Decoder::GetError();
  if (local_4b0 == 0) {
    this_00 = operator_new(0x21c,(uint)pCVar4 & 0xffffff00);
    TaoCrypt::Signer::Signer(this_00,local_49c,local_498,local_254,local_480);
    puVar3 = operator_new__(0xc,(uint)local_49c & 0xffffff00);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = this_00;
    if (*(int *)(this + 0x48) == 0) {
      *(undefined4 **)(this + 0x44) = puVar3;
    }
    else {
      *(undefined4 **)(*(int *)(this + 0x48) + 4) = puVar3;
      *puVar3 = *(undefined4 *)(this + 0x48);
    }
    *(undefined4 **)(this + 0x48) = puVar3;
    *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
  }
  TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
  pvVar2 = local_2c;
  uVar5 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pvVar2,uVar5 & 0xffffff00);
  return 0;
}
```
