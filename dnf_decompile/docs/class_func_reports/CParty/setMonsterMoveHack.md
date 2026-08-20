# setMonsterMoveHack

`_ZN6CParty18setMonsterMoveHackEv`

`CParty::setMonsterMoveHack()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba762` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba762  _ZN6CParty18setMonsterMoveHackEv
#           CParty::setMonsterMoveHack()
# range [0x085ba762, 0x085ba803]
085ba762 +0x00:  push   %ebp
085ba763 +0x01:  mov    %esp,%ebp
085ba765 +0x03:  push   %ebx
085ba766 +0x04:  sub    $0x34,%esp
085ba769 +0x07:  movl   $0x0,-0xc(%ebp)
085ba770 +0x0e:  jmp    085ba7ee <+0x8c>
085ba772 +0x10:  mov    -0xc(%ebp),%eax
085ba775 +0x13:  mov    %eax,0x4(%esp)
085ba779 +0x17:  mov    0x8(%ebp),%eax
085ba77c +0x1a:  mov    %eax,(%esp)
085ba77f +0x1d:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085ba784 +0x22:  test   %al,%al
085ba786 +0x24:  je     085ba7ea <+0x88>
085ba788 +0x26:  mov    -0xc(%ebp),%edx
085ba78b +0x29:  mov    0x8(%ebp),%ecx
085ba78e +0x2c:  mov    %edx,%eax
085ba790 +0x2e:  add    %eax,%eax
085ba792 +0x30:  add    %edx,%eax
085ba794 +0x32:  shl    $0x3,%eax
085ba797 +0x35:  lea    (%ecx,%eax,1),%eax
085ba79a +0x38:  add    $0x78,%eax
085ba79d +0x3b:  mov    (%eax),%ebx
085ba79f +0x3d:  mov    -0xc(%ebp),%edx
085ba7a2 +0x40:  mov    0x8(%ebp),%ecx
085ba7a5 +0x43:  mov    %edx,%eax
085ba7a7 +0x45:  add    %eax,%eax
085ba7a9 +0x47:  add    %edx,%eax
085ba7ab +0x49:  shl    $0x3,%eax
085ba7ae +0x4c:  lea    (%ecx,%eax,1),%eax
085ba7b1 +0x4f:  add    $0x78,%eax
085ba7b4 +0x52:  mov    (%eax),%eax
085ba7b6 +0x54:  mov    %eax,(%esp)
085ba7b9 +0x57:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
085ba7be +0x5c:  movl   $0x0,0x14(%esp)
085ba7c6 +0x64:  movl   $0x0,0x10(%esp)
085ba7ce +0x6c:  movl   $0x1,0xc(%esp)
085ba7d6 +0x74:  movl   $0xd3,0x8(%esp)
085ba7de +0x7c:  mov    %ebx,0x4(%esp)
085ba7e2 +0x80:  mov    %eax,(%esp)
085ba7e5 +0x83:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
085ba7ea +0x88:  addl   $0x1,-0xc(%ebp)
085ba7ee +0x8c:  cmpl   $0x3,-0xc(%ebp)
085ba7f2 +0x90:  setle  %al
085ba7f5 +0x93:  test   %al,%al
085ba7f7 +0x95:  jne    085ba772 <+0x10>
085ba7fd +0x9b:  add    $0x34,%esp
085ba800 +0x9e:  pop    %ebx
085ba801 +0x9f:  pop    %ebp
085ba802 +0xa0:  ret
085ba803 +0xa1:  nop
```

## 反编译 C

```c
// CParty::setMonsterMoveHack @ 0x85ba762

/* CParty::setMonsterMoveHack() */

void __thiscall CParty::setMonsterMoveHack(CParty *this)

{
  undefined4 uVar1;
  char cVar2;
  CHackAnalyzer *pCVar3;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar2 = _checkValidUser(this,local_10);
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(this + local_10 * 0x18 + 0x78);
      pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + local_10 * 0x18 + 0x78));
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,uVar1,0xd3,1,0,0);
    }
  }
  return;
}
```
