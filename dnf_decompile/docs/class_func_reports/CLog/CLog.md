# CLog

`_ZN4CLogC1Ev`

`CLog::CLog()`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854e558` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e558  _ZN4CLogC1Ev
#           CLog::CLog()
# range [0x0854e558, 0x0854e69b]
0854e558 +0x000:  push   %ebp
0854e559 +0x001:  mov    %esp,%ebp
0854e55b +0x003:  push   %edi
0854e55c +0x004:  push   %esi
0854e55d +0x005:  push   %ebx
0854e55e +0x006:  sub    $0x1c,%esp
0854e561 +0x009:  mov    0x8(%ebp),%eax
0854e564 +0x00c:  mov    %eax,%ebx
0854e566 +0x00e:  mov    $0x9,%esi
0854e56b +0x013:  jmp    0854e57b <+0x23>
0854e56d +0x015:  mov    %ebx,(%esp)
0854e570 +0x018:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
0854e575 +0x01d:  add    $0x18,%ebx
0854e578 +0x020:  sub    $0x1,%esi
0854e57b +0x023:  cmp    $0xffffffff,%esi
0854e57e +0x026:  setne  %al
0854e581 +0x029:  test   %al,%al
0854e583 +0x02b:  jne    0854e56d <+0x15>
0854e585 +0x02d:  mov    0x8(%ebp),%eax
0854e588 +0x030:  movl   $0x0,0x108(%eax)
0854e592 +0x03a:  mov    0x8(%ebp),%eax
0854e595 +0x03d:  mov    0x108(%eax),%edx
0854e59b +0x043:  mov    0x8(%ebp),%eax
0854e59e +0x046:  mov    %edx,0x104(%eax)
0854e5a4 +0x04c:  mov    0x8(%ebp),%eax
0854e5a7 +0x04f:  mov    0x104(%eax),%edx
0854e5ad +0x055:  mov    0x8(%ebp),%eax
0854e5b0 +0x058:  mov    %edx,0xfc(%eax)
0854e5b6 +0x05e:  mov    0x8(%ebp),%eax
0854e5b9 +0x061:  mov    0xfc(%eax),%edx
0854e5bf +0x067:  mov    0x8(%ebp),%eax
0854e5c2 +0x06a:  mov    %edx,0xf8(%eax)
0854e5c8 +0x070:  mov    0x8(%ebp),%eax
0854e5cb +0x073:  mov    0xf8(%eax),%edx
0854e5d1 +0x079:  mov    0x8(%ebp),%eax
0854e5d4 +0x07c:  mov    %edx,0xf4(%eax)
0854e5da +0x082:  mov    0x8(%ebp),%eax
0854e5dd +0x085:  mov    0xf4(%eax),%edx
0854e5e3 +0x08b:  mov    0x8(%ebp),%eax
0854e5e6 +0x08e:  mov    %edx,0xf0(%eax)
0854e5ec +0x094:  mov    0x8(%ebp),%eax
0854e5ef +0x097:  mov    0xf0(%eax),%edx
0854e5f5 +0x09d:  mov    0x8(%ebp),%eax
0854e5f8 +0x0a0:  mov    %edx,0x100(%eax)
0854e5fe +0x0a6:  mov    0x8(%ebp),%eax
0854e601 +0x0a9:  movl   $0x0,0x10c(%eax)
0854e60b +0x0b3:  mov    0x8(%ebp),%eax
0854e60e +0x0b6:  movl   $0x0,0x250(%eax)
0854e618 +0x0c0:  mov    0x8(%ebp),%eax
0854e61b +0x0c3:  add    $0x258,%eax
0854e620 +0x0c8:  movl   $0x100,0x8(%esp)
0854e628 +0x0d0:  movl   $0x0,0x4(%esp)
0854e630 +0x0d8:  mov    %eax,(%esp)
0854e633 +0x0db:  call   0807dcc0 <_init+0x5b8>
0854e638 +0x0e0:  mov    0x8(%ebp),%eax
0854e63b +0x0e3:  add    $0x110,%eax
0854e640 +0x0e8:  movl   $0x100,0x8(%esp)
0854e648 +0x0f0:  movl   $0x0,0x4(%esp)
0854e650 +0x0f8:  mov    %eax,(%esp)
0854e653 +0x0fb:  call   0807dcc0 <_init+0x5b8>
0854e658 +0x100:  call   0854e3db <_ZL17setLogWriterWiredv>  ; setLogWriterWired()
0854e65d +0x105:  jmp    0854e693 <+0x13b>
0854e65f +0x107:  mov    %edx,%esi
0854e661 +0x109:  mov    %eax,%edi
0854e663 +0x10b:  mov    0x8(%ebp),%eax
0854e666 +0x10e:  test   %eax,%eax
0854e668 +0x110:  je     0854e687 <+0x12f>
0854e66a +0x112:  mov    0x8(%ebp),%eax
0854e66d +0x115:  lea    0xf0(%eax),%ebx
0854e673 +0x11b:  mov    0x8(%ebp),%eax
0854e676 +0x11e:  cmp    %eax,%ebx
0854e678 +0x120:  je     0854e687 <+0x12f>
0854e67a +0x122:  sub    $0x18,%ebx
0854e67d +0x125:  mov    %ebx,(%esp)
0854e680 +0x128:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0854e685 +0x12d:  jmp    0854e673 <+0x11b>
0854e687 +0x12f:  mov    %edi,%eax
0854e689 +0x131:  mov    %esi,%edx
0854e68b +0x133:  mov    %eax,(%esp)
0854e68e +0x136:  call   08ae3750 <_Unwind_Resume>
0854e693 +0x13b:  add    $0x1c,%esp
0854e696 +0x13e:  pop    %ebx
0854e697 +0x13f:  pop    %esi
0854e698 +0x140:  pop    %edi
0854e699 +0x141:  pop    %ebp
0854e69a +0x142:  ret
0854e69b +0x143:  nop
```

## 反编译 C

```c
// CLog::CLog @ 0x854e558

/* CLog::CLog() */

void __thiscall CLog::CLog(CLog *this)

{
  CLog *this_00;
  int iVar1;
  
  this_00 = this;
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    Mutex::Mutex((Mutex *)this_00);
    this_00 = this_00 + 0x18;
  }
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(this + 0x104);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0xfc);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  memset(this + 600,0,0x100);
  memset(this + 0x110,0,0x100);
                    /* try { // try from 0854e658 to 0854e65c has its CatchHandler @ 0854e65f */
  setLogWriterWired();
  return;
}
```
