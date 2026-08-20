# dispatch_sig

`_ZN24Inter_GuildExpBookDelete12dispatch_sigEP5CUserPci`

`Inter_GuildExpBookDelete::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildExpBookDelete` | `0x084e2f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e2f1e  _ZN24Inter_GuildExpBookDelete12dispatch_sigEP5CUserPci
#           Inter_GuildExpBookDelete::dispatch_sig(CUser*, char*, int)
# range [0x084e2f1e, 0x084e3081]
084e2f1e +0x000:  push   %ebp
084e2f1f +0x001:  mov    %esp,%ebp
084e2f21 +0x003:  push   %esi
084e2f22 +0x004:  push   %ebx
084e2f23 +0x005:  sub    $0x50,%esp
084e2f26 +0x008:  mov    0x10(%ebp),%eax
084e2f29 +0x00b:  mov    %eax,-0x10(%ebp)
084e2f2c +0x00e:  mov    -0x10(%ebp),%eax
084e2f2f +0x011:  mov    0xa(%eax),%ebx
084e2f32 +0x014:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084e2f37 +0x019:  movl   $0x2,0x8(%esp)
084e2f3f +0x021:  mov    %ebx,0x4(%esp)
084e2f43 +0x025:  mov    %eax,(%esp)
084e2f46 +0x028:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084e2f4b +0x02d:  mov    %eax,-0xc(%ebp)
084e2f4e +0x030:  cmpl   $0x0,-0xc(%ebp)
084e2f52 +0x034:  jne    084e2fc7 <+0xa9>
084e2f54 +0x036:  mov    -0x10(%ebp),%eax
084e2f57 +0x039:  mov    0x16(%eax),%edx
084e2f5a +0x03c:  mov    -0x10(%ebp),%eax
084e2f5d +0x03f:  mov    0xe(%eax),%eax
084e2f60 +0x042:  mov    %edx,0x8(%esp)
084e2f64 +0x046:  movl   $0x1,0x4(%esp)
084e2f6c +0x04e:  mov    %eax,(%esp)
084e2f6f +0x051:  call   0843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>  ; DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP)
084e2f74 +0x056:  lea    -0x26(%ebp),%eax
084e2f77 +0x059:  mov    %eax,(%esp)
084e2f7a +0x05c:  call   084e950a <_GLOBAL__I__Z7getUserj+0x4bc>  ; global constructors keyed to getUser(unsigned int)+0x4bc
084e2f7f +0x061:  mov    -0x10(%ebp),%eax
084e2f82 +0x064:  mov    0x16(%eax),%eax
084e2f85 +0x067:  mov    %eax,-0x18(%ebp)
084e2f88 +0x06a:  mov    -0x10(%ebp),%eax
084e2f8b +0x06d:  mov    0x12(%eax),%eax
084e2f8e +0x070:  mov    %eax,-0x1c(%ebp)
084e2f91 +0x073:  movzwl -0x24(%ebp),%eax
084e2f95 +0x077:  movzwl %ax,%esi
084e2f98 +0x07a:  lea    -0x26(%ebp),%ebx
084e2f9b +0x07d:  mov    -0x10(%ebp),%eax
084e2f9e +0x080:  mov    0x16(%eax),%edx
084e2fa1 +0x083:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084e2fa6 +0x088:  mov    %edx,0x4(%esp)
084e2faa +0x08c:  mov    %eax,(%esp)
084e2fad +0x08f:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e2fb2 +0x094:  mov    %esi,0x8(%esp)
084e2fb6 +0x098:  mov    %ebx,0x4(%esp)
084e2fba +0x09c:  mov    %eax,(%esp)
084e2fbd +0x09f:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e2fc2 +0x0a4:  jmp    084e3076 <+0x158>
084e2fc7 +0x0a9:  mov    -0xc(%ebp),%eax
084e2fca +0x0ac:  mov    %eax,(%esp)
084e2fcd +0x0af:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e2fd2 +0x0b4:  test   %eax,%eax
084e2fd4 +0x0b6:  sete   %al
084e2fd7 +0x0b9:  test   %al,%al
084e2fd9 +0x0bb:  je     084e304b <+0x12d>
084e2fdb +0x0bd:  mov    -0x10(%ebp),%eax
084e2fde +0x0c0:  mov    0x16(%eax),%edx
084e2fe1 +0x0c3:  mov    -0x10(%ebp),%eax
084e2fe4 +0x0c6:  mov    0xe(%eax),%eax
084e2fe7 +0x0c9:  mov    %edx,0x8(%esp)
084e2feb +0x0cd:  movl   $0x1,0x4(%esp)
084e2ff3 +0x0d5:  mov    %eax,(%esp)
084e2ff6 +0x0d8:  call   0843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>  ; DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP)
084e2ffb +0x0dd:  lea    -0x3c(%ebp),%eax
084e2ffe +0x0e0:  mov    %eax,(%esp)
084e3001 +0x0e3:  call   084e950a <_GLOBAL__I__Z7getUserj+0x4bc>  ; global constructors keyed to getUser(unsigned int)+0x4bc
084e3006 +0x0e8:  mov    -0x10(%ebp),%eax
084e3009 +0x0eb:  mov    0x16(%eax),%eax
084e300c +0x0ee:  mov    %eax,-0x2e(%ebp)
084e300f +0x0f1:  mov    -0x10(%ebp),%eax
084e3012 +0x0f4:  mov    0x12(%eax),%eax
084e3015 +0x0f7:  mov    %eax,-0x32(%ebp)
084e3018 +0x0fa:  movzwl -0x3a(%ebp),%eax
084e301c +0x0fe:  movzwl %ax,%esi
084e301f +0x101:  lea    -0x3c(%ebp),%ebx
084e3022 +0x104:  mov    -0x10(%ebp),%eax
084e3025 +0x107:  mov    0x16(%eax),%edx
084e3028 +0x10a:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084e302d +0x10f:  mov    %edx,0x4(%esp)
084e3031 +0x113:  mov    %eax,(%esp)
084e3034 +0x116:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e3039 +0x11b:  mov    %esi,0x8(%esp)
084e303d +0x11f:  mov    %ebx,0x4(%esp)
084e3041 +0x123:  mov    %eax,(%esp)
084e3044 +0x126:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084e3049 +0x12b:  jmp    084e3076 <+0x158>
084e304b +0x12d:  mov    -0x10(%ebp),%eax
084e304e +0x130:  mov    0x16(%eax),%edx
084e3051 +0x133:  mov    -0x10(%ebp),%eax
084e3054 +0x136:  mov    0xe(%eax),%eax
084e3057 +0x139:  mov    %edx,0x8(%esp)
084e305b +0x13d:  movl   $0x0,0x4(%esp)
084e3063 +0x145:  mov    %eax,(%esp)
084e3066 +0x148:  call   0843c408 <_ZN21DB_GuildExpBookDelete11makeRequestEji17ENUM_SERVER_GROUP>  ; DB_GuildExpBookDelete::makeRequest(unsigned int, int, ENUM_SERVER_GROUP)
084e306b +0x14d:  mov    -0xc(%ebp),%eax
084e306e +0x150:  mov    %eax,(%esp)
084e3071 +0x153:  call   0867e898 <_ZN5CUser18deleteGuildExpBookEv>  ; CUser::deleteGuildExpBook()
084e3076 +0x158:  mov    $0x0,%eax
084e307b +0x15d:  add    $0x50,%esp
084e307e +0x160:  pop    %ebx
084e307f +0x161:  pop    %esi
084e3080 +0x162:  pop    %ebp
084e3081 +0x163:  ret
```

