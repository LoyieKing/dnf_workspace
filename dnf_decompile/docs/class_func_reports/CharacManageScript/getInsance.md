# getInsance

`_ZN18CharacManageScript10getInsanceEv`

`CharacManageScript::getInsance()`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0674` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0674  _ZN18CharacManageScript10getInsanceEv
#           CharacManageScript::getInsance()
# range [0x088e0674, 0x088e06cb]
088e0674 +0x00:  push   %ebp
088e0675 +0x01:  mov    %esp,%ebp
088e0677 +0x03:  push   %edi
088e0678 +0x04:  push   %esi
088e0679 +0x05:  push   %ebx
088e067a +0x06:  sub    $0x1c,%esp
088e067d +0x09:  mov    &_ZN18CharacManageScript9instance_E,%eax
088e0682 +0x0e:  test   %eax,%eax
088e0684 +0x10:  jne    088e06bf <+0x4b>
088e0686 +0x12:  movl   $0x88,(%esp)
088e068d +0x19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
088e0692 +0x1e:  mov    %eax,%ebx
088e0694 +0x20:  mov    %ebx,%eax
088e0696 +0x22:  mov    %eax,(%esp)
088e0699 +0x25:  call   088e06cc <_ZN18CharacManageScriptC1Ev>  ; CharacManageScript::CharacManageScript()
088e069e +0x2a:  jmp    088e06b8 <+0x44>
088e06a0 +0x2c:  mov    %edx,%esi
088e06a2 +0x2e:  mov    %eax,%edi
088e06a4 +0x30:  mov    %ebx,(%esp)
088e06a7 +0x33:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088e06ac +0x38:  mov    %edi,%eax
088e06ae +0x3a:  mov    %esi,%edx
088e06b0 +0x3c:  mov    %eax,(%esp)
088e06b3 +0x3f:  call   08ae3750 <_Unwind_Resume>
088e06b8 +0x44:  mov    %ebx,%eax
088e06ba +0x46:  mov    %eax,&_ZN18CharacManageScript9instance_E
088e06bf +0x4b:  mov    &_ZN18CharacManageScript9instance_E,%eax
088e06c4 +0x50:  add    $0x1c,%esp
088e06c7 +0x53:  pop    %ebx
088e06c8 +0x54:  pop    %esi
088e06c9 +0x55:  pop    %edi
088e06ca +0x56:  pop    %ebp
088e06cb +0x57:  ret
```

## 反编译 C

```c
// CharacManageScript::getInsance @ 0x88e0674

/* CharacManageScript::getInsance() */

CharacManageScript * CharacManageScript::getInsance(void)

{
  CharacManageScript *this;
  
  if (instance_ == (CharacManageScript *)0x0) {
    this = operator_new(0x88);
                    /* try { // try from 088e0699 to 088e069d has its CatchHandler @ 088e06a0 */
    CharacManageScript(this);
    instance_ = this;
  }
  return instance_;
}
```
