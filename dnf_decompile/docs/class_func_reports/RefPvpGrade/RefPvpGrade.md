# RefPvpGrade

`_ZN11RefPvpGradeC1Ev`

`RefPvpGrade::RefPvpGrade()`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d46e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d46e6  _ZN11RefPvpGradeC1Ev
#           RefPvpGrade::RefPvpGrade()
# range [0x085d46e6, 0x085d4709]
085d46e6 +0x00:  push   %ebp
085d46e7 +0x01:  mov    %esp,%ebp
085d46e9 +0x03:  sub    $0x18,%esp
085d46ec +0x06:  mov    0x8(%ebp),%eax
085d46ef +0x09:  add    $0x140,%eax
085d46f4 +0x0e:  mov    %eax,(%esp)
085d46f7 +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085d46fc +0x16:  mov    0x8(%ebp),%eax
085d46ff +0x19:  mov    %eax,(%esp)
085d4702 +0x1c:  call   085d4722 <_ZN11RefPvpGrade5ClearEv>  ; RefPvpGrade::Clear()
085d4707 +0x21:  leave
085d4708 +0x22:  ret
085d4709 +0x23:  nop
```

## 反编译 C

```c
// RefPvpGrade::RefPvpGrade @ 0x85d46e6

/* RefPvpGrade::RefPvpGrade() */

void __thiscall RefPvpGrade::RefPvpGrade(RefPvpGrade *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x140));
  Clear(this);
  return;
}
```
