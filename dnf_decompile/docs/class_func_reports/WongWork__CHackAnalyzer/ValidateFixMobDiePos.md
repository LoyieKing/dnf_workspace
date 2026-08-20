# ValidateFixMobDiePos

`_ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt`

`WongWork::CHackAnalyzer::ValidateFixMobDiePos(CUser*, unsigned short, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CHackAnalyzer` | `0x080f908c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f908c  _ZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUserttt
#           WongWork::CHackAnalyzer::ValidateFixMobDiePos(CUser*, unsigned short, unsigned short, unsigned short)
# range [0x080f908c, 0x080f9217]
080f908c +0x000:  push   %ebp
080f908d +0x001:  mov    %esp,%ebp
080f908f +0x003:  sub    $0x48,%esp
080f9092 +0x006:  mov    0xc(%ebp),%ecx
080f9095 +0x009:  mov    0x10(%ebp),%edx
080f9098 +0x00c:  mov    0x14(%ebp),%eax
080f909b +0x00f:  mov    %cx,-0x1c(%ebp)
080f909f +0x013:  mov    %dx,-0x20(%ebp)
080f90a3 +0x017:  mov    %ax,-0x24(%ebp)
080f90a7 +0x01b:  movl   $0x0,-0xc(%ebp)
080f90ae +0x022:  jmp    080f91f2 <+0x166>
080f90b3 +0x027:  movzwl -0x1c(%ebp),%ecx
080f90b7 +0x02b:  mov    -0xc(%ebp),%edx
080f90ba +0x02e:  mov    %edx,%eax
080f90bc +0x030:  add    %eax,%eax
080f90be +0x032:  add    %edx,%eax
080f90c0 +0x034:  shl    $0x2,%eax
080f90c3 +0x037:  mov    &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo(%eax),%eax
080f90c9 +0x03d:  cmp    %eax,%ecx
080f90cb +0x03f:  jne    080f91ee <+0x162>
080f90d1 +0x045:  mov    -0xc(%ebp),%edx
080f90d4 +0x048:  mov    %edx,%eax
080f90d6 +0x04a:  add    %eax,%eax
080f90d8 +0x04c:  add    %edx,%eax
080f90da +0x04e:  shl    $0x2,%eax
080f90dd +0x051:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo+0x4(%eax),%eax
080f90e4 +0x058:  cmp    -0x20(%ebp),%ax
080f90e8 +0x05c:  ja     080f9135 <+0xa9>
080f90ea +0x05e:  mov    -0xc(%ebp),%edx
080f90ed +0x061:  mov    %edx,%eax
080f90ef +0x063:  add    %eax,%eax
080f90f1 +0x065:  add    %edx,%eax
080f90f3 +0x067:  shl    $0x2,%eax
080f90f6 +0x06a:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo+0x6(%eax),%eax
080f90fd +0x071:  cmp    -0x20(%ebp),%ax
080f9101 +0x075:  jb     080f9135 <+0xa9>
080f9103 +0x077:  mov    -0xc(%ebp),%edx
080f9106 +0x07a:  mov    %edx,%eax
080f9108 +0x07c:  add    %eax,%eax
080f910a +0x07e:  add    %edx,%eax
080f910c +0x080:  shl    $0x2,%eax
080f910f +0x083:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo+0x8(%eax),%eax
080f9116 +0x08a:  cmp    -0x24(%ebp),%ax
080f911a +0x08e:  ja     080f9135 <+0xa9>
080f911c +0x090:  mov    -0xc(%ebp),%edx
080f911f +0x093:  mov    %edx,%eax
080f9121 +0x095:  add    %eax,%eax
080f9123 +0x097:  add    %edx,%eax
080f9125 +0x099:  shl    $0x2,%eax
080f9128 +0x09c:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo+0xa(%eax),%eax
080f912f +0x0a3:  cmp    -0x24(%ebp),%ax
080f9133 +0x0a7:  jae    080f9174 <+0xe8>
080f9135 +0x0a9:  mov    0x8(%ebp),%eax
080f9138 +0x0ac:  mov    %eax,(%esp)
080f913b +0x0af:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
080f9140 +0x0b4:  movl   $0x0,0x14(%esp)
080f9148 +0x0bc:  movl   $0x0,0x10(%esp)
080f9150 +0x0c4:  movl   $0x1,0xc(%esp)
080f9158 +0x0cc:  movl   $0xd2,0x8(%esp)
080f9160 +0x0d4:  mov    0x8(%ebp),%edx
080f9163 +0x0d7:  mov    %edx,0x4(%esp)
080f9167 +0x0db:  mov    %eax,(%esp)
080f916a +0x0de:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
080f916f +0x0e3:  jmp    080f9216 <+0x18a>
080f9174 +0x0e8:  cmpw   $0xd6ed,-0x1c(%ebp)
080f917a +0x0ee:  jne    080f920f <+0x183>
080f9180 +0x0f4:  mov    -0xc(%ebp),%edx
080f9183 +0x0f7:  mov    %edx,%eax
080f9185 +0x0f9:  add    %eax,%eax
080f9187 +0x0fb:  add    %edx,%eax
080f9189 +0x0fd:  shl    $0x2,%eax
080f918c +0x100:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo+0x4(%eax),%eax
080f9193 +0x107:  cmp    -0x20(%ebp),%ax
080f9197 +0x10b:  je     080f9212 <+0x186>
080f9199 +0x10d:  mov    -0xc(%ebp),%edx
080f919c +0x110:  mov    %edx,%eax
080f919e +0x112:  add    %eax,%eax
080f91a0 +0x114:  add    %edx,%eax
080f91a2 +0x116:  shl    $0x2,%eax
080f91a5 +0x119:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE10FixMobInfo+0x6(%eax),%eax
080f91ac +0x120:  cmp    -0x20(%ebp),%ax
080f91b0 +0x124:  je     080f9215 <+0x189>
080f91b2 +0x126:  mov    0x8(%ebp),%eax
080f91b5 +0x129:  mov    %eax,(%esp)
080f91b8 +0x12c:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
080f91bd +0x131:  movl   $0x0,0x14(%esp)
080f91c5 +0x139:  movl   $0x0,0x10(%esp)
080f91cd +0x141:  movl   $0x1,0xc(%esp)
080f91d5 +0x149:  movl   $0xd2,0x8(%esp)
080f91dd +0x151:  mov    0x8(%ebp),%edx
080f91e0 +0x154:  mov    %edx,0x4(%esp)
080f91e4 +0x158:  mov    %eax,(%esp)
080f91e7 +0x15b:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
080f91ec +0x160:  jmp    080f9216 <+0x18a>
080f91ee +0x162:  addl   $0x1,-0xc(%ebp)
080f91f2 +0x166:  movzwl &_ZZN8WongWork13CHackAnalyzer20ValidateFixMobDiePosEP5CUsertttE14FixMobInfoSize,%eax
080f91f9 +0x16d:  movzwl %ax,%eax
080f91fc +0x170:  sub    $0x1,%eax
080f91ff +0x173:  cmp    -0xc(%ebp),%eax
080f9202 +0x176:  setg   %al
080f9205 +0x179:  test   %al,%al
080f9207 +0x17b:  jne    080f90b3 <+0x27>
080f920d +0x181:  jmp    080f9216 <+0x18a>
080f920f +0x183:  nop
080f9210 +0x184:  jmp    080f9216 <+0x18a>
080f9212 +0x186:  nop
080f9213 +0x187:  jmp    080f9216 <+0x18a>
080f9215 +0x189:  nop
080f9216 +0x18a:  leave
080f9217 +0x18b:  ret
```

