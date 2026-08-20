# parseSlot

`_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi`

`advancealtar::DB_Load::parseSlot(char*, advancealtar::_Slot*, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813e542` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813e542  _ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi
#           advancealtar::DB_Load::parseSlot(char*, advancealtar::_Slot*, int)
# range [0x0813e542, 0x0813e707]
0813e542 +0x000:  push   %ebp
0813e543 +0x001:  mov    %esp,%ebp
0813e545 +0x003:  push   %ebx
0813e546 +0x004:  sub    $0x34,%esp
0813e549 +0x007:  cmpl   $0x0,0xc(%ebp)
0813e54d +0x00b:  je     0813e555 <+0x13>
0813e54f +0x00d:  cmpl   $0x0,0x10(%ebp)
0813e553 +0x011:  jne    0813e55f <+0x1d>
0813e555 +0x013:  mov    $0x0,%eax
0813e55a +0x018:  jmp    0813e702 <+0x1c0>
0813e55f +0x01d:  movl   $0x0,-0x1c(%ebp)
0813e566 +0x024:  lea    -0x1c(%ebp),%eax
0813e569 +0x027:  mov    %eax,0x8(%esp)
0813e56d +0x02b:  movl   $"|",0x4(%esp)
0813e575 +0x033:  mov    0xc(%ebp),%eax
0813e578 +0x036:  mov    %eax,(%esp)
0813e57b +0x039:  call   0807e150 <_init+0xa48>
0813e580 +0x03e:  mov    %eax,-0x18(%ebp)
0813e583 +0x041:  movl   $0x0,-0x14(%ebp)
0813e58a +0x048:  jmp    0813e6db <+0x199>
0813e58f +0x04d:  movl   $0x0,-0x20(%ebp)
0813e596 +0x054:  lea    -0x20(%ebp),%eax
0813e599 +0x057:  mov    %eax,0x8(%esp)
0813e59d +0x05b:  movl   $",",0x4(%esp)
0813e5a5 +0x063:  mov    -0x18(%ebp),%eax
0813e5a8 +0x066:  mov    %eax,(%esp)
0813e5ab +0x069:  call   0807e150 <_init+0xa48>
0813e5b0 +0x06e:  mov    %eax,-0x10(%ebp)
0813e5b3 +0x071:  movl   $0x0,-0xc(%ebp)
0813e5ba +0x078:  jmp    0813e696 <+0x154>
0813e5bf +0x07d:  cmpl   $0x0,-0x10(%ebp)
0813e5c3 +0x081:  je     0813e6b8 <+0x176>
0813e5c9 +0x087:  mov    -0xc(%ebp),%eax
0813e5cc +0x08a:  cmp    $0x1,%eax
0813e5cf +0x08d:  je     0813e613 <+0xd1>
0813e5d1 +0x08f:  cmp    $0x1,%eax
0813e5d4 +0x092:  jg     0813e5df <+0x9d>
0813e5d6 +0x094:  test   %eax,%eax
0813e5d8 +0x096:  je     0813e5ee <+0xac>
0813e5da +0x098:  jmp    0813e674 <+0x132>
0813e5df +0x09d:  cmp    $0x2,%eax
0813e5e2 +0x0a0:  je     0813e634 <+0xf2>
0813e5e4 +0x0a2:  cmp    $0x3,%eax
0813e5e7 +0x0a5:  je     0813e655 <+0x113>
0813e5e9 +0x0a7:  jmp    0813e674 <+0x132>
0813e5ee +0x0ac:  mov    -0x14(%ebp),%edx
0813e5f1 +0x0af:  mov    %edx,%eax
0813e5f3 +0x0b1:  shl    $0x2,%eax
0813e5f6 +0x0b4:  add    %edx,%eax
0813e5f8 +0x0b6:  add    %eax,%eax
0813e5fa +0x0b8:  mov    %eax,%ebx
0813e5fc +0x0ba:  add    0x10(%ebp),%ebx
0813e5ff +0x0bd:  mov    -0x10(%ebp),%eax
0813e602 +0x0c0:  mov    %eax,(%esp)
0813e605 +0x0c3:  call   0807e6f0 <_init+0xfe8>
0813e60a +0x0c8:  test   %eax,%eax
0813e60c +0x0ca:  setg   %al
0813e60f +0x0cd:  mov    %al,(%ebx)
0813e611 +0x0cf:  jmp    0813e674 <+0x132>
0813e613 +0x0d1:  mov    -0x14(%ebp),%edx
0813e616 +0x0d4:  mov    %edx,%eax
0813e618 +0x0d6:  shl    $0x2,%eax
0813e61b +0x0d9:  add    %edx,%eax
0813e61d +0x0db:  add    %eax,%eax
0813e61f +0x0dd:  mov    %eax,%ebx
0813e621 +0x0df:  add    0x10(%ebp),%ebx
0813e624 +0x0e2:  mov    -0x10(%ebp),%eax
0813e627 +0x0e5:  mov    %eax,(%esp)
0813e62a +0x0e8:  call   0807e6f0 <_init+0xfe8>
0813e62f +0x0ed:  mov    %eax,0x1(%ebx)
0813e632 +0x0f0:  jmp    0813e674 <+0x132>
0813e634 +0x0f2:  mov    -0x14(%ebp),%edx
0813e637 +0x0f5:  mov    %edx,%eax
0813e639 +0x0f7:  shl    $0x2,%eax
0813e63c +0x0fa:  add    %edx,%eax
0813e63e +0x0fc:  add    %eax,%eax
0813e640 +0x0fe:  mov    %eax,%ebx
0813e642 +0x100:  add    0x10(%ebp),%ebx
0813e645 +0x103:  mov    -0x10(%ebp),%eax
0813e648 +0x106:  mov    %eax,(%esp)
0813e64b +0x109:  call   0807e6f0 <_init+0xfe8>
0813e650 +0x10e:  mov    %al,0x5(%ebx)
0813e653 +0x111:  jmp    0813e674 <+0x132>
0813e655 +0x113:  mov    -0x14(%ebp),%edx
0813e658 +0x116:  mov    %edx,%eax
0813e65a +0x118:  shl    $0x2,%eax
0813e65d +0x11b:  add    %edx,%eax
0813e65f +0x11d:  add    %eax,%eax
0813e661 +0x11f:  mov    %eax,%ebx
0813e663 +0x121:  add    0x10(%ebp),%ebx
0813e666 +0x124:  mov    -0x10(%ebp),%eax
0813e669 +0x127:  mov    %eax,(%esp)
0813e66c +0x12a:  call   0807e6f0 <_init+0xfe8>
0813e671 +0x12f:  mov    %eax,0x6(%ebx)
0813e674 +0x132:  lea    -0x20(%ebp),%eax
0813e677 +0x135:  mov    %eax,0x8(%esp)
0813e67b +0x139:  movl   $",",0x4(%esp)
0813e683 +0x141:  movl   $0x0,(%esp)
0813e68a +0x148:  call   0807e150 <_init+0xa48>
0813e68f +0x14d:  mov    %eax,-0x10(%ebp)
0813e692 +0x150:  addl   $0x1,-0xc(%ebp)
0813e696 +0x154:  cmpl   $0x0,-0x10(%ebp)
0813e69a +0x158:  je     0813e6a9 <+0x167>
0813e69c +0x15a:  cmpl   $0x3,-0xc(%ebp)
0813e6a0 +0x15e:  jg     0813e6a9 <+0x167>
0813e6a2 +0x160:  mov    $0x1,%eax
0813e6a7 +0x165:  jmp    0813e6ae <+0x16c>
0813e6a9 +0x167:  mov    $0x0,%eax
0813e6ae +0x16c:  test   %al,%al
0813e6b0 +0x16e:  jne    0813e5bf <+0x7d>
0813e6b6 +0x174:  jmp    0813e6b9 <+0x177>
0813e6b8 +0x176:  nop
0813e6b9 +0x177:  lea    -0x1c(%ebp),%eax
0813e6bc +0x17a:  mov    %eax,0x8(%esp)
0813e6c0 +0x17e:  movl   $"|",0x4(%esp)
0813e6c8 +0x186:  movl   $0x0,(%esp)
0813e6cf +0x18d:  call   0807e150 <_init+0xa48>
0813e6d4 +0x192:  mov    %eax,-0x18(%ebp)
0813e6d7 +0x195:  addl   $0x1,-0x14(%ebp)
0813e6db +0x199:  cmpl   $0x0,-0x18(%ebp)
0813e6df +0x19d:  je     0813e6f0 <+0x1ae>
0813e6e1 +0x19f:  mov    -0x14(%ebp),%eax
0813e6e4 +0x1a2:  cmp    0x14(%ebp),%eax
0813e6e7 +0x1a5:  jge    0813e6f0 <+0x1ae>
0813e6e9 +0x1a7:  mov    $0x1,%eax
0813e6ee +0x1ac:  jmp    0813e6f5 <+0x1b3>
0813e6f0 +0x1ae:  mov    $0x0,%eax
0813e6f5 +0x1b3:  test   %al,%al
0813e6f7 +0x1b5:  jne    0813e58f <+0x4d>
0813e6fd +0x1bb:  mov    $0x1,%eax
0813e702 +0x1c0:  add    $0x34,%esp
0813e705 +0x1c3:  pop    %ebx
0813e706 +0x1c4:  pop    %ebp
0813e707 +0x1c5:  ret
```

## 反编译 C

```c
// advancealtar::DB_Load::parseSlot @ 0x813e542

