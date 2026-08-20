# AcquireExpertJob

`_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE`

`expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e1dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e1dc  _ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE
#           expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE)
# range [0x0849e1dc, 0x0849e1f7]
0849e1dc +0x00:  push   %ebp
0849e1dd +0x01:  mov    %esp,%ebp
0849e1df +0x03:  sub    $0x18,%esp
0849e1e2 +0x06:  mov    0x8(%ebp),%eax
0849e1e5 +0x09:  mov    (%eax),%eax
0849e1e7 +0x0b:  mov    0xc(%ebp),%edx
0849e1ea +0x0e:  mov    %edx,0x4(%esp)
0849e1ee +0x12:  mov    %eax,(%esp)
0849e1f1 +0x15:  call   0849f5d2 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x403>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x403
0849e1f6 +0x1a:  leave
0849e1f7 +0x1b:  ret
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::AcquireExpertJob @ 0x849e1dc

/* expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE) */

void __thiscall expert_job::CExpertJobMgr::AcquireExpertJob(CExpertJobMgr *this,undefined4 param_2)

{
  CExpertJobFactory::AcquireExpertJob(*(CExpertJobFactory **)this,param_2);
  return;
}
```
