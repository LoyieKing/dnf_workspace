# onBloodClear

`_ZN6CParty12onBloodClearEbi`

`CParty::onBloodClear(bool, int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b7c9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b7c9e  _ZN6CParty12onBloodClearEbi
#           CParty::onBloodClear(bool, int)
# range [0x085b7c9e, 0x085b7db5]
085b7c9e +0x000:  push   %ebp
085b7c9f +0x001:  mov    %esp,%ebp
085b7ca1 +0x003:  push   %esi
085b7ca2 +0x004:  push   %ebx
085b7ca3 +0x005:  sub    $0x30,%esp
085b7ca6 +0x008:  mov    0xc(%ebp),%eax
085b7ca9 +0x00b:  mov    %al,-0xc(%ebp)
085b7cac +0x00e:  cmpb   $0x0,-0xc(%ebp)
085b7cb0 +0x012:  je     085b7d89 <+0xeb>
085b7cb6 +0x018:  mov    0x8(%ebp),%eax
085b7cb9 +0x01b:  mov    %eax,(%esp)
085b7cbc +0x01e:  call   085b6768 <_ZN6CParty17GetMapPlayingTimeEv>  ; CParty::GetMapPlayingTime()
085b7cc1 +0x023:  mov    %eax,-0x1c(%ebp)
085b7cc4 +0x026:  mov    $0x10624dd3,%edx
085b7cc9 +0x02b:  mov    -0x1c(%ebp),%eax
085b7ccc +0x02e:  mul    %edx
085b7cce +0x030:  mov    %edx,%eax
085b7cd0 +0x032:  shr    $0x6,%eax
085b7cd3 +0x035:  mov    %eax,%ebx
085b7cd5 +0x037:  mov    0x8(%ebp),%eax
085b7cd8 +0x03a:  movzwl 0x183e(%eax),%eax
085b7cdf +0x041:  movzwl %ax,%ecx
085b7ce2 +0x044:  mov    0x10(%ebp),%edx
085b7ce5 +0x047:  mov    0x8(%ebp),%esi
085b7ce8 +0x04a:  mov    %edx,%eax
085b7cea +0x04c:  add    %eax,%eax
085b7cec +0x04e:  add    %edx,%eax
085b7cee +0x050:  shl    $0x3,%eax
085b7cf1 +0x053:  lea    (%esi,%eax,1),%eax
085b7cf4 +0x056:  add    $0x78,%eax
085b7cf7 +0x059:  mov    (%eax),%eax
085b7cf9 +0x05b:  add    $0x79700,%eax
085b7cfe +0x060:  movl   $0x0,0xc(%esp)
085b7d06 +0x068:  mov    %ebx,0x8(%esp)
085b7d0a +0x06c:  mov    %ecx,0x4(%esp)
085b7d0e +0x070:  mov    %eax,(%esp)
085b7d11 +0x073:  call   08684b22 <_ZN15cUserHistoryLog8MapClearEtii>  ; cUserHistoryLog::MapClear(unsigned short, int, int)
085b7d16 +0x078:  mov    0x8(%ebp),%eax
085b7d19 +0x07b:  mov    0xcac(%eax),%eax
085b7d1f +0x081:  movzbl 0x89f(%eax),%eax
085b7d26 +0x088:  cmp    $0x1,%al
085b7d28 +0x08a:  jne    085b7d61 <+0xc3>
085b7d2a +0x08c:  mov    0x10(%ebp),%edx
085b7d2d +0x08f:  mov    0x8(%ebp),%ecx
085b7d30 +0x092:  mov    %edx,%eax
085b7d32 +0x094:  add    %eax,%eax
085b7d34 +0x096:  add    %edx,%eax
085b7d36 +0x098:  shl    $0x3,%eax
085b7d39 +0x09b:  lea    (%ecx,%eax,1),%eax
085b7d3c +0x09e:  add    $0x78,%eax
085b7d3f +0x0a1:  mov    (%eax),%eax
085b7d41 +0x0a3:  movl   $0x0,0xc(%esp)
085b7d49 +0x0ab:  movl   $0x0,0x8(%esp)
085b7d51 +0x0b3:  movl   $0x1a,0x4(%esp)
085b7d59 +0x0bb:  mov    %eax,(%esp)
085b7d5c +0x0be:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
085b7d61 +0x0c3:  mov    0x10(%ebp),%edx
085b7d64 +0x0c6:  mov    0x8(%ebp),%ecx
085b7d67 +0x0c9:  mov    %edx,%eax
085b7d69 +0x0cb:  add    %eax,%eax
085b7d6b +0x0cd:  add    %edx,%eax
085b7d6d +0x0cf:  shl    $0x3,%eax
085b7d70 +0x0d2:  lea    (%ecx,%eax,1),%eax
085b7d73 +0x0d5:  add    $0x78,%eax
085b7d76 +0x0d8:  mov    (%eax),%eax
085b7d78 +0x0da:  mov    %eax,0x4(%esp)
085b7d7c +0x0de:  mov    0x8(%ebp),%eax
085b7d7f +0x0e1:  mov    %eax,(%esp)
085b7d82 +0x0e4:  call   085bf7fc <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd5a>  ; global constructors keyed to CParty::cMember::cMember()+0xd5a
085b7d87 +0x0e9:  jmp    085b7daf <+0x111>
085b7d89 +0x0eb:  mov    0x10(%ebp),%edx
085b7d8c +0x0ee:  mov    0x8(%ebp),%ecx
085b7d8f +0x0f1:  mov    %edx,%eax
085b7d91 +0x0f3:  add    %eax,%eax
085b7d93 +0x0f5:  add    %edx,%eax
085b7d95 +0x0f7:  shl    $0x3,%eax
085b7d98 +0x0fa:  lea    (%ecx,%eax,1),%eax
085b7d9b +0x0fd:  add    $0x78,%eax
085b7d9e +0x100:  mov    (%eax),%eax
085b7da0 +0x102:  mov    %eax,0x4(%esp)
085b7da4 +0x106:  mov    0x8(%ebp),%eax
085b7da7 +0x109:  mov    %eax,(%esp)
085b7daa +0x10c:  call   085bf7da <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd38>  ; global constructors keyed to CParty::cMember::cMember()+0xd38
085b7daf +0x111:  add    $0x30,%esp
085b7db2 +0x114:  pop    %ebx
085b7db3 +0x115:  pop    %esi
085b7db4 +0x116:  pop    %ebp
085b7db5 +0x117:  ret
```

## 反编译 C

```c
// CParty::onBloodClear @ 0x85b7c9e

/* CParty::onBloodClear(bool, int) */

void __thiscall CParty::onBloodClear(CParty *this,bool param_1,int param_2)

{
  uint uVar1;
  
  if (param_1) {
    uVar1 = GetMapPlayingTime(this);
    cUserHistoryLog::MapClear
              ((cUserHistoryLog *)(*(int *)(this + param_2 * 0x18 + 0x78) + 0x79700),
               *(ushort *)(this + 0x183e),uVar1 / 1000,0);
    if (*(char *)(*(int *)(this + 0xcac) + 0x89f) == '\x01') {
      APSystem::CUserProc::ClearActionAndSendtoUser
                (*(undefined4 *)(this + param_2 * 0x18 + 0x78),0x1a,0,0);
    }
    OnSuccessedDungeonClear(this,*(CUser **)(this + param_2 * 0x18 + 0x78));
  }
  else {
    OnFailedDungeonClear(this,*(CUser **)(this + param_2 * 0x18 + 0x78));
  }
  return;
}
```
