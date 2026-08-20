# _processCoinGift

`_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji`

`WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x0832619c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832619c  _ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji
#           WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int)
# range [0x0832619c, 0x08326331]
0832619c +0x000:  push   %ebp
0832619d +0x001:  mov    %esp,%ebp
0832619f +0x003:  push   %edi
083261a0 +0x004:  push   %ebx
083261a1 +0x005:  sub    $0x170,%esp
083261a7 +0x00b:  mov    0x10(%ebp),%eax
083261aa +0x00e:  mov    %ax,-0x14c(%ebp)
083261b1 +0x015:  lea    -0x45(%ebp),%eax
083261b4 +0x018:  mov    %eax,(%esp)
083261b7 +0x01b:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
083261bc +0x020:  movl   $0x1,-0x43(%ebp)
083261c3 +0x027:  movb   $0x2,-0x44(%ebp)
083261c7 +0x02b:  movzwl -0x14c(%ebp),%eax
083261ce +0x032:  mov    %eax,-0x3e(%ebp)
083261d1 +0x035:  movw   $0x2,-0x3a(%ebp)
083261d7 +0x03b:  lea    -0x45(%ebp),%eax
083261da +0x03e:  mov    %eax,(%esp)
083261dd +0x041:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
083261e2 +0x046:  lea    -0x145(%ebp),%edx
083261e8 +0x04c:  mov    $0x100,%ebx
083261ed +0x051:  mov    $0x0,%eax
083261f2 +0x056:  mov    %edx,%ecx
083261f4 +0x058:  and    $0x1,%ecx
083261f7 +0x05b:  test   %ecx,%ecx
083261f9 +0x05d:  je     08326203 <+0x67>
083261fb +0x05f:  mov    %al,(%edx)
083261fd +0x061:  add    $0x1,%edx
08326200 +0x064:  sub    $0x1,%ebx
08326203 +0x067:  mov    %edx,%ecx
08326205 +0x069:  and    $0x2,%ecx
08326208 +0x06c:  test   %ecx,%ecx
0832620a +0x06e:  je     08326215 <+0x79>
0832620c +0x070:  mov    %ax,(%edx)
0832620f +0x073:  add    $0x2,%edx
08326212 +0x076:  sub    $0x2,%ebx
08326215 +0x079:  mov    %ebx,%ecx
08326217 +0x07b:  shr    $0x2,%ecx
0832621a +0x07e:  mov    %edx,%edi
0832621c +0x080:  rep stos %eax,%es:(%edi)
0832621e +0x082:  mov    %edi,%edx
08326220 +0x084:  mov    %ebx,%ecx
08326222 +0x086:  and    $0x2,%ecx
08326225 +0x089:  test   %ecx,%ecx
08326227 +0x08b:  je     0832622f <+0x93>
08326229 +0x08d:  mov    %ax,(%edx)
0832622c +0x090:  add    $0x2,%edx
0832622f +0x093:  mov    %ebx,%ecx
08326231 +0x095:  and    $0x1,%ecx
08326234 +0x098:  test   %ecx,%ecx
08326236 +0x09a:  je     0832623d <+0xa1>
08326238 +0x09c:  mov    %al,(%edx)
0832623a +0x09e:  add    $0x1,%edx
0832623d +0x0a1:  mov    0xc(%ebp),%eax
08326240 +0x0a4:  mov    %eax,(%esp)
08326243 +0x0a7:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08326248 +0x0ac:  mov    %eax,%ebx
0832624a +0x0ae:  movl   $0x0,0xc(%esp)
08326252 +0x0b6:  movl   $"game_server_msg_02",0x8(%esp)
0832625a +0x0be:  movl   $0x4,0x4(%esp)
08326262 +0x0c6:  movl   $&g_scriptStringManager_,(%esp)
08326269 +0x0cd:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0832626e +0x0d2:  mov    %ebx,0x8(%esp)
08326272 +0x0d6:  mov    %eax,0x4(%esp)
08326276 +0x0da:  lea    -0x145(%ebp),%eax
0832627c +0x0e0:  mov    %eax,(%esp)
0832627f +0x0e3:  call   0807e440 <_init+0xd38>
08326284 +0x0e8:  movzwl -0x14c(%ebp),%edx
0832628b +0x0ef:  mov    0x18(%ebp),%eax
0832628e +0x0f2:  mov    0xc(%ebp),%ecx
08326291 +0x0f5:  add    $0x79700,%ecx
08326297 +0x0fb:  mov    %edx,0x10(%esp)
0832629b +0x0ff:  movl   $0x1,0xc(%esp)
083262a3 +0x107:  movl   $0x1,0x8(%esp)
083262ab +0x10f:  mov    %eax,0x4(%esp)
083262af +0x113:  mov    %ecx,(%esp)
083262b2 +0x116:  call   086848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>  ; cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)
083262b7 +0x11b:  mov    -0x3e(%ebp),%eax
083262ba +0x11e:  mov    %eax,%ecx
083262bc +0x120:  mov    -0x43(%ebp),%edx
083262bf +0x123:  mov    0x18(%ebp),%eax
083262c2 +0x126:  mov    %ecx,0x10(%esp)
083262c6 +0x12a:  mov    %edx,0xc(%esp)
083262ca +0x12e:  mov    %eax,0x8(%esp)
083262ce +0x132:  mov    0x14(%ebp),%eax
083262d1 +0x135:  mov    %eax,0x4(%esp)
083262d5 +0x139:  mov    0xc(%ebp),%eax
083262d8 +0x13c:  mov    %eax,(%esp)
083262db +0x13f:  call   0868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>  ; CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)
083262e0 +0x144:  lea    -0x145(%ebp),%eax
083262e6 +0x14a:  mov    %eax,(%esp)
083262e9 +0x14d:  call   0807e3b0 <_init+0xca8>
083262ee +0x152:  mov    %eax,%edx
083262f0 +0x154:  mov    0x18(%ebp),%eax
083262f3 +0x157:  mov    %edx,0x18(%esp)
083262f7 +0x15b:  lea    -0x145(%ebp),%edx
083262fd +0x161:  mov    %edx,0x14(%esp)
08326301 +0x165:  movl   $0x1,0x10(%esp)
08326309 +0x16d:  mov    %eax,0xc(%esp)
0832630d +0x171:  movl   $0x0,0x8(%esp)
08326315 +0x179:  lea    -0x45(%ebp),%eax
08326318 +0x17c:  mov    %eax,0x4(%esp)
0832631c +0x180:  mov    0xc(%ebp),%eax
0832631f +0x183:  mov    %eax,(%esp)
08326322 +0x186:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
08326327 +0x18b:  add    $0x170,%esp
0832632d +0x191:  pop    %ebx
0832632e +0x192:  pop    %edi
0832632f +0x193:  pop    %ebp
08326330 +0x194:  ret
08326331 +0x195:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_processCoinGift @ 0x832619c

/* WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int) */

void __thiscall
WongWork::CCeraShop::_processCoinGift
          (CCeraShop *this,CUser *param_1,ushort param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_149;
  char local_148 [255];
  Inven_Item local_49;
  undefined1 local_48;
  ulong local_47;
  uint local_42;
  undefined2 local_3e;
  
  bVar7 = 0;
  Inven_Item::Inven_Item(&local_49);
  local_47 = 1;
  local_48 = 2;
  local_42 = (uint)param_2;
  local_3e = 2;
  Inven_Item::ResetItemAttr(&local_49);
  pcVar4 = &local_149;
  uVar5 = 0x100;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_149 = '\0';
    pcVar4 = local_148;
    uVar5 = 0xff;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (bVar6) {
    *pcVar4 = '\0';
  }
  uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar4 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_02",(bool *)0x0);
  sprintf(&local_149,pcVar4,uVar1);
  cUserHistoryLog::SendMailForCeraShopGift
            ((cUserHistoryLog *)(param_1 + 0x79700),param_4,'\x01',1,(uint)param_2);
  CUser::SendCeraShopGiftStatisticLog(param_1,param_3,param_4,local_47,local_42);
  sVar2 = strlen(&local_149);
  CMailBoxHelper::ReqDBSendNewMailCashShop(param_1,&local_49,0,param_4,true,&local_149,sVar2);
  return;
}
```
