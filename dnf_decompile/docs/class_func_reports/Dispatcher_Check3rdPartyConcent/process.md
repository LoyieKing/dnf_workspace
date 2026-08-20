# process

`_ZN31Dispatcher_Check3rdPartyConcent7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Check3rdPartyConcent::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Check3rdPartyConcent` | `0x081df3d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df3d0  _ZN31Dispatcher_Check3rdPartyConcent7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Check3rdPartyConcent::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081df3d0, 0x081df421]
081df3d0 +0x00:  push   %ebp
081df3d1 +0x01:  mov    %esp,%ebp
081df3d3 +0x03:  push   %ebx
081df3d4 +0x04:  sub    $0x14,%esp
081df3d7 +0x07:  mov    0xc(%ebp),%eax
081df3da +0x0a:  mov    %eax,(%esp)
081df3dd +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081df3e2 +0x12:  cmp    $0x3,%eax
081df3e5 +0x15:  setne  %al
081df3e8 +0x18:  test   %al,%al
081df3ea +0x1a:  je     081df3f3 <+0x23>
081df3ec +0x1c:  mov    $0x0,%eax
081df3f1 +0x21:  jmp    081df41c <+0x4c>
081df3f3 +0x23:  mov    0xc(%ebp),%eax
081df3f6 +0x26:  mov    %eax,(%esp)
081df3f9 +0x29:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081df3fe +0x2e:  mov    %eax,%ebx
081df400 +0x30:  mov    0xc(%ebp),%eax
081df403 +0x33:  mov    %eax,(%esp)
081df406 +0x36:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081df40b +0x3b:  mov    %ebx,0x4(%esp)
081df40f +0x3f:  mov    %eax,(%esp)
081df412 +0x42:  call   084460c0 <_ZN23DB_Check3rdPartyConcent11makeRequestEij>  ; DB_Check3rdPartyConcent::makeRequest(int, unsigned int)
081df417 +0x47:  mov    $0x0,%eax
081df41c +0x4c:  add    $0x14,%esp
081df41f +0x4f:  pop    %ebx
081df420 +0x50:  pop    %ebp
081df421 +0x51:  ret
```

## 反编译 C

```c
// Dispatcher_Check3rdPartyConcent::process @ 0x81df3d0

/* Dispatcher_Check3rdPartyConcent::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Check3rdPartyConcent::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 3) {
    uVar2 = CUser::get_acc_id((CUser *)param_2);
    iVar1 = CUser::GetUID((CUser *)param_2);
    DB_Check3rdPartyConcent::makeRequest(iVar1,uVar2);
  }
  return 0;
}
```
