# Encrypt

`_ZN15CNCryptoNoekeon7EncryptEPKhiPhi`

`CNCryptoNoekeon::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoNoekeon` | `0x0809b948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809b948  _ZN15CNCryptoNoekeon7EncryptEPKhiPhi
#           CNCryptoNoekeon::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809b948, 0x0809ba39]
0809b948 +0x00:  push   %ebp
0809b949 +0x01:  mov    %esp,%ebp
0809b94b +0x03:  sub    $0x38,%esp
0809b94e +0x06:  mov    0x8(%ebp),%eax
0809b951 +0x09:  mov    0x8(%eax),%eax
0809b954 +0x0c:  test   %eax,%eax
0809b956 +0x0e:  jne    0809b962 <+0x1a>
0809b958 +0x10:  mov    $0x7000000c,%eax
0809b95d +0x15:  jmp    0809ba37 <+0xef>
0809b962 +0x1a:  mov    0x8(%ebp),%eax
0809b965 +0x1d:  mov    (%eax),%eax
0809b967 +0x1f:  add    $0x24,%eax
0809b96a +0x22:  mov    (%eax),%edx
0809b96c +0x24:  mov    0x8(%ebp),%eax
0809b96f +0x27:  mov    %eax,(%esp)
0809b972 +0x2a:  call   *%edx
0809b974 +0x2c:  mov    %eax,-0x20(%ebp)
0809b977 +0x2f:  mov    0x10(%ebp),%edx
0809b97a +0x32:  mov    %edx,%eax
0809b97c +0x34:  sar    $0x1f,%edx
0809b97f +0x37:  idivl  -0x20(%ebp)
0809b982 +0x3a:  mov    %edx,%eax
0809b984 +0x3c:  test   %eax,%eax
0809b986 +0x3e:  setne  %al
0809b989 +0x41:  test   %al,%al
0809b98b +0x43:  je     0809b997 <+0x4f>
0809b98d +0x45:  mov    $0x70000006,%eax
0809b992 +0x4a:  jmp    0809ba37 <+0xef>
0809b997 +0x4f:  mov    0x10(%ebp),%eax
0809b99a +0x52:  cmp    0x18(%ebp),%eax
0809b99d +0x55:  jle    0809b9a9 <+0x61>
0809b99f +0x57:  mov    $0x7000000a,%eax
0809b9a4 +0x5c:  jmp    0809ba37 <+0xef>
0809b9a9 +0x61:  mov    0x8(%ebp),%eax
0809b9ac +0x64:  mov    0x8(%eax),%eax
0809b9af +0x67:  mov    %eax,-0x14(%ebp)
0809b9b2 +0x6a:  mov    0x8(%ebp),%eax
0809b9b5 +0x6d:  mov    (%eax),%eax
0809b9b7 +0x6f:  add    $0x24,%eax
0809b9ba +0x72:  mov    (%eax),%edx
0809b9bc +0x74:  mov    0x8(%ebp),%eax
0809b9bf +0x77:  mov    %eax,(%esp)
0809b9c2 +0x7a:  call   *%edx
0809b9c4 +0x7c:  mov    %eax,-0x1c(%ebp)
0809b9c7 +0x7f:  mov    0x10(%ebp),%eax
0809b9ca +0x82:  mov    %eax,%edx
0809b9cc +0x84:  sar    $0x1f,%edx
0809b9cf +0x87:  idivl  -0x1c(%ebp)
0809b9d2 +0x8a:  mov    %eax,-0x10(%ebp)
0809b9d5 +0x8d:  movl   $0x0,-0xc(%ebp)
0809b9dc +0x94:  jmp    0809ba25 <+0xdd>
0809b9de +0x96:  mov    -0x14(%ebp),%eax
0809b9e1 +0x99:  mov    %eax,0x8(%esp)
0809b9e5 +0x9d:  mov    0x14(%ebp),%eax
0809b9e8 +0xa0:  mov    %eax,0x4(%esp)
0809b9ec +0xa4:  mov    0xc(%ebp),%eax
0809b9ef +0xa7:  mov    %eax,(%esp)
0809b9f2 +0xaa:  call   080b5669 <_Z19noekeon_ecb_encryptPKhPhP13symmetric_key>  ; noekeon_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809b9f7 +0xaf:  mov    0x8(%ebp),%eax
0809b9fa +0xb2:  mov    (%eax),%eax
0809b9fc +0xb4:  add    $0x24,%eax
0809b9ff +0xb7:  mov    (%eax),%edx
0809ba01 +0xb9:  mov    0x8(%ebp),%eax
0809ba04 +0xbc:  mov    %eax,(%esp)
0809ba07 +0xbf:  call   *%edx
0809ba09 +0xc1:  add    %eax,0xc(%ebp)
0809ba0c +0xc4:  mov    0x8(%ebp),%eax
0809ba0f +0xc7:  mov    (%eax),%eax
0809ba11 +0xc9:  add    $0x24,%eax
0809ba14 +0xcc:  mov    (%eax),%edx
0809ba16 +0xce:  mov    0x8(%ebp),%eax
0809ba19 +0xd1:  mov    %eax,(%esp)
0809ba1c +0xd4:  call   *%edx
0809ba1e +0xd6:  add    %eax,0x14(%ebp)
0809ba21 +0xd9:  addl   $0x1,-0xc(%ebp)
0809ba25 +0xdd:  mov    -0xc(%ebp),%eax
0809ba28 +0xe0:  cmp    -0x10(%ebp),%eax
0809ba2b +0xe3:  setl   %al
0809ba2e +0xe6:  test   %al,%al
0809ba30 +0xe8:  jne    0809b9de <+0x96>
0809ba32 +0xea:  mov    $0x6fffffff,%eax
0809ba37 +0xef:  leave
0809ba38 +0xf0:  ret
0809ba39 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoNoekeon::Encrypt @ 0x809b948

/* CNCryptoNoekeon::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoNoekeon::Encrypt
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
          noekeon_ecb_encrypt(param_1,param_3,psVar1);
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
