# sendClientHello

`_ZN5yaSSL15sendClientHelloERNS_3SSLE`

`yaSSL::sendClientHello(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a08d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a08d0  _ZN5yaSSL15sendClientHelloERNS_3SSLE
#           yaSSL::sendClientHello(yaSSL::SSL&)
# range [0x087a08d0, 0x087a0ae9]
087a08d0 +0x000:  push   %ebp
087a08d1 +0x001:  mov    %esp,%ebp
087a08d3 +0x003:  push   %edi
087a08d4 +0x004:  push   %esi
087a08d5 +0x005:  push   %ebx
087a08d6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a08db +0x00b:  add    $0xbcc2bd,%ebx
087a08e1 +0x011:  sub    $0x13c,%esp
087a08e7 +0x017:  mov    0x8(%ebp),%esi
087a08ea +0x01a:  movl   $0x0,0x4(%esp)
087a08f2 +0x022:  mov    %esi,(%esp)
087a08f5 +0x025:  call   0874e1a0 <_ZN5yaSSL3SSL11verifyStateENS_11ClientStateE>  ; yaSSL::SSL::verifyState(yaSSL::ClientState)
087a08fa +0x02a:  mov    %esi,(%esp)
087a08fd +0x02d:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a0902 +0x032:  test   %eax,%eax
087a0904 +0x034:  jne    087a0adb <+0x20b>
087a090a +0x03a:  mov    %esi,(%esp)
087a090d +0x03d:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0912 +0x042:  mov    %eax,(%esp)
087a0915 +0x045:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a091a +0x04a:  movzbl 0x12d(%eax),%edi
087a0921 +0x051:  mov    %esi,(%esp)
087a0924 +0x054:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0929 +0x059:  mov    %eax,(%esp)
087a092c +0x05c:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a0931 +0x061:  mov    %edi,0x8(%esp)
087a0935 +0x065:  lea    -0x38(%ebp),%edi
087a0938 +0x068:  movzwl 0x12e(%eax),%eax
087a093f +0x06f:  mov    %ax,0x4(%esp)
087a0944 +0x074:  lea    -0x10c(%ebp),%eax
087a094a +0x07a:  mov    %eax,-0x11c(%ebp)
087a0950 +0x080:  mov    %eax,(%esp)
087a0953 +0x083:  call   087479d0 <_ZN5yaSSL11ClientHelloC1ENS_15ProtocolVersionEb>  ; yaSSL::ClientHello::ClientHello(yaSSL::ProtocolVersion, bool)
087a0958 +0x088:  lea    -0x20(%ebp),%edx
087a095b +0x08b:  lea    -0x1c(%ebp),%eax
087a095e +0x08e:  mov    %edx,-0x12c(%ebp)
087a0964 +0x094:  mov    %eax,(%esp)
087a0967 +0x097:  movl   $0x0,0x8(%esp)
087a096f +0x09f:  movl   $0x3,0x4(%esp)
087a0977 +0x0a7:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a097c +0x0ac:  mov    -0x3d0(%ebx),%eax
087a0982 +0x0b2:  mov    %edi,(%esp)
087a0985 +0x0b5:  add    $0x8,%eax
087a0988 +0x0b8:  mov    %eax,-0x2c(%ebp)
087a098b +0x0bb:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a0990 +0x0c0:  mov    -0x11c(%ebp),%ecx
087a0996 +0x0c6:  mov    %esi,(%esp)
087a0999 +0x0c9:  mov    %ecx,0x4(%esp)
087a099d +0x0cd:  call   0879db70 <_ZN5yaSSL16buildClientHelloERNS_3SSLERNS_11ClientHelloE>  ; yaSSL::buildClientHello(yaSSL::SSL&, yaSSL::ClientHello&)
087a09a2 +0x0d2:  mov    -0x11c(%ebp),%eax
087a09a8 +0x0d8:  mov    %eax,(%esp)
087a09ab +0x0db:  call   08746f30 <_ZNK5yaSSL11ClientHello10get_randomEv>  ; yaSSL::ClientHello::get_random() const
087a09b0 +0x0e0:  movl   $0x1,0x8(%esp)
087a09b8 +0x0e8:  mov    %esi,(%esp)
087a09bb +0x0eb:  mov    %eax,0x4(%esp)
087a09bf +0x0ef:  call   0874f3d0 <_ZN5yaSSL3SSL10set_randomEPKhNS_13ConnectionEndE>  ; yaSSL::SSL::set_random(unsigned char const*, yaSSL::ConnectionEnd)
087a09c4 +0x0f4:  mov    -0x11c(%ebp),%edx
087a09ca +0x0fa:  mov    %edx,(%esp)
087a09cd +0x0fd:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a09d2 +0x102:  mov    -0x11c(%ebp),%ecx
087a09d8 +0x108:  mov    %ecx,(%esp)
087a09db +0x10b:  mov    %eax,-0x120(%ebp)
087a09e1 +0x111:  mov    -0x10c(%ebp),%eax
087a09e7 +0x117:  call   *(%eax)
087a09e9 +0x119:  lea    -0x2c(%ebp),%edx
087a09ec +0x11c:  mov    %edx,(%esp)
087a09ef +0x11f:  mov    %edx,-0x124(%ebp)
087a09f5 +0x125:  mov    %eax,0x4(%esp)
087a09f9 +0x129:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a09fe +0x12e:  mov    -0x124(%ebp),%edx
087a0a04 +0x134:  mov    -0x120(%ebp),%eax
087a0a0a +0x13a:  mov    %edx,(%esp)
087a0a0d +0x13d:  mov    %eax,0x4(%esp)
087a0a11 +0x141:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a0a16 +0x146:  mov    %esi,(%esp)
087a0a19 +0x149:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0a1e +0x14e:  mov    %eax,(%esp)
087a0a21 +0x151:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a0a26 +0x156:  movzbl 0x12f(%eax),%ecx
087a0a2d +0x15d:  movzbl 0x12e(%eax),%eax
087a0a34 +0x164:  movl   $0x16,-0x20(%ebp)
087a0a3b +0x16b:  mov    %edi,(%esp)
087a0a3e +0x16e:  mov    %cl,-0x1b(%ebp)
087a0a41 +0x171:  mov    %al,-0x1c(%ebp)
087a0a44 +0x174:  movzwl -0x120(%ebp),%eax
087a0a4b +0x17b:  add    $0x4,%eax
087a0a4e +0x17e:  mov    %ax,-0x1a(%ebp)
087a0a52 +0x182:  movzwl %ax,%eax
087a0a55 +0x185:  add    $0x5,%eax
087a0a58 +0x188:  mov    %eax,0x4(%esp)
087a0a5c +0x18c:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a0a61 +0x191:  mov    -0x12c(%ebp),%eax
087a0a67 +0x197:  mov    %edi,(%esp)
087a0a6a +0x19a:  mov    %eax,0x4(%esp)
087a0a6e +0x19e:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a0a73 +0x1a3:  mov    -0x124(%ebp),%edx
087a0a79 +0x1a9:  mov    %edx,0x4(%esp)
087a0a7d +0x1ad:  mov    %eax,(%esp)
087a0a80 +0x1b0:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a0a85 +0x1b5:  mov    -0x11c(%ebp),%edx
087a0a8b +0x1bb:  mov    %edx,0x4(%esp)
087a0a8f +0x1bf:  mov    %eax,(%esp)
087a0a92 +0x1c2:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a0a97 +0x1c7:  mov    %edi,%edx
087a0a99 +0x1c9:  mov    %esi,%eax
087a0a9b +0x1cb:  movl   $0x0,(%esp)
087a0aa2 +0x1d2:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a0aa7 +0x1d7:  mov    %edi,(%esp)
087a0aaa +0x1da:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a0aaf +0x1df:  mov    %edi,(%esp)
087a0ab2 +0x1e2:  mov    %eax,-0x124(%ebp)
087a0ab8 +0x1e8:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a0abd +0x1ed:  mov    -0x124(%ebp),%edx
087a0ac3 +0x1f3:  mov    %esi,(%esp)
087a0ac6 +0x1f6:  mov    %edx,0x8(%esp)
087a0aca +0x1fa:  mov    %eax,0x4(%esp)
087a0ace +0x1fe:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a0ad3 +0x203:  mov    %edi,(%esp)
087a0ad6 +0x206:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a0adb +0x20b:  add    $0x13c,%esp
087a0ae1 +0x211:  pop    %ebx
087a0ae2 +0x212:  pop    %esi
087a0ae3 +0x213:  pop    %edi
087a0ae4 +0x214:  pop    %ebp
087a0ae5 +0x215:  ret
087a0ae6 +0x216:  lea    0x0(%esi),%esi
087a0ae9 +0x219:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::sendClientHello @ 0x87a08d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendClientHello(yaSSL::SSL&) */

void yaSSL::sendClientHello(SSL *param_1)

{
  undefined1 uVar1;
  int iVar2;
  Security *pSVar3;
  undefined4 uVar4;
  uint uVar5;
  output_buffer *poVar6;
  uchar *puVar7;
  undefined2 uVar8;
  short local_124;
  undefined4 *local_110 [53];
  output_buffer local_3c [12];
  undefined *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a08db;
  uVar8 = 0;
  SSL::verifyState(param_1,0);
  iVar2 = SSL::GetError(param_1);
  if (iVar2 == 0) {
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    iVar2 = Security::get_connection(pSVar3);
    uVar1 = *(undefined1 *)(iVar2 + 0x12d);
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    iVar2 = Security::get_connection(pSVar3);
    ClientHello::ClientHello
              ((ClientHello *)local_110,CONCAT22(uVar8,*(undefined2 *)(iVar2 + 0x12e)),uVar1);
    ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
    local_30[0] = PTR_vtable_0936c7c8 + 8;
    output_buffer::output_buffer(local_3c);
    buildClientHello(param_1,(ClientHello *)local_110);
    uVar4 = ClientHello::get_random((ClientHello *)local_110);
    SSL::set_random(param_1,uVar4,1);
    uVar5 = HandShakeBase::get_length((HandShakeBase *)local_110);
    uVar4 = (*(code *)*local_110[0])((ClientHello *)local_110);
    HandShakeHeader::set_type((HandShakeHeader *)local_30,uVar4);
    HandShakeHeader::set_length((HandShakeHeader *)local_30,uVar5);
    pSVar3 = (Security *)SSL::getSecurity(param_1);
    iVar2 = Security::get_connection(pSVar3);
    local_1f = *(undefined1 *)(iVar2 + 0x12f);
    local_20 = *(ProtocolVersion *)(iVar2 + 0x12e);
    local_24 = 0x16;
    local_124 = (short)uVar5;
    local_1e = local_124 + 4;
    output_buffer::allocate(local_3c,local_1e + 5);
    poVar6 = (output_buffer *)operator<<(local_3c,(RecordLayerHeader *)&local_24);
    poVar6 = (output_buffer *)operator<<(poVar6,(HandShakeHeader *)local_30);
    operator<<(poVar6,(HandShakeBase *)local_110);
    (anonymous_namespace)::hashHandShake(param_1,local_3c,false);
    uVar5 = output_buffer::get_size(local_3c);
    puVar7 = (uchar *)output_buffer::get_buffer(local_3c);
    SSL::Send(param_1,puVar7,uVar5);
    output_buffer::~output_buffer(local_3c);
  }
  return;
}
```
