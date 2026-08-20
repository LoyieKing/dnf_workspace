# Signature_Encoder

`_ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE`

`TaoCrypt::Signature_Encoder::Signature_Encoder(unsigned char const*, unsigned int, TaoCrypt::HashType, TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Signature_Encoder` | `0x087552e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087552e0  _ZN8TaoCrypt17Signature_EncoderC1EPKhjNS_8HashTypeERNS_6SourceE
#           TaoCrypt::Signature_Encoder::Signature_Encoder(unsigned char const*, unsigned int, TaoCrypt::HashType, TaoCrypt::Source&)
# range [0x087552e0, 0x0875549c]
087552e0 +0x000:  push   %ebp
087552e1 +0x001:  mov    %esp,%ebp
087552e3 +0x003:  push   %edi
087552e4 +0x004:  push   %esi
087552e5 +0x005:  push   %ebx
087552e6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
087552eb +0x00b:  add    $0xc178ad,%ebx
087552f1 +0x011:  sub    $0x7c,%esp
087552f4 +0x014:  mov    0x8(%ebp),%edx
087552f7 +0x017:  mov    0x18(%ebp),%esi
087552fa +0x01a:  movl   $0x0,0x4(%edx)
08755301 +0x021:  mov    %edx,-0x68(%ebp)
08755304 +0x024:  mov    -0x2a4(%ebx),%eax
0875530a +0x02a:  add    $0x8,%eax
0875530d +0x02d:  mov    %eax,(%edx)
0875530f +0x02f:  lea    -0x46(%ebp),%eax
08755312 +0x032:  mov    %eax,-0x58(%ebp)
08755315 +0x035:  mov    %eax,0xc(%esp)
08755319 +0x039:  mov    0x10(%ebp),%eax
0875531c +0x03c:  mov    %edx,(%esp)
0875531f +0x03f:  mov    %eax,0x8(%esp)
08755323 +0x043:  mov    0xc(%ebp),%eax
08755326 +0x046:  mov    %eax,0x4(%esp)
0875532a +0x04a:  call   08753c50 <_ZN8TaoCrypt17Signature_Encoder9SetDigestEPKhjPh>  ; TaoCrypt::Signature_Encoder::SetDigest(unsigned char const*, unsigned int, unsigned char*)
0875532f +0x04f:  mov    -0x68(%ebp),%edx
08755332 +0x052:  lea    -0x2d(%ebp),%ecx
08755335 +0x055:  mov    %ecx,-0x5c(%ebp)
08755338 +0x058:  mov    %ecx,0x8(%esp)
0875533c +0x05c:  mov    %edx,(%esp)
0875533f +0x05f:  mov    %eax,%edi
08755341 +0x061:  mov    0x14(%ebp),%eax
08755344 +0x064:  mov    %eax,0x4(%esp)
08755348 +0x068:  call   08754700 <_ZN8TaoCrypt11DER_Encoder9SetAlgoIDENS_8HashTypeEPh>  ; TaoCrypt::DER_Encoder::SetAlgoID(TaoCrypt::HashType, unsigned char*)
0875534d +0x06d:  mov    %eax,%ecx
0875534f +0x06f:  add    %edi,%ecx
08755351 +0x071:  mov    %eax,-0x4c(%ebp)
08755354 +0x074:  lea    -0x1d(%ebp),%eax
08755357 +0x077:  mov    %ecx,(%esp)
0875535a +0x07a:  mov    %ecx,-0x6c(%ebp)
0875535d +0x07d:  mov    %eax,-0x54(%ebp)
08755360 +0x080:  mov    %eax,0x4(%esp)
08755364 +0x084:  call   08754570 <_ZN8TaoCrypt11SetSequenceEjPh>  ; TaoCrypt::SetSequence(unsigned int, unsigned char*)
08755369 +0x089:  mov    -0x6c(%ebp),%ecx
0875536c +0x08c:  mov    %eax,%edx
0875536e +0x08e:  add    %eax,%ecx
08755370 +0x090:  mov    (%esi),%eax
08755372 +0x092:  cmp    %eax,%ecx
08755374 +0x094:  mov    %eax,-0x50(%ebp)
08755377 +0x097:  ja     087553e8 <+0x108>
08755379 +0x099:  mov    0x4(%esi),%eax
0875537c +0x09c:  mov    -0x54(%ebp),%ecx
0875537f +0x09f:  add    0xc(%esi),%eax
08755382 +0x0a2:  mov    %edx,-0x68(%ebp)
08755385 +0x0a5:  mov    %edx,0x8(%esp)
08755389 +0x0a9:  mov    %ecx,0x4(%esp)
0875538d +0x0ad:  mov    %eax,(%esp)
08755390 +0x0b0:  call   0807d8a0 <_init+0x198>
08755395 +0x0b5:  mov    -0x68(%ebp),%edx
08755398 +0x0b8:  add    0xc(%esi),%edx
0875539b +0x0bb:  mov    -0x5c(%ebp),%ecx
0875539e +0x0be:  mov    -0x4c(%ebp),%eax
087553a1 +0x0c1:  mov    %edx,0xc(%esi)
087553a4 +0x0c4:  add    0x4(%esi),%edx
087553a7 +0x0c7:  mov    %ecx,0x4(%esp)
087553ab +0x0cb:  mov    %eax,0x8(%esp)
087553af +0x0cf:  mov    %edx,(%esp)
087553b2 +0x0d2:  call   0807d8a0 <_init+0x198>
087553b7 +0x0d7:  mov    -0x4c(%ebp),%eax
087553ba +0x0da:  add    0xc(%esi),%eax
087553bd +0x0dd:  mov    -0x58(%ebp),%edx
087553c0 +0x0e0:  mov    %eax,0xc(%esi)
087553c3 +0x0e3:  add    0x4(%esi),%eax
087553c6 +0x0e6:  mov    %edi,0x8(%esp)
087553ca +0x0ea:  mov    %edx,0x4(%esp)
087553ce +0x0ee:  mov    %eax,(%esp)
087553d1 +0x0f1:  call   0807d8a0 <_init+0x198>
087553d6 +0x0f6:  add    %edi,0xc(%esi)
087553d9 +0x0f9:  add    $0x7c,%esp
087553dc +0x0fc:  pop    %ebx
087553dd +0x0fd:  pop    %esi
087553de +0x0fe:  pop    %edi
087553df +0x0ff:  pop    %ebp
087553e0 +0x100:  ret
087553e1 +0x101:  lea    0x0(%esi,%eiz,1),%esi
087553e8 +0x108:  mov    0x4(%esi),%eax
087553eb +0x10b:  movl   $0x0,-0x60(%ebp)
087553f2 +0x112:  mov    %eax,-0x64(%ebp)
087553f5 +0x115:  xor    %eax,%eax
087553f7 +0x117:  test   %ecx,%ecx
087553f9 +0x119:  jne    08755478 <+0x198>
087553fb +0x11b:  mov    %eax,0x8(%esp)
087553ff +0x11f:  mov    -0x64(%ebp),%eax
08755402 +0x122:  mov    %edx,-0x68(%ebp)
08755405 +0x125:  mov    %ecx,-0x6c(%ebp)
08755408 +0x128:  mov    %eax,0x4(%esp)
0875540c +0x12c:  mov    -0x60(%ebp),%eax
0875540f +0x12f:  mov    %eax,(%esp)
08755412 +0x132:  call   0807d8a0 <_init+0x198>
08755417 +0x137:  mov    -0x50(%ebp),%eax
0875541a +0x13a:  movl   $0x0,0x4(%esp)
08755422 +0x142:  mov    %eax,0x8(%esp)
08755426 +0x146:  mov    -0x64(%ebp),%eax
08755429 +0x149:  mov    %eax,(%esp)
0875542c +0x14c:  call   0807dcc0 <_init+0x5b8>
08755431 +0x151:  mov    -0x64(%ebp),%eax
08755434 +0x154:  movb   $0x0,0x4(%esp)
08755439 +0x159:  mov    %eax,(%esp)
0875543c +0x15c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08755441 +0x161:  mov    -0x60(%ebp),%eax
08755444 +0x164:  mov    -0x6c(%ebp),%ecx
08755447 +0x167:  mov    %eax,0x4(%esi)
0875544a +0x16a:  mov    %ecx,%eax
0875544c +0x16c:  sub    (%esi),%eax
0875544e +0x16e:  mov    %eax,0x8(%esp)
08755452 +0x172:  mov    (%esi),%eax
08755454 +0x174:  add    -0x60(%ebp),%eax
08755457 +0x177:  movl   $0x0,0x4(%esp)
0875545f +0x17f:  mov    %eax,(%esp)
08755462 +0x182:  call   0807dcc0 <_init+0x5b8>
08755467 +0x187:  mov    -0x6c(%ebp),%ecx
0875546a +0x18a:  mov    -0x68(%ebp),%edx
0875546d +0x18d:  mov    %ecx,(%esi)
0875546f +0x18f:  jmp    08755379 <+0x99>
08755474 +0x194:  lea    0x0(%esi,%eiz,1),%esi
08755478 +0x198:  mov    %ecx,(%esp)
0875547b +0x19b:  mov    %edx,-0x68(%ebp)
0875547e +0x19e:  mov    %ecx,-0x6c(%ebp)
08755481 +0x1a1:  movb   $0x0,0x4(%esp)
08755486 +0x1a6:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875548b +0x1ab:  mov    -0x6c(%ebp),%ecx
0875548e +0x1ae:  mov    -0x68(%ebp),%edx
08755491 +0x1b1:  mov    %eax,-0x60(%ebp)
08755494 +0x1b4:  mov    -0x50(%ebp),%eax
08755497 +0x1b7:  jmp    087553fb <+0x11b>
0875549c +0x1bc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Signature_Encoder::Signature_Encoder @ 0x87552e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Signature_Encoder::Signature_Encoder(unsigned char const*, unsigned int,
   TaoCrypt::HashType, TaoCrypt::Source&) */

void __thiscall
TaoCrypt::Signature_Encoder::Signature_Encoder
          (Signature_Encoder *this,uchar *param_1,uint param_2,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  void *__src;
  size_t __n;
  size_t __n_00;
  size_t __n_01;
  size_t __n_02;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  void *local_64;
  uchar local_4a [25];
  undefined1 local_31 [16];
  uchar local_21 [13];
  undefined4 uStack_14;
  
  uStack_14 = 0x87552eb;
  *(undefined4 *)(this + 4) = 0;
  *(undefined **)this = PTR_vtable_0936c8f4 + 8;
  __n = SetDigest(this,param_1,param_2,local_4a);
  __n_00 = DER_Encoder::SetAlgoID((DER_Encoder *)this,param_4,local_31);
  puVar3 = local_21;
  __n_01 = SetSequence(__n_00 + __n,local_21);
  uVar2 = __n_00 + __n + __n_01;
  uVar1 = *param_5;
  if (uVar1 < uVar2) {
    __src = (void *)param_5[1];
    local_64 = (void *)0x0;
    __n_02 = 0;
    if (uVar2 != 0) {
      local_64 = operator_new__(uVar2,(uint)puVar3 & 0xffffff00);
      __n_02 = uVar1;
    }
    memcpy(local_64,__src,__n_02);
    uVar4 = 0;
    memset(__src,0,uVar1);
    operator_delete__(__src,uVar4 & 0xffffff00);
    param_5[1] = (uint)local_64;
    memset((void *)(*param_5 + (int)local_64),0,uVar2 - *param_5);
    *param_5 = uVar2;
  }
  memcpy((void *)(param_5[1] + param_5[3]),local_21,__n_01);
  uVar1 = param_5[3];
  param_5[3] = __n_01 + uVar1;
  memcpy((void *)(__n_01 + uVar1 + param_5[1]),local_31,__n_00);
  uVar1 = param_5[3];
  param_5[3] = __n_00 + uVar1;
  memcpy((void *)(__n_00 + uVar1 + param_5[1]),local_4a,__n);
  param_5[3] = param_5[3] + __n;
  return;
}
```
