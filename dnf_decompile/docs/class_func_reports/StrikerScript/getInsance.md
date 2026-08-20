# getInsance

`_ZN13StrikerScript10getInsanceEv`

`StrikerScript::getInsance()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9d836` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9d836  _ZN13StrikerScript10getInsanceEv
#           StrikerScript::getInsance()
# range [0x08a9d836, 0x08a9d88d]
08a9d836 +0x00:  push   %ebp
08a9d837 +0x01:  mov    %esp,%ebp
08a9d839 +0x03:  push   %edi
08a9d83a +0x04:  push   %esi
08a9d83b +0x05:  push   %ebx
08a9d83c +0x06:  sub    $0x1c,%esp
08a9d83f +0x09:  mov    &_ZN13StrikerScript9instance_E,%eax
08a9d844 +0x0e:  test   %eax,%eax
08a9d846 +0x10:  jne    08a9d881 <+0x4b>
08a9d848 +0x12:  movl   $0xb4,(%esp)
08a9d84f +0x19:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08a9d854 +0x1e:  mov    %eax,%ebx
08a9d856 +0x20:  mov    %ebx,%eax
08a9d858 +0x22:  mov    %eax,(%esp)
08a9d85b +0x25:  call   08a9d88e <_ZN13StrikerScriptC1Ev>  ; StrikerScript::StrikerScript()
08a9d860 +0x2a:  jmp    08a9d87a <+0x44>
08a9d862 +0x2c:  mov    %edx,%esi
08a9d864 +0x2e:  mov    %eax,%edi
08a9d866 +0x30:  mov    %ebx,(%esp)
08a9d869 +0x33:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a9d86e +0x38:  mov    %edi,%eax
08a9d870 +0x3a:  mov    %esi,%edx
08a9d872 +0x3c:  mov    %eax,(%esp)
08a9d875 +0x3f:  call   08ae3750 <_Unwind_Resume>
08a9d87a +0x44:  mov    %ebx,%eax
08a9d87c +0x46:  mov    %eax,&_ZN13StrikerScript9instance_E
08a9d881 +0x4b:  mov    &_ZN13StrikerScript9instance_E,%eax
08a9d886 +0x50:  add    $0x1c,%esp
08a9d889 +0x53:  pop    %ebx
08a9d88a +0x54:  pop    %esi
08a9d88b +0x55:  pop    %edi
08a9d88c +0x56:  pop    %ebp
08a9d88d +0x57:  ret
```

## 反编译 C

```c
// StrikerScript::getInsance @ 0x8a9d836

/* StrikerScript::getInsance() */

StrikerScript * StrikerScript::getInsance(void)

{
  StrikerScript *this;
  
  if (instance_ == (StrikerScript *)0x0) {
    this = operator_new(0xb4);
                    /* try { // try from 08a9d85b to 08a9d85f has its CatchHandler @ 08a9d862 */
    StrikerScript(this);
    instance_ = this;
  }
  return instance_;
}
```
