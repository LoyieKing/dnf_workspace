# onFinishStage

`_ZN8WongWork10CBossTower13onFinishStageEv`

`WongWork::CBossTower::onFinishStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x081440b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081440b2  _ZN8WongWork10CBossTower13onFinishStageEv
#           WongWork::CBossTower::onFinishStage()
# range [0x081440b2, 0x081441d3]
081440b2 +0x000:  push   %ebp
081440b3 +0x001:  mov    %esp,%ebp
081440b5 +0x003:  push   %ebx
081440b6 +0x004:  sub    $0x34,%esp
081440b9 +0x007:  movl   $0x0,-0x14(%ebp)
081440c0 +0x00e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081440c7 +0x015:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
081440cc +0x01a:  mov    %eax,%edx
081440ce +0x01c:  mov    0x8(%ebp),%eax
081440d1 +0x01f:  mov    %edx,0x9ec(%eax)
081440d7 +0x025:  mov    0x8(%ebp),%eax
081440da +0x028:  mov    0x9ec(%eax),%edx
081440e0 +0x02e:  mov    0x8(%ebp),%eax
081440e3 +0x031:  mov    0x9e8(%eax),%eax
081440e9 +0x037:  mov    %edx,%ecx
081440eb +0x039:  sub    %eax,%ecx
081440ed +0x03b:  mov    $0x10624dd3,%edx
081440f2 +0x040:  mov    %ecx,%eax
081440f4 +0x042:  imul   %edx
081440f6 +0x044:  sar    $0x6,%edx
081440f9 +0x047:  mov    %ecx,%eax
081440fb +0x049:  sar    $0x1f,%eax
081440fe +0x04c:  mov    %edx,%ecx
08144100 +0x04e:  sub    %eax,%ecx
08144102 +0x050:  mov    %ecx,%eax
08144104 +0x052:  mov    %eax,-0x14(%ebp)
08144107 +0x055:  movl   $0x0,-0x10(%ebp)
0814410e +0x05c:  jmp    081441b9 <+0x107>
08144113 +0x061:  mov    0x8(%ebp),%eax
08144116 +0x064:  mov    0x4(%eax),%eax
08144119 +0x067:  mov    -0x10(%ebp),%edx
0814411c +0x06a:  mov    %edx,0x4(%esp)
08144120 +0x06e:  mov    %eax,(%esp)
08144123 +0x071:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08144128 +0x076:  mov    %eax,-0xc(%ebp)
0814412b +0x079:  cmpl   $0x0,-0xc(%ebp)
0814412f +0x07d:  je     0814414d <+0x9b>
08144131 +0x07f:  mov    0x8(%ebp),%eax
08144134 +0x082:  mov    0x4(%eax),%eax
08144137 +0x085:  mov    -0x10(%ebp),%edx
0814413a +0x088:  mov    %edx,0x4(%esp)
0814413e +0x08c:  mov    %eax,(%esp)
08144141 +0x08f:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08144146 +0x094:  xor    $0x1,%eax
08144149 +0x097:  test   %al,%al
0814414b +0x099:  je     08144154 <+0xa2>
0814414d +0x09b:  mov    $0x1,%eax
08144152 +0x0a0:  jmp    08144159 <+0xa7>
08144154 +0x0a2:  mov    $0x0,%eax
08144159 +0x0a7:  test   %al,%al
0814415b +0x0a9:  jne    081441b4 <+0x102>
0814415d +0x0ab:  mov    0x8(%ebp),%eax
08144160 +0x0ae:  mov    -0x10(%ebp),%edx
08144163 +0x0b1:  mov    %edx,0x4(%esp)
08144167 +0x0b5:  mov    %eax,(%esp)
0814416a +0x0b8:  call   08145682 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x105>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x105
0814416f +0x0bd:  test   %al,%al
08144171 +0x0bf:  je     081441b5 <+0x103>
08144173 +0x0c1:  mov    0x8(%ebp),%eax
08144176 +0x0c4:  mov    0xae8(%eax),%eax
0814417c +0x0ca:  movzbl %al,%ecx
0814417f +0x0cd:  mov    -0x14(%ebp),%edx
08144182 +0x0d0:  mov    0x8(%ebp),%eax
08144185 +0x0d3:  mov    0xae0(%eax),%eax
0814418b +0x0d9:  movzbl %al,%eax
0814418e +0x0dc:  mov    0x8(%ebp),%ebx
08144191 +0x0df:  add    $0xb00,%ebx
08144197 +0x0e5:  mov    %ecx,0x10(%esp)
0814419b +0x0e9:  mov    %edx,0xc(%esp)
0814419f +0x0ed:  mov    %eax,0x8(%esp)
081441a3 +0x0f1:  mov    -0xc(%ebp),%eax
081441a6 +0x0f4:  mov    %eax,0x4(%esp)
081441aa +0x0f8:  mov    %ebx,(%esp)
081441ad +0x0fb:  call   0815662e <_ZN23CBossDungeonEntranceLog21IncrementBossStageEndER5CUserhjh>  ; CBossDungeonEntranceLog::IncrementBossStageEnd(CUser&, unsigned char, unsigned int, unsigned char)
081441b2 +0x100:  jmp    081441b5 <+0x103>
081441b4 +0x102:  nop
081441b5 +0x103:  addl   $0x1,-0x10(%ebp)
081441b9 +0x107:  cmpl   $0x3,-0x10(%ebp)
081441bd +0x10b:  setle  %al
081441c0 +0x10e:  test   %al,%al
081441c2 +0x110:  jne    08144113 <+0x61>
081441c8 +0x116:  mov    $0x1,%eax
081441cd +0x11b:  add    $0x34,%esp
081441d0 +0x11e:  pop    %ebx
081441d1 +0x11f:  pop    %ebp
081441d2 +0x120:  ret
081441d3 +0x121:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::onFinishStage @ 0x81440b2

/* WongWork::CBossTower::onFinishStage() */

undefined4 __thiscall WongWork::CBossTower::onFinishStage(CBossTower *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  CUser *pCVar6;
  int local_14;
  
  uVar5 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x9ec) = uVar5;
  iVar1 = *(int *)(this + 0x9ec);
  iVar2 = *(int *)(this + 0x9e8);
  local_14 = 0;
  do {
    if (3 < local_14) {
      return 1;
    }
    pCVar6 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
    if (pCVar6 == (CUser *)0x0) {
LAB_0814414d:
      bVar3 = true;
    }
    else {
      cVar4 = CParty::checkValidUser(*(CParty **)(this + 4),local_14);
      if (cVar4 != '\x01') goto LAB_0814414d;
      bVar3 = false;
    }
    if (!bVar3) {
      cVar4 = CBossPlay::isMemberAlive((CBossPlay *)this,local_14);
      if (cVar4 != '\0') {
        CBossDungeonEntranceLog::IncrementBossStageEnd
                  ((CBossDungeonEntranceLog *)(this + 0xb00),pCVar6,
                   (uchar)*(undefined4 *)(this + 0xae0),(iVar1 - iVar2) / 1000,
                   (uchar)*(undefined4 *)(this + 0xae8));
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
