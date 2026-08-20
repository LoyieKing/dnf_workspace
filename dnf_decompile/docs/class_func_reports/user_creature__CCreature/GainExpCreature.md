# GainExpCreature

`_ZN13user_creature9CCreature15GainExpCreatureEiP5CUser`

`user_creature::CCreature::GainExpCreature(int, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x08337bbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08337bbc  _ZN13user_creature9CCreature15GainExpCreatureEiP5CUser
#           user_creature::CCreature::GainExpCreature(int, CUser*)
# range [0x08337bbc, 0x08337d57]
08337bbc +0x000:  push   %ebp
08337bbd +0x001:  mov    %esp,%ebp
08337bbf +0x003:  push   %esi
08337bc0 +0x004:  push   %ebx
08337bc1 +0x005:  sub    $0x50,%esp
08337bc4 +0x008:  movb   $0x0,-0xd(%ebp)
08337bc8 +0x00c:  mov    0x8(%ebp),%eax
08337bcb +0x00f:  movzbl 0x4c(%eax),%eax
08337bcf +0x013:  xor    $0x1,%eax
08337bd2 +0x016:  test   %al,%al
08337bd4 +0x018:  je     08337be0 <+0x24>
08337bd6 +0x01a:  mov    $0x0,%eax
08337bdb +0x01f:  jmp    08337d51 <+0x195>
08337be0 +0x024:  mov    0x8(%ebp),%eax
08337be3 +0x027:  movzbl 0x4c(%eax),%eax
08337be7 +0x02b:  movzbl %al,%edx
08337bea +0x02e:  mov    0x8(%ebp),%eax
08337bed +0x031:  mov    0x3c(%eax),%eax
08337bf0 +0x034:  mov    0x8(%ebp),%ecx
08337bf3 +0x037:  add    $0x34,%ecx
08337bf6 +0x03a:  mov    %edx,0x8(%esp)
08337bfa +0x03e:  mov    %eax,0x4(%esp)
08337bfe +0x042:  mov    %ecx,(%esp)
08337c01 +0x045:  call   08336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>  ; user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)
08337c06 +0x04a:  fnstcw -0x3a(%ebp)
08337c09 +0x04d:  movzwl -0x3a(%ebp),%eax
08337c0d +0x051:  mov    $0xc,%ah
08337c0f +0x053:  mov    %ax,-0x3c(%ebp)
08337c13 +0x057:  fldcw  -0x3c(%ebp)
08337c16 +0x05a:  fistpl -0xc(%ebp)
08337c19 +0x05d:  fldcw  -0x3a(%ebp)
08337c1c +0x060:  cmpl   $0x0,-0xc(%ebp)
08337c20 +0x064:  jg     08337c2c <+0x70>
08337c22 +0x066:  mov    $0x0,%eax
08337c27 +0x06b:  jmp    08337d51 <+0x195>
08337c2c +0x070:  mov    0x10(%ebp),%eax
08337c2f +0x073:  mov    %eax,0xc(%esp)
08337c33 +0x077:  lea    -0xd(%ebp),%eax
08337c36 +0x07a:  mov    %eax,0x8(%esp)
08337c3a +0x07e:  mov    0xc(%ebp),%eax
08337c3d +0x081:  mov    %eax,0x4(%esp)
08337c41 +0x085:  mov    0x8(%ebp),%eax
08337c44 +0x088:  mov    %eax,(%esp)
08337c47 +0x08b:  call   083377b6 <_ZN13user_creature9CCreature12CalculateExpEiRbP5CUser>  ; user_creature::CCreature::CalculateExp(int, bool&, CUser*)
08337c4c +0x090:  mov    0x8(%ebp),%eax
08337c4f +0x093:  mov    0x2c(%eax),%ebx
08337c52 +0x096:  mov    0x8(%ebp),%eax
08337c55 +0x099:  mov    0x44(%eax),%eax
08337c58 +0x09c:  mov    %eax,(%esp)
08337c5b +0x09f:  call   0833f24c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1319>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1319
08337c60 +0x0a4:  cmp    %eax,%ebx
08337c62 +0x0a6:  jl     08337c6c <+0xb0>
08337c64 +0x0a8:  movzbl -0xd(%ebp),%eax
08337c68 +0x0ac:  test   %al,%al
08337c6a +0x0ae:  je     08337c73 <+0xb7>
08337c6c +0x0b0:  mov    $0x1,%eax
08337c71 +0x0b5:  jmp    08337c78 <+0xbc>
08337c73 +0x0b7:  mov    $0x0,%eax
08337c78 +0x0bc:  test   %al,%al
08337c7a +0x0be:  je     08337cf7 <+0x13b>
08337c7c +0x0c0:  movl   $0x0,0xc(%esp)
08337c84 +0x0c8:  movl   $0x0,0x8(%esp)
08337c8c +0x0d0:  mov    0x10(%ebp),%eax
08337c8f +0x0d3:  mov    %eax,0x4(%esp)
08337c93 +0x0d7:  lea    -0x30(%ebp),%eax
08337c96 +0x0da:  mov    %eax,(%esp)
08337c99 +0x0dd:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
08337c9e +0x0e2:  mov    0x8(%ebp),%eax
08337ca1 +0x0e5:  mov    %eax,(%esp)
08337ca4 +0x0e8:  call   0833f0ca <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1197>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1197
08337ca9 +0x0ed:  movzbl %al,%ecx
08337cac +0x0f0:  mov    0x8(%ebp),%eax
08337caf +0x0f3:  mov    0x2c(%eax),%edx
08337cb2 +0x0f6:  mov    0x8(%ebp),%eax
08337cb5 +0x0f9:  mov    0x30(%eax),%eax
08337cb8 +0x0fc:  mov    %ecx,0xc(%esp)
08337cbc +0x100:  mov    %edx,0x8(%esp)
08337cc0 +0x104:  mov    %eax,0x4(%esp)
08337cc4 +0x108:  lea    -0x30(%ebp),%eax
08337cc7 +0x10b:  mov    %eax,(%esp)
08337cca +0x10e:  call   08340760 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x282d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x282d
08337ccf +0x113:  jmp    08337cec <+0x130>
08337cd1 +0x115:  mov    %edx,%ebx
08337cd3 +0x117:  mov    %eax,%esi
08337cd5 +0x119:  lea    -0x30(%ebp),%eax
08337cd8 +0x11c:  mov    %eax,(%esp)
08337cdb +0x11f:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08337ce0 +0x124:  mov    %esi,%eax
08337ce2 +0x126:  mov    %ebx,%edx
08337ce4 +0x128:  mov    %eax,(%esp)
08337ce7 +0x12b:  call   08ae3750 <_Unwind_Resume>
08337cec +0x130:  lea    -0x30(%ebp),%eax
08337cef +0x133:  mov    %eax,(%esp)
08337cf2 +0x136:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
08337cf7 +0x13b:  movzbl -0xd(%ebp),%eax
08337cfb +0x13f:  test   %al,%al
08337cfd +0x141:  je     08337d1c <+0x160>
08337cff +0x143:  mov    0x10(%ebp),%eax
08337d02 +0x146:  mov    %eax,0x4(%esp)
08337d06 +0x14a:  mov    0x8(%ebp),%eax
08337d09 +0x14d:  mov    %eax,(%esp)
08337d0c +0x150:  call   083380fc <_ZNK13user_creature9CCreature13IsAbleEvoluteEP5CUser>  ; user_creature::CCreature::IsAbleEvolute(CUser*) const
08337d11 +0x155:  test   %al,%al
08337d13 +0x157:  je     08337d1c <+0x160>
08337d15 +0x159:  mov    $0x1,%eax
08337d1a +0x15e:  jmp    08337d21 <+0x165>
08337d1c +0x160:  mov    $0x0,%eax
08337d21 +0x165:  test   %al,%al
08337d23 +0x167:  je     08337d45 <+0x189>
08337d25 +0x169:  mov    0x10(%ebp),%eax
08337d28 +0x16c:  mov    %eax,0x4(%esp)
08337d2c +0x170:  mov    0x8(%ebp),%eax
08337d2f +0x173:  mov    %eax,(%esp)
08337d32 +0x176:  call   083381ea <_ZN13user_creature9CCreature7EvoluteEP5CUser>  ; user_creature::CCreature::Evolute(CUser*)
08337d37 +0x17b:  xor    $0x1,%eax
08337d3a +0x17e:  test   %al,%al
08337d3c +0x180:  je     08337d45 <+0x189>
08337d3e +0x182:  mov    $0x0,%eax
08337d43 +0x187:  jmp    08337d51 <+0x195>
08337d45 +0x189:  mov    0x8(%ebp),%eax
08337d48 +0x18c:  movb   $0x1,0x40(%eax)
08337d4c +0x190:  mov    $0x1,%eax
08337d51 +0x195:  add    $0x50,%esp
08337d54 +0x198:  pop    %ebx
08337d55 +0x199:  pop    %esi
08337d56 +0x19a:  pop    %ebp
08337d57 +0x19b:  ret
```

