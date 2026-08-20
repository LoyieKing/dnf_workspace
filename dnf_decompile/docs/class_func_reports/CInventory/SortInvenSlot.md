# SortInvenSlot

`_ZN10CInventory13SortInvenSlotEN10Inven_Item9ITEM_TYPEE`

`CInventory::SortInvenSlot(Inven_Item::ITEM_TYPE)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08504a8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08504a8a  _ZN10CInventory13SortInvenSlotEN10Inven_Item9ITEM_TYPEE
#           CInventory::SortInvenSlot(Inven_Item::ITEM_TYPE)
# range [0x08504a8a, 0x08504cc4]
08504a8a +0x000:  push   %ebp
08504a8b +0x001:  mov    %esp,%ebp
08504a8d +0x003:  push   %esi
08504a8e +0x004:  push   %ebx
08504a8f +0x005:  sub    $0x60,%esp
08504a92 +0x008:  movl   $0x0,-0x40(%ebp)
08504a99 +0x00f:  movl   $0x0,-0x44(%ebp)
08504aa0 +0x016:  movl   $0x0,-0x2c(%ebp)
08504aa7 +0x01d:  lea    -0x44(%ebp),%eax
08504aaa +0x020:  mov    %eax,0xc(%esp)
08504aae +0x024:  lea    -0x40(%ebp),%eax
08504ab1 +0x027:  mov    %eax,0x8(%esp)
08504ab5 +0x02b:  mov    0xc(%ebp),%eax
08504ab8 +0x02e:  mov    %eax,0x4(%esp)
08504abc +0x032:  mov    0x8(%ebp),%eax
08504abf +0x035:  mov    %eax,(%esp)
08504ac2 +0x038:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08504ac7 +0x03d:  movl   $0x0,-0x28(%ebp)
08504ace +0x044:  mov    -0x44(%ebp),%eax
08504ad1 +0x047:  mov    %eax,-0x2c(%ebp)
08504ad4 +0x04a:  jmp    08504afb <+0x71>
08504ad6 +0x04c:  mov    0x8(%ebp),%eax
08504ad9 +0x04f:  mov    0x650(%eax),%edx
08504adf +0x055:  mov    -0x2c(%ebp),%eax
08504ae2 +0x058:  imul   $0x3d,%eax,%eax
08504ae5 +0x05b:  lea    (%edx,%eax,1),%eax
08504ae8 +0x05e:  mov    0x2(%eax),%eax
08504aeb +0x061:  test   %eax,%eax
08504aed +0x063:  je     08504af7 <+0x6d>
08504aef +0x065:  mov    -0x2c(%ebp),%eax
08504af2 +0x068:  mov    %eax,-0x28(%ebp)
08504af5 +0x06b:  jmp    08504b08 <+0x7e>
08504af7 +0x06d:  subl   $0x1,-0x2c(%ebp)
08504afb +0x071:  mov    -0x40(%ebp),%eax
08504afe +0x074:  cmp    %eax,-0x2c(%ebp)
08504b01 +0x077:  setge  %al
08504b04 +0x07a:  test   %al,%al
08504b06 +0x07c:  jne    08504ad6 <+0x4c>
08504b08 +0x07e:  mov    -0x40(%ebp),%eax
08504b0b +0x081:  cmp    %eax,-0x28(%ebp)
08504b0e +0x084:  je     08504b16 <+0x8c>
08504b10 +0x086:  cmpl   $0x0,-0x28(%ebp)
08504b14 +0x08a:  jne    08504b20 <+0x96>
08504b16 +0x08c:  mov    $0x12,%eax
08504b1b +0x091:  jmp    08504cbe <+0x234>
08504b20 +0x096:  movb   $0x1,-0x21(%ebp)
08504b24 +0x09a:  mov    -0x40(%ebp),%eax
08504b27 +0x09d:  mov    %eax,-0x2c(%ebp)
08504b2a +0x0a0:  jmp    08504b4f <+0xc5>
08504b2c +0x0a2:  mov    0x8(%ebp),%eax
08504b2f +0x0a5:  mov    0x650(%eax),%edx
08504b35 +0x0ab:  mov    -0x2c(%ebp),%eax
08504b38 +0x0ae:  imul   $0x3d,%eax,%eax
08504b3b +0x0b1:  lea    (%edx,%eax,1),%eax
08504b3e +0x0b4:  mov    0x2(%eax),%eax
08504b41 +0x0b7:  test   %eax,%eax
08504b43 +0x0b9:  jne    08504b4b <+0xc1>
08504b45 +0x0bb:  movb   $0x0,-0x21(%ebp)
08504b49 +0x0bf:  jmp    08504b5c <+0xd2>
08504b4b +0x0c1:  addl   $0x1,-0x2c(%ebp)
08504b4f +0x0c5:  mov    -0x2c(%ebp),%eax
08504b52 +0x0c8:  cmp    -0x28(%ebp),%eax
08504b55 +0x0cb:  setle  %al
08504b58 +0x0ce:  test   %al,%al
08504b5a +0x0d0:  jne    08504b2c <+0xa2>
08504b5c +0x0d2:  cmpb   $0x0,-0x21(%ebp)
08504b60 +0x0d6:  je     08504b6c <+0xe2>
08504b62 +0x0d8:  mov    $0x12,%eax
08504b67 +0x0dd:  jmp    08504cbe <+0x234>
08504b6c +0x0e2:  movl   $0xffffffff,-0x20(%ebp)
08504b73 +0x0e9:  mov    -0x44(%ebp),%eax
08504b76 +0x0ec:  mov    %eax,-0x2c(%ebp)
08504b79 +0x0ef:  jmp    08504ca5 <+0x21b>
08504b7e +0x0f4:  mov    0x8(%ebp),%eax
08504b81 +0x0f7:  mov    0x650(%eax),%edx
08504b87 +0x0fd:  mov    -0x2c(%ebp),%eax
08504b8a +0x100:  imul   $0x3d,%eax,%eax
08504b8d +0x103:  lea    (%edx,%eax,1),%eax
08504b90 +0x106:  mov    0x2(%eax),%eax
08504b93 +0x109:  test   %eax,%eax
08504b95 +0x10b:  je     08504ca1 <+0x217>
08504b9b +0x111:  mov    -0x44(%ebp),%edx
08504b9e +0x114:  mov    -0x40(%ebp),%eax
08504ba1 +0x117:  mov    %edx,0xc(%esp)
08504ba5 +0x11b:  mov    %eax,0x8(%esp)
08504ba9 +0x11f:  mov    -0x2c(%ebp),%eax
08504bac +0x122:  mov    %eax,0x4(%esp)
08504bb0 +0x126:  mov    0x8(%ebp),%eax
08504bb3 +0x129:  mov    %eax,(%esp)
08504bb6 +0x12c:  call   085049c8 <_ZN10CInventory30MoveItemToEmptySlotOfInventoryEiii>  ; CInventory::MoveItemToEmptySlotOfInventory(int, int, int)
08504bbb +0x131:  mov    %eax,-0x1c(%ebp)
08504bbe +0x134:  cmpl   $0x0,-0x1c(%ebp)
08504bc2 +0x138:  je     08504c1e <+0x194>
08504bc4 +0x13a:  mov    -0x44(%ebp),%esi
08504bc7 +0x13d:  mov    -0x40(%ebp),%ebx
08504bca +0x140:  movl   $0x5,0xc(%esp)
08504bd2 +0x148:  movl   $0x194d,0x8(%esp)
08504bda +0x150:  movl   $&_ZZN10CInventory13SortInvenSlotEN10Inven_Item9ITEM_TYPEEE19__PRETTY_FUNCTION__,0x4(%esp)
08504be2 +0x158:  lea    -0x3c(%ebp),%eax
08504be5 +0x15b:  mov    %eax,(%esp)
08504be8 +0x15e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08504bed +0x163:  mov    %esi,0x14(%esp)
08504bf1 +0x167:  mov    %ebx,0x10(%esp)
08504bf5 +0x16b:  mov    -0x2c(%ebp),%eax
08504bf8 +0x16e:  mov    %eax,0xc(%esp)
08504bfc +0x172:  mov    -0x1c(%ebp),%eax
08504bff +0x175:  mov    %eax,0x8(%esp)
08504c03 +0x179:  movl   $"MoveItemToEmptySlotOfInventory return %d ( index %d,s %d,e %d )",0x4(%esp)
08504c0b +0x181:  lea    -0x3c(%ebp),%eax
08504c0e +0x184:  mov    %eax,(%esp)
08504c11 +0x187:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08504c16 +0x18c:  mov    -0x1c(%ebp),%eax
08504c19 +0x18f:  jmp    08504cbe <+0x234>
08504c1e +0x194:  movl   $0x0,-0x18(%ebp)
08504c25 +0x19b:  mov    -0x44(%ebp),%eax
08504c28 +0x19e:  mov    %eax,-0x10(%ebp)
08504c2b +0x1a1:  jmp    08504c52 <+0x1c8>
08504c2d +0x1a3:  mov    0x8(%ebp),%eax
08504c30 +0x1a6:  mov    0x650(%eax),%edx
08504c36 +0x1ac:  mov    -0x10(%ebp),%eax
08504c39 +0x1af:  imul   $0x3d,%eax,%eax
08504c3c +0x1b2:  lea    (%edx,%eax,1),%eax
08504c3f +0x1b5:  mov    0x2(%eax),%eax
08504c42 +0x1b8:  test   %eax,%eax
08504c44 +0x1ba:  je     08504c4e <+0x1c4>
08504c46 +0x1bc:  mov    -0x10(%ebp),%eax
08504c49 +0x1bf:  mov    %eax,-0x18(%ebp)
08504c4c +0x1c2:  jmp    08504c5f <+0x1d5>
08504c4e +0x1c4:  subl   $0x1,-0x10(%ebp)
08504c52 +0x1c8:  mov    -0x40(%ebp),%eax
08504c55 +0x1cb:  cmp    %eax,-0x10(%ebp)
08504c58 +0x1ce:  setge  %al
08504c5b +0x1d1:  test   %al,%al
08504c5d +0x1d3:  jne    08504c2d <+0x1a3>
08504c5f +0x1d5:  movb   $0x1,-0x11(%ebp)
08504c63 +0x1d9:  mov    -0x40(%ebp),%eax
08504c66 +0x1dc:  mov    %eax,-0xc(%ebp)
08504c69 +0x1df:  jmp    08504c8e <+0x204>
08504c6b +0x1e1:  mov    0x8(%ebp),%eax
08504c6e +0x1e4:  mov    0x650(%eax),%edx
08504c74 +0x1ea:  mov    -0xc(%ebp),%eax
08504c77 +0x1ed:  imul   $0x3d,%eax,%eax
08504c7a +0x1f0:  lea    (%edx,%eax,1),%eax
08504c7d +0x1f3:  mov    0x2(%eax),%eax
08504c80 +0x1f6:  test   %eax,%eax
08504c82 +0x1f8:  jne    08504c8a <+0x200>
08504c84 +0x1fa:  movb   $0x0,-0x11(%ebp)
08504c88 +0x1fe:  jmp    08504c9b <+0x211>
08504c8a +0x200:  addl   $0x1,-0xc(%ebp)
08504c8e +0x204:  mov    -0xc(%ebp),%eax
08504c91 +0x207:  cmp    -0x18(%ebp),%eax
08504c94 +0x20a:  setle  %al
08504c97 +0x20d:  test   %al,%al
08504c99 +0x20f:  jne    08504c6b <+0x1e1>
08504c9b +0x211:  cmpb   $0x0,-0x11(%ebp)
08504c9f +0x215:  jne    08504cb8 <+0x22e>
08504ca1 +0x217:  subl   $0x1,-0x2c(%ebp)
08504ca5 +0x21b:  mov    -0x40(%ebp),%eax
08504ca8 +0x21e:  cmp    %eax,-0x2c(%ebp)
08504cab +0x221:  setge  %al
08504cae +0x224:  test   %al,%al
08504cb0 +0x226:  jne    08504b7e <+0xf4>
08504cb6 +0x22c:  jmp    08504cb9 <+0x22f>
08504cb8 +0x22e:  nop
08504cb9 +0x22f:  mov    $0x0,%eax
08504cbe +0x234:  add    $0x60,%esp
08504cc1 +0x237:  pop    %ebx
08504cc2 +0x238:  pop    %esi
08504cc3 +0x239:  pop    %ebp
08504cc4 +0x23a:  ret
```

