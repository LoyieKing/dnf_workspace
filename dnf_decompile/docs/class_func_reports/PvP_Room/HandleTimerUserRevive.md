# HandleTimerUserRevive

`_ZN8PvP_Room21HandleTimerUserReviveEi`

`PvP_Room::HandleTimerUserRevive(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dd824` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dd824  _ZN8PvP_Room21HandleTimerUserReviveEi
#           PvP_Room::HandleTimerUserRevive(int)
# range [0x085dd824, 0x085dd935]
085dd824 +0x000:  push   %ebp
085dd825 +0x001:  mov    %esp,%ebp
085dd827 +0x003:  push   %esi
085dd828 +0x004:  push   %ebx
085dd829 +0x005:  sub    $0x20,%esp
085dd82c +0x008:  cmpl   $0x0,0xc(%ebp)
085dd830 +0x00c:  js     085dd924 <+0x100>
085dd836 +0x012:  cmpl   $0x7,0xc(%ebp)
085dd83a +0x016:  jg     085dd927 <+0x103>
085dd840 +0x01c:  mov    0xc(%ebp),%edx
085dd843 +0x01f:  mov    0x8(%ebp),%eax
085dd846 +0x022:  add    $0xc,%edx
085dd849 +0x025:  mov    (%eax,%edx,4),%eax
085dd84c +0x028:  test   %eax,%eax
085dd84e +0x02a:  je     085dd92a <+0x106>
085dd854 +0x030:  mov    0xc(%ebp),%eax
085dd857 +0x033:  mov    0x8(%ebp),%edx
085dd85a +0x036:  movzbl 0x5c8(%edx,%eax,1),%eax
085dd862 +0x03e:  test   %al,%al
085dd864 +0x040:  jne    085dd92d <+0x109>
085dd86a +0x046:  mov    0xc(%ebp),%eax
085dd86d +0x049:  mov    0x8(%ebp),%edx
085dd870 +0x04c:  movb   $0x1,0x5c8(%edx,%eax,1)
085dd878 +0x054:  lea    -0x14(%ebp),%eax
085dd87b +0x057:  mov    %eax,(%esp)
085dd87e +0x05a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085dd883 +0x05f:  movl   $0x78,0x8(%esp)
085dd88b +0x067:  movl   $0x0,0x4(%esp)
085dd893 +0x06f:  lea    -0x14(%ebp),%eax
085dd896 +0x072:  mov    %eax,(%esp)
085dd899 +0x075:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dd89e +0x07a:  mov    0xc(%ebp),%eax
085dd8a1 +0x07d:  mov    %eax,0x4(%esp)
085dd8a5 +0x081:  lea    -0x14(%ebp),%eax
085dd8a8 +0x084:  mov    %eax,(%esp)
085dd8ab +0x087:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dd8b0 +0x08c:  call   0807dca0 <_init+0x598>
085dd8b5 +0x091:  mov    %eax,%edx
085dd8b7 +0x093:  sar    $0x1f,%edx
085dd8ba +0x096:  shr    $0x18,%edx
085dd8bd +0x099:  add    %edx,%eax
085dd8bf +0x09b:  and    $0xff,%eax
085dd8c4 +0x0a0:  sub    %edx,%eax
085dd8c6 +0x0a2:  mov    %eax,0x4(%esp)
085dd8ca +0x0a6:  lea    -0x14(%ebp),%eax
085dd8cd +0x0a9:  mov    %eax,(%esp)
085dd8d0 +0x0ac:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dd8d5 +0x0b1:  movl   $0x1,0x4(%esp)
085dd8dd +0x0b9:  lea    -0x14(%ebp),%eax
085dd8e0 +0x0bc:  mov    %eax,(%esp)
085dd8e3 +0x0bf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dd8e8 +0x0c4:  lea    -0x14(%ebp),%eax
085dd8eb +0x0c7:  mov    %eax,0x4(%esp)
085dd8ef +0x0cb:  mov    0x8(%ebp),%eax
085dd8f2 +0x0ce:  mov    %eax,(%esp)
085dd8f5 +0x0d1:  call   085dbe18 <_ZN8PvP_Room11send_to_pvpER11PacketGuard>  ; PvP_Room::send_to_pvp(PacketGuard&)
085dd8fa +0x0d6:  jmp    085dd917 <+0xf3>
085dd8fc +0x0d8:  mov    %edx,%ebx
085dd8fe +0x0da:  mov    %eax,%esi
085dd900 +0x0dc:  lea    -0x14(%ebp),%eax
085dd903 +0x0df:  mov    %eax,(%esp)
085dd906 +0x0e2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd90b +0x0e7:  mov    %esi,%eax
085dd90d +0x0e9:  mov    %ebx,%edx
085dd90f +0x0eb:  mov    %eax,(%esp)
085dd912 +0x0ee:  call   08ae3750 <_Unwind_Resume>
085dd917 +0x0f3:  lea    -0x14(%ebp),%eax
085dd91a +0x0f6:  mov    %eax,(%esp)
085dd91d +0x0f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085dd922 +0x0fe:  jmp    085dd92e <+0x10a>
085dd924 +0x100:  nop
085dd925 +0x101:  jmp    085dd92e <+0x10a>
085dd927 +0x103:  nop
085dd928 +0x104:  jmp    085dd92e <+0x10a>
085dd92a +0x106:  nop
085dd92b +0x107:  jmp    085dd92e <+0x10a>
085dd92d +0x109:  nop
085dd92e +0x10a:  add    $0x20,%esp
085dd931 +0x10d:  pop    %ebx
085dd932 +0x10e:  pop    %esi
085dd933 +0x10f:  pop    %ebp
085dd934 +0x110:  ret
085dd935 +0x111:  nop
```

## 反编译 C

```c
// PvP_Room::HandleTimerUserRevive @ 0x85dd824

/* PvP_Room::HandleTimerUserRevive(int) */

void __thiscall PvP_Room::HandleTimerUserRevive(PvP_Room *this,int param_1)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  if ((((-1 < param_1) && (param_1 < 8)) && (*(int *)(this + (param_1 + 0xc) * 4) != 0)) &&
     (this[param_1 + 0x5c8] == (PvP_Room)0x0)) {
    this[param_1 + 0x5c8] = (PvP_Room)0x1;
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085dd899 to 085dd8f9 has its CatchHandler @ 085dd8fc */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x78);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
    iVar1 = rand();
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar1 % 0x100);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    send_to_pvp(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
