# WriteLogChatMsg

`_ZN9GameWorld15WriteLogChatMsgEP5CUsercPc`

`GameWorld::WriteLogChatMsg(CUser*, char, char*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c9638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c9638  _ZN9GameWorld15WriteLogChatMsgEP5CUsercPc
#           GameWorld::WriteLogChatMsg(CUser*, char, char*)
# range [0x086c9638, 0x086c975d]
086c9638 +0x000:  push   %ebp
086c9639 +0x001:  mov    %esp,%ebp
086c963b +0x003:  push   %edi
086c963c +0x004:  push   %esi
086c963d +0x005:  push   %ebx
086c963e +0x006:  sub    $0x15c,%esp
086c9644 +0x00c:  mov    0x10(%ebp),%eax
086c9647 +0x00f:  mov    %al,-0x12c(%ebp)
086c964d +0x015:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
086c9652 +0x01a:  mov    %eax,(%esp)
086c9655 +0x01d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
086c965a +0x022:  cmp    $0x6,%eax
086c965d +0x025:  sete   %al
086c9660 +0x028:  test   %al,%al
086c9662 +0x02a:  je     086c9752 <+0x11a>
086c9668 +0x030:  cmpl   $0x0,0xc(%ebp)
086c966c +0x034:  je     086c9752 <+0x11a>
086c9672 +0x03a:  lea    -0x120(%ebp),%ebx
086c9678 +0x040:  mov    $0x0,%eax
086c967d +0x045:  mov    $0x40,%edx
086c9682 +0x04a:  mov    %ebx,%edi
086c9684 +0x04c:  mov    %edx,%ecx
086c9686 +0x04e:  rep stos %eax,%es:(%edi)
086c9688 +0x050:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086c968d +0x055:  mov    %eax,(%esp)
086c9690 +0x058:  call   080da39a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x537>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x537
086c9695 +0x05d:  mov    %eax,0x8(%esp)
086c9699 +0x061:  movl   $"./log/%s/GuildWarChat",0x4(%esp)
086c96a1 +0x069:  lea    -0x120(%ebp),%eax
086c96a7 +0x06f:  mov    %eax,(%esp)
086c96aa +0x072:  call   0807e440 <_init+0xd38>
086c96af +0x077:  mov    0xc(%ebp),%eax
086c96b2 +0x07a:  mov    %eax,(%esp)
086c96b5 +0x07d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c96ba +0x082:  mov    %eax,-0x134(%ebp)
086c96c0 +0x088:  mov    0xc(%ebp),%eax
086c96c3 +0x08b:  mov    %eax,(%esp)
086c96c6 +0x08e:  call   0822fe74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x551e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x551e
086c96cb +0x093:  cwtl
086c96cc +0x094:  mov    %eax,-0x130(%ebp)
086c96d2 +0x09a:  mov    0xc(%ebp),%eax
086c96d5 +0x09d:  mov    %eax,(%esp)
086c96d8 +0x0a0:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
086c96dd +0x0a5:  mov    %eax,%esi
086c96df +0x0a7:  mov    0xc(%ebp),%eax
086c96e2 +0x0aa:  mov    %eax,(%esp)
086c96e5 +0x0ad:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086c96ea +0x0b2:  mov    %eax,%ebx
086c96ec +0x0b4:  movsbl -0x12c(%ebp),%edi
086c96f3 +0x0bb:  movl   $0xd6d,0x8(%esp)
086c96fb +0x0c3:  movl   $&_ZZN9GameWorld15WriteLogChatMsgEP5CUsercPcE19__PRETTY_FUNCTION__,0x4(%esp)
086c9703 +0x0cb:  lea    -0x20(%ebp),%eax
086c9706 +0x0ce:  mov    %eax,(%esp)
086c9709 +0x0d1:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
086c970e +0x0d6:  mov    -0x134(%ebp),%eax
086c9714 +0x0dc:  mov    %eax,0x20(%esp)
086c9718 +0x0e0:  mov    -0x130(%ebp),%ecx
086c971e +0x0e6:  mov    %ecx,0x1c(%esp)
086c9722 +0x0ea:  mov    %esi,0x18(%esp)
086c9726 +0x0ee:  mov    %ebx,0x14(%esp)
086c972a +0x0f2:  mov    0x14(%ebp),%eax
086c972d +0x0f5:  mov    %eax,0x10(%esp)
086c9731 +0x0f9:  mov    %edi,0xc(%esp)
086c9735 +0x0fd:  movl   $"T:%d\tMsg:%s\tC_Name:%s\tG_Key:%d\tR_Idx:%d\tState:%d",0x8(%esp)
086c973d +0x105:  lea    -0x120(%ebp),%eax
086c9743 +0x10b:  mov    %eax,0x4(%esp)
086c9747 +0x10f:  lea    -0x20(%ebp),%eax
086c974a +0x112:  mov    %eax,(%esp)
086c974d +0x115:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
086c9752 +0x11a:  add    $0x15c,%esp
086c9758 +0x120:  pop    %ebx
086c9759 +0x121:  pop    %esi
086c975a +0x122:  pop    %edi
086c975b +0x123:  pop    %ebp
086c975c +0x124:  ret
086c975d +0x125:  nop
```

## 反编译 C

```c
// GameWorld::WriteLogChatMsg @ 0x86c9638

/* GameWorld::WriteLogChatMsg(CUser*, char, char*) */

void __thiscall
GameWorld::WriteLogChatMsg(GameWorld *this,CUser *param_1,char param_2,char *param_3)

{
  short sVar1;
  GameWorld *this_00;
  int iVar2;
  CEnvironment *this_01;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte bVar7;
  char local_124 [256];
  CMyFileLog local_24 [20];
  
  bVar7 = 0;
  this_00 = (GameWorld *)G_GameWorld();
  iVar2 = GetChannelType(this_00);
  if ((iVar2 == 6) && (param_1 != (CUser *)0x0)) {
    pcVar6 = local_124;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar7 * -2 + 1) * 4;
    }
    this_01 = (CEnvironment *)G_CEnvironment();
    uVar3 = CEnvironment::get_file_name(this_01);
    sprintf(local_124,"./log/%s/GuildWarChat",uVar3);
    uVar3 = CUser::get_state(param_1);
    sVar1 = CUser::GetPvpIndex(param_1);
    uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    CMyFileLog::CMyFileLog(local_24,"void GameWorld::WriteLogChatMsg(CUser*, char, char*)",0xd6d);
    CMyFileLog::operator()
              (local_24,local_124,"T:%d\tMsg:%s\tC_Name:%s\tG_Key:%d\tR_Idx:%d\tState:%d",
               (int)param_2,param_3,uVar5,uVar4,(int)sVar1,uVar3);
  }
  return;
}
```
