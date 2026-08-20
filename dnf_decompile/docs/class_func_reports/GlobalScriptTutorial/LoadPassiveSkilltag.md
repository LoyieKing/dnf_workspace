# LoadPassiveSkilltag

`_ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadPassiveSkilltag(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab94d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab94d4  _ZN20GlobalScriptTutorial19LoadPassiveSkilltagER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadPassiveSkilltag(ENUM_CHARACTERJOB&)
# range [0x08ab94d4, 0x08ab9561]
08ab94d4 +0x00:  push   %ebp
08ab94d5 +0x01:  mov    %esp,%ebp
08ab94d7 +0x03:  push   %ebx
08ab94d8 +0x04:  sub    $0x24,%esp
08ab94db +0x07:  mov    0xc(%ebp),%eax
08ab94de +0x0a:  mov    (%eax),%eax
08ab94e0 +0x0c:  cmp    $0xb,%eax
08ab94e3 +0x0f:  je     08ab9558 <+0x84>
08ab94e5 +0x11:  lea    -0xc(%ebp),%eax
08ab94e8 +0x14:  mov    %eax,(%esp)
08ab94eb +0x17:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab94f0 +0x1c:  xor    $0x1,%eax
08ab94f3 +0x1f:  test   %al,%al
08ab94f5 +0x21:  jne    08ab951b <+0x47>
08ab94f7 +0x23:  lea    -0x10(%ebp),%eax
08ab94fa +0x26:  mov    %eax,(%esp)
08ab94fd +0x29:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9502 +0x2e:  xor    $0x1,%eax
08ab9505 +0x31:  test   %al,%al
08ab9507 +0x33:  jne    08ab951b <+0x47>
08ab9509 +0x35:  lea    -0x14(%ebp),%eax
08ab950c +0x38:  mov    %eax,(%esp)
08ab950f +0x3b:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9514 +0x40:  xor    $0x1,%eax
08ab9517 +0x43:  test   %al,%al
08ab9519 +0x45:  je     08ab9522 <+0x4e>
08ab951b +0x47:  mov    $0x1,%eax
08ab9520 +0x4c:  jmp    08ab9527 <+0x53>
08ab9522 +0x4e:  mov    $0x0,%eax
08ab9527 +0x53:  test   %al,%al
08ab9529 +0x55:  jne    08ab955b <+0x87>
08ab952b +0x57:  mov    -0x14(%ebp),%ebx
08ab952e +0x5a:  mov    -0x10(%ebp),%ecx
08ab9531 +0x5d:  mov    -0xc(%ebp),%edx
08ab9534 +0x60:  mov    0xc(%ebp),%eax
08ab9537 +0x63:  mov    (%eax),%eax
08ab9539 +0x65:  imul   $0x148,%eax,%eax
08ab953f +0x6b:  add    0x8(%ebp),%eax
08ab9542 +0x6e:  mov    %ebx,0xc(%esp)
08ab9546 +0x72:  mov    %ecx,0x8(%esp)
08ab954a +0x76:  mov    %edx,0x4(%esp)
08ab954e +0x7a:  mov    %eax,(%esp)
08ab9551 +0x7d:  call   08ab8944 <_ZN12TutorialData19addPassiveSkillDataEiii>  ; TutorialData::addPassiveSkillData(int, int, int)
08ab9556 +0x82:  jmp    08ab94e5 <+0x11>
08ab9558 +0x84:  nop
08ab9559 +0x85:  jmp    08ab955c <+0x88>
08ab955b +0x87:  nop
08ab955c +0x88:  add    $0x24,%esp
08ab955f +0x8b:  pop    %ebx
08ab9560 +0x8c:  pop    %ebp
08ab9561 +0x8d:  ret
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadPassiveSkilltag @ 0x8ab94d4

/* GlobalScriptTutorial::LoadPassiveSkilltag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadPassiveSkilltag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10 [2];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_10);
      if (((cVar2 == '\x01') && (cVar2 = ScanInt(&local_14), cVar2 == '\x01')) &&
         (cVar2 = ScanInt(&local_18), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addPassiveSkillData
                ((TutorialData *)(this + *(int *)param_1 * 0x148),local_10[0],local_14,local_18);
    }
  }
  return;
}
```
