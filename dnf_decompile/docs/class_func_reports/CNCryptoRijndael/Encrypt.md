# Encrypt

`_ZN16CNCryptoRijndael7EncryptEPhi`

`CNCryptoRijndael::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c1e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c1e8  _ZN16CNCryptoRijndael7EncryptEPhi
#           CNCryptoRijndael::Encrypt(unsigned char*, int)
# range [0x0809c1e8, 0x0809c267]
0809c1e8 +0x00:  push   %ebp
0809c1e9 +0x01:  mov    %esp,%ebp
0809c1eb +0x03:  push   %esi
0809c1ec +0x04:  push   %ebx
0809c1ed +0x05:  sub    $0x20,%esp
0809c1f0 +0x08:  mov    0x8(%ebp),%eax
0809c1f3 +0x0b:  mov    0x8(%eax),%eax
0809c1f6 +0x0e:  test   %eax,%eax
0809c1f8 +0x10:  jne    0809c201 <+0x19>
0809c1fa +0x12:  mov    $0x7000000c,%eax
0809c1ff +0x17:  jmp    0809c260 <+0x78>
0809c201 +0x19:  mov    0x8(%ebp),%eax
0809c204 +0x1c:  mov    (%eax),%eax
0809c206 +0x1e:  add    $0x24,%eax
0809c209 +0x21:  mov    (%eax),%edx
0809c20b +0x23:  mov    0x8(%ebp),%eax
0809c20e +0x26:  mov    %eax,(%esp)
0809c211 +0x29:  call   *%edx
0809c213 +0x2b:  mov    %eax,-0xc(%ebp)
0809c216 +0x2e:  mov    0x10(%ebp),%edx
0809c219 +0x31:  mov    %edx,%eax
0809c21b +0x33:  sar    $0x1f,%edx
0809c21e +0x36:  idivl  -0xc(%ebp)
0809c221 +0x39:  mov    %edx,%eax
0809c223 +0x3b:  test   %eax,%eax
0809c225 +0x3d:  setne  %al
0809c228 +0x40:  test   %al,%al
0809c22a +0x42:  je     0809c233 <+0x4b>
0809c22c +0x44:  mov    $0x70000006,%eax
0809c231 +0x49:  jmp    0809c260 <+0x78>
0809c233 +0x4b:  mov    0x8(%ebp),%eax
0809c236 +0x4e:  mov    0x8(%eax),%eax
0809c239 +0x51:  mov    (%eax),%eax
0809c23b +0x53:  add    $0xc,%eax
0809c23e +0x56:  mov    (%eax),%esi
0809c240 +0x58:  mov    0x10(%ebp),%ebx
0809c243 +0x5b:  mov    0xc(%ebp),%ecx
0809c246 +0x5e:  mov    0xc(%ebp),%edx
0809c249 +0x61:  mov    0x8(%ebp),%eax
0809c24c +0x64:  mov    0x8(%eax),%eax
0809c24f +0x67:  mov    %ebx,0xc(%esp)
0809c253 +0x6b:  mov    %ecx,0x8(%esp)
0809c257 +0x6f:  mov    %edx,0x4(%esp)
0809c25b +0x73:  mov    %eax,(%esp)
0809c25e +0x76:  call   *%esi
0809c260 +0x78:  add    $0x20,%esp
0809c263 +0x7b:  pop    %ebx
0809c264 +0x7c:  pop    %esi
0809c265 +0x7d:  pop    %ebp
0809c266 +0x7e:  ret
0809c267 +0x7f:  nop
```

## 反编译 C

```c
// CNCryptoRijndael::Encrypt @ 0x809c1e8

/* CNCryptoRijndael::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoRijndael::Encrypt(CNCryptoRijndael *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      uVar1 = (**(code **)(**(int **)(this + 8) + 0xc))
                        (*(undefined4 *)(this + 8),param_1,param_1,param_2);
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}
```
