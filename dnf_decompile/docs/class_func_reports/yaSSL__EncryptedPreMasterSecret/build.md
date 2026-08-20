# build

`_ZN5yaSSL24EncryptedPreMasterSecret5buildERNS_3SSLE`

`yaSSL::EncryptedPreMasterSecret::build(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x0874b380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b380  _ZN5yaSSL24EncryptedPreMasterSecret5buildERNS_3SSLE
#           yaSSL::EncryptedPreMasterSecret::build(yaSSL::SSL&)
# range [0x0874b380, 0x0874b51a]
0874b380 +0x000:  push   %ebp
0874b381 +0x001:  mov    $0xc,%ecx
0874b386 +0x006:  mov    %esp,%ebp
0874b388 +0x008:  push   %edi
0874b389 +0x009:  push   %esi
0874b38a +0x00a:  push   %ebx
0874b38b +0x00b:  lea    -0x54(%ebp),%eax
0874b38e +0x00e:  sub    $0x7c,%esp
0874b391 +0x011:  mov    0xc(%ebp),%esi
0874b394 +0x014:  mov    %eax,-0x5c(%ebp)
0874b397 +0x017:  mov    -0x5c(%ebp),%edi
0874b39a +0x01a:  xor    %eax,%eax
0874b39c +0x01c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b3a1 +0x021:  add    $0xc217f7,%ebx
0874b3a7 +0x027:  rep stos %eax,%es:(%edi)
0874b3a9 +0x029:  mov    %esi,(%esp)
0874b3ac +0x02c:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874b3b1 +0x031:  mov    %eax,(%esp)
0874b3b4 +0x034:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874b3b9 +0x039:  mov    -0x5c(%ebp),%edx
0874b3bc +0x03c:  movl   $0x30,0x8(%esp)
0874b3c4 +0x044:  mov    %edx,0x4(%esp)
0874b3c8 +0x048:  mov    %eax,(%esp)
0874b3cb +0x04b:  call   08798fc0 <_ZNK5yaSSL10RandomPool4FillEPhj>  ; yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
0874b3d0 +0x050:  mov    %esi,(%esp)
0874b3d3 +0x053:  call   0874e070 <_ZNK5yaSSL3SSL11getSecurityEv>  ; yaSSL::SSL::getSecurity() const
0874b3d8 +0x058:  mov    %eax,(%esp)
0874b3db +0x05b:  call   0874e960 <_ZNK5yaSSL8Security14get_connectionEv>  ; yaSSL::Security::get_connection() const
0874b3e0 +0x060:  movzbl 0x131(%eax),%edx
0874b3e7 +0x067:  movzbl 0x130(%eax),%eax
0874b3ee +0x06e:  movl   $0x30,0x8(%esp)
0874b3f6 +0x076:  mov    %esi,(%esp)
0874b3f9 +0x079:  mov    %dl,-0x53(%ebp)
0874b3fc +0x07c:  mov    %al,-0x54(%ebp)
0874b3ff +0x07f:  mov    -0x5c(%ebp),%eax
0874b402 +0x082:  mov    %eax,0x4(%esp)
0874b406 +0x086:  call   08750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>  ; yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
0874b40b +0x08b:  mov    %esi,(%esp)
0874b40e +0x08e:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874b413 +0x093:  mov    %eax,(%esp)
0874b416 +0x096:  call   0874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>  ; yaSSL::Crypto::get_certManager() const
0874b41b +0x09b:  mov    %eax,%edi
0874b41d +0x09d:  mov    %eax,(%esp)
0874b420 +0x0a0:  call   087977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>  ; yaSSL::CertManager::get_peerKeyLength() const
0874b425 +0x0a5:  mov    %edi,(%esp)
0874b428 +0x0a8:  lea    -0x24(%ebp),%edi
0874b42b +0x0ab:  mov    %eax,-0x68(%ebp)
0874b42e +0x0ae:  call   08797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>  ; yaSSL::CertManager::get_peerKey() const
0874b433 +0x0b3:  mov    -0x68(%ebp),%edx
0874b436 +0x0b6:  movl   $0x1,0xc(%esp)
0874b43e +0x0be:  mov    %edi,(%esp)
0874b441 +0x0c1:  mov    %edx,0x8(%esp)
0874b445 +0x0c5:  mov    %eax,0x4(%esp)
0874b449 +0x0c9:  call   0879b260 <_ZN5yaSSL3RSAC1EPKhjb>  ; yaSSL::RSA::RSA(unsigned char const*, unsigned int, bool)
0874b44e +0x0ce:  mov    %esi,(%esp)
0874b451 +0x0d1:  call   0874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>  ; yaSSL::SSL::isTLS() const
0874b456 +0x0d6:  mov    %edi,(%esp)
0874b459 +0x0d9:  mov    %al,-0x68(%ebp)
0874b45c +0x0dc:  call   08798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>  ; yaSSL::RSA::get_cipherLength() const
0874b461 +0x0e1:  movzbl -0x68(%ebp),%edx
0874b465 +0x0e5:  test   %dl,%dl
0874b467 +0x0e7:  je     0874b500 <+0x180>
0874b46d +0x0ed:  mov    0x8(%ebp),%edx
0874b470 +0x0f0:  add    $0x2,%eax
0874b473 +0x0f3:  mov    %eax,0x4(%esp)
0874b477 +0x0f7:  mov    %edx,(%esp)
0874b47a +0x0fa:  call   087473d0 <_ZN5yaSSL24EncryptedPreMasterSecret5allocEi>  ; yaSSL::EncryptedPreMasterSecret::alloc(int)
0874b47f +0x0ff:  mov    0x8(%ebp),%eax
0874b482 +0x102:  mov    0x4(%eax),%eax
0874b485 +0x105:  mov    %edi,(%esp)
0874b488 +0x108:  mov    %eax,-0x64(%ebp)
0874b48b +0x10b:  call   08798e50 <_ZNK5yaSSL3RSA16get_cipherLengthEv>  ; yaSSL::RSA::get_cipherLength() const
0874b490 +0x110:  lea    -0x1a(%ebp),%edx
0874b493 +0x113:  mov    %edx,0x4(%esp)
0874b497 +0x117:  movzwl %ax,%eax
0874b49a +0x11a:  mov    %eax,(%esp)
0874b49d +0x11d:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874b4a2 +0x122:  mov    0x8(%ebp),%edx
0874b4a5 +0x125:  mov    0x4(%edx),%eax
0874b4a8 +0x128:  movzwl -0x1a(%ebp),%edx
0874b4ac +0x12c:  mov    %dx,(%eax)
0874b4af +0x12f:  mov    -0x64(%ebp),%eax
0874b4b2 +0x132:  add    $0x2,%eax
0874b4b5 +0x135:  mov    %eax,-0x60(%ebp)
0874b4b8 +0x138:  mov    %esi,(%esp)
0874b4bb +0x13b:  call   0874e060 <_ZNK5yaSSL3SSL9getCryptoEv>  ; yaSSL::SSL::getCrypto() const
0874b4c0 +0x140:  mov    %eax,(%esp)
0874b4c3 +0x143:  call   0874e780 <_ZNK5yaSSL6Crypto10get_randomEv>  ; yaSSL::Crypto::get_random() const
0874b4c8 +0x148:  mov    -0x5c(%ebp),%edx
0874b4cb +0x14b:  mov    %edi,(%esp)
0874b4ce +0x14e:  movl   $0x30,0xc(%esp)
0874b4d6 +0x156:  mov    %edx,0x8(%esp)
0874b4da +0x15a:  mov    %eax,0x10(%esp)
0874b4de +0x15e:  mov    -0x60(%ebp),%eax
0874b4e1 +0x161:  mov    %eax,0x4(%esp)
0874b4e5 +0x165:  call   0879ab60 <_ZN5yaSSL3RSA7encryptEPhPKhjRKNS_10RandomPoolE>  ; yaSSL::RSA::encrypt(unsigned char*, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
0874b4ea +0x16a:  mov    %edi,(%esp)
0874b4ed +0x16d:  call   0879b380 <_ZN5yaSSL3RSAD1Ev>  ; yaSSL::RSA::~RSA()
0874b4f2 +0x172:  add    $0x7c,%esp
0874b4f5 +0x175:  pop    %ebx
0874b4f6 +0x176:  pop    %esi
0874b4f7 +0x177:  pop    %edi
0874b4f8 +0x178:  pop    %ebp
0874b4f9 +0x179:  ret
0874b4fa +0x17a:  lea    0x0(%esi),%esi
0874b500 +0x180:  mov    0x8(%ebp),%edx
0874b503 +0x183:  mov    %eax,0x4(%esp)
0874b507 +0x187:  mov    %edx,(%esp)
0874b50a +0x18a:  call   087473d0 <_ZN5yaSSL24EncryptedPreMasterSecret5allocEi>  ; yaSSL::EncryptedPreMasterSecret::alloc(int)
0874b50f +0x18f:  mov    0x8(%ebp),%eax
0874b512 +0x192:  mov    0x4(%eax),%eax
0874b515 +0x195:  mov    %eax,-0x60(%ebp)
0874b518 +0x198:  jmp    0874b4b8 <+0x138>
0874b51a +0x19a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::build @ 0x874b380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::build(yaSSL::SSL&) */

void __thiscall yaSSL::EncryptedPreMasterSecret::build(EncryptedPreMasterSecret *this,SSL *param_1)

{
  char cVar1;
  ushort uVar2;
  Crypto *pCVar3;
  RandomPool *pRVar4;
  Security *this_00;
  CertManager *this_01;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uchar *local_64;
  uchar local_58;
  undefined1 local_57;
  RSA local_28 [10];
  undefined2 local_1e [7];
  
  puVar6 = &local_58;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar6[0] = '\0';
    puVar6[1] = '\0';
    puVar6[2] = '\0';
    puVar6[3] = '\0';
    puVar6 = puVar6 + 4;
  }
  pCVar3 = (Crypto *)SSL::getCrypto(param_1);
  pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
  RandomPool::Fill(pRVar4,&local_58,0x30);
  this_00 = (Security *)SSL::getSecurity(param_1);
  iVar7 = Security::get_connection(this_00);
  local_57 = *(undefined1 *)(iVar7 + 0x131);
  local_58 = *(uchar *)(iVar7 + 0x130);
  SSL::set_preMaster(param_1,&local_58,0x30);
  pCVar3 = (Crypto *)SSL::getCrypto(param_1);
  this_01 = (CertManager *)Crypto::get_certManager(pCVar3);
  uVar5 = CertManager::get_peerKeyLength(this_01);
  puVar6 = (uchar *)CertManager::get_peerKey(this_01);
  RSA::RSA(local_28,puVar6,uVar5,true);
  cVar1 = SSL::isTLS(param_1);
  iVar7 = RSA::get_cipherLength(local_28);
  if (cVar1 == '\0') {
    alloc(this,iVar7);
    local_64 = *(uchar **)(this + 4);
  }
  else {
    alloc(this,iVar7 + 2);
    iVar7 = *(int *)(this + 4);
    uVar2 = RSA::get_cipherLength(local_28);
    c16toa(uVar2,(uchar *)local_1e);
    **(undefined2 **)(this + 4) = local_1e[0];
    local_64 = (uchar *)(iVar7 + 2);
  }
  pCVar3 = (Crypto *)SSL::getCrypto(param_1);
  pRVar4 = (RandomPool *)Crypto::get_random(pCVar3);
  RSA::encrypt(local_28,local_64,&local_58,0x30,pRVar4);
  RSA::~RSA(local_28);
  return;
}
```
