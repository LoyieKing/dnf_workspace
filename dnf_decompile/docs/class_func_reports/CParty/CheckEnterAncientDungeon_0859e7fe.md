# CheckEnterAncientDungeon

`_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeon`

`CParty::CheckEnterAncientDungeon(CDungeon const*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859e7fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859e7fe  _ZN6CParty24CheckEnterAncientDungeonEPK8CDungeon
#           CParty::CheckEnterAncientDungeon(CDungeon const*)
# range [0x0859e7fe, 0x0859eac1]
0859e7fe +0x000:  push   %ebp
0859e7ff +0x001:  mov    %esp,%ebp
0859e801 +0x003:  push   %esi
0859e802 +0x004:  push   %ebx
0859e803 +0x005:  sub    $0x170,%esp
0859e809 +0x00b:  lea    -0x111(%ebp),%eax
0859e80f +0x011:  mov    %eax,%ebx
0859e811 +0x013:  mov    $0x3,%esi
0859e816 +0x018:  jmp    0859e826 <+0x28>
0859e818 +0x01a:  mov    %ebx,(%esp)
0859e81b +0x01d:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0859e820 +0x022:  add    $0x3d,%ebx
0859e823 +0x025:  sub    $0x1,%esi
0859e826 +0x028:  cmp    $0xffffffff,%esi
0859e829 +0x02b:  setne  %al
0859e82c +0x02e:  test   %al,%al
0859e82e +0x030:  jne    0859e818 <+0x1a>
0859e830 +0x032:  movl   $0xf4,0x8(%esp)
0859e838 +0x03a:  movl   $0x0,0x4(%esp)
0859e840 +0x042:  lea    -0x111(%ebp),%eax
0859e846 +0x048:  mov    %eax,(%esp)
0859e849 +0x04b:  call   0807dcc0 <_init+0x5b8>
0859e84e +0x050:  movl   $0x10,0x8(%esp)
0859e856 +0x058:  movl   $0x0,0x4(%esp)
0859e85e +0x060:  lea    -0x1c(%ebp),%eax
0859e861 +0x063:  mov    %eax,(%esp)
0859e864 +0x066:  call   0807dcc0 <_init+0x5b8>
0859e869 +0x06b:  mov    0xc(%ebp),%eax
0859e86c +0x06e:  movzbl 0x85c(%eax),%eax
0859e873 +0x075:  test   %al,%al
0859e875 +0x077:  je     0859e8c0 <+0xc2>
0859e877 +0x079:  movb   $0x0,-0x1d(%ebp)
0859e87b +0x07d:  lea    -0x1c(%ebp),%eax
0859e87e +0x080:  mov    %eax,0x10(%esp)
0859e882 +0x084:  lea    -0x111(%ebp),%eax
0859e888 +0x08a:  mov    %eax,0xc(%esp)
0859e88c +0x08e:  lea    -0x1d(%ebp),%eax
0859e88f +0x091:  mov    %eax,0x8(%esp)
0859e893 +0x095:  mov    0xc(%ebp),%eax
0859e896 +0x098:  mov    %eax,0x4(%esp)
0859e89a +0x09c:  mov    0x8(%ebp),%eax
0859e89d +0x09f:  mov    %eax,(%esp)
0859e8a0 +0x0a2:  call   0859ee66 <_ZN6CParty22CheckEnterEventDungeonEPK8CDungeonRhP10Inven_ItemPi>  ; CParty::CheckEnterEventDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
0859e8a5 +0x0a7:  xor    $0x1,%eax
0859e8a8 +0x0aa:  test   %al,%al
0859e8aa +0x0ac:  je     0859e8b6 <+0xb8>
0859e8ac +0x0ae:  mov    $0x0,%eax
0859e8b1 +0x0b3:  jmp    0859eab8 <+0x2ba>
0859e8b6 +0x0b8:  mov    $0x1,%eax
0859e8bb +0x0bd:  jmp    0859eab8 <+0x2ba>
0859e8c0 +0x0c2:  mov    0xc(%ebp),%eax
0859e8c3 +0x0c5:  mov    0x7f4(%eax),%eax
0859e8c9 +0x0cb:  cmp    $0xffffffff,%eax
0859e8cc +0x0ce:  jne    0859e8d8 <+0xda>
0859e8ce +0x0d0:  mov    $0x1,%eax
0859e8d3 +0x0d5:  jmp    0859eab8 <+0x2ba>
0859e8d8 +0x0da:  mov    0xc(%ebp),%eax
0859e8db +0x0dd:  movzbl 0x7fc(%eax),%eax
0859e8e2 +0x0e4:  xor    $0x1,%eax
0859e8e5 +0x0e7:  test   %al,%al
0859e8e7 +0x0e9:  je     0859e8f3 <+0xf5>
0859e8e9 +0x0eb:  mov    $0x1,%eax
0859e8ee +0x0f0:  jmp    0859eab8 <+0x2ba>
0859e8f3 +0x0f5:  mov    0x8(%ebp),%eax
0859e8f6 +0x0f8:  mov    0xcd8(%eax),%eax
0859e8fc +0x0fe:  cmp    $0x1,%eax
0859e8ff +0x101:  jne    0859e90b <+0x10d>
0859e901 +0x103:  mov    $0x1,%eax
0859e906 +0x108:  jmp    0859eab8 <+0x2ba>
0859e90b +0x10d:  movl   $0x0,-0xc(%ebp)
0859e912 +0x114:  movl   $0x0,-0xc(%ebp)
0859e919 +0x11b:  jmp    0859eaa4 <+0x2a6>
0859e91e +0x120:  mov    -0xc(%ebp),%eax
0859e921 +0x123:  mov    %eax,0x4(%esp)
0859e925 +0x127:  mov    0x8(%ebp),%eax
0859e928 +0x12a:  mov    %eax,(%esp)
0859e92b +0x12d:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859e930 +0x132:  xor    $0x1,%eax
0859e933 +0x135:  test   %al,%al
0859e935 +0x137:  jne    0859ea9f <+0x2a1>
0859e93b +0x13d:  mov    -0xc(%ebp),%ebx
0859e93e +0x140:  mov    0xc(%ebp),%eax
0859e941 +0x143:  mov    0x7f4(%eax),%esi
0859e947 +0x149:  mov    -0xc(%ebp),%edx
0859e94a +0x14c:  mov    0x8(%ebp),%ecx
0859e94d +0x14f:  mov    %edx,%eax
0859e94f +0x151:  add    %eax,%eax
0859e951 +0x153:  add    %edx,%eax
0859e953 +0x155:  shl    $0x3,%eax
0859e956 +0x158:  lea    (%ecx,%eax,1),%eax
0859e959 +0x15b:  add    $0x78,%eax
0859e95c +0x15e:  mov    (%eax),%eax
0859e95e +0x160:  mov    %eax,(%esp)
0859e961 +0x163:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859e966 +0x168:  mov    %esi,0x4(%esp)
0859e96a +0x16c:  mov    %eax,(%esp)
0859e96d +0x16f:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0859e972 +0x174:  mov    %eax,-0x1c(%ebp,%ebx,4)
0859e976 +0x178:  mov    -0x1c(%ebp,%ebx,4),%eax
0859e97a +0x17c:  cmp    $0xffffffff,%eax
0859e97d +0x17f:  sete   %al
0859e980 +0x182:  test   %al,%al
0859e982 +0x184:  je     0859e98e <+0x190>
0859e984 +0x186:  mov    $0x0,%eax
0859e989 +0x18b:  jmp    0859eab8 <+0x2ba>
0859e98e +0x190:  mov    -0xc(%ebp),%ebx
0859e991 +0x193:  mov    -0xc(%ebp),%eax
0859e994 +0x196:  mov    -0x1c(%ebp,%eax,4),%esi
0859e998 +0x19a:  mov    -0xc(%ebp),%edx
0859e99b +0x19d:  mov    0x8(%ebp),%ecx
0859e99e +0x1a0:  mov    %edx,%eax
0859e9a0 +0x1a2:  add    %eax,%eax
0859e9a2 +0x1a4:  add    %edx,%eax
0859e9a4 +0x1a6:  shl    $0x3,%eax
0859e9a7 +0x1a9:  lea    (%ecx,%eax,1),%eax
0859e9aa +0x1ac:  add    $0x78,%eax
0859e9ad +0x1af:  mov    (%eax),%eax
0859e9af +0x1b1:  mov    %eax,(%esp)
0859e9b2 +0x1b4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859e9b7 +0x1b9:  imul   $0x3d,%ebx,%edx
0859e9ba +0x1bc:  lea    -0x8(%ebp),%ecx
0859e9bd +0x1bf:  lea    (%ecx,%edx,1),%edx
0859e9c0 +0x1c2:  lea    -0x109(%edx),%ebx
0859e9c6 +0x1c8:  lea    -0x158(%ebp),%edx
0859e9cc +0x1ce:  mov    %esi,0xc(%esp)
0859e9d0 +0x1d2:  movl   $0x1,0x8(%esp)
0859e9d8 +0x1da:  mov    %eax,0x4(%esp)
0859e9dc +0x1de:  mov    %edx,(%esp)
0859e9df +0x1e1:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0859e9e4 +0x1e6:  sub    $0x4,%esp
0859e9e7 +0x1e9:  mov    -0x158(%ebp),%eax
0859e9ed +0x1ef:  mov    %eax,(%ebx)
0859e9ef +0x1f1:  mov    -0x154(%ebp),%eax
0859e9f5 +0x1f7:  mov    %eax,0x4(%ebx)
0859e9f8 +0x1fa:  mov    -0x150(%ebp),%eax
0859e9fe +0x200:  mov    %eax,0x8(%ebx)
0859ea01 +0x203:  mov    -0x14c(%ebp),%eax
0859ea07 +0x209:  mov    %eax,0xc(%ebx)
0859ea0a +0x20c:  mov    -0x148(%ebp),%eax
0859ea10 +0x212:  mov    %eax,0x10(%ebx)
0859ea13 +0x215:  mov    -0x144(%ebp),%eax
0859ea19 +0x21b:  mov    %eax,0x14(%ebx)
0859ea1c +0x21e:  mov    -0x140(%ebp),%eax
0859ea22 +0x224:  mov    %eax,0x18(%ebx)
0859ea25 +0x227:  mov    -0x13c(%ebp),%eax
0859ea2b +0x22d:  mov    %eax,0x1c(%ebx)
0859ea2e +0x230:  mov    -0x138(%ebp),%eax
0859ea34 +0x236:  mov    %eax,0x20(%ebx)
0859ea37 +0x239:  mov    -0x134(%ebp),%eax
0859ea3d +0x23f:  mov    %eax,0x24(%ebx)
0859ea40 +0x242:  mov    -0x130(%ebp),%eax
0859ea46 +0x248:  mov    %eax,0x28(%ebx)
0859ea49 +0x24b:  mov    -0x12c(%ebp),%eax
0859ea4f +0x251:  mov    %eax,0x2c(%ebx)
0859ea52 +0x254:  mov    -0x128(%ebp),%eax
0859ea58 +0x25a:  mov    %eax,0x30(%ebx)
0859ea5b +0x25d:  mov    -0x124(%ebp),%eax
0859ea61 +0x263:  mov    %eax,0x34(%ebx)
0859ea64 +0x266:  mov    -0x120(%ebp),%eax
0859ea6a +0x26c:  mov    %eax,0x38(%ebx)
0859ea6d +0x26f:  movzbl -0x11c(%ebp),%eax
0859ea74 +0x276:  mov    %al,0x3c(%ebx)
0859ea77 +0x279:  mov    -0xc(%ebp),%eax
0859ea7a +0x27c:  imul   $0x3d,%eax,%eax
0859ea7d +0x27f:  lea    -0x8(%ebp),%edx
0859ea80 +0x282:  lea    (%edx,%eax,1),%eax
0859ea83 +0x285:  sub    $0x109,%eax
0859ea88 +0x28a:  mov    0x7(%eax),%edx
0859ea8b +0x28d:  mov    0xc(%ebp),%eax
0859ea8e +0x290:  mov    0x7f8(%eax),%eax
0859ea94 +0x296:  cmp    %eax,%edx
0859ea96 +0x298:  jge    0859eaa0 <+0x2a2>
0859ea98 +0x29a:  mov    $0x0,%eax
0859ea9d +0x29f:  jmp    0859eab8 <+0x2ba>
0859ea9f +0x2a1:  nop
0859eaa0 +0x2a2:  addl   $0x1,-0xc(%ebp)
0859eaa4 +0x2a6:  cmpl   $0x3,-0xc(%ebp)
0859eaa8 +0x2aa:  setle  %al
0859eaab +0x2ad:  test   %al,%al
0859eaad +0x2af:  jne    0859e91e <+0x120>
0859eab3 +0x2b5:  mov    $0x1,%eax
0859eab8 +0x2ba:  lea    -0x8(%ebp),%esp
0859eabb +0x2bd:  add    $0x0,%esp
0859eabe +0x2c0:  pop    %ebx
0859eabf +0x2c1:  pop    %esi
0859eac0 +0x2c2:  pop    %ebp
0859eac1 +0x2c3:  ret
```

