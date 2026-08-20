# send

`_ZN37DisPatcher_EventDungeon_DestoryObject4sendEP5CUserR9ParamBase`

`DisPatcher_EventDungeon_DestoryObject::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_DestoryObject` | `0x0812bdcc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812bdcc  _ZN37DisPatcher_EventDungeon_DestoryObject4sendEP5CUserR9ParamBase
#           DisPatcher_EventDungeon_DestoryObject::send(CUser*, ParamBase&)
# range [0x0812bdcc, 0x0812be81]
0812bdcc +0x00:  push   %ebp
0812bdcd +0x01:  mov    %esp,%ebp
0812bdcf +0x03:  push   %esi
0812bdd0 +0x04:  push   %ebx
0812bdd1 +0x05:  sub    $0x20,%esp
0812bdd4 +0x08:  mov    0x10(%ebp),%eax
0812bdd7 +0x0b:  mov    %eax,-0xc(%ebp)
0812bdda +0x0e:  lea    -0x18(%ebp),%eax
0812bddd +0x11:  mov    %eax,(%esp)
0812bde0 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0812bde5 +0x19:  movl   $0x21b,0x8(%esp)
0812bded +0x21:  movl   $0x1,0x4(%esp)
0812bdf5 +0x29:  lea    -0x18(%ebp),%eax
0812bdf8 +0x2c:  mov    %eax,(%esp)
0812bdfb +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0812be00 +0x34:  movl   $0x1,0x4(%esp)
0812be08 +0x3c:  lea    -0x18(%ebp),%eax
0812be0b +0x3f:  mov    %eax,(%esp)
0812be0e +0x42:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0812be13 +0x47:  mov    -0xc(%ebp),%eax
0812be16 +0x4a:  movl   $0x6,0x8(%esp)
0812be1e +0x52:  mov    %eax,0x4(%esp)
0812be22 +0x56:  lea    -0x18(%ebp),%eax
0812be25 +0x59:  mov    %eax,(%esp)
0812be28 +0x5c:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0812be2d +0x61:  movl   $0x1,0x4(%esp)
0812be35 +0x69:  lea    -0x18(%ebp),%eax
0812be38 +0x6c:  mov    %eax,(%esp)
0812be3b +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0812be40 +0x74:  lea    -0x18(%ebp),%eax
0812be43 +0x77:  mov    %eax,0x4(%esp)
0812be47 +0x7b:  mov    0xc(%ebp),%eax
0812be4a +0x7e:  mov    %eax,(%esp)
0812be4d +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0812be52 +0x86:  jmp    0812be6f <+0xa3>
0812be54 +0x88:  mov    %edx,%ebx
0812be56 +0x8a:  mov    %eax,%esi
0812be58 +0x8c:  lea    -0x18(%ebp),%eax
0812be5b +0x8f:  mov    %eax,(%esp)
0812be5e +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812be63 +0x97:  mov    %esi,%eax
0812be65 +0x99:  mov    %ebx,%edx
0812be67 +0x9b:  mov    %eax,(%esp)
0812be6a +0x9e:  call   08ae3750 <_Unwind_Resume>
0812be6f +0xa3:  lea    -0x18(%ebp),%eax
0812be72 +0xa6:  mov    %eax,(%esp)
0812be75 +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0812be7a +0xae:  add    $0x20,%esp
0812be7d +0xb1:  pop    %ebx
0812be7e +0xb2:  pop    %esi
0812be7f +0xb3:  pop    %ebp
0812be80 +0xb4:  ret
0812be81 +0xb5:  nop
```

## 反编译 C

```c
// DisPatcher_EventDungeon_DestoryObject::send @ 0x812bdcc

/* DisPatcher_EventDungeon_DestoryObject::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_EventDungeon_DestoryObject::send
          (DisPatcher_EventDungeon_DestoryObject *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0812bdfb to 0812be51 has its CatchHandler @ 0812be54 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x21b);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,6);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
