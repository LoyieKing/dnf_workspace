# Decrypt

`_ZN11CNCryptoTea7DecryptEPKhiPhi`

`CNCryptoTea::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d2b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d2b6  _ZN11CNCryptoTea7DecryptEPKhiPhi
#           CNCryptoTea::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809d2b6, 0x0809d311]
0809d2b6 +0x00:  push   %ebp
0809d2b7 +0x01:  mov    %esp,%ebp
0809d2b9 +0x03:  push   %esi
0809d2ba +0x04:  push   %ebx
0809d2bb +0x05:  sub    $0x10,%esp
0809d2be +0x08:  mov    0x8(%ebp),%eax
0809d2c1 +0x0b:  mov    0x8(%eax),%eax
0809d2c4 +0x0e:  test   %eax,%eax
0809d2c6 +0x10:  jne    0809d2cf <+0x19>
0809d2c8 +0x12:  mov    $0x7000000c,%eax
0809d2cd +0x17:  jmp    0809d30b <+0x55>
0809d2cf +0x19:  mov    0x10(%ebp),%eax
0809d2d2 +0x1c:  cmp    0x18(%ebp),%eax
0809d2d5 +0x1f:  jle    0809d2de <+0x28>
0809d2d7 +0x21:  mov    $0x7000000b,%eax
0809d2dc +0x26:  jmp    0809d30b <+0x55>
0809d2de +0x28:  mov    0x8(%ebp),%eax
0809d2e1 +0x2b:  mov    0x8(%eax),%eax
0809d2e4 +0x2e:  mov    (%eax),%eax
0809d2e6 +0x30:  add    $0x10,%eax
0809d2e9 +0x33:  mov    (%eax),%esi
0809d2eb +0x35:  mov    0x10(%ebp),%ebx
0809d2ee +0x38:  mov    0x14(%ebp),%ecx
0809d2f1 +0x3b:  mov    0xc(%ebp),%edx
0809d2f4 +0x3e:  mov    0x8(%ebp),%eax
0809d2f7 +0x41:  mov    0x8(%eax),%eax
0809d2fa +0x44:  mov    %ebx,0xc(%esp)
0809d2fe +0x48:  mov    %ecx,0x8(%esp)
0809d302 +0x4c:  mov    %edx,0x4(%esp)
0809d306 +0x50:  mov    %eax,(%esp)
0809d309 +0x53:  call   *%esi
0809d30b +0x55:  add    $0x10,%esp
0809d30e +0x58:  pop    %ebx
0809d30f +0x59:  pop    %esi
0809d310 +0x5a:  pop    %ebp
0809d311 +0x5b:  ret
```

## 反编译 C

```c
// CNCryptoTea::Decrypt @ 0x809d2b6

/* CNCryptoTea::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTea::Decrypt(CNCryptoTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar1 = 0x7000000b;
  }
  else {
    uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                      (*(undefined4 *)(this + 8),param_1,param_3,param_2);
  }
  return uVar1;
}
```
