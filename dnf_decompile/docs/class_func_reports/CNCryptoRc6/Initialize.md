# Initialize

`_ZN11CNCryptoRc610InitializeEPKhi`

`CNCryptoRc6::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRc6` | `0x0809bc84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809bc84  _ZN11CNCryptoRc610InitializeEPKhi
#           CNCryptoRc6::Initialize(unsigned char const*, int)
# range [0x0809bc84, 0x0809bd05]
0809bc84 +0x00:  push   %ebp
0809bc85 +0x01:  mov    %esp,%ebp
0809bc87 +0x03:  sub    $0x18,%esp
0809bc8a +0x06:  mov    0x8(%ebp),%eax
0809bc8d +0x09:  mov    0x8(%eax),%eax
0809bc90 +0x0c:  test   %eax,%eax
0809bc92 +0x0e:  jne    0809bc9b <+0x17>
0809bc94 +0x10:  mov    $0x7000000c,%eax
0809bc99 +0x15:  jmp    0809bd04 <+0x80>
0809bc9b +0x17:  cmpl   $0x3b,0x10(%ebp)
0809bc9f +0x1b:  jg     0809bca8 <+0x24>
0809bca1 +0x1d:  mov    $0x70000002,%eax
0809bca6 +0x22:  jmp    0809bd04 <+0x80>
0809bca8 +0x24:  mov    0x8(%ebp),%eax
0809bcab +0x27:  mov    0x8(%eax),%eax
0809bcae +0x2a:  movl   $0x20,0x8(%esp)
0809bcb6 +0x32:  mov    0xc(%ebp),%edx
0809bcb9 +0x35:  mov    %edx,0x4(%esp)
0809bcbd +0x39:  mov    %eax,(%esp)
0809bcc0 +0x3c:  call   0807d8a0 <_init+0x198>
0809bcc5 +0x41:  addl   $0x20,0xc(%ebp)
0809bcc9 +0x45:  mov    0x8(%ebp),%eax
0809bccc +0x48:  mov    0x8(%eax),%eax
0809bccf +0x4b:  lea    0x20(%eax),%edx
0809bcd2 +0x4e:  movl   $0x2c,0x8(%esp)
0809bcda +0x56:  mov    0xc(%ebp),%eax
0809bcdd +0x59:  mov    %eax,0x4(%esp)
0809bce1 +0x5d:  mov    %edx,(%esp)
0809bce4 +0x60:  call   0807d8a0 <_init+0x198>
0809bce9 +0x65:  mov    0x8(%ebp),%eax
0809bcec +0x68:  mov    0x8(%eax),%eax
0809bcef +0x6b:  movl   $0x20,0x4(%esp)
0809bcf7 +0x73:  mov    %eax,(%esp)
0809bcfa +0x76:  call   080b5b48 <_Z13rc6_key_setupP12RC6_ALG_INFOi>  ; rc6_key_setup(RC6_ALG_INFO*, int)
0809bcff +0x7b:  mov    $0x6fffffff,%eax
0809bd04 +0x80:  leave
0809bd05 +0x81:  ret
```

## 反编译 C

```c
// CNCryptoRc6::Initialize @ 0x809bc84

/* CNCryptoRc6::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoRc6::Initialize(CNCryptoRc6 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 < 0x3c) {
    uVar1 = 0x70000002;
  }
  else {
    memcpy(*(void **)(this + 8),param_1,0x20);
    memcpy((void *)(*(int *)(this + 8) + 0x20),param_1 + 0x20,0x2c);
    rc6_key_setup(*(RC6_ALG_INFO **)(this + 8),0x20);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
