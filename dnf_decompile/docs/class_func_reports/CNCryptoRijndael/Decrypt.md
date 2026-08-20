# Decrypt

`_ZN16CNCryptoRijndael7DecryptEPhi`

`CNCryptoRijndael::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c268` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c268  _ZN16CNCryptoRijndael7DecryptEPhi
#           CNCryptoRijndael::Decrypt(unsigned char*, int)
# range [0x0809c268, 0x0809c2e7]
0809c268 +0x00:  push   %ebp
0809c269 +0x01:  mov    %esp,%ebp
0809c26b +0x03:  push   %esi
0809c26c +0x04:  push   %ebx
0809c26d +0x05:  sub    $0x20,%esp
0809c270 +0x08:  mov    0x8(%ebp),%eax
0809c273 +0x0b:  mov    0x8(%eax),%eax
0809c276 +0x0e:  test   %eax,%eax
0809c278 +0x10:  jne    0809c281 <+0x19>
0809c27a +0x12:  mov    $0x7000000c,%eax
0809c27f +0x17:  jmp    0809c2e0 <+0x78>
0809c281 +0x19:  mov    0x8(%ebp),%eax
0809c284 +0x1c:  mov    (%eax),%eax
0809c286 +0x1e:  add    $0x24,%eax
0809c289 +0x21:  mov    (%eax),%edx
0809c28b +0x23:  mov    0x8(%ebp),%eax
0809c28e +0x26:  mov    %eax,(%esp)
0809c291 +0x29:  call   *%edx
0809c293 +0x2b:  mov    %eax,-0xc(%ebp)
0809c296 +0x2e:  mov    0x10(%ebp),%edx
0809c299 +0x31:  mov    %edx,%eax
0809c29b +0x33:  sar    $0x1f,%edx
0809c29e +0x36:  idivl  -0xc(%ebp)
0809c2a1 +0x39:  mov    %edx,%eax
0809c2a3 +0x3b:  test   %eax,%eax
0809c2a5 +0x3d:  setne  %al
0809c2a8 +0x40:  test   %al,%al
0809c2aa +0x42:  je     0809c2b3 <+0x4b>
0809c2ac +0x44:  mov    $0x70000006,%eax
0809c2b1 +0x49:  jmp    0809c2e0 <+0x78>
0809c2b3 +0x4b:  mov    0x8(%ebp),%eax
0809c2b6 +0x4e:  mov    0x8(%eax),%eax
0809c2b9 +0x51:  mov    (%eax),%eax
0809c2bb +0x53:  add    $0x10,%eax
0809c2be +0x56:  mov    (%eax),%esi
0809c2c0 +0x58:  mov    0x10(%ebp),%ebx
0809c2c3 +0x5b:  mov    0xc(%ebp),%ecx
0809c2c6 +0x5e:  mov    0xc(%ebp),%edx
0809c2c9 +0x61:  mov    0x8(%ebp),%eax
0809c2cc +0x64:  mov    0x8(%eax),%eax
0809c2cf +0x67:  mov    %ebx,0xc(%esp)
0809c2d3 +0x6b:  mov    %ecx,0x8(%esp)
0809c2d7 +0x6f:  mov    %edx,0x4(%esp)
0809c2db +0x73:  mov    %eax,(%esp)
0809c2de +0x76:  call   *%esi
0809c2e0 +0x78:  add    $0x20,%esp
0809c2e3 +0x7b:  pop    %ebx
0809c2e4 +0x7c:  pop    %esi
0809c2e5 +0x7d:  pop    %ebp
0809c2e6 +0x7e:  ret
0809c2e7 +0x7f:  nop
```

## 反编译 C

```c
// CNCryptoRijndael::Decrypt @ 0x809c268

/* CNCryptoRijndael::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoRijndael::Decrypt(CNCryptoRijndael *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0x10))
                        (*(undefined4 *)(this + 8),param_1,param_1,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}
```
