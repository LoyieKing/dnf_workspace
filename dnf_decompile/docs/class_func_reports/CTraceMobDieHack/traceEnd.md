# traceEnd

`_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_`

`CTraceMobDieHack::traceEnd(CUser*, CUser**)`

| 类 | 地址 |
|---|---|
| `CTraceMobDieHack` | `0x08599a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599a88  _ZN16CTraceMobDieHack8traceEndEP5CUserPS1_
#           CTraceMobDieHack::traceEnd(CUser*, CUser**)
# range [0x08599a88, 0x08599cb1]
08599a88 +0x000:  push   %ebp
08599a89 +0x001:  mov    %esp,%ebp
08599a8b +0x003:  push   %esi
08599a8c +0x004:  push   %ebx
08599a8d +0x005:  sub    $0x30,%esp
08599a90 +0x008:  mov    0x8(%ebp),%eax
08599a93 +0x00b:  movzbl 0x4c(%eax),%eax
08599a97 +0x00f:  xor    $0x1,%eax
08599a9a +0x012:  test   %al,%al
08599a9c +0x014:  jne    08599ca4 <+0x21c>
08599aa2 +0x01a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08599aa9 +0x021:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08599aae +0x026:  mov    %eax,-0x18(%ebp)
08599ab1 +0x029:  mov    0x8(%ebp),%eax
08599ab4 +0x02c:  movb   $0x0,0x4c(%eax)
08599ab8 +0x030:  cmpl   $0x0,0xc(%ebp)
08599abc +0x034:  je     08599ae2 <+0x5a>
08599abe +0x036:  mov    0xc(%ebp),%eax
08599ac1 +0x039:  mov    %eax,(%esp)
08599ac4 +0x03c:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599ac9 +0x041:  test   %eax,%eax
08599acb +0x043:  je     08599ae2 <+0x5a>
08599acd +0x045:  mov    0xc(%ebp),%eax
08599ad0 +0x048:  mov    %eax,(%esp)
08599ad3 +0x04b:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599ad8 +0x050:  mov    0xcac(%eax),%eax
08599ade +0x056:  test   %eax,%eax
08599ae0 +0x058:  jne    08599ae9 <+0x61>
08599ae2 +0x05a:  mov    $0x1,%eax
08599ae7 +0x05f:  jmp    08599aee <+0x66>
08599ae9 +0x061:  mov    $0x0,%eax
08599aee +0x066:  test   %al,%al
08599af0 +0x068:  jne    08599ca7 <+0x21f>
08599af6 +0x06e:  mov    0xc(%ebp),%eax
08599af9 +0x071:  mov    %eax,(%esp)
08599afc +0x074:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599b01 +0x079:  mov    0xcac(%eax),%eax
08599b07 +0x07f:  mov    %eax,(%esp)
08599b0a +0x082:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08599b0f +0x087:  mov    %eax,-0x14(%ebp)
08599b12 +0x08a:  movl   $0x1,-0x28(%ebp)
08599b19 +0x091:  movl   $0x2,-0x24(%ebp)
08599b20 +0x098:  movl   $0x29,-0x20(%ebp)
08599b27 +0x09f:  movl   $0x21,-0x1c(%ebp)
08599b2e +0x0a6:  movl   $0x0,-0x10(%ebp)
08599b35 +0x0ad:  jmp    08599b4b <+0xc3>
08599b37 +0x0af:  mov    -0x10(%ebp),%eax
08599b3a +0x0b2:  mov    -0x28(%ebp,%eax,4),%eax
08599b3e +0x0b6:  cmp    -0x14(%ebp),%eax
08599b41 +0x0b9:  je     08599caa <+0x222>
08599b47 +0x0bf:  addl   $0x1,-0x10(%ebp)
08599b4b +0x0c3:  mov    -0x10(%ebp),%eax
08599b4e +0x0c6:  cmp    $0x3,%eax
08599b51 +0x0c9:  setbe  %al
08599b54 +0x0cc:  test   %al,%al
08599b56 +0x0ce:  jne    08599b37 <+0xaf>
08599b58 +0x0d0:  movl   $0x0,-0xc(%ebp)
08599b5f +0x0d7:  jmp    08599c93 <+0x20b>
08599b64 +0x0dc:  mov    -0xc(%ebp),%eax
08599b67 +0x0df:  shl    $0x2,%eax
08599b6a +0x0e2:  add    0x10(%ebp),%eax
08599b6d +0x0e5:  mov    (%eax),%eax
08599b6f +0x0e7:  test   %eax,%eax
08599b71 +0x0e9:  je     08599ba1 <+0x119>
08599b73 +0x0eb:  mov    -0xc(%ebp),%eax
08599b76 +0x0ee:  shl    $0x2,%eax
08599b79 +0x0f1:  add    0x10(%ebp),%eax
08599b7c +0x0f4:  mov    (%eax),%eax
08599b7e +0x0f6:  mov    %eax,(%esp)
08599b81 +0x0f9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08599b86 +0x0fe:  test   %eax,%eax
08599b88 +0x100:  je     08599ba1 <+0x119>
08599b8a +0x102:  mov    -0xc(%ebp),%eax
08599b8d +0x105:  shl    $0x2,%eax
08599b90 +0x108:  add    0x10(%ebp),%eax
08599b93 +0x10b:  mov    (%eax),%eax
08599b95 +0x10d:  mov    %eax,(%esp)
08599b98 +0x110:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599b9d +0x115:  test   %eax,%eax
08599b9f +0x117:  jne    08599ba8 <+0x120>
08599ba1 +0x119:  mov    $0x1,%eax
08599ba6 +0x11e:  jmp    08599bad <+0x125>
08599ba8 +0x120:  mov    $0x0,%eax
08599bad +0x125:  test   %al,%al
08599baf +0x127:  jne    08599c8b <+0x203>
08599bb5 +0x12d:  mov    -0xc(%ebp),%eax
08599bb8 +0x130:  shl    $0x2,%eax
08599bbb +0x133:  add    0x10(%ebp),%eax
08599bbe +0x136:  mov    (%eax),%eax
08599bc0 +0x138:  mov    %eax,(%esp)
08599bc3 +0x13b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08599bc8 +0x140:  mov    %eax,%ebx
08599bca +0x142:  mov    -0xc(%ebp),%eax
08599bcd +0x145:  shl    $0x2,%eax
08599bd0 +0x148:  add    0x10(%ebp),%eax
08599bd3 +0x14b:  mov    (%eax),%eax
08599bd5 +0x14d:  mov    %eax,(%esp)
08599bd8 +0x150:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599bdd +0x155:  mov    0xcac(%eax),%eax
08599be3 +0x15b:  mov    %eax,(%esp)
08599be6 +0x15e:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
08599beb +0x163:  add    $0xa,%eax
08599bee +0x166:  cmp    %eax,%ebx
08599bf0 +0x168:  setg   %al
08599bf3 +0x16b:  test   %al,%al
08599bf5 +0x16d:  jne    08599c8e <+0x206>
08599bfb +0x173:  mov    -0xc(%ebp),%edx
08599bfe +0x176:  mov    -0xc(%ebp),%eax
08599c01 +0x179:  shl    $0x2,%eax
08599c04 +0x17c:  add    0x10(%ebp),%eax
08599c07 +0x17f:  mov    (%eax),%ecx
08599c09 +0x181:  mov    0x8(%ebp),%ebx
08599c0c +0x184:  mov    %edx,%eax
08599c0e +0x186:  add    %eax,%eax
08599c10 +0x188:  add    %edx,%eax
08599c12 +0x18a:  shl    $0x2,%eax
08599c15 +0x18d:  lea    (%ebx,%eax,1),%eax
08599c18 +0x190:  add    $0x50,%eax
08599c1b +0x193:  mov    %ecx,(%eax)
08599c1d +0x195:  mov    -0xc(%ebp),%edx
08599c20 +0x198:  mov    -0xc(%ebp),%ecx
08599c23 +0x19b:  mov    0x8(%ebp),%ebx
08599c26 +0x19e:  mov    %ecx,%eax
08599c28 +0x1a0:  add    %eax,%eax
08599c2a +0x1a2:  add    %ecx,%eax
08599c2c +0x1a4:  shl    $0x2,%eax
08599c2f +0x1a7:  lea    (%ebx,%eax,1),%eax
08599c32 +0x1aa:  add    $0x54,%eax
08599c35 +0x1ad:  mov    (%eax),%ecx
08599c37 +0x1af:  mov    0x8(%ebp),%eax
08599c3a +0x1b2:  mov    (%eax),%eax
08599c3c +0x1b4:  mov    -0x18(%ebp),%ebx
08599c3f +0x1b7:  mov    %ebx,%esi
08599c41 +0x1b9:  sub    %eax,%esi
08599c43 +0x1bb:  mov    %esi,%eax
08599c45 +0x1bd:  add    %eax,%ecx
08599c47 +0x1bf:  mov    0x8(%ebp),%ebx
08599c4a +0x1c2:  mov    %edx,%eax
08599c4c +0x1c4:  add    %eax,%eax
08599c4e +0x1c6:  add    %edx,%eax
08599c50 +0x1c8:  shl    $0x2,%eax
08599c53 +0x1cb:  lea    (%ebx,%eax,1),%eax
08599c56 +0x1ce:  add    $0x54,%eax
08599c59 +0x1d1:  mov    %ecx,(%eax)
08599c5b +0x1d3:  mov    -0xc(%ebp),%edx
08599c5e +0x1d6:  mov    0x8(%ebp),%ecx
08599c61 +0x1d9:  mov    %edx,%eax
08599c63 +0x1db:  add    %eax,%eax
08599c65 +0x1dd:  add    %edx,%eax
08599c67 +0x1df:  shl    $0x2,%eax
08599c6a +0x1e2:  lea    (%ecx,%eax,1),%eax
08599c6d +0x1e5:  add    $0x58,%eax
08599c70 +0x1e8:  mov    (%eax),%eax
08599c72 +0x1ea:  lea    0x1(%eax),%ecx
08599c75 +0x1ed:  mov    0x8(%ebp),%ebx
08599c78 +0x1f0:  mov    %edx,%eax
08599c7a +0x1f2:  add    %eax,%eax
08599c7c +0x1f4:  add    %edx,%eax
08599c7e +0x1f6:  shl    $0x2,%eax
08599c81 +0x1f9:  lea    (%ebx,%eax,1),%eax
08599c84 +0x1fc:  add    $0x58,%eax
08599c87 +0x1ff:  mov    %ecx,(%eax)
08599c89 +0x201:  jmp    08599c8f <+0x207>
08599c8b +0x203:  nop
08599c8c +0x204:  jmp    08599c8f <+0x207>
08599c8e +0x206:  nop
08599c8f +0x207:  addl   $0x1,-0xc(%ebp)
08599c93 +0x20b:  cmpl   $0x3,-0xc(%ebp)
08599c97 +0x20f:  setle  %al
08599c9a +0x212:  test   %al,%al
08599c9c +0x214:  jne    08599b64 <+0xdc>
08599ca2 +0x21a:  jmp    08599cab <+0x223>
08599ca4 +0x21c:  nop
08599ca5 +0x21d:  jmp    08599cab <+0x223>
08599ca7 +0x21f:  nop
08599ca8 +0x220:  jmp    08599cab <+0x223>
08599caa +0x222:  nop
08599cab +0x223:  add    $0x30,%esp
08599cae +0x226:  pop    %ebx
08599caf +0x227:  pop    %esi
08599cb0 +0x228:  pop    %ebp
08599cb1 +0x229:  ret
```

