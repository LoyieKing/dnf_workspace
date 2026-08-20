# CPowerManager

`_ZN13CPowerManagerC1Ev`

`CPowerManager::CPowerManager()`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847e998` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847e998  _ZN13CPowerManagerC1Ev
#           CPowerManager::CPowerManager()
# range [0x0847e998, 0x0847eabb]
0847e998 +0x000:  push   %ebp
0847e999 +0x001:  mov    %esp,%ebp
0847e99b +0x003:  push   %esi
0847e99c +0x004:  push   %ebx
0847e99d +0x005:  sub    $0x10,%esp
0847e9a0 +0x008:  mov    0x8(%ebp),%eax
0847e9a3 +0x00b:  movb   $0x0,(%eax)
0847e9a6 +0x00e:  mov    0x8(%ebp),%eax
0847e9a9 +0x011:  movl   $0x0,0x4(%eax)
0847e9b0 +0x018:  mov    0x8(%ebp),%eax
0847e9b3 +0x01b:  movl   $0x0,0x8(%eax)
0847e9ba +0x022:  mov    0x8(%ebp),%eax
0847e9bd +0x025:  movl   $0x0,0xc(%eax)
0847e9c4 +0x02c:  mov    0x8(%ebp),%eax
0847e9c7 +0x02f:  movl   $0x0,0x10(%eax)
0847e9ce +0x036:  mov    0x8(%ebp),%eax
0847e9d1 +0x039:  movl   $0x0,0x14(%eax)
0847e9d8 +0x040:  mov    0x8(%ebp),%eax
0847e9db +0x043:  movl   $0x0,0x18(%eax)
0847e9e2 +0x04a:  mov    0x8(%ebp),%eax
0847e9e5 +0x04d:  movl   $0x0,0x1c(%eax)
0847e9ec +0x054:  mov    0x8(%ebp),%eax
0847e9ef +0x057:  add    $0x28,%eax
0847e9f2 +0x05a:  mov    %eax,%ebx
0847e9f4 +0x05c:  mov    $0x2,%esi
0847e9f9 +0x061:  jmp    0847ea0c <+0x74>
0847e9fb +0x063:  mov    %ebx,(%esp)
0847e9fe +0x066:  call   08480f9e <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x1c>  ; global constructors keyed to CPowerManager::CPowerManager()+0x1c
0847ea03 +0x06b:  add    $0x84,%ebx
0847ea09 +0x071:  sub    $0x1,%esi
0847ea0c +0x074:  cmp    $0xffffffff,%esi
0847ea0f +0x077:  setne  %al
0847ea12 +0x07a:  test   %al,%al
0847ea14 +0x07c:  jne    0847e9fb <+0x63>
0847ea16 +0x07e:  mov    0x8(%ebp),%eax
0847ea19 +0x081:  add    $0x1b4,%eax
0847ea1e +0x086:  mov    %eax,(%esp)
0847ea21 +0x089:  call   0848021e <_ZN12CPowerWarLogC1Ev>  ; CPowerWarLog::CPowerWarLog()
0847ea26 +0x08e:  mov    0x8(%ebp),%eax
0847ea29 +0x091:  add    $0x1f0,%eax
0847ea2e +0x096:  mov    %eax,(%esp)
0847ea31 +0x099:  call   0848085a <_ZN18CPowerWarPacketLogC1Ev>  ; CPowerWarPacketLog::CPowerWarPacketLog()
0847ea36 +0x09e:  mov    0x8(%ebp),%eax
0847ea39 +0x0a1:  add    $0x24,%eax
0847ea3c +0x0a4:  movl   $0x4,0x8(%esp)
0847ea44 +0x0ac:  movl   $0x0,0x4(%esp)
0847ea4c +0x0b4:  mov    %eax,(%esp)
0847ea4f +0x0b7:  call   0807dcc0 <_init+0x5b8>
0847ea54 +0x0bc:  mov    0x8(%ebp),%eax
0847ea57 +0x0bf:  add    $0x28,%eax
0847ea5a +0x0c2:  movl   $0x18c,0x8(%esp)
0847ea62 +0x0ca:  movl   $0x0,0x4(%esp)
0847ea6a +0x0d2:  mov    %eax,(%esp)
0847ea6d +0x0d5:  call   0807dcc0 <_init+0x5b8>
0847ea72 +0x0da:  mov    0x8(%ebp),%eax
0847ea75 +0x0dd:  add    $0x1b4,%eax
0847ea7a +0x0e2:  mov    %eax,(%esp)
0847ea7d +0x0e5:  call   08480232 <_ZN12CPowerWarLog5ResetEv>  ; CPowerWarLog::Reset()
0847ea82 +0x0ea:  mov    0x8(%ebp),%eax
0847ea85 +0x0ed:  add    $0x1f0,%eax
0847ea8a +0x0f2:  mov    %eax,(%esp)
0847ea8d +0x0f5:  call   084808de <_ZN18CPowerWarPacketLog5ResetEv>  ; CPowerWarPacketLog::Reset()
0847ea92 +0x0fa:  jmp    0847eab4 <+0x11c>
0847ea94 +0x0fc:  mov    %edx,%ebx
0847ea96 +0x0fe:  mov    %eax,%esi
0847ea98 +0x100:  mov    0x8(%ebp),%eax
0847ea9b +0x103:  add    $0x1f0,%eax
0847eaa0 +0x108:  mov    %eax,(%esp)
0847eaa3 +0x10b:  call   0848089c <_ZN18CPowerWarPacketLogD1Ev>  ; CPowerWarPacketLog::~CPowerWarPacketLog()
0847eaa8 +0x110:  mov    %esi,%eax
0847eaaa +0x112:  mov    %ebx,%edx
0847eaac +0x114:  mov    %eax,(%esp)
0847eaaf +0x117:  call   08ae3750 <_Unwind_Resume>
0847eab4 +0x11c:  add    $0x10,%esp
0847eab7 +0x11f:  pop    %ebx
0847eab8 +0x120:  pop    %esi
0847eab9 +0x121:  pop    %ebp
0847eaba +0x122:  ret
0847eabb +0x123:  nop
```

## 反编译 C

```c
// CPowerManager::CPowerManager @ 0x847e998

/* CPowerManager::CPowerManager() */

void __thiscall CPowerManager::CPowerManager(CPowerManager *this)

{
  STPowerWarStatueRankerInfo *this_00;
  int iVar1;
  
  *this = (CPowerManager)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  this_00 = (STPowerWarStatueRankerInfo *)(this + 0x28);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
    STPowerWarStatueRankerInfo::STPowerWarStatueRankerInfo(this_00);
    this_00 = this_00 + 0x84;
  }
  CPowerWarLog::CPowerWarLog((CPowerWarLog *)(this + 0x1b4));
  CPowerWarPacketLog::CPowerWarPacketLog((CPowerWarPacketLog *)(this + 0x1f0));
  memset(this + 0x24,0,4);
  memset(this + 0x28,0,0x18c);
  CPowerWarLog::Reset((CPowerWarLog *)(this + 0x1b4));
                    /* try { // try from 0847ea8d to 0847ea91 has its CatchHandler @ 0847ea94 */
  CPowerWarPacketLog::Reset((CPowerWarPacketLog *)(this + 0x1f0));
  return;
}
```
