# CSchoolMatchEvent

`_ZN17CSchoolMatchEventC1Ev`

`CSchoolMatchEvent::CSchoolMatchEvent()`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x08273ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273ecc  _ZN17CSchoolMatchEventC1Ev
#           CSchoolMatchEvent::CSchoolMatchEvent()
# range [0x08273ecc, 0x08273f19]
08273ecc +0x00:  push   %ebp
08273ecd +0x01:  mov    %esp,%ebp
08273ecf +0x03:  push   %esi
08273ed0 +0x04:  push   %ebx
08273ed1 +0x05:  sub    $0x10,%esp
08273ed4 +0x08:  mov    0x8(%ebp),%eax
08273ed7 +0x0b:  mov    %eax,(%esp)
08273eda +0x0e:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08273edf +0x13:  mov    0x8(%ebp),%eax
08273ee2 +0x16:  movl   $&_ZTV17CSchoolMatchEvent+0x8,(%eax)
08273ee8 +0x1c:  mov    0x8(%ebp),%eax
08273eeb +0x1f:  add    $0xc,%eax
08273eee +0x22:  mov    %eax,(%esp)
08273ef1 +0x25:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08273ef6 +0x2a:  jmp    08273f13 <+0x47>
08273ef8 +0x2c:  mov    %edx,%ebx
08273efa +0x2e:  mov    %eax,%esi
08273efc +0x30:  mov    0x8(%ebp),%eax
08273eff +0x33:  mov    %eax,(%esp)
08273f02 +0x36:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08273f07 +0x3b:  mov    %esi,%eax
08273f09 +0x3d:  mov    %ebx,%edx
08273f0b +0x3f:  mov    %eax,(%esp)
08273f0e +0x42:  call   08ae3750 <_Unwind_Resume>
08273f13 +0x47:  add    $0x10,%esp
08273f16 +0x4a:  pop    %ebx
08273f17 +0x4b:  pop    %esi
08273f18 +0x4c:  pop    %ebp
08273f19 +0x4d:  ret
```

## 反编译 C

```c
// CSchoolMatchEvent::CSchoolMatchEvent @ 0x8273ecc

/* CSchoolMatchEvent::CSchoolMatchEvent() */

void __thiscall CSchoolMatchEvent::CSchoolMatchEvent(CSchoolMatchEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CSchoolMatchEvent_08bfd208;
                    /* try { // try from 08273ef1 to 08273ef5 has its CatchHandler @ 08273ef8 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
  return;
}
```
