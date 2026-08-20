# procTimeLine

`_ZN12advancealtar9ProcStage12procTimeLineEv`

`advancealtar::ProcStage::procTimeLine()`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage` | `0x0812e0d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812e0d6  _ZN12advancealtar9ProcStage12procTimeLineEv
#           advancealtar::ProcStage::procTimeLine()
# range [0x0812e0d6, 0x0812e145]
0812e0d6 +0x00:  push   %ebp
0812e0d7 +0x01:  mov    %esp,%ebp
0812e0d9 +0x03:  sub    $0x28,%esp
0812e0dc +0x06:  mov    0x8(%ebp),%eax
0812e0df +0x09:  mov    0x4(%eax),%eax
0812e0e2 +0x0c:  cmp    $0x3,%eax
0812e0e5 +0x0f:  jne    0812e142 <+0x6c>
0812e0e7 +0x11:  mov    0x8(%ebp),%eax
0812e0ea +0x14:  add    $0x18,%eax
0812e0ed +0x17:  mov    %eax,(%esp)
0812e0f0 +0x1a:  call   0812d50a <_ZNK12advancealtar9ProcStage18ProcSummonObjectMs11isEndSummonEv>  ; advancealtar::ProcStage::ProcSummonObjectMs::isEndSummon() const
0812e0f5 +0x1f:  test   %al,%al
0812e0f7 +0x21:  je     0812e11c <+0x46>
0812e0f9 +0x23:  mov    0x8(%ebp),%eax
0812e0fc +0x26:  mov    %eax,(%esp)
0812e0ff +0x29:  call   0812eba8 <_ZN12advancealtar9ProcStage28makeCurrentPhaseSummonObjectEv>  ; advancealtar::ProcStage::makeCurrentPhaseSummonObject()
0812e104 +0x2e:  mov    %al,-0x9(%ebp)
0812e107 +0x31:  movzbl -0x9(%ebp),%eax
0812e10b +0x35:  xor    $0x1,%eax
0812e10e +0x38:  test   %al,%al
0812e110 +0x3a:  je     0812e11c <+0x46>
0812e112 +0x3c:  mov    0x8(%ebp),%eax
0812e115 +0x3f:  movl   $0x4,0x4(%eax)
0812e11c +0x46:  mov    0x8(%ebp),%eax
0812e11f +0x49:  mov    %eax,(%esp)
0812e122 +0x4c:  call   0812e146 <_ZN12advancealtar9ProcStage12incCurrentMsEv>  ; advancealtar::ProcStage::incCurrentMs()
0812e127 +0x51:  mov    0x8(%ebp),%eax
0812e12a +0x54:  mov    0x4(%eax),%eax
0812e12d +0x57:  cmp    $0x3,%eax
0812e130 +0x5a:  jne    0812e143 <+0x6d>
0812e132 +0x5c:  mov    0x8(%ebp),%eax
0812e135 +0x5f:  add    $0x18,%eax
0812e138 +0x62:  mov    %eax,(%esp)
0812e13b +0x65:  call   0812d658 <_ZN12advancealtar9ProcStage18ProcSummonObjectMs25summonObjectAndSendPacketEv>  ; advancealtar::ProcStage::ProcSummonObjectMs::summonObjectAndSendPacket()
0812e140 +0x6a:  jmp    0812e143 <+0x6d>
0812e142 +0x6c:  nop
0812e143 +0x6d:  leave
0812e144 +0x6e:  ret
0812e145 +0x6f:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::procTimeLine @ 0x812e0d6

/* advancealtar::ProcStage::procTimeLine() */

void __thiscall advancealtar::ProcStage::procTimeLine(ProcStage *this)

{
  char cVar1;
  
  if (*(int *)(this + 4) == 3) {
    cVar1 = ProcSummonObjectMs::isEndSummon((ProcSummonObjectMs *)(this + 0x18));
    if (cVar1 != '\0') {
      cVar1 = makeCurrentPhaseSummonObject(this);
      if (cVar1 != '\x01') {
        *(undefined4 *)(this + 4) = 4;
      }
    }
    incCurrentMs(this);
    if (*(int *)(this + 4) == 3) {
      ProcSummonObjectMs::summonObjectAndSendPacket((ProcSummonObjectMs *)(this + 0x18));
    }
  }
  return;
}
```
