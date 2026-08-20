# sendCertificate

`_ZN5yaSSL15sendCertificateERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendCertificate(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a1260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1260  _ZN5yaSSL15sendCertificateERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendCertificate(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x087a1260, 0x087a142f]
087a1260 +0x000:  push   %ebp
087a1261 +0x001:  mov    %esp,%ebp
087a1263 +0x003:  push   %edi
087a1264 +0x004:  push   %esi
087a1265 +0x005:  push   %ebx
087a1266 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a126b +0x00b:  add    $0xbcb92d,%ebx
087a1271 +0x011:  sub    $0x5c,%esp
087a1274 +0x014:  mov    0x8(%ebp),%edi
087a1277 +0x017:  mov    %edi,(%esp)
087a127a +0x01a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a127f +0x01f:  test   %eax,%eax
087a1281 +0x021:  je     087a1290 <+0x30>
087a1283 +0x023:  add    $0x5c,%esp
087a1286 +0x026:  pop    %ebx
087a1287 +0x027:  pop    %esi
087a1288 +0x028:  pop    %edi
087a1289 +0x029:  pop    %ebp
087a128a +0x02a:  ret
087a128b +0x02b:  nop
087a128c +0x02c:  lea    0x0(%esi,%eiz,1),%esi
087a1290 +0x030:  mov    %edi,(%esp)
087a1293 +0x033:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
087a1298 +0x038:  mov    %eax,(%esp)
087a129b +0x03b:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
087a12a0 +0x040:  mov    %eax,(%esp)
087a12a3 +0x043:  call   08797490 <_ZNK5yaSSL11CertManager8get_certEv>  ; yaSSL::CertManager::get_cert() const
087a12a8 +0x048:  mov    %eax,0x4(%esp)
087a12ac +0x04c:  lea    -0x2c(%ebp),%eax
087a12af +0x04f:  mov    %eax,-0x3c(%ebp)
087a12b2 +0x052:  mov    %eax,(%esp)
087a12b5 +0x055:  call   08749730 <_ZN5yaSSL11CertificateC1EPKNS_4x509E>  ; yaSSL::Certificate::Certificate(yaSSL::x509 const*)
087a12ba +0x05a:  lea    -0x1c(%ebp),%eax
087a12bd +0x05d:  lea    -0x20(%ebp),%edx
087a12c0 +0x060:  mov    %eax,(%esp)
087a12c3 +0x063:  movl   $0x0,0x8(%esp)
087a12cb +0x06b:  movl   $0x3,0x4(%esp)
087a12d3 +0x073:  mov    %edx,-0x4c(%ebp)
087a12d6 +0x076:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a12db +0x07b:  mov    -0x3d0(%ebx),%eax
087a12e1 +0x081:  add    $0x8,%eax
087a12e4 +0x084:  mov    %eax,-0x38(%ebp)
087a12e7 +0x087:  movb   $0x0,0x4(%esp)
087a12ec +0x08c:  movl   $0xc,(%esp)
087a12f3 +0x093:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087a12f8 +0x098:  mov    %eax,%esi
087a12fa +0x09a:  mov    %eax,(%esp)
087a12fd +0x09d:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a1302 +0x0a2:  mov    -0x3c(%ebp),%ecx
087a1305 +0x0a5:  mov    %ecx,(%esp)
087a1308 +0x0a8:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a130d +0x0ad:  mov    %eax,-0x40(%ebp)
087a1310 +0x0b0:  mov    -0x3c(%ebp),%eax
087a1313 +0x0b3:  mov    %eax,(%esp)
087a1316 +0x0b6:  mov    -0x2c(%ebp),%eax
087a1319 +0x0b9:  call   *(%eax)
087a131b +0x0bb:  lea    -0x38(%ebp),%edx
087a131e +0x0be:  mov    %edx,(%esp)
087a1321 +0x0c1:  mov    %edx,-0x44(%ebp)
087a1324 +0x0c4:  mov    %eax,0x4(%esp)
087a1328 +0x0c8:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a132d +0x0cd:  mov    -0x44(%ebp),%edx
087a1330 +0x0d0:  mov    -0x40(%ebp),%ecx
087a1333 +0x0d3:  mov    %edx,(%esp)
087a1336 +0x0d6:  mov    %ecx,0x4(%esp)
087a133a +0x0da:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a133f +0x0df:  mov    %edi,(%esp)
087a1342 +0x0e2:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a1347 +0x0e7:  mov    %eax,(%esp)
087a134a +0x0ea:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a134f +0x0ef:  movzbl 0x12f(%eax),%ecx
087a1356 +0x0f6:  movzbl 0x12e(%eax),%eax
087a135d +0x0fd:  movl   $0x16,-0x20(%ebp)
087a1364 +0x104:  mov    %esi,(%esp)
087a1367 +0x107:  mov    %cl,-0x1b(%ebp)
087a136a +0x10a:  mov    %al,-0x1c(%ebp)
087a136d +0x10d:  movzwl -0x40(%ebp),%eax
087a1371 +0x111:  add    $0x4,%eax
087a1374 +0x114:  mov    %ax,-0x1a(%ebp)
087a1378 +0x118:  movzwl %ax,%eax
087a137b +0x11b:  add    $0x5,%eax
087a137e +0x11e:  mov    %eax,0x4(%esp)
087a1382 +0x122:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a1387 +0x127:  mov    -0x4c(%ebp),%eax
087a138a +0x12a:  mov    %esi,(%esp)
087a138d +0x12d:  mov    %eax,0x4(%esp)
087a1391 +0x131:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a1396 +0x136:  mov    -0x44(%ebp),%edx
087a1399 +0x139:  mov    %edx,0x4(%esp)
087a139d +0x13d:  mov    %eax,(%esp)
087a13a0 +0x140:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a13a5 +0x145:  mov    -0x3c(%ebp),%edx
087a13a8 +0x148:  mov    %edx,0x4(%esp)
087a13ac +0x14c:  mov    %eax,(%esp)
087a13af +0x14f:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a13b4 +0x154:  mov    %edi,%eax
087a13b6 +0x156:  mov    %esi,%edx
087a13b8 +0x158:  movl   $0x0,(%esp)
087a13bf +0x15f:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a13c4 +0x164:  mov    0xc(%ebp),%eax
087a13c7 +0x167:  test   %eax,%eax
087a13c9 +0x169:  je     087a1418 <+0x1b8>
087a13cb +0x16b:  mov    %esi,(%esp)
087a13ce +0x16e:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a13d3 +0x173:  mov    %esi,(%esp)
087a13d6 +0x176:  mov    %eax,-0x44(%ebp)
087a13d9 +0x179:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a13de +0x17e:  mov    -0x44(%ebp),%edx
087a13e1 +0x181:  mov    %edi,(%esp)
087a13e4 +0x184:  mov    %edx,0x8(%esp)
087a13e8 +0x188:  mov    %eax,0x4(%esp)
087a13ec +0x18c:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a13f1 +0x191:  test   %esi,%esi
087a13f3 +0x193:  je     087a13fd <+0x19d>
087a13f5 +0x195:  mov    %esi,(%esp)
087a13f8 +0x198:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a13fd +0x19d:  mov    %esi,(%esp)
087a1400 +0x1a0:  movb   $0x0,0x4(%esp)
087a1405 +0x1a5:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a140a +0x1aa:  add    $0x5c,%esp
087a140d +0x1ad:  pop    %ebx
087a140e +0x1ae:  pop    %esi
087a140f +0x1af:  pop    %edi
087a1410 +0x1b0:  pop    %ebp
087a1411 +0x1b1:  ret
087a1412 +0x1b2:  lea    0x0(%esi),%esi
087a1418 +0x1b8:  mov    %esi,0x4(%esp)
087a141c +0x1bc:  xor    %esi,%esi
087a141e +0x1be:  mov    %edi,(%esp)
087a1421 +0x1c1:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a1426 +0x1c6:  jmp    087a13fd <+0x19d>
087a1428 +0x1c8:  nop
087a1429 +0x1c9:  nop
087a142a +0x1ca:  nop
087a142b +0x1cb:  nop
087a142c +0x1cc:  nop
087a142d +0x1cd:  nop
087a142e +0x1ce:  nop
087a142f +0x1cf:  nop
```

