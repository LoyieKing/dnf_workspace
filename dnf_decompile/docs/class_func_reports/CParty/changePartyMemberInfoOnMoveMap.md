# changePartyMemberInfoOnMoveMap

`_ZN6CParty30changePartyMemberInfoOnMoveMapER12MSG_MOVE_MAPb`

`CParty::changePartyMemberInfoOnMoveMap(MSG_MOVE_MAP&, bool)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a8e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a8e3c  _ZN6CParty30changePartyMemberInfoOnMoveMapER12MSG_MOVE_MAPb
#           CParty::changePartyMemberInfoOnMoveMap(MSG_MOVE_MAP&, bool)
# range [0x085a8e3c, 0x085a8edf]
085a8e3c +0x00:  push   %ebp
085a8e3d +0x01:  mov    %esp,%ebp
085a8e3f +0x03:  sub    $0x38,%esp
085a8e42 +0x06:  mov    0x10(%ebp),%eax
085a8e45 +0x09:  mov    %al,-0x1c(%ebp)
085a8e48 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
085a8e4c +0x10:  jne    085a8edc <+0xa0>
085a8e52 +0x16:  mov    0x8(%ebp),%eax
085a8e55 +0x19:  mov    0xcac(%eax),%eax
085a8e5b +0x1f:  test   %eax,%eax
085a8e5d +0x21:  je     085a8e7b <+0x3f>
085a8e5f +0x23:  mov    0x8(%ebp),%eax
085a8e62 +0x26:  mov    0xcac(%eax),%eax
085a8e68 +0x2c:  mov    %eax,(%esp)
085a8e6b +0x2f:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
085a8e70 +0x34:  test   %al,%al
085a8e72 +0x36:  je     085a8e7b <+0x3f>
085a8e74 +0x38:  mov    $0x1,%eax
085a8e79 +0x3d:  jmp    085a8e80 <+0x44>
085a8e7b +0x3f:  mov    $0x0,%eax
085a8e80 +0x44:  test   %al,%al
085a8e82 +0x46:  je     085a8ea6 <+0x6a>
085a8e84 +0x48:  mov    0xc(%ebp),%eax
085a8e87 +0x4b:  movzbl 0x39(%eax),%eax
085a8e8b +0x4f:  movsbl %al,%eax
085a8e8e +0x52:  mov    %eax,0x8(%esp)
085a8e92 +0x56:  mov    0xc(%ebp),%eax
085a8e95 +0x59:  mov    %eax,0x4(%esp)
085a8e99 +0x5d:  mov    0x8(%ebp),%eax
085a8e9c +0x60:  mov    %eax,(%esp)
085a8e9f +0x63:  call   085a8d1e <_ZN6CParty21changePartyMemberInfoER12MSG_MOVE_MAPc>  ; CParty::changePartyMemberInfo(MSG_MOVE_MAP&, char)
085a8ea4 +0x68:  jmp    085a8edd <+0xa1>
085a8ea6 +0x6a:  movl   $0x0,-0xc(%ebp)
085a8ead +0x71:  jmp    085a8ecf <+0x93>
085a8eaf +0x73:  mov    -0xc(%ebp),%eax
085a8eb2 +0x76:  movsbl %al,%eax
085a8eb5 +0x79:  mov    %eax,0x8(%esp)
085a8eb9 +0x7d:  mov    0xc(%ebp),%eax
085a8ebc +0x80:  mov    %eax,0x4(%esp)
085a8ec0 +0x84:  mov    0x8(%ebp),%eax
085a8ec3 +0x87:  mov    %eax,(%esp)
085a8ec6 +0x8a:  call   085a8d1e <_ZN6CParty21changePartyMemberInfoER12MSG_MOVE_MAPc>  ; CParty::changePartyMemberInfo(MSG_MOVE_MAP&, char)
085a8ecb +0x8f:  addl   $0x1,-0xc(%ebp)
085a8ecf +0x93:  cmpl   $0x3,-0xc(%ebp)
085a8ed3 +0x97:  setle  %al
085a8ed6 +0x9a:  test   %al,%al
085a8ed8 +0x9c:  jne    085a8eaf <+0x73>
085a8eda +0x9e:  jmp    085a8edd <+0xa1>
085a8edc +0xa0:  nop
085a8edd +0xa1:  leave
085a8ede +0xa2:  ret
085a8edf +0xa3:  nop
```

## 反编译 C

```c
// CParty::changePartyMemberInfoOnMoveMap @ 0x85a8e3c

/* CParty::changePartyMemberInfoOnMoveMap(MSG_MOVE_MAP&, bool) */

void __thiscall
CParty::changePartyMemberInfoOnMoveMap(CParty *this,MSG_MOVE_MAP *param_1,bool param_2)

{
  bool bVar1;
  char cVar2;
  int local_10;
  
  if (!param_2) {
    if ((*(int *)(this + 0xcac) == 0) ||
       (cVar2 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0xcac)), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      changePartyMemberInfo(this,param_1,(char)param_1[0x39]);
    }
    else {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        changePartyMemberInfo(this,param_1,(char)local_10);
      }
    }
  }
  return;
}
```
