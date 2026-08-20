# Initialize

`_ZN11CNCryptoTea10InitializeEPKhi`

`CNCryptoTea::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoTea` | `0x0809d0c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809d0c2  _ZN11CNCryptoTea10InitializeEPKhi
#           CNCryptoTea::Initialize(unsigned char const*, int)
# range [0x0809d0c2, 0x0809d10f]
0809d0c2 +0x00:  push   %ebp
0809d0c3 +0x01:  mov    %esp,%ebp
0809d0c5 +0x03:  sub    $0x28,%esp
0809d0c8 +0x06:  mov    0x8(%ebp),%eax
0809d0cb +0x09:  mov    0x8(%eax),%eax
0809d0ce +0x0c:  test   %eax,%eax
0809d0d0 +0x0e:  jne    0809d0d9 <+0x17>
0809d0d2 +0x10:  mov    $0x7000000c,%eax
0809d0d7 +0x15:  jmp    0809d10d <+0x4b>
0809d0d9 +0x17:  mov    0xc(%ebp),%edx
0809d0dc +0x1a:  mov    0x8(%ebp),%eax
0809d0df +0x1d:  mov    0x8(%eax),%eax
0809d0e2 +0x20:  movl   $0x0,0x14(%esp)
0809d0ea +0x28:  movl   $0x0,0x10(%esp)
0809d0f2 +0x30:  movl   $&_ZN4CTEA9sm_chain0E,0xc(%esp)
0809d0fa +0x38:  mov    0x10(%ebp),%ecx
0809d0fd +0x3b:  mov    %ecx,0x8(%esp)
0809d101 +0x3f:  mov    %edx,0x4(%esp)
0809d105 +0x43:  mov    %eax,(%esp)
0809d108 +0x46:  call   080c339c <_ZN4CTEA10InitializeEPKciS1_ii>  ; CTEA::Initialize(char const*, int, char const*, int, int)
0809d10d +0x4b:  leave
0809d10e +0x4c:  ret
0809d10f +0x4d:  nop
```

## 反编译 C

```c
// CNCryptoTea::Initialize @ 0x809d0c2

/* CNCryptoTea::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoTea::Initialize(CNCryptoTea *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    uVar1 = CTEA::Initialize(*(CTEA **)(this + 8),(char *)param_1,param_2,"",0,0);
  }
  return uVar1;
}
```