## 反编译 C

```c
// yaSSL::sendCertificate @ 0x87a1260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendCertificate(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendCertificate(SSL *param_1,int param_2)

{
  int iVar1;
  Crypto *this;
  CertManager *this_00;
  x509 *pxVar2;
  output_buffer *this_01;
  uint uVar3;
  undefined4 uVar4;
  Security *this_02;
  output_buffer *poVar5;
  output_buffer *poVar6;
  short local_44;
  undefined *local_3c [3];
  undefined4 *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a126b;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  this = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(this);
  pxVar2 = (x509 *)CertManager::get_cert(this_00);
  Certificate::Certificate((Certificate *)local_30,pxVar2);
  uVar3 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_3c[0] = PTR_vtable_0936c7c8 + 8;
  this_01 = operator_new(0xc,uVar3 & 0xffffff00);
  output_buffer::output_buffer(this_01);
  uVar3 = HandShakeBase::get_length((HandShakeBase *)local_30);
  uVar4 = (*(code *)*local_30[0])((Certificate *)local_30);
  HandShakeHeader::set_type((HandShakeHeader *)local_3c,uVar4);
  HandShakeHeader::set_length((HandShakeHeader *)local_3c,uVar3);
  this_02 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_02);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_44 = (short)uVar3;
  local_1e = local_44 + 4;
  output_buffer::allocate(this_01,local_1e + 5);
  poVar5 = (output_buffer *)operator<<(this_01,(RecordLayerHeader *)&local_24);
  poVar5 = (output_buffer *)operator<<(poVar5,(HandShakeHeader *)local_3c);
  operator<<(poVar5,(HandShakeBase *)local_30);
  (anonymous_namespace)::hashHandShake(param_1,this_01,false);
  if (param_2 == 0) {
    poVar5 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this_01);
    poVar6 = this_01;
  }
  else {
    uVar3 = output_buffer::get_size(this_01);
    poVar6 = (output_buffer *)output_buffer::get_buffer(this_01);
    SSL::Send(param_1,(uchar *)poVar6,uVar3);
    poVar5 = this_01;
    if (this_01 != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this_01);
    }
  }
  operator_delete(poVar5,(uint)poVar6 & 0xffffff00);
  return;
}
```
