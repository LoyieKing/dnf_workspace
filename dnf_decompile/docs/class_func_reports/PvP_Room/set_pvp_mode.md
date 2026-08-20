# set_pvp_mode

`_ZN8PvP_Room12set_pvp_modeEP5CUseri`

`PvP_Room::set_pvp_mode(CUser*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d84c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d84c6  _ZN8PvP_Room12set_pvp_modeEP5CUseri
#           PvP_Room::set_pvp_mode(CUser*, int)
# range [0x085d84c6, 0x085d87bd]
085d84c6 +0x000:  push   %ebp
085d84c7 +0x001:  mov    %esp,%ebp
085d84c9 +0x003:  sub    $0x48,%esp
085d84cc +0x006:  mov    0x8(%ebp),%eax
085d84cf +0x009:  mov    0xb8(%eax),%eax
085d84d5 +0x00f:  cmp    $0x1,%eax
085d84d8 +0x012:  je     085d84e4 <+0x1e>
085d84da +0x014:  mov    $0x13,%eax
085d84df +0x019:  jmp    085d87bc <+0x2f6>
085d84e4 +0x01e:  mov    0x8(%ebp),%eax
085d84e7 +0x021:  mov    0x28(%eax),%eax
085d84ea +0x024:  cmp    0xc(%ebp),%eax
085d84ed +0x027:  je     085d84f9 <+0x33>
085d84ef +0x029:  mov    $0x8,%eax
085d84f4 +0x02e:  jmp    085d87bc <+0x2f6>
085d84f9 +0x033:  mov    0x8(%ebp),%eax
085d84fc +0x036:  mov    %eax,(%esp)
085d84ff +0x039:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085d8504 +0x03e:  mov    0x8(%ebp),%eax
085d8507 +0x041:  mov    0x4(%eax),%eax
085d850a +0x044:  mov    %eax,-0x30(%ebp)
085d850d +0x047:  mov    0x10(%ebp),%edx
085d8510 +0x04a:  mov    0x8(%ebp),%eax
085d8513 +0x04d:  mov    %edx,0x4(%eax)
085d8516 +0x050:  cmpl   $0x1,0x10(%ebp)
085d851a +0x054:  jne    085d8579 <+0xb3>
085d851c +0x056:  movl   $0x0,-0x2c(%ebp)
085d8523 +0x05d:  jmp    085d8569 <+0xa3>
085d8525 +0x05f:  mov    -0x2c(%ebp),%edx
085d8528 +0x062:  mov    0x8(%ebp),%eax
085d852b +0x065:  add    $0xc,%edx
085d852e +0x068:  mov    (%eax,%edx,4),%eax
085d8531 +0x06b:  test   %eax,%eax
085d8533 +0x06d:  je     085d8565 <+0x9f>
085d8535 +0x06f:  mov    -0x2c(%ebp),%edx
085d8538 +0x072:  mov    0x8(%ebp),%eax
085d853b +0x075:  add    $0x14,%edx
085d853e +0x078:  movl   $0x0,(%eax,%edx,4)
085d8545 +0x07f:  mov    0x8(%ebp),%eax
085d8548 +0x082:  lea    0x620(%eax),%edx
085d854e +0x088:  movl   $0x0,0x8(%esp)
085d8556 +0x090:  mov    -0x2c(%ebp),%eax
085d8559 +0x093:  mov    %eax,0x4(%esp)
085d855d +0x097:  mov    %edx,(%esp)
085d8560 +0x09a:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d8565 +0x09f:  addl   $0x1,-0x2c(%ebp)
085d8569 +0x0a3:  cmpl   $0x7,-0x2c(%ebp)
085d856d +0x0a7:  setle  %al
085d8570 +0x0aa:  test   %al,%al
085d8572 +0x0ac:  jne    085d8525 <+0x5f>
085d8574 +0x0ae:  jmp    085d87ac <+0x2e6>
085d8579 +0x0b3:  cmpl   $0x3,0x10(%ebp)
085d857d +0x0b7:  jne    085d8669 <+0x1a3>
085d8583 +0x0bd:  cmpl   $0x2,-0x30(%ebp)
085d8587 +0x0c1:  jne    085d85de <+0x118>
085d8589 +0x0c3:  movl   $0x0,-0x28(%ebp)
085d8590 +0x0ca:  jmp    085d85ce <+0x108>
085d8592 +0x0cc:  mov    -0x28(%ebp),%edx
085d8595 +0x0cf:  mov    0x8(%ebp),%eax
085d8598 +0x0d2:  add    $0xc,%edx
085d859b +0x0d5:  mov    (%eax,%edx,4),%eax
085d859e +0x0d8:  test   %eax,%eax
085d85a0 +0x0da:  je     085d85ca <+0x104>
085d85a2 +0x0dc:  mov    -0x28(%ebp),%edx
085d85a5 +0x0df:  mov    0x8(%ebp),%eax
085d85a8 +0x0e2:  add    $0x14,%edx
085d85ab +0x0e5:  mov    (%eax,%edx,4),%eax
085d85ae +0x0e8:  mov    0x8(%ebp),%edx
085d85b1 +0x0eb:  add    $0x620,%edx
085d85b7 +0x0f1:  mov    %eax,0x8(%esp)
085d85bb +0x0f5:  mov    -0x28(%ebp),%eax
085d85be +0x0f8:  mov    %eax,0x4(%esp)
085d85c2 +0x0fc:  mov    %edx,(%esp)
085d85c5 +0x0ff:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d85ca +0x104:  addl   $0x1,-0x28(%ebp)
085d85ce +0x108:  cmpl   $0x7,-0x28(%ebp)
085d85d2 +0x10c:  setle  %al
085d85d5 +0x10f:  test   %al,%al
085d85d7 +0x111:  jne    085d8592 <+0xcc>
085d85d9 +0x113:  jmp    085d87ac <+0x2e6>
085d85de +0x118:  cmpl   $0x1,-0x30(%ebp)
085d85e2 +0x11c:  jne    085d87ac <+0x2e6>
085d85e8 +0x122:  movl   $0x1,-0x24(%ebp)
085d85ef +0x129:  movl   $0x0,-0x20(%ebp)
085d85f6 +0x130:  jmp    085d8659 <+0x193>
085d85f8 +0x132:  mov    -0x20(%ebp),%edx
085d85fb +0x135:  mov    0x8(%ebp),%eax
085d85fe +0x138:  add    $0xc,%edx
085d8601 +0x13b:  mov    (%eax,%edx,4),%eax
085d8604 +0x13e:  test   %eax,%eax
085d8606 +0x140:  je     085d8655 <+0x18f>
085d8608 +0x142:  mov    -0x20(%ebp),%edx
085d860b +0x145:  mov    0x8(%ebp),%eax
085d860e +0x148:  lea    0x14(%edx),%ecx
085d8611 +0x14b:  mov    -0x24(%ebp),%edx
085d8614 +0x14e:  mov    %edx,(%eax,%ecx,4)
085d8617 +0x151:  mov    -0x20(%ebp),%edx
085d861a +0x154:  mov    0x8(%ebp),%eax
085d861d +0x157:  add    $0x14,%edx
085d8620 +0x15a:  mov    (%eax,%edx,4),%eax
085d8623 +0x15d:  mov    0x8(%ebp),%edx
085d8626 +0x160:  add    $0x620,%edx
085d862c +0x166:  mov    %eax,0x8(%esp)
085d8630 +0x16a:  mov    -0x20(%ebp),%eax
085d8633 +0x16d:  mov    %eax,0x4(%esp)
085d8637 +0x171:  mov    %edx,(%esp)
085d863a +0x174:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d863f +0x179:  cmpl   $0x1,-0x24(%ebp)
085d8643 +0x17d:  jne    085d864e <+0x188>
085d8645 +0x17f:  movl   $0x2,-0x24(%ebp)
085d864c +0x186:  jmp    085d8655 <+0x18f>
085d864e +0x188:  movl   $0x1,-0x24(%ebp)
085d8655 +0x18f:  addl   $0x1,-0x20(%ebp)
085d8659 +0x193:  cmpl   $0x7,-0x20(%ebp)
085d865d +0x197:  setle  %al
085d8660 +0x19a:  test   %al,%al
085d8662 +0x19c:  jne    085d85f8 <+0x132>
085d8664 +0x19e:  jmp    085d87ac <+0x2e6>
085d8669 +0x1a3:  cmpl   $0x4,0x10(%ebp)
085d866d +0x1a7:  jne    085d86ac <+0x1e6>
085d866f +0x1a9:  movl   $0x0,-0x1c(%ebp)
085d8676 +0x1b0:  jmp    085d869c <+0x1d6>
085d8678 +0x1b2:  mov    -0x1c(%ebp),%edx
085d867b +0x1b5:  mov    0x8(%ebp),%eax
085d867e +0x1b8:  add    $0xc,%edx
085d8681 +0x1bb:  mov    (%eax,%edx,4),%eax
085d8684 +0x1be:  test   %eax,%eax
085d8686 +0x1c0:  je     085d8698 <+0x1d2>
085d8688 +0x1c2:  mov    -0x1c(%ebp),%edx
085d868b +0x1c5:  mov    0x8(%ebp),%eax
085d868e +0x1c8:  add    $0x14,%edx
085d8691 +0x1cb:  movl   $0x0,(%eax,%edx,4)
085d8698 +0x1d2:  addl   $0x1,-0x1c(%ebp)
085d869c +0x1d6:  cmpl   $0x7,-0x1c(%ebp)
085d86a0 +0x1da:  setle  %al
085d86a3 +0x1dd:  test   %al,%al
085d86a5 +0x1df:  jne    085d8678 <+0x1b2>
085d86a7 +0x1e1:  jmp    085d87ac <+0x2e6>
085d86ac +0x1e6:  cmpl   $0x5,0x10(%ebp)
085d86b0 +0x1ea:  jne    085d872a <+0x264>
085d86b2 +0x1ec:  movl   $0x1,-0x18(%ebp)
085d86b9 +0x1f3:  movl   $0x0,-0x14(%ebp)
085d86c0 +0x1fa:  jmp    085d871a <+0x254>
085d86c2 +0x1fc:  mov    -0x14(%ebp),%edx
085d86c5 +0x1ff:  mov    0x8(%ebp),%eax
085d86c8 +0x202:  add    $0xc,%edx
085d86cb +0x205:  mov    (%eax,%edx,4),%eax
085d86ce +0x208:  test   %eax,%eax
085d86d0 +0x20a:  je     085d8716 <+0x250>
085d86d2 +0x20c:  mov    -0x14(%ebp),%edx
085d86d5 +0x20f:  mov    0x8(%ebp),%eax
085d86d8 +0x212:  lea    0x14(%edx),%ecx
085d86db +0x215:  mov    -0x18(%ebp),%edx
085d86de +0x218:  mov    %edx,(%eax,%ecx,4)
085d86e1 +0x21b:  mov    0x8(%ebp),%eax
085d86e4 +0x21e:  lea    0x620(%eax),%edx
085d86ea +0x224:  mov    -0x18(%ebp),%eax
085d86ed +0x227:  mov    %eax,0x8(%esp)
085d86f1 +0x22b:  mov    -0x14(%ebp),%eax
085d86f4 +0x22e:  mov    %eax,0x4(%esp)
085d86f8 +0x232:  mov    %edx,(%esp)
085d86fb +0x235:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d8700 +0x23a:  cmpl   $0x1,-0x18(%ebp)
085d8704 +0x23e:  jne    085d870f <+0x249>
085d8706 +0x240:  movl   $0x2,-0x18(%ebp)
085d870d +0x247:  jmp    085d8716 <+0x250>
085d870f +0x249:  movl   $0x1,-0x18(%ebp)
085d8716 +0x250:  addl   $0x1,-0x14(%ebp)
085d871a +0x254:  cmpl   $0x7,-0x14(%ebp)
085d871e +0x258:  setle  %al
085d8721 +0x25b:  test   %al,%al
085d8723 +0x25d:  jne    085d86c2 <+0x1fc>
085d8725 +0x25f:  jmp    085d87ac <+0x2e6>
085d872a +0x264:  cmpl   $0x3,-0x30(%ebp)
085d872e +0x268:  je     085d87ac <+0x2e6>
085d8730 +0x26a:  movl   $0x1,-0x10(%ebp)
085d8737 +0x271:  movl   $0x0,-0xc(%ebp)
085d873e +0x278:  jmp    085d87a1 <+0x2db>
085d8740 +0x27a:  mov    -0xc(%ebp),%edx
085d8743 +0x27d:  mov    0x8(%ebp),%eax
085d8746 +0x280:  add    $0xc,%edx
085d8749 +0x283:  mov    (%eax,%edx,4),%eax
085d874c +0x286:  test   %eax,%eax
085d874e +0x288:  je     085d879d <+0x2d7>
085d8750 +0x28a:  mov    -0xc(%ebp),%edx
085d8753 +0x28d:  mov    0x8(%ebp),%eax
085d8756 +0x290:  lea    0x14(%edx),%ecx
085d8759 +0x293:  mov    -0x10(%ebp),%edx
085d875c +0x296:  mov    %edx,(%eax,%ecx,4)
085d875f +0x299:  mov    -0xc(%ebp),%edx
085d8762 +0x29c:  mov    0x8(%ebp),%eax
085d8765 +0x29f:  add    $0x14,%edx
085d8768 +0x2a2:  mov    (%eax,%edx,4),%eax
085d876b +0x2a5:  mov    0x8(%ebp),%edx
085d876e +0x2a8:  add    $0x620,%edx
085d8774 +0x2ae:  mov    %eax,0x8(%esp)
085d8778 +0x2b2:  mov    -0xc(%ebp),%eax
085d877b +0x2b5:  mov    %eax,0x4(%esp)
085d877f +0x2b9:  mov    %edx,(%esp)
085d8782 +0x2bc:  call   085de15a <_ZN15CRelayBattleMgr12OnChangeTeamEii>  ; CRelayBattleMgr::OnChangeTeam(int, int)
085d8787 +0x2c1:  cmpl   $0x1,-0x10(%ebp)
085d878b +0x2c5:  jne    085d8796 <+0x2d0>
085d878d +0x2c7:  movl   $0x2,-0x10(%ebp)
085d8794 +0x2ce:  jmp    085d879d <+0x2d7>
085d8796 +0x2d0:  movl   $0x1,-0x10(%ebp)
085d879d +0x2d7:  addl   $0x1,-0xc(%ebp)
085d87a1 +0x2db:  cmpl   $0x7,-0xc(%ebp)
085d87a5 +0x2df:  setle  %al
085d87a8 +0x2e2:  test   %al,%al
085d87aa +0x2e4:  jne    085d8740 <+0x27a>
085d87ac +0x2e6:  mov    0x8(%ebp),%eax
085d87af +0x2e9:  mov    %eax,(%esp)
085d87b2 +0x2ec:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085d87b7 +0x2f1:  mov    $0x0,%eax
085d87bc +0x2f6:  leave
085d87bd +0x2f7:  ret
```

