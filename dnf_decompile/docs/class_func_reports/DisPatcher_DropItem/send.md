# send

`_ZN19DisPatcher_DropItem4sendEP5CUserR9ParamBase`

`DisPatcher_DropItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DropItem` | `0x081c3254` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c3254  _ZN19DisPatcher_DropItem4sendEP5CUserR9ParamBase
#           DisPatcher_DropItem::send(CUser*, ParamBase&)
# range [0x081c3254, 0x081c335b]
081c3254 +0x000:  push   %ebp
081c3255 +0x001:  mov    %esp,%ebp
081c3257 +0x003:  push   %esi
081c3258 +0x004:  push   %ebx
081c3259 +0x005:  sub    $0x20,%esp
081c325c +0x008:  mov    0x10(%ebp),%eax
081c325f +0x00b:  mov    %eax,-0xc(%ebp)
081c3262 +0x00e:  mov    -0xc(%ebp),%eax
081c3265 +0x011:  mov    0x4(%eax),%eax
081c3268 +0x014:  test   %eax,%eax
081c326a +0x016:  je     081c3354 <+0x100>
081c3270 +0x01c:  mov    -0xc(%ebp),%eax
081c3273 +0x01f:  mov    0xc(%eax),%eax
081c3276 +0x022:  cmp    $0x1,%eax
081c3279 +0x025:  jne    081c32a0 <+0x4c>
081c327b +0x027:  mov    -0xc(%ebp),%eax
081c327e +0x02a:  mov    0x4(%eax),%eax
081c3281 +0x02d:  movzbl %al,%eax
081c3284 +0x030:  mov    %eax,0x8(%esp)
081c3288 +0x034:  movl   $0x32,0x4(%esp)
081c3290 +0x03c:  mov    0xc(%ebp),%eax
081c3293 +0x03f:  mov    %eax,(%esp)
081c3296 +0x042:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081c329b +0x047:  jmp    081c3354 <+0x100>
081c32a0 +0x04c:  lea    -0x18(%ebp),%eax
081c32a3 +0x04f:  mov    %eax,(%esp)
081c32a6 +0x052:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c32ab +0x057:  movl   $0x32,0x8(%esp)
081c32b3 +0x05f:  movl   $0x1,0x4(%esp)
081c32bb +0x067:  lea    -0x18(%ebp),%eax
081c32be +0x06a:  mov    %eax,(%esp)
081c32c1 +0x06d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c32c6 +0x072:  movl   $0x0,0x4(%esp)
081c32ce +0x07a:  lea    -0x18(%ebp),%eax
081c32d1 +0x07d:  mov    %eax,(%esp)
081c32d4 +0x080:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c32d9 +0x085:  mov    -0xc(%ebp),%eax
081c32dc +0x088:  mov    0x4(%eax),%eax
081c32df +0x08b:  mov    %eax,0x4(%esp)
081c32e3 +0x08f:  lea    -0x18(%ebp),%eax
081c32e6 +0x092:  mov    %eax,(%esp)
081c32e9 +0x095:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c32ee +0x09a:  mov    -0xc(%ebp),%eax
081c32f1 +0x09d:  movzbl 0x8(%eax),%eax
081c32f5 +0x0a1:  movsbl %al,%eax
081c32f8 +0x0a4:  mov    %eax,0x4(%esp)
081c32fc +0x0a8:  lea    -0x18(%ebp),%eax
081c32ff +0x0ab:  mov    %eax,(%esp)
081c3302 +0x0ae:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c3307 +0x0b3:  movl   $0x1,0x4(%esp)
081c330f +0x0bb:  lea    -0x18(%ebp),%eax
081c3312 +0x0be:  mov    %eax,(%esp)
081c3315 +0x0c1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c331a +0x0c6:  lea    -0x18(%ebp),%eax
081c331d +0x0c9:  mov    %eax,0x4(%esp)
081c3321 +0x0cd:  mov    0xc(%ebp),%eax
081c3324 +0x0d0:  mov    %eax,(%esp)
081c3327 +0x0d3:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c332c +0x0d8:  jmp    081c3349 <+0xf5>
081c332e +0x0da:  mov    %edx,%ebx
081c3330 +0x0dc:  mov    %eax,%esi
081c3332 +0x0de:  lea    -0x18(%ebp),%eax
081c3335 +0x0e1:  mov    %eax,(%esp)
081c3338 +0x0e4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c333d +0x0e9:  mov    %esi,%eax
081c333f +0x0eb:  mov    %ebx,%edx
081c3341 +0x0ed:  mov    %eax,(%esp)
081c3344 +0x0f0:  call   08ae3750 <_Unwind_Resume>
081c3349 +0x0f5:  lea    -0x18(%ebp),%eax
081c334c +0x0f8:  mov    %eax,(%esp)
081c334f +0x0fb:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c3354 +0x100:  add    $0x20,%esp
081c3357 +0x103:  pop    %ebx
081c3358 +0x104:  pop    %esi
081c3359 +0x105:  pop    %ebp
081c335a +0x106:  ret
081c335b +0x107:  nop
```

## 反编译 C

```c
// DisPatcher_DropItem::send @ 0x81c3254

/* DisPatcher_DropItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_DropItem::send(DisPatcher_DropItem *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0) {
    if (*(int *)(param_2 + 0xc) == 1) {
      CUser::SendCmdErrorPacket(param_1,0x32,*(uint *)(param_2 + 4) & 0xff);
    }
    else {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c32c1 to 081c332b has its CatchHandler @ 081c332e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x32);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}
```
