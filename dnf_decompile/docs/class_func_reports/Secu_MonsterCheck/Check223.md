# Check223

`_ZN17Secu_MonsterCheck8Check223Ev`

`Secu_MonsterCheck::Check223()`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827ad98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ad98  _ZN17Secu_MonsterCheck8Check223Ev
#           Secu_MonsterCheck::Check223()
# range [0x0827ad98, 0x0827af77]
0827ad98 +0x000:  push   %ebp
0827ad99 +0x001:  mov    %esp,%ebp
0827ad9b +0x003:  push   %ebx
0827ad9c +0x004:  sub    $0x34,%esp
0827ad9f +0x007:  mov    0x8(%ebp),%eax
0827ada2 +0x00a:  movzwl 0x8(%eax),%edx
0827ada6 +0x00e:  mov    0x8(%ebp),%eax
0827ada9 +0x011:  movzwl 0x28(%eax),%eax
0827adad +0x015:  cmp    %ax,%dx
0827adb0 +0x018:  jne    0827adbc <+0x24>
0827adb2 +0x01a:  mov    $0x1,%eax
0827adb7 +0x01f:  jmp    0827af72 <+0x1da>
0827adbc +0x024:  movb   $0x1,-0x11(%ebp)
0827adc0 +0x028:  mov    0x8(%ebp),%eax
0827adc3 +0x02b:  movzbl 0x4(%eax),%eax
0827adc7 +0x02f:  test   %al,%al
0827adc9 +0x031:  je     0827af6e <+0x1d6>
0827adcf +0x037:  mov    0x8(%ebp),%eax
0827add2 +0x03a:  movzwl 0xa(%eax),%eax
0827add6 +0x03e:  movzwl %ax,%edx
0827add9 +0x041:  mov    0x8(%ebp),%eax
0827addc +0x044:  movzwl 0x2a(%eax),%eax
0827ade0 +0x048:  movzwl %ax,%eax
0827ade3 +0x04b:  mov    %edx,%ecx
0827ade5 +0x04d:  sub    %eax,%ecx
0827ade7 +0x04f:  mov    %ecx,%eax
0827ade9 +0x051:  mov    %eax,-0x10(%ebp)
0827adec +0x054:  mov    0x8(%ebp),%eax
0827adef +0x057:  movzwl 0xc(%eax),%eax
0827adf3 +0x05b:  movzwl %ax,%edx
0827adf6 +0x05e:  mov    0x8(%ebp),%eax
0827adf9 +0x061:  movzwl 0x2c(%eax),%eax
0827adfd +0x065:  movzwl %ax,%eax
0827ae00 +0x068:  mov    %edx,%ecx
0827ae02 +0x06a:  sub    %eax,%ecx
0827ae04 +0x06c:  mov    %ecx,%eax
0827ae06 +0x06e:  mov    %eax,-0xc(%ebp)
0827ae09 +0x071:  cmpl   $0x0,-0x10(%ebp)
0827ae0d +0x075:  jg     0827ae39 <+0xa1>
0827ae0f +0x077:  mov    -0x10(%ebp),%eax
0827ae12 +0x07a:  neg    %eax
0827ae14 +0x07c:  cmp    $0xc7,%eax
0827ae19 +0x081:  jg     0827ae21 <+0x89>
0827ae1b +0x083:  cmpl   $0x0,-0xc(%ebp)
0827ae1f +0x087:  jg     0827ae30 <+0x98>
0827ae21 +0x089:  mov    -0xc(%ebp),%eax
0827ae24 +0x08c:  neg    %eax
0827ae26 +0x08e:  cmp    $0x95,%eax
0827ae2b +0x093:  setle  %al
0827ae2e +0x096:  jmp    0827ae37 <+0x9f>
0827ae30 +0x098:  cmpl   $0x0,-0xc(%ebp)
0827ae34 +0x09c:  setne  %al
0827ae37 +0x09f:  jmp    0827ae40 <+0xa8>
0827ae39 +0x0a1:  cmpl   $0x0,-0x10(%ebp)
0827ae3d +0x0a5:  setne  %al
0827ae40 +0x0a8:  test   %al,%al
0827ae42 +0x0aa:  je     0827aede <+0x146>
0827ae48 +0x0b0:  mov    0x8(%ebp),%eax
0827ae4b +0x0b3:  movzwl 0xe(%eax),%eax
0827ae4f +0x0b7:  lea    0x1(%eax),%edx
0827ae52 +0x0ba:  mov    0x8(%ebp),%eax
0827ae55 +0x0bd:  mov    %dx,0xe(%eax)
0827ae59 +0x0c1:  mov    0x8(%ebp),%eax
0827ae5c +0x0c4:  movzwl 0xe(%eax),%eax
0827ae60 +0x0c8:  cmp    $0xa,%ax
0827ae64 +0x0cc:  jbe    0827aebf <+0x127>
0827ae66 +0x0ce:  mov    0x8(%ebp),%eax
0827ae69 +0x0d1:  movw   $0x3,0x10(%eax)
0827ae6f +0x0d7:  mov    0x8(%ebp),%eax
0827ae72 +0x0da:  mov    (%eax),%eax
0827ae74 +0x0dc:  test   %eax,%eax
0827ae76 +0x0de:  je     0827aeb6 <+0x11e>
0827ae78 +0x0e0:  mov    0x8(%ebp),%eax
0827ae7b +0x0e3:  mov    (%eax),%ebx
0827ae7d +0x0e5:  mov    0x8(%ebp),%eax
0827ae80 +0x0e8:  mov    (%eax),%eax
0827ae82 +0x0ea:  mov    %eax,(%esp)
0827ae85 +0x0ed:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827ae8a +0x0f2:  movl   $0x0,0x14(%esp)
0827ae92 +0x0fa:  movl   $0x0,0x10(%esp)
0827ae9a +0x102:  movl   $0x3,0xc(%esp)
0827aea2 +0x10a:  movl   $0xdf,0x8(%esp)
0827aeaa +0x112:  mov    %ebx,0x4(%esp)
0827aeae +0x116:  mov    %eax,(%esp)
0827aeb1 +0x119:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827aeb6 +0x11e:  movb   $0x0,-0x11(%ebp)
0827aeba +0x122:  jmp    0827af6e <+0x1d6>
0827aebf +0x127:  mov    0x8(%ebp),%eax
0827aec2 +0x12a:  movzwl 0xe(%eax),%eax
0827aec6 +0x12e:  cmp    $0x4,%ax
0827aeca +0x132:  jbe    0827af6e <+0x1d6>
0827aed0 +0x138:  mov    0x8(%ebp),%eax
0827aed3 +0x13b:  movw   $0x1,0x10(%eax)
0827aed9 +0x141:  jmp    0827af6e <+0x1d6>
0827aede +0x146:  mov    0x8(%ebp),%eax
0827aee1 +0x149:  movzwl 0x10(%eax),%eax
0827aee5 +0x14d:  cmp    $0x1,%ax
0827aee9 +0x151:  jne    0827af32 <+0x19a>
0827aeeb +0x153:  mov    0x8(%ebp),%eax
0827aeee +0x156:  mov    (%eax),%eax
0827aef0 +0x158:  test   %eax,%eax
0827aef2 +0x15a:  je     0827af32 <+0x19a>
0827aef4 +0x15c:  mov    0x8(%ebp),%eax
0827aef7 +0x15f:  mov    (%eax),%ebx
0827aef9 +0x161:  mov    0x8(%ebp),%eax
0827aefc +0x164:  mov    (%eax),%eax
0827aefe +0x166:  mov    %eax,(%esp)
0827af01 +0x169:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827af06 +0x16e:  movl   $0x0,0x14(%esp)
0827af0e +0x176:  movl   $0x0,0x10(%esp)
0827af16 +0x17e:  movl   $0x1,0xc(%esp)
0827af1e +0x186:  movl   $0xdf,0x8(%esp)
0827af26 +0x18e:  mov    %ebx,0x4(%esp)
0827af2a +0x192:  mov    %eax,(%esp)
0827af2d +0x195:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827af32 +0x19a:  mov    0x8(%ebp),%eax
0827af35 +0x19d:  movzwl 0x28(%eax),%edx
0827af39 +0x1a1:  mov    0x8(%ebp),%eax
0827af3c +0x1a4:  mov    %dx,0x8(%eax)
0827af40 +0x1a8:  mov    0x8(%ebp),%eax
0827af43 +0x1ab:  movzwl 0x2a(%eax),%edx
0827af47 +0x1af:  mov    0x8(%ebp),%eax
0827af4a +0x1b2:  mov    %dx,0xa(%eax)
0827af4e +0x1b6:  mov    0x8(%ebp),%eax
0827af51 +0x1b9:  movzwl 0x2c(%eax),%edx
0827af55 +0x1bd:  mov    0x8(%ebp),%eax
0827af58 +0x1c0:  mov    %dx,0xc(%eax)
0827af5c +0x1c4:  mov    0x8(%ebp),%eax
0827af5f +0x1c7:  movw   $0x0,0xe(%eax)
0827af65 +0x1cd:  mov    0x8(%ebp),%eax
0827af68 +0x1d0:  movw   $0x0,0x10(%eax)
0827af6e +0x1d6:  movzbl -0x11(%ebp),%eax
0827af72 +0x1da:  add    $0x34,%esp
0827af75 +0x1dd:  pop    %ebx
0827af76 +0x1de:  pop    %ebp
0827af77 +0x1df:  ret
```

## 反编译 C

```c
// Secu_MonsterCheck::Check223 @ 0x827ad98

