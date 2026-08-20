# get_disjoint_machine_grade

`_ZN10expert_job11CDisjointer26get_disjoint_machine_gradeEv`

`expert_job::CDisjointer::get_disjoint_machine_grade()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1f0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1f0a  _ZN10expert_job11CDisjointer26get_disjoint_machine_gradeEv
#           expert_job::CDisjointer::get_disjoint_machine_grade()
# range [0x085d1f0a, 0x085d1f23]
085d1f0a +0x00:  push   %ebp
085d1f0b +0x01:  mov    %esp,%ebp
085d1f0d +0x03:  sub    $0x18,%esp
085d1f10 +0x06:  mov    0x8(%ebp),%eax
085d1f13 +0x09:  add    $0x8,%eax
085d1f16 +0x0c:  mov    %eax,(%esp)
085d1f19 +0x0f:  call   085d3e12 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x307>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x307
085d1f1e +0x14:  movsbl %al,%eax
085d1f21 +0x17:  leave
085d1f22 +0x18:  ret
085d1f23 +0x19:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::get_disjoint_machine_grade @ 0x85d1f0a

/* expert_job::CDisjointer::get_disjoint_machine_grade() */

int __thiscall expert_job::CDisjointer::get_disjoint_machine_grade(CDisjointer *this)

{
  char cVar1;
  
  cVar1 = CDisjointMachine::get_grade((CDisjointMachine *)(this + 8));
  return (int)cVar1;
}
```
