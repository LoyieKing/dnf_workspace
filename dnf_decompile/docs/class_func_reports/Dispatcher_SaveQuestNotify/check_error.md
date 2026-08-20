# check_error

`_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SaveQuestNotify::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveQuestNotify` | `0x0825eec4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825eec4  _ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SaveQuestNotify::check_error(CUser*, MSG_BASE&)
# range [0x0825eec4, 0x0825ef77]
0825eec4 +0x00:  push   %ebp
0825eec5 +0x01:  mov    %esp,%ebp
0825eec7 +0x03:  push   %ebx
0825eec8 +0x04:  sub    $0x24,%esp
0825eecb +0x07:  cmpl   $0x0,0xc(%ebp)
0825eecf +0x0b:  je     0825eee0 <+0x1c>
0825eed1 +0x0d:  mov    0xc(%ebp),%eax
0825eed4 +0x10:  mov    %eax,(%esp)
0825eed7 +0x13:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0825eedc +0x18:  test   %eax,%eax
0825eede +0x1a:  jne    0825eee7 <+0x23>
0825eee0 +0x1c:  mov    $0x1,%eax
0825eee5 +0x21:  jmp    0825eeec <+0x28>
0825eee7 +0x23:  mov    $0x0,%eax
0825eeec +0x28:  test   %al,%al
0825eeee +0x2a:  je     0825eef7 <+0x33>
0825eef0 +0x2c:  mov    $0xffffffff,%eax
0825eef5 +0x31:  jmp    0825ef72 <+0xae>
0825eef7 +0x33:  mov    0xc(%ebp),%eax
0825eefa +0x36:  mov    %eax,(%esp)
0825eefd +0x39:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825ef02 +0x3e:  cmp    $0x2,%eax
0825ef05 +0x41:  setle  %al
0825ef08 +0x44:  test   %al,%al
0825ef0a +0x46:  je     0825ef13 <+0x4f>
0825ef0c +0x48:  mov    $0xfffffffe,%eax
0825ef11 +0x4d:  jmp    0825ef72 <+0xae>
0825ef13 +0x4f:  mov    0x10(%ebp),%eax
0825ef16 +0x52:  mov    %eax,-0x14(%ebp)
0825ef19 +0x55:  movl   $0x0,-0x10(%ebp)
0825ef20 +0x5c:  jmp    0825ef62 <+0x9e>
0825ef22 +0x5e:  mov    -0x10(%ebp),%edx
0825ef25 +0x61:  mov    -0x14(%ebp),%eax
0825ef28 +0x64:  mov    0xd(%eax,%edx,4),%eax
0825ef2c +0x68:  test   %eax,%eax
0825ef2e +0x6a:  je     0825ef5d <+0x99>
0825ef30 +0x6c:  mov    -0x10(%ebp),%edx
0825ef33 +0x6f:  mov    -0x14(%ebp),%eax
0825ef36 +0x72:  mov    0xd(%eax,%edx,4),%eax
0825ef3a +0x76:  mov    %eax,%ebx
0825ef3c +0x78:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0825ef41 +0x7d:  mov    %ebx,0x4(%esp)
0825ef45 +0x81:  mov    %eax,(%esp)
0825ef48 +0x84:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
0825ef4d +0x89:  mov    %eax,-0xc(%ebp)
0825ef50 +0x8c:  cmpl   $0x0,-0xc(%ebp)
0825ef54 +0x90:  jne    0825ef5e <+0x9a>
0825ef56 +0x92:  mov    $0xfffffffd,%eax
0825ef5b +0x97:  jmp    0825ef72 <+0xae>
0825ef5d +0x99:  nop
0825ef5e +0x9a:  addl   $0x1,-0x10(%ebp)
0825ef62 +0x9e:  cmpl   $0x9,-0x10(%ebp)
0825ef66 +0xa2:  setle  %al
0825ef69 +0xa5:  test   %al,%al
0825ef6b +0xa7:  jne    0825ef22 <+0x5e>
0825ef6d +0xa9:  mov    $0x0,%eax
0825ef72 +0xae:  add    $0x24,%esp
0825ef75 +0xb1:  pop    %ebx
0825ef76 +0xb2:  pop    %ebp
0825ef77 +0xb3:  ret
```

## 反编译 C

```c
// Dispatcher_SaveQuestNotify::check_error @ 0x825eec4

/* Dispatcher_SaveQuestNotify::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveQuestNotify::check_error
          (Dispatcher_SaveQuestNotify *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_14;
  
  if ((param_1 == (CUser *)0x0) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar3 = 0xfffffffe;
    }
    else {
      for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
        if (*(int *)(param_2 + local_14 * 4 + 0xd) != 0) {
          iVar2 = G_CDataManager();
          iVar2 = CDataManager::find_quest(iVar2);
          if (iVar2 == 0) {
            return 0xfffffffd;
          }
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
