# sendStartBlueMarble

`_ZNK10BlueMarble19sendStartBlueMarbleEv`

`BlueMarble::sendStartBlueMarble() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d86b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d86b2  _ZNK10BlueMarble19sendStartBlueMarbleEv
#           BlueMarble::sendStartBlueMarble() const
# range [0x080d86b2, 0x080d8751]
080d86b2 +0x00:  push   %ebp
080d86b3 +0x01:  mov    %esp,%ebp
080d86b5 +0x03:  push   %esi
080d86b6 +0x04:  push   %ebx
080d86b7 +0x05:  sub    $0x20,%esp
080d86ba +0x08:  lea    -0x14(%ebp),%eax
080d86bd +0x0b:  mov    %eax,(%esp)
080d86c0 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d86c5 +0x13:  movl   $0x1b0,0x8(%esp)
080d86cd +0x1b:  movl   $0x0,0x4(%esp)
080d86d5 +0x23:  lea    -0x14(%ebp),%eax
080d86d8 +0x26:  mov    %eax,(%esp)
080d86db +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d86e0 +0x2e:  mov    0x8(%ebp),%eax
080d86e3 +0x31:  mov    %eax,(%esp)
080d86e6 +0x34:  call   080d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>  ; BlueMarble::getBlueMarbleMap() const
080d86eb +0x39:  movsbl %al,%eax
080d86ee +0x3c:  mov    %eax,0x4(%esp)
080d86f2 +0x40:  lea    -0x14(%ebp),%eax
080d86f5 +0x43:  mov    %eax,(%esp)
080d86f8 +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d86fd +0x4b:  movl   $0x1,0x4(%esp)
080d8705 +0x53:  lea    -0x14(%ebp),%eax
080d8708 +0x56:  mov    %eax,(%esp)
080d870b +0x59:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d8710 +0x5e:  lea    -0x14(%ebp),%eax
080d8713 +0x61:  mov    %eax,0x4(%esp)
080d8717 +0x65:  mov    0x8(%ebp),%eax
080d871a +0x68:  mov    %eax,(%esp)
080d871d +0x6b:  call   080d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>  ; BlueMarble::sendToBlueMarble(PacketGuard&) const
080d8722 +0x70:  jmp    080d873f <+0x8d>
080d8724 +0x72:  mov    %edx,%ebx
080d8726 +0x74:  mov    %eax,%esi
080d8728 +0x76:  lea    -0x14(%ebp),%eax
080d872b +0x79:  mov    %eax,(%esp)
080d872e +0x7c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d8733 +0x81:  mov    %esi,%eax
080d8735 +0x83:  mov    %ebx,%edx
080d8737 +0x85:  mov    %eax,(%esp)
080d873a +0x88:  call   08ae3750 <_Unwind_Resume>
080d873f +0x8d:  lea    -0x14(%ebp),%eax
080d8742 +0x90:  mov    %eax,(%esp)
080d8745 +0x93:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d874a +0x98:  add    $0x20,%esp
080d874d +0x9b:  pop    %ebx
080d874e +0x9c:  pop    %esi
080d874f +0x9d:  pop    %ebp
080d8750 +0x9e:  ret
080d8751 +0x9f:  nop
```

## 反编译 C

```c
// BlueMarble::sendStartBlueMarble @ 0x80d86b2

/* BlueMarble::sendStartBlueMarble() const */

void __thiscall BlueMarble::sendStartBlueMarble(BlueMarble *this)

{
  char cVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d86db to 080d8721 has its CatchHandler @ 080d8724 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b0);
  cVar1 = getBlueMarbleMap(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  sendToBlueMarble(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