/* Secu_MonsterCheck::Check223() */

undefined1 __thiscall Secu_MonsterCheck::Check223(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_15;
  
  if (*(short *)(this + 8) == *(short *)(this + 0x28)) {
    local_15 = 1;
  }
  else {
    local_15 = 1;
    if (this[4] != (Secu_MonsterCheck)0x0) {
      iVar3 = (uint)*(ushort *)(this + 10) - (uint)*(ushort *)(this + 0x2a);
      iVar4 = (uint)*(ushort *)(this + 0xc) - (uint)*(ushort *)(this + 0x2c);
      if (iVar3 < 1) {
        if ((iVar3 == -199 || -iVar3 < 199) && (0 < iVar4)) {
          bVar5 = iVar4 != 0;
        }
        else {
          bVar5 = iVar4 == -0x95 || -iVar4 < 0x95;
        }
      }
      else {
        bVar5 = iVar3 != 0;
      }
      if (bVar5) {
        *(short *)(this + 0xe) = *(short *)(this + 0xe) + 1;
        if (*(ushort *)(this + 0xe) < 0xb) {
          if (4 < *(ushort *)(this + 0xe)) {
            *(undefined2 *)(this + 0x10) = 1;
          }
        }
        else {
          *(undefined2 *)(this + 0x10) = 3;
          if (*(int *)this != 0) {
            uVar1 = *(undefined4 *)this;
            pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xdf,3,0,0);
          }
          local_15 = 0;
        }
      }
      else {
        if ((*(short *)(this + 0x10) == 1) && (*(int *)this != 0)) {
          uVar1 = *(undefined4 *)this;
          pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xdf,1,0,0);
        }
        *(undefined2 *)(this + 8) = *(undefined2 *)(this + 0x28);
        *(undefined2 *)(this + 10) = *(undefined2 *)(this + 0x2a);
        *(undefined2 *)(this + 0xc) = *(undefined2 *)(this + 0x2c);
        *(undefined2 *)(this + 0xe) = 0;
        *(undefined2 *)(this + 0x10) = 0;
      }
    }
  }
  return local_15;
}
```
