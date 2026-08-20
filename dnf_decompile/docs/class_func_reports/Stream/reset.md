# reset

`_ZN6Stream5resetEv`

`Stream::reset()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861be8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861be8a  _ZN6Stream5resetEv
#           Stream::reset()
# range [0x0861be8a, 0x0861bec3]
0861be8a +0x00:  push   %ebp
0861be8b +0x01:  mov    %esp,%ebp
0861be8d +0x03:  sub    $0x18,%esp
0861be90 +0x06:  mov    0x8(%ebp),%eax
0861be93 +0x09:  movl   $0x0,0xc(%eax)
0861be9a +0x10:  mov    0x8(%ebp),%eax
0861be9d +0x13:  movl   $0x0,0x10(%eax)
0861bea4 +0x1a:  movl   $0x0,0x4(%esp)
0861beac +0x22:  mov    0x8(%ebp),%eax
0861beaf +0x25:  mov    %eax,(%esp)
0861beb2 +0x28:  call   0861bec4 <_ZN6Stream14set_big_streamEb>  ; Stream::set_big_stream(bool)
0861beb7 +0x2d:  mov    0x8(%ebp),%eax
0861beba +0x30:  movl   $0x0,0x20(%eax)
0861bec1 +0x37:  leave
0861bec2 +0x38:  ret
0861bec3 +0x39:  nop
```

## 反编译 C

```c
// Stream::reset @ 0x861be8a

/* Stream::reset() */

void __thiscall Stream::reset(Stream *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  set_big_stream(this,false);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}
```
