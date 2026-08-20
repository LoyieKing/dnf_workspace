# GetBlockSize

`_ZN7IMethod12GetBlockSizeEPj`

`IMethod::GetBlockSize(unsigned int*)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b4416` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b4416  _ZN7IMethod12GetBlockSizeEPj
#           IMethod::GetBlockSize(unsigned int*)
# range [0x080b4416, 0x080b4445]
080b4416 +0x00:  push   %ebp
080b4417 +0x01:  mov    %esp,%ebp
080b4419 +0x03:  mov    0x8(%ebp),%eax
080b441c +0x06:  movzbl 0x4(%eax),%eax
080b4420 +0x0a:  xor    $0x1,%eax
080b4423 +0x0d:  test   %al,%al
080b4425 +0x0f:  je     080b443d <+0x27>
080b4427 +0x11:  cmpl   $0x0,0xc(%ebp)
080b442b +0x15:  je     080b4436 <+0x20>
080b442d +0x17:  mov    0xc(%ebp),%eax
080b4430 +0x1a:  movl   $0x70000005,(%eax)
080b4436 +0x20:  mov    $0x0,%eax
080b443b +0x25:  jmp    080b4443 <+0x2d>
080b443d +0x27:  mov    0x8(%ebp),%eax
080b4440 +0x2a:  mov    0x8(%eax),%eax
080b4443 +0x2d:  pop    %ebp
080b4444 +0x2e:  ret
080b4445 +0x2f:  nop
```

## 反编译 C

```c
// IMethod::GetBlockSize @ 0x80b4416

/* IMethod::GetBlockSize(unsigned int*) */

undefined4 __thiscall IMethod::GetBlockSize(IMethod *this,uint *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    uVar1 = *(undefined4 *)(this + 8);
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
