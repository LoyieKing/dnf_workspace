# ~GlobalScriptTutorial

`_ZN20GlobalScriptTutorialD1Ev`

`GlobalScriptTutorial::~GlobalScriptTutorial()`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab8e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8e0a  _ZN20GlobalScriptTutorialD1Ev
#           GlobalScriptTutorial::~GlobalScriptTutorial()
# range [0x08ab8e0a, 0x08ab8e49]
08ab8e0a +0x00:  push   %ebp
08ab8e0b +0x01:  mov    %esp,%ebp
08ab8e0d +0x03:  push   %ebx
08ab8e0e +0x04:  sub    $0x14,%esp
08ab8e11 +0x07:  mov    0x8(%ebp),%eax
08ab8e14 +0x0a:  mov    %eax,(%esp)
08ab8e17 +0x0d:  call   08ab9718 <_ZN20GlobalScriptTutorial11clearScriptEv>  ; GlobalScriptTutorial::clearScript()
08ab8e1c +0x12:  mov    0x8(%ebp),%eax
08ab8e1f +0x15:  test   %eax,%eax
08ab8e21 +0x17:  je     08ab8e43 <+0x39>
08ab8e23 +0x19:  mov    0x8(%ebp),%eax
08ab8e26 +0x1c:  lea    0xe18(%eax),%ebx
08ab8e2c +0x22:  mov    0x8(%ebp),%eax
08ab8e2f +0x25:  cmp    %eax,%ebx
08ab8e31 +0x27:  je     08ab8e43 <+0x39>
08ab8e33 +0x29:  sub    $0x148,%ebx
08ab8e39 +0x2f:  mov    %ebx,(%esp)
08ab8e3c +0x32:  call   08ab80ee <_ZN12TutorialDataD1Ev>  ; TutorialData::~TutorialData()
08ab8e41 +0x37:  jmp    08ab8e2c <+0x22>
08ab8e43 +0x39:  add    $0x14,%esp
08ab8e46 +0x3c:  pop    %ebx
08ab8e47 +0x3d:  pop    %ebp
08ab8e48 +0x3e:  ret
08ab8e49 +0x3f:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::~GlobalScriptTutorial @ 0x8ab8e0a

/* GlobalScriptTutorial::~GlobalScriptTutorial() */

void __thiscall GlobalScriptTutorial::~GlobalScriptTutorial(GlobalScriptTutorial *this)

{
  TutorialData *this_00;
  
  clearScript();
  if (this != (GlobalScriptTutorial *)0x0) {
    this_00 = (TutorialData *)(this + 0xe18);
    while (this_00 != (TutorialData *)this) {
      this_00 = this_00 + -0x148;
      TutorialData::~TutorialData(this_00);
    }
  }
  return;
}
```
