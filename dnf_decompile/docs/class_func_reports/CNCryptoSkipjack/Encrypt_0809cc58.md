# Encrypt

`_ZN16CNCryptoSkipjack7EncryptEPKhiPhi`

`CNCryptoSkipjack::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809cc58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809cc58  _ZN16CNCryptoSkipjack7EncryptEPKhiPhi
#           CNCryptoSkipjack::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809cc58, 0x0809cd49]
0809cc58 +0x00:  push   %ebp
0809cc59 +0x01:  mov    %esp,%ebp
0809cc5b +0x03:  sub    $0x38,%esp
0809cc5e +0x06:  mov    0x8(%ebp),%eax
0809cc61 +0x09:  mov    0x8(%eax),%eax
0809cc64 +0x0c:  test   %eax,%eax
0809cc66 +0x0e:  jne    0809cc72 <+0x1a>
0809cc68 +0x10:  mov    $0x7000000c,%eax
0809cc6d +0x15:  jmp    0809cd47 <+0xef>
0809cc72 +0x1a:  mov    0x8(%ebp),%eax
0809cc75 +0x1d:  mov    (%eax),%eax
0809cc77 +0x1f:  add    $0x24,%eax
0809cc7a +0x22:  mov    (%eax),%edx
0809cc7c +0x24:  mov    0x8(%ebp),%eax
0809cc7f +0x27:  mov    %eax,(%esp)
0809cc82 +0x2a:  call   *%edx
0809cc84 +0x2c:  mov    %eax,-0x20(%ebp)
0809cc87 +0x2f:  mov    0x10(%ebp),%edx
0809cc8a +0x32:  mov    %edx,%eax
0809cc8c +0x34:  sar    $0x1f,%edx
0809cc8f +0x37:  idivl  -0x20(%ebp)
0809cc92 +0x3a:  mov    %edx,%eax
0809cc94 +0x3c:  test   %eax,%eax
0809cc96 +0x3e:  setne  %al
0809cc99 +0x41:  test   %al,%al
0809cc9b +0x43:  je     0809cca7 <+0x4f>
0809cc9d +0x45:  mov    $0x70000006,%eax
0809cca2 +0x4a:  jmp    0809cd47 <+0xef>
0809cca7 +0x4f:  mov    0x10(%ebp),%eax
0809ccaa +0x52:  cmp    0x18(%ebp),%eax
0809ccad +0x55:  jle    0809ccb9 <+0x61>
0809ccaf +0x57:  mov    $0x7000000a,%eax
0809ccb4 +0x5c:  jmp    0809cd47 <+0xef>
0809ccb9 +0x61:  mov    0x8(%ebp),%eax
0809ccbc +0x64:  mov    0x8(%eax),%eax
0809ccbf +0x67:  mov    %eax,-0x14(%ebp)
0809ccc2 +0x6a:  mov    0x8(%ebp),%eax
0809ccc5 +0x6d:  mov    (%eax),%eax
0809ccc7 +0x6f:  add    $0x24,%eax
0809ccca +0x72:  mov    (%eax),%edx
0809cccc +0x74:  mov    0x8(%ebp),%eax
0809cccf +0x77:  mov    %eax,(%esp)
0809ccd2 +0x7a:  call   *%edx
0809ccd4 +0x7c:  mov    %eax,-0x1c(%ebp)
0809ccd7 +0x7f:  mov    0x10(%ebp),%eax
0809ccda +0x82:  mov    %eax,%edx
0809ccdc +0x84:  sar    $0x1f,%edx
0809ccdf +0x87:  idivl  -0x1c(%ebp)
0809cce2 +0x8a:  mov    %eax,-0x10(%ebp)
0809cce5 +0x8d:  movl   $0x0,-0xc(%ebp)
0809ccec +0x94:  jmp    0809cd35 <+0xdd>
0809ccee +0x96:  mov    -0x14(%ebp),%eax
0809ccf1 +0x99:  mov    %eax,0x8(%esp)
0809ccf5 +0x9d:  mov    0x14(%ebp),%eax
0809ccf8 +0xa0:  mov    %eax,0x4(%esp)
0809ccfc +0xa4:  mov    0xc(%ebp),%eax
0809ccff +0xa7:  mov    %eax,(%esp)
0809cd02 +0xaa:  call   080c301a <_Z20skipjack_ecb_encryptPKhPhP13symmetric_key>  ; skipjack_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809cd07 +0xaf:  mov    0x8(%ebp),%eax
0809cd0a +0xb2:  mov    (%eax),%eax
0809cd0c +0xb4:  add    $0x24,%eax
0809cd0f +0xb7:  mov    (%eax),%edx
0809cd11 +0xb9:  mov    0x8(%ebp),%eax
0809cd14 +0xbc:  mov    %eax,(%esp)
0809cd17 +0xbf:  call   *%edx
0809cd19 +0xc1:  add    %eax,0xc(%ebp)
0809cd1c +0xc4:  mov    0x8(%ebp),%eax
0809cd1f +0xc7:  mov    (%eax),%eax
0809cd21 +0xc9:  add    $0x24,%eax
0809cd24 +0xcc:  mov    (%eax),%edx
0809cd26 +0xce:  mov    0x8(%ebp),%eax
0809cd29 +0xd1:  mov    %eax,(%esp)
0809cd2c +0xd4:  call   *%edx
0809cd2e +0xd6:  add    %eax,0x14(%ebp)
0809cd31 +0xd9:  addl   $0x1,-0xc(%ebp)
0809cd35 +0xdd:  mov    -0xc(%ebp),%eax
0809cd38 +0xe0:  cmp    -0x10(%ebp),%eax
0809cd3b +0xe3:  setl   %al
0809cd3e +0xe6:  test   %al,%al
0809cd40 +0xe8:  jne    0809ccee <+0x96>
0809cd42 +0xea:  mov    $0x6fffffff,%eax
0809cd47 +0xef:  leave
0809cd48 +0xf0:  ret
0809cd49 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::Encrypt @ 0x809cc58

/* CNCryptoSkipjack::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoSkipjack::Encrypt
          (CNCryptoSkipjack *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          skipjack_ecb_encrypt(param_1,param_3,psVar1);
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
