# ~CharacManageScript

`_ZN18CharacManageScriptD1Ev`

`CharacManageScript::~CharacManageScript()`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e07f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e07f6  _ZN18CharacManageScriptD1Ev
#           CharacManageScript::~CharacManageScript()
# range [0x088e07f6, 0x088e0903]
088e07f6 +0x000:  push   %ebp
088e07f7 +0x001:  mov    %esp,%ebp
088e07f9 +0x003:  push   %esi
088e07fa +0x004:  push   %ebx
088e07fb +0x005:  sub    $0x10,%esp
088e07fe +0x008:  mov    0x8(%ebp),%eax
088e0801 +0x00b:  add    $0x7c,%eax
088e0804 +0x00e:  mov    %eax,(%esp)
088e0807 +0x011:  call   088e14ea <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x211>  ; global constructors keyed to CharacManageScript::instance_+0x211
088e080c +0x016:  jmp    088e0826 <+0x30>
088e080e +0x018:  mov    %edx,%ebx
088e0810 +0x01a:  mov    %eax,%esi
088e0812 +0x01c:  mov    0x8(%ebp),%eax
088e0815 +0x01f:  add    $0x64,%eax
088e0818 +0x022:  mov    %eax,(%esp)
088e081b +0x025:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e0820 +0x02a:  mov    %esi,%eax
088e0822 +0x02c:  mov    %ebx,%edx
088e0824 +0x02e:  jmp    088e0836 <+0x40>
088e0826 +0x030:  mov    0x8(%ebp),%eax
088e0829 +0x033:  add    $0x64,%eax
088e082c +0x036:  mov    %eax,(%esp)
088e082f +0x039:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e0834 +0x03e:  jmp    088e084e <+0x58>
088e0836 +0x040:  mov    %edx,%ebx
088e0838 +0x042:  mov    %eax,%esi
088e083a +0x044:  mov    0x8(%ebp),%eax
088e083d +0x047:  add    $0x4c,%eax
088e0840 +0x04a:  mov    %eax,(%esp)
088e0843 +0x04d:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
088e0848 +0x052:  mov    %esi,%eax
088e084a +0x054:  mov    %ebx,%edx
088e084c +0x056:  jmp    088e085e <+0x68>
088e084e +0x058:  mov    0x8(%ebp),%eax
088e0851 +0x05b:  add    $0x4c,%eax
088e0854 +0x05e:  mov    %eax,(%esp)
088e0857 +0x061:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
088e085c +0x066:  jmp    088e0876 <+0x80>
088e085e +0x068:  mov    %edx,%ebx
088e0860 +0x06a:  mov    %eax,%esi
088e0862 +0x06c:  mov    0x8(%ebp),%eax
088e0865 +0x06f:  add    $0x30,%eax
088e0868 +0x072:  mov    %eax,(%esp)
088e086b +0x075:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e0870 +0x07a:  mov    %esi,%eax
088e0872 +0x07c:  mov    %ebx,%edx
088e0874 +0x07e:  jmp    088e0886 <+0x90>
088e0876 +0x080:  mov    0x8(%ebp),%eax
088e0879 +0x083:  add    $0x30,%eax
088e087c +0x086:  mov    %eax,(%esp)
088e087f +0x089:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e0884 +0x08e:  jmp    088e089e <+0xa8>
088e0886 +0x090:  mov    %edx,%ebx
088e0888 +0x092:  mov    %eax,%esi
088e088a +0x094:  mov    0x8(%ebp),%eax
088e088d +0x097:  add    $0x18,%eax
088e0890 +0x09a:  mov    %eax,(%esp)
088e0893 +0x09d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e0898 +0x0a2:  mov    %esi,%eax
088e089a +0x0a4:  mov    %ebx,%edx
088e089c +0x0a6:  jmp    088e08ae <+0xb8>
088e089e +0x0a8:  mov    0x8(%ebp),%eax
088e08a1 +0x0ab:  add    $0x18,%eax
088e08a4 +0x0ae:  mov    %eax,(%esp)
088e08a7 +0x0b1:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
088e08ac +0x0b6:  jmp    088e08c6 <+0xd0>
088e08ae +0x0b8:  mov    %edx,%ebx
088e08b0 +0x0ba:  mov    %eax,%esi
088e08b2 +0x0bc:  mov    0x8(%ebp),%eax
088e08b5 +0x0bf:  add    $0xc,%eax
088e08b8 +0x0c2:  mov    %eax,(%esp)
088e08bb +0x0c5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088e08c0 +0x0ca:  mov    %esi,%eax
088e08c2 +0x0cc:  mov    %ebx,%edx
088e08c4 +0x0ce:  jmp    088e08d6 <+0xe0>
088e08c6 +0x0d0:  mov    0x8(%ebp),%eax
088e08c9 +0x0d3:  add    $0xc,%eax
088e08cc +0x0d6:  mov    %eax,(%esp)
088e08cf +0x0d9:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
088e08d4 +0x0de:  jmp    088e08f1 <+0xfb>
088e08d6 +0x0e0:  mov    %edx,%ebx
088e08d8 +0x0e2:  mov    %eax,%esi
088e08da +0x0e4:  mov    0x8(%ebp),%eax
088e08dd +0x0e7:  mov    %eax,(%esp)
088e08e0 +0x0ea:  call   088e1478 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x19f>  ; global constructors keyed to CharacManageScript::instance_+0x19f
088e08e5 +0x0ef:  mov    %esi,%eax
088e08e7 +0x0f1:  mov    %ebx,%edx
088e08e9 +0x0f3:  mov    %eax,(%esp)
088e08ec +0x0f6:  call   08ae3750 <_Unwind_Resume>
088e08f1 +0x0fb:  mov    0x8(%ebp),%eax
088e08f4 +0x0fe:  mov    %eax,(%esp)
088e08f7 +0x101:  call   088e1478 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x19f>  ; global constructors keyed to CharacManageScript::instance_+0x19f
088e08fc +0x106:  add    $0x10,%esp
088e08ff +0x109:  pop    %ebx
088e0900 +0x10a:  pop    %esi
088e0901 +0x10b:  pop    %ebp
088e0902 +0x10c:  ret
088e0903 +0x10d:  nop
```

## 反编译 C

```c
// CharacManageScript::~CharacManageScript @ 0x88e07f6

/* CharacManageScript::~CharacManageScript() */

void __thiscall CharacManageScript::~CharacManageScript(CharacManageScript *this)

{
                    /* try { // try from 088e0807 to 088e080b has its CatchHandler @ 088e080e */
  std::vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>>::~vector
            ((vector<ContentsOptionRevision,std::allocator<ContentsOptionRevision>> *)(this + 0x7c))
  ;
                    /* try { // try from 088e082f to 088e0833 has its CatchHandler @ 088e0836 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 100));
                    /* try { // try from 088e0857 to 088e085b has its CatchHandler @ 088e085e */
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::~map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x4c));
                    /* try { // try from 088e087f to 088e0883 has its CatchHandler @ 088e0886 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 088e08a7 to 088e08ab has its CatchHandler @ 088e08ae */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
                    /* try { // try from 088e08cf to 088e08d3 has its CatchHandler @ 088e08d6 */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0xc));
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::~vector
            ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this);
  return;
}
```
