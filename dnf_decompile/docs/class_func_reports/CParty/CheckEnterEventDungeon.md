# CheckEnterEventDungeon

`_ZN6CParty22CheckEnterEventDungeonEPK8CDungeonRhP10Inven_ItemPi`

`CParty::CheckEnterEventDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859ee66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859ee66  _ZN6CParty22CheckEnterEventDungeonEPK8CDungeonRhP10Inven_ItemPi
#           CParty::CheckEnterEventDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
# range [0x0859ee66, 0x0859f1cd]
0859ee66 +0x000:  push   %ebp
0859ee67 +0x001:  mov    %esp,%ebp
0859ee69 +0x003:  push   %esi
0859ee6a +0x004:  push   %ebx
0859ee6b +0x005:  sub    $0x60,%esp
0859ee6e +0x008:  mov    0xc(%ebp),%eax
0859ee71 +0x00b:  mov    0x860(%eax),%eax
0859ee77 +0x011:  cmp    $0xffffffff,%eax
0859ee7a +0x014:  jne    0859ee94 <+0x2e>
0859ee7c +0x016:  mov    0xc(%ebp),%eax
0859ee7f +0x019:  mov    0x7f4(%eax),%eax
0859ee85 +0x01f:  cmp    $0xffffffff,%eax
0859ee88 +0x022:  jne    0859ee94 <+0x2e>
0859ee8a +0x024:  mov    $0x1,%eax
0859ee8f +0x029:  jmp    0859f1c4 <+0x35e>
0859ee94 +0x02e:  mov    0xc(%ebp),%eax
0859ee97 +0x031:  mov    0x860(%eax),%eax
0859ee9d +0x037:  cmp    $0xffffffff,%eax
0859eea0 +0x03a:  je     0859eedc <+0x76>
0859eea2 +0x03c:  mov    0xc(%ebp),%eax
0859eea5 +0x03f:  movzbl 0x868(%eax),%eax
0859eeac +0x046:  xor    $0x1,%eax
0859eeaf +0x049:  test   %al,%al
0859eeb1 +0x04b:  je     0859eedc <+0x76>
0859eeb3 +0x04d:  mov    0xc(%ebp),%eax
0859eeb6 +0x050:  mov    0x7f4(%eax),%eax
0859eebc +0x056:  cmp    $0xffffffff,%eax
0859eebf +0x059:  je     0859eedc <+0x76>
0859eec1 +0x05b:  mov    0xc(%ebp),%eax
0859eec4 +0x05e:  movzbl 0x7fc(%eax),%eax
0859eecb +0x065:  xor    $0x1,%eax
0859eece +0x068:  test   %al,%al
0859eed0 +0x06a:  je     0859eedc <+0x76>
0859eed2 +0x06c:  mov    $0x1,%eax
0859eed7 +0x071:  jmp    0859f1c4 <+0x35e>
0859eedc +0x076:  movl   $0x0,-0x10(%ebp)
0859eee3 +0x07d:  movl   $0x0,-0x10(%ebp)
0859eeea +0x084:  jmp    0859f1b0 <+0x34a>
0859eeef +0x089:  mov    -0x10(%ebp),%eax
0859eef2 +0x08c:  mov    %eax,0x4(%esp)
0859eef6 +0x090:  mov    0x8(%ebp),%eax
0859eef9 +0x093:  mov    %eax,(%esp)
0859eefc +0x096:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859ef01 +0x09b:  xor    $0x1,%eax
0859ef04 +0x09e:  test   %al,%al
0859ef06 +0x0a0:  jne    0859f1ab <+0x345>
0859ef0c +0x0a6:  movb   $0x1,-0x9(%ebp)
0859ef10 +0x0aa:  mov    -0x10(%ebp),%eax
0859ef13 +0x0ad:  shl    $0x2,%eax
0859ef16 +0x0b0:  mov    %eax,%ebx
0859ef18 +0x0b2:  add    0x18(%ebp),%ebx
0859ef1b +0x0b5:  mov    0xc(%ebp),%eax
0859ef1e +0x0b8:  mov    0x860(%eax),%esi
0859ef24 +0x0be:  mov    -0x10(%ebp),%edx
0859ef27 +0x0c1:  mov    0x8(%ebp),%ecx
0859ef2a +0x0c4:  mov    %edx,%eax
0859ef2c +0x0c6:  add    %eax,%eax
0859ef2e +0x0c8:  add    %edx,%eax
0859ef30 +0x0ca:  shl    $0x3,%eax
0859ef33 +0x0cd:  lea    (%ecx,%eax,1),%eax
0859ef36 +0x0d0:  add    $0x78,%eax
0859ef39 +0x0d3:  mov    (%eax),%eax
0859ef3b +0x0d5:  mov    %eax,(%esp)
0859ef3e +0x0d8:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859ef43 +0x0dd:  mov    %esi,0x4(%esp)
0859ef47 +0x0e1:  mov    %eax,(%esp)
0859ef4a +0x0e4:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0859ef4f +0x0e9:  mov    %eax,(%ebx)
0859ef51 +0x0eb:  mov    (%ebx),%eax
0859ef53 +0x0ed:  cmp    $0xffffffff,%eax
0859ef56 +0x0f0:  setne  %al
0859ef59 +0x0f3:  test   %al,%al
0859ef5b +0x0f5:  je     0859f03d <+0x1d7>
0859ef61 +0x0fb:  mov    -0x10(%ebp),%eax
0859ef64 +0x0fe:  imul   $0x3d,%eax,%eax
0859ef67 +0x101:  mov    %eax,%ebx
0859ef69 +0x103:  add    0x14(%ebp),%ebx
0859ef6c +0x106:  mov    -0x10(%ebp),%eax
0859ef6f +0x109:  shl    $0x2,%eax
0859ef72 +0x10c:  add    0x18(%ebp),%eax
0859ef75 +0x10f:  mov    (%eax),%esi
0859ef77 +0x111:  mov    -0x10(%ebp),%edx
0859ef7a +0x114:  mov    0x8(%ebp),%ecx
0859ef7d +0x117:  mov    %edx,%eax
0859ef7f +0x119:  add    %eax,%eax
0859ef81 +0x11b:  add    %edx,%eax
0859ef83 +0x11d:  shl    $0x3,%eax
0859ef86 +0x120:  lea    (%ecx,%eax,1),%eax
0859ef89 +0x123:  add    $0x78,%eax
0859ef8c +0x126:  mov    (%eax),%eax
0859ef8e +0x128:  mov    %eax,(%esp)
0859ef91 +0x12b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859ef96 +0x130:  lea    -0x58(%ebp),%edx
0859ef99 +0x133:  mov    %esi,0xc(%esp)
0859ef9d +0x137:  movl   $0x1,0x8(%esp)
0859efa5 +0x13f:  mov    %eax,0x4(%esp)
0859efa9 +0x143:  mov    %edx,(%esp)
0859efac +0x146:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0859efb1 +0x14b:  sub    $0x4,%esp
0859efb4 +0x14e:  mov    -0x58(%ebp),%eax
0859efb7 +0x151:  mov    %eax,(%ebx)
0859efb9 +0x153:  mov    -0x54(%ebp),%eax
0859efbc +0x156:  mov    %eax,0x4(%ebx)
0859efbf +0x159:  mov    -0x50(%ebp),%eax
0859efc2 +0x15c:  mov    %eax,0x8(%ebx)
0859efc5 +0x15f:  mov    -0x4c(%ebp),%eax
0859efc8 +0x162:  mov    %eax,0xc(%ebx)
0859efcb +0x165:  mov    -0x48(%ebp),%eax
0859efce +0x168:  mov    %eax,0x10(%ebx)
0859efd1 +0x16b:  mov    -0x44(%ebp),%eax
0859efd4 +0x16e:  mov    %eax,0x14(%ebx)
0859efd7 +0x171:  mov    -0x40(%ebp),%eax
0859efda +0x174:  mov    %eax,0x18(%ebx)
0859efdd +0x177:  mov    -0x3c(%ebp),%eax
0859efe0 +0x17a:  mov    %eax,0x1c(%ebx)
0859efe3 +0x17d:  mov    -0x38(%ebp),%eax
0859efe6 +0x180:  mov    %eax,0x20(%ebx)
0859efe9 +0x183:  mov    -0x34(%ebp),%eax
0859efec +0x186:  mov    %eax,0x24(%ebx)
0859efef +0x189:  mov    -0x30(%ebp),%eax
0859eff2 +0x18c:  mov    %eax,0x28(%ebx)
0859eff5 +0x18f:  mov    -0x2c(%ebp),%eax
0859eff8 +0x192:  mov    %eax,0x2c(%ebx)
0859effb +0x195:  mov    -0x28(%ebp),%eax
0859effe +0x198:  mov    %eax,0x30(%ebx)
0859f001 +0x19b:  mov    -0x24(%ebp),%eax
0859f004 +0x19e:  mov    %eax,0x34(%ebx)
0859f007 +0x1a1:  mov    -0x20(%ebp),%eax
0859f00a +0x1a4:  mov    %eax,0x38(%ebx)
0859f00d +0x1a7:  movzbl -0x1c(%ebp),%eax
0859f011 +0x1ab:  mov    %al,0x3c(%ebx)
0859f014 +0x1ae:  mov    -0x10(%ebp),%eax
0859f017 +0x1b1:  imul   $0x3d,%eax,%eax
0859f01a +0x1b4:  add    0x14(%ebp),%eax
0859f01d +0x1b7:  mov    0x7(%eax),%edx
0859f020 +0x1ba:  mov    0xc(%ebp),%eax
0859f023 +0x1bd:  mov    0x864(%eax),%eax
0859f029 +0x1c3:  cmp    %eax,%edx
0859f02b +0x1c5:  jge    0859f04b <+0x1e5>
0859f02d +0x1c7:  mov    -0x10(%ebp),%eax
0859f030 +0x1ca:  mov    %eax,%edx
0859f032 +0x1cc:  mov    0x10(%ebp),%eax
0859f035 +0x1cf:  mov    %dl,(%eax)
0859f037 +0x1d1:  movb   $0x0,-0x9(%ebp)
0859f03b +0x1d5:  jmp    0859f04b <+0x1e5>
0859f03d +0x1d7:  mov    -0x10(%ebp),%eax
0859f040 +0x1da:  mov    %eax,%edx
0859f042 +0x1dc:  mov    0x10(%ebp),%eax
0859f045 +0x1df:  mov    %dl,(%eax)
0859f047 +0x1e1:  movb   $0x0,-0x9(%ebp)
0859f04b +0x1e5:  movzbl -0x9(%ebp),%eax
0859f04f +0x1e9:  xor    $0x1,%eax
0859f052 +0x1ec:  test   %al,%al
0859f054 +0x1ee:  je     0859f199 <+0x333>
0859f05a +0x1f4:  movb   $0x1,-0x9(%ebp)
0859f05e +0x1f8:  mov    -0x10(%ebp),%eax
0859f061 +0x1fb:  shl    $0x2,%eax
0859f064 +0x1fe:  mov    %eax,%ebx
0859f066 +0x200:  add    0x18(%ebp),%ebx
0859f069 +0x203:  mov    0xc(%ebp),%eax
0859f06c +0x206:  mov    0x7f4(%eax),%esi
0859f072 +0x20c:  mov    -0x10(%ebp),%edx
0859f075 +0x20f:  mov    0x8(%ebp),%ecx
0859f078 +0x212:  mov    %edx,%eax
0859f07a +0x214:  add    %eax,%eax
0859f07c +0x216:  add    %edx,%eax
0859f07e +0x218:  shl    $0x3,%eax
0859f081 +0x21b:  lea    (%ecx,%eax,1),%eax
0859f084 +0x21e:  add    $0x78,%eax
0859f087 +0x221:  mov    (%eax),%eax
0859f089 +0x223:  mov    %eax,(%esp)
0859f08c +0x226:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859f091 +0x22b:  mov    %esi,0x4(%esp)
0859f095 +0x22f:  mov    %eax,(%esp)
0859f098 +0x232:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0859f09d +0x237:  mov    %eax,(%ebx)
0859f09f +0x239:  mov    (%ebx),%eax
0859f0a1 +0x23b:  cmp    $0xffffffff,%eax
0859f0a4 +0x23e:  setne  %al
0859f0a7 +0x241:  test   %al,%al
0859f0a9 +0x243:  je     0859f18b <+0x325>
0859f0af +0x249:  mov    -0x10(%ebp),%eax
0859f0b2 +0x24c:  imul   $0x3d,%eax,%eax
0859f0b5 +0x24f:  mov    %eax,%ebx
0859f0b7 +0x251:  add    0x14(%ebp),%ebx
0859f0ba +0x254:  mov    -0x10(%ebp),%eax
0859f0bd +0x257:  shl    $0x2,%eax
0859f0c0 +0x25a:  add    0x18(%ebp),%eax
0859f0c3 +0x25d:  mov    (%eax),%esi
0859f0c5 +0x25f:  mov    -0x10(%ebp),%edx
0859f0c8 +0x262:  mov    0x8(%ebp),%ecx
0859f0cb +0x265:  mov    %edx,%eax
0859f0cd +0x267:  add    %eax,%eax
0859f0cf +0x269:  add    %edx,%eax
0859f0d1 +0x26b:  shl    $0x3,%eax
0859f0d4 +0x26e:  lea    (%ecx,%eax,1),%eax
0859f0d7 +0x271:  add    $0x78,%eax
0859f0da +0x274:  mov    (%eax),%eax
0859f0dc +0x276:  mov    %eax,(%esp)
0859f0df +0x279:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859f0e4 +0x27e:  lea    -0x58(%ebp),%edx
0859f0e7 +0x281:  mov    %esi,0xc(%esp)
0859f0eb +0x285:  movl   $0x1,0x8(%esp)
0859f0f3 +0x28d:  mov    %eax,0x4(%esp)
0859f0f7 +0x291:  mov    %edx,(%esp)
0859f0fa +0x294:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0859f0ff +0x299:  sub    $0x4,%esp
0859f102 +0x29c:  mov    -0x58(%ebp),%eax
0859f105 +0x29f:  mov    %eax,(%ebx)
0859f107 +0x2a1:  mov    -0x54(%ebp),%eax
0859f10a +0x2a4:  mov    %eax,0x4(%ebx)
0859f10d +0x2a7:  mov    -0x50(%ebp),%eax
0859f110 +0x2aa:  mov    %eax,0x8(%ebx)
0859f113 +0x2ad:  mov    -0x4c(%ebp),%eax
0859f116 +0x2b0:  mov    %eax,0xc(%ebx)
0859f119 +0x2b3:  mov    -0x48(%ebp),%eax
0859f11c +0x2b6:  mov    %eax,0x10(%ebx)
0859f11f +0x2b9:  mov    -0x44(%ebp),%eax
0859f122 +0x2bc:  mov    %eax,0x14(%ebx)
0859f125 +0x2bf:  mov    -0x40(%ebp),%eax
0859f128 +0x2c2:  mov    %eax,0x18(%ebx)
0859f12b +0x2c5:  mov    -0x3c(%ebp),%eax
0859f12e +0x2c8:  mov    %eax,0x1c(%ebx)
0859f131 +0x2cb:  mov    -0x38(%ebp),%eax
0859f134 +0x2ce:  mov    %eax,0x20(%ebx)
0859f137 +0x2d1:  mov    -0x34(%ebp),%eax
0859f13a +0x2d4:  mov    %eax,0x24(%ebx)
0859f13d +0x2d7:  mov    -0x30(%ebp),%eax
0859f140 +0x2da:  mov    %eax,0x28(%ebx)
0859f143 +0x2dd:  mov    -0x2c(%ebp),%eax
0859f146 +0x2e0:  mov    %eax,0x2c(%ebx)
0859f149 +0x2e3:  mov    -0x28(%ebp),%eax
0859f14c +0x2e6:  mov    %eax,0x30(%ebx)
0859f14f +0x2e9:  mov    -0x24(%ebp),%eax
0859f152 +0x2ec:  mov    %eax,0x34(%ebx)
0859f155 +0x2ef:  mov    -0x20(%ebp),%eax
0859f158 +0x2f2:  mov    %eax,0x38(%ebx)
0859f15b +0x2f5:  movzbl -0x1c(%ebp),%eax
0859f15f +0x2f9:  mov    %al,0x3c(%ebx)
0859f162 +0x2fc:  mov    -0x10(%ebp),%eax
0859f165 +0x2ff:  imul   $0x3d,%eax,%eax
0859f168 +0x302:  add    0x14(%ebp),%eax
0859f16b +0x305:  mov    0x7(%eax),%edx
0859f16e +0x308:  mov    0xc(%ebp),%eax
0859f171 +0x30b:  mov    0x7f8(%eax),%eax
0859f177 +0x311:  cmp    %eax,%edx
0859f179 +0x313:  jge    0859f199 <+0x333>
0859f17b +0x315:  mov    -0x10(%ebp),%eax
0859f17e +0x318:  mov    %eax,%edx
0859f180 +0x31a:  mov    0x10(%ebp),%eax
0859f183 +0x31d:  mov    %dl,(%eax)
0859f185 +0x31f:  movb   $0x0,-0x9(%ebp)
0859f189 +0x323:  jmp    0859f199 <+0x333>
0859f18b +0x325:  mov    -0x10(%ebp),%eax
0859f18e +0x328:  mov    %eax,%edx
0859f190 +0x32a:  mov    0x10(%ebp),%eax
0859f193 +0x32d:  mov    %dl,(%eax)
0859f195 +0x32f:  movb   $0x0,-0x9(%ebp)
0859f199 +0x333:  movzbl -0x9(%ebp),%eax
0859f19d +0x337:  xor    $0x1,%eax
0859f1a0 +0x33a:  test   %al,%al
0859f1a2 +0x33c:  je     0859f1ac <+0x346>
0859f1a4 +0x33e:  mov    $0x0,%eax
0859f1a9 +0x343:  jmp    0859f1c4 <+0x35e>
0859f1ab +0x345:  nop
0859f1ac +0x346:  addl   $0x1,-0x10(%ebp)
0859f1b0 +0x34a:  cmpl   $0x3,-0x10(%ebp)
0859f1b4 +0x34e:  setle  %al
0859f1b7 +0x351:  test   %al,%al
0859f1b9 +0x353:  jne    0859eeef <+0x89>
0859f1bf +0x359:  mov    $0x1,%eax
0859f1c4 +0x35e:  lea    -0x8(%ebp),%esp
0859f1c7 +0x361:  add    $0x0,%esp
0859f1ca +0x364:  pop    %ebx
0859f1cb +0x365:  pop    %esi
0859f1cc +0x366:  pop    %ebp
0859f1cd +0x367:  ret
```

