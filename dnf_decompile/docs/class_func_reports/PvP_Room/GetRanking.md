# GetRanking

`_ZNK8PvP_Room10GetRankingEPi`

`PvP_Room::GetRanking(int*) const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc52c  _ZNK8PvP_Room10GetRankingEPi
#           PvP_Room::GetRanking(int*) const
# range [0x085dc52c, 0x085dc64b]
085dc52c +0x000:  push   %ebp
085dc52d +0x001:  mov    %esp,%ebp
085dc52f +0x003:  sub    $0x58,%esp
085dc532 +0x006:  mov    0x8(%ebp),%eax
085dc535 +0x009:  mov    0x4(%eax),%eax
085dc538 +0x00c:  cmp    $0x4,%eax
085dc53b +0x00f:  je     085dc548 <+0x1c>
085dc53d +0x011:  mov    0x8(%ebp),%eax
085dc540 +0x014:  mov    0x4(%eax),%eax
085dc543 +0x017:  cmp    $0x5,%eax
085dc546 +0x01a:  jne    085dc56f <+0x43>
085dc548 +0x01c:  mov    0x8(%ebp),%eax
085dc54b +0x01f:  lea    0x30(%eax),%ecx
085dc54e +0x022:  mov    0x8(%ebp),%eax
085dc551 +0x025:  lea    0x69c(%eax),%edx
085dc557 +0x02b:  mov    0xc(%ebp),%eax
085dc55a +0x02e:  mov    %eax,0x8(%esp)
085dc55e +0x032:  mov    %ecx,0x4(%esp)
085dc562 +0x036:  mov    %edx,(%esp)
085dc565 +0x039:  call   085df576 <_ZNK20CDeathMatchBattleMgr10getRankingEPP5CUserPi>  ; CDeathMatchBattleMgr::getRanking(CUser**, int*) const
085dc56a +0x03e:  jmp    085dc64a <+0x11e>
085dc56f +0x043:  movl   $0x0,-0x20(%ebp)
085dc576 +0x04a:  movl   $0x0,-0x1c(%ebp)
085dc57d +0x051:  jmp    085dc638 <+0x10c>
085dc582 +0x056:  mov    -0x1c(%ebp),%edx
085dc585 +0x059:  mov    0x8(%ebp),%eax
085dc588 +0x05c:  add    $0xc,%edx
085dc58b +0x05f:  mov    (%eax,%edx,4),%eax
085dc58e +0x062:  test   %eax,%eax
085dc590 +0x064:  je     085dc634 <+0x108>
085dc596 +0x06a:  mov    -0x1c(%ebp),%edx
085dc599 +0x06d:  mov    0x8(%ebp),%eax
085dc59c +0x070:  add    $0x1c,%edx
085dc59f +0x073:  mov    0x8(%eax,%edx,4),%eax
085dc5a3 +0x077:  mov    %eax,-0x18(%ebp)
085dc5a6 +0x07a:  movl   $0x0,-0x14(%ebp)
085dc5ad +0x081:  jmp    085dc5c5 <+0x99>
085dc5af +0x083:  mov    -0x14(%ebp),%eax
085dc5b2 +0x086:  mov    -0x40(%ebp,%eax,4),%eax
085dc5b6 +0x08a:  mov    %eax,-0x10(%ebp)
085dc5b9 +0x08d:  mov    -0x10(%ebp),%eax
085dc5bc +0x090:  cmp    -0x18(%ebp),%eax
085dc5bf +0x093:  jl     085dc5d4 <+0xa8>
085dc5c1 +0x095:  addl   $0x1,-0x14(%ebp)
085dc5c5 +0x099:  mov    -0x14(%ebp),%eax
085dc5c8 +0x09c:  cmp    -0x20(%ebp),%eax
085dc5cb +0x09f:  setl   %al
085dc5ce +0x0a2:  test   %al,%al
085dc5d0 +0x0a4:  jne    085dc5af <+0x83>
085dc5d2 +0x0a6:  jmp    085dc5d5 <+0xa9>
085dc5d4 +0x0a8:  nop
085dc5d5 +0x0a9:  mov    -0x20(%ebp),%eax
085dc5d8 +0x0ac:  mov    %eax,-0xc(%ebp)
085dc5db +0x0af:  jmp    085dc60b <+0xdf>
085dc5dd +0x0b1:  mov    -0xc(%ebp),%eax
085dc5e0 +0x0b4:  shl    $0x2,%eax
085dc5e3 +0x0b7:  add    0xc(%ebp),%eax
085dc5e6 +0x0ba:  mov    -0xc(%ebp),%edx
085dc5e9 +0x0bd:  sub    $0x1,%edx
085dc5ec +0x0c0:  shl    $0x2,%edx
085dc5ef +0x0c3:  add    0xc(%ebp),%edx
085dc5f2 +0x0c6:  mov    (%edx),%edx
085dc5f4 +0x0c8:  mov    %edx,(%eax)
085dc5f6 +0x0ca:  mov    -0xc(%ebp),%eax
085dc5f9 +0x0cd:  mov    -0xc(%ebp),%edx
085dc5fc +0x0d0:  sub    $0x1,%edx
085dc5ff +0x0d3:  mov    -0x40(%ebp,%edx,4),%edx
085dc603 +0x0d7:  mov    %edx,-0x40(%ebp,%eax,4)
085dc607 +0x0db:  subl   $0x1,-0xc(%ebp)
085dc60b +0x0df:  mov    -0x14(%ebp),%eax
085dc60e +0x0e2:  cmp    -0xc(%ebp),%eax
085dc611 +0x0e5:  setl   %al
085dc614 +0x0e8:  test   %al,%al
085dc616 +0x0ea:  jne    085dc5dd <+0xb1>
085dc618 +0x0ec:  mov    -0x14(%ebp),%eax
085dc61b +0x0ef:  shl    $0x2,%eax
085dc61e +0x0f2:  add    0xc(%ebp),%eax
085dc621 +0x0f5:  mov    -0x1c(%ebp),%edx
085dc624 +0x0f8:  mov    %edx,(%eax)
085dc626 +0x0fa:  mov    -0x14(%ebp),%eax
085dc629 +0x0fd:  mov    -0x18(%ebp),%edx
085dc62c +0x100:  mov    %edx,-0x40(%ebp,%eax,4)
085dc630 +0x104:  addl   $0x1,-0x20(%ebp)
085dc634 +0x108:  addl   $0x1,-0x1c(%ebp)
085dc638 +0x10c:  cmpl   $0x7,-0x1c(%ebp)
085dc63c +0x110:  setle  %al
085dc63f +0x113:  test   %al,%al
085dc641 +0x115:  jne    085dc582 <+0x56>
085dc647 +0x11b:  mov    -0x20(%ebp),%eax
085dc64a +0x11e:  leave
085dc64b +0x11f:  ret
```

