# InsertRewardExp

`_ZN8WongWork10CBossTower15InsertRewardExpEv`

`WongWork::CBossTower::InsertRewardExp()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081446a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081446a2  _ZN8WongWork10CBossTower15InsertRewardExpEv
#           WongWork::CBossTower::InsertRewardExp()
# range [0x081446a2, 0x0814479f]
081446a2 +0x00:  push   %ebp
081446a3 +0x01:  mov    %esp,%ebp
081446a5 +0x03:  sub    $0x48,%esp
081446a8 +0x06:  movl   $0x0,-0x14(%ebp)
081446af +0x0d:  jmp    08144789 <+0xe7>
081446b4 +0x12:  mov    0x8(%ebp),%eax
081446b7 +0x15:  mov    0x4(%eax),%eax
081446ba +0x18:  mov    -0x14(%ebp),%edx
081446bd +0x1b:  mov    %edx,0x4(%esp)
081446c1 +0x1f:  mov    %eax,(%esp)
081446c4 +0x22:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081446c9 +0x27:  mov    %eax,-0x10(%ebp)
081446cc +0x2a:  cmpl   $0x0,-0x10(%ebp)
081446d0 +0x2e:  je     081446ee <+0x4c>
081446d2 +0x30:  mov    0x8(%ebp),%eax
081446d5 +0x33:  mov    0x4(%eax),%eax
081446d8 +0x36:  mov    -0x14(%ebp),%edx
081446db +0x39:  mov    %edx,0x4(%esp)
081446df +0x3d:  mov    %eax,(%esp)
081446e2 +0x40:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
081446e7 +0x45:  xor    $0x1,%eax
081446ea +0x48:  test   %al,%al
081446ec +0x4a:  je     081446f5 <+0x53>
081446ee +0x4c:  mov    $0x1,%eax
081446f3 +0x51:  jmp    081446fa <+0x58>
081446f5 +0x53:  mov    $0x0,%eax
081446fa +0x58:  test   %al,%al
081446fc +0x5a:  jne    08144784 <+0xe2>
08144702 +0x60:  movl   $0x0,-0x18(%ebp)
08144709 +0x67:  movl   $0x0,-0x1c(%ebp)
08144710 +0x6e:  movb   $0x0,-0x9(%ebp)
08144714 +0x72:  mov    -0x14(%ebp),%edx
08144717 +0x75:  mov    0x8(%ebp),%eax
0814471a +0x78:  add    $0x4,%edx
0814471d +0x7b:  mov    0x8(%eax,%edx,4),%eax
08144721 +0x7f:  movl   $0x0,0x18(%esp)
08144729 +0x87:  movl   $0x0,0x14(%esp)
08144731 +0x8f:  movl   $0x2,0x10(%esp)
08144739 +0x97:  lea    -0x1c(%ebp),%edx
0814473c +0x9a:  mov    %edx,0xc(%esp)
08144740 +0x9e:  lea    -0x18(%ebp),%edx
08144743 +0xa1:  mov    %edx,0x8(%esp)
08144747 +0xa5:  mov    %eax,0x4(%esp)
0814474b +0xa9:  mov    -0x10(%ebp),%eax
0814474e +0xac:  mov    %eax,(%esp)
08144751 +0xaf:  call   0866a3fe <_ZN5CUser11gain_exp_spEiRiS0_13eExpAddReasonib>  ; CUser::gain_exp_sp(int, int&, int&, eExpAddReason, int, bool)
08144756 +0xb4:  mov    %al,-0x9(%ebp)
08144759 +0xb7:  cmpb   $0x0,-0x9(%ebp)
0814475d +0xbb:  je     08144785 <+0xe3>
0814475f +0xbd:  movl   $0x1,0xc(%esp)
08144767 +0xc5:  movl   $0x2,0x8(%esp)
0814476f +0xcd:  movl   $0x2,0x4(%esp)
08144777 +0xd5:  mov    -0x10(%ebp),%eax
0814477a +0xd8:  mov    %eax,(%esp)
0814477d +0xdb:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
08144782 +0xe0:  jmp    08144785 <+0xe3>
08144784 +0xe2:  nop
08144785 +0xe3:  addl   $0x1,-0x14(%ebp)
08144789 +0xe7:  cmpl   $0x3,-0x14(%ebp)
0814478d +0xeb:  setle  %al
08144790 +0xee:  test   %al,%al
08144792 +0xf0:  jne    081446b4 <+0x12>
08144798 +0xf6:  mov    $0x1,%eax
0814479d +0xfb:  leave
0814479e +0xfc:  ret
0814479f +0xfd:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::InsertRewardExp @ 0x81446a2

/* WongWork::CBossTower::InsertRewardExp() */

undefined4 __thiscall WongWork::CBossTower::InsertRewardExp(CBossTower *this)

{
  bool bVar1;
  char cVar2;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  CUser *local_14;
  char local_d;
  
  local_18 = 0;
  do {
    if (3 < local_18) {
      return 1;
    }
    local_14 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_18);
    if (local_14 == (CUser *)0x0) {
LAB_081446ee:
      bVar1 = true;
    }
    else {
      cVar2 = CParty::checkValidUser(*(CParty **)(this + 4),local_18);
      if (cVar2 != '\x01') goto LAB_081446ee;
      bVar1 = false;
    }
    if (!bVar1) {
      local_1c = 0;
      local_20 = 0;
      local_d = 0;
      local_d = CUser::gain_exp_sp(local_14,*(undefined4 *)(this + (local_18 + 4) * 4 + 8),&local_1c
                                   ,&local_20,2,0,0);
      if (local_d != '\0') {
        CUser::SendNotiPacket(local_14,2,2,1);
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
