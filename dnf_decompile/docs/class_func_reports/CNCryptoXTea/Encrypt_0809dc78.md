# Encrypt

`_ZN12CNCryptoXTea7EncryptEPKhiPhi`

`CNCryptoXTea::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809dc78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809dc78  _ZN12CNCryptoXTea7EncryptEPKhiPhi
#           CNCryptoXTea::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809dc78, 0x0809dd69]
0809dc78 +0x00:  push   %ebp
0809dc79 +0x01:  mov    %esp,%ebp
0809dc7b +0x03:  sub    $0x38,%esp
0809dc7e +0x06:  mov    0x8(%ebp),%eax
0809dc81 +0x09:  mov    0x8(%eax),%eax
0809dc84 +0x0c:  test   %eax,%eax
0809dc86 +0x0e:  jne    0809dc92 <+0x1a>
0809dc88 +0x10:  mov    $0x7000000c,%eax
0809dc8d +0x15:  jmp    0809dd67 <+0xef>
0809dc92 +0x1a:  mov    0x8(%ebp),%eax
0809dc95 +0x1d:  mov    (%eax),%eax
0809dc97 +0x1f:  add    $0x24,%eax
0809dc9a +0x22:  mov    (%eax),%edx
0809dc9c +0x24:  mov    0x8(%ebp),%eax
0809dc9f +0x27:  mov    %eax,(%esp)
0809dca2 +0x2a:  call   *%edx
0809dca4 +0x2c:  mov    %eax,-0x20(%ebp)
0809dca7 +0x2f:  mov    0x10(%ebp),%edx
0809dcaa +0x32:  mov    %edx,%eax
0809dcac +0x34:  sar    $0x1f,%edx
0809dcaf +0x37:  idivl  -0x20(%ebp)
0809dcb2 +0x3a:  mov    %edx,%eax
0809dcb4 +0x3c:  test   %eax,%eax
0809dcb6 +0x3e:  setne  %al
0809dcb9 +0x41:  test   %al,%al
0809dcbb +0x43:  je     0809dcc7 <+0x4f>
0809dcbd +0x45:  mov    $0x70000006,%eax
0809dcc2 +0x4a:  jmp    0809dd67 <+0xef>
0809dcc7 +0x4f:  mov    0x10(%ebp),%eax
0809dcca +0x52:  cmp    0x18(%ebp),%eax
0809dccd +0x55:  jle    0809dcd9 <+0x61>
0809dccf +0x57:  mov    $0x7000000a,%eax
0809dcd4 +0x5c:  jmp    0809dd67 <+0xef>
0809dcd9 +0x61:  mov    0x8(%ebp),%eax
0809dcdc +0x64:  mov    0x8(%eax),%eax
0809dcdf +0x67:  mov    %eax,-0x14(%ebp)
0809dce2 +0x6a:  mov    0x8(%ebp),%eax
0809dce5 +0x6d:  mov    (%eax),%eax
0809dce7 +0x6f:  add    $0x24,%eax
0809dcea +0x72:  mov    (%eax),%edx
0809dcec +0x74:  mov    0x8(%ebp),%eax
0809dcef +0x77:  mov    %eax,(%esp)
0809dcf2 +0x7a:  call   *%edx
0809dcf4 +0x7c:  mov    %eax,-0x1c(%ebp)
0809dcf7 +0x7f:  mov    0x10(%ebp),%eax
0809dcfa +0x82:  mov    %eax,%edx
0809dcfc +0x84:  sar    $0x1f,%edx
0809dcff +0x87:  idivl  -0x1c(%ebp)
0809dd02 +0x8a:  mov    %eax,-0x10(%ebp)
0809dd05 +0x8d:  movl   $0x0,-0xc(%ebp)
0809dd0c +0x94:  jmp    0809dd55 <+0xdd>
0809dd0e +0x96:  mov    -0x14(%ebp),%eax
0809dd11 +0x99:  mov    %eax,0x8(%esp)
0809dd15 +0x9d:  mov    0x14(%ebp),%eax
0809dd18 +0xa0:  mov    %eax,0x4(%esp)
0809dd1c +0xa4:  mov    0xc(%ebp),%eax
0809dd1f +0xa7:  mov    %eax,(%esp)
0809dd22 +0xaa:  call   080c5536 <_Z16xtea_ecb_encryptPKhPhP13symmetric_key>  ; xtea_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809dd27 +0xaf:  mov    0x8(%ebp),%eax
0809dd2a +0xb2:  mov    (%eax),%eax
0809dd2c +0xb4:  add    $0x24,%eax
0809dd2f +0xb7:  mov    (%eax),%edx
0809dd31 +0xb9:  mov    0x8(%ebp),%eax
0809dd34 +0xbc:  mov    %eax,(%esp)
0809dd37 +0xbf:  call   *%edx
0809dd39 +0xc1:  add    %eax,0xc(%ebp)
0809dd3c +0xc4:  mov    0x8(%ebp),%eax
0809dd3f +0xc7:  mov    (%eax),%eax
0809dd41 +0xc9:  add    $0x24,%eax
0809dd44 +0xcc:  mov    (%eax),%edx
0809dd46 +0xce:  mov    0x8(%ebp),%eax
0809dd49 +0xd1:  mov    %eax,(%esp)
0809dd4c +0xd4:  call   *%edx
0809dd4e +0xd6:  add    %eax,0x14(%ebp)
0809dd51 +0xd9:  addl   $0x1,-0xc(%ebp)
0809dd55 +0xdd:  mov    -0xc(%ebp),%eax
0809dd58 +0xe0:  cmp    -0x10(%ebp),%eax
0809dd5b +0xe3:  setl   %al
0809dd5e +0xe6:  test   %al,%al
0809dd60 +0xe8:  jne    0809dd0e <+0x96>
0809dd62 +0xea:  mov    $0x6fffffff,%eax
0809dd67 +0xef:  leave
0809dd68 +0xf0:  ret
0809dd69 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoXTea::Encrypt @ 0x809dc78

/* CNCryptoXTea::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoXTea::Encrypt(CNCryptoXTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          xtea_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}
```
