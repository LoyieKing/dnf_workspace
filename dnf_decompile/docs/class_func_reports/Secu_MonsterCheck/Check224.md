# Check224

`_ZN17Secu_MonsterCheck8Check224Ev`

`Secu_MonsterCheck::Check224()`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827af78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827af78  _ZN17Secu_MonsterCheck8Check224Ev
#           Secu_MonsterCheck::Check224()
# range [0x0827af78, 0x0827b0ff]
0827af78 +0x000:  push   %ebp
0827af79 +0x001:  mov    %esp,%ebp
0827af7b +0x003:  push   %ebx
0827af7c +0x004:  sub    $0x34,%esp
0827af7f +0x007:  mov    0x8(%ebp),%eax
0827af82 +0x00a:  movzwl 0x12(%eax),%edx
0827af86 +0x00e:  mov    0x8(%ebp),%eax
0827af89 +0x011:  movzwl 0x28(%eax),%eax
0827af8d +0x015:  cmp    %ax,%dx
0827af90 +0x018:  jne    0827af9c <+0x24>
0827af92 +0x01a:  mov    $0x1,%eax
0827af97 +0x01f:  jmp    0827b0f9 <+0x181>
0827af9c +0x024:  movb   $0x1,-0xd(%ebp)
0827afa0 +0x028:  mov    0x8(%ebp),%eax
0827afa3 +0x02b:  movzbl 0x5(%eax),%eax
0827afa7 +0x02f:  test   %al,%al
0827afa9 +0x031:  je     0827b0f5 <+0x17d>
0827afaf +0x037:  mov    0x8(%ebp),%eax
0827afb2 +0x03a:  mov    0x30(%eax),%edx
0827afb5 +0x03d:  mov    0x8(%ebp),%eax
0827afb8 +0x040:  mov    0x14(%eax),%eax
0827afbb +0x043:  mov    %edx,%ecx
0827afbd +0x045:  sub    %eax,%ecx
0827afbf +0x047:  mov    %ecx,%eax
0827afc1 +0x049:  mov    %eax,-0xc(%ebp)
0827afc4 +0x04c:  cmpl   $0x3e8,-0xc(%ebp)
0827afcb +0x053:  jg     0827b072 <+0xfa>
0827afd1 +0x059:  mov    0x8(%ebp),%eax
0827afd4 +0x05c:  movzwl 0x18(%eax),%eax
0827afd8 +0x060:  lea    0x1(%eax),%edx
0827afdb +0x063:  mov    0x8(%ebp),%eax
0827afde +0x066:  mov    %dx,0x18(%eax)
0827afe2 +0x06a:  mov    0x8(%ebp),%eax
0827afe5 +0x06d:  movzwl 0x18(%eax),%eax
0827afe9 +0x071:  cmp    $0x4,%ax
0827afed +0x075:  jbe    0827b00b <+0x93>
0827afef +0x077:  mov    0x8(%ebp),%eax
0827aff2 +0x07a:  movzwl 0x18(%eax),%eax
0827aff6 +0x07e:  cmp    $0xa,%ax
0827affa +0x082:  ja     0827b00b <+0x93>
0827affc +0x084:  mov    0x8(%ebp),%eax
0827afff +0x087:  movw   $0x1,0x1a(%eax)
0827b005 +0x08d:  nop
0827b006 +0x08e:  jmp    0827b0db <+0x163>
0827b00b +0x093:  mov    0x8(%ebp),%eax
0827b00e +0x096:  movzwl 0x18(%eax),%eax
0827b012 +0x09a:  cmp    $0xa,%ax
0827b016 +0x09e:  jbe    0827b0da <+0x162>
0827b01c +0x0a4:  mov    0x8(%ebp),%eax
0827b01f +0x0a7:  movw   $0x3,0x1a(%eax)
0827b025 +0x0ad:  mov    0x8(%ebp),%eax
0827b028 +0x0b0:  mov    (%eax),%eax
0827b02a +0x0b2:  test   %eax,%eax
0827b02c +0x0b4:  je     0827b06c <+0xf4>
0827b02e +0x0b6:  mov    0x8(%ebp),%eax
0827b031 +0x0b9:  mov    (%eax),%ebx
0827b033 +0x0bb:  mov    0x8(%ebp),%eax
0827b036 +0x0be:  mov    (%eax),%eax
0827b038 +0x0c0:  mov    %eax,(%esp)
0827b03b +0x0c3:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827b040 +0x0c8:  movl   $0x0,0x14(%esp)
0827b048 +0x0d0:  movl   $0x0,0x10(%esp)
0827b050 +0x0d8:  movl   $0x3,0xc(%esp)
0827b058 +0x0e0:  movl   $0xe0,0x8(%esp)
0827b060 +0x0e8:  mov    %ebx,0x4(%esp)
0827b064 +0x0ec:  mov    %eax,(%esp)
0827b067 +0x0ef:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827b06c +0x0f4:  movb   $0x0,-0xd(%ebp)
0827b070 +0x0f8:  jmp    0827b0db <+0x163>
0827b072 +0x0fa:  mov    0x8(%ebp),%eax
0827b075 +0x0fd:  movzwl 0x1a(%eax),%eax
0827b079 +0x101:  cmp    $0x1,%ax
0827b07d +0x105:  jne    0827b0c6 <+0x14e>
0827b07f +0x107:  mov    0x8(%ebp),%eax
0827b082 +0x10a:  mov    (%eax),%eax
0827b084 +0x10c:  test   %eax,%eax
0827b086 +0x10e:  je     0827b0c6 <+0x14e>
0827b088 +0x110:  mov    0x8(%ebp),%eax
0827b08b +0x113:  mov    (%eax),%ebx
0827b08d +0x115:  mov    0x8(%ebp),%eax
0827b090 +0x118:  mov    (%eax),%eax
0827b092 +0x11a:  mov    %eax,(%esp)
0827b095 +0x11d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827b09a +0x122:  movl   $0x0,0x14(%esp)
0827b0a2 +0x12a:  movl   $0x0,0x10(%esp)
0827b0aa +0x132:  movl   $0x1,0xc(%esp)
0827b0b2 +0x13a:  movl   $0xe0,0x8(%esp)
0827b0ba +0x142:  mov    %ebx,0x4(%esp)
0827b0be +0x146:  mov    %eax,(%esp)
0827b0c1 +0x149:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827b0c6 +0x14e:  mov    0x8(%ebp),%eax
0827b0c9 +0x151:  movw   $0x0,0x18(%eax)
0827b0cf +0x157:  mov    0x8(%ebp),%eax
0827b0d2 +0x15a:  movw   $0x0,0x1a(%eax)
0827b0d8 +0x160:  jmp    0827b0db <+0x163>
0827b0da +0x162:  nop
0827b0db +0x163:  mov    0x8(%ebp),%eax
0827b0de +0x166:  movzwl 0x28(%eax),%edx
0827b0e2 +0x16a:  mov    0x8(%ebp),%eax
0827b0e5 +0x16d:  mov    %dx,0x12(%eax)
0827b0e9 +0x171:  mov    0x8(%ebp),%eax
0827b0ec +0x174:  mov    0x30(%eax),%edx
0827b0ef +0x177:  mov    0x8(%ebp),%eax
0827b0f2 +0x17a:  mov    %edx,0x14(%eax)
0827b0f5 +0x17d:  movzbl -0xd(%ebp),%eax
0827b0f9 +0x181:  add    $0x34,%esp
0827b0fc +0x184:  pop    %ebx
0827b0fd +0x185:  pop    %ebp
0827b0fe +0x186:  ret
0827b0ff +0x187:  nop
```

## 反编译 C

```c
// Secu_MonsterCheck::Check224 @ 0x827af78

