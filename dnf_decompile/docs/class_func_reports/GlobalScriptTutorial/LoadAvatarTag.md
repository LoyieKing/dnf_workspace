# LoadAvatarTag

`_ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadAvatarTag(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab930a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab930a  _ZN20GlobalScriptTutorial13LoadAvatarTagER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadAvatarTag(ENUM_CHARACTERJOB&)
# range [0x08ab930a, 0x08ab9379]
08ab930a +0x00:  push   %ebp
08ab930b +0x01:  mov    %esp,%ebp
08ab930d +0x03:  sub    $0x28,%esp
08ab9310 +0x06:  mov    0xc(%ebp),%eax
08ab9313 +0x09:  mov    (%eax),%eax
08ab9315 +0x0b:  cmp    $0xb,%eax
08ab9318 +0x0e:  je     08ab9374 <+0x6a>
08ab931a +0x10:  lea    -0xc(%ebp),%eax
08ab931d +0x13:  mov    %eax,(%esp)
08ab9320 +0x16:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9325 +0x1b:  xor    $0x1,%eax
08ab9328 +0x1e:  test   %al,%al
08ab932a +0x20:  jne    08ab933e <+0x34>
08ab932c +0x22:  lea    -0x10(%ebp),%eax
08ab932f +0x25:  mov    %eax,(%esp)
08ab9332 +0x28:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9337 +0x2d:  xor    $0x1,%eax
08ab933a +0x30:  test   %al,%al
08ab933c +0x32:  je     08ab9345 <+0x3b>
08ab933e +0x34:  mov    $0x1,%eax
08ab9343 +0x39:  jmp    08ab934a <+0x40>
08ab9345 +0x3b:  mov    $0x0,%eax
08ab934a +0x40:  test   %al,%al
08ab934c +0x42:  jne    08ab9377 <+0x6d>
08ab934e +0x44:  mov    -0x10(%ebp),%ecx
08ab9351 +0x47:  mov    -0xc(%ebp),%edx
08ab9354 +0x4a:  mov    0xc(%ebp),%eax
08ab9357 +0x4d:  mov    (%eax),%eax
08ab9359 +0x4f:  imul   $0x148,%eax,%eax
08ab935f +0x55:  add    0x8(%ebp),%eax
08ab9362 +0x58:  mov    %ecx,0x8(%esp)
08ab9366 +0x5c:  mov    %edx,0x4(%esp)
08ab936a +0x60:  mov    %eax,(%esp)
08ab936d +0x63:  call   08ab868a <_ZN12TutorialData14addAvatarIndexEii>  ; TutorialData::addAvatarIndex(int, int)
08ab9372 +0x68:  jmp    08ab931a <+0x10>
08ab9374 +0x6a:  nop
08ab9375 +0x6b:  jmp    08ab9378 <+0x6e>
08ab9377 +0x6d:  nop
08ab9378 +0x6e:  leave
08ab9379 +0x6f:  ret
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadAvatarTag @ 0x8ab930a

/* GlobalScriptTutorial::LoadAvatarTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadAvatarTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

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
      TutorialData::addAvatarIndex((int)(this + *(int *)param_1 * 0x148),local_10[0]);
    }
  }
  return;
}
```
