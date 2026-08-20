# Encrypt

`_ZN14CRijndael_fake7EncryptEPKcPcj`

`CRijndael_fake::Encrypt(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b83c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b83c6  _ZN14CRijndael_fake7EncryptEPKcPcj
#           CRijndael_fake::Encrypt(char const*, char*, unsigned int)
# range [0x080b83c6, 0x080b8435]
080b83c6 +0x00:  push   %ebp
080b83c7 +0x01:  mov    %esp,%ebp
080b83c9 +0x03:  sub    $0x28,%esp
080b83cc +0x06:  mov    0x8(%ebp),%eax
080b83cf +0x09:  mov    0x4(%eax),%eax
080b83d2 +0x0c:  mov    %eax,-0x18(%ebp)
080b83d5 +0x0f:  mov    0x8(%ebp),%eax
080b83d8 +0x12:  mov    0x8(%eax),%edx
080b83db +0x15:  mov    -0x18(%ebp),%eax
080b83de +0x18:  xor    %edx,%eax
080b83e0 +0x1a:  mov    %eax,-0x18(%ebp)
080b83e3 +0x1d:  lea    -0x18(%ebp),%eax
080b83e6 +0x20:  mov    (%eax),%eax
080b83e8 +0x22:  mov    %eax,-0x14(%ebp)
080b83eb +0x25:  mov    0x14(%ebp),%eax
080b83ee +0x28:  shr    $0x4,%eax
080b83f1 +0x2b:  mov    %eax,-0x10(%ebp)
080b83f4 +0x2e:  movl   $0x0,-0xc(%ebp)
080b83fb +0x35:  jmp    080b8422 <+0x5c>
080b83fd +0x37:  mov    0x10(%ebp),%edx
080b8400 +0x3a:  mov    0xc(%ebp),%eax
080b8403 +0x3d:  mov    -0x14(%ebp),%ecx
080b8406 +0x40:  mov    %ecx,0x8(%esp)
080b840a +0x44:  mov    %edx,0x4(%esp)
080b840e +0x48:  mov    %eax,(%esp)
080b8411 +0x4b:  call   080a52ef <_Z18anubis_ecb_encryptPKhPhP13symmetric_key>  ; anubis_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
080b8416 +0x50:  addl   $0x10,0xc(%ebp)
080b841a +0x54:  addl   $0x10,0x10(%ebp)
080b841e +0x58:  addl   $0x1,-0xc(%ebp)
080b8422 +0x5c:  mov    -0xc(%ebp),%eax
080b8425 +0x5f:  cmp    -0x10(%ebp),%eax
080b8428 +0x62:  setl   %al
080b842b +0x65:  test   %al,%al
080b842d +0x67:  jne    080b83fd <+0x37>
080b842f +0x69:  mov    $0x6fffffff,%eax
080b8434 +0x6e:  leave
080b8435 +0x6f:  ret
```

## 反编译 C

```c
// CRijndael_fake::Encrypt @ 0x80b83c6

/* CRijndael_fake::Encrypt(char const*, char*, unsigned int) */

undefined4 __thiscall
CRijndael_fake::Encrypt(CRijndael_fake *this,char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  
  uVar1 = *(uint *)(this + 4);
  uVar2 = *(uint *)(this + 8);
  for (local_10 = 0; local_10 < (int)(param_3 >> 4); local_10 = local_10 + 1) {
    anubis_ecb_encrypt((uchar *)param_1,(uchar *)param_2,(symmetric_key *)(uVar1 ^ uVar2));
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 0x6fffffff;
}
```