## 反编译 C

```c
// CInventory::SortInvenSlot @ 0x8504a8a

/* CInventory::SortInvenSlot(Inven_Item::ITEM_TYPE) */

int __thiscall CInventory::SortInvenSlot(CInventory *this,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_48;
  int local_44;
  cMyTrace local_40 [16];
  int local_30;
  int local_2c;
  char local_25;
  undefined4 local_24;
  int local_20;
  int local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  local_44 = 0;
  local_48 = 0;
  local_30 = 0;
  StartEndPos(this,param_2,&local_44,&local_48);
  local_2c = 0;
  for (local_30 = local_48; local_44 <= local_30; local_30 = local_30 + -1) {
    if (*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2) != 0) {
      local_2c = local_30;
      break;
    }
  }
  if ((local_2c == local_44) || (local_2c == 0)) {
    iVar2 = 0x12;
  }
  else {
    local_25 = '\x01';
    for (local_30 = local_44; local_30 <= local_2c; local_30 = local_30 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2) == 0) {
        local_25 = '\0';
        break;
      }
    }
    if (local_25 == '\0') {
      local_24 = 0xffffffff;
      for (local_30 = local_48; local_44 <= local_30; local_30 = local_30 + -1) {
        if (*(int *)(*(int *)(this + 0x650) + local_30 * 0x3d + 2) != 0) {
          local_20 = MoveItemToEmptySlotOfInventory(this,local_30,local_44,local_48);
          iVar1 = local_44;
          iVar2 = local_48;
          if (local_20 != 0) {
            cMyTrace::cMyTrace(local_40,"int CInventory::SortInvenSlot(Inven_Item::ITEM_TYPE)",
                               0x194d,5);
            cMyTrace::operator()
                      (local_40,"MoveItemToEmptySlotOfInventory return %d ( index %d,s %d,e %d )",
                       local_20,local_30,iVar1,iVar2);
            return local_20;
          }
          local_1c = 0;
          for (local_14 = local_48; local_44 <= local_14; local_14 = local_14 + -1) {
            if (*(int *)(*(int *)(this + 0x650) + local_14 * 0x3d + 2) != 0) {
              local_1c = local_14;
              break;
            }
          }
          local_15 = '\x01';
          for (local_10 = local_44; local_10 <= local_1c; local_10 = local_10 + 1) {
            if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == 0) {
              local_15 = '\0';
              break;
            }
          }
          local_20 = 0;
          if (local_15 != '\0') break;
        }
      }
      iVar2 = 0;
    }
    else {
      iVar2 = 0x12;
    }
  }
  return iVar2;
}
```
