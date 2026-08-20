# SetMode

`_ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoRijndael::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c112` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c112  _ZN16CNCryptoRijndael7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoRijndael::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809c112, 0x0809c189]
0809c112 +0x00:  push   %ebp
0809c113 +0x01:  mov    %esp,%ebp
0809c115 +0x03:  sub    $0x18,%esp
0809c118 +0x06:  mov    0x8(%ebp),%eax
0809c11b +0x09:  mov    0x8(%eax),%eax
0809c11e +0x0c:  test   %eax,%eax
0809c120 +0x0e:  jne    0809c129 <+0x17>
0809c122 +0x10:  mov    $0x7000000c,%eax
0809c127 +0x15:  jmp    0809c187 <+0x75>
0809c129 +0x17:  mov    0xc(%ebp),%eax
0809c12c +0x1a:  cmp    $0x1,%eax
0809c12f +0x1d:  je     0809c152 <+0x40>
0809c131 +0x1f:  cmp    $0x3,%eax
0809c134 +0x22:  je     0809c16a <+0x58>
0809c136 +0x24:  test   %eax,%eax
0809c138 +0x26:  jne    0809c182 <+0x70>
0809c13a +0x28:  mov    0x8(%ebp),%eax
0809c13d +0x2b:  mov    0x8(%eax),%eax
0809c140 +0x2e:  movl   $0x0,0x4(%esp)
0809c148 +0x36:  mov    %eax,(%esp)
0809c14b +0x39:  call   080b436e <_ZN7IMethod7SetModeEi>  ; IMethod::SetMode(int)
0809c150 +0x3e:  jmp    0809c187 <+0x75>
0809c152 +0x40:  mov    0x8(%ebp),%eax
0809c155 +0x43:  mov    0x8(%eax),%eax
0809c158 +0x46:  movl   $0x1,0x4(%esp)
0809c160 +0x4e:  mov    %eax,(%esp)
0809c163 +0x51:  call   080b436e <_ZN7IMethod7SetModeEi>  ; IMethod::SetMode(int)
0809c168 +0x56:  jmp    0809c187 <+0x75>
0809c16a +0x58:  mov    0x8(%ebp),%eax
0809c16d +0x5b:  mov    0x8(%eax),%eax
0809c170 +0x5e:  movl   $0x2,0x4(%esp)
0809c178 +0x66:  mov    %eax,(%esp)
0809c17b +0x69:  call   080b436e <_ZN7IMethod7SetModeEi>  ; IMethod::SetMode(int)
0809c180 +0x6e:  jmp    0809c187 <+0x75>
0809c182 +0x70:  mov    $0x70000017,%eax
0809c187 +0x75:  leave
0809c188 +0x76:  ret
0809c189 +0x77:  nop
```

## 反编译 C

```c
// CNCryptoRijndael::SetMode @ 0x809c112

/* CNCryptoRijndael::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoRijndael::SetMode(CNCryptoRijndael *this,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 == 1) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),1);
  }
  else if (param_2 == 3) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),2);
  }
  else if (param_2 == 0) {
    uVar1 = IMethod::SetMode(*(IMethod **)(this + 8),0);
  }
  else {
    uVar1 = 0x70000017;
  }
  return uVar1;
}
```
