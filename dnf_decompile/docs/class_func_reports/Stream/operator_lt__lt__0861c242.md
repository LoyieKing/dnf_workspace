# operator<<

`_ZN6StreamlsEl`

`Stream::operator<<(long)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c242  _ZN6StreamlsEl
#           Stream::operator<<(long)
# range [0x0861c242, 0x0861c2c7]
0861c242 +0x00:  push   %ebp
0861c243 +0x01:  mov    %esp,%ebp
0861c245 +0x03:  push   %ebx
0861c246 +0x04:  sub    $0x14,%esp
0861c249 +0x07:  jmp    0861c267 <+0x25>
0861c24b +0x09:  mov    0x8(%ebp),%eax
0861c24e +0x0c:  mov    %eax,(%esp)
0861c251 +0x0f:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c256 +0x14:  add    %eax,%eax
0861c258 +0x16:  mov    %eax,0x4(%esp)
0861c25c +0x1a:  mov    0x8(%ebp),%eax
0861c25f +0x1d:  mov    %eax,(%esp)
0861c262 +0x20:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c267 +0x25:  movl   $0x4,0x4(%esp)
0861c26f +0x2d:  mov    0x8(%ebp),%eax
0861c272 +0x30:  mov    %eax,(%esp)
0861c275 +0x33:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c27a +0x38:  xor    $0x1,%eax
0861c27d +0x3b:  test   %al,%al
0861c27f +0x3d:  jne    0861c24b <+0x9>
0861c281 +0x3f:  mov    0x8(%ebp),%eax
0861c284 +0x42:  mov    0x8(%eax),%ebx
0861c287 +0x45:  mov    0x8(%ebp),%eax
0861c28a +0x48:  mov    %eax,(%esp)
0861c28d +0x4b:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c292 +0x50:  lea    (%ebx,%eax,1),%edx
0861c295 +0x53:  movl   $0x4,0x8(%esp)
0861c29d +0x5b:  lea    0xc(%ebp),%eax
0861c2a0 +0x5e:  mov    %eax,0x4(%esp)
0861c2a4 +0x62:  mov    %edx,(%esp)
0861c2a7 +0x65:  call   0807d8a0 <_init+0x198>
0861c2ac +0x6a:  movl   $0x4,0x4(%esp)
0861c2b4 +0x72:  mov    0x8(%ebp),%eax
0861c2b7 +0x75:  mov    %eax,(%esp)
0861c2ba +0x78:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c2bf +0x7d:  mov    0x8(%ebp),%eax
0861c2c2 +0x80:  add    $0x14,%esp
0861c2c5 +0x83:  pop    %ebx
0861c2c6 +0x84:  pop    %ebp
0861c2c7 +0x85:  ret
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c242

/* Stream::TEMPNAMEPLACEHOLDERVALUE(long) */

Stream * __thiscall Stream::operator<<(Stream *this,long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,4);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),&param_1,4);
  in_ptr(this,4);
  return this;
}
```
