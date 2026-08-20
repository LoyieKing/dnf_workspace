# ~CFLog

`_ZN5CFLogD0Ev`

`CFLog::~CFLog()`

| 类 | 地址 |
|---|---|
| `CFLog` | `0x08106ec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08106ec4  _ZN5CFLogD0Ev
#           CFLog::~CFLog()
# range [0x08106ec4, 0x08106ee1]
08106ec4 +0x00:  push   %ebp
08106ec5 +0x01:  mov    %esp,%ebp
08106ec7 +0x03:  sub    $0x18,%esp
08106eca +0x06:  mov    0x8(%ebp),%eax
08106ecd +0x09:  mov    %eax,(%esp)
08106ed0 +0x0c:  call   08106e5c <_ZN5CFLogD1Ev>  ; CFLog::~CFLog()
08106ed5 +0x11:  mov    0x8(%ebp),%eax
08106ed8 +0x14:  mov    %eax,(%esp)
08106edb +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08106ee0 +0x1c:  leave
08106ee1 +0x1d:  ret
```

## 反编译 C

```c
// CFLog::~CFLog @ 0x8106ec4

/* CFLog::~CFLog() */

void __thiscall CFLog::~CFLog(CFLog *this)

{
  ~CFLog(this);
  operator_delete(this);
  return;
}
```
