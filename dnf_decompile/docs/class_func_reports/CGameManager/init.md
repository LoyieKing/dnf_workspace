# init

`_ZN12CGameManager4initEv`

`CGameManager::init()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x082941d8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082941d8  _ZN12CGameManager4initEv
#           CGameManager::init()
# range [0x082941d8, 0x0829424b]
082941d8 +0x00:  push   %ebp
082941d9 +0x01:  mov    %esp,%ebp
082941db +0x03:  push   %edi
082941dc +0x04:  push   %esi
082941dd +0x05:  push   %ebx
082941de +0x06:  sub    $0x1c,%esp
082941e1 +0x09:  movl   $0x6c,(%esp)
082941e8 +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082941ed +0x15:  mov    %eax,%ebx
082941ef +0x17:  mov    %ebx,%eax
082941f1 +0x19:  mov    %eax,(%esp)
082941f4 +0x1c:  call   080ebc40 <_ZN20CraneMinigameManagerC1Ev>  ; CraneMinigameManager::CraneMinigameManager()
082941f9 +0x21:  jmp    08294213 <+0x3b>
082941fb +0x23:  mov    %edx,%esi
082941fd +0x25:  mov    %eax,%edi
082941ff +0x27:  mov    %ebx,(%esp)
08294202 +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08294207 +0x2f:  mov    %edi,%eax
08294209 +0x31:  mov    %esi,%edx
0829420b +0x33:  mov    %eax,(%esp)
0829420e +0x36:  call   08ae3750 <_Unwind_Resume>
08294213 +0x3b:  mov    %ebx,%edx
08294215 +0x3d:  mov    0x8(%ebp),%eax
08294218 +0x40:  mov    %edx,0x318(%eax)
0829421e +0x46:  mov    0x8(%ebp),%eax
08294221 +0x49:  mov    %eax,(%esp)
08294224 +0x4c:  call   082990a6 <_ZN12CGameManager23GetCraneMinigameManagerEv>  ; CGameManager::GetCraneMinigameManager()
08294229 +0x51:  mov    %eax,(%esp)
0829422c +0x54:  call   080ebc6e <_ZN20CraneMinigameManager4initEv>  ; CraneMinigameManager::init()
08294231 +0x59:  xor    $0x1,%eax
08294234 +0x5c:  test   %al,%al
08294236 +0x5e:  je     0829423f <+0x67>
08294238 +0x60:  mov    $0x0,%eax
0829423d +0x65:  jmp    08294244 <+0x6c>
0829423f +0x67:  mov    $0x1,%eax
08294244 +0x6c:  add    $0x1c,%esp
08294247 +0x6f:  pop    %ebx
08294248 +0x70:  pop    %esi
08294249 +0x71:  pop    %edi
0829424a +0x72:  pop    %ebp
0829424b +0x73:  ret
```

## 反编译 C

```c
// CGameManager::init @ 0x82941d8

/* CGameManager::init() */

bool __thiscall CGameManager::init(CGameManager *this)

{
  char cVar1;
  CraneMinigameManager *pCVar2;
  
  pCVar2 = operator_new(0x6c);
                    /* try { // try from 082941f4 to 082941f8 has its CatchHandler @ 082941fb */
  CraneMinigameManager::CraneMinigameManager(pCVar2);
  *(CraneMinigameManager **)(this + 0x318) = pCVar2;
  pCVar2 = (CraneMinigameManager *)GetCraneMinigameManager(this);
  cVar1 = CraneMinigameManager::init(pCVar2);
  return cVar1 == '\x01';
}
```
