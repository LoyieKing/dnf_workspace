# ~Stream

`_ZN6StreamD0Ev`

`Stream::~Stream()`

| 类 | 地址 |
|---|---|
| `Stream` | `0x0861bdaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861bdaa  _ZN6StreamD0Ev
#           Stream::~Stream()
# range [0x0861bdaa, 0x0861bdc7]
0861bdaa +0x00:  push   %ebp
0861bdab +0x01:  mov    %esp,%ebp
0861bdad +0x03:  sub    $0x18,%esp
0861bdb0 +0x06:  mov    0x8(%ebp),%eax
0861bdb3 +0x09:  mov    %eax,(%esp)
0861bdb6 +0x0c:  call   0861bd6c <_ZN6StreamD1Ev>  ; Stream::~Stream()
0861bdbb +0x11:  mov    0x8(%ebp),%eax
0861bdbe +0x14:  mov    %eax,(%esp)
0861bdc1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0861bdc6 +0x1c:  leave
0861bdc7 +0x1d:  ret
```

## 反编译 C

```c
// Stream::~Stream @ 0x861bdaa

/* Stream::~Stream() */

void __thiscall Stream::~Stream(Stream *this)

{
  ~Stream(this);
  operator_delete(this);
  return;
}
```
