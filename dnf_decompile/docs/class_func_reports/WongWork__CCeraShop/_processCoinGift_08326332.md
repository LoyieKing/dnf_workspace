# _processCoinGift

`_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii`

`WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08326332` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08326332  _ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii
#           WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int, int)
# range [0x08326332, 0x083264d5]
08326332 +0x000:  push   %ebp
08326333 +0x001:  mov    %esp,%ebp
08326335 +0x003:  push   %edi
08326336 +0x004:  push   %esi
08326337 +0x005:  push   %ebx
08326338 +0x006:  sub    $0x17c,%esp
0832633e +0x00c:  mov    0x10(%ebp),%eax
08326341 +0x00f:  mov    %ax,-0x15c(%ebp)
08326348 +0x016:  lea    -0x56(%ebp),%eax
0832634b +0x019:  mov    %eax,(%esp)
0832634e +0x01c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08326353 +0x021:  mov    0x1c(%ebp),%eax
08326356 +0x024:  mov    %eax,-0x54(%ebp)
08326359 +0x027:  movb   $0x2,-0x55(%ebp)
0832635d +0x02b:  movzwl -0x15c(%ebp),%eax
08326364 +0x032:  mov    %eax,-0x4f(%ebp)
08326367 +0x035:  movw   $0x2,-0x4b(%ebp)
0832636d +0x03b:  lea    -0x56(%ebp),%eax
08326370 +0x03e:  mov    %eax,(%esp)
08326373 +0x041:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08326378 +0x046:  lea    -0x156(%ebp),%edx
0832637e +0x04c:  mov    $0x100,%ebx
08326383 +0x051:  mov    $0x0,%eax
08326388 +0x056:  mov    %edx,%ecx
0832638a +0x058:  and    $0x2,%ecx
0832638d +0x05b:  test   %ecx,%ecx
0832638f +0x05d:  je     0832639a <+0x68>
08326391 +0x05f:  mov    %ax,(%edx)
08326394 +0x062:  add    $0x2,%edx
08326397 +0x065:  sub    $0x2,%ebx
0832639a +0x068:  mov    %ebx,%ecx
0832639c +0x06a:  shr    $0x2,%ecx
0832639f +0x06d:  mov    %edx,%edi
083263a1 +0x06f:  rep stos %eax,%es:(%edi)
083263a3 +0x071:  mov    %edi,%edx
083263a5 +0x073:  mov    %ebx,%ecx
083263a7 +0x075:  and    $0x2,%ecx
083263aa +0x078:  test   %ecx,%ecx
083263ac +0x07a:  je     083263b4 <+0x82>
083263ae +0x07c:  mov    %ax,(%edx)
083263b1 +0x07f:  add    $0x2,%edx
083263b4 +0x082:  mov    %ebx,%ecx
083263b6 +0x084:  and    $0x1,%ecx
083263b9 +0x087:  test   %ecx,%ecx
083263bb +0x089:  je     083263c2 <+0x90>
083263bd +0x08b:  mov    %al,(%edx)
083263bf +0x08d:  add    $0x1,%edx
083263c2 +0x090:  mov    0xc(%ebp),%eax
083263c5 +0x093:  mov    %eax,(%esp)
083263c8 +0x096:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
083263cd +0x09b:  mov    %eax,%ebx
083263cf +0x09d:  movl   $0x0,0xc(%esp)
083263d7 +0x0a5:  movl   $"game_server_msg_02",0x8(%esp)
083263df +0x0ad:  movl   $0x4,0x4(%esp)
083263e7 +0x0b5:  movl   $&g_scriptStringManager_,(%esp)
083263ee +0x0bc:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
083263f3 +0x0c1:  mov    %ebx,0x8(%esp)
083263f7 +0x0c5:  mov    %eax,0x4(%esp)
083263fb +0x0c9:  lea    -0x156(%ebp),%eax
08326401 +0x0cf:  mov    %eax,(%esp)
08326404 +0x0d2:  call   0807e440 <_init+0xd38>
08326409 +0x0d7:  movb   $0x0,-0x19(%ebp)
0832640d +0x0db:  cmpl   $0xec,0x1c(%ebp)
08326414 +0x0e2:  jne    0832641c <+0xea>
08326416 +0x0e4:  movb   $0x4,-0x19(%ebp)
0832641a +0x0e8:  jmp    08326429 <+0xf7>
0832641c +0x0ea:  cmpl   $0xca,0x1c(%ebp)
08326423 +0x0f1:  jne    08326429 <+0xf7>
08326425 +0x0f3:  movb   $0x5,-0x19(%ebp)
08326429 +0x0f7:  movzwl -0x15c(%ebp),%ebx
08326430 +0x0fe:  mov    0x1c(%ebp),%ecx
08326433 +0x101:  movsbl -0x19(%ebp),%edx
08326437 +0x105:  mov    0x18(%ebp),%eax
0832643a +0x108:  mov    0xc(%ebp),%esi
0832643d +0x10b:  add    $0x79700,%esi
08326443 +0x111:  mov    %ebx,0x10(%esp)
08326447 +0x115:  mov    %ecx,0xc(%esp)
0832644b +0x119:  mov    %edx,0x8(%esp)
0832644f +0x11d:  mov    %eax,0x4(%esp)
08326453 +0x121:  mov    %esi,(%esp)
08326456 +0x124:  call   086848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>  ; cUserHistoryLog::SendMailForCeraShopGift(unsigned int, char, unsigned int, unsigned int)
0832645b +0x129:  mov    -0x4f(%ebp),%eax
0832645e +0x12c:  mov    %eax,%ecx
08326460 +0x12e:  mov    -0x54(%ebp),%edx
08326463 +0x131:  mov    0x18(%ebp),%eax
08326466 +0x134:  mov    %ecx,0x10(%esp)
0832646a +0x138:  mov    %edx,0xc(%esp)
0832646e +0x13c:  mov    %eax,0x8(%esp)
08326472 +0x140:  mov    0x14(%ebp),%eax
08326475 +0x143:  mov    %eax,0x4(%esp)
08326479 +0x147:  mov    0xc(%ebp),%eax
0832647c +0x14a:  mov    %eax,(%esp)
0832647f +0x14d:  call   0868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>  ; CUser::SendCeraShopGiftStatisticLog(unsigned int, unsigned int, unsigned long, unsigned int)
08326484 +0x152:  lea    -0x156(%ebp),%eax
0832648a +0x158:  mov    %eax,(%esp)
0832648d +0x15b:  call   0807e3b0 <_init+0xca8>
08326492 +0x160:  mov    %eax,%edx
08326494 +0x162:  mov    0x18(%ebp),%eax
08326497 +0x165:  mov    %edx,0x18(%esp)
0832649b +0x169:  lea    -0x156(%ebp),%edx
083264a1 +0x16f:  mov    %edx,0x14(%esp)
083264a5 +0x173:  movl   $0x1,0x10(%esp)
083264ad +0x17b:  mov    %eax,0xc(%esp)
083264b1 +0x17f:  movl   $0x0,0x8(%esp)
083264b9 +0x187:  lea    -0x56(%ebp),%eax
083264bc +0x18a:  mov    %eax,0x4(%esp)
083264c0 +0x18e:  mov    0xc(%ebp),%eax
083264c3 +0x191:  mov    %eax,(%esp)
083264c6 +0x194:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
083264cb +0x199:  add    $0x17c,%esp
083264d1 +0x19f:  pop    %ebx
083264d2 +0x1a0:  pop    %esi
083264d3 +0x1a1:  pop    %edi
083264d4 +0x1a2:  pop    %ebp
083264d5 +0x1a3:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::_processCoinGift @ 0x8326332

