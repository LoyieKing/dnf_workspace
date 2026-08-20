# Reset

`_ZN10expert_job11CDisjointer5ResetEv`

`expert_job::CDisjointer::Reset()`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d2cf2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d2cf2  _ZN10expert_job11CDisjointer5ResetEv
#           expert_job::CDisjointer::Reset()
# range [0x085d2cf2, 0x085d2d07]
085d2cf2 +0x00:  push   %ebp
085d2cf3 +0x01:  mov    %esp,%ebp
085d2cf5 +0x03:  sub    $0x18,%esp
085d2cf8 +0x06:  mov    0x8(%ebp),%eax
085d2cfb +0x09:  add    $0x8,%eax
085d2cfe +0x0c:  mov    %eax,(%esp)
085d2d01 +0x0f:  call   085d3e1e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x313>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x313
085d2d06 +0x14:  leave
085d2d07 +0x15:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::Reset @ 0x85d2cf2

/* expert_job::CDisjointer::Reset() */

void __thiscall expert_job::CDisjointer::Reset(CDisjointer *this)

{
  CDisjointMachine::reset((CDisjointMachine *)(this + 8));
  return;
}
```