## 反编译 C

```c
// CParty::CheckEnterAncientDungeon @ 0x859e7fe

/* CParty::CheckEnterAncientDungeon(CDungeon const*) */

undefined4 __thiscall CParty::CheckEnterAncientDungeon(CParty *this,CDungeon *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CInventory *this_00;
  int iVar3;
  Inven_Item *this_01;
  int iVar4;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  Inven_Item local_115 [4];
  undefined1 auStack_111 [4];
  undefined4 auStack_10d [13];
  undefined1 auStack_d9 [184];
  uchar local_21;
  int local_20 [4];
  int local_10;
  
  this_01 = local_115;
  for (iVar4 = 3; iVar4 != -1; iVar4 = iVar4 + -1) {
    Inven_Item::Inven_Item(this_01);
    this_01 = this_01 + 0x3d;
  }
  memset(local_115,0,0xf4);
  memset(local_20,0,0x10);
  if (param_1[0x85c] == (CDungeon)0x0) {
    if (*(int *)(param_1 + 0x7f4) == -1) {
      uVar2 = 1;
    }
    else if (param_1[0x7fc] == (CDungeon)0x1) {
      if (*(int *)(this + 0xcd8) == 1) {
        uVar2 = 1;
      }
      else {
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          cVar1 = _checkValidUser(this,local_10);
          iVar4 = local_10;
          if (cVar1 == '\x01') {
            iVar3 = *(int *)(param_1 + 0x7f4);
            this_00 = (CInventory *)
                      CUserCharacInfo::getCurCharacInvenR
                                (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
            iVar3 = CInventory::check_item_exist(this_00,iVar3);
            local_20[iVar4] = iVar3;
            iVar3 = local_10;
            if (local_20[iVar4] == -1) {
              return 0;
            }
            iVar4 = CUserCharacInfo::getCurCharacInvenR
                              (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
            iVar3 = iVar3 * 0x3d;
            CInventory::GetInvenSlot((int)&local_15c,iVar4);
            *(undefined4 *)(local_115 + iVar3) = local_15c;
            *(undefined4 *)(auStack_111 + iVar3) = local_158;
            *(undefined4 *)(auStack_111 + iVar3 + 4) = local_154;
            *(undefined4 *)((int)auStack_10d + iVar3 + 4) = local_150;
            *(undefined4 *)((int)auStack_10d + iVar3 + 8) = local_14c;
            *(undefined4 *)((int)auStack_10d + iVar3 + 0xc) = local_148;
            *(undefined4 *)((int)auStack_10d + iVar3 + 0x10) = local_144;
            *(undefined4 *)((int)auStack_10d + iVar3 + 0x14) = local_140;
            *(undefined4 *)((int)auStack_10d + iVar3 + 0x18) = local_13c;
            *(undefined4 *)(auStack_d9 + iVar3 + -0x18) = local_138;
            *(undefined4 *)(auStack_d9 + iVar3 + -0x14) = local_134;
            *(undefined4 *)(auStack_d9 + iVar3 + -0x10) = local_130;
            *(undefined4 *)(auStack_d9 + iVar3 + -0xc) = local_12c;
            *(undefined4 *)(auStack_d9 + iVar3 + -8) = local_128;
            *(undefined4 *)(auStack_d9 + iVar3 + -4) = local_124;
            auStack_d9[iVar3] = local_120;
            if (*(int *)(auStack_111 + local_10 * 0x3d + 3) < *(int *)(param_1 + 0x7f8)) {
              return 0;
            }
          }
        }
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    local_21 = '\0';
    cVar1 = CheckEnterEventDungeon(this,param_1,&local_21,local_115,local_20);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
