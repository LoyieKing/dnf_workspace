# operator>>

`_ZN6StreamrsERs`

`Stream::operator>>(short&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c552` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c552  _ZN6StreamrsERs
#           Stream::operator>>(short&)
# range [0x0861c552, 0x0861c5c3]
0861c552 +0x00:  push   %ebp
0861c553 +0x01:  mov    %esp,%ebp
0861c555 +0x03:  push   %ebx
0861c556 +0x04:  sub    $0x14,%esp
0861c559 +0x07:  movl   $0x2,0x4(%esp)
0861c561 +0x0f:  mov    0x8(%ebp),%eax
0861c564 +0x12:  mov    %eax,(%esp)
0861c567 +0x15:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0861c56c +0x1a:  xor    $0x1,%eax
0861c56f +0x1d:  test   %al,%al
0861c571 +0x1f:  je     0861c57a <+0x28>
0861c573 +0x21:  mov    $0x0,%eax
0861c578 +0x26:  jmp    0861c5bd <+0x6b>
0861c57a +0x28:  mov    0x8(%ebp),%eax
0861c57d +0x2b:  mov    0x8(%eax),%ebx
0861c580 +0x2e:  mov    0x8(%ebp),%eax
0861c583 +0x31:  mov    %eax,(%esp)
0861c586 +0x34:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c58b +0x39:  lea    (%ebx,%eax,1),%eax
0861c58e +0x3c:  movl   $0x2,0x8(%esp)
0861c596 +0x44:  mov    %eax,0x4(%esp)
0861c59a +0x48:  mov    0xc(%ebp),%eax
0861c59d +0x4b:  mov    %eax,(%esp)
0861c5a0 +0x4e:  call   0807d8a0 <_init+0x198>
0861c5a5 +0x53:  movl   $0x2,0x4(%esp)
0861c5ad +0x5b:  mov    0x8(%ebp),%eax
0861c5b0 +0x5e:  mov    %eax,(%esp)
0861c5b3 +0x61:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c5b8 +0x66:  mov    $0x1,%eax
0861c5bd +0x6b:  add    $0x14,%esp
0861c5c0 +0x6e:  pop    %ebx
0861c5c1 +0x6f:  pop    %ebp
0861c5c2 +0x70:  ret
0861c5c3 +0x71:  nop
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c552

/* Stream::TEMPNAMEPLACEHOLDERVALUE(short&) */

bool __thiscall Stream::operator>>(Stream *this,short *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,2);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),2);
    out_ptr(this,2);
  }
  return cVar2 == '\x01';
}
```
