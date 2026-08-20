# isEndAllPhase

`_ZNK12advancealtar9ProcStage13isEndAllPhaseEv`

`advancealtar::ProcStage::isEndAllPhase() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812eb5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812eb5a  _ZNK12advancealtar9ProcStage13isEndAllPhaseEv
#           advancealtar::ProcStage::isEndAllPhase() const
# range [0x0812eb5a, 0x0812eba7]
0812eb5a +0x00:  push   %ebp
0812eb5b +0x01:  mov    %esp,%ebp
0812eb5d +0x03:  push   %ebx
0812eb5e +0x04:  sub    $0x14,%esp
0812eb61 +0x07:  mov    0x8(%ebp),%eax
0812eb64 +0x0a:  mov    0x90(%eax),%eax
0812eb6a +0x10:  test   %eax,%eax
0812eb6c +0x12:  jne    0812eb75 <+0x1b>
0812eb6e +0x14:  mov    $0x0,%eax
0812eb73 +0x19:  jmp    0812eba1 <+0x47>
0812eb75 +0x1b:  mov    0x8(%ebp),%eax
0812eb78 +0x1e:  mov    0xc(%eax),%ebx
0812eb7b +0x21:  mov    0x8(%ebp),%eax
0812eb7e +0x24:  mov    0x90(%eax),%eax
0812eb84 +0x2a:  mov    %eax,(%esp)
0812eb87 +0x2d:  call   081359ba <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x15c1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x15c1
0812eb8c +0x32:  cmp    %eax,%ebx
0812eb8e +0x34:  setae  %al
0812eb91 +0x37:  test   %al,%al
0812eb93 +0x39:  je     0812eb9c <+0x42>
0812eb95 +0x3b:  mov    $0x1,%eax
0812eb9a +0x40:  jmp    0812eba1 <+0x47>
0812eb9c +0x42:  mov    $0x0,%eax
0812eba1 +0x47:  add    $0x14,%esp
0812eba4 +0x4a:  pop    %ebx
0812eba5 +0x4b:  pop    %ebp
0812eba6 +0x4c:  ret
0812eba7 +0x4d:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::isEndAllPhase @ 0x812eb5a

/* advancealtar::ProcStage::isEndAllPhase() const */

undefined4 __thiscall advancealtar::ProcStage::isEndAllPhase(ProcStage *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x90) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(this + 0xc);
    uVar3 = std::vector<advancealtar::Phase,std::allocator<advancealtar::Phase>>::size
                      (*(vector<advancealtar::Phase,std::allocator<advancealtar::Phase>> **)
                        (this + 0x90));
    if (uVar1 < uVar3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
