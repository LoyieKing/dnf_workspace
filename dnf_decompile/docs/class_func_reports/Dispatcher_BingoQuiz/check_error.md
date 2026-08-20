# check_error

`_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_BingoQuiz::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoQuiz` | `0x0825eaca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825eaca  _ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_BingoQuiz::check_error(CUser*, MSG_BASE&)
# range [0x0825eaca, 0x0825eb91]
0825eaca +0x00:  push   %ebp
0825eacb +0x01:  mov    %esp,%ebp
0825eacd +0x03:  sub    $0x18,%esp
0825ead0 +0x06:  cmpl   $0x0,0xc(%ebp)
0825ead4 +0x0a:  je     0825eae5 <+0x1b>
0825ead6 +0x0c:  mov    0xc(%ebp),%eax
0825ead9 +0x0f:  mov    %eax,(%esp)
0825eadc +0x12:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0825eae1 +0x17:  test   %eax,%eax
0825eae3 +0x19:  jne    0825eaec <+0x22>
0825eae5 +0x1b:  mov    $0x1,%eax
0825eaea +0x20:  jmp    0825eaf1 <+0x27>
0825eaec +0x22:  mov    $0x0,%eax
0825eaf1 +0x27:  test   %al,%al
0825eaf3 +0x29:  je     0825eaff <+0x35>
0825eaf5 +0x2b:  mov    $0xffffffff,%eax
0825eafa +0x30:  jmp    0825eb90 <+0xc6>
0825eaff +0x35:  mov    0xc(%ebp),%eax
0825eb02 +0x38:  mov    %eax,(%esp)
0825eb05 +0x3b:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825eb0a +0x40:  cmp    $0x3,%eax
0825eb0d +0x43:  setne  %al
0825eb10 +0x46:  test   %al,%al
0825eb12 +0x48:  je     0825eb1b <+0x51>
0825eb14 +0x4a:  mov    $0x1e,%eax
0825eb19 +0x4f:  jmp    0825eb90 <+0xc6>
0825eb1b +0x51:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0825eb20 +0x56:  movl   $0x6a,0x4(%esp)
0825eb28 +0x5e:  mov    %eax,(%esp)
0825eb2b +0x61:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0825eb30 +0x66:  mov    (%eax),%edx
0825eb32 +0x68:  add    $0x34,%edx
0825eb35 +0x6b:  mov    (%edx),%edx
0825eb37 +0x6d:  movl   $0x0,0x4(%esp)
0825eb3f +0x75:  mov    %eax,(%esp)
0825eb42 +0x78:  call   *%edx
0825eb44 +0x7a:  xor    $0x1,%eax
0825eb47 +0x7d:  test   %al,%al
0825eb49 +0x7f:  je     0825eb52 <+0x88>
0825eb4b +0x81:  mov    $0x13,%eax
0825eb50 +0x86:  jmp    0825eb90 <+0xc6>
0825eb52 +0x88:  mov    0xc(%ebp),%eax
0825eb55 +0x8b:  mov    %eax,(%esp)
0825eb58 +0x8e:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825eb5d +0x93:  movzbl 0x5(%eax),%eax
0825eb61 +0x97:  test   %al,%al
0825eb63 +0x99:  je     0825eb6c <+0xa2>
0825eb65 +0x9b:  mov    $0x12,%eax
0825eb6a +0xa0:  jmp    0825eb90 <+0xc6>
0825eb6c +0xa2:  mov    0xc(%ebp),%eax
0825eb6f +0xa5:  mov    %eax,(%esp)
0825eb72 +0xa8:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825eb77 +0xad:  movzbl 0x4(%eax),%eax
0825eb7b +0xb1:  cmp    $0x2,%al
0825eb7d +0xb3:  setg   %al
0825eb80 +0xb6:  test   %al,%al
0825eb82 +0xb8:  je     0825eb8b <+0xc1>
0825eb84 +0xba:  mov    $0x16,%eax
0825eb89 +0xbf:  jmp    0825eb90 <+0xc6>
0825eb8b +0xc1:  mov    $0x0,%eax
0825eb90 +0xc6:  leave
0825eb91 +0xc7:  ret
```

## 反编译 C

```c
// Dispatcher_BingoQuiz::check_error @ 0x825eaca

/* Dispatcher_BingoQuiz::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_BingoQuiz::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != (MSG_BASE *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0825eaf1;
    }
  }
  bVar1 = true;
LAB_0825eaf1:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 3) {
      piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      cVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
      if (cVar2 == '\x01') {
        iVar3 = CUser::getBingoData((CUser *)param_2);
        if (*(char *)(iVar3 + 5) == '\0') {
          iVar3 = CUser::getBingoData((CUser *)param_2);
          if (*(char *)(iVar3 + 4) < '\x03') {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x16;
          }
        }
        else {
          uVar4 = 0x12;
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
    else {
      uVar4 = 0x1e;
    }
  }
  return uVar4;
}
```
