# GenerateKeyPair

`_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_`

`TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::DH` | `0x087a8c70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a8c70  _ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_
#           TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)
# range [0x087a8c70, 0x087a8ccf]
087a8c70 +0x00:  push   %ebp
087a8c71 +0x01:  mov    %esp,%ebp
087a8c73 +0x03:  sub    $0x28,%esp
087a8c76 +0x06:  mov    %ebx,-0xc(%ebp)
087a8c79 +0x09:  mov    0xc(%ebp),%eax
087a8c7c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087a8c81 +0x11:  add    $0xbc3f17,%ebx
087a8c87 +0x17:  mov    %esi,-0x8(%ebp)
087a8c8a +0x1a:  mov    0x8(%ebp),%esi
087a8c8d +0x1d:  mov    %edi,-0x4(%ebp)
087a8c90 +0x20:  mov    0x10(%ebp),%edi
087a8c93 +0x23:  mov    %eax,0x4(%esp)
087a8c97 +0x27:  mov    %esi,(%esp)
087a8c9a +0x2a:  mov    %edi,0x8(%esp)
087a8c9e +0x2e:  call   087a8a70 <_ZN8TaoCrypt2DH15GeneratePrivateERNS_21RandomNumberGeneratorEPh>  ; TaoCrypt::DH::GeneratePrivate(TaoCrypt::RandomNumberGenerator&, unsigned char*)
087a8ca3 +0x33:  mov    0x14(%ebp),%eax
087a8ca6 +0x36:  mov    %edi,0x4(%esp)
087a8caa +0x3a:  mov    %esi,(%esp)
087a8cad +0x3d:  mov    %eax,0x8(%esp)
087a8cb1 +0x41:  call   087a8990 <_ZN8TaoCrypt2DH14GeneratePublicEPKhPh>  ; TaoCrypt::DH::GeneratePublic(unsigned char const*, unsigned char*)
087a8cb6 +0x46:  mov    -0xc(%ebp),%ebx
087a8cb9 +0x49:  mov    -0x8(%ebp),%esi
087a8cbc +0x4c:  mov    -0x4(%ebp),%edi
087a8cbf +0x4f:  mov    %ebp,%esp
087a8cc1 +0x51:  pop    %ebp
087a8cc2 +0x52:  ret
087a8cc3 +0x53:  nop
087a8cc4 +0x54:  nop
087a8cc5 +0x55:  nop
087a8cc6 +0x56:  nop
087a8cc7 +0x57:  nop
087a8cc8 +0x58:  nop
087a8cc9 +0x59:  nop
087a8cca +0x5a:  nop
087a8ccb +0x5b:  nop
087a8ccc +0x5c:  nop
087a8ccd +0x5d:  nop
087a8cce +0x5e:  nop
087a8ccf +0x5f:  nop
```

## 反编译 C

```c
// TaoCrypt::DH::GenerateKeyPair @ 0x87a8c70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)
    */

void __thiscall
TaoCrypt::DH::GenerateKeyPair(DH *this,RandomNumberGenerator *param_1,uchar *param_2,uchar *param_3)

{
  GeneratePrivate(this,param_1,param_2);
  GeneratePublic(this,param_2,param_3);
  return;
}
```
