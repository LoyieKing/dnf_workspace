# LwServerWriter

`_ZN14LwServerWriterC1E13ENUM_LOG_TYPE`

`LwServerWriter::LwServerWriter(ENUM_LOG_TYPE)`

| 类 | 地址 |
|---|---|
| `LwServerWriter` | `0x0854e2ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e2ae  _ZN14LwServerWriterC1E13ENUM_LOG_TYPE
#           LwServerWriter::LwServerWriter(ENUM_LOG_TYPE)
# range [0x0854e2ae, 0x0854e2d3]
0854e2ae +0x00:  push   %ebp
0854e2af +0x01:  mov    %esp,%ebp
0854e2b1 +0x03:  sub    $0x18,%esp
0854e2b4 +0x06:  mov    0x8(%ebp),%eax
0854e2b7 +0x09:  mov    %eax,(%esp)
0854e2ba +0x0c:  call   08ad3990 <_ZN9LogWriterC1Ev>  ; LogWriter::LogWriter()
0854e2bf +0x11:  mov    0x8(%ebp),%eax
0854e2c2 +0x14:  movl   $&_ZTV14LwServerWriter+0x8,(%eax)
0854e2c8 +0x1a:  mov    0x8(%ebp),%eax
0854e2cb +0x1d:  mov    0xc(%ebp),%edx
0854e2ce +0x20:  mov    %edx,0x4(%eax)
0854e2d1 +0x23:  leave
0854e2d2 +0x24:  ret
0854e2d3 +0x25:  nop
```

## 反编译 C

```c
// LwServerWriter::LwServerWriter @ 0x854e2ae

/* LwServerWriter::LwServerWriter(ENUM_LOG_TYPE) */

void __thiscall LwServerWriter::LwServerWriter(LwServerWriter *this,undefined4 param_2)

{
  LogWriter::LogWriter((LogWriter *)this);
  *(undefined ***)this = &PTR__LwServerWriter_08c9f3c0;
  *(undefined4 *)(this + 4) = param_2;
  return;
}
```
