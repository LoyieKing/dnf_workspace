# TOD_UserState

`_GLOBAL__I__ZN13TOD_UserStateC2Ev`

`global constructors keyed to TOD_UserState::TOD_UserState()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to TOD_UserState` | `0x086439ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086439ac  _GLOBAL__I__ZN13TOD_UserStateC2Ev
#           global constructors keyed to TOD_UserState::TOD_UserState()
# range [0x086439ac, 0x08643aaf]
086439ac +0x000:  push   %ebp
086439ad +0x001:  mov    %esp,%ebp
086439af +0x003:  sub    $0x18,%esp
086439b2 +0x006:  movl   $0xffff,0x4(%esp)
086439ba +0x00e:  movl   $0x1,(%esp)
086439c1 +0x015:  call   0864396c <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
086439c6 +0x01a:  leave
086439c7 +0x01b:  ret
086439c8 +0x01c:  push   %ebp
086439c9 +0x01d:  mov    %esp,%ebp
086439cb +0x01f:  push   %ebx
086439cc +0x020:  sub    $0x14,%esp
086439cf +0x023:  mov    0x8(%ebp),%ebx
086439d2 +0x026:  mov    0xc(%ebp),%eax
086439d5 +0x029:  movzwl (%eax),%edx
086439d8 +0x02c:  mov    0x10(%ebp),%eax
086439db +0x02f:  lea    (%edx,%eax,1),%eax
086439de +0x032:  movzwl %ax,%edx
086439e1 +0x035:  mov    %ebx,%eax
086439e3 +0x037:  mov    %edx,0x4(%esp)
086439e7 +0x03b:  mov    %eax,(%esp)
086439ea +0x03e:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
086439ef +0x043:  mov    %ebx,%eax
086439f1 +0x045:  mov    %eax,(%esp)
086439f4 +0x048:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
086439f9 +0x04d:  cmp    $0x64,%ax
086439fd +0x051:  seta   %al
08643a00 +0x054:  test   %al,%al
08643a02 +0x056:  je     08643a10 <+0x64>
08643a04 +0x058:  mov    %ebx,%eax
08643a06 +0x05a:  mov    %eax,(%esp)
08643a09 +0x05d:  call   085fe852 <_ZN9TOD_Layer10resetLayerEv>  ; TOD_Layer::resetLayer()
08643a0e +0x062:  jmp    08643a11 <+0x65>
08643a10 +0x064:  nop
08643a11 +0x065:  mov    %ebx,%eax
08643a13 +0x067:  mov    %ebx,%eax
08643a15 +0x069:  add    $0x14,%esp
08643a18 +0x06c:  pop    %ebx
08643a19 +0x06d:  pop    %ebp
08643a1a +0x06e:  ret    $0x4
08643a1d +0x071:  nop
08643a1e +0x072:  push   %ebp
08643a1f +0x073:  mov    %esp,%ebp
08643a21 +0x075:  mov    0x8(%ebp),%eax
08643a24 +0x078:  movzwl 0x34e(%eax),%eax
08643a2b +0x07f:  pop    %ebp
08643a2c +0x080:  ret
08643a2d +0x081:  nop
08643a2e +0x082:  push   %ebp
08643a2f +0x083:  mov    %esp,%ebp
08643a31 +0x085:  sub    $0x18,%esp
08643a34 +0x088:  mov    0x8(%ebp),%eax
08643a37 +0x08b:  mov    (%eax),%eax
08643a39 +0x08d:  mov    %eax,(%esp)
08643a3c +0x090:  call   08643a44 <+0x98>
08643a41 +0x095:  leave
08643a42 +0x096:  ret
08643a43 +0x097:  nop
08643a44 +0x098:  push   %ebp
08643a45 +0x099:  mov    %esp,%ebp
08643a47 +0x09b:  sub    $0x28,%esp
08643a4a +0x09e:  jmp    08643a68 <+0xbc>
08643a4c +0x0a0:  mov    0x8(%ebp),%eax
08643a4f +0x0a3:  mov    %eax,(%esp)
08643a52 +0x0a6:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
08643a57 +0x0ab:  add    %eax,%eax
08643a59 +0x0ad:  mov    %eax,0x4(%esp)
08643a5d +0x0b1:  mov    0x8(%ebp),%eax
08643a60 +0x0b4:  mov    %eax,(%esp)
08643a63 +0x0b7:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
08643a68 +0x0bc:  movl   $0x18,0x4(%esp)
08643a70 +0x0c4:  mov    0x8(%ebp),%eax
08643a73 +0x0c7:  mov    %eax,(%esp)
08643a76 +0x0ca:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08643a7b +0x0cf:  xor    $0x1,%eax
08643a7e +0x0d2:  test   %al,%al
08643a80 +0x0d4:  jne    08643a4c <+0xa0>
08643a82 +0x0d6:  mov    0x8(%ebp),%eax
08643a85 +0x0d9:  mov    0x8(%eax),%eax
08643a88 +0x0dc:  mov    %eax,%edx
08643a8a +0x0de:  mov    0x8(%ebp),%eax
08643a8d +0x0e1:  mov    0xc(%eax),%eax
08643a90 +0x0e4:  lea    (%edx,%eax,1),%eax
08643a93 +0x0e7:  mov    %eax,-0xc(%ebp)
08643a96 +0x0ea:  movl   $0x18,0x4(%esp)
08643a9e +0x0f2:  mov    0x8(%ebp),%eax
08643aa1 +0x0f5:  mov    %eax,(%esp)
08643aa4 +0x0f8:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
08643aa9 +0x0fd:  mov    -0xc(%ebp),%eax
08643aac +0x100:  leave
08643aad +0x101:  ret
08643aae +0x102:  nop
08643aaf +0x103:  nop
```

## 反编译 C

```c
// <global>::global @ 0x86439ac

/* TOD_UserState::TOD_UserState() */

void TOD_UserState::_GLOBAL__I_TOD_UserState(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
