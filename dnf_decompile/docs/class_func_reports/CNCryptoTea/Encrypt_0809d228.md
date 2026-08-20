# Encrypt

`_ZN11CNCryptoTea7EncryptEPKhiPhi`

`CNCryptoTea::Encrypt(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d228` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d228  _ZN11CNCryptoTea7EncryptEPKhiPhi
#           CNCryptoTea::Encrypt(unsigned char const*, int, unsigned char*, int)
# range [0x0809d228, 0x0809d2b5]
0809d228 +0x00:  push   %ebp
0809d229 +0x01:  mov    %esp,%ebp
0809d22b +0x03:  push   %esi
0809d22c +0x04:  push   %ebx
0809d22d +0x05:  sub    $0x20,%esp
0809d230 +0x08:  mov    0x8(%ebp),%eax
0809d233 +0x0b:  mov    0x8(%eax),%eax
0809d236 +0x0e:  test   %eax,%eax
0809d238 +0x10:  jne    0809d241 <+0x19>
0809d23a +0x12:  mov    $0x7000000c,%eax
0809d23f +0x17:  jmp    0809d2af <+0x87>
0809d241 +0x19:  mov    0x10(%ebp),%eax
0809d244 +0x1c:  cmp    0x18(%ebp),%eax
0809d247 +0x1f:  jle    0809d250 <+0x28>
0809d249 +0x21:  mov    $0x7000000b,%eax
0809d24e +0x26:  jmp    0809d2af <+0x87>
0809d250 +0x28:  mov    0x8(%ebp),%eax
0809d253 +0x2b:  mov    (%eax),%eax
0809d255 +0x2d:  add    $0x24,%eax
0809d258 +0x30:  mov    (%eax),%edx
0809d25a +0x32:  mov    0x8(%ebp),%eax
0809d25d +0x35:  mov    %eax,(%esp)
0809d260 +0x38:  call   *%edx
0809d262 +0x3a:  mov    %eax,-0xc(%ebp)
0809d265 +0x3d:  mov    0x10(%ebp),%edx
0809d268 +0x40:  mov    %edx,%eax
0809d26a +0x42:  sar    $0x1f,%edx
0809d26d +0x45:  idivl  -0xc(%ebp)
0809d270 +0x48:  mov    %edx,%eax
0809d272 +0x4a:  test   %eax,%eax
0809d274 +0x4c:  setne  %al
0809d277 +0x4f:  test   %al,%al
0809d279 +0x51:  je     0809d282 <+0x5a>
0809d27b +0x53:  mov    $0x70000006,%eax
0809d280 +0x58:  jmp    0809d2af <+0x87>
0809d282 +0x5a:  mov    0x8(%ebp),%eax
0809d285 +0x5d:  mov    0x8(%eax),%eax
0809d288 +0x60:  mov    (%eax),%eax
0809d28a +0x62:  add    $0xc,%eax
0809d28d +0x65:  mov    (%eax),%esi
0809d28f +0x67:  mov    0x10(%ebp),%ebx
0809d292 +0x6a:  mov    0x14(%ebp),%ecx
0809d295 +0x6d:  mov    0xc(%ebp),%edx
0809d298 +0x70:  mov    0x8(%ebp),%eax
0809d29b +0x73:  mov    0x8(%eax),%eax
0809d29e +0x76:  mov    %ebx,0xc(%esp)
0809d2a2 +0x7a:  mov    %ecx,0x8(%esp)
0809d2a6 +0x7e:  mov    %edx,0x4(%esp)
0809d2aa +0x82:  mov    %eax,(%esp)
0809d2ad +0x85:  call   *%esi
0809d2af +0x87:  add    $0x20,%esp
0809d2b2 +0x8a:  pop    %ebx
0809d2b3 +0x8b:  pop    %esi
0809d2b4 +0x8c:  pop    %ebp
0809d2b5 +0x8d:  ret
```

## 反编译 C

```c
// CNCryptoTea::Encrypt @ 0x809d228

/* CNCryptoTea::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoTea::Encrypt(CNCryptoTea *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
