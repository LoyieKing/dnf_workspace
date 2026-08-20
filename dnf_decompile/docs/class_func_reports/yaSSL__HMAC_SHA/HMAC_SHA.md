# HMAC_SHA

`_ZN5yaSSL8HMAC_SHAC1EPKhj`

`yaSSL::HMAC_SHA::HMAC_SHA(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x08799a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799a10  _ZN5yaSSL8HMAC_SHAC1EPKhj
#           yaSSL::HMAC_SHA::HMAC_SHA(unsigned char const*, unsigned int)
# range [0x08799a10, 0x08799b59]
08799a10 +0x000:  push   %ebp
08799a11 +0x001:  mov    %esp,%ebp
08799a13 +0x003:  push   %edi
08799a14 +0x004:  push   %esi
08799a15 +0x005:  push   %ebx
08799a16 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08799a1b +0x00b:  add    $0xbd317d,%ebx
08799a21 +0x011:  sub    $0x2c,%esp
08799a24 +0x014:  mov    0x8(%ebp),%edx
08799a27 +0x017:  mov    0x10(%ebp),%edi
08799a2a +0x01a:  mov    -0x28c(%ebx),%eax
08799a30 +0x020:  add    $0x8,%eax
08799a33 +0x023:  mov    %eax,(%edx)
08799a35 +0x025:  mov    %edx,-0x20(%ebp)
08799a38 +0x028:  movb   $0x0,0x4(%esp)
08799a3d +0x02d:  movl   $0x114,(%esp)
08799a44 +0x034:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799a49 +0x039:  mov    %eax,%esi
08799a4b +0x03b:  lea    0x80(%eax),%eax
08799a51 +0x041:  mov    %eax,(%esi)
08799a53 +0x043:  lea    0xc0(%esi),%eax
08799a59 +0x049:  mov    %eax,0x4(%esi)
08799a5c +0x04c:  lea    0x100(%esi),%eax
08799a62 +0x052:  mov    %eax,0x8(%esi)
08799a65 +0x055:  lea    0x10(%esi),%eax
08799a68 +0x058:  mov    %eax,-0x1c(%ebp)
08799a6b +0x05b:  mov    %eax,(%esp)
08799a6e +0x05e:  movl   $0x40,0x8(%esp)
08799a76 +0x066:  movl   $0x5,0x4(%esp)
08799a7e +0x06e:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08799a83 +0x073:  mov    -0xc(%ebx),%eax
08799a89 +0x079:  add    $0x8,%eax
08799a8c +0x07c:  mov    %eax,0x10(%esi)
08799a8f +0x07f:  mov    -0x1c(%ebp),%eax
08799a92 +0x082:  mov    %eax,(%esp)
08799a95 +0x085:  call   087683b0 <_ZN8TaoCrypt3SHA4InitEv>  ; TaoCrypt::SHA::Init()
08799a9a +0x08a:  mov    -0x1c(%ebp),%eax
08799a9d +0x08d:  mov    %eax,(%esp)
08799aa0 +0x090:  call   087683b0 <_ZN8TaoCrypt3SHA4InitEv>  ; TaoCrypt::SHA::Init()
08799aa5 +0x095:  mov    -0x20(%ebp),%edx
08799aa8 +0x098:  movb   $0x0,0xc(%esi)
08799aac +0x09c:  mov    %esi,0x4(%edx)
08799aaf +0x09f:  mov    -0x1c(%ebp),%edx
08799ab2 +0x0a2:  mov    %edx,(%esp)
08799ab5 +0x0a5:  call   087683b0 <_ZN8TaoCrypt3SHA4InitEv>  ; TaoCrypt::SHA::Init()
08799aba +0x0aa:  cmp    $0x40,%edi
08799abd +0x0ad:  movb   $0x0,0xc(%esi)
08799ac1 +0x0b1:  ja     08799b1e <+0x10e>
08799ac3 +0x0b3:  mov    (%esi),%eax
08799ac5 +0x0b5:  mov    0xc(%ebp),%edx
08799ac8 +0x0b8:  mov    %edi,0x8(%esp)
08799acc +0x0bc:  mov    %eax,(%esp)
08799acf +0x0bf:  mov    %edx,0x4(%esp)
08799ad3 +0x0c3:  call   0807d8a0 <_init+0x198>
08799ad8 +0x0c8:  mov    $0x40,%eax
08799add +0x0cd:  sub    %edi,%eax
08799adf +0x0cf:  add    (%esi),%edi
08799ae1 +0x0d1:  mov    %eax,0x8(%esp)
08799ae5 +0x0d5:  movl   $0x0,0x4(%esp)
08799aed +0x0dd:  mov    %edi,(%esp)
08799af0 +0x0e0:  call   0807dcc0 <_init+0x5b8>
08799af5 +0x0e5:  xor    %eax,%eax
08799af7 +0x0e7:  nop
08799af8 +0x0e8:  mov    (%esi),%edx
08799afa +0x0ea:  mov    0x4(%esi),%ecx
08799afd +0x0ed:  movzbl (%edx,%eax,1),%edx
08799b01 +0x0f1:  xor    $0x5c,%edx
08799b04 +0x0f4:  mov    %dl,(%ecx,%eax,1)
08799b07 +0x0f7:  mov    (%esi),%edx
08799b09 +0x0f9:  add    %eax,%edx
08799b0b +0x0fb:  add    $0x1,%eax
08799b0e +0x0fe:  xorb   $0x36,(%edx)
08799b11 +0x101:  cmp    $0x40,%eax
08799b14 +0x104:  jne    08799af8 <+0xe8>
08799b16 +0x106:  add    $0x2c,%esp
08799b19 +0x109:  pop    %ebx
08799b1a +0x10a:  pop    %esi
08799b1b +0x10b:  pop    %edi
08799b1c +0x10c:  pop    %ebp
08799b1d +0x10d:  ret
08799b1e +0x10e:  mov    0xc(%ebp),%eax
08799b21 +0x111:  mov    -0x1c(%ebp),%edx
08799b24 +0x114:  mov    %edi,0x8(%esp)
08799b28 +0x118:  mov    $0x14,%edi
08799b2d +0x11d:  mov    %eax,0x4(%esp)
08799b31 +0x121:  mov    %edx,(%esp)
08799b34 +0x124:  call   0876fc60 <_ZN8TaoCrypt3SHA6UpdateEPKhj>  ; TaoCrypt::SHA::Update(unsigned char const*, unsigned int)
08799b39 +0x129:  mov    (%esi),%eax
08799b3b +0x12b:  mov    %eax,0x4(%esp)
08799b3f +0x12f:  mov    -0x1c(%ebp),%eax
08799b42 +0x132:  mov    %eax,(%esp)
08799b45 +0x135:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799b4a +0x13a:  mov    $0x2c,%eax
08799b4f +0x13f:  jmp    08799adf <+0xcf>
08799b51 +0x141:  nop
08799b52 +0x142:  lea    0x0(%esi,%eiz,1),%esi
08799b59 +0x149:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::HMAC_SHA @ 0x8799a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::HMAC_SHA(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_SHA::HMAC_SHA(HMAC_SHA *this,uchar *param_1,uint param_2)

{
  HASHwithTransform *this_00;
  int *piVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c90c + 8;
  piVar1 = operator_new(0x114,in_stack_ffffffc8 & 0xffffff00);
  *piVar1 = (int)(piVar1 + 0x20);
  piVar1[1] = (int)(piVar1 + 0x30);
  piVar1[2] = (int)(piVar1 + 0x40);
  this_00 = (HASHwithTransform *)(piVar1 + 4);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,5,0x40);
  piVar1[4] = (int)(PTR_vtable_0936cb8c + 8);
  TaoCrypt::SHA::Init((SHA *)this_00);
  TaoCrypt::SHA::Init((SHA *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  *(int **)(this + 4) = piVar1;
  TaoCrypt::SHA::Init((SHA *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  if (param_2 < 0x41) {
    memcpy((void *)*piVar1,param_1,param_2);
    __n = 0x40 - param_2;
    uVar4 = param_2;
  }
  else {
    uVar4 = 0x14;
    TaoCrypt::SHA::Update((SHA *)this_00,param_1,param_2);
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
