# Encrypt

`_ZN11CNCryptoTea7EncryptEPhi`

`CNCryptoTea::Encrypt(unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d110  _ZN11CNCryptoTea7EncryptEPhi
#           CNCryptoTea::Encrypt(unsigned char*, int)
# range [0x0809d110, 0x0809d19b]
0809d110 +0x00:  push   %ebp
0809d111 +0x01:  mov    %esp,%ebp
0809d113 +0x03:  push   %esi
0809d114 +0x04:  push   %ebx
0809d115 +0x05:  sub    $0x20,%esp
0809d118 +0x08:  mov    0x8(%ebp),%eax
0809d11b +0x0b:  mov    0x8(%eax),%eax
0809d11e +0x0e:  test   %eax,%eax
0809d120 +0x10:  jne    0809d129 <+0x19>
0809d122 +0x12:  mov    $0x7000000c,%eax
0809d127 +0x17:  jmp    0809d195 <+0x85>
0809d129 +0x19:  cmpl   $0x0,0x10(%ebp)
0809d12d +0x1d:  jg     0809d136 <+0x26>
0809d12f +0x1f:  mov    $0x7000000b,%eax
0809d134 +0x24:  jmp    0809d195 <+0x85>
0809d136 +0x26:  mov    0x8(%ebp),%eax
0809d139 +0x29:  mov    (%eax),%eax
0809d13b +0x2b:  add    $0x24,%eax
0809d13e +0x2e:  mov    (%eax),%edx
0809d140 +0x30:  mov    0x8(%ebp),%eax
0809d143 +0x33:  mov    %eax,(%esp)
0809d146 +0x36:  call   *%edx
0809d148 +0x38:  mov    %eax,-0xc(%ebp)
0809d14b +0x3b:  mov    0x10(%ebp),%edx
0809d14e +0x3e:  mov    %edx,%eax
0809d150 +0x40:  sar    $0x1f,%edx
0809d153 +0x43:  idivl  -0xc(%ebp)
0809d156 +0x46:  mov    %edx,%eax
0809d158 +0x48:  test   %eax,%eax
0809d15a +0x4a:  setne  %al
0809d15d +0x4d:  test   %al,%al
0809d15f +0x4f:  je     0809d168 <+0x58>
0809d161 +0x51:  mov    $0x70000006,%eax
0809d166 +0x56:  jmp    0809d195 <+0x85>
0809d168 +0x58:  mov    0x8(%ebp),%eax
0809d16b +0x5b:  mov    0x8(%eax),%eax
0809d16e +0x5e:  mov    (%eax),%eax
0809d170 +0x60:  add    $0xc,%eax
0809d173 +0x63:  mov    (%eax),%esi
0809d175 +0x65:  mov    0x10(%ebp),%ebx
0809d178 +0x68:  mov    0xc(%ebp),%ecx
0809d17b +0x6b:  mov    0xc(%ebp),%edx
0809d17e +0x6e:  mov    0x8(%ebp),%eax
0809d181 +0x71:  mov    0x8(%eax),%eax
0809d184 +0x74:  mov    %ebx,0xc(%esp)
0809d188 +0x78:  mov    %ecx,0x8(%esp)
0809d18c +0x7c:  mov    %edx,0x4(%esp)
0809d190 +0x80:  mov    %eax,(%esp)
0809d193 +0x83:  call   *%esi
0809d195 +0x85:  add    $0x20,%esp
0809d198 +0x88:  pop    %ebx
0809d199 +0x89:  pop    %esi
0809d19a +0x8a:  pop    %ebp
0809d19b +0x8b:  ret
```

## 反编译 C

```c
// CNCryptoTea::Encrypt @ 0x809d110

/* CNCryptoTea::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoTea::Encrypt(CNCryptoTea *this,uchar *param_1,int param_2)

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
