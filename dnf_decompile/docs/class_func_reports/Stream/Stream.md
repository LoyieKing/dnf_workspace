# Stream

`_ZN6StreamC1Ev`

`Stream::Stream()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bc08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bc08  _ZN6StreamC1Ev
#           Stream::Stream()
# range [0x0861bc08, 0x0861bc71]
0861bc08 +0x00:  push   %ebp
0861bc09 +0x01:  mov    %esp,%ebp
0861bc0b +0x03:  sub    $0x18,%esp
0861bc0e +0x06:  mov    0x8(%ebp),%eax
0861bc11 +0x09:  movl   $&_ZTV6Stream+0x8,(%eax)
0861bc17 +0x0f:  mov    0x8(%ebp),%eax
0861bc1a +0x12:  movl   $0x0,0x8(%eax)
0861bc21 +0x19:  mov    0x8(%ebp),%eax
0861bc24 +0x1c:  movl   $0x0,0x4(%eax)
0861bc2b +0x23:  mov    0x8(%ebp),%eax
0861bc2e +0x26:  movl   $0x0,0xc(%eax)
0861bc35 +0x2d:  mov    0x8(%ebp),%eax
0861bc38 +0x30:  movl   $0x0,0x10(%eax)
0861bc3f +0x37:  movl   $0x0,0x4(%esp)
0861bc47 +0x3f:  mov    0x8(%ebp),%eax
0861bc4a +0x42:  mov    %eax,(%esp)
0861bc4d +0x45:  call   0861bec4 <_ZN6Stream14set_big_streamEb>  ; Stream::set_big_stream(bool)
0861bc52 +0x4a:  movl   $0x4000,0x4(%esp)
0861bc5a +0x52:  mov    0x8(%ebp),%eax
0861bc5d +0x55:  mov    %eax,(%esp)
0861bc60 +0x58:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861bc65 +0x5d:  mov    0x8(%ebp),%eax
0861bc68 +0x60:  movl   $0x0,0x20(%eax)
0861bc6f +0x67:  leave
0861bc70 +0x68:  ret
0861bc71 +0x69:  nop
```

## 反编译 C

```c
// Stream::Stream @ 0x861bc08

/* Stream::Stream() */

void __thiscall Stream::Stream(Stream *this)

{
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  set_big_stream(this,false);
  resize(this,0x4000);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}
```
