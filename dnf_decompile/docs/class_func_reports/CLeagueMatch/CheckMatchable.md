# CheckMatchable

`_ZN12CLeagueMatch14CheckMatchableEP6IMatch`

`CLeagueMatch::CheckMatchable(IMatch*)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855fa14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fa14  _ZN12CLeagueMatch14CheckMatchableEP6IMatch
#           CLeagueMatch::CheckMatchable(IMatch*)
# range [0x0855fa14, 0x0855fcf5]
0855fa14 +0x000:  push   %ebp
0855fa15 +0x001:  mov    %esp,%ebp
0855fa17 +0x003:  push   %ebx
0855fa18 +0x004:  sub    $0x34,%esp
0855fa1b +0x007:  movl   $0x0,-0x1c(%ebp)
0855fa22 +0x00e:  movl   $0x0,-0x18(%ebp)
0855fa29 +0x015:  movl   $0x0,-0x14(%ebp)
0855fa30 +0x01c:  movl   $0x0,-0x14(%ebp)
0855fa37 +0x023:  jmp    0855fae9 <+0xd5>
0855fa3c +0x028:  mov    -0x14(%ebp),%eax
0855fa3f +0x02b:  mov    0x8(%ebp),%ecx
0855fa42 +0x02e:  lea    0x0(,%eax,4),%edx
0855fa49 +0x035:  lea    0x0(,%edx,8),%eax
0855fa50 +0x03c:  sub    %edx,%eax
0855fa52 +0x03e:  lea    (%ecx,%eax,1),%eax
0855fa55 +0x041:  add    $0x10,%eax
0855fa58 +0x044:  movzbl 0x18(%eax),%eax
0855fa5c +0x048:  test   %al,%al
0855fa5e +0x04a:  je     0855fae5 <+0xd1>
0855fa64 +0x050:  mov    -0x14(%ebp),%eax
0855fa67 +0x053:  mov    0x8(%ebp),%ecx
0855fa6a +0x056:  lea    0x0(,%eax,4),%edx
0855fa71 +0x05d:  lea    0x0(,%edx,8),%eax
0855fa78 +0x064:  sub    %edx,%eax
0855fa7a +0x066:  lea    (%ecx,%eax,1),%eax
0855fa7d +0x069:  add    $0x24,%eax
0855fa80 +0x06c:  mov    (%eax),%eax
0855fa82 +0x06e:  test   %eax,%eax
0855fa84 +0x070:  je     0855fae5 <+0xd1>
0855fa86 +0x072:  mov    -0x14(%ebp),%eax
0855fa89 +0x075:  mov    0x8(%ebp),%ecx
0855fa8c +0x078:  lea    0x0(,%eax,4),%edx
0855fa93 +0x07f:  lea    0x0(,%edx,8),%eax
0855fa9a +0x086:  sub    %edx,%eax
0855fa9c +0x088:  lea    (%ecx,%eax,1),%eax
0855fa9f +0x08b:  add    $0x24,%eax
0855faa2 +0x08e:  mov    (%eax),%eax
0855faa4 +0x090:  mov    %eax,(%esp)
0855faa7 +0x093:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0855faac +0x098:  mov    0x14(%eax),%eax
0855faaf +0x09b:  cmp    -0x1c(%ebp),%eax
0855fab2 +0x09e:  jl     0855fadf <+0xcb>
0855fab4 +0x0a0:  mov    -0x14(%ebp),%eax
0855fab7 +0x0a3:  mov    0x8(%ebp),%ecx
0855faba +0x0a6:  lea    0x0(,%eax,4),%edx
0855fac1 +0x0ad:  lea    0x0(,%edx,8),%eax
0855fac8 +0x0b4:  sub    %edx,%eax
0855faca +0x0b6:  lea    (%ecx,%eax,1),%eax
0855facd +0x0b9:  add    $0x24,%eax
0855fad0 +0x0bc:  mov    (%eax),%eax
0855fad2 +0x0be:  mov    %eax,(%esp)
0855fad5 +0x0c1:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0855fada +0x0c6:  mov    0x14(%eax),%eax
0855fadd +0x0c9:  jmp    0855fae2 <+0xce>
0855fadf +0x0cb:  mov    -0x1c(%ebp),%eax
0855fae2 +0x0ce:  mov    %eax,-0x1c(%ebp)
0855fae5 +0x0d1:  addl   $0x1,-0x14(%ebp)
0855fae9 +0x0d5:  cmpl   $0x3,-0x14(%ebp)
0855faed +0x0d9:  setle  %al
0855faf0 +0x0dc:  test   %al,%al
0855faf2 +0x0de:  jne    0855fa3c <+0x28>
0855faf8 +0x0e4:  movl   $0x0,-0x14(%ebp)
0855faff +0x0eb:  jmp    0855fbb1 <+0x19d>
0855fb04 +0x0f0:  mov    0xc(%ebp),%ecx
0855fb07 +0x0f3:  mov    -0x14(%ebp),%eax
0855fb0a +0x0f6:  lea    0x0(,%eax,4),%edx
0855fb11 +0x0fd:  lea    0x0(,%edx,8),%eax
0855fb18 +0x104:  sub    %edx,%eax
0855fb1a +0x106:  lea    (%ecx,%eax,1),%eax
0855fb1d +0x109:  add    $0x10,%eax
0855fb20 +0x10c:  movzbl 0x18(%eax),%eax
0855fb24 +0x110:  test   %al,%al
0855fb26 +0x112:  je     0855fbad <+0x199>
0855fb2c +0x118:  mov    0xc(%ebp),%ecx
0855fb2f +0x11b:  mov    -0x14(%ebp),%eax
0855fb32 +0x11e:  lea    0x0(,%eax,4),%edx
0855fb39 +0x125:  lea    0x0(,%edx,8),%eax
0855fb40 +0x12c:  sub    %edx,%eax
0855fb42 +0x12e:  lea    (%ecx,%eax,1),%eax
0855fb45 +0x131:  add    $0x24,%eax
0855fb48 +0x134:  mov    (%eax),%eax
0855fb4a +0x136:  test   %eax,%eax
0855fb4c +0x138:  je     0855fbad <+0x199>
0855fb4e +0x13a:  mov    0xc(%ebp),%ecx
0855fb51 +0x13d:  mov    -0x14(%ebp),%eax
0855fb54 +0x140:  lea    0x0(,%eax,4),%edx
0855fb5b +0x147:  lea    0x0(,%edx,8),%eax
0855fb62 +0x14e:  sub    %edx,%eax
0855fb64 +0x150:  lea    (%ecx,%eax,1),%eax
0855fb67 +0x153:  add    $0x24,%eax
0855fb6a +0x156:  mov    (%eax),%eax
0855fb6c +0x158:  mov    %eax,(%esp)
0855fb6f +0x15b:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0855fb74 +0x160:  mov    0x14(%eax),%eax
0855fb77 +0x163:  cmp    -0x18(%ebp),%eax
0855fb7a +0x166:  jl     0855fba7 <+0x193>
0855fb7c +0x168:  mov    0xc(%ebp),%ecx
0855fb7f +0x16b:  mov    -0x14(%ebp),%eax
0855fb82 +0x16e:  lea    0x0(,%eax,4),%edx
0855fb89 +0x175:  lea    0x0(,%edx,8),%eax
0855fb90 +0x17c:  sub    %edx,%eax
0855fb92 +0x17e:  lea    (%ecx,%eax,1),%eax
0855fb95 +0x181:  add    $0x24,%eax
0855fb98 +0x184:  mov    (%eax),%eax
0855fb9a +0x186:  mov    %eax,(%esp)
0855fb9d +0x189:  call   0850d488 <_GLOBAL__I_g_emptySlot+0x3bd>  ; global constructors keyed to g_emptySlot+0x3bd
0855fba2 +0x18e:  mov    0x14(%eax),%eax
0855fba5 +0x191:  jmp    0855fbaa <+0x196>
0855fba7 +0x193:  mov    -0x18(%ebp),%eax
0855fbaa +0x196:  mov    %eax,-0x18(%ebp)
0855fbad +0x199:  addl   $0x1,-0x14(%ebp)
0855fbb1 +0x19d:  cmpl   $0x3,-0x14(%ebp)
0855fbb5 +0x1a1:  setle  %al
0855fbb8 +0x1a4:  test   %al,%al
0855fbba +0x1a6:  jne    0855fb04 <+0xf0>
0855fbc0 +0x1ac:  cmpl   $0xb,-0x1c(%ebp)
0855fbc4 +0x1b0:  jle    0855fbdc <+0x1c8>
0855fbc6 +0x1b2:  cmpl   $0xe,-0x1c(%ebp)
0855fbca +0x1b6:  jg     0855fbdc <+0x1c8>
0855fbcc +0x1b8:  cmpl   $0xa,-0x18(%ebp)
0855fbd0 +0x1bc:  jg     0855fbdc <+0x1c8>
0855fbd2 +0x1be:  mov    $0x0,%eax
0855fbd7 +0x1c3:  jmp    0855fcef <+0x2db>
0855fbdc +0x1c8:  cmpl   $0xb,-0x18(%ebp)
0855fbe0 +0x1cc:  jle    0855fbf8 <+0x1e4>
0855fbe2 +0x1ce:  cmpl   $0xe,-0x18(%ebp)
0855fbe6 +0x1d2:  jg     0855fbf8 <+0x1e4>
0855fbe8 +0x1d4:  cmpl   $0xa,-0x1c(%ebp)
0855fbec +0x1d8:  jg     0855fbf8 <+0x1e4>
0855fbee +0x1da:  mov    $0x0,%eax
0855fbf3 +0x1df:  jmp    0855fcef <+0x2db>
0855fbf8 +0x1e4:  mov    -0x18(%ebp),%eax
0855fbfb +0x1e7:  mov    -0x1c(%ebp),%edx
0855fbfe +0x1ea:  sub    %eax,%edx
0855fc00 +0x1ec:  mov    %edx,%eax
0855fc02 +0x1ee:  sar    $0x1f,%eax
0855fc05 +0x1f1:  xor    %eax,%edx
0855fc07 +0x1f3:  mov    %edx,-0x10(%ebp)
0855fc0a +0x1f6:  sub    %eax,-0x10(%ebp)
0855fc0d +0x1f9:  cmpl   $0x4,-0x10(%ebp)
0855fc11 +0x1fd:  jle    0855fc1d <+0x209>
0855fc13 +0x1ff:  mov    $0x0,%eax
0855fc18 +0x204:  jmp    0855fcef <+0x2db>
0855fc1d +0x209:  movl   $0x0,-0x14(%ebp)
0855fc24 +0x210:  jmp    0855fcdb <+0x2c7>
0855fc29 +0x215:  movl   $0x0,-0xc(%ebp)
0855fc30 +0x21c:  jmp    0855fcc8 <+0x2b4>
0855fc35 +0x221:  mov    -0x14(%ebp),%eax
0855fc38 +0x224:  mov    0x8(%ebp),%ecx
0855fc3b +0x227:  lea    0x0(,%eax,4),%edx
0855fc42 +0x22e:  lea    0x0(,%edx,8),%eax
0855fc49 +0x235:  sub    %edx,%eax
0855fc4b +0x237:  lea    (%ecx,%eax,1),%eax
0855fc4e +0x23a:  add    $0x10,%eax
0855fc51 +0x23d:  movzbl 0x18(%eax),%eax
0855fc55 +0x241:  test   %al,%al
0855fc57 +0x243:  je     0855fcc4 <+0x2b0>
0855fc59 +0x245:  mov    0xc(%ebp),%ecx
0855fc5c +0x248:  mov    -0xc(%ebp),%eax
0855fc5f +0x24b:  lea    0x0(,%eax,4),%edx
0855fc66 +0x252:  lea    0x0(,%edx,8),%eax
0855fc6d +0x259:  sub    %edx,%eax
0855fc6f +0x25b:  lea    (%ecx,%eax,1),%eax
0855fc72 +0x25e:  add    $0x10,%eax
0855fc75 +0x261:  movzbl 0x18(%eax),%eax
0855fc79 +0x265:  test   %al,%al
0855fc7b +0x267:  je     0855fcc4 <+0x2b0>
0855fc7d +0x269:  mov    -0x14(%ebp),%eax
0855fc80 +0x26c:  mov    0x8(%ebp),%ecx
0855fc83 +0x26f:  lea    0x0(,%eax,4),%edx
0855fc8a +0x276:  lea    0x0(,%edx,8),%eax
0855fc91 +0x27d:  sub    %edx,%eax
0855fc93 +0x27f:  lea    (%ecx,%eax,1),%eax
0855fc96 +0x282:  add    $0x2c,%eax
0855fc99 +0x285:  mov    (%eax),%ecx
0855fc9b +0x287:  mov    0xc(%ebp),%ebx
0855fc9e +0x28a:  mov    -0xc(%ebp),%eax
0855fca1 +0x28d:  lea    0x0(,%eax,4),%edx
0855fca8 +0x294:  lea    0x0(,%edx,8),%eax
0855fcaf +0x29b:  sub    %edx,%eax
0855fcb1 +0x29d:  lea    (%ebx,%eax,1),%eax
0855fcb4 +0x2a0:  add    $0x2c,%eax
0855fcb7 +0x2a3:  mov    (%eax),%eax
0855fcb9 +0x2a5:  cmp    %eax,%ecx
0855fcbb +0x2a7:  jne    0855fcc4 <+0x2b0>
0855fcbd +0x2a9:  mov    $0x0,%eax
0855fcc2 +0x2ae:  jmp    0855fcef <+0x2db>
0855fcc4 +0x2b0:  addl   $0x1,-0xc(%ebp)
0855fcc8 +0x2b4:  cmpl   $0x3,-0xc(%ebp)
0855fccc +0x2b8:  setle  %al
0855fccf +0x2bb:  test   %al,%al
0855fcd1 +0x2bd:  jne    0855fc35 <+0x221>
0855fcd7 +0x2c3:  addl   $0x1,-0x14(%ebp)
0855fcdb +0x2c7:  cmpl   $0x3,-0x14(%ebp)
0855fcdf +0x2cb:  setle  %al
0855fce2 +0x2ce:  test   %al,%al
0855fce4 +0x2d0:  jne    0855fc29 <+0x215>
0855fcea +0x2d6:  mov    $0x1,%eax
0855fcef +0x2db:  add    $0x34,%esp
0855fcf2 +0x2de:  pop    %ebx
0855fcf3 +0x2df:  pop    %ebp
0855fcf4 +0x2e0:  ret
0855fcf5 +0x2e1:  nop
```

