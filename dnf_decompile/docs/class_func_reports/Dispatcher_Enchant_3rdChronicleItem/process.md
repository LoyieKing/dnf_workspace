# process

`_ZN35Dispatcher_Enchant_3rdChronicleItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Enchant_3rdChronicleItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Enchant_3rdChronicleItem` | `0x081d375e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d375e  _ZN35Dispatcher_Enchant_3rdChronicleItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Enchant_3rdChronicleItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d375e, 0x081d387d]
081d375e +0x000:  push   %ebp
081d375f +0x001:  mov    %esp,%ebp
081d3761 +0x003:  push   %esi
081d3762 +0x004:  push   %ebx
081d3763 +0x005:  sub    $0x30,%esp
081d3766 +0x008:  mov    0x10(%ebp),%eax
081d3769 +0x00b:  mov    %eax,0x8(%esp)
081d376d +0x00f:  mov    0xc(%ebp),%eax
081d3770 +0x012:  mov    %eax,0x4(%esp)
081d3774 +0x016:  mov    0x8(%ebp),%eax
081d3777 +0x019:  mov    %eax,(%esp)
081d377a +0x01c:  call   081d343a <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_Enchant_3rdChronicleItem::check_error(CUser*, MSG_BASE&)
081d377f +0x021:  mov    %eax,-0x18(%ebp)
081d3782 +0x024:  cmpl   $0x0,-0x18(%ebp)
081d3786 +0x028:  jle    081d37af <+0x51>
081d3788 +0x02a:  mov    -0x18(%ebp),%eax
081d378b +0x02d:  movzbl %al,%eax
081d378e +0x030:  mov    %eax,0x8(%esp)
081d3792 +0x034:  movl   $0x173,0x4(%esp)
081d379a +0x03c:  mov    0xc(%ebp),%eax
081d379d +0x03f:  mov    %eax,(%esp)
081d37a0 +0x042:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d37a5 +0x047:  mov    $0xffffffff,%ebx
081d37aa +0x04c:  jmp    081d3874 <+0x116>
081d37af +0x051:  mov    0x14(%ebp),%eax
081d37b2 +0x054:  mov    %eax,-0x14(%ebp)
081d37b5 +0x057:  mov    0x10(%ebp),%eax
081d37b8 +0x05a:  mov    %eax,-0x10(%ebp)
081d37bb +0x05d:  movl   $0x0,-0xc(%ebp)
081d37c2 +0x064:  lea    -0x24(%ebp),%eax
081d37c5 +0x067:  mov    %eax,(%esp)
081d37c8 +0x06a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d37cd +0x06f:  movl   $0x173,0x8(%esp)
081d37d5 +0x077:  movl   $0x1,0x4(%esp)
081d37dd +0x07f:  lea    -0x24(%ebp),%eax
081d37e0 +0x082:  mov    %eax,(%esp)
081d37e3 +0x085:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d37e8 +0x08a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d37ed +0x08f:  mov    0x20(%eax),%eax
081d37f0 +0x092:  lea    -0x24(%ebp),%edx
081d37f3 +0x095:  mov    %edx,0xc(%esp)
081d37f7 +0x099:  mov    -0x10(%ebp),%edx
081d37fa +0x09c:  mov    %edx,0x8(%esp)
081d37fe +0x0a0:  mov    0xc(%ebp),%edx
081d3801 +0x0a3:  mov    %edx,0x4(%esp)
081d3805 +0x0a7:  mov    %eax,(%esp)
081d3808 +0x0aa:  call   0854a1ba <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard>  ; WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)
081d380d +0x0af:  mov    -0x14(%ebp),%edx
081d3810 +0x0b2:  mov    %eax,0x4(%edx)
081d3813 +0x0b5:  mov    -0x14(%ebp),%eax
081d3816 +0x0b8:  mov    0x4(%eax),%eax
081d3819 +0x0bb:  test   %eax,%eax
081d381b +0x0bd:  sete   %al
081d381e +0x0c0:  test   %al,%al
081d3820 +0x0c2:  je     081d3847 <+0xe9>
081d3822 +0x0c4:  movl   $0x1,0x4(%esp)
081d382a +0x0cc:  lea    -0x24(%ebp),%eax
081d382d +0x0cf:  mov    %eax,(%esp)
081d3830 +0x0d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d3835 +0x0d7:  lea    -0x24(%ebp),%eax
081d3838 +0x0da:  mov    %eax,0x4(%esp)
081d383c +0x0de:  mov    0xc(%ebp),%eax
081d383f +0x0e1:  mov    %eax,(%esp)
081d3842 +0x0e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d3847 +0x0e9:  mov    $0x0,%ebx
081d384c +0x0ee:  lea    -0x24(%ebp),%eax
081d384f +0x0f1:  mov    %eax,(%esp)
081d3852 +0x0f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3857 +0x0f9:  jmp    081d3874 <+0x116>
081d3859 +0x0fb:  mov    %edx,%ebx
081d385b +0x0fd:  mov    %eax,%esi
081d385d +0x0ff:  lea    -0x24(%ebp),%eax
081d3860 +0x102:  mov    %eax,(%esp)
081d3863 +0x105:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3868 +0x10a:  mov    %esi,%eax
081d386a +0x10c:  mov    %ebx,%edx
081d386c +0x10e:  mov    %eax,(%esp)
081d386f +0x111:  call   08ae3750 <_Unwind_Resume>
081d3874 +0x116:  mov    %ebx,%eax
081d3876 +0x118:  add    $0x30,%esp
081d3879 +0x11b:  pop    %ebx
081d387a +0x11c:  pop    %esi
081d387b +0x11d:  pop    %ebp
081d387c +0x11e:  ret
081d387d +0x11f:  nop
```

## 反编译 C

```c
// Dispatcher_Enchant_3rdChronicleItem::process @ 0x81d375e

/* Dispatcher_Enchant_3rdChronicleItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Enchant_3rdChronicleItem::process
          (Dispatcher_Enchant_3rdChronicleItem *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  PacketGuard local_28 [12];
  uint local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  undefined4 local_10;
  
  local_1c = check_error(this,param_1,param_2);
  if ((int)local_1c < 1) {
    local_18 = param_3;
    local_14 = param_2;
    local_10 = 0;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d37e3 to 081d3846 has its CatchHandler @ 081d3859 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x173);
    iVar1 = G_CDataManager();
    uVar2 = WongWork::CItemUpgrade::ProcUpgrade
                      (*(CItemUpgrade **)(iVar1 + 0x20),param_1,(MSG_ENCHANT *)local_14,local_28);
    *(undefined4 *)(local_18 + 4) = uVar2;
    if (*(int *)(local_18 + 4) == 0) {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
    }
    uVar2 = 0;
    PacketGuard::~PacketGuard(local_28);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x173,local_1c & 0xff);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
