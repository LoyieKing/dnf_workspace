# generateRewardItem

`_ZN8WongWork10CBossTower18generateRewardItemEv`

`WongWork::CBossTower::generateRewardItem()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08144e36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08144e36  _ZN8WongWork10CBossTower18generateRewardItemEv
#           WongWork::CBossTower::generateRewardItem()
# range [0x08144e36, 0x08144fc9]
08144e36 +0x000:  push   %ebp
08144e37 +0x001:  mov    %esp,%ebp
08144e39 +0x003:  push   %edi
08144e3a +0x004:  push   %esi
08144e3b +0x005:  push   %ebx
08144e3c +0x006:  sub    $0x5c,%esp
08144e3f +0x009:  movl   $0x0,-0x28(%ebp)
08144e46 +0x010:  jmp    08144fad <+0x177>
08144e4b +0x015:  mov    0x8(%ebp),%eax
08144e4e +0x018:  mov    0x4(%eax),%eax
08144e51 +0x01b:  mov    -0x28(%ebp),%edx
08144e54 +0x01e:  mov    %edx,0x4(%esp)
08144e58 +0x022:  mov    %eax,(%esp)
08144e5b +0x025:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08144e60 +0x02a:  mov    %eax,-0x24(%ebp)
08144e63 +0x02d:  cmpl   $0x0,-0x24(%ebp)
08144e67 +0x031:  je     08144e85 <+0x4f>
08144e69 +0x033:  mov    0x8(%ebp),%eax
08144e6c +0x036:  mov    0x4(%eax),%eax
08144e6f +0x039:  mov    -0x28(%ebp),%edx
08144e72 +0x03c:  mov    %edx,0x4(%esp)
08144e76 +0x040:  mov    %eax,(%esp)
08144e79 +0x043:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08144e7e +0x048:  xor    $0x1,%eax
08144e81 +0x04b:  test   %al,%al
08144e83 +0x04d:  je     08144e8c <+0x56>
08144e85 +0x04f:  mov    $0x1,%eax
08144e8a +0x054:  jmp    08144e91 <+0x5b>
08144e8c +0x056:  mov    $0x0,%eax
08144e91 +0x05b:  test   %al,%al
08144e93 +0x05d:  jne    08144fa8 <+0x172>
08144e99 +0x063:  movl   $0x0,-0x40(%ebp)
08144ea0 +0x06a:  mov    0x8(%ebp),%eax
08144ea3 +0x06d:  mov    0x9f0(%eax),%eax
08144ea9 +0x073:  mov    %eax,(%esp)
08144eac +0x076:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
08144eb1 +0x07b:  mov    %eax,%ebx
08144eb3 +0x07d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08144eb8 +0x082:  mov    %ebx,0x4(%esp)
08144ebc +0x086:  mov    %eax,(%esp)
08144ebf +0x089:  call   081455d8 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x5b>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x5b
08144ec4 +0x08e:  mov    %eax,-0x20(%ebp)
08144ec7 +0x091:  mov    0x8(%ebp),%eax
08144eca +0x094:  mov    0xae0(%eax),%edx
08144ed0 +0x09a:  mov    -0x20(%ebp),%eax
08144ed3 +0x09d:  add    $0xc8,%edx
08144ed9 +0x0a3:  mov    0x4(%eax,%edx,4),%eax
08144edd +0x0a7:  mov    %eax,-0x3c(%ebp)
08144ee0 +0x0aa:  mov    0x8(%ebp),%eax
08144ee3 +0x0ad:  mov    0x9f0(%eax),%eax
08144ee9 +0x0b3:  mov    %eax,(%esp)
08144eec +0x0b6:  call   081455ca <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x4d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x4d
08144ef1 +0x0bb:  mov    %eax,-0x38(%ebp)
08144ef4 +0x0be:  lea    -0x3c(%ebp),%eax
08144ef7 +0x0c1:  mov    %eax,0x4(%esp)
08144efb +0x0c5:  lea    -0x38(%ebp),%eax
08144efe +0x0c8:  mov    %eax,(%esp)
08144f01 +0x0cb:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08144f06 +0x0d0:  mov    (%eax),%eax
08144f08 +0x0d2:  mov    %eax,-0x40(%ebp)
08144f0b +0x0d5:  movl   $0xa,-0x34(%ebp)
08144f12 +0x0dc:  lea    -0x40(%ebp),%eax
08144f15 +0x0df:  mov    %eax,0x4(%esp)
08144f19 +0x0e3:  lea    -0x34(%ebp),%eax
08144f1c +0x0e6:  mov    %eax,(%esp)
08144f1f +0x0e9:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08144f24 +0x0ee:  mov    (%eax),%eax
08144f26 +0x0f0:  mov    %eax,-0x40(%ebp)
08144f29 +0x0f3:  mov    0x8(%ebp),%eax
08144f2c +0x0f6:  mov    0x9f0(%eax),%edi
08144f32 +0x0fc:  mov    0x8(%ebp),%eax
08144f35 +0x0ff:  mov    0xae0(%eax),%eax
08144f3b +0x105:  mov    %eax,-0x30(%ebp)
08144f3e +0x108:  movl   $0xa,-0x2c(%ebp)
08144f45 +0x10f:  lea    -0x30(%ebp),%eax
08144f48 +0x112:  mov    %eax,0x4(%esp)
08144f4c +0x116:  lea    -0x2c(%ebp),%eax
08144f4f +0x119:  mov    %eax,(%esp)
08144f52 +0x11c:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
08144f57 +0x121:  mov    (%eax),%eax
08144f59 +0x123:  mov    %eax,%esi
08144f5b +0x125:  mov    0x8(%ebp),%eax
08144f5e +0x128:  mov    0xae8(%eax),%ebx
08144f64 +0x12e:  mov    -0x24(%ebp),%eax
08144f67 +0x131:  mov    %eax,(%esp)
08144f6a +0x134:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08144f6f +0x139:  mov    %eax,%ecx
08144f71 +0x13b:  mov    -0x40(%ebp),%edx
08144f74 +0x13e:  mov    0x8(%ebp),%eax
08144f77 +0x141:  mov    %edi,0x18(%esp)
08144f7b +0x145:  mov    %esi,0x14(%esp)
08144f7f +0x149:  mov    %ebx,0x10(%esp)
08144f83 +0x14d:  mov    %ecx,0xc(%esp)
08144f87 +0x151:  mov    %edx,0x8(%esp)
08144f8b +0x155:  mov    -0x28(%ebp),%edx
08144f8e +0x158:  mov    %edx,0x4(%esp)
08144f92 +0x15c:  mov    %eax,(%esp)
08144f95 +0x15f:  call   08149914 <_ZN8WongWork9CBossPlay18generateRewardItemEiij23ENUM_DUNGEON_DIFFICULTYjPK8CDungeon>  ; WongWork::CBossPlay::generateRewardItem(int, int, unsigned int, ENUM_DUNGEON_DIFFICULTY, unsigned int, CDungeon const*)
08144f9a +0x164:  mov    %al,-0x19(%ebp)
08144f9d +0x167:  movzbl -0x19(%ebp),%eax
08144fa1 +0x16b:  xor    $0x1,%eax
08144fa4 +0x16e:  test   %al,%al
08144fa6 +0x170:  jmp    08144fa9 <+0x173>
08144fa8 +0x172:  nop
08144fa9 +0x173:  addl   $0x1,-0x28(%ebp)
08144fad +0x177:  cmpl   $0x3,-0x28(%ebp)
08144fb1 +0x17b:  setle  %al
08144fb4 +0x17e:  test   %al,%al
08144fb6 +0x180:  jne    08144e4b <+0x15>
08144fbc +0x186:  mov    $0x1,%eax
08144fc1 +0x18b:  add    $0x5c,%esp
08144fc4 +0x18e:  pop    %ebx
08144fc5 +0x18f:  pop    %esi
08144fc6 +0x190:  pop    %edi
08144fc7 +0x191:  pop    %ebp
08144fc8 +0x192:  ret
08144fc9 +0x193:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::generateRewardItem @ 0x8144e36

/* WongWork::CBossTower::generateRewardItem() */

undefined4 __thiscall WongWork::CBossTower::generateRewardItem(CBossTower *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  CDataManager *this_00;
  int *piVar7;
  undefined4 uVar8;
  int local_44;
  int local_40;
  int local_3c [3];
  int local_30;
  int local_2c;
  CUserCharacInfo *local_28;
  int local_24;
  undefined1 local_1d;
  
  local_2c = 0;
  do {
    if (3 < local_2c) {
      return 1;
    }
    local_28 = (CUserCharacInfo *)CParty::get_user(*(CParty **)(this + 4),local_2c);
    if (local_28 == (CUserCharacInfo *)0x0) {
LAB_08144e85:
      bVar4 = true;
    }
    else {
      cVar5 = CParty::checkValidUser(*(CParty **)(this + 4),local_2c);
      if (cVar5 != '\x01') goto LAB_08144e85;
      bVar4 = false;
    }
    if (!bVar4) {
      local_44 = 0;
      uVar6 = CDungeon::get_index(*(CDungeon **)(this + 0x9f0));
      this_00 = (CDataManager *)G_CDataManager();
      local_24 = CDataManager::GetTowerScript(this_00,uVar6);
      local_40 = *(int *)(local_24 + 4 + (*(int *)(this + 0xae0) + 200) * 4);
      local_3c[0] = CDungeon::getTowerMaxClearRewardItemNum(*(CDungeon **)(this + 0x9f0));
      piVar7 = std::min<int>(local_3c,&local_40);
      local_44 = *piVar7;
      local_3c[1] = 10;
      piVar7 = std::min<int>(local_3c + 1,&local_44);
      local_44 = *piVar7;
      uVar1 = *(undefined4 *)(this + 0x9f0);
      local_3c[2] = *(int *)(this + 0xae0);
      local_30 = 10;
      piVar7 = std::min<int>(&local_30,local_3c + 2);
      iVar2 = *piVar7;
      uVar3 = *(undefined4 *)(this + 0xae8);
      uVar8 = CUserCharacInfo::get_charac_level(local_28);
      local_1d = CBossPlay::generateRewardItem
                           ((CBossPlay *)this,local_2c,local_44,uVar8,uVar3,iVar2,uVar1);
    }
    local_2c = local_2c + 1;
  } while( true );
}
```
