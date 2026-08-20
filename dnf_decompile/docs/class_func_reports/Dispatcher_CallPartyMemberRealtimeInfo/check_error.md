# check_error

`_ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallPartyMemberRealtimeInfo` | `0x081ce398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce398  _ZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&)
# range [0x081ce398, 0x081ce3ed]
081ce398 +0x00:  push   %ebp
081ce399 +0x01:  mov    %esp,%ebp
081ce39b +0x03:  sub    $0x18,%esp
081ce39e +0x06:  cmpl   $0x0,0xc(%ebp)
081ce3a2 +0x0a:  jne    081ce3ca <+0x32>
081ce3a4 +0x0c:  movl   $0x0,0xc(%esp)
081ce3ac +0x14:  movl   $0x0,0x8(%esp)
081ce3b4 +0x1c:  movl   $&_ZZN38Dispatcher_CallPartyMemberRealtimeInfo11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081ce3bc +0x24:  movl   $0x2781,(%esp)
081ce3c3 +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce3c8 +0x30:  jmp    081ce3eb <+0x53>
081ce3ca +0x32:  mov    0xc(%ebp),%eax
081ce3cd +0x35:  mov    %eax,(%esp)
081ce3d0 +0x38:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ce3d5 +0x3d:  cmp    $0x3,%eax
081ce3d8 +0x40:  setne  %al
081ce3db +0x43:  test   %al,%al
081ce3dd +0x45:  je     081ce3e6 <+0x4e>
081ce3df +0x47:  mov    $0xffffffff,%eax
081ce3e4 +0x4c:  jmp    081ce3eb <+0x53>
081ce3e6 +0x4e:  mov    $0x0,%eax
081ce3eb +0x53:  leave
081ce3ec +0x54:  ret
081ce3ed +0x55:  nop
```

## 反编译 C

```c
// Dispatcher_CallPartyMemberRealtimeInfo::check_error @ 0x81ce398

/* Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x2781,
                     "int Dispatcher_CallPartyMemberRealtimeInfo::check_error(CUser*, MSG_BASE&)",0,
                     0);
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 == 3) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
