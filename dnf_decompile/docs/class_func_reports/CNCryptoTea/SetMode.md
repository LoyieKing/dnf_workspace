# SetMode

`_ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE`

`CNCryptoTea::SetMode(CRYPTO_MODE_TYPE)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d04a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d04a  _ZN11CNCryptoTea7SetModeE16CRYPTO_MODE_TYPE
#           CNCryptoTea::SetMode(CRYPTO_MODE_TYPE)
# range [0x0809d04a, 0x0809d0c1]
0809d04a +0x00:  push   %ebp
0809d04b +0x01:  mov    %esp,%ebp
0809d04d +0x03:  sub    $0x18,%esp
0809d050 +0x06:  mov    0x8(%ebp),%eax
0809d053 +0x09:  mov    0x8(%eax),%eax
0809d056 +0x0c:  test   %eax,%eax
0809d058 +0x0e:  jne    0809d061 <+0x17>
0809d05a +0x10:  mov    $0x7000000c,%eax
0809d05f +0x15:  jmp    0809d0bf <+0x75>
0809d061 +0x17:  mov    0xc(%ebp),%eax
0809d064 +0x1a:  cmp    $0x1,%eax
0809d067 +0x1d:  je     0809d08a <+0x40>
0809d069 +0x1f:  cmp    $0x3,%eax
0809d06c +0x22:  je     0809d0a2 <+0x58>
0809d06e +0x24:  test   %eax,%eax
0809d070 +0x26:  jne    0809d0ba <+0x70>
0809d072 +0x28:  mov    0x8(%ebp),%eax
0809d075 +0x2b:  mov    0x8(%eax),%eax
0809d078 +0x2e:  movl   $0x0,0x4(%esp)
0809d080 +0x36:  mov    %eax,(%esp)
0809d083 +0x39:  call   080b436e <_ZN7IMethod7SetModeEi>  ; IMethod::SetMode(int)
0809d088 +0x3e:  jmp    0809d0bf <+0x75>
0809d08a +0x40:  mov    0x8(%ebp),%eax
0809d08d +0x43:  mov    0x8(%eax),%eax
0809d090 +0x46:  movl   $0x1,0x4(%esp)
0809d098 +0x4e:  mov    %eax,(%esp)
0809d09b +0x51:  call   080b436e <_ZN7IMethod7SetModeEi>  ; IMethod::SetMode(int)
0809d0a0 +0x56:  jmp    0809d0bf <+0x75>
0809d0a2 +0x58:  mov    0x8(%ebp),%eax
0809d0a5 +0x5b:  mov    0x8(%eax),%eax
0809d0a8 +0x5e:  movl   $0x2,0x4(%esp)
0809d0b0 +0x66:  mov    %eax,(%esp)
0809d0b3 +0x69:  call   080b436e <_ZN7IMethod7SetModeEi>  ; IMethod::SetMode(int)
0809d0b8 +0x6e:  jmp    0809d0bf <+0x75>
0809d0ba +0x70:  mov    $0x70000003,%eax
0809d0bf +0x75:  leave
0809d0c0 +0x76:  ret
0809d0c1 +0x77:  nop
```

## 反编译 C

```c
// CNCryptoTea::SetMode @ 0x809d04a

/* CNCryptoTea::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoTea::SetMode(CNCryptoTea *this,int param_2)

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
    uVar1 = 0x70000003;
  }
  return uVar1;
}
```
