# ~CSchoolMatchEvent

`_ZN17CSchoolMatchEventD1Ev`

`CSchoolMatchEvent::~CSchoolMatchEvent()`

| 类 | 地址 |
|---|---|
| `CSchoolMatchEvent` | `0x08273f1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08273f1a  _ZN17CSchoolMatchEventD1Ev
#           CSchoolMatchEvent::~CSchoolMatchEvent()
# range [0x08273f1a, 0x08273f7b]
08273f1a +0x00:  push   %ebp
08273f1b +0x01:  mov    %esp,%ebp
08273f1d +0x03:  push   %esi
08273f1e +0x04:  push   %ebx
08273f1f +0x05:  sub    $0x10,%esp
08273f22 +0x08:  mov    0x8(%ebp),%eax
08273f25 +0x0b:  movl   $&_ZTV17CSchoolMatchEvent+0x8,(%eax)
08273f2b +0x11:  mov    0x8(%ebp),%eax
08273f2e +0x14:  add    $0xc,%eax
08273f31 +0x17:  mov    %eax,(%esp)
08273f34 +0x1a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08273f39 +0x1f:  jmp    08273f56 <+0x3c>
08273f3b +0x21:  mov    %edx,%ebx
08273f3d +0x23:  mov    %eax,%esi
08273f3f +0x25:  mov    0x8(%ebp),%eax
08273f42 +0x28:  mov    %eax,(%esp)
08273f45 +0x2b:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08273f4a +0x30:  mov    %esi,%eax
08273f4c +0x32:  mov    %ebx,%edx
08273f4e +0x34:  mov    %eax,(%esp)
08273f51 +0x37:  call   08ae3750 <_Unwind_Resume>
08273f56 +0x3c:  mov    0x8(%ebp),%eax
08273f59 +0x3f:  mov    %eax,(%esp)
08273f5c +0x42:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08273f61 +0x47:  mov    $0x0,%eax
08273f66 +0x4c:  test   %al,%al
08273f68 +0x4e:  je     08273f75 <+0x5b>
08273f6a +0x50:  mov    0x8(%ebp),%eax
08273f6d +0x53:  mov    %eax,(%esp)
08273f70 +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08273f75 +0x5b:  add    $0x10,%esp
08273f78 +0x5e:  pop    %ebx
08273f79 +0x5f:  pop    %esi
08273f7a +0x60:  pop    %ebp
08273f7b +0x61:  ret
```

## 反编译 C

```c
// CSchoolMatchEvent::~CSchoolMatchEvent @ 0x8273f1a

/* WARNING: Removing unreachable block (ram,0x08273f6a) */
/* CSchoolMatchEvent::~CSchoolMatchEvent() */

void __thiscall CSchoolMatchEvent::~CSchoolMatchEvent(CSchoolMatchEvent *this)

{
  *(undefined ***)this = &PTR__CSchoolMatchEvent_08bfd208;
                    /* try { // try from 08273f34 to 08273f38 has its CatchHandler @ 08273f3b */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc));
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
