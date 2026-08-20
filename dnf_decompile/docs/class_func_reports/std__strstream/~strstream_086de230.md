# ~strstream

`_ZNSt9strstreamD0Ev`

`std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086de230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de230  _ZNSt9strstreamD0Ev
#           std::strstream::~strstream()
# range [0x086de230, 0x086de24f]
086de230 +0x00:  push   %ebp
086de231 +0x01:  mov    %esp,%ebp
086de233 +0x03:  push   %ebx
086de234 +0x04:  sub    $0x14,%esp
086de237 +0x07:  mov    0x8(%ebp),%ebx
086de23a +0x0a:  mov    %ebx,(%esp)
086de23d +0x0d:  call   086de150 <_ZNSt9strstreamD1Ev>  ; std::strstream::~strstream()
086de242 +0x12:  mov    %ebx,0x8(%ebp)
086de245 +0x15:  add    $0x14,%esp
086de248 +0x18:  pop    %ebx
086de249 +0x19:  pop    %ebp
086de24a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
086de24f +0x1f:  nop
```

## 反编译 C

```c
// std::strstream::~strstream @ 0x86de230

/* std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  ~strstream(this);
  operator_delete(this);
  return;
}
```
