# operator>>

`_ZN6StreamrsERt`

`Stream::operator>>(unsigned short&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c762` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c762  _ZN6StreamrsERt
#           Stream::operator>>(unsigned short&)
# range [0x0861c762, 0x0861c795]
0861c762 +0x00:  push   %ebp
0861c763 +0x01:  mov    %esp,%ebp
0861c765 +0x03:  sub    $0x28,%esp
0861c768 +0x06:  movw   $0x0,-0xc(%ebp)
0861c76e +0x0c:  lea    -0xc(%ebp),%eax
0861c771 +0x0f:  mov    %eax,0x4(%esp)
0861c775 +0x13:  mov    0x8(%ebp),%eax
0861c778 +0x16:  mov    %eax,(%esp)
0861c77b +0x19:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0861c780 +0x1e:  mov    %al,-0x9(%ebp)
0861c783 +0x21:  movzwl -0xc(%ebp),%eax
0861c787 +0x25:  mov    %eax,%edx
0861c789 +0x27:  mov    0xc(%ebp),%eax
0861c78c +0x2a:  mov    %dx,(%eax)
0861c78f +0x2d:  movzbl -0x9(%ebp),%eax
0861c793 +0x31:  leave
0861c794 +0x32:  ret
0861c795 +0x33:  nop
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c762

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned short&) */

undefined1 __thiscall Stream::operator>>(Stream *this,ushort *param_1)

{
  undefined1 uVar1;
  ushort local_10 [6];
  
  local_10[0] = 0;
  uVar1 = operator>>(this,(short *)local_10);
  *param_1 = local_10[0];
  return uVar1;
}
```
