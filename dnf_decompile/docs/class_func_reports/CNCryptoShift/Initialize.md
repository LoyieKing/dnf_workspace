# Initialize

`_ZN13CNCryptoShift10InitializeEPKhi`

`CNCryptoShift::Initialize(unsigned char const*, int)`

| 类 | 地址 |
|---|---|
| `CNCryptoShift` | `0x0809c4fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809c4fe  _ZN13CNCryptoShift10InitializeEPKhi
#           CNCryptoShift::Initialize(unsigned char const*, int)
# range [0x0809c4fe, 0x0809c533]
0809c4fe +0x00:  push   %ebp
0809c4ff +0x01:  mov    %esp,%ebp
0809c501 +0x03:  cmpl   $0x7,0x10(%ebp)
0809c505 +0x07:  jg     0809c50e <+0x10>
0809c507 +0x09:  mov    $0x0,%eax
0809c50c +0x0e:  jmp    0809c532 <+0x34>
0809c50e +0x10:  mov    0xc(%ebp),%eax
0809c511 +0x13:  mov    (%eax),%eax
0809c513 +0x15:  mov    %eax,%edx
0809c515 +0x17:  and    $0x1f,%edx
0809c518 +0x1a:  mov    0x8(%ebp),%eax
0809c51b +0x1d:  mov    %edx,0x8(%eax)
0809c51e +0x20:  addl   $0x4,0xc(%ebp)
0809c522 +0x24:  mov    0xc(%ebp),%eax
0809c525 +0x27:  mov    (%eax),%edx
0809c527 +0x29:  mov    0x8(%ebp),%eax
0809c52a +0x2c:  mov    %edx,0xc(%eax)
0809c52d +0x2f:  mov    $0x6fffffff,%eax
0809c532 +0x34:  pop    %ebp
0809c533 +0x35:  ret
```

## 反编译 C

```c
// CNCryptoShift::Initialize @ 0x809c4fe

/* CNCryptoShift::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoShift::Initialize(CNCryptoShift *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 8) {
    uVar1 = 0;
  }
  else {
    *(uint *)(this + 8) = *(uint *)param_1 & 0x1f;
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}
```
