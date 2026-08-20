# Decrypt

`_ZN14CNCryptoKasumi7DecryptEPKhiPhi`

`CNCryptoKasumi::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a94e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a94e  _ZN14CNCryptoKasumi7DecryptEPKhiPhi
#           CNCryptoKasumi::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809a94e, 0x0809aa3f]
0809a94e +0x00:  push   %ebp
0809a94f +0x01:  mov    %esp,%ebp
0809a951 +0x03:  sub    $0x38,%esp
0809a954 +0x06:  mov    0x8(%ebp),%eax
0809a957 +0x09:  mov    0x8(%eax),%eax
0809a95a +0x0c:  test   %eax,%eax
0809a95c +0x0e:  jne    0809a968 <+0x1a>
0809a95e +0x10:  mov    $0x7000000c,%eax
0809a963 +0x15:  jmp    0809aa3d <+0xef>
0809a968 +0x1a:  mov    0x8(%ebp),%eax
0809a96b +0x1d:  mov    (%eax),%eax
0809a96d +0x1f:  add    $0x24,%eax
0809a970 +0x22:  mov    (%eax),%edx
0809a972 +0x24:  mov    0x8(%ebp),%eax
0809a975 +0x27:  mov    %eax,(%esp)
0809a978 +0x2a:  call   *%edx
0809a97a +0x2c:  mov    %eax,-0x20(%ebp)
0809a97d +0x2f:  mov    0x10(%ebp),%edx
0809a980 +0x32:  mov    %edx,%eax
0809a982 +0x34:  sar    $0x1f,%edx
0809a985 +0x37:  idivl  -0x20(%ebp)
0809a988 +0x3a:  mov    %edx,%eax
0809a98a +0x3c:  test   %eax,%eax
0809a98c +0x3e:  setne  %al
0809a98f +0x41:  test   %al,%al
0809a991 +0x43:  je     0809a99d <+0x4f>
0809a993 +0x45:  mov    $0x7000000a,%eax
0809a998 +0x4a:  jmp    0809aa3d <+0xef>
0809a99d +0x4f:  mov    0x10(%ebp),%eax
0809a9a0 +0x52:  cmp    0x18(%ebp),%eax
0809a9a3 +0x55:  jle    0809a9af <+0x61>
0809a9a5 +0x57:  mov    $0x7000000a,%eax
0809a9aa +0x5c:  jmp    0809aa3d <+0xef>
0809a9af +0x61:  mov    0x8(%ebp),%eax
0809a9b2 +0x64:  mov    0x8(%eax),%eax
0809a9b5 +0x67:  mov    %eax,-0x14(%ebp)
0809a9b8 +0x6a:  mov    0x8(%ebp),%eax
0809a9bb +0x6d:  mov    (%eax),%eax
0809a9bd +0x6f:  add    $0x24,%eax
0809a9c0 +0x72:  mov    (%eax),%edx
0809a9c2 +0x74:  mov    0x8(%ebp),%eax
0809a9c5 +0x77:  mov    %eax,(%esp)
0809a9c8 +0x7a:  call   *%edx
0809a9ca +0x7c:  mov    %eax,-0x1c(%ebp)
0809a9cd +0x7f:  mov    0x10(%ebp),%eax
0809a9d0 +0x82:  mov    %eax,%edx
0809a9d2 +0x84:  sar    $0x1f,%edx
0809a9d5 +0x87:  idivl  -0x1c(%ebp)
0809a9d8 +0x8a:  mov    %eax,-0x10(%ebp)
0809a9db +0x8d:  movl   $0x0,-0xc(%ebp)
0809a9e2 +0x94:  jmp    0809aa2b <+0xdd>
0809a9e4 +0x96:  mov    -0x14(%ebp),%eax
0809a9e7 +0x99:  mov    %eax,0x8(%esp)
0809a9eb +0x9d:  mov    0x14(%ebp),%eax
0809a9ee +0xa0:  mov    %eax,0x4(%esp)
0809a9f2 +0xa4:  mov    0xc(%ebp),%eax
0809a9f5 +0xa7:  mov    %eax,(%esp)
0809a9f8 +0xaa:  call   080b188c <_Z18kasumi_ecb_decryptPKhPhP13symmetric_key>  ; kasumi_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a9fd +0xaf:  mov    0x8(%ebp),%eax
0809aa00 +0xb2:  mov    (%eax),%eax
0809aa02 +0xb4:  add    $0x24,%eax
0809aa05 +0xb7:  mov    (%eax),%edx
0809aa07 +0xb9:  mov    0x8(%ebp),%eax
0809aa0a +0xbc:  mov    %eax,(%esp)
0809aa0d +0xbf:  call   *%edx
0809aa0f +0xc1:  add    %eax,0xc(%ebp)
0809aa12 +0xc4:  mov    0x8(%ebp),%eax
0809aa15 +0xc7:  mov    (%eax),%eax
0809aa17 +0xc9:  add    $0x24,%eax
0809aa1a +0xcc:  mov    (%eax),%edx
0809aa1c +0xce:  mov    0x8(%ebp),%eax
0809aa1f +0xd1:  mov    %eax,(%esp)
0809aa22 +0xd4:  call   *%edx
0809aa24 +0xd6:  add    %eax,0x14(%ebp)
0809aa27 +0xd9:  addl   $0x1,-0xc(%ebp)
0809aa2b +0xdd:  mov    -0xc(%ebp),%eax
0809aa2e +0xe0:  cmp    -0x10(%ebp),%eax
0809aa31 +0xe3:  setl   %al
0809aa34 +0xe6:  test   %al,%al
0809aa36 +0xe8:  jne    0809a9e4 <+0x96>
0809aa38 +0xea:  mov    $0x6fffffff,%eax
0809aa3d +0xef:  leave
0809aa3e +0xf0:  ret
0809aa3f +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoKasumi::Decrypt @ 0x809a94e

/* CNCryptoKasumi::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKasumi::Decrypt(CNCryptoKasumi *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          kasumi_ecb_decrypt(param_1,param_3,psVar1);
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
