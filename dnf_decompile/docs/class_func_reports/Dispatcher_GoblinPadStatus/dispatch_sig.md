# dispatch_sig

`_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GoblinPadStatus::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GoblinPadStatus` | `0x082177ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082177ae  _ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GoblinPadStatus::dispatch_sig(CUser*, PacketBuf&)
# range [0x082177ae, 0x082178bb]
082177ae +0x000:  push   %ebp
082177af +0x001:  mov    %esp,%ebp
082177b1 +0x003:  push   %esi
082177b2 +0x004:  push   %ebx
082177b3 +0x005:  sub    $0x20,%esp
082177b6 +0x008:  movb   $0x0,-0x9(%ebp)
082177ba +0x00c:  mov    0xc(%ebp),%eax
082177bd +0x00f:  mov    %eax,(%esp)
082177c0 +0x012:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082177c5 +0x017:  mov    %eax,(%esp)
082177c8 +0x01a:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
082177cd +0x01f:  test   %al,%al
082177cf +0x021:  je     08217817 <+0x69>
082177d1 +0x023:  mov    0xc(%ebp),%eax
082177d4 +0x026:  mov    %eax,(%esp)
082177d7 +0x029:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082177dc +0x02e:  mov    %eax,(%esp)
082177df +0x031:  call   0822ef8e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4638>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4638
082177e4 +0x036:  cmp    $0x2,%eax
082177e7 +0x039:  setg   %al
082177ea +0x03c:  test   %al,%al
082177ec +0x03e:  je     082177f4 <+0x46>
082177ee +0x040:  movb   $0x1,-0x9(%ebp)
082177f2 +0x044:  jmp    0821781b <+0x6d>
082177f4 +0x046:  mov    0xc(%ebp),%eax
082177f7 +0x049:  mov    %eax,(%esp)
082177fa +0x04c:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
082177ff +0x051:  mov    %eax,(%esp)
08217802 +0x054:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
08217807 +0x059:  test   %al,%al
08217809 +0x05b:  je     08217811 <+0x63>
0821780b +0x05d:  movb   $0x2,-0x9(%ebp)
0821780f +0x061:  jmp    0821781b <+0x6d>
08217811 +0x063:  movb   $0x3,-0x9(%ebp)
08217815 +0x067:  jmp    0821781b <+0x6d>
08217817 +0x069:  movb   $0x0,-0x9(%ebp)
0821781b +0x06d:  lea    -0x18(%ebp),%eax
0821781e +0x070:  mov    %eax,(%esp)
08217821 +0x073:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08217826 +0x078:  movl   $0xc4,0x8(%esp)
0821782e +0x080:  movl   $0x1,0x4(%esp)
08217836 +0x088:  lea    -0x18(%ebp),%eax
08217839 +0x08b:  mov    %eax,(%esp)
0821783c +0x08e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08217841 +0x093:  movl   $0x1,0x4(%esp)
08217849 +0x09b:  lea    -0x18(%ebp),%eax
0821784c +0x09e:  mov    %eax,(%esp)
0821784f +0x0a1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08217854 +0x0a6:  movzbl -0x9(%ebp),%eax
08217858 +0x0aa:  mov    %eax,0x4(%esp)
0821785c +0x0ae:  lea    -0x18(%ebp),%eax
0821785f +0x0b1:  mov    %eax,(%esp)
08217862 +0x0b4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08217867 +0x0b9:  movl   $0x1,0x4(%esp)
0821786f +0x0c1:  lea    -0x18(%ebp),%eax
08217872 +0x0c4:  mov    %eax,(%esp)
08217875 +0x0c7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821787a +0x0cc:  lea    -0x18(%ebp),%eax
0821787d +0x0cf:  mov    %eax,0x4(%esp)
08217881 +0x0d3:  mov    0xc(%ebp),%eax
08217884 +0x0d6:  mov    %eax,(%esp)
08217887 +0x0d9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821788c +0x0de:  mov    $0x0,%ebx
08217891 +0x0e3:  lea    -0x18(%ebp),%eax
08217894 +0x0e6:  mov    %eax,(%esp)
08217897 +0x0e9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821789c +0x0ee:  mov    %ebx,%eax
0821789e +0x0f0:  add    $0x20,%esp
082178a1 +0x0f3:  pop    %ebx
082178a2 +0x0f4:  pop    %esi
082178a3 +0x0f5:  pop    %ebp
082178a4 +0x0f6:  ret
082178a5 +0x0f7:  mov    %edx,%ebx
082178a7 +0x0f9:  mov    %eax,%esi
082178a9 +0x0fb:  lea    -0x18(%ebp),%eax
082178ac +0x0fe:  mov    %eax,(%esp)
082178af +0x101:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082178b4 +0x106:  mov    %esi,%eax
082178b6 +0x108:  mov    %ebx,%edx
082178b8 +0x10a:  mov    %eax,(%esp)
082178bb +0x10d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Dispatcher_GoblinPadStatus::dispatch_sig @ 0x82177ae

/* Dispatcher_GoblinPadStatus::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GoblinPadStatus::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  CPad *pCVar2;
  int iVar3;
  PacketGuard local_1c [15];
  byte local_d;
  
  local_d = 0;
  pCVar2 = (CPad *)CUser::getPad((CUser *)param_2);
  cVar1 = Sanicova::CPad::isActivate(pCVar2);
  if (cVar1 == '\0') {
    local_d = 0;
  }
  else {
    pCVar2 = (CPad *)CUser::getPad((CUser *)param_2);
    iVar3 = Sanicova::CPad::getFailCnt(pCVar2);
    if (iVar3 < 3) {
      pCVar2 = (CPad *)CUser::getPad((CUser *)param_2);
      cVar1 = Sanicova::CPad::isCertified(pCVar2);
      if (cVar1 == '\0') {
        local_d = 3;
      }
      else {
        local_d = 2;
      }
    }
    else {
      local_d = 1;
    }
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0821783c to 0821788b has its CatchHandler @ 082178a5 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xc4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
