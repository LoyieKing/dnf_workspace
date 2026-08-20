# clear

`_ZN22EquipmentAniInfoScript5clearEv`

`EquipmentAniInfoScript::clear()`

| 类 | 地址 |
|---|---|
| `EquipmentAniInfoScript` | `0x0898d142` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d142  _ZN22EquipmentAniInfoScript5clearEv
#           EquipmentAniInfoScript::clear()
# range [0x0898d142, 0x0898d1fb]
0898d142 +0x00:  push   %ebp
0898d143 +0x01:  mov    %esp,%ebp
0898d145 +0x03:  sub    $0x18,%esp
0898d148 +0x06:  mov    0x8(%ebp),%eax
0898d14b +0x09:  mov    %eax,(%esp)
0898d14e +0x0c:  call   089c53a4 <_GLOBAL__I_g_npcNameVector+0x277f>  ; global constructors keyed to g_npcNameVector+0x277f
0898d153 +0x11:  mov    0x8(%ebp),%eax
0898d156 +0x14:  movl   $0xffffffff,0xc(%eax)
0898d15d +0x1b:  mov    0x8(%ebp),%eax
0898d160 +0x1e:  movl   $0xffffffff,0x10(%eax)
0898d167 +0x25:  mov    0x8(%ebp),%eax
0898d16a +0x28:  add    $0x18,%eax
0898d16d +0x2b:  mov    %eax,(%esp)
0898d170 +0x2e:  call   089c53a4 <_GLOBAL__I_g_npcNameVector+0x277f>  ; global constructors keyed to g_npcNameVector+0x277f
0898d175 +0x33:  mov    0x8(%ebp),%eax
0898d178 +0x36:  movl   $0xffffffff,0x24(%eax)
0898d17f +0x3d:  mov    0x8(%ebp),%eax
0898d182 +0x40:  movl   $0x1,0x28(%eax)
0898d189 +0x47:  mov    0x8(%ebp),%eax
0898d18c +0x4a:  movl   $0x0,0x2c(%eax)
0898d193 +0x51:  mov    0x8(%ebp),%eax
0898d196 +0x54:  movl   $0xffffffff,0x30(%eax)
0898d19d +0x5b:  mov    0x8(%ebp),%eax
0898d1a0 +0x5e:  movl   $0xffffffff,0x34(%eax)
0898d1a7 +0x65:  mov    0x8(%ebp),%eax
0898d1aa +0x68:  add    $0x4c,%eax
0898d1ad +0x6b:  mov    %eax,(%esp)
0898d1b0 +0x6e:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
0898d1b5 +0x73:  mov    0x8(%ebp),%eax
0898d1b8 +0x76:  movl   $0x0,0x38(%eax)
0898d1bf +0x7d:  mov    0x8(%ebp),%eax
0898d1c2 +0x80:  movl   $0x0,0x3c(%eax)
0898d1c9 +0x87:  mov    0x8(%ebp),%eax
0898d1cc +0x8a:  add    $0x40,%eax
0898d1cf +0x8d:  mov    %eax,(%esp)
0898d1d2 +0x90:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
0898d1d7 +0x95:  mov    0x8(%ebp),%eax
0898d1da +0x98:  movb   $0x0,0x14(%eax)
0898d1de +0x9c:  mov    0x8(%ebp),%eax
0898d1e1 +0x9f:  add    $0x50,%eax
0898d1e4 +0xa2:  mov    %eax,(%esp)
0898d1e7 +0xa5:  call   089c53c0 <_GLOBAL__I_g_npcNameVector+0x279b>  ; global constructors keyed to g_npcNameVector+0x279b
0898d1ec +0xaa:  mov    0x8(%ebp),%eax
0898d1ef +0xad:  add    $0x5c,%eax
0898d1f2 +0xb0:  mov    %eax,(%esp)
0898d1f5 +0xb3:  call   089c53dc <_GLOBAL__I_g_npcNameVector+0x27b7>  ; global constructors keyed to g_npcNameVector+0x27b7
0898d1fa +0xb8:  leave
0898d1fb +0xb9:  ret
```

## 反编译 C

```c
// EquipmentAniInfoScript::clear @ 0x898d142

/* EquipmentAniInfoScript::clear() */

void __thiscall EquipmentAniInfoScript::clear(EquipmentAniInfoScript *this)

{
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::clear
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)this);
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::clear
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)(this + 0x18));
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  std::string::clear((string *)(this + 0x4c));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  this[0x14] = (EquipmentAniInfoScript)0x0;
  std::vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>>::clear
            ((vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>> *)(this + 0x50));
  std::
  vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
  ::clear((vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
           *)(this + 0x5c));
  return;
}
```
