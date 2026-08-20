# operator>>

`_ZN6StreamrsERj`

`Stream::operator>>(unsigned int&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c796` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c796  _ZN6StreamrsERj
#           Stream::operator>>(unsigned int&)
# range [0x0861c796, 0x0861c7c7]
0861c796 +0x00:  push   %ebp
0861c797 +0x01:  mov    %esp,%ebp
0861c799 +0x03:  sub    $0x28,%esp
0861c79c +0x06:  movl   $0x0,-0x10(%ebp)
0861c7a3 +0x0d:  lea    -0x10(%ebp),%eax
0861c7a6 +0x10:  mov    %eax,0x4(%esp)
0861c7aa +0x14:  mov    0x8(%ebp),%eax
0861c7ad +0x17:  mov    %eax,(%esp)
0861c7b0 +0x1a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0861c7b5 +0x1f:  mov    %al,-0x9(%ebp)
0861c7b8 +0x22:  mov    -0x10(%ebp),%eax
0861c7bb +0x25:  mov    %eax,%edx
0861c7bd +0x27:  mov    0xc(%ebp),%eax
0861c7c0 +0x2a:  mov    %edx,(%eax)
0861c7c2 +0x2c:  movzbl -0x9(%ebp),%eax
0861c7c6 +0x30:  leave
0861c7c7 +0x31:  ret
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c796

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) */

undefined1 __thiscall Stream::operator>>(Stream *this,uint *param_1)

{
  undefined1 uVar1;
  uint local_14 [4];
  
  local_14[0] = 0;
  uVar1 = operator>>(this,(int *)local_14);
  *param_1 = local_14[0];
  return uVar1;
}
```
