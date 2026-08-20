# Decrypt

`_ZN12CNCryptoXTea7DecryptEPKhiPhi`

`CNCryptoXTea::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809dd6a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809dd6a  _ZN12CNCryptoXTea7DecryptEPKhiPhi
#           CNCryptoXTea::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809dd6a, 0x0809de5b]
0809dd6a +0x00:  push   %ebp
0809dd6b +0x01:  mov    %esp,%ebp
0809dd6d +0x03:  sub    $0x38,%esp
0809dd70 +0x06:  mov    0x8(%ebp),%eax
0809dd73 +0x09:  mov    0x8(%eax),%eax
0809dd76 +0x0c:  test   %eax,%eax
0809dd78 +0x0e:  jne    0809dd84 <+0x1a>
0809dd7a +0x10:  mov    $0x7000000c,%eax
0809dd7f +0x15:  jmp    0809de59 <+0xef>
0809dd84 +0x1a:  mov    0x8(%ebp),%eax
0809dd87 +0x1d:  mov    (%eax),%eax
0809dd89 +0x1f:  add    $0x24,%eax
0809dd8c +0x22:  mov    (%eax),%edx
0809dd8e +0x24:  mov    0x8(%ebp),%eax
0809dd91 +0x27:  mov    %eax,(%esp)
0809dd94 +0x2a:  call   *%edx
0809dd96 +0x2c:  mov    %eax,-0x20(%ebp)
0809dd99 +0x2f:  mov    0x10(%ebp),%edx
0809dd9c +0x32:  mov    %edx,%eax
0809dd9e +0x34:  sar    $0x1f,%edx
0809dda1 +0x37:  idivl  -0x20(%ebp)
0809dda4 +0x3a:  mov    %edx,%eax
0809dda6 +0x3c:  test   %eax,%eax
0809dda8 +0x3e:  setne  %al
0809ddab +0x41:  test   %al,%al
0809ddad +0x43:  je     0809ddb9 <+0x4f>
0809ddaf +0x45:  mov    $0x7000000a,%eax
0809ddb4 +0x4a:  jmp    0809de59 <+0xef>
0809ddb9 +0x4f:  mov    0x10(%ebp),%eax
0809ddbc +0x52:  cmp    0x18(%ebp),%eax
0809ddbf +0x55:  jle    0809ddcb <+0x61>
0809ddc1 +0x57:  mov    $0x7000000a,%eax
0809ddc6 +0x5c:  jmp    0809de59 <+0xef>
0809ddcb +0x61:  mov    0x8(%ebp),%eax
0809ddce +0x64:  mov    0x8(%eax),%eax
0809ddd1 +0x67:  mov    %eax,-0x14(%ebp)
0809ddd4 +0x6a:  mov    0x8(%ebp),%eax
0809ddd7 +0x6d:  mov    (%eax),%eax
0809ddd9 +0x6f:  add    $0x24,%eax
0809dddc +0x72:  mov    (%eax),%edx
0809ddde +0x74:  mov    0x8(%ebp),%eax
0809dde1 +0x77:  mov    %eax,(%esp)
0809dde4 +0x7a:  call   *%edx
0809dde6 +0x7c:  mov    %eax,-0x1c(%ebp)
0809dde9 +0x7f:  mov    0x10(%ebp),%eax
0809ddec +0x82:  mov    %eax,%edx
0809ddee +0x84:  sar    $0x1f,%edx
0809ddf1 +0x87:  idivl  -0x1c(%ebp)
0809ddf4 +0x8a:  mov    %eax,-0x10(%ebp)
0809ddf7 +0x8d:  movl   $0x0,-0xc(%ebp)
0809ddfe +0x94:  jmp    0809de47 <+0xdd>
0809de00 +0x96:  mov    -0x14(%ebp),%eax
0809de03 +0x99:  mov    %eax,0x8(%esp)
0809de07 +0x9d:  mov    0x14(%ebp),%eax
0809de0a +0xa0:  mov    %eax,0x4(%esp)
0809de0e +0xa4:  mov    0xc(%ebp),%eax
0809de11 +0xa7:  mov    %eax,(%esp)
0809de14 +0xaa:  call   080c5786 <_Z16xtea_ecb_decryptPKhPhP13symmetric_key>  ; xtea_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809de19 +0xaf:  mov    0x8(%ebp),%eax
0809de1c +0xb2:  mov    (%eax),%eax
0809de1e +0xb4:  add    $0x24,%eax
0809de21 +0xb7:  mov    (%eax),%edx
0809de23 +0xb9:  mov    0x8(%ebp),%eax
0809de26 +0xbc:  mov    %eax,(%esp)
0809de29 +0xbf:  call   *%edx
0809de2b +0xc1:  add    %eax,0xc(%ebp)
0809de2e +0xc4:  mov    0x8(%ebp),%eax
0809de31 +0xc7:  mov    (%eax),%eax
0809de33 +0xc9:  add    $0x24,%eax
0809de36 +0xcc:  mov    (%eax),%edx
0809de38 +0xce:  mov    0x8(%ebp),%eax
0809de3b +0xd1:  mov    %eax,(%esp)
0809de3e +0xd4:  call   *%edx
0809de40 +0xd6:  add    %eax,0x14(%ebp)
0809de43 +0xd9:  addl   $0x1,-0xc(%ebp)
0809de47 +0xdd:  mov    -0xc(%ebp),%eax
0809de4a +0xe0:  cmp    -0x10(%ebp),%eax
0809de4d +0xe3:  setl   %al
0809de50 +0xe6:  test   %al,%al
0809de52 +0xe8:  jne    0809de00 <+0x96>
0809de54 +0xea:  mov    $0x6fffffff,%eax
0809de59 +0xef:  leave
0809de5a +0xf0:  ret
0809de5b +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoXTea::Decrypt @ 0x809dd6a

/* CNCryptoXTea::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoXTea::Decrypt(CNCryptoXTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          xtea_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x7000000a;
    }
  }
  return uVar2;
}
```
