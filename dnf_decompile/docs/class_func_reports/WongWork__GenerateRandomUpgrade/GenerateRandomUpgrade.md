# GenerateRandomUpgrade

`_ZN8WongWork21GenerateRandomUpgradeC1Ev`

`WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade()`

| 类 | 地址 |
|---|---|
| `WongWork::GenerateRandomUpgrade` | `0x085335ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085335ee  _ZN8WongWork21GenerateRandomUpgradeC1Ev
#           WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade()
# range [0x085335ee, 0x0853364d]
085335ee +0x00:  push   %ebp
085335ef +0x01:  mov    %esp,%ebp
085335f1 +0x03:  push   %edi
085335f2 +0x04:  push   %esi
085335f3 +0x05:  push   %ebx
085335f4 +0x06:  sub    $0x2c,%esp
085335f7 +0x09:  movl   $0x0,(%esp)
085335fe +0x10:  call   0807d750 <_init+0x48>
08533603 +0x15:  mov    %eax,-0x1c(%ebp)
08533606 +0x18:  lea    -0x1c(%ebp),%esi
08533609 +0x1b:  movl   $0x9c8,(%esp)
08533610 +0x22:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533615 +0x27:  mov    %eax,%ebx
08533617 +0x29:  mov    %ebx,%eax
08533619 +0x2b:  mov    %esi,0x4(%esp)
0853361d +0x2f:  mov    %eax,(%esp)
08533620 +0x32:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
08533625 +0x37:  jmp    0853363f <+0x51>
08533627 +0x39:  mov    %edx,%esi
08533629 +0x3b:  mov    %eax,%edi
0853362b +0x3d:  mov    %ebx,(%esp)
0853362e +0x40:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533633 +0x45:  mov    %edi,%eax
08533635 +0x47:  mov    %esi,%edx
08533637 +0x49:  mov    %eax,(%esp)
0853363a +0x4c:  call   08ae3750 <_Unwind_Resume>
0853363f +0x51:  mov    %ebx,%edx
08533641 +0x53:  mov    0x8(%ebp),%eax
08533644 +0x56:  mov    %edx,(%eax)
08533646 +0x58:  add    $0x2c,%esp
08533649 +0x5b:  pop    %ebx
0853364a +0x5c:  pop    %esi
0853364b +0x5d:  pop    %edi
0853364c +0x5e:  pop    %ebp
0853364d +0x5f:  ret
```

## 反编译 C

```c
// WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade @ 0x85335ee

/* WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade() */

void __thiscall WongWork::GenerateRandomUpgrade::GenerateRandomUpgrade(GenerateRandomUpgrade *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  local_20[0] = time((time_t *)0x0);
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08533620 to 08533624 has its CatchHandler @ 08533627 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)this = this_00;
  return;
}
```
