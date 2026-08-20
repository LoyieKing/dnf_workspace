# sendServerHelloDone

`_ZN5yaSSL19sendServerHelloDoneERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendServerHelloDone(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879fd40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879fd40  _ZN5yaSSL19sendServerHelloDoneERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendServerHelloDone(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x0879fd40, 0x0879fef9]
0879fd40 +0x000:  push   %ebp
0879fd41 +0x001:  mov    %esp,%ebp
0879fd43 +0x003:  sub    $0x68,%esp
0879fd46 +0x006:  mov    %ebx,-0xc(%ebp)
0879fd49 +0x009:  call   08722df8 <__i686.get_pc_thunk.bx>
0879fd4e +0x00e:  add    $0xbcce4a,%ebx
0879fd54 +0x014:  mov    %edi,-0x4(%ebp)
0879fd57 +0x017:  mov    0x8(%ebp),%edi
0879fd5a +0x01a:  mov    %esi,-0x8(%ebp)
0879fd5d +0x01d:  mov    %edi,(%esp)
0879fd60 +0x020:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879fd65 +0x025:  test   %eax,%eax
0879fd67 +0x027:  je     0879fd78 <+0x38>
0879fd69 +0x029:  mov    -0xc(%ebp),%ebx
0879fd6c +0x02c:  mov    -0x8(%ebp),%esi
0879fd6f +0x02f:  mov    -0x4(%ebp),%edi
0879fd72 +0x032:  mov    %ebp,%esp
0879fd74 +0x034:  pop    %ebp
0879fd75 +0x035:  ret
0879fd76 +0x036:  xchg   %ax,%ax
0879fd78 +0x038:  lea    -0x20(%ebp),%eax
0879fd7b +0x03b:  mov    %eax,-0x3c(%ebp)
0879fd7e +0x03e:  mov    %eax,(%esp)
0879fd81 +0x041:  call   08746e90 <_ZN5yaSSL15ServerHelloDoneC1Ev>  ; yaSSL::ServerHelloDone::ServerHelloDone()
0879fd86 +0x046:  lea    -0x24(%ebp),%eax
0879fd89 +0x049:  lea    -0x28(%ebp),%edx
0879fd8c +0x04c:  mov    %eax,(%esp)
0879fd8f +0x04f:  movl   $0x0,0x8(%esp)
0879fd97 +0x057:  movl   $0x3,0x4(%esp)
0879fd9f +0x05f:  mov    %edx,-0x4c(%ebp)
0879fda2 +0x062:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
0879fda7 +0x067:  mov    -0x3d0(%ebx),%eax
0879fdad +0x06d:  add    $0x8,%eax
0879fdb0 +0x070:  mov    %eax,-0x34(%ebp)
0879fdb3 +0x073:  movb   $0x0,0x4(%esp)
0879fdb8 +0x078:  movl   $0xc,(%esp)
0879fdbf +0x07f:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879fdc4 +0x084:  mov    %eax,%esi
0879fdc6 +0x086:  mov    %eax,(%esp)
0879fdc9 +0x089:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
0879fdce +0x08e:  mov    -0x3c(%ebp),%ecx
0879fdd1 +0x091:  mov    %ecx,(%esp)
0879fdd4 +0x094:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
0879fdd9 +0x099:  mov    %eax,-0x40(%ebp)
0879fddc +0x09c:  mov    -0x3c(%ebp),%eax
0879fddf +0x09f:  mov    %eax,(%esp)
0879fde2 +0x0a2:  mov    -0x20(%ebp),%eax
0879fde5 +0x0a5:  call   *(%eax)
0879fde7 +0x0a7:  lea    -0x34(%ebp),%edx
0879fdea +0x0aa:  mov    %edx,(%esp)
0879fded +0x0ad:  mov    %edx,-0x44(%ebp)
0879fdf0 +0x0b0:  mov    %eax,0x4(%esp)
0879fdf4 +0x0b4:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
0879fdf9 +0x0b9:  mov    -0x44(%ebp),%edx
0879fdfc +0x0bc:  mov    -0x40(%ebp),%ecx
0879fdff +0x0bf:  mov    %edx,(%esp)
0879fe02 +0x0c2:  mov    %ecx,0x4(%esp)
0879fe06 +0x0c6:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
0879fe0b +0x0cb:  mov    %edi,(%esp)
0879fe0e +0x0ce:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879fe13 +0x0d3:  mov    %eax,(%esp)
0879fe16 +0x0d6:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879fe1b +0x0db:  movzbl 0x12f(%eax),%ecx
0879fe22 +0x0e2:  movzbl 0x12e(%eax),%eax
0879fe29 +0x0e9:  movl   $0x16,-0x28(%ebp)
0879fe30 +0x0f0:  mov    %esi,(%esp)
0879fe33 +0x0f3:  mov    %cl,-0x23(%ebp)
0879fe36 +0x0f6:  mov    %al,-0x24(%ebp)
0879fe39 +0x0f9:  movzwl -0x40(%ebp),%eax
0879fe3d +0x0fd:  add    $0x4,%eax
0879fe40 +0x100:  mov    %ax,-0x22(%ebp)
0879fe44 +0x104:  movzwl %ax,%eax
0879fe47 +0x107:  add    $0x5,%eax
0879fe4a +0x10a:  mov    %eax,0x4(%esp)
0879fe4e +0x10e:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
0879fe53 +0x113:  mov    -0x4c(%ebp),%eax
0879fe56 +0x116:  mov    %esi,(%esp)
0879fe59 +0x119:  mov    %eax,0x4(%esp)
0879fe5d +0x11d:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
0879fe62 +0x122:  mov    -0x44(%ebp),%edx
0879fe65 +0x125:  mov    %edx,0x4(%esp)
0879fe69 +0x129:  mov    %eax,(%esp)
0879fe6c +0x12c:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
0879fe71 +0x131:  mov    -0x3c(%ebp),%edx
0879fe74 +0x134:  mov    %edx,0x4(%esp)
0879fe78 +0x138:  mov    %eax,(%esp)
0879fe7b +0x13b:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
0879fe80 +0x140:  mov    %esi,%edx
0879fe82 +0x142:  mov    %edi,%eax
0879fe84 +0x144:  movl   $0x0,(%esp)
0879fe8b +0x14b:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
0879fe90 +0x150:  mov    0xc(%ebp),%edx
0879fe93 +0x153:  test   %edx,%edx
0879fe95 +0x155:  je     0879fee8 <+0x1a8>
0879fe97 +0x157:  mov    %esi,(%esp)
0879fe9a +0x15a:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879fe9f +0x15f:  mov    %esi,(%esp)
0879fea2 +0x162:  mov    %eax,-0x44(%ebp)
0879fea5 +0x165:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879feaa +0x16a:  mov    -0x44(%ebp),%edx
0879fead +0x16d:  mov    %edi,(%esp)
0879feb0 +0x170:  mov    %edx,0x8(%esp)
0879feb4 +0x174:  mov    %eax,0x4(%esp)
0879feb8 +0x178:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
0879febd +0x17d:  test   %esi,%esi
0879febf +0x17f:  je     0879fec9 <+0x189>
0879fec1 +0x181:  mov    %esi,(%esp)
0879fec4 +0x184:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879fec9 +0x189:  mov    %esi,(%esp)
0879fecc +0x18c:  movb   $0x0,0x4(%esp)
0879fed1 +0x191:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879fed6 +0x196:  mov    -0xc(%ebp),%ebx
0879fed9 +0x199:  mov    -0x8(%ebp),%esi
0879fedc +0x19c:  mov    -0x4(%ebp),%edi
0879fedf +0x19f:  mov    %ebp,%esp
0879fee1 +0x1a1:  pop    %ebp
0879fee2 +0x1a2:  ret
0879fee3 +0x1a3:  nop
0879fee4 +0x1a4:  lea    0x0(%esi,%eiz,1),%esi
0879fee8 +0x1a8:  mov    %esi,0x4(%esp)
0879feec +0x1ac:  xor    %esi,%esi
0879feee +0x1ae:  mov    %edi,(%esp)
0879fef1 +0x1b1:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
0879fef6 +0x1b6:  jmp    0879fec9 <+0x189>
0879fef8 +0x1b8:  nop
0879fef9 +0x1b9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sendServerHelloDone @ 0x879fd40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendServerHelloDone(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendServerHelloDone(SSL *param_1,int param_2)

{
  int iVar1;
  output_buffer *this;
  uint uVar2;
  undefined4 uVar3;
  Security *this_00;
  output_buffer *poVar4;
  output_buffer *poVar5;
  short local_44;
  undefined *local_38 [3];
  undefined4 local_2c;
  ProtocolVersion local_28;
  undefined1 local_27;
  ushort local_26;
  undefined4 *local_24 [5];
  
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  ServerHelloDone::ServerHelloDone((ServerHelloDone *)local_24);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_28,'\x03','\0');
  local_38[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_24);
  uVar3 = (*(code *)*local_24[0])((ServerHelloDone *)local_24);
  HandShakeHeader::set_type((HandShakeHeader *)local_38,uVar3);
  HandShakeHeader::set_length((HandShakeHeader *)local_38,uVar2);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar1 = Security::get_connection(this_00);
  local_27 = *(undefined1 *)(iVar1 + 0x12f);
  local_28 = *(ProtocolVersion *)(iVar1 + 0x12e);
  local_2c = 0x16;
  local_44 = (short)uVar2;
  local_26 = local_44 + 4;
  output_buffer::allocate(this,local_26 + 5);
  poVar4 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_2c);
  poVar4 = (output_buffer *)operator<<(poVar4,(HandShakeHeader *)local_38);
  operator<<(poVar4,(HandShakeBase *)local_24);
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
  return;
}
```
