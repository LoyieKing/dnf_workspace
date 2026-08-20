# GainItemExpCreature

`_ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser`

`user_creature::CCreature::GainItemExpCreature(int, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083379c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083379c0  _ZN13user_creature9CCreature19GainItemExpCreatureEiP5CUser
#           user_creature::CCreature::GainItemExpCreature(int, CUser*)
# range [0x083379c0, 0x08337bbb]
083379c0 +0x000:  push   %ebp
083379c1 +0x001:  mov    %esp,%ebp
083379c3 +0x003:  push   %esi
083379c4 +0x004:  push   %ebx
083379c5 +0x005:  sub    $0x40,%esp
083379c8 +0x008:  movb   $0x0,-0x11(%ebp)
083379cc +0x00c:  movl   $0x0,-0x10(%ebp)
083379d3 +0x013:  mov    0x8(%ebp),%eax
083379d6 +0x016:  movzbl 0x4c(%eax),%eax
083379da +0x01a:  test   %al,%al
083379dc +0x01c:  je     083379e8 <+0x28>
083379de +0x01e:  mov    $0x0,%eax
083379e3 +0x023:  jmp    08337bb5 <+0x1f5>
083379e8 +0x028:  mov    0x8(%ebp),%eax
083379eb +0x02b:  mov    0x44(%eax),%eax
083379ee +0x02e:  mov    0xc(%ebp),%edx
083379f1 +0x031:  mov    %edx,0x4(%esp)
083379f5 +0x035:  mov    %eax,(%esp)
083379f8 +0x038:  call   0833f2bc <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1389>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1389
083379fd +0x03d:  test   %al,%al
083379ff +0x03f:  je     08337a23 <+0x63>
08337a01 +0x041:  mov    0x8(%ebp),%eax
08337a04 +0x044:  movzbl 0x4d(%eax),%eax
08337a08 +0x048:  mov    %al,-0xa(%ebp)
08337a0b +0x04b:  addb   $0x1,-0xa(%ebp)
08337a0f +0x04f:  cmpb   $0xa,-0xa(%ebp)
08337a13 +0x053:  jle    08337a19 <+0x59>
08337a15 +0x055:  movb   $0xa,-0xa(%ebp)
08337a19 +0x059:  movzbl -0xa(%ebp),%edx
08337a1d +0x05d:  mov    0x8(%ebp),%eax
08337a20 +0x060:  mov    %dl,0x4d(%eax)
08337a23 +0x063:  mov    0x8(%ebp),%eax
08337a26 +0x066:  mov    0x44(%eax),%eax
08337a29 +0x069:  mov    0xc(%ebp),%edx
08337a2c +0x06c:  mov    %edx,0x4(%esp)
08337a30 +0x070:  mov    %eax,(%esp)
08337a33 +0x073:  call   0833f2ee <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x13bb>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x13bb
08337a38 +0x078:  test   %al,%al
08337a3a +0x07a:  je     08337a5e <+0x9e>
08337a3c +0x07c:  mov    0x8(%ebp),%eax
08337a3f +0x07f:  movzbl 0x4d(%eax),%eax
08337a43 +0x083:  mov    %al,-0x9(%ebp)
08337a46 +0x086:  subb   $0x1,-0x9(%ebp)
08337a4a +0x08a:  cmpb   $0x0,-0x9(%ebp)
08337a4e +0x08e:  jns    08337a54 <+0x94>
08337a50 +0x090:  movb   $0x0,-0x9(%ebp)
08337a54 +0x094:  movzbl -0x9(%ebp),%edx
08337a58 +0x098:  mov    0x8(%ebp),%eax
08337a5b +0x09b:  mov    %dl,0x4d(%eax)
08337a5e +0x09e:  mov    0x8(%ebp),%eax
08337a61 +0x0a1:  mov    0x30(%eax),%eax
08337a64 +0x0a4:  mov    %eax,-0x18(%ebp)
08337a67 +0x0a7:  mov    0x8(%ebp),%eax
08337a6a +0x0aa:  movzbl 0x4d(%eax),%eax
08337a6e +0x0ae:  mov    %al,-0x18(%ebp)
08337a71 +0x0b1:  movzwl -0x16(%ebp),%eax
08337a75 +0x0b5:  add    $0x1,%eax
08337a78 +0x0b8:  mov    %ax,-0x16(%ebp)
08337a7c +0x0bc:  mov    -0x18(%ebp),%edx
08337a7f +0x0bf:  mov    0x8(%ebp),%eax
08337a82 +0x0c2:  mov    %edx,0x30(%eax)
08337a85 +0x0c5:  movzwl -0x16(%ebp),%eax
08337a89 +0x0c9:  cwtl
08337a8a +0x0ca:  mov    %eax,0x4(%esp)
08337a8e +0x0ce:  mov    0x8(%ebp),%eax
08337a91 +0x0d1:  mov    %eax,(%esp)
08337a94 +0x0d4:  call   083374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>  ; user_creature::CCreature::GetExpLevel(int)
08337a99 +0x0d9:  mov    %eax,-0x10(%ebp)
08337a9c +0x0dc:  mov    0x8(%ebp),%eax
08337a9f +0x0df:  mov    0x2c(%eax),%eax
08337aa2 +0x0e2:  cmp    -0x10(%ebp),%eax
08337aa5 +0x0e5:  jge    08337aab <+0xeb>
08337aa7 +0x0e7:  movb   $0x1,-0x11(%ebp)
08337aab +0x0eb:  mov    0x8(%ebp),%eax
08337aae +0x0ee:  mov    -0x10(%ebp),%edx
08337ab1 +0x0f1:  mov    %edx,0x2c(%eax)
08337ab4 +0x0f4:  mov    0x8(%ebp),%eax
08337ab7 +0x0f7:  mov    0x2c(%eax),%ebx
08337aba +0x0fa:  mov    0x8(%ebp),%eax
08337abd +0x0fd:  mov    0x44(%eax),%eax
08337ac0 +0x100:  mov    %eax,(%esp)
08337ac3 +0x103:  call   0833f24c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1319>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1319
08337ac8 +0x108:  cmp    %eax,%ebx
08337aca +0x10a:  jl     08337ad2 <+0x112>
08337acc +0x10c:  cmpb   $0x0,-0x11(%ebp)
08337ad0 +0x110:  je     08337ad9 <+0x119>
08337ad2 +0x112:  mov    $0x1,%eax
08337ad7 +0x117:  jmp    08337ade <+0x11e>
08337ad9 +0x119:  mov    $0x0,%eax
08337ade +0x11e:  test   %al,%al
08337ae0 +0x120:  je     08337b5d <+0x19d>
08337ae2 +0x122:  movl   $0x0,0xc(%esp)
08337aea +0x12a:  movl   $0x0,0x8(%esp)
08337af2 +0x132:  mov    0x10(%ebp),%eax
08337af5 +0x135:  mov    %eax,0x4(%esp)
08337af9 +0x139:  lea    -0x38(%ebp),%eax
08337afc +0x13c:  mov    %eax,(%esp)
08337aff +0x13f:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08337b04 +0x144:  mov    0x8(%ebp),%eax
08337b07 +0x147:  mov    %eax,(%esp)
08337b0a +0x14a:  call   0833f0ca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1197>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1197
08337b0f +0x14f:  movzbl %al,%ecx
08337b12 +0x152:  mov    0x8(%ebp),%eax
08337b15 +0x155:  mov    0x2c(%eax),%edx
08337b18 +0x158:  mov    0x8(%ebp),%eax
08337b1b +0x15b:  mov    0x30(%eax),%eax
08337b1e +0x15e:  mov    %ecx,0xc(%esp)
08337b22 +0x162:  mov    %edx,0x8(%esp)
08337b26 +0x166:  mov    %eax,0x4(%esp)
08337b2a +0x16a:  lea    -0x38(%ebp),%eax
08337b2d +0x16d:  mov    %eax,(%esp)
08337b30 +0x170:  call   08340760 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x282d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x282d
08337b35 +0x175:  jmp    08337b52 <+0x192>
08337b37 +0x177:  mov    %edx,%ebx
08337b39 +0x179:  mov    %eax,%esi
08337b3b +0x17b:  lea    -0x38(%ebp),%eax
08337b3e +0x17e:  mov    %eax,(%esp)
08337b41 +0x181:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08337b46 +0x186:  mov    %esi,%eax
08337b48 +0x188:  mov    %ebx,%edx
08337b4a +0x18a:  mov    %eax,(%esp)
08337b4d +0x18d:  call   08ae3750 <_Unwind_Resume>
08337b52 +0x192:  lea    -0x38(%ebp),%eax
08337b55 +0x195:  mov    %eax,(%esp)
08337b58 +0x198:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08337b5d +0x19d:  cmpb   $0x0,-0x11(%ebp)
08337b61 +0x1a1:  je     08337b80 <+0x1c0>
08337b63 +0x1a3:  mov    0x10(%ebp),%eax
08337b66 +0x1a6:  mov    %eax,0x4(%esp)
08337b6a +0x1aa:  mov    0x8(%ebp),%eax
08337b6d +0x1ad:  mov    %eax,(%esp)
08337b70 +0x1b0:  call   08337d58 <_ZN13user_creature9CCreature19IsAbleSelectEvoluteEP5CUser>  ; user_creature::CCreature::IsAbleSelectEvolute(CUser*)
08337b75 +0x1b5:  test   %al,%al
08337b77 +0x1b7:  je     08337b80 <+0x1c0>
08337b79 +0x1b9:  mov    $0x1,%eax
08337b7e +0x1be:  jmp    08337b85 <+0x1c5>
08337b80 +0x1c0:  mov    $0x0,%eax
08337b85 +0x1c5:  test   %al,%al
08337b87 +0x1c7:  je     08337ba9 <+0x1e9>
08337b89 +0x1c9:  mov    0x10(%ebp),%eax
08337b8c +0x1cc:  mov    %eax,0x4(%esp)
08337b90 +0x1d0:  mov    0x8(%ebp),%eax
08337b93 +0x1d3:  mov    %eax,(%esp)
08337b96 +0x1d6:  call   08337e48 <_ZN13user_creature9CCreature13SelectEvoluteEP5CUser>  ; user_creature::CCreature::SelectEvolute(CUser*)
08337b9b +0x1db:  xor    $0x1,%eax
08337b9e +0x1de:  test   %al,%al
08337ba0 +0x1e0:  je     08337ba9 <+0x1e9>
08337ba2 +0x1e2:  mov    $0x0,%eax
08337ba7 +0x1e7:  jmp    08337bb5 <+0x1f5>
08337ba9 +0x1e9:  mov    0x8(%ebp),%eax
08337bac +0x1ec:  movb   $0x1,0x40(%eax)
08337bb0 +0x1f0:  mov    $0x1,%eax
08337bb5 +0x1f5:  add    $0x40,%esp
08337bb8 +0x1f8:  pop    %ebx
08337bb9 +0x1f9:  pop    %esi
08337bba +0x1fa:  pop    %ebp
08337bbb +0x1fb:  ret
```

