# Initialize

`_ZN16CNCryptoRijndael10InitializeEPKhi`

`CNCryptoRijndael::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoRijndael` | `0x0809c18a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c18a  _ZN16CNCryptoRijndael10InitializeEPKhi
#           CNCryptoRijndael::Initialize(unsigned char const*, int)
# range [0x0809c18a, 0x0809c1e7]
0809c18a +0x00:  push   %ebp
0809c18b +0x01:  mov    %esp,%ebp
0809c18d +0x03:  sub    $0x28,%esp
0809c190 +0x06:  mov    0x8(%ebp),%eax
0809c193 +0x09:  mov    0x8(%eax),%eax
0809c196 +0x0c:  test   %eax,%eax
0809c198 +0x0e:  jne    0809c1a1 <+0x17>
0809c19a +0x10:  mov    $0x7000000c,%eax
0809c19f +0x15:  jmp    0809c1e5 <+0x5b>
0809c1a1 +0x17:  mov    0xc(%ebp),%edx
0809c1a4 +0x1a:  mov    0x8(%ebp),%eax
0809c1a7 +0x1d:  mov    0x8(%eax),%eax
0809c1aa +0x20:  movl   $0x0,0x1c(%esp)
0809c1b2 +0x28:  movl   $0x0,0x18(%esp)
0809c1ba +0x30:  movl   $0x10,0x14(%esp)
0809c1c2 +0x38:  movl   $0x10,0x10(%esp)
0809c1ca +0x40:  movl   $&_ZN9CRijndael9sm_chain0E,0xc(%esp)
0809c1d2 +0x48:  mov    0x10(%ebp),%ecx
0809c1d5 +0x4b:  mov    %ecx,0x8(%esp)
0809c1d9 +0x4f:  mov    %edx,0x4(%esp)
0809c1dd +0x53:  mov    %eax,(%esp)
0809c1e0 +0x56:  call   080b6220 <_ZN9CRijndael10InitializeEPKciS1_iiii>  ; CRijndael::Initialize(char const*, int, char const*, int, int, int, int)
0809c1e5 +0x5b:  leave
0809c1e6 +0x5c:  ret
0809c1e7 +0x5d:  nop
```

## 反编译 C

```c
// CNCryptoRijndael::Initialize @ 0x809c18a

/* CNCryptoRijndael::Initialize(unsigned char const*, int) */

undefined4 __thiscall
CNCryptoRijndael::Initialize(CNCryptoRijndael *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    uVar1 = CRijndael::Initialize
                      (*(CRijndael **)(this + 8),(char *)param_1,param_2,CRijndael::sm_chain0,0x10,
                       0x10,0,0);
  }
  return uVar1;
}
```
