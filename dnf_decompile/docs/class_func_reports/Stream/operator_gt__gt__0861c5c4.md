# operator>>

`_ZN6StreamrsERi`

`Stream::operator>>(int&)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c5c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c5c4  _ZN6StreamrsERi
#           Stream::operator>>(int&)
# range [0x0861c5c4, 0x0861c635]
0861c5c4 +0x00:  push   %ebp
0861c5c5 +0x01:  mov    %esp,%ebp
0861c5c7 +0x03:  push   %ebx
0861c5c8 +0x04:  sub    $0x14,%esp
0861c5cb +0x07:  movl   $0x4,0x4(%esp)
0861c5d3 +0x0f:  mov    0x8(%ebp),%eax
0861c5d6 +0x12:  mov    %eax,(%esp)
0861c5d9 +0x15:  call   0861bfdc <_ZN6Stream10enable_outEi>  ; Stream::enable_out(int)
0861c5de +0x1a:  xor    $0x1,%eax
0861c5e1 +0x1d:  test   %al,%al
0861c5e3 +0x1f:  je     0861c5ec <+0x28>
0861c5e5 +0x21:  mov    $0x0,%eax
0861c5ea +0x26:  jmp    0861c62f <+0x6b>
0861c5ec +0x28:  mov    0x8(%ebp),%eax
0861c5ef +0x2b:  mov    0x8(%eax),%ebx
0861c5f2 +0x2e:  mov    0x8(%ebp),%eax
0861c5f5 +0x31:  mov    %eax,(%esp)
0861c5f8 +0x34:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c5fd +0x39:  lea    (%ebx,%eax,1),%eax
0861c600 +0x3c:  movl   $0x4,0x8(%esp)
0861c608 +0x44:  mov    %eax,0x4(%esp)
0861c60c +0x48:  mov    0xc(%ebp),%eax
0861c60f +0x4b:  mov    %eax,(%esp)
0861c612 +0x4e:  call   0807d8a0 <_init+0x198>
0861c617 +0x53:  movl   $0x4,0x4(%esp)
0861c61f +0x5b:  mov    0x8(%ebp),%eax
0861c622 +0x5e:  mov    %eax,(%esp)
0861c625 +0x61:  call   0861be34 <_ZN6Stream7out_ptrEi>  ; Stream::out_ptr(int)
0861c62a +0x66:  mov    $0x1,%eax
0861c62f +0x6b:  add    $0x14,%esp
0861c632 +0x6e:  pop    %ebx
0861c633 +0x6f:  pop    %ebp
0861c634 +0x70:  ret
0861c635 +0x71:  nop
```

## 反编译 C

```c
// Stream::operator>> @ 0x861c5c4

/* Stream::TEMPNAMEPLACEHOLDERVALUE(int&) */

bool __thiscall Stream::operator>>(Stream *this,int *param_1)

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
