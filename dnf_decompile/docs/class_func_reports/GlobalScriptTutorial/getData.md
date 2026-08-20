# getData

`_ZN20GlobalScriptTutorial7getDataEi`

`GlobalScriptTutorial::getData(int)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab971e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab971e  _ZN20GlobalScriptTutorial7getDataEi
#           GlobalScriptTutorial::getData(int)
# range [0x08ab971e, 0x08ab9769]
08ab971e +0x00:  push   %ebp
08ab971f +0x01:  mov    %esp,%ebp
08ab9721 +0x03:  sub    $0x4,%esp
08ab9724 +0x06:  cmpl   $0xa,0xc(%ebp)
08ab9728 +0x0a:  jg     08ab9730 <+0x12>
08ab972a +0x0c:  cmpl   $0x0,0xc(%ebp)
08ab972e +0x10:  jns    08ab9737 <+0x19>
08ab9730 +0x12:  mov    $0x0,%eax
08ab9735 +0x17:  jmp    08ab9767 <+0x49>
08ab9737 +0x19:  mov    0xc(%ebp),%eax
08ab973a +0x1c:  imul   $0x148,%eax,%eax
08ab9740 +0x22:  add    0x8(%ebp),%eax
08ab9743 +0x25:  mov    %eax,(%esp)
08ab9746 +0x28:  call   08ab82d2 <_ZN12TutorialData15getDungeonIndexEv>  ; TutorialData::getDungeonIndex()
08ab974b +0x2d:  test   %eax,%eax
08ab974d +0x2f:  sete   %al
08ab9750 +0x32:  test   %al,%al
08ab9752 +0x34:  je     08ab975b <+0x3d>
08ab9754 +0x36:  mov    $0x0,%eax
08ab9759 +0x3b:  jmp    08ab9767 <+0x49>
08ab975b +0x3d:  mov    0xc(%ebp),%eax
08ab975e +0x40:  imul   $0x148,%eax,%eax
08ab9764 +0x46:  add    0x8(%ebp),%eax
08ab9767 +0x49:  leave
08ab9768 +0x4a:  ret
08ab9769 +0x4b:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::getData @ 0x8ab971e

/* GlobalScriptTutorial::getData(int) */

GlobalScriptTutorial * __thiscall
GlobalScriptTutorial::getData(GlobalScriptTutorial *this,int param_1)

{
  GlobalScriptTutorial *pGVar1;
  int iVar2;
  
  if ((param_1 < 0xb) && (-1 < param_1)) {
    iVar2 = TutorialData::getDungeonIndex((TutorialData *)(this + param_1 * 0x148));
    if (iVar2 == 0) {
      pGVar1 = (GlobalScriptTutorial *)0x0;
    }
    else {
      pGVar1 = this + param_1 * 0x148;
    }
  }
  else {
    pGVar1 = (GlobalScriptTutorial *)0x0;
  }
  return pGVar1;
}
```
