# sendServerKeyExchange

`_ZN5yaSSL21sendServerKeyExchangeERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendServerKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087a0af0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a0af0  _ZN5yaSSL21sendServerKeyExchangeERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendServerKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x087a0af0, 0x087a0cbe]
087a0af0 +0x000:  push   %ebp
087a0af1 +0x001:  mov    %esp,%ebp
087a0af3 +0x003:  push   %edi
087a0af4 +0x004:  push   %esi
087a0af5 +0x005:  push   %ebx
087a0af6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a0afb +0x00b:  add    $0xbcc09d,%ebx
087a0b01 +0x011:  sub    $0x5c,%esp
087a0b04 +0x014:  mov    0x8(%ebp),%edi
087a0b07 +0x017:  mov    %edi,(%esp)
087a0b0a +0x01a:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
087a0b0f +0x01f:  test   %eax,%eax
087a0b11 +0x021:  je     087a0b20 <+0x30>
087a0b13 +0x023:  add    $0x5c,%esp
087a0b16 +0x026:  pop    %ebx
087a0b17 +0x027:  pop    %esi
087a0b18 +0x028:  pop    %edi
087a0b19 +0x029:  pop    %ebp
087a0b1a +0x02a:  ret
087a0b1b +0x02b:  nop
087a0b1c +0x02c:  lea    0x0(%esi,%eiz,1),%esi
087a0b20 +0x030:  lea    -0x2c(%ebp),%eax
087a0b23 +0x033:  mov    %eax,-0x3c(%ebp)
087a0b26 +0x036:  mov    %eax,(%esp)
087a0b29 +0x039:  mov    %edi,0x4(%esp)
087a0b2d +0x03d:  call   0874b5b0 <_ZN5yaSSL17ServerKeyExchangeC1ERNS_3SSLE>  ; yaSSL::ServerKeyExchange::ServerKeyExchange(yaSSL::SSL&)
087a0b32 +0x042:  mov    -0x3c(%ebp),%edx
087a0b35 +0x045:  mov    %edi,0x4(%esp)
087a0b39 +0x049:  mov    %edx,(%esp)
087a0b3c +0x04c:  call   08746f70 <_ZN5yaSSL17ServerKeyExchange5buildERNS_3SSLE>  ; yaSSL::ServerKeyExchange::build(yaSSL::SSL&)
087a0b41 +0x051:  lea    -0x1c(%ebp),%eax
087a0b44 +0x054:  lea    -0x20(%ebp),%ecx
087a0b47 +0x057:  mov    %eax,(%esp)
087a0b4a +0x05a:  movl   $0x0,0x8(%esp)
087a0b52 +0x062:  movl   $0x3,0x4(%esp)
087a0b5a +0x06a:  mov    %ecx,-0x4c(%ebp)
087a0b5d +0x06d:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
087a0b62 +0x072:  mov    -0x3d0(%ebx),%eax
087a0b68 +0x078:  add    $0x8,%eax
087a0b6b +0x07b:  mov    %eax,-0x38(%ebp)
087a0b6e +0x07e:  movb   $0x0,0x4(%esp)
087a0b73 +0x083:  movl   $0xc,(%esp)
087a0b7a +0x08a:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087a0b7f +0x08f:  mov    %eax,%esi
087a0b81 +0x091:  mov    %eax,(%esp)
087a0b84 +0x094:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
087a0b89 +0x099:  mov    -0x3c(%ebp),%eax
087a0b8c +0x09c:  mov    %eax,(%esp)
087a0b8f +0x09f:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087a0b94 +0x0a4:  mov    -0x3c(%ebp),%edx
087a0b97 +0x0a7:  mov    %edx,(%esp)
087a0b9a +0x0aa:  mov    %eax,-0x40(%ebp)
087a0b9d +0x0ad:  mov    -0x2c(%ebp),%eax
087a0ba0 +0x0b0:  call   *(%eax)
087a0ba2 +0x0b2:  lea    -0x38(%ebp),%edx
087a0ba5 +0x0b5:  mov    %edx,(%esp)
087a0ba8 +0x0b8:  mov    %edx,-0x44(%ebp)
087a0bab +0x0bb:  mov    %eax,0x4(%esp)
087a0baf +0x0bf:  call   08746a90 <_ZN5yaSSL15HandShakeHeader8set_typeENS_13HandShakeTypeE>  ; yaSSL::HandShakeHeader::set_type(yaSSL::HandShakeType)
087a0bb4 +0x0c4:  mov    -0x44(%ebp),%edx
087a0bb7 +0x0c7:  mov    -0x40(%ebp),%ecx
087a0bba +0x0ca:  mov    %edx,(%esp)
087a0bbd +0x0cd:  mov    %ecx,0x4(%esp)
087a0bc1 +0x0d1:  call   08749950 <_ZN5yaSSL15HandShakeHeader10set_lengthEj>  ; yaSSL::HandShakeHeader::set_length(unsigned int)
087a0bc6 +0x0d6:  mov    %edi,(%esp)
087a0bc9 +0x0d9:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
087a0bce +0x0de:  mov    %eax,(%esp)
087a0bd1 +0x0e1:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
087a0bd6 +0x0e6:  movzbl 0x12f(%eax),%ecx
087a0bdd +0x0ed:  movzbl 0x12e(%eax),%eax
087a0be4 +0x0f4:  movl   $0x16,-0x20(%ebp)
087a0beb +0x0fb:  mov    %esi,(%esp)
087a0bee +0x0fe:  mov    %cl,-0x1b(%ebp)
087a0bf1 +0x101:  mov    %al,-0x1c(%ebp)
087a0bf4 +0x104:  movzwl -0x40(%ebp),%eax
087a0bf8 +0x108:  add    $0x4,%eax
087a0bfb +0x10b:  mov    %ax,-0x1a(%ebp)
087a0bff +0x10f:  movzwl %ax,%eax
087a0c02 +0x112:  add    $0x5,%eax
087a0c05 +0x115:  mov    %eax,0x4(%esp)
087a0c09 +0x119:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
087a0c0e +0x11e:  mov    -0x4c(%ebp),%eax
087a0c11 +0x121:  mov    %esi,(%esp)
087a0c14 +0x124:  mov    %eax,0x4(%esp)
087a0c18 +0x128:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
087a0c1d +0x12d:  mov    -0x44(%ebp),%edx
087a0c20 +0x130:  mov    %edx,0x4(%esp)
087a0c24 +0x134:  mov    %eax,(%esp)
087a0c27 +0x137:  call   087490d0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_15HandShakeHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeHeader const&)
087a0c2c +0x13c:  mov    -0x3c(%ebp),%edx
087a0c2f +0x13f:  mov    %edx,0x4(%esp)
087a0c33 +0x143:  mov    %eax,(%esp)
087a0c36 +0x146:  call   08746cf0 <_ZN5yaSSLlsERNS_13output_bufferERKNS_13HandShakeBaseE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::HandShakeBase const&)
087a0c3b +0x14b:  mov    %esi,%edx
087a0c3d +0x14d:  mov    %edi,%eax
087a0c3f +0x14f:  movl   $0x0,(%esp)
087a0c46 +0x156:  call   0879cd50 <_ZN5yaSSL12_GLOBAL__N_113hashHandShakeERNS_3SSLERKNS_13output_bufferEb>  ; yaSSL::(anonymous namespace)::hashHandShake(yaSSL::SSL&, yaSSL::output_buffer const&, bool)
087a0c4b +0x15b:  mov    0xc(%ebp),%ecx
087a0c4e +0x15e:  test   %ecx,%ecx
087a0c50 +0x160:  je     087a0cb0 <+0x1c0>
087a0c52 +0x162:  mov    %esi,(%esp)
087a0c55 +0x165:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
087a0c5a +0x16a:  mov    %esi,(%esp)
087a0c5d +0x16d:  mov    %eax,-0x44(%ebp)
087a0c60 +0x170:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
087a0c65 +0x175:  mov    -0x44(%ebp),%edx
087a0c68 +0x178:  mov    %edi,(%esp)
087a0c6b +0x17b:  mov    %edx,0x8(%esp)
087a0c6f +0x17f:  mov    %eax,0x4(%esp)
087a0c73 +0x183:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
087a0c78 +0x188:  test   %esi,%esi
087a0c7a +0x18a:  je     087a0c84 <+0x194>
087a0c7c +0x18c:  mov    %esi,(%esp)
087a0c7f +0x18f:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
087a0c84 +0x194:  mov    %esi,(%esp)
087a0c87 +0x197:  movb   $0x0,0x4(%esp)
087a0c8c +0x19c:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087a0c91 +0x1a1:  mov    -0x420(%ebx),%eax
087a0c97 +0x1a7:  mov    -0x3c(%ebp),%ecx
087a0c9a +0x1aa:  add    $0x8,%eax
087a0c9d +0x1ad:  mov    %eax,-0x38(%ebp)
087a0ca0 +0x1b0:  mov    %ecx,(%esp)
087a0ca3 +0x1b3:  call   08748690 <_ZN5yaSSL17ServerKeyExchangeD1Ev>  ; yaSSL::ServerKeyExchange::~ServerKeyExchange()
087a0ca8 +0x1b8:  add    $0x5c,%esp
087a0cab +0x1bb:  pop    %ebx
087a0cac +0x1bc:  pop    %esi
087a0cad +0x1bd:  pop    %edi
087a0cae +0x1be:  pop    %ebp
087a0caf +0x1bf:  ret
087a0cb0 +0x1c0:  mov    %esi,0x4(%esp)
087a0cb4 +0x1c4:  xor    %esi,%esi
087a0cb6 +0x1c6:  mov    %edi,(%esp)
087a0cb9 +0x1c9:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
087a0cbe +0x1ce:  jmp    087a0c84 <+0x194>
```

## 反编译 C

```c
// yaSSL::sendServerKeyExchange @ 0x87a0af0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendServerKeyExchange(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendServerKeyExchange(SSL *param_1,int param_2)

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
  
  uStack_14 = 0x87a0afb;
  iVar1 = SSL::GetError(param_1);
  if (iVar1 != 0) {
    return;
  }
  ServerKeyExchange::ServerKeyExchange((ServerKeyExchange *)local_30,param_1);
  ServerKeyExchange::build((ServerKeyExchange *)local_30,param_1);
  uVar2 = 0;
  ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
  local_3c[0] = PTR_vtable_0936c7c8 + 8;
  this = operator_new(0xc,uVar2 & 0xffffff00);
  output_buffer::output_buffer(this);
  uVar2 = HandShakeBase::get_length((HandShakeBase *)local_30);
  uVar3 = (*(code *)*local_30[0])((ServerKeyExchange *)local_30);
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
  ServerKeyExchange::~ServerKeyExchange((ServerKeyExchange *)local_30);
  return;
}
```
