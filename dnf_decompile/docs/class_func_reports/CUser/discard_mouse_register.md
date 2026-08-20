# discard_mouse_register

`_ZN5CUser22discard_mouse_registerEv`

`CUser::discard_mouse_register()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08680bd2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08680bd2  _ZN5CUser22discard_mouse_registerEv
#           CUser::discard_mouse_register()
# range [0x08680bd2, 0x08680c89]
08680bd2 +0x00:  push   %ebp
08680bd3 +0x01:  mov    %esp,%ebp
08680bd5 +0x03:  push   %esi
08680bd6 +0x04:  push   %ebx
08680bd7 +0x05:  sub    $0x20,%esp
08680bda +0x08:  mov    0x8(%ebp),%eax
08680bdd +0x0b:  mov    %eax,(%esp)
08680be0 +0x0e:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680be5 +0x13:  mov    %eax,(%esp)
08680be8 +0x16:  call   084ebdee <_GLOBAL__I__Z7getUserj+0x2da0>  ; global constructors keyed to getUser(unsigned int)+0x2da0
08680bed +0x1b:  mov    %al,-0x9(%ebp)
08680bf0 +0x1e:  cmpb   $0x1,-0x9(%ebp)
08680bf4 +0x22:  jne    08680c82 <+0xb0>
08680bfa +0x28:  lea    -0x18(%ebp),%eax
08680bfd +0x2b:  mov    %eax,(%esp)
08680c00 +0x2e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08680c05 +0x33:  movl   $0xab,0x8(%esp)
08680c0d +0x3b:  movl   $0x0,0x4(%esp)
08680c15 +0x43:  lea    -0x18(%ebp),%eax
08680c18 +0x46:  mov    %eax,(%esp)
08680c1b +0x49:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08680c20 +0x4e:  movl   $0x1,0x4(%esp)
08680c28 +0x56:  lea    -0x18(%ebp),%eax
08680c2b +0x59:  mov    %eax,(%esp)
08680c2e +0x5c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08680c33 +0x61:  movl   $0x1,0x4(%esp)
08680c3b +0x69:  lea    -0x18(%ebp),%eax
08680c3e +0x6c:  mov    %eax,(%esp)
08680c41 +0x6f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08680c46 +0x74:  lea    -0x18(%ebp),%eax
08680c49 +0x77:  mov    %eax,0x4(%esp)
08680c4d +0x7b:  mov    0x8(%ebp),%eax
08680c50 +0x7e:  mov    %eax,(%esp)
08680c53 +0x81:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08680c58 +0x86:  jmp    08680c75 <+0xa3>
08680c5a +0x88:  mov    %edx,%ebx
08680c5c +0x8a:  mov    %eax,%esi
08680c5e +0x8c:  lea    -0x18(%ebp),%eax
08680c61 +0x8f:  mov    %eax,(%esp)
08680c64 +0x92:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08680c69 +0x97:  mov    %esi,%eax
08680c6b +0x99:  mov    %ebx,%edx
08680c6d +0x9b:  mov    %eax,(%esp)
08680c70 +0x9e:  call   08ae3750 <_Unwind_Resume>
08680c75 +0xa3:  lea    -0x18(%ebp),%eax
08680c78 +0xa6:  mov    %eax,(%esp)
08680c7b +0xa9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08680c80 +0xae:  jmp    08680c83 <+0xb1>
08680c82 +0xb0:  nop
08680c83 +0xb1:  add    $0x20,%esp
08680c86 +0xb4:  pop    %ebx
08680c87 +0xb5:  pop    %esi
08680c88 +0xb6:  pop    %ebp
08680c89 +0xb7:  ret
```

## 反编译 C

```c
// CUser::discard_mouse_register @ 0x8680bd2

/* CUser::discard_mouse_register() */

void __thiscall CUser::discard_mouse_register(CUser *this)

{
  CPad *this_00;
  PacketGuard local_1c [15];
  char local_d;
  
  this_00 = (CPad *)getPad(this);
  local_d = Sanicova::CPad::getVersionInfo(this_00);
  if (local_d == '\x01') {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08680c1b to 08680c57 has its CatchHandler @ 08680c5a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xab);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    Send(this,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
