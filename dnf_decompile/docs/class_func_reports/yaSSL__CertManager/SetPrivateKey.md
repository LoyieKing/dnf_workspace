# SetPrivateKey

`_ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E`

`yaSSL::CertManager::SetPrivateKey(yaSSL::x509 const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797cc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797cc0  _ZN5yaSSL11CertManager13SetPrivateKeyERKNS_4x509E
#           yaSSL::CertManager::SetPrivateKey(yaSSL::x509 const&)
# range [0x08797cc0, 0x08797e8c]
08797cc0 +0x000:  push   %ebp
08797cc1 +0x001:  mov    %esp,%ebp
08797cc3 +0x003:  push   %edi
08797cc4 +0x004:  push   %esi
08797cc5 +0x005:  push   %ebx
08797cc6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08797ccb +0x00b:  add    $0xbd4ecd,%ebx
08797cd1 +0x011:  sub    $0x4cc,%esp
08797cd7 +0x017:  mov    0xc(%ebp),%esi
08797cda +0x01a:  mov    0x8(%ebp),%edi
08797cdd +0x01d:  mov    %esi,(%esp)
08797ce0 +0x020:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08797ce5 +0x025:  lea    0xc(%edi),%edx
08797ce8 +0x028:  mov    %edx,(%esp)
08797ceb +0x02b:  mov    %edx,-0x4b4(%ebp)
08797cf1 +0x031:  mov    %eax,0x4(%esp)
08797cf5 +0x035:  call   08797220 <_ZN5yaSSL12input_buffer8allocateEj>  ; yaSSL::input_buffer::allocate(unsigned int)
08797cfa +0x03a:  mov    %esi,(%esp)
08797cfd +0x03d:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08797d02 +0x042:  mov    %esi,(%esp)
08797d05 +0x045:  mov    %eax,-0x4b8(%ebp)
08797d0b +0x04b:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
08797d10 +0x050:  mov    -0x4b8(%ebp),%ecx
08797d16 +0x056:  mov    -0x4b4(%ebp),%edx
08797d1c +0x05c:  mov    %ecx,0x8(%esp)
08797d20 +0x060:  mov    %edx,(%esp)
08797d23 +0x063:  mov    %eax,0x4(%esp)
08797d27 +0x067:  call   087970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>  ; yaSSL::input_buffer::assign(unsigned char const*, unsigned int)
08797d2c +0x06c:  mov    (%edi),%eax
08797d2e +0x06e:  test   %eax,%eax
08797d30 +0x070:  je     08797e70 <+0x1b0>
08797d36 +0x076:  mov    0x8(%eax),%esi
08797d39 +0x079:  test   %esi,%esi
08797d3b +0x07b:  je     08797e70 <+0x1b0>
08797d41 +0x081:  mov    %esi,(%esp)
08797d44 +0x084:  call   087973d0 <_ZNK5yaSSL4x50910get_lengthEv>  ; yaSSL::x509::get_length() const
08797d49 +0x089:  mov    %esi,(%esp)
08797d4c +0x08c:  mov    %eax,-0x4b4(%ebp)
08797d52 +0x092:  call   087973e0 <_ZNK5yaSSL4x50910get_bufferEv>  ; yaSSL::x509::get_buffer() const
08797d57 +0x097:  mov    -0x4b4(%ebp),%edx
08797d5d +0x09d:  mov    %edx,-0x2c(%ebp)
08797d60 +0x0a0:  mov    %eax,%esi
08797d62 +0x0a2:  xor    %eax,%eax
08797d64 +0x0a4:  test   %edx,%edx
08797d66 +0x0a6:  jne    08797e58 <+0x198>
08797d6c +0x0ac:  mov    %edx,0x8(%esp)
08797d70 +0x0b0:  mov    %esi,0x4(%esp)
08797d74 +0x0b4:  mov    %eax,(%esp)
08797d77 +0x0b7:  mov    %eax,-0x28(%ebp)
08797d7a +0x0ba:  call   0807d8a0 <_init+0x198>
08797d7f +0x0bf:  lea    -0x2c(%ebp),%eax
08797d82 +0x0c2:  mov    %eax,0x4(%esp)
08797d86 +0x0c6:  lea    -0x4a0(%ebp),%eax
08797d8c +0x0cc:  mov    %eax,(%esp)
08797d8f +0x0cf:  mov    %eax,-0x4b0(%ebp)
08797d95 +0x0d5:  movl   $0x1,0x14(%esp)
08797d9d +0x0dd:  movl   $0x0,0x10(%esp)
08797da5 +0x0e5:  movl   $0x0,0xc(%esp)
08797dad +0x0ed:  movl   $0x0,0x8(%esp)
08797db5 +0x0f5:  movl   $0x0,-0x20(%ebp)
08797dbc +0x0fc:  movl   $0x0,-0x1c(%ebp)
08797dc3 +0x103:  call   087565a0 <_ZN8TaoCrypt11CertDecoderC1ERNS_6SourceEbPN5mySTL4listIPNS_6SignerEEEbNS0_8CertTypeE>  ; TaoCrypt::CertDecoder::CertDecoder(TaoCrypt::Source&, bool, mySTL::list<TaoCrypt::Signer*>*, bool, TaoCrypt::CertDecoder::CertType)
08797dc8 +0x108:  mov    -0x4b0(%ebp),%edx
08797dce +0x10e:  mov    %edx,(%esp)
08797dd1 +0x111:  call   087550b0 <_ZN8TaoCrypt11CertDecoder11DecodeToKeyEv>  ; TaoCrypt::CertDecoder::DecodeToKey()
08797dd6 +0x116:  mov    -0x4b0(%ebp),%edx
08797ddc +0x11c:  lea    -0x4ac(%ebp),%eax
08797de2 +0x122:  mov    %eax,(%esp)
08797de5 +0x125:  mov    %edx,0x4(%esp)
08797de9 +0x129:  call   08753770 <_ZN8TaoCrypt11BER_Decoder8GetErrorEv>  ; TaoCrypt::BER_Decoder::GetError()
08797dee +0x12e:  mov    -0x4ac(%ebp),%esi
08797df4 +0x134:  sub    $0x4,%esp
08797df7 +0x137:  test   %esi,%esi
08797df9 +0x139:  jne    08797e80 <+0x1c0>
08797dff +0x13f:  xor    %eax,%eax
08797e01 +0x141:  mov    -0x4b0(%ebp),%edx
08797e07 +0x147:  cmpl   $0x285,-0x480(%ebp)
08797e11 +0x151:  setne  %al
08797e14 +0x154:  add    $0x1,%eax
08797e17 +0x157:  mov    %eax,0x3c(%edi)
08797e1a +0x15a:  mov    %edx,(%esp)
08797e1d +0x15d:  call   087541a0 <_ZN8TaoCrypt11CertDecoderD1Ev>  ; TaoCrypt::CertDecoder::~CertDecoder()
08797e22 +0x162:  mov    -0x28(%ebp),%edi
08797e25 +0x165:  mov    -0x2c(%ebp),%eax
08797e28 +0x168:  movl   $0x0,0x4(%esp)
08797e30 +0x170:  mov    %edi,(%esp)
08797e33 +0x173:  mov    %eax,0x8(%esp)
08797e37 +0x177:  call   0807dcc0 <_init+0x5b8>
08797e3c +0x17c:  mov    %edi,(%esp)
08797e3f +0x17f:  movb   $0x0,0x4(%esp)
08797e44 +0x184:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08797e49 +0x189:  lea    -0xc(%ebp),%esp
08797e4c +0x18c:  mov    %esi,%eax
08797e4e +0x18e:  pop    %ebx
08797e4f +0x18f:  pop    %esi
08797e50 +0x190:  pop    %edi
08797e51 +0x191:  pop    %ebp
08797e52 +0x192:  ret
08797e53 +0x193:  nop
08797e54 +0x194:  lea    0x0(%esi,%eiz,1),%esi
08797e58 +0x198:  mov    %edx,(%esp)
08797e5b +0x19b:  movb   $0x0,0x4(%esp)
08797e60 +0x1a0:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08797e65 +0x1a5:  mov    -0x2c(%ebp),%edx
08797e68 +0x1a8:  jmp    08797d6c <+0xac>
08797e6d +0x1ad:  lea    0x0(%esi),%esi
08797e70 +0x1b0:  xor    %esi,%esi
08797e72 +0x1b2:  lea    -0xc(%ebp),%esp
08797e75 +0x1b5:  mov    %esi,%eax
08797e77 +0x1b7:  pop    %ebx
08797e78 +0x1b8:  pop    %esi
08797e79 +0x1b9:  pop    %edi
08797e7a +0x1ba:  pop    %ebp
08797e7b +0x1bb:  ret
08797e7c +0x1bc:  lea    0x0(%esi,%eiz,1),%esi
08797e80 +0x1c0:  mov    -0x4b0(%ebp),%eax
08797e86 +0x1c6:  mov    %eax,(%esp)
08797e89 +0x1c9:  jmp    08797e1d <+0x15d>
08797e8b +0x1cb:  nop
08797e8c +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::SetPrivateKey @ 0x8797cc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::SetPrivateKey(yaSSL::x509 const&) */

int __thiscall yaSSL::CertManager::SetPrivateKey(CertManager *this,x509 *param_1)

{
  x509 *this_00;
  uint uVar1;
  uchar *puVar2;
  size_t sVar3;
  void *pvVar4;
  int local_4b0;
  CertDecoder local_4a4 [32];
  int local_484;
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8797ccb;
  uVar1 = yaSSL::x509::get_length(param_1);
  input_buffer::allocate((input_buffer *)(this + 0xc),uVar1);
  uVar1 = yaSSL::x509::get_length(param_1);
  puVar2 = (uchar *)yaSSL::x509::get_buffer(param_1);
  input_buffer::assign((input_buffer *)(this + 0xc),puVar2,uVar1);
  if ((*(int *)this != 0) && (this_00 = *(x509 **)(*(int *)this + 8), this_00 != (x509 *)0x0)) {
    sVar3 = yaSSL::x509::get_length(this_00);
    pvVar4 = (void *)yaSSL::x509::get_buffer(this_00);
    local_2c = (void *)0x0;
    local_30 = sVar3;
    if (sVar3 != 0) {
      local_2c = operator_new__(sVar3,(uint)puVar2 & 0xffffff00);
    }
    memcpy(local_2c,pvVar4,local_30);
    local_24 = 0;
    local_20 = 0;
    TaoCrypt::CertDecoder::CertDecoder(local_4a4,&local_30,0,0,0,1);
    TaoCrypt::CertDecoder::DecodeToKey(local_4a4);
    TaoCrypt::BER_Decoder::GetError();
    if (local_4b0 == 0) {
      *(uint *)(this + 0x3c) = (local_484 != 0x285) + 1;
    }
    TaoCrypt::CertDecoder::~CertDecoder(local_4a4);
    pvVar4 = local_2c;
    uVar1 = 0;
    memset(local_2c,0,local_30);
    operator_delete__(pvVar4,uVar1 & 0xffffff00);
    return local_4b0;
  }
  return 0;
}
```
