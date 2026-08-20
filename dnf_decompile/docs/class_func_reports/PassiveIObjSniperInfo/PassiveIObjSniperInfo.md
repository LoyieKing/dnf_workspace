# PassiveIObjSniperInfo

`_ZN21PassiveIObjSniperInfoC1Ev`

`PassiveIObjSniperInfo::PassiveIObjSniperInfo()`

| 类 | 地址 |
|---|---|
| `PassiveIObjSniperInfo` | `0x08a3af0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a3af0c  _ZN21PassiveIObjSniperInfoC1Ev
#           PassiveIObjSniperInfo::PassiveIObjSniperInfo()
# range [0x08a3af0c, 0x08a3afbf]
08a3af0c +0x00:  push   %ebp
08a3af0d +0x01:  mov    %esp,%ebp
08a3af0f +0x03:  push   %esi
08a3af10 +0x04:  push   %ebx
08a3af11 +0x05:  sub    $0x10,%esp
08a3af14 +0x08:  mov    0x8(%ebp),%eax
08a3af17 +0x0b:  mov    %eax,(%esp)
08a3af1a +0x0e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3af1f +0x13:  mov    0x8(%ebp),%eax
08a3af22 +0x16:  add    $0xc,%eax
08a3af25 +0x19:  mov    %eax,(%esp)
08a3af28 +0x1c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3af2d +0x21:  mov    0x8(%ebp),%eax
08a3af30 +0x24:  add    $0x18,%eax
08a3af33 +0x27:  mov    %eax,(%esp)
08a3af36 +0x2a:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3af3b +0x2f:  mov    0x8(%ebp),%eax
08a3af3e +0x32:  add    $0x24,%eax
08a3af41 +0x35:  mov    %eax,(%esp)
08a3af44 +0x38:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a3af49 +0x3d:  mov    0x8(%ebp),%eax
08a3af4c +0x40:  mov    %eax,(%esp)
08a3af4f +0x43:  call   08a3afc0 <_ZN21PassiveIObjSniperInfo5clearEv>  ; PassiveIObjSniperInfo::clear()
08a3af54 +0x48:  jmp    08a3afb9 <+0xad>
08a3af56 +0x4a:  mov    %edx,%ebx
08a3af58 +0x4c:  mov    %eax,%esi
08a3af5a +0x4e:  mov    0x8(%ebp),%eax
08a3af5d +0x51:  add    $0x24,%eax
08a3af60 +0x54:  mov    %eax,(%esp)
08a3af63 +0x57:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3af68 +0x5c:  mov    %esi,%eax
08a3af6a +0x5e:  mov    %ebx,%edx
08a3af6c +0x60:  jmp    08a3af6e <+0x62>
08a3af6e +0x62:  mov    %edx,%ebx
08a3af70 +0x64:  mov    %eax,%esi
08a3af72 +0x66:  mov    0x8(%ebp),%eax
08a3af75 +0x69:  add    $0x18,%eax
08a3af78 +0x6c:  mov    %eax,(%esp)
08a3af7b +0x6f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3af80 +0x74:  mov    %esi,%eax
08a3af82 +0x76:  mov    %ebx,%edx
08a3af84 +0x78:  jmp    08a3af86 <+0x7a>
08a3af86 +0x7a:  mov    %edx,%ebx
08a3af88 +0x7c:  mov    %eax,%esi
08a3af8a +0x7e:  mov    0x8(%ebp),%eax
08a3af8d +0x81:  add    $0xc,%eax
08a3af90 +0x84:  mov    %eax,(%esp)
08a3af93 +0x87:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3af98 +0x8c:  mov    %esi,%eax
08a3af9a +0x8e:  mov    %ebx,%edx
08a3af9c +0x90:  jmp    08a3af9e <+0x92>
08a3af9e +0x92:  mov    %edx,%ebx
08a3afa0 +0x94:  mov    %eax,%esi
08a3afa2 +0x96:  mov    0x8(%ebp),%eax
08a3afa5 +0x99:  mov    %eax,(%esp)
08a3afa8 +0x9c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a3afad +0xa1:  mov    %esi,%eax
08a3afaf +0xa3:  mov    %ebx,%edx
08a3afb1 +0xa5:  mov    %eax,(%esp)
08a3afb4 +0xa8:  call   08ae3750 <_Unwind_Resume>
08a3afb9 +0xad:  add    $0x10,%esp
08a3afbc +0xb0:  pop    %ebx
08a3afbd +0xb1:  pop    %esi
08a3afbe +0xb2:  pop    %ebp
08a3afbf +0xb3:  ret
```

## 反编译 C

```c
// PassiveIObjSniperInfo::PassiveIObjSniperInfo @ 0x8a3af0c

/* PassiveIObjSniperInfo::PassiveIObjSniperInfo() */

void __thiscall PassiveIObjSniperInfo::PassiveIObjSniperInfo(PassiveIObjSniperInfo *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)this);
                    /* try { // try from 08a3af28 to 08a3af2c has its CatchHandler @ 08a3af9e */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
                    /* try { // try from 08a3af36 to 08a3af3a has its CatchHandler @ 08a3af86 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x18));
                    /* try { // try from 08a3af44 to 08a3af48 has its CatchHandler @ 08a3af6e */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x24));
                    /* try { // try from 08a3af4f to 08a3af53 has its CatchHandler @ 08a3af56 */
  clear(this);
  return;
}
```
