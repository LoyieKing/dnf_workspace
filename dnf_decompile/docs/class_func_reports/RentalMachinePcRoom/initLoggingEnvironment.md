# initLoggingEnvironment

`_ZN19RentalMachinePcRoom22initLoggingEnvironmentEv`

`RentalMachinePcRoom::initLoggingEnvironment()`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x08270886` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270886  _ZN19RentalMachinePcRoom22initLoggingEnvironmentEv
#           RentalMachinePcRoom::initLoggingEnvironment()
# range [0x08270886, 0x082708cb]
08270886 +0x00:  push   %ebp
08270887 +0x01:  mov    %esp,%ebp
08270889 +0x03:  push   %ebx
0827088a +0x04:  sub    $0x14,%esp
0827088d +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08270892 +0x0c:  mov    %eax,(%esp)
08270895 +0x0f:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0827089a +0x14:  mov    %eax,%ebx
0827089c +0x16:  mov    0x8(%ebp),%eax
0827089f +0x19:  add    $0x4,%eax
082708a2 +0x1c:  mov    %eax,(%esp)
082708a5 +0x1f:  call   08271d8e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3b4>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3b4
082708aa +0x24:  mov    %ebx,0xc(%esp)
082708ae +0x28:  movl   $"./log/%s/dw2_RentalItems",0x8(%esp)
082708b6 +0x30:  movl   $0x103,0x4(%esp)
082708be +0x38:  mov    %eax,(%esp)
082708c1 +0x3b:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
082708c6 +0x40:  add    $0x14,%esp
082708c9 +0x43:  pop    %ebx
082708ca +0x44:  pop    %ebp
082708cb +0x45:  ret
```

## 反编译 C

```c
// RentalMachinePcRoom::initLoggingEnvironment @ 0x8270886

/* RentalMachinePcRoom::initLoggingEnvironment() */

void __thiscall RentalMachinePcRoom::initLoggingEnvironment(RentalMachinePcRoom *this)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  char *pcVar2;
  
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this_00);
  pcVar2 = (char *)std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
                             ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
  OS_API::snprintf(pcVar2,0x103,"./log/%s/dw2_RentalItems",uVar1);
  return;
}
```
