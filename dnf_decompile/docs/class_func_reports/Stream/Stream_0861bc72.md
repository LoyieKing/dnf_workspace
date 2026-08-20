# Stream

`_ZN6StreamC1Ei`

`Stream::Stream(int)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bc72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bc72  _ZN6StreamC1Ei
#           Stream::Stream(int)
# range [0x0861bc72, 0x0861bcd9]
0861bc72 +0x00:  push   %ebp
0861bc73 +0x01:  mov    %esp,%ebp
0861bc75 +0x03:  sub    $0x18,%esp
0861bc78 +0x06:  mov    0x8(%ebp),%eax
0861bc7b +0x09:  movl   $&_ZTV6Stream+0x8,(%eax)
0861bc81 +0x0f:  mov    0x8(%ebp),%eax
0861bc84 +0x12:  movl   $0x0,0x8(%eax)
0861bc8b +0x19:  mov    0x8(%ebp),%eax
0861bc8e +0x1c:  movl   $0x0,0x4(%eax)
0861bc95 +0x23:  mov    0x8(%ebp),%eax
0861bc98 +0x26:  movl   $0x0,0xc(%eax)
0861bc9f +0x2d:  mov    0x8(%ebp),%eax
0861bca2 +0x30:  movl   $0x0,0x10(%eax)
0861bca9 +0x37:  movl   $0x0,0x4(%esp)
0861bcb1 +0x3f:  mov    0x8(%ebp),%eax
0861bcb4 +0x42:  mov    %eax,(%esp)
0861bcb7 +0x45:  call   0861bec4 <_ZN6Stream14set_big_streamEb>  ; Stream::set_big_stream(bool)
0861bcbc +0x4a:  mov    0xc(%ebp),%eax
0861bcbf +0x4d:  mov    %eax,0x4(%esp)
0861bcc3 +0x51:  mov    0x8(%ebp),%eax
0861bcc6 +0x54:  mov    %eax,(%esp)
0861bcc9 +0x57:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0861bcce +0x5c:  mov    0x8(%ebp),%eax
0861bcd1 +0x5f:  movl   $0x0,0x20(%eax)
0861bcd8 +0x66:  leave
0861bcd9 +0x67:  ret
```

## 反编译 C

```c
// Stream::Stream @ 0x861bc72

/* Stream::Stream(int) */

void __thiscall Stream::Stream(Stream *this,int param_1)

{
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  set_big_stream(this,false);
  resize(this,param_1);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}
```
