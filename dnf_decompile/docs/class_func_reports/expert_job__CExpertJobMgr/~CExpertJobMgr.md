# ~CExpertJobMgr

`_ZN10expert_job13CExpertJobMgrD1Ev`

`expert_job::CExpertJobMgr::~CExpertJobMgr()`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e1ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e1ac  _ZN10expert_job13CExpertJobMgrD1Ev
#           expert_job::CExpertJobMgr::~CExpertJobMgr()
# range [0x0849e1ac, 0x0849e1db]
0849e1ac +0x00:  push   %ebp
0849e1ad +0x01:  mov    %esp,%ebp
0849e1af +0x03:  push   %ebx
0849e1b0 +0x04:  sub    $0x14,%esp
0849e1b3 +0x07:  mov    0x8(%ebp),%eax
0849e1b6 +0x0a:  mov    (%eax),%eax
0849e1b8 +0x0c:  test   %eax,%eax
0849e1ba +0x0e:  je     0849e1d5 <+0x29>
0849e1bc +0x10:  mov    0x8(%ebp),%eax
0849e1bf +0x13:  mov    (%eax),%ebx
0849e1c1 +0x15:  test   %ebx,%ebx
0849e1c3 +0x17:  je     0849e1d5 <+0x29>
0849e1c5 +0x19:  mov    %ebx,(%esp)
0849e1c8 +0x1c:  call   0849f6d2 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x503>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x503
0849e1cd +0x21:  mov    %ebx,(%esp)
0849e1d0 +0x24:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0849e1d5 +0x29:  add    $0x14,%esp
0849e1d8 +0x2c:  pop    %ebx
0849e1d9 +0x2d:  pop    %ebp
0849e1da +0x2e:  ret
0849e1db +0x2f:  nop
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::~CExpertJobMgr @ 0x849e1ac

/* expert_job::CExpertJobMgr::~CExpertJobMgr() */

void __thiscall expert_job::CExpertJobMgr::~CExpertJobMgr(CExpertJobMgr *this)

{
  CExpertJobFactory *this_00;
  
  if ((*(int *)this != 0) &&
     (this_00 = *(CExpertJobFactory **)this, this_00 != (CExpertJobFactory *)0x0)) {
    CExpertJobFactory::~CExpertJobFactory(this_00);
    operator_delete(this_00);
  }
  return;
}
```
