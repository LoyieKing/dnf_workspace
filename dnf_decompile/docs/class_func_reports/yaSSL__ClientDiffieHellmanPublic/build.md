# build

`_ZN5yaSSL25ClientDiffieHellmanPublic5buildERNS_3SSLE`

`yaSSL::ClientDiffieHellmanPublic::build(yaSSL::SSL&)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientDiffieHellmanPublic` | `0x0874b260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b260  _ZN5yaSSL25ClientDiffieHellmanPublic5buildERNS_3SSLE
#           yaSSL::ClientDiffieHellmanPublic::build(yaSSL::SSL&)
# range [0x0874b260, 0x0874b37a]
0874b260 +0x000:  push   %ebp
0874b261 +0x001:  mov    %esp,%ebp
0874b263 +0x003:  push   %edi
0874b264 +0x004:  push   %esi
0874b265 +0x005:  push   %ebx
0874b266 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b26b +0x00b:  add    $0xc2192d,%ebx
0874b271 +0x011:  sub    $0x3c,%esp
0874b274 +0x014:  mov    0xc(%ebp),%eax
0874b277 +0x017:  lea    -0x1c(%ebp),%esi
0874b27a +0x01a:  mov    %eax,(%esp)
0874b27d +0x01d:  call   0874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>  ; yaSSL::SSL::useCrypto()
0874b282 +0x022:  mov    %eax,(%esp)
0874b285 +0x025:  call   0874e7c0 <_ZN5yaSSL6Crypto6use_dhEv>  ; yaSSL::Crypto::use_dh()
0874b28a +0x02a:  mov    %esi,(%esp)
0874b28d +0x02d:  mov    %eax,0x4(%esp)
0874b291 +0x031:  mov    %eax,-0x2c(%ebp)
0874b294 +0x034:  call   0879a3e0 <_ZN5yaSSL13DiffieHellmanC1ERKS0_>  ; yaSSL::DiffieHellman::DiffieHellman(yaSSL::DiffieHellman const&)
0874b299 +0x039:  mov    %esi,(%esp)
0874b29c +0x03c:  call   08798e20 <_ZNK5yaSSL13DiffieHellman19get_agreedKeyLengthEv>  ; yaSSL::DiffieHellman::get_agreedKeyLength() const
0874b2a1 +0x041:  mov    0x8(%ebp),%ecx
0874b2a4 +0x044:  movl   $0x1,0x8(%esp)
0874b2ac +0x04c:  mov    %ecx,(%esp)
0874b2af +0x04f:  mov    %eax,%edi
0874b2b1 +0x051:  mov    %eax,0x4(%esp)
0874b2b5 +0x055:  call   08747380 <_ZN5yaSSL25ClientDiffieHellmanPublic5allocEib>  ; yaSSL::ClientDiffieHellmanPublic::alloc(int, bool)
0874b2ba +0x05a:  mov    -0x2c(%ebp),%edx
0874b2bd +0x05d:  mov    %edx,(%esp)
0874b2c0 +0x060:  call   087985d0 <_ZNK5yaSSL13DiffieHellman13get_publicKeyEv>  ; yaSSL::DiffieHellman::get_publicKey() const
0874b2c5 +0x065:  mov    %edi,0x8(%esp)
0874b2c9 +0x069:  mov    %esi,(%esp)
0874b2cc +0x06c:  mov    %eax,0x4(%esp)
0874b2d0 +0x070:  call   08798eb0 <_ZN5yaSSL13DiffieHellman13makeAgreementEPKhj>  ; yaSSL::DiffieHellman::makeAgreement(unsigned char const*, unsigned int)
0874b2d5 +0x075:  mov    0x8(%ebp),%edx
0874b2d8 +0x078:  mov    0xc(%edx),%eax
0874b2db +0x07b:  mov    %eax,0x4(%esp)
0874b2df +0x07f:  movzwl %di,%eax
0874b2e2 +0x082:  mov    %eax,(%esp)
0874b2e5 +0x085:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
0874b2ea +0x08a:  mov    %esi,(%esp)
0874b2ed +0x08d:  call   087985d0 <_ZNK5yaSSL13DiffieHellman13get_publicKeyEv>  ; yaSSL::DiffieHellman::get_publicKey() const
0874b2f2 +0x092:  mov    0x8(%ebp),%ecx
0874b2f5 +0x095:  mov    0xc(%ecx),%edx
0874b2f8 +0x098:  mov    %edi,0x8(%esp)
0874b2fc +0x09c:  mov    %eax,0x4(%esp)
0874b300 +0x0a0:  add    $0x2,%edx
0874b303 +0x0a3:  mov    %edx,(%esp)
0874b306 +0x0a6:  call   0807d8a0 <_init+0x198>
0874b30b +0x0ab:  mov    %esi,(%esp)
0874b30e +0x0ae:  call   087985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>  ; yaSSL::DiffieHellman::get_agreedKey() const
0874b313 +0x0b3:  cmpb   $0x0,(%eax)
0874b316 +0x0b6:  je     0874b348 <+0xe8>
0874b318 +0x0b8:  mov    %esi,(%esp)
0874b31b +0x0bb:  call   087985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>  ; yaSSL::DiffieHellman::get_agreedKey() const
0874b320 +0x0c0:  mov    0xc(%ebp),%edx
0874b323 +0x0c3:  mov    %edi,0x8(%esp)
0874b327 +0x0c7:  mov    %edx,(%esp)
0874b32a +0x0ca:  mov    %eax,0x4(%esp)
0874b32e +0x0ce:  call   08750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>  ; yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
0874b333 +0x0d3:  mov    %esi,(%esp)
0874b336 +0x0d6:  call   0879aef0 <_ZN5yaSSL13DiffieHellmanD1Ev>  ; yaSSL::DiffieHellman::~DiffieHellman()
0874b33b +0x0db:  add    $0x3c,%esp
0874b33e +0x0de:  pop    %ebx
0874b33f +0x0df:  pop    %esi
0874b340 +0x0e0:  pop    %edi
0874b341 +0x0e1:  pop    %ebp
0874b342 +0x0e2:  ret
0874b343 +0x0e3:  nop
0874b344 +0x0e4:  lea    0x0(%esi,%eiz,1),%esi
0874b348 +0x0e8:  mov    %esi,(%esp)
0874b34b +0x0eb:  sub    $0x1,%edi
0874b34e +0x0ee:  call   087985c0 <_ZNK5yaSSL13DiffieHellman13get_agreedKeyEv>  ; yaSSL::DiffieHellman::get_agreedKey() const
0874b353 +0x0f3:  mov    %edi,0x8(%esp)
0874b357 +0x0f7:  add    $0x1,%eax
0874b35a +0x0fa:  mov    %eax,0x4(%esp)
0874b35e +0x0fe:  mov    0xc(%ebp),%eax
0874b361 +0x101:  mov    %eax,(%esp)
0874b364 +0x104:  call   08750710 <_ZN5yaSSL3SSL13set_preMasterEPKhj>  ; yaSSL::SSL::set_preMaster(unsigned char const*, unsigned int)
0874b369 +0x109:  mov    %esi,(%esp)
0874b36c +0x10c:  call   0879aef0 <_ZN5yaSSL13DiffieHellmanD1Ev>  ; yaSSL::DiffieHellman::~DiffieHellman()
0874b371 +0x111:  add    $0x3c,%esp
0874b374 +0x114:  pop    %ebx
0874b375 +0x115:  pop    %esi
0874b376 +0x116:  pop    %edi
0874b377 +0x117:  pop    %ebp
0874b378 +0x118:  ret
0874b379 +0x119:  nop
0874b37a +0x11a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientDiffieHellmanPublic::build @ 0x874b260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientDiffieHellmanPublic::build(yaSSL::SSL&) */

void __thiscall
yaSSL::ClientDiffieHellmanPublic::build(ClientDiffieHellmanPublic *this,SSL *param_1)

{
  Crypto *this_00;
  DiffieHellman *this_01;
  uint __n;
  uchar *puVar1;
  void *__src;
  char *pcVar2;
  int iVar3;
  DiffieHellman local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x874b26b;
  this_00 = (Crypto *)SSL::useCrypto(param_1);
  this_01 = (DiffieHellman *)Crypto::use_dh(this_00);
  DiffieHellman::DiffieHellman(local_20,this_01);
  __n = DiffieHellman::get_agreedKeyLength(local_20);
  alloc(this,__n,true);
  puVar1 = (uchar *)DiffieHellman::get_publicKey(this_01);
  DiffieHellman::makeAgreement(local_20,puVar1,__n);
  c16toa((ushort)__n,*(uchar **)(this + 0xc));
  __src = (void *)DiffieHellman::get_publicKey(local_20);
  memcpy((void *)(*(int *)(this + 0xc) + 2),__src,__n);
  pcVar2 = (char *)DiffieHellman::get_agreedKey(local_20);
  if (*pcVar2 != '\0') {
    puVar1 = (uchar *)DiffieHellman::get_agreedKey(local_20);
    SSL::set_preMaster(param_1,puVar1,__n);
    DiffieHellman::~DiffieHellman(local_20);
    return;
  }
  iVar3 = DiffieHellman::get_agreedKey(local_20);
  SSL::set_preMaster(param_1,(uchar *)(iVar3 + 1),__n - 1);
  DiffieHellman::~DiffieHellman(local_20);
  return;
}
```
