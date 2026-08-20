# get_buffer

`_ZN6Stream10get_bufferEv`

`Stream::get_buffer()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861c8b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c8b0  _ZN6Stream10get_bufferEv
#           Stream::get_buffer()
# range [0x0861c8b0, 0x0861c8d1]
0861c8b0 +0x00:  push   %ebp
0861c8b1 +0x01:  mov    %esp,%ebp
0861c8b3 +0x03:  push   %ebx
0861c8b4 +0x04:  sub    $0x4,%esp
0861c8b7 +0x07:  mov    0x8(%ebp),%eax
0861c8ba +0x0a:  mov    0x8(%eax),%ebx
0861c8bd +0x0d:  mov    0x8(%ebp),%eax
0861c8c0 +0x10:  mov    %eax,(%esp)
0861c8c3 +0x13:  call   0861be28 <_ZN6Stream7out_ptrEv>  ; Stream::out_ptr()
0861c8c8 +0x18:  lea    (%ebx,%eax,1),%eax
0861c8cb +0x1b:  add    $0x4,%esp
0861c8ce +0x1e:  pop    %ebx
0861c8cf +0x1f:  pop    %ebp
0861c8d0 +0x20:  ret
0861c8d1 +0x21:  nop
```

## 反编译 C

```c
// Stream::get_buffer @ 0x861c8b0

/* Stream::get_buffer() */

int __thiscall Stream::get_buffer(Stream *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = out_ptr(this);
  return iVar1 + iVar2;
}
```
