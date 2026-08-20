# send

`_ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase`

`Dispatcher_ExpertExtraction::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ExpertExtraction` | `0x081d9700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d9700  _ZN27Dispatcher_ExpertExtraction4sendEP5CUserR9ParamBase
#           Dispatcher_ExpertExtraction::send(CUser*, ParamBase&)
# range [0x081d9700, 0x081d98c3]
081d9700 +0x000:  push   %ebp
081d9701 +0x001:  mov    %esp,%ebp
081d9703 +0x003:  push   %esi
081d9704 +0x004:  push   %ebx
081d9705 +0x005:  sub    $0x40,%esp
081d9708 +0x008:  mov    0x10(%ebp),%eax
081d970b +0x00b:  mov    %eax,-0x1c(%ebp)
081d970e +0x00e:  mov    -0x1c(%ebp),%eax
081d9711 +0x011:  mov    0x4(%eax),%eax
081d9714 +0x014:  test   %eax,%eax
081d9716 +0x016:  jne    081d989d <+0x19d>
081d971c +0x01c:  lea    -0x28(%ebp),%eax
081d971f +0x01f:  mov    %eax,(%esp)
081d9722 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d9727 +0x027:  lea    -0x28(%ebp),%eax
081d972a +0x02a:  mov    %eax,(%esp)
081d972d +0x02d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081d9732 +0x032:  movl   $0x1a0,0x8(%esp)
081d973a +0x03a:  movl   $0x1,0x4(%esp)
081d9742 +0x042:  lea    -0x28(%ebp),%eax
081d9745 +0x045:  mov    %eax,(%esp)
081d9748 +0x048:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d974d +0x04d:  movl   $0x1,0x4(%esp)
081d9755 +0x055:  lea    -0x28(%ebp),%eax
081d9758 +0x058:  mov    %eax,(%esp)
081d975b +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d9760 +0x060:  mov    -0x1c(%ebp),%eax
081d9763 +0x063:  movzwl 0x8(%eax),%eax
081d9767 +0x067:  cwtl
081d9768 +0x068:  mov    %eax,0x4(%esp)
081d976c +0x06c:  lea    -0x28(%ebp),%eax
081d976f +0x06f:  mov    %eax,(%esp)
081d9772 +0x072:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d9777 +0x077:  mov    -0x1c(%ebp),%eax
081d977a +0x07a:  add    $0xc,%eax
081d977d +0x07d:  mov    %eax,(%esp)
081d9780 +0x080:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
081d9785 +0x085:  mov    %eax,-0x2c(%ebp)
081d9788 +0x088:  mov    $0xaaaaaaab,%edx
081d978d +0x08d:  mov    -0x2c(%ebp),%eax
081d9790 +0x090:  mul    %edx
081d9792 +0x092:  mov    %edx,%eax
081d9794 +0x094:  shr    %eax
081d9796 +0x096:  mov    %eax,-0x18(%ebp)
081d9799 +0x099:  mov    -0x18(%ebp),%eax
081d979c +0x09c:  mov    %eax,0x4(%esp)
081d97a0 +0x0a0:  lea    -0x28(%ebp),%eax
081d97a3 +0x0a3:  mov    %eax,(%esp)
081d97a6 +0x0a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d97ab +0x0ab:  mov    -0x1c(%ebp),%eax
081d97ae +0x0ae:  add    $0xc,%eax
081d97b1 +0x0b1:  mov    %eax,-0x14(%ebp)
081d97b4 +0x0b4:  movl   $0x0,-0x10(%ebp)
081d97bb +0x0bb:  movl   $0x0,-0xc(%ebp)
081d97c2 +0x0c2:  jmp    081d983d <+0x13d>
081d97c4 +0x0c4:  mov    -0x10(%ebp),%eax
081d97c7 +0x0c7:  addl   $0x1,-0x10(%ebp)
081d97cb +0x0cb:  mov    %eax,0x4(%esp)
081d97cf +0x0cf:  mov    -0x14(%ebp),%eax
081d97d2 +0x0d2:  mov    %eax,(%esp)
081d97d5 +0x0d5:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d97da +0x0da:  mov    (%eax),%eax
081d97dc +0x0dc:  mov    %eax,0x4(%esp)
081d97e0 +0x0e0:  lea    -0x28(%ebp),%eax
081d97e3 +0x0e3:  mov    %eax,(%esp)
081d97e6 +0x0e6:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d97eb +0x0eb:  mov    -0x10(%ebp),%eax
081d97ee +0x0ee:  addl   $0x1,-0x10(%ebp)
081d97f2 +0x0f2:  mov    %eax,0x4(%esp)
081d97f6 +0x0f6:  mov    -0x14(%ebp),%eax
081d97f9 +0x0f9:  mov    %eax,(%esp)
081d97fc +0x0fc:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d9801 +0x101:  mov    (%eax),%eax
081d9803 +0x103:  mov    %eax,0x4(%esp)
081d9807 +0x107:  lea    -0x28(%ebp),%eax
081d980a +0x10a:  mov    %eax,(%esp)
081d980d +0x10d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d9812 +0x112:  mov    -0x10(%ebp),%eax
081d9815 +0x115:  addl   $0x1,-0x10(%ebp)
081d9819 +0x119:  mov    %eax,0x4(%esp)
081d981d +0x11d:  mov    -0x14(%ebp),%eax
081d9820 +0x120:  mov    %eax,(%esp)
081d9823 +0x123:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d9828 +0x128:  mov    (%eax),%eax
081d982a +0x12a:  mov    %eax,0x4(%esp)
081d982e +0x12e:  lea    -0x28(%ebp),%eax
081d9831 +0x131:  mov    %eax,(%esp)
081d9834 +0x134:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d9839 +0x139:  addl   $0x1,-0xc(%ebp)
081d983d +0x13d:  mov    -0xc(%ebp),%eax
081d9840 +0x140:  cmp    -0x18(%ebp),%eax
081d9843 +0x143:  setl   %al
081d9846 +0x146:  test   %al,%al
081d9848 +0x148:  jne    081d97c4 <+0xc4>
081d984e +0x14e:  movl   $0x1,0x4(%esp)
081d9856 +0x156:  lea    -0x28(%ebp),%eax
081d9859 +0x159:  mov    %eax,(%esp)
081d985c +0x15c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d9861 +0x161:  lea    -0x28(%ebp),%eax
081d9864 +0x164:  mov    %eax,0x4(%esp)
081d9868 +0x168:  mov    0xc(%ebp),%eax
081d986b +0x16b:  mov    %eax,(%esp)
081d986e +0x16e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d9873 +0x173:  jmp    081d9890 <+0x190>
081d9875 +0x175:  mov    %edx,%ebx
081d9877 +0x177:  mov    %eax,%esi
081d9879 +0x179:  lea    -0x28(%ebp),%eax
081d987c +0x17c:  mov    %eax,(%esp)
081d987f +0x17f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d9884 +0x184:  mov    %esi,%eax
081d9886 +0x186:  mov    %ebx,%edx
081d9888 +0x188:  mov    %eax,(%esp)
081d988b +0x18b:  call   08ae3750 <_Unwind_Resume>
081d9890 +0x190:  lea    -0x28(%ebp),%eax
081d9893 +0x193:  mov    %eax,(%esp)
081d9896 +0x196:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d989b +0x19b:  jmp    081d98bd <+0x1bd>
081d989d +0x19d:  mov    -0x1c(%ebp),%eax
081d98a0 +0x1a0:  mov    0x4(%eax),%eax
081d98a3 +0x1a3:  movzbl %al,%eax
081d98a6 +0x1a6:  mov    %eax,0x8(%esp)
081d98aa +0x1aa:  movl   $0x1a0,0x4(%esp)
081d98b2 +0x1b2:  mov    0xc(%ebp),%eax
081d98b5 +0x1b5:  mov    %eax,(%esp)
081d98b8 +0x1b8:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d98bd +0x1bd:  add    $0x40,%esp
081d98c0 +0x1c0:  pop    %ebx
081d98c1 +0x1c1:  pop    %esi
081d98c2 +0x1c2:  pop    %ebp
081d98c3 +0x1c3:  ret
```

