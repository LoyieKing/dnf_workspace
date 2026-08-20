# makeDisplayRangking

`_ZN8WongWork11CDeathTower14CPacketHandler19makeDisplayRangkingEjjjjbjj`

`WongWork::CDeathTower::CPacketHandler::makeDisplayRangking(unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x084601da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084601da  _ZN8WongWork11CDeathTower14CPacketHandler19makeDisplayRangkingEjjjjbjj
#           WongWork::CDeathTower::CPacketHandler::makeDisplayRangking(unsigned int, unsigned int, unsigned int, unsigned int, bool, unsigned int, unsigned int)
# range [0x084601da, 0x084602c3]
084601da +0x00:  push   %ebp
084601db +0x01:  mov    %esp,%ebp
084601dd +0x03:  push   %esi
084601de +0x04:  push   %ebx
084601df +0x05:  sub    $0x20,%esp
084601e2 +0x08:  mov    0x1c(%ebp),%eax
084601e5 +0x0b:  mov    %al,-0xc(%ebp)
084601e8 +0x0e:  mov    0x8(%ebp),%eax
084601eb +0x11:  movl   $0x90,0x8(%esp)
084601f3 +0x19:  movl   $0x0,0x4(%esp)
084601fb +0x21:  mov    %eax,(%esp)
084601fe +0x24:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08460203 +0x29:  mov    0x18(%ebp),%edx
08460206 +0x2c:  mov    0x8(%ebp),%eax
08460209 +0x2f:  mov    %edx,0x4(%esp)
0846020d +0x33:  mov    %eax,(%esp)
08460210 +0x36:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460215 +0x3b:  mov    0x14(%ebp),%edx
08460218 +0x3e:  mov    0x8(%ebp),%eax
0846021b +0x41:  mov    %edx,0x4(%esp)
0846021f +0x45:  mov    %eax,(%esp)
08460222 +0x48:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460227 +0x4d:  movzbl -0xc(%ebp),%edx
0846022b +0x51:  mov    0x8(%ebp),%eax
0846022e +0x54:  mov    %edx,0x4(%esp)
08460232 +0x58:  mov    %eax,(%esp)
08460235 +0x5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0846023a +0x60:  mov    0x24(%ebp),%edx
0846023d +0x63:  mov    0x8(%ebp),%eax
08460240 +0x66:  mov    %edx,0x4(%esp)
08460244 +0x6a:  mov    %eax,(%esp)
08460247 +0x6d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0846024c +0x72:  mov    0x8(%ebp),%esi
0846024f +0x75:  mov    0x20(%ebp),%eax
08460252 +0x78:  mov    %eax,(%esp)
08460255 +0x7b:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
0846025a +0x80:  mov    %eax,%ebx
0846025c +0x82:  mov    0xc(%ebp),%eax
0846025f +0x85:  mov    %eax,(%esp)
08460262 +0x88:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
08460267 +0x8d:  mov    %esi,0xc(%esp)
0846026b +0x91:  mov    0x10(%ebp),%edx
0846026e +0x94:  mov    %edx,0x8(%esp)
08460272 +0x98:  mov    %ebx,0x4(%esp)
08460276 +0x9c:  mov    %eax,(%esp)
08460279 +0x9f:  call   08468b8e <_ZN8WongWork18CDeathTowerRanking22makeMyBestRecordPacketEjjR11PacketGuard>  ; WongWork::CDeathTowerRanking::makeMyBestRecordPacket(unsigned int, unsigned int, PacketGuard&)
0846027e +0xa4:  mov    0x8(%ebp),%esi
08460281 +0xa7:  mov    0x20(%ebp),%eax
08460284 +0xaa:  mov    %eax,(%esp)
08460287 +0xad:  call   08469d69 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x44c>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x44c
0846028c +0xb2:  mov    %eax,%ebx
0846028e +0xb4:  mov    0xc(%ebp),%eax
08460291 +0xb7:  mov    %eax,(%esp)
08460294 +0xba:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
08460299 +0xbf:  mov    %esi,0x8(%esp)
0846029d +0xc3:  mov    %ebx,0x4(%esp)
084602a1 +0xc7:  mov    %eax,(%esp)
084602a4 +0xca:  call   08468c68 <_ZN8WongWork18CDeathTowerRanking25makeTopRankerRecordPacketEjR11PacketGuard>  ; WongWork::CDeathTowerRanking::makeTopRankerRecordPacket(unsigned int, PacketGuard&)
084602a9 +0xcf:  mov    0x8(%ebp),%eax
084602ac +0xd2:  movl   $0x1,0x4(%esp)
084602b4 +0xda:  mov    %eax,(%esp)
084602b7 +0xdd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084602bc +0xe2:  add    $0x20,%esp
084602bf +0xe5:  pop    %ebx
084602c0 +0xe6:  pop    %esi
084602c1 +0xe7:  pop    %ebp
084602c2 +0xe8:  ret
084602c3 +0xe9:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDisplayRangking @ 0x84601da

/* WongWork::CDeathTower::CPacketHandler::makeDisplayRangking(unsigned int, unsigned int, unsigned
   int, unsigned int, bool, unsigned int, unsigned int) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDisplayRangking
          (CPacketHandler *this,uint param_1,uint param_2,uint param_3,uint param_4,bool param_5,
          uint param_6,uint param_7)

{
  uint uVar1;
  CDeathTowerRanking *pCVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x90);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(uint)param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,param_7);
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_6);
  pCVar2 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_1);
  CDeathTowerRanking::makeMyBestRecordPacket(pCVar2,uVar1,param_2,(PacketGuard *)this);
  uVar1 = CDeathTowerRanking::makeDungeonIdx2TowerIdx(param_6);
  pCVar2 = (CDeathTowerRanking *)CDeathTowerRanking::getRankTable(param_1);
  CDeathTowerRanking::makeTopRankerRecordPacket(pCVar2,uVar1,(PacketGuard *)this);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
