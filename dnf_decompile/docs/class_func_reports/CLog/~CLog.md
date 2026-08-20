# ~CLog

`_ZN4CLogD1Ev`

`CLog::~CLog()`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854e69c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e69c  _ZN4CLogD1Ev
#           CLog::~CLog()
# range [0x0854e69c, 0x0854e88b]
0854e69c +0x000:  push   %ebp
0854e69d +0x001:  mov    %esp,%ebp
0854e69f +0x003:  push   %edi
0854e6a0 +0x004:  push   %esi
0854e6a1 +0x005:  push   %ebx
0854e6a2 +0x006:  sub    $0x1c,%esp
0854e6a5 +0x009:  mov    0x8(%ebp),%eax
0854e6a8 +0x00c:  mov    0xf0(%eax),%eax
0854e6ae +0x012:  test   %eax,%eax
0854e6b0 +0x014:  je     0854e6e2 <+0x46>
0854e6b2 +0x016:  mov    0x8(%ebp),%eax
0854e6b5 +0x019:  mov    0xf0(%eax),%edx
0854e6bb +0x01f:  mov    &stdout,%eax
0854e6c0 +0x024:  cmp    %eax,%edx
0854e6c2 +0x026:  je     0854e6d5 <+0x39>
0854e6c4 +0x028:  mov    0x8(%ebp),%eax
0854e6c7 +0x02b:  mov    0xf0(%eax),%eax
0854e6cd +0x031:  mov    %eax,(%esp)
0854e6d0 +0x034:  call   0807dea0 <_init+0x798>
0854e6d5 +0x039:  mov    0x8(%ebp),%eax
0854e6d8 +0x03c:  movl   $0x0,0xf0(%eax)
0854e6e2 +0x046:  mov    0x8(%ebp),%eax
0854e6e5 +0x049:  mov    0xf4(%eax),%eax
0854e6eb +0x04f:  test   %eax,%eax
0854e6ed +0x051:  je     0854e71f <+0x83>
0854e6ef +0x053:  mov    0x8(%ebp),%eax
0854e6f2 +0x056:  mov    0xf4(%eax),%edx
0854e6f8 +0x05c:  mov    &stdout,%eax
0854e6fd +0x061:  cmp    %eax,%edx
0854e6ff +0x063:  je     0854e712 <+0x76>
0854e701 +0x065:  mov    0x8(%ebp),%eax
0854e704 +0x068:  mov    0xf4(%eax),%eax
0854e70a +0x06e:  mov    %eax,(%esp)
0854e70d +0x071:  call   0807dea0 <_init+0x798>
0854e712 +0x076:  mov    0x8(%ebp),%eax
0854e715 +0x079:  movl   $0x0,0xf4(%eax)
0854e71f +0x083:  mov    0x8(%ebp),%eax
0854e722 +0x086:  mov    0xf8(%eax),%eax
0854e728 +0x08c:  test   %eax,%eax
0854e72a +0x08e:  je     0854e75c <+0xc0>
0854e72c +0x090:  mov    0x8(%ebp),%eax
0854e72f +0x093:  mov    0xf8(%eax),%edx
0854e735 +0x099:  mov    &stdout,%eax
0854e73a +0x09e:  cmp    %eax,%edx
0854e73c +0x0a0:  je     0854e74f <+0xb3>
0854e73e +0x0a2:  mov    0x8(%ebp),%eax
0854e741 +0x0a5:  mov    0xf8(%eax),%eax
0854e747 +0x0ab:  mov    %eax,(%esp)
0854e74a +0x0ae:  call   0807dea0 <_init+0x798>
0854e74f +0x0b3:  mov    0x8(%ebp),%eax
0854e752 +0x0b6:  movl   $0x0,0xf8(%eax)
0854e75c +0x0c0:  mov    0x8(%ebp),%eax
0854e75f +0x0c3:  mov    0xfc(%eax),%eax
0854e765 +0x0c9:  test   %eax,%eax
0854e767 +0x0cb:  je     0854e78c <+0xf0>
0854e769 +0x0cd:  mov    0x8(%ebp),%eax
0854e76c +0x0d0:  mov    0xfc(%eax),%edx
0854e772 +0x0d6:  mov    &stdout,%eax
0854e777 +0x0db:  cmp    %eax,%edx
0854e779 +0x0dd:  je     0854e78c <+0xf0>
0854e77b +0x0df:  mov    0x8(%ebp),%eax
0854e77e +0x0e2:  mov    0xfc(%eax),%eax
0854e784 +0x0e8:  mov    %eax,(%esp)
0854e787 +0x0eb:  call   0807dea0 <_init+0x798>
0854e78c +0x0f0:  mov    0x8(%ebp),%eax
0854e78f +0x0f3:  mov    0x100(%eax),%eax
0854e795 +0x0f9:  test   %eax,%eax
0854e797 +0x0fb:  je     0854e7bc <+0x120>
0854e799 +0x0fd:  mov    0x8(%ebp),%eax
0854e79c +0x100:  mov    0x100(%eax),%edx
0854e7a2 +0x106:  mov    &stdout,%eax
0854e7a7 +0x10b:  cmp    %eax,%edx
0854e7a9 +0x10d:  je     0854e7bc <+0x120>
0854e7ab +0x10f:  mov    0x8(%ebp),%eax
0854e7ae +0x112:  mov    0x100(%eax),%eax
0854e7b4 +0x118:  mov    %eax,(%esp)
0854e7b7 +0x11b:  call   0807dea0 <_init+0x798>
0854e7bc +0x120:  mov    0x8(%ebp),%eax
0854e7bf +0x123:  mov    0x108(%eax),%eax
0854e7c5 +0x129:  test   %eax,%eax
0854e7c7 +0x12b:  je     0854e7ec <+0x150>
0854e7c9 +0x12d:  mov    0x8(%ebp),%eax
0854e7cc +0x130:  mov    0x108(%eax),%edx
0854e7d2 +0x136:  mov    &stdout,%eax
0854e7d7 +0x13b:  cmp    %eax,%edx
0854e7d9 +0x13d:  je     0854e7ec <+0x150>
0854e7db +0x13f:  mov    0x8(%ebp),%eax
0854e7de +0x142:  mov    0x108(%eax),%eax
0854e7e4 +0x148:  mov    %eax,(%esp)
0854e7e7 +0x14b:  call   0807dea0 <_init+0x798>
0854e7ec +0x150:  mov    0x8(%ebp),%eax
0854e7ef +0x153:  mov    0x10c(%eax),%eax
0854e7f5 +0x159:  test   %eax,%eax
0854e7f7 +0x15b:  je     0854e85f <+0x1c3>
0854e7f9 +0x15d:  mov    0x8(%ebp),%eax
0854e7fc +0x160:  mov    0x10c(%eax),%edx
0854e802 +0x166:  mov    &stdout,%eax
0854e807 +0x16b:  cmp    %eax,%edx
0854e809 +0x16d:  je     0854e81c <+0x180>
0854e80b +0x16f:  mov    0x8(%ebp),%eax
0854e80e +0x172:  mov    0x10c(%eax),%eax
0854e814 +0x178:  mov    %eax,(%esp)
0854e817 +0x17b:  call   0807dea0 <_init+0x798>
0854e81c +0x180:  mov    0x8(%ebp),%eax
0854e81f +0x183:  movl   $0x0,0x10c(%eax)
0854e829 +0x18d:  jmp    0854e85f <+0x1c3>
0854e82b +0x18f:  mov    %edx,%esi
0854e82d +0x191:  mov    %eax,%edi
0854e82f +0x193:  mov    0x8(%ebp),%eax
0854e832 +0x196:  test   %eax,%eax
0854e834 +0x198:  je     0854e853 <+0x1b7>
0854e836 +0x19a:  mov    0x8(%ebp),%eax
0854e839 +0x19d:  lea    0xf0(%eax),%ebx
0854e83f +0x1a3:  mov    0x8(%ebp),%eax
0854e842 +0x1a6:  cmp    %eax,%ebx
0854e844 +0x1a8:  je     0854e853 <+0x1b7>
0854e846 +0x1aa:  sub    $0x18,%ebx
0854e849 +0x1ad:  mov    %ebx,(%esp)
0854e84c +0x1b0:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0854e851 +0x1b5:  jmp    0854e83f <+0x1a3>
0854e853 +0x1b7:  mov    %edi,%eax
0854e855 +0x1b9:  mov    %esi,%edx
0854e857 +0x1bb:  mov    %eax,(%esp)
0854e85a +0x1be:  call   08ae3750 <_Unwind_Resume>
0854e85f +0x1c3:  mov    0x8(%ebp),%eax
0854e862 +0x1c6:  test   %eax,%eax
0854e864 +0x1c8:  je     0854e883 <+0x1e7>
0854e866 +0x1ca:  mov    0x8(%ebp),%eax
0854e869 +0x1cd:  lea    0xf0(%eax),%ebx
0854e86f +0x1d3:  mov    0x8(%ebp),%eax
0854e872 +0x1d6:  cmp    %eax,%ebx
0854e874 +0x1d8:  je     0854e883 <+0x1e7>
0854e876 +0x1da:  sub    $0x18,%ebx
0854e879 +0x1dd:  mov    %ebx,(%esp)
0854e87c +0x1e0:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
0854e881 +0x1e5:  jmp    0854e86f <+0x1d3>
0854e883 +0x1e7:  add    $0x1c,%esp
0854e886 +0x1ea:  pop    %ebx
0854e887 +0x1eb:  pop    %esi
0854e888 +0x1ec:  pop    %edi
0854e889 +0x1ed:  pop    %ebp
0854e88a +0x1ee:  ret
0854e88b +0x1ef:  nop
```

## 反编译 C

```c
// CLog::~CLog @ 0x854e69c

