# Encrypt

`_ZN16CNCryptoRijndael7EncryptEPKhiPhi`

`CNCryptoRijndael::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c2e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c2e8  _ZN16CNCryptoRijndael7EncryptEPKhiPhi
#           CNCryptoRijndael::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809c2e8, 0x0809c375]
0809c2e8 +0x00:  push   %ebp
0809c2e9 +0x01:  mov    %esp,%ebp
0809c2eb +0x03:  push   %esi
0809c2ec +0x04:  push   %ebx
0809c2ed +0x05:  sub    $0x20,%esp
0809c2f0 +0x08:  mov    0x8(%ebp),%eax
0809c2f3 +0x0b:  mov    0x8(%eax),%eax
0809c2f6 +0x0e:  test   %eax,%eax
0809c2f8 +0x10:  jne    0809c301 <+0x19>
0809c2fa +0x12:  mov    $0x7000000c,%eax
0809c2ff +0x17:  jmp    0809c36f <+0x87>
0809c301 +0x19:  mov    0x10(%ebp),%eax
0809c304 +0x1c:  cmp    0x18(%ebp),%eax
0809c307 +0x1f:  jle    0809c310 <+0x28>
0809c309 +0x21:  mov    $0x7000000b,%eax
0809c30e +0x26:  jmp    0809c36f <+0x87>
0809c310 +0x28:  mov    0x8(%ebp),%eax
0809c313 +0x2b:  mov    (%eax),%eax
0809c315 +0x2d:  add    $0x24,%eax
0809c318 +0x30:  mov    (%eax),%edx
0809c31a +0x32:  mov    0x8(%ebp),%eax
0809c31d +0x35:  mov    %eax,(%esp)
0809c320 +0x38:  call   *%edx
0809c322 +0x3a:  mov    %eax,-0xc(%ebp)
0809c325 +0x3d:  mov    0x10(%ebp),%edx
0809c328 +0x40:  mov    %edx,%eax
0809c32a +0x42:  sar    $0x1f,%edx
0809c32d +0x45:  idivl  -0xc(%ebp)
0809c330 +0x48:  mov    %edx,%eax
0809c332 +0x4a:  test   %eax,%eax
0809c334 +0x4c:  setne  %al
0809c337 +0x4f:  test   %al,%al
0809c339 +0x51:  je     0809c342 <+0x5a>
0809c33b +0x53:  mov    $0x70000006,%eax
0809c340 +0x58:  jmp    0809c36f <+0x87>
0809c342 +0x5a:  mov    0x8(%ebp),%eax
0809c345 +0x5d:  mov    0x8(%eax),%eax
0809c348 +0x60:  mov    (%eax),%eax
0809c34a +0x62:  add    $0xc,%eax
0809c34d +0x65:  mov    (%eax),%esi
0809c34f +0x67:  mov    0x10(%ebp),%ebx
0809c352 +0x6a:  mov    0x14(%ebp),%ecx
0809c355 +0x6d:  mov    0xc(%ebp),%edx
0809c358 +0x70:  mov    0x8(%ebp),%eax
0809c35b +0x73:  mov    0x8(%eax),%eax
0809c35e +0x76:  mov    %ebx,0xc(%esp)
0809c362 +0x7a:  mov    %ecx,0x8(%esp)
0809c366 +0x7e:  mov    %edx,0x4(%esp)
0809c36a +0x82:  mov    %eax,(%esp)
0809c36d +0x85:  call   *%esi
0809c36f +0x87:  add    $0x20,%esp
0809c372 +0x8a:  pop    %ebx
0809c373 +0x8b:  pop    %esi
0809c374 +0x8c:  pop    %ebp
0809c375 +0x8d:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::Encrypt @ 0x809c2e8

/* CNCryptoRijndael::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRijndael::Encrypt
          (CNCryptoRijndael *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_4 < param_2) {
    uVar1 = 0x7000000b;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                        (*(undefined4 *)(this + 8),param_1,param_3,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}
```
