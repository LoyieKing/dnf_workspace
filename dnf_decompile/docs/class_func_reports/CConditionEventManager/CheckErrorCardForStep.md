# CheckErrorCardForStep

`_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc`

`CConditionEventManager::CheckErrorCardForStep(CUser*, char)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08335a8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08335a8a  _ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc
#           CConditionEventManager::CheckErrorCardForStep(CUser*, char)
# range [0x08335a8a, 0x08335b19]
08335a8a +0x00:  push   %ebp
08335a8b +0x01:  mov    %esp,%ebp
08335a8d +0x03:  sub    $0x38,%esp
08335a90 +0x06:  mov    0x10(%ebp),%eax
08335a93 +0x09:  mov    %al,-0x1c(%ebp)
08335a96 +0x0c:  cmpl   $0x0,0xc(%ebp)
08335a9a +0x10:  jne    08335aa3 <+0x19>
08335a9c +0x12:  mov    $0x0,%eax
08335aa1 +0x17:  jmp    08335b18 <+0x8e>
08335aa3 +0x19:  mov    0xc(%ebp),%eax
08335aa6 +0x1c:  mov    %eax,(%esp)
08335aa9 +0x1f:  call   08335ca4 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x14a>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x14a
08335aae +0x24:  xor    $0x1,%eax
08335ab1 +0x27:  test   %al,%al
08335ab3 +0x29:  je     08335abc <+0x32>
08335ab5 +0x2b:  mov    $0x0,%eax
08335aba +0x30:  jmp    08335b18 <+0x8e>
08335abc +0x32:  cmpb   $0x0,-0x1c(%ebp)
08335ac0 +0x36:  jns    08335ac9 <+0x3f>
08335ac2 +0x38:  mov    $0x0,%eax
08335ac7 +0x3d:  jmp    08335b18 <+0x8e>
08335ac9 +0x3f:  movsbl -0x1c(%ebp),%edx
08335acd +0x43:  lea    -0x14(%ebp),%eax
08335ad0 +0x46:  mov    %edx,0x8(%esp)
08335ad4 +0x4a:  mov    0x8(%ebp),%edx
08335ad7 +0x4d:  mov    %edx,0x4(%esp)
08335adb +0x51:  mov    %eax,(%esp)
08335ade +0x54:  call   083356a4 <_ZN22CConditionEventManager21_getRequiredParameterEs>  ; CConditionEventManager::_getRequiredParameter(short)
08335ae3 +0x59:  sub    $0x4,%esp
08335ae6 +0x5c:  mov    0xc(%ebp),%eax
08335ae9 +0x5f:  mov    %eax,(%esp)
08335aec +0x62:  call   08335c80 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x126>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x126
08335af1 +0x67:  cwtl
08335af2 +0x68:  mov    %eax,-0xc(%ebp)
08335af5 +0x6b:  mov    -0x14(%ebp),%eax
08335af8 +0x6e:  cmp    $0xffffffff,%eax
08335afb +0x71:  jne    08335b04 <+0x7a>
08335afd +0x73:  mov    $0x0,%eax
08335b02 +0x78:  jmp    08335b18 <+0x8e>
08335b04 +0x7a:  mov    -0x14(%ebp),%eax
08335b07 +0x7d:  cmp    -0xc(%ebp),%eax
08335b0a +0x80:  jge    08335b13 <+0x89>
08335b0c +0x82:  mov    $0x0,%eax
08335b11 +0x87:  jmp    08335b18 <+0x8e>
08335b13 +0x89:  mov    $0x1,%eax
08335b18 +0x8e:  leave
08335b19 +0x8f:  ret
```

## 反编译 C

```c
// CConditionEventManager::CheckErrorCardForStep @ 0x8335a8a

/* CConditionEventManager::CheckErrorCardForStep(CUser*, char) */

undefined4 __thiscall
CConditionEventManager::CheckErrorCardForStep
          (CConditionEventManager *this,CUser *param_1,char param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int local_18 [5];
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::IsProperDungeonUser((CUserCharacInfo *)param_1);
    if (cVar1 == '\x01') {
      if (param_2 < '\0') {
        uVar3 = 0;
      }
      else {
        _getRequiredParameter((short)local_18);
        sVar2 = CUserCharacInfo::GetProperDungeonClearCount((CUserCharacInfo *)param_1);
        if (local_18[0] == -1) {
          uVar3 = 0;
        }
        else if (local_18[0] < sVar2) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
