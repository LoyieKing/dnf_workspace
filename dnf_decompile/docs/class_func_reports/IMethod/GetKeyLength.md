# GetKeyLength

`_ZN7IMethod12GetKeyLengthEPj`

`IMethod::GetKeyLength(unsigned int*)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b43e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b43e6  _ZN7IMethod12GetKeyLengthEPj
#           IMethod::GetKeyLength(unsigned int*)
# range [0x080b43e6, 0x080b4415]
080b43e6 +0x00:  push   %ebp
080b43e7 +0x01:  mov    %esp,%ebp
080b43e9 +0x03:  mov    0x8(%ebp),%eax
080b43ec +0x06:  movzbl 0x4(%eax),%eax
080b43f0 +0x0a:  xor    $0x1,%eax
080b43f3 +0x0d:  test   %al,%al
080b43f5 +0x0f:  je     080b440d <+0x27>
080b43f7 +0x11:  cmpl   $0x0,0xc(%ebp)
080b43fb +0x15:  je     080b4406 <+0x20>
080b43fd +0x17:  mov    0xc(%ebp),%eax
080b4400 +0x1a:  movl   $0x70000005,(%eax)
080b4406 +0x20:  mov    $0x0,%eax
080b440b +0x25:  jmp    080b4413 <+0x2d>
080b440d +0x27:  mov    0x8(%ebp),%eax
080b4410 +0x2a:  mov    0xc(%eax),%eax
080b4413 +0x2d:  pop    %ebp
080b4414 +0x2e:  ret
080b4415 +0x2f:  nop
```

## 反编译 C

```c
// IMethod::GetKeyLength @ 0x80b43e6

/* IMethod::GetKeyLength(unsigned int*) */

undefined4 __thiscall IMethod::GetKeyLength(IMethod *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    uVar1 = *(undefined4 *)(this + 0xc);
  }
  else {
    if (param_1 != (uint *)0x0) {
      *param_1 = 0x70000005;
    }
    uVar1 = 0;
  }
  return uVar1;
}
```
