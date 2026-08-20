# LogHistory

`_ZN5CUser10LogHistoryEPKcz`

`CUser::LogHistory(char const*, ...)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867c8fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867c8fe  _ZN5CUser10LogHistoryEPKcz
#           CUser::LogHistory(char const*, ...)
# range [0x0867c8fe, 0x0867cb6f]
0867c8fe +0x000:  push   %ebp
0867c8ff +0x001:  mov    %esp,%ebp
0867c901 +0x003:  push   %edi
0867c902 +0x004:  push   %esi
0867c903 +0x005:  push   %ebx
0867c904 +0x006:  sub    $0x4bc,%esp
0867c90a +0x00c:  mov    0x8(%ebp),%eax
0867c90d +0x00f:  mov    %eax,(%esp)
0867c910 +0x012:  call   084ec9b8 <_GLOBAL__I__Z7getUserj+0x396a>  ; global constructors keyed to getUser(unsigned int)+0x396a
0867c915 +0x017:  test   %al,%al
0867c917 +0x019:  je     0867c91f <+0x21>
0867c919 +0x01b:  movb   $0x58,-0x19(%ebp)
0867c91d +0x01f:  jmp    0867c923 <+0x25>
0867c91f +0x021:  movb   $0x44,-0x19(%ebp)
0867c923 +0x025:  lea    -0x22(%ebp),%eax
0867c926 +0x028:  mov    %eax,(%esp)
0867c929 +0x02b:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0867c92e +0x030:  movl   $0x4,0x8(%esp)
0867c936 +0x038:  movl   $0x0,0x4(%esp)
0867c93e +0x040:  lea    -0x3a(%ebp),%eax
0867c941 +0x043:  mov    %eax,(%esp)
0867c944 +0x046:  call   0807dcc0 <_init+0x5b8>
0867c949 +0x04b:  mov    0x8(%ebp),%eax
0867c94c +0x04e:  mov    %eax,(%esp)
0867c94f +0x051:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867c954 +0x056:  movl   $0x7,0x4(%esp)
0867c95c +0x05e:  mov    %eax,(%esp)
0867c95f +0x061:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867c964 +0x066:  mov    %eax,0x4(%esp)
0867c968 +0x06a:  lea    -0x3a(%ebp),%eax
0867c96b +0x06d:  mov    %eax,(%esp)
0867c96e +0x070:  call   0807def0 <_init+0x7e8>
0867c973 +0x075:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0867c978 +0x07a:  mov    0x1b0(%eax),%eax
0867c97e +0x080:  mov    %eax,-0x470(%ebp)
0867c984 +0x086:  mov    0x8(%ebp),%eax
0867c987 +0x089:  add    $0xe0,%eax
0867c98c +0x08e:  mov    %eax,(%esp)
0867c98f +0x091:  call   082f1bf4 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1978>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1978
0867c994 +0x096:  movzwl %ax,%eax
0867c997 +0x099:  mov    %eax,-0x46c(%ebp)
0867c99d +0x09f:  mov    0x8(%ebp),%eax
0867c9a0 +0x0a2:  lea    0x6eef0(%eax),%edx
0867c9a6 +0x0a8:  mov    0x8(%ebp),%eax
0867c9a9 +0x0ab:  add    $0xe0,%eax
0867c9ae +0x0b0:  movl   $0x10,0x8(%esp)
0867c9b6 +0x0b8:  mov    %edx,0x4(%esp)
0867c9ba +0x0bc:  mov    %eax,(%esp)
0867c9bd +0x0bf:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
0867c9c2 +0x0c4:  mov    %eax,-0x468(%ebp)
0867c9c8 +0x0ca:  mov    0x8(%ebp),%eax
0867c9cb +0x0cd:  mov    %eax,(%esp)
0867c9ce +0x0d0:  call   0822fd12 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53bc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53bc
0867c9d3 +0x0d5:  mov    %eax,-0x464(%ebp)
0867c9d9 +0x0db:  mov    0x8(%ebp),%eax
0867c9dc +0x0de:  mov    %eax,(%esp)
0867c9df +0x0e1:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0867c9e4 +0x0e6:  movsbl %al,%eax
0867c9e7 +0x0e9:  mov    %eax,-0x460(%ebp)
0867c9ed +0x0ef:  mov    0x8(%ebp),%eax
0867c9f0 +0x0f2:  mov    %eax,(%esp)
0867c9f3 +0x0f5:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0867c9f8 +0x0fa:  mov    %eax,-0x45c(%ebp)
0867c9fe +0x100:  mov    0x8(%ebp),%eax
0867ca01 +0x103:  mov    %eax,(%esp)
0867ca04 +0x106:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ca09 +0x10b:  mov    %eax,-0x458(%ebp)
0867ca0f +0x111:  mov    0x8(%ebp),%eax
0867ca12 +0x114:  mov    %eax,(%esp)
0867ca15 +0x117:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0867ca1a +0x11c:  mov    %eax,-0x454(%ebp)
0867ca20 +0x122:  mov    0x8(%ebp),%eax
0867ca23 +0x125:  mov    %eax,(%esp)
0867ca26 +0x128:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0867ca2b +0x12d:  test   %eax,%eax
0867ca2d +0x12f:  je     0867ca3e <+0x140>
0867ca2f +0x131:  mov    0x8(%ebp),%eax
0867ca32 +0x134:  mov    %eax,(%esp)
0867ca35 +0x137:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0867ca3a +0x13c:  mov    %eax,%ebx
0867ca3c +0x13e:  jmp    0867ca43 <+0x145>
0867ca3e +0x140:  mov    $"",%ebx
0867ca43 +0x145:  movzbl -0x1c(%ebp),%eax
0867ca47 +0x149:  movsbl %al,%eax
0867ca4a +0x14c:  mov    %eax,-0x450(%ebp)
0867ca50 +0x152:  movzbl -0x1d(%ebp),%eax
0867ca54 +0x156:  movsbl %al,%eax
0867ca57 +0x159:  mov    %eax,-0x44c(%ebp)
0867ca5d +0x15f:  movzbl -0x1e(%ebp),%eax
0867ca61 +0x163:  movsbl %al,%edi
0867ca64 +0x166:  movsbl -0x19(%ebp),%esi
0867ca68 +0x16a:  mov    0x8(%ebp),%eax
0867ca6b +0x16d:  mov    %eax,(%esp)
0867ca6e +0x170:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867ca73 +0x175:  movl   $0x0,0x4(%esp)
0867ca7b +0x17d:  mov    %eax,(%esp)
0867ca7e +0x180:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867ca83 +0x185:  mov    %eax,%edx
0867ca85 +0x187:  mov    0x8(%ebp),%eax
0867ca88 +0x18a:  add    $0x704b0,%eax
0867ca8d +0x18f:  mov    -0x470(%ebp),%ecx
0867ca93 +0x195:  mov    %ecx,0x40(%esp)
0867ca97 +0x199:  mov    -0x46c(%ebp),%ecx
0867ca9d +0x19f:  mov    %ecx,0x3c(%esp)
0867caa1 +0x1a3:  mov    -0x468(%ebp),%ecx
0867caa7 +0x1a9:  mov    %ecx,0x38(%esp)
0867caab +0x1ad:  mov    -0x464(%ebp),%ecx
0867cab1 +0x1b3:  mov    %ecx,0x34(%esp)
0867cab5 +0x1b7:  mov    -0x460(%ebp),%ecx
0867cabb +0x1bd:  mov    %ecx,0x30(%esp)
0867cabf +0x1c1:  mov    -0x45c(%ebp),%ecx
0867cac5 +0x1c7:  mov    %ecx,0x2c(%esp)
0867cac9 +0x1cb:  mov    -0x458(%ebp),%ecx
0867cacf +0x1d1:  mov    %ecx,0x28(%esp)
0867cad3 +0x1d5:  mov    -0x454(%ebp),%ecx
0867cad9 +0x1db:  mov    %ecx,0x24(%esp)
0867cadd +0x1df:  mov    %ebx,0x20(%esp)
0867cae1 +0x1e3:  mov    -0x450(%ebp),%ecx
0867cae7 +0x1e9:  mov    %ecx,0x1c(%esp)
0867caeb +0x1ed:  mov    -0x44c(%ebp),%ecx
0867caf1 +0x1f3:  mov    %ecx,0x18(%esp)
0867caf5 +0x1f7:  mov    %edi,0x14(%esp)
0867caf9 +0x1fb:  mov    %esi,0x10(%esp)
0867cafd +0x1ff:  mov    %edx,0xc(%esp)
0867cb01 +0x203:  mov    %eax,0x8(%esp)
0867cb05 +0x207:  movl   $"\"%s\",%s,%c,%02d%02d%02d,\"%s\",%d,%d,%d,%d,%s,%s,%d,%d, ",0x4(%esp)
0867cb0d +0x20f:  lea    -0x440(%ebp),%eax
0867cb13 +0x215:  mov    %eax,(%esp)
0867cb16 +0x218:  call   0807e440 <_init+0xd38>
0867cb1b +0x21d:  lea    0x10(%ebp),%eax
0867cb1e +0x220:  mov    %eax,-0x40(%ebp)
0867cb21 +0x223:  mov    -0x40(%ebp),%ebx
0867cb24 +0x226:  lea    -0x440(%ebp),%eax
0867cb2a +0x22c:  mov    %eax,(%esp)
0867cb2d +0x22f:  call   0807e3b0 <_init+0xca8>
0867cb32 +0x234:  mov    %eax,%edx
0867cb34 +0x236:  lea    -0x440(%ebp),%eax
0867cb3a +0x23c:  add    %edx,%eax
0867cb3c +0x23e:  mov    %ebx,0x8(%esp)
0867cb40 +0x242:  mov    0xc(%ebp),%edx
0867cb43 +0x245:  mov    %edx,0x4(%esp)
0867cb47 +0x249:  mov    %eax,(%esp)
0867cb4a +0x24c:  call   0807d7d0 <_init+0xc8>
0867cb4f +0x251:  lea    -0x440(%ebp),%eax
0867cb55 +0x257:  mov    %eax,0x4(%esp)
0867cb59 +0x25b:  lea    -0x1a(%ebp),%eax
0867cb5c +0x25e:  mov    %eax,(%esp)
0867cb5f +0x261:  call   0854f990 <_ZN13cHistoryTraceclEPKcz>  ; cHistoryTrace::operator()(char const*, ...)
0867cb64 +0x266:  add    $0x4bc,%esp
0867cb6a +0x26c:  pop    %ebx
0867cb6b +0x26d:  pop    %esi
0867cb6c +0x26e:  pop    %edi
0867cb6d +0x26f:  pop    %ebp
0867cb6e +0x270:  ret
0867cb6f +0x271:  nop
```

