# Encrypt

`_ZN15CNCryptoTwoFish7EncryptEPKhiPhi`

`CNCryptoTwoFish::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTwoFish` | `0x0809d6d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d6d4  _ZN15CNCryptoTwoFish7EncryptEPKhiPhi
#           CNCryptoTwoFish::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809d6d4, 0x0809d7c5]
0809d6d4 +0x00:  push   %ebp
0809d6d5 +0x01:  mov    %esp,%ebp
0809d6d7 +0x03:  sub    $0x38,%esp
0809d6da +0x06:  mov    0x8(%ebp),%eax
0809d6dd +0x09:  mov    0x8(%eax),%eax
0809d6e0 +0x0c:  test   %eax,%eax
0809d6e2 +0x0e:  jne    0809d6ee <+0x1a>
0809d6e4 +0x10:  mov    $0x7000000c,%eax
0809d6e9 +0x15:  jmp    0809d7c3 <+0xef>
0809d6ee +0x1a:  mov    0x8(%ebp),%eax
0809d6f1 +0x1d:  mov    (%eax),%eax
0809d6f3 +0x1f:  add    $0x24,%eax
0809d6f6 +0x22:  mov    (%eax),%edx
0809d6f8 +0x24:  mov    0x8(%ebp),%eax
0809d6fb +0x27:  mov    %eax,(%esp)
0809d6fe +0x2a:  call   *%edx
0809d700 +0x2c:  mov    %eax,-0x20(%ebp)
0809d703 +0x2f:  mov    0x10(%ebp),%edx
0809d706 +0x32:  mov    %edx,%eax
0809d708 +0x34:  sar    $0x1f,%edx
0809d70b +0x37:  idivl  -0x20(%ebp)
0809d70e +0x3a:  mov    %edx,%eax
0809d710 +0x3c:  test   %eax,%eax
0809d712 +0x3e:  setne  %al
0809d715 +0x41:  test   %al,%al
0809d717 +0x43:  je     0809d723 <+0x4f>
0809d719 +0x45:  mov    $0x70000006,%eax
0809d71e +0x4a:  jmp    0809d7c3 <+0xef>
0809d723 +0x4f:  mov    0x10(%ebp),%eax
0809d726 +0x52:  cmp    0x18(%ebp),%eax
0809d729 +0x55:  jle    0809d735 <+0x61>
0809d72b +0x57:  mov    $0x7000000a,%eax
0809d730 +0x5c:  jmp    0809d7c3 <+0xef>
0809d735 +0x61:  mov    0x8(%ebp),%eax
0809d738 +0x64:  mov    0x8(%eax),%eax
0809d73b +0x67:  mov    %eax,-0x14(%ebp)
0809d73e +0x6a:  mov    0x8(%ebp),%eax
0809d741 +0x6d:  mov    (%eax),%eax
0809d743 +0x6f:  add    $0x24,%eax
0809d746 +0x72:  mov    (%eax),%edx
0809d748 +0x74:  mov    0x8(%ebp),%eax
0809d74b +0x77:  mov    %eax,(%esp)
0809d74e +0x7a:  call   *%edx
0809d750 +0x7c:  mov    %eax,-0x1c(%ebp)
0809d753 +0x7f:  mov    0x10(%ebp),%eax
0809d756 +0x82:  mov    %eax,%edx
0809d758 +0x84:  sar    $0x1f,%edx
0809d75b +0x87:  idivl  -0x1c(%ebp)
0809d75e +0x8a:  mov    %eax,-0x10(%ebp)
0809d761 +0x8d:  movl   $0x0,-0xc(%ebp)
0809d768 +0x94:  jmp    0809d7b1 <+0xdd>
0809d76a +0x96:  mov    -0x14(%ebp),%eax
0809d76d +0x99:  mov    %eax,0x8(%esp)
0809d771 +0x9d:  mov    0x14(%ebp),%eax
0809d774 +0xa0:  mov    %eax,0x4(%esp)
0809d778 +0xa4:  mov    0xc(%ebp),%eax
0809d77b +0xa7:  mov    %eax,(%esp)
0809d77e +0xaa:  call   080c4e48 <_Z19twofish_ecb_encryptPKhPhP13symmetric_key>  ; twofish_ecb_encrypt(unsigned char const*, unsigned char*, symmetric_key*)
0809d783 +0xaf:  mov    0x8(%ebp),%eax
0809d786 +0xb2:  mov    (%eax),%eax
0809d788 +0xb4:  add    $0x24,%eax
0809d78b +0xb7:  mov    (%eax),%edx
0809d78d +0xb9:  mov    0x8(%ebp),%eax
0809d790 +0xbc:  mov    %eax,(%esp)
0809d793 +0xbf:  call   *%edx
0809d795 +0xc1:  add    %eax,0xc(%ebp)
0809d798 +0xc4:  mov    0x8(%ebp),%eax
0809d79b +0xc7:  mov    (%eax),%eax
0809d79d +0xc9:  add    $0x24,%eax
0809d7a0 +0xcc:  mov    (%eax),%edx
0809d7a2 +0xce:  mov    0x8(%ebp),%eax
0809d7a5 +0xd1:  mov    %eax,(%esp)
0809d7a8 +0xd4:  call   *%edx
0809d7aa +0xd6:  add    %eax,0x14(%ebp)
0809d7ad +0xd9:  addl   $0x1,-0xc(%ebp)
0809d7b1 +0xdd:  mov    -0xc(%ebp),%eax
0809d7b4 +0xe0:  cmp    -0x10(%ebp),%eax
0809d7b7 +0xe3:  setl   %al
0809d7ba +0xe6:  test   %al,%al
0809d7bc +0xe8:  jne    0809d76a <+0x96>
0809d7be +0xea:  mov    $0x6fffffff,%eax
0809d7c3 +0xef:  leave
0809d7c4 +0xf0:  ret
0809d7c5 +0xf1:  nop
```

## 反编译 C

```c
// CNCryptoTwoFish::Encrypt @ 0x809d6d4

/* CNCryptoTwoFish::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTwoFish::Encrypt
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
          twofish_ecb_encrypt(param_1,param_3,psVar1);
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
