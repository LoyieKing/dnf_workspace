# ProcessIPGUserDataJpnEx

`_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream`

`ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x081783ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081783ea  _ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream
#           ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
# range [0x081783ea, 0x081784d3]
081783ea +0x00:  push   %ebp
081783eb +0x01:  mov    %esp,%ebp
081783ed +0x03:  sub    $0x28,%esp
081783f0 +0x06:  cmpl   $0x0,0xc(%ebp)
081783f4 +0x0a:  je     081784d0 <+0xe6>
081783fa +0x10:  mov    0x14(%ebp),%eax
081783fd +0x13:  mov    0x1c(%eax),%eax
08178400 +0x16:  cmp    $0x4,%eax
08178403 +0x19:  jne    08178431 <+0x47>
08178405 +0x1b:  mov    0x18(%ebp),%eax
08178408 +0x1e:  mov    %eax,0x10(%esp)
0817840c +0x22:  mov    0x14(%ebp),%eax
0817840f +0x25:  mov    %eax,0xc(%esp)
08178413 +0x29:  mov    0x10(%ebp),%eax
08178416 +0x2c:  mov    %eax,0x8(%esp)
0817841a +0x30:  mov    0xc(%ebp),%eax
0817841d +0x33:  mov    %eax,0x4(%esp)
08178421 +0x37:  mov    0x8(%ebp),%eax
08178424 +0x3a:  mov    %eax,(%esp)
08178427 +0x3d:  call   081784d4 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>  ; ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
0817842c +0x42:  jmp    081784d1 <+0xe7>
08178431 +0x47:  mov    0x14(%ebp),%eax
08178434 +0x4a:  mov    0x1c(%eax),%eax
08178437 +0x4d:  test   %eax,%eax
08178439 +0x4f:  jne    08178464 <+0x7a>
0817843b +0x51:  mov    0x18(%ebp),%eax
0817843e +0x54:  mov    %eax,0x10(%esp)
08178442 +0x58:  mov    0x14(%ebp),%eax
08178445 +0x5b:  mov    %eax,0xc(%esp)
08178449 +0x5f:  mov    0x10(%ebp),%eax
0817844c +0x62:  mov    %eax,0x8(%esp)
08178450 +0x66:  mov    0xc(%ebp),%eax
08178453 +0x69:  mov    %eax,0x4(%esp)
08178457 +0x6d:  mov    0x8(%ebp),%eax
0817845a +0x70:  mov    %eax,(%esp)
0817845d +0x73:  call   0817866c <_ZN18ItemVendingMachine22ProcessIPG_ResultInputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>  ; ItemVendingMachine::ProcessIPG_ResultInput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
08178462 +0x78:  jmp    081784d1 <+0xe7>
08178464 +0x7a:  mov    0x14(%ebp),%eax
08178467 +0x7d:  mov    0x1c(%eax),%eax
0817846a +0x80:  cmp    $0x2,%eax
0817846d +0x83:  jne    08178498 <+0xae>
0817846f +0x85:  mov    0x18(%ebp),%eax
08178472 +0x88:  mov    %eax,0x10(%esp)
08178476 +0x8c:  mov    0x14(%ebp),%eax
08178479 +0x8f:  mov    %eax,0xc(%esp)
0817847d +0x93:  mov    0x10(%ebp),%eax
08178480 +0x96:  mov    %eax,0x8(%esp)
08178484 +0x9a:  mov    0xc(%ebp),%eax
08178487 +0x9d:  mov    %eax,0x4(%esp)
0817848b +0xa1:  mov    0x8(%ebp),%eax
0817848e +0xa4:  mov    %eax,(%esp)
08178491 +0xa7:  call   08178676 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>  ; ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
08178496 +0xac:  jmp    081784d1 <+0xe7>
08178498 +0xae:  mov    0x14(%ebp),%eax
0817849b +0xb1:  mov    0x1c(%eax),%eax
0817849e +0xb4:  mov    %eax,0x14(%esp)
081784a2 +0xb8:  movl   $"Unhandled reply from BModule is %d",0x10(%esp)
081784aa +0xc0:  movl   $0x482,0xc(%esp)
081784b2 +0xc8:  movl   $&_ZZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
081784ba +0xd0:  movl   $"localjapan/AppendVendingMachine.cpp",0x4(%esp)
081784c2 +0xd8:  movl   $0x1,(%esp)
081784c9 +0xdf:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081784ce +0xe4:  jmp    081784d1 <+0xe7>
081784d0 +0xe6:  nop
081784d1 +0xe7:  leave
081784d2 +0xe8:  ret
081784d3 +0xe9:  nop
```

## 反编译 C

```c
// ItemVendingMachine::ProcessIPGUserDataJpnEx @ 0x81783ea

/* ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
ItemVendingMachine::ProcessIPGUserDataJpnEx
          (ItemVendingMachine *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,
          Stream *param_4)

{
  if (param_1 != (CUser *)0x0) {
    if (*(int *)(param_3 + 0x1c) == 4) {
      ProcessIPG_ResultQuery((CUser *)this,(SIPGData *)param_1,param_2,(Stream *)param_3);
    }
    else if (*(int *)(param_3 + 0x1c) == 0) {
      ProcessIPG_ResultInput((CUser *)this,(SIPGData *)param_1,param_2,(Stream *)param_3);
    }
    else if (*(int *)(param_3 + 0x1c) == 2) {
      ProcessIPG_ResultOutput(this,param_1,param_2,param_3,param_4);
    }
    else {
      LogManager::logFormat
                (1,"localjapan/AppendVendingMachine.cpp",
                 "void ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                 ,0x482,"Unhandled reply from BModule is %d",*(undefined4 *)(param_3 + 0x1c));
    }
  }
  return;
}
```
