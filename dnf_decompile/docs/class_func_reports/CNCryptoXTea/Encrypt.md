# Encrypt

`_ZN12CNCryptoXTea7EncryptEPhi`

`CNCryptoXTea::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoXTea` | `0x0809dac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809dac8  _ZN12CNCryptoXTea7EncryptEPhi
#           CNCryptoXTea::Encrypt(unsigned char*, int)
# range [0x0809dac8, 0x0809db9f]
0809dac8 +0x00:  push   %ebp
0809dac9 +0x01:  mov    %esp,%ebp
0809dacb +0x03:  sub    $0x38,%esp
0809dace +0x06:  mov    0x8(%ebp),%eax
0809dad1 +0x09:  mov    0x8(%eax),%eax
0809dad4 +0x0c:  test   %eax,%eax
0809dad6 +0x0e:  jne    0809dae2 <+0x1a>
0809dad8 +0x10:  mov    $0x7000000c,%eax
0809dadd +0x15:  jmp    0809db9d <+0xd5>
0809dae2 +0x1a:  mov    0x8(%ebp),%eax
0809dae5 +0x1d:  mov    (%eax),%eax
0809dae7 +0x1f:  add    $0x24,%eax
0809daea +0x22:  mov    (%eax),%edx
0809daec +0x24:  mov    0x8(%ebp),%eax
0809daef +0x27:  mov    %eax,(%esp)
0809daf2 +0x2a:  call   *%edx
0809daf4 +0x2c:  mov    %eax,-0x20(%ebp)
0809daf7 +0x2f:  mov    0x10(%ebp),%edx
0809dafa +0x32:  mov    %edx,%eax
0809dafc +0x34:  sar    $0x1f,%edx
0809daff +0x37:  idivl  -0x20(%ebp)
0809db02 +0x3a:  mov    %edx,%eax
0809db04 +0x3c:  test   %eax,%eax
0809db06 +0x3e:  setne  %al
0809db09 +0x41:  test   %al,%al
0809db0b +0x43:  je     0809db17 <+0x4f>
0809db0d +0x45:  mov    $0x70000006,%eax
0809db12 +0x4a:  jmp    0809db9d <+0xd5>
0809db17 +0x4f:  cmpl   $0x0,0x10(%ebp)
0809db1b +0x53:  jg     0809db24 <+0x5c>
0809db1d +0x55:  mov    $0x7000000a,%eax
0809db22 +0x5a:  jmp    0809db9d <+0xd5>
0809db24 +0x5c:  mov    0x8(%ebp),%eax
0809db27 +0x5f:  mov    0x8(%eax),%eax
0809db2a +0x62:  mov    %eax,-0x14(%ebp)
0809db2d +0x65:  mov    0x8(%ebp),%eax
0809db30 +0x68:  mov    (%eax),%eax
0809db32 +0x6a:  add    $0x24,%eax
0809db35 +0x6d:  mov    (%eax),%edx
0809db37 +0x6f:  mov    0x8(%ebp),%eax
0809db3a +0x72:  mov    %eax,(%esp)
0809db3d +0x75:  call   *%edx
0809db3f +0x77:  mov    %eax,-0x1c(%ebp)
0809db42 +0x7a:  mov    0x10(%ebp),%eax
0809db45 +0x7d:  mov    %eax,%edx
0809db47 +0x7f:  sar    $0x1f,%edx
0809db4a +0x82:  idivl  -0x1c(%ebp)
0809db4d +0x85:  mov    %eax,-0x10(%ebp)
0809db50 +0x88:  movl   $0x0,-0xc(%ebp)
0809db57 +0x8f:  jmp    0809db8b <+0xc3>
0809db59 +0x91:  mov    -0x14(%ebp),%eax
0809db5c +0x94:  mov    %eax,0x8(%esp)
0809db60 +0x98:  mov    0xc(%ebp),%eax
0809db63 +0x9b:  mov    %eax,0x4(%esp)
0809db67 +0x9f:  mov    0xc(%ebp),%eax
0809db6a +0xa2:  mov    %eax,(%esp)
0809db6d +0xa5:  call   080c5536 <_Z16xtea_ecb_encryptPKhPhP13symmetric_key>  ; xtea_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809db72 +0xaa:  mov    0x8(%ebp),%eax
0809db75 +0xad:  mov    (%eax),%eax
0809db77 +0xaf:  add    $0x24,%eax
0809db7a +0xb2:  mov    (%eax),%edx
0809db7c +0xb4:  mov    0x8(%ebp),%eax
0809db7f +0xb7:  mov    %eax,(%esp)
0809db82 +0xba:  call   *%edx
0809db84 +0xbc:  add    %eax,0xc(%ebp)
0809db87 +0xbf:  addl   $0x1,-0xc(%ebp)
0809db8b +0xc3:  mov    -0xc(%ebp),%eax
0809db8e +0xc6:  cmp    -0x10(%ebp),%eax
0809db91 +0xc9:  setl   %al
0809db94 +0xcc:  test   %al,%al
0809db96 +0xce:  jne    0809db59 <+0x91>
0809db98 +0xd0:  mov    $0x6fffffff,%eax
0809db9d +0xd5:  leave
0809db9e +0xd6:  ret
0809db9f +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoXTea::Encrypt @ 0x809dac8

/* CNCryptoXTea::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoXTea::Encrypt(CNCryptoXTea *this,uchar *param_1,int param_2)

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
          xtea_ecb_encrypt(param_1,param_1,psVar1);
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
