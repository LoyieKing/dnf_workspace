# SetPadding

`_ZN7IMethod10SetPaddingEi`

`IMethod::SetPadding(int)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b43aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b43aa  _ZN7IMethod10SetPaddingEi
#           IMethod::SetPadding(int)
# range [0x080b43aa, 0x080b43e5]
080b43aa +0x00:  push   %ebp
080b43ab +0x01:  mov    %esp,%ebp
080b43ad +0x03:  mov    0x8(%ebp),%eax
080b43b0 +0x06:  movzbl 0x4(%eax),%eax
080b43b4 +0x0a:  xor    $0x1,%eax
080b43b7 +0x0d:  test   %al,%al
080b43b9 +0x0f:  je     080b43c2 <+0x18>
080b43bb +0x11:  mov    $0x70000005,%eax
080b43c0 +0x16:  jmp    080b43e3 <+0x39>
080b43c2 +0x18:  cmpl   $0x0,0xc(%ebp)
080b43c6 +0x1c:  js     080b43ce <+0x24>
080b43c8 +0x1e:  cmpl   $0x2,0xc(%ebp)
080b43cc +0x22:  jle    080b43d5 <+0x2b>
080b43ce +0x24:  mov    $0x70000004,%eax
080b43d3 +0x29:  jmp    080b43e3 <+0x39>
080b43d5 +0x2b:  mov    0x8(%ebp),%eax
080b43d8 +0x2e:  mov    0xc(%ebp),%edx
080b43db +0x31:  mov    %edx,0x14(%eax)
080b43de +0x34:  mov    $0x6fffffff,%eax
080b43e3 +0x39:  pop    %ebp
080b43e4 +0x3a:  ret
080b43e5 +0x3b:  nop
```

## 反编译 C

```c
// IMethod::SetPadding @ 0x80b43aa

/* IMethod::SetPadding(int) */

undefined4 __thiscall IMethod::SetPadding(IMethod *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    if ((param_1 < 0) || (2 < param_1)) {
      uVar1 = 0x70000004;
    }
    else {
      *(int *)(this + 0x14) = param_1;
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```
