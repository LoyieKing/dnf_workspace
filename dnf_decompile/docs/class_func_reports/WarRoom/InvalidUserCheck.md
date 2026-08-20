# InvalidUserCheck

`_ZN7WarRoom16InvalidUserCheckEv`

`WarRoom::InvalidUserCheck()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bb582` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bb582  _ZN7WarRoom16InvalidUserCheckEv
#           WarRoom::InvalidUserCheck()
# range [0x086bb582, 0x086bb671]
086bb582 +0x00:  push   %ebp
086bb583 +0x01:  mov    %esp,%ebp
086bb585 +0x03:  push   %ebx
086bb586 +0x04:  sub    $0x34,%esp
086bb589 +0x07:  movl   $0x0,-0xc(%ebp)
086bb590 +0x0e:  jmp    086bb65c <+0xda>
086bb595 +0x13:  mov    -0xc(%ebp),%edx
086bb598 +0x16:  mov    0x8(%ebp),%eax
086bb59b +0x19:  add    $0x48,%edx
086bb59e +0x1c:  mov    0xc(%eax,%edx,4),%eax
086bb5a2 +0x20:  test   %eax,%eax
086bb5a4 +0x22:  je     086bb657 <+0xd5>
086bb5aa +0x28:  mov    -0xc(%ebp),%edx
086bb5ad +0x2b:  mov    0x8(%ebp),%eax
086bb5b0 +0x2e:  add    $0x48,%edx
086bb5b3 +0x31:  mov    0xc(%eax,%edx,4),%eax
086bb5b7 +0x35:  mov    %eax,(%esp)
086bb5ba +0x38:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086bb5bf +0x3d:  test   %eax,%eax
086bb5c1 +0x3f:  sete   %al
086bb5c4 +0x42:  test   %al,%al
086bb5c6 +0x44:  je     086bb658 <+0xd6>
086bb5cc +0x4a:  mov    -0xc(%ebp),%edx
086bb5cf +0x4d:  mov    0x8(%ebp),%eax
086bb5d2 +0x50:  add    $0x48,%edx
086bb5d5 +0x53:  mov    0xc(%eax,%edx,4),%eax
086bb5d9 +0x57:  mov    %eax,(%esp)
086bb5dc +0x5a:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
086bb5e1 +0x5f:  movswl %ax,%ebx
086bb5e4 +0x62:  movl   $0x5,0xc(%esp)
086bb5ec +0x6a:  movl   $0x236,0x8(%esp)
086bb5f4 +0x72:  movl   $&_ZZN7WarRoom16InvalidUserCheckEvE19__PRETTY_FUNCTION__,0x4(%esp)
086bb5fc +0x7a:  lea    -0x1c(%ebp),%eax
086bb5ff +0x7d:  mov    %eax,(%esp)
086bb602 +0x80:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bb607 +0x85:  mov    %ebx,0xc(%esp)
086bb60b +0x89:  mov    -0xc(%ebp),%eax
086bb60e +0x8c:  mov    %eax,0x8(%esp)
086bb612 +0x90:  movl   $"WarRoom::InvalidUserCheck slot(%d) warRoomIndex(%d)",0x4(%esp)
086bb61a +0x98:  lea    -0x1c(%ebp),%eax
086bb61d +0x9b:  mov    %eax,(%esp)
086bb620 +0x9e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bb625 +0xa3:  mov    -0xc(%ebp),%edx
086bb628 +0xa6:  mov    0x8(%ebp),%eax
086bb62b +0xa9:  add    $0x50,%edx
086bb62e +0xac:  movl   $0xff,0x8(%eax,%edx,4)
086bb636 +0xb4:  mov    -0xc(%ebp),%edx
086bb639 +0xb7:  mov    0x8(%ebp),%eax
086bb63c +0xba:  add    $0x48,%edx
086bb63f +0xbd:  movl   $0x0,0xc(%eax,%edx,4)
086bb647 +0xc5:  mov    -0xc(%ebp),%eax
086bb64a +0xc8:  mov    0x8(%ebp),%edx
086bb64d +0xcb:  movb   $0x0,0x184(%edx,%eax,1)
086bb655 +0xd3:  jmp    086bb658 <+0xd6>
086bb657 +0xd5:  nop
086bb658 +0xd6:  addl   $0x1,-0xc(%ebp)
086bb65c +0xda:  cmpl   $0x5,-0xc(%ebp)
086bb660 +0xde:  setle  %al
086bb663 +0xe1:  test   %al,%al
086bb665 +0xe3:  jne    086bb595 <+0x13>
086bb66b +0xe9:  add    $0x34,%esp
086bb66e +0xec:  pop    %ebx
086bb66f +0xed:  pop    %ebp
086bb670 +0xee:  ret
086bb671 +0xef:  nop
```

## 反编译 C

```c
// WarRoom::InvalidUserCheck @ 0x86bb582

/* WarRoom::InvalidUserCheck() */

void __thiscall WarRoom::InvalidUserCheck(WarRoom *this)

{
  short sVar1;
  int iVar2;
  cMyTrace local_20 [16];
  int local_10;
  
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
      iVar2 = CUserCharacInfo::getCurCharacR
                        (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
      if (iVar2 == 0) {
        sVar1 = CUser::GetWarRoomIndex(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc));
        cMyTrace::cMyTrace(local_20,"void WarRoom::InvalidUserCheck()",0x236,5);
        cMyTrace::operator()
                  (local_20,"WarRoom::InvalidUserCheck slot(%d) warRoomIndex(%d)",local_10,
                   (int)sVar1);
        *(undefined4 *)(this + (local_10 + 0x50) * 4 + 8) = 0xff;
        *(undefined4 *)(this + (local_10 + 0x48) * 4 + 0xc) = 0;
        this[local_10 + 0x184] = (WarRoom)0x0;
      }
    }
  }
  return;
}
```
