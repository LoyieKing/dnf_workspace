# map_load_forced_finish

`_ZN6CParty22map_load_forced_finishEv`

`CParty::map_load_forced_finish()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b1e66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b1e66  _ZN6CParty22map_load_forced_finishEv
#           CParty::map_load_forced_finish()
# range [0x085b1e66, 0x085b1fdf]
085b1e66 +0x000:  push   %ebp
085b1e67 +0x001:  mov    %esp,%ebp
085b1e69 +0x003:  push   %ebx
085b1e6a +0x004:  sub    $0x44,%esp
085b1e6d +0x007:  mov    0x8(%ebp),%eax
085b1e70 +0x00a:  movzbl 0x119(%eax),%eax
085b1e77 +0x011:  test   %al,%al
085b1e79 +0x013:  jne    085b1fd8 <+0x172>
085b1e7f +0x019:  mov    0x8(%ebp),%eax
085b1e82 +0x01c:  mov    %eax,(%esp)
085b1e85 +0x01f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b1e8a +0x024:  mov    %eax,-0x10(%ebp)
085b1e8d +0x027:  cmpl   $0x0,-0x10(%ebp)
085b1e91 +0x02b:  jne    085b1f28 <+0xc2>
085b1e97 +0x031:  mov    0x8(%ebp),%eax
085b1e9a +0x034:  mov    %eax,(%esp)
085b1e9d +0x037:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
085b1ea2 +0x03c:  mov    %eax,%ebx
085b1ea4 +0x03e:  movl   $0x0,0xc(%esp)
085b1eac +0x046:  movl   $0x3184,0x8(%esp)
085b1eb4 +0x04e:  movl   $&_ZZN6CParty22map_load_forced_finishEvE19__PRETTY_FUNCTION__,0x4(%esp)
085b1ebc +0x056:  lea    -0x20(%ebp),%eax
085b1ebf +0x059:  mov    %eax,(%esp)
085b1ec2 +0x05c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085b1ec7 +0x061:  mov    %ebx,0x8(%esp)
085b1ecb +0x065:  movl   $"<IN_DUNGEON_NULL_PARTY> not_member PartyIndex(%d)",0x4(%esp)
085b1ed3 +0x06d:  lea    -0x20(%ebp),%eax
085b1ed6 +0x070:  mov    %eax,(%esp)
085b1ed9 +0x073:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085b1ede +0x078:  mov    0x8(%ebp),%eax
085b1ee1 +0x07b:  mov    %eax,(%esp)
085b1ee4 +0x07e:  call   0859ad4c <_ZN6CParty7destroyEv>  ; CParty::destroy()
085b1ee9 +0x083:  mov    0x8(%ebp),%eax
085b1eec +0x086:  movzbl 0x68(%eax),%eax
085b1ef0 +0x08a:  movzbl %al,%eax
085b1ef3 +0x08d:  mov    %eax,0x14(%esp)
085b1ef7 +0x091:  movl   $"CParty::map_load_forced_finish 1, Using: %d, Member = 0\n",0x10(%esp)
085b1eff +0x099:  movl   $0x3187,0xc(%esp)
085b1f07 +0x0a1:  movl   $&_ZZN6CParty22map_load_forced_finishEvE19__PRETTY_FUNCTION__,0x8(%esp)
085b1f0f +0x0a9:  movl   $"party.cpp",0x4(%esp)
085b1f17 +0x0b1:  movl   $0x1,(%esp)
085b1f1e +0x0b8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b1f23 +0x0bd:  jmp    085b1fd9 <+0x173>
085b1f28 +0x0c2:  movl   $0x0,-0xc(%ebp)
085b1f2f +0x0c9:  jmp    085b1fa4 <+0x13e>
085b1f31 +0x0cb:  mov    -0xc(%ebp),%eax
085b1f34 +0x0ce:  mov    %eax,0x4(%esp)
085b1f38 +0x0d2:  mov    0x8(%ebp),%eax
085b1f3b +0x0d5:  mov    %eax,(%esp)
085b1f3e +0x0d8:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b1f43 +0x0dd:  xor    $0x1,%eax
085b1f46 +0x0e0:  test   %al,%al
085b1f48 +0x0e2:  jne    085b1f9f <+0x139>
085b1f4a +0x0e4:  mov    -0xc(%ebp),%eax
085b1f4d +0x0e7:  mov    0x8(%ebp),%edx
085b1f50 +0x0ea:  movzbl 0x37c(%edx,%eax,1),%eax
085b1f58 +0x0f2:  xor    $0x1,%eax
085b1f5b +0x0f5:  test   %al,%al
085b1f5d +0x0f7:  je     085b1fa0 <+0x13a>
085b1f5f +0x0f9:  mov    -0xc(%ebp),%edx
085b1f62 +0x0fc:  mov    0x8(%ebp),%ecx
085b1f65 +0x0ff:  mov    %edx,%eax
085b1f67 +0x101:  add    %eax,%eax
085b1f69 +0x103:  add    %edx,%eax
085b1f6b +0x105:  shl    $0x3,%eax
085b1f6e +0x108:  lea    (%ecx,%eax,1),%eax
085b1f71 +0x10b:  add    $0x78,%eax
085b1f74 +0x10e:  mov    (%eax),%eax
085b1f76 +0x110:  movl   $0x0,0x10(%esp)
085b1f7e +0x118:  movl   $0x0,0xc(%esp)
085b1f86 +0x120:  movl   $0x0,0x8(%esp)
085b1f8e +0x128:  mov    %eax,0x4(%esp)
085b1f92 +0x12c:  mov    0x8(%ebp),%eax
085b1f95 +0x12f:  mov    %eax,(%esp)
085b1f98 +0x132:  call   085b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>  ; CParty::giveup_game(CUser*, bool, bool, bool)
085b1f9d +0x137:  jmp    085b1fa0 <+0x13a>
085b1f9f +0x139:  nop
085b1fa0 +0x13a:  addl   $0x1,-0xc(%ebp)
085b1fa4 +0x13e:  cmpl   $0x3,-0xc(%ebp)
085b1fa8 +0x142:  setle  %al
085b1fab +0x145:  test   %al,%al
085b1fad +0x147:  jne    085b1f31 <+0xcb>
085b1faf +0x149:  mov    0x8(%ebp),%eax
085b1fb2 +0x14c:  mov    %eax,(%esp)
085b1fb5 +0x14f:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
085b1fba +0x154:  test   %eax,%eax
085b1fbc +0x156:  setg   %al
085b1fbf +0x159:  test   %al,%al
085b1fc1 +0x15b:  je     085b1fd9 <+0x173>
085b1fc3 +0x15d:  movl   $0x1,0x4(%esp)
085b1fcb +0x165:  mov    0x8(%ebp),%eax
085b1fce +0x168:  mov    %eax,(%esp)
085b1fd1 +0x16b:  call   085b17a4 <_ZN6CParty23check_allmember_loadingEb>  ; CParty::check_allmember_loading(bool)
085b1fd6 +0x170:  jmp    085b1fd9 <+0x173>
085b1fd8 +0x172:  nop
085b1fd9 +0x173:  add    $0x44,%esp
085b1fdc +0x176:  pop    %ebx
085b1fdd +0x177:  pop    %ebp
085b1fde +0x178:  ret
085b1fdf +0x179:  nop
```

