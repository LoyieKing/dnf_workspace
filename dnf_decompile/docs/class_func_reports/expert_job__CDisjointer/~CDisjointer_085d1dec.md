# ~CDisjointer

`_ZN10expert_job11CDisjointerD0Ev`

`expert_job::CDisjointer::~CDisjointer()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1dec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1dec  _ZN10expert_job11CDisjointerD0Ev
#           expert_job::CDisjointer::~CDisjointer()
# range [0x085d1dec, 0x085d1e09]
085d1dec +0x00:  push   %ebp
085d1ded +0x01:  mov    %esp,%ebp
085d1def +0x03:  sub    $0x18,%esp
085d1df2 +0x06:  mov    0x8(%ebp),%eax
085d1df5 +0x09:  mov    %eax,(%esp)
085d1df8 +0x0c:  call   085d1d8a <_ZN10expert_job11CDisjointerD1Ev>  ; expert_job::CDisjointer::~CDisjointer()
085d1dfd +0x11:  mov    0x8(%ebp),%eax
085d1e00 +0x14:  mov    %eax,(%esp)
085d1e03 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085d1e08 +0x1c:  leave
085d1e09 +0x1d:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::~CDisjointer @ 0x85d1dec

/* expert_job::CDisjointer::~CDisjointer() */

void __thiscall expert_job::CDisjointer::~CDisjointer(CDisjointer *this)

{
  ~CDisjointer(this);
  operator_delete(this);
  return;
}
```
