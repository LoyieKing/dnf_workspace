# ~CAlchemist

`_ZN10expert_job10CAlchemistD1Ev`

`expert_job::CAlchemist::~CAlchemist()`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d11d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d11d0  _ZN10expert_job10CAlchemistD1Ev
#           expert_job::CAlchemist::~CAlchemist()
# range [0x085d11d0, 0x085d11ff]
085d11d0 +0x00:  push   %ebp
085d11d1 +0x01:  mov    %esp,%ebp
085d11d3 +0x03:  sub    $0x18,%esp
085d11d6 +0x06:  mov    0x8(%ebp),%eax
085d11d9 +0x09:  movl   $&_ZTVN10expert_job10CAlchemistE+0x8,(%eax)
085d11df +0x0f:  mov    0x8(%ebp),%eax
085d11e2 +0x12:  mov    %eax,(%esp)
085d11e5 +0x15:  call   0849f1fa <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x2b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x2b
085d11ea +0x1a:  mov    $0x0,%eax
085d11ef +0x1f:  test   %al,%al
085d11f1 +0x21:  je     085d11fe <+0x2e>
085d11f3 +0x23:  mov    0x8(%ebp),%eax
085d11f6 +0x26:  mov    %eax,(%esp)
085d11f9 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085d11fe +0x2e:  leave
085d11ff +0x2f:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::~CAlchemist @ 0x85d11d0

/* WARNING: Removing unreachable block (ram,0x085d11f3) */
/* expert_job::CAlchemist::~CAlchemist() */

void __thiscall expert_job::CAlchemist::~CAlchemist(CAlchemist *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_08cbfa48;
  CExpertJob::~CExpertJob((CExpertJob *)this);
  return;
}
```
