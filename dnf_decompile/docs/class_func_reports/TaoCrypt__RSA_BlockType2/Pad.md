# Pad

`_ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE`

`TaoCrypt::RSA_BlockType2::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int, TaoCrypt::RandomNumberGenerator&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_BlockType2` | `0x08767c10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767c10  _ZNK8TaoCrypt14RSA_BlockType23PadEPKhjPhjRNS_21RandomNumberGeneratorE
#           TaoCrypt::RSA_BlockType2::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int, TaoCrypt::RandomNumberGenerator&) const
# range [0x08767c10, 0x08767c9e]
08767c10 +0x00:  push   %ebp
08767c11 +0x01:  mov    %esp,%ebp
08767c13 +0x03:  push   %edi
08767c14 +0x04:  push   %esi
08767c15 +0x05:  push   %ebx
08767c16 +0x06:  sub    $0x2c,%esp
08767c19 +0x09:  mov    0x18(%ebp),%edx
08767c1c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08767c21 +0x11:  add    $0xc04f77,%ebx
08767c27 +0x17:  mov    0x14(%ebp),%esi
08767c2a +0x1a:  test   $0x7,%dl
08767c2d +0x1d:  je     08767c35 <+0x25>
08767c2f +0x1f:  movb   $0x0,(%esi)
08767c32 +0x22:  add    $0x1,%esi
08767c35 +0x25:  lea    0x1(%esi),%eax
08767c38 +0x28:  movb   $0x2,(%esi)
08767c3b +0x2b:  shr    $0x3,%edx
08767c3e +0x2e:  mov    %eax,0x4(%esp)
08767c42 +0x32:  mov    0x1c(%ebp),%eax
08767c45 +0x35:  sub    0x10(%ebp),%edx
08767c48 +0x38:  lea    -0x1(%edx),%edi
08767c4b +0x3b:  mov    %edx,-0x1c(%ebp)
08767c4e +0x3e:  mov    %edi,0x8(%esp)
08767c52 +0x42:  mov    %eax,(%esp)
08767c55 +0x45:  call   087678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>  ; TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)
08767c5a +0x4a:  cmp    $0x1,%edi
08767c5d +0x4d:  mov    -0x1c(%ebp),%edx
08767c60 +0x50:  jbe    08767c79 <+0x69>
08767c62 +0x52:  mov    $0x1,%eax
08767c67 +0x57:  nop
08767c68 +0x58:  cmpb   $0x0,(%esi,%eax,1)
08767c6c +0x5c:  jne    08767c72 <+0x62>
08767c6e +0x5e:  movb   $0x1,(%esi,%eax,1)
08767c72 +0x62:  add    $0x1,%eax
08767c75 +0x65:  cmp    %eax,%edi
08767c77 +0x67:  ja     08767c68 <+0x58>
08767c79 +0x69:  movb   $0x0,-0x1(%esi,%edx,1)
08767c7e +0x6e:  mov    0x10(%ebp),%eax
08767c81 +0x71:  add    %edx,%esi
08767c83 +0x73:  mov    %esi,(%esp)
08767c86 +0x76:  mov    %eax,0x8(%esp)
08767c8a +0x7a:  mov    0xc(%ebp),%eax
08767c8d +0x7d:  mov    %eax,0x4(%esp)
08767c91 +0x81:  call   0807d8a0 <_init+0x198>
08767c96 +0x86:  add    $0x2c,%esp
08767c99 +0x89:  pop    %ebx
08767c9a +0x8a:  pop    %esi
08767c9b +0x8b:  pop    %edi
08767c9c +0x8c:  pop    %ebp
08767c9d +0x8d:  ret
08767c9e +0x8e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::RSA_BlockType2::Pad @ 0x8767c10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType2::Pad(unsigned char const*, unsigned int, unsigned char*, unsigned int,
   TaoCrypt::RandomNumberGenerator&) const */

void __thiscall
TaoCrypt::RSA_BlockType2::Pad
          (RSA_BlockType2 *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4,
          RandomNumberGenerator *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_4 & 7) != 0) {
    *param_3 = '\0';
    param_3 = param_3 + 1;
  }
  *param_3 = '\x02';
  iVar3 = (param_4 >> 3) - param_2;
  uVar1 = iVar3 - 1;
  RandomNumberGenerator::GenerateBlock(param_5,param_3 + 1,uVar1);
  if (1 < uVar1) {
    uVar2 = 1;
    do {
      if (param_3[uVar2] == '\0') {
        param_3[uVar2] = '\x01';
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  param_3[iVar3 + -1] = '\0';
  memcpy(param_3 + iVar3,param_1,param_2);
  return;
}
```
