# reportHackInfo

`_ZN16CTraceMobDieHack14reportHackInfoEv`

`CTraceMobDieHack::reportHackInfo()`

| 类 | 地址 |
|---|---|
| `CTraceMobDieHack` | `0x08599cb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599cb2  _ZN16CTraceMobDieHack14reportHackInfoEv
#           CTraceMobDieHack::reportHackInfo()
# range [0x08599cb2, 0x08599f63]
08599cb2 +0x000:  push   %ebp
08599cb3 +0x001:  mov    %esp,%ebp
08599cb5 +0x003:  push   %esi
08599cb6 +0x004:  push   %ebx
08599cb7 +0x005:  sub    $0x40,%esp
08599cba +0x008:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
08599cbf +0x00d:  mov    %eax,(%esp)
08599cc2 +0x010:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
08599cc7 +0x015:  test   %al,%al
08599cc9 +0x017:  je     08599cdb <+0x29>
08599ccb +0x019:  mov    0x8(%ebp),%eax
08599cce +0x01c:  mov    %eax,(%esp)
08599cd1 +0x01f:  call   082a50b0 <_GLOBAL__I__ZN4CLog5this_E+0x14d7>  ; global constructors keyed to CLog::this_+0x14d7
08599cd6 +0x024:  jmp    08599f5c <+0x2aa>
08599cdb +0x029:  movl   $0x0,-0x18(%ebp)
08599ce2 +0x030:  jmp    08599f42 <+0x290>
08599ce7 +0x035:  mov    -0x18(%ebp),%edx
08599cea +0x038:  mov    0x8(%ebp),%ecx
08599ced +0x03b:  mov    %edx,%eax
08599cef +0x03d:  add    %eax,%eax
08599cf1 +0x03f:  add    %edx,%eax
08599cf3 +0x041:  shl    $0x2,%eax
08599cf6 +0x044:  lea    (%ecx,%eax,1),%eax
08599cf9 +0x047:  add    $0x50,%eax
08599cfc +0x04a:  mov    (%eax),%eax
08599cfe +0x04c:  test   %eax,%eax
08599d00 +0x04e:  je     08599f3a <+0x288>
08599d06 +0x054:  mov    -0x18(%ebp),%edx
08599d09 +0x057:  mov    0x8(%ebp),%ecx
08599d0c +0x05a:  mov    %edx,%eax
08599d0e +0x05c:  add    %eax,%eax
08599d10 +0x05e:  add    %edx,%eax
08599d12 +0x060:  shl    $0x2,%eax
08599d15 +0x063:  lea    (%ecx,%eax,1),%eax
08599d18 +0x066:  add    $0x58,%eax
08599d1b +0x069:  mov    (%eax),%eax
08599d1d +0x06b:  cmp    $0x1,%eax
08599d20 +0x06e:  jle    08599f3d <+0x28b>
08599d26 +0x074:  mov    -0x18(%ebp),%edx
08599d29 +0x077:  mov    0x8(%ebp),%ecx
08599d2c +0x07a:  mov    %edx,%eax
08599d2e +0x07c:  add    %eax,%eax
08599d30 +0x07e:  add    %edx,%eax
08599d32 +0x080:  shl    $0x2,%eax
08599d35 +0x083:  lea    (%ecx,%eax,1),%eax
08599d38 +0x086:  add    $0x54,%eax
08599d3b +0x089:  mov    (%eax),%ecx
08599d3d +0x08b:  mov    -0x18(%ebp),%edx
08599d40 +0x08e:  mov    0x8(%ebp),%ebx
08599d43 +0x091:  mov    %edx,%eax
08599d45 +0x093:  add    %eax,%eax
08599d47 +0x095:  add    %edx,%eax
08599d49 +0x097:  shl    $0x2,%eax
08599d4c +0x09a:  lea    (%ebx,%eax,1),%eax
08599d4f +0x09d:  add    $0x58,%eax
08599d52 +0x0a0:  mov    (%eax),%eax
08599d54 +0x0a2:  mov    %eax,-0x1c(%ebp)
08599d57 +0x0a5:  mov    %ecx,%edx
08599d59 +0x0a7:  mov    %edx,%eax
08599d5b +0x0a9:  sar    $0x1f,%edx
08599d5e +0x0ac:  idivl  -0x1c(%ebp)
08599d61 +0x0af:  mov    %eax,-0x14(%ebp)
08599d64 +0x0b2:  mov    0x8(%ebp),%eax
08599d67 +0x0b5:  mov    0x84(%eax),%eax
08599d6d +0x0bb:  cmp    $0x5,%eax
08599d70 +0x0be:  je     08599e54 <+0x1a2>
08599d76 +0x0c4:  mov    0x8(%ebp),%eax
08599d79 +0x0c7:  movzbl 0x80(%eax),%eax
08599d80 +0x0ce:  xor    $0x1,%eax
08599d83 +0x0d1:  test   %al,%al
08599d85 +0x0d3:  je     08599e54 <+0x1a2>
08599d8b +0x0d9:  movl   $0xa,-0x10(%ebp)
08599d92 +0x0e0:  mov    0x8(%ebp),%eax
08599d95 +0x0e3:  mov    0x84(%eax),%eax
08599d9b +0x0e9:  cmp    $0x1,%eax
08599d9e +0x0ec:  je     08599dc0 <+0x10e>
08599da0 +0x0ee:  cmp    $0x1,%eax
08599da3 +0x0f1:  jg     08599dab <+0xf9>
08599da5 +0x0f3:  test   %eax,%eax
08599da7 +0x0f5:  je     08599db7 <+0x105>
08599da9 +0x0f7:  jmp    08599dd9 <+0x127>
08599dab +0x0f9:  cmp    $0x2,%eax
08599dae +0x0fc:  je     08599dc9 <+0x117>
08599db0 +0x0fe:  cmp    $0x3,%eax
08599db3 +0x101:  je     08599dd2 <+0x120>
08599db5 +0x103:  jmp    08599dd9 <+0x127>
08599db7 +0x105:  movl   $0x5,-0x10(%ebp)
08599dbe +0x10c:  jmp    08599dd9 <+0x127>
08599dc0 +0x10e:  movl   $0x6,-0x10(%ebp)
08599dc7 +0x115:  jmp    08599dd9 <+0x127>
08599dc9 +0x117:  movl   $0x7,-0x10(%ebp)
08599dd0 +0x11e:  jmp    08599dd9 <+0x127>
08599dd2 +0x120:  movl   $0x8,-0x10(%ebp)
08599dd9 +0x127:  mov    -0x14(%ebp),%eax
08599ddc +0x12a:  cmp    -0x10(%ebp),%eax
08599ddf +0x12d:  jg     08599e54 <+0x1a2>
08599de1 +0x12f:  mov    -0x14(%ebp),%eax
08599de4 +0x132:  mov    -0x10(%ebp),%edx
08599de7 +0x135:  mov    %edx,%ecx
08599de9 +0x137:  sub    %eax,%ecx
08599deb +0x139:  mov    %ecx,%eax
08599ded +0x13b:  mov    %eax,-0xc(%ebp)
08599df0 +0x13e:  mov    -0xc(%ebp),%eax
08599df3 +0x141:  lea    0x1(%eax),%esi
08599df6 +0x144:  mov    -0x18(%ebp),%edx
08599df9 +0x147:  mov    0x8(%ebp),%ecx
08599dfc +0x14a:  mov    %edx,%eax
08599dfe +0x14c:  add    %eax,%eax
08599e00 +0x14e:  add    %edx,%eax
08599e02 +0x150:  shl    $0x2,%eax
08599e05 +0x153:  lea    (%ecx,%eax,1),%eax
08599e08 +0x156:  add    $0x50,%eax
08599e0b +0x159:  mov    (%eax),%ebx
08599e0d +0x15b:  mov    -0x18(%ebp),%edx
08599e10 +0x15e:  mov    0x8(%ebp),%ecx
08599e13 +0x161:  mov    %edx,%eax
08599e15 +0x163:  add    %eax,%eax
08599e17 +0x165:  add    %edx,%eax
08599e19 +0x167:  shl    $0x2,%eax
08599e1c +0x16a:  lea    (%ecx,%eax,1),%eax
08599e1f +0x16d:  add    $0x50,%eax
08599e22 +0x170:  mov    (%eax),%eax
08599e24 +0x172:  mov    %eax,(%esp)
08599e27 +0x175:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08599e2c +0x17a:  movl   $0x0,0x14(%esp)
08599e34 +0x182:  movl   $0x0,0x10(%esp)
08599e3c +0x18a:  mov    %esi,0xc(%esp)
08599e40 +0x18e:  movl   $0x19e,0x8(%esp)
08599e48 +0x196:  mov    %ebx,0x4(%esp)
08599e4c +0x19a:  mov    %eax,(%esp)
08599e4f +0x19d:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08599e54 +0x1a2:  mov    0x8(%ebp),%eax
08599e57 +0x1a5:  movzbl 0x80(%eax),%eax
08599e5e +0x1ac:  test   %al,%al
08599e60 +0x1ae:  je     08599ed0 <+0x21e>
08599e62 +0x1b0:  cmpl   $0x9,-0x14(%ebp)
08599e66 +0x1b4:  jg     08599f3e <+0x28c>
08599e6c +0x1ba:  mov    -0x18(%ebp),%edx
08599e6f +0x1bd:  mov    0x8(%ebp),%ecx
08599e72 +0x1c0:  mov    %edx,%eax
08599e74 +0x1c2:  add    %eax,%eax
08599e76 +0x1c4:  add    %edx,%eax
08599e78 +0x1c6:  shl    $0x2,%eax
08599e7b +0x1c9:  lea    (%ecx,%eax,1),%eax
08599e7e +0x1cc:  add    $0x50,%eax
08599e81 +0x1cf:  mov    (%eax),%ebx
08599e83 +0x1d1:  mov    -0x18(%ebp),%edx
08599e86 +0x1d4:  mov    0x8(%ebp),%ecx
08599e89 +0x1d7:  mov    %edx,%eax
08599e8b +0x1d9:  add    %eax,%eax
08599e8d +0x1db:  add    %edx,%eax
08599e8f +0x1dd:  shl    $0x2,%eax
08599e92 +0x1e0:  lea    (%ecx,%eax,1),%eax
08599e95 +0x1e3:  add    $0x50,%eax
08599e98 +0x1e6:  mov    (%eax),%eax
08599e9a +0x1e8:  mov    %eax,(%esp)
08599e9d +0x1eb:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08599ea2 +0x1f0:  movl   $0x0,0x14(%esp)
08599eaa +0x1f8:  movl   $0x0,0x10(%esp)
08599eb2 +0x200:  movl   $0x1,0xc(%esp)
08599eba +0x208:  movl   $0x194,0x8(%esp)
08599ec2 +0x210:  mov    %ebx,0x4(%esp)
08599ec6 +0x214:  mov    %eax,(%esp)
08599ec9 +0x217:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08599ece +0x21c:  jmp    08599f3e <+0x28c>
08599ed0 +0x21e:  cmpl   $0x13,-0x14(%ebp)
08599ed4 +0x222:  jg     08599f3e <+0x28c>
08599ed6 +0x224:  mov    -0x18(%ebp),%edx
08599ed9 +0x227:  mov    0x8(%ebp),%ecx
08599edc +0x22a:  mov    %edx,%eax
08599ede +0x22c:  add    %eax,%eax
08599ee0 +0x22e:  add    %edx,%eax
08599ee2 +0x230:  shl    $0x2,%eax
08599ee5 +0x233:  lea    (%ecx,%eax,1),%eax
08599ee8 +0x236:  add    $0x50,%eax
08599eeb +0x239:  mov    (%eax),%ebx
08599eed +0x23b:  mov    -0x18(%ebp),%edx
08599ef0 +0x23e:  mov    0x8(%ebp),%ecx
08599ef3 +0x241:  mov    %edx,%eax
08599ef5 +0x243:  add    %eax,%eax
08599ef7 +0x245:  add    %edx,%eax
08599ef9 +0x247:  shl    $0x2,%eax
08599efc +0x24a:  lea    (%ecx,%eax,1),%eax
08599eff +0x24d:  add    $0x50,%eax
08599f02 +0x250:  mov    (%eax),%eax
08599f04 +0x252:  mov    %eax,(%esp)
08599f07 +0x255:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
08599f0c +0x25a:  movl   $0x0,0x14(%esp)
08599f14 +0x262:  movl   $0x0,0x10(%esp)
08599f1c +0x26a:  movl   $0x1,0xc(%esp)
08599f24 +0x272:  movl   $0x193,0x8(%esp)
08599f2c +0x27a:  mov    %ebx,0x4(%esp)
08599f30 +0x27e:  mov    %eax,(%esp)
08599f33 +0x281:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
08599f38 +0x286:  jmp    08599f3e <+0x28c>
08599f3a +0x288:  nop
08599f3b +0x289:  jmp    08599f3e <+0x28c>
08599f3d +0x28b:  nop
08599f3e +0x28c:  addl   $0x1,-0x18(%ebp)
08599f42 +0x290:  cmpl   $0x3,-0x18(%ebp)
08599f46 +0x294:  setle  %al
08599f49 +0x297:  test   %al,%al
08599f4b +0x299:  jne    08599ce7 <+0x35>
08599f51 +0x29f:  mov    0x8(%ebp),%eax
08599f54 +0x2a2:  mov    %eax,(%esp)
08599f57 +0x2a5:  call   082a50b0 <_GLOBAL__I__ZN4CLog5this_E+0x14d7>  ; global constructors keyed to CLog::this_+0x14d7
08599f5c +0x2aa:  add    $0x40,%esp
08599f5f +0x2ad:  pop    %ebx
08599f60 +0x2ae:  pop    %esi
08599f61 +0x2af:  pop    %ebp
08599f62 +0x2b0:  ret
08599f63 +0x2b1:  nop
```

