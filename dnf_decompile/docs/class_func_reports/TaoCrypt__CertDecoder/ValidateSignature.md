# ValidateSignature

`_ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE`

`TaoCrypt::CertDecoder::ValidateSignature(mySTL::list<TaoCrypt::Signer*>*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::CertDecoder` | `0x087563f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087563f0  _ZN8TaoCrypt11CertDecoder17ValidateSignatureEPN5mySTL4listIPNS_6SignerEEE
#           TaoCrypt::CertDecoder::ValidateSignature(mySTL::list<TaoCrypt::Signer*>*)
# range [0x087563f0, 0x087564dc]
087563f0 +0x00:  push   %ebp
087563f1 +0x01:  mov    %esp,%ebp
087563f3 +0x03:  push   %edi
087563f4 +0x04:  push   %esi
087563f5 +0x05:  push   %ebx
087563f6 +0x06:  sub    $0x5c,%esp
087563f9 +0x09:  mov    0xc(%ebp),%eax
087563fc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08756401 +0x11:  add    $0xc16797,%ebx
08756407 +0x17:  mov    (%eax),%eax
08756409 +0x19:  test   %eax,%eax
0875640b +0x1b:  je     087564d0 <+0xe0>
08756411 +0x21:  mov    0x8(%ebp),%edx
08756414 +0x24:  add    $0x38,%edx
08756417 +0x27:  mov    %edx,-0x3c(%ebp)
0875641a +0x2a:  jmp    0875642b <+0x3b>
0875641c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
08756420 +0x30:  mov    0x4(%eax),%eax
08756423 +0x33:  test   %eax,%eax
08756425 +0x35:  je     087564d0 <+0xe0>
0875642b +0x3b:  mov    0x8(%eax),%ecx
0875642e +0x3e:  mov    -0x3c(%ebp),%esi
08756431 +0x41:  mov    %ecx,%edi
08756433 +0x43:  mov    %ecx,-0x4c(%ebp)
08756436 +0x46:  add    $0x208,%edi
0875643c +0x4c:  mov    $0x14,%ecx
08756441 +0x51:  repz cmpsb %es:(%edi),%ds:(%esi)
08756443 +0x53:  jne    08756420 <+0x30>
08756445 +0x55:  mov    -0x4c(%ebp),%edx
08756448 +0x58:  xor    %eax,%eax
0875644a +0x5a:  mov    0x4(%edx),%ecx
0875644d +0x5d:  mov    (%edx),%esi
0875644f +0x5f:  test   %ecx,%ecx
08756451 +0x61:  mov    %ecx,-0x2c(%ebp)
08756454 +0x64:  je     08756463 <+0x73>
08756456 +0x66:  movb   $0x0,0x4(%esp)
0875645b +0x6b:  mov    %ecx,(%esp)
0875645e +0x6e:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08756463 +0x73:  mov    -0x2c(%ebp),%edx
08756466 +0x76:  mov    %esi,0x4(%esp)
0875646a +0x7a:  mov    %eax,-0x28(%ebp)
0875646d +0x7d:  mov    %eax,(%esp)
08756470 +0x80:  mov    %edx,0x8(%esp)
08756474 +0x84:  call   0807d8a0 <_init+0x198>
08756479 +0x89:  lea    -0x2c(%ebp),%eax
0875647c +0x8c:  mov    %eax,0x4(%esp)
08756480 +0x90:  mov    0x8(%ebp),%eax
08756483 +0x93:  movl   $0x0,-0x20(%ebp)
0875648a +0x9a:  movl   $0x0,-0x1c(%ebp)
08756491 +0xa1:  mov    %eax,(%esp)
08756494 +0xa4:  call   08755f50 <_ZN8TaoCrypt11CertDecoder16ConfirmSignatureERNS_6SourceE>  ; TaoCrypt::CertDecoder::ConfirmSignature(TaoCrypt::Source&)
08756499 +0xa9:  mov    -0x28(%ebp),%edi
0875649c +0xac:  movl   $0x0,0x4(%esp)
087564a4 +0xb4:  mov    %edi,(%esp)
087564a7 +0xb7:  mov    %eax,%esi
087564a9 +0xb9:  mov    -0x2c(%ebp),%eax
087564ac +0xbc:  mov    %eax,0x8(%esp)
087564b0 +0xc0:  call   0807dcc0 <_init+0x5b8>
087564b5 +0xc5:  mov    %edi,(%esp)
087564b8 +0xc8:  movb   $0x0,0x4(%esp)
087564bd +0xcd:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087564c2 +0xd2:  add    $0x5c,%esp
087564c5 +0xd5:  mov    %esi,%eax
087564c7 +0xd7:  pop    %ebx
087564c8 +0xd8:  pop    %esi
087564c9 +0xd9:  pop    %edi
087564ca +0xda:  pop    %ebp
087564cb +0xdb:  ret
087564cc +0xdc:  lea    0x0(%esi,%eiz,1),%esi
087564d0 +0xe0:  xor    %esi,%esi
087564d2 +0xe2:  add    $0x5c,%esp
087564d5 +0xe5:  mov    %esi,%eax
087564d7 +0xe7:  pop    %ebx
087564d8 +0xe8:  pop    %esi
087564d9 +0xe9:  pop    %edi
087564da +0xea:  pop    %ebp
087564db +0xeb:  ret
087564dc +0xec:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::CertDecoder::ValidateSignature @ 0x87563f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CertDecoder::ValidateSignature(mySTL::list<TaoCrypt::Signer*>*) */

undefined4 __thiscall TaoCrypt::CertDecoder::ValidateSignature(CertDecoder *this,list *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  CertDecoder *pCVar6;
  CertDecoder *pCVar7;
  bool bVar8;
  uint in_stack_ffffff98;
  uint uVar9;
  size_t local_30;
  void *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar3 = *(int *)param_1;
  if (iVar3 != 0) {
    do {
      puVar1 = *(undefined4 **)(iVar3 + 8);
      bVar8 = (CertDecoder *)(puVar1 + 0x82) == (CertDecoder *)0x0;
      iVar5 = 0x14;
      pCVar6 = this + 0x38;
      pCVar7 = (CertDecoder *)(puVar1 + 0x82);
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pCVar6 == *pCVar7;
        pCVar6 = pCVar6 + 1;
        pCVar7 = pCVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        local_2c = (void *)0x0;
        local_30 = puVar1[1];
        pvVar2 = (void *)*puVar1;
        if (local_30 != 0) {
          local_2c = operator_new__(local_30,in_stack_ffffff98 & 0xffffff00);
        }
        memcpy(local_2c,pvVar2,local_30);
        local_24 = 0;
        local_20 = 0;
        uVar4 = ConfirmSignature(this,(Source *)&local_30);
        pvVar2 = local_2c;
        uVar9 = 0;
        memset(local_2c,0,local_30);
        operator_delete__(pvVar2,uVar9 & 0xffffff00);
        return uVar4;
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  return 0;
}
```
