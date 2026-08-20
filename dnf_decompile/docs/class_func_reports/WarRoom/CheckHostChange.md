# CheckHostChange

`_ZN7WarRoom15CheckHostChangeEv`

`WarRoom::CheckHostChange()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c0964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c0964  _ZN7WarRoom15CheckHostChangeEv
#           WarRoom::CheckHostChange()
# range [0x086c0964, 0x086c0ac6]
086c0964 +0x000:  push   %ebp
086c0965 +0x001:  mov    %esp,%ebp
086c0967 +0x003:  push   %esi
086c0968 +0x004:  push   %ebx
086c0969 +0x005:  sub    $0x30,%esp
086c096c +0x008:  mov    0x8(%ebp),%eax
086c096f +0x00b:  mov    0x2c(%eax),%eax
086c0972 +0x00e:  cmp    $0x1,%eax
086c0975 +0x011:  jle    086c0a8d <+0x129>
086c097b +0x017:  lea    -0x24(%ebp),%eax
086c097e +0x01a:  mov    %eax,(%esp)
086c0981 +0x01d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c0986 +0x022:  movl   $0x160,0x8(%esp)
086c098e +0x02a:  movl   $0x0,0x4(%esp)
086c0996 +0x032:  lea    -0x24(%ebp),%eax
086c0999 +0x035:  mov    %eax,(%esp)
086c099c +0x038:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c09a1 +0x03d:  movl   $0xffffffff,-0x18(%ebp)
086c09a8 +0x044:  movl   $0xffffffff,-0x14(%ebp)
086c09af +0x04b:  movl   $0x0,-0x10(%ebp)
086c09b6 +0x052:  jmp    086c0a0d <+0xa9>
086c09b8 +0x054:  mov    -0x10(%ebp),%edx
086c09bb +0x057:  mov    0x8(%ebp),%eax
086c09be +0x05a:  add    $0x48,%edx
086c09c1 +0x05d:  mov    0xc(%eax,%edx,4),%eax
086c09c5 +0x061:  test   %eax,%eax
086c09c7 +0x063:  je     086c0a05 <+0xa1>
086c09c9 +0x065:  mov    -0x10(%ebp),%edx
086c09cc +0x068:  mov    0x8(%ebp),%eax
086c09cf +0x06b:  add    $0x4,%edx
086c09d2 +0x06e:  mov    0x4(%eax,%edx,4),%eax
086c09d6 +0x072:  cmp    $0xffffffff,%eax
086c09d9 +0x075:  je     086c0a08 <+0xa4>
086c09db +0x077:  mov    -0x10(%ebp),%edx
086c09de +0x07a:  mov    0x8(%ebp),%eax
086c09e1 +0x07d:  add    $0x4,%edx
086c09e4 +0x080:  mov    0x4(%eax,%edx,4),%eax
086c09e8 +0x084:  cmp    -0x18(%ebp),%eax
086c09eb +0x087:  ja     086c0a09 <+0xa5>
086c09ed +0x089:  mov    -0x10(%ebp),%edx
086c09f0 +0x08c:  mov    0x8(%ebp),%eax
086c09f3 +0x08f:  add    $0x4,%edx
086c09f6 +0x092:  mov    0x4(%eax,%edx,4),%eax
086c09fa +0x096:  mov    %eax,-0x18(%ebp)
086c09fd +0x099:  mov    -0x10(%ebp),%eax
086c0a00 +0x09c:  mov    %eax,-0x14(%ebp)
086c0a03 +0x09f:  jmp    086c0a09 <+0xa5>
086c0a05 +0x0a1:  nop
086c0a06 +0x0a2:  jmp    086c0a09 <+0xa5>
086c0a08 +0x0a4:  nop
086c0a09 +0x0a5:  addl   $0x1,-0x10(%ebp)
086c0a0d +0x0a9:  cmpl   $0x5,-0x10(%ebp)
086c0a11 +0x0ad:  setle  %al
086c0a14 +0x0b0:  test   %al,%al
086c0a16 +0x0b2:  jne    086c09b8 <+0x54>
086c0a18 +0x0b4:  cmpl   $0xffffffff,-0x14(%ebp)
086c0a1c +0x0b8:  jne    086c0a25 <+0xc1>
086c0a1e +0x0ba:  mov    $0x0,%ebx
086c0a23 +0x0bf:  jmp    086c0a7e <+0x11a>
086c0a25 +0x0c1:  mov    -0x14(%ebp),%eax
086c0a28 +0x0c4:  mov    %eax,0x4(%esp)
086c0a2c +0x0c8:  lea    -0x24(%ebp),%eax
086c0a2f +0x0cb:  mov    %eax,(%esp)
086c0a32 +0x0ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c0a37 +0x0d3:  movl   $0x1,0x4(%esp)
086c0a3f +0x0db:  lea    -0x24(%ebp),%eax
086c0a42 +0x0de:  mov    %eax,(%esp)
086c0a45 +0x0e1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c0a4a +0x0e6:  lea    -0x24(%ebp),%eax
086c0a4d +0x0e9:  mov    %eax,0x4(%esp)
086c0a51 +0x0ed:  mov    0x8(%ebp),%eax
086c0a54 +0x0f0:  mov    %eax,(%esp)
086c0a57 +0x0f3:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086c0a5c +0x0f8:  mov    $0x1,%ebx
086c0a61 +0x0fd:  jmp    086c0a7e <+0x11a>
086c0a63 +0x0ff:  mov    %edx,%ebx
086c0a65 +0x101:  mov    %eax,%esi
086c0a67 +0x103:  lea    -0x24(%ebp),%eax
086c0a6a +0x106:  mov    %eax,(%esp)
086c0a6d +0x109:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c0a72 +0x10e:  mov    %esi,%eax
086c0a74 +0x110:  mov    %ebx,%edx
086c0a76 +0x112:  mov    %eax,(%esp)
086c0a79 +0x115:  call   08ae3750 <_Unwind_Resume>
086c0a7e +0x11a:  lea    -0x24(%ebp),%eax
086c0a81 +0x11d:  mov    %eax,(%esp)
086c0a84 +0x120:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c0a89 +0x125:  test   %ebx,%ebx
086c0a8b +0x127:  je     086c0ac0 <+0x15c>
086c0a8d +0x129:  movl   $0x0,-0xc(%ebp)
086c0a94 +0x130:  jmp    086c0aab <+0x147>
086c0a96 +0x132:  mov    -0xc(%ebp),%edx
086c0a99 +0x135:  mov    0x8(%ebp),%eax
086c0a9c +0x138:  add    $0x4,%edx
086c0a9f +0x13b:  movl   $0xffffffff,0x4(%eax,%edx,4)
086c0aa7 +0x143:  addl   $0x1,-0xc(%ebp)
086c0aab +0x147:  cmpl   $0x5,-0xc(%ebp)
086c0aaf +0x14b:  setle  %al
086c0ab2 +0x14e:  test   %al,%al
086c0ab4 +0x150:  jne    086c0a96 <+0x132>
086c0ab6 +0x152:  mov    0x8(%ebp),%eax
086c0ab9 +0x155:  movl   $0x0,0x2c(%eax)
086c0ac0 +0x15c:  add    $0x30,%esp
086c0ac3 +0x15f:  pop    %ebx
086c0ac4 +0x160:  pop    %esi
086c0ac5 +0x161:  pop    %ebp
086c0ac6 +0x162:  ret
```

## 反编译 C

```c
// WarRoom::CheckHostChange @ 0x86c0964

/* WarRoom::CheckHostChange() */

void __thiscall WarRoom::CheckHostChange(WarRoom *this)

{
  bool bVar1;
  PacketGuard local_28 [12];
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (1 < *(int *)(this + 0x2c)) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086c099c to 086c0a5b has its CatchHandler @ 086c0a63 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x160);
    local_1c = 0xffffffff;
    local_18 = -1;
    for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
      if (((*(int *)(this + (local_14 + 0x48) * 4 + 0xc) != 0) &&
          (*(int *)(this + (local_14 + 4) * 4 + 4) != -1)) &&
         (*(uint *)(this + (local_14 + 4) * 4 + 4) <= local_1c)) {
        local_1c = *(uint *)(this + (local_14 + 4) * 4 + 4);
        local_18 = local_14;
      }
    }
    bVar1 = local_18 != -1;
    if (bVar1) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_18);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      SendToRoom(this,local_28);
    }
    PacketGuard::~PacketGuard(local_28);
    if (!bVar1) {
      return;
    }
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 4) * 4 + 4) = 0xffffffff;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}
```
