# LoadDungeonIndex

`_ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadDungeonIndex(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab9562` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab9562  _ZN20GlobalScriptTutorial16LoadDungeonIndexER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadDungeonIndex(ENUM_CHARACTERJOB&)
# range [0x08ab9562, 0x08ab95ab]
08ab9562 +0x00:  push   %ebp
08ab9563 +0x01:  mov    %esp,%ebp
08ab9565 +0x03:  sub    $0x28,%esp
08ab9568 +0x06:  mov    0xc(%ebp),%eax
08ab956b +0x09:  mov    (%eax),%eax
08ab956d +0x0b:  cmp    $0xb,%eax
08ab9570 +0x0e:  je     08ab95a5 <+0x43>
08ab9572 +0x10:  lea    -0xc(%ebp),%eax
08ab9575 +0x13:  mov    %eax,(%esp)
08ab9578 +0x16:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab957d +0x1b:  xor    $0x1,%eax
08ab9580 +0x1e:  test   %al,%al
08ab9582 +0x20:  jne    08ab95a8 <+0x46>
08ab9584 +0x22:  mov    -0xc(%ebp),%eax
08ab9587 +0x25:  mov    %eax,%edx
08ab9589 +0x27:  mov    0xc(%ebp),%eax
08ab958c +0x2a:  mov    (%eax),%eax
08ab958e +0x2c:  imul   $0x148,%eax,%eax
08ab9594 +0x32:  add    0x8(%ebp),%eax
08ab9597 +0x35:  mov    %edx,0x4(%esp)
08ab959b +0x39:  mov    %eax,(%esp)
08ab959e +0x3c:  call   08ab82c4 <_ZN12TutorialData15setDungeonIndexEj>  ; TutorialData::setDungeonIndex(unsigned int)
08ab95a3 +0x41:  jmp    08ab9572 <+0x10>
08ab95a5 +0x43:  nop
08ab95a6 +0x44:  jmp    08ab95a9 <+0x47>
08ab95a8 +0x46:  nop
08ab95a9 +0x47:  leave
08ab95aa +0x48:  ret
08ab95ab +0x49:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadDungeonIndex @ 0x8ab9562

/* GlobalScriptTutorial::LoadDungeonIndex(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadDungeonIndex(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  char cVar1;
  uint local_10 [3];
  
  if (*(int *)param_1 != 0xb) {
    while (cVar1 = ScanInt((int *)local_10), cVar1 == '\x01') {
      TutorialData::setDungeonIndex((TutorialData *)(this + *(int *)param_1 * 0x148),local_10[0]);
    }
  }
  return;
}
```
