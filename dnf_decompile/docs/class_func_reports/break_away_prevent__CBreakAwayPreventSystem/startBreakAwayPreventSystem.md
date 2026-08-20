# startBreakAwayPreventSystem

`_ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser`

`break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem(SIG_LOGIN_DATA const*, CUser*)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831ce78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831ce78  _ZN18break_away_prevent23CBreakAwayPreventSystem27startBreakAwayPreventSystemEPK14SIG_LOGIN_DATAP5CUser
#           break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem(SIG_LOGIN_DATA const*, CUser*)
# range [0x0831ce78, 0x0831d163]
0831ce78 +0x000:  push   %ebp
0831ce79 +0x001:  mov    %esp,%ebp
0831ce7b +0x003:  sub    $0x28,%esp
0831ce7e +0x006:  mov    0xc(%ebp),%eax
0831ce81 +0x009:  mov    0x3f3c(%eax),%eax
0831ce87 +0x00f:  mov    %eax,0x4(%esp)
0831ce8b +0x013:  mov    0x8(%ebp),%eax
0831ce8e +0x016:  mov    %eax,(%esp)
0831ce91 +0x019:  call   0831c794 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj>  ; break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int)
0831ce96 +0x01e:  mov    %eax,-0x14(%ebp)
0831ce99 +0x021:  mov    0x8(%ebp),%eax
0831ce9c +0x024:  movzwl 0xc(%eax),%eax
0831cea0 +0x028:  cwtl
0831cea1 +0x029:  mov    %eax,-0x10(%ebp)
0831cea4 +0x02c:  mov    0xc(%ebp),%eax
0831cea7 +0x02f:  mov    0x3f3c(%eax),%eax
0831cead +0x035:  test   %eax,%eax
0831ceaf +0x037:  je     0831cebd <+0x45>
0831ceb1 +0x039:  mov    -0x14(%ebp),%eax
0831ceb4 +0x03c:  cmp    -0x10(%ebp),%eax
0831ceb7 +0x03f:  jl     0831cf6e <+0xf6>
0831cebd +0x045:  mov    0x8(%ebp),%eax
0831cec0 +0x048:  mov    %eax,(%esp)
0831cec3 +0x04b:  call   0831c810 <_ZN18break_away_prevent23CBreakAwayPreventSystem21calBreakAwayUserPointEv>  ; break_away_prevent::CBreakAwayPreventSystem::calBreakAwayUserPoint()
0831cec8 +0x050:  mov    %al,-0xc(%ebp)
0831cecb +0x053:  cmpb   $0x0,-0xc(%ebp)
0831cecf +0x057:  je     0831d14f <+0x2d7>
0831ced5 +0x05d:  mov    0xc(%ebp),%eax
0831ced8 +0x060:  mov    0x3f18(%eax),%eax
0831cede +0x066:  test   %eax,%eax
0831cee0 +0x068:  js     0831cf45 <+0xcd>
0831cee2 +0x06a:  movb   $0x0,-0xb(%ebp)
0831cee6 +0x06e:  mov    0xc(%ebp),%eax
0831cee9 +0x071:  mov    0x3f18(%eax),%eax
0831ceef +0x077:  mov    0x10(%ebp),%edx
0831cef2 +0x07a:  mov    %edx,0xc(%esp)
0831cef6 +0x07e:  mov    %eax,0x8(%esp)
0831cefa +0x082:  movl   $0x0,0x4(%esp)
0831cf02 +0x08a:  mov    0x8(%ebp),%eax
0831cf05 +0x08d:  mov    %eax,(%esp)
0831cf08 +0x090:  call   0831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)
0831cf0d +0x095:  mov    %al,-0xb(%ebp)
0831cf10 +0x098:  cmpb   $0x0,-0xb(%ebp)
0831cf14 +0x09c:  je     0831d152 <+0x2da>
0831cf1a +0x0a2:  movl   $0x1,0x4(%esp)
0831cf22 +0x0aa:  mov    0x10(%ebp),%eax
0831cf25 +0x0ad:  mov    %eax,(%esp)
0831cf28 +0x0b0:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
0831cf2d +0x0b5:  movl   $0x1,0x4(%esp)
0831cf35 +0x0bd:  mov    0x10(%ebp),%eax
0831cf38 +0x0c0:  mov    %eax,(%esp)
0831cf3b +0x0c3:  call   0831d4de <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x297>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x297
0831cf40 +0x0c8:  jmp    0831d162 <+0x2ea>
0831cf45 +0x0cd:  mov    0xc(%ebp),%eax
0831cf48 +0x0d0:  mov    0x3f54(%eax),%eax
0831cf4e +0x0d6:  test   %eax,%eax
0831cf50 +0x0d8:  jne    0831d155 <+0x2dd>
0831cf56 +0x0de:  movl   $0x0,0x4(%esp)
0831cf5e +0x0e6:  mov    0x10(%ebp),%eax
0831cf61 +0x0e9:  mov    %eax,(%esp)
0831cf64 +0x0ec:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
0831cf69 +0x0f1:  jmp    0831d162 <+0x2ea>
0831cf6e +0x0f6:  mov    0xc(%ebp),%eax
0831cf71 +0x0f9:  mov    0x3f48(%eax),%eax
0831cf77 +0x0ff:  test   %eax,%eax
0831cf79 +0x101:  jne    0831d06f <+0x1f7>
0831cf7f +0x107:  mov    0xc(%ebp),%eax
0831cf82 +0x10a:  mov    0x3f4c(%eax),%eax
0831cf88 +0x110:  test   %eax,%eax
0831cf8a +0x112:  je     0831d06f <+0x1f7>
0831cf90 +0x118:  mov    0xc(%ebp),%eax
0831cf93 +0x11b:  mov    0x3f40(%eax),%edx
0831cf99 +0x121:  mov    0xc(%ebp),%eax
0831cf9c +0x124:  mov    0x3f44(%eax),%eax
0831cfa2 +0x12a:  cmp    %eax,%edx
0831cfa4 +0x12c:  jbe    0831d06f <+0x1f7>
0831cfaa +0x132:  mov    0x8(%ebp),%eax
0831cfad +0x135:  movzbl 0x302(%eax),%eax
0831cfb4 +0x13c:  movsbl %al,%eax
0831cfb7 +0x13f:  cmp    -0x14(%ebp),%eax
0831cfba +0x142:  jg     0831d158 <+0x2e0>
0831cfc0 +0x148:  mov    0x8(%ebp),%eax
0831cfc3 +0x14b:  movzbl 0x303(%eax),%eax
0831cfca +0x152:  movsbl %al,%eax
0831cfcd +0x155:  cmp    -0x14(%ebp),%eax
0831cfd0 +0x158:  jl     0831d15b <+0x2e3>
0831cfd6 +0x15e:  mov    0xc(%ebp),%eax
0831cfd9 +0x161:  mov    0x3f18(%eax),%eax
0831cfdf +0x167:  test   %eax,%eax
0831cfe1 +0x169:  js     0831d046 <+0x1ce>
0831cfe3 +0x16b:  movb   $0x0,-0xa(%ebp)
0831cfe7 +0x16f:  mov    0xc(%ebp),%eax
0831cfea +0x172:  mov    0x3f18(%eax),%eax
0831cff0 +0x178:  mov    0x10(%ebp),%edx
0831cff3 +0x17b:  mov    %edx,0xc(%esp)
0831cff7 +0x17f:  mov    %eax,0x8(%esp)
0831cffb +0x183:  movl   $0x2,0x4(%esp)
0831d003 +0x18b:  mov    0x8(%ebp),%eax
0831d006 +0x18e:  mov    %eax,(%esp)
0831d009 +0x191:  call   0831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)
0831d00e +0x196:  mov    %al,-0xa(%ebp)
0831d011 +0x199:  cmpb   $0x0,-0xa(%ebp)
0831d015 +0x19d:  je     0831d15e <+0x2e6>
0831d01b +0x1a3:  movl   $0x1,0x4(%esp)
0831d023 +0x1ab:  mov    0x10(%ebp),%eax
0831d026 +0x1ae:  mov    %eax,(%esp)
0831d029 +0x1b1:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
0831d02e +0x1b6:  movl   $0x3,0x4(%esp)
0831d036 +0x1be:  mov    0x10(%ebp),%eax
0831d039 +0x1c1:  mov    %eax,(%esp)
0831d03c +0x1c4:  call   0831d4de <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x297>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x297
0831d041 +0x1c9:  jmp    0831d162 <+0x2ea>
0831d046 +0x1ce:  mov    0xc(%ebp),%eax
0831d049 +0x1d1:  mov    0x3f54(%eax),%eax
0831d04f +0x1d7:  test   %eax,%eax
0831d051 +0x1d9:  jne    0831d161 <+0x2e9>
0831d057 +0x1df:  movl   $0x0,0x4(%esp)
0831d05f +0x1e7:  mov    0x10(%ebp),%eax
0831d062 +0x1ea:  mov    %eax,(%esp)
0831d065 +0x1ed:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
0831d06a +0x1f2:  jmp    0831d162 <+0x2ea>
0831d06f +0x1f7:  mov    0xc(%ebp),%eax
0831d072 +0x1fa:  mov    0x3f48(%eax),%eax
0831d078 +0x200:  test   %eax,%eax
0831d07a +0x202:  jne    0831d162 <+0x2ea>
0831d080 +0x208:  mov    0xc(%ebp),%eax
0831d083 +0x20b:  mov    0x3f4c(%eax),%eax
0831d089 +0x211:  test   %eax,%eax
0831d08b +0x213:  je     0831d162 <+0x2ea>
0831d091 +0x219:  mov    0xc(%ebp),%eax
0831d094 +0x21c:  mov    0x3f40(%eax),%edx
0831d09a +0x222:  mov    0xc(%ebp),%eax
0831d09d +0x225:  mov    0x3f44(%eax),%eax
0831d0a3 +0x22b:  cmp    %eax,%edx
0831d0a5 +0x22d:  jae    0831d162 <+0x2ea>
0831d0ab +0x233:  mov    0x8(%ebp),%eax
0831d0ae +0x236:  movzbl 0x308(%eax),%eax
0831d0b5 +0x23d:  movsbl %al,%eax
0831d0b8 +0x240:  cmp    -0x14(%ebp),%eax
0831d0bb +0x243:  jg     0831d162 <+0x2ea>
0831d0c1 +0x249:  mov    0x8(%ebp),%eax
0831d0c4 +0x24c:  movzbl 0x309(%eax),%eax
0831d0cb +0x253:  movsbl %al,%eax
0831d0ce +0x256:  cmp    -0x14(%ebp),%eax
0831d0d1 +0x259:  jl     0831d162 <+0x2ea>
0831d0d7 +0x25f:  mov    0xc(%ebp),%eax
0831d0da +0x262:  mov    0x3f18(%eax),%eax
0831d0e0 +0x268:  test   %eax,%eax
0831d0e2 +0x26a:  js     0831d12d <+0x2b5>
0831d0e4 +0x26c:  movb   $0x0,-0x9(%ebp)
0831d0e8 +0x270:  mov    0xc(%ebp),%eax
0831d0eb +0x273:  mov    0x3f18(%eax),%eax
0831d0f1 +0x279:  mov    0x10(%ebp),%edx
0831d0f4 +0x27c:  mov    %edx,0xc(%esp)
0831d0f8 +0x280:  mov    %eax,0x8(%esp)
0831d0fc +0x284:  movl   $0x4,0x4(%esp)
0831d104 +0x28c:  mov    0x8(%ebp),%eax
0831d107 +0x28f:  mov    %eax,(%esp)
0831d10a +0x292:  call   0831c872 <_ZN18break_away_prevent23CBreakAwayPreventSystem12selectRewardEiiP5CUser>  ; break_away_prevent::CBreakAwayPreventSystem::selectReward(int, int, CUser*)
0831d10f +0x297:  mov    %al,-0x9(%ebp)
0831d112 +0x29a:  cmpb   $0x0,-0x9(%ebp)
0831d116 +0x29e:  je     0831d162 <+0x2ea>
0831d118 +0x2a0:  movl   $0x1,0x4(%esp)
0831d120 +0x2a8:  mov    0x10(%ebp),%eax
0831d123 +0x2ab:  mov    %eax,(%esp)
0831d126 +0x2ae:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
0831d12b +0x2b3:  jmp    0831d162 <+0x2ea>
0831d12d +0x2b5:  mov    0xc(%ebp),%eax
0831d130 +0x2b8:  mov    0x3f54(%eax),%eax
0831d136 +0x2be:  test   %eax,%eax
0831d138 +0x2c0:  jne    0831d162 <+0x2ea>
0831d13a +0x2c2:  movl   $0x0,0x4(%esp)
0831d142 +0x2ca:  mov    0x10(%ebp),%eax
0831d145 +0x2cd:  mov    %eax,(%esp)
0831d148 +0x2d0:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
0831d14d +0x2d5:  jmp    0831d162 <+0x2ea>
0831d14f +0x2d7:  nop
0831d150 +0x2d8:  jmp    0831d162 <+0x2ea>
0831d152 +0x2da:  nop
0831d153 +0x2db:  jmp    0831d162 <+0x2ea>
0831d155 +0x2dd:  nop
0831d156 +0x2de:  jmp    0831d162 <+0x2ea>
0831d158 +0x2e0:  nop
0831d159 +0x2e1:  jmp    0831d162 <+0x2ea>
0831d15b +0x2e3:  nop
0831d15c +0x2e4:  jmp    0831d162 <+0x2ea>
0831d15e +0x2e6:  nop
0831d15f +0x2e7:  jmp    0831d162 <+0x2ea>
0831d161 +0x2e9:  nop
0831d162 +0x2ea:  leave
0831d163 +0x2eb:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem @ 0x831ce78

/* break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem(SIG_LOGIN_DATA const*,
   CUser*) */

void __thiscall
break_away_prevent::CBreakAwayPreventSystem::startBreakAwayPreventSystem
          (CBreakAwayPreventSystem *this,SIG_LOGIN_DATA *param_1,CUser *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = getDiffConnectDay(this,*(uint *)(param_1 + 0x3f3c));
  if ((*(int *)(param_1 + 0x3f3c) == 0) || (*(short *)(this + 0xc) <= iVar2)) {
    cVar1 = calBreakAwayUserPoint(this);
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3f18) < 0) {
        if (*(int *)(param_1 + 0x3f54) == 0) {
          CUser::setBreakAwayRewardData(param_2,false);
        }
      }
      else {
        cVar1 = selectReward(this,0,*(int *)(param_1 + 0x3f18),param_2);
        if (cVar1 != '\0') {
          CUser::setBreakAwayRewardData(param_2,true);
          CUser::setBreakAwayRewardOrder(param_2,1);
        }
      }
    }
  }
  else if (((*(int *)(param_1 + 0x3f48) == 0) && (*(int *)(param_1 + 0x3f4c) != 0)) &&
          (*(uint *)(param_1 + 0x3f44) < *(uint *)(param_1 + 0x3f40))) {
    if (((char)this[0x302] <= iVar2) && (iVar2 <= (char)this[0x303])) {
      if (*(int *)(param_1 + 0x3f18) < 0) {
        if (*(int *)(param_1 + 0x3f54) == 0) {
          CUser::setBreakAwayRewardData(param_2,false);
        }
      }
      else {
        cVar1 = selectReward(this,2,*(int *)(param_1 + 0x3f18),param_2);
        if (cVar1 != '\0') {
          CUser::setBreakAwayRewardData(param_2,true);
          CUser::setBreakAwayRewardOrder(param_2,3);
        }
      }
    }
  }
  else if (((*(int *)(param_1 + 0x3f48) == 0) && (*(int *)(param_1 + 0x3f4c) != 0)) &&
          ((*(uint *)(param_1 + 0x3f40) < *(uint *)(param_1 + 0x3f44) &&
           (((char)this[0x308] <= iVar2 && (iVar2 <= (char)this[0x309])))))) {
    if (*(int *)(param_1 + 0x3f18) < 0) {
      if (*(int *)(param_1 + 0x3f54) == 0) {
        CUser::setBreakAwayRewardData(param_2,false);
      }
    }
    else {
      cVar1 = selectReward(this,4,*(int *)(param_1 + 0x3f18),param_2);
      if (cVar1 != '\0') {
        CUser::setBreakAwayRewardData(param_2,true);
      }
    }
  }
  return;
}
```
