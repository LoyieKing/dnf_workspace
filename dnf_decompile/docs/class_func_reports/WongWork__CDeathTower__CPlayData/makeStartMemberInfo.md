# makeStartMemberInfo

`_ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty`

`WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CParty*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08461d02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461d02  _ZN8WongWork11CDeathTower9CPlayData19makeStartMemberInfoEP6CParty
#           WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CParty*)
# range [0x08461d02, 0x08461e49]
08461d02 +0x000:  push   %ebp
08461d03 +0x001:  mov    %esp,%ebp
08461d05 +0x003:  push   %ebx
08461d06 +0x004:  sub    $0x24,%esp
08461d09 +0x007:  mov    0x8(%ebp),%eax
08461d0c +0x00a:  add    $0x9cc,%eax
08461d11 +0x00f:  movl   $0x5c,0x8(%esp)
08461d19 +0x017:  movl   $0x0,0x4(%esp)
08461d21 +0x01f:  mov    %eax,(%esp)
08461d24 +0x022:  call   0807dcc0 <_init+0x5b8>
08461d29 +0x027:  movl   $0x0,-0x14(%ebp)
08461d30 +0x02e:  movl   $0x0,-0x10(%ebp)
08461d37 +0x035:  jmp    08461e1f <+0x11d>
08461d3c +0x03a:  movl   $0x0,-0xc(%ebp)
08461d43 +0x041:  mov    -0x10(%ebp),%eax
08461d46 +0x044:  mov    %eax,0x4(%esp)
08461d4a +0x048:  mov    0xc(%ebp),%eax
08461d4d +0x04b:  mov    %eax,(%esp)
08461d50 +0x04e:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08461d55 +0x053:  mov    %eax,-0xc(%ebp)
08461d58 +0x056:  cmpl   $0x0,-0xc(%ebp)
08461d5c +0x05a:  je     08461d77 <+0x75>
08461d5e +0x05c:  mov    -0x10(%ebp),%eax
08461d61 +0x05f:  mov    %eax,0x4(%esp)
08461d65 +0x063:  mov    0xc(%ebp),%eax
08461d68 +0x066:  mov    %eax,(%esp)
08461d6b +0x069:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08461d70 +0x06e:  xor    $0x1,%eax
08461d73 +0x071:  test   %al,%al
08461d75 +0x073:  je     08461d7e <+0x7c>
08461d77 +0x075:  mov    $0x1,%eax
08461d7c +0x07a:  jmp    08461d83 <+0x81>
08461d7e +0x07c:  mov    $0x0,%eax
08461d83 +0x081:  test   %al,%al
08461d85 +0x083:  jne    08461e1a <+0x118>
08461d8b +0x089:  mov    -0xc(%ebp),%eax
08461d8e +0x08c:  mov    %eax,(%esp)
08461d91 +0x08f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08461d96 +0x094:  mov    -0x14(%ebp),%edx
08461d99 +0x097:  imul   $0x17,%edx,%edx
08461d9c +0x09a:  add    $0x9c0,%edx
08461da2 +0x0a0:  add    0x8(%ebp),%edx
08461da5 +0x0a3:  add    $0xc,%edx
08461da8 +0x0a6:  mov    %eax,0x4(%esp)
08461dac +0x0aa:  mov    %edx,(%esp)
08461daf +0x0ad:  call   0807def0 <_init+0x7e8>
08461db4 +0x0b2:  mov    -0x14(%ebp),%ebx
08461db7 +0x0b5:  mov    -0xc(%ebp),%eax
08461dba +0x0b8:  mov    %eax,(%esp)
08461dbd +0x0bb:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08461dc2 +0x0c0:  mov    0x8(%ebp),%ecx
08461dc5 +0x0c3:  imul   $0x17,%ebx,%edx
08461dc8 +0x0c6:  lea    (%ecx,%edx,1),%edx
08461dcb +0x0c9:  add    $0x9d0,%edx
08461dd1 +0x0cf:  mov    %al,0x10(%edx)
08461dd4 +0x0d2:  mov    -0x14(%ebp),%ebx
08461dd7 +0x0d5:  mov    -0xc(%ebp),%eax
08461dda +0x0d8:  mov    %eax,(%esp)
08461ddd +0x0db:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08461de2 +0x0e0:  mov    0x8(%ebp),%ecx
08461de5 +0x0e3:  imul   $0x17,%ebx,%edx
08461de8 +0x0e6:  lea    (%ecx,%edx,1),%edx
08461deb +0x0e9:  add    $0x9d0,%edx
08461df1 +0x0ef:  mov    %al,0x11(%edx)
08461df4 +0x0f2:  mov    -0x14(%ebp),%ebx
08461df7 +0x0f5:  mov    -0xc(%ebp),%eax
08461dfa +0x0f8:  mov    %eax,(%esp)
08461dfd +0x0fb:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
08461e02 +0x100:  mov    0x8(%ebp),%ecx
08461e05 +0x103:  imul   $0x17,%ebx,%edx
08461e08 +0x106:  lea    (%ecx,%edx,1),%edx
08461e0b +0x109:  add    $0x9d0,%edx
08461e11 +0x10f:  mov    %al,0x12(%edx)
08461e14 +0x112:  addl   $0x1,-0x14(%ebp)
08461e18 +0x116:  jmp    08461e1b <+0x119>
08461e1a +0x118:  nop
08461e1b +0x119:  addl   $0x1,-0x10(%ebp)
08461e1f +0x11d:  cmpl   $0x3,-0x10(%ebp)
08461e23 +0x121:  setle  %al
08461e26 +0x124:  test   %al,%al
08461e28 +0x126:  jne    08461d3c <+0x3a>
08461e2e +0x12c:  mov    0xc(%ebp),%eax
08461e31 +0x12f:  mov    %eax,(%esp)
08461e34 +0x132:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
08461e39 +0x137:  mov    %eax,%edx
08461e3b +0x139:  mov    0x8(%ebp),%eax
08461e3e +0x13c:  mov    %edx,0x9c8(%eax)
08461e44 +0x142:  add    $0x24,%esp
08461e47 +0x145:  pop    %ebx
08461e48 +0x146:  pop    %ebp
08461e49 +0x147:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::makeStartMemberInfo @ 0x8461d02

/* WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CParty*) */

void __thiscall
WongWork::CDeathTower::CPlayData::makeStartMemberInfo(CPlayData *this,CParty *param_1)

{
  bool bVar1;
  char cVar2;
  CPlayData CVar3;
  CUserCharacInfo *this_00;
  char *__src;
  undefined4 uVar4;
  int local_18;
  int local_14;
  
  memset(this + 0x9cc,0,0x5c);
  local_18 = 0;
  local_14 = 0;
  do {
    if (3 < local_14) {
      uVar4 = CParty::get_member_count(param_1);
      *(undefined4 *)(this + 0x9c8) = uVar4;
      return;
    }
    this_00 = (CUserCharacInfo *)CParty::get_user(param_1,local_14);
    if (this_00 == (CUserCharacInfo *)0x0) {
LAB_08461d77:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(param_1,local_14);
      if (cVar2 != '\x01') goto LAB_08461d77;
      bVar1 = false;
    }
    if (!bVar1) {
      __src = (char *)CUserCharacInfo::getCurCharacName(this_00);
      strcpy((char *)(this + local_18 * 0x17 + 0x9cc),__src);
      CVar3 = (CPlayData)CUserCharacInfo::get_charac_level(this_00);
      this[local_18 * 0x17 + 0x9e0] = CVar3;
      CVar3 = (CPlayData)CUserCharacInfo::get_charac_job(this_00);
      this[local_18 * 0x17 + 0x9e1] = CVar3;
      CVar3 = (CPlayData)CUserCharacInfo::getCurCharacGrowType(this_00);
      this[local_18 * 0x17 + 0x9e2] = CVar3;
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
