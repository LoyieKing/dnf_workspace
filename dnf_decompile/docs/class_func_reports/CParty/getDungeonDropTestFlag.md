# getDungeonDropTestFlag

`_ZN6CParty22getDungeonDropTestFlagEv`

`CParty::getDungeonDropTestFlag()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bdc76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bdc76  _ZN6CParty22getDungeonDropTestFlagEv
#           CParty::getDungeonDropTestFlag()
# range [0x085bdc76, 0x085bdceb]
085bdc76 +0x00:  push   %ebp
085bdc77 +0x01:  mov    %esp,%ebp
085bdc79 +0x03:  sub    $0x28,%esp
085bdc7c +0x06:  movl   $0x0,-0x10(%ebp)
085bdc83 +0x0d:  jmp    085bdcda <+0x64>
085bdc85 +0x0f:  mov    -0x10(%ebp),%eax
085bdc88 +0x12:  mov    %eax,0x4(%esp)
085bdc8c +0x16:  mov    0x8(%ebp),%eax
085bdc8f +0x19:  mov    %eax,(%esp)
085bdc92 +0x1c:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085bdc97 +0x21:  mov    %eax,-0xc(%ebp)
085bdc9a +0x24:  cmpl   $0x0,-0xc(%ebp)
085bdc9e +0x28:  je     085bdcd5 <+0x5f>
085bdca0 +0x2a:  mov    -0xc(%ebp),%eax
085bdca3 +0x2d:  mov    %eax,(%esp)
085bdca6 +0x30:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
085bdcab +0x35:  test   %al,%al
085bdcad +0x37:  je     085bdcc5 <+0x4f>
085bdcaf +0x39:  mov    0x8(%ebp),%eax
085bdcb2 +0x3c:  mov    %eax,(%esp)
085bdcb5 +0x3f:  call   085bf930 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xe8e>  ; global constructors keyed to CParty::cMember::cMember()+0xe8e
085bdcba +0x44:  test   %al,%al
085bdcbc +0x46:  je     085bdcc5 <+0x4f>
085bdcbe +0x48:  mov    $0x1,%eax
085bdcc3 +0x4d:  jmp    085bdcca <+0x54>
085bdcc5 +0x4f:  mov    $0x0,%eax
085bdcca +0x54:  test   %al,%al
085bdccc +0x56:  je     085bdcd6 <+0x60>
085bdcce +0x58:  mov    $0x1,%eax
085bdcd3 +0x5d:  jmp    085bdcea <+0x74>
085bdcd5 +0x5f:  nop
085bdcd6 +0x60:  addl   $0x1,-0x10(%ebp)
085bdcda +0x64:  cmpl   $0x3,-0x10(%ebp)
085bdcde +0x68:  setle  %al
085bdce1 +0x6b:  test   %al,%al
085bdce3 +0x6d:  jne    085bdc85 <+0xf>
085bdce5 +0x6f:  mov    $0x0,%eax
085bdcea +0x74:  leave
085bdceb +0x75:  ret
```

## 反编译 C

```c
// CParty::getDungeonDropTestFlag @ 0x85bdc76

/* CParty::getDungeonDropTestFlag() */

undefined4 __thiscall CParty::getDungeonDropTestFlag(CParty *this)

{
  bool bVar1;
  char cVar2;
  CUser *this_00;
  int local_14;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 0;
    }
    this_00 = (CUser *)get_user(this,local_14);
    if (this_00 != (CUser *)0x0) {
      cVar2 = CUser::isGMUser(this_00);
      if ((cVar2 == '\0') || (cVar2 = getDungeonMapSaving(this), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
