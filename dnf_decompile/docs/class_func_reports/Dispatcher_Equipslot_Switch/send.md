# send

`_ZN27Dispatcher_Equipslot_Switch4sendEP5CUserR9ParamBase`

`Dispatcher_Equipslot_Switch::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Equipslot_Switch` | `0x081d62c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d62c2  _ZN27Dispatcher_Equipslot_Switch4sendEP5CUserR9ParamBase
#           Dispatcher_Equipslot_Switch::send(CUser*, ParamBase&)
# range [0x081d62c2, 0x081d63e5]
081d62c2 +0x000:  push   %ebp
081d62c3 +0x001:  mov    %esp,%ebp
081d62c5 +0x003:  push   %esi
081d62c6 +0x004:  push   %ebx
081d62c7 +0x005:  sub    $0x30,%esp
081d62ca +0x008:  mov    0x10(%ebp),%eax
081d62cd +0x00b:  mov    %eax,-0x10(%ebp)
081d62d0 +0x00e:  mov    -0x10(%ebp),%eax
081d62d3 +0x011:  movzbl 0x4(%eax),%eax
081d62d7 +0x015:  test   %al,%al
081d62d9 +0x017:  jne    081d6315 <+0x53>
081d62db +0x019:  movl   $0x9,0x4(%esp)
081d62e3 +0x021:  mov    0xc(%ebp),%eax
081d62e6 +0x024:  mov    %eax,(%esp)
081d62e9 +0x027:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081d62ee +0x02c:  mov    %eax,-0xc(%ebp)
081d62f1 +0x02f:  mov    0xc(%ebp),%eax
081d62f4 +0x032:  mov    %eax,0x4(%esp)
081d62f8 +0x036:  mov    -0xc(%ebp),%eax
081d62fb +0x039:  mov    %eax,(%esp)
081d62fe +0x03c:  call   0849983e <_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser>  ; CExpandEquipslot::Send_Equip_Info(CUser*)
081d6303 +0x041:  mov    0xc(%ebp),%eax
081d6306 +0x044:  mov    %eax,0x4(%esp)
081d630a +0x048:  mov    -0xc(%ebp),%eax
081d630d +0x04b:  mov    %eax,(%esp)
081d6310 +0x04e:  call   0849a57c <_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser>  ; CExpandEquipslot::Send_Expand_Equip_Info(CUser*)
081d6315 +0x053:  lea    -0x1c(%ebp),%eax
081d6318 +0x056:  mov    %eax,(%esp)
081d631b +0x059:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d6320 +0x05e:  lea    -0x1c(%ebp),%eax
081d6323 +0x061:  mov    %eax,(%esp)
081d6326 +0x064:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081d632b +0x069:  movl   $0x18d,0x8(%esp)
081d6333 +0x071:  movl   $0x1,0x4(%esp)
081d633b +0x079:  lea    -0x1c(%ebp),%eax
081d633e +0x07c:  mov    %eax,(%esp)
081d6341 +0x07f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d6346 +0x084:  mov    -0x10(%ebp),%eax
081d6349 +0x087:  movzbl 0x4(%eax),%eax
081d634d +0x08b:  test   %al,%al
081d634f +0x08d:  je     081d637f <+0xbd>
081d6351 +0x08f:  movl   $0x0,0x4(%esp)
081d6359 +0x097:  lea    -0x1c(%ebp),%eax
081d635c +0x09a:  mov    %eax,(%esp)
081d635f +0x09d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6364 +0x0a2:  mov    -0x10(%ebp),%eax
081d6367 +0x0a5:  movzbl 0x4(%eax),%eax
081d636b +0x0a9:  movsbl %al,%eax
081d636e +0x0ac:  mov    %eax,0x4(%esp)
081d6372 +0x0b0:  lea    -0x1c(%ebp),%eax
081d6375 +0x0b3:  mov    %eax,(%esp)
081d6378 +0x0b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d637d +0x0bb:  jmp    081d6392 <+0xd0>
081d637f +0x0bd:  movl   $0x1,0x4(%esp)
081d6387 +0x0c5:  lea    -0x1c(%ebp),%eax
081d638a +0x0c8:  mov    %eax,(%esp)
081d638d +0x0cb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6392 +0x0d0:  movl   $0x1,0x4(%esp)
081d639a +0x0d8:  lea    -0x1c(%ebp),%eax
081d639d +0x0db:  mov    %eax,(%esp)
081d63a0 +0x0de:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d63a5 +0x0e3:  lea    -0x1c(%ebp),%eax
081d63a8 +0x0e6:  mov    %eax,0x4(%esp)
081d63ac +0x0ea:  mov    0xc(%ebp),%eax
081d63af +0x0ed:  mov    %eax,(%esp)
081d63b2 +0x0f0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d63b7 +0x0f5:  jmp    081d63d4 <+0x112>
081d63b9 +0x0f7:  mov    %edx,%ebx
081d63bb +0x0f9:  mov    %eax,%esi
081d63bd +0x0fb:  lea    -0x1c(%ebp),%eax
081d63c0 +0x0fe:  mov    %eax,(%esp)
081d63c3 +0x101:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d63c8 +0x106:  mov    %esi,%eax
081d63ca +0x108:  mov    %ebx,%edx
081d63cc +0x10a:  mov    %eax,(%esp)
081d63cf +0x10d:  call   08ae3750 <_Unwind_Resume>
081d63d4 +0x112:  lea    -0x1c(%ebp),%eax
081d63d7 +0x115:  mov    %eax,(%esp)
081d63da +0x118:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d63df +0x11d:  add    $0x30,%esp
081d63e2 +0x120:  pop    %ebx
081d63e3 +0x121:  pop    %esi
081d63e4 +0x122:  pop    %ebp
081d63e5 +0x123:  ret
```

## 反编译 C

```c
// Dispatcher_Equipslot_Switch::send @ 0x81d62c2

/* Dispatcher_Equipslot_Switch::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Equipslot_Switch::send
          (Dispatcher_Equipslot_Switch *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CExpandEquipslot *local_10;
  
  local_14 = param_2;
  if (param_2[4] == (ParamBase)0x0) {
    local_10 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_1,9);
    CExpandEquipslot::Send_Equip_Info(local_10,param_1);
    CExpandEquipslot::Send_Expand_Equip_Info(local_10,param_1);
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d6326 to 081d63b6 has its CatchHandler @ 081d63b9 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x18d);
  if (local_14[4] == (ParamBase)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14[4]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
