# set_big_stream

`_ZN6Stream14set_big_streamEb`

`Stream::set_big_stream(bool)`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bec4  _ZN6Stream14set_big_streamEb
#           Stream::set_big_stream(bool)
# range [0x0861bec4, 0x0861bedb]
0861bec4 +0x00:  push   %ebp
0861bec5 +0x01:  mov    %esp,%ebp
0861bec7 +0x03:  sub    $0x4,%esp
0861beca +0x06:  mov    0xc(%ebp),%eax
0861becd +0x09:  mov    %al,-0x4(%ebp)
0861bed0 +0x0c:  mov    0x8(%ebp),%eax
0861bed3 +0x0f:  movzbl -0x4(%ebp),%edx
0861bed7 +0x13:  mov    %dl,0x14(%eax)
0861beda +0x16:  leave
0861bedb +0x17:  ret
```

## 反编译 C

```c
// Stream::set_big_stream @ 0x861bec4

/* Stream::set_big_stream(bool) */

void __thiscall Stream::set_big_stream(Stream *this,bool param_1)

{
  this[0x14] = (Stream)param_1;
  return;
}
```