## 反编译 C

```c
// user_creature::CCreature::GainExpCreature @ 0x8337bbc

/* user_creature::CCreature::GainExpCreature(int, CUser*) */

undefined4 __thiscall
user_creature::CCreature::GainExpCreature(CCreature *this,int param_1,CUser *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longdouble lVar5;
  CPacketRespondent local_34 [35];
  bool local_11;
  int local_10;
  
  local_11 = false;
  if (this[0x4c] != (CCreature)0x1) {
    return 0;
  }
  lVar5 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  local_10 = (int)ROUND(lVar5);
  if (0 < local_10) {
    CalculateExp(this,param_1,&local_11,param_2);
    iVar1 = *(int *)(this + 0x2c);
    iVar4 = CCreatureScript::GetMaxLevel(*(CCreatureScript **)(this + 0x44));
    if ((iVar1 < iVar4) || (local_11 != false)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      CPacketRespondent::CPacketRespondent(local_34,param_2,0,0);
      bVar2 = (bool)IsGrowCreature(this);
                    /* try { // try from 08337cca to 08337cce has its CatchHandler @ 08337cd1 */
      CPacketRespondent::MakeNotipacketGainExpCreature
                (local_34,*(int *)(this + 0x30),*(int *)(this + 0x2c),bVar2);
      CPacketRespondent::~CPacketRespondent(local_34);
    }
    if ((local_11 == false) || (cVar3 = IsAbleEvolute(this,param_2), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = Evolute(this,param_2), cVar3 != '\x01')) {
      return 0;
    }
    this[0x40] = (CCreature)0x1;
    return 1;
  }
  return 0;
}
```
