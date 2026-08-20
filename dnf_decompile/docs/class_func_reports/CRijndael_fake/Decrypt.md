# Decrypt

`_ZN14CRijndael_fake7DecryptEPKcPcj`

`CRijndael_fake::Decrypt(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CRijndael_fake` | `0x080b8436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b8436  _ZN14CRijndael_fake7DecryptEPKcPcj
#           CRijndael_fake::Decrypt(char const*, char*, unsigned int)
# range [0x080b8436, 0x080b84a5]
080b8436 +0x00:  push   %ebp
080b8437 +0x01:  mov    %esp,%ebp
080b8439 +0x03:  sub    $0x28,%esp
080b843c +0x06:  mov    0x8(%ebp),%eax
080b843f +0x09:  mov    0x4(%eax),%eax
080b8442 +0x0c:  mov    %eax,-0x18(%ebp)
080b8445 +0x0f:  mov    0x8(%ebp),%eax
080b8448 +0x12:  mov    0x8(%eax),%edx
080b844b +0x15:  mov    -0x18(%ebp),%eax
080b844e +0x18:  xor    %edx,%eax
080b8450 +0x1a:  mov    %eax,-0x18(%ebp)
080b8453 +0x1d:  lea    -0x18(%ebp),%eax
080b8456 +0x20:  mov    (%eax),%eax
080b8458 +0x22:  mov    %eax,-0x14(%ebp)
080b845b +0x25:  mov    0x14(%ebp),%eax
080b845e +0x28:  shr    $0x4,%eax
080b8461 +0x2b:  mov    %eax,-0x10(%ebp)
080b8464 +0x2e:  movl   $0x0,-0xc(%ebp)
080b846b +0x35:  jmp    080b8492 <+0x5c>
080b846d +0x37:  mov    0x10(%ebp),%edx
080b8470 +0x3a:  mov    0xc(%ebp),%eax
080b8473 +0x3d:  mov    -0x14(%ebp),%ecx
080b8476 +0x40:  mov    %ecx,0x8(%esp)
080b847a +0x44:  mov    %edx,0x4(%esp)
080b847e +0x48:  mov    %eax,(%esp)
080b8481 +0x4b:  call   080a5322 <_Z18anubis_ecb_decryptPKhPhP13symmetric_key>  ; anubis_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
080b8486 +0x50:  addl   $0x10,0xc(%ebp)
080b848a +0x54:  addl   $0x10,0x10(%ebp)
080b848e +0x58:  addl   $0x1,-0xc(%ebp)
080b8492 +0x5c:  mov    -0xc(%ebp),%eax
080b8495 +0x5f:  cmp    -0x10(%ebp),%eax
080b8498 +0x62:  setl   %al
080b849b +0x65:  test   %al,%al
080b849d +0x67:  jne    080b846d <+0x37>
080b849f +0x69:  mov    $0x6fffffff,%eax
080b84a4 +0x6e:  leave
080b84a5 +0x6f:  ret
```

## 反编译 C

```c
// CRijndael_fake::Decrypt @ 0x80b8436

/* CRijndael_fake::Decrypt(char const*, char*, unsigned int) */

undefined4 __thiscall
CRijndael_fake::Decrypt(CRijndael_fake *this,char *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_10;
  
  uVar1 = *(uint *)(this + 4);
  uVar2 = *(uint *)(this + 8);
  for (local_10 = 0; local_10 < (int)(param_3 >> 4); local_10 = local_10 + 1) {
    anubis_ecb_decrypt((uchar *)param_1,(uchar *)param_2,(symmetric_key *)(uVar1 ^ uVar2));
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 0x6fffffff;
}
```
