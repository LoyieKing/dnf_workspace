# check_quest_subtype_condition

`_ZN9UserQuest29check_quest_subtype_conditionEP5Quest`

`UserQuest::check_quest_subtype_condition(Quest*)`

| 类 | 地址 |
|---|---|
| `UserQuest` | `0x086acb52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086acb52  _ZN9UserQuest29check_quest_subtype_conditionEP5Quest
#           UserQuest::check_quest_subtype_condition(Quest*)
# range [0x086acb52, 0x086ace45]
086acb52 +0x000:  push   %ebp
086acb53 +0x001:  mov    %esp,%ebp
086acb55 +0x003:  sub    $0x48,%esp
086acb58 +0x006:  mov    0xc(%ebp),%eax
086acb5b +0x009:  mov    0x80(%eax),%eax
086acb61 +0x00f:  cmp    $0x7,%eax
086acb64 +0x012:  ja     086ace3f <+0x2ed>
086acb6a +0x018:  mov    &data#acb6fda6(.rodata)(,%eax,4),%eax
086acb71 +0x01f:  jmp    *%eax
086acb73 +0x021:  mov    0xc(%ebp),%eax
086acb76 +0x024:  add    $0x84,%eax
086acb7b +0x029:  movl   $0x0,0x4(%esp)
086acb83 +0x031:  mov    %eax,(%esp)
086acb86 +0x034:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acb8b +0x039:  mov    (%eax),%eax
086acb8d +0x03b:  mov    %eax,-0x34(%ebp)
086acb90 +0x03e:  mov    0xc(%ebp),%eax
086acb93 +0x041:  add    $0x84,%eax
086acb98 +0x046:  movl   $0x1,0x4(%esp)
086acba0 +0x04e:  mov    %eax,(%esp)
086acba3 +0x051:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acba8 +0x056:  mov    (%eax),%eax
086acbaa +0x058:  mov    %eax,-0x30(%ebp)
086acbad +0x05b:  mov    0xc(%ebp),%eax
086acbb0 +0x05e:  add    $0x84,%eax
086acbb5 +0x063:  movl   $0x2,0x4(%esp)
086acbbd +0x06b:  mov    %eax,(%esp)
086acbc0 +0x06e:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acbc5 +0x073:  mov    (%eax),%eax
086acbc7 +0x075:  mov    %eax,-0x2c(%ebp)
086acbca +0x078:  cmpl   $0xffffffff,-0x30(%ebp)
086acbce +0x07c:  je     086acbea <+0x98>
086acbd0 +0x07e:  mov    0x8(%ebp),%eax
086acbd3 +0x081:  movzwl 0x75da(%eax),%eax
086acbda +0x088:  cwtl
086acbdb +0x089:  cmp    -0x30(%ebp),%eax
086acbde +0x08c:  je     086acbea <+0x98>
086acbe0 +0x08e:  mov    $0x0,%eax
086acbe5 +0x093:  jmp    086ace44 <+0x2f2>
086acbea +0x098:  mov    0x8(%ebp),%eax
086acbed +0x09b:  movzwl 0x75d8(%eax),%eax
086acbf4 +0x0a2:  cwtl
086acbf5 +0x0a3:  cmp    -0x34(%ebp),%eax
086acbf8 +0x0a6:  je     086acc04 <+0xb2>
086acbfa +0x0a8:  mov    $0x0,%eax
086acbff +0x0ad:  jmp    086ace44 <+0x2f2>
086acc04 +0x0b2:  mov    -0x2c(%ebp),%eax
086acc07 +0x0b5:  imul   $0x3e8,%eax,%edx
086acc0d +0x0bb:  mov    0x8(%ebp),%eax
086acc10 +0x0be:  mov    0x75e0(%eax),%eax
086acc16 +0x0c4:  cmp    %eax,%edx
086acc18 +0x0c6:  jge    086acc24 <+0xd2>
086acc1a +0x0c8:  mov    $0x0,%eax
086acc1f +0x0cd:  jmp    086ace44 <+0x2f2>
086acc24 +0x0d2:  mov    $0x1,%eax
086acc29 +0x0d7:  jmp    086ace44 <+0x2f2>
086acc2e +0x0dc:  mov    $0x1,%eax
086acc33 +0x0e1:  jmp    086ace44 <+0x2f2>
086acc38 +0x0e6:  mov    0xc(%ebp),%eax
086acc3b +0x0e9:  add    $0x84,%eax
086acc40 +0x0ee:  movl   $0x0,0x4(%esp)
086acc48 +0x0f6:  mov    %eax,(%esp)
086acc4b +0x0f9:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acc50 +0x0fe:  mov    (%eax),%eax
086acc52 +0x100:  mov    %eax,-0x28(%ebp)
086acc55 +0x103:  mov    0xc(%ebp),%eax
086acc58 +0x106:  add    $0x84,%eax
086acc5d +0x10b:  movl   $0x1,0x4(%esp)
086acc65 +0x113:  mov    %eax,(%esp)
086acc68 +0x116:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acc6d +0x11b:  mov    (%eax),%eax
086acc6f +0x11d:  mov    %eax,-0x24(%ebp)
086acc72 +0x120:  cmpl   $0xffffffff,-0x24(%ebp)
086acc76 +0x124:  je     086acc92 <+0x140>
086acc78 +0x126:  mov    0x8(%ebp),%eax
086acc7b +0x129:  movzwl 0x75da(%eax),%eax
086acc82 +0x130:  cwtl
086acc83 +0x131:  cmp    -0x24(%ebp),%eax
086acc86 +0x134:  je     086acc92 <+0x140>
086acc88 +0x136:  mov    $0x0,%eax
086acc8d +0x13b:  jmp    086ace44 <+0x2f2>
086acc92 +0x140:  mov    0x8(%ebp),%eax
086acc95 +0x143:  movzwl 0x75d8(%eax),%eax
086acc9c +0x14a:  cwtl
086acc9d +0x14b:  cmp    -0x28(%ebp),%eax
086acca0 +0x14e:  je     086accac <+0x15a>
086acca2 +0x150:  mov    $0x0,%eax
086acca7 +0x155:  jmp    086ace44 <+0x2f2>
086accac +0x15a:  mov    0x8(%ebp),%eax
086accaf +0x15d:  movzbl 0x75e4(%eax),%eax
086accb6 +0x164:  test   %al,%al
086accb8 +0x166:  je     086accc4 <+0x172>
086accba +0x168:  mov    $0x0,%eax
086accbf +0x16d:  jmp    086ace44 <+0x2f2>
086accc4 +0x172:  mov    $0x1,%eax
086accc9 +0x177:  jmp    086ace44 <+0x2f2>
086accce +0x17c:  mov    0xc(%ebp),%eax
086accd1 +0x17f:  add    $0x84,%eax
086accd6 +0x184:  movl   $0x0,0x4(%esp)
086accde +0x18c:  mov    %eax,(%esp)
086acce1 +0x18f:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acce6 +0x194:  mov    (%eax),%eax
086acce8 +0x196:  mov    %eax,-0x20(%ebp)
086acceb +0x199:  mov    0xc(%ebp),%eax
086accee +0x19c:  add    $0x84,%eax
086accf3 +0x1a1:  movl   $0x1,0x4(%esp)
086accfb +0x1a9:  mov    %eax,(%esp)
086accfe +0x1ac:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acd03 +0x1b1:  mov    (%eax),%eax
086acd05 +0x1b3:  mov    %eax,-0x1c(%ebp)
086acd08 +0x1b6:  mov    0xc(%ebp),%eax
086acd0b +0x1b9:  add    $0x84,%eax
086acd10 +0x1be:  movl   $0x2,0x4(%esp)
086acd18 +0x1c6:  mov    %eax,(%esp)
086acd1b +0x1c9:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acd20 +0x1ce:  mov    (%eax),%eax
086acd22 +0x1d0:  mov    %eax,-0x18(%ebp)
086acd25 +0x1d3:  cmpl   $0xffffffff,-0x1c(%ebp)
086acd29 +0x1d7:  je     086acd45 <+0x1f3>
086acd2b +0x1d9:  mov    0x8(%ebp),%eax
086acd2e +0x1dc:  movzwl 0x75da(%eax),%eax
086acd35 +0x1e3:  cwtl
086acd36 +0x1e4:  cmp    -0x1c(%ebp),%eax
086acd39 +0x1e7:  jge    086acd45 <+0x1f3>
086acd3b +0x1e9:  mov    $0x0,%eax
086acd40 +0x1ee:  jmp    086ace44 <+0x2f2>
086acd45 +0x1f3:  mov    0x8(%ebp),%eax
086acd48 +0x1f6:  movzwl 0x75d8(%eax),%eax
086acd4f +0x1fd:  cwtl
086acd50 +0x1fe:  cmp    -0x20(%ebp),%eax
086acd53 +0x201:  je     086acd5f <+0x20d>
086acd55 +0x203:  mov    $0x0,%eax
086acd5a +0x208:  jmp    086ace44 <+0x2f2>
086acd5f +0x20d:  cmpl   $0x1,-0x18(%ebp)
086acd63 +0x211:  jne    086acd7d <+0x22b>
086acd65 +0x213:  mov    0x8(%ebp),%eax
086acd68 +0x216:  mov    0x75e8(%eax),%eax
086acd6e +0x21c:  cmp    $0x1,%eax
086acd71 +0x21f:  je     086acd7d <+0x22b>
086acd73 +0x221:  mov    $0x0,%eax
086acd78 +0x226:  jmp    086ace44 <+0x2f2>
086acd7d +0x22b:  mov    0x8(%ebp),%eax
086acd80 +0x22e:  mov    0x75e8(%eax),%eax
086acd86 +0x234:  cmp    -0x18(%ebp),%eax
086acd89 +0x237:  jge    086acd95 <+0x243>
086acd8b +0x239:  mov    $0x0,%eax
086acd90 +0x23e:  jmp    086ace44 <+0x2f2>
086acd95 +0x243:  mov    $0x1,%eax
086acd9a +0x248:  jmp    086ace44 <+0x2f2>
086acd9f +0x24d:  mov    0xc(%ebp),%eax
086acda2 +0x250:  add    $0x84,%eax
086acda7 +0x255:  movl   $0x0,0x4(%esp)
086acdaf +0x25d:  mov    %eax,(%esp)
086acdb2 +0x260:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acdb7 +0x265:  mov    (%eax),%eax
086acdb9 +0x267:  mov    %eax,-0x14(%ebp)
086acdbc +0x26a:  mov    0xc(%ebp),%eax
086acdbf +0x26d:  add    $0x84,%eax
086acdc4 +0x272:  movl   $0x1,0x4(%esp)
086acdcc +0x27a:  mov    %eax,(%esp)
086acdcf +0x27d:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acdd4 +0x282:  mov    (%eax),%eax
086acdd6 +0x284:  mov    %eax,-0x10(%ebp)
086acdd9 +0x287:  mov    0xc(%ebp),%eax
086acddc +0x28a:  add    $0x84,%eax
086acde1 +0x28f:  movl   $0x2,0x4(%esp)
086acde9 +0x297:  mov    %eax,(%esp)
086acdec +0x29a:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
086acdf1 +0x29f:  mov    (%eax),%eax
086acdf3 +0x2a1:  mov    %eax,-0xc(%ebp)
086acdf6 +0x2a4:  cmpl   $0xffffffff,-0x10(%ebp)
086acdfa +0x2a8:  je     086ace13 <+0x2c1>
086acdfc +0x2aa:  mov    0x8(%ebp),%eax
086acdff +0x2ad:  movzwl 0x75da(%eax),%eax
086ace06 +0x2b4:  cwtl
086ace07 +0x2b5:  cmp    -0x10(%ebp),%eax
086ace0a +0x2b8:  je     086ace13 <+0x2c1>
086ace0c +0x2ba:  mov    $0x0,%eax
086ace11 +0x2bf:  jmp    086ace44 <+0x2f2>
086ace13 +0x2c1:  mov    0x8(%ebp),%eax
086ace16 +0x2c4:  movzwl 0x75d8(%eax),%eax
086ace1d +0x2cb:  cwtl
086ace1e +0x2cc:  cmp    -0x14(%ebp),%eax
086ace21 +0x2cf:  je     086ace2a <+0x2d8>
086ace23 +0x2d1:  mov    $0x0,%eax
086ace28 +0x2d6:  jmp    086ace44 <+0x2f2>
086ace2a +0x2d8:  mov    0x8(%ebp),%eax
086ace2d +0x2db:  mov    0x75ec(%eax),%eax
086ace33 +0x2e1:  cmp    -0xc(%ebp),%eax
086ace36 +0x2e4:  jge    086ace3f <+0x2ed>
086ace38 +0x2e6:  mov    $0x0,%eax
086ace3d +0x2eb:  jmp    086ace44 <+0x2f2>
086ace3f +0x2ed:  mov    $0x0,%eax
086ace44 +0x2f2:  leave
086ace45 +0x2f3:  ret
```

