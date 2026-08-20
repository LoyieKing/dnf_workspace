# ~LevelupSupport2ndEventManger

`_ZN28LevelupSupport2ndEventMangerD1Ev`

`LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndEventManger` | `0x081477c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081477c4  _ZN28LevelupSupport2ndEventMangerD1Ev
#           LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger()
# range [0x081477c4, 0x081477e3]
081477c4 +0x00:  push   %ebp
081477c5 +0x01:  mov    %esp,%ebp
081477c7 +0x03:  sub    $0x18,%esp
081477ca +0x06:  mov    0x8(%ebp),%eax
081477cd +0x09:  movl   $&_ZTV28LevelupSupport2ndEventManger+0x8,(%eax)
081477d3 +0x0f:  mov    0x8(%ebp),%eax
081477d6 +0x12:  add    $0x4,%eax
081477d9 +0x15:  mov    %eax,(%esp)
081477dc +0x18:  call   08ab5530 <_ZN23LevelupSupport2ndScriptD1Ev>  ; LevelupSupport2ndScript::~LevelupSupport2ndScript()
081477e1 +0x1d:  leave
081477e2 +0x1e:  ret
081477e3 +0x1f:  nop
```

## 反编译 C

```c
// LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger @ 0x81477c4

/* LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger() */

void __thiscall
LevelupSupport2ndEventManger::~LevelupSupport2ndEventManger(LevelupSupport2ndEventManger *this)

{
  *(undefined ***)this = &PTR_Load_08b73c78;
  LevelupSupport2ndScript::~LevelupSupport2ndScript((LevelupSupport2ndScript *)(this + 4));
  return;
}
```