## 反编译 C

```c
// CUser::LogHistory @ 0x867c8fe

/* CUser::LogHistory(char const*, ...) */

void __thiscall CUser::LogHistory(CUser *this,char *param_1,...)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  char *__src;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 uVar12;
  size_t sVar13;
  char local_444 [1024];
  undefined1 *local_44;
  char local_3e [24];
  TimeLog_ local_26 [4];
  char local_22;
  char local_21;
  char local_20;
  cHistoryTrace local_1e;
  char local_1d;
  
  cVar2 = isHangameUser(this);
  if (cVar2 == '\0') {
    local_1d = 'D';
  }
  else {
    local_1d = 'X';
  }
  TimeLog_::setTime(local_26);
  memset(local_3e,0,4);
  uVar3 = get_acc_id(this);
  __src = (char *)NumberToString(uVar3,7);
  strcpy(local_3e,__src);
  iVar4 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar4 + 0x1b0);
  uVar3 = CNetwork<4096,450000>::get_port((CNetwork<4096,450000> *)(this + 0xe0));
  uVar5 = CNetwork<4096,450000>::GetPeerIP2
                    ((CNetwork<4096,450000> *)(this + 0xe0),(char *)(this + 0x6eef0),0x10);
  uVar6 = getWebAddress(this);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  uVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  uVar8 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar4 == 0) {
    puVar10 = &DAT_08cedf41;
  }
  else {
    puVar10 = (undefined *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  }
  iVar4 = (int)local_1d;
  uVar11 = get_acc_id(this);
  uVar12 = NumberToString(uVar11,0);
  sprintf(local_444,"\"%s\",%s,%c,%02d%02d%02d,\"%s\",%d,%d,%d,%d,%s,%s,%d,%d, ",this + 0x704b0,
          uVar12,iVar4,(int)local_22,(int)local_21,(int)local_20,puVar10,uVar9,uVar8,uVar7,
          (int)cVar2,uVar6,uVar5,uVar3 & 0xffff,uVar1);
  local_44 = &stack0x0000000c;
  sVar13 = strlen(local_444);
  vsprintf(local_444 + sVar13,param_1,&stack0x0000000c);
  cHistoryTrace::operator()(&local_1e,local_444);
  return;
}
```
