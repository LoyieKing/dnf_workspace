# summonObjectAndSendPacket

`_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv`

`advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d658` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d658  _ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv
#           advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket()
# range [0x0812d658, 0x0812d803]
0812d658 +0x000:  push   %ebp
0812d659 +0x001:  mov    %esp,%ebp
0812d65b +0x003:  push   %esi
0812d65c +0x004:  push   %ebx
0812d65d +0x005:  sub    $0x50,%esp
0812d660 +0x008:  mov    0x8(%ebp),%eax
0812d663 +0x00b:  add    $0x4,%eax
0812d666 +0x00e:  mov    %eax,(%esp)
0812d669 +0x011:  call   08135152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd59
0812d66e +0x016:  mov    %eax,-0x10(%ebp)
0812d671 +0x019:  jmp    0812d7e7 <+0x18f>
0812d676 +0x01e:  mov    0x8(%ebp),%eax
0812d679 +0x021:  mov    (%eax),%eax
0812d67b +0x023:  mov    0x8(%ebp),%edx
0812d67e +0x026:  add    $0x4,%edx
0812d681 +0x029:  mov    %eax,0x4(%esp)
0812d685 +0x02d:  mov    %edx,(%esp)
0812d688 +0x030:  call   08135238 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe3f
0812d68d +0x035:  mov    (%eax),%eax
0812d68f +0x037:  test   %eax,%eax
0812d691 +0x039:  sete   %al
0812d694 +0x03c:  test   %al,%al
0812d696 +0x03e:  jne    0812d7d9 <+0x181>
0812d69c +0x044:  mov    0x8(%ebp),%eax
0812d69f +0x047:  mov    (%eax),%eax
0812d6a1 +0x049:  mov    0x8(%ebp),%edx
0812d6a4 +0x04c:  add    $0x4,%edx
0812d6a7 +0x04f:  mov    %eax,0x4(%esp)
0812d6ab +0x053:  mov    %edx,(%esp)
0812d6ae +0x056:  call   08135238 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xe3f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xe3f
0812d6b3 +0x05b:  mov    (%eax),%eax
0812d6b5 +0x05d:  mov    %eax,-0xc(%ebp)
0812d6b8 +0x060:  mov    -0xc(%ebp),%eax
0812d6bb +0x063:  mov    (%eax),%edx
0812d6bd +0x065:  mov    0x8(%ebp),%eax
0812d6c0 +0x068:  mov    0x34(%eax),%eax
0812d6c3 +0x06b:  mov    (%eax),%eax
0812d6c5 +0x06d:  cmp    %eax,%edx
0812d6c7 +0x06f:  jg     0812d7fc <+0x1a4>
0812d6cd +0x075:  mov    -0xc(%ebp),%eax
0812d6d0 +0x078:  mov    (%eax),%edx
0812d6d2 +0x07a:  mov    0x8(%ebp),%eax
0812d6d5 +0x07d:  mov    0x34(%eax),%eax
0812d6d8 +0x080:  mov    (%eax),%eax
0812d6da +0x082:  cmp    %eax,%edx
0812d6dc +0x084:  jg     0812d7da <+0x182>
0812d6e2 +0x08a:  mov    -0xc(%ebp),%eax
0812d6e5 +0x08d:  mov    0x10(%eax),%eax
0812d6e8 +0x090:  test   %eax,%eax
0812d6ea +0x092:  jne    0812d7da <+0x182>
0812d6f0 +0x098:  mov    0x8(%ebp),%eax
0812d6f3 +0x09b:  mov    0x2c(%eax),%eax
0812d6f6 +0x09e:  lea    0x1(%eax),%edx
0812d6f9 +0x0a1:  mov    0x8(%ebp),%eax
0812d6fc +0x0a4:  mov    %edx,0x2c(%eax)
0812d6ff +0x0a7:  mov    -0xc(%ebp),%eax
0812d702 +0x0aa:  movl   $0x1,0x10(%eax)
0812d709 +0x0b1:  lea    -0x44(%ebp),%eax
0812d70c +0x0b4:  mov    %eax,(%esp)
0812d70f +0x0b7:  call   081346a6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2ad>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2ad
0812d714 +0x0bc:  mov    -0xc(%ebp),%eax
0812d717 +0x0bf:  movzwl 0x4(%eax),%eax
0812d71b +0x0c3:  mov    %ax,-0x44(%ebp)
0812d71f +0x0c7:  mov    -0xc(%ebp),%eax
0812d722 +0x0ca:  add    $0x14,%eax
0812d725 +0x0cd:  movl   $0x24,0x8(%esp)
0812d72d +0x0d5:  mov    %eax,0x4(%esp)
0812d731 +0x0d9:  lea    -0x44(%ebp),%eax
0812d734 +0x0dc:  add    $0x4,%eax
0812d737 +0x0df:  mov    %eax,(%esp)
0812d73a +0x0e2:  call   0807d8a0 <_init+0x198>
0812d73f +0x0e7:  lea    -0x1c(%ebp),%eax
0812d742 +0x0ea:  mov    %eax,(%esp)
0812d745 +0x0ed:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0812d74a +0x0f2:  movl   $0x20b,0x8(%esp)
0812d752 +0x0fa:  movl   $0x0,0x4(%esp)
0812d75a +0x102:  lea    -0x1c(%ebp),%eax
0812d75d +0x105:  mov    %eax,(%esp)
0812d760 +0x108:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0812d765 +0x10d:  lea    -0x44(%ebp),%eax
0812d768 +0x110:  movl   $0x28,0x8(%esp)
0812d770 +0x118:  mov    %eax,0x4(%esp)
0812d774 +0x11c:  lea    -0x1c(%ebp),%eax
0812d777 +0x11f:  mov    %eax,(%esp)
0812d77a +0x122:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812d77f +0x127:  movl   $0x1,0x4(%esp)
0812d787 +0x12f:  lea    -0x1c(%ebp),%eax
0812d78a +0x132:  mov    %eax,(%esp)
0812d78d +0x135:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812d792 +0x13a:  mov    0x8(%ebp),%eax
0812d795 +0x13d:  mov    0x30(%eax),%eax
0812d798 +0x140:  mov    %eax,(%esp)
0812d79b +0x143:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0812d7a0 +0x148:  lea    -0x1c(%ebp),%edx
0812d7a3 +0x14b:  mov    %edx,0x4(%esp)
0812d7a7 +0x14f:  mov    %eax,(%esp)
0812d7aa +0x152:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0812d7af +0x157:  jmp    0812d7cc <+0x174>
0812d7b1 +0x159:  mov    %edx,%ebx
0812d7b3 +0x15b:  mov    %eax,%esi
0812d7b5 +0x15d:  lea    -0x1c(%ebp),%eax
0812d7b8 +0x160:  mov    %eax,(%esp)
0812d7bb +0x163:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812d7c0 +0x168:  mov    %esi,%eax
0812d7c2 +0x16a:  mov    %ebx,%edx
0812d7c4 +0x16c:  mov    %eax,(%esp)
0812d7c7 +0x16f:  call   08ae3750 <_Unwind_Resume>
0812d7cc +0x174:  lea    -0x1c(%ebp),%eax
0812d7cf +0x177:  mov    %eax,(%esp)
0812d7d2 +0x17a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812d7d7 +0x17f:  jmp    0812d7da <+0x182>
0812d7d9 +0x181:  nop
0812d7da +0x182:  mov    0x8(%ebp),%eax
0812d7dd +0x185:  mov    (%eax),%eax
0812d7df +0x187:  lea    0x1(%eax),%edx
0812d7e2 +0x18a:  mov    0x8(%ebp),%eax
0812d7e5 +0x18d:  mov    %edx,(%eax)
0812d7e7 +0x18f:  mov    0x8(%ebp),%eax
0812d7ea +0x192:  mov    (%eax),%eax
0812d7ec +0x194:  cmp    -0x10(%ebp),%eax
0812d7ef +0x197:  setb   %al
0812d7f2 +0x19a:  test   %al,%al
0812d7f4 +0x19c:  jne    0812d676 <+0x1e>
0812d7fa +0x1a2:  jmp    0812d7fd <+0x1a5>
0812d7fc +0x1a4:  nop
0812d7fd +0x1a5:  add    $0x50,%esp
0812d800 +0x1a8:  pop    %ebx
0812d801 +0x1a9:  pop    %esi
0812d802 +0x1aa:  pop    %ebp
0812d803 +0x1ab:  ret
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket @ 0x812d658

/* advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket() */

void __thiscall
advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket(ProcSummonObjectMs *this)

{
  int *piVar1;
  CUser *this_00;
  undefined2 local_48 [2];
  undefined1 auStack_44 [36];
  PacketGuard local_20 [12];
  uint local_14;
  int *local_10;
  
  local_14 = std::
             vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::
             size((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                   *)(this + 4));
  do {
    if (local_14 <= *(uint *)this) {
      return;
    }
    piVar1 = (int *)std::
                    vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                    ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                                  *)(this + 4),*(uint *)this);
    if (*piVar1 != 0) {
      local_10 = (int *)std::
                        vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                        ::operator[]((vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>
                                      *)(this + 4),*(uint *)this);
      local_10 = (int *)*local_10;
      if (**(int **)(this + 0x34) < *local_10) {
        return;
      }
      if ((*local_10 <= **(int **)(this + 0x34)) && (local_10[4] == 0)) {
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        local_10[4] = 1;
        NOTIPacketStruct::_NotiAdvanceAltarSpawnUnit::_NotiAdvanceAltarSpawnUnit
                  ((_NotiAdvanceAltarSpawnUnit *)local_48);
        local_48[0] = (undefined2)local_10[1];
        memcpy(auStack_44,local_10 + 5,0x24);
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0812d760 to 0812d7ae has its CatchHandler @ 0812d7b1 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x20b);
        InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)local_48,0x28);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        this_00 = (CUser *)CharacData::getUser(*(CharacData **)(this + 0x30));
        CUser::Send(this_00,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
    }
    *(int *)this = *(int *)this + 1;
  } while( true );
}
```
