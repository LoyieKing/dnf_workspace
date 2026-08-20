# sendBlueMarbleDiceInfo

`_ZNK10BlueMarble22sendBlueMarbleDiceInfoEi`

`BlueMarble::sendBlueMarbleDiceInfo(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8600` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8600  _ZNK10BlueMarble22sendBlueMarbleDiceInfoEi
#           BlueMarble::sendBlueMarbleDiceInfo(int) const
# range [0x080d8600, 0x080d86b1]
080d8600 +0x00:  push   %ebp
080d8601 +0x01:  mov    %esp,%ebp
080d8603 +0x03:  push   %esi
080d8604 +0x04:  push   %ebx
080d8605 +0x05:  sub    $0x20,%esp
080d8608 +0x08:  lea    -0x14(%ebp),%eax
080d860b +0x0b:  mov    %eax,(%esp)
080d860e +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d8613 +0x13:  movl   $0x1af,0x8(%esp)
080d861b +0x1b:  movl   $0x0,0x4(%esp)
080d8623 +0x23:  lea    -0x14(%ebp),%eax
080d8626 +0x26:  mov    %eax,(%esp)
080d8629 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d862e +0x2e:  mov    0xc(%ebp),%eax
080d8631 +0x31:  mov    %eax,0x4(%esp)
080d8635 +0x35:  lea    -0x14(%ebp),%eax
080d8638 +0x38:  mov    %eax,(%esp)
080d863b +0x3b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d8640 +0x40:  mov    0x8(%ebp),%eax
080d8643 +0x43:  mov    %eax,(%esp)
080d8646 +0x46:  call   080d6fc4 <_ZNK10BlueMarble13getDiceNumberEv>  ; BlueMarble::getDiceNumber() const
080d864b +0x4b:  movsbl %al,%eax
080d864e +0x4e:  mov    %eax,0x4(%esp)
080d8652 +0x52:  lea    -0x14(%ebp),%eax
080d8655 +0x55:  mov    %eax,(%esp)
080d8658 +0x58:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d865d +0x5d:  movl   $0x1,0x4(%esp)
080d8665 +0x65:  lea    -0x14(%ebp),%eax
080d8668 +0x68:  mov    %eax,(%esp)
080d866b +0x6b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d8670 +0x70:  lea    -0x14(%ebp),%eax
080d8673 +0x73:  mov    %eax,0x4(%esp)
080d8677 +0x77:  mov    0x8(%ebp),%eax
080d867a +0x7a:  mov    %eax,(%esp)
080d867d +0x7d:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
080d8682 +0x82:  jmp    080d869f <+0x9f>
080d8684 +0x84:  mov    %edx,%ebx
080d8686 +0x86:  mov    %eax,%esi
080d8688 +0x88:  lea    -0x14(%ebp),%eax
080d868b +0x8b:  mov    %eax,(%esp)
080d868e +0x8e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d8693 +0x93:  mov    %esi,%eax
080d8695 +0x95:  mov    %ebx,%edx
080d8697 +0x97:  mov    %eax,(%esp)
080d869a +0x9a:  call   08ae3750 <_Unwind_Resume>
080d869f +0x9f:  lea    -0x14(%ebp),%eax
080d86a2 +0xa2:  mov    %eax,(%esp)
080d86a5 +0xa5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d86aa +0xaa:  add    $0x20,%esp
080d86ad +0xad:  pop    %ebx
080d86ae +0xae:  pop    %esi
080d86af +0xaf:  pop    %ebp
080d86b0 +0xb0:  ret
080d86b1 +0xb1:  nop
```

## 反编译 C

```c
// BlueMarble::sendBlueMarbleDiceInfo @ 0x80d8600

/* BlueMarble::sendBlueMarbleDiceInfo(int) const */

void __thiscall BlueMarble::sendBlueMarbleDiceInfo(BlueMarble *this,int param_1)

{
  char cVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d8629 to 080d8681 has its CatchHandler @ 080d8684 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1af);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  cVar1 = getDiceNumber(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  sendToBlueMarble(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
