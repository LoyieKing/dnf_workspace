# ~STEquipmentPartSetData

`_ZN22STEquipmentPartSetDataD1Ev`

`STEquipmentPartSetData::~STEquipmentPartSetData()`

| 类 | 地址 |
|---|---|
| `STEquipmentPartSetData` | `0x08907348` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08907348  _ZN22STEquipmentPartSetDataD1Ev
#           STEquipmentPartSetData::~STEquipmentPartSetData()
# range [0x08907348, 0x089073d8]
08907348 +0x00:  push   %ebp
08907349 +0x01:  mov    %esp,%ebp
0890734b +0x03:  push   %esi
0890734c +0x04:  push   %ebx
0890734d +0x05:  sub    $0x10,%esp
08907350 +0x08:  mov    0x8(%ebp),%eax
08907353 +0x0b:  mov    0x8(%eax),%eax
08907356 +0x0e:  test   %eax,%eax
08907358 +0x10:  je     08907374 <+0x2c>
0890735a +0x12:  mov    0x8(%ebp),%eax
0890735d +0x15:  mov    0x8(%eax),%ebx
08907360 +0x18:  test   %ebx,%ebx
08907362 +0x1a:  je     08907374 <+0x2c>
08907364 +0x1c:  mov    %ebx,(%esp)
08907367 +0x1f:  call   0898e298 <_ZN17STEquipmentScriptD1Ev>  ; STEquipmentScript::~STEquipmentScript()
0890736c +0x24:  mov    %ebx,(%esp)
0890736f +0x27:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08907374 +0x2c:  mov    0x8(%ebp),%eax
08907377 +0x2f:  movl   $0x0,0x8(%eax)
0890737e +0x36:  mov    0x8(%ebp),%eax
08907381 +0x39:  add    $0xc,%eax
08907384 +0x3c:  mov    %eax,(%esp)
08907387 +0x3f:  call   0891d226 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x3f05>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x3f05
0890738c +0x44:  jmp    089073c4 <+0x7c>
0890738e +0x46:  mov    %edx,%ebx
08907390 +0x48:  mov    %eax,%esi
08907392 +0x4a:  mov    0x8(%ebp),%eax
08907395 +0x4d:  add    $0xc,%eax
08907398 +0x50:  mov    %eax,(%esp)
0890739b +0x53:  call   0891d226 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x3f05>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x3f05
089073a0 +0x58:  mov    %esi,%eax
089073a2 +0x5a:  mov    %ebx,%edx
089073a4 +0x5c:  jmp    089073a6 <+0x5e>
089073a6 +0x5e:  mov    %edx,%ebx
089073a8 +0x60:  mov    %eax,%esi
089073aa +0x62:  mov    0x8(%ebp),%eax
089073ad +0x65:  add    $0x4,%eax
089073b0 +0x68:  mov    %eax,(%esp)
089073b3 +0x6b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089073b8 +0x70:  mov    %esi,%eax
089073ba +0x72:  mov    %ebx,%edx
089073bc +0x74:  mov    %eax,(%esp)
089073bf +0x77:  call   08ae3750 <_Unwind_Resume>
089073c4 +0x7c:  mov    0x8(%ebp),%eax
089073c7 +0x7f:  add    $0x4,%eax
089073ca +0x82:  mov    %eax,(%esp)
089073cd +0x85:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
089073d2 +0x8a:  add    $0x10,%esp
089073d5 +0x8d:  pop    %ebx
089073d6 +0x8e:  pop    %esi
089073d7 +0x8f:  pop    %ebp
089073d8 +0x90:  ret
```

## 反编译 C

```c
// STEquipmentPartSetData::~STEquipmentPartSetData @ 0x8907348

/* STEquipmentPartSetData::~STEquipmentPartSetData() */

void __thiscall STEquipmentPartSetData::~STEquipmentPartSetData(STEquipmentPartSetData *this)

{
  STEquipmentScript *this_00;
  
  if ((*(int *)(this + 8) != 0) &&
     (this_00 = *(STEquipmentScript **)(this + 8), this_00 != (STEquipmentScript *)0x0)) {
                    /* try { // try from 08907367 to 0890736b has its CatchHandler @ 0890738e */
    STEquipmentScript::~STEquipmentScript(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08907387 to 0890738b has its CatchHandler @ 089073a6 */
  std::vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>>::~vector
            ((vector<STEquipmentPartSetPiece,std::allocator<STEquipmentPartSetPiece>> *)(this + 0xc)
            );
  std::string::~string((string *)(this + 4));
  return;
}
```
