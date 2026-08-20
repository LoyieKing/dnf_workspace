# sendCertificateRequest

`_ZN5yaSSL22sendCertificateRequestERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendCertificateRequest(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a1090` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1090  _ZN5yaSSL22sendCertificateRequestERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendCertificateRequest(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x087a1090, 0x087a125c]
087a1090 +0x000:  push   %ebp
087a1091 +0x001:  mov    %esp,%ebp
087a1093 +0x003:  push   %edi
087a1094 +0x004:  push   %esi
087a1095 +0x005:  push   %ebx
087a1096 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a109b +0x00b:  add    $0xbcbafd,%ebx
087a10a1 +0x011:  sub    $0x8c,%esp
087a10a7 +0x017:  mov    0x8(%ebp),%eax
087a10aa +0x01a:  mov    %eax,(%esp)
087a10ad +0x01d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a10b2 +0x022:  test   %eax,%eax
087a10b4 +0x024:  je     087a10c8 <+0x38>
087a10b6 +0x026:  add    $0x8c,%esp
087a10bc +0x02c:  pop    %ebx
087a10bd +0x02d:  pop    %esi
087a10be +0x02e:  pop    %edi
087a10bf +0x02f:  pop    %ebp
087a10c0 +0x030:  ret
087a10c1 +0x031:  lea    0x0(%esi,%eiz,1),%esi
087a10c8 +0x038:  lea    -0x60(%ebp),%edi
087a10cb +0x03b:  mov    %edi,(%esp)
087a10ce +0x03e:  call   08747940 <_ZN5yaSSL18CertificateRequestC1Ev>  ; yaSSL::CertificateRequest::CertificateRequest()
087a10d3 +0x043:  mov    %edi,(%esp)
087a10d6 +0x046:  call   08747020 <_ZN5yaSSL18CertificateRequest5BuildEv>  ; yaSSL::CertificateRequest::Build()
087a10db +0x04b:  lea    -0x1c(%ebp),%eax
087a10de +0x04e:  lea    -0x20(%ebp),%ecx
087a10e1 +0x051:  mov    %eax,(%esp)
087a10e4 +0x054:  movl   $0x0,0x8(%esp)
087a10ec +0x05c:  movl   $0x3,0x4(%esp)
087a10f4 +0x064:  mov    %ecx,-0x7c(%ebp)
087a10f7 +0x067:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a10fc +0x06c:  mov    -0x3d0(%ebx),%eax
087a1102 +0x072:  add    $0x8,%eax
087a1105 +0x075:  mov    %eax,-0x2c(%ebp)
087a1108 +0x078:  movb   $0x0,0x4(%esp)
087a110d +0x07d:  movl   $0xc,(%esp)
087a1114 +0x084:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087a1119 +0x089:  mov    %eax,%esi
087a111b +0x08b:  mov    %eax,(%esp)
087a111e +0x08e:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a1123 +0x093:  mov    %edi,(%esp)
087a1126 +0x096:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a112b +0x09b:  mov    %edi,(%esp)
087a112e +0x09e:  mov    %eax,-0x6c(%ebp)
087a1131 +0x0a1:  mov    -0x60(%ebp),%eax
087a1134 +0x0a4:  call   *(%eax)
087a1136 +0x0a6:  lea    -0x2c(%ebp),%edx
087a1139 +0x0a9:  mov    %edx,(%esp)
087a113c +0x0ac:  mov    %edx,-0x70(%ebp)
087a113f +0x0af:  mov    %eax,0x4(%esp)
087a1143 +0x0b3:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a1148 +0x0b8:  mov    -0x70(%ebp),%edx
087a114b +0x0bb:  mov    -0x6c(%ebp),%eax
087a114e +0x0be:  mov    %edx,(%esp)
087a1151 +0x0c1:  mov    %eax,0x4(%esp)
087a1155 +0x0c5:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a115a +0x0ca:  mov    0x8(%ebp),%ecx
087a115d +0x0cd:  mov    %ecx,(%esp)
087a1160 +0x0d0:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a1165 +0x0d5:  mov    %eax,(%esp)
087a1168 +0x0d8:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a116d +0x0dd:  movzbl 0x12f(%eax),%ecx
087a1174 +0x0e4:  movzbl 0x12e(%eax),%eax
087a117b +0x0eb:  movl   $0x16,-0x20(%ebp)
087a1182 +0x0f2:  mov    %esi,(%esp)
087a1185 +0x0f5:  mov    %cl,-0x1b(%ebp)
087a1188 +0x0f8:  mov    %al,-0x1c(%ebp)
087a118b +0x0fb:  movzwl -0x6c(%ebp),%eax
087a118f +0x0ff:  add    $0x4,%eax
087a1192 +0x102:  mov    %ax,-0x1a(%ebp)
087a1196 +0x106:  movzwl %ax,%eax
087a1199 +0x109:  add    $0x5,%eax
087a119c +0x10c:  mov    %eax,0x4(%esp)
087a11a0 +0x110:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a11a5 +0x115:  mov    -0x7c(%ebp),%eax
087a11a8 +0x118:  mov    %esi,(%esp)
087a11ab +0x11b:  mov    %eax,0x4(%esp)
087a11af +0x11f:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a11b4 +0x124:  mov    -0x70(%ebp),%edx
087a11b7 +0x127:  mov    %edx,0x4(%esp)
087a11bb +0x12b:  mov    %eax,(%esp)
087a11be +0x12e:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a11c3 +0x133:  mov    %edi,0x4(%esp)
087a11c7 +0x137:  mov    %eax,(%esp)
087a11ca +0x13a:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a11cf +0x13f:  mov    0x8(%ebp),%eax
087a11d2 +0x142:  mov    %esi,%edx
087a11d4 +0x144:  movl   $0x0,(%esp)
087a11db +0x14b:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a11e0 +0x150:  mov    0xc(%ebp),%ecx
087a11e3 +0x153:  test   %ecx,%ecx
087a11e5 +0x155:  je     087a1248 <+0x1b8>
087a11e7 +0x157:  mov    %esi,(%esp)
087a11ea +0x15a:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a11ef +0x15f:  mov    %esi,(%esp)
087a11f2 +0x162:  mov    %eax,-0x70(%ebp)
087a11f5 +0x165:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a11fa +0x16a:  mov    -0x70(%ebp),%edx
087a11fd +0x16d:  mov    %edx,0x8(%esp)
087a1201 +0x171:  mov    %eax,0x4(%esp)
087a1205 +0x175:  mov    0x8(%ebp),%eax
087a1208 +0x178:  mov    %eax,(%esp)
087a120b +0x17b:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a1210 +0x180:  test   %esi,%esi
087a1212 +0x182:  je     087a121c <+0x18c>
087a1214 +0x184:  mov    %esi,(%esp)
087a1217 +0x187:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a121c +0x18c:  mov    %esi,(%esp)
087a121f +0x18f:  movb   $0x0,0x4(%esp)
087a1224 +0x194:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a1229 +0x199:  mov    -0x420(%ebx),%eax
087a122f +0x19f:  mov    %edi,(%esp)
087a1232 +0x1a2:  add    $0x8,%eax
087a1235 +0x1a5:  mov    %eax,-0x2c(%ebp)
087a1238 +0x1a8:  call   0874b800 <_ZN5yaSSL18CertificateRequestD1Ev>  ; yaSSL::CertificateRequest::~CertificateRequest()
087a123d +0x1ad:  add    $0x8c,%esp
087a1243 +0x1b3:  pop    %ebx
087a1244 +0x1b4:  pop    %esi
087a1245 +0x1b5:  pop    %edi
087a1246 +0x1b6:  pop    %ebp
087a1247 +0x1b7:  ret
087a1248 +0x1b8:  mov    0x8(%ebp),%ecx
087a124b +0x1bb:  mov    %esi,0x4(%esp)
087a124f +0x1bf:  xor    %esi,%esi
087a1251 +0x1c1:  mov    %ecx,(%esp)
087a1254 +0x1c4:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a1259 +0x1c9:  jmp    087a121c <+0x18c>
087a125b +0x1cb:  nop
087a125c +0x1cc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sendCertificateRequest @ 0x87a1090

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendCertificateRequest(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendCertificateRequest(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_70;
  undefined4 *local_64 [13];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a109b;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  CertificateRequest::CertificateRequest((CertificateRequest *)local_64);
  CertificateRequest::Build((CertificateRequest *)local_64);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_30[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_64);
  uVar3 = (*(code *)*local_64[0])((CertificateRequest *)local_64);
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
  operator<<(poVar4,(HandShakeBase *)local_64);
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
  CertificateRequest::~CertificateRequest((CertificateRequest *)local_64);
  return;
}
```
