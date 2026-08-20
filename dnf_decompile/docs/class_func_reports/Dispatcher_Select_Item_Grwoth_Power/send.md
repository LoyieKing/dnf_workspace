# send

`_ZN35Dispatcher_Select_Item_Grwoth_Power4sendEP5CUserR9ParamBase`

`Dispatcher_Select_Item_Grwoth_Power::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Select_Item_Grwoth_Power` | `0x081dbc66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dbc66  _ZN35Dispatcher_Select_Item_Grwoth_Power4sendEP5CUserR9ParamBase
#           Dispatcher_Select_Item_Grwoth_Power::send(CUser*, ParamBase&)
# range [0x081dbc66, 0x081dbccd]
081dbc66 +0x00:  push   %ebp
081dbc67 +0x01:  mov    %esp,%ebp
081dbc69 +0x03:  sub    $0x28,%esp
081dbc6c +0x06:  mov    0x10(%ebp),%eax
081dbc6f +0x09:  mov    %eax,-0xc(%ebp)
081dbc72 +0x0c:  mov    -0xc(%ebp),%eax
081dbc75 +0x0f:  mov    0x4(%eax),%eax
081dbc78 +0x12:  test   %eax,%eax
081dbc7a +0x14:  jne    081dbcab <+0x45>
081dbc7c +0x16:  mov    0xc(%ebp),%eax
081dbc7f +0x19:  mov    %eax,(%esp)
081dbc82 +0x1c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081dbc87 +0x21:  mov    0xc(%ebp),%edx
081dbc8a +0x24:  mov    %eax,0x4(%esp)
081dbc8e +0x28:  mov    %edx,(%esp)
081dbc91 +0x2b:  call   0822fb24 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51ce>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51ce
081dbc96 +0x30:  movl   $0x1b0,0x4(%esp)
081dbc9e +0x38:  mov    0xc(%ebp),%eax
081dbca1 +0x3b:  mov    %eax,(%esp)
081dbca4 +0x3e:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081dbca9 +0x43:  jmp    081dbccb <+0x65>
081dbcab +0x45:  mov    -0xc(%ebp),%eax
081dbcae +0x48:  mov    0x4(%eax),%eax
081dbcb1 +0x4b:  movzbl %al,%eax
081dbcb4 +0x4e:  mov    %eax,0x8(%esp)
081dbcb8 +0x52:  movl   $0x1b0,0x4(%esp)
081dbcc0 +0x5a:  mov    0xc(%ebp),%eax
081dbcc3 +0x5d:  mov    %eax,(%esp)
081dbcc6 +0x60:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dbccb +0x65:  leave
081dbccc +0x66:  ret
081dbccd +0x67:  nop
```

## 反编译 C

```c
// Dispatcher_Select_Item_Grwoth_Power::send @ 0x81dbc66

/* Dispatcher_Select_Item_Grwoth_Power::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Select_Item_Grwoth_Power::send
          (Dispatcher_Select_Item_Grwoth_Power *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    CUserCharacInfo::set_growth_power_reward((CUserCharacInfo *)param_1,iVar1);
    CUser::SendCmdOkPacket(param_1,0x1b0);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
