# CheckEnterDimensionDungeon

`_ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeonRhb`

`CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f1ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f1ce  _ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeonRhb
#           CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, bool)
# range [0x0859f1ce, 0x0859f369]
0859f1ce +0x000:  push   %ebp
0859f1cf +0x001:  mov    %esp,%ebp
0859f1d1 +0x003:  push   %ebx
0859f1d2 +0x004:  sub    $0x34,%esp
0859f1d5 +0x007:  mov    0x14(%ebp),%eax
0859f1d8 +0x00a:  mov    %al,-0x1c(%ebp)
0859f1db +0x00d:  mov    0x8(%ebp),%eax
0859f1de +0x010:  mov    %eax,(%esp)
0859f1e1 +0x013:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859f1e6 +0x018:  mov    %eax,-0x14(%ebp)
0859f1e9 +0x01b:  mov    0xc(%ebp),%eax
0859f1ec +0x01e:  mov    %eax,(%esp)
0859f1ef +0x021:  call   0826b938 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x206>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x206
0859f1f4 +0x026:  movsbl %al,%eax
0859f1f7 +0x029:  sub    $0x1,%eax
0859f1fa +0x02c:  mov    %eax,-0x10(%ebp)
0859f1fd +0x02f:  movl   $0x0,-0xc(%ebp)
0859f204 +0x036:  jmp    0859f350 <+0x182>
0859f209 +0x03b:  mov    -0xc(%ebp),%eax
0859f20c +0x03e:  mov    %eax,0x4(%esp)
0859f210 +0x042:  mov    0x8(%ebp),%eax
0859f213 +0x045:  mov    %eax,(%esp)
0859f216 +0x048:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859f21b +0x04d:  xor    $0x1,%eax
0859f21e +0x050:  test   %al,%al
0859f220 +0x052:  jne    0859f34b <+0x17d>
0859f226 +0x058:  cmpb   $0x0,-0x1c(%ebp)
0859f22a +0x05c:  je     0859f27f <+0xb1>
0859f22c +0x05e:  mov    0xc(%ebp),%eax
0859f22f +0x061:  mov    %eax,(%esp)
0859f232 +0x064:  call   0826b944 <_GLOBAL__I__ZN10QuickParty11CQuickPartyC2Ev+0x212>  ; global constructors keyed to QuickParty::CQuickParty::CQuickParty()+0x212
0859f237 +0x069:  movsbl %al,%eax
0859f23a +0x06c:  cmp    -0x14(%ebp),%eax
0859f23d +0x06f:  jle    0859f26c <+0x9e>
0859f23f +0x071:  mov    -0xc(%ebp),%edx
0859f242 +0x074:  mov    0x8(%ebp),%ecx
0859f245 +0x077:  mov    %edx,%eax
0859f247 +0x079:  add    %eax,%eax
0859f249 +0x07b:  add    %edx,%eax
0859f24b +0x07d:  shl    $0x3,%eax
0859f24e +0x080:  lea    (%ecx,%eax,1),%eax
0859f251 +0x083:  add    $0x78,%eax
0859f254 +0x086:  mov    (%eax),%eax
0859f256 +0x088:  mov    %eax,(%esp)
0859f259 +0x08b:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0859f25e +0x090:  xor    $0x1,%eax
0859f261 +0x093:  test   %al,%al
0859f263 +0x095:  je     0859f26c <+0x9e>
0859f265 +0x097:  mov    $0x1,%eax
0859f26a +0x09c:  jmp    0859f271 <+0xa3>
0859f26c +0x09e:  mov    $0x0,%eax
0859f271 +0x0a3:  test   %al,%al
0859f273 +0x0a5:  je     0859f27f <+0xb1>
0859f275 +0x0a7:  mov    $0xab,%eax
0859f27a +0x0ac:  jmp    0859f364 <+0x196>
0859f27f +0x0b1:  mov    -0xc(%ebp),%edx
0859f282 +0x0b4:  mov    0x8(%ebp),%ecx
0859f285 +0x0b7:  mov    %edx,%eax
0859f287 +0x0b9:  add    %eax,%eax
0859f289 +0x0bb:  add    %edx,%eax
0859f28b +0x0bd:  shl    $0x3,%eax
0859f28e +0x0c0:  lea    (%ecx,%eax,1),%eax
0859f291 +0x0c3:  add    $0x78,%eax
0859f294 +0x0c6:  mov    (%eax),%eax
0859f296 +0x0c8:  mov    %eax,(%esp)
0859f299 +0x0cb:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859f29e +0x0d0:  mov    %eax,%ebx
0859f2a0 +0x0d2:  mov    0xc(%ebp),%eax
0859f2a3 +0x0d5:  mov    %eax,(%esp)
0859f2a6 +0x0d8:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
0859f2ab +0x0dd:  cmp    %eax,%ebx
0859f2ad +0x0df:  setl   %al
0859f2b0 +0x0e2:  test   %al,%al
0859f2b2 +0x0e4:  je     0859f2c8 <+0xfa>
0859f2b4 +0x0e6:  mov    -0xc(%ebp),%eax
0859f2b7 +0x0e9:  mov    %eax,%edx
0859f2b9 +0x0eb:  mov    0x10(%ebp),%eax
0859f2bc +0x0ee:  mov    %dl,(%eax)
0859f2be +0x0f0:  mov    $0xac,%eax
0859f2c3 +0x0f5:  jmp    0859f364 <+0x196>
0859f2c8 +0x0fa:  mov    -0xc(%ebp),%edx
0859f2cb +0x0fd:  mov    0x8(%ebp),%ecx
0859f2ce +0x100:  mov    %edx,%eax
0859f2d0 +0x102:  add    %eax,%eax
0859f2d2 +0x104:  add    %edx,%eax
0859f2d4 +0x106:  shl    $0x3,%eax
0859f2d7 +0x109:  lea    (%ecx,%eax,1),%eax
0859f2da +0x10c:  add    $0x78,%eax
0859f2dd +0x10f:  mov    (%eax),%eax
0859f2df +0x111:  mov    %eax,(%esp)
0859f2e2 +0x114:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0859f2e7 +0x119:  mov    -0x10(%ebp),%edx
0859f2ea +0x11c:  movzbl 0xeb9(%eax,%edx,1),%eax
0859f2f2 +0x124:  test   %al,%al
0859f2f4 +0x126:  jg     0859f331 <+0x163>
0859f2f6 +0x128:  mov    0x8(%ebp),%eax
0859f2f9 +0x12b:  mov    0xcd8(%eax),%eax
0859f2ff +0x131:  cmp    $0x1,%eax
0859f302 +0x134:  je     0859f331 <+0x163>
0859f304 +0x136:  mov    -0xc(%ebp),%edx
0859f307 +0x139:  mov    0x8(%ebp),%ecx
0859f30a +0x13c:  mov    %edx,%eax
0859f30c +0x13e:  add    %eax,%eax
0859f30e +0x140:  add    %edx,%eax
0859f310 +0x142:  shl    $0x3,%eax
0859f313 +0x145:  lea    (%ecx,%eax,1),%eax
0859f316 +0x148:  add    $0x78,%eax
0859f319 +0x14b:  mov    (%eax),%eax
0859f31b +0x14d:  mov    %eax,(%esp)
0859f31e +0x150:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0859f323 +0x155:  xor    $0x1,%eax
0859f326 +0x158:  test   %al,%al
0859f328 +0x15a:  je     0859f331 <+0x163>
0859f32a +0x15c:  mov    $0x1,%eax
0859f32f +0x161:  jmp    0859f336 <+0x168>
0859f331 +0x163:  mov    $0x0,%eax
0859f336 +0x168:  test   %al,%al
0859f338 +0x16a:  je     0859f34c <+0x17e>
0859f33a +0x16c:  mov    -0xc(%ebp),%eax
0859f33d +0x16f:  mov    %eax,%edx
0859f33f +0x171:  mov    0x10(%ebp),%eax
0859f342 +0x174:  mov    %dl,(%eax)
0859f344 +0x176:  mov    $0xad,%eax
0859f349 +0x17b:  jmp    0859f364 <+0x196>
0859f34b +0x17d:  nop
0859f34c +0x17e:  addl   $0x1,-0xc(%ebp)
0859f350 +0x182:  cmpl   $0x3,-0xc(%ebp)
0859f354 +0x186:  setle  %al
0859f357 +0x189:  test   %al,%al
0859f359 +0x18b:  jne    0859f209 <+0x3b>
0859f35f +0x191:  mov    $0x1,%eax
0859f364 +0x196:  add    $0x34,%esp
0859f367 +0x199:  pop    %ebx
0859f368 +0x19a:  pop    %ebp
0859f369 +0x19b:  ret
```

