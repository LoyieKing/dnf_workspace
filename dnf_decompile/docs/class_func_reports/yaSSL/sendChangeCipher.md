# sendChangeCipher

`_ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE`

`yaSSL::sendChangeCipher(yaSSL::SSL&, yaSSL::BufferOutput)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879e570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879e570  _ZN5yaSSL16sendChangeCipherERNS_3SSLENS_12BufferOutputE
#           yaSSL::sendChangeCipher(yaSSL::SSL&, yaSSL::BufferOutput)
# range [0x0879e570, 0x0879e729]
0879e570 +0x000:  push   %ebp
0879e571 +0x001:  mov    %esp,%ebp
0879e573 +0x003:  push   %edi
0879e574 +0x004:  push   %esi
0879e575 +0x005:  push   %ebx
0879e576 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879e57b +0x00b:  add    $0xbce61d,%ebx
0879e581 +0x011:  sub    $0x3c,%esp
0879e584 +0x014:  mov    0x8(%ebp),%esi
0879e587 +0x017:  mov    %esi,(%esp)
0879e58a +0x01a:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879e58f +0x01f:  mov    %eax,(%esp)
0879e592 +0x022:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879e597 +0x027:  mov    (%eax),%edx
0879e599 +0x029:  test   %edx,%edx
0879e59b +0x02b:  je     0879e6d0 <+0x160>
0879e5a1 +0x031:  mov    %esi,(%esp)
0879e5a4 +0x034:  call   0874e0b0 <_ZNK5yaSSL3SSL8GetErrorEv>  ; yaSSL::SSL::GetError() const
0879e5a9 +0x039:  test   %eax,%eax
0879e5ab +0x03b:  je     0879e5b8 <+0x48>
0879e5ad +0x03d:  add    $0x3c,%esp
0879e5b0 +0x040:  pop    %ebx
0879e5b1 +0x041:  pop    %esi
0879e5b2 +0x042:  pop    %edi
0879e5b3 +0x043:  pop    %ebp
0879e5b4 +0x044:  ret
0879e5b5 +0x045:  lea    0x0(%esi),%esi
0879e5b8 +0x048:  lea    -0x20(%ebp),%eax
0879e5bb +0x04b:  mov    %eax,-0x2c(%ebp)
0879e5be +0x04e:  mov    %eax,(%esp)
0879e5c1 +0x051:  call   08746b40 <_ZN5yaSSL16ChangeCipherSpecC1Ev>  ; yaSSL::ChangeCipherSpec::ChangeCipherSpec()
0879e5c6 +0x056:  lea    -0x28(%ebp),%edx
0879e5c9 +0x059:  lea    -0x24(%ebp),%eax
0879e5cc +0x05c:  mov    %edx,-0x30(%ebp)
0879e5cf +0x05f:  mov    %eax,(%esp)
0879e5d2 +0x062:  movl   $0x0,0x8(%esp)
0879e5da +0x06a:  movl   $0x3,0x4(%esp)
0879e5e2 +0x072:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
0879e5e7 +0x077:  mov    %esi,(%esp)
0879e5ea +0x07a:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879e5ef +0x07f:  mov    %eax,(%esp)
0879e5f2 +0x082:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879e5f7 +0x087:  movzbl 0x12e(%eax),%edi
0879e5fe +0x08e:  movzbl 0x12f(%eax),%ecx
0879e605 +0x095:  mov    -0x2c(%ebp),%eax
0879e608 +0x098:  mov    %cl,-0x34(%ebp)
0879e60b +0x09b:  mov    %eax,(%esp)
0879e60e +0x09e:  mov    -0x20(%ebp),%eax
0879e611 +0x0a1:  call   *0xc(%eax)
0879e614 +0x0a4:  movzbl -0x34(%ebp),%ecx
0879e618 +0x0a8:  mov    %cl,-0x23(%ebp)
0879e61b +0x0ab:  mov    %eax,-0x28(%ebp)
0879e61e +0x0ae:  mov    %edi,%eax
0879e620 +0x0b0:  mov    %al,-0x24(%ebp)
0879e623 +0x0b3:  mov    -0x2c(%ebp),%eax
0879e626 +0x0b6:  mov    %eax,(%esp)
0879e629 +0x0b9:  mov    -0x20(%ebp),%eax
0879e62c +0x0bc:  call   *0x10(%eax)
0879e62f +0x0bf:  mov    %ax,-0x22(%ebp)
0879e633 +0x0c3:  movb   $0x0,0x4(%esp)
0879e638 +0x0c8:  movl   $0xc,(%esp)
0879e63f +0x0cf:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879e644 +0x0d4:  mov    %eax,%edi
0879e646 +0x0d6:  mov    %eax,(%esp)
0879e649 +0x0d9:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
0879e64e +0x0de:  movzwl -0x22(%ebp),%eax
0879e652 +0x0e2:  mov    %edi,(%esp)
0879e655 +0x0e5:  add    $0x5,%eax
0879e658 +0x0e8:  mov    %eax,0x4(%esp)
0879e65c +0x0ec:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
0879e661 +0x0f1:  mov    -0x30(%ebp),%edx
0879e664 +0x0f4:  mov    %edi,(%esp)
0879e667 +0x0f7:  mov    %edx,0x4(%esp)
0879e66b +0x0fb:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
0879e670 +0x100:  mov    -0x2c(%ebp),%edx
0879e673 +0x103:  mov    %edx,0x4(%esp)
0879e677 +0x107:  mov    %eax,(%esp)
0879e67a +0x10a:  call   08746a50 <_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Message const&)
0879e67f +0x10f:  mov    0xc(%ebp),%eax
0879e682 +0x112:  test   %eax,%eax
0879e684 +0x114:  je     0879e700 <+0x190>
0879e686 +0x116:  mov    %edi,(%esp)
0879e689 +0x119:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879e68e +0x11e:  mov    %edi,(%esp)
0879e691 +0x121:  mov    %eax,-0x30(%ebp)
0879e694 +0x124:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879e699 +0x129:  mov    -0x30(%ebp),%edx
0879e69c +0x12c:  mov    %esi,(%esp)
0879e69f +0x12f:  mov    %edx,0x8(%esp)
0879e6a3 +0x133:  mov    %eax,0x4(%esp)
0879e6a7 +0x137:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
0879e6ac +0x13c:  test   %edi,%edi
0879e6ae +0x13e:  je     0879e6b8 <+0x148>
0879e6b0 +0x140:  mov    %edi,(%esp)
0879e6b3 +0x143:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879e6b8 +0x148:  mov    %edi,(%esp)
0879e6bb +0x14b:  movb   $0x0,0x4(%esp)
0879e6c0 +0x150:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879e6c5 +0x155:  add    $0x3c,%esp
0879e6c8 +0x158:  pop    %ebx
0879e6c9 +0x159:  pop    %esi
0879e6ca +0x15a:  pop    %edi
0879e6cb +0x15b:  pop    %ebp
0879e6cc +0x15c:  ret
0879e6cd +0x15d:  lea    0x0(%esi),%esi
0879e6d0 +0x160:  mov    %esi,(%esp)
0879e6d3 +0x163:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879e6d8 +0x168:  mov    %eax,(%esp)
0879e6db +0x16b:  call   0874ecf0 <_ZNK5yaSSL8Security12get_resumingEv>  ; yaSSL::Security::get_resuming() const
0879e6e0 +0x170:  test   %al,%al
0879e6e2 +0x172:  je     0879e710 <+0x1a0>
0879e6e4 +0x174:  movl   $0x2,0x4(%esp)
0879e6ec +0x17c:  mov    %esi,(%esp)
0879e6ef +0x17f:  call   0874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>  ; yaSSL::SSL::verifyState(yaSSL::ServerState)
0879e6f4 +0x184:  jmp    0879e5a1 <+0x31>
0879e6f9 +0x189:  lea    0x0(%esi,%eiz,1),%esi
0879e700 +0x190:  mov    %edi,0x4(%esp)
0879e704 +0x194:  xor    %edi,%edi
0879e706 +0x196:  mov    %esi,(%esp)
0879e709 +0x199:  call   08752610 <_ZN5yaSSL3SSL9addBufferEPNS_13output_bufferE>  ; yaSSL::SSL::addBuffer(yaSSL::output_buffer*)
0879e70e +0x19e:  jmp    0879e6b8 <+0x148>
0879e710 +0x1a0:  movl   $0x3,0x4(%esp)
0879e718 +0x1a8:  mov    %esi,(%esp)
0879e71b +0x1ab:  call   0874e140 <_ZN5yaSSL3SSL11verifyStateENS_11ServerStateE>  ; yaSSL::SSL::verifyState(yaSSL::ServerState)
0879e720 +0x1b0:  jmp    0879e5a1 <+0x31>
0879e725 +0x1b5:  lea    0x0(%esi,%eiz,1),%esi
0879e729 +0x1b9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::sendChangeCipher @ 0x879e570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendChangeCipher(yaSSL::SSL&, yaSSL::BufferOutput) */

void yaSSL::sendChangeCipher(SSL *param_1,int param_2)

{
  ProtocolVersion PVar1;
  undefined1 uVar2;
  char cVar3;
  Security *pSVar4;
  int *piVar5;
  int iVar6;
  output_buffer *this;
  output_buffer *poVar7;
  uint uVar8;
  output_buffer *poVar9;
  undefined4 local_2c;
  ProtocolVersion local_28;
  undefined1 local_27;
  ushort local_26;
  int local_24 [4];
  undefined4 uStack_14;
  
  uStack_14 = 0x879e57b;
  pSVar4 = (Security *)SSL::getSecurity(param_1);
  piVar5 = (int *)Security::get_parms(pSVar4);
  if (*piVar5 == 0) {
    pSVar4 = (Security *)SSL::getSecurity(param_1);
    cVar3 = Security::get_resuming(pSVar4);
    if (cVar3 == '\0') {
      SSL::verifyState(param_1,3);
    }
    else {
      SSL::verifyState(param_1,2);
    }
  }
  iVar6 = SSL::GetError(param_1);
  if (iVar6 != 0) {
    return;
  }
  ChangeCipherSpec::ChangeCipherSpec((ChangeCipherSpec *)local_24);
  uVar8 = 0;
  ProtocolVersion::ProtocolVersion(&local_28,'\x03','\0');
  pSVar4 = (Security *)SSL::getSecurity(param_1);
  iVar6 = Security::get_connection(pSVar4);
  PVar1 = *(ProtocolVersion *)(iVar6 + 0x12e);
  uVar2 = *(undefined1 *)(iVar6 + 0x12f);
  local_2c = (**(code **)(local_24[0] + 0xc))((ChangeCipherSpec *)local_24);
  local_28 = PVar1;
  local_27 = uVar2;
  local_26 = (**(code **)(local_24[0] + 0x10))((ChangeCipherSpec *)local_24);
  this = operator_new(0xc,uVar8 & 0xffffff00);
  output_buffer::output_buffer(this);
  output_buffer::allocate(this,local_26 + 5);
  poVar7 = (output_buffer *)operator<<(this,(RecordLayerHeader *)&local_2c);
  operator<<(poVar7,(Message *)local_24);
  if (param_2 == 0) {
    poVar7 = (output_buffer *)0x0;
    SSL::addBuffer(param_1,this);
    poVar9 = this;
  }
  else {
    uVar8 = output_buffer::get_size(this);
    poVar9 = (output_buffer *)output_buffer::get_buffer(this);
    SSL::Send(param_1,(uchar *)poVar9,uVar8);
    poVar7 = this;
    if (this != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this);
    }
  }
  operator_delete(poVar7,(uint)poVar9 & 0xffffff00);
  return;
}
```