/* WARNING: Removing unreachable block (ram,0x083263bd) */
/* WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int, int) */

void __thiscall
WongWork::CCeraShop::_processCoinGift
          (CCeraShop *this,CUser *param_1,ushort param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char local_15a [256];
  Inven_Item local_5a;
  undefined1 local_59;
  ulong local_58;
  uint local_53;
  undefined2 local_4f;
  char local_1d;
  
  bVar6 = 0;
  Inven_Item::Inven_Item(&local_5a);
  local_58 = param_5;
  local_59 = 2;
  local_53 = (uint)param_2;
  local_4f = 2;
  Inven_Item::ResetItemAttr(&local_5a);
  pcVar2 = local_15a;
  uVar4 = 0x100;
  bVar5 = ((uint)pcVar2 & 2) != 0;
  if (bVar5) {
    local_15a[0] = '\0';
    local_15a[1] = '\0';
    pcVar2 = local_15a + 2;
    uVar4 = 0xfe;
  }
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
  }
  if (bVar5) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
  }
  uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_02",(bool *)0x0);
  sprintf(local_15a,pcVar2,uVar1);
  local_1d = '\0';
  if (param_5 == 0xec) {
    local_1d = '\x04';
  }
  else if (param_5 == 0xca) {
    local_1d = '\x05';
  }
  cUserHistoryLog::SendMailForCeraShopGift
            ((cUserHistoryLog *)(param_1 + 0x79700),param_4,local_1d,param_5,(uint)param_2);
  CUser::SendCeraShopGiftStatisticLog(param_1,param_3,param_4,local_58,local_53);
  sVar3 = strlen(local_15a);
  CMailBoxHelper::ReqDBSendNewMailCashShop(param_1,&local_5a,0,param_4,true,local_15a,sVar3);
  return;
}
```
