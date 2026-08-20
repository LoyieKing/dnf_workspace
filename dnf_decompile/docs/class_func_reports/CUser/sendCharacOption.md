# sendCharacOption

`_ZN5CUser16sendCharacOptionEv`

`CUser::sendCharacOption()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f0e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f0e8  _ZN5CUser16sendCharacOptionEv
#           CUser::sendCharacOption()
# range [0x0868f0e8, 0x0868f1bf]
0868f0e8 +0x00:  push   %ebp
0868f0e9 +0x01:  mov    %esp,%ebp
0868f0eb +0x03:  push   %esi
0868f0ec +0x04:  push   %ebx
0868f0ed +0x05:  sub    $0x20,%esp
0868f0f0 +0x08:  mov    0x8(%ebp),%eax
0868f0f3 +0x0b:  mov    %eax,(%esp)
0868f0f6 +0x0e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868f0fb +0x13:  test   %eax,%eax
0868f0fd +0x15:  sete   %al
0868f100 +0x18:  test   %al,%al
0868f102 +0x1a:  jne    0868f1b7 <+0xcf>
0868f108 +0x20:  lea    -0x14(%ebp),%eax
0868f10b +0x23:  mov    %eax,(%esp)
0868f10e +0x26:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868f113 +0x2b:  movl   $0x186,0x8(%esp)
0868f11b +0x33:  movl   $0x0,0x4(%esp)
0868f123 +0x3b:  lea    -0x14(%ebp),%eax
0868f126 +0x3e:  mov    %eax,(%esp)
0868f129 +0x41:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868f12e +0x46:  movl   $0x200,0x4(%esp)
0868f136 +0x4e:  lea    -0x14(%ebp),%eax
0868f139 +0x51:  mov    %eax,(%esp)
0868f13c +0x54:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868f141 +0x59:  mov    0x8(%ebp),%eax
0868f144 +0x5c:  mov    %eax,(%esp)
0868f147 +0x5f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868f14c +0x64:  add    $0x12b7,%eax
0868f151 +0x69:  movl   $0x200,0x8(%esp)
0868f159 +0x71:  mov    %eax,0x4(%esp)
0868f15d +0x75:  lea    -0x14(%ebp),%eax
0868f160 +0x78:  mov    %eax,(%esp)
0868f163 +0x7b:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
0868f168 +0x80:  movl   $0x1,0x4(%esp)
0868f170 +0x88:  lea    -0x14(%ebp),%eax
0868f173 +0x8b:  mov    %eax,(%esp)
0868f176 +0x8e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868f17b +0x93:  lea    -0x14(%ebp),%eax
0868f17e +0x96:  mov    %eax,0x4(%esp)
0868f182 +0x9a:  mov    0x8(%ebp),%eax
0868f185 +0x9d:  mov    %eax,(%esp)
0868f188 +0xa0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868f18d +0xa5:  jmp    0868f1aa <+0xc2>
0868f18f +0xa7:  mov    %edx,%ebx
0868f191 +0xa9:  mov    %eax,%esi
0868f193 +0xab:  lea    -0x14(%ebp),%eax
0868f196 +0xae:  mov    %eax,(%esp)
0868f199 +0xb1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868f19e +0xb6:  mov    %esi,%eax
0868f1a0 +0xb8:  mov    %ebx,%edx
0868f1a2 +0xba:  mov    %eax,(%esp)
0868f1a5 +0xbd:  call   08ae3750 <_Unwind_Resume>
0868f1aa +0xc2:  lea    -0x14(%ebp),%eax
0868f1ad +0xc5:  mov    %eax,(%esp)
0868f1b0 +0xc8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868f1b5 +0xcd:  jmp    0868f1b8 <+0xd0>
0868f1b7 +0xcf:  nop
0868f1b8 +0xd0:  add    $0x20,%esp
0868f1bb +0xd3:  pop    %ebx
0868f1bc +0xd4:  pop    %esi
0868f1bd +0xd5:  pop    %ebp
0868f1be +0xd6:  ret
0868f1bf +0xd7:  nop
```

## 反编译 C

```c
// CUser::sendCharacOption @ 0x868f0e8

/* CUser::sendCharacOption() */

void __thiscall CUser::sendCharacOption(CUser *this)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0868f129 to 0868f18c has its CatchHandler @ 0868f18f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x186);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0x200);
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_18,(char *)(iVar1 + 0x12b7),0x200);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
