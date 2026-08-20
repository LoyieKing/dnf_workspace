# ~NewAccountLevelUpEventToJob

`_ZN27NewAccountLevelUpEventToJobD1Ev`

`NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob()`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b818c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b818c  _ZN27NewAccountLevelUpEventToJobD1Ev
#           NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob()
# range [0x081b818c, 0x081b81bb]
081b818c +0x00:  push   %ebp
081b818d +0x01:  mov    %esp,%ebp
081b818f +0x03:  sub    $0x18,%esp
081b8192 +0x06:  mov    0x8(%ebp),%eax
081b8195 +0x09:  movl   $&_ZTV27NewAccountLevelUpEventToJob+0x8,(%eax)
081b819b +0x0f:  mov    0x8(%ebp),%eax
081b819e +0x12:  mov    %eax,(%esp)
081b81a1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b81a6 +0x1a:  mov    $0x0,%eax
081b81ab +0x1f:  test   %al,%al
081b81ad +0x21:  je     081b81ba <+0x2e>
081b81af +0x23:  mov    0x8(%ebp),%eax
081b81b2 +0x26:  mov    %eax,(%esp)
081b81b5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b81ba +0x2e:  leave
081b81bb +0x2f:  ret
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob @ 0x81b818c

/* WARNING: Removing unreachable block (ram,0x081b81af) */
/* NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob() */

void __thiscall
NewAccountLevelUpEventToJob::~NewAccountLevelUpEventToJob(NewAccountLevelUpEventToJob *this)

{
  *(undefined ***)this = &PTR__NewAccountLevelUpEventToJob_08bbc948;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