## 反编译 C

```c
// PvP_Room::GetRanking @ 0x85dc52c

/* PvP_Room::GetRanking(int*) const */

int __thiscall PvP_Room::GetRanking(PvP_Room *this,int *param_1)

{
  int aiStack_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 4) == 4) || (*(int *)(this + 4) == 5)) {
    local_24 = CDeathMatchBattleMgr::getRanking
                         ((CDeathMatchBattleMgr *)(this + 0x69c),(CUser **)(this + 0x30),param_1);
  }
  else {
    local_24 = 0;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
      if (*(int *)(this + (local_20 + 0xc) * 4) != 0) {
        local_1c = *(int *)(this + (local_20 + 0x1c) * 4 + 8);
        for (local_18 = 0;
            (local_18 < local_24 &&
            (local_14 = aiStack_44[local_18], local_1c <= aiStack_44[local_18]));
            local_18 = local_18 + 1) {
        }
        for (local_10 = local_24; local_18 < local_10; local_10 = local_10 + -1) {
          param_1[local_10] = param_1[local_10 + -1];
          aiStack_44[local_10] = aiStack_44[local_10 + -1];
        }
        param_1[local_18] = local_20;
        aiStack_44[local_18] = local_1c;
        local_24 = local_24 + 1;
      }
    }
  }
  return local_24;
}
```
