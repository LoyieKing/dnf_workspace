# Decrypt

`_ZN15CNCryptoNoekeon7DecryptEPKhiPhi`

`CNCryptoNoekeon::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809ba3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809ba3a  _ZN15CNCryptoNoekeon7DecryptEPKhiPhi
#           CNCryptoNoekeon::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809ba3a, 0x0809bb2b]
0809ba3a +0x00:  push   %ebp
0809ba3b +0x01:  mov    %esp,%ebp
0809ba3d +0x03:  sub    $0x38,%esp
0809ba40 +0x06:  mov    0x8(%ebp),%eax
0809ba43 +0x09:  mov    0x8(%eax),%eax
0809ba46 +0x0c:  test   %eax,%eax
0809ba48 +0x0e:  jne    0809ba54 <+0x1a>
0809ba4a +0x10:  mov    $0x7000000c,%eax
0809ba4f +0x15:  jmp    0809bb29 <+0xef>
0809ba54 +0x1a:  mov    0x8(%ebp),%eax
0809ba57 +0x1d:  mov    (%eax),%eax
0809ba59 +0x1f:  add    $0x24,%eax
0809ba5c +0x22:  mov    (%eax),%edx
0809ba5e +0x24:  mov    0x8(%ebp),%eax
0809ba61 +0x27:  mov    %eax,(%esp)
0809ba64 +0x2a:  call   *%edx
0809ba66 +0x2c:  mov    %eax,-0x20(%ebp)
0809ba69 +0x2f:  mov    0x10(%ebp),%edx
0809ba6c +0x32:  mov    %edx,%eax
0809ba6e +0x34:  sar    $0x1f,%edx
0809ba71 +0x37:  idivl  -0x20(%ebp)
0809ba74 +0x3a:  mov    %edx,%eax
0809ba76 +0x3c:  test   %eax,%eax
0809ba78 +0x3e:  setne  %al
0809ba7b +0x41:  test   %al,%al
0809ba7d +0x43:  je     0809ba89 <+0x4f>
0809ba7f +0x45:  mov    $0x7000000a,%eax
0809ba84 +0x4a:  jmp    0809bb29 <+0xef>
0809ba89 +0x4f:  mov    0x10(%ebp),%eax
0809ba8c +0x52:  cmp    0x18(%ebp),%eax
0809ba8f +0x55:  jle    0809ba9b <+0x61>
0809ba91 +0x57:  mov    $0x7000000a,%eax
0809ba96 +0x5c:  jmp    0809bb29 <+0xef>
0809ba9b +0x61:  mov    0x8(%ebp),%eax
0809ba9e +0x64:  mov    0x8(%eax),%eax
0809baa1 +0x67:  mov    %eax,-0x14(%ebp)
0809baa4 +0x6a:  mov    0x8(%ebp),%eax
0809baa7 +0x6d:  mov    (%eax),%eax
0809baa9 +0x6f:  add    $0x24,%eax
0809baac +0x72:  mov    (%eax),%edx
0809baae +0x74:  mov    0x8(%ebp),%eax
0809bab1 +0x77:  mov    %eax,(%esp)
0809bab4 +0x7a:  call   *%edx
0809bab6 +0x7c:  mov    %eax,-0x1c(%ebp)
0809bab9 +0x7f:  mov    0x10(%ebp),%eax
0809babc +0x82:  mov    %eax,%edx
0809babe +0x84:  sar    $0x1f,%edx
0809bac1 +0x87:  idivl  -0x1c(%ebp)
0809bac4 +0x8a:  mov    %eax,-0x10(%ebp)
0809bac7 +0x8d:  movl   $0x0,-0xc(%ebp)
0809bace +0x94:  jmp    0809bb17 <+0xdd>
0809bad0 +0x96:  mov    -0x14(%ebp),%eax
0809bad3 +0x99:  mov    %eax,0x8(%esp)
0809bad7 +0x9d:  mov    0x14(%ebp),%eax
0809bada +0xa0:  mov    %eax,0x4(%esp)
0809bade +0xa4:  mov    0xc(%ebp),%eax
0809bae1 +0xa7:  mov    %eax,(%esp)
0809bae4 +0xaa:  call   080b5ae2 <_Z19noekeon_ecb_decryptPKhPhP13symmetric_key>  ; noekeon_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809bae9 +0xaf:  mov    0x8(%ebp),%eax
0809baec +0xb2:  mov    (%eax),%eax
0809baee +0xb4:  add    $0x24,%eax
0809baf1 +0xb7:  mov    (%eax),%edx
0809baf3 +0xb9:  mov    0x8(%ebp),%eax
0809baf6 +0xbc:  mov    %eax,(%esp)
0809baf9 +0xbf:  call   *%edx
0809bafb +0xc1:  add    %eax,0xc(%ebp)
0809bafe +0xc4:  mov    0x8(%ebp),%eax
0809bb01 +0xc7:  mov    (%eax),%eax
0809bb03 +0xc9:  add    $0x24,%eax
0809bb06 +0xcc:  mov    (%eax),%edx
0809bb08 +0xce:  mov    0x8(%ebp),%eax
0809bb0b +0xd1:  mov    %eax,(%esp)
0809bb0e +0xd4:  call   *%edx
0809bb10 +0xd6:  add    %eax,0x14(%ebp)
0809bb13 +0xd9:  addl   $0x1,-0xc(%ebp)
0809bb17 +0xdd:  mov    -0xc(%ebp),%eax
0809bb1a +0xe0:  cmp    -0x10(%ebp),%eax
0809bb1d +0xe3:  setl   %al
0809bb20 +0xe6:  test   %al,%al
0809bb22 +0xe8:  jne    0809bad0 <+0x96>
0809bb24 +0xea:  mov    $0x6fffffff,%eax
0809bb29 +0xef:  leave
0809bb2a +0xf0:  ret
0809bb2b +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::Decrypt @ 0x809ba3a

/* CNCryptoNoekeon::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoNoekeon::Decrypt
          (CNCryptoNoekeon *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          noekeon_ecb_decrypt(param_1,param_3,psVar1);
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
