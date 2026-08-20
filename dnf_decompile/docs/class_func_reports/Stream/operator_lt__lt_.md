# operator<<

`_ZN6StreamlsEb`

`Stream::operator<<(bool)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c01a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c01a  _ZN6StreamlsEb
#           Stream::operator<<(bool)
# range [0x0861c01a, 0x0861c0b1]
0861c01a +0x00:  push   %ebp
0861c01b +0x01:  mov    %esp,%ebp
0861c01d +0x03:  push   %ebx
0861c01e +0x04:  sub    $0x24,%esp
0861c021 +0x07:  mov    0xc(%ebp),%eax
0861c024 +0x0a:  mov    %al,-0xc(%ebp)
0861c027 +0x0d:  jmp    0861c045 <+0x2b>
0861c029 +0x0f:  mov    0x8(%ebp),%eax
0861c02c +0x12:  mov    %eax,(%esp)
0861c02f +0x15:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861c034 +0x1a:  add    %eax,%eax
0861c036 +0x1c:  mov    %eax,0x4(%esp)
0861c03a +0x20:  mov    0x8(%ebp),%eax
0861c03d +0x23:  mov    %eax,(%esp)
0861c040 +0x26:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861c045 +0x2b:  movl   $0x1,0x4(%esp)
0861c04d +0x33:  mov    0x8(%ebp),%eax
0861c050 +0x36:  mov    %eax,(%esp)
0861c053 +0x39:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0861c058 +0x3e:  xor    $0x1,%eax
0861c05b +0x41:  test   %al,%al
0861c05d +0x43:  jne    0861c029 <+0xf>
0861c05f +0x45:  cmpb   $0x0,-0xc(%ebp)
0861c063 +0x49:  je     0861c07e <+0x64>
0861c065 +0x4b:  mov    0x8(%ebp),%eax
0861c068 +0x4e:  mov    0x8(%eax),%ebx
0861c06b +0x51:  mov    0x8(%ebp),%eax
0861c06e +0x54:  mov    %eax,(%esp)
0861c071 +0x57:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c076 +0x5c:  lea    (%ebx,%eax,1),%eax
0861c079 +0x5f:  movb   $0x1,(%eax)
0861c07c +0x62:  jmp    0861c095 <+0x7b>
0861c07e +0x64:  mov    0x8(%ebp),%eax
0861c081 +0x67:  mov    0x8(%eax),%ebx
0861c084 +0x6a:  mov    0x8(%ebp),%eax
0861c087 +0x6d:  mov    %eax,(%esp)
0861c08a +0x70:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861c08f +0x75:  lea    (%ebx,%eax,1),%eax
0861c092 +0x78:  movb   $0x0,(%eax)
0861c095 +0x7b:  movl   $0x1,0x4(%esp)
0861c09d +0x83:  mov    0x8(%ebp),%eax
0861c0a0 +0x86:  mov    %eax,(%esp)
0861c0a3 +0x89:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0861c0a8 +0x8e:  mov    0x8(%ebp),%eax
0861c0ab +0x91:  add    $0x24,%esp
0861c0ae +0x94:  pop    %ebx
0861c0af +0x95:  pop    %ebp
0861c0b0 +0x96:  ret
0861c0b1 +0x97:  nop
```

## 反编译 C

```c
// Stream::operator<< @ 0x861c01a

/* Stream::TEMPNAMEPLACEHOLDERVALUE(bool) */

Stream * __thiscall Stream::operator<<(Stream *this,bool param_1)

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
  if (param_1) {
    iVar2 = *(int *)(this + 8);
    iVar3 = in_ptr(this);
    *(undefined1 *)(iVar2 + iVar3) = 1;
  }
  else {
    iVar2 = *(int *)(this + 8);
    iVar3 = in_ptr(this);
    *(undefined1 *)(iVar2 + iVar3) = 0;
  }
  in_ptr(this,1);
  return this;
}
```
