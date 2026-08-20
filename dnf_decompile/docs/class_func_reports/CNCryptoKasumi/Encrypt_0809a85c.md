# Encrypt

`_ZN14CNCryptoKasumi7EncryptEPKhiPhi`

`CNCryptoKasumi::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a85c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a85c  _ZN14CNCryptoKasumi7EncryptEPKhiPhi
#           CNCryptoKasumi::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809a85c, 0x0809a94d]
0809a85c +0x00:  push   %ebp
0809a85d +0x01:  mov    %esp,%ebp
0809a85f +0x03:  sub    $0x38,%esp
0809a862 +0x06:  mov    0x8(%ebp),%eax
0809a865 +0x09:  mov    0x8(%eax),%eax
0809a868 +0x0c:  test   %eax,%eax
0809a86a +0x0e:  jne    0809a876 <+0x1a>
0809a86c +0x10:  mov    $0x7000000c,%eax
0809a871 +0x15:  jmp    0809a94b <+0xef>
0809a876 +0x1a:  mov    0x8(%ebp),%eax
0809a879 +0x1d:  mov    (%eax),%eax
0809a87b +0x1f:  add    $0x24,%eax
0809a87e +0x22:  mov    (%eax),%edx
0809a880 +0x24:  mov    0x8(%ebp),%eax
0809a883 +0x27:  mov    %eax,(%esp)
0809a886 +0x2a:  call   *%edx
0809a888 +0x2c:  mov    %eax,-0x20(%ebp)
0809a88b +0x2f:  mov    0x10(%ebp),%edx
0809a88e +0x32:  mov    %edx,%eax
0809a890 +0x34:  sar    $0x1f,%edx
0809a893 +0x37:  idivl  -0x20(%ebp)
0809a896 +0x3a:  mov    %edx,%eax
0809a898 +0x3c:  test   %eax,%eax
0809a89a +0x3e:  setne  %al
0809a89d +0x41:  test   %al,%al
0809a89f +0x43:  je     0809a8ab <+0x4f>
0809a8a1 +0x45:  mov    $0x70000006,%eax
0809a8a6 +0x4a:  jmp    0809a94b <+0xef>
0809a8ab +0x4f:  mov    0x10(%ebp),%eax
0809a8ae +0x52:  cmp    0x18(%ebp),%eax
0809a8b1 +0x55:  jle    0809a8bd <+0x61>
0809a8b3 +0x57:  mov    $0x7000000a,%eax
0809a8b8 +0x5c:  jmp    0809a94b <+0xef>
0809a8bd +0x61:  mov    0x8(%ebp),%eax
0809a8c0 +0x64:  mov    0x8(%eax),%eax
0809a8c3 +0x67:  mov    %eax,-0x14(%ebp)
0809a8c6 +0x6a:  mov    0x8(%ebp),%eax
0809a8c9 +0x6d:  mov    (%eax),%eax
0809a8cb +0x6f:  add    $0x24,%eax
0809a8ce +0x72:  mov    (%eax),%edx
0809a8d0 +0x74:  mov    0x8(%ebp),%eax
0809a8d3 +0x77:  mov    %eax,(%esp)
0809a8d6 +0x7a:  call   *%edx
0809a8d8 +0x7c:  mov    %eax,-0x1c(%ebp)
0809a8db +0x7f:  mov    0x10(%ebp),%eax
0809a8de +0x82:  mov    %eax,%edx
0809a8e0 +0x84:  sar    $0x1f,%edx
0809a8e3 +0x87:  idivl  -0x1c(%ebp)
0809a8e6 +0x8a:  mov    %eax,-0x10(%ebp)
0809a8e9 +0x8d:  movl   $0x0,-0xc(%ebp)
0809a8f0 +0x94:  jmp    0809a939 <+0xdd>
0809a8f2 +0x96:  mov    -0x14(%ebp),%eax
0809a8f5 +0x99:  mov    %eax,0x8(%esp)
0809a8f9 +0x9d:  mov    0x14(%ebp),%eax
0809a8fc +0xa0:  mov    %eax,0x4(%esp)
0809a900 +0xa4:  mov    0xc(%ebp),%eax
0809a903 +0xa7:  mov    %eax,(%esp)
0809a906 +0xaa:  call   080b16f2 <_Z18kasumi_ecb_encryptPKhPhP13symmetric_key>  ; kasumi_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a90b +0xaf:  mov    0x8(%ebp),%eax
0809a90e +0xb2:  mov    (%eax),%eax
0809a910 +0xb4:  add    $0x24,%eax
0809a913 +0xb7:  mov    (%eax),%edx
0809a915 +0xb9:  mov    0x8(%ebp),%eax
0809a918 +0xbc:  mov    %eax,(%esp)
0809a91b +0xbf:  call   *%edx
0809a91d +0xc1:  add    %eax,0xc(%ebp)
0809a920 +0xc4:  mov    0x8(%ebp),%eax
0809a923 +0xc7:  mov    (%eax),%eax
0809a925 +0xc9:  add    $0x24,%eax
0809a928 +0xcc:  mov    (%eax),%edx
0809a92a +0xce:  mov    0x8(%ebp),%eax
0809a92d +0xd1:  mov    %eax,(%esp)
0809a930 +0xd4:  call   *%edx
0809a932 +0xd6:  add    %eax,0x14(%ebp)
0809a935 +0xd9:  addl   $0x1,-0xc(%ebp)
0809a939 +0xdd:  mov    -0xc(%ebp),%eax
0809a93c +0xe0:  cmp    -0x10(%ebp),%eax
0809a93f +0xe3:  setl   %al
0809a942 +0xe6:  test   %al,%al
0809a944 +0xe8:  jne    0809a8f2 <+0x96>
0809a946 +0xea:  mov    $0x6fffffff,%eax
0809a94b +0xef:  leave
0809a94c +0xf0:  ret
0809a94d +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoKasumi::Encrypt @ 0x809a85c

/* CNCryptoKasumi::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKasumi::Encrypt(CNCryptoKasumi *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          kasumi_ecb_encrypt(param_1,param_3,psVar1);
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
