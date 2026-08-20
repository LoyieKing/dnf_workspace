# Evolute

`_ZN13user_creature12CCreatureMgr7EvoluteEiib`

`user_creature::CCreatureMgr::Evolute(int, int, bool)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833beb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833beb4  _ZN13user_creature12CCreatureMgr7EvoluteEiib
#           user_creature::CCreatureMgr::Evolute(int, int, bool)
# range [0x0833beb4, 0x0833c00b]
0833beb4 +0x000:  push   %ebp
0833beb5 +0x001:  mov    %esp,%ebp
0833beb7 +0x003:  sub    $0x48,%esp
0833beba +0x006:  mov    0x14(%ebp),%eax
0833bebd +0x009:  mov    %al,-0x2c(%ebp)
0833bec0 +0x00c:  mov    0x8(%ebp),%eax
0833bec3 +0x00f:  mov    0x18(%eax),%eax
0833bec6 +0x012:  test   %eax,%eax
0833bec8 +0x014:  je     0833c005 <+0x151>
0833bece +0x01a:  mov    0x8(%ebp),%eax
0833bed1 +0x01d:  mov    0x18(%eax),%eax
0833bed4 +0x020:  mov    %eax,(%esp)
0833bed7 +0x023:  call   0833f09a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1167>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1167
0833bedc +0x028:  cmp    0x10(%ebp),%eax
0833bedf +0x02b:  jge    0833bee7 <+0x33>
0833bee1 +0x02d:  cmpb   $0x0,-0x2c(%ebp)
0833bee5 +0x031:  je     0833beee <+0x3a>
0833bee7 +0x033:  mov    $0x1,%eax
0833beec +0x038:  jmp    0833bef3 <+0x3f>
0833beee +0x03a:  mov    $0x0,%eax
0833bef3 +0x03f:  test   %al,%al
0833bef5 +0x041:  je     0833bfcf <+0x11b>
0833befb +0x047:  mov    0x8(%ebp),%eax
0833befe +0x04a:  mov    0x18(%eax),%eax
0833bf01 +0x04d:  mov    0xc(%ebp),%edx
0833bf04 +0x050:  mov    %edx,0x4(%esp)
0833bf08 +0x054:  mov    %eax,(%esp)
0833bf0b +0x057:  call   083388ec <_ZN13user_creature9CCreature19IsEvolutionCreatureEi>  ; user_creature::CCreature::IsEvolutionCreature(int)
0833bf10 +0x05c:  test   %al,%al
0833bf12 +0x05e:  jne    0833bf1a <+0x66>
0833bf14 +0x060:  cmpb   $0x0,-0x2c(%ebp)
0833bf18 +0x064:  je     0833bf21 <+0x6d>
0833bf1a +0x066:  mov    $0x1,%eax
0833bf1f +0x06b:  jmp    0833bf26 <+0x72>
0833bf21 +0x06d:  mov    $0x0,%eax
0833bf26 +0x072:  test   %al,%al
0833bf28 +0x074:  je     0833bf47 <+0x93>
0833bf2a +0x076:  mov    0x8(%ebp),%eax
0833bf2d +0x079:  mov    0x1c(%eax),%edx
0833bf30 +0x07c:  mov    0x8(%ebp),%eax
0833bf33 +0x07f:  mov    0x18(%eax),%eax
0833bf36 +0x082:  mov    %edx,0x4(%esp)
0833bf3a +0x086:  mov    %eax,(%esp)
0833bf3d +0x089:  call   083381ea <_ZN13user_creature9CCreature7EvoluteEP5CUser>  ; user_creature::CCreature::Evolute(CUser*)
0833bf42 +0x08e:  jmp    0833c00a <+0x156>
0833bf47 +0x093:  mov    0x8(%ebp),%eax
0833bf4a +0x096:  mov    0x18(%eax),%eax
0833bf4d +0x099:  mov    0xc(%ebp),%edx
0833bf50 +0x09c:  mov    %edx,0x4(%esp)
0833bf54 +0x0a0:  mov    %eax,(%esp)
0833bf57 +0x0a3:  call   08338922 <_ZN13user_creature9CCreature24IsEvolutionCreatureMultyEi>  ; user_creature::CCreature::IsEvolutionCreatureMulty(int)
0833bf5c +0x0a8:  test   %al,%al
0833bf5e +0x0aa:  jne    0833bf66 <+0xb2>
0833bf60 +0x0ac:  cmpb   $0x0,-0x2c(%ebp)
0833bf64 +0x0b0:  je     0833bf6d <+0xb9>
0833bf66 +0x0b2:  mov    $0x1,%eax
0833bf6b +0x0b7:  jmp    0833bf72 <+0xbe>
0833bf6d +0x0b9:  mov    $0x0,%eax
0833bf72 +0x0be:  test   %al,%al
0833bf74 +0x0c0:  je     0833bf97 <+0xe3>
0833bf76 +0x0c2:  mov    0x8(%ebp),%eax
0833bf79 +0x0c5:  mov    0x1c(%eax),%edx
0833bf7c +0x0c8:  mov    0x8(%ebp),%eax
0833bf7f +0x0cb:  mov    0x18(%eax),%eax
0833bf82 +0x0ce:  mov    0xc(%ebp),%ecx
0833bf85 +0x0d1:  mov    %ecx,0x8(%esp)
0833bf89 +0x0d5:  mov    %edx,0x4(%esp)
0833bf8d +0x0d9:  mov    %eax,(%esp)
0833bf90 +0x0dc:  call   08338950 <_ZN13user_creature9CCreature12EvoluteMultyEP5CUseri>  ; user_creature::CCreature::EvoluteMulty(CUser*, int)
0833bf95 +0x0e1:  jmp    0833c00a <+0x156>
0833bf97 +0x0e3:  movl   $0x0,0xc(%esp)
0833bf9f +0x0eb:  movl   $0xdd6,0x8(%esp)
0833bfa7 +0x0f3:  movl   $&_ZZN13user_creature12CCreatureMgr7EvoluteEiibE19__PRETTY_FUNCTION__,0x4(%esp)
0833bfaf +0x0fb:  lea    -0x28(%ebp),%eax
0833bfb2 +0x0fe:  mov    %eax,(%esp)
0833bfb5 +0x101:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833bfba +0x106:  movl   $"evolute error : different creature kind.",0x4(%esp)
0833bfc2 +0x10e:  lea    -0x28(%ebp),%eax
0833bfc5 +0x111:  mov    %eax,(%esp)
0833bfc8 +0x114:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833bfcd +0x119:  jmp    0833c005 <+0x151>
0833bfcf +0x11b:  movl   $0x0,0xc(%esp)
0833bfd7 +0x123:  movl   $0xddb,0x8(%esp)
0833bfdf +0x12b:  movl   $&_ZZN13user_creature12CCreatureMgr7EvoluteEiibE19__PRETTY_FUNCTION__,0x4(%esp)
0833bfe7 +0x133:  lea    -0x18(%ebp),%eax
0833bfea +0x136:  mov    %eax,(%esp)
0833bfed +0x139:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833bff2 +0x13e:  movl   $"evolute error : low creature level.",0x4(%esp)
0833bffa +0x146:  lea    -0x18(%ebp),%eax
0833bffd +0x149:  mov    %eax,(%esp)
0833c000 +0x14c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833c005 +0x151:  mov    $0x0,%eax
0833c00a +0x156:  leave
0833c00b +0x157:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::Evolute @ 0x833beb4

/* user_creature::CCreatureMgr::Evolute(int, int, bool) */

undefined4 __thiscall
user_creature::CCreatureMgr::Evolute(CCreatureMgr *this,int param_1,int param_2,bool param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_2c [16];
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x18) != 0) {
    iVar3 = CCreature::GetLevel(*(CCreature **)(this + 0x18));
    if ((param_2 <= iVar3) || (param_3)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      cVar2 = CCreature::IsEvolutionCreature(*(CCreature **)(this + 0x18),param_1);
      if ((cVar2 != '\0') || (param_3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = CCreature::Evolute(*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c));
        return uVar4;
      }
      cVar2 = CCreature::IsEvolutionCreatureMulty(*(CCreature **)(this + 0x18),param_1);
      if ((cVar2 != '\0') || (param_3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = CCreature::EvoluteMulty
                          (*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),param_1);
        return uVar4;
      }
      cMyTrace::cMyTrace(local_2c,"bool user_creature::CCreatureMgr::Evolute(int, int, bool)",0xdd6,
                         0);
      cMyTrace::operator()(local_2c,"evolute error : different creature kind.");
    }
    else {
      cMyTrace::cMyTrace(local_1c,"bool user_creature::CCreatureMgr::Evolute(int, int, bool)",0xddb,
                         0);
      cMyTrace::operator()(local_1c,"evolute error : low creature level.");
    }
  }
  return 0;
}
```
