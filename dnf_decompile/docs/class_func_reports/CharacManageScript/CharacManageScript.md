# CharacManageScript

`_ZN18CharacManageScriptC1Ev`

`CharacManageScript::CharacManageScript()`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e06cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e06cc  _ZN18CharacManageScriptC1Ev
#           CharacManageScript::CharacManageScript()
# range [0x088e06cc, 0x088e07f5]
088e06cc +0x000:  push   %ebp
088e06cd +0x001:  mov    %esp,%ebp
088e06cf +0x003:  push   %esi
088e06d0 +0x004:  push   %ebx
088e06d1 +0x005:  sub    $0x10,%esp
088e06d4 +0x008:  mov    0x8(%ebp),%eax
088e06d7 +0x00b:  mov    %eax,(%esp)
088e06da +0x00e:  call   088e1464 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x18b>  ; global constructors keyed to CharacManageScript::instance_+0x18b
088e06df +0x013:  mov    0x8(%ebp),%eax
088e06e2 +0x016:  add    $0xc,%eax
088e06e5 +0x019:  mov    %eax,(%esp)
088e06e8 +0x01c:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
088e06ed +0x021:  mov    0x8(%ebp),%eax
088e06f0 +0x024:  add    $0x18,%eax
088e06f3 +0x027:  mov    %eax,(%esp)
088e06f6 +0x02a:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088e06fb +0x02f:  mov    0x8(%ebp),%eax
088e06fe +0x032:  add    $0x30,%eax
088e0701 +0x035:  mov    %eax,(%esp)
088e0704 +0x038:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088e0709 +0x03d:  mov    0x8(%ebp),%eax
088e070c +0x040:  add    $0x4c,%eax
088e070f +0x043:  mov    %eax,(%esp)
088e0712 +0x046:  call   080c6bea <_GLOBAL__I_g_ServerString_+0x155>  ; global constructors keyed to g_ServerString_+0x155
088e0717 +0x04b:  mov    0x8(%ebp),%eax
088e071a +0x04e:  add    $0x64,%eax
088e071d +0x051:  mov    %eax,(%esp)
088e0720 +0x054:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
088e0725 +0x059:  mov    0x8(%ebp),%eax
088e0728 +0x05c:  add    $0x7c,%eax
088e072b +0x05f:  mov    %eax,(%esp)
088e072e +0x062:  call   088e14d6 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x1fd>  ; global constructors keyed to CharacManageScript::instance_+0x1fd
088e0733 +0x067:  mov    0x8(%ebp),%eax
088e0736 +0x06a:  mov    %eax,(%esp)
088e0739 +0x06d:  call   088e0904 <_ZN18CharacManageScript5clearEv>  ; CharacManageScript::clear()
088e073e +0x072:  jmp    088e07ee <+0x122>
088e0743 +0x077:  mov    %edx,%ebx
088e0745 +0x079:  mov    %eax,%esi
088e0747 +0x07b:  mov    0x8(%ebp),%eax
088e074a +0x07e:  add    $0x7c,%eax
088e074d +0x081:  mov    %eax,(%esp)
088e0750 +0x084:  call   088e14ea <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x211>  ; global constructors keyed to CharacManageScript::instance_+0x211
088e0755 +0x089:  mov    %esi,%eax
088e0757 +0x08b:  mov    %ebx,%edx
088e0759 +0x08d:  jmp    088e075b <+0x8f>
088e075b +0x08f:  mov    %edx,%ebx
088e075d +0x091:  mov    %eax,%esi
088e075f +0x093:  mov    0x8(%ebp),%eax
088e0762 +0x096:  add    $0x64,%eax
088e0765 +0x099:  mov    %eax,(%esp)
088e0768 +0x09c:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e076d +0x0a1:  mov    %esi,%eax
088e076f +0x0a3:  mov    %ebx,%edx
088e0771 +0x0a5:  jmp    088e0773 <+0xa7>
088e0773 +0x0a7:  mov    %edx,%ebx
088e0775 +0x0a9:  mov    %eax,%esi
088e0777 +0x0ab:  mov    0x8(%ebp),%eax
088e077a +0x0ae:  add    $0x4c,%eax
088e077d +0x0b1:  mov    %eax,(%esp)
088e0780 +0x0b4:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
088e0785 +0x0b9:  mov    %esi,%eax
088e0787 +0x0bb:  mov    %ebx,%edx
088e0789 +0x0bd:  jmp    088e078b <+0xbf>
088e078b +0x0bf:  mov    %edx,%ebx
088e078d +0x0c1:  mov    %eax,%esi
088e078f +0x0c3:  mov    0x8(%ebp),%eax
088e0792 +0x0c6:  add    $0x30,%eax
088e0795 +0x0c9:  mov    %eax,(%esp)
088e0798 +0x0cc:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e079d +0x0d1:  mov    %esi,%eax
088e079f +0x0d3:  mov    %ebx,%edx
088e07a1 +0x0d5:  jmp    088e07a3 <+0xd7>
088e07a3 +0x0d7:  mov    %edx,%ebx
088e07a5 +0x0d9:  mov    %eax,%esi
088e07a7 +0x0db:  mov    0x8(%ebp),%eax
088e07aa +0x0de:  add    $0x18,%eax
088e07ad +0x0e1:  mov    %eax,(%esp)
088e07b0 +0x0e4:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e07b5 +0x0e9:  mov    %esi,%eax
088e07b7 +0x0eb:  mov    %ebx,%edx
088e07b9 +0x0ed:  jmp    088e07bb <+0xef>
088e07bb +0x0ef:  mov    %edx,%ebx
088e07bd +0x0f1:  mov    %eax,%esi
088e07bf +0x0f3:  mov    0x8(%ebp),%eax
088e07c2 +0x0f6:  add    $0xc,%eax
088e07c5 +0x0f9:  mov    %eax,(%esp)
088e07c8 +0x0fc:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088e07cd +0x101:  mov    %esi,%eax
088e07cf +0x103:  mov    %ebx,%edx
088e07d1 +0x105:  jmp    088e07d3 <+0x107>
088e07d3 +0x107:  mov    %edx,%ebx
088e07d5 +0x109:  mov    %eax,%esi
088e07d7 +0x10b:  mov    0x8(%ebp),%eax
088e07da +0x10e:  mov    %eax,(%esp)
088e07dd +0x111:  call   088e1478 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x19f>  ; global constructors keyed to CharacManageScript::instance_+0x19f
088e07e2 +0x116:  mov    %esi,%eax
088e07e4 +0x118:  mov    %ebx,%edx
088e07e6 +0x11a:  mov    %eax,(%esp)
088e07e9 +0x11d:  call   08ae3750 <_Unwind_Resume>
088e07ee +0x122:  add    $0x10,%esp
088e07f1 +0x125:  pop    %ebx
088e07f2 +0x126:  pop    %esi
088e07f3 +0x127:  pop    %ebp
088e07f4 +0x128:  ret
088e07f5 +0x129:  nop
```

## 反编译 C

```c
// CharacManageScript::CharacManageScript @ 0x88e06cc

/* CharacManageScript::CharacManageScript() */

void __thiscall CharacManageScript::CharacManageScript(CharacManageScript *this)

{
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::vector
            ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this);
                    /* try { // try from 088e06e8 to 088e06ec has its CatchHandler @ 088e07d3 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0xc));
                    /* try { // try from 088e06f6 to 088e06fa has its CatchHandler @ 088e07bb */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
                    /* try { // try from 088e0704 to 088e0708 has its CatchHandler @ 088e07a3 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 088e0712 to 088e0716 has its CatchHandler @ 088e078b */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x4c));
                    /* try { // try from 088e0720 to 088e0724 has its CatchHandler @ 088e0773 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 100));
                    /* try { // try from 088e072e to 088e0732 has its CatchHandler @ 088e075b */
  std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::vector
            ((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>> *)(this + 0x7c))
  ;
                    /* try { // try from 088e0739 to 088e073d has its CatchHandler @ 088e0743 */
  clear(this);
  return;
}
```
