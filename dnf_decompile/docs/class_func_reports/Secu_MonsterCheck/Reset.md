# Reset

`_ZN17Secu_MonsterCheck5ResetEv`

`Secu_MonsterCheck::Reset()`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827ac7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ac7a  _ZN17Secu_MonsterCheck5ResetEv
#           Secu_MonsterCheck::Reset()
# range [0x0827ac7a, 0x0827ad97]
0827ac7a +0x000:  push   %ebp
0827ac7b +0x001:  mov    %esp,%ebp
0827ac7d +0x003:  push   %ebx
0827ac7e +0x004:  sub    $0x24,%esp
0827ac81 +0x007:  mov    0x8(%ebp),%eax
0827ac84 +0x00a:  movzwl 0x10(%eax),%eax
0827ac88 +0x00e:  cmp    $0x1,%ax
0827ac8c +0x012:  jne    0827acd5 <+0x5b>
0827ac8e +0x014:  mov    0x8(%ebp),%eax
0827ac91 +0x017:  mov    (%eax),%eax
0827ac93 +0x019:  test   %eax,%eax
0827ac95 +0x01b:  je     0827acd5 <+0x5b>
0827ac97 +0x01d:  mov    0x8(%ebp),%eax
0827ac9a +0x020:  mov    (%eax),%ebx
0827ac9c +0x022:  mov    0x8(%ebp),%eax
0827ac9f +0x025:  mov    (%eax),%eax
0827aca1 +0x027:  mov    %eax,(%esp)
0827aca4 +0x02a:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827aca9 +0x02f:  movl   $0x0,0x14(%esp)
0827acb1 +0x037:  movl   $0x0,0x10(%esp)
0827acb9 +0x03f:  movl   $0x1,0xc(%esp)
0827acc1 +0x047:  movl   $0xdf,0x8(%esp)
0827acc9 +0x04f:  mov    %ebx,0x4(%esp)
0827accd +0x053:  mov    %eax,(%esp)
0827acd0 +0x056:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827acd5 +0x05b:  mov    0x8(%ebp),%eax
0827acd8 +0x05e:  movzwl 0x1a(%eax),%eax
0827acdc +0x062:  cmp    $0x1,%ax
0827ace0 +0x066:  jne    0827ad29 <+0xaf>
0827ace2 +0x068:  mov    0x8(%ebp),%eax
0827ace5 +0x06b:  mov    (%eax),%eax
0827ace7 +0x06d:  test   %eax,%eax
0827ace9 +0x06f:  je     0827ad29 <+0xaf>
0827aceb +0x071:  mov    0x8(%ebp),%eax
0827acee +0x074:  mov    (%eax),%ebx
0827acf0 +0x076:  mov    0x8(%ebp),%eax
0827acf3 +0x079:  mov    (%eax),%eax
0827acf5 +0x07b:  mov    %eax,(%esp)
0827acf8 +0x07e:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827acfd +0x083:  movl   $0x0,0x14(%esp)
0827ad05 +0x08b:  movl   $0x0,0x10(%esp)
0827ad0d +0x093:  movl   $0x1,0xc(%esp)
0827ad15 +0x09b:  movl   $0xe0,0x8(%esp)
0827ad1d +0x0a3:  mov    %ebx,0x4(%esp)
0827ad21 +0x0a7:  mov    %eax,(%esp)
0827ad24 +0x0aa:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827ad29 +0x0af:  mov    0x8(%ebp),%eax
0827ad2c +0x0b2:  movzwl 0x26(%eax),%eax
0827ad30 +0x0b6:  cmp    $0x1,%ax
0827ad34 +0x0ba:  jne    0827ad7d <+0x103>
0827ad36 +0x0bc:  mov    0x8(%ebp),%eax
0827ad39 +0x0bf:  mov    (%eax),%eax
0827ad3b +0x0c1:  test   %eax,%eax
0827ad3d +0x0c3:  je     0827ad7d <+0x103>
0827ad3f +0x0c5:  mov    0x8(%ebp),%eax
0827ad42 +0x0c8:  mov    (%eax),%ebx
0827ad44 +0x0ca:  mov    0x8(%ebp),%eax
0827ad47 +0x0cd:  mov    (%eax),%eax
0827ad49 +0x0cf:  mov    %eax,(%esp)
0827ad4c +0x0d2:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827ad51 +0x0d7:  movl   $0x0,0x14(%esp)
0827ad59 +0x0df:  movl   $0x0,0x10(%esp)
0827ad61 +0x0e7:  movl   $0x1,0xc(%esp)
0827ad69 +0x0ef:  movl   $0xe1,0x8(%esp)
0827ad71 +0x0f7:  mov    %ebx,0x4(%esp)
0827ad75 +0x0fb:  mov    %eax,(%esp)
0827ad78 +0x0fe:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827ad7d +0x103:  mov    0x8(%ebp),%eax
0827ad80 +0x106:  movb   $0x0,0x4(%eax)
0827ad84 +0x10a:  mov    0x8(%ebp),%eax
0827ad87 +0x10d:  movb   $0x0,0x5(%eax)
0827ad8b +0x111:  mov    0x8(%ebp),%eax
0827ad8e +0x114:  movb   $0x0,0x6(%eax)
0827ad92 +0x118:  add    $0x24,%esp
0827ad95 +0x11b:  pop    %ebx
0827ad96 +0x11c:  pop    %ebp
0827ad97 +0x11d:  ret
```

## 反编译 C

```c
// Secu_MonsterCheck::Reset @ 0x827ac7a

/* Secu_MonsterCheck::Reset() */

void __thiscall Secu_MonsterCheck::Reset(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  
  if ((*(short *)(this + 0x10) == 1) && (*(int *)this != 0)) {
    uVar1 = *(undefined4 *)this;
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xdf,1,0,0);
  }
  if ((*(short *)(this + 0x1a) == 1) && (*(int *)this != 0)) {
    uVar1 = *(undefined4 *)this;
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe0,1,0,0);
  }
  if ((*(short *)(this + 0x26) == 1) && (*(int *)this != 0)) {
    uVar1 = *(undefined4 *)this;
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe1,1,0,0);
  }
  this[4] = (Secu_MonsterCheck)0x0;
  this[5] = (Secu_MonsterCheck)0x0;
  this[6] = (Secu_MonsterCheck)0x0;
  return;
}
```
