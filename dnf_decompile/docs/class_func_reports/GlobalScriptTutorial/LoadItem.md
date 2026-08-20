# LoadItem

`_ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadItem(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab96a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab96a8  _ZN20GlobalScriptTutorial8LoadItemER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadItem(ENUM_CHARACTERJOB&)
# range [0x08ab96a8, 0x08ab9717]
08ab96a8 +0x00:  push   %ebp
08ab96a9 +0x01:  mov    %esp,%ebp
08ab96ab +0x03:  sub    $0x28,%esp
08ab96ae +0x06:  mov    0xc(%ebp),%eax
08ab96b1 +0x09:  mov    (%eax),%eax
08ab96b3 +0x0b:  cmp    $0xb,%eax
08ab96b6 +0x0e:  je     08ab9712 <+0x6a>
08ab96b8 +0x10:  lea    -0xc(%ebp),%eax
08ab96bb +0x13:  mov    %eax,(%esp)
08ab96be +0x16:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab96c3 +0x1b:  xor    $0x1,%eax
08ab96c6 +0x1e:  test   %al,%al
08ab96c8 +0x20:  jne    08ab96dc <+0x34>
08ab96ca +0x22:  lea    -0x10(%ebp),%eax
08ab96cd +0x25:  mov    %eax,(%esp)
08ab96d0 +0x28:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab96d5 +0x2d:  xor    $0x1,%eax
08ab96d8 +0x30:  test   %al,%al
08ab96da +0x32:  je     08ab96e3 <+0x3b>
08ab96dc +0x34:  mov    $0x1,%eax
08ab96e1 +0x39:  jmp    08ab96e8 <+0x40>
08ab96e3 +0x3b:  mov    $0x0,%eax
08ab96e8 +0x40:  test   %al,%al
08ab96ea +0x42:  jne    08ab9715 <+0x6d>
08ab96ec +0x44:  mov    -0x10(%ebp),%ecx
08ab96ef +0x47:  mov    -0xc(%ebp),%edx
08ab96f2 +0x4a:  mov    0xc(%ebp),%eax
08ab96f5 +0x4d:  mov    (%eax),%eax
08ab96f7 +0x4f:  imul   $0x148,%eax,%eax
08ab96fd +0x55:  add    0x8(%ebp),%eax
08ab9700 +0x58:  mov    %ecx,0x8(%esp)
08ab9704 +0x5c:  mov    %edx,0x4(%esp)
08ab9708 +0x60:  mov    %eax,(%esp)
08ab970b +0x63:  call   08ab8d1c <_ZN12TutorialData7addItemEii>  ; TutorialData::addItem(int, int)
08ab9710 +0x68:  jmp    08ab96b8 <+0x10>
08ab9712 +0x6a:  nop
08ab9713 +0x6b:  jmp    08ab9716 <+0x6e>
08ab9715 +0x6d:  nop
08ab9716 +0x6e:  leave
08ab9717 +0x6f:  ret
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadItem @ 0x8ab96a8

/* GlobalScriptTutorial::LoadItem(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadItem(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_14;
  int local_10 [3];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_10);
      if ((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addItem((TutorialData *)(this + *(int *)param_1 * 0x148),local_10[0],local_14);
    }
  }
  return;
}
```
