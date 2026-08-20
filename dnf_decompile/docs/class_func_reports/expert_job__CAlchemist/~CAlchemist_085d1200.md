# ~CAlchemist

`_ZN10expert_job10CAlchemistD0Ev`

`expert_job::CAlchemist::~CAlchemist()`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d1200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1200  _ZN10expert_job10CAlchemistD0Ev
#           expert_job::CAlchemist::~CAlchemist()
# range [0x085d1200, 0x085d121d]
085d1200 +0x00:  push   %ebp
085d1201 +0x01:  mov    %esp,%ebp
085d1203 +0x03:  sub    $0x18,%esp
085d1206 +0x06:  mov    0x8(%ebp),%eax
085d1209 +0x09:  mov    %eax,(%esp)
085d120c +0x0c:  call   085d11d0 <_ZN10expert_job10CAlchemistD1Ev>  ; expert_job::CAlchemist::~CAlchemist()
085d1211 +0x11:  mov    0x8(%ebp),%eax
085d1214 +0x14:  mov    %eax,(%esp)
085d1217 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085d121c +0x1c:  leave
085d121d +0x1d:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::~CAlchemist @ 0x85d1200

/* expert_job::CAlchemist::~CAlchemist() */

void __thiscall expert_job::CAlchemist::~CAlchemist(CAlchemist *this)

{
  ~CAlchemist(this);
  operator_delete(this);
  return;
}
```
