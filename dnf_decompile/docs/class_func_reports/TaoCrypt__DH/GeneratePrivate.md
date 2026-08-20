# GeneratePrivate

`_ZN8TaoCrypt2DH15GeneratePrivateERNS_21RandomNumberGeneratorEPh`

`TaoCrypt::DH::GeneratePrivate(TaoCrypt::RandomNumberGenerator&, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH` | `0x087a8a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8a70  _ZN8TaoCrypt2DH15GeneratePrivateERNS_21RandomNumberGeneratorEPh
#           TaoCrypt::DH::GeneratePrivate(TaoCrypt::RandomNumberGenerator&, unsigned char*)
# range [0x087a8a70, 0x087a8c6a]
087a8a70 +0x000:  push   %ebp
087a8a71 +0x001:  mov    %esp,%ebp
087a8a73 +0x003:  push   %edi
087a8a74 +0x004:  push   %esi
087a8a75 +0x005:  push   %ebx
087a8a76 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087a8a7b +0x00b:  add    $0xbc411d,%ebx
087a8a81 +0x011:  sub    $0x7c,%esp
087a8a84 +0x014:  mov    0x8(%ebp),%esi
087a8a87 +0x017:  mov    %esi,(%esp)
087a8a8a +0x01a:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
087a8a8f +0x01f:  xor    %edx,%edx
087a8a91 +0x021:  cmp    $0x4,%eax
087a8a94 +0x024:  ja     087a8bf8 <+0x188>
087a8a9a +0x02a:  lea    -0x58(%ebp),%edi
087a8a9d +0x02d:  mov    %edx,0x4(%esp)
087a8aa1 +0x031:  mov    %edi,(%esp)
087a8aa4 +0x034:  call   08760d70 <_ZN8TaoCrypt7Integer6Power2Ej>  ; TaoCrypt::Integer::Power2(unsigned int)
087a8aa9 +0x039:  lea    -0x38(%ebp),%eax
087a8aac +0x03c:  mov    %eax,-0x6c(%ebp)
087a8aaf +0x03f:  sub    $0x4,%esp
087a8ab2 +0x042:  mov    %eax,(%esp)
087a8ab5 +0x045:  movl   $0x1,0x4(%esp)
087a8abd +0x04d:  call   0875f4d0 <_ZN8TaoCrypt7IntegerC1El>  ; TaoCrypt::Integer::Integer(long)
087a8ac2 +0x052:  mov    -0x6c(%ebp),%eax
087a8ac5 +0x055:  lea    -0x48(%ebp),%edx
087a8ac8 +0x058:  mov    %edx,-0x68(%ebp)
087a8acb +0x05b:  mov    %edx,(%esp)
087a8ace +0x05e:  mov    %esi,0x4(%esp)
087a8ad2 +0x062:  mov    %eax,0x8(%esp)
087a8ad6 +0x066:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
087a8adb +0x06b:  mov    -0x68(%ebp),%eax
087a8ade +0x06e:  sub    $0x4,%esp
087a8ae1 +0x071:  mov    %edi,0x4(%esp)
087a8ae5 +0x075:  mov    %eax,(%esp)
087a8ae8 +0x078:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
087a8aed +0x07d:  test   %eax,%eax
087a8aef +0x07f:  cmovs  -0x68(%ebp),%edi
087a8af3 +0x083:  call   0875f200 <_ZN8TaoCrypt7Integer3OneEv>  ; TaoCrypt::Integer::One()
087a8af8 +0x088:  mov    %edi,0xc(%esp)
087a8afc +0x08c:  lea    -0x28(%ebp),%edi
087a8aff +0x08f:  mov    %edi,(%esp)
087a8b02 +0x092:  mov    %eax,0x8(%esp)
087a8b06 +0x096:  mov    0xc(%ebp),%eax
087a8b09 +0x099:  mov    %eax,0x4(%esp)
087a8b0d +0x09d:  call   087614f0 <_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_>  ; TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
087a8b12 +0x0a2:  mov    -0x48(%ebp),%eax
087a8b15 +0x0a5:  mov    -0x44(%ebp),%edx
087a8b18 +0x0a8:  movl   $0x0,0x4(%esp)
087a8b20 +0x0b0:  shl    $0x2,%eax
087a8b23 +0x0b3:  mov    %edx,(%esp)
087a8b26 +0x0b6:  mov    %edx,-0x6c(%ebp)
087a8b29 +0x0b9:  mov    %eax,0x8(%esp)
087a8b2d +0x0bd:  call   0807dcc0 <_init+0x5b8>
087a8b32 +0x0c2:  mov    -0x6c(%ebp),%edx
087a8b35 +0x0c5:  movb   $0x0,0x4(%esp)
087a8b3a +0x0ca:  mov    %edx,(%esp)
087a8b3d +0x0cd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8b42 +0x0d2:  mov    -0x38(%ebp),%eax
087a8b45 +0x0d5:  mov    -0x34(%ebp),%edx
087a8b48 +0x0d8:  movl   $0x0,0x4(%esp)
087a8b50 +0x0e0:  shl    $0x2,%eax
087a8b53 +0x0e3:  mov    %edx,(%esp)
087a8b56 +0x0e6:  mov    %edx,-0x6c(%ebp)
087a8b59 +0x0e9:  mov    %eax,0x8(%esp)
087a8b5d +0x0ed:  call   0807dcc0 <_init+0x5b8>
087a8b62 +0x0f2:  mov    -0x6c(%ebp),%edx
087a8b65 +0x0f5:  movb   $0x0,0x4(%esp)
087a8b6a +0x0fa:  mov    %edx,(%esp)
087a8b6d +0x0fd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8b72 +0x102:  mov    -0x58(%ebp),%eax
087a8b75 +0x105:  mov    -0x54(%ebp),%edx
087a8b78 +0x108:  movl   $0x0,0x4(%esp)
087a8b80 +0x110:  shl    $0x2,%eax
087a8b83 +0x113:  mov    %edx,(%esp)
087a8b86 +0x116:  mov    %edx,-0x6c(%ebp)
087a8b89 +0x119:  mov    %eax,0x8(%esp)
087a8b8d +0x11d:  call   0807dcc0 <_init+0x5b8>
087a8b92 +0x122:  mov    -0x6c(%ebp),%edx
087a8b95 +0x125:  movb   $0x0,0x4(%esp)
087a8b9a +0x12a:  mov    %edx,(%esp)
087a8b9d +0x12d:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8ba2 +0x132:  mov    %esi,(%esp)
087a8ba5 +0x135:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
087a8baa +0x13a:  mov    %edi,(%esp)
087a8bad +0x13d:  movl   $0x0,0xc(%esp)
087a8bb5 +0x145:  mov    %eax,0x8(%esp)
087a8bb9 +0x149:  mov    0x10(%ebp),%eax
087a8bbc +0x14c:  mov    %eax,0x4(%esp)
087a8bc0 +0x150:  call   08760f10 <_ZNK8TaoCrypt7Integer6EncodeEPhjNS0_10SignednessE>  ; TaoCrypt::Integer::Encode(unsigned char*, unsigned int, TaoCrypt::Integer::Signedness) const
087a8bc5 +0x155:  mov    -0x28(%ebp),%eax
087a8bc8 +0x158:  mov    -0x24(%ebp),%esi
087a8bcb +0x15b:  movl   $0x0,0x4(%esp)
087a8bd3 +0x163:  shl    $0x2,%eax
087a8bd6 +0x166:  mov    %esi,(%esp)
087a8bd9 +0x169:  mov    %eax,0x8(%esp)
087a8bdd +0x16d:  call   0807dcc0 <_init+0x5b8>
087a8be2 +0x172:  mov    %esi,(%esp)
087a8be5 +0x175:  movb   $0x0,0x4(%esp)
087a8bea +0x17a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087a8bef +0x17f:  lea    -0xc(%ebp),%esp
087a8bf2 +0x182:  pop    %ebx
087a8bf3 +0x183:  pop    %esi
087a8bf4 +0x184:  pop    %edi
087a8bf5 +0x185:  pop    %ebp
087a8bf6 +0x186:  ret
087a8bf7 +0x187:  nop
087a8bf8 +0x188:  xor    %edx,%edx
087a8bfa +0x18a:  mov    %eax,-0x60(%ebp)
087a8bfd +0x18d:  mov    %edx,-0x5c(%ebp)
087a8c00 +0x190:  fildll -0x60(%ebp)
087a8c03 +0x193:  fldl   -0x65c208(%ebx)
087a8c09 +0x199:  fstpl  0x8(%esp)
087a8c0d +0x19d:  fstl   (%esp)
087a8c10 +0x1a0:  fstpl  -0x78(%ebp)
087a8c13 +0x1a3:  call   0807d9b0 <_init+0x2a8>
087a8c18 +0x1a8:  fldl   -0x78(%ebp)
087a8c1b +0x1ab:  fstpl  (%esp)
087a8c1e +0x1ae:  fstpl  -0x78(%ebp)
087a8c21 +0x1b1:  call   0807e650 <_init+0xf48>
087a8c26 +0x1b6:  fldl   -0x65c200(%ebx)
087a8c2c +0x1bc:  fstpl  0x8(%esp)
087a8c30 +0x1c0:  fstpl  (%esp)
087a8c33 +0x1c3:  call   0807d9b0 <_init+0x2a8>
087a8c38 +0x1c8:  fldl   -0x78(%ebp)
087a8c3b +0x1cb:  fmull  -0x65c1f8(%ebx)
087a8c41 +0x1d1:  fnstcw -0x62(%ebp)
087a8c44 +0x1d4:  movzwl -0x62(%ebp),%eax
087a8c48 +0x1d8:  fmulp  %st,%st(1)
087a8c4a +0x1da:  mov    $0xc,%ah
087a8c4c +0x1dc:  mov    %ax,-0x64(%ebp)
087a8c50 +0x1e0:  fsubs  -0x65fc6c(%ebx)
087a8c56 +0x1e6:  fldcw  -0x64(%ebp)
087a8c59 +0x1e9:  fistpll -0x60(%ebp)
087a8c5c +0x1ec:  fldcw  -0x62(%ebp)
087a8c5f +0x1ef:  mov    -0x60(%ebp),%edx
087a8c62 +0x1f2:  add    %edx,%edx
087a8c64 +0x1f4:  jmp    087a8a9a <+0x2a>
087a8c69 +0x1f9:  nop
087a8c6a +0x1fa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::DH::GeneratePrivate @ 0x87a8a70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::GeneratePrivate(TaoCrypt::RandomNumberGenerator&, unsigned char*) */

void __thiscall
TaoCrypt::DH::GeneratePrivate(DH *this,RandomNumberGenerator *param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  Integer *pIVar3;
  undefined4 uVar4;
  uint uVar5;
  Integer *pIVar6;
  double dVar7;
  double dVar8;
  ulonglong local_64;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x87a8a7b;
  uVar1 = Integer::BitCount((Integer *)this);
  uVar5 = 0;
  if (4 < uVar1) {
    local_64 = (ulonglong)uVar1;
    dVar7 = pow((double)local_64,DAT_08d10990);
    dVar8 = log((double)local_64);
    dVar8 = pow(dVar8,DAT_08d10998);
    local_64._0_4_ = (int)(longlong)ROUND(dVar7 * DAT_08d109a0 * dVar8 - (double)DAT_08d0cf2c);
    uVar5 = (int)local_64 * 2;
  }
  Integer::Power2((Integer *)&local_5c,uVar5);
  Integer::Integer((Integer *)&local_3c,1);
  Integer::Minus((Integer *)&local_4c);
  iVar2 = Integer::Compare((Integer *)&local_4c,(Integer *)&local_5c);
  pIVar6 = (Integer *)&local_5c;
  if (iVar2 < 0) {
    pIVar6 = (Integer *)&local_4c;
  }
  pIVar3 = (Integer *)Integer::One();
  Integer::Integer((Integer *)&local_2c,param_1,pIVar3,pIVar6);
  memset(local_48,0,local_4c << 2);
  operator_delete__(local_48);
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38);
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58);
  uVar4 = Integer::ByteCount((Integer *)this);
  Integer::Encode((Integer *)&local_2c,param_2,uVar4);
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28);
  return;
}
```
