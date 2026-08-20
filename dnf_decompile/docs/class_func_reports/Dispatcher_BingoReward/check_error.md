# check_error

`_ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_BingoReward::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoReward` | `0x0825e7b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e7b2  _ZN22Dispatcher_BingoReward11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_BingoReward::check_error(CUser*, MSG_BASE&)
# range [0x0825e7b2, 0x0825e879]
0825e7b2 +0x00:  push   %ebp
0825e7b3 +0x01:  mov    %esp,%ebp
0825e7b5 +0x03:  sub    $0x18,%esp
0825e7b8 +0x06:  cmpl   $0x0,0xc(%ebp)
0825e7bc +0x0a:  je     0825e7cd <+0x1b>
0825e7be +0x0c:  mov    0xc(%ebp),%eax
0825e7c1 +0x0f:  mov    %eax,(%esp)
0825e7c4 +0x12:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0825e7c9 +0x17:  test   %eax,%eax
0825e7cb +0x19:  jne    0825e7d4 <+0x22>
0825e7cd +0x1b:  mov    $0x1,%eax
0825e7d2 +0x20:  jmp    0825e7d9 <+0x27>
0825e7d4 +0x22:  mov    $0x0,%eax
0825e7d9 +0x27:  test   %al,%al
0825e7db +0x29:  je     0825e7e7 <+0x35>
0825e7dd +0x2b:  mov    $0xffffffff,%eax
0825e7e2 +0x30:  jmp    0825e878 <+0xc6>
0825e7e7 +0x35:  mov    0xc(%ebp),%eax
0825e7ea +0x38:  mov    %eax,(%esp)
0825e7ed +0x3b:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825e7f2 +0x40:  cmp    $0x3,%eax
0825e7f5 +0x43:  setne  %al
0825e7f8 +0x46:  test   %al,%al
0825e7fa +0x48:  je     0825e803 <+0x51>
0825e7fc +0x4a:  mov    $0x1e,%eax
0825e801 +0x4f:  jmp    0825e878 <+0xc6>
0825e803 +0x51:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0825e808 +0x56:  movl   $0x6a,0x4(%esp)
0825e810 +0x5e:  mov    %eax,(%esp)
0825e813 +0x61:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0825e818 +0x66:  mov    (%eax),%edx
0825e81a +0x68:  add    $0x34,%edx
0825e81d +0x6b:  mov    (%edx),%edx
0825e81f +0x6d:  movl   $0x0,0x4(%esp)
0825e827 +0x75:  mov    %eax,(%esp)
0825e82a +0x78:  call   *%edx
0825e82c +0x7a:  xor    $0x1,%eax
0825e82f +0x7d:  test   %al,%al
0825e831 +0x7f:  je     0825e83a <+0x88>
0825e833 +0x81:  mov    $0x13,%eax
0825e838 +0x86:  jmp    0825e878 <+0xc6>
0825e83a +0x88:  mov    0xc(%ebp),%eax
0825e83d +0x8b:  mov    %eax,(%esp)
0825e840 +0x8e:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825e845 +0x93:  movzbl 0x5(%eax),%eax
0825e849 +0x97:  test   %al,%al
0825e84b +0x99:  je     0825e854 <+0xa2>
0825e84d +0x9b:  mov    $0x12,%eax
0825e852 +0xa0:  jmp    0825e878 <+0xc6>
0825e854 +0xa2:  mov    0xc(%ebp),%eax
0825e857 +0xa5:  mov    %eax,(%esp)
0825e85a +0xa8:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825e85f +0xad:  movzbl 0x4(%eax),%eax
0825e863 +0xb1:  cmp    $0x2,%al
0825e865 +0xb3:  setle  %al
0825e868 +0xb6:  test   %al,%al
0825e86a +0xb8:  je     0825e873 <+0xc1>
0825e86c +0xba:  mov    $0x16,%eax
0825e871 +0xbf:  jmp    0825e878 <+0xc6>
0825e873 +0xc1:  mov    $0x0,%eax
0825e878 +0xc6:  leave
0825e879 +0xc7:  ret
```

## 反编译 C

```c
// Dispatcher_BingoReward::check_error @ 0x825e7b2

/* Dispatcher_BingoReward::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_BingoReward::check_error(CUser *param_1,MSG_BASE *param_2)

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
      goto LAB_0825e7d9;
    }
  }
  bVar1 = true;
LAB_0825e7d9:
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
            uVar4 = 0x16;
          }
          else {
            uVar4 = 0;
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
