# Encrypt

`_ZN14CNCryptoKasumi7EncryptEPhi`

`CNCryptoKasumi::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoKasumi` | `0x0809a6ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809a6ac  _ZN14CNCryptoKasumi7EncryptEPhi
#           CNCryptoKasumi::Encrypt(unsigned char*, int)
# range [0x0809a6ac, 0x0809a783]
0809a6ac +0x00:  push   %ebp
0809a6ad +0x01:  mov    %esp,%ebp
0809a6af +0x03:  sub    $0x38,%esp
0809a6b2 +0x06:  mov    0x8(%ebp),%eax
0809a6b5 +0x09:  mov    0x8(%eax),%eax
0809a6b8 +0x0c:  test   %eax,%eax
0809a6ba +0x0e:  jne    0809a6c6 <+0x1a>
0809a6bc +0x10:  mov    $0x7000000c,%eax
0809a6c1 +0x15:  jmp    0809a781 <+0xd5>
0809a6c6 +0x1a:  mov    0x8(%ebp),%eax
0809a6c9 +0x1d:  mov    (%eax),%eax
0809a6cb +0x1f:  add    $0x24,%eax
0809a6ce +0x22:  mov    (%eax),%edx
0809a6d0 +0x24:  mov    0x8(%ebp),%eax
0809a6d3 +0x27:  mov    %eax,(%esp)
0809a6d6 +0x2a:  call   *%edx
0809a6d8 +0x2c:  mov    %eax,-0x20(%ebp)
0809a6db +0x2f:  mov    0x10(%ebp),%edx
0809a6de +0x32:  mov    %edx,%eax
0809a6e0 +0x34:  sar    $0x1f,%edx
0809a6e3 +0x37:  idivl  -0x20(%ebp)
0809a6e6 +0x3a:  mov    %edx,%eax
0809a6e8 +0x3c:  test   %eax,%eax
0809a6ea +0x3e:  setne  %al
0809a6ed +0x41:  test   %al,%al
0809a6ef +0x43:  je     0809a6fb <+0x4f>
0809a6f1 +0x45:  mov    $0x70000006,%eax
0809a6f6 +0x4a:  jmp    0809a781 <+0xd5>
0809a6fb +0x4f:  cmpl   $0x0,0x10(%ebp)
0809a6ff +0x53:  jg     0809a708 <+0x5c>
0809a701 +0x55:  mov    $0x7000000a,%eax
0809a706 +0x5a:  jmp    0809a781 <+0xd5>
0809a708 +0x5c:  mov    0x8(%ebp),%eax
0809a70b +0x5f:  mov    0x8(%eax),%eax
0809a70e +0x62:  mov    %eax,-0x14(%ebp)
0809a711 +0x65:  mov    0x8(%ebp),%eax
0809a714 +0x68:  mov    (%eax),%eax
0809a716 +0x6a:  add    $0x24,%eax
0809a719 +0x6d:  mov    (%eax),%edx
0809a71b +0x6f:  mov    0x8(%ebp),%eax
0809a71e +0x72:  mov    %eax,(%esp)
0809a721 +0x75:  call   *%edx
0809a723 +0x77:  mov    %eax,-0x1c(%ebp)
0809a726 +0x7a:  mov    0x10(%ebp),%eax
0809a729 +0x7d:  mov    %eax,%edx
0809a72b +0x7f:  sar    $0x1f,%edx
0809a72e +0x82:  idivl  -0x1c(%ebp)
0809a731 +0x85:  mov    %eax,-0x10(%ebp)
0809a734 +0x88:  movl   $0x0,-0xc(%ebp)
0809a73b +0x8f:  jmp    0809a76f <+0xc3>
0809a73d +0x91:  mov    -0x14(%ebp),%eax
0809a740 +0x94:  mov    %eax,0x8(%esp)
0809a744 +0x98:  mov    0xc(%ebp),%eax
0809a747 +0x9b:  mov    %eax,0x4(%esp)
0809a74b +0x9f:  mov    0xc(%ebp),%eax
0809a74e +0xa2:  mov    %eax,(%esp)
0809a751 +0xa5:  call   080b16f2 <_Z18kasumi_ecb_encryptPKhPhP13symmetric_key>  ; kasumi_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809a756 +0xaa:  mov    0x8(%ebp),%eax
0809a759 +0xad:  mov    (%eax),%eax
0809a75b +0xaf:  add    $0x24,%eax
0809a75e +0xb2:  mov    (%eax),%edx
0809a760 +0xb4:  mov    0x8(%ebp),%eax
0809a763 +0xb7:  mov    %eax,(%esp)
0809a766 +0xba:  call   *%edx
0809a768 +0xbc:  add    %eax,0xc(%ebp)
0809a76b +0xbf:  addl   $0x1,-0xc(%ebp)
0809a76f +0xc3:  mov    -0xc(%ebp),%eax
0809a772 +0xc6:  cmp    -0x10(%ebp),%eax
0809a775 +0xc9:  setl   %al
0809a778 +0xcc:  test   %al,%al
0809a77a +0xce:  jne    0809a73d <+0x91>
0809a77c +0xd0:  mov    $0x6fffffff,%eax
0809a781 +0xd5:  leave
0809a782 +0xd6:  ret
0809a783 +0xd7:  nop
```

## 反编译 C

```c
// CNCryptoKasumi::Encrypt @ 0x809a6ac

/* CNCryptoKasumi::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKasumi::Encrypt(CNCryptoKasumi *this,uchar *param_1,int param_2)

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
          kasumi_ecb_encrypt(param_1,param_1,psVar1);
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
