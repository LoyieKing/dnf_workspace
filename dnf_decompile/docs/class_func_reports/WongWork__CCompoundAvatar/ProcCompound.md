# ProcCompound

`_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR`

`WongWork::CCompoundAvatar::ProcCompound(CUser*, MSG_COMPOUND_AVATAR const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x083338c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083338c2  _ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR
#           WongWork::CCompoundAvatar::ProcCompound(CUser*, MSG_COMPOUND_AVATAR const*)
# range [0x083338c2, 0x08333a75]
083338c2 +0x000:  push   %ebp
083338c3 +0x001:  mov    %esp,%ebp
083338c5 +0x003:  push   %esi
083338c6 +0x004:  push   %ebx
083338c7 +0x005:  sub    $0x110,%esp
083338cd +0x00b:  lea    -0x100(%ebp),%eax
083338d3 +0x011:  mov    0x10(%ebp),%edx
083338d6 +0x014:  mov    %edx,0xc(%esp)
083338da +0x018:  mov    0xc(%ebp),%edx
083338dd +0x01b:  mov    %edx,0x8(%esp)
083338e1 +0x01f:  mov    0x8(%ebp),%edx
083338e4 +0x022:  mov    %edx,0x4(%esp)
083338e8 +0x026:  mov    %eax,(%esp)
083338eb +0x029:  call   08331efe <_ZNK8WongWork15CCompoundAvatar17_MakeCompoundInfoEPK5CUserPK19MSG_COMPOUND_AVATAR>  ; WongWork::CCompoundAvatar::_MakeCompoundInfo(CUser const*, MSG_COMPOUND_AVATAR const*) const
083338f0 +0x02e:  sub    $0x4,%esp
083338f3 +0x031:  movl   $0x0,-0x14(%ebp)
083338fa +0x038:  lea    -0x100(%ebp),%eax
08333900 +0x03e:  mov    %eax,0x8(%esp)
08333904 +0x042:  mov    0xc(%ebp),%eax
08333907 +0x045:  mov    %eax,0x4(%esp)
0833390b +0x049:  mov    0x8(%ebp),%eax
0833390e +0x04c:  mov    %eax,(%esp)
08333911 +0x04f:  call   0833260c <_ZNK8WongWork15CCompoundAvatar15_CheckConditionEPK5CUserRKNS0_15tagCompoundInfoE>  ; WongWork::CCompoundAvatar::_CheckCondition(CUser const*, WongWork::CCompoundAvatar::tagCompoundInfo const&) const
08333916 +0x054:  mov    %eax,-0x14(%ebp)
08333919 +0x057:  cmpl   $0x0,-0x14(%ebp)
0833391d +0x05b:  setne  %al
08333920 +0x05e:  test   %al,%al
08333922 +0x060:  je     0833394f <+0x8d>
08333924 +0x062:  movl   $0x4,(%esp)
0833392b +0x069:  call   08725800 <__cxa_allocate_exception>
08333930 +0x06e:  mov    %eax,%edx
08333932 +0x070:  mov    -0x14(%ebp),%ecx
08333935 +0x073:  mov    %ecx,(%edx)
08333937 +0x075:  movl   $0x0,0x8(%esp)
0833393f +0x07d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
08333947 +0x085:  mov    %eax,(%esp)
0833394a +0x088:  call   08724c50 <__cxa_throw>
0833394f +0x08d:  mov    -0x100(%ebp),%eax
08333955 +0x093:  mov    %eax,%edx
08333957 +0x095:  mov    %edx,%eax
08333959 +0x097:  add    %eax,%eax
0833395b +0x099:  add    %edx,%eax
0833395d +0x09b:  shl    $0x2,%eax
08333960 +0x09e:  add    0x8(%ebp),%eax
08333963 +0x0a1:  mov    %eax,-0x10(%ebp)
08333966 +0x0a4:  mov    -0x10(%ebp),%eax
08333969 +0x0a7:  mov    %eax,0xc(%esp)
0833396d +0x0ab:  lea    -0x100(%ebp),%eax
08333973 +0x0b1:  mov    %eax,0x8(%esp)
08333977 +0x0b5:  mov    0xc(%ebp),%eax
0833397a +0x0b8:  mov    %eax,0x4(%esp)
0833397e +0x0bc:  mov    0x8(%ebp),%eax
08333981 +0x0bf:  mov    %eax,(%esp)
08333984 +0x0c2:  call   08332ee8 <_ZN8WongWork15CCompoundAvatar17_ProcCompoundCoreEP5CUserRNS0_15tagCompoundInfoEP22tagCompoundAvatarTable>  ; WongWork::CCompoundAvatar::_ProcCompoundCore(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo&, tagCompoundAvatarTable*)
08333989 +0x0c7:  mov    %eax,-0x14(%ebp)
0833398c +0x0ca:  cmpl   $0x0,-0x14(%ebp)
08333990 +0x0ce:  setne  %al
08333993 +0x0d1:  test   %al,%al
08333995 +0x0d3:  je     083339c2 <+0x100>
08333997 +0x0d5:  movl   $0x4,(%esp)
0833399e +0x0dc:  call   08725800 <__cxa_allocate_exception>
083339a3 +0x0e1:  mov    %eax,%edx
083339a5 +0x0e3:  mov    -0x14(%ebp),%ecx
083339a8 +0x0e6:  mov    %ecx,(%edx)
083339aa +0x0e8:  movl   $0x0,0x8(%esp)
083339b2 +0x0f0:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
083339ba +0x0f8:  mov    %eax,(%esp)
083339bd +0x0fb:  call   08724c50 <__cxa_throw>
083339c2 +0x100:  lea    -0x100(%ebp),%eax
083339c8 +0x106:  mov    %eax,0x8(%esp)
083339cc +0x10a:  mov    0xc(%ebp),%eax
083339cf +0x10d:  mov    %eax,0x4(%esp)
083339d3 +0x111:  mov    0x8(%ebp),%eax
083339d6 +0x114:  mov    %eax,(%esp)
083339d9 +0x117:  call   08333a9c <_ZN8WongWork15CCompoundAvatar11_SendResultEP5CUserRKNS0_15tagCompoundInfoE>  ; WongWork::CCompoundAvatar::_SendResult(CUser*, WongWork::CCompoundAvatar::tagCompoundInfo const&)
083339de +0x11c:  lea    -0x100(%ebp),%eax
083339e4 +0x122:  mov    %eax,0x4(%esp)
083339e8 +0x126:  mov    0x8(%ebp),%eax
083339eb +0x129:  mov    %eax,(%esp)
083339ee +0x12c:  call   08333ecc <_ZN8WongWork15CCompoundAvatar28_SendDisjointAvatarStatisticERNS0_15tagCompoundInfoE>  ; WongWork::CCompoundAvatar::_SendDisjointAvatarStatistic(WongWork::CCompoundAvatar::tagCompoundInfo&)
083339f3 +0x131:  jmp    08333a0d <+0x14b>
083339f5 +0x133:  mov    %edx,%ebx
083339f7 +0x135:  mov    %eax,%esi
083339f9 +0x137:  lea    -0x100(%ebp),%eax
083339ff +0x13d:  mov    %eax,(%esp)
08333a02 +0x140:  call   08334388 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x186>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x186
08333a07 +0x145:  mov    %esi,%eax
08333a09 +0x147:  mov    %ebx,%edx
08333a0b +0x149:  jmp    08333a1d <+0x15b>
08333a0d +0x14b:  lea    -0x100(%ebp),%eax
08333a13 +0x151:  mov    %eax,(%esp)
08333a16 +0x154:  call   08334388 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x186>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x186
08333a1b +0x159:  jmp    08333a6c <+0x1aa>
08333a1d +0x15b:  cmp    $0x1,%edx
08333a20 +0x15e:  je     08333a2a <+0x168>
08333a22 +0x160:  mov    %eax,(%esp)
08333a25 +0x163:  call   08ae3750 <_Unwind_Resume>
08333a2a +0x168:  mov    %eax,(%esp)
08333a2d +0x16b:  call   08725ce0 <__cxa_begin_catch>
08333a32 +0x170:  mov    (%eax),%eax
08333a34 +0x172:  mov    %eax,-0xc(%ebp)
08333a37 +0x175:  mov    -0xc(%ebp),%eax
08333a3a +0x178:  mov    %eax,0x8(%esp)
08333a3e +0x17c:  mov    0xc(%ebp),%eax
08333a41 +0x17f:  mov    %eax,0x4(%esp)
08333a45 +0x183:  mov    0x8(%ebp),%eax
08333a48 +0x186:  mov    %eax,(%esp)
08333a4b +0x189:  call   08333a76 <_ZN8WongWork15CCompoundAvatar10_SendErrorEP5CUser10ENUM_ERROR>  ; WongWork::CCompoundAvatar::_SendError(CUser*, ENUM_ERROR)
08333a50 +0x18e:  jmp    08333a67 <+0x1a5>
08333a52 +0x190:  mov    %edx,%ebx
08333a54 +0x192:  mov    %eax,%esi
08333a56 +0x194:  call   08725c30 <__cxa_end_catch>
08333a5b +0x199:  mov    %esi,%eax
08333a5d +0x19b:  mov    %ebx,%edx
08333a5f +0x19d:  mov    %eax,(%esp)
08333a62 +0x1a0:  call   08ae3750 <_Unwind_Resume>
08333a67 +0x1a5:  call   08725c30 <__cxa_end_catch>
08333a6c +0x1aa:  lea    -0x8(%ebp),%esp
08333a6f +0x1ad:  add    $0x0,%esp
08333a72 +0x1b0:  pop    %ebx
08333a73 +0x1b1:  pop    %esi
08333a74 +0x1b2:  pop    %ebp
08333a75 +0x1b3:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::ProcCompound @ 0x83338c2

/* WongWork::CCompoundAvatar::ProcCompound(CUser*, MSG_COMPOUND_AVATAR const*) */

void __thiscall
WongWork::CCompoundAvatar::ProcCompound
          (CCompoundAvatar *this,CUser *param_1,MSG_COMPOUND_AVATAR *param_2)

{
  int *piVar1;
  CUser *pCVar2;
  tagCompoundInfo *ptVar3;
  int local_104 [59];
  int local_18;
  tagCompoundAvatarTable *local_14;
  
                    /* try { // try from 083338eb to 083338ef has its CatchHandler @ 08333a1d */
  _MakeCompoundInfo((CUser *)local_104,(MSG_COMPOUND_AVATAR *)this);
  local_18 = 0;
  ptVar3 = (tagCompoundInfo *)local_104;
  pCVar2 = param_1;
                    /* try { // try from 08333911 to 083339f2 has its CatchHandler @ 083339f5 */
  local_18 = _CheckCondition(this,param_1,ptVar3);
  if (local_18 != 0) {
    piVar1 = (int *)__cxa_allocate_exception(4,pCVar2,ptVar3,param_2);
    *piVar1 = local_18;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar1,&ENUM_ERROR::typeinfo,0);
  }
  local_14 = (tagCompoundAvatarTable *)(this + local_104[0] * 0xc);
  local_18 = _ProcCompoundCore(this,param_1,(tagCompoundInfo *)local_104,local_14);
  if (local_18 != 0) {
    piVar1 = (int *)__cxa_allocate_exception(4);
    *piVar1 = local_18;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar1,&ENUM_ERROR::typeinfo,0);
  }
  _SendResult(this,param_1,(tagCompoundInfo *)local_104);
  _SendDisjointAvatarStatistic(this,(tagCompoundInfo *)local_104);
                    /* try { // try from 08333a16 to 08333a1a has its CatchHandler @ 08333a1d */
  tagCompoundInfo::~tagCompoundInfo((tagCompoundInfo *)local_104);
  return;
}
```