## 反编译 C

```c
// CTraceMobDieHack::traceEnd @ 0x8599a88

/* CTraceMobDieHack::traceEnd(CUser*, CUser**) */

void __thiscall CTraceMobDieHack::traceEnd(CTraceMobDieHack *this,CUser *param_1,CUser **param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_2c [5];
  int local_18;
  uint local_14;
  int local_10;
  
  if (this[0x4c] == (CTraceMobDieHack)0x1) {
    local_2c[4] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    this[0x4c] = (CTraceMobDieHack)0x0;
    if (((param_1 == (CUser *)0x0) || (iVar2 = CUser::GetParty(param_1), iVar2 == 0)) ||
       (iVar2 = CUser::GetParty(param_1), *(int *)(iVar2 + 0xcac) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      iVar2 = CUser::GetParty(param_1);
      local_18 = CDungeon::get_index(*(CDungeon **)(iVar2 + 0xcac));
      local_2c[0] = 1;
      local_2c[1] = 2;
      local_2c[2] = 0x29;
      local_2c[3] = 0x21;
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        if (local_2c[local_14] == local_18) {
          return;
        }
      }
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if (((param_2[local_10] == (CUser *)0x0) ||
            (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2[local_10]),
            iVar2 == 0)) || (iVar2 = CUser::GetParty(param_2[local_10]), iVar2 == 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2[local_10]);
          iVar3 = CUser::GetParty(param_2[local_10]);
          iVar3 = CDungeon::get_standard_level(*(CDungeon **)(iVar3 + 0xcac));
          if (iVar2 <= iVar3 + 10) {
            *(CUser **)(this + local_10 * 0xc + 0x50) = param_2[local_10];
            *(int *)(this + local_10 * 0xc + 0x54) =
                 *(int *)(this + local_10 * 0xc + 0x54) + (local_2c[4] - *(int *)this);
            *(int *)(this + local_10 * 0xc + 0x58) = *(int *)(this + local_10 * 0xc + 0x58) + 1;
          }
        }
      }
    }
  }
  return;
}
```
