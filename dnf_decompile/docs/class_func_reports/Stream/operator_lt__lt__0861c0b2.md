# operator<<

`_ZN6StreamlsEc`

`Stream::operator<<(char)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c0b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c0b2  _ZN6StreamlsEc
#           Stream::operator<<(char)
# range [0x0861c0b2, 0x0861c12d]
0861c0b2 +0x00:  push   %ebp
0861c0b3 +0x01:  mov    %esp,%ebp
0861c0b5 +0x03:  push   %ebx
0861c0b6 +0x04:  sub    $0x24,%esp
0861c0b9 +0x07:  mov    0xc(%ebp),%eax
0861c0bc +0x0a:  mov    %al,-0xc(%ebp)
0861c0bf +0x0d:  jmp    0861c0dd <+0x2b>
0861c0c1 +0x0f:  mov    0x8(%ebp),%eax
0861c0c4 +0x12:  mov    %eax,(%esp)
0861c0c7 +0x15:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c0cc +0x1a:  add    %eax,%eax
0861c0ce +0x1c:  mov    %eax,0x4(%esp)
0861c0d2 +0x20:  mov    0x8(%ebp),%eax
0861c0d5 +0x23:  mov    %eax,(%esp)
0861c0d8 +0x26:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c0dd +0x2b:  movl   $0x1,0x4(%esp)
0861c0e5 +0x33:  mov    0x8(%ebp),%eax
0861c0e8 +0x36:  mov    %eax,(%esp)
0861c0eb +0x39:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c0f0 +0x3e:  xor    $0x1,%eax
0861c0f3 +0x41:  test   %al,%al
0861c0f5 +0x43:  jne    0861c0c1 <+0xf>
0861c0f7 +0x45:  mov    0x8(%ebp),%eax
0861c0fa +0x48:  mov    0x8(%eax),%ebx
0861c0fd +0x4b:  mov    0x8(%ebp),%eax
0861c100 +0x4e:  mov    %eax,(%esp)
0861c103 +0x51:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c108 +0x56:  lea    (%ebx,%eax,1),%edx
0861c10b +0x59:  movzbl -0xc(%ebp),%eax
0861c10f +0x5d:  mov    %al,(%edx)
0861c111 +0x5f:  movl   $0x1,0x4(%esp)
0861c119 +0x67:  mov    0x8(%ebp),%eax
0861c11c +0x6a:  mov    %eax,(%esp)
0861c11f +0x6d:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c124 +0x72:  mov    0x8(%ebp),%eax
0861c127 +0x75:  add    $0x24,%esp
0861c12a +0x78:  pop    %ebx
0861c12b +0x79:  pop    %ebp
0861c12c +0x7a:  ret
0861c12d +0x7b:  nop
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c0b2

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char) */

Stream * __thiscall Stream::operator<<(Stream *this,char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,1);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  *(char *)(iVar2 + iVar3) = param_1;
  in_ptr(this,1);
  return this;
}
```