/* CLog::~CLog() */

void __thiscall CLog::~CLog(CLog *this)

{
  Mutex *this_00;
  
  if (*(int *)(this + 0xf0) != 0) {
    if (*(int *)(this + 0xf0) != stdout) {
                    /* try { // try from 0854e6d0 to 0854e81b has its CatchHandler @ 0854e82b */
      fclose(*(FILE **)(this + 0xf0));
    }
    *(undefined4 *)(this + 0xf0) = 0;
  }
  if (*(int *)(this + 0xf4) != 0) {
    if (*(int *)(this + 0xf4) != stdout) {
      fclose(*(FILE **)(this + 0xf4));
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  if (*(int *)(this + 0xf8) != 0) {
    if (*(int *)(this + 0xf8) != stdout) {
      fclose(*(FILE **)(this + 0xf8));
    }
    *(undefined4 *)(this + 0xf8) = 0;
  }
  if ((*(int *)(this + 0xfc) != 0) && (*(int *)(this + 0xfc) != stdout)) {
    fclose(*(FILE **)(this + 0xfc));
  }
  if ((*(int *)(this + 0x100) != 0) && (*(int *)(this + 0x100) != stdout)) {
    fclose(*(FILE **)(this + 0x100));
  }
  if ((*(int *)(this + 0x108) != 0) && (*(int *)(this + 0x108) != stdout)) {
    fclose(*(FILE **)(this + 0x108));
  }
  if (*(int *)(this + 0x10c) != 0) {
    if (*(int *)(this + 0x10c) != stdout) {
      fclose(*(FILE **)(this + 0x10c));
    }
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (this != (CLog *)0x0) {
    this_00 = (Mutex *)(this + 0xf0);
    while (this_00 != (Mutex *)this) {
      this_00 = this_00 + -0x18;
      Mutex::~Mutex(this_00);
    }
  }
  return;
}
```
