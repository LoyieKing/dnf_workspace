# HMAC_MD5

`_ZN5yaSSL8HMAC_MD5C1EPKhj`

`yaSSL::HMAC_MD5::HMAC_MD5(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x08799ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08799ce0  _ZN5yaSSL8HMAC_MD5C1EPKhj
#           yaSSL::HMAC_MD5::HMAC_MD5(unsigned char const*, unsigned int)
# range [0x08799ce0, 0x08799e29]
08799ce0 +0x000:  push   %ebp
08799ce1 +0x001:  mov    %esp,%ebp
08799ce3 +0x003:  push   %edi
08799ce4 +0x004:  push   %esi
08799ce5 +0x005:  push   %ebx
08799ce6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08799ceb +0x00b:  add    $0xbd2ead,%ebx
08799cf1 +0x011:  sub    $0x2c,%esp
08799cf4 +0x014:  mov    0x8(%ebp),%edx
08799cf7 +0x017:  mov    0x10(%ebp),%edi
08799cfa +0x01a:  mov    -0x3c8(%ebx),%eax
08799d00 +0x020:  add    $0x8,%eax
08799d03 +0x023:  mov    %eax,(%edx)
08799d05 +0x025:  mov    %edx,-0x20(%ebp)
08799d08 +0x028:  movb   $0x0,0x4(%esp)
08799d0d +0x02d:  movl   $0x110,(%esp)
08799d14 +0x034:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08799d19 +0x039:  mov    %eax,%esi
08799d1b +0x03b:  lea    0x80(%eax),%eax
08799d21 +0x041:  mov    %eax,(%esi)
08799d23 +0x043:  lea    0xc0(%esi),%eax
08799d29 +0x049:  mov    %eax,0x4(%esi)
08799d2c +0x04c:  lea    0x100(%esi),%eax
08799d32 +0x052:  mov    %eax,0x8(%esi)
08799d35 +0x055:  lea    0x10(%esi),%eax
08799d38 +0x058:  mov    %eax,-0x1c(%ebp)
08799d3b +0x05b:  mov    %eax,(%esp)
08799d3e +0x05e:  movl   $0x40,0x8(%esp)
08799d46 +0x066:  movl   $0x4,0x4(%esp)
08799d4e +0x06e:  call   08758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>  ; TaoCrypt::HASHwithTransform::HASHwithTransform(unsigned int, unsigned int)
08799d53 +0x073:  mov    -0x340(%ebx),%eax
08799d59 +0x079:  add    $0x8,%eax
08799d5c +0x07c:  mov    %eax,0x10(%esi)
08799d5f +0x07f:  mov    -0x1c(%ebp),%eax
08799d62 +0x082:  mov    %eax,(%esp)
08799d65 +0x085:  call   087661d0 <_ZN8TaoCrypt3MD54InitEv>  ; TaoCrypt::MD5::Init()
08799d6a +0x08a:  mov    -0x1c(%ebp),%eax
08799d6d +0x08d:  mov    %eax,(%esp)
08799d70 +0x090:  call   087661d0 <_ZN8TaoCrypt3MD54InitEv>  ; TaoCrypt::MD5::Init()
08799d75 +0x095:  mov    -0x20(%ebp),%edx
08799d78 +0x098:  movb   $0x0,0xc(%esi)
08799d7c +0x09c:  mov    %esi,0x4(%edx)
08799d7f +0x09f:  mov    -0x1c(%ebp),%edx
08799d82 +0x0a2:  mov    %edx,(%esp)
08799d85 +0x0a5:  call   087661d0 <_ZN8TaoCrypt3MD54InitEv>  ; TaoCrypt::MD5::Init()
08799d8a +0x0aa:  cmp    $0x40,%edi
08799d8d +0x0ad:  movb   $0x0,0xc(%esi)
08799d91 +0x0b1:  ja     08799dee <+0x10e>
08799d93 +0x0b3:  mov    (%esi),%eax
08799d95 +0x0b5:  mov    0xc(%ebp),%edx
08799d98 +0x0b8:  mov    %edi,0x8(%esp)
08799d9c +0x0bc:  mov    %eax,(%esp)
08799d9f +0x0bf:  mov    %edx,0x4(%esp)
08799da3 +0x0c3:  call   0807d8a0 <_init+0x198>
08799da8 +0x0c8:  mov    $0x40,%eax
08799dad +0x0cd:  sub    %edi,%eax
08799daf +0x0cf:  add    (%esi),%edi
08799db1 +0x0d1:  mov    %eax,0x8(%esp)
08799db5 +0x0d5:  movl   $0x0,0x4(%esp)
08799dbd +0x0dd:  mov    %edi,(%esp)
08799dc0 +0x0e0:  call   0807dcc0 <_init+0x5b8>
08799dc5 +0x0e5:  xor    %eax,%eax
08799dc7 +0x0e7:  nop
08799dc8 +0x0e8:  mov    (%esi),%edx
08799dca +0x0ea:  mov    0x4(%esi),%ecx
08799dcd +0x0ed:  movzbl (%edx,%eax,1),%edx
08799dd1 +0x0f1:  xor    $0x5c,%edx
08799dd4 +0x0f4:  mov    %dl,(%ecx,%eax,1)
08799dd7 +0x0f7:  mov    (%esi),%edx
08799dd9 +0x0f9:  add    %eax,%edx
08799ddb +0x0fb:  add    $0x1,%eax
08799dde +0x0fe:  xorb   $0x36,(%edx)
08799de1 +0x101:  cmp    $0x40,%eax
08799de4 +0x104:  jne    08799dc8 <+0xe8>
08799de6 +0x106:  add    $0x2c,%esp
08799de9 +0x109:  pop    %ebx
08799dea +0x10a:  pop    %esi
08799deb +0x10b:  pop    %edi
08799dec +0x10c:  pop    %ebp
08799ded +0x10d:  ret
08799dee +0x10e:  mov    0xc(%ebp),%eax
08799df1 +0x111:  mov    -0x1c(%ebp),%edx
08799df4 +0x114:  mov    %edi,0x8(%esp)
08799df8 +0x118:  mov    $0x10,%edi
08799dfd +0x11d:  mov    %eax,0x4(%esp)
08799e01 +0x121:  mov    %edx,(%esp)
08799e04 +0x124:  call   08767100 <_ZN8TaoCrypt3MD56UpdateEPKhj>  ; TaoCrypt::MD5::Update(unsigned char const*, unsigned int)
08799e09 +0x129:  mov    (%esi),%eax
08799e0b +0x12b:  mov    %eax,0x4(%esp)
08799e0f +0x12f:  mov    -0x1c(%ebp),%eax
08799e12 +0x132:  mov    %eax,(%esp)
08799e15 +0x135:  call   08758d90 <_ZN8TaoCrypt17HASHwithTransform5FinalEPh>  ; TaoCrypt::HASHwithTransform::Final(unsigned char*)
08799e1a +0x13a:  mov    $0x30,%eax
08799e1f +0x13f:  jmp    08799daf <+0xcf>
08799e21 +0x141:  nop
08799e22 +0x142:  lea    0x0(%esi,%eiz,1),%esi
08799e29 +0x149:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::HMAC_MD5 @ 0x8799ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::HMAC_MD5(unsigned char const*, unsigned int) */

void __thiscall yaSSL::HMAC_MD5::HMAC_MD5(HMAC_MD5 *this,uchar *param_1,uint param_2)

{
  HASHwithTransform *this_00;
  int *piVar1;
  size_t __n;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c7d0 + 8;
  piVar1 = operator_new(0x110,in_stack_ffffffc8 & 0xffffff00);
  *piVar1 = (int)(piVar1 + 0x20);
  piVar1[1] = (int)(piVar1 + 0x30);
  piVar1[2] = (int)(piVar1 + 0x40);
  this_00 = (HASHwithTransform *)(piVar1 + 4);
  TaoCrypt::HASHwithTransform::HASHwithTransform(this_00,4,0x40);
  piVar1[4] = (int)(PTR_vtable_0936c858 + 8);
  TaoCrypt::MD5::Init((MD5 *)this_00);
  TaoCrypt::MD5::Init((MD5 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  *(int **)(this + 4) = piVar1;
  TaoCrypt::MD5::Init((MD5 *)this_00);
  *(undefined1 *)(piVar1 + 3) = 0;
  if (param_2 < 0x41) {
    memcpy((void *)*piVar1,param_1,param_2);
    __n = 0x40 - param_2;
    uVar4 = param_2;
  }
  else {
    uVar4 = 0x10;
    TaoCrypt::MD5::Update((MD5 *)this_00,param_1,param_2);
    TaoCrypt::HASHwithTransform::Final(this_00,(uchar *)*piVar1);
    __n = 0x30;
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
