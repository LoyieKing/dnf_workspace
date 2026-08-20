# sendTileGiveUpInfo

`_ZNK10BlueMarble18sendTileGiveUpInfoEi`

`BlueMarble::sendTileGiveUpInfo(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d88c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d88c2  _ZNK10BlueMarble18sendTileGiveUpInfoEi
#           BlueMarble::sendTileGiveUpInfo(int) const
# range [0x080d88c2, 0x080d8955]
080d88c2 +0x00:  push   %ebp
080d88c3 +0x01:  mov    %esp,%ebp
080d88c5 +0x03:  push   %esi
080d88c6 +0x04:  push   %ebx
080d88c7 +0x05:  sub    $0x20,%esp
080d88ca +0x08:  lea    -0x14(%ebp),%eax
080d88cd +0x0b:  mov    %eax,(%esp)
080d88d0 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d88d5 +0x13:  movl   $0x1b3,0x8(%esp)
080d88dd +0x1b:  movl   $0x0,0x4(%esp)
080d88e5 +0x23:  lea    -0x14(%ebp),%eax
080d88e8 +0x26:  mov    %eax,(%esp)
080d88eb +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d88f0 +0x2e:  mov    0xc(%ebp),%eax
080d88f3 +0x31:  mov    %eax,0x4(%esp)
080d88f7 +0x35:  lea    -0x14(%ebp),%eax
080d88fa +0x38:  mov    %eax,(%esp)
080d88fd +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d8902 +0x40:  movl   $0x1,0x4(%esp)
080d890a +0x48:  lea    -0x14(%ebp),%eax
080d890d +0x4b:  mov    %eax,(%esp)
080d8910 +0x4e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d8915 +0x53:  lea    -0x14(%ebp),%eax
080d8918 +0x56:  mov    %eax,0x4(%esp)
080d891c +0x5a:  mov    0x8(%ebp),%eax
080d891f +0x5d:  mov    %eax,(%esp)
080d8922 +0x60:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
080d8927 +0x65:  jmp    080d8944 <+0x82>
080d8929 +0x67:  mov    %edx,%ebx
080d892b +0x69:  mov    %eax,%esi
080d892d +0x6b:  lea    -0x14(%ebp),%eax
080d8930 +0x6e:  mov    %eax,(%esp)
080d8933 +0x71:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d8938 +0x76:  mov    %esi,%eax
080d893a +0x78:  mov    %ebx,%edx
080d893c +0x7a:  mov    %eax,(%esp)
080d893f +0x7d:  call   08ae3750 <_Unwind_Resume>
080d8944 +0x82:  lea    -0x14(%ebp),%eax
080d8947 +0x85:  mov    %eax,(%esp)
080d894a +0x88:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d894f +0x8d:  add    $0x20,%esp
080d8952 +0x90:  pop    %ebx
080d8953 +0x91:  pop    %esi
080d8954 +0x92:  pop    %ebp
080d8955 +0x93:  ret
```

## 反编译 C

```c
// BlueMarble::sendTileGiveUpInfo @ 0x80d88c2

/* BlueMarble::sendTileGiveUpInfo(int) const */

void __thiscall BlueMarble::sendTileGiveUpInfo(BlueMarble *this,int param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d88eb to 080d8926 has its CatchHandler @ 080d8929 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  sendToBlueMarble(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