## 反编译 C

```c
// CTraceMobDieHack::reportHackInfo @ 0x8599cb2

/* CTraceMobDieHack::reportHackInfo() */

void __thiscall CTraceMobDieHack::reportHackInfo(CTraceMobDieHack *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  CHackAnalyzer *pCVar5;
  int local_1c;
  int local_14;
  
  cVar3 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
  if (cVar3 == '\0') {
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      if ((*(int *)(this + local_1c * 0xc + 0x50) != 0) &&
         (1 < *(int *)(this + local_1c * 0xc + 0x58))) {
        iVar4 = *(int *)(this + local_1c * 0xc + 0x54) / *(int *)(this + local_1c * 0xc + 0x58);
        if ((*(int *)(this + 0x84) != 5) && (this[0x80] != (CTraceMobDieHack)0x1)) {
          local_14 = 10;
          iVar1 = *(int *)(this + 0x84);
          if (iVar1 == 1) {
            local_14 = 6;
          }
          else if (iVar1 < 2) {
            if (iVar1 == 0) {
              local_14 = 5;
            }
          }
          else if (iVar1 == 2) {
            local_14 = 7;
          }
          else if (iVar1 == 3) {
            local_14 = 8;
          }
          if (iVar4 <= local_14) {
            uVar2 = *(undefined4 *)(this + local_1c * 0xc + 0x50);
            pCVar5 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_1c * 0xc + 0x50));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar2,0x19e,(local_14 - iVar4) + 1,0,0)
            ;
          }
        }
        if (this[0x80] == (CTraceMobDieHack)0x0) {
          if (iVar4 < 0x14) {
            uVar2 = *(undefined4 *)(this + local_1c * 0xc + 0x50);
            pCVar5 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_1c * 0xc + 0x50));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar2,0x193,1,0,0);
          }
        }
        else if (iVar4 < 10) {
          uVar2 = *(undefined4 *)(this + local_1c * 0xc + 0x50);
          pCVar5 = (CHackAnalyzer *)
                   CUser::getHackAnalyzer(*(CUser **)(this + local_1c * 0xc + 0x50));
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar2,0x194,1,0,0);
        }
      }
    }
    reset(this);
  }
  else {
    reset(this);
  }
  return;
}
```
