# Encrypt

`_ZN13CNCryptoShift7EncryptEPhi`

`CNCryptoShift::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c534` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c534  _ZN13CNCryptoShift7EncryptEPhi
#           CNCryptoShift::Encrypt(unsigned char*, int)
# range [0x0809c534, 0x0809c5fd]
0809c534 +0x00:  push   %ebp
0809c535 +0x01:  mov    %esp,%ebp
0809c537 +0x03:  sub    $0x38,%esp
0809c53a +0x06:  mov    0x8(%ebp),%eax
0809c53d +0x09:  mov    0x8(%eax),%eax
0809c540 +0x0c:  cmp    $0x1f,%eax
0809c543 +0x0f:  jbe    0809c54f <+0x1b>
0809c545 +0x11:  mov    $0x7000000c,%eax
0809c54a +0x16:  jmp    0809c5fb <+0xc7>
0809c54f +0x1b:  mov    0x8(%ebp),%eax
0809c552 +0x1e:  mov    (%eax),%eax
0809c554 +0x20:  add    $0x24,%eax
0809c557 +0x23:  mov    (%eax),%edx
0809c559 +0x25:  mov    0x8(%ebp),%eax
0809c55c +0x28:  mov    %eax,(%esp)
0809c55f +0x2b:  call   *%edx
0809c561 +0x2d:  mov    %eax,-0x20(%ebp)
0809c564 +0x30:  mov    0x10(%ebp),%edx
0809c567 +0x33:  mov    %edx,%eax
0809c569 +0x35:  sar    $0x1f,%edx
0809c56c +0x38:  idivl  -0x20(%ebp)
0809c56f +0x3b:  mov    %edx,%eax
0809c571 +0x3d:  test   %eax,%eax
0809c573 +0x3f:  setne  %al
0809c576 +0x42:  test   %al,%al
0809c578 +0x44:  je     0809c581 <+0x4d>
0809c57a +0x46:  mov    $0x70000006,%eax
0809c57f +0x4b:  jmp    0809c5fb <+0xc7>
0809c581 +0x4d:  mov    0xc(%ebp),%eax
0809c584 +0x50:  mov    %eax,-0x18(%ebp)
0809c587 +0x53:  mov    0x8(%ebp),%eax
0809c58a +0x56:  mov    (%eax),%eax
0809c58c +0x58:  add    $0x24,%eax
0809c58f +0x5b:  mov    (%eax),%edx
0809c591 +0x5d:  mov    0x8(%ebp),%eax
0809c594 +0x60:  mov    %eax,(%esp)
0809c597 +0x63:  call   *%edx
0809c599 +0x65:  mov    %eax,-0x1c(%ebp)
0809c59c +0x68:  mov    0x10(%ebp),%eax
0809c59f +0x6b:  mov    %eax,%edx
0809c5a1 +0x6d:  sar    $0x1f,%edx
0809c5a4 +0x70:  idivl  -0x1c(%ebp)
0809c5a7 +0x73:  mov    %eax,-0x10(%ebp)
0809c5aa +0x76:  movl   $0x0,-0xc(%ebp)
0809c5b1 +0x7d:  jmp    0809c5e9 <+0xb5>
0809c5b3 +0x7f:  mov    -0x18(%ebp),%eax
0809c5b6 +0x82:  mov    (%eax),%eax
0809c5b8 +0x84:  mov    %eax,-0x14(%ebp)
0809c5bb +0x87:  mov    0x8(%ebp),%eax
0809c5be +0x8a:  mov    0x8(%eax),%eax
0809c5c1 +0x8d:  mov    %eax,0x4(%esp)
0809c5c5 +0x91:  mov    -0x14(%ebp),%eax
0809c5c8 +0x94:  mov    %eax,(%esp)
0809c5cb +0x97:  call   0809c42d <_ZL3RORji>  ; ROR(unsigned int, int)
0809c5d0 +0x9c:  mov    0x8(%ebp),%eax
0809c5d3 +0x9f:  mov    0xc(%eax),%eax
0809c5d6 +0xa2:  xor    %eax,-0x14(%ebp)
0809c5d9 +0xa5:  mov    -0x18(%ebp),%eax
0809c5dc +0xa8:  mov    -0x14(%ebp),%edx
0809c5df +0xab:  mov    %edx,(%eax)
0809c5e1 +0xad:  addl   $0x4,-0x18(%ebp)
0809c5e5 +0xb1:  addl   $0x1,-0xc(%ebp)
0809c5e9 +0xb5:  mov    -0xc(%ebp),%eax
0809c5ec +0xb8:  cmp    -0x10(%ebp),%eax
0809c5ef +0xbb:  setl   %al
0809c5f2 +0xbe:  test   %al,%al
0809c5f4 +0xc0:  jne    0809c5b3 <+0x7f>
0809c5f6 +0xc2:  mov    $0x6fffffff,%eax
0809c5fb +0xc7:  leave
0809c5fc +0xc8:  ret
0809c5fd +0xc9:  nop
```

## 反编译 C

```c
// CNCryptoShift::Encrypt @ 0x809c534

/* CNCryptoShift::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoShift::Encrypt(CNCryptoShift *this,uchar *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *local_1c;
  int local_10;
  
  if (*(uint *)(this + 8) < 0x20) {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      local_1c = (uint *)param_1;
      iVar3 = (**(code **)(*(int *)this + 0x24))(this);
      for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
        uVar1 = *local_1c;
        ROR(uVar1,*(int *)(this + 8));
        *local_1c = uVar1 ^ *(uint *)(this + 0xc);
        local_1c = local_1c + 1;
      }
      uVar2 = 0x6fffffff;
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
