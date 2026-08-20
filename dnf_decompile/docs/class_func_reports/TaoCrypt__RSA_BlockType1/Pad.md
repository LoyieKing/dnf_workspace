# Pad

`_ZNK8TaoCrypt14RSA_BlockType13PadEPKhjPhjRNS_21RandomNumberGeneratorE`

`TaoCrypt::RSA_BlockType1::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int, TaoCrypt::RandomNumberGenerator&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_BlockType1` | `0x08767ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767ad0  _ZNK8TaoCrypt14RSA_BlockType13PadEPKhjPhjRNS_21RandomNumberGeneratorE
#           TaoCrypt::RSA_BlockType1::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int, TaoCrypt::RandomNumberGenerator&) const
# range [0x08767ad0, 0x08767b4c]
08767ad0 +0x00:  push   %ebp
08767ad1 +0x01:  mov    %esp,%ebp
08767ad3 +0x03:  sub    $0x28,%esp
08767ad6 +0x06:  mov    %edi,-0x4(%ebp)
08767ad9 +0x09:  mov    0x18(%ebp),%edi
08767adc +0x0c:  mov    %ebx,-0xc(%ebp)
08767adf +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08767ae4 +0x14:  add    $0xc050b4,%ebx
08767aea +0x1a:  mov    %esi,-0x8(%ebp)
08767aed +0x1d:  mov    0x14(%ebp),%esi
08767af0 +0x20:  test   $0x7,%edi
08767af6 +0x26:  je     08767afe <+0x2e>
08767af8 +0x28:  movb   $0x0,(%esi)
08767afb +0x2b:  add    $0x1,%esi
08767afe +0x2e:  movb   $0x1,(%esi)
08767b01 +0x31:  shr    $0x3,%edi
08767b04 +0x34:  sub    0x10(%ebp),%edi
08767b07 +0x37:  lea    0x1(%esi),%eax
08767b0a +0x3a:  movl   $0xff,0x4(%esp)
08767b12 +0x42:  lea    -0x2(%edi),%edx
08767b15 +0x45:  mov    %edx,0x8(%esp)
08767b19 +0x49:  mov    %eax,(%esp)
08767b1c +0x4c:  call   0807dcc0 <_init+0x5b8>
08767b21 +0x51:  movb   $0x0,-0x1(%esi,%edi,1)
08767b26 +0x56:  mov    0x10(%ebp),%eax
08767b29 +0x59:  add    %edi,%esi
08767b2b +0x5b:  mov    %esi,(%esp)
08767b2e +0x5e:  mov    %eax,0x8(%esp)
08767b32 +0x62:  mov    0xc(%ebp),%eax
08767b35 +0x65:  mov    %eax,0x4(%esp)
08767b39 +0x69:  call   0807d8a0 <_init+0x198>
08767b3e +0x6e:  mov    -0xc(%ebp),%ebx
08767b41 +0x71:  mov    -0x8(%ebp),%esi
08767b44 +0x74:  mov    -0x4(%ebp),%edi
08767b47 +0x77:  mov    %ebp,%esp
08767b49 +0x79:  pop    %ebp
08767b4a +0x7a:  ret
08767b4b +0x7b:  nop
08767b4c +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::RSA_BlockType1::Pad @ 0x8767ad0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType1::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int,
   TaoCrypt::RandomNumberGenerator&) const */

void TaoCrypt::RSA_BlockType1::Pad
               (uchar *param_1,uint param_2,uchar *param_3,uint param_4,
               RandomNumberGenerator *param_5)

{
  int iVar1;
  
  if (((uint)param_5 & 7) != 0) {
    *(undefined1 *)param_4 = 0;
    param_4 = param_4 + 1;
  }
  *(undefined1 *)param_4 = 1;
  iVar1 = ((uint)param_5 >> 3) - (int)param_3;
  memset((undefined1 *)(param_4 + 1),0xff,iVar1 - 2);
  *(undefined1 *)(param_4 + iVar1 + -1) = 0;
  memcpy((undefined1 *)(param_4 + iVar1),(void *)param_2,(size_t)param_3);
  return;
}
```
