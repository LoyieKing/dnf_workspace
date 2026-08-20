# CDataMgr

`_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev`

`global constructors keyed to charac_expand::CDataMgr::CDataMgr()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to charac_expand::CDataMgr` | `0x0832ae63` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ae63  _GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev
#           global constructors keyed to charac_expand::CDataMgr::CDataMgr()
# range [0x0832ae63, 0x0832b04f]
0832ae63 +0x000:  push   %ebp
0832ae64 +0x001:  mov    %esp,%ebp
0832ae66 +0x003:  sub    $0x18,%esp
0832ae69 +0x006:  movl   $0xffff,0x4(%esp)
0832ae71 +0x00e:  movl   $0x1,(%esp)
0832ae78 +0x015:  call   0832ae23 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0832ae7d +0x01a:  leave
0832ae7e +0x01b:  ret
0832ae7f +0x01c:  nop
0832ae80 +0x01d:  push   %ebp
0832ae81 +0x01e:  mov    %esp,%ebp
0832ae83 +0x020:  mov    0x8(%ebp),%eax
0832ae86 +0x023:  movzbl 0x4(%eax),%eax
0832ae8a +0x027:  pop    %ebp
0832ae8b +0x028:  ret
0832ae8c +0x029:  push   %ebp
0832ae8d +0x02a:  mov    %esp,%ebp
0832ae8f +0x02c:  sub    $0x28,%esp
0832ae92 +0x02f:  mov    0x8(%ebp),%eax
0832ae95 +0x032:  mov    (%eax),%eax
0832ae97 +0x034:  add    $0x18,%eax
0832ae9a +0x037:  mov    (%eax),%edx
0832ae9c +0x039:  mov    0xc(%ebp),%eax
0832ae9f +0x03c:  mov    %eax,0x4(%esp)
0832aea3 +0x040:  mov    0x8(%ebp),%eax
0832aea6 +0x043:  mov    %eax,(%esp)
0832aea9 +0x046:  call   *%edx
0832aeab +0x048:  mov    %al,-0x9(%ebp)
0832aeae +0x04b:  mov    0x8(%ebp),%eax
0832aeb1 +0x04e:  movb   $0x0,0x4(%eax)
0832aeb5 +0x052:  movzbl -0x9(%ebp),%eax
0832aeb9 +0x056:  leave
0832aeba +0x057:  ret
0832aebb +0x058:  nop
0832aebc +0x059:  push   %ebp
0832aebd +0x05a:  mov    %esp,%ebp
0832aebf +0x05c:  sub    $0x18,%esp
0832aec2 +0x05f:  mov    0x8(%ebp),%eax
0832aec5 +0x062:  movb   $0x0,0x4(%eax)
0832aec9 +0x066:  mov    0x8(%ebp),%eax
0832aecc +0x069:  mov    (%eax),%eax
0832aece +0x06b:  add    $0x1c,%eax
0832aed1 +0x06e:  mov    (%eax),%edx
0832aed3 +0x070:  mov    0x8(%ebp),%eax
0832aed6 +0x073:  mov    %eax,(%esp)
0832aed9 +0x076:  call   *%edx
0832aedb +0x078:  leave
0832aedc +0x079:  ret
0832aedd +0x07a:  nop
0832aede +0x07b:  push   %ebp
0832aedf +0x07c:  mov    %esp,%ebp
0832aee1 +0x07e:  mov    0x8(%ebp),%eax
0832aee4 +0x081:  movw   $0x0,(%eax)
0832aee9 +0x086:  mov    0x8(%ebp),%eax
0832aeec +0x089:  movw   $0x0,0x2(%eax)
0832aef2 +0x08f:  mov    0x8(%ebp),%eax
0832aef5 +0x092:  movw   $0x0,0x4(%eax)
0832aefb +0x098:  mov    0x8(%ebp),%eax
0832aefe +0x09b:  movw   $0x0,0x6(%eax)
0832af04 +0x0a1:  pop    %ebp
0832af05 +0x0a2:  ret
0832af06 +0x0a3:  push   %ebp
0832af07 +0x0a4:  mov    %esp,%ebp
0832af09 +0x0a6:  push   %esi
0832af0a +0x0a7:  push   %ebx
0832af0b +0x0a8:  sub    $0x10,%esp
0832af0e +0x0ab:  mov    0x8(%ebp),%eax
0832af11 +0x0ae:  mov    %eax,(%esp)
0832af14 +0x0b1:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0832af19 +0x0b6:  mov    0x8(%ebp),%eax
0832af1c +0x0b9:  movl   $&_ZTV12CBoosterGage+0x8,(%eax)
0832af22 +0x0bf:  mov    0x8(%ebp),%eax
0832af25 +0x0c2:  mov    %eax,(%esp)
0832af28 +0x0c5:  call   080dd468 <_ZN12CBoosterGage6_resetEv>  ; CBoosterGage::_reset()
0832af2d +0x0ca:  jmp    0832af4a <+0xe7>
0832af2f +0x0cc:  mov    %edx,%ebx
0832af31 +0x0ce:  mov    %eax,%esi
0832af33 +0x0d0:  mov    0x8(%ebp),%eax
0832af36 +0x0d3:  mov    %eax,(%esp)
0832af39 +0x0d6:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0832af3e +0x0db:  mov    %esi,%eax
0832af40 +0x0dd:  mov    %ebx,%edx
0832af42 +0x0df:  mov    %eax,(%esp)
0832af45 +0x0e2:  call   08ae3750 <_Unwind_Resume>
0832af4a +0x0e7:  add    $0x10,%esp
0832af4d +0x0ea:  pop    %ebx
0832af4e +0x0eb:  pop    %esi
0832af4f +0x0ec:  pop    %ebp
0832af50 +0x0ed:  ret
0832af51 +0x0ee:  nop
0832af52 +0x0ef:  push   %ebp
0832af53 +0x0f0:  mov    %esp,%ebp
0832af55 +0x0f2:  sub    $0x18,%esp
0832af58 +0x0f5:  mov    0x8(%ebp),%eax
0832af5b +0x0f8:  mov    %eax,(%esp)
0832af5e +0x0fb:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0832af63 +0x100:  mov    0x8(%ebp),%eax
0832af66 +0x103:  movl   $&_ZTVN10expert_job16CCharacExpertJobE+0x8,(%eax)
0832af6c +0x109:  leave
0832af6d +0x10a:  ret
0832af6e +0x10b:  push   %ebp
0832af6f +0x10c:  mov    %esp,%ebp
0832af71 +0x10e:  sub    $0x18,%esp
0832af74 +0x111:  mov    0x8(%ebp),%eax
0832af77 +0x114:  mov    %eax,(%esp)
0832af7a +0x117:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0832af7f +0x11c:  mov    0x8(%ebp),%eax
0832af82 +0x11f:  movl   $&_ZTV19CCharacBloodDungeon+0x8,(%eax)
0832af88 +0x125:  leave
0832af89 +0x126:  ret
0832af8a +0x127:  push   %ebp
0832af8b +0x128:  mov    %esp,%ebp
0832af8d +0x12a:  push   %esi
0832af8e +0x12b:  push   %ebx
0832af8f +0x12c:  sub    $0x10,%esp
0832af92 +0x12f:  mov    0x8(%ebp),%eax
0832af95 +0x132:  mov    %eax,(%esp)
0832af98 +0x135:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
0832af9d +0x13a:  mov    0x8(%ebp),%eax
0832afa0 +0x13d:  movl   $&_ZTV19CMissionList_Charac+0x8,(%eax)
0832afa6 +0x143:  mov    0x8(%ebp),%eax
0832afa9 +0x146:  add    $0x5,%eax
0832afac +0x149:  mov    %eax,%ebx
0832afae +0x14b:  mov    $0x23,%esi
0832afb3 +0x150:  jmp    0832afc3 <+0x160>
0832afb5 +0x152:  mov    %ebx,(%esp)
0832afb8 +0x155:  call   0832aede <+0x7b>
0832afbd +0x15a:  add    $0x8,%ebx
0832afc0 +0x15d:  sub    $0x1,%esi
0832afc3 +0x160:  cmp    $0xffffffff,%esi
0832afc6 +0x163:  setne  %al
0832afc9 +0x166:  test   %al,%al
0832afcb +0x168:  jne    0832afb5 <+0x152>
0832afcd +0x16a:  mov    0x8(%ebp),%eax
0832afd0 +0x16d:  add    $0x128,%eax
0832afd5 +0x172:  mov    %eax,(%esp)
0832afd8 +0x175:  call   0832b002 <+0x19f>
0832afdd +0x17a:  jmp    0832affa <+0x197>
0832afdf +0x17c:  mov    %edx,%ebx
0832afe1 +0x17e:  mov    %eax,%esi
0832afe3 +0x180:  mov    0x8(%ebp),%eax
0832afe6 +0x183:  mov    %eax,(%esp)
0832afe9 +0x186:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0832afee +0x18b:  mov    %esi,%eax
0832aff0 +0x18d:  mov    %ebx,%edx
0832aff2 +0x18f:  mov    %eax,(%esp)
0832aff5 +0x192:  call   08ae3750 <_Unwind_Resume>
0832affa +0x197:  add    $0x10,%esp
0832affd +0x19a:  pop    %ebx
0832affe +0x19b:  pop    %esi
0832afff +0x19c:  pop    %ebp
0832b000 +0x19d:  ret
0832b001 +0x19e:  nop
0832b002 +0x19f:  push   %ebp
0832b003 +0x1a0:  mov    %esp,%ebp
0832b005 +0x1a2:  sub    $0x18,%esp
0832b008 +0x1a5:  mov    0x8(%ebp),%eax
0832b00b +0x1a8:  mov    %eax,(%esp)
0832b00e +0x1ab:  call   0832b016 <+0x1b3>
0832b013 +0x1b0:  leave
0832b014 +0x1b1:  ret
0832b015 +0x1b2:  nop
0832b016 +0x1b3:  push   %ebp
0832b017 +0x1b4:  mov    %esp,%ebp
0832b019 +0x1b6:  sub    $0x18,%esp
0832b01c +0x1b9:  mov    0x8(%ebp),%eax
0832b01f +0x1bc:  mov    %eax,(%esp)
0832b022 +0x1bf:  call   0832b02a <+0x1c7>
0832b027 +0x1c4:  leave
0832b028 +0x1c5:  ret
0832b029 +0x1c6:  nop
0832b02a +0x1c7:  push   %ebp
0832b02b +0x1c8:  mov    %esp,%ebp
0832b02d +0x1ca:  sub    $0x18,%esp
0832b030 +0x1cd:  mov    0x8(%ebp),%eax
0832b033 +0x1d0:  movl   $0x20,0x8(%esp)
0832b03b +0x1d8:  movl   $0x0,0x4(%esp)
0832b043 +0x1e0:  mov    %eax,(%esp)
0832b046 +0x1e3:  call   0807dcc0 <_init+0x5b8>
0832b04b +0x1e8:  leave
0832b04c +0x1e9:  ret
0832b04d +0x1ea:  nop
0832b04e +0x1eb:  nop
0832b04f +0x1ec:  nop
```

## 反编译 C

```c
// <global>::global @ 0x832ae63

/* charac_expand::CDataMgr::CDataMgr() */

void charac_expand::CDataMgr::_GLOBAL__I_CDataMgr(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
