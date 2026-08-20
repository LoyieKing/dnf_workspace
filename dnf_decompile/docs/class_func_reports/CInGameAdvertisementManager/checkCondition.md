# checkCondition

`_ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo`

`CInGameAdvertisementManager::checkCondition(CUser*, CAdvertisementExposeInfo*)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fcd2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fcd2e  _ZN27CInGameAdvertisementManager14checkConditionEP5CUserP24CAdvertisementExposeInfo
#           CInGameAdvertisementManager::checkCondition(CUser*, CAdvertisementExposeInfo*)
# range [0x080fcd2e, 0x080fcfa7]
080fcd2e +0x000:  push   %ebp
080fcd2f +0x001:  mov    %esp,%ebp
080fcd31 +0x003:  push   %ebx
080fcd32 +0x004:  sub    $0x24,%esp
080fcd35 +0x007:  cmpl   $0x0,0x10(%ebp)
080fcd39 +0x00b:  jne    080fcd45 <+0x17>
080fcd3b +0x00d:  mov    $0x0,%eax
080fcd40 +0x012:  jmp    080fcfa2 <+0x274>
080fcd45 +0x017:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080fcd4a +0x01c:  add    $0x4a5c,%eax
080fcd4f +0x021:  mov    %eax,-0xc(%ebp)
080fcd52 +0x024:  mov    0x10(%ebp),%eax
080fcd55 +0x027:  mov    %eax,(%esp)
080fcd58 +0x02a:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcd5d +0x02f:  movzbl 0x1(%eax),%eax
080fcd61 +0x033:  cmp    $0xff,%al
080fcd63 +0x035:  setne  %al
080fcd66 +0x038:  test   %al,%al
080fcd68 +0x03a:  je     080fcdcc <+0x9e>
080fcd6a +0x03c:  mov    0x10(%ebp),%eax
080fcd6d +0x03f:  mov    %eax,(%esp)
080fcd70 +0x042:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcd75 +0x047:  movzbl 0x1(%eax),%eax
080fcd79 +0x04b:  test   %al,%al
080fcd7b +0x04d:  sete   %al
080fcd7e +0x050:  test   %al,%al
080fcd80 +0x052:  je     080fcda7 <+0x79>
080fcd82 +0x054:  mov    0xc(%ebp),%eax
080fcd85 +0x057:  mov    %eax,(%esp)
080fcd88 +0x05a:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
080fcd8d +0x05f:  mov    -0xc(%ebp),%edx
080fcd90 +0x062:  movzbl (%edx,%eax,1),%eax
080fcd94 +0x066:  cmp    $0x1,%al
080fcd96 +0x068:  sete   %al
080fcd99 +0x06b:  test   %al,%al
080fcd9b +0x06d:  je     080fcdcc <+0x9e>
080fcd9d +0x06f:  mov    $0x0,%eax
080fcda2 +0x074:  jmp    080fcfa2 <+0x274>
080fcda7 +0x079:  mov    0xc(%ebp),%eax
080fcdaa +0x07c:  mov    %eax,(%esp)
080fcdad +0x07f:  call   080fdf88 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2b4>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2b4
080fcdb2 +0x084:  mov    -0xc(%ebp),%edx
080fcdb5 +0x087:  movzbl (%edx,%eax,1),%eax
080fcdb9 +0x08b:  test   %al,%al
080fcdbb +0x08d:  sete   %al
080fcdbe +0x090:  test   %al,%al
080fcdc0 +0x092:  je     080fcdcc <+0x9e>
080fcdc2 +0x094:  mov    $0x0,%eax
080fcdc7 +0x099:  jmp    080fcfa2 <+0x274>
080fcdcc +0x09e:  mov    0x10(%ebp),%eax
080fcdcf +0x0a1:  mov    %eax,(%esp)
080fcdd2 +0x0a4:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcdd7 +0x0a9:  movzbl (%eax),%eax
080fcdda +0x0ac:  cmp    $0xff,%al
080fcddc +0x0ae:  setne  %al
080fcddf +0x0b1:  test   %al,%al
080fcde1 +0x0b3:  je     080fce37 <+0x109>
080fcde3 +0x0b5:  mov    0x10(%ebp),%eax
080fcde6 +0x0b8:  mov    %eax,(%esp)
080fcde9 +0x0bb:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcdee +0x0c0:  movzbl (%eax),%eax
080fcdf1 +0x0c3:  cmp    $0x1,%al
080fcdf3 +0x0c5:  sete   %al
080fcdf6 +0x0c8:  test   %al,%al
080fcdf8 +0x0ca:  je     080fce18 <+0xea>
080fcdfa +0x0cc:  mov    0xc(%ebp),%eax
080fcdfd +0x0cf:  mov    %eax,(%esp)
080fce00 +0x0d2:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
080fce05 +0x0d7:  test   %eax,%eax
080fce07 +0x0d9:  sete   %al
080fce0a +0x0dc:  test   %al,%al
080fce0c +0x0de:  je     080fce37 <+0x109>
080fce0e +0x0e0:  mov    $0x0,%eax
080fce13 +0x0e5:  jmp    080fcfa2 <+0x274>
080fce18 +0x0ea:  mov    0xc(%ebp),%eax
080fce1b +0x0ed:  mov    %eax,(%esp)
080fce1e +0x0f0:  call   0867ec12 <_ZN5CUser6getSexEv>  ; CUser::getSex()
080fce23 +0x0f5:  cmp    $0x1,%eax
080fce26 +0x0f8:  sete   %al
080fce29 +0x0fb:  test   %al,%al
080fce2b +0x0fd:  je     080fce37 <+0x109>
080fce2d +0x0ff:  mov    $0x0,%eax
080fce32 +0x104:  jmp    080fcfa2 <+0x274>
080fce37 +0x109:  mov    0x10(%ebp),%eax
080fce3a +0x10c:  mov    %eax,(%esp)
080fce3d +0x10f:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fce42 +0x114:  add    $0x3,%eax
080fce45 +0x117:  mov    %eax,0x8(%esp)
080fce49 +0x11b:  mov    0xc(%ebp),%eax
080fce4c +0x11e:  mov    %eax,0x4(%esp)
080fce50 +0x122:  mov    0x8(%ebp),%eax
080fce53 +0x125:  mov    %eax,(%esp)
080fce56 +0x128:  call   080fca9e <_ZN27CInGameAdvertisementManager10checkLevelEP5CUserPc>  ; CInGameAdvertisementManager::checkLevel(CUser*, char*)
080fce5b +0x12d:  xor    $0x1,%eax
080fce5e +0x130:  test   %al,%al
080fce60 +0x132:  je     080fce6c <+0x13e>
080fce62 +0x134:  mov    $0x0,%eax
080fce67 +0x139:  jmp    080fcfa2 <+0x274>
080fce6c +0x13e:  mov    0x10(%ebp),%eax
080fce6f +0x141:  mov    %eax,(%esp)
080fce72 +0x144:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fce77 +0x149:  mov    0x208(%eax),%ebx
080fce7d +0x14f:  mov    0xc(%ebp),%eax
080fce80 +0x152:  mov    %eax,(%esp)
080fce83 +0x155:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
080fce88 +0x15a:  cmp    %eax,%ebx
080fce8a +0x15c:  ja     080fceae <+0x180>
080fce8c +0x15e:  mov    0xc(%ebp),%eax
080fce8f +0x161:  mov    %eax,(%esp)
080fce92 +0x164:  call   080fdf7a <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x2a6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x2a6
080fce97 +0x169:  mov    %eax,%ebx
080fce99 +0x16b:  mov    0x10(%ebp),%eax
080fce9c +0x16e:  mov    %eax,(%esp)
080fce9f +0x171:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcea4 +0x176:  mov    0x20c(%eax),%eax
080fceaa +0x17c:  cmp    %eax,%ebx
080fceac +0x17e:  jb     080fceb5 <+0x187>
080fceae +0x180:  mov    $0x1,%eax
080fceb3 +0x185:  jmp    080fceba <+0x18c>
080fceb5 +0x187:  mov    $0x0,%eax
080fceba +0x18c:  test   %al,%al
080fcebc +0x18e:  je     080fcec8 <+0x19a>
080fcebe +0x190:  mov    $0x0,%eax
080fcec3 +0x195:  jmp    080fcfa2 <+0x274>
080fcec8 +0x19a:  mov    0x10(%ebp),%eax
080fcecb +0x19d:  mov    %eax,(%esp)
080fcece +0x1a0:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fced3 +0x1a5:  movzbl 0x2(%eax),%eax
080fced7 +0x1a9:  cmp    $0xff,%al
080fced9 +0x1ab:  setne  %al
080fcedc +0x1ae:  test   %al,%al
080fcede +0x1b0:  je     080fcf12 <+0x1e4>
080fcee0 +0x1b2:  mov    0xc(%ebp),%eax
080fcee3 +0x1b5:  mov    %eax,(%esp)
080fcee6 +0x1b8:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
080fceeb +0x1bd:  mov    %eax,%ebx
080fceed +0x1bf:  mov    0x10(%ebp),%eax
080fcef0 +0x1c2:  mov    %eax,(%esp)
080fcef3 +0x1c5:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcef8 +0x1ca:  movzbl 0x2(%eax),%eax
080fcefc +0x1ce:  movsbl %al,%eax
080fceff +0x1d1:  cmp    %eax,%ebx
080fcf01 +0x1d3:  setne  %al
080fcf04 +0x1d6:  test   %al,%al
080fcf06 +0x1d8:  je     080fcf12 <+0x1e4>
080fcf08 +0x1da:  mov    $0x0,%eax
080fcf0d +0x1df:  jmp    080fcfa2 <+0x274>
080fcf12 +0x1e4:  mov    0x10(%ebp),%eax
080fcf15 +0x1e7:  mov    %eax,(%esp)
080fcf18 +0x1ea:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcf1d +0x1ef:  movzbl 0x203(%eax),%eax
080fcf24 +0x1f6:  test   %al,%al
080fcf26 +0x1f8:  setne  %al
080fcf29 +0x1fb:  test   %al,%al
080fcf2b +0x1fd:  je     080fcf8b <+0x25d>
080fcf2d +0x1ff:  mov    0xc(%ebp),%eax
080fcf30 +0x202:  mov    %eax,(%esp)
080fcf33 +0x205:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080fcf38 +0x20a:  mov    %eax,%ebx
080fcf3a +0x20c:  mov    0x10(%ebp),%eax
080fcf3d +0x20f:  mov    %eax,(%esp)
080fcf40 +0x212:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcf45 +0x217:  movzbl 0x203(%eax),%eax
080fcf4c +0x21e:  movzbl %al,%ecx
080fcf4f +0x221:  mov    %ebx,%eax
080fcf51 +0x223:  mov    $0x0,%edx
080fcf56 +0x228:  div    %ecx
080fcf58 +0x22a:  mov    %edx,%eax
080fcf5a +0x22c:  test   %eax,%eax
080fcf5c +0x22e:  sete   %al
080fcf5f +0x231:  test   %al,%al
080fcf61 +0x233:  je     080fcf77 <+0x249>
080fcf63 +0x235:  mov    0x10(%ebp),%eax
080fcf66 +0x238:  mov    %eax,(%esp)
080fcf69 +0x23b:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcf6e +0x240:  movb   $0x0,0x549(%eax)
080fcf75 +0x247:  jmp    080fcf9d <+0x26f>
080fcf77 +0x249:  mov    0x10(%ebp),%eax
080fcf7a +0x24c:  mov    %eax,(%esp)
080fcf7d +0x24f:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcf82 +0x254:  movb   $0x1,0x549(%eax)
080fcf89 +0x25b:  jmp    080fcf9d <+0x26f>
080fcf8b +0x25d:  mov    0x10(%ebp),%eax
080fcf8e +0x260:  mov    %eax,(%esp)
080fcf91 +0x263:  call   080fdd2c <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x58>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x58
080fcf96 +0x268:  movb   $0x1,0x549(%eax)
080fcf9d +0x26f:  mov    $0x1,%eax
080fcfa2 +0x274:  add    $0x24,%esp
080fcfa5 +0x277:  pop    %ebx
080fcfa6 +0x278:  pop    %ebp
080fcfa7 +0x279:  ret
```

