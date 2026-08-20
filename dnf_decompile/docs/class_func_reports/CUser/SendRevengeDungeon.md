# SendRevengeDungeon

`_ZN5CUser18SendRevengeDungeonEv`

`CUser::SendRevengeDungeon()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656abc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656abc  _ZN5CUser18SendRevengeDungeonEv
#           CUser::SendRevengeDungeon()
# range [0x08656abc, 0x08656c11]
08656abc +0x000:  push   %ebp
08656abd +0x001:  mov    %esp,%ebp
08656abf +0x003:  push   %esi
08656ac0 +0x004:  push   %ebx
08656ac1 +0x005:  sub    $0x40,%esp
08656ac4 +0x008:  mov    0x8(%ebp),%eax
08656ac7 +0x00b:  mov    %eax,(%esp)
08656aca +0x00e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08656acf +0x013:  test   %eax,%eax
08656ad1 +0x015:  sete   %al
08656ad4 +0x018:  test   %al,%al
08656ad6 +0x01a:  jne    08656c0a <+0x14e>
08656adc +0x020:  movl   $0xa,0x8(%esp)
08656ae4 +0x028:  movl   $0x0,0x4(%esp)
08656aec +0x030:  lea    -0x22(%ebp),%eax
08656aef +0x033:  mov    %eax,(%esp)
08656af2 +0x036:  call   0807dcc0 <_init+0x5b8>
08656af7 +0x03b:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
08656afc +0x040:  mov    %eax,(%esp)
08656aff +0x043:  call   084ed3f8 <_GLOBAL__I__Z7getUserj+0x43aa>  ; global constructors keyed to getUser(unsigned int)+0x43aa
08656b04 +0x048:  mov    %eax,-0x18(%ebp)
08656b07 +0x04b:  mov    -0x18(%ebp),%eax
08656b0a +0x04e:  cmp    $0x1,%eax
08656b0d +0x051:  je     08656b19 <+0x5d>
08656b0f +0x053:  cmp    $0x2,%eax
08656b12 +0x056:  je     08656b1f <+0x63>
08656b14 +0x058:  jmp    08656c0b <+0x14f>
08656b19 +0x05d:  movb   $0x0,-0x22(%ebp)
08656b1d +0x061:  jmp    08656b24 <+0x68>
08656b1f +0x063:  movb   $0x1,-0x22(%ebp)
08656b23 +0x067:  nop
08656b24 +0x068:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08656b2b +0x06f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08656b30 +0x074:  mov    %eax,-0x14(%ebp)
08656b33 +0x077:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
08656b38 +0x07c:  mov    %eax,(%esp)
08656b3b +0x07f:  call   085bff32 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1490>  ; global constructors keyed to CParty::cMember::cMember()+0x1490
08656b40 +0x084:  mov    %eax,-0x10(%ebp)
08656b43 +0x087:  movl   $0x0,-0xc(%ebp)
08656b4a +0x08e:  mov    -0x10(%ebp),%eax
08656b4d +0x091:  cmp    -0x14(%ebp),%eax
08656b50 +0x094:  jb     08656b63 <+0xa7>
08656b52 +0x096:  mov    -0x14(%ebp),%eax
08656b55 +0x099:  mov    -0x10(%ebp),%edx
08656b58 +0x09c:  mov    %edx,%ecx
08656b5a +0x09e:  sub    %eax,%ecx
08656b5c +0x0a0:  mov    %ecx,%eax
08656b5e +0x0a2:  mov    %eax,-0xc(%ebp)
08656b61 +0x0a5:  jmp    08656b6a <+0xae>
08656b63 +0x0a7:  movl   $0x0,-0xc(%ebp)
08656b6a +0x0ae:  movb   $0x1,-0x21(%ebp)
08656b6e +0x0b2:  mov    -0xc(%ebp),%eax
08656b71 +0x0b5:  mov    %eax,-0x20(%ebp)
08656b74 +0x0b8:  movl   $0x0,-0x1c(%ebp)
08656b7b +0x0bf:  lea    -0x30(%ebp),%eax
08656b7e +0x0c2:  mov    %eax,(%esp)
08656b81 +0x0c5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08656b86 +0x0ca:  movl   $0x1ec,0x8(%esp)
08656b8e +0x0d2:  movl   $0x0,0x4(%esp)
08656b96 +0x0da:  lea    -0x30(%ebp),%eax
08656b99 +0x0dd:  mov    %eax,(%esp)
08656b9c +0x0e0:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08656ba1 +0x0e5:  lea    -0x22(%ebp),%eax
08656ba4 +0x0e8:  movl   $0xa,0x8(%esp)
08656bac +0x0f0:  mov    %eax,0x4(%esp)
08656bb0 +0x0f4:  lea    -0x30(%ebp),%eax
08656bb3 +0x0f7:  mov    %eax,(%esp)
08656bb6 +0x0fa:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08656bbb +0x0ff:  movl   $0x1,0x4(%esp)
08656bc3 +0x107:  lea    -0x30(%ebp),%eax
08656bc6 +0x10a:  mov    %eax,(%esp)
08656bc9 +0x10d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08656bce +0x112:  lea    -0x30(%ebp),%eax
08656bd1 +0x115:  mov    %eax,0x4(%esp)
08656bd5 +0x119:  mov    0x8(%ebp),%eax
08656bd8 +0x11c:  mov    %eax,(%esp)
08656bdb +0x11f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08656be0 +0x124:  jmp    08656bfd <+0x141>
08656be2 +0x126:  mov    %edx,%ebx
08656be4 +0x128:  mov    %eax,%esi
08656be6 +0x12a:  lea    -0x30(%ebp),%eax
08656be9 +0x12d:  mov    %eax,(%esp)
08656bec +0x130:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08656bf1 +0x135:  mov    %esi,%eax
08656bf3 +0x137:  mov    %ebx,%edx
08656bf5 +0x139:  mov    %eax,(%esp)
08656bf8 +0x13c:  call   08ae3750 <_Unwind_Resume>
08656bfd +0x141:  lea    -0x30(%ebp),%eax
08656c00 +0x144:  mov    %eax,(%esp)
08656c03 +0x147:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08656c08 +0x14c:  jmp    08656c0b <+0x14f>
08656c0a +0x14e:  nop
08656c0b +0x14f:  add    $0x40,%esp
08656c0e +0x152:  pop    %ebx
08656c0f +0x153:  pop    %esi
08656c10 +0x154:  pop    %ebp
08656c11 +0x155:  ret
```

## 反编译 C

```c
// CUser::SendRevengeDungeon @ 0x8656abc

/* CUser::SendRevengeDungeon() */

void __thiscall CUser::SendRevengeDungeon(CUser *this)

{
  int iVar1;
  PacketGuard local_34 [14];
  char local_26 [2];
  int local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    memset(local_26,0,10);
    local_1c = village_attacked::CVillageMonsterMgr::GetRewardType(GlobalData::s_villageMonsterMgr);
    if (local_1c == 1) {
      local_26[0] = '\0';
    }
    else {
      if (local_1c != 2) {
        return;
      }
      local_26[0] = '\x01';
    }
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_14 = village_attacked::CRevengeDungeon::GetCloseTime(GlobalData::s_revengeDungeonMgr);
    if (local_14 < local_18) {
      local_10 = 0;
    }
    else {
      local_10 = local_14 - local_18;
    }
    local_26[1] = 1;
    local_24 = local_10;
    local_20 = 0;
    PacketGuard::PacketGuard(local_34);
                    /* try { // try from 08656b9c to 08656bdf has its CatchHandler @ 08656be2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x1ec);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_34,local_26,10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    Send(this,local_34);
    PacketGuard::~PacketGuard(local_34);
  }
  return;
}
```