/* Secu_MonsterCheck::Check224() */

undefined1 __thiscall Secu_MonsterCheck::Check224(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  undefined1 local_11;
  
  if (*(short *)(this + 0x12) == *(short *)(this + 0x28)) {
    local_11 = 1;
  }
  else {
    local_11 = 1;
    if (this[5] != (Secu_MonsterCheck)0x0) {
      if (*(int *)(this + 0x30) - *(int *)(this + 0x14) < 0x3e9) {
        *(short *)(this + 0x18) = *(short *)(this + 0x18) + 1;
        if ((*(ushort *)(this + 0x18) < 5) || (10 < *(ushort *)(this + 0x18))) {
          if (10 < *(ushort *)(this + 0x18)) {
            *(undefined2 *)(this + 0x1a) = 3;
            if (*(int *)this != 0) {
              uVar1 = *(undefined4 *)this;
              pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe0,3,0,0);
            }
            local_11 = 0;
          }
        }
        else {
          *(undefined2 *)(this + 0x1a) = 1;
        }
      }
      else {
        if ((*(short *)(this + 0x1a) == 1) && (*(int *)this != 0)) {
          uVar1 = *(undefined4 *)this;
          pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe0,1,0,0);
        }
        *(undefined2 *)(this + 0x18) = 0;
        *(undefined2 *)(this + 0x1a) = 0;
      }
      *(undefined2 *)(this + 0x12) = *(undefined2 *)(this + 0x28);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x30);
    }
  }
  return local_11;
}
```
