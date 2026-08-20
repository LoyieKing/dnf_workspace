# Send_SoloPlay_Reject_NotiPack

`_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG`

`CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e0ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e0ee  _ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG
#           CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE, ENUM_SOLO_PLAY_REJECT_MSG)
# range [0x0868e0ee, 0x0868e1f5]
0868e0ee +0x000:  push   %ebp
0868e0ef +0x001:  mov    %esp,%ebp
0868e0f1 +0x003:  push   %esi
0868e0f2 +0x004:  push   %ebx
0868e0f3 +0x005:  sub    $0x20,%esp
0868e0f6 +0x008:  lea    -0x14(%ebp),%eax
0868e0f9 +0x00b:  mov    %eax,(%esp)
0868e0fc +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868e101 +0x013:  lea    -0x14(%ebp),%eax
0868e104 +0x016:  mov    %eax,(%esp)
0868e107 +0x019:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0868e10c +0x01e:  movl   $0x17d,0x8(%esp)
0868e114 +0x026:  movl   $0x0,0x4(%esp)
0868e11c +0x02e:  lea    -0x14(%ebp),%eax
0868e11f +0x031:  mov    %eax,(%esp)
0868e122 +0x034:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868e127 +0x039:  cmpl   $0x0,0xc(%ebp)
0868e12b +0x03d:  je     0868e16a <+0x7c>
0868e12d +0x03f:  mov    0xc(%ebp),%eax
0868e130 +0x042:  mov    %eax,(%esp)
0868e133 +0x045:  call   0807e3b0 <_init+0xca8>
0868e138 +0x04a:  mov    %eax,0x4(%esp)
0868e13c +0x04e:  lea    -0x14(%ebp),%eax
0868e13f +0x051:  mov    %eax,(%esp)
0868e142 +0x054:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e147 +0x059:  mov    0xc(%ebp),%eax
0868e14a +0x05c:  mov    %eax,(%esp)
0868e14d +0x05f:  call   0807e3b0 <_init+0xca8>
0868e152 +0x064:  mov    %eax,0x8(%esp)
0868e156 +0x068:  mov    0xc(%ebp),%eax
0868e159 +0x06b:  mov    %eax,0x4(%esp)
0868e15d +0x06f:  lea    -0x14(%ebp),%eax
0868e160 +0x072:  mov    %eax,(%esp)
0868e163 +0x075:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
0868e168 +0x07a:  jmp    0868e17d <+0x8f>
0868e16a +0x07c:  movl   $0x0,0x4(%esp)
0868e172 +0x084:  lea    -0x14(%ebp),%eax
0868e175 +0x087:  mov    %eax,(%esp)
0868e178 +0x08a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e17d +0x08f:  mov    0x10(%ebp),%eax
0868e180 +0x092:  mov    %eax,0x4(%esp)
0868e184 +0x096:  lea    -0x14(%ebp),%eax
0868e187 +0x099:  mov    %eax,(%esp)
0868e18a +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e18f +0x0a1:  mov    0x14(%ebp),%eax
0868e192 +0x0a4:  mov    %eax,0x4(%esp)
0868e196 +0x0a8:  lea    -0x14(%ebp),%eax
0868e199 +0x0ab:  mov    %eax,(%esp)
0868e19c +0x0ae:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868e1a1 +0x0b3:  movl   $0x1,0x4(%esp)
0868e1a9 +0x0bb:  lea    -0x14(%ebp),%eax
0868e1ac +0x0be:  mov    %eax,(%esp)
0868e1af +0x0c1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868e1b4 +0x0c6:  lea    -0x14(%ebp),%eax
0868e1b7 +0x0c9:  mov    %eax,0x4(%esp)
0868e1bb +0x0cd:  mov    0x8(%ebp),%eax
0868e1be +0x0d0:  mov    %eax,(%esp)
0868e1c1 +0x0d3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868e1c6 +0x0d8:  jmp    0868e1e3 <+0xf5>
0868e1c8 +0x0da:  mov    %edx,%ebx
0868e1ca +0x0dc:  mov    %eax,%esi
0868e1cc +0x0de:  lea    -0x14(%ebp),%eax
0868e1cf +0x0e1:  mov    %eax,(%esp)
0868e1d2 +0x0e4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868e1d7 +0x0e9:  mov    %esi,%eax
0868e1d9 +0x0eb:  mov    %ebx,%edx
0868e1db +0x0ed:  mov    %eax,(%esp)
0868e1de +0x0f0:  call   08ae3750 <_Unwind_Resume>
0868e1e3 +0x0f5:  lea    -0x14(%ebp),%eax
0868e1e6 +0x0f8:  mov    %eax,(%esp)
0868e1e9 +0x0fb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868e1ee +0x100:  add    $0x20,%esp
0868e1f1 +0x103:  pop    %ebx
0868e1f2 +0x104:  pop    %esi
0868e1f3 +0x105:  pop    %ebp
0868e1f4 +0x106:  ret
0868e1f5 +0x107:  nop
```

## 反编译 C

```c
// CUser::Send_SoloPlay_Reject_NotiPack @ 0x868e0ee

/* CUser::Send_SoloPlay_Reject_NotiPack(char const*, ENUM_SOLO_PLAY_REJECT_MODE,
   ENUM_SOLO_PLAY_REJECT_MSG) */

void __thiscall
CUser::Send_SoloPlay_Reject_NotiPack(CUser *this,char *param_1,int param_3,int param_4)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0868e107 to 0868e1c5 has its CatchHandler @ 0868e1c8 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x17d);
  if (param_1 == (char *)0x0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
  }
  else {
    sVar1 = strlen(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
    sVar1 = strlen(param_1);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_1,sVar1);
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
