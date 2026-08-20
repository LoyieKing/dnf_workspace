# BytesToWord

`_ZN7IMethod11BytesToWordEPKhRj`

`IMethod::BytesToWord(unsigned char const*, unsigned int&)`

| 类 | 地址 |
|---|---|
| `IMethod` | `0x080b459e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080b459e  _ZN7IMethod11BytesToWordEPKhRj
#           IMethod::BytesToWord(unsigned char const*, unsigned int&)
# range [0x080b459e, 0x080b4615]
080b459e +0x00:  push   %ebp
080b459f +0x01:  mov    %esp,%ebp
080b45a1 +0x03:  mov    0xc(%ebp),%eax
080b45a4 +0x06:  movl   $0x0,(%eax)
080b45aa +0x0c:  mov    0xc(%ebp),%eax
080b45ad +0x0f:  mov    (%eax),%edx
080b45af +0x11:  mov    0x8(%ebp),%eax
080b45b2 +0x14:  movzbl (%eax),%eax
080b45b5 +0x17:  movzbl %al,%eax
080b45b8 +0x1a:  shl    $0x18,%eax
080b45bb +0x1d:  or     %eax,%edx
080b45bd +0x1f:  mov    0xc(%ebp),%eax
080b45c0 +0x22:  mov    %edx,(%eax)
080b45c2 +0x24:  addl   $0x1,0x8(%ebp)
080b45c6 +0x28:  mov    0xc(%ebp),%eax
080b45c9 +0x2b:  mov    (%eax),%edx
080b45cb +0x2d:  mov    0x8(%ebp),%eax
080b45ce +0x30:  movzbl (%eax),%eax
080b45d1 +0x33:  movzbl %al,%eax
080b45d4 +0x36:  shl    $0x10,%eax
080b45d7 +0x39:  or     %eax,%edx
080b45d9 +0x3b:  mov    0xc(%ebp),%eax
080b45dc +0x3e:  mov    %edx,(%eax)
080b45de +0x40:  addl   $0x1,0x8(%ebp)
080b45e2 +0x44:  mov    0xc(%ebp),%eax
080b45e5 +0x47:  mov    (%eax),%edx
080b45e7 +0x49:  mov    0x8(%ebp),%eax
080b45ea +0x4c:  movzbl (%eax),%eax
080b45ed +0x4f:  movzbl %al,%eax
080b45f0 +0x52:  shl    $0x8,%eax
080b45f3 +0x55:  or     %eax,%edx
080b45f5 +0x57:  mov    0xc(%ebp),%eax
080b45f8 +0x5a:  mov    %edx,(%eax)
080b45fa +0x5c:  addl   $0x1,0x8(%ebp)
080b45fe +0x60:  mov    0xc(%ebp),%eax
080b4601 +0x63:  mov    (%eax),%edx
080b4603 +0x65:  mov    0x8(%ebp),%eax
080b4606 +0x68:  movzbl (%eax),%eax
080b4609 +0x6b:  movzbl %al,%eax
080b460c +0x6e:  or     %eax,%edx
080b460e +0x70:  mov    0xc(%ebp),%eax
080b4611 +0x73:  mov    %edx,(%eax)
080b4613 +0x75:  pop    %ebp
080b4614 +0x76:  ret
080b4615 +0x77:  nop
```

## 反编译 C

```c
// IMethod::BytesToWord @ 0x80b459e

/* IMethod::BytesToWord(unsigned char const*, unsigned int&) */

void IMethod::BytesToWord(uchar *param_1,uint *param_2)

{
  *param_2 = 0;
  *param_2 = *param_2 | (uint)*param_1 << 0x18;
  *param_2 = *param_2 | (uint)param_1[1] << 0x10;
  *param_2 = *param_2 | (uint)param_1[2] << 8;
  *param_2 = *param_2 | (uint)param_1[3];
  return;
}
```
