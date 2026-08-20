# SendChattingEmoticon

`_ZN5CUser20SendChattingEmoticonEv`

`CUser::SendChattingEmoticon()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689b90  _ZN5CUser20SendChattingEmoticonEv
#           CUser::SendChattingEmoticon()
# range [0x08689b90, 0x08689d05]
08689b90 +0x000:  push   %ebp
08689b91 +0x001:  mov    %esp,%ebp
08689b93 +0x003:  push   %esi
08689b94 +0x004:  push   %ebx
08689b95 +0x005:  sub    $0x240,%esp
08689b9b +0x00b:  lea    -0x1c(%ebp),%eax
08689b9e +0x00e:  mov    %eax,(%esp)
08689ba1 +0x011:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08689ba6 +0x016:  movl   $0x19b,0x8(%esp)
08689bae +0x01e:  movl   $0x0,0x4(%esp)
08689bb6 +0x026:  lea    -0x1c(%ebp),%eax
08689bb9 +0x029:  mov    %eax,(%esp)
08689bbc +0x02c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08689bc1 +0x031:  movl   $0x18,0x4(%esp)
08689bc9 +0x039:  lea    -0x1c(%ebp),%eax
08689bcc +0x03c:  mov    %eax,(%esp)
08689bcf +0x03f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08689bd4 +0x044:  mov    0x8(%ebp),%eax
08689bd7 +0x047:  mov    %eax,(%esp)
08689bda +0x04a:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
08689bdf +0x04f:  mov    %eax,-0x10(%ebp)
08689be2 +0x052:  lea    -0x22c(%ebp),%eax
08689be8 +0x058:  mov    -0x10(%ebp),%edx
08689beb +0x05b:  mov    %edx,0x4(%esp)
08689bef +0x05f:  mov    %eax,(%esp)
08689bf2 +0x062:  call   084b7136 <_ZNK11CGameOption15getEmoticonInfoEv>  ; CGameOption::getEmoticonInfo() const
08689bf7 +0x067:  sub    $0x4,%esp
08689bfa +0x06a:  movl   $0x0,-0xc(%ebp)
08689c01 +0x071:  jmp    08689ca0 <+0x110>
08689c06 +0x076:  mov    -0xc(%ebp),%eax
08689c09 +0x079:  mov    %eax,0x4(%esp)
08689c0d +0x07d:  lea    -0x1c(%ebp),%eax
08689c10 +0x080:  mov    %eax,(%esp)
08689c13 +0x083:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08689c18 +0x088:  mov    -0xc(%ebp),%eax
08689c1b +0x08b:  imul   $0x16,%eax,%eax
08689c1e +0x08e:  lea    -0x8(%ebp),%edx
08689c21 +0x091:  lea    (%edx,%eax,1),%eax
08689c24 +0x094:  sub    $0x214,%eax
08689c29 +0x099:  movzwl 0x4(%eax),%eax
08689c2d +0x09d:  cwtl
08689c2e +0x09e:  mov    %eax,0x4(%esp)
08689c32 +0x0a2:  lea    -0x1c(%ebp),%eax
08689c35 +0x0a5:  mov    %eax,(%esp)
08689c38 +0x0a8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08689c3d +0x0ad:  mov    -0xc(%ebp),%eax
08689c40 +0x0b0:  lea    -0x22c(%ebp),%edx
08689c46 +0x0b6:  imul   $0x16,%eax,%eax
08689c49 +0x0b9:  lea    (%edx,%eax,1),%eax
08689c4c +0x0bc:  mov    %eax,(%esp)
08689c4f +0x0bf:  call   0807e3b0 <_init+0xca8>
08689c54 +0x0c4:  mov    %eax,0x4(%esp)
08689c58 +0x0c8:  lea    -0x1c(%ebp),%eax
08689c5b +0x0cb:  mov    %eax,(%esp)
08689c5e +0x0ce:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08689c63 +0x0d3:  mov    -0xc(%ebp),%eax
08689c66 +0x0d6:  lea    -0x22c(%ebp),%edx
08689c6c +0x0dc:  imul   $0x16,%eax,%eax
08689c6f +0x0df:  lea    (%edx,%eax,1),%eax
08689c72 +0x0e2:  mov    %eax,(%esp)
08689c75 +0x0e5:  call   0807e3b0 <_init+0xca8>
08689c7a +0x0ea:  mov    -0xc(%ebp),%edx
08689c7d +0x0ed:  lea    -0x22c(%ebp),%ecx
08689c83 +0x0f3:  imul   $0x16,%edx,%edx
08689c86 +0x0f6:  lea    (%ecx,%edx,1),%edx
08689c89 +0x0f9:  mov    %eax,0x8(%esp)
08689c8d +0x0fd:  mov    %edx,0x4(%esp)
08689c91 +0x101:  lea    -0x1c(%ebp),%eax
08689c94 +0x104:  mov    %eax,(%esp)
08689c97 +0x107:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
08689c9c +0x10c:  addl   $0x1,-0xc(%ebp)
08689ca0 +0x110:  cmpl   $0x17,-0xc(%ebp)
08689ca4 +0x114:  setle  %al
08689ca7 +0x117:  test   %al,%al
08689ca9 +0x119:  jne    08689c06 <+0x76>
08689caf +0x11f:  movl   $0x1,0x4(%esp)
08689cb7 +0x127:  lea    -0x1c(%ebp),%eax
08689cba +0x12a:  mov    %eax,(%esp)
08689cbd +0x12d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08689cc2 +0x132:  lea    -0x1c(%ebp),%eax
08689cc5 +0x135:  mov    %eax,0x4(%esp)
08689cc9 +0x139:  mov    0x8(%ebp),%eax
08689ccc +0x13c:  mov    %eax,(%esp)
08689ccf +0x13f:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08689cd4 +0x144:  jmp    08689cf1 <+0x161>
08689cd6 +0x146:  mov    %edx,%ebx
08689cd8 +0x148:  mov    %eax,%esi
08689cda +0x14a:  lea    -0x1c(%ebp),%eax
08689cdd +0x14d:  mov    %eax,(%esp)
08689ce0 +0x150:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08689ce5 +0x155:  mov    %esi,%eax
08689ce7 +0x157:  mov    %ebx,%edx
08689ce9 +0x159:  mov    %eax,(%esp)
08689cec +0x15c:  call   08ae3750 <_Unwind_Resume>
08689cf1 +0x161:  lea    -0x1c(%ebp),%eax
08689cf4 +0x164:  mov    %eax,(%esp)
08689cf7 +0x167:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08689cfc +0x16c:  lea    -0x8(%ebp),%esp
08689cff +0x16f:  add    $0x0,%esp
08689d02 +0x172:  pop    %ebx
08689d03 +0x173:  pop    %esi
08689d04 +0x174:  pop    %ebp
08689d05 +0x175:  ret
```

## 反编译 C

```c
// CUser::SendChattingEmoticon @ 0x8689b90

/* CUser::SendChattingEmoticon() */

void __thiscall CUser::SendChattingEmoticon(CUser *this)

{
  size_t sVar1;
  char local_230 [20];
  short asStack_21c [254];
  PacketGuard local_20 [12];
  undefined4 local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08689bbc to 08689cd3 has its CatchHandler @ 08689cd6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x19b);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0x18);
  local_14 = GetGameOptionRef(this);
  CGameOption::getEmoticonInfo();
  for (local_10 = 0; local_10 < 0x18; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(int)asStack_21c[local_10 * 0xb]);
    sVar1 = strlen(local_230 + local_10 * 0x16);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,sVar1);
    sVar1 = strlen(local_230 + local_10 * 0x16);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,local_230 + local_10 * 0x16,sVar1);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  Send(this,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
