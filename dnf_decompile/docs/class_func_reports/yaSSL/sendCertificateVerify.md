# sendCertificateVerify

`_ZN5yaSSL21sendCertificateVerifyERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendCertificateVerify(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a0eb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a0eb0  _ZN5yaSSL21sendCertificateVerifyERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendCertificateVerify(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x087a0eb0, 0x087a1089]
087a0eb0 +0x000:  push   %ebp
087a0eb1 +0x001:  mov    %esp,%ebp
087a0eb3 +0x003:  push   %edi
087a0eb4 +0x004:  push   %esi
087a0eb5 +0x005:  push   %ebx
087a0eb6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a0ebb +0x00b:  add    $0xbcbcdd,%ebx
087a0ec1 +0x011:  sub    $0x8c,%esp
087a0ec7 +0x017:  mov    0x8(%ebp),%eax
087a0eca +0x01a:  mov    %eax,(%esp)
087a0ecd +0x01d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a0ed2 +0x022:  test   %eax,%eax
087a0ed4 +0x024:  je     087a0ee8 <+0x38>
087a0ed6 +0x026:  add    $0x8c,%esp
087a0edc +0x02c:  pop    %ebx
087a0edd +0x02d:  pop    %esi
087a0ede +0x02e:  pop    %edi
087a0edf +0x02f:  pop    %ebp
087a0ee0 +0x030:  ret
087a0ee1 +0x031:  lea    0x0(%esi,%eiz,1),%esi
087a0ee8 +0x038:  lea    -0x5c(%ebp),%edi
087a0eeb +0x03b:  mov    %edi,(%esp)
087a0eee +0x03e:  call   08747070 <_ZN5yaSSL17CertificateVerifyC1Ev>  ; yaSSL::CertificateVerify::CertificateVerify()
087a0ef3 +0x043:  mov    0x8(%ebp),%ecx
087a0ef6 +0x046:  mov    %edi,(%esp)
087a0ef9 +0x049:  mov    %ecx,0x4(%esp)
087a0efd +0x04d:  call   0874bbf0 <_ZN5yaSSL17CertificateVerify5BuildERNS_3SSLE>  ; yaSSL::CertificateVerify::Build(yaSSL::SSL&)
087a0f02 +0x052:  lea    -0x20(%ebp),%eax
087a0f05 +0x055:  mov    %eax,-0x7c(%ebp)
087a0f08 +0x058:  lea    -0x1c(%ebp),%eax
087a0f0b +0x05b:  mov    %eax,(%esp)
087a0f0e +0x05e:  movl   $0x0,0x8(%esp)
087a0f16 +0x066:  movl   $0x3,0x4(%esp)
087a0f1e +0x06e:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a0f23 +0x073:  mov    -0x3d0(%ebx),%eax
087a0f29 +0x079:  add    $0x8,%eax
087a0f2c +0x07c:  mov    %eax,-0x2c(%ebp)
087a0f2f +0x07f:  movb   $0x0,0x4(%esp)
087a0f34 +0x084:  movl   $0xc,(%esp)
087a0f3b +0x08b:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087a0f40 +0x090:  mov    %eax,%esi
087a0f42 +0x092:  mov    %eax,(%esp)
087a0f45 +0x095:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a0f4a +0x09a:  mov    %edi,(%esp)
087a0f4d +0x09d:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a0f52 +0x0a2:  mov    %edi,(%esp)
087a0f55 +0x0a5:  mov    %eax,-0x6c(%ebp)
087a0f58 +0x0a8:  mov    -0x5c(%ebp),%eax
087a0f5b +0x0ab:  call   *(%eax)
087a0f5d +0x0ad:  lea    -0x2c(%ebp),%edx
087a0f60 +0x0b0:  mov    %edx,(%esp)
087a0f63 +0x0b3:  mov    %edx,-0x70(%ebp)
087a0f66 +0x0b6:  mov    %eax,0x4(%esp)
087a0f6a +0x0ba:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a0f6f +0x0bf:  mov    -0x70(%ebp),%edx
087a0f72 +0x0c2:  mov    -0x6c(%ebp),%ecx
087a0f75 +0x0c5:  mov    %edx,(%esp)
087a0f78 +0x0c8:  mov    %ecx,0x4(%esp)
087a0f7c +0x0cc:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a0f81 +0x0d1:  mov    0x8(%ebp),%eax
087a0f84 +0x0d4:  mov    %eax,(%esp)
087a0f87 +0x0d7:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0f8c +0x0dc:  mov    %eax,(%esp)
087a0f8f +0x0df:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a0f94 +0x0e4:  movzbl 0x12f(%eax),%ecx
087a0f9b +0x0eb:  movzbl 0x12e(%eax),%eax
087a0fa2 +0x0f2:  movl   $0x16,-0x20(%ebp)
087a0fa9 +0x0f9:  mov    %esi,(%esp)
087a0fac +0x0fc:  mov    %cl,-0x1b(%ebp)
087a0faf +0x0ff:  mov    %al,-0x1c(%ebp)
087a0fb2 +0x102:  movzwl -0x6c(%ebp),%eax
087a0fb6 +0x106:  add    $0x4,%eax
087a0fb9 +0x109:  mov    %ax,-0x1a(%ebp)
087a0fbd +0x10d:  movzwl %ax,%eax
087a0fc0 +0x110:  add    $0x5,%eax
087a0fc3 +0x113:  mov    %eax,0x4(%esp)
087a0fc7 +0x117:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a0fcc +0x11c:  mov    -0x7c(%ebp),%eax
087a0fcf +0x11f:  mov    %esi,(%esp)
087a0fd2 +0x122:  mov    %eax,0x4(%esp)
087a0fd6 +0x126:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a0fdb +0x12b:  mov    -0x70(%ebp),%edx
087a0fde +0x12e:  mov    %edx,0x4(%esp)
087a0fe2 +0x132:  mov    %eax,(%esp)
087a0fe5 +0x135:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a0fea +0x13a:  mov    %edi,0x4(%esp)
087a0fee +0x13e:  mov    %eax,(%esp)
087a0ff1 +0x141:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a0ff6 +0x146:  mov    0x8(%ebp),%eax
087a0ff9 +0x149:  mov    %esi,%edx
087a0ffb +0x14b:  movl   $0x0,(%esp)
087a1002 +0x152:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a1007 +0x157:  mov    0xc(%ebp),%edx
087a100a +0x15a:  test   %edx,%edx
087a100c +0x15c:  je     087a1070 <+0x1c0>
087a100e +0x15e:  mov    %esi,(%esp)
087a1011 +0x161:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a1016 +0x166:  mov    %esi,(%esp)
087a1019 +0x169:  mov    %eax,-0x70(%ebp)
087a101c +0x16c:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a1021 +0x171:  mov    -0x70(%ebp),%edx
087a1024 +0x174:  mov    %edx,0x8(%esp)
087a1028 +0x178:  mov    %eax,0x4(%esp)
087a102c +0x17c:  mov    0x8(%ebp),%eax
087a102f +0x17f:  mov    %eax,(%esp)
087a1032 +0x182:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a1037 +0x187:  test   %esi,%esi
087a1039 +0x189:  je     087a1043 <+0x193>
087a103b +0x18b:  mov    %esi,(%esp)
087a103e +0x18e:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a1043 +0x193:  mov    %esi,(%esp)
087a1046 +0x196:  movb   $0x0,0x4(%esp)
087a104b +0x19b:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a1050 +0x1a0:  mov    -0x420(%ebx),%eax
087a1056 +0x1a6:  mov    %edi,(%esp)
087a1059 +0x1a9:  add    $0x8,%eax
087a105c +0x1ac:  mov    %eax,-0x2c(%ebp)
087a105f +0x1af:  call   0874b8c0 <_ZN5yaSSL17CertificateVerifyD1Ev>  ; yaSSL::CertificateVerify::~CertificateVerify()
087a1064 +0x1b4:  add    $0x8c,%esp
087a106a +0x1ba:  pop    %ebx
087a106b +0x1bb:  pop    %esi
087a106c +0x1bc:  pop    %edi
087a106d +0x1bd:  pop    %ebp
087a106e +0x1be:  ret
087a106f +0x1bf:  nop
087a1070 +0x1c0:  mov    0x8(%ebp),%ecx
087a1073 +0x1c3:  mov    %esi,0x4(%esp)
087a1077 +0x1c7:  xor    %esi,%esi
087a1079 +0x1c9:  mov    %ecx,(%esp)
087a107c +0x1cc:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a1081 +0x1d1:  jmp    087a1043 <+0x193>
087a1083 +0x1d3:  lea    0x0(%esi),%esi
087a1089 +0x1d9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::sendCertificateVerify @ 0x87a0eb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendCertificateVerify(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendCertificateVerify(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_70;
  undefined4 *local_60 [12];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a0ebb;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  CertificateVerify::CertificateVerify((CertificateVerify *)local_60);
  CertificateVerify::Build((CertificateVerify *)local_60,param_1);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_30[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_60);
  uVar3 = (*(code *)*local_60[0])((CertificateVerify *)local_60);
  HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_70 = (short)uVar2;
  local_1e = local_70 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_30);
  operator<<(poVar4,(HandShakeBase *)local_60);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar4 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar5 = this;
  }
  else {
    uVar2 = output_buffer::get_size(this);
    poVar5 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar5,uVar2);
    poVar4 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar4,(uint)poVar5 & 0xffffff00);
  local_30[0] = PTR_vtable_0936c778 + 8;
  CertificateVerify::~CertificateVerify((CertificateVerify *)local_60);
  return;
}
```
