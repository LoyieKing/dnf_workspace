# change_equip_expand

`_ZN5CUser19change_equip_expandEiiiiPi`

`CUser::change_equip_expand(int, int, int, int, int*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865f382` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865f382  _ZN5CUser19change_equip_expandEiiiiPi
#           CUser::change_equip_expand(int, int, int, int, int*)
# range [0x0865f382, 0x0865f613]
0865f382 +0x000:  push   %ebp
0865f383 +0x001:  mov    %esp,%ebp
0865f385 +0x003:  sub    $0x38,%esp
0865f388 +0x006:  mov    0xc(%ebp),%eax
0865f38b +0x009:  cmp    $0x3,%eax
0865f38e +0x00c:  je     0865f3a6 <+0x24>
0865f390 +0x00e:  cmp    $0x12,%eax
0865f393 +0x011:  je     0865f588 <+0x206>
0865f399 +0x017:  test   %eax,%eax
0865f39b +0x019:  je     0865f42a <+0xa8>
0865f3a1 +0x01f:  jmp    0865f60d <+0x28b>
0865f3a6 +0x024:  cmpl   $0x9,0x10(%ebp)
0865f3aa +0x028:  jle    0865f3b2 <+0x30>
0865f3ac +0x02a:  cmpl   $0x15,0x10(%ebp)
0865f3b0 +0x02e:  jle    0865f3bc <+0x3a>
0865f3b2 +0x030:  mov    $0x1,%eax
0865f3b7 +0x035:  jmp    0865f612 <+0x290>
0865f3bc +0x03a:  mov    0x14(%ebp),%eax
0865f3bf +0x03d:  test   %eax,%eax
0865f3c1 +0x03f:  jne    0865f420 <+0x9e>
0865f3c3 +0x041:  mov    0x8(%ebp),%eax
0865f3c6 +0x044:  mov    %eax,(%esp)
0865f3c9 +0x047:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865f3ce +0x04c:  test   %al,%al
0865f3d0 +0x04e:  je     0865f3dc <+0x5a>
0865f3d2 +0x050:  mov    $0x13,%eax
0865f3d7 +0x055:  jmp    0865f612 <+0x290>
0865f3dc +0x05a:  mov    0x18(%ebp),%eax
0865f3df +0x05d:  cwtl
0865f3e0 +0x05e:  mov    0x10(%ebp),%edx
0865f3e3 +0x061:  mov    %edx,0xc(%esp)
0865f3e7 +0x065:  mov    %eax,0x8(%esp)
0865f3eb +0x069:  mov    0x14(%ebp),%eax
0865f3ee +0x06c:  mov    %eax,0x4(%esp)
0865f3f2 +0x070:  mov    0x8(%ebp),%eax
0865f3f5 +0x073:  mov    %eax,(%esp)
0865f3f8 +0x076:  call   0865eed2 <_ZN5CUser12change_equipEisi>  ; CUser::change_equip(int, short, int)
0865f3fd +0x07b:  mov    %eax,-0x18(%ebp)
0865f400 +0x07e:  cmpl   $0x0,-0x18(%ebp)
0865f404 +0x082:  je     0865f40e <+0x8c>
0865f406 +0x084:  mov    -0x18(%ebp),%eax
0865f409 +0x087:  jmp    0865f612 <+0x290>
0865f40e +0x08c:  mov    0x1c(%ebp),%eax
0865f411 +0x08f:  mov    0x10(%ebp),%edx
0865f414 +0x092:  mov    %edx,(%eax)
0865f416 +0x094:  mov    $0x0,%eax
0865f41b +0x099:  jmp    0865f612 <+0x290>
0865f420 +0x09e:  mov    $0x1,%eax
0865f425 +0x0a3:  jmp    0865f612 <+0x290>
0865f42a +0x0a8:  mov    0x14(%ebp),%eax
0865f42d +0x0ab:  cmp    $0x3,%eax
0865f430 +0x0ae:  je     0865f440 <+0xbe>
0865f432 +0x0b0:  cmp    $0x12,%eax
0865f435 +0x0b3:  je     0865f4e8 <+0x166>
0865f43b +0x0b9:  jmp    0865f57e <+0x1fc>
0865f440 +0x0be:  cmpl   $0x9,0x18(%ebp)
0865f444 +0x0c2:  jle    0865f44c <+0xca>
0865f446 +0x0c4:  cmpl   $0x15,0x18(%ebp)
0865f44a +0x0c8:  jle    0865f456 <+0xd4>
0865f44c +0x0ca:  mov    $0x1,%eax
0865f451 +0x0cf:  jmp    0865f612 <+0x290>
0865f456 +0x0d4:  cmpl   $0x2,0x10(%ebp)
0865f45a +0x0d8:  jle    0865f462 <+0xe0>
0865f45c +0x0da:  cmpl   $0x38,0x10(%ebp)
0865f460 +0x0de:  jle    0865f46c <+0xea>
0865f462 +0x0e0:  mov    $0x1,%eax
0865f467 +0x0e5:  jmp    0865f612 <+0x290>
0865f46c +0x0ea:  mov    0x8(%ebp),%eax
0865f46f +0x0ed:  mov    %eax,(%esp)
0865f472 +0x0f0:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865f477 +0x0f5:  test   %al,%al
0865f479 +0x0f7:  je     0865f485 <+0x103>
0865f47b +0x0f9:  mov    $0x13,%eax
0865f480 +0x0fe:  jmp    0865f612 <+0x290>
0865f485 +0x103:  mov    0x10(%ebp),%eax
0865f488 +0x106:  cwtl
0865f489 +0x107:  mov    0x18(%ebp),%edx
0865f48c +0x10a:  mov    %edx,0xc(%esp)
0865f490 +0x10e:  mov    %eax,0x8(%esp)
0865f494 +0x112:  mov    0xc(%ebp),%eax
0865f497 +0x115:  mov    %eax,0x4(%esp)
0865f49b +0x119:  mov    0x8(%ebp),%eax
0865f49e +0x11c:  mov    %eax,(%esp)
0865f4a1 +0x11f:  call   0865eed2 <_ZN5CUser12change_equipEisi>  ; CUser::change_equip(int, short, int)
0865f4a6 +0x124:  mov    %eax,-0x18(%ebp)
0865f4a9 +0x127:  cmpl   $0x0,-0x18(%ebp)
0865f4ad +0x12b:  je     0865f4b7 <+0x135>
0865f4af +0x12d:  mov    -0x18(%ebp),%eax
0865f4b2 +0x130:  jmp    0865f612 <+0x290>
0865f4b7 +0x135:  mov    0x1c(%ebp),%eax
0865f4ba +0x138:  mov    0x18(%ebp),%edx
0865f4bd +0x13b:  mov    %edx,(%eax)
0865f4bf +0x13d:  mov    0x8(%ebp),%eax
0865f4c2 +0x140:  mov    %eax,(%esp)
0865f4c5 +0x143:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0865f4ca +0x148:  mov    %eax,-0x14(%ebp)
0865f4cd +0x14b:  cmpl   $0x0,-0x14(%ebp)
0865f4d1 +0x14f:  je     0865f4de <+0x15c>
0865f4d3 +0x151:  mov    -0x14(%ebp),%eax
0865f4d6 +0x154:  mov    %eax,(%esp)
0865f4d9 +0x157:  call   085b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>  ; CParty::Reset_party_overlapped_drop_ratio()
0865f4de +0x15c:  mov    $0x0,%eax
0865f4e3 +0x161:  jmp    0865f612 <+0x290>
0865f4e8 +0x166:  mov    0x8(%ebp),%eax
0865f4eb +0x169:  mov    %eax,(%esp)
0865f4ee +0x16c:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865f4f3 +0x171:  test   %al,%al
0865f4f5 +0x173:  je     0865f501 <+0x17f>
0865f4f7 +0x175:  mov    $0x13,%eax
0865f4fc +0x17a:  jmp    0865f612 <+0x290>
0865f501 +0x17f:  cmpl   $0x2,0x10(%ebp)
0865f505 +0x183:  jle    0865f50d <+0x18b>
0865f507 +0x185:  cmpl   $0x38,0x10(%ebp)
0865f50b +0x189:  jle    0865f517 <+0x195>
0865f50d +0x18b:  mov    $0x1,%eax
0865f512 +0x190:  jmp    0865f612 <+0x290>
0865f517 +0x195:  movl   $0x9,0x4(%esp)
0865f51f +0x19d:  mov    0x8(%ebp),%eax
0865f522 +0x1a0:  mov    %eax,(%esp)
0865f525 +0x1a3:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865f52a +0x1a8:  mov    %eax,-0x10(%ebp)
0865f52d +0x1ab:  mov    0x18(%ebp),%eax
0865f530 +0x1ae:  mov    %eax,0x14(%esp)
0865f534 +0x1b2:  mov    0x14(%ebp),%eax
0865f537 +0x1b5:  mov    %eax,0x10(%esp)
0865f53b +0x1b9:  mov    0x10(%ebp),%eax
0865f53e +0x1bc:  mov    %eax,0xc(%esp)
0865f542 +0x1c0:  mov    0xc(%ebp),%eax
0865f545 +0x1c3:  mov    %eax,0x8(%esp)
0865f549 +0x1c7:  mov    0x8(%ebp),%eax
0865f54c +0x1ca:  mov    %eax,0x4(%esp)
0865f550 +0x1ce:  mov    -0x10(%ebp),%eax
0865f553 +0x1d1:  mov    %eax,(%esp)
0865f556 +0x1d4:  call   08499a48 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii>  ; CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)
0865f55b +0x1d9:  mov    %eax,-0x18(%ebp)
0865f55e +0x1dc:  cmpl   $0x0,-0x18(%ebp)
0865f562 +0x1e0:  je     0865f56c <+0x1ea>
0865f564 +0x1e2:  mov    -0x18(%ebp),%eax
0865f567 +0x1e5:  jmp    0865f612 <+0x290>
0865f56c +0x1ea:  mov    0x1c(%ebp),%eax
0865f56f +0x1ed:  mov    0x18(%ebp),%edx
0865f572 +0x1f0:  mov    %edx,(%eax)
0865f574 +0x1f2:  mov    $0x0,%eax
0865f579 +0x1f7:  jmp    0865f612 <+0x290>
0865f57e +0x1fc:  mov    $0x1,%eax
0865f583 +0x201:  jmp    0865f612 <+0x290>
0865f588 +0x206:  mov    0x14(%ebp),%eax
0865f58b +0x209:  test   %eax,%eax
0865f58d +0x20b:  jne    0865f606 <+0x284>
0865f58f +0x20d:  mov    0x8(%ebp),%eax
0865f592 +0x210:  mov    %eax,(%esp)
0865f595 +0x213:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0865f59a +0x218:  test   %al,%al
0865f59c +0x21a:  je     0865f5a5 <+0x223>
0865f59e +0x21c:  mov    $0x13,%eax
0865f5a3 +0x221:  jmp    0865f612 <+0x290>
0865f5a5 +0x223:  movl   $0x9,0x4(%esp)
0865f5ad +0x22b:  mov    0x8(%ebp),%eax
0865f5b0 +0x22e:  mov    %eax,(%esp)
0865f5b3 +0x231:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0865f5b8 +0x236:  mov    %eax,-0xc(%ebp)
0865f5bb +0x239:  mov    0x10(%ebp),%eax
0865f5be +0x23c:  mov    %eax,0x14(%esp)
0865f5c2 +0x240:  mov    0xc(%ebp),%eax
0865f5c5 +0x243:  mov    %eax,0x10(%esp)
0865f5c9 +0x247:  mov    0x18(%ebp),%eax
0865f5cc +0x24a:  mov    %eax,0xc(%esp)
0865f5d0 +0x24e:  mov    0x14(%ebp),%eax
0865f5d3 +0x251:  mov    %eax,0x8(%esp)
0865f5d7 +0x255:  mov    0x8(%ebp),%eax
0865f5da +0x258:  mov    %eax,0x4(%esp)
0865f5de +0x25c:  mov    -0xc(%ebp),%eax
0865f5e1 +0x25f:  mov    %eax,(%esp)
0865f5e4 +0x262:  call   08499a48 <_ZN16CExpandEquipslot12Change_EquipEP5CUseriiii>  ; CExpandEquipslot::Change_Equip(CUser*, int, int, int, int)
0865f5e9 +0x267:  mov    %eax,-0x18(%ebp)
0865f5ec +0x26a:  cmpl   $0x0,-0x18(%ebp)
0865f5f0 +0x26e:  je     0865f5f7 <+0x275>
0865f5f2 +0x270:  mov    -0x18(%ebp),%eax
0865f5f5 +0x273:  jmp    0865f612 <+0x290>
0865f5f7 +0x275:  mov    0x1c(%ebp),%eax
0865f5fa +0x278:  mov    0x18(%ebp),%edx
0865f5fd +0x27b:  mov    %edx,(%eax)
0865f5ff +0x27d:  mov    $0x0,%eax
0865f604 +0x282:  jmp    0865f612 <+0x290>
0865f606 +0x284:  mov    $0x1,%eax
0865f60b +0x289:  jmp    0865f612 <+0x290>
0865f60d +0x28b:  mov    $0x1,%eax
0865f612 +0x290:  leave
0865f613 +0x291:  ret
```

## 反编译 C

```c
// CUser::change_equip_expand @ 0x865f382

