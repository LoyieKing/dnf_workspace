# GetPartyType

`_ZN6CParty12GetPartyTypeEv`

`CParty::GetPartyType()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b62c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b62c0  _ZN6CParty12GetPartyTypeEv
#           CParty::GetPartyType()
# range [0x085b62c0, 0x085b640f]
085b62c0 +0x000:  push   %ebp
085b62c1 +0x001:  mov    %esp,%ebp
085b62c3 +0x003:  sub    $0x38,%esp
085b62c6 +0x006:  movl   $0x0,-0x1c(%ebp)
085b62cd +0x00d:  movb   $0x0,-0x15(%ebp)
085b62d1 +0x011:  movl   $0x0,-0x14(%ebp)
085b62d8 +0x018:  movl   $0x0,-0x10(%ebp)
085b62df +0x01f:  movl   $0x0,-0xc(%ebp)
085b62e6 +0x026:  jmp    085b63ce <+0x10e>
085b62eb +0x02b:  mov    -0xc(%ebp),%eax
085b62ee +0x02e:  mov    %eax,0x4(%esp)
085b62f2 +0x032:  mov    0x8(%ebp),%eax
085b62f5 +0x035:  mov    %eax,(%esp)
085b62f8 +0x038:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b62fd +0x03d:  xor    $0x1,%eax
085b6300 +0x040:  test   %al,%al
085b6302 +0x042:  jne    085b63c9 <+0x109>
085b6308 +0x048:  mov    -0xc(%ebp),%edx
085b630b +0x04b:  mov    0x8(%ebp),%ecx
085b630e +0x04e:  mov    %edx,%eax
085b6310 +0x050:  add    %eax,%eax
085b6312 +0x052:  add    %edx,%eax
085b6314 +0x054:  shl    $0x3,%eax
085b6317 +0x057:  lea    (%ecx,%eax,1),%eax
085b631a +0x05a:  add    $0x78,%eax
085b631d +0x05d:  mov    (%eax),%eax
085b631f +0x05f:  mov    %eax,(%esp)
085b6322 +0x062:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085b6327 +0x067:  test   %eax,%eax
085b6329 +0x069:  setne  %al
085b632c +0x06c:  test   %al,%al
085b632e +0x06e:  je     085b638d <+0xcd>
085b6330 +0x070:  cmpl   $0x0,-0x1c(%ebp)
085b6334 +0x074:  jne    085b635e <+0x9e>
085b6336 +0x076:  mov    -0xc(%ebp),%edx
085b6339 +0x079:  mov    0x8(%ebp),%ecx
085b633c +0x07c:  mov    %edx,%eax
085b633e +0x07e:  add    %eax,%eax
085b6340 +0x080:  add    %edx,%eax
085b6342 +0x082:  shl    $0x3,%eax
085b6345 +0x085:  lea    (%ecx,%eax,1),%eax
085b6348 +0x088:  add    $0x78,%eax
085b634b +0x08b:  mov    (%eax),%eax
085b634d +0x08d:  mov    %eax,(%esp)
085b6350 +0x090:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085b6355 +0x095:  mov    %eax,-0x1c(%ebp)
085b6358 +0x098:  movb   $0x1,-0x15(%ebp)
085b635c +0x09c:  jmp    085b638d <+0xcd>
085b635e +0x09e:  mov    -0xc(%ebp),%edx
085b6361 +0x0a1:  mov    0x8(%ebp),%ecx
085b6364 +0x0a4:  mov    %edx,%eax
085b6366 +0x0a6:  add    %eax,%eax
085b6368 +0x0a8:  add    %edx,%eax
085b636a +0x0aa:  shl    $0x3,%eax
085b636d +0x0ad:  lea    (%ecx,%eax,1),%eax
085b6370 +0x0b0:  add    $0x78,%eax
085b6373 +0x0b3:  mov    (%eax),%eax
085b6375 +0x0b5:  mov    %eax,(%esp)
085b6378 +0x0b8:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
085b637d +0x0bd:  mov    -0x1c(%ebp),%edx
085b6380 +0x0c0:  cmp    %edx,%eax
085b6382 +0x0c2:  setne  %al
085b6385 +0x0c5:  test   %al,%al
085b6387 +0x0c7:  je     085b638d <+0xcd>
085b6389 +0x0c9:  movb   $0x0,-0x15(%ebp)
085b638d +0x0cd:  mov    -0xc(%ebp),%edx
085b6390 +0x0d0:  mov    0x8(%ebp),%ecx
085b6393 +0x0d3:  mov    %edx,%eax
085b6395 +0x0d5:  add    %eax,%eax
085b6397 +0x0d7:  add    %edx,%eax
085b6399 +0x0d9:  shl    $0x3,%eax
085b639c +0x0dc:  lea    (%ecx,%eax,1),%eax
085b639f +0x0df:  add    $0x78,%eax
085b63a2 +0x0e2:  mov    (%eax),%eax
085b63a4 +0x0e4:  mov    %eax,(%esp)
085b63a7 +0x0e7:  call   085bfbb4 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1112>  ; global constructors keyed to CParty::cMember::cMember()+0x1112
085b63ac +0x0ec:  mov    %eax,0x4(%esp)
085b63b0 +0x0f0:  mov    0x8(%ebp),%eax
085b63b3 +0x0f3:  mov    %eax,(%esp)
085b63b6 +0x0f6:  call   085b624e <_ZN6CParty16IsExistCharacterEi>  ; CParty::IsExistCharacter(int)
085b63bb +0x0fb:  test   %al,%al
085b63bd +0x0fd:  je     085b63c3 <+0x103>
085b63bf +0x0ff:  addl   $0x1,-0x14(%ebp)
085b63c3 +0x103:  addl   $0x1,-0x10(%ebp)
085b63c7 +0x107:  jmp    085b63ca <+0x10a>
085b63c9 +0x109:  nop
085b63ca +0x10a:  addl   $0x1,-0xc(%ebp)
085b63ce +0x10e:  cmpl   $0x3,-0xc(%ebp)
085b63d2 +0x112:  setle  %al
085b63d5 +0x115:  test   %al,%al
085b63d7 +0x117:  jne    085b62eb <+0x2b>
085b63dd +0x11d:  cmpb   $0x0,-0x15(%ebp)
085b63e1 +0x121:  je     085b63ea <+0x12a>
085b63e3 +0x123:  mov    $0x0,%eax
085b63e8 +0x128:  jmp    085b640e <+0x14e>
085b63ea +0x12a:  cmpl   $0x0,-0x14(%ebp)
085b63ee +0x12e:  jle    085b6409 <+0x149>
085b63f0 +0x130:  mov    -0x10(%ebp),%eax
085b63f3 +0x133:  sub    $0x1,%eax
085b63f6 +0x136:  cmp    -0x14(%ebp),%eax
085b63f9 +0x139:  jne    085b6402 <+0x142>
085b63fb +0x13b:  mov    $0x1,%eax
085b6400 +0x140:  jmp    085b640e <+0x14e>
085b6402 +0x142:  mov    $0x4,%eax
085b6407 +0x147:  jmp    085b640e <+0x14e>
085b6409 +0x149:  mov    $0x2,%eax
085b640e +0x14e:  leave
085b640f +0x14f:  ret
```

## 反编译 C

```c
// CParty::GetPartyType @ 0x85b62c0

/* CParty::GetPartyType() */

undefined4 __thiscall CParty::GetPartyType(CParty *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = 0;
  bVar1 = false;
  local_18 = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 == '\x01') {
      iVar3 = CUserCharacInfo::get_charac_guildkey
                        (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      if (iVar3 != 0) {
        if (local_20 == 0) {
          local_20 = CUserCharacInfo::get_charac_guildkey
                               (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
          bVar1 = true;
        }
        else {
          iVar3 = CUserCharacInfo::get_charac_guildkey
                            (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
          if (iVar3 != local_20) {
            bVar1 = false;
          }
        }
      }
      iVar3 = CUserCharacInfo::get_connect_upper_member
                        (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      cVar2 = IsExistCharacter(this,iVar3);
      if (cVar2 != '\0') {
        local_18 = local_18 + 1;
      }
      local_14 = local_14 + 1;
    }
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else if (local_18 < 1) {
    uVar4 = 2;
  }
  else if (local_14 + -1 == local_18) {
    uVar4 = 1;
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}
```
