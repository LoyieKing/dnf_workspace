# ~CNotApplyBalkeunEvent

`_ZN21CNotApplyBalkeunEventD0Ev`

`CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent()`

| 类 | 地址 |
|---|---|
| `CNotApplyBalkeunEvent` | `0x081b9da8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9da8  _ZN21CNotApplyBalkeunEventD0Ev
#           CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent()
# range [0x081b9da8, 0x081b9dc5]
081b9da8 +0x00:  push   %ebp
081b9da9 +0x01:  mov    %esp,%ebp
081b9dab +0x03:  sub    $0x18,%esp
081b9dae +0x06:  mov    0x8(%ebp),%eax
081b9db1 +0x09:  mov    %eax,(%esp)
081b9db4 +0x0c:  call   081b9d78 <_ZN21CNotApplyBalkeunEventD1Ev>  ; CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent()
081b9db9 +0x11:  mov    0x8(%ebp),%eax
081b9dbc +0x14:  mov    %eax,(%esp)
081b9dbf +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b9dc4 +0x1c:  leave
081b9dc5 +0x1d:  ret
```

## 反编译 C

```c
// CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent @ 0x81b9da8

/* CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent() */

void __thiscall CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent(CNotApplyBalkeunEvent *this)

{
  ~CNotApplyBalkeunEvent(this);
  operator_delete(this);
  return;
}
```
