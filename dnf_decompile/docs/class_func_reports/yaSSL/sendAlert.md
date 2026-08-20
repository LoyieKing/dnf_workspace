# sendAlert

`_ZN5yaSSL9sendAlertERNS_3SSLERKNS_5AlertE`

`yaSSL::sendAlert(yaSSL::SSL&, yaSSL::Alert const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0879f9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879f9c0  _ZN5yaSSL9sendAlertERNS_3SSLERKNS_5AlertE
#           yaSSL::sendAlert(yaSSL::SSL&, yaSSL::Alert const&)
# range [0x0879f9c0, 0x0879faef]
0879f9c0 +0x000:  push   %ebp
0879f9c1 +0x001:  mov    %esp,%ebp
0879f9c3 +0x003:  push   %edi
0879f9c4 +0x004:  push   %esi
0879f9c5 +0x005:  push   %ebx
0879f9c6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879f9cb +0x00b:  add    $0xbcd1cd,%ebx
0879f9d1 +0x011:  sub    $0x4c,%esp
0879f9d4 +0x014:  mov    0xc(%ebp),%esi
0879f9d7 +0x017:  lea    -0x2c(%ebp),%edi
0879f9da +0x01a:  mov    %edi,(%esp)
0879f9dd +0x01d:  call   08796ea0 <_ZN5yaSSL13output_bufferC1Ev>  ; yaSSL::output_buffer::output_buffer()
0879f9e2 +0x022:  mov    0x8(%ebp),%eax
0879f9e5 +0x025:  mov    %eax,(%esp)
0879f9e8 +0x028:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879f9ed +0x02d:  mov    %eax,(%esp)
0879f9f0 +0x030:  call   0874ea50 <_ZNK5yaSSL8Security9get_parmsEv>  ; yaSSL::Security::get_parms() const
0879f9f5 +0x035:  cmpb   $0x0,0x28(%eax)
0879f9f9 +0x039:  je     0879fae0 <+0x120>
0879f9ff +0x03f:  lea    -0x20(%ebp),%edx
0879fa02 +0x042:  lea    -0x1c(%ebp),%eax
0879fa05 +0x045:  mov    %edx,-0x40(%ebp)
0879fa08 +0x048:  mov    %eax,(%esp)
0879fa0b +0x04b:  movl   $0x0,0x8(%esp)
0879fa13 +0x053:  movl   $0x3,0x4(%esp)
0879fa1b +0x05b:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
0879fa20 +0x060:  mov    0x8(%ebp),%ecx
0879fa23 +0x063:  mov    %ecx,(%esp)
0879fa26 +0x066:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0879fa2b +0x06b:  mov    %eax,(%esp)
0879fa2e +0x06e:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0879fa33 +0x073:  movzbl 0x12f(%eax),%ecx
0879fa3a +0x07a:  mov    %cl,-0x39(%ebp)
0879fa3d +0x07d:  movzbl 0x12e(%eax),%ecx
0879fa44 +0x084:  mov    (%esi),%eax
0879fa46 +0x086:  mov    %esi,(%esp)
0879fa49 +0x089:  mov    %cl,-0x44(%ebp)
0879fa4c +0x08c:  call   *0xc(%eax)
0879fa4f +0x08f:  movzbl -0x44(%ebp),%ecx
0879fa53 +0x093:  mov    %cl,-0x1c(%ebp)
0879fa56 +0x096:  mov    %eax,-0x20(%ebp)
0879fa59 +0x099:  movzbl -0x39(%ebp),%eax
0879fa5d +0x09d:  mov    %al,-0x1b(%ebp)
0879fa60 +0x0a0:  mov    (%esi),%eax
0879fa62 +0x0a2:  mov    %esi,(%esp)
0879fa65 +0x0a5:  call   *0x10(%eax)
0879fa68 +0x0a8:  mov    %edi,(%esp)
0879fa6b +0x0ab:  mov    %ax,-0x1a(%ebp)
0879fa6f +0x0af:  movzwl %ax,%eax
0879fa72 +0x0b2:  add    $0x5,%eax
0879fa75 +0x0b5:  mov    %eax,0x4(%esp)
0879fa79 +0x0b9:  call   08797120 <_ZN5yaSSL13output_buffer8allocateEj>  ; yaSSL::output_buffer::allocate(unsigned int)
0879fa7e +0x0be:  mov    -0x40(%ebp),%edx
0879fa81 +0x0c1:  mov    %edi,(%esp)
0879fa84 +0x0c4:  mov    %edx,0x4(%esp)
0879fa88 +0x0c8:  call   08749160 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
0879fa8d +0x0cd:  mov    %esi,0x4(%esp)
0879fa91 +0x0d1:  mov    %eax,(%esp)
0879fa94 +0x0d4:  call   08746a50 <_ZN5yaSSLlsERNS_13output_bufferERKNS_7MessageE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Message const&)
0879fa99 +0x0d9:  mov    %edi,(%esp)
0879fa9c +0x0dc:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879faa1 +0x0e1:  mov    %edi,(%esp)
0879faa4 +0x0e4:  mov    %eax,-0x40(%ebp)
0879faa7 +0x0e7:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879faac +0x0ec:  mov    -0x40(%ebp),%edx
0879faaf +0x0ef:  mov    0x8(%ebp),%ecx
0879fab2 +0x0f2:  mov    %edx,0x8(%esp)
0879fab6 +0x0f6:  mov    %ecx,(%esp)
0879fab9 +0x0f9:  mov    %eax,0x4(%esp)
0879fabd +0x0fd:  call   0874f9a0 <_ZN5yaSSL3SSL4SendEPKhj>  ; yaSSL::SSL::Send(unsigned char const*, unsigned int)
0879fac2 +0x102:  mov    (%esi),%eax
0879fac4 +0x104:  mov    %esi,(%esp)
0879fac7 +0x107:  call   *0x10(%eax)
0879faca +0x10a:  mov    %edi,(%esp)
0879facd +0x10d:  mov    %eax,%esi
0879facf +0x10f:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
0879fad4 +0x114:  add    $0x4c,%esp
0879fad7 +0x117:  movzwl %si,%eax
0879fada +0x11a:  pop    %ebx
0879fadb +0x11b:  pop    %esi
0879fadc +0x11c:  pop    %edi
0879fadd +0x11d:  pop    %ebp
0879fade +0x11e:  ret
0879fadf +0x11f:  nop
0879fae0 +0x120:  mov    0x8(%ebp),%eax
0879fae3 +0x123:  mov    %edi,%edx
0879fae5 +0x125:  mov    %esi,(%esp)
0879fae8 +0x128:  call   0879f580 <_ZN5yaSSL12_GLOBAL__N_112buildMessageERNS_3SSLERNS_13output_bufferERKNS_7MessageE>  ; yaSSL::(anonymous namespace)::buildMessage(yaSSL::SSL&, yaSSL::output_buffer&, yaSSL::Message const&)
0879faed +0x12d:  jmp    0879fa99 <+0xd9>
0879faef +0x12f:  nop
```

