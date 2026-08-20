# Encrypt

`_ZN16CNCryptoSkipjack7EncryptEPhi`

`CNCryptoSkipjack::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoSkipjack` | `0x0809caa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809caa8  _ZN16CNCryptoSkipjack7EncryptEPhi
#           CNCryptoSkipjack::Encrypt(unsigned char*, int)
# range [0x0809caa8, 0x0809cb7f]
0809caa8 +0x00:  push   %ebp
0809caa9 +0x01:  mov    %esp,%ebp
0809caab +0x03:  sub    $0x38,%esp
0809caae +0x06:  mov    0x8(%ebp),%eax
0809cab1 +0x09:  mov    0x8(%eax),%eax
0809cab4 +0x0c:  test   %eax,%eax
0809cab6 +0x0e:  jne    0809cac2 <+0x1a>
0809cab8 +0x10:  mov    $0x7000000c,%eax
0809cabd +0x15:  jmp    0809cb7d <+0xd5>
0809cac2 +0x1a:  mov    0x8(%ebp),%eax
0809cac5 +0x1d:  mov    (%eax),%eax
0809cac7 +0x1f:  add    $0x24,%eax
0809caca +0x22:  mov    (%eax),%edx
0809cacc +0x24:  mov    0x8(%ebp),%eax
0809cacf +0x27:  mov    %eax,(%esp)
0809cad2 +0x2a:  call   *%edx
0809cad4 +0x2c:  mov    %eax,-0x20(%ebp)
0809cad7 +0x2f:  mov    0x10(%ebp),%edx
0809cada +0x32:  mov    %edx,%eax
0809cadc +0x34:  sar    $0x1f,%edx
0809cadf +0x37:  idivl  -0x20(%ebp)
0809cae2 +0x3a:  mov    %edx,%eax
0809cae4 +0x3c:  test   %eax,%eax
0809cae6 +0x3e:  setne  %al
0809cae9 +0x41:  test   %al,%al
0809caeb +0x43:  je     0809caf7 <+0x4f>
0809caed +0x45:  mov    $0x70000006,%eax
0809caf2 +0x4a:  jmp    0809cb7d <+0xd5>
0809caf7 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809cafb +0x53:  jg     0809cb04 <+0x5c>
0809cafd +0x55:  mov    $0x7000000a,%eax
0809cb02 +0x5a:  jmp    0809cb7d <+0xd5>
0809cb04 +0x5c:  mov    0x8(%ebp),%eax
0809cb07 +0x5f:  mov    0x8(%eax),%eax
0809cb0a +0x62:  mov    %eax,-0x14(%ebp)
0809cb0d +0x65:  mov    0x8(%ebp),%eax
0809cb10 +0x68:  mov    (%eax),%eax
0809cb12 +0x6a:  add    $0x24,%eax
0809cb15 +0x6d:  mov    (%eax),%edx
0809cb17 +0x6f:  mov    0x8(%ebp),%eax
0809cb1a +0x72:  mov    %eax,(%esp)
0809cb1d +0x75:  call   *%edx
0809cb1f +0x77:  mov    %eax,-0x1c(%ebp)
0809cb22 +0x7a:  mov    0x10(%ebp),%eax
0809cb25 +0x7d:  mov    %eax,%edx
0809cb27 +0x7f:  sar    $0x1f,%edx
0809cb2a +0x82:  idivl  -0x1c(%ebp)
0809cb2d +0x85:  mov    %eax,-0x10(%ebp)
0809cb30 +0x88:  movl   $0x0,-0xc(%ebp)
0809cb37 +0x8f:  jmp    0809cb6b <+0xc3>
0809cb39 +0x91:  mov    -0x14(%ebp),%eax
0809cb3c +0x94:  mov    %eax,0x8(%esp)
0809cb40 +0x98:  mov    0xc(%ebp),%eax
0809cb43 +0x9b:  mov    %eax,0x4(%esp)
0809cb47 +0x9f:  mov    0xc(%ebp),%eax
0809cb4a +0xa2:  mov    %eax,(%esp)
0809cb4d +0xa5:  call   080c301a <_Z20skipjack_ecb_encryptPKhPhP13symmetric_key>  ; skipjack_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809cb52 +0xaa:  mov    0x8(%ebp),%eax
0809cb55 +0xad:  mov    (%eax),%eax
0809cb57 +0xaf:  add    $0x24,%eax
0809cb5a +0xb2:  mov    (%eax),%edx
0809cb5c +0xb4:  mov    0x8(%ebp),%eax
0809cb5f +0xb7:  mov    %eax,(%esp)
0809cb62 +0xba:  call   *%edx
0809cb64 +0xbc:  add    %eax,0xc(%ebp)
0809cb67 +0xbf:  addl   $0x1,-0xc(%ebp)
0809cb6b +0xc3:  mov    -0xc(%ebp),%eax
0809cb6e +0xc6:  cmp    -0x10(%ebp),%eax
0809cb71 +0xc9:  setl   %al
0809cb74 +0xcc:  test   %al,%al
0809cb76 +0xce:  jne    0809cb39 <+0x91>
0809cb78 +0xd0:  mov    $0x6fffffff,%eax
0809cb7d +0xd5:  leave
0809cb7e +0xd6:  ret
0809cb7f +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoSkipjack::Encrypt @ 0x809caa8

/* CNCryptoSkipjack::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoSkipjack::Encrypt(CNCryptoSkipjack *this,uchar *param_1,int param_2)

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
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          skipjack_ecb_encrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
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
