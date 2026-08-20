# Check225

`_ZN17Secu_MonsterCheck8Check225Ev`

`Secu_MonsterCheck::Check225()`

| 类 | 地址 |
|---|---|
| `Secu_MonsterCheck` | `0x0827b100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b100  _ZN17Secu_MonsterCheck8Check225Ev
#           Secu_MonsterCheck::Check225()
# range [0x0827b100, 0x0827b287]
0827b100 +0x000:  push   %ebp
0827b101 +0x001:  mov    %esp,%ebp
0827b103 +0x003:  push   %ebx
0827b104 +0x004:  sub    $0x34,%esp
0827b107 +0x007:  mov    0x8(%ebp),%eax
0827b10a +0x00a:  movzwl 0x1c(%eax),%edx
0827b10e +0x00e:  mov    0x8(%ebp),%eax
0827b111 +0x011:  movzwl 0x28(%eax),%eax
0827b115 +0x015:  cmp    %ax,%dx
0827b118 +0x018:  jne    0827b124 <+0x24>
0827b11a +0x01a:  mov    $0x1,%eax
0827b11f +0x01f:  jmp    0827b281 <+0x181>
0827b124 +0x024:  movb   $0x1,-0xd(%ebp)
0827b128 +0x028:  mov    0x8(%ebp),%eax
0827b12b +0x02b:  movzbl 0x6(%eax),%eax
0827b12f +0x02f:  test   %al,%al
0827b131 +0x031:  je     0827b27d <+0x17d>
0827b137 +0x037:  mov    0x8(%ebp),%eax
0827b13a +0x03a:  mov    0x30(%eax),%edx
0827b13d +0x03d:  mov    0x8(%ebp),%eax
0827b140 +0x040:  mov    0x20(%eax),%eax
0827b143 +0x043:  mov    %edx,%ecx
0827b145 +0x045:  sub    %eax,%ecx
0827b147 +0x047:  mov    %ecx,%eax
0827b149 +0x049:  mov    %eax,-0xc(%ebp)
0827b14c +0x04c:  cmpl   $0x7cf,-0xc(%ebp)
0827b153 +0x053:  jg     0827b1fa <+0xfa>
0827b159 +0x059:  mov    0x8(%ebp),%eax
0827b15c +0x05c:  movzwl 0x24(%eax),%eax
0827b160 +0x060:  lea    0x1(%eax),%edx
0827b163 +0x063:  mov    0x8(%ebp),%eax
0827b166 +0x066:  mov    %dx,0x24(%eax)
0827b16a +0x06a:  mov    0x8(%ebp),%eax
0827b16d +0x06d:  movzwl 0x24(%eax),%eax
0827b171 +0x071:  cmp    $0x4,%ax
0827b175 +0x075:  jbe    0827b193 <+0x93>
0827b177 +0x077:  mov    0x8(%ebp),%eax
0827b17a +0x07a:  movzwl 0x24(%eax),%eax
0827b17e +0x07e:  cmp    $0xa,%ax
0827b182 +0x082:  ja     0827b193 <+0x93>
0827b184 +0x084:  mov    0x8(%ebp),%eax
0827b187 +0x087:  movw   $0x1,0x26(%eax)
0827b18d +0x08d:  nop
0827b18e +0x08e:  jmp    0827b263 <+0x163>
0827b193 +0x093:  mov    0x8(%ebp),%eax
0827b196 +0x096:  movzwl 0x24(%eax),%eax
0827b19a +0x09a:  cmp    $0xa,%ax
0827b19e +0x09e:  jbe    0827b262 <+0x162>
0827b1a4 +0x0a4:  mov    0x8(%ebp),%eax
0827b1a7 +0x0a7:  movw   $0x3,0x26(%eax)
0827b1ad +0x0ad:  mov    0x8(%ebp),%eax
0827b1b0 +0x0b0:  mov    (%eax),%eax
0827b1b2 +0x0b2:  test   %eax,%eax
0827b1b4 +0x0b4:  je     0827b1f4 <+0xf4>
0827b1b6 +0x0b6:  mov    0x8(%ebp),%eax
0827b1b9 +0x0b9:  mov    (%eax),%ebx
0827b1bb +0x0bb:  mov    0x8(%ebp),%eax
0827b1be +0x0be:  mov    (%eax),%eax
0827b1c0 +0x0c0:  mov    %eax,(%esp)
0827b1c3 +0x0c3:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827b1c8 +0x0c8:  movl   $0x0,0x14(%esp)
0827b1d0 +0x0d0:  movl   $0x0,0x10(%esp)
0827b1d8 +0x0d8:  movl   $0x3,0xc(%esp)
0827b1e0 +0x0e0:  movl   $0xe1,0x8(%esp)
0827b1e8 +0x0e8:  mov    %ebx,0x4(%esp)
0827b1ec +0x0ec:  mov    %eax,(%esp)
0827b1ef +0x0ef:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827b1f4 +0x0f4:  movb   $0x0,-0xd(%ebp)
0827b1f8 +0x0f8:  jmp    0827b263 <+0x163>
0827b1fa +0x0fa:  mov    0x8(%ebp),%eax
0827b1fd +0x0fd:  movzwl 0x26(%eax),%eax
0827b201 +0x101:  cmp    $0x1,%ax
0827b205 +0x105:  jne    0827b24e <+0x14e>
0827b207 +0x107:  mov    0x8(%ebp),%eax
0827b20a +0x10a:  mov    (%eax),%eax
0827b20c +0x10c:  test   %eax,%eax
0827b20e +0x10e:  je     0827b24e <+0x14e>
0827b210 +0x110:  mov    0x8(%ebp),%eax
0827b213 +0x113:  mov    (%eax),%ebx
0827b215 +0x115:  mov    0x8(%ebp),%eax
0827b218 +0x118:  mov    (%eax),%eax
0827b21a +0x11a:  mov    %eax,(%esp)
0827b21d +0x11d:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
0827b222 +0x122:  movl   $0x0,0x14(%esp)
0827b22a +0x12a:  movl   $0x0,0x10(%esp)
0827b232 +0x132:  movl   $0x1,0xc(%esp)
0827b23a +0x13a:  movl   $0xe1,0x8(%esp)
0827b242 +0x142:  mov    %ebx,0x4(%esp)
0827b246 +0x146:  mov    %eax,(%esp)
0827b249 +0x149:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827b24e +0x14e:  mov    0x8(%ebp),%eax
0827b251 +0x151:  movw   $0x0,0x24(%eax)
0827b257 +0x157:  mov    0x8(%ebp),%eax
0827b25a +0x15a:  movw   $0x0,0x26(%eax)
0827b260 +0x160:  jmp    0827b263 <+0x163>
0827b262 +0x162:  nop
0827b263 +0x163:  mov    0x8(%ebp),%eax
0827b266 +0x166:  movzwl 0x28(%eax),%edx
0827b26a +0x16a:  mov    0x8(%ebp),%eax
0827b26d +0x16d:  mov    %dx,0x1c(%eax)
0827b271 +0x171:  mov    0x8(%ebp),%eax
0827b274 +0x174:  mov    0x30(%eax),%edx
0827b277 +0x177:  mov    0x8(%ebp),%eax
0827b27a +0x17a:  mov    %edx,0x20(%eax)
0827b27d +0x17d:  movzbl -0xd(%ebp),%eax
0827b281 +0x181:  add    $0x34,%esp
0827b284 +0x184:  pop    %ebx
0827b285 +0x185:  pop    %ebp
0827b286 +0x186:  ret
0827b287 +0x187:  nop
```