## 反编译 C

```c
// WongWork::CHackAnalyzer::ValidateFixMobDiePos @ 0x80f908c

/* WongWork::CHackAnalyzer::ValidateFixMobDiePos(CUser*, unsigned short, unsigned short, unsigned
   short) */

void WongWork::CHackAnalyzer::ValidateFixMobDiePos
               (CUser *param_1,ushort param_2,ushort param_3,ushort param_4)

{
  CHackAnalyzer *pCVar1;
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if ((int)(ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
              FixMobInfoSize - 1) <= local_10) {
      return;
    }
    if ((uint)param_2 ==
        *(uint *)(ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
                  FixMobInfo + local_10 * 0xc)) break;
    local_10 = local_10 + 1;
  }
  if ((((param_3 < *(ushort *)
                    (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
                     FixMobInfo + local_10 * 0xc + 4)) ||
       (*(ushort *)
         (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
         local_10 * 0xc + 6) < param_3)) ||
      (param_4 < *(ushort *)
                  (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::
                   FixMobInfo + local_10 * 0xc + 8))) ||
     (*(ushort *)
       (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
       local_10 * 0xc + 10) < param_4)) {
    pCVar1 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
    addServerHackCnt(pCVar1,param_1,0xd2,1,0,0);
    return;
  }
  if (param_2 != 0xd6ed) {
    return;
  }
  if (*(ushort *)
       (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
       local_10 * 0xc + 4) == param_3) {
    return;
  }
  if (*(ushort *)
       (ValidateFixMobDiePos(CUser*,unsigned_short,unsigned_short,unsigned_short)::FixMobInfo +
       local_10 * 0xc + 6) == param_3) {
    return;
  }
  pCVar1 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
  addServerHackCnt(pCVar1,param_1,0xd2,1,0,0);
  return;
}
```
