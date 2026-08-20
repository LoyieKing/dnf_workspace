# dispatch_sig

`_ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_TryEnchant` | `0x0820ae84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820ae84  _ZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820ae84, 0x0820b099]
0820ae84 +0x000:  push   %ebp
0820ae85 +0x001:  mov    %esp,%ebp
0820ae87 +0x003:  sub    $0x28,%esp
0820ae8a +0x006:  movl   $0x0,0x4(%esp)
0820ae92 +0x00e:  mov    0x10(%ebp),%eax
0820ae95 +0x011:  mov    %eax,(%esp)
0820ae98 +0x014:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0820ae9d +0x019:  mov    %eax,-0x14(%ebp)
0820aea0 +0x01c:  mov    0xc(%ebp),%eax
0820aea3 +0x01f:  mov    %eax,(%esp)
0820aea6 +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820aeab +0x027:  test   %eax,%eax
0820aead +0x029:  sete   %al
0820aeb0 +0x02c:  test   %al,%al
0820aeb2 +0x02e:  je     0820aedd <+0x59>
0820aeb4 +0x030:  movl   $0x0,0xc(%esp)
0820aebc +0x038:  movl   $0x0,0x8(%esp)
0820aec4 +0x040:  movl   $&_ZZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820aecc +0x048:  movl   $0xa70b,(%esp)
0820aed3 +0x04f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820aed8 +0x054:  jmp    0820b098 <+0x214>
0820aedd +0x059:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0820aee2 +0x05e:  movl   $0x1f,0x8(%esp)
0820aeea +0x066:  mov    0xc(%ebp),%edx
0820aeed +0x069:  mov    %edx,0x4(%esp)
0820aef1 +0x06d:  mov    %eax,(%esp)
0820aef4 +0x070:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0820aef9 +0x075:  mov    %eax,-0x10(%ebp)
0820aefc +0x078:  cmpl   $0x0,-0x10(%ebp)
0820af00 +0x07c:  je     0820af29 <+0xa5>
0820af02 +0x07e:  mov    -0x10(%ebp),%eax
0820af05 +0x081:  movzbl %al,%eax
0820af08 +0x084:  mov    %eax,0x8(%esp)
0820af0c +0x088:  movl   $0xac,0x4(%esp)
0820af14 +0x090:  mov    0xc(%ebp),%eax
0820af17 +0x093:  mov    %eax,(%esp)
0820af1a +0x096:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820af1f +0x09b:  mov    $0x0,%eax
0820af24 +0x0a0:  jmp    0820b098 <+0x214>
0820af29 +0x0a5:  mov    -0x14(%ebp),%eax
0820af2c +0x0a8:  movzbl 0xd(%eax),%eax
0820af30 +0x0ac:  movzbl %al,%eax
0820af33 +0x0af:  cmp    $0x1,%eax
0820af36 +0x0b2:  je     0820afae <+0x12a>
0820af38 +0x0b4:  cmp    $0x2,%eax
0820af3b +0x0b7:  je     0820afe7 <+0x163>
0820af41 +0x0bd:  test   %eax,%eax
0820af43 +0x0bf:  jne    0820b005 <+0x181>
0820af49 +0x0c5:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
0820af4e +0x0ca:  movl   $0x1,0x4(%esp)
0820af56 +0x0d2:  mov    %eax,(%esp)
0820af59 +0x0d5:  call   0849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>  ; expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE)
0820af5e +0x0da:  mov    %eax,-0xc(%ebp)
0820af61 +0x0dd:  cmpl   $0x0,-0xc(%ebp)
0820af65 +0x0e1:  jne    0820af8c <+0x108>
0820af67 +0x0e3:  movl   $0x16,0x8(%esp)
0820af6f +0x0eb:  movl   $0xac,0x4(%esp)
0820af77 +0x0f3:  mov    0xc(%ebp),%eax
0820af7a +0x0f6:  mov    %eax,(%esp)
0820af7d +0x0f9:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820af82 +0x0fe:  mov    $0x0,%eax
0820af87 +0x103:  jmp    0820b098 <+0x214>
0820af8c +0x108:  mov    -0xc(%ebp),%eax
0820af8f +0x10b:  mov    (%eax),%eax
0820af91 +0x10d:  mov    (%eax),%edx
0820af93 +0x10f:  mov    0xc(%ebp),%eax
0820af96 +0x112:  mov    %eax,0x8(%esp)
0820af9a +0x116:  mov    0xc(%ebp),%eax
0820af9d +0x119:  mov    %eax,0x4(%esp)
0820afa1 +0x11d:  mov    -0xc(%ebp),%eax
0820afa4 +0x120:  mov    %eax,(%esp)
0820afa7 +0x123:  call   *%edx
0820afa9 +0x125:  jmp    0820b02f <+0x1ab>
0820afae +0x12a:  mov    0xc(%ebp),%eax
0820afb1 +0x12d:  mov    %eax,(%esp)
0820afb4 +0x130:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820afb9 +0x135:  test   %eax,%eax
0820afbb +0x137:  sete   %al
0820afbe +0x13a:  test   %al,%al
0820afc0 +0x13c:  je     0820b02b <+0x1a7>
0820afc2 +0x13e:  movl   $0x16,0x8(%esp)
0820afca +0x146:  movl   $0xac,0x4(%esp)
0820afd2 +0x14e:  mov    0xc(%ebp),%eax
0820afd5 +0x151:  mov    %eax,(%esp)
0820afd8 +0x154:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820afdd +0x159:  mov    $0x0,%eax
0820afe2 +0x15e:  jmp    0820b098 <+0x214>
0820afe7 +0x163:  mov    0xc(%ebp),%eax
0820afea +0x166:  mov    %eax,(%esp)
0820afed +0x169:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820aff2 +0x16e:  test   %eax,%eax
0820aff4 +0x170:  sete   %al
0820aff7 +0x173:  test   %al,%al
0820aff9 +0x175:  je     0820b02e <+0x1aa>
0820affb +0x177:  mov    $0x0,%eax
0820b000 +0x17c:  jmp    0820b098 <+0x214>
0820b005 +0x181:  movl   $0x0,0xc(%esp)
0820b00d +0x189:  movl   $0x0,0x8(%esp)
0820b015 +0x191:  movl   $&_ZZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b01d +0x199:  movl   $0xa732,(%esp)
0820b024 +0x1a0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b029 +0x1a5:  jmp    0820b098 <+0x214>
0820b02b +0x1a7:  nop
0820b02c +0x1a8:  jmp    0820b02f <+0x1ab>
0820b02e +0x1aa:  nop
0820b02f +0x1ab:  mov    0xc(%ebp),%eax
0820b032 +0x1ae:  mov    %eax,(%esp)
0820b035 +0x1b1:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820b03a +0x1b6:  mov    %eax,(%esp)
0820b03d +0x1b9:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
0820b042 +0x1be:  cmp    $0x1,%eax
0820b045 +0x1c1:  setne  %al
0820b048 +0x1c4:  test   %al,%al
0820b04a +0x1c6:  je     0820b072 <+0x1ee>
0820b04c +0x1c8:  movl   $0x0,0xc(%esp)
0820b054 +0x1d0:  movl   $0x0,0x8(%esp)
0820b05c +0x1d8:  movl   $&_ZZN21Dispatcher_TryEnchant12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b064 +0x1e0:  movl   $0xa737,(%esp)
0820b06b +0x1e7:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b070 +0x1ec:  jmp    0820b098 <+0x214>
0820b072 +0x1ee:  mov    0xc(%ebp),%eax
0820b075 +0x1f1:  mov    %eax,(%esp)
0820b078 +0x1f4:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820b07d +0x1f9:  mov    -0x14(%ebp),%edx
0820b080 +0x1fc:  mov    %edx,0x8(%esp)
0820b084 +0x200:  mov    0xc(%ebp),%edx
0820b087 +0x203:  mov    %edx,0x4(%esp)
0820b08b +0x207:  mov    %eax,(%esp)
0820b08e +0x20a:  call   0849dfcc <_ZN10expert_job10CEnchanter12OnTryEnchantEP5CUserP18MSG_STATIC_COMMAND>  ; expert_job::CEnchanter::OnTryEnchant(CUser*, MSG_STATIC_COMMAND*)
0820b093 +0x20f:  mov    $0x0,%eax
0820b098 +0x214:  leave
0820b099 +0x215:  ret
```

