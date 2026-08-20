# operator<<

`_ZN6StreamlsEi`

`Stream::operator<<(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c1bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c1bc  _ZN6StreamlsEi
#           Stream::operator<<(int)
# range [0x0861c1bc, 0x0861c241]
0861c1bc +0x00:  push   %ebp
0861c1bd +0x01:  mov    %esp,%ebp
0861c1bf +0x03:  push   %ebx
0861c1c0 +0x04:  sub    $0x14,%esp
0861c1c3 +0x07:  jmp    0861c1e1 <+0x25>
0861c1c5 +0x09:  mov    0x8(%ebp),%eax
0861c1c8 +0x0c:  mov    %eax,(%esp)
0861c1cb +0x0f:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c1d0 +0x14:  add    %eax,%eax
0861c1d2 +0x16:  mov    %eax,0x4(%esp)
0861c1d6 +0x1a:  mov    0x8(%ebp),%eax
0861c1d9 +0x1d:  mov    %eax,(%esp)
0861c1dc +0x20:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c1e1 +0x25:  movl   $0x4,0x4(%esp)
0861c1e9 +0x2d:  mov    0x8(%ebp),%eax
0861c1ec +0x30:  mov    %eax,(%esp)
0861c1ef +0x33:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c1f4 +0x38:  xor    $0x1,%eax
0861c1f7 +0x3b:  test   %al,%al
0861c1f9 +0x3d:  jne    0861c1c5 <+0x9>
0861c1fb +0x3f:  mov    0x8(%ebp),%eax
0861c1fe +0x42:  mov    0x8(%eax),%ebx
0861c201 +0x45:  mov    0x8(%ebp),%eax
0861c204 +0x48:  mov    %eax,(%esp)
0861c207 +0x4b:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c20c +0x50:  lea    (%ebx,%eax,1),%edx
0861c20f +0x53:  movl   $0x4,0x8(%esp)
0861c217 +0x5b:  lea    0xc(%ebp),%eax
0861c21a +0x5e:  mov    %eax,0x4(%esp)
0861c21e +0x62:  mov    %edx,(%esp)
0861c221 +0x65:  call   0807d8a0 <_init+0x198>
0861c226 +0x6a:  movl   $0x4,0x4(%esp)
0861c22e +0x72:  mov    0x8(%ebp),%eax
0861c231 +0x75:  mov    %eax,(%esp)
0861c234 +0x78:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c239 +0x7d:  mov    0x8(%ebp),%eax
0861c23c +0x80:  add    $0x14,%esp
0861c23f +0x83:  pop    %ebx
0861c240 +0x84:  pop    %ebp
0861c241 +0x85:  ret
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c1bc

/* Stream::TEMPNAMEPLACEHOLDERVALUE(int) */

Stream * __thiscall Stream::operator<<(Stream *this,int param_1)

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
