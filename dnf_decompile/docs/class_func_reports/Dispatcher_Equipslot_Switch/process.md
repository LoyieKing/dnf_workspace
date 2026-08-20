# process

`_ZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Equipslot_Switch::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Equipslot_Switch` | `0x081d61be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d61be  _ZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Equipslot_Switch::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d61be, 0x081d62c1]
081d61be +0x000:  push   %ebp
081d61bf +0x001:  mov    %esp,%ebp
081d61c1 +0x003:  sub    $0x38,%esp
081d61c4 +0x006:  mov    0x10(%ebp),%eax
081d61c7 +0x009:  mov    %eax,0x8(%esp)
081d61cb +0x00d:  mov    0xc(%ebp),%eax
081d61ce +0x010:  mov    %eax,0x4(%esp)
081d61d2 +0x014:  mov    0x8(%ebp),%eax
081d61d5 +0x017:  mov    %eax,(%esp)
081d61d8 +0x01a:  call   081d614a <_ZN27Dispatcher_Equipslot_Switch11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_Equipslot_Switch::check_error(CUser*, MSG_BASE&)
081d61dd +0x01f:  mov    %eax,-0x18(%ebp)
081d61e0 +0x022:  cmpl   $0x0,-0x18(%ebp)
081d61e4 +0x026:  jle    081d620d <+0x4f>
081d61e6 +0x028:  mov    -0x18(%ebp),%eax
081d61e9 +0x02b:  movzbl %al,%eax
081d61ec +0x02e:  mov    %eax,0x8(%esp)
081d61f0 +0x032:  movl   $0x18d,0x4(%esp)
081d61f8 +0x03a:  mov    0xc(%ebp),%eax
081d61fb +0x03d:  mov    %eax,(%esp)
081d61fe +0x040:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d6203 +0x045:  mov    $0xffffffff,%eax
081d6208 +0x04a:  jmp    081d62bf <+0x101>
081d620d +0x04f:  cmpl   $0x0,-0x18(%ebp)
081d6211 +0x053:  jns    081d6254 <+0x96>
081d6213 +0x055:  movl   $0x15,0x8(%esp)
081d621b +0x05d:  movl   $0x18d,0x4(%esp)
081d6223 +0x065:  mov    0xc(%ebp),%eax
081d6226 +0x068:  mov    %eax,(%esp)
081d6229 +0x06b:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d622e +0x070:  movl   $0x0,0xc(%esp)
081d6236 +0x078:  movl   $0x0,0x8(%esp)
081d623e +0x080:  movl   $&_ZZN27Dispatcher_Equipslot_Switch7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d6246 +0x088:  movl   $0x3e2c,(%esp)
081d624d +0x08f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d6252 +0x094:  jmp    081d62bf <+0x101>
081d6254 +0x096:  mov    0x10(%ebp),%eax
081d6257 +0x099:  mov    %eax,-0x14(%ebp)
081d625a +0x09c:  mov    0x14(%ebp),%eax
081d625d +0x09f:  mov    %eax,-0x10(%ebp)
081d6260 +0x0a2:  movl   $0x9,0x4(%esp)
081d6268 +0x0aa:  mov    0xc(%ebp),%eax
081d626b +0x0ad:  mov    %eax,(%esp)
081d626e +0x0b0:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081d6273 +0x0b5:  mov    %eax,-0xc(%ebp)
081d6276 +0x0b8:  mov    -0x14(%ebp),%eax
081d6279 +0x0bb:  movzbl 0xe(%eax),%eax
081d627d +0x0bf:  movsbl %al,%ecx
081d6280 +0x0c2:  mov    -0x14(%ebp),%eax
081d6283 +0x0c5:  movzbl 0xd(%eax),%eax
081d6287 +0x0c9:  movsbl %al,%edx
081d628a +0x0cc:  mov    -0x14(%ebp),%eax
081d628d +0x0cf:  movzbl 0xf(%eax),%eax
081d6291 +0x0d3:  movsbl %al,%eax
081d6294 +0x0d6:  mov    %ecx,0x10(%esp)
081d6298 +0x0da:  mov    %edx,0xc(%esp)
081d629c +0x0de:  mov    %eax,0x8(%esp)
081d62a0 +0x0e2:  mov    0xc(%ebp),%eax
081d62a3 +0x0e5:  mov    %eax,0x4(%esp)
081d62a7 +0x0e9:  mov    -0xc(%ebp),%eax
081d62aa +0x0ec:  mov    %eax,(%esp)
081d62ad +0x0ef:  call   0849943e <_ZN16CExpandEquipslot15EquipslotSwitchEP5CUserccc>  ; CExpandEquipslot::EquipslotSwitch(CUser*, char, char, char)
081d62b2 +0x0f4:  mov    %eax,%edx
081d62b4 +0x0f6:  mov    -0x10(%ebp),%eax
081d62b7 +0x0f9:  mov    %dl,0x4(%eax)
081d62ba +0x0fc:  mov    $0x0,%eax
081d62bf +0x101:  leave
081d62c0 +0x102:  ret
081d62c1 +0x103:  nop
```

## 反编译 C

```c
// Dispatcher_Equipslot_Switch::process @ 0x81d61be

/* Dispatcher_Equipslot_Switch::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Equipslot_Switch::process
          (Dispatcher_Equipslot_Switch *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  uint uVar2;
  undefined4 uVar3;
  CExpandEquipslot *this_00;
  MSG_BASE *pMVar4;
  
  pMVar4 = param_2;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if ((int)uVar2 < 1) {
    if ((int)uVar2 < 0) {
      CUser::SendCmdErrorPacket(param_1,0x18d,0x15);
      uVar3 = LineFunc(0x3e2c,
                       "virtual int Dispatcher_Equipslot_Switch::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      this_00 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9,pMVar4);
      PVar1 = (ParamBase)
              CExpandEquipslot::EquipslotSwitch
                        (this_00,param_1,(char)param_2[0xf],(char)param_2[0xd],(char)param_2[0xe]);
      param_3[4] = PVar1;
      uVar3 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x18d,uVar2 & 0xff);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
```
