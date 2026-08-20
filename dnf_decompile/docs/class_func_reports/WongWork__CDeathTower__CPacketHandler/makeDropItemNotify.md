# makeDropItemNotify

`_ZN8WongWork11CDeathTower14CPacketHandler18makeDropItemNotifyEtiitRK8map_item`

`WongWork::CDeathTower::CPacketHandler::makeDropItemNotify(unsigned short, int, int, unsigned short, map_item const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPacketHandler` | `0x0845ff1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0845ff1a  _ZN8WongWork11CDeathTower14CPacketHandler18makeDropItemNotifyEtiitRK8map_item
#           WongWork::CDeathTower::CPacketHandler::makeDropItemNotify(unsigned short, int, int, unsigned short, map_item const&)
# range [0x0845ff1a, 0x084600a5]
0845ff1a +0x000:  push   %ebp
0845ff1b +0x001:  mov    %esp,%ebp
0845ff1d +0x003:  sub    $0x28,%esp
0845ff20 +0x006:  mov    0xc(%ebp),%edx
0845ff23 +0x009:  mov    0x18(%ebp),%eax
0845ff26 +0x00c:  mov    %dx,-0xc(%ebp)
0845ff2a +0x010:  mov    %ax,-0x10(%ebp)
0845ff2e +0x014:  mov    0x8(%ebp),%eax
0845ff31 +0x017:  movl   $0x28,0x8(%esp)
0845ff39 +0x01f:  movl   $0x0,0x4(%esp)
0845ff41 +0x027:  mov    %eax,(%esp)
0845ff44 +0x02a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0845ff49 +0x02f:  movzwl -0xc(%ebp),%edx
0845ff4d +0x033:  mov    0x8(%ebp),%eax
0845ff50 +0x036:  mov    %edx,0x4(%esp)
0845ff54 +0x03a:  mov    %eax,(%esp)
0845ff57 +0x03d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845ff5c +0x042:  mov    0x8(%ebp),%eax
0845ff5f +0x045:  mov    0x10(%ebp),%edx
0845ff62 +0x048:  mov    %edx,0x4(%esp)
0845ff66 +0x04c:  mov    %eax,(%esp)
0845ff69 +0x04f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845ff6e +0x054:  mov    0x8(%ebp),%eax
0845ff71 +0x057:  mov    0x14(%ebp),%edx
0845ff74 +0x05a:  mov    %edx,0x4(%esp)
0845ff78 +0x05e:  mov    %eax,(%esp)
0845ff7b +0x061:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845ff80 +0x066:  movzwl -0x10(%ebp),%edx
0845ff84 +0x06a:  mov    0x8(%ebp),%eax
0845ff87 +0x06d:  mov    %edx,0x4(%esp)
0845ff8b +0x071:  mov    %eax,(%esp)
0845ff8e +0x074:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0845ff93 +0x079:  mov    0x1c(%ebp),%eax
0845ff96 +0x07c:  mov    0x12(%eax),%eax
0845ff99 +0x07f:  mov    %eax,%edx
0845ff9b +0x081:  mov    0x8(%ebp),%eax
0845ff9e +0x084:  mov    %edx,0x4(%esp)
0845ffa2 +0x088:  mov    %eax,(%esp)
0845ffa5 +0x08b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0845ffaa +0x090:  mov    0x1c(%ebp),%eax
0845ffad +0x093:  add    $0x10,%eax
0845ffb0 +0x096:  mov    %eax,(%esp)
0845ffb3 +0x099:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0845ffb8 +0x09e:  movzbl %al,%edx
0845ffbb +0x0a1:  mov    0x8(%ebp),%eax
0845ffbe +0x0a4:  mov    %edx,0x4(%esp)
0845ffc2 +0x0a8:  mov    %eax,(%esp)
0845ffc5 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0845ffca +0x0b0:  mov    0x1c(%ebp),%eax
0845ffcd +0x0b3:  add    $0x10,%eax
0845ffd0 +0x0b6:  mov    %eax,(%esp)
0845ffd3 +0x0b9:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0845ffd8 +0x0be:  mov    0x8(%ebp),%edx
0845ffdb +0x0c1:  mov    %eax,0x4(%esp)
0845ffdf +0x0c5:  mov    %edx,(%esp)
0845ffe2 +0x0c8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0845ffe7 +0x0cd:  mov    0x1c(%ebp),%eax
0845ffea +0x0d0:  movzwl 0x1b(%eax),%eax
0845ffee +0x0d4:  movzwl %ax,%edx
0845fff1 +0x0d7:  mov    0x8(%ebp),%eax
0845fff4 +0x0da:  mov    %edx,0x4(%esp)
0845fff8 +0x0de:  mov    %eax,(%esp)
0845fffb +0x0e1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08460000 +0x0e6:  mov    0x1c(%ebp),%eax
08460003 +0x0e9:  mov    0x1d(%eax),%eax
08460006 +0x0ec:  mov    %eax,%edx
08460008 +0x0ee:  mov    0x8(%ebp),%eax
0846000b +0x0f1:  mov    %edx,0x4(%esp)
0846000f +0x0f5:  mov    %eax,(%esp)
08460012 +0x0f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08460017 +0x0fd:  mov    0x1c(%ebp),%eax
0846001a +0x100:  add    $0x21,%eax
0846001d +0x103:  mov    %eax,(%esp)
08460020 +0x106:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08460025 +0x10b:  movzbl %al,%edx
08460028 +0x10e:  mov    0x8(%ebp),%eax
0846002b +0x111:  mov    %edx,0x4(%esp)
0846002f +0x115:  mov    %eax,(%esp)
08460032 +0x118:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08460037 +0x11d:  mov    0x1c(%ebp),%eax
0846003a +0x120:  add    $0x21,%eax
0846003d +0x123:  mov    %eax,(%esp)
08460040 +0x126:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08460045 +0x12b:  movzwl %ax,%edx
08460048 +0x12e:  mov    0x8(%ebp),%eax
0846004b +0x131:  mov    %edx,0x4(%esp)
0846004f +0x135:  mov    %eax,(%esp)
08460052 +0x138:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08460057 +0x13d:  mov    0x1c(%ebp),%eax
0846005a +0x140:  lea    0x10(%eax),%edx
0846005d +0x143:  mov    0x8(%ebp),%eax
08460060 +0x146:  mov    %edx,0x4(%esp)
08460064 +0x14a:  mov    %eax,(%esp)
08460067 +0x14d:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0846006c +0x152:  mov    0x1c(%ebp),%eax
0846006f +0x155:  movzbl (%eax),%eax
08460072 +0x158:  test   %al,%al
08460074 +0x15a:  je     0846007d <+0x163>
08460076 +0x15c:  mov    $0x0,%eax
0846007b +0x161:  jmp    08460082 <+0x168>
0846007d +0x163:  mov    $0x1,%eax
08460082 +0x168:  mov    0x8(%ebp),%edx
08460085 +0x16b:  mov    %eax,0x4(%esp)
08460089 +0x16f:  mov    %edx,(%esp)
0846008c +0x172:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08460091 +0x177:  mov    0x8(%ebp),%eax
08460094 +0x17a:  movl   $0x1,0x4(%esp)
0846009c +0x182:  mov    %eax,(%esp)
0846009f +0x185:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084600a4 +0x18a:  leave
084600a5 +0x18b:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPacketHandler::makeDropItemNotify @ 0x845ff1a

/* WongWork::CDeathTower::CPacketHandler::makeDropItemNotify(unsigned short, int, int, unsigned
   short, map_item const&) */

void __thiscall
WongWork::CDeathTower::CPacketHandler::makeDropItemNotify
          (CPacketHandler *this,ushort param_1,int param_2,int param_3,ushort param_4,
          map_item *param_5)

{
  uint uVar1;
  int iVar2;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)this,0,0x28);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,param_3);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_5 + 0x12));
  uVar1 = Inven_Item::GetItemAttr((Inven_Item *)(param_5 + 0x10));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,uVar1 & 0xff);
  iVar2 = Inven_Item::get_add_info((Inven_Item *)(param_5 + 0x10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,iVar2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,(uint)*(ushort *)(param_5 + 0x1b));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)this,*(int *)(param_5 + 0x1d));
  uVar1 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(param_5 + 0x21));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,uVar1 & 0xff);
  uVar1 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(param_5 + 0x21));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)this,uVar1 & 0xffff);
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)this,(Inven_Item *)(param_5 + 0x10));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)this,(uint)(*param_5 == (map_item)0x0));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)this,true);
  return;
}
```
