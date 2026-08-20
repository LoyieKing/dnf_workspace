# operator>>

`_ZN6StreamrsERm`

`Stream::operator>>(unsigned long&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c7c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c7c8  _ZN6StreamrsERm
#           Stream::operator>>(unsigned long&)
# range [0x0861c7c8, 0x0861c7f9]
0861c7c8 +0x00:  push   %ebp
0861c7c9 +0x01:  mov    %esp,%ebp
0861c7cb +0x03:  sub    $0x28,%esp
0861c7ce +0x06:  movl   $0x0,-0x10(%ebp)
0861c7d5 +0x0d:  lea    -0x10(%ebp),%eax
0861c7d8 +0x10:  mov    %eax,0x4(%esp)
0861c7dc +0x14:  mov    0x8(%ebp),%eax
0861c7df +0x17:  mov    %eax,(%esp)
0861c7e2 +0x1a:  call   0861c636 <_ZN6StreamrsERl>  ; Stream::operator>>(long&)
0861c7e7 +0x1f:  mov    %al,-0x9(%ebp)
0861c7ea +0x22:  mov    -0x10(%ebp),%eax
0861c7ed +0x25:  mov    %eax,%edx
0861c7ef +0x27:  mov    0xc(%ebp),%eax
0861c7f2 +0x2a:  mov    %edx,(%eax)
0861c7f4 +0x2c:  movzbl -0x9(%ebp),%eax
0861c7f8 +0x30:  leave
0861c7f9 +0x31:  ret
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c7c8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned long&) */

undefined1 __thiscall Stream::operator>>(Stream *this,ulong *param_1)

{
  undefined1 uVar1;
  ulong local_14 [4];
  
  local_14[0] = 0;
  uVar1 = operator>>(this,(long *)local_14);
  *param_1 = local_14[0];
  return uVar1;
}
```
