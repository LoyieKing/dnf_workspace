# EventEvoluteCreature

`_ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii`

`user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833da1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833da1e  _ZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiii
#           user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int)
# range [0x0833da1e, 0x0833db2d]
0833da1e +0x000:  push   %ebp
0833da1f +0x001:  mov    %esp,%ebp
0833da21 +0x003:  push   %esi
0833da22 +0x004:  push   %ebx
0833da23 +0x005:  sub    $0x40,%esp
0833da26 +0x008:  mov    0x8(%ebp),%eax
0833da29 +0x00b:  mov    0x18(%eax),%eax
0833da2c +0x00e:  test   %eax,%eax
0833da2e +0x010:  je     0833db20 <+0x102>
0833da34 +0x016:  mov    0x8(%ebp),%eax
0833da37 +0x019:  mov    0x18(%eax),%eax
0833da3a +0x01c:  mov    %eax,(%esp)
0833da3d +0x01f:  call   0833f09a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1167>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1167
0833da42 +0x024:  cmp    0x10(%ebp),%eax
0833da45 +0x027:  setge  %al
0833da48 +0x02a:  test   %al,%al
0833da4a +0x02c:  je     0833daea <+0xcc>
0833da50 +0x032:  mov    0x8(%ebp),%eax
0833da53 +0x035:  mov    0x1c(%eax),%edx
0833da56 +0x038:  mov    0x8(%ebp),%eax
0833da59 +0x03b:  mov    0x18(%eax),%eax
0833da5c +0x03e:  mov    0x14(%ebp),%ecx
0833da5f +0x041:  mov    %ecx,0xc(%esp)
0833da63 +0x045:  mov    0xc(%ebp),%ecx
0833da66 +0x048:  mov    %ecx,0x8(%esp)
0833da6a +0x04c:  mov    %edx,0x4(%esp)
0833da6e +0x050:  mov    %eax,(%esp)
0833da71 +0x053:  call   0833db2e <_ZN13user_creature9CCreature12EventEvoluteEP5CUserii>  ; user_creature::CCreature::EventEvolute(CUser*, int, int)
0833da76 +0x058:  test   %al,%al
0833da78 +0x05a:  je     0833db20 <+0x102>
0833da7e +0x060:  mov    0x8(%ebp),%eax
0833da81 +0x063:  mov    0x1c(%eax),%eax
0833da84 +0x066:  movl   $0x0,0xc(%esp)
0833da8c +0x06e:  movl   $0x0,0x8(%esp)
0833da94 +0x076:  mov    %eax,0x4(%esp)
0833da98 +0x07a:  lea    -0x38(%ebp),%eax
0833da9b +0x07d:  mov    %eax,(%esp)
0833da9e +0x080:  call   0834032a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x23f7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x23f7
0833daa3 +0x085:  mov    0x8(%ebp),%eax
0833daa6 +0x088:  movl   $0xee,0x8(%esp)
0833daae +0x090:  mov    %eax,0x4(%esp)
0833dab2 +0x094:  lea    -0x38(%ebp),%eax
0833dab5 +0x097:  mov    %eax,(%esp)
0833dab8 +0x09a:  call   083409e0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2aad>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2aad
0833dabd +0x09f:  mov    $0x1,%ebx
0833dac2 +0x0a4:  lea    -0x38(%ebp),%eax
0833dac5 +0x0a7:  mov    %eax,(%esp)
0833dac8 +0x0aa:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833dacd +0x0af:  jmp    0833db25 <+0x107>
0833dacf +0x0b1:  mov    %edx,%ebx
0833dad1 +0x0b3:  mov    %eax,%esi
0833dad3 +0x0b5:  lea    -0x38(%ebp),%eax
0833dad6 +0x0b8:  mov    %eax,(%esp)
0833dad9 +0x0bb:  call   0834036a <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2437>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2437
0833dade +0x0c0:  mov    %esi,%eax
0833dae0 +0x0c2:  mov    %ebx,%edx
0833dae2 +0x0c4:  mov    %eax,(%esp)
0833dae5 +0x0c7:  call   08ae3750 <_Unwind_Resume>
0833daea +0x0cc:  movl   $0x0,0xc(%esp)
0833daf2 +0x0d4:  movl   $0x10c2,0x8(%esp)
0833dafa +0x0dc:  movl   $&_ZZN13user_creature12CCreatureMgr20EventEvoluteCreatureEiiiE19__PRETTY_FUNCTION__,0x4(%esp)
0833db02 +0x0e4:  lea    -0x18(%ebp),%eax
0833db05 +0x0e7:  mov    %eax,(%esp)
0833db08 +0x0ea:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833db0d +0x0ef:  movl   $"event evolute creature error : low creature level.",0x4(%esp)
0833db15 +0x0f7:  lea    -0x18(%ebp),%eax
0833db18 +0x0fa:  mov    %eax,(%esp)
0833db1b +0x0fd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833db20 +0x102:  mov    $0x0,%ebx
0833db25 +0x107:  mov    %ebx,%eax
0833db27 +0x109:  add    $0x40,%esp
0833db2a +0x10c:  pop    %ebx
0833db2b +0x10d:  pop    %esi
0833db2c +0x10e:  pop    %ebp
0833db2d +0x10f:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::EventEvoluteCreature @ 0x833da1e

/* user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::EventEvoluteCreature
          (CCreatureMgr *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CPacketRespondent local_3c [32];
  cMyTrace local_1c [16];
  
  if (*(int *)(this + 0x18) != 0) {
    iVar2 = CCreature::GetLevel(*(CCreature **)(this + 0x18));
    if (iVar2 < param_2) {
      cMyTrace::cMyTrace(local_1c,
                         "bool user_creature::CCreatureMgr::EventEvoluteCreature(int, int, int)",
                         0x10c2,0);
      cMyTrace::operator()(local_1c,"event evolute creature error : low creature level.");
    }
    else {
      cVar1 = CCreature::EventEvolute
                        (*(CCreature **)(this + 0x18),*(CUser **)(this + 0x1c),param_1,param_3);
      if (cVar1 != '\0') {
        CPacketRespondent::CPacketRespondent(local_3c,*(CUser **)(this + 0x1c),0,0);
                    /* try { // try from 0833dab8 to 0833dabc has its CatchHandler @ 0833dacf */
        CPacketRespondent::MakeNotipacketCreatureItemList(local_3c,(map *)this,0xee);
        CPacketRespondent::~CPacketRespondent(local_3c);
        return 1;
      }
    }
  }
  return 0;
}
```