## 反编译 C

```c
// Secu_MonsterCheck::Check225 @ 0x827b100

/* Secu_MonsterCheck::Check225() */

undefined1 __thiscall Secu_MonsterCheck::Check225(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  undefined1 local_11;
  
  if (*(short *)(this + 0x1c) == *(short *)(this + 0x28)) {
    local_11 = 1;
  }
  else {
    local_11 = 1;
    if (this[6] != (Secu_MonsterCheck)0x0) {
      if (*(int *)(this + 0x30) - *(int *)(this + 0x20) < 2000) {
        *(short *)(this + 0x24) = *(short *)(this + 0x24) + 1;
        if ((*(ushort *)(this + 0x24) < 5) || (10 < *(ushort *)(this + 0x24))) {
          if (10 < *(ushort *)(this + 0x24)) {
            *(undefined2 *)(this + 0x26) = 3;
            if (*(int *)this != 0) {
              uVar1 = *(undefined4 *)this;
              pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe1,3,0,0);
            }
            local_11 = 0;
          }
        }
        else {
          *(undefined2 *)(this + 0x26) = 1;
        }
      }
      else {
        if ((*(short *)(this + 0x26) == 1) && (*(int *)this != 0)) {
          uVar1 = *(undefined4 *)this;
          pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe1,1,0,0);
        }
        *(undefined2 *)(this + 0x24) = 0;
        *(undefined2 *)(this + 0x26) = 0;
      }
      *(undefined2 *)(this + 0x1c) = *(undefined2 *)(this + 0x28);
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x30);
    }
  }
  return local_11;
}
```
