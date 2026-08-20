# _processAvatarGift

`_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji`

`WongWork::CCeraShop::_processAvatarGift(CUser*, int, int, char, char, char const*, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08326036` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08326036  _ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji
#           WongWork::CCeraShop::_processAvatarGift(CUser*, int, int, char, char, char const*, unsigned int, int)
# range [0x08326036, 0x0832619b]
08326036 +0x000:  push   %ebp
08326037 +0x001:  mov    %esp,%ebp
08326039 +0x003:  push   %edi
0832603a +0x004:  push   %ebx
0832603b +0x005:  sub    $0x150,%esp
08326041 +0x00b:  mov    0x18(%ebp),%edx
08326044 +0x00e:  mov    0x1c(%ebp),%eax
08326047 +0x011:  mov    %dl,-0x11c(%ebp)
0832604d +0x017:  mov    %al,-0x120(%ebp)
08326053 +0x01d:  movl   $0x0,-0xc(%ebp)
0832605a +0x024:  cmpl   $0x0,0x14(%ebp)
0832605e +0x028:  je     08326083 <+0x4d>
08326060 +0x02a:  cmpl   $0x16d,0x14(%ebp)
08326067 +0x031:  je     08326083 <+0x4d>
08326069 +0x033:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08326070 +0x03a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08326075 +0x03f:  mov    0x14(%ebp),%edx
08326078 +0x042:  imul   $&_ZL14gUnicodeBuffer+0xac54,%edx,%edx
0832607e +0x048:  add    %edx,%eax
08326080 +0x04a:  mov    %eax,-0xc(%ebp)
08326083 +0x04d:  lea    -0x10c(%ebp),%ebx
08326089 +0x053:  mov    $0x0,%eax
0832608e +0x058:  mov    $0x40,%edx
08326093 +0x05d:  mov    %ebx,%edi
08326095 +0x05f:  mov    %edx,%ecx
08326097 +0x061:  rep stos %eax,%es:(%edi)
08326099 +0x063:  mov    0xc(%ebp),%eax
0832609c +0x066:  mov    %eax,(%esp)
0832609f +0x069:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
083260a4 +0x06e:  mov    %eax,%ebx
083260a6 +0x070:  movl   $0x0,0xc(%esp)
083260ae +0x078:  movl   $"game_server_msg_02",0x8(%esp)
083260b6 +0x080:  movl   $0x4,0x4(%esp)
083260be +0x088:  movl   $&g_scriptStringManager_,(%esp)
083260c5 +0x08f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
083260ca +0x094:  mov    %ebx,0x8(%esp)
083260ce +0x098:  mov    %eax,0x4(%esp)
083260d2 +0x09c:  lea    -0x10c(%ebp),%eax
083260d8 +0x0a2:  mov    %eax,(%esp)
083260db +0x0a5:  call   0807e440 <_init+0xd38>
083260e0 +0x0aa:  mov    0x10(%ebp),%edx
083260e3 +0x0ad:  mov    0x28(%ebp),%eax
083260e6 +0x0b0:  mov    0xc(%ebp),%ecx
083260e9 +0x0b3:  add    $0x79700,%ecx
083260ef +0x0b9:  movl   $0x1,0x10(%esp)
083260f7 +0x0c1:  mov    %edx,0xc(%esp)
083260fb +0x0c5:  movl   $0x2,0x8(%esp)
08326103 +0x0cd:  mov    %eax,0x4(%esp)
08326107 +0x0d1:  mov    %ecx,(%esp)
0832610a +0x0d4:  call   086848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>  ; cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)
0832610f +0x0d9:  mov    0x10(%ebp),%edx
08326112 +0x0dc:  mov    0x28(%ebp),%eax
08326115 +0x0df:  movl   $0x1,0x10(%esp)
0832611d +0x0e7:  mov    %edx,0xc(%esp)
08326121 +0x0eb:  mov    %eax,0x8(%esp)
08326125 +0x0ef:  mov    0x24(%ebp),%eax
08326128 +0x0f2:  mov    %eax,0x4(%esp)
0832612c +0x0f6:  mov    0xc(%ebp),%eax
0832612f +0x0f9:  mov    %eax,(%esp)
08326132 +0x0fc:  call   0868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>  ; CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)
08326137 +0x101:  lea    -0x10c(%ebp),%eax
0832613d +0x107:  mov    %eax,(%esp)
08326140 +0x10a:  call   0807e3b0 <_init+0xca8>
08326145 +0x10f:  mov    %eax,%ecx
08326147 +0x111:  movsbl -0x120(%ebp),%edx
0832614e +0x118:  movsbl -0x11c(%ebp),%eax
08326155 +0x11f:  mov    %ecx,0x20(%esp)
08326159 +0x123:  lea    -0x10c(%ebp),%ecx
0832615f +0x129:  mov    %ecx,0x1c(%esp)
08326163 +0x12d:  mov    0x20(%ebp),%ecx
08326166 +0x130:  mov    %ecx,0x18(%esp)
0832616a +0x134:  mov    %edx,0x14(%esp)
0832616e +0x138:  mov    %eax,0x10(%esp)
08326172 +0x13c:  mov    -0xc(%ebp),%eax
08326175 +0x13f:  mov    %eax,0xc(%esp)
08326179 +0x143:  mov    0x10(%ebp),%eax
0832617c +0x146:  mov    %eax,0x8(%esp)
08326180 +0x14a:  mov    0x28(%ebp),%eax
08326183 +0x14d:  mov    %eax,0x4(%esp)
08326187 +0x151:  mov    0xc(%ebp),%eax
0832618a +0x154:  mov    %eax,(%esp)
0832618d +0x157:  call   08556f16 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMailCashShop(CUser*, int, int, int, char, char, char const*, char const*, int)
08326192 +0x15c:  add    $0x150,%esp
08326198 +0x162:  pop    %ebx
08326199 +0x163:  pop    %edi
0832619a +0x164:  pop    %ebp
0832619b +0x165:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_processAvatarGift @ 0x8326036

/* WongWork::CCeraShop::_processAvatarGift(CUser*, int, int, char, char, char const*, unsigned int,
   int) */

void __thiscall
WongWork::CCeraShop::_processAvatarGift
          (CCeraShop *this,CUser *param_1,int param_2,int param_3,char param_4,char param_5,
          char *param_6,uint param_7,int param_8)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  byte bVar5;
  char local_110 [256];
  int local_10;
  
  bVar5 = 0;
  local_10 = 0;
  if ((param_3 != 0) && (param_3 != 0x16d)) {
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_10 = local_10 + param_3 * 0x15180;
  }
  pcVar2 = local_110;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + ((uint)bVar5 * -2 + 1) * 4;
  }
  uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_02",(bool *)0x0);
  sprintf(local_110,pcVar2,uVar1);
  cUserHistoryLog::SendMailForCeraShopGift
            ((cUserHistoryLog *)(param_1 + 0x79700),param_8,'\x02',param_2,1);
  CUser::SendCeraShopGiftStatisticLog(param_1,param_7,param_8,param_2,1);
  sVar3 = strlen(local_110);
  CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
            (param_1,param_8,param_2,local_10,param_4,param_5,param_6,local_110,sVar3);
  return;
}
```
