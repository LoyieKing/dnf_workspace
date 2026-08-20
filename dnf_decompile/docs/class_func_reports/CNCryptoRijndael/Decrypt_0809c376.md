# Decrypt

`_ZN16CNCryptoRijndael7DecryptEPKhiPhi`

`CNCryptoRijndael::Decrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c376` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c376  _ZN16CNCryptoRijndael7DecryptEPKhiPhi
#           CNCryptoRijndael::Decrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809c376, 0x0809c403]
0809c376 +0x00:  push   %ebp
0809c377 +0x01:  mov    %esp,%ebp
0809c379 +0x03:  push   %esi
0809c37a +0x04:  push   %ebx
0809c37b +0x05:  sub    $0x20,%esp
0809c37e +0x08:  mov    0x8(%ebp),%eax
0809c381 +0x0b:  mov    0x8(%eax),%eax
0809c384 +0x0e:  test   %eax,%eax
0809c386 +0x10:  jne    0809c38f <+0x19>
0809c388 +0x12:  mov    $0x7000000c,%eax
0809c38d +0x17:  jmp    0809c3fd <+0x87>
0809c38f +0x19:  mov    0x10(%ebp),%eax
0809c392 +0x1c:  cmp    0x18(%ebp),%eax
0809c395 +0x1f:  jle    0809c39e <+0x28>
0809c397 +0x21:  mov    $0x7000000b,%eax
0809c39c +0x26:  jmp    0809c3fd <+0x87>
0809c39e +0x28:  mov    0x8(%ebp),%eax
0809c3a1 +0x2b:  mov    (%eax),%eax
0809c3a3 +0x2d:  add    $0x24,%eax
0809c3a6 +0x30:  mov    (%eax),%edx
0809c3a8 +0x32:  mov    0x8(%ebp),%eax
0809c3ab +0x35:  mov    %eax,(%esp)
0809c3ae +0x38:  call   *%edx
0809c3b0 +0x3a:  mov    %eax,-0xc(%ebp)
0809c3b3 +0x3d:  mov    0x10(%ebp),%edx
0809c3b6 +0x40:  mov    %edx,%eax
0809c3b8 +0x42:  sar    $0x1f,%edx
0809c3bb +0x45:  idivl  -0xc(%ebp)
0809c3be +0x48:  mov    %edx,%eax
0809c3c0 +0x4a:  test   %eax,%eax
0809c3c2 +0x4c:  setne  %al
0809c3c5 +0x4f:  test   %al,%al
0809c3c7 +0x51:  je     0809c3d0 <+0x5a>
0809c3c9 +0x53:  mov    $0x70000006,%eax
0809c3ce +0x58:  jmp    0809c3fd <+0x87>
0809c3d0 +0x5a:  mov    0x8(%ebp),%eax
0809c3d3 +0x5d:  mov    0x8(%eax),%eax
0809c3d6 +0x60:  mov    (%eax),%eax
0809c3d8 +0x62:  add    $0x10,%eax
0809c3db +0x65:  mov    (%eax),%esi
0809c3dd +0x67:  mov    0x10(%ebp),%ebx
0809c3e0 +0x6a:  mov    0x14(%ebp),%ecx
0809c3e3 +0x6d:  mov    0xc(%ebp),%edx
0809c3e6 +0x70:  mov    0x8(%ebp),%eax
0809c3e9 +0x73:  mov    0x8(%eax),%eax
0809c3ec +0x76:  mov    %ebx,0xc(%esp)
0809c3f0 +0x7a:  mov    %ecx,0x8(%esp)
0809c3f4 +0x7e:  mov    %edx,0x4(%esp)
0809c3f8 +0x82:  mov    %eax,(%esp)
0809c3fb +0x85:  call   *%esi
0809c3fd +0x87:  add    $0x20,%esp
0809c400 +0x8a:  pop    %ebx
0809c401 +0x8b:  pop    %esi
0809c402 +0x8c:  pop    %ebp
0809c403 +0x8d:  ret
```

## 反编译 C

```c
// CNCryptoRijndael::Decrypt @ 0x809c376

/* CNCryptoRijndael::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRijndael::Decrypt
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
      uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                        (*(undefined4 *)(this + 8),param_1,param_3,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}
```