## 反编译 C

```c
// CParty::CheckEnterEventDungeon @ 0x859ee66

/* CParty::CheckEnterEventDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*) */

undefined4 __thiscall
CParty::CheckEnterEventDungeon
          (CParty *this,CDungeon *param_1,uchar *param_2,Inven_Item *param_3,int *param_4)

{
  char cVar1;
  CInventory *pCVar2;
  int iVar3;
  int *piVar4;
  Inven_Item *pIVar5;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  int local_14;
  char local_d;
  
  if (((*(int *)(param_1 + 0x860) != -1) || (*(int *)(param_1 + 0x7f4) != -1)) &&
     ((*(int *)(param_1 + 0x860) == -1 ||
      (((param_1[0x868] == (CDungeon)0x1 || (*(int *)(param_1 + 0x7f4) == -1)) ||
       (param_1[0x7fc] == (CDungeon)0x1)))))) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      cVar1 = _checkValidUser(this,local_14);
      if (cVar1 == '\x01') {
        local_d = '\x01';
        piVar4 = param_4 + local_14;
        iVar3 = *(int *)(param_1 + 0x860);
        pCVar2 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR
                           (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
        iVar3 = CInventory::check_item_exist(pCVar2,iVar3);
        *piVar4 = iVar3;
        if (*piVar4 == -1) {
          *param_2 = (uchar)local_14;
          local_d = '\0';
        }
        else {
          pIVar5 = param_3 + local_14 * 0x3d;
          iVar3 = CUserCharacInfo::getCurCharacInvenR
                            (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
          CInventory::GetInvenSlot((int)&local_5c,iVar3);
          *(undefined4 *)pIVar5 = local_5c;
          *(undefined4 *)(pIVar5 + 4) = local_58;
          *(undefined4 *)(pIVar5 + 8) = local_54;
          *(undefined4 *)(pIVar5 + 0xc) = local_50;
          *(undefined4 *)(pIVar5 + 0x10) = local_4c;
          *(undefined4 *)(pIVar5 + 0x14) = local_48;
          *(undefined4 *)(pIVar5 + 0x18) = local_44;
          *(undefined4 *)(pIVar5 + 0x1c) = local_40;
          *(undefined4 *)(pIVar5 + 0x20) = local_3c;
          *(undefined4 *)(pIVar5 + 0x24) = local_38;
          *(undefined4 *)(pIVar5 + 0x28) = local_34;
          *(undefined4 *)(pIVar5 + 0x2c) = local_30;
          *(undefined4 *)(pIVar5 + 0x30) = local_2c;
          *(undefined4 *)(pIVar5 + 0x34) = local_28;
          *(undefined4 *)(pIVar5 + 0x38) = local_24;
          pIVar5[0x3c] = local_20;
          if (*(int *)(param_3 + local_14 * 0x3d + 7) < *(int *)(param_1 + 0x864)) {
            *param_2 = (uchar)local_14;
            local_d = '\0';
          }
        }
        if (local_d != '\x01') {
          local_d = '\x01';
          piVar4 = param_4 + local_14;
          iVar3 = *(int *)(param_1 + 0x7f4);
          pCVar2 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR
                             (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
          iVar3 = CInventory::check_item_exist(pCVar2,iVar3);
          *piVar4 = iVar3;
          if (*piVar4 == -1) {
            *param_2 = (uchar)local_14;
            local_d = '\0';
          }
          else {
            pIVar5 = param_3 + local_14 * 0x3d;
            iVar3 = CUserCharacInfo::getCurCharacInvenR
                              (*(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78));
            CInventory::GetInvenSlot((int)&local_5c,iVar3);
            *(undefined4 *)pIVar5 = local_5c;
            *(undefined4 *)(pIVar5 + 4) = local_58;
            *(undefined4 *)(pIVar5 + 8) = local_54;
            *(undefined4 *)(pIVar5 + 0xc) = local_50;
            *(undefined4 *)(pIVar5 + 0x10) = local_4c;
            *(undefined4 *)(pIVar5 + 0x14) = local_48;
            *(undefined4 *)(pIVar5 + 0x18) = local_44;
            *(undefined4 *)(pIVar5 + 0x1c) = local_40;
            *(undefined4 *)(pIVar5 + 0x20) = local_3c;
            *(undefined4 *)(pIVar5 + 0x24) = local_38;
            *(undefined4 *)(pIVar5 + 0x28) = local_34;
            *(undefined4 *)(pIVar5 + 0x2c) = local_30;
            *(undefined4 *)(pIVar5 + 0x30) = local_2c;
            *(undefined4 *)(pIVar5 + 0x34) = local_28;
            *(undefined4 *)(pIVar5 + 0x38) = local_24;
            pIVar5[0x3c] = local_20;
            if (*(int *)(param_3 + local_14 * 0x3d + 7) < *(int *)(param_1 + 0x7f8)) {
              *param_2 = (uchar)local_14;
              local_d = '\0';
            }
          }
        }
        if (local_d != '\x01') {
          return 0;
        }
      }
    }
  }
  return 1;
}
```