## 反编译 C

```c
// CInGameAdvertisementManager::checkCondition @ 0x80fcd2e

/* CInGameAdvertisementManager::checkCondition(CUser*, CAdvertisementExposeInfo*) */

undefined4 __thiscall
CInGameAdvertisementManager::checkCondition
          (CInGameAdvertisementManager *this,CUser *param_1,CAdvertisementExposeInfo *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_2 == (CAdvertisementExposeInfo *)0x0) {
    return 0;
  }
  iVar3 = G_CDataManager();
  iVar4 = CAdvertisementExposeInfo::getExposeCondition(param_2);
  if (*(char *)(iVar4 + 1) != -1) {
    iVar4 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*(char *)(iVar4 + 1) == '\0') {
      iVar4 = CUser::GetAge(param_1);
      if (*(char *)(iVar3 + 0x4a5c + iVar4) == '\x01') {
        return 0;
      }
    }
    else {
      iVar4 = CUser::GetAge(param_1);
      if (*(char *)(iVar3 + 0x4a5c + iVar4) == '\0') {
        return 0;
      }
    }
  }
  pcVar5 = (char *)CAdvertisementExposeInfo::getExposeCondition(param_2);
  if (*pcVar5 != -1) {
    pcVar5 = (char *)CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*pcVar5 == '\x01') {
      iVar3 = CUser::getSex(param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      iVar3 = CUser::getSex(param_1);
      if (iVar3 == 1) {
        return 0;
      }
    }
  }
  iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
  cVar2 = checkLevel(this,param_1,(char *)(iVar3 + 3));
  if (cVar2 != '\x01') {
    return 0;
  }
  iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
  uVar7 = *(uint *)(iVar3 + 0x208);
  uVar6 = CUser::GetCera(param_1);
  if (uVar7 <= uVar6) {
    uVar7 = CUser::GetCera(param_1);
    iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (uVar7 < *(uint *)(iVar3 + 0x20c)) {
      bVar1 = false;
      goto LAB_080fceba;
    }
  }
  bVar1 = true;
LAB_080fceba:
  if (bVar1) {
    uVar8 = 0;
  }
  else {
    iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*(char *)(iVar3 + 2) != -1) {
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar4 = CAdvertisementExposeInfo::getExposeCondition(param_2);
      if (iVar3 != *(char *)(iVar4 + 2)) {
        return 0;
      }
    }
    iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
    if (*(char *)(iVar3 + 0x203) == '\0') {
      iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
      *(undefined1 *)(iVar3 + 0x549) = 1;
    }
    else {
      uVar7 = CUser::get_acc_id(param_1);
      iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
      if (uVar7 % (uint)*(byte *)(iVar3 + 0x203) == 0) {
        iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
        *(undefined1 *)(iVar3 + 0x549) = 0;
      }
      else {
        iVar3 = CAdvertisementExposeInfo::getExposeCondition(param_2);
        *(undefined1 *)(iVar3 + 0x549) = 1;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}
```
