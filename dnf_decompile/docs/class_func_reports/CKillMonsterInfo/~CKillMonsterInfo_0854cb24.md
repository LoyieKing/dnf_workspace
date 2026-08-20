# ~CKillMonsterInfo

`_ZN16CKillMonsterInfoD0Ev`

`CKillMonsterInfo::~CKillMonsterInfo()`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854cb24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854cb24  _ZN16CKillMonsterInfoD0Ev
#           CKillMonsterInfo::~CKillMonsterInfo()
# range [0x0854cb24, 0x0854cb41]
0854cb24 +0x00:  push   %ebp
0854cb25 +0x01:  mov    %esp,%ebp
0854cb27 +0x03:  sub    $0x18,%esp
0854cb2a +0x06:  mov    0x8(%ebp),%eax
0854cb2d +0x09:  mov    %eax,(%esp)
0854cb30 +0x0c:  call   0854ca72 <_ZN16CKillMonsterInfoD1Ev>  ; CKillMonsterInfo::~CKillMonsterInfo()
0854cb35 +0x11:  mov    0x8(%ebp),%eax
0854cb38 +0x14:  mov    %eax,(%esp)
0854cb3b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0854cb40 +0x1c:  leave
0854cb41 +0x1d:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::~CKillMonsterInfo @ 0x854cb24

/* CKillMonsterInfo::~CKillMonsterInfo() */

void __thiscall CKillMonsterInfo::~CKillMonsterInfo(CKillMonsterInfo *this)

{
  ~CKillMonsterInfo(this);
  operator_delete(this);
  return;
}
```
