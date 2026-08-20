# check_cur_teleport_state

`_ZN14CPartyTelePort24check_cur_teleport_stateEv`

`CPartyTelePort::check_cur_teleport_state()`

| 类 | 地址 |
|---|---|
| `CPartyTelePort` | `0x085bbb08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bbb08  _ZN14CPartyTelePort24check_cur_teleport_stateEv
#           CPartyTelePort::check_cur_teleport_state()
# range [0x085bbb08, 0x085bbbb7]
085bbb08 +0x00:  push   %ebp
085bbb09 +0x01:  mov    %esp,%ebp
085bbb0b +0x03:  sub    $0x28,%esp
085bbb0e +0x06:  mov    0x8(%ebp),%eax
085bbb11 +0x09:  mov    (%eax),%eax
085bbb13 +0x0b:  test   %eax,%eax
085bbb15 +0x0d:  jne    085bbb21 <+0x19>
085bbb17 +0x0f:  mov    $0x0,%eax
085bbb1c +0x14:  jmp    085bbbb5 <+0xad>
085bbb21 +0x19:  movb   $0x1,-0xd(%ebp)
085bbb25 +0x1d:  movl   $0x0,-0xc(%ebp)
085bbb2c +0x24:  jmp    085bbb8d <+0x85>
085bbb2e +0x26:  mov    0x8(%ebp),%eax
085bbb31 +0x29:  mov    (%eax),%eax
085bbb33 +0x2b:  mov    -0xc(%ebp),%edx
085bbb36 +0x2e:  mov    %edx,0x4(%esp)
085bbb3a +0x32:  mov    %eax,(%esp)
085bbb3d +0x35:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
085bbb42 +0x3a:  xor    $0x1,%eax
085bbb45 +0x3d:  test   %al,%al
085bbb47 +0x3f:  jne    085bbb85 <+0x7d>
085bbb49 +0x41:  mov    -0xc(%ebp),%eax
085bbb4c +0x44:  mov    %eax,0x4(%esp)
085bbb50 +0x48:  mov    0x8(%ebp),%eax
085bbb53 +0x4b:  mov    %eax,(%esp)
085bbb56 +0x4e:  call   085bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>  ; CPartyTelePort::get_teleport_member_state(int)
085bbb5b +0x53:  cmp    $0x4,%al
085bbb5d +0x55:  sete   %al
085bbb60 +0x58:  test   %al,%al
085bbb62 +0x5a:  jne    085bbb88 <+0x80>
085bbb64 +0x5c:  mov    -0xc(%ebp),%eax
085bbb67 +0x5f:  mov    %eax,0x4(%esp)
085bbb6b +0x63:  mov    0x8(%ebp),%eax
085bbb6e +0x66:  mov    %eax,(%esp)
085bbb71 +0x69:  call   085bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>  ; CPartyTelePort::get_teleport_member_state(int)
085bbb76 +0x6e:  cmp    $0x1,%al
085bbb78 +0x70:  setne  %al
085bbb7b +0x73:  test   %al,%al
085bbb7d +0x75:  je     085bbb89 <+0x81>
085bbb7f +0x77:  movb   $0x0,-0xd(%ebp)
085bbb83 +0x7b:  jmp    085bbb89 <+0x81>
085bbb85 +0x7d:  nop
085bbb86 +0x7e:  jmp    085bbb89 <+0x81>
085bbb88 +0x80:  nop
085bbb89 +0x81:  addl   $0x1,-0xc(%ebp)
085bbb8d +0x85:  cmpl   $0x3,-0xc(%ebp)
085bbb91 +0x89:  setle  %al
085bbb94 +0x8c:  test   %al,%al
085bbb96 +0x8e:  jne    085bbb2e <+0x26>
085bbb98 +0x90:  cmpb   $0x0,-0xd(%ebp)
085bbb9c +0x94:  je     085bbbb1 <+0xa9>
085bbb9e +0x96:  movl   $0x1,0x4(%esp)
085bbba6 +0x9e:  mov    0x8(%ebp),%eax
085bbba9 +0xa1:  mov    %eax,(%esp)
085bbbac +0xa4:  call   0822d7fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ea4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ea4
085bbbb1 +0xa9:  movzbl -0xd(%ebp),%eax
085bbbb5 +0xad:  leave
085bbbb6 +0xae:  ret
085bbbb7 +0xaf:  nop
```

## 反编译 C

```c
// CPartyTelePort::check_cur_teleport_state @ 0x85bbb08

/* CPartyTelePort::check_cur_teleport_state() */

char __thiscall CPartyTelePort::check_cur_teleport_state(CPartyTelePort *this)

{
  char cVar1;
  char local_11;
  int local_10;
  
  if (*(int *)this == 0) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar1 = CParty::checkValidUser(*(CParty **)this,local_10);
      if (((cVar1 == '\x01') && (cVar1 = get_teleport_member_state(this,local_10), cVar1 != '\x04'))
         && (cVar1 = get_teleport_member_state(this,local_10), cVar1 != '\x01')) {
        local_11 = '\0';
      }
    }
    if (local_11 != '\0') {
      set_teleport_state(this,'\x01');
    }
  }
  return local_11;
}
```
