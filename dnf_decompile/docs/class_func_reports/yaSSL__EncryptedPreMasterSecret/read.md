# read

`_ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE`

`yaSSL::EncryptedPreMasterSecret::read(yaSSL::SSL&, yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x0874b0d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b0d0  _ZN5yaSSL24EncryptedPreMasterSecret4readERNS_3SSLERNS_12input_bufferE
#           yaSSL::EncryptedPreMasterSecret::read(yaSSL::SSL&, yaSSL::input_buffer&)
# range [0x0874b0d0, 0x0874b25a]
0874b0d0 +0x000:  push   %ebp
0874b0d1 +0x001:  mov    %esp,%ebp
0874b0d3 +0x003:  push   %edi
0874b0d4 +0x004:  push   %esi
0874b0d5 +0x005:  push   %ebx
0874b0d6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b0db +0x00b:  add    $0xc21abd,%ebx
0874b0e1 +0x011:  sub    $0x7c,%esp
0874b0e4 +0x014:  mov    0xc(%ebp),%esi
0874b0e7 +0x017:  mov    0x8(%ebp),%edi
0874b0ea +0x01a:  mov    %esi,(%esp)
0874b0ed +0x01d:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874b0f2 +0x022:  mov    %eax,(%esp)
0874b0f5 +0x025:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874b0fa +0x02a:  mov    %eax,(%esp)
0874b0fd +0x02d:  mov    %eax,-0x60(%ebp)
0874b100 +0x030:  call   08797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>  ; yaSSL::CertManager::get_privateKeyLength() const
0874b105 +0x035:  mov    -0x60(%ebp),%edx
0874b108 +0x038:  mov    %edx,(%esp)
0874b10b +0x03b:  mov    %eax,-0x60(%ebp)
0874b10e +0x03e:  call   087977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>  ; yaSSL::CertManager::get_privateKey() const
0874b113 +0x043:  mov    -0x60(%ebp),%ecx
0874b116 +0x046:  movl   $0x0,0xc(%esp)
0874b11e +0x04e:  mov    %ecx,0x8(%esp)
0874b122 +0x052:  mov    %eax,0x4(%esp)
0874b126 +0x056:  lea    -0x24(%ebp),%eax
0874b129 +0x059:  mov    %eax,-0x5c(%ebp)
0874b12c +0x05c:  mov    %eax,(%esp)
0874b12f +0x05f:  call   0879b260 <_ZN5yaSSL3RSAC1EPKhjb>  ; yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
0874b134 +0x064:  mov    -0x5c(%ebp),%edx
0874b137 +0x067:  mov    %edx,(%esp)
0874b13a +0x06a:  call   08798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>  ; yaSSL::RSA::get_cipherLength() const
0874b13f +0x06f:  mov    %esi,(%esp)
0874b142 +0x072:  mov    %ax,-0x1a(%ebp)
0874b146 +0x076:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874b14b +0x07b:  test   %al,%al
0874b14d +0x07d:  jne    0874b220 <+0x150>
0874b153 +0x083:  movzwl -0x1a(%ebp),%eax
0874b157 +0x087:  mov    %edi,(%esp)
0874b15a +0x08a:  mov    %eax,0x4(%esp)
0874b15e +0x08e:  call   087473d0 <_ZN5yaSSL24EncryptedPreMasterSecret5allocEi>  ; yaSSL::EncryptedPreMasterSecret::alloc(int)
0874b163 +0x093:  mov    0x8(%edi),%eax
0874b166 +0x096:  mov    %eax,0x8(%esp)
0874b16a +0x09a:  mov    0x4(%edi),%eax
0874b16d +0x09d:  mov    %eax,0x4(%esp)
0874b171 +0x0a1:  mov    0x10(%ebp),%eax
0874b174 +0x0a4:  mov    %eax,(%esp)
0874b177 +0x0a7:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874b17c +0x0ac:  mov    %esi,(%esp)
0874b17f +0x0af:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874b184 +0x0b4:  mov    %eax,(%esp)
0874b187 +0x0b7:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874b18c +0x0bc:  mov    -0x5c(%ebp),%edx
0874b18f +0x0bf:  mov    %eax,0x10(%esp)
0874b193 +0x0c3:  mov    0x8(%edi),%eax
0874b196 +0x0c6:  mov    %eax,0xc(%esp)
0874b19a +0x0ca:  mov    0x4(%edi),%eax
0874b19d +0x0cd:  lea    -0x54(%ebp),%edi
0874b1a0 +0x0d0:  mov    %edx,(%esp)
0874b1a3 +0x0d3:  mov    %edi,0x4(%esp)
0874b1a7 +0x0d7:  mov    %eax,0x8(%esp)
0874b1ab +0x0db:  call   0879bc60 <_ZN5yaSSL3RSA7decryptEPhPKhjRKNS_10RandomPoolE>  ; yaSSL::RSA::decrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
0874b1b0 +0x0e0:  mov    %esi,(%esp)
0874b1b3 +0x0e3:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874b1b8 +0x0e8:  mov    %eax,(%esp)
0874b1bb +0x0eb:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874b1c0 +0x0f0:  movzbl -0x54(%ebp),%ecx
0874b1c4 +0x0f4:  cmp    0x130(%eax),%cl
0874b1ca +0x0fa:  movzbl 0x131(%eax),%edx
0874b1d1 +0x101:  je     0874b218 <+0x148>
0874b1d3 +0x103:  movl   $0x78,0x4(%esp)
0874b1db +0x10b:  mov    %esi,(%esp)
0874b1de +0x10e:  call   0874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>  ; yaSSL::SSL::SetError(yaSSL::YasslError)
0874b1e3 +0x113:  mov    %edi,0x4(%esp)
0874b1e7 +0x117:  mov    %esi,(%esp)
0874b1ea +0x11a:  movl   $0x30,0x8(%esp)
0874b1f2 +0x122:  call   08750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>  ; yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
0874b1f7 +0x127:  mov    %esi,(%esp)
0874b1fa +0x12a:  call   087501c0 <_ZN5yaSSL3SSL16makeMasterSecretEv>  ; yaSSL::SSL::makeMasterSecret()
0874b1ff +0x12f:  mov    -0x5c(%ebp),%eax
0874b202 +0x132:  mov    %eax,(%esp)
0874b205 +0x135:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
0874b20a +0x13a:  add    $0x7c,%esp
0874b20d +0x13d:  pop    %ebx
0874b20e +0x13e:  pop    %esi
0874b20f +0x13f:  pop    %edi
0874b210 +0x140:  pop    %ebp
0874b211 +0x141:  ret
0874b212 +0x142:  lea    0x0(%esi),%esi
0874b218 +0x148:  cmp    %dl,-0x53(%ebp)
0874b21b +0x14b:  jne    0874b1d3 <+0x103>
0874b21d +0x14d:  jmp    0874b1e3 <+0x113>
0874b21f +0x14f:  nop
0874b220 +0x150:  mov    0x10(%ebp),%edx
0874b223 +0x153:  lea    -0x1c(%ebp),%eax
0874b226 +0x156:  mov    %eax,0x4(%esp)
0874b22a +0x15a:  mov    %eax,-0x60(%ebp)
0874b22d +0x15d:  movl   $0x2,0x8(%esp)
0874b235 +0x165:  mov    %edx,(%esp)
0874b238 +0x168:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874b23d +0x16d:  mov    -0x60(%ebp),%eax
0874b240 +0x170:  lea    -0x1a(%ebp),%edx
0874b243 +0x173:  mov    %edx,0x4(%esp)
0874b247 +0x177:  mov    %eax,(%esp)
0874b24a +0x17a:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
0874b24f +0x17f:  jmp    0874b153 <+0x83>
0874b254 +0x184:  lea    0x0(%esi),%esi
0874b25a +0x18a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::read @ 0x874b0d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::read(yaSSL::SSL&, yaSSL::input_buffer&) */

void __thiscall
yaSSL::EncryptedPreMasterSecret::read
          (EncryptedPreMasterSecret *this,SSL *param_1,input_buffer *param_2)

{
  char cVar1;
  Crypto *pCVar2;
  CertManager *this_00;
  uint uVar3;
  uchar *puVar4;
  RandomPool *pRVar5;
  Security *this_01;
  int iVar6;
  uchar local_58;
  char local_57;
  RSA local_28 [8];
  uchar local_20 [2];
  ushort local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874b0db;
  pCVar2 = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(pCVar2);
  uVar3 = CertManager::get_privateKeyLength(this_00);
  puVar4 = (uchar *)CertManager::get_privateKey(this_00);
  RSA::RSA(local_28,puVar4,uVar3,false);
  local_1e[0] = RSA::get_cipherLength(local_28);
  cVar1 = SSL::isTLS(param_1);
  if (cVar1 != '\0') {
    input_buffer::read(param_2,local_20,2);
    ato16(local_20,local_1e);
  }
  alloc(this,(uint)local_1e[0]);
  input_buffer::read(param_2,*(uchar **)(this + 4),*(uint *)(this + 8));
  pCVar2 = (Crypto *)SSL::getCrypto(param_1);
  pRVar5 = (RandomPool *)Crypto::get_random(pCVar2);
  RSA::decrypt(local_28,&local_58,*(uchar **)(this + 4),*(uint *)(this + 8),pRVar5);
  this_01 = (Security *)SSL::getSecurity(param_1);
  iVar6 = Security::get_connection(this_01);
  if ((local_58 != *(uchar *)(iVar6 + 0x130)) || (local_57 != *(char *)(iVar6 + 0x131))) {
    SSL::SetError(param_1,0x78);
  }
  SSL::set_preMaster(param_1,&local_58,0x30);
  SSL::makeMasterSecret(param_1);
  RSA::~RSA(local_28);
  return;
}
```
