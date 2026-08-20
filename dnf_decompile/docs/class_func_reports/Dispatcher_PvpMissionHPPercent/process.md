# process

`_ZN30Dispatcher_PvpMissionHPPercent7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PvpMissionHPPercent::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvpMissionHPPercent` | `0x081d5864` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5864  _ZN30Dispatcher_PvpMissionHPPercent7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PvpMissionHPPercent::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d5864, 0x081d58d5]
081d5864 +0x00:  push   %ebp
081d5865 +0x01:  mov    %esp,%ebp
081d5867 +0x03:  sub    $0x28,%esp
081d586a +0x06:  mov    0xc(%ebp),%eax
081d586d +0x09:  mov    %eax,(%esp)
081d5870 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d5875 +0x11:  test   %eax,%eax
081d5877 +0x13:  sete   %al
081d587a +0x16:  test   %al,%al
081d587c +0x18:  je     081d58a4 <+0x40>
081d587e +0x1a:  movl   $0x0,0xc(%esp)
081d5886 +0x22:  movl   $0x0,0x8(%esp)
081d588e +0x2a:  movl   $&_ZZN30Dispatcher_PvpMissionHPPercent7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5896 +0x32:  movl   $0x3930,(%esp)
081d589d +0x39:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d58a2 +0x3e:  jmp    081d58d4 <+0x70>
081d58a4 +0x40:  mov    0x10(%ebp),%eax
081d58a7 +0x43:  mov    %eax,-0x10(%ebp)
081d58aa +0x46:  mov    0x14(%ebp),%eax
081d58ad +0x49:  mov    %eax,-0xc(%ebp)
081d58b0 +0x4c:  mov    -0xc(%ebp),%eax
081d58b3 +0x4f:  lea    0x4(%eax),%edx
081d58b6 +0x52:  mov    -0x10(%ebp),%eax
081d58b9 +0x55:  add    $0xe,%eax
081d58bc +0x58:  mov    %edx,0x8(%esp)
081d58c0 +0x5c:  mov    %eax,0x4(%esp)
081d58c4 +0x60:  mov    0xc(%ebp),%eax
081d58c7 +0x63:  mov    %eax,(%esp)
081d58ca +0x66:  call   086625c8 <_ZN5CUser22UpdateMissionConditionERSt6vectorIsSaIsEERS0_IiSaIiEE>  ; CUser::UpdateMissionCondition(std::vector<short, std::allocator<short> >&, std::vector<int, std::allocator<int> >&)
081d58cf +0x6b:  mov    $0x0,%eax
081d58d4 +0x70:  leave
081d58d5 +0x71:  ret
```

## 反编译 C

```c
// Dispatcher_PvpMissionHPPercent::process @ 0x81d5864

/* Dispatcher_PvpMissionHPPercent::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PvpMissionHPPercent::process
          (Dispatcher_PvpMissionHPPercent *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar1 == 0) {
    uVar2 = LineFunc(0x3930,
                     "virtual int Dispatcher_PvpMissionHPPercent::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0,0);
  }
  else {
    CUser::UpdateMissionCondition(param_1,(vector *)(param_2 + 0xe),(vector *)(param_3 + 4));
    uVar2 = 0;
  }
  return uVar2;
}
```
