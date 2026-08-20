# process

`_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseRightOfChangeGrowType` | `0x0825dc64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825dc64  _ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825dc64, 0x0825dd83]
0825dc64 +0x000:  push   %ebp
0825dc65 +0x001:  mov    %esp,%ebp
0825dc67 +0x003:  sub    $0x38,%esp
0825dc6a +0x006:  mov    0x14(%ebp),%eax
0825dc6d +0x009:  mov    %eax,-0x14(%ebp)
0825dc70 +0x00c:  mov    0x10(%ebp),%eax
0825dc73 +0x00f:  mov    %eax,0x8(%esp)
0825dc77 +0x013:  mov    0xc(%ebp),%eax
0825dc7a +0x016:  mov    %eax,0x4(%esp)
0825dc7e +0x01a:  mov    0x8(%ebp),%eax
0825dc81 +0x01d:  mov    %eax,(%esp)
0825dc84 +0x020:  call   0825dd84 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_UseRightOfChangeGrowType::check_error(CUser*, MSG_BASE&)
0825dc89 +0x025:  mov    -0x14(%ebp),%edx
0825dc8c +0x028:  mov    %eax,0x4(%edx)
0825dc8f +0x02b:  mov    -0x14(%ebp),%eax
0825dc92 +0x02e:  mov    0x4(%eax),%eax
0825dc95 +0x031:  test   %eax,%eax
0825dc97 +0x033:  jle    0825dca3 <+0x3f>
0825dc99 +0x035:  mov    $0x0,%eax
0825dc9e +0x03a:  jmp    0825dd81 <+0x11d>
0825dca3 +0x03f:  mov    -0x14(%ebp),%eax
0825dca6 +0x042:  mov    0x4(%eax),%eax
0825dca9 +0x045:  test   %eax,%eax
0825dcab +0x047:  jns    0825dd09 <+0xa5>
0825dcad +0x049:  mov    -0x14(%ebp),%eax
0825dcb0 +0x04c:  mov    0x4(%eax),%eax
0825dcb3 +0x04f:  mov    %eax,0x14(%esp)
0825dcb7 +0x053:  movl   $"Dispatcher Check_Error No(%d)",0x10(%esp)
0825dcbf +0x05b:  movl   $0x93,0xc(%esp)
0825dcc7 +0x063:  movl   $&_ZZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
0825dccf +0x06b:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825dcd7 +0x073:  movl   $0x1,(%esp)
0825dcde +0x07a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825dce3 +0x07f:  movl   $0x0,0xc(%esp)
0825dceb +0x087:  movl   $0x0,0x8(%esp)
0825dcf3 +0x08f:  movl   $&_ZZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
0825dcfb +0x097:  movl   $0x94,(%esp)
0825dd02 +0x09e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825dd07 +0x0a3:  jmp    0825dd81 <+0x11d>
0825dd09 +0x0a5:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0825dd0e +0x0aa:  movl   $0x2a,0x8(%esp)
0825dd16 +0x0b2:  mov    0xc(%ebp),%edx
0825dd19 +0x0b5:  mov    %edx,0x4(%esp)
0825dd1d +0x0b9:  mov    %eax,(%esp)
0825dd20 +0x0bc:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0825dd25 +0x0c1:  mov    %eax,-0x10(%ebp)
0825dd28 +0x0c4:  cmpl   $0x0,-0x10(%ebp)
0825dd2c +0x0c8:  je     0825dd3e <+0xda>
0825dd2e +0x0ca:  mov    -0x14(%ebp),%eax
0825dd31 +0x0cd:  mov    -0x10(%ebp),%edx
0825dd34 +0x0d0:  mov    %edx,0x4(%eax)
0825dd37 +0x0d3:  mov    $0x0,%eax
0825dd3c +0x0d8:  jmp    0825dd81 <+0x11d>
0825dd3e +0x0da:  mov    0x10(%ebp),%eax
0825dd41 +0x0dd:  mov    %eax,-0xc(%ebp)
0825dd44 +0x0e0:  mov    -0xc(%ebp),%eax
0825dd47 +0x0e3:  movzwl 0xd(%eax),%eax
0825dd4b +0x0e7:  movswl %ax,%edx
0825dd4e +0x0ea:  mov    -0xc(%ebp),%eax
0825dd51 +0x0ed:  movzbl 0xf(%eax),%eax
0825dd55 +0x0f1:  movsbl %al,%eax
0825dd58 +0x0f4:  mov    %edx,0x8(%esp)
0825dd5c +0x0f8:  mov    %eax,0x4(%esp)
0825dd60 +0x0fc:  mov    0xc(%ebp),%eax
0825dd63 +0x0ff:  mov    %eax,(%esp)
0825dd66 +0x102:  call   0867b196 <_ZN5CUser19ChangeGrowType_ItemEis>  ; CUser::ChangeGrowType_Item(int, short)
0825dd6b +0x107:  mov    -0x14(%ebp),%edx
0825dd6e +0x10a:  mov    %eax,0x4(%edx)
0825dd71 +0x10d:  mov    0xc(%ebp),%eax
0825dd74 +0x110:  mov    %eax,(%esp)
0825dd77 +0x113:  call   08650aa2 <_ZN5CUser15_SaveCharacDataEv>  ; CUser::_SaveCharacData()
0825dd7c +0x118:  mov    $0x0,%eax
0825dd81 +0x11d:  leave
0825dd82 +0x11e:  ret
0825dd83 +0x11f:  nop
```

## 反编译 C

```c
// Dispatcher_UseRightOfChangeGrowType::process @ 0x825dc64

/* Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseRightOfChangeGrowType::process
          (Dispatcher_UseRightOfChangeGrowType *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x93,"Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = LineFunc(0x94,
                       "virtual int Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      iVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
      if (iVar2 == 0) {
        uVar1 = CUser::ChangeGrowType_Item
                          (param_1,(int)(char)param_2[0xf],*(short *)(param_2 + 0xd));
        *(undefined4 *)(param_3 + 4) = uVar1;
        CUser::_SaveCharacData(param_1);
        uVar1 = 0;
      }
      else {
        *(int *)(param_3 + 4) = iVar2;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