/* advancealtar::DB_Load::parseSlot(char*, advancealtar::_Slot*, int) */

undefined4 __thiscall
advancealtar::DB_Load::parseSlot(DB_Load *this,char *param_1,_Slot *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_24;
  char *local_20;
  char *local_1c;
  int local_18;
  char *local_14;
  int local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 == (_Slot *)0x0)) {
    uVar3 = 0;
  }
  else {
    local_20 = (char *)0x0;
    local_1c = strtok_r(param_1,"|",&local_20);
    local_18 = 0;
    while( true ) {
      if ((local_1c == (char *)0x0) || (param_3 <= local_18)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) break;
      local_24 = (char *)0x0;
      local_14 = strtok_r(local_1c,",",&local_24);
      local_10 = 0;
      while( true ) {
        if ((local_14 == (char *)0x0) || (3 < local_10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || (local_14 == (char *)0x0)) break;
        if (local_10 == 1) {
          iVar1 = local_18 * 10;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar1 + 1) = iVar4;
        }
        else if (local_10 < 2) {
          if (local_10 == 0) {
            iVar1 = local_18 * 10;
            iVar4 = atoi(local_14);
            param_2[iVar1] = (_Slot)(0 < iVar4);
          }
        }
        else if (local_10 == 2) {
          iVar1 = local_18 * 10;
          iVar4 = atoi(local_14);
          param_2[iVar1 + 5] = SUB41(iVar4,0);
        }
        else if (local_10 == 3) {
          iVar1 = local_18 * 10;
          iVar4 = atoi(local_14);
          *(int *)(param_2 + iVar1 + 6) = iVar4;
        }
        local_14 = strtok_r((char *)0x0,",",&local_24);
        local_10 = local_10 + 1;
      }
      local_1c = strtok_r((char *)0x0,"|",&local_20);
      local_18 = local_18 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}
```
