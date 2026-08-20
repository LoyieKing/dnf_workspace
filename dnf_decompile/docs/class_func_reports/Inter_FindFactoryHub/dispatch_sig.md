# dispatch_sig

`_ZN20Inter_FindFactoryHub12dispatch_sigEP5CUserPci`

`Inter_FindFactoryHub::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_FindFactoryHub` | `0x084dc97a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dc97a  _ZN20Inter_FindFactoryHub12dispatch_sigEP5CUserPci
#           Inter_FindFactoryHub::dispatch_sig(CUser*, char*, int)
# range [0x084dc97a, 0x084dcaed]
084dc97a +0x000:  push   %ebp
084dc97b +0x001:  mov    %esp,%ebp
084dc97d +0x003:  push   %ebx
084dc97e +0x004:  sub    $0x64,%esp
084dc981 +0x007:  mov    0x10(%ebp),%eax
084dc984 +0x00a:  mov    %eax,-0x10(%ebp)
084dc987 +0x00d:  cmpl   $0x0,0xc(%ebp)
084dc98b +0x011:  je     084dcae2 <+0x168>
084dc991 +0x017:  mov    -0x10(%ebp),%eax
084dc994 +0x01a:  mov    (%eax),%eax
084dc996 +0x01c:  mov    %eax,0x8(%esp)
084dc99a +0x020:  movl   $0x2c0,0x4(%esp)
084dc9a2 +0x028:  mov    0xc(%ebp),%eax
084dc9a5 +0x02b:  mov    %eax,(%esp)
084dc9a8 +0x02e:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
084dc9ad +0x033:  mov    %eax,%ebx
084dc9af +0x035:  mov    0xc(%ebp),%eax
084dc9b2 +0x038:  mov    %eax,(%esp)
084dc9b5 +0x03b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084dc9ba +0x040:  movl   $0x0,0x14(%esp)
084dc9c2 +0x048:  mov    %ebx,0x10(%esp)
084dc9c6 +0x04c:  movl   $0x1,0xc(%esp)
084dc9ce +0x054:  movl   $0x2c0,0x8(%esp)
084dc9d6 +0x05c:  mov    0xc(%ebp),%edx
084dc9d9 +0x05f:  mov    %edx,0x4(%esp)
084dc9dd +0x063:  mov    %eax,(%esp)
084dc9e0 +0x066:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084dc9e5 +0x06b:  mov    -0x10(%ebp),%eax
084dc9e8 +0x06e:  movzbl 0x4(%eax),%eax
084dc9ec +0x072:  test   %al,%al
084dc9ee +0x074:  je     084dca44 <+0xca>
084dc9f0 +0x076:  mov    -0x10(%ebp),%eax
084dc9f3 +0x079:  mov    (%eax),%eax
084dc9f5 +0x07b:  mov    %eax,0x8(%esp)
084dc9f9 +0x07f:  movl   $0x2bd,0x4(%esp)
084dca01 +0x087:  mov    0xc(%ebp),%eax
084dca04 +0x08a:  mov    %eax,(%esp)
084dca07 +0x08d:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
084dca0c +0x092:  mov    %eax,%ebx
084dca0e +0x094:  mov    0xc(%ebp),%eax
084dca11 +0x097:  mov    %eax,(%esp)
084dca14 +0x09a:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084dca19 +0x09f:  movl   $0x0,0x14(%esp)
084dca21 +0x0a7:  mov    %ebx,0x10(%esp)
084dca25 +0x0ab:  movl   $0x1,0xc(%esp)
084dca2d +0x0b3:  movl   $0x2bd,0x8(%esp)
084dca35 +0x0bb:  mov    0xc(%ebp),%edx
084dca38 +0x0be:  mov    %edx,0x4(%esp)
084dca3c +0x0c2:  mov    %eax,(%esp)
084dca3f +0x0c5:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084dca44 +0x0ca:  lea    -0x43(%ebp),%eax
084dca47 +0x0cd:  mov    %eax,(%esp)
084dca4a +0x0d0:  call   084e94a4 <_GLOBAL__I__Z7getUserj+0x456>  ; global constructors keyed to getUser(unsigned int)+0x456
084dca4f +0x0d5:  mov    0xc(%ebp),%eax
084dca52 +0x0d8:  mov    %eax,(%esp)
084dca55 +0x0db:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084dca5a +0x0e0:  mov    %eax,-0x39(%ebp)
084dca5d +0x0e3:  mov    -0x10(%ebp),%eax
084dca60 +0x0e6:  add    $0x5,%eax
084dca63 +0x0e9:  mov    %eax,(%esp)
084dca66 +0x0ec:  call   0807e3b0 <_init+0xca8>
084dca6b +0x0f1:  mov    %al,-0x35(%ebp)
084dca6e +0x0f4:  mov    -0x10(%ebp),%eax
084dca71 +0x0f7:  add    $0x5,%eax
084dca74 +0x0fa:  movl   $0x1e,0x8(%esp)
084dca7c +0x102:  mov    %eax,0x4(%esp)
084dca80 +0x106:  lea    -0x43(%ebp),%eax
084dca83 +0x109:  add    $0xf,%eax
084dca86 +0x10c:  mov    %eax,(%esp)
084dca89 +0x10f:  call   0807d8d0 <_init+0x1c8>
084dca8e +0x114:  movw   $0x2c1,-0x16(%ebp)
084dca94 +0x11a:  mov    0xc(%ebp),%eax
084dca97 +0x11d:  mov    %eax,(%esp)
084dca9a +0x120:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084dca9f +0x125:  mov    %eax,-0x14(%ebp)
084dcaa2 +0x128:  movw   $0x33,-0x41(%ebp)
084dcaa8 +0x12e:  movl   $0x33,-0xc(%ebp)
084dcaaf +0x135:  lea    -0x43(%ebp),%ebx
084dcab2 +0x138:  mov    0xc(%ebp),%eax
084dcab5 +0x13b:  mov    %eax,(%esp)
084dcab8 +0x13e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084dcabd +0x143:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084dcac3 +0x149:  mov    %eax,0x4(%esp)
084dcac7 +0x14d:  mov    %edx,(%esp)
084dcaca +0x150:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084dcacf +0x155:  mov    -0xc(%ebp),%edx
084dcad2 +0x158:  mov    %edx,0x8(%esp)
084dcad6 +0x15c:  mov    %ebx,0x4(%esp)
084dcada +0x160:  mov    %eax,(%esp)
084dcadd +0x163:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084dcae2 +0x168:  mov    $0x0,%eax
084dcae7 +0x16d:  add    $0x64,%esp
084dcaea +0x170:  pop    %ebx
084dcaeb +0x171:  pop    %ebp
084dcaec +0x172:  ret
084dcaed +0x173:  nop
```

