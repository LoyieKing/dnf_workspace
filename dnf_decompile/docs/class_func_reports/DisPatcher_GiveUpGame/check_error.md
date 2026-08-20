# check_error

`_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_GiveUpGame::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_GiveUpGame` | `0x081c41e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c41e8  _ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_GiveUpGame::check_error(CUser*, MSG_BASE&)
# range [0x081c41e8, 0x081c424b]
081c41e8 +0x00:  push   %ebp
081c41e9 +0x01:  mov    %esp,%ebp
081c41eb +0x03:  sub    $0x18,%esp
081c41ee +0x06:  mov    0xc(%ebp),%eax
081c41f1 +0x09:  mov    %eax,(%esp)
081c41f4 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c41f9 +0x11:  cmp    $0x5,%eax
081c41fc +0x14:  je     081c4235 <+0x4d>
081c41fe +0x16:  mov    0xc(%ebp),%eax
081c4201 +0x19:  mov    %eax,(%esp)
081c4204 +0x1c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c4209 +0x21:  cmp    $0xa,%eax
081c420c +0x24:  je     081c4235 <+0x4d>
081c420e +0x26:  mov    0xc(%ebp),%eax
081c4211 +0x29:  mov    %eax,(%esp)
081c4214 +0x2c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c4219 +0x31:  cmp    $0xc,%eax
081c421c +0x34:  je     081c4235 <+0x4d>
081c421e +0x36:  mov    0xc(%ebp),%eax
081c4221 +0x39:  mov    %eax,(%esp)
081c4224 +0x3c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c4229 +0x41:  cmp    $0xd,%eax
081c422c +0x44:  je     081c4235 <+0x4d>
081c422e +0x46:  mov    $0x1,%eax
081c4233 +0x4b:  jmp    081c423a <+0x52>
081c4235 +0x4d:  mov    $0x0,%eax
081c423a +0x52:  test   %al,%al
081c423c +0x54:  je     081c4245 <+0x5d>
081c423e +0x56:  mov    $0x13,%eax
081c4243 +0x5b:  jmp    081c424a <+0x62>
081c4245 +0x5d:  mov    $0x0,%eax
081c424a +0x62:  leave
081c424b +0x63:  ret
```

## 反编译 C

```c
// DisPatcher_GiveUpGame::check_error @ 0x81c41e8

/* DisPatcher_GiveUpGame::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_GiveUpGame::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 5) {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 != 10) {
      iVar2 = CUser::get_state((CUser *)param_2);
      if (iVar2 != 0xc) {
        iVar2 = CUser::get_state((CUser *)param_2);
        if (iVar2 != 0xd) {
          bVar1 = true;
          goto LAB_081c423a;
        }
      }
    }
  }
  bVar1 = false;
LAB_081c423a:
  if (bVar1) {
    uVar3 = 0x13;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
