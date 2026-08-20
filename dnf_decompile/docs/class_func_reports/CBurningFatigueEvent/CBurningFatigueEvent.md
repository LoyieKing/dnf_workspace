# CBurningFatigueEvent

`_ZN20CBurningFatigueEventC1Ev`

`CBurningFatigueEvent::CBurningFatigueEvent()`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x08109fa4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08109fa4  _ZN20CBurningFatigueEventC1Ev
#           CBurningFatigueEvent::CBurningFatigueEvent()
# range [0x08109fa4, 0x08109ff3]
08109fa4 +0x00:  push   %ebp
08109fa5 +0x01:  mov    %esp,%ebp
08109fa7 +0x03:  push   %esi
08109fa8 +0x04:  push   %ebx
08109fa9 +0x05:  sub    $0x10,%esp
08109fac +0x08:  mov    0x8(%ebp),%eax
08109faf +0x0b:  mov    %eax,(%esp)
08109fb2 +0x0e:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
08109fb7 +0x13:  mov    0x8(%ebp),%eax
08109fba +0x16:  movl   $&_ZTV20CBurningFatigueEvent+0x8,(%eax)
08109fc0 +0x1c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08109fc5 +0x21:  lea    0x4f4(%eax),%edx
08109fcb +0x27:  mov    0x8(%ebp),%eax
08109fce +0x2a:  mov    %edx,0xc(%eax)
08109fd1 +0x2d:  add    $0x10,%esp
08109fd4 +0x30:  pop    %ebx
08109fd5 +0x31:  pop    %esi
08109fd6 +0x32:  pop    %ebp
08109fd7 +0x33:  ret
08109fd8 +0x34:  mov    %edx,%ebx
08109fda +0x36:  mov    %eax,%esi
08109fdc +0x38:  mov    0x8(%ebp),%eax
08109fdf +0x3b:  mov    %eax,(%esp)
08109fe2 +0x3e:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
08109fe7 +0x43:  mov    %esi,%eax
08109fe9 +0x45:  mov    %ebx,%edx
08109feb +0x47:  mov    %eax,(%esp)
08109fee +0x4a:  call   08ae3750 <_Unwind_Resume>
08109ff3 +0x4f:  nop
```

## 反编译 C

```c
// CBurningFatigueEvent::CBurningFatigueEvent @ 0x8109fa4

/* CBurningFatigueEvent::CBurningFatigueEvent() */

void __thiscall CBurningFatigueEvent::CBurningFatigueEvent(CBurningFatigueEvent *this)

{
  int iVar1;
  
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CBurningFatigueEvent_08b47ce8;
                    /* try { // try from 08109fc0 to 08109fc4 has its CatchHandler @ 08109fd8 */
  iVar1 = G_CDataManager();
  *(int *)(this + 0xc) = iVar1 + 0x4f4;
  return;
}
```
