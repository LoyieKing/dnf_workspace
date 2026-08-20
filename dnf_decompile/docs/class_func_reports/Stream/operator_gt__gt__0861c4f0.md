# operator>>

`_ZN6StreamrsERc`

`Stream::operator>>(char&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c4f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c4f0  _ZN6StreamrsERc
#           Stream::operator>>(char&)
# range [0x0861c4f0, 0x0861c551]
0861c4f0 +0x00:  push   %ebp
0861c4f1 +0x01:  mov    %esp,%ebp
0861c4f3 +0x03:  push   %ebx
0861c4f4 +0x04:  sub    $0x14,%esp
0861c4f7 +0x07:  movl   $0x1,0x4(%esp)
0861c4ff +0x0f:  mov    0x8(%ebp),%eax
0861c502 +0x12:  mov    %eax,(%esp)
0861c505 +0x15:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0861c50a +0x1a:  xor    $0x1,%eax
0861c50d +0x1d:  test   %al,%al
0861c50f +0x1f:  je     0861c518 <+0x28>
0861c511 +0x21:  mov    $0x0,%eax
0861c516 +0x26:  jmp    0861c54c <+0x5c>
0861c518 +0x28:  mov    0x8(%ebp),%eax
0861c51b +0x2b:  mov    0x8(%eax),%ebx
0861c51e +0x2e:  mov    0x8(%ebp),%eax
0861c521 +0x31:  mov    %eax,(%esp)
0861c524 +0x34:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c529 +0x39:  lea    (%ebx,%eax,1),%eax
0861c52c +0x3c:  movzbl (%eax),%edx
0861c52f +0x3f:  mov    0xc(%ebp),%eax
0861c532 +0x42:  mov    %dl,(%eax)
0861c534 +0x44:  movl   $0x1,0x4(%esp)
0861c53c +0x4c:  mov    0x8(%ebp),%eax
0861c53f +0x4f:  mov    %eax,(%esp)
0861c542 +0x52:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c547 +0x57:  mov    $0x1,%eax
0861c54c +0x5c:  add    $0x14,%esp
0861c54f +0x5f:  pop    %ebx
0861c550 +0x60:  pop    %ebp
0861c551 +0x61:  ret
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c4f0

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char&) */

bool __thiscall Stream::operator>>(Stream *this,char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,1);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    *param_1 = *(char *)(iVar1 + iVar3);
    out_ptr(this,1);
  }
  return cVar2 == '\x01';
}
```
