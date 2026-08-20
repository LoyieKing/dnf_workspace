# addServerHackCnt

`_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj`

`WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f8c7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f8c7e  _ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj
#           WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
# range [0x080f8c7e, 0x080f8f61]
080f8c7e +0x000:  push   %ebp
080f8c7f +0x001:  mov    %esp,%ebp
080f8c81 +0x003:  push   %ebx
080f8c82 +0x004:  sub    $0x34,%esp
080f8c85 +0x007:  mov    0x10(%ebp),%eax
080f8c88 +0x00a:  test   %eax,%eax
080f8c8a +0x00c:  js     080f8c96 <+0x18>
080f8c8c +0x00e:  mov    0x10(%ebp),%eax
080f8c8f +0x011:  cmp    $0xfa1,%eax
080f8c94 +0x016:  jle    080f8cfd <+0x7f>
080f8c96 +0x018:  mov    0x8(%ebp),%eax
080f8c99 +0x01b:  mov    %eax,(%esp)
080f8c9c +0x01e:  call   080f9868 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x74>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x74
080f8ca1 +0x023:  mov    %eax,0x8(%esp)
080f8ca5 +0x027:  movl   $0x34e,0x4(%esp)
080f8cad +0x02f:  mov    0xc(%ebp),%eax
080f8cb0 +0x032:  mov    %eax,(%esp)
080f8cb3 +0x035:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
080f8cb8 +0x03a:  movl   $0x0,0x14(%esp)
080f8cc0 +0x042:  mov    %eax,0x10(%esp)
080f8cc4 +0x046:  mov    0x14(%ebp),%eax
080f8cc7 +0x049:  mov    %eax,0xc(%esp)
080f8ccb +0x04d:  movl   $0x34e,0x8(%esp)
080f8cd3 +0x055:  mov    0xc(%ebp),%eax
080f8cd6 +0x058:  mov    %eax,0x4(%esp)
080f8cda +0x05c:  mov    0x8(%ebp),%eax
080f8cdd +0x05f:  mov    %eax,(%esp)
080f8ce0 +0x062:  call   080f8c7e <+0x0>
080f8ce5 +0x067:  movl   $0x0,0x4(%esp)
080f8ced +0x06f:  mov    0x8(%ebp),%eax
080f8cf0 +0x072:  mov    %eax,(%esp)
080f8cf3 +0x075:  call   080f9856 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x62>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x62
080f8cf8 +0x07a:  jmp    080f8f5b <+0x2dd>
080f8cfd +0x07f:  mov    0x14(%ebp),%eax
080f8d00 +0x082:  mov    %eax,0x8(%esp)
080f8d04 +0x086:  mov    0x10(%ebp),%eax
080f8d07 +0x089:  mov    %eax,0x4(%esp)
080f8d0b +0x08d:  mov    0x8(%ebp),%eax
080f8d0e +0x090:  mov    %eax,(%esp)
080f8d11 +0x093:  call   080f81fc <_ZN8WongWork13CHackAnalyzer17CheckExceptionCntENS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::CheckExceptionCnt(WongWork::ENUM_HACKTYPE, int)
080f8d16 +0x098:  test   %al,%al
080f8d18 +0x09a:  jne    080f8f39 <+0x2bb>
080f8d1e +0x0a0:  mov    0x10(%ebp),%eax
080f8d21 +0x0a3:  mov    %eax,(%esp)
080f8d24 +0x0a6:  call   08278a48 <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE>  ; Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)
080f8d29 +0x0ab:  test   %al,%al
080f8d2b +0x0ad:  je     080f8d4b <+0xcd>
080f8d2d +0x0af:  mov    0x10(%ebp),%eax
080f8d30 +0x0b2:  lea    -0x65(%eax),%edx
080f8d33 +0x0b5:  mov    0x8(%ebp),%eax
080f8d36 +0x0b8:  add    $0xf44,%edx
080f8d3c +0x0be:  mov    0x8(%eax,%edx,4),%eax
080f8d40 +0x0c2:  test   %eax,%eax
080f8d42 +0x0c4:  je     080f8d4b <+0xcd>
080f8d44 +0x0c6:  mov    $0x1,%eax
080f8d49 +0x0cb:  jmp    080f8d50 <+0xd2>
080f8d4b +0x0cd:  mov    $0x0,%eax
080f8d50 +0x0d2:  test   %al,%al
080f8d52 +0x0d4:  jne    080f8f3c <+0x2be>
080f8d58 +0x0da:  mov    0xc(%ebp),%eax
080f8d5b +0x0dd:  mov    %eax,(%esp)
080f8d5e +0x0e0:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
080f8d63 +0x0e5:  mov    %eax,-0x10(%ebp)
080f8d66 +0x0e8:  cmpl   $0x0,-0x10(%ebp)
080f8d6a +0x0ec:  je     080f8e54 <+0x1d6>
080f8d70 +0x0f2:  mov    0xc(%ebp),%eax
080f8d73 +0x0f5:  mov    %eax,(%esp)
080f8d76 +0x0f8:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080f8d7b +0x0fd:  cmp    $0x5,%eax
080f8d7e +0x100:  sete   %al
080f8d81 +0x103:  test   %al,%al
080f8d83 +0x105:  je     080f8e54 <+0x1d6>
080f8d89 +0x10b:  mov    -0x10(%ebp),%eax
080f8d8c +0x10e:  mov    %eax,(%esp)
080f8d8f +0x111:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
080f8d94 +0x116:  mov    %eax,0x8(%esp)
080f8d98 +0x11a:  mov    0x10(%ebp),%eax
080f8d9b +0x11d:  mov    %eax,0x4(%esp)
080f8d9f +0x121:  mov    0x8(%ebp),%eax
080f8da2 +0x124:  mov    %eax,(%esp)
080f8da5 +0x127:  call   080f8320 <_ZN8WongWork13CHackAnalyzer25CheckHackRateByPartyCountENS_13ENUM_HACKTYPEEi>  ; WongWork::CHackAnalyzer::CheckHackRateByPartyCount(WongWork::ENUM_HACKTYPE, int)
080f8daa +0x12c:  xor    $0x1,%eax
080f8dad +0x12f:  test   %al,%al
080f8daf +0x131:  jne    080f8f3f <+0x2c1>
080f8db5 +0x137:  mov    -0x10(%ebp),%eax
080f8db8 +0x13a:  mov    0xcac(%eax),%eax
080f8dbe +0x140:  test   %eax,%eax
080f8dc0 +0x142:  je     080f8e54 <+0x1d6>
080f8dc6 +0x148:  mov    0xc(%ebp),%eax
080f8dc9 +0x14b:  mov    %eax,(%esp)
080f8dcc +0x14e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080f8dd1 +0x153:  mov    %eax,%ebx
080f8dd3 +0x155:  mov    -0x10(%ebp),%eax
080f8dd6 +0x158:  mov    0xcac(%eax),%eax
080f8ddc +0x15e:  mov    %eax,(%esp)
080f8ddf +0x161:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
080f8de4 +0x166:  mov    %ebx,%edx
080f8de6 +0x168:  sub    %eax,%edx
080f8de8 +0x16a:  mov    %edx,%eax
080f8dea +0x16c:  test   %eax,%eax
080f8dec +0x16e:  js     080f8e14 <+0x196>
080f8dee +0x170:  mov    0xc(%ebp),%eax
080f8df1 +0x173:  mov    %eax,(%esp)
080f8df4 +0x176:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
080f8df9 +0x17b:  mov    %eax,%ebx
080f8dfb +0x17d:  mov    -0x10(%ebp),%eax
080f8dfe +0x180:  mov    0xcac(%eax),%eax
080f8e04 +0x186:  mov    %eax,(%esp)
080f8e07 +0x189:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
080f8e0c +0x18e:  mov    %ebx,%edx
080f8e0e +0x190:  sub    %eax,%edx
080f8e10 +0x192:  mov    %edx,%eax
080f8e12 +0x194:  jmp    080f8e19 <+0x19b>
080f8e14 +0x196:  mov    $0x0,%eax
080f8e19 +0x19b:  mov    %eax,-0xc(%ebp)
080f8e1c +0x19e:  mov    -0x10(%ebp),%eax
080f8e1f +0x1a1:  add    $0xb24,%eax
080f8e24 +0x1a6:  mov    %eax,(%esp)
080f8e27 +0x1a9:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
080f8e2c +0x1ae:  mov    %eax,0xc(%esp)
080f8e30 +0x1b2:  mov    -0xc(%ebp),%eax
080f8e33 +0x1b5:  mov    %eax,0x8(%esp)
080f8e37 +0x1b9:  mov    0x10(%ebp),%eax
080f8e3a +0x1bc:  mov    %eax,0x4(%esp)
080f8e3e +0x1c0:  mov    0x8(%ebp),%eax
080f8e41 +0x1c3:  mov    %eax,(%esp)
080f8e44 +0x1c6:  call   080f842e <_ZN8WongWork13CHackAnalyzer24CheckHackRateByDifficultENS_13ENUM_HACKTYPEEii>  ; WongWork::CHackAnalyzer::CheckHackRateByDifficult(WongWork::ENUM_HACKTYPE, int, int)
080f8e49 +0x1cb:  xor    $0x1,%eax
080f8e4c +0x1ce:  test   %al,%al
080f8e4e +0x1d0:  jne    080f8f42 <+0x2c4>
080f8e54 +0x1d6:  cmpl   $0x25b,0x10(%ebp)
080f8e5b +0x1dd:  je     080f8f45 <+0x2c7>
080f8e61 +0x1e3:  cmpl   $0x25c,0x10(%ebp)
080f8e68 +0x1ea:  je     080f8f48 <+0x2ca>
080f8e6e +0x1f0:  cmpl   $0x25d,0x10(%ebp)
080f8e75 +0x1f7:  je     080f8f4b <+0x2cd>
080f8e7b +0x1fd:  cmpl   $0x25e,0x10(%ebp)
080f8e82 +0x204:  je     080f8f4e <+0x2d0>
080f8e88 +0x20a:  cmpl   $0x25f,0x10(%ebp)
080f8e8f +0x211:  je     080f8f51 <+0x2d3>
080f8e95 +0x217:  cmpl   $0x260,0x10(%ebp)
080f8e9c +0x21e:  je     080f8f54 <+0x2d6>
080f8ea2 +0x224:  cmpl   $0x325,0x10(%ebp)
080f8ea9 +0x22b:  je     080f8f57 <+0x2d9>
080f8eaf +0x231:  cmpl   $0x6f,0x10(%ebp)
080f8eb3 +0x235:  je     080f8f5a <+0x2dc>
080f8eb9 +0x23b:  mov    0x10(%ebp),%eax
080f8ebc +0x23e:  lea    -0x65(%eax),%ecx
080f8ebf +0x241:  mov    0x10(%ebp),%eax
080f8ec2 +0x244:  lea    -0x65(%eax),%edx
080f8ec5 +0x247:  mov    0x8(%ebp),%eax
080f8ec8 +0x24a:  add    $0x8,%edx
080f8ecb +0x24d:  mov    0x8(%eax,%edx,4),%eax
080f8ecf +0x251:  add    0x14(%ebp),%eax
080f8ed2 +0x254:  mov    %eax,%edx
080f8ed4 +0x256:  mov    0x8(%ebp),%eax
080f8ed7 +0x259:  add    $0x8,%ecx
080f8eda +0x25c:  mov    %edx,0x8(%eax,%ecx,4)
080f8ede +0x260:  mov    0x10(%ebp),%eax
080f8ee1 +0x263:  lea    -0x65(%eax),%ecx
080f8ee4 +0x266:  mov    0x10(%ebp),%eax
080f8ee7 +0x269:  lea    -0x65(%eax),%edx
080f8eea +0x26c:  mov    0x8(%ebp),%eax
080f8eed +0x26f:  add    $0xf44,%edx
080f8ef3 +0x275:  mov    0x8(%eax,%edx,4),%eax
080f8ef7 +0x279:  add    0x14(%ebp),%eax
080f8efa +0x27c:  mov    %eax,%edx
080f8efc +0x27e:  mov    0x8(%ebp),%eax
080f8eff +0x281:  add    $0xf44,%ecx
080f8f05 +0x287:  mov    %edx,0x8(%eax,%ecx,4)
080f8f09 +0x28b:  mov    0x14(%ebp),%eax
080f8f0c +0x28e:  mov    0x1c(%ebp),%edx
080f8f0f +0x291:  mov    %edx,0x14(%esp)
080f8f13 +0x295:  mov    0x18(%ebp),%edx
080f8f16 +0x298:  mov    %edx,0x10(%esp)
080f8f1a +0x29c:  mov    %eax,0xc(%esp)
080f8f1e +0x2a0:  mov    0x10(%ebp),%eax
080f8f21 +0x2a3:  mov    %eax,0x8(%esp)
080f8f25 +0x2a7:  mov    0xc(%ebp),%eax
080f8f28 +0x2aa:  mov    %eax,0x4(%esp)
080f8f2c +0x2ae:  mov    0x8(%ebp),%eax
080f8f2f +0x2b1:  mov    %eax,(%esp)
080f8f32 +0x2b4:  call   080f8c4e <_ZN8WongWork13CHackAnalyzer17onUpdateHackCountEP5CUserNS_13ENUM_HACKTYPEEijj>  ; WongWork::CHackAnalyzer::onUpdateHackCount(CUser*, WongWork::ENUM_HACKTYPE, int, unsigned int, unsigned int)
080f8f37 +0x2b9:  jmp    080f8f5b <+0x2dd>
080f8f39 +0x2bb:  nop
080f8f3a +0x2bc:  jmp    080f8f5b <+0x2dd>
080f8f3c +0x2be:  nop
080f8f3d +0x2bf:  jmp    080f8f5b <+0x2dd>
080f8f3f +0x2c1:  nop
080f8f40 +0x2c2:  jmp    080f8f5b <+0x2dd>
080f8f42 +0x2c4:  nop
080f8f43 +0x2c5:  jmp    080f8f5b <+0x2dd>
080f8f45 +0x2c7:  nop
080f8f46 +0x2c8:  jmp    080f8f5b <+0x2dd>
080f8f48 +0x2ca:  nop
080f8f49 +0x2cb:  jmp    080f8f5b <+0x2dd>
080f8f4b +0x2cd:  nop
080f8f4c +0x2ce:  jmp    080f8f5b <+0x2dd>
080f8f4e +0x2d0:  nop
080f8f4f +0x2d1:  jmp    080f8f5b <+0x2dd>
080f8f51 +0x2d3:  nop
080f8f52 +0x2d4:  jmp    080f8f5b <+0x2dd>
080f8f54 +0x2d6:  nop
080f8f55 +0x2d7:  jmp    080f8f5b <+0x2dd>
080f8f57 +0x2d9:  nop
080f8f58 +0x2da:  jmp    080f8f5b <+0x2dd>
080f8f5a +0x2dc:  nop
080f8f5b +0x2dd:  add    $0x34,%esp
080f8f5e +0x2e0:  pop    %ebx
080f8f5f +0x2e1:  pop    %ebp
080f8f60 +0x2e2:  ret
080f8f61 +0x2e3:  nop
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::addServerHackCnt @ 0x80f8c7e

/* WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
WongWork::CHackAnalyzer::addServerHackCnt
          (CHackAnalyzer *this,CUser *param_1,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CParty *this_00;
  int iVar5;
  
  if ((param_3 < 0) || (0xfa1 < param_3)) {
    iVar3 = getBaseHackType(this);
    uVar4 = CUser::SetETC(param_1,0x34e,iVar3);
    addServerHackCnt(this,param_1,0x34e,param_4,uVar4,0);
    setBaseHackType(this,0);
  }
  else {
    cVar2 = CheckExceptionCnt(this,param_3,param_4);
    if (cVar2 == '\0') {
      cVar2 = Secu_AccountHacking::checkAccountHackingHackType(param_3);
      if ((cVar2 == '\0') || (*(int *)(this + (param_3 + 0xedf) * 4 + 8) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        this_00 = (CParty *)CUser::GetParty(param_1);
        if ((this_00 != (CParty *)0x0) && (iVar3 = CUser::get_state(param_1), iVar3 == 5)) {
          uVar4 = CParty::get_member_count(this_00);
          cVar2 = CheckHackRateByPartyCount(this,param_3,uVar4);
          if (cVar2 != '\x01') {
            return;
          }
          if (*(int *)(this_00 + 0xcac) != 0) {
            iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            iVar5 = CDungeon::get_standard_level(*(CDungeon **)(this_00 + 0xcac));
            if (iVar3 - iVar5 < 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
              iVar5 = CDungeon::get_standard_level(*(CDungeon **)(this_00 + 0xcac));
              iVar3 = iVar3 - iVar5;
            }
            uVar4 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this_00 + 0xb24));
            cVar2 = CheckHackRateByDifficult(this,param_3,iVar3,uVar4);
            if (cVar2 != '\x01') {
              return;
            }
          }
        }
        if (((((param_3 != 0x25b) && (param_3 != 0x25c)) && (param_3 != 0x25d)) &&
            ((param_3 != 0x25e && (param_3 != 0x25f)))) &&
           ((param_3 != 0x260 && ((param_3 != 0x325 && (param_3 != 0x6f)))))) {
          *(int *)(this + (param_3 + -0x5d) * 4 + 8) =
               *(int *)(this + (param_3 + -0x5d) * 4 + 8) + param_4;
          *(int *)(this + (param_3 + 0xedf) * 4 + 8) =
               *(int *)(this + (param_3 + 0xedf) * 4 + 8) + param_4;
          onUpdateHackCount(this,param_1,param_3,param_4,param_5,param_6);
        }
      }
    }
  }
  return;
}
```
