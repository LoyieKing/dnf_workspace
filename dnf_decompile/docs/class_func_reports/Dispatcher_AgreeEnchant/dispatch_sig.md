# dispatch_sig

`_ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AgreeEnchant::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AgreeEnchant` | `0x0820adc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820adc6  _ZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AgreeEnchant::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820adc6, 0x0820ae83]
0820adc6 +0x00:  push   %ebp
0820adc7 +0x01:  mov    %esp,%ebp
0820adc9 +0x03:  sub    $0x28,%esp
0820adcc +0x06:  movl   $0x0,0x4(%esp)
0820add4 +0x0e:  mov    0x10(%ebp),%eax
0820add7 +0x11:  mov    %eax,(%esp)
0820adda +0x14:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0820addf +0x19:  mov    %eax,-0xc(%ebp)
0820ade2 +0x1c:  mov    0xc(%ebp),%eax
0820ade5 +0x1f:  mov    %eax,(%esp)
0820ade8 +0x22:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820aded +0x27:  test   %eax,%eax
0820adef +0x29:  sete   %al
0820adf2 +0x2c:  test   %al,%al
0820adf4 +0x2e:  je     0820ae1c <+0x56>
0820adf6 +0x30:  movl   $0x0,0xc(%esp)
0820adfe +0x38:  movl   $0x0,0x8(%esp)
0820ae06 +0x40:  movl   $&_ZZN23Dispatcher_AgreeEnchant12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820ae0e +0x48:  movl   $0xa6f1,(%esp)
0820ae15 +0x4f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820ae1a +0x54:  jmp    0820ae81 <+0xbb>
0820ae1c +0x56:  mov    0xc(%ebp),%eax
0820ae1f +0x59:  mov    %eax,(%esp)
0820ae22 +0x5c:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820ae27 +0x61:  test   %eax,%eax
0820ae29 +0x63:  sete   %al
0820ae2c +0x66:  test   %al,%al
0820ae2e +0x68:  je     0820ae37 <+0x71>
0820ae30 +0x6a:  mov    $0x0,%eax
0820ae35 +0x6f:  jmp    0820ae81 <+0xbb>
0820ae37 +0x71:  mov    0xc(%ebp),%eax
0820ae3a +0x74:  mov    %eax,(%esp)
0820ae3d +0x77:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820ae42 +0x7c:  mov    %eax,(%esp)
0820ae45 +0x7f:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
0820ae4a +0x84:  cmp    $0x1,%eax
0820ae4d +0x87:  setne  %al
0820ae50 +0x8a:  test   %al,%al
0820ae52 +0x8c:  je     0820ae5b <+0x95>
0820ae54 +0x8e:  mov    $0x0,%eax
0820ae59 +0x93:  jmp    0820ae81 <+0xbb>
0820ae5b +0x95:  mov    0xc(%ebp),%eax
0820ae5e +0x98:  mov    %eax,(%esp)
0820ae61 +0x9b:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820ae66 +0xa0:  mov    -0xc(%ebp),%edx
0820ae69 +0xa3:  mov    %edx,0x8(%esp)
0820ae6d +0xa7:  mov    0xc(%ebp),%edx
0820ae70 +0xaa:  mov    %edx,0x4(%esp)
0820ae74 +0xae:  mov    %eax,(%esp)
0820ae77 +0xb1:  call   0849e07e <_ZN10expert_job10CEnchanter14OnAgreeEnchantEP5CUserP18MSG_STATIC_COMMAND>  ; expert_job::CEnchanter::OnAgreeEnchant(CUser*, MSG_STATIC_COMMAND*)
0820ae7c +0xb6:  mov    $0x0,%eax
0820ae81 +0xbb:  leave
0820ae82 +0xbc:  ret
0820ae83 +0xbd:  nop
```

## 反编译 C

```c
// Dispatcher_AgreeEnchant::dispatch_sig @ 0x820adc6

/* Dispatcher_AgreeEnchant::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AgreeEnchant::dispatch_sig
          (Dispatcher_AgreeEnchant *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_STATIC_COMMAND *pMVar1;
  int iVar2;
  undefined4 uVar3;
  CExpertJob *this_00;
  CEnchanter *this_01;
  
  pMVar1 = (MSG_STATIC_COMMAND *)PacketBuf::get_packet(param_2,0);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xa6f1,"virtual int Dispatcher_AgreeEnchant::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      this_00 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
      iVar2 = expert_job::CExpertJob::GetType(this_00);
      if (iVar2 == 1) {
        this_01 = (CEnchanter *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
        expert_job::CEnchanter::OnAgreeEnchant(this_01,param_1,pMVar1);
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
