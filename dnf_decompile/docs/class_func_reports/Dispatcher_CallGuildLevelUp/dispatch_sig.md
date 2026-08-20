# dispatch_sig

`_ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CallGuildLevelUp::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildLevelUp` | `0x082001f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082001f0  _ZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CallGuildLevelUp::dispatch_sig(CUser*, PacketBuf&)
# range [0x082001f0, 0x08200447]
082001f0 +0x000:  push   %ebp
082001f1 +0x001:  mov    %esp,%ebp
082001f3 +0x003:  push   %edi
082001f4 +0x004:  push   %esi
082001f5 +0x005:  push   %ebx
082001f6 +0x006:  sub    $0x6c,%esp
082001f9 +0x009:  mov    0xc(%ebp),%eax
082001fc +0x00c:  mov    %eax,(%esp)
082001ff +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08200204 +0x014:  cmp    $0x2,%eax
08200207 +0x017:  jle    08200218 <+0x28>
08200209 +0x019:  mov    0xc(%ebp),%eax
0820020c +0x01c:  mov    %eax,(%esp)
0820020f +0x01f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08200214 +0x024:  test   %eax,%eax
08200216 +0x026:  jne    0820021f <+0x2f>
08200218 +0x028:  mov    $0x1,%eax
0820021d +0x02d:  jmp    08200224 <+0x34>
0820021f +0x02f:  mov    $0x0,%eax
08200224 +0x034:  test   %al,%al
08200226 +0x036:  je     08200251 <+0x61>
08200228 +0x038:  movl   $0x0,0xc(%esp)
08200230 +0x040:  movl   $0x0,0x8(%esp)
08200238 +0x048:  movl   $&_ZZN27Dispatcher_CallGuildLevelUp12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08200240 +0x050:  movl   $0x947f,(%esp)
08200247 +0x057:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820024c +0x05c:  jmp    08200440 <+0x250>
08200251 +0x061:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
08200256 +0x066:  movl   $0x1d,0xc(%esp)
0820025e +0x06e:  movl   $0x1,0x8(%esp)
08200266 +0x076:  mov    0xc(%ebp),%edx
08200269 +0x079:  mov    %edx,0x4(%esp)
0820026d +0x07d:  mov    %eax,(%esp)
08200270 +0x080:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
08200275 +0x085:  test   %al,%al
08200277 +0x087:  je     0820029d <+0xad>
08200279 +0x089:  movl   $0xd1,0x8(%esp)
08200281 +0x091:  mov    0xc(%ebp),%eax
08200284 +0x094:  mov    %eax,0x4(%esp)
08200288 +0x098:  mov    0x8(%ebp),%eax
0820028b +0x09b:  mov    %eax,(%esp)
0820028e +0x09e:  call   08200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>  ; Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char)
08200293 +0x0a3:  mov    $0x0,%eax
08200298 +0x0a8:  jmp    08200440 <+0x250>
0820029d +0x0ad:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
082002a2 +0x0b2:  movl   $0x7,0x8(%esp)
082002aa +0x0ba:  mov    0xc(%ebp),%edx
082002ad +0x0bd:  mov    %edx,0x4(%esp)
082002b1 +0x0c1:  mov    %eax,(%esp)
082002b4 +0x0c4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
082002b9 +0x0c9:  mov    %eax,-0x24(%ebp)
082002bc +0x0cc:  cmpl   $0x0,-0x24(%ebp)
082002c0 +0x0d0:  je     082002e8 <+0xf8>
082002c2 +0x0d2:  mov    -0x24(%ebp),%eax
082002c5 +0x0d5:  movzbl %al,%eax
082002c8 +0x0d8:  mov    %eax,0x8(%esp)
082002cc +0x0dc:  mov    0xc(%ebp),%eax
082002cf +0x0df:  mov    %eax,0x4(%esp)
082002d3 +0x0e3:  mov    0x8(%ebp),%eax
082002d6 +0x0e6:  mov    %eax,(%esp)
082002d9 +0x0e9:  call   08200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>  ; Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char)
082002de +0x0ee:  mov    $0x0,%eax
082002e3 +0x0f3:  jmp    08200440 <+0x250>
082002e8 +0x0f8:  movl   $0x0,-0x28(%ebp)
082002ef +0x0ff:  lea    -0x28(%ebp),%eax
082002f2 +0x102:  mov    %eax,0x4(%esp)
082002f6 +0x106:  mov    0xc(%ebp),%eax
082002f9 +0x109:  mov    %eax,(%esp)
082002fc +0x10c:  call   0866c27e <_ZN5CUser17CheckGuildLevelUpERj>  ; CUser::CheckGuildLevelUp(unsigned int&)
08200301 +0x111:  mov    %eax,-0x20(%ebp)
08200304 +0x114:  cmpl   $0x0,-0x20(%ebp)
08200308 +0x118:  je     08200330 <+0x140>
0820030a +0x11a:  mov    -0x20(%ebp),%eax
0820030d +0x11d:  movzbl %al,%eax
08200310 +0x120:  mov    %eax,0x8(%esp)
08200314 +0x124:  mov    0xc(%ebp),%eax
08200317 +0x127:  mov    %eax,0x4(%esp)
0820031b +0x12b:  mov    0x8(%ebp),%eax
0820031e +0x12e:  mov    %eax,(%esp)
08200321 +0x131:  call   08200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>  ; Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char)
08200326 +0x136:  mov    $0x0,%eax
0820032b +0x13b:  jmp    08200440 <+0x250>
08200330 +0x140:  mov    -0x20(%ebp),%eax
08200333 +0x143:  movzbl %al,%eax
08200336 +0x146:  mov    %eax,0x8(%esp)
0820033a +0x14a:  mov    0xc(%ebp),%eax
0820033d +0x14d:  mov    %eax,0x4(%esp)
08200341 +0x151:  mov    0x8(%ebp),%eax
08200344 +0x154:  mov    %eax,(%esp)
08200347 +0x157:  call   08200126 <_ZN27Dispatcher_CallGuildLevelUp25send_packet_guild_levelupEP5CUserh>  ; Dispatcher_CallGuildLevelUp::send_packet_guild_levelup(CUser*, unsigned char)
0820034c +0x15c:  mov    -0x28(%ebp),%eax
0820034f +0x15f:  mov    %eax,-0x4c(%ebp)
08200352 +0x162:  mov    0xc(%ebp),%eax
08200355 +0x165:  mov    %eax,(%esp)
08200358 +0x168:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0820035d +0x16d:  mov    %eax,%edi
0820035f +0x16f:  mov    0xc(%ebp),%eax
08200362 +0x172:  mov    %eax,(%esp)
08200365 +0x175:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0820036a +0x17a:  mov    %eax,%esi
0820036c +0x17c:  mov    0xc(%ebp),%eax
0820036f +0x17f:  mov    %eax,(%esp)
08200372 +0x182:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08200377 +0x187:  mov    %eax,%ebx
08200379 +0x189:  mov    0xc(%ebp),%eax
0820037c +0x18c:  mov    %eax,(%esp)
0820037f +0x18f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08200384 +0x194:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0820038a +0x19a:  mov    %eax,0x4(%esp)
0820038e +0x19e:  mov    %edx,(%esp)
08200391 +0x1a1:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08200396 +0x1a6:  mov    -0x4c(%ebp),%edx
08200399 +0x1a9:  mov    %edx,0x10(%esp)
0820039d +0x1ad:  mov    %edi,0xc(%esp)
082003a1 +0x1b1:  mov    %esi,0x8(%esp)
082003a5 +0x1b5:  mov    %ebx,0x4(%esp)
082003a9 +0x1b9:  mov    %eax,(%esp)
082003ac +0x1bc:  call   0846dd8a <_ZN17CGuildServerProxy16SendGuildLevelupEijjj>  ; CGuildServerProxy::SendGuildLevelup(int, unsigned int, unsigned int, unsigned int)
082003b1 +0x1c1:  mov    0xc(%ebp),%eax
082003b4 +0x1c4:  mov    %eax,(%esp)
082003b7 +0x1c7:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
082003bc +0x1cc:  mov    %eax,-0x1c(%ebp)
082003bf +0x1cf:  lea    -0x42(%ebp),%eax
082003c2 +0x1d2:  mov    %eax,(%esp)
082003c5 +0x1d5:  call   082344de <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9b88>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9b88
082003ca +0x1da:  mov    -0x1c(%ebp),%eax
082003cd +0x1dd:  movzbl 0x1b(%eax),%eax
082003d1 +0x1e1:  add    $0x1,%eax
082003d4 +0x1e4:  mov    %al,-0x2b(%ebp)
082003d7 +0x1e7:  mov    -0x1c(%ebp),%eax
082003da +0x1ea:  movl   $0x16,0x8(%esp)
082003e2 +0x1f2:  mov    %eax,0x4(%esp)
082003e6 +0x1f6:  lea    -0x42(%ebp),%eax
082003e9 +0x1f9:  mov    %eax,(%esp)
082003ec +0x1fc:  call   0807d8a0 <_init+0x198>
082003f1 +0x201:  mov    -0x1c(%ebp),%eax
082003f4 +0x204:  movzbl 0x95(%eax),%eax
082003fb +0x20b:  mov    %al,-0x2a(%ebp)
082003fe +0x20e:  mov    0xc(%ebp),%eax
08200401 +0x211:  mov    %eax,(%esp)
08200404 +0x214:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08200409 +0x219:  mov    %eax,%ebx
0820040b +0x21b:  mov    0xc(%ebp),%eax
0820040e +0x21e:  mov    %eax,(%esp)
08200411 +0x221:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08200416 +0x226:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0820041c +0x22c:  mov    %eax,0x4(%esp)
08200420 +0x230:  mov    %edx,(%esp)
08200423 +0x233:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08200428 +0x238:  lea    -0x42(%ebp),%edx
0820042b +0x23b:  mov    %edx,0x8(%esp)
0820042f +0x23f:  mov    %ebx,0x4(%esp)
08200433 +0x243:  mov    %eax,(%esp)
08200436 +0x246:  call   0846e95e <_ZN17CGuildServerProxy20ModifyGuildInfoProxyEjR12STGuildProxy>  ; CGuildServerProxy::ModifyGuildInfoProxy(unsigned int, STGuildProxy&)
0820043b +0x24b:  mov    $0x0,%eax
08200440 +0x250:  add    $0x6c,%esp
08200443 +0x253:  pop    %ebx
08200444 +0x254:  pop    %esi
08200445 +0x255:  pop    %edi
08200446 +0x256:  pop    %ebp
08200447 +0x257:  ret
```

