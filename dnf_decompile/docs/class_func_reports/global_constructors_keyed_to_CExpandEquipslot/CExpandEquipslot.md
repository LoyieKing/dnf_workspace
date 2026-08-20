# CExpandEquipslot

`_GLOBAL__I__ZN16CExpandEquipslotC2Ev`

`global constructors keyed to CExpandEquipslot::CExpandEquipslot()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CExpandEquipslot` | `0x0849aa88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849aa88  _GLOBAL__I__ZN16CExpandEquipslotC2Ev
#           global constructors keyed to CExpandEquipslot::CExpandEquipslot()
# range [0x0849aa88, 0x0849ac2f]
0849aa88 +0x000:  push   %ebp
0849aa89 +0x001:  mov    %esp,%ebp
0849aa8b +0x003:  sub    $0x18,%esp
0849aa8e +0x006:  movl   $0xffff,0x4(%esp)
0849aa96 +0x00e:  movl   $0x1,(%esp)
0849aa9d +0x015:  call   0849aa48 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0849aaa2 +0x01a:  leave
0849aaa3 +0x01b:  ret
0849aaa4 +0x01c:  push   %ebp
0849aaa5 +0x01d:  mov    %esp,%ebp
0849aaa7 +0x01f:  mov    0x8(%ebp),%eax
0849aaaa +0x022:  add    $0x48,%eax
0849aaad +0x025:  pop    %ebp
0849aaae +0x026:  ret
0849aaaf +0x027:  nop
0849aab0 +0x028:  push   %ebp
0849aab1 +0x029:  mov    %esp,%ebp
0849aab3 +0x02b:  sub    $0x28,%esp
0849aab6 +0x02e:  mov    0xc(%ebp),%eax
0849aab9 +0x031:  mov    %al,-0xc(%ebp)
0849aabc +0x034:  mov    0x8(%ebp),%eax
0849aabf +0x037:  mov    0x10(%eax),%eax
0849aac2 +0x03a:  test   %eax,%eax
0849aac4 +0x03c:  je     0849aae1 <+0x59>
0849aac6 +0x03e:  mov    0x8(%ebp),%eax
0849aac9 +0x041:  mov    %eax,(%esp)
0849aacc +0x044:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
0849aad1 +0x049:  mov    0x8(%ebp),%eax
0849aad4 +0x04c:  mov    0x10(%eax),%eax
0849aad7 +0x04f:  movzbl -0xc(%ebp),%edx
0849aadb +0x053:  mov    %dl,0x1276(%eax)
0849aae1 +0x059:  leave
0849aae2 +0x05a:  ret
0849aae3 +0x05b:  nop
0849aae4 +0x05c:  push   %ebp
0849aae5 +0x05d:  mov    %esp,%ebp
0849aae7 +0x05f:  push   %ebx
0849aae8 +0x060:  sub    $0x14,%esp
0849aaeb +0x063:  mov    0x8(%ebp),%ebx
0849aaee +0x066:  mov    0xc(%ebp),%eax
0849aaf1 +0x069:  mov    %eax,0x4(%esp)
0849aaf5 +0x06d:  mov    %ebx,(%esp)
0849aaf8 +0x070:  call   0849abae <+0x126>
0849aafd +0x075:  mov    %ebx,%eax
0849aaff +0x077:  add    $0x14,%esp
0849ab02 +0x07a:  pop    %ebx
0849ab03 +0x07b:  pop    %ebp
0849ab04 +0x07c:  ret    $0x4
0849ab07 +0x07f:  nop
0849ab08 +0x080:  push   %ebp
0849ab09 +0x081:  mov    %esp,%ebp
0849ab0b +0x083:  push   %ebx
0849ab0c +0x084:  sub    $0x14,%esp
0849ab0f +0x087:  mov    0x8(%ebp),%ebx
0849ab12 +0x08a:  mov    0xc(%ebp),%eax
0849ab15 +0x08d:  add    $0x4,%eax
0849ab18 +0x090:  mov    %eax,0x4(%esp)
0849ab1c +0x094:  mov    %ebx,(%esp)
0849ab1f +0x097:  call   0849abae <+0x126>
0849ab24 +0x09c:  mov    %ebx,%eax
0849ab26 +0x09e:  add    $0x14,%esp
0849ab29 +0x0a1:  pop    %ebx
0849ab2a +0x0a2:  pop    %ebp
0849ab2b +0x0a3:  ret    $0x4
0849ab2e +0x0a6:  push   %ebp
0849ab2f +0x0a7:  mov    %esp,%ebp
0849ab31 +0x0a9:  push   %ebx
0849ab32 +0x0aa:  sub    $0x14,%esp
0849ab35 +0x0ad:  mov    0x8(%ebp),%eax
0849ab38 +0x0b0:  mov    %eax,(%esp)
0849ab3b +0x0b3:  call   0849abbe <+0x136>
0849ab40 +0x0b8:  mov    (%eax),%ebx
0849ab42 +0x0ba:  mov    0xc(%ebp),%eax
0849ab45 +0x0bd:  mov    %eax,(%esp)
0849ab48 +0x0c0:  call   0849abbe <+0x136>
0849ab4d +0x0c5:  mov    (%eax),%eax
0849ab4f +0x0c7:  cmp    %eax,%ebx
0849ab51 +0x0c9:  setne  %al
0849ab54 +0x0cc:  add    $0x14,%esp
0849ab57 +0x0cf:  pop    %ebx
0849ab58 +0x0d0:  pop    %ebp
0849ab59 +0x0d1:  ret
0849ab5a +0x0d2:  push   %ebp
0849ab5b +0x0d3:  mov    %esp,%ebp
0849ab5d +0x0d5:  push   %ebx
0849ab5e +0x0d6:  sub    $0x24,%esp
0849ab61 +0x0d9:  mov    0x8(%ebp),%ebx
0849ab64 +0x0dc:  mov    0xc(%ebp),%eax
0849ab67 +0x0df:  mov    (%eax),%eax
0849ab69 +0x0e1:  mov    %eax,-0xc(%ebp)
0849ab6c +0x0e4:  lea    -0xc(%ebp),%edx
0849ab6f +0x0e7:  lea    0x4(%eax),%ecx
0849ab72 +0x0ea:  mov    0xc(%ebp),%eax
0849ab75 +0x0ed:  mov    %ecx,(%eax)
0849ab77 +0x0ef:  mov    %edx,0x4(%esp)
0849ab7b +0x0f3:  mov    %ebx,(%esp)
0849ab7e +0x0f6:  call   0849abae <+0x126>
0849ab83 +0x0fb:  mov    %ebx,%eax
0849ab85 +0x0fd:  add    $0x24,%esp
0849ab88 +0x100:  pop    %ebx
0849ab89 +0x101:  pop    %ebp
0849ab8a +0x102:  ret    $0x4
0849ab8d +0x105:  nop
0849ab8e +0x106:  push   %ebp
0849ab8f +0x107:  mov    %esp,%ebp
0849ab91 +0x109:  mov    0x8(%ebp),%eax
0849ab94 +0x10c:  mov    (%eax),%eax
0849ab96 +0x10e:  pop    %ebp
0849ab97 +0x10f:  ret
0849ab98 +0x110:  push   %ebp
0849ab99 +0x111:  mov    %esp,%ebp
0849ab9b +0x113:  sub    $0x18,%esp
0849ab9e +0x116:  mov    0x8(%ebp),%eax
0849aba1 +0x119:  mov    (%eax),%eax
0849aba3 +0x11b:  mov    %eax,(%esp)
0849aba6 +0x11e:  call   0849abc6 <+0x13e>
0849abab +0x123:  leave
0849abac +0x124:  ret
0849abad +0x125:  nop
0849abae +0x126:  push   %ebp
0849abaf +0x127:  mov    %esp,%ebp
0849abb1 +0x129:  mov    0xc(%ebp),%eax
0849abb4 +0x12c:  mov    (%eax),%edx
0849abb6 +0x12e:  mov    0x8(%ebp),%eax
0849abb9 +0x131:  mov    %edx,(%eax)
0849abbb +0x133:  pop    %ebp
0849abbc +0x134:  ret
0849abbd +0x135:  nop
0849abbe +0x136:  push   %ebp
0849abbf +0x137:  mov    %esp,%ebp
0849abc1 +0x139:  mov    0x8(%ebp),%eax
0849abc4 +0x13c:  pop    %ebp
0849abc5 +0x13d:  ret
0849abc6 +0x13e:  push   %ebp
0849abc7 +0x13f:  mov    %esp,%ebp
0849abc9 +0x141:  sub    $0x28,%esp
0849abcc +0x144:  jmp    0849abea <+0x162>
0849abce +0x146:  mov    0x8(%ebp),%eax
0849abd1 +0x149:  mov    %eax,(%esp)
0849abd4 +0x14c:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0849abd9 +0x151:  add    %eax,%eax
0849abdb +0x153:  mov    %eax,0x4(%esp)
0849abdf +0x157:  mov    0x8(%ebp),%eax
0849abe2 +0x15a:  mov    %eax,(%esp)
0849abe5 +0x15d:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0849abea +0x162:  movl   $0x89c,0x4(%esp)
0849abf2 +0x16a:  mov    0x8(%ebp),%eax
0849abf5 +0x16d:  mov    %eax,(%esp)
0849abf8 +0x170:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0849abfd +0x175:  xor    $0x1,%eax
0849ac00 +0x178:  test   %al,%al
0849ac02 +0x17a:  jne    0849abce <+0x146>
0849ac04 +0x17c:  mov    0x8(%ebp),%eax
0849ac07 +0x17f:  mov    0x8(%eax),%eax
0849ac0a +0x182:  mov    %eax,%edx
0849ac0c +0x184:  mov    0x8(%ebp),%eax
0849ac0f +0x187:  mov    0xc(%eax),%eax
0849ac12 +0x18a:  lea    (%edx,%eax,1),%eax
0849ac15 +0x18d:  mov    %eax,-0xc(%ebp)
0849ac18 +0x190:  movl   $0x89c,0x4(%esp)
0849ac20 +0x198:  mov    0x8(%ebp),%eax
0849ac23 +0x19b:  mov    %eax,(%esp)
0849ac26 +0x19e:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0849ac2b +0x1a3:  mov    -0xc(%ebp),%eax
0849ac2e +0x1a6:  leave
0849ac2f +0x1a7:  ret
```

## 反编译 C

```c
// <global>::global @ 0x849aa88

/* CExpandEquipslot::CExpandEquipslot() */

void CExpandEquipslot::_GLOBAL__I_CExpandEquipslot(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
