# operator>>

`_ZN6StreamrsERl`

`Stream::operator>>(long&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c636  _ZN6StreamrsERl
#           Stream::operator>>(long&)
# range [0x0861c636, 0x0861c6a7]
0861c636 +0x00:  push   %ebp
0861c637 +0x01:  mov    %esp,%ebp
0861c639 +0x03:  push   %ebx
0861c63a +0x04:  sub    $0x14,%esp
0861c63d +0x07:  movl   $0x4,0x4(%esp)
0861c645 +0x0f:  mov    0x8(%ebp),%eax
0861c648 +0x12:  mov    %eax,(%esp)
0861c64b +0x15:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0861c650 +0x1a:  xor    $0x1,%eax
0861c653 +0x1d:  test   %al,%al
0861c655 +0x1f:  je     0861c65e <+0x28>
0861c657 +0x21:  mov    $0x0,%eax
0861c65c +0x26:  jmp    0861c6a1 <+0x6b>
0861c65e +0x28:  mov    0x8(%ebp),%eax
0861c661 +0x2b:  mov    0x8(%eax),%ebx
0861c664 +0x2e:  mov    0x8(%ebp),%eax
0861c667 +0x31:  mov    %eax,(%esp)
0861c66a +0x34:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c66f +0x39:  lea    (%ebx,%eax,1),%eax
0861c672 +0x3c:  movl   $0x4,0x8(%esp)
0861c67a +0x44:  mov    %eax,0x4(%esp)
0861c67e +0x48:  mov    0xc(%ebp),%eax
0861c681 +0x4b:  mov    %eax,(%esp)
0861c684 +0x4e:  call   0807d8a0 <_init+0x198>
0861c689 +0x53:  movl   $0x4,0x4(%esp)
0861c691 +0x5b:  mov    0x8(%ebp),%eax
0861c694 +0x5e:  mov    %eax,(%esp)
0861c697 +0x61:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c69c +0x66:  mov    $0x1,%eax
0861c6a1 +0x6b:  add    $0x14,%esp
0861c6a4 +0x6e:  pop    %ebx
0861c6a5 +0x6f:  pop    %ebp
0861c6a6 +0x70:  ret
0861c6a7 +0x71:  nop
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c636

/* Stream::TEMPNAMEPLACEHOLDERVALUE(long&) */

bool __thiscall Stream::operator>>(Stream *this,long *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,4);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),4);
    out_ptr(this,4);
  }
  return cVar2 == '\x01';
}
```
