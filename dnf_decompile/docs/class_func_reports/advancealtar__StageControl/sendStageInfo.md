# sendStageInfo

`_ZN12advancealtar12StageControl13sendStageInfoEv`

`advancealtar::StageControl::sendStageInfo()`

| 类 | 地址 |
|---|---|
| `advancealtar::StageControl` | `0x081300f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081300f6  _ZN12advancealtar12StageControl13sendStageInfoEv
#           advancealtar::StageControl::sendStageInfo()
# range [0x081300f6, 0x081301df]
081300f6 +0x00:  push   %ebp
081300f7 +0x01:  mov    %esp,%ebp
081300f9 +0x03:  push   %esi
081300fa +0x04:  push   %ebx
081300fb +0x05:  sub    $0x30,%esp
081300fe +0x08:  mov    0x8(%ebp),%eax
08130101 +0x0b:  add    $0x98,%eax
08130106 +0x10:  mov    %eax,(%esp)
08130109 +0x13:  call   08134814 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x41b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x41b
0813010e +0x18:  mov    %eax,-0xc(%ebp)
08130111 +0x1b:  cmpl   $0x0,-0xc(%ebp)
08130115 +0x1f:  je     081301d7 <+0xe1>
0813011b +0x25:  lea    -0x14(%ebp),%eax
0813011e +0x28:  mov    %eax,(%esp)
08130121 +0x2b:  call   081346d8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2df>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2df
08130126 +0x30:  mov    0x8(%ebp),%eax
08130129 +0x33:  add    $0x4,%eax
0813012c +0x36:  mov    %eax,(%esp)
0813012f +0x39:  call   0812eb26 <_ZNK12advancealtar9ProcStage13getStageIndexEv>  ; advancealtar::ProcStage::getStageIndex() const
08130134 +0x3e:  mov    %eax,-0x14(%ebp)
08130137 +0x41:  mov    0x8(%ebp),%eax
0813013a +0x44:  add    $0x4,%eax
0813013d +0x47:  mov    %eax,(%esp)
08130140 +0x4a:  call   0813486c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x473>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x473
08130145 +0x4f:  mov    %eax,-0x10(%ebp)
08130148 +0x52:  lea    -0x20(%ebp),%eax
0813014b +0x55:  mov    %eax,(%esp)
0813014e +0x58:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08130153 +0x5d:  movl   $0x209,0x8(%esp)
0813015b +0x65:  movl   $0x0,0x4(%esp)
08130163 +0x6d:  lea    -0x20(%ebp),%eax
08130166 +0x70:  mov    %eax,(%esp)
08130169 +0x73:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0813016e +0x78:  lea    -0x14(%ebp),%eax
08130171 +0x7b:  movl   $0x8,0x8(%esp)
08130179 +0x83:  mov    %eax,0x4(%esp)
0813017d +0x87:  lea    -0x20(%ebp),%eax
08130180 +0x8a:  mov    %eax,(%esp)
08130183 +0x8d:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08130188 +0x92:  movl   $0x1,0x4(%esp)
08130190 +0x9a:  lea    -0x20(%ebp),%eax
08130193 +0x9d:  mov    %eax,(%esp)
08130196 +0xa0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0813019b +0xa5:  lea    -0x20(%ebp),%eax
0813019e +0xa8:  mov    %eax,0x4(%esp)
081301a2 +0xac:  mov    -0xc(%ebp),%eax
081301a5 +0xaf:  mov    %eax,(%esp)
081301a8 +0xb2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081301ad +0xb7:  jmp    081301ca <+0xd4>
081301af +0xb9:  mov    %edx,%ebx
081301b1 +0xbb:  mov    %eax,%esi
081301b3 +0xbd:  lea    -0x20(%ebp),%eax
081301b6 +0xc0:  mov    %eax,(%esp)
081301b9 +0xc3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081301be +0xc8:  mov    %esi,%eax
081301c0 +0xca:  mov    %ebx,%edx
081301c2 +0xcc:  mov    %eax,(%esp)
081301c5 +0xcf:  call   08ae3750 <_Unwind_Resume>
081301ca +0xd4:  lea    -0x20(%ebp),%eax
081301cd +0xd7:  mov    %eax,(%esp)
081301d0 +0xda:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081301d5 +0xdf:  jmp    081301d8 <+0xe2>
081301d7 +0xe1:  nop
081301d8 +0xe2:  add    $0x30,%esp
081301db +0xe5:  pop    %ebx
081301dc +0xe6:  pop    %esi
081301dd +0xe7:  pop    %ebp
081301de +0xe8:  ret
081301df +0xe9:  nop
```

## 反编译 C

```c
// advancealtar::StageControl::sendStageInfo @ 0x81300f6

/* advancealtar::StageControl::sendStageInfo() */

void __thiscall advancealtar::StageControl::sendStageInfo(StageControl *this)

{
  PacketGuard local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  CUser *local_10;
  
  local_10 = (CUser *)CharacData::getUser((CharacData *)(this + 0x98));
  if (local_10 != (CUser *)0x0) {
    NOTIPacketStruct::_NotiAdvanceAltarStageInfo::_NotiAdvanceAltarStageInfo
              ((_NotiAdvanceAltarStageInfo *)&local_18);
    local_18 = ProcStage::getStageIndex((ProcStage *)(this + 4));
    local_14 = ProcStage::getStageDifficulty((ProcStage *)(this + 4));
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08130169 to 081301ac has its CatchHandler @ 081301af */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x209);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_24,(char *)&local_18,8);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(local_10,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}
```