## 反编译 C

```c
// user_creature::CCreature::GainItemExpCreature @ 0x83379c0

/* user_creature::CCreature::GainItemExpCreature(int, CUser*) */

undefined4 __thiscall
user_creature::CCreature::GainItemExpCreature(CCreature *this,int param_1,CUser *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  CPacketRespondent local_3c [32];
  undefined4 local_1c;
  char local_15;
  int local_14;
  CCreature local_e;
  CCreature local_d;
  
  local_15 = '\0';
  local_14 = 0;
  if (this[0x4c] != (CCreature)0x0) {
    return 0;
  }
  cVar3 = CCreatureScript::validItem_AType(*(CCreatureScript **)(this + 0x44),param_1);
  if (cVar3 != '\0') {
    local_e = (CCreature)((char)this[0x4d] + '\x01');
    if ('\n' < (char)local_e) {
      local_e = (CCreature)0xa;
    }
    this[0x4d] = local_e;
  }
  cVar3 = CCreatureScript::validItem_BType(*(CCreatureScript **)(this + 0x44),param_1);
  if (cVar3 != '\0') {
    local_d = (CCreature)((char)this[0x4d] + -1);
    if ((char)local_d < '\0') {
      local_d = (CCreature)0x0;
    }
    this[0x4d] = local_d;
  }
  local_1c = CONCAT31((int3)((uint)*(undefined4 *)(this + 0x30) >> 8),this[0x4d]);
  uVar2 = local_1c;
  local_1c._2_2_ = (short)((uint)*(undefined4 *)(this + 0x30) >> 0x10);
  local_1c._2_2_ = local_1c._2_2_ + 1;
  local_1c._0_2_ = (undefined2)uVar2;
  *(undefined4 *)(this + 0x30) = local_1c;
  local_14 = GetExpLevel(this,(int)local_1c._2_2_);
  if (*(int *)(this + 0x2c) < local_14) {
    local_15 = '\x01';
  }
  *(int *)(this + 0x2c) = local_14;
  iVar1 = *(int *)(this + 0x2c);
  iVar5 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
  if ((iVar1 < iVar5) || (local_15 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    CPacketRespondent::CPacketRespondent(local_3c,param_2,0,0);
    bVar4 = (bool)IsGrowCreature(this);
                    /* try { // try from 08337b30 to 08337b34 has its CatchHandler @ 08337b37 */
    CPacketRespondent::MakeNotipacketGainExpCreature
              (local_3c,*(int *)(this + 0x30),*(int *)(this + 0x2c),bVar4);
    CPacketRespondent::~CPacketRespondent(local_3c);
  }
  if ((local_15 == '\0') || (cVar3 = IsAbleSelectEvolute(this,param_2), cVar3 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (cVar3 = SelectEvolute(this,param_2), cVar3 != '\x01')) {
    return 0;
  }
  this[0x40] = (CCreature)0x1;
  return 1;
}
```