## 反编译 C

```c
// CParty::map_load_forced_finish @ 0x85b1e66

/* CParty::map_load_forced_finish() */

void __thiscall CParty::map_load_forced_finish(CParty *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  if (this[0x119] == (CParty)0x0) {
    local_14 = get_member_count(this);
    if (local_14 == 0) {
      uVar2 = GetPartyIndex(this);
      cMyTrace::cMyTrace(local_24,"void CParty::map_load_forced_finish()",0x3184,0);
      cMyTrace::operator()(local_24,"<IN_DUNGEON_NULL_PARTY> not_member PartyIndex(%d)",uVar2);
      destroy(this);
      LogManager::logFormat
                (1,"party.cpp","void CParty::map_load_forced_finish()",0x3187,
                 "CParty::map_load_forced_finish 1, Using: %d, Member = 0\n",(uint)(byte)this[0x68])
      ;
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        cVar1 = _checkValidUser(this,local_10);
        if ((cVar1 == '\x01') && (this[local_10 + 0x37c] != (CParty)0x1)) {
          giveup_game(this,*(CUser **)(this + local_10 * 0x18 + 0x78),false,false,false);
        }
      }
      iVar3 = get_member_count(this);
      if (0 < iVar3) {
        check_allmember_loading(this,true);
      }
    }
  }
  return;
}
```
