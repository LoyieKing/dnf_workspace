# dispatch_sig

`_ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PutItemForEnchant` | `0x0820b09a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820b09a  _ZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820b09a, 0x0820b179]
0820b09a +0x00:  push   %ebp
0820b09b +0x01:  mov    %esp,%ebp
0820b09d +0x03:  sub    $0x28,%esp
0820b0a0 +0x06:  movl   $0x0,0x4(%esp)
0820b0a8 +0x0e:  mov    0x10(%ebp),%eax
0820b0ab +0x11:  mov    %eax,(%esp)
0820b0ae +0x14:  call   0822b702 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xdac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xdac
0820b0b3 +0x19:  mov    %eax,-0xc(%ebp)
0820b0b6 +0x1c:  mov    0xc(%ebp),%eax
0820b0b9 +0x1f:  mov    %eax,(%esp)
0820b0bc +0x22:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820b0c1 +0x27:  test   %eax,%eax
0820b0c3 +0x29:  sete   %al
0820b0c6 +0x2c:  test   %al,%al
0820b0c8 +0x2e:  je     0820b0f3 <+0x59>
0820b0ca +0x30:  movl   $0x0,0xc(%esp)
0820b0d2 +0x38:  movl   $0x0,0x8(%esp)
0820b0da +0x40:  movl   $&_ZZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b0e2 +0x48:  movl   $0xa744,(%esp)
0820b0e9 +0x4f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b0ee +0x54:  jmp    0820b177 <+0xdd>
0820b0f3 +0x59:  mov    0xc(%ebp),%eax
0820b0f6 +0x5c:  mov    %eax,(%esp)
0820b0f9 +0x5f:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820b0fe +0x64:  test   %eax,%eax
0820b100 +0x66:  sete   %al
0820b103 +0x69:  test   %al,%al
0820b105 +0x6b:  je     0820b10e <+0x74>
0820b107 +0x6d:  mov    $0x0,%eax
0820b10c +0x72:  jmp    0820b177 <+0xdd>
0820b10e +0x74:  mov    0xc(%ebp),%eax
0820b111 +0x77:  mov    %eax,(%esp)
0820b114 +0x7a:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820b119 +0x7f:  mov    %eax,(%esp)
0820b11c +0x82:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
0820b121 +0x87:  cmp    $0x1,%eax
0820b124 +0x8a:  setne  %al
0820b127 +0x8d:  test   %al,%al
0820b129 +0x8f:  je     0820b151 <+0xb7>
0820b12b +0x91:  movl   $0x0,0xc(%esp)
0820b133 +0x99:  movl   $0x0,0x8(%esp)
0820b13b +0xa1:  movl   $&_ZZN28Dispatcher_PutItemForEnchant12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b143 +0xa9:  movl   $0xa74b,(%esp)
0820b14a +0xb0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b14f +0xb5:  jmp    0820b177 <+0xdd>
0820b151 +0xb7:  mov    0xc(%ebp),%eax
0820b154 +0xba:  mov    %eax,(%esp)
0820b157 +0xbd:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0820b15c +0xc2:  mov    -0xc(%ebp),%edx
0820b15f +0xc5:  mov    %edx,0x8(%esp)
0820b163 +0xc9:  mov    0xc(%ebp),%edx
0820b166 +0xcc:  mov    %edx,0x4(%esp)
0820b16a +0xd0:  mov    %eax,(%esp)
0820b16d +0xd3:  call   0849df5e <_ZN10expert_job10CEnchanter19OnPutItemForEnchantEP5CUserP18MSG_STATIC_COMMAND>  ; expert_job::CEnchanter::OnPutItemForEnchant(CUser*, MSG_STATIC_COMMAND*)
0820b172 +0xd8:  mov    $0x0,%eax
0820b177 +0xdd:  leave
0820b178 +0xde:  ret
0820b179 +0xdf:  nop
```

## 反编译 C

```c
// Dispatcher_PutItemForEnchant::dispatch_sig @ 0x820b09a

/* Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_PutItemForEnchant::dispatch_sig
          (Dispatcher_PutItemForEnchant *this,CUser *param_1,PacketBuf *param_2)

{
  MSG_STATIC_COMMAND *pMVar1;
  int iVar2;
  undefined4 uVar3;
  CExpertJob *this_00;
  CEnchanter *this_01;
  
  pMVar1 = (MSG_STATIC_COMMAND *)PacketBuf::get_packet(param_2,0);
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xa744,
                     "virtual int Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
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
        expert_job::CEnchanter::OnPutItemForEnchant(this_01,param_1,pMVar1);
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xa74b,
                         "virtual int Dispatcher_PutItemForEnchant::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
  }
  return uVar3;
}
```
