# Encrypt

`_ZN13CNCryptoShift7EncryptEPKhiPhi`

`CNCryptoShift::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c6c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c6c8  _ZN13CNCryptoShift7EncryptEPKhiPhi
#           CNCryptoShift::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809c6c8, 0x0809c7af]
0809c6c8 +0x00:  push   %ebp
0809c6c9 +0x01:  mov    %esp,%ebp
0809c6cb +0x03:  sub    $0x48,%esp
0809c6ce +0x06:  mov    0x8(%ebp),%eax
0809c6d1 +0x09:  mov    0x8(%eax),%eax
0809c6d4 +0x0c:  cmp    $0x1f,%eax
0809c6d7 +0x0f:  jbe    0809c6e3 <+0x1b>
0809c6d9 +0x11:  mov    $0x7000000c,%eax
0809c6de +0x16:  jmp    0809c7ae <+0xe6>
0809c6e3 +0x1b:  mov    0x8(%ebp),%eax
0809c6e6 +0x1e:  mov    (%eax),%eax
0809c6e8 +0x20:  add    $0x24,%eax
0809c6eb +0x23:  mov    (%eax),%edx
0809c6ed +0x25:  mov    0x8(%ebp),%eax
0809c6f0 +0x28:  mov    %eax,(%esp)
0809c6f3 +0x2b:  call   *%edx
0809c6f5 +0x2d:  mov    %eax,-0x30(%ebp)
0809c6f8 +0x30:  mov    0x10(%ebp),%edx
0809c6fb +0x33:  mov    %edx,%eax
0809c6fd +0x35:  sar    $0x1f,%edx
0809c700 +0x38:  idivl  -0x30(%ebp)
0809c703 +0x3b:  mov    %edx,%eax
0809c705 +0x3d:  test   %eax,%eax
0809c707 +0x3f:  setne  %al
0809c70a +0x42:  test   %al,%al
0809c70c +0x44:  je     0809c718 <+0x50>
0809c70e +0x46:  mov    $0x70000006,%eax
0809c713 +0x4b:  jmp    0809c7ae <+0xe6>
0809c718 +0x50:  mov    0x10(%ebp),%eax
0809c71b +0x53:  cmp    0x18(%ebp),%eax
0809c71e +0x56:  jle    0809c72a <+0x62>
0809c720 +0x58:  mov    $0x7000000a,%eax
0809c725 +0x5d:  jmp    0809c7ae <+0xe6>
0809c72a +0x62:  mov    0xc(%ebp),%eax
0809c72d +0x65:  mov    %eax,-0x1c(%ebp)
0809c730 +0x68:  mov    0x14(%ebp),%eax
0809c733 +0x6b:  mov    %eax,-0x18(%ebp)
0809c736 +0x6e:  mov    0x8(%ebp),%eax
0809c739 +0x71:  mov    (%eax),%eax
0809c73b +0x73:  add    $0x24,%eax
0809c73e +0x76:  mov    (%eax),%edx
0809c740 +0x78:  mov    0x8(%ebp),%eax
0809c743 +0x7b:  mov    %eax,(%esp)
0809c746 +0x7e:  call   *%edx
0809c748 +0x80:  mov    %eax,-0x2c(%ebp)
0809c74b +0x83:  mov    0x10(%ebp),%eax
0809c74e +0x86:  mov    %eax,%edx
0809c750 +0x88:  sar    $0x1f,%edx
0809c753 +0x8b:  idivl  -0x2c(%ebp)
0809c756 +0x8e:  mov    %eax,-0x10(%ebp)
0809c759 +0x91:  movl   $0x0,-0xc(%ebp)
0809c760 +0x98:  jmp    0809c79c <+0xd4>
0809c762 +0x9a:  mov    -0x1c(%ebp),%eax
0809c765 +0x9d:  mov    (%eax),%eax
0809c767 +0x9f:  mov    %eax,-0x14(%ebp)
0809c76a +0xa2:  addl   $0x4,-0x1c(%ebp)
0809c76e +0xa6:  mov    0x8(%ebp),%eax
0809c771 +0xa9:  mov    0x8(%eax),%eax
0809c774 +0xac:  mov    %eax,0x4(%esp)
0809c778 +0xb0:  mov    -0x14(%ebp),%eax
0809c77b +0xb3:  mov    %eax,(%esp)
0809c77e +0xb6:  call   0809c42d <_ZL3RORji>  ; ROR(unsigned int, int)
0809c783 +0xbb:  mov    0x8(%ebp),%eax
0809c786 +0xbe:  mov    0xc(%eax),%eax
0809c789 +0xc1:  xor    %eax,-0x14(%ebp)
0809c78c +0xc4:  mov    -0x18(%ebp),%eax
0809c78f +0xc7:  mov    -0x14(%ebp),%edx
0809c792 +0xca:  mov    %edx,(%eax)
0809c794 +0xcc:  addl   $0x4,-0x18(%ebp)
0809c798 +0xd0:  addl   $0x1,-0xc(%ebp)
0809c79c +0xd4:  mov    -0xc(%ebp),%eax
0809c79f +0xd7:  cmp    -0x10(%ebp),%eax
0809c7a2 +0xda:  setl   %al
0809c7a5 +0xdd:  test   %al,%al
0809c7a7 +0xdf:  jne    0809c762 <+0x9a>
0809c7a9 +0xe1:  mov    $0x6fffffff,%eax
0809c7ae +0xe6:  leave
0809c7af +0xe7:  ret
```

## 反编译 C

```c
// CNCryptoShift::Encrypt @ 0x809c6c8

/* CNCryptoShift::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoShift::Encrypt(CNCryptoShift *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *local_20;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        local_20 = (uint *)param_1;
        local_1c = (uint *)param_3;
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          uVar1 = *local_20;
          local_20 = local_20 + 1;
          ROR(uVar1,*(int *)(this + 8));
          *local_1c = uVar1 ^ *(uint *)(this + 0xc);
          local_1c = local_1c + 1;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  else {
    uVar2 = 0x7000000c;
  }
  return uVar2;
}
```
