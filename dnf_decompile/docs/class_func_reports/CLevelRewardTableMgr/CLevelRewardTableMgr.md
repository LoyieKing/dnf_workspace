# CLevelRewardTableMgr

`_ZN20CLevelRewardTableMgrC1Ev`

`CLevelRewardTableMgr::CLevelRewardTableMgr()`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687710` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687710  _ZN20CLevelRewardTableMgrC1Ev
#           CLevelRewardTableMgr::CLevelRewardTableMgr()
# range [0x08687710, 0x0868777b]
08687710 +0x00:  push   %ebp
08687711 +0x01:  mov    %esp,%ebp
08687713 +0x03:  push   %esi
08687714 +0x04:  push   %ebx
08687715 +0x05:  sub    $0x10,%esp
08687718 +0x08:  mov    0x8(%ebp),%eax
0868771b +0x0b:  add    $0x8,%eax
0868771e +0x0e:  mov    %eax,(%esp)
08687721 +0x11:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08687726 +0x16:  mov    0x8(%ebp),%eax
08687729 +0x19:  movb   $0x0,(%eax)
0868772c +0x1c:  mov    0x8(%ebp),%eax
0868772f +0x1f:  movl   $0x0,0x4(%eax)
08687736 +0x26:  movl   $0x6088,(%esp)
0868773d +0x2d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08687742 +0x32:  mov    %eax,%ebx
08687744 +0x34:  mov    %ebx,%eax
08687746 +0x36:  mov    %eax,(%esp)
08687749 +0x39:  call   086975fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3e53>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3e53
0868774e +0x3e:  mov    %ebx,%edx
08687750 +0x40:  mov    0x8(%ebp),%eax
08687753 +0x43:  mov    %edx,0x4(%eax)
08687756 +0x46:  add    $0x10,%esp
08687759 +0x49:  pop    %ebx
0868775a +0x4a:  pop    %esi
0868775b +0x4b:  pop    %ebp
0868775c +0x4c:  ret
0868775d +0x4d:  mov    %edx,%ebx
0868775f +0x4f:  mov    %eax,%esi
08687761 +0x51:  mov    0x8(%ebp),%eax
08687764 +0x54:  add    $0x8,%eax
08687767 +0x57:  mov    %eax,(%esp)
0868776a +0x5a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0868776f +0x5f:  mov    %esi,%eax
08687771 +0x61:  mov    %ebx,%edx
08687773 +0x63:  mov    %eax,(%esp)
08687776 +0x66:  call   08ae3750 <_Unwind_Resume>
0868777b +0x6b:  nop
```

## 反编译 C

```c
// CLevelRewardTableMgr::CLevelRewardTableMgr @ 0x8687710

/* CLevelRewardTableMgr::CLevelRewardTableMgr() */

void __thiscall CLevelRewardTableMgr::CLevelRewardTableMgr(CLevelRewardTableMgr *this)

{
  CLevelRewardTable *this_00;
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 8));
  *this = (CLevelRewardTableMgr)0x0;
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 0868773d to 08687741 has its CatchHandler @ 0868775d */
  this_00 = operator_new(0x6088);
  CLevelRewardTable::CLevelRewardTable(this_00);
  *(CLevelRewardTable **)(this + 4) = this_00;
  return;
}
```
