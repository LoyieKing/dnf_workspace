# GlobalScriptTutorial

`_ZN20GlobalScriptTutorialC1Ev`

`GlobalScriptTutorial::GlobalScriptTutorial()`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab8d8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8d8a  _ZN20GlobalScriptTutorialC1Ev
#           GlobalScriptTutorial::GlobalScriptTutorial()
# range [0x08ab8d8a, 0x08ab8e09]
08ab8d8a +0x00:  push   %ebp
08ab8d8b +0x01:  mov    %esp,%ebp
08ab8d8d +0x03:  push   %edi
08ab8d8e +0x04:  push   %esi
08ab8d8f +0x05:  push   %ebx
08ab8d90 +0x06:  sub    $0x2c,%esp
08ab8d93 +0x09:  mov    0x8(%ebp),%ebx
08ab8d96 +0x0c:  mov    %ebx,%edi
08ab8d98 +0x0e:  mov    $0xa,%esi
08ab8d9d +0x13:  jmp    08ab8db0 <+0x26>
08ab8d9f +0x15:  mov    %edi,(%esp)
08ab8da2 +0x18:  call   08ab7e4c <_ZN12TutorialDataC1Ev>  ; TutorialData::TutorialData()
08ab8da7 +0x1d:  add    $0x148,%edi
08ab8dad +0x23:  sub    $0x1,%esi
08ab8db0 +0x26:  cmp    $0xffffffff,%esi
08ab8db3 +0x29:  setne  %al
08ab8db6 +0x2c:  test   %al,%al
08ab8db8 +0x2e:  jne    08ab8d9f <+0x15>
08ab8dba +0x30:  jmp    08ab8df6 <+0x6c>
08ab8dbc +0x32:  mov    %edx,%edi
08ab8dbe +0x34:  mov    %eax,-0x1c(%ebp)
08ab8dc1 +0x37:  test   %ebx,%ebx
08ab8dc3 +0x39:  je     08ab8de9 <+0x5f>
08ab8dc5 +0x3b:  mov    $0xa,%eax
08ab8dca +0x40:  sub    %esi,%eax
08ab8dcc +0x42:  imul   $0x148,%eax,%eax
08ab8dd2 +0x48:  lea    (%ebx,%eax,1),%esi
08ab8dd5 +0x4b:  cmp    %ebx,%esi
08ab8dd7 +0x4d:  je     08ab8de9 <+0x5f>
08ab8dd9 +0x4f:  sub    $0x148,%esi
08ab8ddf +0x55:  mov    %esi,(%esp)
08ab8de2 +0x58:  call   08ab80ee <_ZN12TutorialDataD1Ev>  ; TutorialData::~TutorialData()
08ab8de7 +0x5d:  jmp    08ab8dd5 <+0x4b>
08ab8de9 +0x5f:  mov    -0x1c(%ebp),%eax
08ab8dec +0x62:  mov    %edi,%edx
08ab8dee +0x64:  mov    %eax,(%esp)
08ab8df1 +0x67:  call   08ae3750 <_Unwind_Resume>
08ab8df6 +0x6c:  mov    0x8(%ebp),%eax
08ab8df9 +0x6f:  mov    %eax,(%esp)
08ab8dfc +0x72:  call   08ab9718 <_ZN20GlobalScriptTutorial11clearScriptEv>  ; GlobalScriptTutorial::clearScript()
08ab8e01 +0x77:  add    $0x2c,%esp
08ab8e04 +0x7a:  pop    %ebx
08ab8e05 +0x7b:  pop    %esi
08ab8e06 +0x7c:  pop    %edi
08ab8e07 +0x7d:  pop    %ebp
08ab8e08 +0x7e:  ret
08ab8e09 +0x7f:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::GlobalScriptTutorial @ 0x8ab8d8a

/* GlobalScriptTutorial::GlobalScriptTutorial() */

void __thiscall GlobalScriptTutorial::GlobalScriptTutorial(GlobalScriptTutorial *this)

{
  int iVar1;
  
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08ab8da2 to 08ab8da6 has its CatchHandler @ 08ab8dbc */
    TutorialData::TutorialData((TutorialData *)this);
    this = this + 0x148;
  }
  clearScript();
  return;
}
```
