# sendAvatar

`_ZN19Secu_AccountHacking10sendAvatarEPKcj`

`Secu_AccountHacking::sendAvatar(char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278f16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278f16  _ZN19Secu_AccountHacking10sendAvatarEPKcj
#           Secu_AccountHacking::sendAvatar(char const*, unsigned int)
# range [0x08278f16, 0x0827901f]
08278f16 +0x000:  push   %ebp
08278f17 +0x001:  mov    %esp,%ebp
08278f19 +0x003:  sub    $0x28,%esp
08278f1c +0x006:  mov    0xc(%ebp),%eax
08278f1f +0x009:  mov    %eax,0x4(%esp)
08278f23 +0x00d:  mov    0x8(%ebp),%eax
08278f26 +0x010:  mov    %eax,(%esp)
08278f29 +0x013:  call   08279182 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc>  ; Secu_AccountHacking::isSameAccountCharacter(char const*)
08278f2e +0x018:  test   %al,%al
08278f30 +0x01a:  jne    08279016 <+0x100>
08278f36 +0x020:  mov    0x8(%ebp),%eax
08278f39 +0x023:  mov    0x10(%eax),%eax
08278f3c +0x026:  test   %eax,%eax
08278f3e +0x028:  je     08278f5b <+0x45>
08278f40 +0x02a:  mov    0x8(%ebp),%eax
08278f43 +0x02d:  mov    0x10(%eax),%eax
08278f46 +0x030:  mov    %eax,(%esp)
08278f49 +0x033:  call   08110cba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1cc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1cc
08278f4e +0x038:  cmp    $0x64,%ax
08278f52 +0x03c:  ja     08278f5b <+0x45>
08278f54 +0x03e:  mov    $0x1,%eax
08278f59 +0x043:  jmp    08278f60 <+0x4a>
08278f5b +0x045:  mov    $0x0,%eax
08278f60 +0x04a:  test   %al,%al
08278f62 +0x04c:  je     08279019 <+0x103>
08278f68 +0x052:  mov    0x8(%ebp),%eax
08278f6b +0x055:  mov    0x8(%eax),%eax
08278f6e +0x058:  lea    0x1(%eax),%edx
08278f71 +0x05b:  mov    0x8(%ebp),%eax
08278f74 +0x05e:  mov    %edx,0x8(%eax)
08278f77 +0x061:  mov    0x8(%ebp),%eax
08278f7a +0x064:  mov    %eax,(%esp)
08278f7d +0x067:  call   082792a0 <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv>  ; Secu_AccountHacking::isDetectionGoldPatten()
08278f82 +0x06c:  test   %al,%al
08278f84 +0x06e:  je     08278faf <+0x99>
08278f86 +0x070:  movl   $0x0,0x10(%esp)
08278f8e +0x078:  mov    0x10(%ebp),%eax
08278f91 +0x07b:  mov    %eax,0xc(%esp)
08278f95 +0x07f:  mov    0xc(%ebp),%eax
08278f98 +0x082:  mov    %eax,0x8(%esp)
08278f9c +0x086:  movl   $0x4,0x4(%esp)
08278fa4 +0x08e:  mov    0x8(%ebp),%eax
08278fa7 +0x091:  mov    %eax,(%esp)
08278faa +0x094:  call   0827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>  ; Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
08278faf +0x099:  mov    0x8(%ebp),%eax
08278fb2 +0x09c:  mov    0x8(%eax),%eax
08278fb5 +0x09f:  cmp    $0x7,%eax
08278fb8 +0x0a2:  jbe    08278fe2 <+0xcc>
08278fba +0x0a4:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08278fc1 +0x0ab:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08278fc6 +0x0b0:  mov    %eax,%edx
08278fc8 +0x0b2:  mov    0x8(%ebp),%eax
08278fcb +0x0b5:  mov    0xc(%eax),%eax
08278fce +0x0b8:  mov    %edx,%ecx
08278fd0 +0x0ba:  sub    %eax,%ecx
08278fd2 +0x0bc:  mov    %ecx,%eax
08278fd4 +0x0be:  cmp    $0x257,%eax
08278fd9 +0x0c3:  ja     08278fe2 <+0xcc>
08278fdb +0x0c5:  mov    $0x1,%eax
08278fe0 +0x0ca:  jmp    08278fe7 <+0xd1>
08278fe2 +0x0cc:  mov    $0x0,%eax
08278fe7 +0x0d1:  test   %al,%al
08278fe9 +0x0d3:  je     0827901c <+0x106>
08278feb +0x0d5:  movl   $0x0,0x10(%esp)
08278ff3 +0x0dd:  mov    0x10(%ebp),%eax
08278ff6 +0x0e0:  mov    %eax,0xc(%esp)
08278ffa +0x0e4:  mov    0xc(%ebp),%eax
08278ffd +0x0e7:  mov    %eax,0x8(%esp)
08279001 +0x0eb:  movl   $0x5,0x4(%esp)
08279009 +0x0f3:  mov    0x8(%ebp),%eax
0827900c +0x0f6:  mov    %eax,(%esp)
0827900f +0x0f9:  call   0827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>  ; Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
08279014 +0x0fe:  jmp    0827901d <+0x107>
08279016 +0x100:  nop
08279017 +0x101:  jmp    0827901d <+0x107>
08279019 +0x103:  nop
0827901a +0x104:  jmp    0827901d <+0x107>
0827901c +0x106:  nop
0827901d +0x107:  leave
0827901e +0x108:  ret
0827901f +0x109:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::sendAvatar @ 0x8278f16

/* Secu_AccountHacking::sendAvatar(char const*, unsigned int) */

void __thiscall
Secu_AccountHacking::sendAvatar(Secu_AccountHacking *this,char *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  
  cVar2 = isSameAccountCharacter(this,param_1);
  if (cVar2 == '\0') {
    if ((*(int *)(this + 0x10) == 0) ||
       (uVar3 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x10)),
       100 < uVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      cVar2 = isDetectionGoldPatten(this);
      if (cVar2 != '\0') {
        setPatten(this,4,param_1,param_2,0);
      }
      if ((*(uint *)(this + 8) < 8) ||
         (iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         599 < (uint)(iVar4 - *(int *)(this + 0xc)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        setPatten(this,5,param_1,param_2,0);
      }
    }
  }
  return;
}
```
