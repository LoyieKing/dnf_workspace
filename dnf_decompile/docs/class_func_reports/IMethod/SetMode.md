# SetMode

`_ZN7IMethod7SetModeEi`

`IMethod::SetMode(int)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b436e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b436e  _ZN7IMethod7SetModeEi
#           IMethod::SetMode(int)
# range [0x080b436e, 0x080b43a9]
080b436e +0x00:  push   %ebp
080b436f +0x01:  mov    %esp,%ebp
080b4371 +0x03:  mov    0x8(%ebp),%eax
080b4374 +0x06:  movzbl 0x4(%eax),%eax
080b4378 +0x0a:  xor    $0x1,%eax
080b437b +0x0d:  test   %al,%al
080b437d +0x0f:  je     080b4386 <+0x18>
080b437f +0x11:  mov    $0x70000005,%eax
080b4384 +0x16:  jmp    080b43a7 <+0x39>
080b4386 +0x18:  cmpl   $0x0,0xc(%ebp)
080b438a +0x1c:  js     080b4392 <+0x24>
080b438c +0x1e:  cmpl   $0x2,0xc(%ebp)
080b4390 +0x22:  jle    080b4399 <+0x2b>
080b4392 +0x24:  mov    $0x70000003,%eax
080b4397 +0x29:  jmp    080b43a7 <+0x39>
080b4399 +0x2b:  mov    0x8(%ebp),%eax
080b439c +0x2e:  mov    0xc(%ebp),%edx
080b439f +0x31:  mov    %edx,0x10(%eax)
080b43a2 +0x34:  mov    $0x6fffffff,%eax
080b43a7 +0x39:  pop    %ebp
080b43a8 +0x3a:  ret
080b43a9 +0x3b:  nop
```

## 反编译 C

```c
// IMethod::SetMode @ 0x80b436e

/* IMethod::SetMode(int) */

undefined4 __thiscall IMethod::SetMode(IMethod *this,int param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (IMethod)0x1) {
    if ((param_1 < 0) || (2 < param_1)) {
      uVar1 = 0x70000003;
    }
    else {
      *(int *)(this + 0x10) = param_1;
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```
