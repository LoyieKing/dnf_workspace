# Decrypt

`_ZN15CNCryptoNoekeon7DecryptEPhi`

`CNCryptoNoekeon::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b870` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b870  _ZN15CNCryptoNoekeon7DecryptEPhi
#           CNCryptoNoekeon::Decrypt(unsigned char*, int)
# range [0x0809b870, 0x0809b947]
0809b870 +0x00:  push   %ebp
0809b871 +0x01:  mov    %esp,%ebp
0809b873 +0x03:  sub    $0x38,%esp
0809b876 +0x06:  mov    0x8(%ebp),%eax
0809b879 +0x09:  mov    0x8(%eax),%eax
0809b87c +0x0c:  test   %eax,%eax
0809b87e +0x0e:  jne    0809b88a <+0x1a>
0809b880 +0x10:  mov    $0x7000000c,%eax
0809b885 +0x15:  jmp    0809b945 <+0xd5>
0809b88a +0x1a:  mov    0x8(%ebp),%eax
0809b88d +0x1d:  mov    (%eax),%eax
0809b88f +0x1f:  add    $0x24,%eax
0809b892 +0x22:  mov    (%eax),%edx
0809b894 +0x24:  mov    0x8(%ebp),%eax
0809b897 +0x27:  mov    %eax,(%esp)
0809b89a +0x2a:  call   *%edx
0809b89c +0x2c:  mov    %eax,-0x20(%ebp)
0809b89f +0x2f:  mov    0x10(%ebp),%edx
0809b8a2 +0x32:  mov    %edx,%eax
0809b8a4 +0x34:  sar    $0x1f,%edx
0809b8a7 +0x37:  idivl  -0x20(%ebp)
0809b8aa +0x3a:  mov    %edx,%eax
0809b8ac +0x3c:  test   %eax,%eax
0809b8ae +0x3e:  setne  %al
0809b8b1 +0x41:  test   %al,%al
0809b8b3 +0x43:  je     0809b8bf <+0x4f>
0809b8b5 +0x45:  mov    $0x70000006,%eax
0809b8ba +0x4a:  jmp    0809b945 <+0xd5>
0809b8bf +0x4f:  cmpl   $0x0,0x10(%ebp)
0809b8c3 +0x53:  jg     0809b8cc <+0x5c>
0809b8c5 +0x55:  mov    $0x7000000a,%eax
0809b8ca +0x5a:  jmp    0809b945 <+0xd5>
0809b8cc +0x5c:  mov    0x8(%ebp),%eax
0809b8cf +0x5f:  mov    0x8(%eax),%eax
0809b8d2 +0x62:  mov    %eax,-0x14(%ebp)
0809b8d5 +0x65:  mov    0x8(%ebp),%eax
0809b8d8 +0x68:  mov    (%eax),%eax
0809b8da +0x6a:  add    $0x24,%eax
0809b8dd +0x6d:  mov    (%eax),%edx
0809b8df +0x6f:  mov    0x8(%ebp),%eax
0809b8e2 +0x72:  mov    %eax,(%esp)
0809b8e5 +0x75:  call   *%edx
0809b8e7 +0x77:  mov    %eax,-0x1c(%ebp)
0809b8ea +0x7a:  mov    0x10(%ebp),%eax
0809b8ed +0x7d:  mov    %eax,%edx
0809b8ef +0x7f:  sar    $0x1f,%edx
0809b8f2 +0x82:  idivl  -0x1c(%ebp)
0809b8f5 +0x85:  mov    %eax,-0x10(%ebp)
0809b8f8 +0x88:  movl   $0x0,-0xc(%ebp)
0809b8ff +0x8f:  jmp    0809b933 <+0xc3>
0809b901 +0x91:  mov    -0x14(%ebp),%eax
0809b904 +0x94:  mov    %eax,0x8(%esp)
0809b908 +0x98:  mov    0xc(%ebp),%eax
0809b90b +0x9b:  mov    %eax,0x4(%esp)
0809b90f +0x9f:  mov    0xc(%ebp),%eax
0809b912 +0xa2:  mov    %eax,(%esp)
0809b915 +0xa5:  call   080b5ae2 <_Z19noekeon_ecb_decryptPKhPhP13symmetric_key>  ; noekeon_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b91a +0xaa:  mov    0x8(%ebp),%eax
0809b91d +0xad:  mov    (%eax),%eax
0809b91f +0xaf:  add    $0x24,%eax
0809b922 +0xb2:  mov    (%eax),%edx
0809b924 +0xb4:  mov    0x8(%ebp),%eax
0809b927 +0xb7:  mov    %eax,(%esp)
0809b92a +0xba:  call   *%edx
0809b92c +0xbc:  add    %eax,0xc(%ebp)
0809b92f +0xbf:  addl   $0x1,-0xc(%ebp)
0809b933 +0xc3:  mov    -0xc(%ebp),%eax
0809b936 +0xc6:  cmp    -0x10(%ebp),%eax
0809b939 +0xc9:  setl   %al
0809b93c +0xcc:  test   %al,%al
0809b93e +0xce:  jne    0809b901 <+0x91>
0809b940 +0xd0:  mov    $0x6fffffff,%eax
0809b945 +0xd5:  leave
0809b946 +0xd6:  ret
0809b947 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::Decrypt @ 0x809b870

/* CNCryptoNoekeon::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoNoekeon::Decrypt(CNCryptoNoekeon *this,uchar *param_1,int param_2)

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
          noekeon_ecb_decrypt(param_1,param_1,psVar1);
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
