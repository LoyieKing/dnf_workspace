# Start

`_ZN7WarRoom5StartEv`

`WarRoom::Start()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd6d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd6d4  _ZN7WarRoom5StartEv
#           WarRoom::Start()
# range [0x086bd6d4, 0x086bd841]
086bd6d4 +0x000:  push   %ebp
086bd6d5 +0x001:  mov    %esp,%ebp
086bd6d7 +0x003:  push   %esi
086bd6d8 +0x004:  push   %ebx
086bd6d9 +0x005:  sub    $0x30,%esp
086bd6dc +0x008:  lea    -0x1c(%ebp),%eax
086bd6df +0x00b:  mov    %eax,(%esp)
086bd6e2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bd6e7 +0x013:  movl   $0x0,-0x10(%ebp)
086bd6ee +0x01a:  jmp    086bd79a <+0xc6>
086bd6f3 +0x01f:  mov    -0x10(%ebp),%edx
086bd6f6 +0x022:  mov    0x8(%ebp),%eax
086bd6f9 +0x025:  add    $0x48,%edx
086bd6fc +0x028:  mov    0xc(%eax,%edx,4),%eax
086bd700 +0x02c:  test   %eax,%eax
086bd702 +0x02e:  je     086bd796 <+0xc2>
086bd708 +0x034:  lea    -0x1c(%ebp),%eax
086bd70b +0x037:  mov    %eax,(%esp)
086bd70e +0x03a:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bd713 +0x03f:  movl   $0x5a,0x8(%esp)
086bd71b +0x047:  movl   $0x0,0x4(%esp)
086bd723 +0x04f:  lea    -0x1c(%ebp),%eax
086bd726 +0x052:  mov    %eax,(%esp)
086bd729 +0x055:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bd72e +0x05a:  movl   $0x1,0x4(%esp)
086bd736 +0x062:  lea    -0x1c(%ebp),%eax
086bd739 +0x065:  mov    %eax,(%esp)
086bd73c +0x068:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bd741 +0x06d:  mov    -0x10(%ebp),%edx
086bd744 +0x070:  mov    0x8(%ebp),%eax
086bd747 +0x073:  add    $0x48,%edx
086bd74a +0x076:  mov    0xc(%eax,%edx,4),%eax
086bd74e +0x07a:  lea    -0x1c(%ebp),%edx
086bd751 +0x07d:  mov    %edx,0x4(%esp)
086bd755 +0x081:  mov    %eax,(%esp)
086bd758 +0x084:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086bd75d +0x089:  mov    0x8(%ebp),%eax
086bd760 +0x08c:  mov    0x1d0(%eax),%eax
086bd766 +0x092:  test   %eax,%eax
086bd768 +0x094:  je     086bd796 <+0xc2>
086bd76a +0x096:  mov    0x8(%ebp),%eax
086bd76d +0x099:  mov    0x1d0(%eax),%eax
086bd773 +0x09f:  mov    %eax,(%esp)
086bd776 +0x0a2:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
086bd77b +0x0a7:  mov    %eax,%ebx
086bd77d +0x0a9:  call   0860e15b <_Z29GetInstanceDungeonEntranceLogv>  ; GetInstanceDungeonEntranceLog()
086bd782 +0x0ae:  movl   $0x0,0x8(%esp)
086bd78a +0x0b6:  mov    %ebx,0x4(%esp)
086bd78e +0x0ba:  mov    %eax,(%esp)
086bd791 +0x0bd:  call   0860e1ee <_ZN19CDungeonEntranceLog24IncrementDungeonEntranceEib>  ; CDungeonEntranceLog::IncrementDungeonEntrance(int, bool)
086bd796 +0x0c2:  addl   $0x1,-0x10(%ebp)
086bd79a +0x0c6:  cmpl   $0x5,-0x10(%ebp)
086bd79e +0x0ca:  setle  %al
086bd7a1 +0x0cd:  test   %al,%al
086bd7a3 +0x0cf:  jne    086bd6f3 <+0x1f>
086bd7a9 +0x0d5:  movl   $0x1,0x4(%esp)
086bd7b1 +0x0dd:  mov    0x8(%ebp),%eax
086bd7b4 +0x0e0:  mov    %eax,(%esp)
086bd7b7 +0x0e3:  call   086bb53c <_ZN7WarRoom11ChangeStateE13WARROOM_STATE>  ; WarRoom::ChangeState(WARROOM_STATE)
086bd7bc +0x0e8:  movl   $0x0,-0xc(%ebp)
086bd7c3 +0x0ef:  jmp    086bd808 <+0x134>
086bd7c5 +0x0f1:  mov    -0xc(%ebp),%edx
086bd7c8 +0x0f4:  mov    0x8(%ebp),%eax
086bd7cb +0x0f7:  add    $0x48,%edx
086bd7ce +0x0fa:  mov    0xc(%eax,%edx,4),%eax
086bd7d2 +0x0fe:  test   %eax,%eax
086bd7d4 +0x100:  je     086bd804 <+0x130>
086bd7d6 +0x102:  mov    -0xc(%ebp),%edx
086bd7d9 +0x105:  mov    0x8(%ebp),%eax
086bd7dc +0x108:  add    $0x48,%edx
086bd7df +0x10b:  mov    0xc(%eax,%edx,4),%ebx
086bd7e3 +0x10f:  mov    -0xc(%ebp),%edx
086bd7e6 +0x112:  mov    0x8(%ebp),%eax
086bd7e9 +0x115:  add    $0x48,%edx
086bd7ec +0x118:  mov    0xc(%eax,%edx,4),%eax
086bd7f0 +0x11c:  mov    %eax,(%esp)
086bd7f3 +0x11f:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
086bd7f8 +0x124:  mov    %ebx,0x4(%esp)
086bd7fc +0x128:  mov    %eax,(%esp)
086bd7ff +0x12b:  call   080f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>  ; WongWork::CHackAnalyzer::beginCollectHackInfo(CUser*)
086bd804 +0x130:  addl   $0x1,-0xc(%ebp)
086bd808 +0x134:  cmpl   $0x5,-0xc(%ebp)
086bd80c +0x138:  setle  %al
086bd80f +0x13b:  test   %al,%al
086bd811 +0x13d:  jne    086bd7c5 <+0xf1>
086bd813 +0x13f:  jmp    086bd830 <+0x15c>
086bd815 +0x141:  mov    %edx,%ebx
086bd817 +0x143:  mov    %eax,%esi
086bd819 +0x145:  lea    -0x1c(%ebp),%eax
086bd81c +0x148:  mov    %eax,(%esp)
086bd81f +0x14b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bd824 +0x150:  mov    %esi,%eax
086bd826 +0x152:  mov    %ebx,%edx
086bd828 +0x154:  mov    %eax,(%esp)
086bd82b +0x157:  call   08ae3750 <_Unwind_Resume>
086bd830 +0x15c:  lea    -0x1c(%ebp),%eax
086bd833 +0x15f:  mov    %eax,(%esp)
086bd836 +0x162:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bd83b +0x167:  add    $0x30,%esp
086bd83e +0x16a:  pop    %ebx
086bd83f +0x16b:  pop    %esi
086bd840 +0x16c:  pop    %ebp
086bd841 +0x16d:  ret
```

## 反编译 C

```c
// WarRoom::Start @ 0x86bd6d4

/* WarRoom::Start() */

void __thiscall WarRoom::Start(WarRoom *this)

{
  CUser *pCVar1;
  int iVar2;
  CDungeonEntranceLog *this_00;
  CHackAnalyzer *this_01;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_20);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    if (*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) {
                    /* try { // try from 086bd70e to 086bd803 has its CatchHandler @ 086bd815 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x5a);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send(*(CUser **)(this + (local_14 + 0x48) * 4 + 0xc),local_20);
      if (*(int *)(this + 0x1d0) != 0) {
        iVar2 = CDungeon::get_index(*(CDungeon **)(this + 0x1d0));
        this_00 = (CDungeonEntranceLog *)GetInstanceDungeonEntranceLog();
        CDungeonEntranceLog::IncrementDungeonEntrance(this_00,iVar2,false);
      }
    }
  }
  ChangeState(this,1);
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      pCVar1 = *(CUser **)(this + (local_10 + 0x48) * 4 + 0xc);
      this_01 = (CHackAnalyzer *)
                CUser::getHackAnalyzer(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      WongWork::CHackAnalyzer::beginCollectHackInfo(this_01,pCVar1);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
