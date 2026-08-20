# ~CUserGlobalInfoHandle

`_ZN21CUserGlobalInfoHandleD1Ev`

`CUserGlobalInfoHandle::~CUserGlobalInfoHandle()`

| 类 | 地址 |
|---|---|
| `CUserGlobalInfoHandle` | `0x086ad85a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad85a  _ZN21CUserGlobalInfoHandleD1Ev
#           CUserGlobalInfoHandle::~CUserGlobalInfoHandle()
# range [0x086ad85a, 0x086ad85e]
086ad85a +0x00:  push   %ebp
086ad85b +0x01:  mov    %esp,%ebp
086ad85d +0x03:  pop    %ebp
086ad85e +0x04:  ret
```

## 反编译 C

```c
// CUserGlobalInfoHandle::~CUserGlobalInfoHandle @ 0x86ad85a

/* CUserGlobalInfoHandle::~CUserGlobalInfoHandle() */

void __thiscall CUserGlobalInfoHandle::~CUserGlobalInfoHandle(CUserGlobalInfoHandle *this)

{
  return;
}
```
