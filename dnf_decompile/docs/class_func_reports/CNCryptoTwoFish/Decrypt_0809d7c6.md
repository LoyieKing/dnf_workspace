# Decrypt

`_ZN15CNCryptoTwoFish7DecryptEPKhiPhi`

`CNCryptoTwoFish::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d7c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d7c6  _ZN15CNCryptoTwoFish7DecryptEPKhiPhi
#           CNCryptoTwoFish::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809d7c6, 0x0809d8b7]
0809d7c6 +0x00:  push   %ebp
0809d7c7 +0x01:  mov    %esp,%ebp
0809d7c9 +0x03:  sub    $0x38,%esp
0809d7cc +0x06:  mov    0x8(%ebp),%eax
0809d7cf +0x09:  mov    0x8(%eax),%eax
0809d7d2 +0x0c:  test   %eax,%eax
0809d7d4 +0x0e:  jne    0809d7e0 <+0x1a>
0809d7d6 +0x10:  mov    $0x7000000c,%eax
0809d7db +0x15:  jmp    0809d8b5 <+0xef>
0809d7e0 +0x1a:  mov    0x8(%ebp),%eax
0809d7e3 +0x1d:  mov    (%eax),%eax
0809d7e5 +0x1f:  add    $0x24,%eax
0809d7e8 +0x22:  mov    (%eax),%edx
0809d7ea +0x24:  mov    0x8(%ebp),%eax
0809d7ed +0x27:  mov    %eax,(%esp)
0809d7f0 +0x2a:  call   *%edx
0809d7f2 +0x2c:  mov    %eax,-0x20(%ebp)
0809d7f5 +0x2f:  mov    0x10(%ebp),%edx
0809d7f8 +0x32:  mov    %edx,%eax
0809d7fa +0x34:  sar    $0x1f,%edx
0809d7fd +0x37:  idivl  -0x20(%ebp)
0809d800 +0x3a:  mov    %edx,%eax
0809d802 +0x3c:  test   %eax,%eax
0809d804 +0x3e:  setne  %al
0809d807 +0x41:  test   %al,%al
0809d809 +0x43:  je     0809d815 <+0x4f>
0809d80b +0x45:  mov    $0x70000006,%eax
0809d810 +0x4a:  jmp    0809d8b5 <+0xef>
0809d815 +0x4f:  mov    0x10(%ebp),%eax
0809d818 +0x52:  cmp    0x18(%ebp),%eax
0809d81b +0x55:  jle    0809d827 <+0x61>
0809d81d +0x57:  mov    $0x7000000a,%eax
0809d822 +0x5c:  jmp    0809d8b5 <+0xef>
0809d827 +0x61:  mov    0x8(%ebp),%eax
0809d82a +0x64:  mov    0x8(%eax),%eax
0809d82d +0x67:  mov    %eax,-0x14(%ebp)
0809d830 +0x6a:  mov    0x8(%ebp),%eax
0809d833 +0x6d:  mov    (%eax),%eax
0809d835 +0x6f:  add    $0x24,%eax
0809d838 +0x72:  mov    (%eax),%edx
0809d83a +0x74:  mov    0x8(%ebp),%eax
0809d83d +0x77:  mov    %eax,(%esp)
0809d840 +0x7a:  call   *%edx
0809d842 +0x7c:  mov    %eax,-0x1c(%ebp)
0809d845 +0x7f:  mov    0x10(%ebp),%eax
0809d848 +0x82:  mov    %eax,%edx
0809d84a +0x84:  sar    $0x1f,%edx
0809d84d +0x87:  idivl  -0x1c(%ebp)
0809d850 +0x8a:  mov    %eax,-0x10(%ebp)
0809d853 +0x8d:  movl   $0x0,-0xc(%ebp)
0809d85a +0x94:  jmp    0809d8a3 <+0xdd>
0809d85c +0x96:  mov    -0x14(%ebp),%eax
0809d85f +0x99:  mov    %eax,0x8(%esp)
0809d863 +0x9d:  mov    0x14(%ebp),%eax
0809d866 +0xa0:  mov    %eax,0x4(%esp)
0809d86a +0xa4:  mov    0xc(%ebp),%eax
0809d86d +0xa7:  mov    %eax,(%esp)
0809d870 +0xaa:  call   080c52f5 <_Z19twofish_ecb_decryptPKhPhP13symmetric_key>  ; twofish_ecb_decrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809d875 +0xaf:  mov    0x8(%ebp),%eax
0809d878 +0xb2:  mov    (%eax),%eax
0809d87a +0xb4:  add    $0x24,%eax
0809d87d +0xb7:  mov    (%eax),%edx
0809d87f +0xb9:  mov    0x8(%ebp),%eax
0809d882 +0xbc:  mov    %eax,(%esp)
0809d885 +0xbf:  call   *%edx
0809d887 +0xc1:  add    %eax,0x14(%ebp)
0809d88a +0xc4:  mov    0x8(%ebp),%eax
0809d88d +0xc7:  mov    (%eax),%eax
0809d88f +0xc9:  add    $0x24,%eax
0809d892 +0xcc:  mov    (%eax),%edx
0809d894 +0xce:  mov    0x8(%ebp),%eax
0809d897 +0xd1:  mov    %eax,(%esp)
0809d89a +0xd4:  call   *%edx
0809d89c +0xd6:  add    %eax,0xc(%ebp)
0809d89f +0xd9:  addl   $0x1,-0xc(%ebp)
0809d8a3 +0xdd:  mov    -0xc(%ebp),%eax
0809d8a6 +0xe0:  cmp    -0x10(%ebp),%eax
0809d8a9 +0xe3:  setl   %al
0809d8ac +0xe6:  test   %al,%al
0809d8ae +0xe8:  jne    0809d85c <+0x96>
0809d8b0 +0xea:  mov    $0x6fffffff,%eax
0809d8b5 +0xef:  leave
0809d8b6 +0xf0:  ret
0809d8b7 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoTwoFish::Decrypt @ 0x809d7c6

/* CNCryptoTwoFish::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTwoFish::Decrypt
          (CNCryptoTwoFish *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          twofish_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
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
