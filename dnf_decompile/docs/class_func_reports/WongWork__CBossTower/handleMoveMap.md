# handleMoveMap

`_ZN8WongWork10CBossTower13handleMoveMapEPt`

`WongWork::CBossTower::handleMoveMap(unsigned short*)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08143996` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08143996  _ZN8WongWork10CBossTower13handleMoveMapEPt
#           WongWork::CBossTower::handleMoveMap(unsigned short*)
# range [0x08143996, 0x08143a61]
08143996 +0x00:  push   %ebp
08143997 +0x01:  mov    %esp,%ebp
08143999 +0x03:  sub    $0x28,%esp
0814399c +0x06:  mov    0x8(%ebp),%eax
0814399f +0x09:  mov    0xc(%ebp),%edx
081439a2 +0x0c:  mov    %edx,0x4(%esp)
081439a6 +0x10:  mov    %eax,(%esp)
081439a9 +0x13:  call   0814f66a <_ZN8WongWork10CBossStage13handleMoveMapEPt>  ; WongWork::CBossStage::handleMoveMap(unsigned short*)
081439ae +0x18:  xor    $0x1,%eax
081439b1 +0x1b:  test   %al,%al
081439b3 +0x1d:  je     081439bf <+0x29>
081439b5 +0x1f:  mov    $0x0,%eax
081439ba +0x24:  jmp    08143a5f <+0xc9>
081439bf +0x29:  movl   $0x0,-0x10(%ebp)
081439c6 +0x30:  jmp    08143a4b <+0xb5>
081439cb +0x35:  mov    0x8(%ebp),%eax
081439ce +0x38:  mov    0x4(%eax),%eax
081439d1 +0x3b:  mov    -0x10(%ebp),%edx
081439d4 +0x3e:  mov    %edx,0x4(%esp)
081439d8 +0x42:  mov    %eax,(%esp)
081439db +0x45:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
081439e0 +0x4a:  mov    %eax,-0xc(%ebp)
081439e3 +0x4d:  cmpl   $0x0,-0xc(%ebp)
081439e7 +0x51:  je     08143a06 <+0x70>
081439e9 +0x53:  mov    0x8(%ebp),%eax
081439ec +0x56:  mov    -0x10(%ebp),%edx
081439ef +0x59:  mov    %edx,0x4(%esp)
081439f3 +0x5d:  mov    %eax,(%esp)
081439f6 +0x60:  call   08145682 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x105>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x105
081439fb +0x65:  test   %al,%al
081439fd +0x67:  je     08143a06 <+0x70>
081439ff +0x69:  mov    $0x1,%eax
08143a04 +0x6e:  jmp    08143a0b <+0x75>
08143a06 +0x70:  mov    $0x0,%eax
08143a0b +0x75:  test   %al,%al
08143a0d +0x77:  je     08143a47 <+0xb1>
08143a0f +0x79:  mov    0x8(%ebp),%eax
08143a12 +0x7c:  mov    0xae8(%eax),%eax
08143a18 +0x82:  movzbl %al,%edx
08143a1b +0x85:  mov    0x8(%ebp),%eax
08143a1e +0x88:  mov    0xae0(%eax),%eax
08143a24 +0x8e:  movzbl %al,%eax
08143a27 +0x91:  mov    0x8(%ebp),%ecx
08143a2a +0x94:  add    $0xb00,%ecx
08143a30 +0x9a:  mov    %edx,0xc(%esp)
08143a34 +0x9e:  mov    %eax,0x8(%esp)
08143a38 +0xa2:  mov    -0xc(%ebp),%eax
08143a3b +0xa5:  mov    %eax,0x4(%esp)
08143a3f +0xa9:  mov    %ecx,(%esp)
08143a42 +0xac:  call   081564f0 <_ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh>  ; CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)
08143a47 +0xb1:  addl   $0x1,-0x10(%ebp)
08143a4b +0xb5:  cmpl   $0x3,-0x10(%ebp)
08143a4f +0xb9:  setle  %al
08143a52 +0xbc:  test   %al,%al
08143a54 +0xbe:  jne    081439cb <+0x35>
08143a5a +0xc4:  mov    $0x1,%eax
08143a5f +0xc9:  leave
08143a60 +0xca:  ret
08143a61 +0xcb:  nop
```

## 反编译 C

```c
// WongWork::CBossTower::handleMoveMap @ 0x8143996

/* WongWork::CBossTower::handleMoveMap(unsigned short*) */

undefined4 __thiscall WongWork::CBossTower::handleMoveMap(CBossTower *this,ushort *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  int local_14;
  
  cVar2 = CBossStage::handleMoveMap((CBossStage *)this,param_1);
  if (cVar2 == '\x01') {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      pCVar4 = (CUser *)CParty::get_user(*(CParty **)(this + 4),local_14);
      if (pCVar4 == (CUser *)0x0) {
LAB_08143a06:
        bVar1 = false;
      }
      else {
        cVar2 = CBossPlay::isMemberAlive((CBossPlay *)this,local_14);
        if (cVar2 == '\0') goto LAB_08143a06;
        bVar1 = true;
      }
      if (bVar1) {
        CBossDungeonEntranceLog::IncrementBossStageStart
                  ((CBossDungeonEntranceLog *)(this + 0xb00),pCVar4,
                   (uchar)*(undefined4 *)(this + 0xae0),(uchar)*(undefined4 *)(this + 0xae8));
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