## 反编译 C

```c
// Inter_FindFactoryHub::dispatch_sig @ 0x84dc97a

/* Inter_FindFactoryHub::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_FindFactoryHub::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  size_t sVar3;
  CMonitorServerProxy *this;
  Packet_Monitor_Find_Factory_Hub_User local_47 [2];
  undefined2 local_45;
  undefined4 local_3d;
  undefined1 local_39;
  char acStack_38 [30];
  undefined2 local_1a;
  undefined4 local_18;
  int *local_14;
  int local_10;
  
  local_14 = (int *)param_3;
  if (param_2 != (char *)0x0) {
    uVar1 = CUser::SetETC((CUser *)param_2,0x2c0,*(int *)param_3);
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,0x2c0,1,uVar1,0);
    if ((char)local_14[1] != '\0') {
      uVar1 = CUser::SetETC((CUser *)param_2,0x2bd,*local_14);
      pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,0x2bd,1,uVar1,0);
    }
    Packet_Monitor_Find_Factory_Hub_User::Packet_Monitor_Find_Factory_Hub_User(local_47);
    local_3d = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    sVar3 = strlen((char *)((int)local_14 + 5));
    local_39 = (undefined1)sVar3;
    strncpy(acStack_38,(char *)((int)local_14 + 5),0x1e);
    local_1a = 0x2c1;
    local_18 = CUser::get_acc_id((CUser *)param_2);
    local_45 = 0x33;
    local_10 = 0x33;
    uVar1 = CUser::GetServerGroup((CUser *)param_2);
    this = (CMonitorServerProxy *)
           CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                     (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendPacket(this,(char *)local_47,local_10);
  }
  return 0;
}
```
