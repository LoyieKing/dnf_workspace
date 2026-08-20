# ~ScriptStringManager

`_ZN19ScriptStringManagerD0Ev`

`ScriptStringManager::~ScriptStringManager()`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf700  _ZN19ScriptStringManagerD0Ev
#           ScriptStringManager::~ScriptStringManager()
# range [0x08acf700, 0x08acf71f]
08acf700 +0x00:  push   %ebp
08acf701 +0x01:  mov    %esp,%ebp
08acf703 +0x03:  push   %ebx
08acf704 +0x04:  sub    $0x14,%esp
08acf707 +0x07:  mov    0x8(%ebp),%ebx
08acf70a +0x0a:  mov    %ebx,(%esp)
08acf70d +0x0d:  call   08acf5f0 <_ZN19ScriptStringManagerD1Ev>  ; ScriptStringManager::~ScriptStringManager()
08acf712 +0x12:  mov    %ebx,0x8(%ebp)
08acf715 +0x15:  add    $0x14,%esp
08acf718 +0x18:  pop    %ebx
08acf719 +0x19:  pop    %ebp
08acf71a +0x1a:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
08acf71f +0x1f:  nop
```

## 反编译 C

```c
// ScriptStringManager::~ScriptStringManager @ 0x8acf700

/* DWARF original prototype: void ~ScriptStringManager(ScriptStringManager * this, int __in_chrg) */

void __thiscall ScriptStringManager::~ScriptStringManager(ScriptStringManager *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~ScriptStringManager(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}
```
