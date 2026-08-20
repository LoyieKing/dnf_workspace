# HMAC_RMD

`_ZN5yaSSL8HMAC_RMDC1EPKhj`

`yaSSL::HMAC_RMD::HMAC_RMD(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x08799740` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799740  _ZN5yaSSL8HMAC_RMDC1EPKhj
#           yaSSL::HMAC_RMD::HMAC_RMD(unsigned char const*, unsigned int)
# range [0x08799740, 0x08799889]
08799740 +0x000:  push   %ebp
08799741 +0x001:  mov    %esp,%ebp
08799743 +0x003:  push   %edi
08799744 +0x004:  push   %esi
08799745 +0x005:  push   %ebx
08799746 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879974b +0x00b:  add    $0xbd344d,%ebx
08799751 +0x011:  sub    $0x2c,%esp
08799754 +0x014:  mov    0x8(%ebp),%edx
08799757 +0x017:  mov    0x10(%ebp),%edi
0879975a +0x01a:  mov    -0x408(%ebx),%eax
08799760 +0x020:  add    $0x8,%eax
08799763 +0x023:  mov    %eax,(%edx)
08799765 +0x025:  mov    %edx,-0x20(%ebp)
08799768 +0x028:  movb   $0x0,0x4(%esp)
0879976d +0x02d:  movl   $0x114,(%esp)
08799774 +0x034:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799779 +0x039:  mov    %eax,%esi
0879977b +0x03b:  lea    0x80(%eax),%eax
08799781 +0x041:  mov    %eax,(%esi)
08799783 +0x043:  lea    0xc0(%esi),%eax
08799789 +0x049:  mov    %eax,0x4(%esi)
0879978c +0x04c:  lea    0x100(%esi),%eax
08799792 +0x052:  mov    %eax,0x8(%esi)
08799795 +0x055:  lea    0x10(%esi),%eax
08799798 +0x058:  mov    %eax,-0x1c(%ebp)
0879979b +0x05b:  mov    %eax,(%esp)
0879979e +0x05e:  movl   $0x40,0x8(%esp)
087997a6 +0x066:  movl   $0x5,0x4(%esp)
087997ae +0x06e:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
087997b3 +0x073:  mov    -0x5d0(%ebx),%eax
087997b9 +0x079:  add    $0x8,%eax
087997bc +0x07c:  mov    %eax,0x10(%esi)
087997bf +0x07f:  mov    -0x1c(%ebp),%eax
087997c2 +0x082:  mov    %eax,(%esp)
087997c5 +0x085:  call   087a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>  ; TaoCrypt::RIPEMD160::Init()
087997ca +0x08a:  mov    -0x1c(%ebp),%eax
087997cd +0x08d:  mov    %eax,(%esp)
087997d0 +0x090:  call   087a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>  ; TaoCrypt::RIPEMD160::Init()
087997d5 +0x095:  mov    -0x20(%ebp),%edx
087997d8 +0x098:  movb   $0x0,0xc(%esi)
087997dc +0x09c:  mov    %esi,0x4(%edx)
087997df +0x09f:  mov    -0x1c(%ebp),%edx
087997e2 +0x0a2:  mov    %edx,(%esp)
087997e5 +0x0a5:  call   087a8ce0 <_ZN8TaoCrypt9RIPEMD1604InitEv>  ; TaoCrypt::RIPEMD160::Init()
087997ea +0x0aa:  cmp    $0x40,%edi
087997ed +0x0ad:  movb   $0x0,0xc(%esi)
087997f1 +0x0b1:  ja     0879984e <+0x10e>
087997f3 +0x0b3:  mov    (%esi),%eax
087997f5 +0x0b5:  mov    0xc(%ebp),%edx
087997f8 +0x0b8:  mov    %edi,0x8(%esp)
087997fc +0x0bc:  mov    %eax,(%esp)
087997ff +0x0bf:  mov    %edx,0x4(%esp)
08799803 +0x0c3:  call   0807d8a0 <_init+0x198>
08799808 +0x0c8:  mov    $0x40,%eax
0879980d +0x0cd:  sub    %edi,%eax
0879980f +0x0cf:  add    (%esi),%edi
08799811 +0x0d1:  mov    %eax,0x8(%esp)
08799815 +0x0d5:  movl   $0x0,0x4(%esp)
0879981d +0x0dd:  mov    %edi,(%esp)
08799820 +0x0e0:  call   0807dcc0 <_init+0x5b8>
08799825 +0x0e5:  xor    %eax,%eax
08799827 +0x0e7:  nop
08799828 +0x0e8:  mov    (%esi),%edx
0879982a +0x0ea:  mov    0x4(%esi),%ecx
0879982d +0x0ed:  movzbl (%edx,%eax,1),%edx
08799831 +0x0f1:  xor    $0x5c,%edx
08799834 +0x0f4:  mov    %dl,(%ecx,%eax,1)
08799837 +0x0f7:  mov    (%esi),%edx
08799839 +0x0f9:  add    %eax,%edx
0879983b +0x0fb:  add    $0x1,%eax
0879983e +0x0fe:  xorb   $0x36,(%edx)
08799841 +0x101:  cmp    $0x40,%eax
08799844 +0x104:  jne    08799828 <+0xe8>
08799846 +0x106:  add    $0x2c,%esp
08799849 +0x109:  pop    %ebx
0879984a +0x10a:  pop    %esi
0879984b +0x10b:  pop    %edi
0879984c +0x10c:  pop    %ebp
0879984d +0x10d:  ret
0879984e +0x10e:  mov    0xc(%ebp),%eax
08799851 +0x111:  mov    -0x1c(%ebp),%edx
08799854 +0x114:  mov    %edi,0x8(%esp)
08799858 +0x118:  mov    $0x14,%edi
0879985d +0x11d:  mov    %eax,0x4(%esp)
08799861 +0x121:  mov    %edx,(%esp)
08799864 +0x124:  call   087ab3e0 <_ZN8TaoCrypt9RIPEMD1606UpdateEPKhj>  ; TaoCrypt::RIPEMD160::Update(unsigned char const*, unsigned int)
08799869 +0x129:  mov    (%esi),%eax
0879986b +0x12b:  mov    %eax,0x4(%esp)
0879986f +0x12f:  mov    -0x1c(%ebp),%eax
08799872 +0x132:  mov    %eax,(%esp)
08799875 +0x135:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
0879987a +0x13a:  mov    $0x2c,%eax
0879987f +0x13f:  jmp    0879980f <+0xcf>
08799881 +0x141:  nop
08799882 +0x142:  lea    0x0(%esi,%eiz,1),%esi
08799889 +0x149:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::HMAC_RMD @ 0x8799740

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::HMAC_RMD(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_RMD::HMAC_RMD(HMAC_RMD *this,uchar *param_1,uint param_2)

{
  HASHwithTransform *this_00;
  int *piVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c790 + 8;
  piVar1 = operator_new(0x114,in_stack_ffffffc8 & 0xffffff00);
  *piVar1 = (int)(piVar1 + 0x20);
  piVar1[1] = (int)(piVar1 + 0x30);
  piVar1[2] = (int)(piVar1 + 0x40);
  this_00 = (HASHwithTransform *)(piVar1 + 4);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,5,0x40);
  piVar1[4] = (int)(PTR_vtable_0936c5c8 + 8);
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  *(int **)(this + 4) = piVar1;
  TaoCrypt::RIPEMD160::Init((RIPEMD160 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  if (param_2 < 0x41) {
    memcpy((void *)*piVar1,param_1,param_2);
    __n = 0x40 - param_2;
    uVar4 = param_2;
  }
  else {
    uVar4 = 0x14;
    TaoCrypt::RIPEMD160::Update((RIPEMD160 *)this_00,param_1,param_2);
    TaoCrypt::HASHwithTransform::Final(this_00,(uchar *)*piVar1);
    __n = 0x2c;
  }
  memset((void *)(uVar4 + *piVar1),0,__n);
  iVar2 = 0;
  do {
    *(byte *)(piVar1[1] + iVar2) = *(byte *)(*piVar1 + iVar2) ^ 0x5c;
    pbVar3 = (byte *)(*piVar1 + iVar2);
    iVar2 = iVar2 + 1;
    *pbVar3 = *pbVar3 ^ 0x36;
  } while (iVar2 != 0x40);
  return;
}
```
