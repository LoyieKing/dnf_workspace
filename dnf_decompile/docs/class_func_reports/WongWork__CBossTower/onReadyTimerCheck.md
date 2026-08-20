# onReadyTimerCheck

`_ZN8WongWork10CBossTower17onReadyTimerCheckEv`

`WongWork::CBossTower::onReadyTimerCheck()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x0814512a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814512a  _ZN8WongWork10CBossTower17onReadyTimerCheckEv
#           WongWork::CBossTower::onReadyTimerCheck()
# range [0x0814512a, 0x0814530b]
0814512a +0x000:  push   %ebp
0814512b +0x001:  mov    %esp,%ebp
0814512d +0x003:  push   %esi
0814512e +0x004:  push   %ebx
0814512f +0x005:  sub    $0x30,%esp
08145132 +0x008:  mov    0x8(%ebp),%eax
08145135 +0x00b:  mov    (%eax),%eax
08145137 +0x00d:  add    $0xc,%eax
0814513a +0x010:  mov    (%eax),%ebx
0814513c +0x012:  mov    0x8(%ebp),%eax
0814513f +0x015:  mov    0x4(%eax),%eax
08145142 +0x018:  mov    %eax,(%esp)
08145145 +0x01b:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814514a +0x020:  mov    0x8(%ebp),%edx
0814514d +0x023:  mov    %eax,0x4(%esp)
08145151 +0x027:  mov    %edx,(%esp)
08145154 +0x02a:  call   *%ebx
08145156 +0x02c:  test   %al,%al
08145158 +0x02e:  je     08145164 <+0x3a>
0814515a +0x030:  mov    $0x0,%eax
0814515f +0x035:  jmp    08145304 <+0x1da>
08145164 +0x03a:  mov    0x8(%ebp),%eax
08145167 +0x03d:  mov    0x4(%eax),%eax
0814516a +0x040:  test   %eax,%eax
0814516c +0x042:  je     08145180 <+0x56>
0814516e +0x044:  mov    0x8(%ebp),%eax
08145171 +0x047:  mov    0x4(%eax),%eax
08145174 +0x04a:  mov    %eax,(%esp)
08145177 +0x04d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814517c +0x052:  test   %eax,%eax
0814517e +0x054:  jg     08145187 <+0x5d>
08145180 +0x056:  mov    $0x1,%eax
08145185 +0x05b:  jmp    0814518c <+0x62>
08145187 +0x05d:  mov    $0x0,%eax
0814518c +0x062:  test   %al,%al
0814518e +0x064:  je     081451a5 <+0x7b>
08145190 +0x066:  mov    0x8(%ebp),%eax
08145193 +0x069:  mov    %eax,(%esp)
08145196 +0x06c:  call   08142b36 <_ZN8WongWork10CBossTower8_destroyEv>  ; WongWork::CBossTower::_destroy()
0814519b +0x071:  mov    $0x0,%eax
081451a0 +0x076:  jmp    08145304 <+0x1da>
081451a5 +0x07b:  movl   $0x0,-0x10(%ebp)
081451ac +0x082:  jmp    0814523f <+0x115>
081451b1 +0x087:  mov    0x8(%ebp),%eax
081451b4 +0x08a:  mov    0x4(%eax),%eax
081451b7 +0x08d:  mov    -0x10(%ebp),%edx
081451ba +0x090:  mov    %edx,0x4(%esp)
081451be +0x094:  mov    %eax,(%esp)
081451c1 +0x097:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081451c6 +0x09c:  mov    %eax,-0xc(%ebp)
081451c9 +0x09f:  cmpl   $0x0,-0xc(%ebp)
081451cd +0x0a3:  je     081451eb <+0xc1>
081451cf +0x0a5:  mov    0x8(%ebp),%eax
081451d2 +0x0a8:  mov    0x4(%eax),%eax
081451d5 +0x0ab:  mov    -0x10(%ebp),%edx
081451d8 +0x0ae:  mov    %edx,0x4(%esp)
081451dc +0x0b2:  mov    %eax,(%esp)
081451df +0x0b5:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081451e4 +0x0ba:  xor    $0x1,%eax
081451e7 +0x0bd:  test   %al,%al
081451e9 +0x0bf:  je     081451f2 <+0xc8>
081451eb +0x0c1:  mov    $0x1,%eax
081451f0 +0x0c6:  jmp    081451f7 <+0xcd>
081451f2 +0x0c8:  mov    $0x0,%eax
081451f7 +0x0cd:  test   %al,%al
081451f9 +0x0cf:  jne    0814523a <+0x110>
081451fb +0x0d1:  mov    -0x10(%ebp),%eax
081451fe +0x0d4:  mov    0x8(%ebp),%edx
08145201 +0x0d7:  movzbl 0x11(%edx,%eax,1),%eax
08145206 +0x0dc:  xor    $0x1,%eax
08145209 +0x0df:  test   %al,%al
0814520b +0x0e1:  je     0814523b <+0x111>
0814520d +0x0e3:  mov    -0xc(%ebp),%eax
08145210 +0x0e6:  mov    %eax,0x4(%esp)
08145214 +0x0ea:  mov    0x8(%ebp),%eax
08145217 +0x0ed:  mov    %eax,(%esp)
0814521a +0x0f0:  call   0814530c <_ZN8WongWork10CBossTower19onChargeRequireItemEP5CUser>  ; WongWork::CBossTower::onChargeRequireItem(CUser*)
0814521f +0x0f5:  mov    0x8(%ebp),%eax
08145222 +0x0f8:  mov    (%eax),%eax
08145224 +0x0fa:  add    $0x14,%eax
08145227 +0x0fd:  mov    (%eax),%edx
08145229 +0x0ff:  mov    -0xc(%ebp),%eax
0814522c +0x102:  mov    %eax,0x4(%esp)
08145230 +0x106:  mov    0x8(%ebp),%eax
08145233 +0x109:  mov    %eax,(%esp)
08145236 +0x10c:  call   *%edx
08145238 +0x10e:  jmp    0814523b <+0x111>
0814523a +0x110:  nop
0814523b +0x111:  addl   $0x1,-0x10(%ebp)
0814523f +0x115:  cmpl   $0x3,-0x10(%ebp)
08145243 +0x119:  setle  %al
08145246 +0x11c:  test   %al,%al
08145248 +0x11e:  jne    081451b1 <+0x87>
0814524e +0x124:  mov    0x8(%ebp),%eax
08145251 +0x127:  mov    0x4(%eax),%eax
08145254 +0x12a:  mov    %eax,(%esp)
08145257 +0x12d:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0814525c +0x132:  test   %eax,%eax
0814525e +0x134:  setg   %al
08145261 +0x137:  test   %al,%al
08145263 +0x139:  je     081452f4 <+0x1ca>
08145269 +0x13f:  lea    -0x1c(%ebp),%eax
0814526c +0x142:  mov    %eax,(%esp)
0814526f +0x145:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08145274 +0x14a:  movl   $0x1e,0x8(%esp)
0814527c +0x152:  movl   $0x0,0x4(%esp)
08145284 +0x15a:  lea    -0x1c(%ebp),%eax
08145287 +0x15d:  mov    %eax,(%esp)
0814528a +0x160:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814528f +0x165:  movl   $0x0,0x4(%esp)
08145297 +0x16d:  lea    -0x1c(%ebp),%eax
0814529a +0x170:  mov    %eax,(%esp)
0814529d +0x173:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081452a2 +0x178:  movl   $0x1,0x4(%esp)
081452aa +0x180:  lea    -0x1c(%ebp),%eax
081452ad +0x183:  mov    %eax,(%esp)
081452b0 +0x186:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081452b5 +0x18b:  mov    0x8(%ebp),%eax
081452b8 +0x18e:  mov    0x4(%eax),%eax
081452bb +0x191:  lea    -0x1c(%ebp),%edx
081452be +0x194:  mov    %edx,0x4(%esp)
081452c2 +0x198:  mov    %eax,(%esp)
081452c5 +0x19b:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081452ca +0x1a0:  jmp    081452e7 <+0x1bd>
081452cc +0x1a2:  mov    %edx,%ebx
081452ce +0x1a4:  mov    %eax,%esi
081452d0 +0x1a6:  lea    -0x1c(%ebp),%eax
081452d3 +0x1a9:  mov    %eax,(%esp)
081452d6 +0x1ac:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081452db +0x1b1:  mov    %esi,%eax
081452dd +0x1b3:  mov    %ebx,%edx
081452df +0x1b5:  mov    %eax,(%esp)
081452e2 +0x1b8:  call   08ae3750 <_Unwind_Resume>
081452e7 +0x1bd:  lea    -0x1c(%ebp),%eax
081452ea +0x1c0:  mov    %eax,(%esp)
081452ed +0x1c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081452f2 +0x1c8:  jmp    081452ff <+0x1d5>
081452f4 +0x1ca:  mov    0x8(%ebp),%eax
081452f7 +0x1cd:  mov    %eax,(%esp)
081452fa +0x1d0:  call   08142b36 <_ZN8WongWork10CBossTower8_destroyEv>  ; WongWork::CBossTower::_destroy()
081452ff +0x1d5:  mov    $0x1,%eax
08145304 +0x1da:  add    $0x30,%esp
08145307 +0x1dd:  pop    %ebx
08145308 +0x1de:  pop    %esi
08145309 +0x1df:  pop    %ebp
0814530a +0x1e0:  ret
0814530b +0x1e1:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::onReadyTimerCheck @ 0x814512a

/* WongWork::CBossTower::onReadyTimerCheck() */

undefined4 __thiscall WongWork::CBossTower::onReadyTimerCheck(CBossTower *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  PacketGuard local_20 [12];
  int local_14;
  CUser *local_10;
  
  pcVar1 = *(code **)(*(int *)this + 0xc);
  uVar4 = CParty::get_member_count(*(CParty **)(this + 4));
  cVar3 = (*pcVar1)(this,uVar4);
  if (cVar3 == '\0') {
    if ((*(int *)(this + 4) == 0) ||
       (iVar5 = CParty::get_member_count(*(CParty **)(this + 4)), iVar5 < 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      _destroy(this);
      uVar4 = 0;
    }
    else {
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        local_10 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
        if ((local_10 == (CUser *)0x0) ||
           (cVar3 = CParty::checkValidUser(*(CParty **)(this + 4),local_14), cVar3 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) && (this[local_14 + 0x11] != (CBossTower)0x1)) {
          onChargeRequireItem(this,local_10);
          (**(code **)(*(int *)this + 0x14))(this,local_10);
        }
      }
      iVar5 = CParty::get_member_count(*(CParty **)(this + 4));
      if (iVar5 < 1) {
        _destroy(this);
      }
      else {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0814528a to 081452c9 has its CatchHandler @ 081452cc */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1e);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_20);
        PacketGuard::~PacketGuard(local_20);
      }
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}
```
