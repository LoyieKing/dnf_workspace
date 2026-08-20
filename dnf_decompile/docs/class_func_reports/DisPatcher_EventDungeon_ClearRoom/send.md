# send

`_ZN33DisPatcher_EventDungeon_ClearRoom4sendEP5CUserR9ParamBase`

`DisPatcher_EventDungeon_ClearRoom::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_ClearRoom` | `0x0812bf16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812bf16  _ZN33DisPatcher_EventDungeon_ClearRoom4sendEP5CUserR9ParamBase
#           DisPatcher_EventDungeon_ClearRoom::send(CUser*, ParamBase&)
# range [0x0812bf16, 0x0812bfca]
0812bf16 +0x00:  push   %ebp
0812bf17 +0x01:  mov    %esp,%ebp
0812bf19 +0x03:  push   %esi
0812bf1a +0x04:  push   %ebx
0812bf1b +0x05:  sub    $0x20,%esp
0812bf1e +0x08:  mov    0x10(%ebp),%eax
0812bf21 +0x0b:  mov    %eax,-0xc(%ebp)
0812bf24 +0x0e:  lea    -0x18(%ebp),%eax
0812bf27 +0x11:  mov    %eax,(%esp)
0812bf2a +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0812bf2f +0x19:  movl   $0x21c,0x8(%esp)
0812bf37 +0x21:  movl   $0x1,0x4(%esp)
0812bf3f +0x29:  lea    -0x18(%ebp),%eax
0812bf42 +0x2c:  mov    %eax,(%esp)
0812bf45 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0812bf4a +0x34:  movl   $0x1,0x4(%esp)
0812bf52 +0x3c:  lea    -0x18(%ebp),%eax
0812bf55 +0x3f:  mov    %eax,(%esp)
0812bf58 +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812bf5d +0x47:  mov    -0xc(%ebp),%eax
0812bf60 +0x4a:  movl   $0xc,0x8(%esp)
0812bf68 +0x52:  mov    %eax,0x4(%esp)
0812bf6c +0x56:  lea    -0x18(%ebp),%eax
0812bf6f +0x59:  mov    %eax,(%esp)
0812bf72 +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812bf77 +0x61:  movl   $0x1,0x4(%esp)
0812bf7f +0x69:  lea    -0x18(%ebp),%eax
0812bf82 +0x6c:  mov    %eax,(%esp)
0812bf85 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812bf8a +0x74:  lea    -0x18(%ebp),%eax
0812bf8d +0x77:  mov    %eax,0x4(%esp)
0812bf91 +0x7b:  mov    0xc(%ebp),%eax
0812bf94 +0x7e:  mov    %eax,(%esp)
0812bf97 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0812bf9c +0x86:  jmp    0812bfb9 <+0xa3>
0812bf9e +0x88:  mov    %edx,%ebx
0812bfa0 +0x8a:  mov    %eax,%esi
0812bfa2 +0x8c:  lea    -0x18(%ebp),%eax
0812bfa5 +0x8f:  mov    %eax,(%esp)
0812bfa8 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812bfad +0x97:  mov    %esi,%eax
0812bfaf +0x99:  mov    %ebx,%edx
0812bfb1 +0x9b:  mov    %eax,(%esp)
0812bfb4 +0x9e:  call   08ae3750 <_Unwind_Resume>
0812bfb9 +0xa3:  lea    -0x18(%ebp),%eax
0812bfbc +0xa6:  mov    %eax,(%esp)
0812bfbf +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812bfc4 +0xae:  add    $0x20,%esp
0812bfc7 +0xb1:  pop    %ebx
0812bfc8 +0xb2:  pop    %esi
0812bfc9 +0xb3:  pop    %ebp
0812bfca +0xb4:  ret
```

## 反编译 C

```c
// DisPatcher_EventDungeon_ClearRoom::send @ 0x812bf16

/* DisPatcher_EventDungeon_ClearRoom::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_EventDungeon_ClearRoom::send
          (DisPatcher_EventDungeon_ClearRoom *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0812bf45 to 0812bf9b has its CatchHandler @ 0812bf9e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x21c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
