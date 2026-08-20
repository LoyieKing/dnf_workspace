# Xor

`_ZN7IMethod3XorEPcPKc`

`IMethod::Xor(char*, char const*)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b4316` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b4316  _ZN7IMethod3XorEPcPKc
#           IMethod::Xor(char*, char const*)
# range [0x080b4316, 0x080b436d]
080b4316 +0x00:  push   %ebp
080b4317 +0x01:  mov    %esp,%ebp
080b4319 +0x03:  sub    $0x10,%esp
080b431c +0x06:  mov    0x8(%ebp),%eax
080b431f +0x09:  movzbl 0x4(%eax),%eax
080b4323 +0x0d:  xor    $0x1,%eax
080b4326 +0x10:  test   %al,%al
080b4328 +0x12:  je     080b4331 <+0x1b>
080b432a +0x14:  mov    $0x70000005,%eax
080b432f +0x19:  jmp    080b436b <+0x55>
080b4331 +0x1b:  movl   $0x0,-0x4(%ebp)
080b4338 +0x22:  jmp    080b4356 <+0x40>
080b433a +0x24:  mov    0xc(%ebp),%eax
080b433d +0x27:  movzbl (%eax),%ecx
080b4340 +0x2a:  mov    0x10(%ebp),%edx
080b4343 +0x2d:  movzbl (%edx),%edx
080b4346 +0x30:  xor    %ecx,%edx
080b4348 +0x32:  mov    %dl,(%eax)
080b434a +0x34:  addl   $0x1,0xc(%ebp)
080b434e +0x38:  addl   $0x1,0x10(%ebp)
080b4352 +0x3c:  addl   $0x1,-0x4(%ebp)
080b4356 +0x40:  mov    0x8(%ebp),%eax
080b4359 +0x43:  mov    0x8(%eax),%eax
080b435c +0x46:  cmp    -0x4(%ebp),%eax
080b435f +0x49:  setg   %al
080b4362 +0x4c:  test   %al,%al
080b4364 +0x4e:  jne    080b433a <+0x24>
080b4366 +0x50:  mov    $0x6fffffff,%eax
080b436b +0x55:  leave
080b436c +0x56:  ret
080b436d +0x57:  nop
```

## 反编译 C

```c
// IMethod::Xor @ 0x80b4316

/* IMethod::Xor(char*, char const*) */

undefined4 __thiscall IMethod::Xor(IMethod *this,char *param_1,char *param_2)

{
  undefined4 uVar1;
  int local_8;
  
  if (this[4] == (IMethod)0x1) {
    for (local_8 = 0; local_8 < *(int *)(this + 8); local_8 = local_8 + 1) {
      *param_1 = *param_2 ^ *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}
```
