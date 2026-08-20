# CCreatureMgr

`_ZN13user_creature12CCreatureMgrC1Ev`

`user_creature::CCreatureMgr::CCreatureMgr()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339196  _ZN13user_creature12CCreatureMgrC1Ev
#           user_creature::CCreatureMgr::CCreatureMgr()
# range [0x08339196, 0x08339225]
08339196 +0x00:  push   %ebp
08339197 +0x01:  mov    %esp,%ebp
08339199 +0x03:  push   %esi
0833919a +0x04:  push   %ebx
0833919b +0x05:  sub    $0x10,%esp
0833919e +0x08:  mov    0x8(%ebp),%eax
083391a1 +0x0b:  mov    %eax,(%esp)
083391a4 +0x0e:  call   08342790 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x485d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x485d
083391a9 +0x13:  mov    0x8(%ebp),%eax
083391ac +0x16:  add    $0x20,%eax
083391af +0x19:  mov    %eax,%ebx
083391b1 +0x1b:  mov    $0x2,%esi
083391b6 +0x20:  jmp    083391c6 <+0x30>
083391b8 +0x22:  mov    %ebx,(%esp)
083391bb +0x25:  call   0833ef0c <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0xfd9>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0xfd9
083391c0 +0x2a:  add    $0x4,%ebx
083391c3 +0x2d:  sub    $0x1,%esi
083391c6 +0x30:  cmp    $0xffffffff,%esi
083391c9 +0x33:  setne  %al
083391cc +0x36:  test   %al,%al
083391ce +0x38:  jne    083391b8 <+0x22>
083391d0 +0x3a:  mov    0x8(%ebp),%eax
083391d3 +0x3d:  add    $0x30,%eax
083391d6 +0x40:  mov    %eax,(%esp)
083391d9 +0x43:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
083391de +0x48:  mov    0x8(%ebp),%eax
083391e1 +0x4b:  mov    %eax,(%esp)
083391e4 +0x4e:  call   0833a45a <_ZN13user_creature12CCreatureMgr5ResetEv>  ; user_creature::CCreatureMgr::Reset()
083391e9 +0x53:  jmp    0833921e <+0x88>
083391eb +0x55:  mov    %edx,%ebx
083391ed +0x57:  mov    %eax,%esi
083391ef +0x59:  mov    0x8(%ebp),%eax
083391f2 +0x5c:  add    $0x30,%eax
083391f5 +0x5f:  mov    %eax,(%esp)
083391f8 +0x62:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
083391fd +0x67:  mov    %esi,%eax
083391ff +0x69:  mov    %ebx,%edx
08339201 +0x6b:  jmp    08339203 <+0x6d>
08339203 +0x6d:  mov    %edx,%ebx
08339205 +0x6f:  mov    %eax,%esi
08339207 +0x71:  mov    0x8(%ebp),%eax
0833920a +0x74:  mov    %eax,(%esp)
0833920d +0x77:  call   08340c90 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d5d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d5d
08339212 +0x7c:  mov    %esi,%eax
08339214 +0x7e:  mov    %ebx,%edx
08339216 +0x80:  mov    %eax,(%esp)
08339219 +0x83:  call   08ae3750 <_Unwind_Resume>
0833921e +0x88:  add    $0x10,%esp
08339221 +0x8b:  pop    %ebx
08339222 +0x8c:  pop    %esi
08339223 +0x8d:  pop    %ebp
08339224 +0x8e:  ret
08339225 +0x8f:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::CCreatureMgr @ 0x8339196

/* user_creature::CCreatureMgr::CCreatureMgr() */

void __thiscall user_creature::CCreatureMgr::CCreatureMgr(CCreatureMgr *this)

{
  CArtifact *this_00;
  int iVar1;
  
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::map((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
         *)this);
  this_00 = (CArtifact *)(this + 0x20);
  for (iVar1 = 2; iVar1 != -1; iVar1 = iVar1 + -1) {
    CArtifact::CArtifact(this_00);
    this_00 = this_00 + 4;
  }
                    /* try { // try from 083391d9 to 083391dd has its CatchHandler @ 08339203 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
                    /* try { // try from 083391e4 to 083391e8 has its CatchHandler @ 083391eb */
  Reset(this);
  return;
}
```