## 反编译 C

```c
// yaSSL::sendAlert @ 0x879f9c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::sendAlert(yaSSL::SSL&, yaSSL::Alert const&) */

undefined2 yaSSL::sendAlert(SSL *param_1,Alert *param_2)

{
  undefined1 uVar1;
  ProtocolVersion PVar2;
  undefined2 uVar3;
  Security *pSVar4;
  int iVar5;
  output_buffer *poVar6;
  uint uVar7;
  uchar *puVar8;
  output_buffer local_30 [12];
  undefined4 local_24;
  ProtocolVersion local_20;
  undefined1 local_1f;
  ushort local_1e;
  undefined4 uStack_14;
  
  uStack_14 = 0x879f9cb;
  output_buffer::output_buffer(local_30);
  pSVar4 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar4);
  if (*(char *)(iVar5 + 0x28) == '\0') {
    (anonymous_namespace)::buildMessage(param_1,local_30,(Message *)param_2);
  }
  else {
    ProtocolVersion::ProtocolVersion(&local_20,'\x03','\0');
    pSVar4 = (Security *)SSL::getSecurity(param_1);
    iVar5 = Security::get_connection(pSVar4);
    uVar1 = *(undefined1 *)(iVar5 + 0x12f);
    PVar2 = *(ProtocolVersion *)(iVar5 + 0x12e);
    local_24 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    local_20 = PVar2;
    local_1f = uVar1;
    local_1e = (**(code **)(*(int *)param_2 + 0x10))(param_2);
    output_buffer::allocate(local_30,local_1e + 5);
    poVar6 = (output_buffer *)operator<<(local_30,(RecordLayerHeader *)&local_24);
    operator<<(poVar6,(Message *)param_2);
  }
  uVar7 = output_buffer::get_size(local_30);
  puVar8 = (uchar *)output_buffer::get_buffer(local_30);
  SSL::Send(param_1,puVar8,uVar7);
  uVar3 = (**(code **)(*(int *)param_2 + 0x10))(param_2);
  output_buffer::~output_buffer(local_30);
  return uVar3;
}
```
