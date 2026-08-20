# initLoggingEnvironment

`_ZN22RentalMachineDimension22initLoggingEnvironmentEv`

`RentalMachineDimension::initLoggingEnvironment()`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826efdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826efdc  _ZN22RentalMachineDimension22initLoggingEnvironmentEv
#           RentalMachineDimension::initLoggingEnvironment()
# range [0x0826efdc, 0x0826f021]
0826efdc +0x00:  push   %ebp
0826efdd +0x01:  mov    %esp,%ebp
0826efdf +0x03:  push   %ebx
0826efe0 +0x04:  sub    $0x14,%esp
0826efe3 +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0826efe8 +0x0c:  mov    %eax,(%esp)
0826efeb +0x0f:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
0826eff0 +0x14:  mov    %eax,%ebx
0826eff2 +0x16:  mov    0x8(%ebp),%eax
0826eff5 +0x19:  add    $0x4,%eax
0826eff8 +0x1c:  mov    %eax,(%esp)
0826effb +0x1f:  call   0826fbee <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1f0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1f0
0826f000 +0x24:  mov    %ebx,0xc(%esp)
0826f004 +0x28:  movl   $"./log/%s/dw2_RentalItems",0x8(%esp)
0826f00c +0x30:  movl   $0x103,0x4(%esp)
0826f014 +0x38:  mov    %eax,(%esp)
0826f017 +0x3b:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0826f01c +0x40:  add    $0x14,%esp
0826f01f +0x43:  pop    %ebx
0826f020 +0x44:  pop    %ebp
0826f021 +0x45:  ret
```

## 反编译 C

```c
// RentalMachineDimension::initLoggingEnvironment @ 0x826efdc

/* RentalMachineDimension::initLoggingEnvironment() */

void __thiscall RentalMachineDimension::initLoggingEnvironment(RentalMachineDimension *this)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  char *pcVar2;
  
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_file_name(this_00);
  pcVar2 = (char *)std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
                             ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)
                              (this + 4));
  OS_API::snprintf(pcVar2,0x103,"./log/%s/dw2_RentalItems",uVar1);
  return;
}
```
