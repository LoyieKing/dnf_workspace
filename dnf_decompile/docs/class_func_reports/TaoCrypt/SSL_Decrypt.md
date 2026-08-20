# SSL_Decrypt

`_ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh`

`TaoCrypt::SSL_Decrypt(TaoCrypt::RSA_PublicKey const&, unsigned char const*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08767e50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767e50  _ZN8TaoCrypt11SSL_DecryptERKNS_13RSA_PublicKeyEPKhPh
#           TaoCrypt::SSL_Decrypt(TaoCrypt::RSA_PublicKey const&, unsigned char const*, unsigned char*)
# range [0x08767e50, 0x08767ffa]
08767e50 +0x000:  push   %ebp
08767e51 +0x001:  mov    %esp,%ebp
08767e53 +0x003:  push   %edi
08767e54 +0x004:  xor    %edi,%edi
08767e56 +0x006:  push   %esi
08767e57 +0x007:  push   %ebx
08767e58 +0x008:  call   08722df8 <__i686.get_pc_thunk.bx>
08767e5d +0x00d:  add    $0xc04d3b,%ebx
08767e63 +0x013:  sub    $0x5c,%esp
08767e66 +0x016:  mov    0x8(%ebp),%eax
08767e69 +0x019:  mov    %eax,(%esp)
08767e6c +0x01c:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
08767e71 +0x021:  lea    0x6(%eax),%esi
08767e74 +0x024:  shr    $0x3,%esi
08767e77 +0x027:  test   %esi,%esi
08767e79 +0x029:  jne    08767fc8 <+0x178>
08767e7f +0x02f:  mov    %esi,0x8(%esp)
08767e83 +0x033:  movl   $0x0,0x4(%esp)
08767e8b +0x03b:  mov    %edi,(%esp)
08767e8e +0x03e:  call   0807dcc0 <_init+0x5b8>
08767e93 +0x043:  mov    0x8(%ebp),%edx
08767e96 +0x046:  mov    %edx,(%esp)
08767e99 +0x049:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08767e9e +0x04e:  movl   $0x0,0xc(%esp)
08767ea6 +0x056:  mov    %eax,0x8(%esp)
08767eaa +0x05a:  mov    0xc(%ebp),%eax
08767ead +0x05d:  mov    %eax,0x4(%esp)
08767eb1 +0x061:  lea    -0x3c(%ebp),%eax
08767eb4 +0x064:  mov    %eax,(%esp)
08767eb7 +0x067:  mov    %eax,-0x54(%ebp)
08767eba +0x06a:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
08767ebf +0x06f:  mov    -0x54(%ebp),%eax
08767ec2 +0x072:  lea    -0x2c(%ebp),%edx
08767ec5 +0x075:  mov    %edx,-0x50(%ebp)
08767ec8 +0x078:  mov    %edx,(%esp)
08767ecb +0x07b:  mov    %eax,0x8(%esp)
08767ecf +0x07f:  mov    0x8(%ebp),%eax
08767ed2 +0x082:  mov    %eax,0x4(%esp)
08767ed6 +0x086:  call   08767e00 <_ZNK8TaoCrypt13RSA_PublicKey13ApplyFunctionERKNS_7IntegerE>  ; TaoCrypt::RSA_PublicKey::ApplyFunction(TaoCrypt::Integer const&) const
08767edb +0x08b:  mov    -0x3c(%ebp),%eax
08767ede +0x08e:  mov    -0x38(%ebp),%edx
08767ee1 +0x091:  shl    $0x2,%eax
08767ee4 +0x094:  mov    %edx,-0x54(%ebp)
08767ee7 +0x097:  sub    $0x4,%esp
08767eea +0x09a:  mov    %edx,(%esp)
08767eed +0x09d:  mov    %eax,0x8(%esp)
08767ef1 +0x0a1:  movl   $0x0,0x4(%esp)
08767ef9 +0x0a9:  call   0807dcc0 <_init+0x5b8>
08767efe +0x0ae:  mov    -0x54(%ebp),%edx
08767f01 +0x0b1:  movb   $0x0,0x4(%esp)
08767f06 +0x0b6:  mov    %edx,(%esp)
08767f09 +0x0b9:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08767f0e +0x0be:  mov    -0x50(%ebp),%edx
08767f11 +0x0c1:  mov    %edx,(%esp)
08767f14 +0x0c4:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
08767f19 +0x0c9:  cmp    %esi,%eax
08767f1b +0x0cb:  ja     08767fe0 <+0x190>
08767f21 +0x0d1:  mov    -0x50(%ebp),%edx
08767f24 +0x0d4:  mov    %esi,0x8(%esp)
08767f28 +0x0d8:  mov    %edi,0x4(%esp)
08767f2c +0x0dc:  movl   $0x0,0xc(%esp)
08767f34 +0x0e4:  mov    %edx,(%esp)
08767f37 +0x0e7:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
08767f3c +0x0ec:  mov    0x8(%ebp),%eax
08767f3f +0x0ef:  mov    %eax,(%esp)
08767f42 +0x0f2:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
08767f47 +0x0f7:  mov    0x10(%ebp),%edx
08767f4a +0x0fa:  mov    %edi,0x4(%esp)
08767f4e +0x0fe:  mov    %edx,0xc(%esp)
08767f52 +0x102:  sub    $0x1,%eax
08767f55 +0x105:  mov    %eax,0x8(%esp)
08767f59 +0x109:  lea    -0x19(%ebp),%eax
08767f5c +0x10c:  mov    %eax,(%esp)
08767f5f +0x10f:  call   08767a10 <_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh>  ; TaoCrypt::RSA_BlockType1::UnPad(unsigned char const*, unsigned int, unsigned char*) const
08767f64 +0x114:  mov    -0x28(%ebp),%edx
08767f67 +0x117:  movl   $0x0,0x4(%esp)
08767f6f +0x11f:  mov    %edx,(%esp)
08767f72 +0x122:  mov    %edx,-0x54(%ebp)
08767f75 +0x125:  mov    %eax,-0x4c(%ebp)
08767f78 +0x128:  mov    -0x2c(%ebp),%eax
08767f7b +0x12b:  shl    $0x2,%eax
08767f7e +0x12e:  mov    %eax,0x8(%esp)
08767f82 +0x132:  call   0807dcc0 <_init+0x5b8>
08767f87 +0x137:  mov    -0x54(%ebp),%edx
08767f8a +0x13a:  movb   $0x0,0x4(%esp)
08767f8f +0x13f:  mov    %edx,(%esp)
08767f92 +0x142:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08767f97 +0x147:  mov    %esi,0x8(%esp)
08767f9b +0x14b:  mov    %edi,(%esp)
08767f9e +0x14e:  movl   $0x0,0x4(%esp)
08767fa6 +0x156:  call   0807dcc0 <_init+0x5b8>
08767fab +0x15b:  mov    %edi,(%esp)
08767fae +0x15e:  movb   $0x0,0x4(%esp)
08767fb3 +0x163:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08767fb8 +0x168:  mov    -0x4c(%ebp),%eax
08767fbb +0x16b:  lea    -0xc(%ebp),%esp
08767fbe +0x16e:  pop    %ebx
08767fbf +0x16f:  pop    %esi
08767fc0 +0x170:  pop    %edi
08767fc1 +0x171:  pop    %ebp
08767fc2 +0x172:  ret
08767fc3 +0x173:  nop
08767fc4 +0x174:  lea    0x0(%esi,%eiz,1),%esi
08767fc8 +0x178:  movb   $0x0,0x4(%esp)
08767fcd +0x17d:  mov    %esi,(%esp)
08767fd0 +0x180:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08767fd5 +0x185:  mov    %eax,%edi
08767fd7 +0x187:  jmp    08767e7f <+0x2f>
08767fdc +0x18c:  lea    0x0(%esi,%eiz,1),%esi
08767fe0 +0x190:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
08767fe5 +0x195:  mov    %eax,0x4(%esp)
08767fe9 +0x199:  mov    -0x50(%ebp),%eax
08767fec +0x19c:  mov    %eax,(%esp)
08767fef +0x19f:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
08767ff4 +0x1a4:  jmp    08767f21 <+0xd1>
08767ff9 +0x1a9:  nop
08767ffa +0x1aa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::SSL_Decrypt @ 0x8767e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SSL_Decrypt(TaoCrypt::RSA_PublicKey const&, unsigned char const*, unsigned char*) */

undefined4 TaoCrypt::SSL_Decrypt(RSA_PublicKey *param_1,uchar *param_2,uchar *param_3)

{
  int iVar1;
  undefined4 uVar2;
  Integer *pIVar3;
  uint __n;
  uchar *__s;
  uint in_stack_ffffff98;
  uint uVar4;
  int local_40;
  void *local_3c;
  int local_30;
  void *local_2c;
  RSA_BlockType1 local_1d [9];
  undefined4 uStack_14;
  
  __s = (uchar *)0x0;
  uStack_14 = 0x8767e5d;
  iVar1 = Integer::BitCount((Integer *)param_1);
  __n = iVar1 + 6U >> 3;
  if (__n != 0) {
    __s = operator_new__(__n,in_stack_ffffff98 & 0xffffff00);
  }
  memset(__s,0,__n);
  uVar2 = Integer::ByteCount((Integer *)param_1);
  Integer::Integer((Integer *)&local_40,param_2,uVar2,0);
  RSA_PublicKey::ApplyFunction((Integer *)&local_30);
  uVar4 = 0;
  memset(local_3c,0,local_40 << 2);
  operator_delete__(local_3c,uVar4 & 0xffffff00);
  uVar4 = Integer::ByteCount((Integer *)&local_30);
  if (__n < uVar4) {
    pIVar3 = (Integer *)Integer::Zero();
    Integer::operator=((Integer *)&local_30,pIVar3);
  }
  Integer::Encode((Integer *)&local_30,__s,__n,0);
  iVar1 = Integer::BitCount((Integer *)param_1);
  uVar2 = RSA_BlockType1::UnPad(local_1d,__s,iVar1 - 1,param_3);
  uVar4 = 0;
  memset(local_2c,0,local_30 << 2);
  operator_delete__(local_2c,uVar4 & 0xffffff00);
  uVar4 = 0;
  memset(__s,0,__n);
  operator_delete__(__s,uVar4 & 0xffffff00);
  return uVar2;
}
```