## 反编译 C

```c
// CParty::CheckEnterDimensionDungeon @ 0x859f1ce

/* CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, bool) */

undefined4 __thiscall
CParty::CheckEnterDimensionDungeon(CParty *this,CDungeon *param_1,uchar *param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_10;
  
  iVar4 = get_member_count(this);
  cVar2 = CDungeon::get_dimension_possible(param_1);
  local_10 = 0;
  do {
    if (3 < local_10) {
      return 1;
    }
    cVar3 = _checkValidUser(this,local_10);
    if (cVar3 == '\x01') {
      if (param_3) {
        cVar3 = CDungeon::get_dimension_min_partymem(param_1);
        if ((iVar4 < cVar3) &&
           (cVar3 = CUser::isGMUser(*(CUser **)(this + local_10 * 0x18 + 0x78)), cVar3 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          return 0xab;
        }
      }
      iVar5 = CUserCharacInfo::get_charac_level
                        (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      iVar6 = CDungeon::get_min_level(param_1);
      if (iVar5 < iVar6) {
        *param_2 = (uchar)local_10;
        return 0xac;
      }
      iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      if (((*(char *)(iVar5 + cVar2 + 0xeb8) < '\x01') && (*(int *)(this + 0xcd8) != 1)) &&
         (cVar3 = CUser::isGMUser(*(CUser **)(this + local_10 * 0x18 + 0x78)), cVar3 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        *param_2 = (uchar)local_10;
        return 0xad;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
