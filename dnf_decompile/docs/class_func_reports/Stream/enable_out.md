# enable_out

`_ZN6Stream10enable_outEi`

`Stream::enable_out(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bfdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bfdc  _ZN6Stream10enable_outEi
#           Stream::enable_out(int)
# range [0x0861bfdc, 0x0861c019]
0861bfdc +0x00:  push   %ebp
0861bfdd +0x01:  mov    %esp,%ebp
0861bfdf +0x03:  push   %ebx
0861bfe0 +0x04:  sub    $0x4,%esp
0861bfe3 +0x07:  mov    0x8(%ebp),%eax
0861bfe6 +0x0a:  mov    %eax,(%esp)
0861bfe9 +0x0d:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861bfee +0x12:  mov    %eax,%ebx
0861bff0 +0x14:  add    0xc(%ebp),%ebx
0861bff3 +0x17:  mov    0x8(%ebp),%eax
0861bff6 +0x1a:  mov    %eax,(%esp)
0861bff9 +0x1d:  call   0861be00 <_ZN6Stream6in_ptrEv>  ; Stream::in_ptr()
0861bffe +0x22:  cmp    %eax,%ebx
0861c000 +0x24:  setg   %al
0861c003 +0x27:  test   %al,%al
0861c005 +0x29:  je     0861c00e <+0x32>
0861c007 +0x2b:  mov    $0x0,%eax
0861c00c +0x30:  jmp    0861c013 <+0x37>
0861c00e +0x32:  mov    $0x1,%eax
0861c013 +0x37:  add    $0x4,%esp
0861c016 +0x3a:  pop    %ebx
0861c017 +0x3b:  pop    %ebp
0861c018 +0x3c:  ret
0861c019 +0x3d:  nop
```

## 反编译 C

```c
// Stream::enable_out @ 0x861bfdc

/* Stream::enable_out(int) */

bool __thiscall Stream::enable_out(Stream *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = out_ptr(this);
  iVar2 = in_ptr(this);
  return iVar1 + param_1 <= iVar2;
}
```
