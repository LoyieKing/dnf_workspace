# onReturnVillage

`_ZN8WongWork10CBossTower15onReturnVillageEv`

`WongWork::CBossTower::onReturnVillage()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossTower` | `0x08144fca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08144fca  _ZN8WongWork10CBossTower15onReturnVillageEv
#           WongWork::CBossTower::onReturnVillage()
# range [0x08144fca, 0x08145129]
08144fca +0x000:  push   %ebp
08144fcb +0x001:  mov    %esp,%ebp
08144fcd +0x003:  push   %edi
08144fce +0x004:  push   %esi
08144fcf +0x005:  push   %ebx
08144fd0 +0x006:  sub    $0x13c,%esp
08144fd6 +0x00c:  mov    0x8(%ebp),%eax
08144fd9 +0x00f:  mov    0x4(%eax),%eax
08144fdc +0x012:  test   %eax,%eax
08144fde +0x014:  jmp    0814511a <+0x150>
08144fe3 +0x019:  mov    0x4(%eax),%eax
08144fe6 +0x01c:  mov    %eax,(%esp)
08144fe9 +0x01f:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
08144fee +0x024:  cmp    $0x2,%al
08144ff0 +0x026:  jne    08144ff9 <+0x2f>
08144ff2 +0x028:  mov    $0x1,%eax
08144ff7 +0x02d:  jmp    08144ffe <+0x34>
08144ff9 +0x02f:  mov    $0x0,%eax
08144ffe +0x034:  test   %al,%al
08145000 +0x036:  je     0814511a <+0x150>
08145006 +0x03c:  lea    -0x120(%ebp),%edx
0814500c +0x042:  mov    $0x0,%eax
08145011 +0x047:  mov    $0x3f,%ecx
08145016 +0x04c:  mov    %edx,%edi
08145018 +0x04e:  rep stos %eax,%es:(%edi)
0814501a +0x050:  mov    %edi,%edx
0814501c +0x052:  mov    %ax,(%edx)
0814501f +0x055:  add    $0x2,%edx
08145022 +0x058:  mov    %al,(%edx)
08145024 +0x05a:  add    $0x1,%edx
08145027 +0x05d:  mov    0x8(%ebp),%eax
0814502a +0x060:  mov    0x4(%eax),%eax
0814502d +0x063:  mov    0xcd8(%eax),%eax
08145033 +0x069:  mov    %al,-0x21(%ebp)
08145036 +0x06c:  mov    0x8(%ebp),%eax
08145039 +0x06f:  mov    0x4(%eax),%eax
0814503c +0x072:  lea    -0x120(%ebp),%edx
08145042 +0x078:  mov    %edx,0x4(%esp)
08145046 +0x07c:  mov    %eax,(%esp)
08145049 +0x07f:  call   08145882 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x305>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x305
0814504e +0x084:  movl   $0x0,-0x20(%ebp)
08145055 +0x08b:  jmp    081450f2 <+0x128>
0814505a +0x090:  mov    0x8(%ebp),%eax
0814505d +0x093:  mov    0x4(%eax),%eax
08145060 +0x096:  mov    -0x20(%ebp),%edx
08145063 +0x099:  mov    %edx,0x4(%esp)
08145067 +0x09d:  mov    %eax,(%esp)
0814506a +0x0a0:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0814506f +0x0a5:  mov    %eax,-0x1c(%ebp)
08145072 +0x0a8:  cmpl   $0x0,-0x1c(%ebp)
08145076 +0x0ac:  je     08145094 <+0xca>
08145078 +0x0ae:  mov    0x8(%ebp),%eax
0814507b +0x0b1:  mov    0x4(%eax),%eax
0814507e +0x0b4:  mov    -0x20(%ebp),%edx
08145081 +0x0b7:  mov    %edx,0x4(%esp)
08145085 +0x0bb:  mov    %eax,(%esp)
08145088 +0x0be:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
0814508d +0x0c3:  xor    $0x1,%eax
08145090 +0x0c6:  test   %al,%al
08145092 +0x0c8:  je     0814509b <+0xd1>
08145094 +0x0ca:  mov    $0x1,%eax
08145099 +0x0cf:  jmp    081450a0 <+0xd6>
0814509b +0x0d1:  mov    $0x0,%eax
081450a0 +0x0d6:  test   %al,%al
081450a2 +0x0d8:  jne    081450ed <+0x123>
081450a4 +0x0da:  movsbl -0x21(%ebp),%esi
081450a8 +0x0de:  mov    0x8(%ebp),%eax
081450ab +0x0e1:  mov    0xae8(%eax),%eax
081450b1 +0x0e7:  mov    %eax,%ebx
081450b3 +0x0e9:  mov    0x8(%ebp),%eax
081450b6 +0x0ec:  mov    0x9f0(%eax),%eax
081450bc +0x0f2:  mov    %eax,(%esp)
081450bf +0x0f5:  call   081455a6 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29
081450c4 +0x0fa:  mov    -0x1c(%ebp),%edx
081450c7 +0x0fd:  lea    0x79700(%edx),%ecx
081450cd +0x103:  mov    %esi,0x10(%esp)
081450d1 +0x107:  lea    -0x120(%ebp),%edx
081450d7 +0x10d:  mov    %edx,0xc(%esp)
081450db +0x111:  mov    %ebx,0x8(%esp)
081450df +0x115:  mov    %eax,0x4(%esp)
081450e3 +0x119:  mov    %ecx,(%esp)
081450e6 +0x11c:  call   086849dc <_ZN15cUserHistoryLog12LeaveDungeonEPKciS1_i>  ; cUserHistoryLog::LeaveDungeon(char const*, int, char const*, int)
081450eb +0x121:  jmp    081450ee <+0x124>
081450ed +0x123:  nop
081450ee +0x124:  addl   $0x1,-0x20(%ebp)
081450f2 +0x128:  cmpl   $0x3,-0x20(%ebp)
081450f6 +0x12c:  setle  %al
081450f9 +0x12f:  test   %al,%al
081450fb +0x131:  jne    0814505a <+0x90>
08145101 +0x137:  mov    0x8(%ebp),%eax
08145104 +0x13a:  mov    0x4(%eax),%eax
08145107 +0x13d:  mov    %eax,(%esp)
0814510a +0x140:  call   085aca60 <_ZN6CParty15ReturnToVillageEv>  ; CParty::ReturnToVillage()
0814510f +0x145:  mov    0x8(%ebp),%eax
08145112 +0x148:  mov    %eax,(%esp)
08145115 +0x14b:  call   08142b36 <_ZN8WongWork10CBossTower8_destroyEv>  ; WongWork::CBossTower::_destroy()
0814511a +0x150:  mov    $0x1,%eax
0814511f +0x155:  add    $0x13c,%esp
08145125 +0x15b:  pop    %ebx
08145126 +0x15c:  pop    %esi
08145127 +0x15d:  pop    %edi
08145128 +0x15e:  pop    %ebp
08145129 +0x15f:  ret
```

## 反编译 C

```c
// WongWork::CBossTower::onReturnVillage @ 0x8144fca

/* WongWork::CBossTower::onReturnVillage() */

undefined4 WongWork::CBossTower::onReturnVillage(void)

{
  return 1;
}
```
