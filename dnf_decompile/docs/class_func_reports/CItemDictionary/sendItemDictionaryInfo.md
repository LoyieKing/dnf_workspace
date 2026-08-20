# sendItemDictionaryInfo

`_ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj`

`CItemDictionary::sendItemDictionaryInfo(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811dce6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811dce6  _ZN15CItemDictionary22sendItemDictionaryInfoEP5CUserj
#           CItemDictionary::sendItemDictionaryInfo(CUser*, unsigned int)
# range [0x0811dce6, 0x0811dd99]
0811dce6 +0x00:  push   %ebp
0811dce7 +0x01:  mov    %esp,%ebp
0811dce9 +0x03:  push   %esi
0811dcea +0x04:  push   %ebx
0811dceb +0x05:  sub    $0x20,%esp
0811dcee +0x08:  cmpl   $0x0,0xc(%ebp)
0811dcf2 +0x0c:  je     0811dd92 <+0xac>
0811dcf8 +0x12:  lea    -0x14(%ebp),%eax
0811dcfb +0x15:  mov    %eax,(%esp)
0811dcfe +0x18:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0811dd03 +0x1d:  movl   $0x181,0x8(%esp)
0811dd0b +0x25:  movl   $0x0,0x4(%esp)
0811dd13 +0x2d:  lea    -0x14(%ebp),%eax
0811dd16 +0x30:  mov    %eax,(%esp)
0811dd19 +0x33:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0811dd1e +0x38:  movl   $0x1,0x4(%esp)
0811dd26 +0x40:  lea    -0x14(%ebp),%eax
0811dd29 +0x43:  mov    %eax,(%esp)
0811dd2c +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811dd31 +0x4b:  mov    0x10(%ebp),%eax
0811dd34 +0x4e:  mov    %eax,0x4(%esp)
0811dd38 +0x52:  lea    -0x14(%ebp),%eax
0811dd3b +0x55:  mov    %eax,(%esp)
0811dd3e +0x58:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0811dd43 +0x5d:  movl   $0x1,0x4(%esp)
0811dd4b +0x65:  lea    -0x14(%ebp),%eax
0811dd4e +0x68:  mov    %eax,(%esp)
0811dd51 +0x6b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0811dd56 +0x70:  lea    -0x14(%ebp),%eax
0811dd59 +0x73:  mov    %eax,0x4(%esp)
0811dd5d +0x77:  mov    0xc(%ebp),%eax
0811dd60 +0x7a:  mov    %eax,(%esp)
0811dd63 +0x7d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0811dd68 +0x82:  jmp    0811dd85 <+0x9f>
0811dd6a +0x84:  mov    %edx,%ebx
0811dd6c +0x86:  mov    %eax,%esi
0811dd6e +0x88:  lea    -0x14(%ebp),%eax
0811dd71 +0x8b:  mov    %eax,(%esp)
0811dd74 +0x8e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0811dd79 +0x93:  mov    %esi,%eax
0811dd7b +0x95:  mov    %ebx,%edx
0811dd7d +0x97:  mov    %eax,(%esp)
0811dd80 +0x9a:  call   08ae3750 <_Unwind_Resume>
0811dd85 +0x9f:  lea    -0x14(%ebp),%eax
0811dd88 +0xa2:  mov    %eax,(%esp)
0811dd8b +0xa5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0811dd90 +0xaa:  jmp    0811dd93 <+0xad>
0811dd92 +0xac:  nop
0811dd93 +0xad:  add    $0x20,%esp
0811dd96 +0xb0:  pop    %ebx
0811dd97 +0xb1:  pop    %esi
0811dd98 +0xb2:  pop    %ebp
0811dd99 +0xb3:  ret
```

## 反编译 C

```c
// CItemDictionary::sendItemDictionaryInfo @ 0x811dce6

/* CItemDictionary::sendItemDictionaryInfo(CUser*, unsigned int) */

void __thiscall
CItemDictionary::sendItemDictionaryInfo(CItemDictionary *this,CUser *param_1,uint param_2)

{
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0811dd19 to 0811dd67 has its CatchHandler @ 0811dd6a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x181);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