/* CUser::change_equip_expand(int, int, int, int, int*) */

int __thiscall
CUser::change_equip_expand(CUser *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  char cVar1;
  CParty *this_00;
  CExpandEquipslot *pCVar2;
  int iVar3;
  
  if (param_1 == 3) {
    if ((param_2 < 10) || (0x15 < param_2)) {
      iVar3 = 1;
    }
    else if (param_3 == 0) {
      cVar1 = CheckInTrade(this);
      if (cVar1 == '\0') {
        iVar3 = change_equip(this,0,(short)param_4,param_2);
        if (iVar3 == 0) {
          *param_5 = param_2;
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else if (param_1 == 0x12) {
    if (param_3 == 0) {
      cVar1 = CheckInTrade(this);
      if (cVar1 == '\0') {
        pCVar2 = (CExpandEquipslot *)GetCharacExpandData(this,9);
        iVar3 = CExpandEquipslot::Change_Equip(pCVar2,this,0,param_4,0x12,param_2);
        if (iVar3 == 0) {
          *param_5 = param_4;
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else if (param_1 == 0) {
    if (param_3 == 3) {
      if ((param_4 < 10) || (0x15 < param_4)) {
        iVar3 = 1;
      }
      else if ((param_2 < 3) || (0x38 < param_2)) {
        iVar3 = 1;
      }
      else {
        cVar1 = CheckInTrade(this);
        if (cVar1 == '\0') {
          iVar3 = change_equip(this,0,(short)param_2,param_4);
          if (iVar3 == 0) {
            *param_5 = param_4;
            this_00 = (CParty *)GetParty(this);
            if (this_00 != (CParty *)0x0) {
              CParty::Reset_party_overlapped_drop_ratio(this_00);
            }
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x13;
        }
      }
    }
    else if (param_3 == 0x12) {
      cVar1 = CheckInTrade(this);
      if (cVar1 == '\0') {
        if ((param_2 < 3) || (0x38 < param_2)) {
          iVar3 = 1;
        }
        else {
          pCVar2 = (CExpandEquipslot *)GetCharacExpandData(this,9);
          iVar3 = CExpandEquipslot::Change_Equip(pCVar2,this,0,param_2,0x12,param_4);
          if (iVar3 == 0) {
            *param_5 = param_4;
            iVar3 = 0;
          }
        }
      }
      else {
        iVar3 = 0x13;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 1;
  }
  return iVar3;
}
```
