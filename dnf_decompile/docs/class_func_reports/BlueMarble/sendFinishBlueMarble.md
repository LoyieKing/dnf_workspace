# sendFinishBlueMarble

`_ZNK10BlueMarble20sendFinishBlueMarbleEv`

`BlueMarble::sendFinishBlueMarble() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8752  _ZNK10BlueMarble20sendFinishBlueMarbleEv
#           BlueMarble::sendFinishBlueMarble() const
# range [0x080d8752, 0x080d8801]
080d8752 +0x00:  push   %ebp
080d8753 +0x01:  mov    %esp,%ebp
080d8755 +0x03:  push   %esi
080d8756 +0x04:  push   %ebx
080d8757 +0x05:  sub    $0x20,%esp
080d875a +0x08:  mov    0x8(%ebp),%eax
080d875d +0x0b:  mov    %eax,(%esp)
080d8760 +0x0e:  call   080d7d5e <_ZNK10BlueMarble9getWinnerEv>  ; BlueMarble::getWinner() const
080d8765 +0x13:  mov    %eax,-0xc(%ebp)
080d8768 +0x16:  cmpl   $0xffffffff,-0xc(%ebp)
080d876c +0x1a:  je     080d87f9 <+0xa7>
080d8772 +0x20:  lea    -0x18(%ebp),%eax
080d8775 +0x23:  mov    %eax,(%esp)
080d8778 +0x26:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d877d +0x2b:  movl   $0x1b1,0x8(%esp)
080d8785 +0x33:  movl   $0x0,0x4(%esp)
080d878d +0x3b:  lea    -0x18(%ebp),%eax
080d8790 +0x3e:  mov    %eax,(%esp)
080d8793 +0x41:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d8798 +0x46:  mov    -0xc(%ebp),%eax
080d879b +0x49:  mov    %eax,0x4(%esp)
080d879f +0x4d:  lea    -0x18(%ebp),%eax
080d87a2 +0x50:  mov    %eax,(%esp)
080d87a5 +0x53:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d87aa +0x58:  movl   $0x1,0x4(%esp)
080d87b2 +0x60:  lea    -0x18(%ebp),%eax
080d87b5 +0x63:  mov    %eax,(%esp)
080d87b8 +0x66:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d87bd +0x6b:  lea    -0x18(%ebp),%eax
080d87c0 +0x6e:  mov    %eax,0x4(%esp)
080d87c4 +0x72:  mov    0x8(%ebp),%eax
080d87c7 +0x75:  mov    %eax,(%esp)
080d87ca +0x78:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
080d87cf +0x7d:  jmp    080d87ec <+0x9a>
080d87d1 +0x7f:  mov    %edx,%ebx
080d87d3 +0x81:  mov    %eax,%esi
080d87d5 +0x83:  lea    -0x18(%ebp),%eax
080d87d8 +0x86:  mov    %eax,(%esp)
080d87db +0x89:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d87e0 +0x8e:  mov    %esi,%eax
080d87e2 +0x90:  mov    %ebx,%edx
080d87e4 +0x92:  mov    %eax,(%esp)
080d87e7 +0x95:  call   08ae3750 <_Unwind_Resume>
080d87ec +0x9a:  lea    -0x18(%ebp),%eax
080d87ef +0x9d:  mov    %eax,(%esp)
080d87f2 +0xa0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d87f7 +0xa5:  jmp    080d87fa <+0xa8>
080d87f9 +0xa7:  nop
080d87fa +0xa8:  add    $0x20,%esp
080d87fd +0xab:  pop    %ebx
080d87fe +0xac:  pop    %esi
080d87ff +0xad:  pop    %ebp
080d8800 +0xae:  ret
080d8801 +0xaf:  nop
```

## 反编译 C

```c
// BlueMarble::sendFinishBlueMarble @ 0x80d8752

/* BlueMarble::sendFinishBlueMarble() const */

void __thiscall BlueMarble::sendFinishBlueMarble(BlueMarble *this)

{
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = getWinner(this);
  if (local_10 != -1) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080d8793 to 080d87ce has its CatchHandler @ 080d87d1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1b1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    sendToBlueMarble(this,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
