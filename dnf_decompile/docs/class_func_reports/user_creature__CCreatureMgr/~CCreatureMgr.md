# ~CCreatureMgr

`_ZN13user_creature12CCreatureMgrD1Ev`

`user_creature::CCreatureMgr::~CCreatureMgr()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339226` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339226  _ZN13user_creature12CCreatureMgrD1Ev
#           user_creature::CCreatureMgr::~CCreatureMgr()
# range [0x08339226, 0x0833926b]
08339226 +0x00:  push   %ebp
08339227 +0x01:  mov    %esp,%ebp
08339229 +0x03:  push   %esi
0833922a +0x04:  push   %ebx
0833922b +0x05:  sub    $0x10,%esp
0833922e +0x08:  mov    0x8(%ebp),%eax
08339231 +0x0b:  add    $0x30,%eax
08339234 +0x0e:  mov    %eax,(%esp)
08339237 +0x11:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
0833923c +0x16:  jmp    08339259 <+0x33>
0833923e +0x18:  mov    %edx,%ebx
08339240 +0x1a:  mov    %eax,%esi
08339242 +0x1c:  mov    0x8(%ebp),%eax
08339245 +0x1f:  mov    %eax,(%esp)
08339248 +0x22:  call   08340c90 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d5d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d5d
0833924d +0x27:  mov    %esi,%eax
0833924f +0x29:  mov    %ebx,%edx
08339251 +0x2b:  mov    %eax,(%esp)
08339254 +0x2e:  call   08ae3750 <_Unwind_Resume>
08339259 +0x33:  mov    0x8(%ebp),%eax
0833925c +0x36:  mov    %eax,(%esp)
0833925f +0x39:  call   08340c90 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x2d5d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x2d5d
08339264 +0x3e:  add    $0x10,%esp
08339267 +0x41:  pop    %ebx
08339268 +0x42:  pop    %esi
08339269 +0x43:  pop    %ebp
0833926a +0x44:  ret
0833926b +0x45:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::~CCreatureMgr @ 0x8339226

/* user_creature::CCreatureMgr::~CCreatureMgr() */

void __thiscall user_creature::CCreatureMgr::~CCreatureMgr(CCreatureMgr *this)

{
                    /* try { // try from 08339237 to 0833923b has its CatchHandler @ 0833923e */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  std::
  map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
  ::~map((map<int,user_creature::CCreatureItem*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureItem*>>>
          *)this);
  return;
}
```