## 反编译 C

```c
// Dispatcher_ExpertExtraction::send @ 0x81d9700

/* Dispatcher_ExpertExtraction::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ExpertExtraction::send
          (Dispatcher_ExpertExtraction *this,CUser *param_1,ParamBase *param_2)

{
  uint uVar1;
  int *piVar2;
  PacketGuard local_2c [12];
  ParamBase *local_20;
  uint local_1c;
  vector<int,std::allocator<int>> *local_18;
  uint local_14;
  int local_10;
  
  local_20 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d972d to 081d9872 has its CatchHandler @ 081d9875 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x1a0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 8));
    local_1c = std::vector<int,std::allocator<int>>::size
                         ((vector<int,std::allocator<int>> *)(local_20 + 0xc));
    local_1c = local_1c / 3;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_1c);
    local_18 = (vector<int,std::allocator<int>> *)(local_20 + 0xc);
    local_14 = 0;
    for (local_10 = 0; uVar1 = local_14, local_10 < (int)local_1c; local_10 = local_10 + 1) {
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_18,uVar1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_18,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
      uVar1 = local_14;
      local_14 = local_14 + 1;
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[](local_18,uVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*piVar2);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
    CUser::Send(param_1,local_2c);
    PacketGuard::~PacketGuard(local_2c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1a0,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
