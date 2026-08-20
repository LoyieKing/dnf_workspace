# MakeSlotInfo

`_ZN7WarRoom12MakeSlotInfoEPci`

`WarRoom::MakeSlotInfo(char*, int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bdea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bdea0  _ZN7WarRoom12MakeSlotInfoEPci
#           WarRoom::MakeSlotInfo(char*, int)
# range [0x086bdea0, 0x086be079]
086bdea0 +0x000:  push   %ebp
086bdea1 +0x001:  mov    %esp,%ebp
086bdea3 +0x003:  sub    $0x38,%esp
086bdea6 +0x006:  mov    0xc(%ebp),%eax
086bdea9 +0x009:  mov    %eax,-0x14(%ebp)
086bdeac +0x00c:  mov    -0x14(%ebp),%eax
086bdeaf +0x00f:  movl   $0x59,0x8(%esp)
086bdeb7 +0x017:  movl   $0x0,0x4(%esp)
086bdebf +0x01f:  mov    %eax,(%esp)
086bdec2 +0x022:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bdec7 +0x027:  mov    0x8(%ebp),%eax
086bdeca +0x02a:  mov    0x4(%eax),%edx
086bdecd +0x02d:  mov    -0x14(%ebp),%eax
086bded0 +0x030:  mov    %edx,0x4(%esp)
086bded4 +0x034:  mov    %eax,(%esp)
086bded7 +0x037:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bdedc +0x03c:  cmpl   $0xffff,0x10(%ebp)
086bdee3 +0x043:  jne    086bdfd7 <+0x137>
086bdee9 +0x049:  mov    0x8(%ebp),%eax
086bdeec +0x04c:  mov    %eax,(%esp)
086bdeef +0x04f:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bdef4 +0x054:  mov    %eax,-0x10(%ebp)
086bdef7 +0x057:  mov    -0x14(%ebp),%eax
086bdefa +0x05a:  mov    -0x10(%ebp),%edx
086bdefd +0x05d:  mov    %edx,0x4(%esp)
086bdf01 +0x061:  mov    %eax,(%esp)
086bdf04 +0x064:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdf09 +0x069:  cmpl   $0x0,-0x10(%ebp)
086bdf0d +0x06d:  jne    086bdf54 <+0xb4>
086bdf0f +0x06f:  mov    0x8(%ebp),%eax
086bdf12 +0x072:  mov    0x144(%eax),%eax
086bdf18 +0x078:  mov    %eax,%edx
086bdf1a +0x07a:  mov    0x8(%ebp),%eax
086bdf1d +0x07d:  mov    0x4(%eax),%eax
086bdf20 +0x080:  mov    %edx,0x18(%esp)
086bdf24 +0x084:  mov    %eax,0x14(%esp)
086bdf28 +0x088:  movl   $"Send Member 0 PvpRoom %d State(%d)",0x10(%esp)
086bdf30 +0x090:  movl   $0x793,0xc(%esp)
086bdf38 +0x098:  movl   $&_ZZN7WarRoom12MakeSlotInfoEPciE19__PRETTY_FUNCTION__,0x8(%esp)
086bdf40 +0x0a0:  movl   $"WarRoom.cpp",0x4(%esp)
086bdf48 +0x0a8:  movl   $0x1,(%esp)
086bdf4f +0x0af:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bdf54 +0x0b4:  movl   $0x0,-0xc(%ebp)
086bdf5b +0x0bb:  jmp    086bdfc7 <+0x127>
086bdf5d +0x0bd:  mov    -0xc(%ebp),%edx
086bdf60 +0x0c0:  mov    0x8(%ebp),%eax
086bdf63 +0x0c3:  add    $0x48,%edx
086bdf66 +0x0c6:  mov    0xc(%eax,%edx,4),%eax
086bdf6a +0x0ca:  test   %eax,%eax
086bdf6c +0x0cc:  je     086bdfc3 <+0x123>
086bdf6e +0x0ce:  mov    -0x14(%ebp),%eax
086bdf71 +0x0d1:  mov    -0xc(%ebp),%edx
086bdf74 +0x0d4:  mov    %edx,0x4(%esp)
086bdf78 +0x0d8:  mov    %eax,(%esp)
086bdf7b +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdf80 +0x0e0:  mov    -0xc(%ebp),%edx
086bdf83 +0x0e3:  mov    0x8(%ebp),%eax
086bdf86 +0x0e6:  add    $0x50,%edx
086bdf89 +0x0e9:  mov    0x8(%eax,%edx,4),%edx
086bdf8d +0x0ed:  mov    -0x14(%ebp),%eax
086bdf90 +0x0f0:  mov    %edx,0x4(%esp)
086bdf94 +0x0f4:  mov    %eax,(%esp)
086bdf97 +0x0f7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdf9c +0x0fc:  mov    -0xc(%ebp),%edx
086bdf9f +0x0ff:  mov    0x8(%ebp),%eax
086bdfa2 +0x102:  add    $0x48,%edx
086bdfa5 +0x105:  mov    0xc(%eax,%edx,4),%eax
086bdfa9 +0x109:  mov    %eax,(%esp)
086bdfac +0x10c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bdfb1 +0x111:  movzwl %ax,%edx
086bdfb4 +0x114:  mov    -0x14(%ebp),%eax
086bdfb7 +0x117:  mov    %edx,0x4(%esp)
086bdfbb +0x11b:  mov    %eax,(%esp)
086bdfbe +0x11e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bdfc3 +0x123:  addl   $0x1,-0xc(%ebp)
086bdfc7 +0x127:  cmpl   $0x5,-0xc(%ebp)
086bdfcb +0x12b:  setle  %al
086bdfce +0x12e:  test   %al,%al
086bdfd0 +0x130:  jne    086bdf5d <+0xbd>
086bdfd2 +0x132:  jmp    086be065 <+0x1c5>
086bdfd7 +0x137:  mov    -0x14(%ebp),%eax
086bdfda +0x13a:  movl   $0x1,0x4(%esp)
086bdfe2 +0x142:  mov    %eax,(%esp)
086bdfe5 +0x145:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdfea +0x14a:  mov    -0x14(%ebp),%eax
086bdfed +0x14d:  mov    0x10(%ebp),%edx
086bdff0 +0x150:  mov    %edx,0x4(%esp)
086bdff4 +0x154:  mov    %eax,(%esp)
086bdff7 +0x157:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdffc +0x15c:  mov    0x10(%ebp),%edx
086bdfff +0x15f:  mov    0x8(%ebp),%eax
086be002 +0x162:  add    $0x50,%edx
086be005 +0x165:  mov    0x8(%eax,%edx,4),%edx
086be009 +0x169:  mov    -0x14(%ebp),%eax
086be00c +0x16c:  mov    %edx,0x4(%esp)
086be010 +0x170:  mov    %eax,(%esp)
086be013 +0x173:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be018 +0x178:  mov    0x10(%ebp),%edx
086be01b +0x17b:  mov    0x8(%ebp),%eax
086be01e +0x17e:  add    $0x48,%edx
086be021 +0x181:  mov    0xc(%eax,%edx,4),%eax
086be025 +0x185:  test   %eax,%eax
086be027 +0x187:  je     086be052 <+0x1b2>
086be029 +0x189:  mov    0x10(%ebp),%edx
086be02c +0x18c:  mov    0x8(%ebp),%eax
086be02f +0x18f:  add    $0x48,%edx
086be032 +0x192:  mov    0xc(%eax,%edx,4),%eax
086be036 +0x196:  mov    %eax,(%esp)
086be039 +0x199:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086be03e +0x19e:  movzwl %ax,%edx
086be041 +0x1a1:  mov    -0x14(%ebp),%eax
086be044 +0x1a4:  mov    %edx,0x4(%esp)
086be048 +0x1a8:  mov    %eax,(%esp)
086be04b +0x1ab:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be050 +0x1b0:  jmp    086be065 <+0x1c5>
086be052 +0x1b2:  mov    -0x14(%ebp),%eax
086be055 +0x1b5:  movl   $0xffff,0x4(%esp)
086be05d +0x1bd:  mov    %eax,(%esp)
086be060 +0x1c0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be065 +0x1c5:  mov    -0x14(%ebp),%eax
086be068 +0x1c8:  movl   $0x1,0x4(%esp)
086be070 +0x1d0:  mov    %eax,(%esp)
086be073 +0x1d3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086be078 +0x1d8:  leave
086be079 +0x1d9:  ret
```

## 反编译 C

```c
// WarRoom::MakeSlotInfo @ 0x86bdea0

/* WarRoom::MakeSlotInfo(char*, int) */

void __thiscall WarRoom::MakeSlotInfo(WarRoom *this,char *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x59);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  if (param_2 == 0xffff) {
    iVar1 = GetWaiterCount(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar1);
    if (iVar1 == 0) {
      LogManager::logFormat
                (1,"WarRoom.cpp","void WarRoom::MakeSlotInfo(char*, int)",0x793,
                 "Send Member 0 PvpRoom %d State(%d)",*(undefined4 *)(this + 4),
                 *(undefined4 *)(this + 0x144));
    }
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)param_1,*(int *)(this + (local_10 + 0x50) * 4 + 8));
        uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,*(int *)(this + (param_2 + 0x50) * 4 + 8));
    if (*(int *)(this + (param_2 + 0x48) * 4 + 0xc) == 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0xffff);
    }
    else {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + (param_2 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return;
}
```
