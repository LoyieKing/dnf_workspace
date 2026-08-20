# send

`_ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase`

`Dispatcher_MonstercardBind::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MonstercardBind` | `0x081d9148` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d9148  _ZN26Dispatcher_MonstercardBind4sendEP5CUserR9ParamBase
#           Dispatcher_MonstercardBind::send(CUser*, ParamBase&)
# range [0x081d9148, 0x081d9335]
081d9148 +0x000:  push   %ebp
081d9149 +0x001:  mov    %esp,%ebp
081d914b +0x003:  push   %esi
081d914c +0x004:  push   %ebx
081d914d +0x005:  sub    $0x40,%esp
081d9150 +0x008:  mov    0x10(%ebp),%eax
081d9153 +0x00b:  mov    %eax,-0x1c(%ebp)
081d9156 +0x00e:  mov    -0x1c(%ebp),%eax
081d9159 +0x011:  mov    0x4(%eax),%eax
081d915c +0x014:  test   %eax,%eax
081d915e +0x016:  je     081d9185 <+0x3d>
081d9160 +0x018:  mov    -0x1c(%ebp),%eax
081d9163 +0x01b:  mov    0x4(%eax),%eax
081d9166 +0x01e:  movzbl %al,%eax
081d9169 +0x021:  mov    %eax,0x8(%esp)
081d916d +0x025:  movl   $0x19e,0x4(%esp)
081d9175 +0x02d:  mov    0xc(%ebp),%eax
081d9178 +0x030:  mov    %eax,(%esp)
081d917b +0x033:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d9180 +0x038:  jmp    081d932f <+0x1e7>
081d9185 +0x03d:  lea    -0x28(%ebp),%eax
081d9188 +0x040:  mov    %eax,(%esp)
081d918b +0x043:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d9190 +0x048:  lea    -0x28(%ebp),%eax
081d9193 +0x04b:  mov    %eax,(%esp)
081d9196 +0x04e:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081d919b +0x053:  movl   $0x19e,0x8(%esp)
081d91a3 +0x05b:  movl   $0x1,0x4(%esp)
081d91ab +0x063:  lea    -0x28(%ebp),%eax
081d91ae +0x066:  mov    %eax,(%esp)
081d91b1 +0x069:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d91b6 +0x06e:  movl   $0x1,0x4(%esp)
081d91be +0x076:  lea    -0x28(%ebp),%eax
081d91c1 +0x079:  mov    %eax,(%esp)
081d91c4 +0x07c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d91c9 +0x081:  mov    -0x1c(%ebp),%eax
081d91cc +0x084:  movzwl 0x8(%eax),%eax
081d91d0 +0x088:  cwtl
081d91d1 +0x089:  mov    %eax,0x4(%esp)
081d91d5 +0x08d:  lea    -0x28(%ebp),%eax
081d91d8 +0x090:  mov    %eax,(%esp)
081d91db +0x093:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d91e0 +0x098:  mov    -0x1c(%ebp),%eax
081d91e3 +0x09b:  movzwl 0xa(%eax),%eax
081d91e7 +0x09f:  cwtl
081d91e8 +0x0a0:  mov    %eax,0x4(%esp)
081d91ec +0x0a4:  lea    -0x28(%ebp),%eax
081d91ef +0x0a7:  mov    %eax,(%esp)
081d91f2 +0x0aa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d91f7 +0x0af:  mov    -0x1c(%ebp),%eax
081d91fa +0x0b2:  movzwl 0xc(%eax),%eax
081d91fe +0x0b6:  cwtl
081d91ff +0x0b7:  mov    %eax,0x4(%esp)
081d9203 +0x0bb:  lea    -0x28(%ebp),%eax
081d9206 +0x0be:  mov    %eax,(%esp)
081d9209 +0x0c1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d920e +0x0c6:  mov    -0x1c(%ebp),%eax
081d9211 +0x0c9:  add    $0x10,%eax
081d9214 +0x0cc:  mov    %eax,-0x18(%ebp)
081d9217 +0x0cf:  mov    -0x18(%ebp),%eax
081d921a +0x0d2:  mov    %eax,(%esp)
081d921d +0x0d5:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
081d9222 +0x0da:  mov    %eax,-0x2c(%ebp)
081d9225 +0x0dd:  mov    $0xaaaaaaab,%edx
081d922a +0x0e2:  mov    -0x2c(%ebp),%eax
081d922d +0x0e5:  mul    %edx
081d922f +0x0e7:  mov    %edx,%eax
081d9231 +0x0e9:  shr    %eax
081d9233 +0x0eb:  mov    %eax,-0x14(%ebp)
081d9236 +0x0ee:  mov    -0x14(%ebp),%eax
081d9239 +0x0f1:  mov    %eax,0x4(%esp)
081d923d +0x0f5:  lea    -0x28(%ebp),%eax
081d9240 +0x0f8:  mov    %eax,(%esp)
081d9243 +0x0fb:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d9248 +0x100:  movl   $0x0,-0x10(%ebp)
081d924f +0x107:  movl   $0x0,-0xc(%ebp)
081d9256 +0x10e:  jmp    081d92d1 <+0x189>
081d9258 +0x110:  mov    -0x10(%ebp),%eax
081d925b +0x113:  addl   $0x1,-0x10(%ebp)
081d925f +0x117:  mov    %eax,0x4(%esp)
081d9263 +0x11b:  mov    -0x18(%ebp),%eax
081d9266 +0x11e:  mov    %eax,(%esp)
081d9269 +0x121:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d926e +0x126:  mov    (%eax),%eax
081d9270 +0x128:  mov    %eax,0x4(%esp)
081d9274 +0x12c:  lea    -0x28(%ebp),%eax
081d9277 +0x12f:  mov    %eax,(%esp)
081d927a +0x132:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d927f +0x137:  mov    -0x10(%ebp),%eax
081d9282 +0x13a:  addl   $0x1,-0x10(%ebp)
081d9286 +0x13e:  mov    %eax,0x4(%esp)
081d928a +0x142:  mov    -0x18(%ebp),%eax
081d928d +0x145:  mov    %eax,(%esp)
081d9290 +0x148:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d9295 +0x14d:  mov    (%eax),%eax
081d9297 +0x14f:  mov    %eax,0x4(%esp)
081d929b +0x153:  lea    -0x28(%ebp),%eax
081d929e +0x156:  mov    %eax,(%esp)
081d92a1 +0x159:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d92a6 +0x15e:  mov    -0x10(%ebp),%eax
081d92a9 +0x161:  addl   $0x1,-0x10(%ebp)
081d92ad +0x165:  mov    %eax,0x4(%esp)
081d92b1 +0x169:  mov    -0x18(%ebp),%eax
081d92b4 +0x16c:  mov    %eax,(%esp)
081d92b7 +0x16f:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d92bc +0x174:  mov    (%eax),%eax
081d92be +0x176:  mov    %eax,0x4(%esp)
081d92c2 +0x17a:  lea    -0x28(%ebp),%eax
081d92c5 +0x17d:  mov    %eax,(%esp)
081d92c8 +0x180:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d92cd +0x185:  addl   $0x1,-0xc(%ebp)
081d92d1 +0x189:  mov    -0xc(%ebp),%eax
081d92d4 +0x18c:  cmp    -0x14(%ebp),%eax
081d92d7 +0x18f:  setl   %al
081d92da +0x192:  test   %al,%al
081d92dc +0x194:  jne    081d9258 <+0x110>
081d92e2 +0x19a:  movl   $0x1,0x4(%esp)
081d92ea +0x1a2:  lea    -0x28(%ebp),%eax
081d92ed +0x1a5:  mov    %eax,(%esp)
081d92f0 +0x1a8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d92f5 +0x1ad:  lea    -0x28(%ebp),%eax
081d92f8 +0x1b0:  mov    %eax,0x4(%esp)
081d92fc +0x1b4:  mov    0xc(%ebp),%eax
081d92ff +0x1b7:  mov    %eax,(%esp)
081d9302 +0x1ba:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d9307 +0x1bf:  jmp    081d9324 <+0x1dc>
081d9309 +0x1c1:  mov    %edx,%ebx
081d930b +0x1c3:  mov    %eax,%esi
081d930d +0x1c5:  lea    -0x28(%ebp),%eax
081d9310 +0x1c8:  mov    %eax,(%esp)
081d9313 +0x1cb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d9318 +0x1d0:  mov    %esi,%eax
081d931a +0x1d2:  mov    %ebx,%edx
081d931c +0x1d4:  mov    %eax,(%esp)
081d931f +0x1d7:  call   08ae3750 <_Unwind_Resume>
081d9324 +0x1dc:  lea    -0x28(%ebp),%eax
081d9327 +0x1df:  mov    %eax,(%esp)
081d932a +0x1e2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d932f +0x1e7:  add    $0x40,%esp
081d9332 +0x1ea:  pop    %ebx
081d9333 +0x1eb:  pop    %esi
081d9334 +0x1ec:  pop    %ebp
081d9335 +0x1ed:  ret
```

## 反编译 C

```c
// Dispatcher_MonstercardBind::send @ 0x81d9148

/* Dispatcher_MonstercardBind::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MonstercardBind::send(Dispatcher_MonstercardBind *this,CUser *param_1,ParamBase *param_2)

{
  uint uVar1;
  int *piVar2;
  PacketGuard local_2c [12];
  ParamBase *local_20;
  vector<int,std::allocator<int>> *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_20 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d9196 to 081d9306 has its CatchHandler @ 081d9309 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x19e);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 8));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 10));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 0xc));
    local_1c = (vector<int,std::allocator<int>> *)(local_20 + 0x10);
    local_18 = std::vector<int,std::allocator<int>>::size(local_1c);
    local_18 = local_18 / 3;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_18);
    local_14 = 0;
    for (local_10 = 0; uVar1 = local_14, local_10 < (int)local_18; local_10 = local_10 + 1) {
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_1c,uVar1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_1c,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_1c,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x19e,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
