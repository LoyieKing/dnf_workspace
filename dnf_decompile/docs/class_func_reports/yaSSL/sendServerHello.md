# sendServerHello

`_ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendServerHello(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a0640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a0640  _ZN5yaSSL15sendServerHelloERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendServerHello(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x087a0640, 0x087a08c9]
087a0640 +0x000:  push   %ebp
087a0641 +0x001:  mov    %esp,%ebp
087a0643 +0x003:  push   %edi
087a0644 +0x004:  push   %esi
087a0645 +0x005:  push   %ebx
087a0646 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a064b +0x00b:  add    $0xbcc54d,%ebx
087a0651 +0x011:  sub    $0xac,%esp
087a0657 +0x017:  mov    0x8(%ebp),%esi
087a065a +0x01a:  mov    %esi,(%esp)
087a065d +0x01d:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0662 +0x022:  mov    %eax,(%esp)
087a0665 +0x025:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
087a066a +0x02a:  test   %al,%al
087a066c +0x02c:  je     087a0698 <+0x58>
087a066e +0x02e:  movl   $0x2,0x4(%esp)
087a0676 +0x036:  mov    %esi,(%esp)
087a0679 +0x039:  call   0874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>  ; yaSSL::SSL::verifyState(yaSSL::ServerState)
087a067e +0x03e:  mov    %esi,(%esp)
087a0681 +0x041:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a0686 +0x046:  test   %eax,%eax
087a0688 +0x048:  je     087a06b4 <+0x74>
087a068a +0x04a:  add    $0xac,%esp
087a0690 +0x050:  pop    %ebx
087a0691 +0x051:  pop    %esi
087a0692 +0x052:  pop    %edi
087a0693 +0x053:  pop    %ebp
087a0694 +0x054:  ret
087a0695 +0x055:  lea    0x0(%esi),%esi
087a0698 +0x058:  movl   $0x1,0x4(%esp)
087a06a0 +0x060:  mov    %esi,(%esp)
087a06a3 +0x063:  call   0874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>  ; yaSSL::SSL::verifyState(yaSSL::ServerState)
087a06a8 +0x068:  mov    %esi,(%esp)
087a06ab +0x06b:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a06b0 +0x070:  test   %eax,%eax
087a06b2 +0x072:  jne    087a068a <+0x4a>
087a06b4 +0x074:  mov    %esi,(%esp)
087a06b7 +0x077:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a06bc +0x07c:  mov    %eax,(%esp)
087a06bf +0x07f:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a06c4 +0x084:  movzbl 0x12d(%eax),%edi
087a06cb +0x08b:  mov    %esi,(%esp)
087a06ce +0x08e:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a06d3 +0x093:  mov    %eax,(%esp)
087a06d6 +0x096:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a06db +0x09b:  mov    %edi,0x8(%esp)
087a06df +0x09f:  movzwl 0x12e(%eax),%eax
087a06e6 +0x0a6:  mov    %ax,0x4(%esp)
087a06eb +0x0ab:  lea    -0x80(%ebp),%eax
087a06ee +0x0ae:  mov    %eax,-0x8c(%ebp)
087a06f4 +0x0b4:  mov    %eax,(%esp)
087a06f7 +0x0b7:  call   08747ae0 <_ZN5yaSSL11ServerHelloC1ENS_15ProtocolVersionEb>  ; yaSSL::ServerHello::ServerHello(yaSSL::ProtocolVersion, bool)
087a06fc +0x0bc:  lea    -0x1c(%ebp),%eax
087a06ff +0x0bf:  lea    -0x20(%ebp),%edx
087a0702 +0x0c2:  mov    %eax,(%esp)
087a0705 +0x0c5:  movl   $0x0,0x8(%esp)
087a070d +0x0cd:  movl   $0x3,0x4(%esp)
087a0715 +0x0d5:  mov    %edx,-0x9c(%ebp)
087a071b +0x0db:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a0720 +0x0e0:  mov    -0x3d0(%ebx),%eax
087a0726 +0x0e6:  add    $0x8,%eax
087a0729 +0x0e9:  mov    %eax,-0x2c(%ebp)
087a072c +0x0ec:  movb   $0x0,0x4(%esp)
087a0731 +0x0f1:  movl   $0xc,(%esp)
087a0738 +0x0f8:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087a073d +0x0fd:  mov    %eax,%edi
087a073f +0x0ff:  mov    %eax,(%esp)
087a0742 +0x102:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a0747 +0x107:  mov    -0x8c(%ebp),%ecx
087a074d +0x10d:  mov    %esi,(%esp)
087a0750 +0x110:  mov    %ecx,0x4(%esp)
087a0754 +0x114:  call   0879dcb0 <_ZN5yaSSL16buildServerHelloERNS_3SSLERNS_11ServerHelloE>  ; yaSSL::buildServerHello(yaSSL::SSL&, yaSSL::ServerHello&)
087a0759 +0x119:  mov    -0x8c(%ebp),%eax
087a075f +0x11f:  mov    %eax,(%esp)
087a0762 +0x122:  call   08746e80 <_ZNK5yaSSL11ServerHello10get_randomEv>  ; yaSSL::ServerHello::get_random() const
087a0767 +0x127:  movl   $0x0,0x8(%esp)
087a076f +0x12f:  mov    %esi,(%esp)
087a0772 +0x132:  mov    %eax,0x4(%esp)
087a0776 +0x136:  call   0874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>  ; yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)
087a077b +0x13b:  mov    -0x8c(%ebp),%edx
087a0781 +0x141:  mov    %edx,(%esp)
087a0784 +0x144:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a0789 +0x149:  mov    -0x8c(%ebp),%ecx
087a078f +0x14f:  mov    %ecx,(%esp)
087a0792 +0x152:  mov    %eax,-0x90(%ebp)
087a0798 +0x158:  mov    -0x80(%ebp),%eax
087a079b +0x15b:  call   *(%eax)
087a079d +0x15d:  lea    -0x2c(%ebp),%edx
087a07a0 +0x160:  mov    %edx,(%esp)
087a07a3 +0x163:  mov    %edx,-0x94(%ebp)
087a07a9 +0x169:  mov    %eax,0x4(%esp)
087a07ad +0x16d:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a07b2 +0x172:  mov    -0x94(%ebp),%edx
087a07b8 +0x178:  mov    -0x90(%ebp),%eax
087a07be +0x17e:  mov    %edx,(%esp)
087a07c1 +0x181:  mov    %eax,0x4(%esp)
087a07c5 +0x185:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a07ca +0x18a:  mov    %esi,(%esp)
087a07cd +0x18d:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a07d2 +0x192:  mov    %eax,(%esp)
087a07d5 +0x195:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a07da +0x19a:  movzbl 0x12f(%eax),%ecx
087a07e1 +0x1a1:  movzbl 0x12e(%eax),%eax
087a07e8 +0x1a8:  movl   $0x16,-0x20(%ebp)
087a07ef +0x1af:  mov    %edi,(%esp)
087a07f2 +0x1b2:  mov    %cl,-0x1b(%ebp)
087a07f5 +0x1b5:  mov    %al,-0x1c(%ebp)
087a07f8 +0x1b8:  movzwl -0x90(%ebp),%eax
087a07ff +0x1bf:  add    $0x4,%eax
087a0802 +0x1c2:  mov    %ax,-0x1a(%ebp)
087a0806 +0x1c6:  movzwl %ax,%eax
087a0809 +0x1c9:  add    $0x5,%eax
087a080c +0x1cc:  mov    %eax,0x4(%esp)
087a0810 +0x1d0:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a0815 +0x1d5:  mov    -0x9c(%ebp),%eax
087a081b +0x1db:  mov    %edi,(%esp)
087a081e +0x1de:  mov    %eax,0x4(%esp)
087a0822 +0x1e2:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a0827 +0x1e7:  mov    -0x94(%ebp),%edx
087a082d +0x1ed:  mov    %edx,0x4(%esp)
087a0831 +0x1f1:  mov    %eax,(%esp)
087a0834 +0x1f4:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a0839 +0x1f9:  mov    -0x8c(%ebp),%edx
087a083f +0x1ff:  mov    %edx,0x4(%esp)
087a0843 +0x203:  mov    %eax,(%esp)
087a0846 +0x206:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a084b +0x20b:  mov    %edi,%edx
087a084d +0x20d:  mov    %esi,%eax
087a084f +0x20f:  movl   $0x0,(%esp)
087a0856 +0x216:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a085b +0x21b:  mov    0xc(%ebp),%edx
087a085e +0x21e:  test   %edx,%edx
087a0860 +0x220:  je     087a08b8 <+0x278>
087a0862 +0x222:  mov    %edi,(%esp)
087a0865 +0x225:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a086a +0x22a:  mov    %edi,(%esp)
087a086d +0x22d:  mov    %eax,-0x94(%ebp)
087a0873 +0x233:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a0878 +0x238:  mov    -0x94(%ebp),%edx
087a087e +0x23e:  mov    %esi,(%esp)
087a0881 +0x241:  mov    %edx,0x8(%esp)
087a0885 +0x245:  mov    %eax,0x4(%esp)
087a0889 +0x249:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a088e +0x24e:  test   %edi,%edi
087a0890 +0x250:  je     087a089a <+0x25a>
087a0892 +0x252:  mov    %edi,(%esp)
087a0895 +0x255:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a089a +0x25a:  mov    %edi,(%esp)
087a089d +0x25d:  movb   $0x0,0x4(%esp)
087a08a2 +0x262:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a08a7 +0x267:  add    $0xac,%esp
087a08ad +0x26d:  pop    %ebx
087a08ae +0x26e:  pop    %esi
087a08af +0x26f:  pop    %edi
087a08b0 +0x270:  pop    %ebp
087a08b1 +0x271:  ret
087a08b2 +0x272:  lea    0x0(%esi),%esi
087a08b8 +0x278:  mov    %edi,0x4(%esp)
087a08bc +0x27c:  xor    %edi,%edi
087a08be +0x27e:  mov    %esi,(%esp)
087a08c1 +0x281:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a08c6 +0x286:  jmp    087a089a <+0x25a>
087a08c8 +0x288:  nop
087a08c9 +0x289:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sendServerHello @ 0x87a0640

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendServerHello(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendServerHello(SSL *param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  Security *pSVar3;
  int iVar4;
  output_buffer *this;
  undefined4 uVar5;
  uint uVar6;
  output_buffer *poVar7;
  output_buffer *poVar8;
  undefined2 uVar9;
  short local_94;
  undefined4 *local_84 [21];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a064b;
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  cVar2 = Security::get_resuming(pSVar3);
  if (cVar2 == '\0') {
    uVar9 = 0;
    SSL::verifyState(param_1,1);
    iVar4 = SSL::GetError(param_1);
  }
  else {
    uVar9 = 0;
    SSL::verifyState(param_1,2);
    iVar4 = SSL::GetError(param_1);
  }
  if (iVar4 != 0) {
    return;
  }
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_connection(pSVar3);
  uVar1 = *(undefined1 *)(iVar4 + 0x12d);
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_connection(pSVar3);
  ServerHello::ServerHello
            ((ServerHello *)local_84,CONCAT22(uVar9,*(undefined2 *)(iVar4 + 0x12e)),uVar1);
  uVar6 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_30[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar6 & 0xffffff00);
  output_buffer::output_buffer(this);
  buildServerHello(param_1,(ServerHello *)local_84);
  uVar5 = ServerHello::get_random((ServerHello *)local_84);
  SSL::set_random(param_1,uVar5,0);
  uVar6 = HandShakeBase::get_length((HandShakeBase *)local_84);
  uVar5 = (*(code *)*local_84[0])((ServerHello *)local_84);
  HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar5);
  HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar6);
  pSVar3 = (Security *)SSL::getSecurity(param_1);
  iVar4 = Security::get_connection(pSVar3);
  local_1f = *(undefined1 *)(iVar4 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar4 + 0x12e);
  local_24 = 0x16;
  local_94 = (short)uVar6;
  local_1e = local_94 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar7 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar7 = (output_buffer *)operator<<(poVar7,(HandShakeHeader *)local_30);
  operator<<(poVar7,(HandShakeBase *)local_84);
  (anonymous_namespace)::hashHandShake(param_1,this,false);
  if (param_2 == 0) {
    poVar7 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar8 = this;
  }
  else {
    uVar6 = output_buffer::get_size(this);
    poVar8 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar8,uVar6);
    poVar7 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar7,(uint)poVar8 & 0xffffff00);
  return;
}
```
