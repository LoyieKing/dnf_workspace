# check_error

`_ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE`

`DisPatcher_AddFriend::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_AddFriend` | `0x081cb274` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cb274  _ZN20DisPatcher_AddFriend11check_errorEP5CUserR8MSG_BASE
#           DisPatcher_AddFriend::check_error(CUser*, MSG_BASE&)
# range [0x081cb274, 0x081cb2e1]
081cb274 +0x00:  push   %ebp
081cb275 +0x01:  mov    %esp,%ebp
081cb277 +0x03:  sub    $0x28,%esp
081cb27a +0x06:  mov    0x10(%ebp),%eax
081cb27d +0x09:  mov    %eax,-0xc(%ebp)
081cb280 +0x0c:  mov    0xc(%ebp),%eax
081cb283 +0x0f:  mov    %eax,(%esp)
081cb286 +0x12:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081cb28b +0x17:  cmp    $0x2,%eax
081cb28e +0x1a:  setle  %al
081cb291 +0x1d:  test   %al,%al
081cb293 +0x1f:  je     081cb29c <+0x28>
081cb295 +0x21:  mov    $0x7fffffff,%eax
081cb29a +0x26:  jmp    081cb2df <+0x6b>
081cb29c +0x28:  mov    -0xc(%ebp),%eax
081cb29f +0x2b:  add    $0x11,%eax
081cb2a2 +0x2e:  test   %eax,%eax
081cb2a4 +0x30:  jne    081cb2ad <+0x39>
081cb2a6 +0x32:  mov    $0x1,%eax
081cb2ab +0x37:  jmp    081cb2df <+0x6b>
081cb2ad +0x39:  mov    0xc(%ebp),%eax
081cb2b0 +0x3c:  mov    %eax,(%esp)
081cb2b3 +0x3f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081cb2b8 +0x44:  mov    -0xc(%ebp),%edx
081cb2bb +0x47:  add    $0x11,%edx
081cb2be +0x4a:  mov    %eax,0x4(%esp)
081cb2c2 +0x4e:  mov    %edx,(%esp)
081cb2c5 +0x51:  call   0807e4e0 <_init+0xdd8>
081cb2ca +0x56:  test   %eax,%eax
081cb2cc +0x58:  sete   %al
081cb2cf +0x5b:  test   %al,%al
081cb2d1 +0x5d:  je     081cb2da <+0x66>
081cb2d3 +0x5f:  mov    $0x1,%eax
081cb2d8 +0x64:  jmp    081cb2df <+0x6b>
081cb2da +0x66:  mov    $0x0,%eax
081cb2df +0x6b:  leave
081cb2e0 +0x6c:  ret
081cb2e1 +0x6d:  nop
```

## 反编译 C

```c
// DisPatcher_AddFriend::check_error @ 0x81cb274

/* DisPatcher_AddFriend::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_AddFriend::check_error(DisPatcher_AddFriend *this,CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *__s2;
  
  iVar1 = CUser::get_state(param_1);
  if (iVar1 < 3) {
    uVar2 = 0x7fffffff;
  }
  else if (param_2 == (MSG_BASE *)0xffffffef) {
    uVar2 = 1;
  }
  else {
    __s2 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    iVar1 = strcmp((char *)(param_2 + 0x11),__s2);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
