# LoadEquipmentTag

`_ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB`

`GlobalScriptTutorial::LoadEquipmentTag(ENUM_CHARACTERJOB&)`

| 类 | 地址 |
|---|---|
| `GlobalScriptTutorial` | `0x08ab937a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab937a  _ZN20GlobalScriptTutorial16LoadEquipmentTagER17ENUM_CHARACTERJOB
#           GlobalScriptTutorial::LoadEquipmentTag(ENUM_CHARACTERJOB&)
# range [0x08ab937a, 0x08ab9407]
08ab937a +0x00:  push   %ebp
08ab937b +0x01:  mov    %esp,%ebp
08ab937d +0x03:  push   %ebx
08ab937e +0x04:  sub    $0x24,%esp
08ab9381 +0x07:  mov    0xc(%ebp),%eax
08ab9384 +0x0a:  mov    (%eax),%eax
08ab9386 +0x0c:  cmp    $0xb,%eax
08ab9389 +0x0f:  je     08ab93fe <+0x84>
08ab938b +0x11:  lea    -0xc(%ebp),%eax
08ab938e +0x14:  mov    %eax,(%esp)
08ab9391 +0x17:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab9396 +0x1c:  xor    $0x1,%eax
08ab9399 +0x1f:  test   %al,%al
08ab939b +0x21:  jne    08ab93c1 <+0x47>
08ab939d +0x23:  lea    -0x10(%ebp),%eax
08ab93a0 +0x26:  mov    %eax,(%esp)
08ab93a3 +0x29:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab93a8 +0x2e:  xor    $0x1,%eax
08ab93ab +0x31:  test   %al,%al
08ab93ad +0x33:  jne    08ab93c1 <+0x47>
08ab93af +0x35:  lea    -0x14(%ebp),%eax
08ab93b2 +0x38:  mov    %eax,(%esp)
08ab93b5 +0x3b:  call   088bc424 <_Z7ScanIntPi>  ; ScanInt(int*)
08ab93ba +0x40:  xor    $0x1,%eax
08ab93bd +0x43:  test   %al,%al
08ab93bf +0x45:  je     08ab93c8 <+0x4e>
08ab93c1 +0x47:  mov    $0x1,%eax
08ab93c6 +0x4c:  jmp    08ab93cd <+0x53>
08ab93c8 +0x4e:  mov    $0x0,%eax
08ab93cd +0x53:  test   %al,%al
08ab93cf +0x55:  jne    08ab9401 <+0x87>
08ab93d1 +0x57:  mov    -0xc(%ebp),%ebx
08ab93d4 +0x5a:  mov    -0x14(%ebp),%ecx
08ab93d7 +0x5d:  mov    -0x10(%ebp),%edx
08ab93da +0x60:  mov    0xc(%ebp),%eax
08ab93dd +0x63:  mov    (%eax),%eax
08ab93df +0x65:  imul   $0x148,%eax,%eax
08ab93e5 +0x6b:  add    0x8(%ebp),%eax
08ab93e8 +0x6e:  mov    %ebx,0xc(%esp)
08ab93ec +0x72:  mov    %ecx,0x8(%esp)
08ab93f0 +0x76:  mov    %edx,0x4(%esp)
08ab93f4 +0x7a:  mov    %eax,(%esp)
08ab93f7 +0x7d:  call   08ab86e0 <_ZN12TutorialData17addEquipmentIndexEiii>  ; TutorialData::addEquipmentIndex(int, int, int)
08ab93fc +0x82:  jmp    08ab938b <+0x11>
08ab93fe +0x84:  nop
08ab93ff +0x85:  jmp    08ab9402 <+0x88>
08ab9401 +0x87:  nop
08ab9402 +0x88:  add    $0x24,%esp
08ab9405 +0x8b:  pop    %ebx
08ab9406 +0x8c:  pop    %ebp
08ab9407 +0x8d:  ret
```

## 反编译 C

```c
// GlobalScriptTutorial::LoadEquipmentTag @ 0x8ab937a

/* GlobalScriptTutorial::LoadEquipmentTag(ENUM_CHARACTERJOB&) */

void __thiscall
GlobalScriptTutorial::LoadEquipmentTag(GlobalScriptTutorial *this,ENUM_CHARACTERJOB *param_1)

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
      TutorialData::addEquipmentIndex((int)(this + *(int *)param_1 * 0x148),local_14,local_18);
    }
  }
  return;
}
```
