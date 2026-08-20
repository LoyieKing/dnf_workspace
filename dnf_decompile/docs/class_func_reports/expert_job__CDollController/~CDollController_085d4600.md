# ~CDollController

`_ZN10expert_job15CDollControllerD0Ev`

`expert_job::CDollController::~CDollController()`

| 类 | 地址 |
|---|---|
| `expert_job::CDollController` | `0x085d4600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4600  _ZN10expert_job15CDollControllerD0Ev
#           expert_job::CDollController::~CDollController()
# range [0x085d4600, 0x085d461d]
085d4600 +0x00:  push   %ebp
085d4601 +0x01:  mov    %esp,%ebp
085d4603 +0x03:  sub    $0x18,%esp
085d4606 +0x06:  mov    0x8(%ebp),%eax
085d4609 +0x09:  mov    %eax,(%esp)
085d460c +0x0c:  call   085d45d0 <_ZN10expert_job15CDollControllerD1Ev>  ; expert_job::CDollController::~CDollController()
085d4611 +0x11:  mov    0x8(%ebp),%eax
085d4614 +0x14:  mov    %eax,(%esp)
085d4617 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085d461c +0x1c:  leave
085d461d +0x1d:  ret
```

## 反编译 C

```c
// expert_job::CDollController::~CDollController @ 0x85d4600

/* expert_job::CDollController::~CDollController() */

void __thiscall expert_job::CDollController::~CDollController(CDollController *this)

{
  ~CDollController(this);
  operator_delete(this);
  return;
}
```
