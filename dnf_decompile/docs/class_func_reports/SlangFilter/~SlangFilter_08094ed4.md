# ~SlangFilter

`_ZN11SlangFilterD0Ev`

`SlangFilter::~SlangFilter()`

| 类 | 地址 |
|---|---|
| `SlangFilter` | `0x08094ed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094ed4  _ZN11SlangFilterD0Ev
#           SlangFilter::~SlangFilter()
# range [0x08094ed4, 0x08094ef1]
08094ed4 +0x00:  push   %ebp
08094ed5 +0x01:  mov    %esp,%ebp
08094ed7 +0x03:  sub    $0x18,%esp
08094eda +0x06:  mov    0x8(%ebp),%eax
08094edd +0x09:  mov    %eax,(%esp)
08094ee0 +0x0c:  call   08094ea4 <_ZN11SlangFilterD1Ev>  ; SlangFilter::~SlangFilter()
08094ee5 +0x11:  mov    0x8(%ebp),%eax
08094ee8 +0x14:  mov    %eax,(%esp)
08094eeb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08094ef0 +0x1c:  leave
08094ef1 +0x1d:  ret
```

## 反编译 C

```c
// SlangFilter::~SlangFilter @ 0x8094ed4

/* SlangFilter::~SlangFilter() */

void __thiscall SlangFilter::~SlangFilter(SlangFilter *this)

{
  ~SlangFilter(this);
  operator_delete(this);
  return;
}
```
