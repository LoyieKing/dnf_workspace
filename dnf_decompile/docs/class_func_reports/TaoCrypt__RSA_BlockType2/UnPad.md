# UnPad

`_ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh`

`TaoCrypt::RSA_BlockType2::UnPad(unsigned char const*, unsigned int, unsigned char*) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RSA_BlockType2` | `0x08767b50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767b50  _ZNK8TaoCrypt14RSA_BlockType25UnPadEPKhjPh
#           TaoCrypt::RSA_BlockType2::UnPad(unsigned char const*, unsigned int, unsigned char*) const
# range [0x08767b50, 0x08767c0f]
08767b50 +0x00:  push   %ebp
08767b51 +0x01:  xor    %edx,%edx
08767b53 +0x03:  mov    %esp,%ebp
08767b55 +0x05:  push   %edi
08767b56 +0x06:  push   %esi
08767b57 +0x07:  push   %ebx
08767b58 +0x08:  sub    $0x2c,%esp
08767b5b +0x0b:  mov    0x10(%ebp),%eax
08767b5e +0x0e:  call   08722df8 <__i686.get_pc_thunk.bx>
08767b63 +0x13:  add    $0xc05035,%ebx
08767b69 +0x19:  mov    0xc(%ebp),%ecx
08767b6c +0x1c:  movb   $0x0,-0x28(%ebp)
08767b70 +0x20:  mov    %eax,%esi
08767b72 +0x22:  shr    $0x3,%esi
08767b75 +0x25:  cmp    $0xa,%esi
08767b78 +0x28:  lea    -0xa(%esi),%edi
08767b7b +0x2b:  cmova  %edi,%edx
08767b7e +0x2e:  test   $0x7,%al
08767b80 +0x30:  je     08767b8c <+0x3c>
08767b82 +0x32:  cmpb   $0x0,(%ecx)
08767b85 +0x35:  setne  -0x28(%ebp)
08767b89 +0x39:  add    $0x1,%ecx
08767b8c +0x3c:  movzbl -0x28(%ebp),%eax
08767b90 +0x40:  mov    $0x1,%edi
08767b95 +0x45:  cmpb   $0x2,(%ecx)
08767b98 +0x48:  cmovne %edi,%eax
08767b9b +0x4b:  cmp    $0x1,%esi
08767b9e +0x4e:  mov    %al,-0x28(%ebp)
08767ba1 +0x51:  mov    $0x1,%eax
08767ba6 +0x56:  jbe    08767bba <+0x6a>
08767ba8 +0x58:  cmpb   $0x0,0x1(%ecx)
08767bac +0x5c:  mov    $0x2,%al
08767bae +0x5e:  mov    %edx,%edi
08767bb0 +0x60:  je     08767bba <+0x6a>
08767bb2 +0x62:  cmp    %esi,%eax
08767bb4 +0x64:  jb     08767bd8 <+0x88>
08767bb6 +0x66:  xchg   %ax,%ax
08767bb8 +0x68:  mov    %edi,%edx
08767bba +0x6a:  sub    %eax,%esi
08767bbc +0x6c:  cmp    %edx,%esi
08767bbe +0x6e:  ja     08767bc8 <+0x78>
08767bc0 +0x70:  cmpb   $0x0,-0x28(%ebp)
08767bc4 +0x74:  je     08767bf0 <+0xa0>
08767bc6 +0x76:  xchg   %ax,%ax
08767bc8 +0x78:  xor    %esi,%esi
08767bca +0x7a:  add    $0x2c,%esp
08767bcd +0x7d:  mov    %esi,%eax
08767bcf +0x7f:  pop    %ebx
08767bd0 +0x80:  pop    %esi
08767bd1 +0x81:  pop    %edi
08767bd2 +0x82:  pop    %ebp
08767bd3 +0x83:  ret
08767bd4 +0x84:  lea    0x0(%esi,%eiz,1),%esi
08767bd8 +0x88:  movzbl (%ecx,%eax,1),%edx
08767bdc +0x8c:  add    $0x1,%eax
08767bdf +0x8f:  test   %dl,%dl
08767be1 +0x91:  je     08767bb8 <+0x68>
08767be3 +0x93:  cmp    %esi,%eax
08767be5 +0x95:  jb     08767bd8 <+0x88>
08767be7 +0x97:  jmp    08767bb8 <+0x68>
08767be9 +0x99:  lea    0x0(%esi,%eiz,1),%esi
08767bf0 +0xa0:  lea    (%ecx,%eax,1),%eax
08767bf3 +0xa3:  mov    %eax,0x4(%esp)
08767bf7 +0xa7:  mov    0x14(%ebp),%eax
08767bfa +0xaa:  mov    %esi,0x8(%esp)
08767bfe +0xae:  mov    %eax,(%esp)
08767c01 +0xb1:  call   0807d8a0 <_init+0x198>
08767c06 +0xb6:  add    $0x2c,%esp
08767c09 +0xb9:  mov    %esi,%eax
08767c0b +0xbb:  pop    %ebx
08767c0c +0xbc:  pop    %esi
08767c0d +0xbd:  pop    %edi
08767c0e +0xbe:  pop    %ebp
08767c0f +0xbf:  ret
```

## 反编译 C

```c
// TaoCrypt::RSA_BlockType2::UnPad @ 0x8767b50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RSA_BlockType2::UnPad(unsigned char const*, unsigned int, unsigned char*) const */

uint __thiscall
TaoCrypt::RSA_BlockType2::UnPad(RSA_BlockType2 *this,uchar *param_1,uint param_2,uchar *param_3)

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
  if (*param_1 != '\x02') {
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