## 反编译 C

```c
// Inter_GuildExpBookDelete::dispatch_sig @ 0x84e2f1e

/* Inter_GuildExpBookDelete::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildExpBookDelete::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CMonitorServerProxy *pCVar2;
  int iVar3;
  Packet_No_Cache local_40 [2];
  ushort local_3e;
  undefined4 local_36;
  undefined4 local_32;
  Packet_No_Cache local_2a [2];
  ushort local_28;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  CUserCharacInfo *local_10;
  
  local_14 = param_3;
  iVar3 = *(int *)(param_3 + 10);
  iVar1 = G_CGameManager();
  local_10 = (CUserCharacInfo *)CGameManager::getUser(iVar1,iVar3);
  if (local_10 == (CUserCharacInfo *)0x0) {
    DB_GuildExpBookDelete::makeRequest
              (*(undefined4 *)(local_14 + 0xe),1,*(undefined4 *)(local_14 + 0x16));
    Packet_No_Cache::Packet_No_Cache(local_2a);
    local_1c = *(undefined4 *)(local_14 + 0x16);
    local_20 = *(undefined4 *)(local_14 + 0x12);
    pCVar2 = (CMonitorServerProxy *)
             CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                       (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(local_14 + 0x16));
    CMonitorServerProxy::SendPacket(pCVar2,(char *)local_2a,(uint)local_28);
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR(local_10);
    if (iVar3 == 0) {
      DB_GuildExpBookDelete::makeRequest
                (*(undefined4 *)(local_14 + 0xe),1,*(undefined4 *)(local_14 + 0x16));
      Packet_No_Cache::Packet_No_Cache(local_40);
      local_32 = *(undefined4 *)(local_14 + 0x16);
      local_36 = *(undefined4 *)(local_14 + 0x12);
      pCVar2 = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,*(undefined4 *)(local_14 + 0x16));
      CMonitorServerProxy::SendPacket(pCVar2,(char *)local_40,(uint)local_3e);
    }
    else {
      DB_GuildExpBookDelete::makeRequest
                (*(undefined4 *)(local_14 + 0xe),0,*(undefined4 *)(local_14 + 0x16));
      CUser::deleteGuildExpBook((CUser *)local_10);
    }
  }
  return 0;
}
```