## 反编译 C

```c
// Dispatcher_CallGuildLevelUp::dispatch_sig @ 0x82001f0

/* Dispatcher_CallGuildLevelUp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_CallGuildLevelUp::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ServiceRestrictManager *pSVar5;
  uint uVar6;
  uint uVar7;
  CGuildServerProxy *pCVar8;
  uint uVar9;
  STGuildProxy local_46 [23];
  char local_2f;
  undefined1 local_2e;
  uint local_2c;
  int local_28;
  int local_24;
  void *local_20;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08200224;
    }
  }
  bVar1 = true;
LAB_08200224:
  if (bVar1) {
    uVar4 = LineFunc(0x947f,
                     "virtual int Dispatcher_CallGuildLevelUp::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_2,1,0x1d);
    if (cVar2 == '\0') {
      local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,7);
      if (local_28 == 0) {
        local_2c = 0;
        local_24 = CUser::CheckGuildLevelUp((CUser *)param_2,&local_2c);
        if (local_24 == 0) {
          send_packet_guild_levelup((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,'\0');
          uVar9 = local_2c;
          uVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          iVar3 = CUser::GetUID((CUser *)param_2);
          uVar4 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar4);
          CGuildServerProxy::SendGuildLevelup(pCVar8,iVar3,uVar7,uVar6,uVar9);
          local_20 = (void *)CUser::GetGuildDBInfo((CUser *)param_2);
          STGuildProxy::STGuildProxy(local_46);
          local_2f = *(char *)((int)local_20 + 0x1b) + '\x01';
          memcpy(local_46,local_20,0x16);
          local_2e = *(undefined1 *)((int)local_20 + 0x95);
          uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
          uVar4 = CUser::GetServerGroup((CUser *)param_2);
          pCVar8 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,uVar4);
          CGuildServerProxy::ModifyGuildInfoProxy(pCVar8,uVar9,local_46);
          uVar4 = 0;
        }
        else {
          send_packet_guild_levelup
                    ((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,(uchar)local_24);
          uVar4 = 0;
        }
      }
      else {
        send_packet_guild_levelup
                  ((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,(uchar)local_28);
        uVar4 = 0;
      }
    }
    else {
      send_packet_guild_levelup((Dispatcher_CallGuildLevelUp *)param_1,(CUser *)param_2,0xd1);
      uVar4 = 0;
    }
  }
  return uVar4;
}
```
