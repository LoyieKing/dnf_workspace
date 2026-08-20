# ~CDisjointer

`_ZN10expert_job11CDisjointerD1Ev`

`expert_job::CDisjointer::~CDisjointer()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1d8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1d8a  _ZN10expert_job11CDisjointerD1Ev
#           expert_job::CDisjointer::~CDisjointer()
# range [0x085d1d8a, 0x085d1deb]
085d1d8a +0x00:  push   %ebp
085d1d8b +0x01:  mov    %esp,%ebp
085d1d8d +0x03:  push   %esi
085d1d8e +0x04:  push   %ebx
085d1d8f +0x05:  sub    $0x10,%esp
085d1d92 +0x08:  mov    0x8(%ebp),%eax
085d1d95 +0x0b:  movl   $&_ZTVN10expert_job11CDisjointerE+0x8,(%eax)
085d1d9b +0x11:  mov    0x8(%ebp),%eax
085d1d9e +0x14:  add    $0x8,%eax
085d1da1 +0x17:  mov    %eax,(%esp)
085d1da4 +0x1a:  call   085d3eb6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x3ab>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x3ab
085d1da9 +0x1f:  jmp    085d1dc6 <+0x3c>
085d1dab +0x21:  mov    %edx,%ebx
085d1dad +0x23:  mov    %eax,%esi
085d1daf +0x25:  mov    0x8(%ebp),%eax
085d1db2 +0x28:  mov    %eax,(%esp)
085d1db5 +0x2b:  call   0849f1fa <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x2b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x2b
085d1dba +0x30:  mov    %esi,%eax
085d1dbc +0x32:  mov    %ebx,%edx
085d1dbe +0x34:  mov    %eax,(%esp)
085d1dc1 +0x37:  call   08ae3750 <_Unwind_Resume>
085d1dc6 +0x3c:  mov    0x8(%ebp),%eax
085d1dc9 +0x3f:  mov    %eax,(%esp)
085d1dcc +0x42:  call   0849f1fa <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x2b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x2b
085d1dd1 +0x47:  mov    $0x0,%eax
085d1dd6 +0x4c:  test   %al,%al
085d1dd8 +0x4e:  je     085d1de5 <+0x5b>
085d1dda +0x50:  mov    0x8(%ebp),%eax
085d1ddd +0x53:  mov    %eax,(%esp)
085d1de0 +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085d1de5 +0x5b:  add    $0x10,%esp
085d1de8 +0x5e:  pop    %ebx
085d1de9 +0x5f:  pop    %esi
085d1dea +0x60:  pop    %ebp
085d1deb +0x61:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::~CDisjointer @ 0x85d1d8a

/* WARNING: Removing unreachable block (ram,0x085d1dda) */
/* expert_job::CDisjointer::~CDisjointer() */

void __thiscall expert_job::CDisjointer::~CDisjointer(CDisjointer *this)

{
  *(undefined ***)this = &PTR_OnStartMission_08cc0828;
                    /* try { // try from 085d1da4 to 085d1da8 has its CatchHandler @ 085d1dab */
  CDisjointMachine::~CDisjointMachine((CDisjointMachine *)(this + 8));
  CExpertJob::~CExpertJob((CExpertJob *)this);
  return;
}
```