## 反编译 C

```c
// PvP_Room::set_pvp_mode @ 0x85d84c6

/* PvP_Room::set_pvp_mode(CUser*, int) */

undefined4 __thiscall PvP_Room::set_pvp_mode(PvP_Room *this,CUser *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0xb8) == 1) {
    if (*(CUser **)(this + 0x28) == param_1) {
      lock();
      iVar1 = *(int *)(this + 4);
      *(int *)(this + 4) = param_2;
      if (param_2 == 1) {
        for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
          if (*(int *)(this + (local_30 + 0xc) * 4) != 0) {
            *(undefined4 *)(this + (local_30 + 0x14) * 4) = 0;
            CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_30,0);
          }
        }
      }
      else if (param_2 == 3) {
        if (iVar1 == 2) {
          for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
            if (*(int *)(this + (local_2c + 0xc) * 4) != 0) {
              CRelayBattleMgr::OnChangeTeam
                        ((CRelayBattleMgr *)(this + 0x620),local_2c,
                         *(int *)(this + (local_2c + 0x14) * 4));
            }
          }
        }
        else if (iVar1 == 1) {
          local_28 = 1;
          for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
            if (*(int *)(this + (local_24 + 0xc) * 4) != 0) {
              *(int *)(this + (local_24 + 0x14) * 4) = local_28;
              CRelayBattleMgr::OnChangeTeam
                        ((CRelayBattleMgr *)(this + 0x620),local_24,
                         *(int *)(this + (local_24 + 0x14) * 4));
              if (local_28 == 1) {
                local_28 = 2;
              }
              else {
                local_28 = 1;
              }
            }
          }
        }
      }
      else if (param_2 == 4) {
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          if (*(int *)(this + (local_20 + 0xc) * 4) != 0) {
            *(undefined4 *)(this + (local_20 + 0x14) * 4) = 0;
          }
        }
      }
      else if (param_2 == 5) {
        local_1c = 1;
        for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
          if (*(int *)(this + (local_18 + 0xc) * 4) != 0) {
            *(int *)(this + (local_18 + 0x14) * 4) = local_1c;
            CRelayBattleMgr::OnChangeTeam((CRelayBattleMgr *)(this + 0x620),local_18,local_1c);
            if (local_1c == 1) {
              local_1c = 2;
            }
            else {
              local_1c = 1;
            }
          }
        }
      }
      else if (iVar1 != 3) {
        local_14 = 1;
        for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
          if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
            *(int *)(this + (local_10 + 0x14) * 4) = local_14;
            CRelayBattleMgr::OnChangeTeam
                      ((CRelayBattleMgr *)(this + 0x620),local_10,
                       *(int *)(this + (local_10 + 0x14) * 4));
            if (local_14 == 1) {
              local_14 = 2;
            }
            else {
              local_14 = 1;
            }
          }
        }
      }
      unlock();
      uVar2 = 0;
    }
    else {
      uVar2 = 8;
    }
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}
```
