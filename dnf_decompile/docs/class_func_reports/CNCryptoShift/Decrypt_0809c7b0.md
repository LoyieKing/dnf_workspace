# Decrypt

`_ZN13CNCryptoShift7DecryptEPKhiPhi`

`CNCryptoShift::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c7b0  _ZN13CNCryptoShift7DecryptEPKhiPhi
#           CNCryptoShift::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809c7b0, 0x0809c897]
0809c7b0 +0x00:  push   %ebp
0809c7b1 +0x01:  mov    %esp,%ebp
0809c7b3 +0x03:  sub    $0x48,%esp
0809c7b6 +0x06:  mov    0x8(%ebp),%eax
0809c7b9 +0x09:  mov    0x8(%eax),%eax
0809c7bc +0x0c:  cmp    $0x1f,%eax
0809c7bf +0x0f:  jbe    0809c7cb <+0x1b>
0809c7c1 +0x11:  mov    $0x7000000c,%eax
0809c7c6 +0x16:  jmp    0809c896 <+0xe6>
0809c7cb +0x1b:  mov    0x8(%ebp),%eax
0809c7ce +0x1e:  mov    (%eax),%eax
0809c7d0 +0x20:  add    $0x24,%eax
0809c7d3 +0x23:  mov    (%eax),%edx
0809c7d5 +0x25:  mov    0x8(%ebp),%eax
0809c7d8 +0x28:  mov    %eax,(%esp)
0809c7db +0x2b:  call   *%edx
0809c7dd +0x2d:  mov    %eax,-0x30(%ebp)
0809c7e0 +0x30:  mov    0x10(%ebp),%edx
0809c7e3 +0x33:  mov    %edx,%eax
0809c7e5 +0x35:  sar    $0x1f,%edx
0809c7e8 +0x38:  idivl  -0x30(%ebp)
0809c7eb +0x3b:  mov    %edx,%eax
0809c7ed +0x3d:  test   %eax,%eax
0809c7ef +0x3f:  setne  %al
0809c7f2 +0x42:  test   %al,%al
0809c7f4 +0x44:  je     0809c800 <+0x50>
0809c7f6 +0x46:  mov    $0x70000006,%eax
0809c7fb +0x4b:  jmp    0809c896 <+0xe6>
0809c800 +0x50:  mov    0x10(%ebp),%eax
0809c803 +0x53:  cmp    0x18(%ebp),%eax
0809c806 +0x56:  jle    0809c812 <+0x62>
0809c808 +0x58:  mov    $0x7000000a,%eax
0809c80d +0x5d:  jmp    0809c896 <+0xe6>
0809c812 +0x62:  mov    0xc(%ebp),%eax
0809c815 +0x65:  mov    %eax,-0x1c(%ebp)
0809c818 +0x68:  mov    0x14(%ebp),%eax
0809c81b +0x6b:  mov    %eax,-0x18(%ebp)
0809c81e +0x6e:  mov    0x8(%ebp),%eax
0809c821 +0x71:  mov    (%eax),%eax
0809c823 +0x73:  add    $0x24,%eax
0809c826 +0x76:  mov    (%eax),%edx
0809c828 +0x78:  mov    0x8(%ebp),%eax
0809c82b +0x7b:  mov    %eax,(%esp)
0809c82e +0x7e:  call   *%edx
0809c830 +0x80:  mov    %eax,-0x2c(%ebp)
0809c833 +0x83:  mov    0x10(%ebp),%eax
0809c836 +0x86:  mov    %eax,%edx
0809c838 +0x88:  sar    $0x1f,%edx
0809c83b +0x8b:  idivl  -0x2c(%ebp)
0809c83e +0x8e:  mov    %eax,-0x10(%ebp)
0809c841 +0x91:  movl   $0x0,-0xc(%ebp)
0809c848 +0x98:  jmp    0809c884 <+0xd4>
0809c84a +0x9a:  mov    -0x1c(%ebp),%eax
0809c84d +0x9d:  mov    (%eax),%eax
0809c84f +0x9f:  mov    %eax,-0x14(%ebp)
0809c852 +0xa2:  addl   $0x4,-0x1c(%ebp)
0809c856 +0xa6:  mov    0x8(%ebp),%eax
0809c859 +0xa9:  mov    0xc(%eax),%eax
0809c85c +0xac:  xor    %eax,-0x14(%ebp)
0809c85f +0xaf:  mov    0x8(%ebp),%eax
0809c862 +0xb2:  mov    0x8(%eax),%eax
0809c865 +0xb5:  mov    %eax,0x4(%esp)
0809c869 +0xb9:  mov    -0x14(%ebp),%eax
0809c86c +0xbc:  mov    %eax,(%esp)
0809c86f +0xbf:  call   0809c418 <_ZL3ROLji>  ; ROL(unsigned int, int)
0809c874 +0xc4:  mov    -0x18(%ebp),%eax
0809c877 +0xc7:  mov    -0x14(%ebp),%edx
0809c87a +0xca:  mov    %edx,(%eax)
0809c87c +0xcc:  addl   $0x4,-0x18(%ebp)
0809c880 +0xd0:  addl   $0x1,-0xc(%ebp)
0809c884 +0xd4:  mov    -0xc(%ebp),%eax
0809c887 +0xd7:  cmp    -0x10(%ebp),%eax
0809c88a +0xda:  setl   %al
0809c88d +0xdd:  test   %al,%al
0809c88f +0xdf:  jne    0809c84a <+0x9a>
0809c891 +0xe1:  mov    $0x6fffffff,%eax
0809c896 +0xe6:  leave
0809c897 +0xe7:  ret
```

## 反编译 C

```c
// CNCryptoShift::Decrypt @ 0x809c7b0

/* CNCryptoShift::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoShift::Decrypt(CNCryptoShift *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *local_20;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar4 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar4 == 0) {
      if (param_4 < param_2) {
        uVar3 = 0x7000000a;
      }
      else {
        local_20 = (uint *)param_1;
        local_1c = (uint *)param_3;
        iVar4 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar4; local_10 = local_10 + 1) {
          uVar1 = *local_20;
          local_20 = local_20 + 1;
          uVar2 = *(uint *)(this + 0xc);
          ROL(uVar1 ^ uVar2,*(int *)(this + 8));
          *local_1c = uVar1 ^ uVar2;
          local_1c = local_1c + 1;
        }
        uVar3 = 0x6fffffff;
      }
    }
    else {
      uVar3 = 0x70000006;
    }
  }
  else {
    uVar3 = 0x7000000c;
  }
  return uVar3;
}
```
