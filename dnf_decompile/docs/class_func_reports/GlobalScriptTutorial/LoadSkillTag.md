# LoadSkillTag

`_ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadSkillTag(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab9408` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab9408  _ZN20GlobalScriptTutorial12LoadSkillTagER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadSkillTag(ENUM_CHARACTERJOB&)
# range [0x08ab9408, 0x08ab94d3]
08ab9408 +0x00:  push   %ebp
08ab9409 +0x01:  mov    %esp,%ebp
08ab940b +0x03:  push   %edi
08ab940c +0x04:  push   %esi
08ab940d +0x05:  push   %ebx
08ab940e +0x06:  sub    $0x4c,%esp
08ab9411 +0x09:  mov    0xc(%ebp),%eax
08ab9414 +0x0c:  mov    (%eax),%eax
08ab9416 +0x0e:  cmp    $0xb,%eax
08ab9419 +0x11:  je     08ab94c7 <+0xbf>
08ab941f +0x17:  lea    -0x1c(%ebp),%eax
08ab9422 +0x1a:  mov    %eax,(%esp)
08ab9425 +0x1d:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab942a +0x22:  xor    $0x1,%eax
08ab942d +0x25:  test   %al,%al
08ab942f +0x27:  jne    08ab9479 <+0x71>
08ab9431 +0x29:  lea    -0x20(%ebp),%eax
08ab9434 +0x2c:  mov    %eax,(%esp)
08ab9437 +0x2f:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab943c +0x34:  xor    $0x1,%eax
08ab943f +0x37:  test   %al,%al
08ab9441 +0x39:  jne    08ab9479 <+0x71>
08ab9443 +0x3b:  lea    -0x24(%ebp),%eax
08ab9446 +0x3e:  mov    %eax,(%esp)
08ab9449 +0x41:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab944e +0x46:  xor    $0x1,%eax
08ab9451 +0x49:  test   %al,%al
08ab9453 +0x4b:  jne    08ab9479 <+0x71>
08ab9455 +0x4d:  lea    -0x28(%ebp),%eax
08ab9458 +0x50:  mov    %eax,(%esp)
08ab945b +0x53:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9460 +0x58:  xor    $0x1,%eax
08ab9463 +0x5b:  test   %al,%al
08ab9465 +0x5d:  jne    08ab9479 <+0x71>
08ab9467 +0x5f:  lea    -0x2c(%ebp),%eax
08ab946a +0x62:  mov    %eax,(%esp)
08ab946d +0x65:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9472 +0x6a:  xor    $0x1,%eax
08ab9475 +0x6d:  test   %al,%al
08ab9477 +0x6f:  je     08ab9480 <+0x78>
08ab9479 +0x71:  mov    $0x1,%eax
08ab947e +0x76:  jmp    08ab9485 <+0x7d>
08ab9480 +0x78:  mov    $0x0,%eax
08ab9485 +0x7d:  test   %al,%al
08ab9487 +0x7f:  jne    08ab94ca <+0xc2>
08ab9489 +0x81:  mov    -0x2c(%ebp),%edi
08ab948c +0x84:  mov    -0x28(%ebp),%esi
08ab948f +0x87:  mov    -0x24(%ebp),%ebx
08ab9492 +0x8a:  mov    -0x20(%ebp),%ecx
08ab9495 +0x8d:  mov    -0x1c(%ebp),%edx
08ab9498 +0x90:  mov    0xc(%ebp),%eax
08ab949b +0x93:  mov    (%eax),%eax
08ab949d +0x95:  imul   $0x148,%eax,%eax
08ab94a3 +0x9b:  add    0x8(%ebp),%eax
08ab94a6 +0x9e:  mov    %edi,0x14(%esp)
08ab94aa +0xa2:  mov    %esi,0x10(%esp)
08ab94ae +0xa6:  mov    %ebx,0xc(%esp)
08ab94b2 +0xaa:  mov    %ecx,0x8(%esp)
08ab94b6 +0xae:  mov    %edx,0x4(%esp)
08ab94ba +0xb2:  mov    %eax,(%esp)
08ab94bd +0xb5:  call   08ab8888 <_ZN12TutorialData13addSkillIndexEiiiii>  ; TutorialData::addSkillIndex(int, int, int, int, int)
08ab94c2 +0xba:  jmp    08ab941f <+0x17>
08ab94c7 +0xbf:  nop
08ab94c8 +0xc0:  jmp    08ab94cb <+0xc3>
08ab94ca +0xc2:  nop
08ab94cb +0xc3:  add    $0x4c,%esp
08ab94ce +0xc6:  pop    %ebx
08ab94cf +0xc7:  pop    %esi
08ab94d0 +0xc8:  pop    %edi
08ab94d1 +0xc9:  pop    %ebp
08ab94d2 +0xca:  ret
08ab94d3 +0xcb:  nop
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadSkillTag @ 0x8ab9408

/* GlobalScriptTutorial::LoadSkillTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadSkillTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

{
  bool bVar1;
  char cVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20 [4];
  
  if (*(int *)param_1 != 0xb) {
    while( true ) {
      cVar2 = ScanInt(local_20);
      if ((((cVar2 == '\x01') && (cVar2 = ScanInt(&local_24), cVar2 == '\x01')) &&
          (cVar2 = ScanInt(&local_28), cVar2 == '\x01')) &&
         ((cVar2 = ScanInt(&local_2c), cVar2 == '\x01' &&
          (cVar2 = ScanInt(&local_30), cVar2 == '\x01')))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) break;
      TutorialData::addSkillIndex
                ((TutorialData *)(this + *(int *)param_1 * 0x148),local_20[0],local_24,local_28,
                 local_2c,local_30);
    }
  }
  return;
}
```
