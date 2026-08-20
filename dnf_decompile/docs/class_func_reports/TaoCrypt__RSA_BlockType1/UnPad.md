# UnPad

`_ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh`

`TaoCrypt::RSA_BlockType1::UnPad(unsigned char const*, unsigned int, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_BlockType1` | `0x08767a10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767a10  _ZNK8TaoCrypt14RSA_BlockType15UnPadEPKhjPh
#           TaoCrypt::RSA_BlockType1::UnPad(unsigned char const*, unsigned int, unsigned char*) const
# range [0x08767a10, 0x08767acf]
08767a10 +0x00:  push   %ebp
08767a11 +0x01:  xor    %edx,%edx
08767a13 +0x03:  mov    %esp,%ebp
08767a15 +0x05:  push   %edi
08767a16 +0x06:  push   %esi
08767a17 +0x07:  push   %ebx
08767a18 +0x08:  sub    $0x2c,%esp
08767a1b +0x0b:  mov    0x10(%ebp),%eax
08767a1e +0x0e:  call   08722df8 <__i686.get_pc_thunk.bx>
08767a23 +0x13:  add    $0xc05175,%ebx
08767a29 +0x19:  mov    0xc(%ebp),%ecx
08767a2c +0x1c:  movb   $0x0,-0x28(%ebp)
08767a30 +0x20:  mov    %eax,%esi
08767a32 +0x22:  shr    $0x3,%esi
08767a35 +0x25:  cmp    $0xa,%esi
08767a38 +0x28:  lea    -0xa(%esi),%edi
08767a3b +0x2b:  cmova  %edi,%edx
08767a3e +0x2e:  test   $0x7,%al
08767a40 +0x30:  je     08767a4c <+0x3c>
08767a42 +0x32:  cmpb   $0x0,(%ecx)
08767a45 +0x35:  setne  -0x28(%ebp)
08767a49 +0x39:  add    $0x1,%ecx
08767a4c +0x3c:  movzbl -0x28(%ebp),%eax
08767a50 +0x40:  mov    $0x1,%edi
08767a55 +0x45:  cmpb   $0x1,(%ecx)
08767a58 +0x48:  cmovne %edi,%eax
08767a5b +0x4b:  cmp    $0x1,%esi
08767a5e +0x4e:  mov    %al,-0x28(%ebp)
08767a61 +0x51:  mov    $0x1,%eax
08767a66 +0x56:  jbe    08767a7a <+0x6a>
08767a68 +0x58:  cmpb   $0x0,0x1(%ecx)
08767a6c +0x5c:  mov    $0x2,%al
08767a6e +0x5e:  mov    %edx,%edi
08767a70 +0x60:  je     08767a7a <+0x6a>
08767a72 +0x62:  cmp    %esi,%eax
08767a74 +0x64:  jb     08767a98 <+0x88>
08767a76 +0x66:  xchg   %ax,%ax
08767a78 +0x68:  mov    %edi,%edx
08767a7a +0x6a:  sub    %eax,%esi
08767a7c +0x6c:  cmp    %edx,%esi
08767a7e +0x6e:  ja     08767a88 <+0x78>
08767a80 +0x70:  cmpb   $0x0,-0x28(%ebp)
08767a84 +0x74:  je     08767ab0 <+0xa0>
08767a86 +0x76:  xchg   %ax,%ax
08767a88 +0x78:  xor    %esi,%esi
08767a8a +0x7a:  add    $0x2c,%esp
08767a8d +0x7d:  mov    %esi,%eax
08767a8f +0x7f:  pop    %ebx
08767a90 +0x80:  pop    %esi
08767a91 +0x81:  pop    %edi
08767a92 +0x82:  pop    %ebp
08767a93 +0x83:  ret
08767a94 +0x84:  lea    0x0(%esi,%eiz,1),%esi
08767a98 +0x88:  movzbl (%ecx,%eax,1),%edx
08767a9c +0x8c:  add    $0x1,%eax
08767a9f +0x8f:  test   %dl,%dl
08767aa1 +0x91:  je     08767a78 <+0x68>
08767aa3 +0x93:  cmp    %esi,%eax
08767aa5 +0x95:  jb     08767a98 <+0x88>
08767aa7 +0x97:  jmp    08767a78 <+0x68>
08767aa9 +0x99:  lea    0x0(%esi,%eiz,1),%esi
08767ab0 +0xa0:  lea    (%ecx,%eax,1),%eax
08767ab3 +0xa3:  mov    %eax,0x4(%esp)
08767ab7 +0xa7:  mov    0x14(%ebp),%eax
08767aba +0xaa:  mov    %esi,0x8(%esp)
08767abe +0xae:  mov    %eax,(%esp)
08767ac1 +0xb1:  call   0807d8a0 <_init+0x198>
08767ac6 +0xb6:  add    $0x2c,%esp
08767ac9 +0xb9:  mov    %esi,%eax
08767acb +0xbb:  pop    %ebx
08767acc +0xbc:  pop    %esi
08767acd +0xbd:  pop    %edi
08767ace +0xbe:  pop    %ebp
08767acf +0xbf:  ret
```

## 反编译 C

```c
// TaoCrypt::RSA_BlockType1::UnPad @ 0x8767a10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType1::UnPad(unsigned char const*, unsigned int, unsigned char*) const */

uint __thiscall
TaoCrypt::RSA_BlockType1::UnPad(RSA_BlockType1 *this,uchar *param_1,uint param_2,uchar *param_3)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  uVar4 = param_2 >> 3;
  uVar3 = 0;
  if (10 < uVar4) {
    uVar3 = uVar4 - 10;
  }
  if ((param_2 & 7) != 0) {
    bVar5 = *param_1 != '\0';
    param_1 = param_1 + 1;
  }
  if (*param_1 != '\x01') {
    bVar5 = true;
  }
  uVar2 = 1;
  if (((1 < uVar4) && (uVar2 = 2, param_1[1] != '\0')) && (2 < uVar4)) {
    do {
      puVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
      if (*puVar1 == '\0') break;
    } while (uVar2 < uVar4);
  }
  uVar4 = uVar4 - uVar2;
  if ((uVar4 <= uVar3) && (!bVar5)) {
    memcpy(param_3,param_1 + uVar2,uVar4);
    return uVar4;
  }
  return 0;
}
```
