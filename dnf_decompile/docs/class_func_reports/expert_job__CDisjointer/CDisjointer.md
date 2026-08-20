# CDisjointer

`_ZN10expert_job11CDisjointerC1Ev`

`expert_job::CDisjointer::CDisjointer()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1d3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1d3c  _ZN10expert_job11CDisjointerC1Ev
#           expert_job::CDisjointer::CDisjointer()
# range [0x085d1d3c, 0x085d1d89]
085d1d3c +0x00:  push   %ebp
085d1d3d +0x01:  mov    %esp,%ebp
085d1d3f +0x03:  push   %esi
085d1d40 +0x04:  push   %ebx
085d1d41 +0x05:  sub    $0x10,%esp
085d1d44 +0x08:  mov    0x8(%ebp),%eax
085d1d47 +0x0b:  mov    %eax,(%esp)
085d1d4a +0x0e:  call   0849f2b4 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xe5>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xe5
085d1d4f +0x13:  mov    0x8(%ebp),%eax
085d1d52 +0x16:  movl   $&_ZTVN10expert_job11CDisjointerE+0x8,(%eax)
085d1d58 +0x1c:  mov    0x8(%ebp),%eax
085d1d5b +0x1f:  add    $0x8,%eax
085d1d5e +0x22:  mov    %eax,(%esp)
085d1d61 +0x25:  call   085d3d7e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x273>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x273
085d1d66 +0x2a:  jmp    085d1d83 <+0x47>
085d1d68 +0x2c:  mov    %edx,%ebx
085d1d6a +0x2e:  mov    %eax,%esi
085d1d6c +0x30:  mov    0x8(%ebp),%eax
085d1d6f +0x33:  mov    %eax,(%esp)
085d1d72 +0x36:  call   0849f1fa <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x2b>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x2b
085d1d77 +0x3b:  mov    %esi,%eax
085d1d79 +0x3d:  mov    %ebx,%edx
085d1d7b +0x3f:  mov    %eax,(%esp)
085d1d7e +0x42:  call   08ae3750 <_Unwind_Resume>
085d1d83 +0x47:  add    $0x10,%esp
085d1d86 +0x4a:  pop    %ebx
085d1d87 +0x4b:  pop    %esi
085d1d88 +0x4c:  pop    %ebp
085d1d89 +0x4d:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::CDisjointer @ 0x85d1d3c

/* expert_job::CDisjointer::CDisjointer() */

void __thiscall expert_job::CDisjointer::CDisjointer(CDisjointer *this)

{
  CExpertJob::CExpertJob((CExpertJob *)this);
  *(undefined ***)this = &PTR_OnStartMission_08cc0828;
                    /* try { // try from 085d1d61 to 085d1d65 has its CatchHandler @ 085d1d68 */
  CDisjointMachine::CDisjointMachine((CDisjointMachine *)(this + 8));
  return;
}
```
