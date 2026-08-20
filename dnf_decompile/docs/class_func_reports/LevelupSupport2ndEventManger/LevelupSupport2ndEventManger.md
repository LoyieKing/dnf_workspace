# LevelupSupport2ndEventManger

`_ZN28LevelupSupport2ndEventMangerC1Ev`

`LevelupSupport2ndEventManger::LevelupSupport2ndEventManger()`

| 类 | 地址 |
|---|---|
| `LevelupSupport2ndEventManger` | `0x0814778e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814778e  _ZN28LevelupSupport2ndEventMangerC1Ev
#           LevelupSupport2ndEventManger::LevelupSupport2ndEventManger()
# range [0x0814778e, 0x081477c3]
0814778e +0x00:  push   %ebp
0814778f +0x01:  mov    %esp,%ebp
08147791 +0x03:  sub    $0x18,%esp
08147794 +0x06:  mov    0x8(%ebp),%eax
08147797 +0x09:  mov    %eax,(%esp)
0814779a +0x0c:  call   08147e44 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x337>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x337
0814779f +0x11:  mov    0x8(%ebp),%eax
081477a2 +0x14:  mov    %eax,(%esp)
081477a5 +0x17:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
081477aa +0x1c:  mov    0x8(%ebp),%eax
081477ad +0x1f:  movl   $&_ZTV28LevelupSupport2ndEventManger+0x8,(%eax)
081477b3 +0x25:  mov    0x8(%ebp),%eax
081477b6 +0x28:  add    $0x4,%eax
081477b9 +0x2b:  mov    %eax,(%esp)
081477bc +0x2e:  call   08ab54be <_ZN23LevelupSupport2ndScriptC1Ev>  ; LevelupSupport2ndScript::LevelupSupport2ndScript()
081477c1 +0x33:  leave
081477c2 +0x34:  ret
081477c3 +0x35:  nop
```

## 反编译 C

```c
// LevelupSupport2ndEventManger::LevelupSupport2ndEventManger @ 0x814778e

/* LevelupSupport2ndEventManger::LevelupSupport2ndEventManger() */

void __thiscall
LevelupSupport2ndEventManger::LevelupSupport2ndEventManger(LevelupSupport2ndEventManger *this)

{
  ARAD::Singleton<LevelupSupport2ndEventManger>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b73c78;
  LevelupSupport2ndScript::LevelupSupport2ndScript((LevelupSupport2ndScript *)(this + 4));
  return;
}
```
