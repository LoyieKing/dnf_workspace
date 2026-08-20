# read

`_ZN5yaSSL25ClientDiffieHellmanPublic4readERNS_3SSLERNS_12input_bufferE`

`yaSSL::ClientDiffieHellmanPublic::read(yaSSL::SSL&, yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x0874afa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874afa0  _ZN5yaSSL25ClientDiffieHellmanPublic4readERNS_3SSLERNS_12input_bufferE
#           yaSSL::ClientDiffieHellmanPublic::read(yaSSL::SSL&, yaSSL::input_buffer&)
# range [0x0874afa0, 0x0874b0ce]
0874afa0 +0x000:  push   %ebp
0874afa1 +0x001:  mov    %esp,%ebp
0874afa3 +0x003:  push   %edi
0874afa4 +0x004:  push   %esi
0874afa5 +0x005:  push   %ebx
0874afa6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874afab +0x00b:  add    $0xc21bed,%ebx
0874afb1 +0x011:  sub    $0x2c,%esp
0874afb4 +0x014:  mov    0xc(%ebp),%eax
0874afb7 +0x017:  mov    0x8(%ebp),%edi
0874afba +0x01a:  mov    %eax,(%esp)
0874afbd +0x01d:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0874afc2 +0x022:  mov    %eax,(%esp)
0874afc5 +0x025:  call   0874e7c0 <_ZN5yaSSL6Crypto6use_dhEv>  ; yaSSL::Crypto::use_dh()
0874afca +0x02a:  movl   $0xfeedbeef,0x4(%esp)
0874afd2 +0x032:  mov    %eax,%esi
0874afd4 +0x034:  mov    0x10(%ebp),%eax
0874afd7 +0x037:  mov    %eax,(%esp)
0874afda +0x03a:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874afdf +0x03f:  movzbl (%eax),%eax
0874afe2 +0x042:  movl   $0xfeedbeef,0x4(%esp)
0874afea +0x04a:  mov    %al,-0x1c(%ebp)
0874afed +0x04d:  mov    0x10(%ebp),%eax
0874aff0 +0x050:  mov    %eax,(%esp)
0874aff3 +0x053:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
0874aff8 +0x058:  movzbl (%eax),%eax
0874affb +0x05b:  mov    %al,-0x1b(%ebp)
0874affe +0x05e:  lea    -0x1a(%ebp),%eax
0874b001 +0x061:  mov    %eax,0x4(%esp)
0874b005 +0x065:  lea    -0x1c(%ebp),%eax
0874b008 +0x068:  mov    %eax,(%esp)
0874b00b +0x06b:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0874b010 +0x070:  movzwl -0x1a(%ebp),%eax
0874b014 +0x074:  movl   $0x0,0x8(%esp)
0874b01c +0x07c:  mov    %edi,(%esp)
0874b01f +0x07f:  mov    %eax,0x4(%esp)
0874b023 +0x083:  call   08747380 <_ZN5yaSSL25ClientDiffieHellmanPublic5allocEib>  ; yaSSL::ClientDiffieHellmanPublic::alloc(int, bool)
0874b028 +0x088:  movzwl -0x1a(%ebp),%eax
0874b02c +0x08c:  mov    %eax,0x8(%esp)
0874b030 +0x090:  mov    0xc(%edi),%eax
0874b033 +0x093:  mov    %eax,0x4(%esp)
0874b037 +0x097:  mov    0x10(%ebp),%eax
0874b03a +0x09a:  mov    %eax,(%esp)
0874b03d +0x09d:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874b042 +0x0a2:  movzwl -0x1a(%ebp),%eax
0874b046 +0x0a6:  mov    %eax,0x8(%esp)
0874b04a +0x0aa:  mov    0xc(%edi),%eax
0874b04d +0x0ad:  mov    %esi,(%esp)
0874b050 +0x0b0:  mov    %eax,0x4(%esp)
0874b054 +0x0b4:  call   08798eb0 <_ZN5yaSSL13DiffieHellman13makeAgreementEPKhj>  ; yaSSL::DiffieHellman::makeAgreement(unsigned char const*, unsigned int)
0874b059 +0x0b9:  mov    %esi,(%esp)
0874b05c +0x0bc:  call   087985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>  ; yaSSL::DiffieHellman::get_agreedKey() const
0874b061 +0x0c1:  cmpb   $0x0,(%eax)
0874b064 +0x0c4:  je     0874b0a0 <+0x100>
0874b066 +0x0c6:  mov    %esi,(%esp)
0874b069 +0x0c9:  call   08798e20 <_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv>  ; yaSSL::DiffieHellman::get_agreedKeyLength() const
0874b06e +0x0ce:  mov    %esi,(%esp)
0874b071 +0x0d1:  mov    %eax,%edi
0874b073 +0x0d3:  call   087985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>  ; yaSSL::DiffieHellman::get_agreedKey() const
0874b078 +0x0d8:  mov    %edi,0x8(%esp)
0874b07c +0x0dc:  mov    %eax,0x4(%esp)
0874b080 +0x0e0:  mov    0xc(%ebp),%eax
0874b083 +0x0e3:  mov    %eax,(%esp)
0874b086 +0x0e6:  call   08750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>  ; yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
0874b08b +0x0eb:  mov    0xc(%ebp),%eax
0874b08e +0x0ee:  mov    %eax,(%esp)
0874b091 +0x0f1:  call   087501c0 <_ZN5yaSSL3SSL16makeMasterSecretEv>  ; yaSSL::SSL::makeMasterSecret()
0874b096 +0x0f6:  add    $0x2c,%esp
0874b099 +0x0f9:  pop    %ebx
0874b09a +0x0fa:  pop    %esi
0874b09b +0x0fb:  pop    %edi
0874b09c +0x0fc:  pop    %ebp
0874b09d +0x0fd:  ret
0874b09e +0x0fe:  xchg   %ax,%ax
0874b0a0 +0x100:  mov    %esi,(%esp)
0874b0a3 +0x103:  call   08798e20 <_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv>  ; yaSSL::DiffieHellman::get_agreedKeyLength() const
0874b0a8 +0x108:  mov    %esi,(%esp)
0874b0ab +0x10b:  mov    %eax,%edi
0874b0ad +0x10d:  call   087985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>  ; yaSSL::DiffieHellman::get_agreedKey() const
0874b0b2 +0x112:  sub    $0x1,%edi
0874b0b5 +0x115:  mov    %edi,0x8(%esp)
0874b0b9 +0x119:  add    $0x1,%eax
0874b0bc +0x11c:  mov    %eax,0x4(%esp)
0874b0c0 +0x120:  mov    0xc(%ebp),%eax
0874b0c3 +0x123:  mov    %eax,(%esp)
0874b0c6 +0x126:  call   08750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>  ; yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
0874b0cb +0x12b:  jmp    0874b08b <+0xeb>
0874b0cd +0x12d:  nop
0874b0ce +0x12e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::read @ 0x874afa0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::read(yaSSL::SSL&, yaSSL::input_buffer&) */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::read
          (ClientDiffieHellmanPublic *this,SSL *param_1,input_buffer *param_2)

{
  Crypto *this_00;
  DiffieHellman *this_01;
  uchar *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar local_20;
  undefined1 local_1f;
  ushort local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874afab;
  this_00 = (Crypto *)SSL::useCrypto(param_1);
  this_01 = (DiffieHellman *)Crypto::use_dh(this_00);
  puVar1 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar1;
  puVar2 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar2;
  ato16(&local_20,local_1e);
  alloc(this,(uint)local_1e[0],false);
  input_buffer::read(param_2,*(uchar **)(this + 0xc),(uint)local_1e[0]);
  DiffieHellman::makeAgreement(this_01,*(uchar **)(this + 0xc),(uint)local_1e[0]);
  pcVar3 = (char *)DiffieHellman::get_agreedKey(this_01);
  if (*pcVar3 == '\0') {
    iVar5 = DiffieHellman::get_agreedKeyLength(this_01);
    iVar6 = DiffieHellman::get_agreedKey(this_01);
    SSL::set_preMaster(param_1,(uchar *)(iVar6 + 1),iVar5 - 1);
  }
  else {
    uVar4 = DiffieHellman::get_agreedKeyLength(this_01);
    puVar1 = (uchar *)DiffieHellman::get_agreedKey(this_01);
    SSL::set_preMaster(param_1,puVar1,uVar4);
  }
  SSL::makeMasterSecret(param_1);
  return;
}
```
