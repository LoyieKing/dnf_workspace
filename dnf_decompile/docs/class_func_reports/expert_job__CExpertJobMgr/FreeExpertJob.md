# FreeExpertJob

`_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE`

`expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*)`

| 类 | 地址 |
|---|---|
| `expert_job::CExpertJobMgr` | `0x0849e1f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849e1f8  _ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE
#           expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*)
# range [0x0849e1f8, 0x0849e213]
0849e1f8 +0x00:  push   %ebp
0849e1f9 +0x01:  mov    %esp,%ebp
0849e1fb +0x03:  sub    $0x18,%esp
0849e1fe +0x06:  mov    0x8(%ebp),%eax
0849e201 +0x09:  mov    (%eax),%eax
0849e203 +0x0b:  mov    0xc(%ebp),%edx
0849e206 +0x0e:  mov    %edx,0x4(%esp)
0849e20a +0x12:  mov    %eax,(%esp)
0849e20d +0x15:  call   0849f63e <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x46f>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x46f
0849e212 +0x1a:  leave
0849e213 +0x1b:  ret
```

## 反编译 C

```c
// expert_job::CExpertJobMgr::FreeExpertJob @ 0x849e1f8

/* expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*) */

void __thiscall expert_job::CExpertJobMgr::FreeExpertJob(CExpertJobMgr *this,CExpertJob *param_1)

{
  CExpertJobFactory::FreeExpertJob(*(CExpertJobFactory **)this,param_1);
  return;
}
```