## 反编译 C

```c
// CLeagueMatch::CheckMatchable @ 0x855fa14

/* CLeagueMatch::CheckMatchable(IMatch*) */

undefined4 __thiscall CLeagueMatch::CheckMatchable(CLeagueMatch *this,IMatch *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (((this[local_18 * 0x1c + 0x28] != (CLeagueMatch)0x0) &&
        (*(int *)(this + local_18 * 0x1c + 0x24) != 0)) &&
       (iVar1 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)(this + local_18 * 0x1c + 0x24))
       , local_20 <= *(int *)(iVar1 + 0x14))) {
      iVar1 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)(this + local_18 * 0x1c + 0x24));
      local_20 = *(int *)(iVar1 + 0x14);
    }
  }
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    if (((param_1[local_18 * 0x1c + 0x28] != (IMatch)0x0) &&
        (*(int *)(param_1 + local_18 * 0x1c + 0x24) != 0)) &&
       (iVar1 = CUserCharacInfo::getPVPResultR
                          (*(CUserCharacInfo **)(param_1 + local_18 * 0x1c + 0x24)),
       local_1c <= *(int *)(iVar1 + 0x14))) {
      iVar1 = CUserCharacInfo::getPVPResultR
                        (*(CUserCharacInfo **)(param_1 + local_18 * 0x1c + 0x24));
      local_1c = *(int *)(iVar1 + 0x14);
    }
  }
  if (((local_20 < 0xc) || (0xe < local_20)) || (10 < local_1c)) {
    if (((local_1c < 0xc) || (0xe < local_1c)) || (10 < local_20)) {
      uVar3 = local_20 - local_1c >> 0x1f;
      if ((int)((local_20 - local_1c ^ uVar3) - uVar3) < 5) {
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
            if (((this[local_18 * 0x1c + 0x28] != (CLeagueMatch)0x0) &&
                (param_1[local_10 * 0x1c + 0x28] != (IMatch)0x0)) &&
               (*(int *)(this + local_18 * 0x1c + 0x2c) ==
                *(int *)(param_1 + local_10 * 0x1c + 0x2c))) {
              return 0;
            }
          }
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
