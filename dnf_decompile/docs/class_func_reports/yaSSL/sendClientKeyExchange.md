# sendClientKeyExchange

`_ZN5yaSSL21sendClientKeyExchangeERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendClientKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a0cc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a0cc0  _ZN5yaSSL21sendClientKeyExchangeERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendClientKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x087a0cc0, 0x087a0ea9]
087a0cc0 +0x000:  push   %ebp
087a0cc1 +0x001:  mov    %esp,%ebp
087a0cc3 +0x003:  push   %edi
087a0cc4 +0x004:  push   %esi
087a0cc5 +0x005:  push   %ebx
087a0cc6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a0ccb +0x00b:  add    $0xbcbecd,%ebx
087a0cd1 +0x011:  sub    $0x5c,%esp
087a0cd4 +0x014:  mov    0x8(%ebp),%esi
087a0cd7 +0x017:  movl   $0x4,0x4(%esp)
087a0cdf +0x01f:  mov    %esi,(%esp)
087a0ce2 +0x022:  call   0874e1a0 <_ZN5yaSSL3SSL11verifyStateENS_11ClientStateE>  ; yaSSL::SSL::verifyState(yaSSL::ClientState)
087a0ce7 +0x027:  mov    %esi,(%esp)
087a0cea +0x02a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a0cef +0x02f:  test   %eax,%eax
087a0cf1 +0x031:  je     087a0d00 <+0x40>
087a0cf3 +0x033:  add    $0x5c,%esp
087a0cf6 +0x036:  pop    %ebx
087a0cf7 +0x037:  pop    %esi
087a0cf8 +0x038:  pop    %edi
087a0cf9 +0x039:  pop    %ebp
087a0cfa +0x03a:  ret
087a0cfb +0x03b:  nop
087a0cfc +0x03c:  lea    0x0(%esi,%eiz,1),%esi
087a0d00 +0x040:  lea    -0x2c(%ebp),%eax
087a0d03 +0x043:  mov    %eax,-0x3c(%ebp)
087a0d06 +0x046:  mov    %eax,(%esp)
087a0d09 +0x049:  mov    %esi,0x4(%esp)
087a0d0d +0x04d:  call   0874b700 <_ZN5yaSSL17ClientKeyExchangeC1ERNS_3SSLE>  ; yaSSL::ClientKeyExchange::ClientKeyExchange(yaSSL::SSL&)
087a0d12 +0x052:  mov    -0x3c(%ebp),%edx
087a0d15 +0x055:  mov    %esi,0x4(%esp)
087a0d19 +0x059:  mov    %edx,(%esp)
087a0d1c +0x05c:  call   087470e0 <_ZN5yaSSL17ClientKeyExchange5buildERNS_3SSLE>  ; yaSSL::ClientKeyExchange::build(yaSSL::SSL&)
087a0d21 +0x061:  mov    %esi,(%esp)
087a0d24 +0x064:  call   087501c0 <_ZN5yaSSL3SSL16makeMasterSecretEv>  ; yaSSL::SSL::makeMasterSecret()
087a0d29 +0x069:  lea    -0x1c(%ebp),%eax
087a0d2c +0x06c:  lea    -0x20(%ebp),%ecx
087a0d2f +0x06f:  mov    %eax,(%esp)
087a0d32 +0x072:  movl   $0x0,0x8(%esp)
087a0d3a +0x07a:  movl   $0x3,0x4(%esp)
087a0d42 +0x082:  mov    %ecx,-0x4c(%ebp)
087a0d45 +0x085:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a0d4a +0x08a:  mov    -0x3d0(%ebx),%eax
087a0d50 +0x090:  add    $0x8,%eax
087a0d53 +0x093:  mov    %eax,-0x38(%ebp)
087a0d56 +0x096:  movb   $0x0,0x4(%esp)
087a0d5b +0x09b:  movl   $0xc,(%esp)
087a0d62 +0x0a2:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087a0d67 +0x0a7:  mov    %eax,%edi
087a0d69 +0x0a9:  mov    %eax,(%esp)
087a0d6c +0x0ac:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a0d71 +0x0b1:  mov    -0x3c(%ebp),%eax
087a0d74 +0x0b4:  mov    %eax,(%esp)
087a0d77 +0x0b7:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a0d7c +0x0bc:  mov    -0x3c(%ebp),%edx
087a0d7f +0x0bf:  mov    %edx,(%esp)
087a0d82 +0x0c2:  mov    %eax,-0x40(%ebp)
087a0d85 +0x0c5:  mov    -0x2c(%ebp),%eax
087a0d88 +0x0c8:  call   *(%eax)
087a0d8a +0x0ca:  lea    -0x38(%ebp),%edx
087a0d8d +0x0cd:  mov    %edx,(%esp)
087a0d90 +0x0d0:  mov    %edx,-0x44(%ebp)
087a0d93 +0x0d3:  mov    %eax,0x4(%esp)
087a0d97 +0x0d7:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a0d9c +0x0dc:  mov    -0x44(%ebp),%edx
087a0d9f +0x0df:  mov    -0x40(%ebp),%ecx
087a0da2 +0x0e2:  mov    %edx,(%esp)
087a0da5 +0x0e5:  mov    %ecx,0x4(%esp)
087a0da9 +0x0e9:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a0dae +0x0ee:  mov    %esi,(%esp)
087a0db1 +0x0f1:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0db6 +0x0f6:  mov    %eax,(%esp)
087a0db9 +0x0f9:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a0dbe +0x0fe:  movzbl 0x12f(%eax),%ecx
087a0dc5 +0x105:  movzbl 0x12e(%eax),%eax
087a0dcc +0x10c:  movl   $0x16,-0x20(%ebp)
087a0dd3 +0x113:  mov    %edi,(%esp)
087a0dd6 +0x116:  mov    %cl,-0x1b(%ebp)
087a0dd9 +0x119:  mov    %al,-0x1c(%ebp)
087a0ddc +0x11c:  movzwl -0x40(%ebp),%eax
087a0de0 +0x120:  add    $0x4,%eax
087a0de3 +0x123:  mov    %ax,-0x1a(%ebp)
087a0de7 +0x127:  movzwl %ax,%eax
087a0dea +0x12a:  add    $0x5,%eax
087a0ded +0x12d:  mov    %eax,0x4(%esp)
087a0df1 +0x131:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a0df6 +0x136:  mov    -0x4c(%ebp),%eax
087a0df9 +0x139:  mov    %edi,(%esp)
087a0dfc +0x13c:  mov    %eax,0x4(%esp)
087a0e00 +0x140:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a0e05 +0x145:  mov    -0x44(%ebp),%edx
087a0e08 +0x148:  mov    %edx,0x4(%esp)
087a0e0c +0x14c:  mov    %eax,(%esp)
087a0e0f +0x14f:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a0e14 +0x154:  mov    -0x3c(%ebp),%edx
087a0e17 +0x157:  mov    %edx,0x4(%esp)
087a0e1b +0x15b:  mov    %eax,(%esp)
087a0e1e +0x15e:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a0e23 +0x163:  mov    %esi,%eax
087a0e25 +0x165:  mov    %edi,%edx
087a0e27 +0x167:  movl   $0x0,(%esp)
087a0e2e +0x16e:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a0e33 +0x173:  mov    0xc(%ebp),%eax
087a0e36 +0x176:  test   %eax,%eax
087a0e38 +0x178:  je     087a0e98 <+0x1d8>
087a0e3a +0x17a:  mov    %edi,(%esp)
087a0e3d +0x17d:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a0e42 +0x182:  mov    %edi,(%esp)
087a0e45 +0x185:  mov    %eax,-0x44(%ebp)
087a0e48 +0x188:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a0e4d +0x18d:  mov    -0x44(%ebp),%edx
087a0e50 +0x190:  mov    %esi,(%esp)
087a0e53 +0x193:  mov    %edx,0x8(%esp)
087a0e57 +0x197:  mov    %eax,0x4(%esp)
087a0e5b +0x19b:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a0e60 +0x1a0:  test   %edi,%edi
087a0e62 +0x1a2:  je     087a0e6c <+0x1ac>
087a0e64 +0x1a4:  mov    %edi,(%esp)
087a0e67 +0x1a7:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a0e6c +0x1ac:  mov    %edi,(%esp)
087a0e6f +0x1af:  movb   $0x0,0x4(%esp)
087a0e74 +0x1b4:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a0e79 +0x1b9:  mov    -0x420(%ebx),%eax
087a0e7f +0x1bf:  mov    -0x3c(%ebp),%ecx
087a0e82 +0x1c2:  add    $0x8,%eax
087a0e85 +0x1c5:  mov    %eax,-0x38(%ebp)
087a0e88 +0x1c8:  mov    %ecx,(%esp)
087a0e8b +0x1cb:  call   08748600 <_ZN5yaSSL17ClientKeyExchangeD1Ev>  ; yaSSL::ClientKeyExchange::~ClientKeyExchange()
087a0e90 +0x1d0:  add    $0x5c,%esp
087a0e93 +0x1d3:  pop    %ebx
087a0e94 +0x1d4:  pop    %esi
087a0e95 +0x1d5:  pop    %edi
087a0e96 +0x1d6:  pop    %ebp
087a0e97 +0x1d7:  ret
087a0e98 +0x1d8:  mov    %edi,0x4(%esp)
087a0e9c +0x1dc:  xor    %edi,%edi
087a0e9e +0x1de:  mov    %esi,(%esp)
087a0ea1 +0x1e1:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a0ea6 +0x1e6:  jmp    087a0e6c <+0x1ac>
087a0ea8 +0x1e8:  nop
087a0ea9 +0x1e9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sendClientKeyExchange @ 0x87a0cc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendClientKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendClientKeyExchange(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_44;
  undefined *local_3c [3];
  undefined4 *local_30 [3];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a0ccb;
  SSL::verifyState(param_1,4);
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  ClientKeyExchange::ClientKeyExchange((ClientKeyExchange *)local_30,param_1);
  ClientKeyExchange::build((ClientKeyExchange *)local_30,param_1);
  SSL::makeMasterSecret(param_1);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_3c[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_30);
  uVar3 = (*(code *)*local_30[0])((ClientKeyExchange *)local_30);
  HandShakeHeader::set_type((HandShakeHeader *)local_3c,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_3c,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_1f = *(undefined1 *)(iVar1 + 0x12f);
  local_20 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_24 = 0x16;
  local_44 = (short)uVar2;
  local_1e = local_44 + 4;
  output_buffer::allocate(this,local_1e + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_24);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_3c);
  operator<<(poVar4,(HandShakeBase *)local_30);
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
  local_3c[0] = PTR_vtable_0936c778 + 8;
  ClientKeyExchange::~ClientKeyExchange((ClientKeyExchange *)local_30);
  return;
}
```