## 反编译 C

```c
// Dispatcher_TryEnchant::dispatch_sig @ 0x820ae84

/* Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_TryEnchant::dispatch_sig(Dispatcher_TryEnchant *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_STATIC_COMMAND MVar1;
  MSG_STATIC_COMMAND *pMVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  CExpertJob *this_00;
  CEnchanter *this_01;
  
  pMVar2 = (MSG_STATIC_COMMAND *)PacketBuf::get_packet(param_2,0);
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    uVar4 = LineFunc(0xa70b,"virtual int Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    uVar5 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1f);
    if (uVar5 == 0) {
      MVar1 = pMVar2[0xd];
      if (MVar1 == (MSG_STATIC_COMMAND)0x1) {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        if (iVar3 == 0) {
          CUser::SendCmdErrorPacket(param_1,0xac,0x16);
          return 0;
        }
      }
      else if (MVar1 == (MSG_STATIC_COMMAND)0x2) {
        iVar3 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
      else {
        if (MVar1 != (MSG_STATIC_COMMAND)0x0) {
          uVar4 = LineFunc(0xa732,
                           "virtual int Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
          return uVar4;
        }
        puVar6 = (undefined4 *)
                 expert_job::CExpertJobMgr::AcquireExpertJob(GlobalData::s_ExpertJobMgr,1);
        if (puVar6 == (undefined4 *)0x0) {
          CUser::SendCmdErrorPacket(param_1,0xac,0x16);
          return 0;
        }
        (**(code **)*puVar6)(puVar6,param_1,param_1);
      }
      this_00 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      iVar3 = expert_job::CExpertJob::GetType(this_00);
      if (iVar3 == 1) {
        this_01 = (CEnchanter *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        expert_job::CEnchanter::OnTryEnchant(this_01,param_1,pMVar2);
        uVar4 = 0;
      }
      else {
        uVar4 = LineFunc(0xa737,
                         "virtual int Dispatcher_TryEnchant::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xac,uVar5 & 0xff);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
