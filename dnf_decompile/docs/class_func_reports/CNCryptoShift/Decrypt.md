# Decrypt

`_ZN13CNCryptoShift7DecryptEPhi`

`CNCryptoShift::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c5fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c5fe  _ZN13CNCryptoShift7DecryptEPhi
#           CNCryptoShift::Decrypt(unsigned char*, int)
# range [0x0809c5fe, 0x0809c6c7]
0809c5fe +0x00:  push   %ebp
0809c5ff +0x01:  mov    %esp,%ebp
0809c601 +0x03:  sub    $0x38,%esp
0809c604 +0x06:  mov    0x8(%ebp),%eax
0809c607 +0x09:  mov    0x8(%eax),%eax
0809c60a +0x0c:  cmp    $0x1f,%eax
0809c60d +0x0f:  jbe    0809c619 <+0x1b>
0809c60f +0x11:  mov    $0x7000000c,%eax
0809c614 +0x16:  jmp    0809c6c5 <+0xc7>
0809c619 +0x1b:  mov    0x8(%ebp),%eax
0809c61c +0x1e:  mov    (%eax),%eax
0809c61e +0x20:  add    $0x24,%eax
0809c621 +0x23:  mov    (%eax),%edx
0809c623 +0x25:  mov    0x8(%ebp),%eax
0809c626 +0x28:  mov    %eax,(%esp)
0809c629 +0x2b:  call   *%edx
0809c62b +0x2d:  mov    %eax,-0x20(%ebp)
0809c62e +0x30:  mov    0x10(%ebp),%edx
0809c631 +0x33:  mov    %edx,%eax
0809c633 +0x35:  sar    $0x1f,%edx
0809c636 +0x38:  idivl  -0x20(%ebp)
0809c639 +0x3b:  mov    %edx,%eax
0809c63b +0x3d:  test   %eax,%eax
0809c63d +0x3f:  setne  %al
0809c640 +0x42:  test   %al,%al
0809c642 +0x44:  je     0809c64b <+0x4d>
0809c644 +0x46:  mov    $0x70000006,%eax
0809c649 +0x4b:  jmp    0809c6c5 <+0xc7>
0809c64b +0x4d:  mov    0xc(%ebp),%eax
0809c64e +0x50:  mov    %eax,-0x18(%ebp)
0809c651 +0x53:  mov    0x8(%ebp),%eax
0809c654 +0x56:  mov    (%eax),%eax
0809c656 +0x58:  add    $0x24,%eax
0809c659 +0x5b:  mov    (%eax),%edx
0809c65b +0x5d:  mov    0x8(%ebp),%eax
0809c65e +0x60:  mov    %eax,(%esp)
0809c661 +0x63:  call   *%edx
0809c663 +0x65:  mov    %eax,-0x1c(%ebp)
0809c666 +0x68:  mov    0x10(%ebp),%eax
0809c669 +0x6b:  mov    %eax,%edx
0809c66b +0x6d:  sar    $0x1f,%edx
0809c66e +0x70:  idivl  -0x1c(%ebp)
0809c671 +0x73:  mov    %eax,-0x10(%ebp)
0809c674 +0x76:  movl   $0x0,-0xc(%ebp)
0809c67b +0x7d:  jmp    0809c6b3 <+0xb5>
0809c67d +0x7f:  mov    -0x18(%ebp),%eax
0809c680 +0x82:  mov    (%eax),%eax
0809c682 +0x84:  mov    %eax,-0x14(%ebp)
0809c685 +0x87:  mov    0x8(%ebp),%eax
0809c688 +0x8a:  mov    0xc(%eax),%eax
0809c68b +0x8d:  xor    %eax,-0x14(%ebp)
0809c68e +0x90:  mov    0x8(%ebp),%eax
0809c691 +0x93:  mov    0x8(%eax),%eax
0809c694 +0x96:  mov    %eax,0x4(%esp)
0809c698 +0x9a:  mov    -0x14(%ebp),%eax
0809c69b +0x9d:  mov    %eax,(%esp)
0809c69e +0xa0:  call   0809c418 <_ZL3ROLji>  ; ROL(unsigned int, int)
0809c6a3 +0xa5:  mov    -0x18(%ebp),%eax
0809c6a6 +0xa8:  mov    -0x14(%ebp),%edx
0809c6a9 +0xab:  mov    %edx,(%eax)
0809c6ab +0xad:  addl   $0x4,-0x18(%ebp)
0809c6af +0xb1:  addl   $0x1,-0xc(%ebp)
0809c6b3 +0xb5:  mov    -0xc(%ebp),%eax
0809c6b6 +0xb8:  cmp    -0x10(%ebp),%eax
0809c6b9 +0xbb:  setl   %al
0809c6bc +0xbe:  test   %al,%al
0809c6be +0xc0:  jne    0809c67d <+0x7f>
0809c6c0 +0xc2:  mov    $0x6fffffff,%eax
0809c6c5 +0xc7:  leave
0809c6c6 +0xc8:  ret
0809c6c7 +0xc9:  nop
```

## 反编译 C

```c
// CNCryptoShift::Decrypt @ 0x809c5fe

/* CNCryptoShift::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoShift::Decrypt(CNCryptoShift *this,uchar *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar4 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar4 == 0) {
      local_1c = (uint *)param_1;
      iVar4 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar4; local_10 = local_10 + 1) {
        uVar1 = *local_1c;
        uVar2 = *(uint *)(this + 0xc);
        ROL(uVar1 ^ uVar2,*(int *)(this + 8));
        *local_1c = uVar1 ^ uVar2;
        local_1c = local_1c + 1;
      }
      uVar3 = 0x6fffffff;
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
