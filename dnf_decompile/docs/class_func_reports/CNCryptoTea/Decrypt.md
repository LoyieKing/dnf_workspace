# Decrypt

`_ZN11CNCryptoTea7DecryptEPhi`

`CNCryptoTea::Decrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d19c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d19c  _ZN11CNCryptoTea7DecryptEPhi
#           CNCryptoTea::Decrypt(unsigned char*, int)
# range [0x0809d19c, 0x0809d227]
0809d19c +0x00:  push   %ebp
0809d19d +0x01:  mov    %esp,%ebp
0809d19f +0x03:  push   %esi
0809d1a0 +0x04:  push   %ebx
0809d1a1 +0x05:  sub    $0x20,%esp
0809d1a4 +0x08:  mov    0x8(%ebp),%eax
0809d1a7 +0x0b:  mov    0x8(%eax),%eax
0809d1aa +0x0e:  test   %eax,%eax
0809d1ac +0x10:  jne    0809d1b5 <+0x19>
0809d1ae +0x12:  mov    $0x7000000c,%eax
0809d1b3 +0x17:  jmp    0809d221 <+0x85>
0809d1b5 +0x19:  cmpl   $0x0,0x10(%ebp)
0809d1b9 +0x1d:  jg     0809d1c2 <+0x26>
0809d1bb +0x1f:  mov    $0x7000000b,%eax
0809d1c0 +0x24:  jmp    0809d221 <+0x85>
0809d1c2 +0x26:  mov    0x8(%ebp),%eax
0809d1c5 +0x29:  mov    (%eax),%eax
0809d1c7 +0x2b:  add    $0x24,%eax
0809d1ca +0x2e:  mov    (%eax),%edx
0809d1cc +0x30:  mov    0x8(%ebp),%eax
0809d1cf +0x33:  mov    %eax,(%esp)
0809d1d2 +0x36:  call   *%edx
0809d1d4 +0x38:  mov    %eax,-0xc(%ebp)
0809d1d7 +0x3b:  mov    0x10(%ebp),%edx
0809d1da +0x3e:  mov    %edx,%eax
0809d1dc +0x40:  sar    $0x1f,%edx
0809d1df +0x43:  idivl  -0xc(%ebp)
0809d1e2 +0x46:  mov    %edx,%eax
0809d1e4 +0x48:  test   %eax,%eax
0809d1e6 +0x4a:  setne  %al
0809d1e9 +0x4d:  test   %al,%al
0809d1eb +0x4f:  je     0809d1f4 <+0x58>
0809d1ed +0x51:  mov    $0x70000006,%eax
0809d1f2 +0x56:  jmp    0809d221 <+0x85>
0809d1f4 +0x58:  mov    0x8(%ebp),%eax
0809d1f7 +0x5b:  mov    0x8(%eax),%eax
0809d1fa +0x5e:  mov    (%eax),%eax
0809d1fc +0x60:  add    $0x10,%eax
0809d1ff +0x63:  mov    (%eax),%esi
0809d201 +0x65:  mov    0x10(%ebp),%ebx
0809d204 +0x68:  mov    0xc(%ebp),%ecx
0809d207 +0x6b:  mov    0xc(%ebp),%edx
0809d20a +0x6e:  mov    0x8(%ebp),%eax
0809d20d +0x71:  mov    0x8(%eax),%eax
0809d210 +0x74:  mov    %ebx,0xc(%esp)
0809d214 +0x78:  mov    %ecx,0x8(%esp)
0809d218 +0x7c:  mov    %edx,0x4(%esp)
0809d21c +0x80:  mov    %eax,(%esp)
0809d21f +0x83:  call   *%esi
0809d221 +0x85:  add    $0x20,%esp
0809d224 +0x88:  pop    %ebx
0809d225 +0x89:  pop    %esi
0809d226 +0x8a:  pop    %ebp
0809d227 +0x8b:  ret
```

## 反编译 C

```c
// CNCryptoTea::Decrypt @ 0x809d19c

/* CNCryptoTea::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTea::Decrypt(CNCryptoTea *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 < 1) {
    uVar1 = 0x7000000b;
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