## 反编译 C

```c
// UserQuest::check_quest_subtype_condition @ 0x86acb52

/* UserQuest::check_quest_subtype_condition(Quest*) */

undefined4 __thiscall UserQuest::check_quest_subtype_condition(UserQuest *this,Quest *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    iVar2 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),2);
    if ((iVar2 == -1) || (*(short *)(this + 0x75da) == iVar2)) {
      if (*(short *)(this + 0x75d8) == iVar1) {
        if (*piVar3 * 1000 < *(int *)(this + 0x75e0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 6:
    uVar4 = 1;
    break;
  case 4:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    if ((*piVar3 == -1) || ((int)*(short *)(this + 0x75da) == *piVar3)) {
      if (*(short *)(this + 0x75d8) == iVar1) {
        if (this[0x75e4] == (UserQuest)0x0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    break;
  case 5:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    iVar2 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),2);
    if ((iVar2 == -1) || (iVar2 <= *(short *)(this + 0x75da))) {
      if (*(short *)(this + 0x75d8) == iVar1) {
        if ((*piVar3 == 1) && (*(int *)(this + 0x75e8) != 1)) {
          uVar4 = 0;
        }
        else if (*(int *)(this + 0x75e8) < *piVar3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    break;
  case 7:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    iVar2 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),2);
    if ((iVar2 != -1) && (*(short *)(this + 0x75da) != iVar2)) {
      return 0;
    }
    if (*(short *)(this + 0x75d8) != iVar1) {
      return 0;
    }
    if (*(int *)(this + 0x75ec) < *piVar3) {
      return 0;
    }
  default:
    uVar4 = 0;
  }
  return uVar4;
}
```
