# enable_in

`_ZN6Stream9enable_inEi`

`Stream::enable_in(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bf9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bf9e  _ZN6Stream9enable_inEi
#           Stream::enable_in(int)
# range [0x0861bf9e, 0x0861bfdb]
0861bf9e +0x00:  push   %ebp
0861bf9f +0x01:  mov    %esp,%ebp
0861bfa1 +0x03:  push   %ebx
0861bfa2 +0x04:  sub    $0x4,%esp
0861bfa5 +0x07:  mov    0x8(%ebp),%eax
0861bfa8 +0x0a:  mov    %eax,(%esp)
0861bfab +0x0d:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861bfb0 +0x12:  mov    %eax,%ebx
0861bfb2 +0x14:  add    0xc(%ebp),%ebx
0861bfb5 +0x17:  mov    0x8(%ebp),%eax
0861bfb8 +0x1a:  mov    %eax,(%esp)
0861bfbb +0x1d:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0861bfc0 +0x22:  cmp    %eax,%ebx
0861bfc2 +0x24:  setg   %al
0861bfc5 +0x27:  test   %al,%al
0861bfc7 +0x29:  je     0861bfd0 <+0x32>
0861bfc9 +0x2b:  mov    $0x0,%eax
0861bfce +0x30:  jmp    0861bfd5 <+0x37>
0861bfd0 +0x32:  mov    $0x1,%eax
0861bfd5 +0x37:  add    $0x4,%esp
0861bfd8 +0x3a:  pop    %ebx
0861bfd9 +0x3b:  pop    %ebp
0861bfda +0x3c:  ret
0861bfdb +0x3d:  nop
```

## 反编译 C

```c
// Stream::enable_in @ 0x861bf9e

/* Stream::enable_in(int) */

bool __thiscall Stream::enable_in(Stream *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = in_ptr(this);
  iVar2 = size(this);
  return iVar1 + param_1 <= iVar2;
}
```
