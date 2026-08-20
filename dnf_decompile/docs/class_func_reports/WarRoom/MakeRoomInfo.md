# MakeRoomInfo

`_ZN7WarRoom12MakeRoomInfoEPc`

`WarRoom::MakeRoomInfo(char*)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bdd58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bdd58  _ZN7WarRoom12MakeRoomInfoEPc
#           WarRoom::MakeRoomInfo(char*)
# range [0x086bdd58, 0x086bde9f]
086bdd58 +0x000:  push   %ebp
086bdd59 +0x001:  mov    %esp,%ebp
086bdd5b +0x003:  sub    $0x28,%esp
086bdd5e +0x006:  mov    0xc(%ebp),%eax
086bdd61 +0x009:  mov    %eax,-0x10(%ebp)
086bdd64 +0x00c:  mov    0x8(%ebp),%eax
086bdd67 +0x00f:  mov    0x4(%eax),%edx
086bdd6a +0x012:  mov    -0x10(%ebp),%eax
086bdd6d +0x015:  mov    %edx,0x4(%esp)
086bdd71 +0x019:  mov    %eax,(%esp)
086bdd74 +0x01c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bdd79 +0x021:  mov    0x8(%ebp),%eax
086bdd7c +0x024:  movzbl 0x8(%eax),%eax
086bdd80 +0x028:  movzbl %al,%edx
086bdd83 +0x02b:  mov    -0x10(%ebp),%eax
086bdd86 +0x02e:  mov    %edx,0x4(%esp)
086bdd8a +0x032:  mov    %eax,(%esp)
086bdd8d +0x035:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdd92 +0x03a:  mov    0x8(%ebp),%eax
086bdd95 +0x03d:  movzbl (%eax),%eax
086bdd98 +0x040:  movzbl %al,%edx
086bdd9b +0x043:  mov    -0x10(%ebp),%eax
086bdd9e +0x046:  mov    %edx,0x4(%esp)
086bdda2 +0x04a:  mov    %eax,(%esp)
086bdda5 +0x04d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bddaa +0x052:  mov    0x8(%ebp),%eax
086bddad +0x055:  movzbl 0x1(%eax),%eax
086bddb1 +0x059:  movzbl %al,%edx
086bddb4 +0x05c:  mov    -0x10(%ebp),%eax
086bddb7 +0x05f:  mov    %edx,0x4(%esp)
086bddbb +0x063:  mov    %eax,(%esp)
086bddbe +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bddc3 +0x06b:  mov    0x8(%ebp),%eax
086bddc6 +0x06e:  mov    0x144(%eax),%eax
086bddcc +0x074:  mov    %eax,%edx
086bddce +0x076:  mov    -0x10(%ebp),%eax
086bddd1 +0x079:  mov    %edx,0x4(%esp)
086bddd5 +0x07d:  mov    %eax,(%esp)
086bddd8 +0x080:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdddd +0x085:  mov    0x8(%ebp),%eax
086bdde0 +0x088:  mov    0x1d0(%eax),%eax
086bdde6 +0x08e:  test   %eax,%eax
086bdde8 +0x090:  je     086bde0a <+0xb2>
086bddea +0x092:  mov    0x8(%ebp),%eax
086bdded +0x095:  mov    0x1d0(%eax),%eax
086bddf3 +0x09b:  mov    0x704(%eax),%edx
086bddf9 +0x0a1:  mov    -0x10(%ebp),%eax
086bddfc +0x0a4:  mov    %edx,0x4(%esp)
086bde00 +0x0a8:  mov    %eax,(%esp)
086bde03 +0x0ab:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bde08 +0x0b0:  jmp    086bde1d <+0xc5>
086bde0a +0x0b2:  mov    -0x10(%ebp),%eax
086bde0d +0x0b5:  movl   $0x0,0x4(%esp)
086bde15 +0x0bd:  mov    %eax,(%esp)
086bde18 +0x0c0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bde1d +0x0c5:  movl   $0x0,-0xc(%ebp)
086bde24 +0x0cc:  jmp    086bde93 <+0x13b>
086bde26 +0x0ce:  mov    -0xc(%ebp),%edx
086bde29 +0x0d1:  mov    0x8(%ebp),%eax
086bde2c +0x0d4:  add    $0x50,%edx
086bde2f +0x0d7:  mov    0x8(%eax,%edx,4),%edx
086bde33 +0x0db:  mov    -0x10(%ebp),%eax
086bde36 +0x0de:  mov    %edx,0x4(%esp)
086bde3a +0x0e2:  mov    %eax,(%esp)
086bde3d +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bde42 +0x0ea:  mov    -0xc(%ebp),%edx
086bde45 +0x0ed:  mov    0x8(%ebp),%eax
086bde48 +0x0f0:  add    $0x48,%edx
086bde4b +0x0f3:  mov    0xc(%eax,%edx,4),%eax
086bde4f +0x0f7:  test   %eax,%eax
086bde51 +0x0f9:  je     086bde7c <+0x124>
086bde53 +0x0fb:  mov    -0xc(%ebp),%edx
086bde56 +0x0fe:  mov    0x8(%ebp),%eax
086bde59 +0x101:  add    $0x48,%edx
086bde5c +0x104:  mov    0xc(%eax,%edx,4),%eax
086bde60 +0x108:  mov    %eax,(%esp)
086bde63 +0x10b:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bde68 +0x110:  movzwl %ax,%edx
086bde6b +0x113:  mov    -0x10(%ebp),%eax
086bde6e +0x116:  mov    %edx,0x4(%esp)
086bde72 +0x11a:  mov    %eax,(%esp)
086bde75 +0x11d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bde7a +0x122:  jmp    086bde8f <+0x137>
086bde7c +0x124:  mov    -0x10(%ebp),%eax
086bde7f +0x127:  movl   $0xffff,0x4(%esp)
086bde87 +0x12f:  mov    %eax,(%esp)
086bde8a +0x132:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086bde8f +0x137:  addl   $0x1,-0xc(%ebp)
086bde93 +0x13b:  cmpl   $0x5,-0xc(%ebp)
086bde97 +0x13f:  setle  %al
086bde9a +0x142:  test   %al,%al
086bde9c +0x144:  jne    086bde26 <+0xce>
086bde9e +0x146:  leave
086bde9f +0x147:  ret
```

## 反编译 C

```c
// WarRoom::MakeRoomInfo @ 0x86bdd58

/* WarRoom::MakeRoomInfo(char*) */

void __thiscall WarRoom::MakeRoomInfo(WarRoom *this,char *param_1)

{
  uint uVar1;
  int local_10;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[8]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)*this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[1]);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x144));
  if (*(int *)(this + 0x1d0) == 0) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
  }
  else {
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 0x1d0) + 0x704));
  }
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,*(int *)(this + (local_10 + 0x50) * 4 + 8));
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) == 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0xffff);
    }
    else {
      uVar1 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar1 & 0xffff);
    }
  }
  return;
}
```
