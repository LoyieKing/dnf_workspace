# operator<<

`_ZN6StreamlsEs`

`Stream::operator<<(short)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c12e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c12e  _ZN6StreamlsEs
#           Stream::operator<<(short)
# range [0x0861c12e, 0x0861c1bb]
0861c12e +0x00:  push   %ebp
0861c12f +0x01:  mov    %esp,%ebp
0861c131 +0x03:  push   %ebx
0861c132 +0x04:  sub    $0x24,%esp
0861c135 +0x07:  mov    0xc(%ebp),%eax
0861c138 +0x0a:  mov    %ax,-0xc(%ebp)
0861c13c +0x0e:  jmp    0861c15a <+0x2c>
0861c13e +0x10:  mov    0x8(%ebp),%eax
0861c141 +0x13:  mov    %eax,(%esp)
0861c144 +0x16:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c149 +0x1b:  add    %eax,%eax
0861c14b +0x1d:  mov    %eax,0x4(%esp)
0861c14f +0x21:  mov    0x8(%ebp),%eax
0861c152 +0x24:  mov    %eax,(%esp)
0861c155 +0x27:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c15a +0x2c:  movl   $0x2,0x4(%esp)
0861c162 +0x34:  mov    0x8(%ebp),%eax
0861c165 +0x37:  mov    %eax,(%esp)
0861c168 +0x3a:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c16d +0x3f:  xor    $0x1,%eax
0861c170 +0x42:  test   %al,%al
0861c172 +0x44:  jne    0861c13e <+0x10>
0861c174 +0x46:  mov    0x8(%ebp),%eax
0861c177 +0x49:  mov    0x8(%eax),%ebx
0861c17a +0x4c:  mov    0x8(%ebp),%eax
0861c17d +0x4f:  mov    %eax,(%esp)
0861c180 +0x52:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c185 +0x57:  lea    (%ebx,%eax,1),%edx
0861c188 +0x5a:  movl   $0x2,0x8(%esp)
0861c190 +0x62:  lea    -0xc(%ebp),%eax
0861c193 +0x65:  mov    %eax,0x4(%esp)
0861c197 +0x69:  mov    %edx,(%esp)
0861c19a +0x6c:  call   0807d8a0 <_init+0x198>
0861c19f +0x71:  movl   $0x2,0x4(%esp)
0861c1a7 +0x79:  mov    0x8(%ebp),%eax
0861c1aa +0x7c:  mov    %eax,(%esp)
0861c1ad +0x7f:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c1b2 +0x84:  mov    0x8(%ebp),%eax
0861c1b5 +0x87:  add    $0x24,%esp
0861c1b8 +0x8a:  pop    %ebx
0861c1b9 +0x8b:  pop    %ebp
0861c1ba +0x8c:  ret
0861c1bb +0x8d:  nop
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c12e

/* Stream::TEMPNAMEPLACEHOLDERVALUE(short) */

Stream * __thiscall Stream::operator<<(Stream *this,short param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short local_10 [4];
  
  local_10[0] = param_1;
  while( true ) {
    cVar1 = enable_in(this,2);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),local_10,2);
  in_ptr(this,2);
  return this;
}
```
