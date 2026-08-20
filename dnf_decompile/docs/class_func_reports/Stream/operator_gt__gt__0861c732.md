# operator>>

`_ZN6StreamrsERh`

`Stream::operator>>(unsigned char&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c732` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c732  _ZN6StreamrsERh
#           Stream::operator>>(unsigned char&)
# range [0x0861c732, 0x0861c761]
0861c732 +0x00:  push   %ebp
0861c733 +0x01:  mov    %esp,%ebp
0861c735 +0x03:  sub    $0x28,%esp
0861c738 +0x06:  movb   $0x0,-0xa(%ebp)
0861c73c +0x0a:  lea    -0xa(%ebp),%eax
0861c73f +0x0d:  mov    %eax,0x4(%esp)
0861c743 +0x11:  mov    0x8(%ebp),%eax
0861c746 +0x14:  mov    %eax,(%esp)
0861c749 +0x17:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
0861c74e +0x1c:  mov    %al,-0x9(%ebp)
0861c751 +0x1f:  movzbl -0xa(%ebp),%eax
0861c755 +0x23:  mov    %eax,%edx
0861c757 +0x25:  mov    0xc(%ebp),%eax
0861c75a +0x28:  mov    %dl,(%eax)
0861c75c +0x2a:  movzbl -0x9(%ebp),%eax
0861c760 +0x2e:  leave
0861c761 +0x2f:  ret
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c732

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned char&) */

undefined1 __thiscall Stream::operator>>(Stream *this,uchar *param_1)

{
  undefined1 uVar1;
  uchar local_e [10];
  
  local_e[0] = '\0';
  uVar1 = operator>>(this,(char *)local_e);
  *param_1 = local_e[0];
  return uVar1;
}
```
